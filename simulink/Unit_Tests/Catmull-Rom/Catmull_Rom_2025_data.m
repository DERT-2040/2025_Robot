%% Define Data
D2R = pi/180;

% Field Size 317 in. x 691 in.
field_width = 317 * 0.0254;
field_length = 691 * 0.0254;

Spline_Tension = 0.5;

% [x, y, velocity, angle]

% Blue
% Start:  Starting Line on Left
% Finish: Reef Face I-J
Path_Blue_Left_A = [
    7.582,  6.528,  3.5, -150  *D2R;  % robot centered on black line, robot center is 60.0 inches from wall
    6.899,  6.243,  3.5, -140  *D2R;
    6.273,  5.948,  2.75, -130  *D2R;
    5.682,  5.558,  0.5, -120  *D2R;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0];

% Blue
% Start:  Reef Face I-J
% Finish: Coral Left
Path_Blue_Left_B = [
    5.575,  5.575,  5.0, -120    *D2R;
    4.072,  6.241,  5.0,   -98     *D2R;
    2.629,  6.512,  3.0,   -76     *D2R;
    1.277,  6.857,  1.0,   -54     *D2R;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0];

% Blue
% Start:  Reef Face I-J
% Finish: Coral Left
Path_Blue_Left_B_end_early = [
    5.418,  5.613,  2.0, -120    *D2R;
    4.739,  6.453,  2.0,   -120    *D2R;
    2.485,  6.074,  2.0,   -54     *D2R;
    1.668,  6.453,  0.5,   -54     *D2R;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0];

% Blue
% Start:  Coral Left
% Finish: Reef Face L-K
Path_Blue_Left_C = [
    1.209,  6.940,  3.5, -54    *D2R;
    1.941,  6.507,  3.5,   -57    *D2R;
    2.633,  6.169,  3.5,   -60    *D2R;
    3.365,  5.828,  0.5,   -60    *D2R;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0];

% Blue
% Start:  Starting Line on Right
% Finish: Reef Face E-F
Path_Blue_Right_A = [
    7.582,  1.524,  Path_Blue_Left_A(1,3),  125  *D2R;
    6.806,  1.708,  Path_Blue_Left_A(2,3),  122  *D2R;
    6.039,  1.940,  Path_Blue_Left_A(3,3),  120  *D2R;
    5.312,  2.273,  Path_Blue_Left_A(4,3),  120  *D2R;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0];

% Blue
% Start:  Reef Face E-F
% Finish: Coral Right
Path_Blue_Right_B = [
    5.236,  2.221,  Path_Blue_Left_B(1,3),  -Path_Blue_Left_B(1,4);
    4.072,  1.811,  Path_Blue_Left_B(2,3),  -Path_Blue_Left_B(2,4);
    2.681,  1.490,  Path_Blue_Left_B(3,3),  -Path_Blue_Left_B(3,4);
    1.277,  1.195,  Path_Blue_Left_B(4,3),  -Path_Blue_Left_B(4,4);
    0,0,0,0;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0];

% Blue
% Start:  Reef Face E-F
% Finish: Coral Right
Path_Blue_Right_B_end_early = [
    Path_Blue_Left_B_end_early(1,1),  field_width-Path_Blue_Left_B_end_early(1,2),  Path_Blue_Left_B_end_early(1,3),  -Path_Blue_Left_B_end_early(1,4);
    Path_Blue_Left_B_end_early(2,1),  field_width-Path_Blue_Left_B_end_early(2,2),  Path_Blue_Left_B_end_early(2,3),  -Path_Blue_Left_B_end_early(2,4);
    Path_Blue_Left_B_end_early(3,1),  field_width-Path_Blue_Left_B_end_early(3,2),  Path_Blue_Left_B_end_early(3,3),  -Path_Blue_Left_B_end_early(3,4);
    Path_Blue_Left_B_end_early(4,1),  field_width-Path_Blue_Left_B_end_early(4,2),  Path_Blue_Left_B_end_early(4,3),  -Path_Blue_Left_B_end_early(4,4);
    0,0,0,0;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0];

% Blue
% Start:  Coral Right
% Finish: Reef Face C-D
Path_Blue_Right_C = [
    1.209,  1.112,  Path_Blue_Left_C(1,3),  -Path_Blue_Left_C(1,4);
    1.889,  1.541,  Path_Blue_Left_C(2,3),  -Path_Blue_Left_C(2,4);
    2.581,  1.975,  Path_Blue_Left_C(3,3),  -Path_Blue_Left_C(3,4);
    3.247,  2.339,  Path_Blue_Left_C(4,3),  -Path_Blue_Left_C(4,4);
    0,0,0,0;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0];

% Blue
% Start:  Starting Line on Center
% Finish: Reef Face G-H
Path_Blue_Center_A = [
    7.533,  field_width/2,  2.0, -180    *D2R;
    6.225,  field_width/2,  0.5,   -180    *D2R;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0];

% Blue
% Start:  Reef Face G-H
% Finish: Processor
Path_Blue_Center_B = [
    6.927,  field_width/2,  0.5, -180    *D2R;
    6.476,  2.921,          2,   -150    *D2R;
    6.161,  1.839,          2,   -120    *D2R;
    5.995,  0.712,          0,    -90    *D2R;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0];

% Red
% Start:  Starting Line on Right
% Finish: Reef Face E-F
Path_Red_Right_A = [
    field_length-Path_Blue_Right_A(1,1),  field_width-Path_Blue_Right_A(1,2),  Path_Blue_Right_A(1,3),  Path_Blue_Right_A(1,4)-pi;
    field_length-Path_Blue_Right_A(2,1),  field_width-Path_Blue_Right_A(2,2),  Path_Blue_Right_A(2,3),  Path_Blue_Right_A(2,4)-pi;
    field_length-Path_Blue_Right_A(3,1),  field_width-Path_Blue_Right_A(3,2),  Path_Blue_Right_A(3,3),  Path_Blue_Right_A(3,4)-pi;
    field_length-Path_Blue_Right_A(4,1),  field_width-Path_Blue_Right_A(4,2),  Path_Blue_Right_A(4,3),  Path_Blue_Right_A(4,4)-pi;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0];

% Red
% Start:  Reef Face E-F
% Finish: Coral Right
Path_Red_Right_B = [
    field_length-Path_Blue_Right_B(1,1),  field_width-Path_Blue_Right_B(1,2),  Path_Blue_Right_B(1,3),  Path_Blue_Right_B(1,4)-pi;
    field_length-Path_Blue_Right_B(2,1),  field_width-Path_Blue_Right_B(2,2),  Path_Blue_Right_B(2,3),  Path_Blue_Right_B(2,4)-pi;
    field_length-Path_Blue_Right_B(3,1),  field_width-Path_Blue_Right_B(3,2),  Path_Blue_Right_B(3,3),  Path_Blue_Right_B(3,4)-pi;
    field_length-Path_Blue_Right_B(4,1),  field_width-Path_Blue_Right_B(4,2),  Path_Blue_Right_B(4,3),  Path_Blue_Right_B(4,4)-pi;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0];

% Red
% Start:  Reef Face E-F
% Finish: Coral Right
Path_Red_Right_B_end_early = [
    field_length-Path_Blue_Right_B_end_early(1,1),  field_width-Path_Blue_Right_B_end_early(1,2),  Path_Blue_Right_B_end_early(1,3),  Path_Blue_Right_B_end_early(1,4)-pi;
    field_length-Path_Blue_Right_B_end_early(2,1),  field_width-Path_Blue_Right_B_end_early(2,2),  Path_Blue_Right_B_end_early(2,3),  Path_Blue_Right_B_end_early(2,4)-pi;
    field_length-Path_Blue_Right_B_end_early(3,1),  field_width-Path_Blue_Right_B_end_early(3,2),  Path_Blue_Right_B_end_early(3,3),  Path_Blue_Right_B_end_early(3,4)-pi;
    field_length-Path_Blue_Right_B_end_early(4,1),  field_width-Path_Blue_Right_B_end_early(4,2),  Path_Blue_Right_B_end_early(4,3),  Path_Blue_Right_B_end_early(4,4)-pi;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0];


% Red
% Start:  Coral Right
% Finish: Reef Face E-F
Path_Red_Right_C = [
    field_length-Path_Blue_Right_C(1,1),  field_width-Path_Blue_Right_C(1,2),  Path_Blue_Right_C(1,3),  Path_Blue_Right_C(1,4)-pi;
    field_length-Path_Blue_Right_C(2,1),  field_width-Path_Blue_Right_C(2,2),  Path_Blue_Right_C(2,3),  Path_Blue_Right_C(2,4)-pi;
    field_length-Path_Blue_Right_C(3,1),  field_width-Path_Blue_Right_C(3,2),  Path_Blue_Right_C(3,3),  Path_Blue_Right_C(3,4)-pi;
    field_length-Path_Blue_Right_C(4,1),  field_width-Path_Blue_Right_C(4,2),  Path_Blue_Right_C(4,3),  Path_Blue_Right_C(4,4)-pi;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0];

% Red
% Start:  Starting Line on Left
% Finish: Reef Face E-F
Path_Red_Left_A = [
    field_length-Path_Blue_Left_A(1,1),  field_width-Path_Blue_Left_A(1,2),  Path_Blue_Left_A(1,3),  Path_Blue_Left_A(1,4)+pi;
    field_length-Path_Blue_Left_A(2,1),  field_width-Path_Blue_Left_A(2,2),  Path_Blue_Left_A(2,3),  Path_Blue_Left_A(2,4)+pi;
    field_length-Path_Blue_Left_A(3,1),  field_width-Path_Blue_Left_A(3,2),  Path_Blue_Left_A(3,3),  Path_Blue_Left_A(3,4)+pi;
    field_length-Path_Blue_Left_A(4,1),  field_width-Path_Blue_Left_A(4,2),  Path_Blue_Left_A(4,3),  Path_Blue_Left_A(4,4)+pi;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0];

% Red
% Start:  Reef Face E-F
% Finish: Coral Left
Path_Red_Left_B = [
    field_length-Path_Blue_Left_B(1,1),  field_width-Path_Blue_Left_B(1,2),  Path_Blue_Left_B(1,3),  Path_Blue_Left_B(1,4)+pi;
    field_length-Path_Blue_Left_B(2,1),  field_width-Path_Blue_Left_B(2,2),  Path_Blue_Left_B(2,3),  Path_Blue_Left_B(2,4)+pi;
    field_length-Path_Blue_Left_B(3,1),  field_width-Path_Blue_Left_B(3,2),  Path_Blue_Left_B(3,3),  Path_Blue_Left_B(3,4)+pi;
    field_length-Path_Blue_Left_B(4,1),  field_width-Path_Blue_Left_B(4,2),  Path_Blue_Left_B(4,3),  Path_Blue_Left_B(4,4)+pi;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0];

% Red
% Start:  Reef Face E-F
% Finish: Coral Left
Path_Red_Left_B_end_early = [
    field_length-Path_Blue_Left_B_end_early(1,1),  field_width-Path_Blue_Left_B_end_early(1,2),  Path_Blue_Left_B_end_early(1,3),  Path_Blue_Left_B_end_early(1,4)+pi;
    field_length-Path_Blue_Left_B_end_early(2,1),  field_width-Path_Blue_Left_B_end_early(2,2),  Path_Blue_Left_B_end_early(2,3),  Path_Blue_Left_B_end_early(2,4)+pi;
    field_length-Path_Blue_Left_B_end_early(3,1),  field_width-Path_Blue_Left_B_end_early(3,2),  Path_Blue_Left_B_end_early(3,3),  Path_Blue_Left_B_end_early(3,4)+pi;
    field_length-Path_Blue_Left_B_end_early(4,1),  field_width-Path_Blue_Left_B_end_early(4,2),  Path_Blue_Left_B_end_early(4,3),  Path_Blue_Left_B_end_early(4,4)+pi;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0];


% Red
% Start:  Coral Left
% Finish: Reef Face E-F
Path_Red_Left_C = [
    field_length-Path_Blue_Left_C(1,1),  field_width-Path_Blue_Left_C(1,2),  Path_Blue_Left_C(1,3),  Path_Blue_Left_C(1,4)+pi;
    field_length-Path_Blue_Left_C(2,1),  field_width-Path_Blue_Left_C(2,2),  Path_Blue_Left_C(2,3),  Path_Blue_Left_C(2,4)+pi;
    field_length-Path_Blue_Left_C(3,1),  field_width-Path_Blue_Left_C(3,2),  Path_Blue_Left_C(3,3),  Path_Blue_Left_C(3,4)+pi;
    field_length-Path_Blue_Left_C(4,1),  field_width-Path_Blue_Left_C(4,2),  Path_Blue_Left_C(4,3),  Path_Blue_Left_C(4,4)+pi;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0];

% Red
% Start:  Starting Line on Center
% Finish: Reef Face G-H
Path_Red_Center_A = [
    field_length-Path_Blue_Center_A(1,1),  field_width-Path_Blue_Center_A(1,2),  Path_Blue_Center_A(1,3), Path_Blue_Center_A(1,4)+pi;
    field_length-Path_Blue_Center_A(2,1),  field_width-Path_Blue_Center_A(2,2),  Path_Blue_Center_A(2,3), Path_Blue_Center_A(1,4)+pi;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0];

% Red
% Start:  Reef Face G-H
% Finish: Starting Line on Center
Path_Red_Center_B = [
    field_length-Path_Blue_Center_B(1,1),  field_width-Path_Blue_Center_B(1,2),  Path_Blue_Center_B(1,3), Path_Blue_Center_B(1,4)+pi;
    field_length-Path_Blue_Center_B(2,1),  field_width-Path_Blue_Center_B(2,2),  Path_Blue_Center_B(2,3), Path_Blue_Center_B(2,4)+pi;
    field_length-Path_Blue_Center_B(3,1),  field_width-Path_Blue_Center_B(3,2),  Path_Blue_Center_B(3,3), Path_Blue_Center_B(3,4)+pi;
    field_length-Path_Blue_Center_B(4,1),  field_width-Path_Blue_Center_B(4,2),  Path_Blue_Center_B(4,3), Path_Blue_Center_B(4,4)+pi;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0];

%% Run simulation

% Create figure
figure(1), clf
subplot(2,1,1)
hold on

% Field
plot([0 0]*0.0254,[0 317.5]*0.0254,'k','LineWidth',3)
plot([0 297.7*2+95.9]*0.0254,[0 0]*0.0254,'k','LineWidth',3)
plot([0 297.7*2+95.9]*0.0254,[317.5 317.5]*0.0254,'k','LineWidth',3)
plot([297.7*2+95.9, 297.7*2+95.9]*0.0254,[0 317.5]*0.0254,'k','LineWidth',3)

plot([0, 65.276]*0.0254,[47.745, 0]*0.0254,'b','LineWidth',3)
plot([0, 65.276]*0.0254,[317.5-47.745, 317.5]*0.0254,'b','LineWidth',3)
plot([297.679*2 + 95.894 - 65.276, 297.679*2 + 95.894]*0.0254,[0, 47.745]*0.0254,'r','LineWidth',3)
plot([297.679*2 + 95.894 - 65.276, 297.679*2 + 95.894]*0.0254,[317.5, 317.5 - 47.745]*0.0254,'r','LineWidth',3)

plot([297.679, 297.679]*0.0254,[0, 317.5]*0.0254,'b','LineWidth',3)
plot([297.679+95.894, 297.679+95.894]*0.0254,[0, 317.5]*0.0254,'r','LineWidth',3)
plot([297.679+47.947, 297.679+47.947]*0.0254,[0, 317.5]*0.0254,'k','LineWidth',3)

plot([144 144 177 209 209 177 144]*0.0254,[139 177 196 177 139 120 139]*0.0254,'b','LineWidth',3)
plot((297.7*2+95.9)*0.0254-[144 144 177 209 209 177 144]*0.0254,[139 177 196 177 139 120 139]*0.0254,'r','LineWidth',3)

axis([-20*0.0254, (297.7*2+95.9+20)*0.0254, -20*0.0254, (317.5+20)*0.0254])
axis equal

subplot(2,2,3)
hold on
subplot(2,2,4)
hold on

test_cases = [8 16];

for m = 1:length(test_cases)

    k = test_cases(m);

    % Define data used by simulation
    if k == 1
        Spline_Ref_Poses = Path_Blue_Left_A;
        Spline_Num_Poses = 4;
    elseif  k == 2
        Spline_Ref_Poses = Path_Blue_Left_B;
        Spline_Num_Poses = 4;
    elseif  k == 3
        Spline_Ref_Poses = Path_Blue_Left_C;
        Spline_Num_Poses = 4;
    elseif  k == 4
        Spline_Ref_Poses = Path_Blue_Right_A;
        Spline_Num_Poses = 4;
    elseif  k == 5
        Spline_Ref_Poses = Path_Blue_Right_B;
        Spline_Num_Poses = 4;
    elseif  k == 6
        Spline_Ref_Poses = Path_Blue_Right_C;
        Spline_Num_Poses = 4;
    elseif  k == 7
        Spline_Ref_Poses = Path_Blue_Center_A;
        Spline_Num_Poses = 2;
    elseif  k == 8
        Spline_Ref_Poses = Path_Blue_Center_B;
        Spline_Num_Poses = 4;
    elseif  k == 9
        Spline_Ref_Poses = Path_Red_Right_A;
        Spline_Num_Poses = 4;
    elseif  k == 10
        Spline_Ref_Poses = Path_Red_Right_B;
        Spline_Num_Poses = 4;
    elseif  k == 11
        Spline_Ref_Poses = Path_Red_Right_C;
        Spline_Num_Poses = 4;
    elseif  k == 12
        Spline_Ref_Poses = Path_Red_Left_A;
        Spline_Num_Poses = 4;
    elseif  k == 13
        Spline_Ref_Poses = Path_Red_Left_B;
        Spline_Num_Poses = 4;
    elseif  k == 14
        Spline_Ref_Poses = Path_Red_Left_C;
        Spline_Num_Poses = 4;
    elseif  k == 15
        Spline_Ref_Poses = Path_Red_Center_A;
        Spline_Num_Poses = 2;
    elseif  k == 16
        Spline_Ref_Poses = Path_Red_Center_B;
        Spline_Num_Poses = 4;
    end

    % Initial conditions
    sim_IC_x = Spline_Ref_Poses(1,1);
    sim_IC_y = Spline_Ref_Poses(1,2);

    % clear prior simulation data
    clear out

    % run simulation model and assign results to 'out'
    out = sim('Catmull_Rom_2025');


    %% Plot Results
    clear plot_X plot_Y plot_Velocity plot_Field_Angle plot_Distance

    plot_X(:) = out.Sim_X.signals.values;
    plot_Y(:) = out.Sim_Y.signals.values;
    plot_Velocity(:) = out.Sim_Velocity.signals.values;
    plot_Field_Angle(:) = out.Sim_Field_Angle.signals.values;
    plot_Distance(:) = out.Sim_Distance.signals.values;

    subplot(2,1,1)
    plot(plot_X,plot_Y)

    subplot(2,2,3)
    plot(plot_Distance,plot_Velocity)

    subplot(2,2,4)
    plot(plot_Distance,plot_Field_Angle)

end

subplot(2,1,1)
axis equal
grid on
xlabel('X (m)')
ylabel('Y (m)')

subplot(2,2,3)
grid on
xlabel('Distance Traveled')
ylabel('Velocity (m/s)')

subplot(2,2,4)
grid on
xlabel('Distance Traveled')
ylabel('Field Angle (deg)')

