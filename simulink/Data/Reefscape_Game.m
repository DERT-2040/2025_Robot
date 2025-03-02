%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% ELEVATOR
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

% Conversion from Motor Revolutions to Elevator Height
elevator_sprocket_diameter = 1.76;  % inches, pitch diameter
elevator_gear_ratio = 20;
Elevator_MotorRev_to_Inch = pi*elevator_sprocket_diameter/elevator_gear_ratio;
clear elevator_sprocket_diameter elevator_gear_ratio

% ELevator heights (inches)
Elevator_Height_Bottom  = 0;
Elevator_Height_Top     = 28;
Elevator_Height_Top_Reset = 28.125;
Elevator_Height_PickupLower_Reset = 6.8;

Elevator_Height_Prepare = 12.0;
Elevator_Height_Lower   = 6.0;
Elevator_Height_Raise   = 9.0;

Elevator_Height_L1      = 11;
Elevator_Height_L2      = 5.25+2;
Elevator_Height_L3      = 13.125+2;
Elevator_Height_L4      = 26.125;

Elevator_Height_Algae_Score = 2.5;
Elevator_Height_Algae_Low   = 11;
Elevator_Height_Algae_High  = 19;

% Closed loop control for elevator height
Elevator_Gain_Prop = 0.3;  % DC/inch
Elevator_Gain_Int = 0.02;  % DC/(inch*loops)
Elevator_Int_IC = 0;
Elevator_Int_UL = 0.1;
Elevator_Int_LL = -0.1;
Elevator_Total_UL = 1;    % DC
Elevator_Total_LL = -0.25;      % DC
Elevator_Hold_at_Top_DC = 0.1;  % DC
Elevator_Bottom_DC = -0.04;     % DC
Elevator_Error_Bottom_Disable = 3; % inches
Elevator_Error_Increase = 0.0;  % inches, increase error to force elevator up when we want to go lower but are not able to because of coral arm angle
Elevator_DC_Inc_RL = 1/0.3*0.02;  % duty cycle per loop

% State transition thresholds
Elevator_Height_Error_Threshold = 1.00; % inches
Elevator_LowerPickup_Time = 0.5;  % seconds

% Coral Time Of Flight (TOF) detection threshold to start lowering elevator
Coral_Detect_Distance       = 60; % mm

% Gamepad elevator and arm control gains
Elevator_Height_Manual_Gain = 0.1;

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% CORAL ARM
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

% Coral arm angles (degrees)
Coral_Arm_Angle_L1      = -15;
Coral_Arm_Angle_L2      = 50;
Coral_Arm_Angle_L3      = 50;
Coral_Arm_Angle_L4      = 50;
Coral_Arm_Angle_Up      = 85;
Coral_Arm_Angle_Start   = -15;
Coral_Arm_Angle_Start_Thresh = -75;  % angle must be greater than this value to proceed to the next state for elevator movement

% Closed loop control for coral arm
Coral_Arm_Gain_Prop = 0.01;  % DC/deg
Coral_Arm_Gain_Int = 0.001;  % DC/(deg*loops)
Coral_Arm_Int_IC = 0;
Coral_Arm_Int_UL = 0.05;
Coral_Arm_Int_LL = -0.05;
Coral_Arm_DC_Upper_Limit_Angle_In = [0 50 80];  % deg
Coral_Arm_DC_Upper_Limit_Out = [0.8 0.7 0.4]; % DC
Coral_Arm_DC_Lower_Limit_Angle_In = [-80 -40];  % deg
Coral_Arm_DC_Lower_Limit_Out = [-0.2 -0.5]; % DC
Coral_Arm_DC_Inc_RL = 1/0.3*0.02;  % duty cycle per loop

% State transition thresholds
Coral_Arm_Angle_Error_Threshold = 3;    % degrees

% Thresholds to bypass closed loop control and set a duty cycle
Coral_Arm_Angle_Neg_Threshold = -88;  % deg
Elevator_Height_Coral_Arm_Low_Thresh = 8.5;  % inch
Coral_Arm_Neg90_DC = -0.03;

% Gamepad elevator and arm control gains
Coral_Arm_Manual_Gain       = 0.4;

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% CORAL WHEEL
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

% Coral Wheel Duty Cycles
Coral_Motor_DC_Pickup = 0.1;
Coral_Motor_DC_Hold = 0.01;
Coral_Motor_DC_Eject = -0.65;

% Coral ejection time
Coral_Eject_Time = 0.5; % seconds

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% ALGAE WHEELS
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

% Algae Wheel Duty Cycles
Algae_Pull_In_DC = 1;
Algae_Hold_DC = 0.005;
Algae_Push_Out_DC = -0.3;

% Algae ejection time
Algae_Eject_Time = 1;  % seconds

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% ELEVATOR & CORAL RANGE OF MOTION CHECKS
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% elevator height lower limit vs. coral arm angle
% define dimensions
arm_length = 20.5;
arm_pivot_offset_x = 2.5;
arm_pivot_offset_y = 6.75;
m = 3/8;
b = -m*arm_pivot_offset_x;

% define vectors
angle_var = [-90:1:5]*pi/180;  % convert from degrees to radians
height_var = zeros(size(angle_var));

% calculate height based on angle
for k = 1:length(angle_var)
    height_var(k) = arm_length*(m*cos(angle_var(k)) - sin(angle_var(k))) + (m*arm_pivot_offset_x - arm_pivot_offset_y) + b;
end

% define lookup table for Simulink
Elevator_Height_Lower_Limit_Coral_Arm_Input = angle_var*180/pi;  % convert from radians to degrees
Elevator_Height_Lower_Limit_Out = 0.5*height_var;       % elevator height control is for middle stage which is half the height of carriage

% find index with maximum height value
index = find(ismember(height_var, max(height_var(:))));

% pull out values for angle vs. height lookup table and flip vectors
height_var2 = fliplr(height_var(index:end));
angle_var2 = fliplr(angle_var(index:end));
angle_var2(end) = -90*pi/180;  % set last point to -90 degrees

% define lookup table for Simulink
Coral_Arm_Lower_Limit_Elevator_Height_Input = 0.5*height_var2; % elevator height control is for middle stage which is half the height of carriage
Coral_Arm_Lower_Limit_Out = angle_var2*180/pi;  % convert from radians to degrees

clear arm_length arm_pivot_offset_x arm_pivot_offset_y m b k angle_var height_var index height_var2 angle_var2

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% APRIL TAG TRACKING TARGETS
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

Limelight_Tag_X_Offset = 0;     % inches
Limelight_Tag_Y_Offset = 0;     % inches
Limelight_Tag_Angle_Offset = 0; % degrees

AT_Reef_Target_Center_X = 27;   % inches, used for L1 scoring
AT_Reef_Target_Poles_X = 29;    % inches, used for L1, L2, L4 scoring

AT_Reef_Target_Left_Y = 5.5;    % inches
AT_Reef_Target_Center_Y = -1.0; % inches
AT_Reef_Target_Right_Y = -7.5;  % inches

