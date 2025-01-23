Elevator_Gain_Prop = 1/20;  % DC/inch
Elevator_Gain_Int = 0.001;  % DC/(inch*loops)
Elevator_Int_IC = 0;
Elevator_Int_UL = 0.1;
Elevator_Int_LL = -0.1;
Elevator_Total_UL = 0.2;    % DC
Elevator_Total_LL = -0.2;      % DC

elevator_sprocket_radius = 1;  % inches
elevator_gear_ratio = 20;
Elevator_MotorRev_to_Inch = 2*pi*elevator_sprocket_radius/elevator_gear_ratio;
clear elevator_sprocket_radius elevator_gear_ratio


% ELevator heights (inches)
Elevator_Height_L1 = 10;
Elevator_Height_L2 = 10;
Elevator_Height_L3 = 10;
Elevator_Height_L4 = 10;
Elevator_Height_Pickup = 10;

% Elevator Rate Limits (inch/loop)
Elevator_Height_RL_Inc = 12/3*0.02;
Elevator_Height_RL_Dec = -12/3*0.02;
