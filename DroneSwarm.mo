model DroneSwarm
  parameter Integer N = 4 "Numero di droni nello sciame";
  // Posizioni di partenza (dentro l'area di pattugliamento X:0-20, Y:-10-0, Z:-10-10)
  parameter Real starts_x[N] = {5.0, 15.0, 15.0, 5.0};
  parameter Real starts_y[N] = {-9.0, -9.0, -9.0, -9.0};
  parameter Real starts_z[N] = {-5.0, -5.0, 5.0, 5.0};
  
  UnderwaterDrone drones[N](
    start_x = starts_x,
    start_y = starts_y,
    start_z = starts_z
  );
  
  output Real pos_x[N];
  output Real pos_y[N];
  output Real pos_z[N];
  
  // Ambiente 3D
  inner Modelica.Mechanics.MultiBody.World world(gravityType=Modelica.Mechanics.MultiBody.Types.GravityTypes.NoGravity);

  // Fondale
  Modelica.Mechanics.MultiBody.Visualizers.Advanced.Shape sea_floor(
    shapeType="box", color={100, 100, 100}, length=40.0, width=40.0, height=0.1, 
    r_shape={0, -10.1, 0}, lengthDirection={1,0,0}, widthDirection={0,0,1}
  );

  // Area di pattugliamento (Gialla sul fondale)
  Modelica.Mechanics.MultiBody.Visualizers.Advanced.Shape patrol_area(
    shapeType="box", color={255, 255, 0}, length=20.0, width=20.0, height=0.1, 
    r_shape={10, -10.0, 0}, lengthDirection={1,0,0}, widthDirection={0,0,1}
  );
  
equation
  for i in 1:N loop
    // Esportazione uscite globali
    pos_x[i] = drones[i].x;
    pos_y[i] = drones[i].y;
    pos_z[i] = drones[i].z;
    
    // Instradamento Messaggi: Trasmissione in broadcast verso i droni
    drones[i].swarm_x = pos_x;
    drones[i].swarm_y = pos_y;
    drones[i].swarm_z = pos_z;
    
    // Identificativi e segnali fisici
    drones[i].drone_index = i;
  end for;
end DroneSwarm;
