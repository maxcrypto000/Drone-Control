model UnderwaterDrone2
  parameter Integer N = 4 "Numero totale di droni";
  parameter Real m = 15.0 "Massa (kg)";
  parameter Real kd = 5.0 "Coefficiente di attrito quadratico dell'acqua";
  
  parameter Real start_x = 0.0;
  parameter Real start_y = -5.0; // Messo a -5 per essere a metà fondale, lontano dal tetto/fondo
  parameter Real start_z = 0.0;
  
  // Variabili di stato
  Real x(start=start_x, fixed=true), y(start=start_y, fixed=true), z(start=start_z, fixed=true);
  Real vx(start=0.0, fixed=true), vy(start=0.0, fixed=true), vz(start=0.0, fixed=true);
  Real v_norm;
  
  // MESSAGGI IN INGRESSO DALLA RETE
  input Integer drone_index "Indice di questo drone (1..N)";
  input Real swarm_x[N];
  input Real swarm_y[N];
  input Real swarm_z[N];
  
  // PARAMETRI LIDAR E CONTROLLO
  parameter Real T_ctrl = 0.001 "Tempo di ciclo del controllore e del lidar (s)";
  parameter Integer grid_res = 11 "Risoluzione griglia Lidar (es. 11x11x11)";
  parameter Real lidar_range = 10.0 "Raggio di scansione Lidar (m)";

  // LIMITI FISICI DELL'AREA DI PATTUGLIAMENTO
  parameter Real p_x_min = 0.0;
  parameter Real p_x_max = 20.0;
  parameter Real p_y_min = -10.0 "Fondale";
  parameter Real p_y_max = 0.0   "Superficie";
  parameter Real p_z_min = -10.0;
  parameter Real p_z_max = 10.0;

  // Oggetti 3D Animazione
  Modelica.Mechanics.MultiBody.Visualizers.Advanced.Shape drone_shape(
    shapeType="sphere", color={255, 0, 0}, length=1.0, width=1.0, height=1.0, r_shape={x, y, z}
  );
  Modelica.Mechanics.MultiBody.Visualizers.Advanced.Shape patrol_area(
    shapeType="box", color={255, 255, 0}, length=20.0, width=20.0, height=0.1, 
    r_shape={10, -10.0, 0}, lengthDirection={1,0,0}, widthDirection={0,0,1}
  );

  // MEMORIA INTERNA E LIDAR
  discrete Real known_swarm_x[N](start=fill(0.0, N), each fixed=true);
  discrete Real known_swarm_y[N](start=fill(0.0, N), each fixed=true);
  discrete Real known_swarm_z[N](start=fill(0.0, N), each fixed=true);
  
  discrete Real lidar_cloud[grid_res, grid_res, grid_res](each start=0.0, each fixed=true);
  
  discrete Real ai_ux(start=0.0, fixed=true), ai_uy(start=0.0, fixed=true), ai_uz(start=0.0, fixed=true);
  discrete Real min_dist(start=9999.0, fixed=true);
  
  // Funzione C esterna (Il Cervello) - Lasciata dichiarata ma non chiamata
  function get_ai_thrust
    input Real x; 
    input Real y; 
    input Real z; 
    input Real known_x[4];
    input Real known_y[4];
    input Real known_z[4];
    input Real lidar_grid[:,:,:]; 
    input Real drone_id;
    input Real current_time;
    output Real ux; 
    output Real uy; 
    output Real uz;
    external "C" get_ai_thrust(x, y, z, known_x, known_y, known_z, lidar_grid, drone_id, current_time, ux, uy, uz) 
    annotation(Include="#include \"c:/Users/maxbu/Desktop/uni/Verifica e validazione s/progetto/controllore/src/ai_controller.c\"");
  end get_ai_thrust;

  // Simulazione Rete
  function check_packet_loss
    input Real time_val;
    input Real drone_id;
    input Real drop_prob;
    output Integer is_dropped;
    external "C" is_dropped = check_packet_loss(time_val, drone_id, drop_prob)
    annotation(Include="#include \"c:/Users/maxbu/Desktop/uni/Verifica e validazione s/progetto/controllore/src/ai_controller.c\"");
  end check_packet_loss;

  // Funzione Lidar
  function scan_lidar
    input Real drone_x;
    input Real drone_y;
    input Real drone_z;
    input Real swarm_x[:];
    input Real swarm_y[:];
    input Real swarm_z[:];
    input Integer my_idx;
    input Integer res;
    input Real max_range;
    input Real x_min; input Real x_max;
    input Real y_min; input Real y_max;
    input Real z_min; input Real z_max;
    output Real cloud[res, res, res];
  protected
    Real rel_x; Real rel_y; Real rel_z;
    Integer idx_x; Integer idx_y; Integer idx_z;
    Real voxel_size;
    Real glob_x; Real glob_y; Real glob_z;
  algorithm
    cloud := fill(0.0, res, res, res);
    voxel_size := (2 * max_range) / res;
    
    // 1. Mappatura Bordi (Muri Virtuali)
    for i in 1:res loop
      for j in 1:res loop
        for k in 1:res loop
          rel_x := -max_range + (i - 0.5) * voxel_size;
          rel_y := -max_range + (j - 0.5) * voxel_size;
          rel_z := -max_range + (k - 0.5) * voxel_size;
          
          glob_x := drone_x + rel_x;
          glob_y := drone_y + rel_y;
          glob_z := drone_z + rel_z;
          
          if glob_x <= x_min or glob_x >= x_max or 
             glob_y <= y_min or glob_y >= y_max or 
             glob_z <= z_min or glob_z >= z_max then
            cloud[i, j, k] := 1.0;
          end if;
        end for;
      end for;
    end for;

    // 2. Mappatura Droni
    for j in 1:size(swarm_x, 1) loop
      if j <> my_idx then
        rel_x := swarm_x[j] - drone_x;
        rel_y := swarm_y[j] - drone_y;
        rel_z := swarm_z[j] - drone_z;
        
        if abs(rel_x) <= max_range and abs(rel_y) <= max_range and abs(rel_z) <= max_range then
          idx_x := integer(floor((rel_x + max_range) / (2 * max_range) * (res - 1))) + 1;
          idx_y := integer(floor((rel_y + max_range) / (2 * max_range) * (res - 1))) + 1;
          idx_z := integer(floor((rel_z + max_range) / (2 * max_range) * (res - 1))) + 1;
          
          idx_x := max(1, min(res, idx_x));
          idx_y := max(1, min(res, idx_y));
          idx_z := max(1, min(res, idx_z));
          
          cloud[idx_x, idx_y, idx_z] := 1.0;
        end if;
      end if;
    end for;
  end scan_lidar;

  // Funzione per visualizzare il Lidar in stile ASCII Art nella Console
  function print_lidar_slice
    input Real cloud[:,:,:];
    input Real current_time;
  protected
    String row_str;
    Integer mid_z;
  algorithm
    mid_z := integer(size(cloud, 3) / 2) + 1; // Fetta centrale asse Z
    
    Modelica.Utilities.Streams.print("\n=== Lidar Scan al tempo t = " + String(current_time) + "s ===");
    Modelica.Utilities.Streams.print("Drone al centro [O], Ostacolo [#], Spazio vuoto [.]");
    
    for i in 1:size(cloud, 1) loop
      row_str := "";
      for j in 1:size(cloud, 2) loop
        if (i == mid_z) and (j == mid_z) then
          row_str := row_str + " [O] ";
        elseif cloud[size(cloud, 1) - i + 1, j, mid_z] > 0.5 then
          row_str := row_str + " [#] ";
        else
          row_str := row_str + "  .  ";
        end if;
      end for; // <-- IL PROBLEMA ERA QUI: avevo scritto "end loop;" invece di "end for;"
      Modelica.Utilities.Streams.print(row_str);
    end for;
    Modelica.Utilities.Streams.print("=========================================\n");
  end print_lidar_slice;

  // Distanza per eventuale calcolo (mantenuta per compatibilità)
  function calculate_min_dist
    input Real x[:];
    input Real y[:];
    input Real z[:];
    input Integer target_idx;
    output Real min_d;
  algorithm
    min_d := 9999.0;
    for j in 1:size(x, 1) loop
      if j <> target_idx then
        min_d := min(min_d, sqrt((x[target_idx]-x[j])^2 + (y[target_idx]-y[j])^2 + (z[target_idx]-z[j])^2));
      end if;
    end for;
  end calculate_min_dist;
  
equation
  // CICLO DEL CONTROLLORE E LIDAR (gira ogni T_ctrl)
  when sample(0, T_ctrl) then
    // Ricezione dati vicini (con Packet Loss) - Mantenuta per coerenza
    for j in 1:N loop
      if check_packet_loss(time, drone_index, 0.2) == 0 or time <= 0.01 then
        known_swarm_x[j] = swarm_x[j];
        known_swarm_y[j] = swarm_y[j];
        known_swarm_z[j] = swarm_z[j];
      else
        known_swarm_x[j] = pre(known_swarm_x[j]);
        known_swarm_y[j] = pre(known_swarm_y[j]);
        known_swarm_z[j] = pre(known_swarm_z[j]);
      end if;
    end for;
    
    min_dist = calculate_min_dist(known_swarm_x, known_swarm_y, known_swarm_z, drone_index);
    
    // 1. Aggiornamento Matrice Lidar
    lidar_cloud = scan_lidar(
        x, y, z, swarm_x, swarm_y, swarm_z, drone_index, 
        grid_res, lidar_range, 
        p_x_min, p_x_max, p_y_min, p_y_max, p_z_min, p_z_max
    );
    
    // 2. DISABILITIAMO TEMPORANEAMENTE LA RETE C PER IL TEST
    /*
    (ai_ux, ai_uy, ai_uz) = get_ai_thrust(
        x, y, z, known_swarm_x, known_swarm_y, known_swarm_z, 
        lidar_cloud, (drone_index - 1) / (N - 1), time
    );
    */
    
    // 3. SPINTA MANUALE PER TEST
    // 30 Newton costanti verso l'asse X positivo (verso il muro a x=20)
    ai_ux = 30.0;
    ai_uy = 0.0;
    ai_uz = 0.0;
  end when;

  // CICLO DI DEBUG: Stampa il Lidar in console ogni secondo
  when sample(0, 1.0) then
    print_lidar_slice(lidar_cloud, time);
  end when;

  // DINAMICA CONTINUA
  v_norm = sqrt(vx^2 + vy^2 + vz^2);
  
  der(x) = vx;
  der(y) = vy;
  der(z) = vz;
  
  der(vx) = (ai_ux - kd * vx * v_norm) / m;
  der(vy) = (ai_uy - kd * vy * v_norm) / m;
  der(vz) = (ai_uz - kd * vz * v_norm) / m;
end UnderwaterDrone2;
