
D2R = pi/180;

% Blue
% Start:  Starting Line on Left
% Finish: Reef Face I-J
Path_Blue_Left_A = [
    7.564,  6.512,  0.5,  -180    *D2R;
    6.652,  6.401,  1,  -167    *D2R;
    5.985,  6.140,  1,  -145    *D2R;
    5.418,  5.613,  0,  -120    *D2R;
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

% concatenate all of the paths into one multi-dimensional matrix
All_Paths_Ref_Poses = cat(3, ...
    Path_Blue_Left_A, ...
    Path_Blue_Left_B, ...
    Path_Blue_Left_C);

% collect the number of poses in each path
All_Paths_Num_Poses = [
    nnz(Path_Blue_Left_A(:,1));
    nnz(Path_Blue_Left_B(:,1));
    nnz(Path_Blue_Left_C(:,1))];

