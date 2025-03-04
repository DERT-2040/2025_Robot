%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% APRIL TAG TRACKING TARGETS
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

Limelight_Tag_X_Offset = -0.65;    % inches
Limelight_Tag_Y_Offset = 0.21;     % inches
Limelight_Tag_Angle_Offset = -0.2; % degrees

AT_Reef_Target_L1_X = 26.75;    % inches
AT_Reef_Target_L2_L3_X = 26.25; % inches
AT_Reef_Target_L4_X = 27.50;    % inches

AT_Reef_Target_Left_Y = 5.5;    % inches
AT_Reef_Target_Center_Y = -2.5; % inches
AT_Reef_Target_Right_Y = -7.5;  % inches


%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% April Tag locations, dimensions in inches
% https://firstfrc.blob.core.windows.net/frc2025/FieldAssets/2025FieldDrawings-FieldLayoutAndMarking.pdf
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

% ID    X       Y       Z       Rotation
% 1     657.37  25.80   58.50   126°     Red L Coral Station
% 2     657.37  291.20  58.50   234°     Red R Coral Station
% 3     455.15  317.15  51.25   270°     Blue Algae Processor
% 4     365.20  241.64  73.54   0°       0 Angle Blue Barge
% 5     365.20  75.39   73.54   0°       0 Angle Red Barge
% 6     530.49  130.17  12.13   300° ---------------------     
% 7     546.87  158.50  12.13   0°     
% 8     530.49  186.83  12.13   60°         (BLUE)
% 9     497.77  186.83  12.13   120°      CORAL REEF
% 10    481.39  158.50  12.13   180°
% 11    497.77  130.17  12.13   240° ---------------------  
% 12    33.51   25.80   58.50   54°      Blue R Coral Station
% 13    33.51   291.20  58.50   306°     Blue L Coral Station
% 14    325.68  241.64  73.54   180°     180 Angle Blue Barge
% 15    325.68  75.39   73.54   180°     180 Angle Red Barge
% 16    235.73  -0.15   51.25   90°      Red Algae Processor
% 17    160.39  130.17  12.13   240° ---------------------
% 18    144.00  158.50  12.13   180°
% 19    160.39  186.83  12.13   120°        (RED)
% 20    193.10  186.83  12.13   60°       CORAL REEF
% 21    209.49  158.50  12.13   0°
% 22    193.10  130.17  12.13   300° ---------------------

AT_Data = [...
    657.37  25.80   58.50   126;
    657.37  291.20  58.50   234;
    455.15  317.15  51.25   270;
    365.20  241.64  73.54   0;
    365.20  75.39   73.54   0;
    530.49  130.17  12.13   300;
    546.87  158.50  12.13   0;
    530.49  186.83  12.13   60;
    497.77  186.83  12.13   120;
    481.39  158.50  12.13   180;
    497.77  130.17  12.13   240;
    33.51   25.80   58.50   54;
    33.51   291.20  58.50   306;
    325.68  241.64  73.54   180;
    325.68  75.39   73.54   180;
    235.73  -0.15   51.25   90;
    160.39  130.17  12.13   240;
    144.00  158.50  12.13   180;
    160.39  186.83  12.13   120;
    193.10  186.83  12.13   60;
    209.49  158.50  12.13   0;
    193.10  130.17  12.13   300;
    ];

%%%%%%%%%%%%%%%%%%%%%%%%%%
% CORAL STATIONS
%%%%%%%%%%%%%%%%%%%%%%%%%%
d_offset = 20; % inches

tag = 13;
angle = AT_Data(tag,4)*pi/180;
temp = AT_Data(tag,1:2)' + [cos(angle), -sin(angle); sin(angle), cos(angle)]*[d_offset; 0];
AT_CS_L_X_Blue = temp(1)*0.0254; % convert from inches to meters
AT_CS_L_Y_Blue = temp(2)*0.0254; % convert from inches to meters
AT_CS_L_Angle_Blue = angle;

tag = 1;
angle = AT_Data(tag,4)*pi/180;
temp = AT_Data(tag,1:2)' + [cos(angle), -sin(angle); sin(angle), cos(angle)]*[d_offset; 0];
AT_CS_L_X_Red = temp(1)*0.0254; % convert from inches to meters
AT_CS_L_Y_Red = temp(2)*0.0254; % convert from inches to meters
AT_CS_L_Angle_Red = angle - pi;  % subtract pi radians for Red Alliance

tag = 12;
angle = AT_Data(tag,4)*pi/180;
temp = AT_Data(tag,1:2)' + [cos(angle), -sin(angle); sin(angle), cos(angle)]*[d_offset; 0];
AT_CS_R_X_Blue = temp(1)*0.0254; % convert from inches to meters
AT_CS_R_Y_Blue = temp(2)*0.0254; % convert from inches to meters
AT_CS_R_Angle_Blue = angle;

tag = 2;
angle = AT_Data(tag,4)*pi/180;
temp = AT_Data(tag,1:2)' + [cos(angle), -sin(angle); sin(angle), cos(angle)]*[d_offset; 0];
AT_CS_R_X_Red = temp(1)*0.0254; % convert from inches to meters
AT_CS_R_Y_Red = temp(2)*0.0254; % convert from inches to meters
AT_CS_R_Angle_Red = angle - pi;  % subtract pi radians for Red Alliance

%%%%%%%%%%%%%%%%%%%%%%%%%%
% PROCESSORS
%%%%%%%%%%%%%%%%%%%%%%%%%%
d_offset = 25; % inches

tag = 3;
angle = AT_Data(tag,4)*pi/180;
temp = AT_Data(tag,1:2)' + [cos(angle), -sin(angle); sin(angle), cos(angle)]*[d_offset; 0];
AT_Processor_X_Blue = temp(1)*0.0254; % convert from inches to meters
AT_Processor_Y_Blue = temp(2)*0.0254; % convert from inches to meters
AT_Processor_Angle_Blue = angle;

tag = 16;
angle = AT_Data(tag,4)*pi/180;
temp = AT_Data(tag,1:2)' + [cos(angle), -sin(angle); sin(angle), cos(angle)]*[d_offset; 0];
AT_Processor_X_Red = temp(1)*0.0254; % convert from inches to meters
AT_Processor_Y_Red = temp(2)*0.0254; % convert from inches to meters
AT_Processor_Angle_Red = angle - pi;  % subtract pi radians for Red Alliance

%%%%%%%%%%%%%%%%%%%%%%%%%%
% CAGES
%%%%%%%%%%%%%%%%%%%%%%%%%%
cage_offset_middle = 1.26;
cage_offset_left = cage_offset_middle + 42.9375;
cage_offset_right = cage_offset_middle - 42.9375;


% start offset
d_offset = 10; % inches

tag = 4;
angle = AT_Data(tag,4)*pi/180;
temp = AT_Data(tag,1:2)' + [cos(angle), -sin(angle); sin(angle), cos(angle)]*[d_offset; cage_offset_left];
AT_Cage_L_Start_X_Blue = temp(1)*0.0254; % convert from inches to meters
AT_Cage_L_Start_Y_Blue = temp(2)*0.0254; % convert from inches to meters
AT_Cage_L_Start_Angle_Blue = angle;

tag = 15;
angle = AT_Data(tag,4)*pi/180;
temp = AT_Data(tag,1:2)' + [cos(angle), -sin(angle); sin(angle), cos(angle)]*[d_offset; cage_offset_left];
AT_Cage_L_Start_X_Red = temp(1)*0.0254; % convert from inches to meters
AT_Cage_L_Start_Y_Red = temp(2)*0.0254; % convert from inches to meters
AT_Cage_L_Start_Angle_Red = angle - pi;  % subtract pi radians for Red Alliance

tag = 4;
angle = AT_Data(tag,4)*pi/180;
temp = AT_Data(tag,1:2)' + [cos(angle), -sin(angle); sin(angle), cos(angle)]*[d_offset; cage_offset_middle];
AT_Cage_M_Start_X_Blue = temp(1)*0.0254; % convert from inches to meters
AT_Cage_M_Start_Y_Blue = temp(2)*0.0254; % convert from inches to meters
AT_Cage_M_Start_Angle_Blue = angle;

tag = 15;
angle = AT_Data(tag,4)*pi/180;
temp = AT_Data(tag,1:2)' + [cos(angle), -sin(angle); sin(angle), cos(angle)]*[d_offset; cage_offset_middle];
AT_Cage_M_Start_X_Red = temp(1)*0.0254; % convert from inches to meters
AT_Cage_M_Start_Y_Red = temp(2)*0.0254; % convert from inches to meters
AT_Cage_M_Start_Angle_Red = angle - pi;  % subtract pi radians for Red Alliance

tag = 4;
angle = AT_Data(tag,4)*pi/180;
temp = AT_Data(tag,1:2)' + [cos(angle), -sin(angle); sin(angle), cos(angle)]*[d_offset; cage_offset_right];
AT_Cage_R_Start_X_Blue = temp(1)*0.0254; % convert from inches to meters
AT_Cage_R_Start_Y_Blue = temp(2)*0.0254; % convert from inches to meters
AT_Cage_R_Start_Angle_Blue = angle;

tag = 15;
angle = AT_Data(tag,4)*pi/180;
temp = AT_Data(tag,1:2)' + [cos(angle), -sin(angle); sin(angle), cos(angle)]*[d_offset; cage_offset_right];
AT_Cage_R_Start_X_Red = temp(1)*0.0254; % convert from inches to meters
AT_Cage_R_Start_Y_Red = temp(2)*0.0254; % convert from inches to meters
AT_Cage_R_Start_Angle_Red = angle - pi;  % subtract pi radians for Red Alliance


% finish offset
d_offset = -20; % inches

tag = 4;
angle = AT_Data(tag,4)*pi/180;
temp = AT_Data(tag,1:2)' + [cos(angle), -sin(angle); sin(angle), cos(angle)]*[d_offset; cage_offset_left];
AT_Cage_L_Finish_X_Blue = temp(1)*0.0254; % convert from inches to meters
AT_Cage_L_Finish_Y_Blue = temp(2)*0.0254; % convert from inches to meters
AT_Cage_L_Finish_Angle_Blue = angle;

tag = 15;
angle = AT_Data(tag,4)*pi/180;
temp = AT_Data(tag,1:2)' + [cos(angle), -sin(angle); sin(angle), cos(angle)]*[d_offset; cage_offset_left];
AT_Cage_L_Finish_X_Red = temp(1)*0.0254; % convert from inches to meters
AT_Cage_L_Finish_Y_Red = temp(2)*0.0254; % convert from inches to meters
AT_Cage_L_Finish_Angle_Red = angle - pi;  % subtract pi radians for Red Alliance

tag = 4;
angle = AT_Data(tag,4)*pi/180;
temp = AT_Data(tag,1:2)' + [cos(angle), -sin(angle); sin(angle), cos(angle)]*[d_offset; cage_offset_middle];
AT_Cage_M_Finish_X_Blue = temp(1)*0.0254; % convert from inches to meters
AT_Cage_M_Finish_Y_Blue = temp(2)*0.0254; % convert from inches to meters
AT_Cage_M_Finish_Angle_Blue = angle;

tag = 15;
angle = AT_Data(tag,4)*pi/180;
temp = AT_Data(tag,1:2)' + [cos(angle), -sin(angle); sin(angle), cos(angle)]*[d_offset; cage_offset_middle];
AT_Cage_M_Finish_X_Red = temp(1)*0.0254; % convert from inches to meters
AT_Cage_M_Finish_Y_Red = temp(2)*0.0254; % convert from inches to meters
AT_Cage_M_Finish_Angle_Red = angle - pi;  % subtract pi radians for Red Alliance

tag = 4;
angle = AT_Data(tag,4)*pi/180;
temp = AT_Data(tag,1:2)' + [cos(angle), -sin(angle); sin(angle), cos(angle)]*[d_offset; cage_offset_right];
AT_Cage_R_Finish_X_Blue = temp(1)*0.0254; % convert from inches to meters
AT_Cage_R_Finish_Y_Blue = temp(2)*0.0254; % convert from inches to meters
AT_Cage_R_Finish_Angle_Blue = angle;

tag = 15;
angle = AT_Data(tag,4)*pi/180;
temp = AT_Data(tag,1:2)' + [cos(angle), -sin(angle); sin(angle), cos(angle)]*[d_offset; cage_offset_right];
AT_Cage_R_Finish_X_Red = temp(1)*0.0254; % convert from inches to meters
AT_Cage_R_Finish_Y_Red = temp(2)*0.0254; % convert from inches to meters
AT_Cage_R_Finish_Angle_Red = angle - pi;  % subtract pi radians for Red Alliance


clear AT_Data clear d_offset tag angle temp 
clear cage_offset_middle cage_offset_left cage_offset_right


