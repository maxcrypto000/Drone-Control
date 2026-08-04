model UnderwaterDrone
  parameter Integer N = 4 "Numero totale di droni";
  parameter Real m = 15.0 "Massa (kg)";
  parameter Real kd = 5.0 "Coefficiente di attrito quadratico dell'acqua";
  parameter Real c1 = 0.5 "Consumo base (elettronica)";
  parameter Real c2 = 0.1 "Fattore di consumo proporzionale allo sforzo dei motori";
  
  parameter Real start_x = 0.0;
  parameter Real start_y = 0.0;
  parameter Real start_z = 0.0;
  
  // Variabili di stato
  Real x(start=start_x, fixed=true), y(start=start_y, fixed=true), z(start=start_z, fixed=true);
  Real vx(start=0.0, fixed=true), vy(start=0.0, fixed=true), vz(start=0.0, fixed=true);
  Real v_norm;
  Real B(start=100.0, fixed=true);
  
  // MESSAGGI IN INGRESSO DALLA RETE
  input Integer drone_index "Indice di questo drone (1..N)";
  input Real swarm_x[N];
  input Real swarm_y[N];
  input Real swarm_z[N];
  input Boolean is_failed "Segnale di avaria hardware";
  input Real base_x "Coordinata X stazione ricarica assegnata";
  input Real base_y "Coordinata Y stazione ricarica assegnata";
  input Real base_z "Coordinata Z stazione ricarica assegnata";
  
  parameter Real R_base = 2.0 "Raggio di ricarica (m)";
  parameter Real charge_rate = 10.0 "Velocità di ricarica (%/s)";

  // Oggetto 3D per l'animazione (sfera rossa)
  Modelica.Mechanics.MultiBody.Visualizers.Advanced.Shape drone_shape(
    shapeType="sphere", color={255, 0, 0}, length=1.0, width=1.0, height=1.0, r_shape={x, y, z}
  );

  // MEMORIA INTERNA (Pacchetti di rete ricevuti)
  discrete Real known_swarm_x[N](start=fill(0.0, N), each fixed=true);
  discrete Real known_swarm_y[N](start=fill(0.0, N), each fixed=true);
  discrete Real known_swarm_z[N](start=fill(0.0, N), each fixed=true);
  discrete Real ai_ux(start=0.0, fixed=true), ai_uy(start=0.0, fixed=true), ai_uz(start=0.0, fixed=true);
  discrete Real min_dist(start=9999.0, fixed=true);
  discrete Boolean is_returning(start=false, fixed=true);
  discrete Real target_x(start=20.0, fixed=true);
  discrete Real target_y(start=-9.0, fixed=true);
  discrete Real target_z(start=10.0, fixed=true);
  // Variabili hardware
  Boolean is_active;
  Real ux_eff, uy_eff, uz_eff;
  Real dist_to_base;
  Boolean is_charging;
  
  // Funzione C esterna (Il Cervello)
  function get_ai_thrust
    input Real x; 
    input Real y; 
    input Real z; 
    input Real bat; 
    input Real min_dist; 
    input Real drone_id;
    input Real delta_x;
    input Real delta_y;
    input Real delta_z;
    input Real current_time;
    output Real ux; 
    output Real uy; 
    output Real uz;
    external "C" get_ai_thrust(x, y, z, bat, min_dist, drone_id, delta_x, delta_y, delta_z, current_time, ux, uy, uz) 
    annotation(Include="#include \"c:/Users/maxbu/Desktop/uni/Verifica e validazione s/progetto/controllore/src/ai_controller.c\"");
  end get_ai_thrust;

  function check_packet_loss
    input Real time_val;
    input Real drone_id;
    input Real drop_prob;
    output Integer is_dropped;
    external "C" is_dropped = check_packet_loss(time_val, drone_id, drop_prob)
    annotation(Include="#include \"c:/Users/maxbu/Desktop/uni/Verifica e validazione s/progetto/controllore/src/ai_controller.c\"");
  end check_packet_loss;

  // Funzione calcolo distanza
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
  

  Real discharge_rate;
  Real net_charge;
equation
  // CICLO DI RETE E DECISIONALE (Gira a 2 Hz / ogni 0.5s)
  when sample(0, 0.5) then
    // 1. Ricezione dei pacchetti di rete (Aggiornamento cache con Packet Loss 20%)
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
    
    // 2. Calcolo distanza minima basata sui pacchetti ritardati
    min_dist = calculate_min_dist(known_swarm_x, known_swarm_y, known_swarm_z, drone_index);
    
    // 3. Logica Ritorno alla Base DISABILITATA
    // (Per ora vogliamo che i droni imparino solo a pattugliare l'area senza fuggire quando si scaricano)
    is_returning = false;

    target_x = 20.0; // Centro area pattugliamento (X: 10..30)
    target_y = -9.0; // Centro area pattugliamento (Y: -10..-8)
    target_z = 10.0; // Centro area pattugliamento (Z: 0..20)
    
    // 4. Elaborazione della Rete Neurale
    // NOTA: il drone usa la SUA VERA POSIZIONE (x,y,z) e ID, ma la distanza in base ai pacchetti
    // Passiamo il vettore verso il target corrente (Base o Pattugliamento) per semplificare l'addestramento
    (ai_ux, ai_uy, ai_uz) = get_ai_thrust(x, y, z, B, min_dist, (drone_index - 1) / (N - 1), target_x - x, target_y - y, target_z - z, time);
  end when;

  // DINAMICA CONTINUA Aggiungi (B > 0.0) and  dopo 
  is_active = (not is_failed);
  
  // Le spinte applicate sono quelle decise all'ultimo tick di rete (Zero-Order Hold)
  ux_eff = if is_active then ai_ux else 0.0;
  uy_eff = if is_active then ai_uy else 0.0;
  uz_eff = if is_active then ai_uz else 0.0;

  v_norm = sqrt(vx^2 + vy^2 + vz^2);
  
  dist_to_base = sqrt((x - base_x)^2 + (y - base_y)^2 + (z - base_z)^2);
  is_charging = dist_to_base < R_base;
  
  der(x) = vx;
  der(y) = vy;
  der(z) = vz;
  
  der(vx) = (ux_eff - kd * vx * v_norm) / m;
  der(vy) = (uy_eff - kd * vy * v_norm) / m;
  der(vz) = (uz_eff - kd * vz * v_norm) / m;
  
  discharge_rate = c1 + c2 * (abs(ux_eff) + abs(uy_eff) + abs(uz_eff));
  net_charge = charge_rate - discharge_rate;
  
  der(B) = if is_charging then
             (if noEvent(B >= 100.0) and net_charge > 0 then 0.0 else net_charge)
           else
             (if noEvent(B <= 0.0) then 0.0 else -discharge_rate);
end UnderwaterDrone;
