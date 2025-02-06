% Conversion from Motor Revolutions to Elevator Height
elevator_sprocket_diameter = 1.76;  % inches, pitch diameter
elevator_gear_ratio = 20;
Elevator_MotorRev_to_Inch = pi*elevator_sprocket_diameter/elevator_gear_ratio;
clear elevator_sprocket_diameter elevator_gear_ratio

% ELevator heights (inches)
Elevator_Height_Bottom  = 0;
Elevator_Height_Top     = 28;

Elevator_Height_Prepare = 7.00;
Elevator_Height_Lower   = 5.00;
Elevator_Height_Raise   = 7.00;

Elevator_Height_L1      = 13.00;
Elevator_Height_L2      = 5.25;
Elevator_Height_L3      = 13.125;
Elevator_Height_L4      = 26.125;

% Coral arm angles (degrees)
Coral_Arm_Angle_L1      = -65;
Coral_Arm_Angle_L2      = 42;
Coral_Arm_Angle_L3      = 42;
Coral_Arm_Angle_L4      = 45;

% Closed loop control for elevator height
Elevator_Gain_Prop = 0.3;  % DC/inch
Elevator_Gain_Int = 0.02;  % DC/(inch*loops)
Elevator_Int_IC = 0;
Elevator_Int_UL = 0.1;
Elevator_Int_LL = -0.1;
Elevator_Total_UL = 1.0;    % DC
Elevator_Total_LL = -0.4;      % DC
Elevator_Hold_at_Top_DC = 0.01;  % DC
Elevator_Error_Bottom_Disable = 3; % inches

% Closed loop control for coral arm
Coral_Arm_Gain_Prop = 0.1;  % DC/deg
Coral_Arm_Gain_Int = 0.01;  % DC/(deg*loops)
Coral_Arm_Int_IC = 0;
Coral_Arm_Int_UL = 0.1;
Coral_Arm_Int_LL = -0.1;
Coral_Arm_Total_UL = 1.0;    % DC
Coral_Arm_Total_LL = -1.0;      % DC

% Coral Wheel Control
Coral_Motor_DC_Pickup = 0.1;
Coral_Motor_DC_Hold = 0.01;
Coral_Motor_DC_Eject = -0.1;

% State transition error thresholds
Elevator_Height_Error_Threshold = 1.00; % inches
Coral_Arm_Angle_Error_Threshold = 1;    % degrees

% Gamepad elevator and arm control gains
Elevator_Height_Manual_Gain = 0;
Coral_Arm_Manual_Gain       = 0;

% Coral specific parameters
Coral_Detect_Distance       = 100; % mm
Coral_Eject_Time            = 1; % seconds


