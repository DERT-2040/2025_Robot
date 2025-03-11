%% Define Data
D2R = pi/180;

% Field Size 317 in. x 691 in.
width = 317 * 0.0254;
length = 691 * .0254;

Spline_Tension = 0.5;

% [x, y, velocity, angle]

% Blue
% Start:  Starting Line on Left
% Finish: Reef Face I-J
Path_Blue_Left_A = [
    7.564,  6.512,  0.5,  -180  *D2R;
    6.652,  6.401,  1,  -167    *D2R;
    5.985,  6.140,  1,  -145    *D2R;
    5.418,  5.613,  0,  -120    *D2R;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0];
Spline_Num_Poses = 4;

% Blue
% Start:  Reef Face I-J
% Finish: Coral Left
Path_Blue_Left_B = [
    5.418,  5.613,  0.5, -120    *D2R;
    4.739,  6.453,  1,   -120    *D2R;
    1.950,  6.209,  1,   -54     *D2R;
    1.209,  6.940,  0,   -54     *D2R;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0];
Spline_Num_Poses = 4;

% Blue
% Start:  Coral Left
% Finish: Reef Face L-K
Path_Blue_Left_C = [
    1.209,  6.940,  0.5, -54    *D2R;
    2.226,  6.559,  1,   -57    *D2R;
    3.258,  6.042,  1,   -60    *D2R;
    3.610,  5.551,  0,   -60    *D2R;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0];
Spline_Num_Poses = 4;

% Blue
% Start:  Reef Face L-K
% Finish: Coral Left
Path_Blue_Left_D = [
    3.610,  5.551,  0.5, -60    *D2R;
    3.171,  6.130,  1,   -60    *D2R;
    2.129,  6.419,  1,   -57    *D2R;
    1.256,  6.872,  0,   -54    *D2R;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0];
Spline_Num_Poses = 4;

% Blue
% Start:  Starting Line on Right
% Finish: Reef Face E-F
Path_Blue_Right_A = [
    Path_Blue_Left_A(1,1),  width-Path_Blue_Left_A(1,2),  Path_Blue_Left_A(1,3),  -Path_Blue_Left_A(1,4);
    Path_Blue_Left_A(2,1),  width-Path_Blue_Left_A(2,2),  Path_Blue_Left_A(2,3),  -Path_Blue_Left_A(2,4);
    Path_Blue_Left_A(3,1),  width-Path_Blue_Left_A(3,2),  Path_Blue_Left_A(3,3),  -Path_Blue_Left_A(3,4);
    Path_Blue_Left_A(4,1),  width-Path_Blue_Left_A(4,2),  Path_Blue_Left_A(4,3),  -Path_Blue_Left_A(4,4);
    0,0,0,0;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0];
Spline_Num_Poses = 4;

% Blue
% Start:  Reef Face E-F
% Finish: Coral Right
Path_Blue_Right_B = [
    Path_Blue_Left_B(1,1),  width-Path_Blue_Left_B(1,2),  Path_Blue_Left_B(1,3),  -Path_Blue_Left_B(1,4);
    Path_Blue_Left_B(2,1),  width-Path_Blue_Left_B(2,2),  Path_Blue_Left_B(2,3),  -Path_Blue_Left_B(2,4);
    Path_Blue_Left_B(3,1),  width-Path_Blue_Left_B(3,2),  Path_Blue_Left_B(3,3),  -Path_Blue_Left_B(3,4);
    Path_Blue_Left_B(4,1),  width-Path_Blue_Left_B(4,2),  Path_Blue_Left_B(4,3),  -Path_Blue_Left_B(4,4);
    0,0,0,0;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0];
Spline_Num_Poses = 4;

% Blue
% Start:  Coral Right
% Finish: Reef Face C-D
Path_Blue_Right_C = [
    Path_Blue_Left_C(1,1),  width-Path_Blue_Left_C(1,2),  Path_Blue_Left_C(1,3),  -Path_Blue_Left_C(1,4);
    Path_Blue_Left_C(2,1),  width-Path_Blue_Left_C(2,2),  Path_Blue_Left_C(2,3),  -Path_Blue_Left_C(2,4);
    Path_Blue_Left_C(3,1),  width-Path_Blue_Left_C(3,2),  Path_Blue_Left_C(3,3),  -Path_Blue_Left_C(3,4);
    Path_Blue_Left_C(4,1),  width-Path_Blue_Left_C(4,2),  Path_Blue_Left_C(4,3),  -Path_Blue_Left_C(4,4);
    0,0,0,0;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0];
Spline_Num_Poses = 4;

% Blue
% Start:  Reef Face C-D
% Finish: Coral Right
Path_Blue_Right_D = [
    Path_Blue_Left_D(1,1),  width-Path_Blue_Left_D(1,2),  Path_Blue_Left_D(1,3),  -Path_Blue_Left_D(1,4);
    Path_Blue_Left_D(2,1),  width-Path_Blue_Left_D(2,2),  Path_Blue_Left_D(2,3),  -Path_Blue_Left_D(2,4);
    Path_Blue_Left_D(3,1),  width-Path_Blue_Left_D(3,2),  Path_Blue_Left_D(3,3),  -Path_Blue_Left_D(3,4);
    Path_Blue_Left_D(4,1),  width-Path_Blue_Left_D(4,2),  Path_Blue_Left_D(4,3),  -Path_Blue_Left_D(4,4);
    0,0,0,0;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0];
Spline_Num_Poses = 4;

% Blue
% Start:  Starting Line on Center
% Finish: Reef Face G-H
Path_Blue_Center_A = [
    7.533,  3.981,  0.5, -180    *D2R;
    6.225,  3.981,  0,   -180    *D2R;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0];
Spline_Num_Poses = 2;

% Blue
% Start:  Reef Face G-H
% Finish: Starting Line on Center
Path_Blue_Center_B = [
    6.225,  3.981,  0.5, -180    *D2R;
    7.046,  4.112,  1,  -180    *D2R;
    7.504,  4.969,  1,  -90;
    7.504,  6.705,  0,  0;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0];
Spline_Num_Poses = 4;

% Red
% Start:  Starting Line on Right
% Finish: Reef Face E-F
Path_Red_Right_A = [
    length-Path_Blue_Left_A(1,1),  Path_Blue_Left_A(1,2),  Path_Blue_Left_A(1,3),  -(Path_Blue_Left_A(1,4)+pi);
    length-Path_Blue_Left_A(2,1),  Path_Blue_Left_A(2,2),  Path_Blue_Left_A(2,3),  -(Path_Blue_Left_A(2,4)+pi);
    length-Path_Blue_Left_A(3,1),  Path_Blue_Left_A(3,2),  Path_Blue_Left_A(3,3),  -(Path_Blue_Left_A(3,4)+pi);
    length-Path_Blue_Left_A(4,1),  Path_Blue_Left_A(4,2),  Path_Blue_Left_A(4,3),  -(Path_Blue_Left_A(4,4)+pi);
    0,0,0,0;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0];
Spline_Num_Poses = 4;

% Red
% Start:  Reef Face E-F
% Finish: Coral Right
Path_Red_Right_B = [
    length-Path_Blue_Left_B(1,1),  Path_Blue_Left_B(1,2),  Path_Blue_Left_B(1,3),  -(Path_Blue_Left_B(1,4)+pi);
    length-Path_Blue_Left_B(2,1),  Path_Blue_Left_B(2,2),  Path_Blue_Left_B(2,3),  -(Path_Blue_Left_B(2,4)+pi);
    length-Path_Blue_Left_B(3,1),  Path_Blue_Left_B(3,2),  Path_Blue_Left_B(3,3),  -(Path_Blue_Left_B(3,4)+pi);
    length-Path_Blue_Left_B(4,1),  Path_Blue_Left_B(4,2),  Path_Blue_Left_B(4,3),  -(Path_Blue_Left_B(4,4)+pi);
    0,0,0,0;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0];
Spline_Num_Poses = 4;

% Red
% Start:  Coral Right
% Finish: Reef Face E-F
Path_Red_Right_C = [
    length-Path_Blue_Left_C(1,1),  Path_Blue_Left_C(1,2),  Path_Blue_Left_C(1,3),  -(Path_Blue_Left_C(1,4)+pi);
    length-Path_Blue_Left_C(2,1),  Path_Blue_Left_C(2,2),  Path_Blue_Left_C(2,3),  -(Path_Blue_Left_C(2,4)+pi);
    length-Path_Blue_Left_C(3,1),  Path_Blue_Left_C(3,2),  Path_Blue_Left_C(3,3),  -(Path_Blue_Left_C(3,4)+pi);
    length-Path_Blue_Left_C(4,1),  Path_Blue_Left_C(4,2),  Path_Blue_Left_C(4,3),  -(Path_Blue_Left_C(4,4)+pi);
    0,0,0,0;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0];
Spline_Num_Poses = 4;

% Red
% Start:  Reef Face E-F
% Finish: Coral Right
Path_Red_Right_D = [
    length-Path_Blue_Left_D(1,1),  Path_Blue_Left_D(1,2),  Path_Blue_Left_D(1,3),  -(Path_Blue_Left_D(1,4)+pi);
    length-Path_Blue_Left_D(2,1),  Path_Blue_Left_D(2,2),  Path_Blue_Left_D(2,3),  -(Path_Blue_Left_D(2,4)+pi);
    length-Path_Blue_Left_D(3,1),  Path_Blue_Left_D(3,2),  Path_Blue_Left_D(3,3),  -(Path_Blue_Left_D(3,4)+pi);
    length-Path_Blue_Left_D(4,1),  Path_Blue_Left_D(4,2),  Path_Blue_Left_D(4,3),  -(Path_Blue_Left_D(4,4)+pi);
    0,0,0,0;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0];
Spline_Num_Poses = 4;

%% Run simulation

figure(1), clf
subplot(2,1,1)
hold on
subplot(2,2,3)
hold on
subplot(2,2,4)
hold on

for k = 9:10

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
        Spline_Ref_Poses = Path_Blue_Left_D;
        Spline_Num_Poses = 4;
    elseif  k == 5
        Spline_Ref_Poses = Path_Blue_Right_A;
        Spline_Num_Poses = 4;
    elseif  k == 6
        Spline_Ref_Poses = Path_Blue_Right_B;
        Spline_Num_Poses = 4;
    elseif  k == 7
        Spline_Ref_Poses = Path_Blue_Right_C;
        Spline_Num_Poses = 4;
    elseif  k == 8
        Spline_Ref_Poses = Path_Blue_Right_D;
        Spline_Num_Poses = 4;
    elseif  k == 9
        Spline_Ref_Poses = Path_Blue_Center_A;
        Spline_Num_Poses = 2;
    elseif  k == 10
        Spline_Ref_Poses = Path_Blue_Center_B;
        Spline_Num_Poses = 4;
    elseif  k == 11
        Spline_Ref_Poses = Path_Red_Right_A;
        Spline_Num_Poses = 4;
    elseif  k == 12
        Spline_Ref_Poses = Path_Red_Right_B;
        Spline_Num_Poses = 4;
    elseif  k == 13
        Spline_Ref_Poses = Path_Red_Right_C;
        Spline_Num_Poses = 4;
    elseif  k == 14
        Spline_Ref_Poses = Path_Red_Right_D;
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

