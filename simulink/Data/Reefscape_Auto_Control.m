Auto_Starting_Position = 1;  % 1 = left, 2 = center, 3 = right

% Timers
Auto_Backup_Time_Reef = 0.25;
Auto_Algae_Height_Time = 0.5;
Auto_Backup_Time_Processor = 1;
Auto_Path1_Delay_to_L2_Time = 0.5;  % time at starting line before L2
Auto_Path1_Delay_to_L4_Time = 0.25; % time after moving to raise from L2 to L4
Auto_Path2_Delay_to_L4_Time = 0;    % coral station to reef

% Speeds
Auto_Speed_Reef = 1.0;
Auto_Speed_Coral = 1.0;
Auto_Speed_Algae = 0.5;
Auto_Speed_Processor = 0.5; 

% Match Timers (end early)
MatchTime_Skip_Coral_Pickup = 8;   % when reef #1 backup timer is expired
MatchTime_Skip_Second_L4 = 9;      % when coral is detected by TOF sensor
