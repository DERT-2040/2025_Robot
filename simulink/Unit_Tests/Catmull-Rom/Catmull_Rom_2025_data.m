%% Define Data
D2R = pi/180;

Spline_Tension = 0.5;

% [x, y, velocity, angle]

% Blue
% Start:  Starting Line on Left
% Finish: Reef Face I-J
Path_Blue_Left_A = [
    7.564,  6.512,  0.5,  -179    *D2R;
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

figure(1), clf
subplot(2,1,1), hold on
subplot(2,2,3), hold on
subplot(2,2,4), hold on

for k = 1:3

    %% Run simulation
    % clear prior simulation results
    clear out

    % Define data used by simulation

    if k == 1
        Spline_Ref_Poses = Path_Blue_Left_A;
    elseif k == 2
        Spline_Ref_Poses = Path_Blue_Left_B;
    elseif k == 3
        Spline_Ref_Poses = Path_Blue_Left_C;
    end

    sim_IC_x = Spline_Ref_Poses(1,1);
    sim_IC_y = Spline_Ref_Poses(1,2);

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
