
D2R = pi/180;

% Field Size 317 in. x 691 in.
width = 317 * 0.0254;
length = 691 * 0.0254;

% [x, y, velocity, angle]

% Blue
% Start:  Starting Line on Left
% Finish: Reef Face I-J
Path_Blue_Left_A = [
    7.564,  6.512,  0.5,  -180  *D2R;
    6.652,  6.401,  2,  -167    *D2R;
    5.985,  6.140,  2,  -145    *D2R;
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
    4.739,  6.453,  2,   -120    *D2R;
    1.950,  6.209,  2,   -54     *D2R;
    1.209,  6.940,  0,   -54     *D2R;
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
    5.418,  5.613,  0.5, -120    *D2R;
    4.739,  6.453,  2,   -120    *D2R;
    2.485,  6.074,  2,   -54     *D2R;
    1.668,  6.453,  0,   -54     *D2R;
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
    2.226,  6.559,  2,   -57    *D2R;
    3.258,  6.042,  2,   -60    *D2R;
    3.610,  5.551,  0,   -60    *D2R;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0];

% Blue
% Start:  Reef Face L-K
% Finish: Coral Left
Path_Blue_Left_D = [
    3.610,  5.551,  0.5, -60    *D2R;
    3.171,  6.130,  2,   -60    *D2R;
    2.129,  6.419,  2,   -54    *D2R;
    1.256,  6.872,  0,   -54    *D2R;
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

% Blue
% Start:  Reef Face E-F
% Finish: Coral Right
Path_Blue_Right_B_end_early = [
    Path_Blue_Left_B_end_early(1,1),  width-Path_Blue_Left_B_end_early(1,2),  Path_Blue_Left_B_end_early(1,3),  -Path_Blue_Left_B_end_early(1,4);
    Path_Blue_Left_B_end_early(2,1),  width-Path_Blue_Left_B_end_early(2,2),  Path_Blue_Left_B_end_early(2,3),  -Path_Blue_Left_B_end_early(2,4);
    Path_Blue_Left_B_end_early(3,1),  width-Path_Blue_Left_B_end_early(3,2),  Path_Blue_Left_B_end_early(3,3),  -Path_Blue_Left_B_end_early(3,4);
    Path_Blue_Left_B_end_early(4,1),  width-Path_Blue_Left_B_end_early(4,2),  Path_Blue_Left_B_end_early(4,3),  -Path_Blue_Left_B_end_early(4,4);
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

% Blue
% Start:  Starting Line on Center
% Finish: Reef Face G-H
Path_Blue_Center_A = [
    7.533,  width/2,  1.0, -180    *D2R;
    6.225,  width/2,  0,   -180    *D2R;
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
% Finish: Starting Line on Center
Path_Blue_Center_B = [
    6.225,  width/2,  0.5, -180    *D2R;
    7.046,  4.112,  1,  -180    *D2R;
    7.504,  4.969,  1,  -90    *D2R;
    7.504,  6.705,  0,  0    *D2R;
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

% Red
% Start:  Reef Face E-F
% Finish: Coral Right
Path_Red_Right_B_end_early = [
    length-Path_Blue_Left_B_end_early(1,1),  Path_Blue_Left_B_end_early(1,2),  Path_Blue_Left_B_end_early(1,3),  -(Path_Blue_Left_B_end_early(1,4)+pi);
    length-Path_Blue_Left_B_end_early(2,1),  Path_Blue_Left_B_end_early(2,2),  Path_Blue_Left_B_end_early(2,3),  -(Path_Blue_Left_B_end_early(2,4)+pi);
    length-Path_Blue_Left_B_end_early(3,1),  Path_Blue_Left_B_end_early(3,2),  Path_Blue_Left_B_end_early(3,3),  -(Path_Blue_Left_B_end_early(3,4)+pi);
    length-Path_Blue_Left_B_end_early(4,1),  Path_Blue_Left_B_end_early(4,2),  Path_Blue_Left_B_end_early(4,3),  -(Path_Blue_Left_B_end_early(4,4)+pi);
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

% Red
% Start:  Starting Line on Left
% Finish: Reef Face E-F
Path_Red_Left_A = [
    length-Path_Blue_Right_A(1,1),  Path_Blue_Right_A(1,2),  Path_Blue_Right_A(1,3),  -(Path_Blue_Right_A(1,4)+pi);
    length-Path_Blue_Right_A(2,1),  Path_Blue_Right_A(2,2),  Path_Blue_Right_A(2,3),  -(Path_Blue_Right_A(2,4)+pi);
    length-Path_Blue_Right_A(3,1),  Path_Blue_Right_A(3,2),  Path_Blue_Right_A(3,3),  -(Path_Blue_Right_A(3,4)+pi);
    length-Path_Blue_Right_A(4,1),  Path_Blue_Right_A(4,2),  Path_Blue_Right_A(4,3),  -(Path_Blue_Right_A(4,4)+pi);
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
    length-Path_Blue_Right_B(1,1),  Path_Blue_Right_B(1,2),  Path_Blue_Right_B(1,3),  -(Path_Blue_Right_B(1,4)+pi);
    length-Path_Blue_Right_B(2,1),  Path_Blue_Right_B(2,2),  Path_Blue_Right_B(2,3),  -(Path_Blue_Right_B(2,4)+pi);
    length-Path_Blue_Right_B(3,1),  Path_Blue_Right_B(3,2),  Path_Blue_Right_B(3,3),  -(Path_Blue_Right_B(3,4)+pi);
    length-Path_Blue_Right_B(4,1),  Path_Blue_Right_B(4,2),  Path_Blue_Right_B(4,3),  -(Path_Blue_Right_B(4,4)+pi);
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
    length-Path_Blue_Right_B_end_early(1,1),  Path_Blue_Right_B_end_early(1,2),  Path_Blue_Right_B_end_early(1,3),  -(Path_Blue_Right_B_end_early(1,4)+pi);
    length-Path_Blue_Right_B_end_early(2,1),  Path_Blue_Right_B_end_early(2,2),  Path_Blue_Right_B_end_early(2,3),  -(Path_Blue_Right_B_end_early(2,4)+pi);
    length-Path_Blue_Right_B_end_early(3,1),  Path_Blue_Right_B_end_early(3,2),  Path_Blue_Right_B_end_early(3,3),  -(Path_Blue_Right_B_end_early(3,4)+pi);
    length-Path_Blue_Right_B_end_early(4,1),  Path_Blue_Right_B_end_early(4,2),  Path_Blue_Right_B_end_early(4,3),  -(Path_Blue_Right_B_end_early(4,4)+pi);
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
    length-Path_Blue_Right_C(1,1),  Path_Blue_Right_C(1,2),  Path_Blue_Right_C(1,3),  -(Path_Blue_Right_C(1,4)+pi);
    length-Path_Blue_Right_C(2,1),  Path_Blue_Right_C(2,2),  Path_Blue_Right_C(2,3),  -(Path_Blue_Right_C(2,4)+pi);
    length-Path_Blue_Right_C(3,1),  Path_Blue_Right_C(3,2),  Path_Blue_Right_C(3,3),  -(Path_Blue_Right_C(3,4)+pi);
    length-Path_Blue_Right_C(4,1),  Path_Blue_Right_C(4,2),  Path_Blue_Right_C(4,3),  -(Path_Blue_Right_C(4,4)+pi);
    0,0,0,0;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0;
    0,0,0,0];

% Red
% Start:  Reef Face E-F
% Finish: Coral Left
Path_Red_Left_D = [
    length-Path_Blue_Right_D(1,1),  Path_Blue_Right_D(1,2),  Path_Blue_Right_D(1,3),  -(Path_Blue_Right_D(1,4)+pi);
    length-Path_Blue_Right_D(2,1),  Path_Blue_Right_D(2,2),  Path_Blue_Right_D(2,3),  -(Path_Blue_Right_D(2,4)+pi);
    length-Path_Blue_Right_D(3,1),  Path_Blue_Right_D(3,2),  Path_Blue_Right_D(3,3),  -(Path_Blue_Right_D(3,4)+pi);
    length-Path_Blue_Right_D(4,1),  Path_Blue_Right_D(4,2),  Path_Blue_Right_D(4,3),  -(Path_Blue_Right_D(4,4)+pi);
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
    length-Path_Blue_Center_A(1,1),  Path_Blue_Center_A(1,2),  Path_Blue_Center_A(1,3),  0;
    length-Path_Blue_Center_A(2,1),  Path_Blue_Center_A(2,2),  Path_Blue_Center_A(2,3),  0;
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
    length-Path_Blue_Center_B(1,1),  width-Path_Blue_Center_B(1,2),  Path_Blue_Center_B(1,3),  -(Path_Blue_Center_B(1,4)+pi);
    length-Path_Blue_Center_B(2,1),  width-Path_Blue_Center_B(2,2),  Path_Blue_Center_B(2,3),  -(Path_Blue_Center_B(2,4)+pi);
    length-Path_Blue_Center_B(3,1),  width-Path_Blue_Center_B(3,2),  Path_Blue_Center_B(3,3),  -(Path_Blue_Center_B(3,4)+pi);
    length-Path_Blue_Center_B(4,1),  width-Path_Blue_Center_B(4,2),  Path_Blue_Center_B(4,3),  -(Path_Blue_Center_B(4,4)+pi);
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
    Path_Blue_Left_C, ...
    Path_Blue_Left_D, ...
    Path_Blue_Right_A, ...
    Path_Blue_Right_B, ...
    Path_Blue_Right_C, ...
    Path_Blue_Right_D, ...
    Path_Blue_Center_A, ...
    Path_Blue_Center_B, ...
    Path_Red_Right_A, ...
    Path_Red_Right_B, ...
    Path_Red_Right_C, ...
    Path_Red_Right_D, ...
    Path_Red_Left_A, ...
    Path_Red_Left_B, ...
    Path_Red_Left_C, ...
    Path_Red_Left_D, ...
    Path_Red_Center_A, ...
    Path_Red_Center_B, ...
    Path_Blue_Left_B_end_early, ...
    Path_Blue_Right_B_end_early, ...
    Path_Red_Right_B_end_early, ...
    Path_Red_Left_B_end_early);

% collect the number of poses in each path
All_Paths_Num_Poses = [
    nnz(Path_Blue_Left_A(:,1));
    nnz(Path_Blue_Left_B(:,1));
    nnz(Path_Blue_Left_C(:,1));
    nnz(Path_Blue_Left_D(:,1));
    nnz(Path_Blue_Right_A(:,1));
    nnz(Path_Blue_Right_B(:,1));
    nnz(Path_Blue_Right_C(:,1));
    nnz(Path_Blue_Right_D(:,1));
    nnz(Path_Blue_Center_A(:,1));
    nnz(Path_Blue_Center_B(:,1));
    nnz(Path_Red_Left_A(:,1));
    nnz(Path_Red_Left_B(:,1));
    nnz(Path_Red_Left_C(:,1));
    nnz(Path_Red_Left_D(:,1));
    nnz(Path_Red_Right_A(:,1));
    nnz(Path_Red_Right_B(:,1));
    nnz(Path_Red_Right_C(:,1));
    nnz(Path_Red_Right_D(:,1));
    nnz(Path_Red_Center_A(:,1));
    nnz(Path_Red_Center_B(:,1));
    nnz(Path_Blue_Left_B_end_early(:,1));
    nnz(Path_Blue_Right_B_end_early(:,1));
    nnz(Path_Red_Right_B_end_early(:,1));
    nnz(Path_Red_Left_B_end_early(:,1));    
    ];

clear D2R width length
clear Path_Blue_Left_A Path_Blue_Left_B Path_Blue_Left_C Path_Blue_Left_D 
clear Path_Blue_Right_A Path_Blue_Right_B Path_Blue_Right_C Path_Blue_Right_D
clear Path_Blue_Center_A Path_Blue_Center_B 
clear Path_Red_Right_A Path_Red_Right_B Path_Red_Right_C Path_Red_Right_D
clear Path_Red_Left_A Path_Red_Left_B Path_Red_Left_C Path_Red_Left_D
clear Path_Blue_Left_B_end_early Path_Blue_Right_B_end_early Path_Red_Right_B_end_early Path_Red_Left_B_end_early
clear Path_Red_Center_A Path_Red_Center_B
