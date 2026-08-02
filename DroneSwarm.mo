model DroneSwarm
  parameter Integer N = 4 "Numero di droni nello sciame";
  
  // Istanzio l'array dei droni fisici
  UnderwaterDrone drones[N];
  
  // Nessun ingresso globale di spinta, ora è autonomo!
  // I guasti li teniamo falsi per default nella simulazione autonoma
  Boolean is_failed[N] = fill(false, N);
  
  // USCITE GLOBALI (I sensori)
  output Real pos_x[N];
  output Real pos_y[N];
  output Real pos_z[N];
  output Real bat_level[N];
  
  // Variabili interne per la logica AI
  Real min_dist[N];
  Real ai_ux[N];
  Real ai_uy[N];
  Real ai_uz[N];
  Real drone_ids[N];
  
  // Animazione 3D dell'Ambiente (Superficie dell'acqua e fondale)
  Modelica.Mechanics.MultiBody.Visualizers.Advanced.Shape sea_surface(
    shapeType="box", color={0, 150, 255}, 
    length=40.0, width=40.0, height=0.1, r={-20.0, -20.0, 0.0}
  );
  Modelica.Mechanics.MultiBody.Visualizers.Advanced.Shape sea_floor(
    shapeType="box", color={100, 100, 100}, 
    length=40.0, width=40.0, height=0.1, r={-20.0, -20.0, -10.1}
  );
  
  // 1. Definizione della funzione C esterna (Path Assoluto per evitare problemi con OpenModelica)
  function get_ai_thrust
    input Real x; 
    input Real y; 
    input Real z; 
    input Real bat; 
    input Real min_dist; 
    input Real drone_id;
    output Real ux; 
    output Real uy; 
    output Real uz;
    external "C" get_ai_thrust(x, y, z, bat, min_dist, drone_id, ux, uy, uz) 
    annotation(Include="#include \"c:/Users/maxbu/Desktop/uni/Verifica e validazione s/progetto/controllore/src/ai_controller.c\"");
  end get_ai_thrust;

  // 2. Funzione Modelica per calcolare la distanza minima dal vicino
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
  for i in 1:N loop
    // ID normalizzato per la rete (0.0, 0.33, 0.66, 1.0)
    drone_ids[i] = (i - 1) / (N - 1);
    
    // Aggiornamento uscite globali
    pos_x[i] = drones[i].x;
    pos_y[i] = drones[i].y;
    pos_z[i] = drones[i].z;
    bat_level[i] = drones[i].B;

    // Calcolo distanza minima e chiamata alla rete neurale
    min_dist[i] = calculate_min_dist(pos_x, pos_y, pos_z, i);
    (ai_ux[i], ai_uy[i], ai_uz[i]) = get_ai_thrust(pos_x[i], pos_y[i], pos_z[i], bat_level[i], min_dist[i], drone_ids[i]);
    
    // Invio dei comandi ai droni fisici
    drones[i].ux = ai_ux[i];
    drones[i].uy = ai_uy[i];
    drones[i].uz = ai_uz[i];
    drones[i].is_failed = is_failed[i];
  end for;
end DroneSwarm;