% Parameters to exclude from being tunable.
% This is used in the 'Build_Extern.m' file
Not_Tunable_List = {'t_sample',...
    'Distance_FL_x','Distance_FL_y','Distance_FR_x','Distance_FR_y',...
    'Distance_BL_x','Distance_BL_y','Distance_BR_x','Distance_BR_y',...
    'Wheel_Speed_to_Motor_Speed','Motor_Rev_to_Wheel_Distance','Drive_Wheel_Max_Speed',...
    'KF_Odom_Covariance','KF_Vision_Covariance',...
    'Spline_Num_Samples','Spline_Num_Samples_3x','Spline_Samples_Per_Pass',...
    'Spline_Max_Num_RefPoses','Spline_Tension',...
    'Spline_Velocity_Axis','Spline_Capture_Radius','Spline_Lookahead_Dist',...
    'Spline_Num_Poses_default','Spline_Ref_Poses_default',...
    'Elevator_Height_Lower_Limit_Coral_Arm_Input','Elevator_Height_Lower_Limit_Out',...
    'Coral_Arm_Lower_Limit_Elevator_Height_Input','Coral_Arm_Lower_Limit_Out',...
    'Coral_Arm_DC_Upper_Limit_Angle_In','Coral_Arm_DC_Upper_Limit_Out',...
    'Coral_Arm_DC_Lower_Limit_Angle_In','Coral_Arm_DC_Lower_Limit_Out',...
    'All_Paths_Ref_Poses','All_Paths_Num_Poses'...
};

% sample time model
t_sample = 0.020;

% gyro calibration
Gyro_Calibration_Default = 180; % degrees
Gyro_Calibration_Auto_Left = 210;
Gyro_Calibration_Auto_Center = 180;
Gyro_Calibration_Auto_Right = 125;
Gyro_Calibration_Reset_Flag = 0;  % when this value increases then reset the degree value


% Test Mode for swerve drive
% Setting override to 1 will use constants for translation and steering modes
TEST_Swerve_Mode_Override_Flag = 0;
TEST_Swerve_Mode_Translation = 0; 
TEST_Swerve_Mode_Steering = 0;

% Test Mode for CANdle
TEST_CANdle_Flag = 0;   % change to non-zero to enable the below ID value
TEST_CANdle_LED_ID = 0; % ID value used in C++ code to change the light pattern

%% Run data scripts
Swerve_Drive
Odometry_and_Kalman_Filter
Spline_Path_Following
April_Tag_Data
Reefscape_Game
Reefscape_Auto_Control
Reefscape_Auto_Paths


