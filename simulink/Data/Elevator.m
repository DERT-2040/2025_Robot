Elevator_Gain_Prop = 1/20;  % DC/inch
Elevator_Gain_Int = 0.001;  % DC/(inch*loops)
Elevator_Int_IC = 0;
Elevator_Int_UL = 0.1;
Elevator_Int_LL = 0;
Elevator_Total_UL = 0.2;    % DC
Elevator_Total_LL = 0;      % DC

elevator_sprocket_radius = 1;  % inches
elevator_gear_ratio = 20;
Elevator_MotorRev_to_Inch = 2*pi*elevator_sprocket_radius/elevator_gear_ratio;
clear elevator_sprocket_radius elevator_gear_ratio
