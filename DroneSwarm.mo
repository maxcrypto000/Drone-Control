model DroneSwarm
  parameter Integer N = 4 "Numero di droni nello sciame";
  // Posizioni di partenza (dentro l'area di pattugliamento)
  parameter Real starts_x[N] = {15.0, 25.0, 25.0, 15.0};
  parameter Real starts_y[N] = {-9.0, -9.0, -9.0, -9.0};
  parameter Real starts_z[N] = {-5.0, -5.0, 5.0, 5.0};
  
  UnderwaterDrone drones[N](
    start_x = starts_x,
    start_y = starts_y,
    start_z = starts_z
  );
  
  Boolean is_failed[N] = fill(false, N);
  
  output Real pos_x[N];
  output Real pos_y[N];
  output Real pos_z[N];
  output Real bat_level[N];
  
  // Posizioni Stazioni di Ricarica
  parameter Real bases_x[N] = {0, 38.0, 38.0, 0};
  parameter Real bases_y[N] = {-10.0, -10.0, -10.0, -10.0};
  parameter Real bases_z[N] = {17.0, 17.0, -15.0, -15.0};
  
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
  
  // Stazioni di ricarica fisiche visibili (piattaforme verdi)
  Modelica.Mechanics.MultiBody.Visualizers.Advanced.Shape base_pad_1(
    shapeType="box", color={0, 255, 0}, length=1.0, width=1.0, height=0.2, 
    r_shape={bases_x[1], bases_y[1], bases_z[1]}, lengthDirection={1,0,0}, widthDirection={0,0,1}
  );
  Modelica.Mechanics.MultiBody.Visualizers.Advanced.Shape base_pad_2(
    shapeType="box", color={0, 255, 0}, length=1.0, width=1.0, height=0.2, 
    r_shape={bases_x[2], bases_y[2], bases_z[2]}, lengthDirection={1,0,0}, widthDirection={0,0,1}
  );
  Modelica.Mechanics.MultiBody.Visualizers.Advanced.Shape base_pad_3(
    shapeType="box", color={0, 255, 0}, length=1.0, width=1.0, height=0.2, 
    r_shape={bases_x[3], bases_y[3], bases_z[3]}, lengthDirection={1,0,0}, widthDirection={0,0,1}
  );
  Modelica.Mechanics.MultiBody.Visualizers.Advanced.Shape base_pad_4(
    shapeType="box", color={0, 255, 0}, length=1.0, width=1.0, height=0.2, 
    r_shape={bases_x[4], bases_y[4], bases_z[4]}, lengthDirection={1,0,0}, widthDirection={0,0,1}
  );

equation
  for i in 1:N loop
    // Esportazione uscite globali
    pos_x[i] = drones[i].x;
    pos_y[i] = drones[i].y;
    pos_z[i] = drones[i].z;
    bat_level[i] = drones[i].B;
    
    // Instradamento Messaggi: Trasmissione in broadcast verso i droni
    drones[i].swarm_x = pos_x;
    drones[i].swarm_y = pos_y;
    drones[i].swarm_z = pos_z;
    
    // Identificativi e segnali fisici
    drones[i].drone_index = i;
    drones[i].is_failed = is_failed[i];
    
    // Assegnazione Basi di Ricarica
    drones[i].base_x = bases_x[i];
    drones[i].base_y = bases_y[i];
    drones[i].base_z = bases_z[i];
  end for;
end DroneSwarm;
