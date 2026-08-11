model TestLidarStandalone
  parameter Real m = 15.0 "Massa (kg)";
  parameter Real kd = 5.0 "Coefficiente di attrito";
  
  // Posizione iniziale: partiamo da x=10 e andiamo dritti verso il muro a x=20
  Real x(start=10.0, fixed=true), y(start=-5.0, fixed=true), z(start=0.0, fixed=true);
  Real vx(start=0.0, fixed=true), vy(start=0.0, fixed=true), vz(start=0.0, fixed=true);
  Real v_norm;
  
  // FIX CRASH: Invece di 'input', usiamo valori fissi per ingannare il Lidar
  // Mettiamo gli "altri droni" a coordinata 999, così il lidar non li rileva.
  parameter Integer drone_index = 1;
  parameter Real swarm_x[4] = {999.0, 999.0, 999.0, 999.0};
  parameter Real swarm_y[4] = {999.0, 999.0, 999.0, 999.0};
  parameter Real swarm_z[4] = {999.0, 999.0, 999.0, 999.0};
  
  // PARAMETRI LIDAR E CONTROLLO
  parameter Real T_ctrl = 0.05 "Ciclo del lidar (20 Hz)";
  parameter Integer grid_res = 11 "Risoluzione griglia Lidar (11x11x11)";
  parameter Real lidar_range = 10.0 "Raggio di scansione Lidar (m)";

  // LIMITI FISICI DELL'AREA DI PATTUGLIAMENTO (Il nostro recinto)
  parameter Real p_x_min = 0.0;
  parameter Real p_x_max = 20.0; // Questo è il muro contro cui andremo a sbattere
  parameter Real p_y_min = -10.0;
  parameter Real p_y_max = 0.0;
  parameter Real p_z_min = -10.0;
  parameter Real p_z_max = 10.0;

  discrete Real lidar_cloud[grid_res, grid_res, grid_res](each start=0.0, each fixed=true);
  discrete Real ai_ux(start=0.0, fixed=true);

  // --- FUNZIONE 1: SCANSIONE DEL LIDAR ---
  function scan_lidar
    input Real drone_x; input Real drone_y; input Real drone_z;
    input Real swarm_x[:]; input Real swarm_y[:]; input Real swarm_z[:];
    input Integer my_idx; input Integer res; input Real max_range;
    input Real x_min; input Real x_max; input Real y_min; input Real y_max; input Real z_min; input Real z_max;
    output Real cloud[res, res, res];
  protected
    Real rel_x; Real rel_y; Real rel_z; Integer idx_x; Integer idx_y; Integer idx_z;
    Real voxel_size; Real glob_x; Real glob_y; Real glob_z;
  algorithm
    cloud := fill(0.0, res, res, res);
    voxel_size := (2 * max_range) / res;
    
    // Mappatura Bordi (Muri Virtuali)
    for i in 1:res loop
      for j in 1:res loop
        for k in 1:res loop
          rel_x := -max_range + (i - 0.5) * voxel_size;
          rel_y := -max_range + (j - 0.5) * voxel_size;
          rel_z := -max_range + (k - 0.5) * voxel_size;
          
          glob_x := drone_x + rel_x; glob_y := drone_y + rel_y; glob_z := drone_z + rel_z;
          
          // Se il "raggio" del lidar esce dal recinto, segna ostacolo (1.0)
          if glob_x <= x_min or glob_x >= x_max or glob_y <= y_min or glob_y >= y_max or glob_z <= z_min or glob_z >= z_max then
            cloud[i, j, k] := 1.0;
          end if;
        end for;
      end for;
    end for;
  end scan_lidar;

  // --- FUNZIONE 2: STAMPA SU CONSOLE ---
  function print_lidar_slice
    input Real cloud[:,:,:];
    input Real current_time;
  protected
    String row_str;
    Integer mid_z;
  algorithm
    mid_z := integer(size(cloud, 3) / 2) + 1; 
    
    Modelica.Utilities.Streams.print("\n=== Lidar Scan al tempo t = " + String(current_time) + "s ===");
    Modelica.Utilities.Streams.print("Drone [O], Ostacolo (Muro) [#], Spazio Vuoto [.]");
    
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
      end for;
      Modelica.Utilities.Streams.print(row_str);
    end for;
  end print_lidar_slice;

equation
  // CICLO DEL CONTROLLORE
  when sample(0, T_ctrl) then
    // Genera la nuvola di punti
    lidar_cloud = scan_lidar(
        x, y, z, swarm_x, swarm_y, swarm_z, drone_index, 
        grid_res, lidar_range, p_x_min, p_x_max, p_y_min, p_y_max, p_z_min, p_z_max
    );
    
    // Spinta fissa verso il muro delle X (il muro a x=20)
    ai_ux = 30.0;
  end when;

  // STAMPA IN CONSOLE OGNI SECONDO
  when sample(0, 1.0) then
    print_lidar_slice(lidar_cloud, time);
  end when;

  // DINAMICA FISICA (Solo asse X per semplicità di test)
  v_norm = abs(vx);
  der(x) = vx;
  der(y) = 0.0;
  der(z) = 0.0;
  der(vx) = (ai_ux - kd * vx * v_norm) / m;
  der(vy) = 0.0;
  der(vz) = 0.0;

end TestLidarStandalone;
