model UnderwaterDrone
  // Parametri di base
  parameter Real m = 15.0 "Massa (kg)";
  parameter Real kd = 5.0 "Coefficiente di attrito quadratico dell'acqua";
  parameter Real c1 = 0.5 "Consumo base (elettronica)";
  parameter Real c2 = 0.1 "Fattore di consumo proporzionale allo sforzo dei motori";
  
  // Variabili di stato (Cinematica ed Energia)
  Real x(start=0.0), y(start=0.0), z(start=0.0) "Coordinate spaziali (m)";
  Real vx(start=0.0), vy(start=0.0), vz(start=0.0) "Velocità sui tre assi (m/s)";
  Real v_norm "Modulo della velocità assoluta";
  Real B(start=100.0) "Livello batteria (%)";
  
  // INPUT DAL CONTROLLORE (Il codice C)
  input Real ux "Comando di spinta asse X richiesto dal C";
  input Real uy "Comando di spinta asse Y richiesto dal C";
  input Real uz "Comando di spinta asse Z richiesto dal C";
  input Boolean is_failed "Segnale di avaria hardware (True = motori guasti)";
  
  // Variabili interne per la logica hardware
  Boolean is_active "Stato vitale del drone (True se ha batteria e non è guasto)";
  Real ux_eff, uy_eff, uz_eff "Spinta EFFETTIVA erogata dai motori";
  
  // Animazione 3D del Drone
  Modelica.Mechanics.MultiBody.Visualizers.Advanced.Shape drone_vis(
    shapeType="sphere",
    color={255, 50, 50}, // Colore rosso per distinguerli facilmente
    length=1.5, width=1.5, height=1.5,
    r={x, y, z}
  );
  
equation
  // 1. VINCOLI HARDWARE: Il drone è vivo solo se ha energia e non è guasto
  is_active = (B > 0.0) and (not is_failed);
  
  // Se è vivo esegue i comandi del C, altrimenti i motori erogano 0 Newton
  ux_eff = if is_active then ux else 0.0;
  uy_eff = if is_active then uy else 0.0;
  uz_eff = if is_active then uz else 0.0;

  // 2. DINAMICA FISICA (Usa le spinte effettive, non quelle richieste)
  v_norm = sqrt(vx^2 + vy^2 + vz^2);
  
  der(x) = vx;
  der(y) = vy;
  der(z) = vz;
  
  der(vx) = (ux_eff - kd * vx * v_norm) / m;
  der(vy) = (uy_eff - kd * vy * v_norm) / m;
  der(vz) = (uz_eff - kd * vz * v_norm) / m;
  
  // 3. CONSUMO BATTERIA: Se B scende a 0, il consumo si ferma per non avere energia negativa
  der(B) = if B > 0.0 then -c1 - c2 * (abs(ux_eff) + abs(uy_eff) + abs(uz_eff)) else 0.0;
  
end UnderwaterDrone;