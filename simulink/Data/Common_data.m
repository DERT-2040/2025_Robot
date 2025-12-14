%% Wheel Locations from Center of Rotation
% distances between swerve modules
FrontBack = (20.000 - 0.125 - 2*2.625)*0.0254;  % meters
LeftRight = (20.000 - 0.125 - 2*2.625)*0.0254;  % meters

% swerve module distances from center to x and y coordinates
% Front Left
Distance_FL_x = FrontBack/2;
Distance_FL_y = LeftRight/2;

% Front Right
Distance_FR_x = FrontBack/2;
Distance_FR_y = -LeftRight/2;

% Back Left
Distance_BL_x = -FrontBack/2;
Distance_BL_y = LeftRight/2;

% Back Right
Distance_BR_x = -FrontBack/2;
Distance_BR_y = -LeftRight/2;

clear FrontBack LeftRight

%% Wheel Gear Ratio
gear_ratio = 6.12;  % L1 gear ratio = 8.14,  L3 gear ratio = 6.12
wheel_diameter = 3.80*0.0254;
Wheel_Speed_to_Motor_Speed = 60*gear_ratio/(wheel_diameter*pi); % (rev/min)/(m/sec)

Drive_Motor_Max_Speed = 6200; % rpm  (also used below for PID feedforward gain)
Drive_Wheel_Max_Speed = Drive_Motor_Max_Speed/Wheel_Speed_to_Motor_Speed; % m/sec

% used for odometry
Motor_Rev_to_Wheel_Distance = wheel_diameter*pi/gear_ratio; % m/rev

clear gear_ratio wheel_diameter adjustment_factor
