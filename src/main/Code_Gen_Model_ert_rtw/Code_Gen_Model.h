/*
 * Sponsored License - for use in support of a program or activity
 * sponsored by MathWorks.  Not for government, commercial or other
 * non-sponsored organizational use.
 *
 * File: Code_Gen_Model.h
 *
 * Code generated for Simulink model 'Code_Gen_Model'.
 *
 * Model version                  : 5.0
 * Simulink Coder version         : 25.1 (R2025a) 21-Nov-2024
 * C/C++ source code generated on : Sat Dec 13 00:01:20 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM 7
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef Code_Gen_Model_h_
#define Code_Gen_Model_h_
#ifndef Code_Gen_Model_COMMON_INCLUDES_
#define Code_Gen_Model_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rt_nonfinite.h"
#include "math.h"
#endif                                 /* Code_Gen_Model_COMMON_INCLUDES_ */

#include "Code_Gen_Model_types.h"
#include "rtGetNaN.h"
#include "rtGetInf.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block signals (default storage) */
typedef struct {
  real_T FL_Steer_Module_Angle;        /* '<S272>/Add1' */
  real_T FR_Steer_Module_Angle;        /* '<S273>/Add1' */
  real_T BL_Steer_Module_Angle;        /* '<S274>/Add1' */
  real_T BR_Steer_Module_Angle;        /* '<S275>/Add1' */
  real_T Gyro_Angle_Calibrated_deg;    /* '<S16>/Subtract1' */
  real_T Gyro_Angle_rad;               /* '<S113>/Gain1' */
  real_T Gyro_Angle_Field_rad;         /* '<S16>/Add' */
  real_T Product6[2];                  /* '<S22>/Product6' */
  real_T Coral_Arm_Angle_Measured;     /* '<S2>/Add Constant' */
  real_T Drive_Joystick_X;             /* '<S17>/Signal Copy1' */
  real_T Drive_Joystick_Y;             /* '<S17>/Signal Copy2' */
  real_T Drive_Joystick_Z;             /* '<S17>/Signal Copy3' */
  real_T Steer_Joystick_Y;             /* '<S17>/Signal Copy5' */
  real_T Steer_Joystick_Z;             /* '<S17>/Signal Copy6' */
  real_T Limelight_Tag_Corrected_X;    /* '<S20>/Add' */
  real_T Limelight_Tag_Corrected_Y;    /* '<S20>/Add1' */
  real_T Limelight_Tag_Corrected_Angle;/* '<S20>/Add2' */
  real_T Elevator_Height_Measured_Raw; /* '<S14>/Gain1' */
  real_T Elevator_Height_Offset;       /* '<S14>/Switch1' */
  real_T Elevator_Height_Measured;     /* '<S14>/Switch' */
  real_T Elevator_Height_Desired_merge;/* '<S21>/Merge11' */
  real_T Coral_Arm_Angle_Desired_merge;/* '<S21>/Merge13' */
  real_T Elevator_Error;               /* '<S13>/Add' */
  real_T Elevator_Proportional;        /* '<S95>/Gain1' */
  real_T Elevator_Integral;            /* '<S95>/Switch' */
  real_T Coral_ArmAngle_Error;         /* '<S9>/Subtract' */
  real_T Elevator_Proportional_l;      /* '<S77>/Gain1' */
  real_T Elevator_Integral_o;          /* '<S77>/Switch' */
  real_T Odom_Position_X;              /* '<S22>/Accumulator2' */
  real_T KF_Position_X;                /* '<S19>/Switch' */
  real_T Odom_Position_Y;              /* '<S22>/Accumulator' */
  real_T KF_Position_Y;                /* '<S19>/Switch1' */
  real_T Steering_Abs_Cmd;             /* '<S21>/Merge1' */
  real_T Steering_Rel_Cmd;             /* '<S21>/Merge2' */
  real_T Translation_Angle;            /* '<S21>/Merge3' */
  real_T Translation_Speed;            /* '<S21>/Merge4' */
  real_T Spline_Num_Poses;             /* '<S21>/Merge9' */
  real_T Translation_Speed_SPF;        /* '<S25>/Merge2' */
  real_T Translation_Speed_RL;         /* '<S374>/Sum' */
  real_T Translation_Angle_SPF;        /* '<S25>/Merge3' */
  real_T Gyro_Angle_SPF;               /* '<S25>/Merge8' */
  real_T Translation_Steering_Cmd;     /* '<S368>/Switch' */
  real_T Steering_Abs_Cmd_SPF;         /* '<S25>/Merge' */
  real_T Steering_Localized_PID;       /* '<S395>/Saturation2' */
  real_T Steering_Rel_Cmd_SPF;         /* '<S25>/Merge1' */
  real_T Steering_Localized_Cmd;       /* '<S367>/Switch' */
  real_T BR_Desired_Wheel_Speed_in;    /* '<S421>/Switch1' */
  real_T FL_Desired_Wheel_Speed_in;    /* '<S406>/Switch1' */
  real_T FR_Desired_Wheel_Speed_in;    /* '<S411>/Switch1' */
  real_T BL_Desired_Wheel_Speed_in;    /* '<S416>/Switch1' */
  real_T BR_Desired_Wheel_Speed;       /* '<S401>/Product3' */
  real_T BR_Desired_Module_Angle;      /* '<S421>/Switch' */
  real_T FL_Desired_Wheel_Speed;       /* '<S401>/Product' */
  real_T FL_Desired_Module_Angle;      /* '<S406>/Switch' */
  real_T FR_Desired_Wheel_Speed;       /* '<S401>/Product1' */
  real_T FR_Desired_Module_Angle;      /* '<S411>/Switch' */
  real_T BL_Desired_Wheel_Speed;       /* '<S401>/Product2' */
  real_T BL_Desired_Module_Angle;      /* '<S416>/Switch' */
  real_T Odometry_Y_global_est_ft;     /* '<S197>/meters to feet1' */
  real_T Odometry_Y_global_TEAR_ft;    /* '<S197>/Subtract1' */
  real_T Odometry_X_global_est_ft;     /* '<S197>/meters to feet' */
  real_T Odometry_X_global_TEAR_ft;    /* '<S197>/Subtract' */
  real_T Coral_Wheel_DutyCycle_merge;  /* '<S21>/Merge17' */
  real_T Algae_Wheel_Outside_DutyCycle_m;/* '<S21>/Merge18' */
  real_T Algae_Wheel_Inside_DutyCycle_me;/* '<S21>/Merge20' */
  real_T Product6_d[2];                /* '<S23>/Product6' */
  real_T Odom_Position_X_p;            /* '<S23>/Accumulator2' */
  real_T Odometry_X_global_est_ft_i;   /* '<S208>/meters to feet' */
  real_T Odometry_X_global_TEAR_ft_e;  /* '<S208>/Subtract' */
  real_T Odom_Position_Y_l;            /* '<S23>/Accumulator' */
  real_T Odometry_Y_global_est_ft_k;   /* '<S208>/meters to feet1' */
  real_T Odometry_Y_global_TEAR_ft_d;  /* '<S208>/Subtract1' */
  real_T Steer_Joystick_X;             /* '<S17>/Signal Copy4' */
  real_T DeadZone;                     /* '<S428>/Dead Zone' */
  real_T DeadZone1;                    /* '<S428>/Dead Zone1' */
  real_T AT_Relative_Error_Error_Y;    /* '<S28>/Signal Copy8' */
  real_T AT_Relative_Error_Error_X;    /* '<S28>/Signal Copy7' */
  real_T AT_Relative_Error_Angle;      /* '<S28>/Signal Copy9' */
  real_T Steering_Abs_Gyro_Latch;      /* '<S448>/Switch8' */
  real_T Steering_Abs_Gyro;            /* '<S448>/Switch2' */
  real_T Steering_Abs_Angle;           /* '<S448>/Switch3' */
  real_T State_ID_Teleop;              /* '<S428>/Reefscape_Chart' */
  real_T Elevator_Height_Desired;      /* '<S428>/Reefscape_Chart' */
  real_T Coral_Arm_Angle_Desired;      /* '<S428>/Reefscape_Chart' */
  real_T Coral_Wheel_DC;               /* '<S428>/Reefscape_Chart' */
  real_T UnitDelay2;                   /* '<S30>/Unit Delay2' */
  real_T Auto_AT_Relative_Error_Y;     /* '<S30>/Signal Copy6' */
  real_T Auto_AT_Relative_Error_X;     /* '<S30>/Signal Copy2' */
  real_T Auto_AT_Relative_Error_Angle; /* '<S30>/Signal Copy7' */
  real_T Translation_Speed_l;          /* '<S30>/Reefscape_Auto_Steps' */
  real_T Translation_Angle_g;          /* '<S30>/Reefscape_Auto_Steps' */
  real_T State_ID_Auto;                /* '<S33>/Reefscape_Chart' */
  real_T Elevator_Height_Desired_n;    /* '<S33>/Reefscape_Chart' */
  real_T Coral_Arm_Angle_Desired_h;    /* '<S33>/Reefscape_Chart' */
  real_T Coral_Wheel_DC_f;             /* '<S33>/Reefscape_Chart' */
  real_T Spline_Follow_Index;          /* '<S217>/Merge4' */
  real_T Spline_Target_Y;              /* '<S214>/Selector6' */
  real_T Spline_Target_X;              /* '<S214>/Selector2' */
  real_T Assignment[450];              /* '<S239>/Assignment' */
  real_T Product2[2];                  /* '<S187>/Product2' */
  real_T Product3[2];                  /* '<S185>/Product3' */
  uint16_T Set_Coral_Level;            /* '<S428>/Reefscape_Chart' */
  uint16_T Set_Coral_Level_l;          /* '<S33>/Reefscape_Chart' */
  uint16_T WhileIterator;              /* '<S264>/While Iterator' */
  uint8_T Desired_Pipeline;            /* '<S21>/Merge24' */
  uint8_T Set_Algae_Level;             /* '<S428>/Reefscape_Chart' */
  uint8_T Desired_Pipeline_a;          /* '<S428>/Reefscape_Chart' */
  uint8_T Path_ID;                     /* '<S30>/Reefscape_Auto_Steps' */
  uint8_T Auto_Step_ID;                /* '<S30>/Reefscape_Auto_Steps' */
  uint8_T Set_Algae_Level_m;           /* '<S33>/Reefscape_Chart' */
  uint8_T Active_GameState;            /* '<S24>/Chart' */
  boolean_T Button_Enable_Wheels;      /* '<S131>/FixPt Relational Operator' */
  boolean_T Button_Reset_Wheel_Offsets;/* '<S132>/FixPt Relational Operator' */
  boolean_T Button_Disable_Wheels;     /* '<S133>/FixPt Relational Operator' */
  boolean_T Drive_Joystick_Z_Mode;     /* '<S122>/Compare' */
  boolean_T Is_Boosting;               /* '<S128>/Compare' */
  boolean_T Face_Toward_Driver;        /* '<S120>/Compare' */
  boolean_T Face_Right_Driver;         /* '<S121>/Compare' */
  boolean_T Face_Left_Driver;          /* '<S123>/Compare' */
  boolean_T Face_Away_Driver;          /* '<S116>/Compare' */
  boolean_T Align_Left;                /* '<S126>/Compare' */
  boolean_T Align_Right;               /* '<S125>/Compare' */
  boolean_T Align_Center;              /* '<S127>/Compare' */
  boolean_T Drive_Engage_Hook;         /* '<S124>/Compare' */
  boolean_T Gamepad_POV_Up;            /* '<S115>/Compare' */
  boolean_T Gamepad_POV_Down;          /* '<S117>/Compare' */
  boolean_T Gamepad_POV_Left;          /* '<S119>/Compare' */
  boolean_T Gamepad_POV_Right;         /* '<S118>/Compare' */
  boolean_T Compare;                   /* '<S7>/Compare' */
  boolean_T Reefscape_Motors_Enable_merge;/* '<S21>/Merge12' */
  boolean_T Spline_Enable;             /* '<S21>/Merge7' */
  boolean_T Is_Absolute_Translation_SPF;/* '<S25>/Merge4' */
  boolean_T Is_Absolute_Steering_SPF;  /* '<S25>/Merge5' */
  boolean_T Swerve_Drive_Integral_Enable;/* '<S21>/Merge23' */
  boolean_T Actuator_Cmd;              /* '<S129>/Compare' */
  boolean_T Winch_Cmd;                 /* '<S130>/Compare' */
  boolean_T Robot_Reached_Destination_l;/* '<S25>/Merge7' */
  boolean_T Test_Mode;                 /* '<S21>/Merge10' */
  boolean_T Enable_Wheels;             /* '<S21>/Merge14' */
  boolean_T Reset_Wheel_Offsets;       /* '<S21>/Merge15' */
  boolean_T Disable_Wheels;            /* '<S21>/Merge16' */
  boolean_T Swerve_Motors_Disabled;    /* '<S21>/Merge19' */
  boolean_T Elevator_LowerPickup_Reset_merg;/* '<S21>/Merge21' */
  boolean_T FixPtRelationalOperator;   /* '<S469>/FixPt Relational Operator' */
  boolean_T FixPtRelationalOperator_n; /* '<S470>/FixPt Relational Operator' */
  boolean_T FixPtRelationalOperator_k; /* '<S475>/FixPt Relational Operator' */
  boolean_T FixPtRelationalOperator_d; /* '<S476>/FixPt Relational Operator' */
  boolean_T FixPtRelationalOperator_l; /* '<S478>/FixPt Relational Operator' */
  boolean_T FixPtRelationalOperator_ml;/* '<S473>/FixPt Relational Operator' */
  boolean_T UnitDelay;                 /* '<S28>/Unit Delay' */
  boolean_T AT_Relative_Error_Enable;  /* '<S28>/Signal Copy6' */
  boolean_T Steering_Abs_Angle_Active; /* '<S448>/AND6' */
  boolean_T Teleop_AT_On_Target;       /* '<S28>/Signal Copy10' */
  boolean_T Elevator_LowerPickup_Reset;/* '<S428>/Reefscape_Chart' */
  boolean_T Coral_Pickup_Lower_Wait_State;/* '<S428>/Reefscape_Chart' */
  boolean_T FixPtRelationalOperator_nw;/* '<S56>/FixPt Relational Operator' */
  boolean_T FixPtRelationalOperator_dd;/* '<S57>/FixPt Relational Operator' */
  boolean_T FixPtRelationalOperator_o; /* '<S62>/FixPt Relational Operator' */
  boolean_T FixPtRelationalOperator_a; /* '<S63>/FixPt Relational Operator' */
  boolean_T FixPtRelationalOperator_dp;/* '<S65>/FixPt Relational Operator' */
  boolean_T FixPtRelationalOperator_lp;/* '<S60>/FixPt Relational Operator' */
  boolean_T UnitDelay_b;               /* '<S30>/Unit Delay' */
  boolean_T Auto_AT_Relative_Enable;   /* '<S30>/Signal Copy1' */
  boolean_T Auto_AT_On_Target;         /* '<S30>/Signal Copy8' */
  boolean_T Align_Left_p;              /* '<S30>/Reefscape_Auto_Steps' */
  boolean_T Align_Center_j;            /* '<S30>/Reefscape_Auto_Steps' */
  boolean_T Gamepad_B4_Y_out;          /* '<S30>/Reefscape_Auto_Steps' */
  boolean_T Gamepad_Start_out;         /* '<S30>/Reefscape_Auto_Steps' */
  boolean_T Gamepad_Back_out;          /* '<S30>/Reefscape_Auto_Steps' */
  boolean_T Gamepad_RT_out;            /* '<S30>/Reefscape_Auto_Steps' */
  boolean_T Gamepad_POV_Down_a;        /* '<S30>/Reefscape_Auto_Steps' */
  boolean_T Gamepad_POV_Left_p;        /* '<S30>/Reefscape_Auto_Steps' */
  boolean_T Path_Enable;               /* '<S30>/Reefscape_Auto_Steps' */
  boolean_T Gamepad_B1_A_out;          /* '<S30>/Reefscape_Auto_Steps' */
  boolean_T Gamepad_B3_X_out;          /* '<S30>/Reefscape_Auto_Steps' */
  boolean_T Elevator_LowerPickup_Reset_i;/* '<S33>/Reefscape_Chart' */
  boolean_T Coral_Pickup_Lower_Wait_State_o;/* '<S33>/Reefscape_Chart' */
  boolean_T Coral_Score_j;             /* '<S33>/Reefscape_Chart' */
  boolean_T Spline_Out_Of_Bounds;      /* '<S217>/Merge1' */
  boolean_T Out;                       /* '<S11>/Debounce' */
  boolean_T Out_m;                     /* '<S10>/Debounce' */
} B_Code_Gen_Model_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T UD_DSTATE;                    /* '<S189>/UD' */
  real_T UD_DSTATE_m;                  /* '<S190>/UD' */
  real_T UD_DSTATE_i;                  /* '<S191>/UD' */
  real_T UD_DSTATE_c;                  /* '<S192>/UD' */
  real_T MemoryX_DSTATE[2];            /* '<S134>/MemoryX' */
  real_T DelayInput1_DSTATE;           /* '<S114>/Delay Input1' */
  real_T UnitDelay1_DSTATE;            /* '<S16>/Unit Delay1' */
  real_T UD_DSTATE_d;                  /* '<S188>/UD' */
  real_T UnitDelay_DSTATE;             /* '<S94>/Unit Delay' */
  real_T DelayInput1_DSTATE_n;         /* '<S131>/Delay Input1' */
  real_T DelayInput1_DSTATE_e;         /* '<S132>/Delay Input1' */
  real_T DelayInput1_DSTATE_nj;        /* '<S133>/Delay Input1' */
  real_T UnitDelay_DSTATE_o;           /* '<S76>/Unit Delay' */
  real_T TappedDelay_X[2];             /* '<S19>/Tapped Delay' */
  real_T TappedDelay1_X[2];            /* '<S19>/Tapped Delay1' */
  real_T Accumulator2_DSTATE;          /* '<S22>/Accumulator2' */
  real_T Accumulator_DSTATE;           /* '<S22>/Accumulator' */
  real_T UnitDelay1_DSTATE_i;          /* '<S398>/Unit Delay1' */
  real_T UD_DSTATE_a;                  /* '<S397>/UD' */
  real_T UnitDelay_DSTATE_m2;          /* '<S395>/Unit Delay' */
  real_T UnitDelay_DSTATE_d;           /* '<S378>/Unit Delay' */
  real_T FixPtUnitDelay1_DSTATE_e;     /* '<S393>/FixPt Unit Delay1' */
  real_T UnitDelay_DSTATE_g;           /* '<S377>/Unit Delay' */
  real_T FixPtUnitDelay1_DSTATE_p;     /* '<S386>/FixPt Unit Delay1' */
  real_T UnitDelay1_DSTATE_j;          /* '<S352>/Unit Delay1' */
  real_T UD_DSTATE_j;                  /* '<S351>/UD' */
  real_T UnitDelay_DSTATE_l;           /* '<S345>/Unit Delay' */
  real_T UnitDelay1_DSTATE_f;          /* '<S289>/Unit Delay1' */
  real_T UD_DSTATE_h;                  /* '<S288>/UD' */
  real_T UnitDelay_DSTATE_j;           /* '<S282>/Unit Delay' */
  real_T UnitDelay1_DSTATE_b;          /* '<S300>/Unit Delay1' */
  real_T UD_DSTATE_b;                  /* '<S299>/UD' */
  real_T UnitDelay_DSTATE_e;           /* '<S285>/Unit Delay' */
  real_T UnitDelay1_DSTATE_e;          /* '<S310>/Unit Delay1' */
  real_T UD_DSTATE_mm;                 /* '<S309>/UD' */
  real_T UnitDelay_DSTATE_hj;          /* '<S303>/Unit Delay' */
  real_T UnitDelay1_DSTATE_n;          /* '<S321>/Unit Delay1' */
  real_T UD_DSTATE_i1;                 /* '<S320>/UD' */
  real_T UnitDelay_DSTATE_dt;          /* '<S306>/Unit Delay' */
  real_T UnitDelay1_DSTATE_n4;         /* '<S331>/Unit Delay1' */
  real_T UD_DSTATE_o;                  /* '<S330>/UD' */
  real_T UnitDelay_DSTATE_f;           /* '<S324>/Unit Delay' */
  real_T UnitDelay1_DSTATE_nw;         /* '<S342>/Unit Delay1' */
  real_T UD_DSTATE_k;                  /* '<S341>/UD' */
  real_T UnitDelay_DSTATE_k;           /* '<S327>/Unit Delay' */
  real_T UnitDelay1_DSTATE_iw;         /* '<S363>/Unit Delay1' */
  real_T UD_DSTATE_l;                  /* '<S362>/UD' */
  real_T UnitDelay_DSTATE_lm;          /* '<S348>/Unit Delay' */
  real_T UnitDelay1_DSTATE_d;          /* '<S197>/Unit Delay1' */
  real_T UnitDelay_DSTATE_c;           /* '<S197>/Unit Delay' */
  real_T FixPtUnitDelay1_DSTATE_l;     /* '<S103>/FixPt Unit Delay1' */
  real_T FixPtUnitDelay1_DSTATE_pc;    /* '<S85>/FixPt Unit Delay1' */
  real_T UD_DSTATE_e;                  /* '<S200>/UD' */
  real_T UD_DSTATE_p;                  /* '<S201>/UD' */
  real_T UD_DSTATE_bg;                 /* '<S202>/UD' */
  real_T UD_DSTATE_cp;                 /* '<S203>/UD' */
  real_T UD_DSTATE_do;                 /* '<S199>/UD' */
  real_T Accumulator2_DSTATE_p;        /* '<S23>/Accumulator2' */
  real_T UnitDelay_DSTATE_b;           /* '<S208>/Unit Delay' */
  real_T Accumulator_DSTATE_p;         /* '<S23>/Accumulator' */
  real_T UnitDelay1_DSTATE_a;          /* '<S208>/Unit Delay1' */
  real_T DelayInput1_DSTATE_c;         /* '<S469>/Delay Input1' */
  real_T DelayInput1_DSTATE_nr;        /* '<S470>/Delay Input1' */
  real_T DelayInput1_DSTATE_ez;        /* '<S475>/Delay Input1' */
  real_T DelayInput1_DSTATE_nh;        /* '<S476>/Delay Input1' */
  real_T DelayInput1_DSTATE_i;         /* '<S477>/Delay Input1' */
  real_T DelayInput1_DSTATE_cp;        /* '<S471>/Delay Input1' */
  real_T DelayInput1_DSTATE_p;         /* '<S478>/Delay Input1' */
  real_T DelayInput1_DSTATE_o;         /* '<S481>/Delay Input1' */
  real_T DelayInput1_DSTATE_j;         /* '<S482>/Delay Input1' */
  real_T DelayInput1_DSTATE_b;         /* '<S474>/Delay Input1' */
  real_T UnitDelay1_DSTATE_nr;         /* '<S426>/Unit Delay1' */
  real_T UnitDelay_DSTATE_kq;          /* '<S426>/Unit Delay' */
  real_T UnitDelay1_DSTATE_l;          /* '<S462>/Unit Delay1' */
  real_T UnitDelay_DSTATE_p;           /* '<S462>/Unit Delay' */
  real_T FixPtUnitDelay1_DSTATE_f;     /* '<S466>/FixPt Unit Delay1' */
  real_T UnitDelay3_DSTATE;            /* '<S448>/Unit Delay3' */
  real_T UnitDelay1_DSTATE_j2;         /* '<S448>/Unit Delay1' */
  real_T UnitDelay2_DSTATE;            /* '<S30>/Unit Delay2' */
  real_T UnitDelay1_DSTATE_ek;         /* '<S31>/Unit Delay1' */
  real_T UnitDelay_DSTATE_bc;          /* '<S31>/Unit Delay' */
  real_T UnitDelay_DSTATE_gh;          /* '<S213>/Unit Delay' */
  real_T UnitDelay_DSTATE_hn;          /* '<S212>/Unit Delay' */
  real_T UnitDelay1_DSTATE_f4;         /* '<S265>/Unit Delay1' */
  real_T UnitDelay_DSTATE_g4;          /* '<S265>/Unit Delay' */
  real_T UnitDelay_DSTATE_le;          /* '<S215>/Unit Delay' */
  real_T UnitDelay1_DSTATE_kc;         /* '<S215>/Unit Delay1' */
  real_T timer;                        /* '<S428>/Reefscape_Chart' */
  real_T timer_robot_target;           /* '<S428>/Reefscape_Chart' */
  real_T timer_k;                      /* '<S30>/Reefscape_Auto_Steps' */
  real_T timer_l;                      /* '<S33>/Reefscape_Chart' */
  real_T timer_robot_target_d;         /* '<S33>/Reefscape_Chart' */
  real_T timer_m;                      /* '<S11>/Debounce' */
  real_T timer_d;                      /* '<S10>/Debounce' */
  void *MatrixConcatenate_PWORK;       /* '<S234>/Matrix Concatenate' */
  int32_T Selector5_DIMS1[2];          /* '<S234>/Selector5' */
  int32_T MatrixConcatenate_DIMS1[2];  /* '<S234>/Matrix Concatenate' */
  int32_T Selector4_DIMS1[2];          /* '<S234>/Selector4' */
  uint8_T FixPtUnitDelay2_DSTATE;      /* '<S376>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_p;    /* '<S393>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_c;    /* '<S386>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_o;    /* '<S103>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_j;    /* '<S85>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_a;    /* '<S466>/FixPt Unit Delay2' */
  boolean_T DelayInput1_DSTATE_bd;     /* '<S106>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_o1;     /* '<S107>/Delay Input1' */
  boolean_T UnitDelay_DSTATE_mp;       /* '<S2>/Unit Delay' */
  boolean_T DelayInput1_DSTATE_po;     /* '<S108>/Delay Input1' */
  boolean_T UnitDelay_DSTATE_ll;       /* '<S18>/Unit Delay' */
  boolean_T DelayInput1_DSTATE_be;     /* '<S104>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_op;     /* '<S86>/Delay Input1' */
  boolean_T UnitDelay1_DSTATE_kb;      /* '<S15>/Unit Delay1' */
  boolean_T UnitDelay_DSTATE_gln;      /* '<S15>/Unit Delay' */
  boolean_T UnitDelay2_DSTATE_k;       /* '<S15>/Unit Delay2' */
  boolean_T UnitDelay_DSTATE_iro;      /* '<S29>/Unit Delay' */
  boolean_T DelayInput1_DSTATE_oy;     /* '<S479>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_f;      /* '<S480>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_o5;     /* '<S472>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_a;      /* '<S473>/Delay Input1' */
  boolean_T UnitDelay_DSTATE_ia;       /* '<S28>/Unit Delay' */
  boolean_T DelayInput1_DSTATE_jp;     /* '<S456>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_ft;     /* '<S455>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_m;      /* '<S451>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_k;      /* '<S452>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_g;      /* '<S453>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_g2;     /* '<S454>/Delay Input1' */
  boolean_T UnitDelay2_DSTATE_l;       /* '<S448>/Unit Delay2' */
  boolean_T UnitDelay4_DSTATE;         /* '<S448>/Unit Delay4' */
  boolean_T UnitDelay1_DSTATE_p;       /* '<S30>/Unit Delay1' */
  boolean_T DelayInput1_DSTATE_l;      /* '<S56>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_bdz;    /* '<S57>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_au;     /* '<S62>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_ne;     /* '<S63>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_ff;     /* '<S64>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_ev;     /* '<S58>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_o1g;    /* '<S65>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_os;     /* '<S68>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_b2;     /* '<S69>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_bm;     /* '<S61>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_d;      /* '<S66>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_b3;     /* '<S67>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_ae;     /* '<S59>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_mu;     /* '<S60>/Delay Input1' */
  boolean_T UnitDelay_DSTATE_i3;       /* '<S30>/Unit Delay' */
  boolean_T UnitDelay_DSTATE_e4;       /* '<S220>/Unit Delay' */
  boolean_T UnitDelay_DSTATE_n;        /* '<S225>/Unit Delay' */
  int8_T SwitchCase_ActiveSubsystem;   /* '<S2>/Switch Case' */
  int8_T Accumulator2_PrevResetState;  /* '<S22>/Accumulator2' */
  int8_T Accumulator_PrevResetState;   /* '<S22>/Accumulator' */
  int8_T If_ActiveSubsystem;           /* '<S25>/If' */
  int8_T Accumulator2_PrevResetState_c;/* '<S23>/Accumulator2' */
  int8_T Accumulator_PrevResetState_j; /* '<S23>/Accumulator' */
  int8_T If_ActiveSubsystem_h;         /* '<S217>/If' */
  int8_T If_ActiveSubsystem_o;         /* '<S220>/If' */
  int8_T If_ActiveSubsystem_d;         /* '<S222>/If' */
  uint8_T Accumulator2_IC_LOADING;     /* '<S23>/Accumulator2' */
  uint8_T Accumulator_IC_LOADING;      /* '<S23>/Accumulator' */
  uint8_T is_active_c4_Code_Gen_Model; /* '<S428>/Reefscape_Chart' */
  uint8_T is_Elevator_CoralArm_CoralWheel;/* '<S428>/Reefscape_Chart' */
  uint8_T is_Algae_Pickup_High;        /* '<S428>/Reefscape_Chart' */
  uint8_T is_Algae_Pickup_Low;         /* '<S428>/Reefscape_Chart' */
  uint8_T is_Algae_Score;              /* '<S428>/Reefscape_Chart' */
  uint8_T is_Coral;                    /* '<S428>/Reefscape_Chart' */
  uint8_T is_Coral_Eject;              /* '<S428>/Reefscape_Chart' */
  uint8_T is_Level_2;                  /* '<S428>/Reefscape_Chart' */
  uint8_T is_Level_3;                  /* '<S428>/Reefscape_Chart' */
  uint8_T is_Level_4_Auto;             /* '<S428>/Reefscape_Chart' */
  uint8_T is_Level_4_Teleop;           /* '<S428>/Reefscape_Chart' */
  uint8_T is_Coral_Score_Position;     /* '<S428>/Reefscape_Chart' */
  uint8_T is_Actions;                  /* '<S428>/Reefscape_Chart' */
  uint8_T is_Coral_Pickup_Prepare;     /* '<S428>/Reefscape_Chart' */
  uint8_T is_Set_Level;                /* '<S428>/Reefscape_Chart' */
  uint8_T is_Elevator_Height_Bottom;   /* '<S428>/Reefscape_Chart' */
  uint8_T is_Elevator_Height_Bottom_pre;/* '<S428>/Reefscape_Chart' */
  uint8_T is_End_Game_Climb;           /* '<S428>/Reefscape_Chart' */
  uint8_T is_Set_Level_m;              /* '<S428>/Reefscape_Chart' */
  uint8_T is_Algae_Wheels;             /* '<S428>/Reefscape_Chart' */
  uint8_T is_AT_On_Target_Timer;       /* '<S428>/Reefscape_Chart' */
  uint8_T is_active_c6_Code_Gen_Model; /* '<S30>/Reefscape_Auto_Steps' */
  uint8_T is_c6_Code_Gen_Model;        /* '<S30>/Reefscape_Auto_Steps' */
  uint8_T is_Center;                   /* '<S30>/Reefscape_Auto_Steps' */
  uint8_T is_Path_to_Reef;             /* '<S30>/Reefscape_Auto_Steps' */
  uint8_T is_Left_and_Right;           /* '<S30>/Reefscape_Auto_Steps' */
  uint8_T is_Path_to_Reef_1;           /* '<S30>/Reefscape_Auto_Steps' */
  uint8_T is_Drive;                    /* '<S30>/Reefscape_Auto_Steps' */
  uint8_T is_Path_to_Reef_2;           /* '<S30>/Reefscape_Auto_Steps' */
  uint8_T is_Path_to_Reef_2_v2;        /* '<S30>/Reefscape_Auto_Steps' */
  uint8_T is_active_c5_Code_Gen_Model; /* '<S33>/Reefscape_Chart' */
  uint8_T is_Elevator_CoralArm_CoralWhe_i;/* '<S33>/Reefscape_Chart' */
  uint8_T is_Algae_Pickup_High_l;      /* '<S33>/Reefscape_Chart' */
  uint8_T is_Algae_Pickup_Low_k;       /* '<S33>/Reefscape_Chart' */
  uint8_T is_Algae_Score_f;            /* '<S33>/Reefscape_Chart' */
  uint8_T is_Coral_h;                  /* '<S33>/Reefscape_Chart' */
  uint8_T is_Coral_Eject_a;            /* '<S33>/Reefscape_Chart' */
  uint8_T is_Level_2_h;                /* '<S33>/Reefscape_Chart' */
  uint8_T is_Level_3_l;                /* '<S33>/Reefscape_Chart' */
  uint8_T is_Level_4_Auto_b;           /* '<S33>/Reefscape_Chart' */
  uint8_T is_Level_4_Teleop_m;         /* '<S33>/Reefscape_Chart' */
  uint8_T is_Coral_Score_Position_e;   /* '<S33>/Reefscape_Chart' */
  uint8_T is_Actions_f;                /* '<S33>/Reefscape_Chart' */
  uint8_T is_Coral_Pickup_Prepare_k;   /* '<S33>/Reefscape_Chart' */
  uint8_T is_Set_Level_m3;             /* '<S33>/Reefscape_Chart' */
  uint8_T is_Elevator_Height_Bottom_h; /* '<S33>/Reefscape_Chart' */
  uint8_T is_Elevator_Height_Bottom_pre_p;/* '<S33>/Reefscape_Chart' */
  uint8_T is_End_Game_Climb_k;         /* '<S33>/Reefscape_Chart' */
  uint8_T is_Set_Level_o;              /* '<S33>/Reefscape_Chart' */
  uint8_T is_Algae_Wheels_o;           /* '<S33>/Reefscape_Chart' */
  uint8_T is_AT_On_Target_Timer_k;     /* '<S33>/Reefscape_Chart' */
  uint8_T is_active_c9_Code_Gen_Model; /* '<S24>/Chart' */
  uint8_T is_c9_Code_Gen_Model;        /* '<S24>/Chart' */
  uint8_T is_active_c3_Controls_Component;/* '<S11>/Debounce' */
  uint8_T is_c3_Controls_Components_lib;/* '<S11>/Debounce' */
  uint8_T is_active_c3_Controls_Compone_a;/* '<S10>/Debounce' */
  uint8_T is_c3_Controls_Components_lib_g;/* '<S10>/Debounce' */
  boolean_T icLoad;                    /* '<S134>/MemoryX' */
  boolean_T Set_L1;                    /* '<S428>/Reefscape_Chart' */
  boolean_T Set_L2;                    /* '<S428>/Reefscape_Chart' */
  boolean_T Set_L3;                    /* '<S428>/Reefscape_Chart' */
  boolean_T Set_L4;                    /* '<S428>/Reefscape_Chart' */
  boolean_T Set_L1_m;                  /* '<S33>/Reefscape_Chart' */
  boolean_T Set_L2_n;                  /* '<S33>/Reefscape_Chart' */
  boolean_T Set_L3_f;                  /* '<S33>/Reefscape_Chart' */
  boolean_T Set_L4_j;                  /* '<S33>/Reefscape_Chart' */
  boolean_T Relay_Mode;                /* '<S247>/Relay' */
  boolean_T EnabledSubsystem_MODE;     /* '<S161>/Enabled Subsystem' */
  boolean_T MeasurementUpdate_MODE;    /* '<S154>/MeasurementUpdate' */
} DW_Code_Gen_Model_T;

/* Invariant block signals (default storage) */
typedef struct {
  const real_T UnaryMinus;             /* '<S76>/Unary Minus' */
  const real_T UnaryMinus_m;           /* '<S94>/Unary Minus' */
  const real_T Cos5;                   /* '<S293>/Cos5' */
  const real_T Sin5;                   /* '<S293>/Sin5' */
  const real_T Cos5_g;                 /* '<S314>/Cos5' */
  const real_T Sin5_m;                 /* '<S314>/Sin5' */
  const real_T Cos5_i;                 /* '<S335>/Cos5' */
  const real_T Sin5_e;                 /* '<S335>/Sin5' */
  const real_T Cos5_b;                 /* '<S356>/Cos5' */
  const real_T Sin5_c;                 /* '<S356>/Sin5' */
  const real_T TrigonometricFunction;  /* '<S23>/Trigonometric Function' */
  const real_T TrigonometricFunction1; /* '<S23>/Trigonometric Function1' */
  const real_T UnaryMinus_g;           /* '<S23>/Unary Minus' */
  const real_T Rotationmatrixfromlocaltogl[4];
                              /* '<S23>/Rotation matrix from local to global' */
  const real_T DeadZone;               /* '<S33>/Dead Zone' */
  const real_T DeadZone1;              /* '<S33>/Dead Zone1' */
  const real_T Atan2;                  /* '<S366>/Atan2' */
  const real_T FL_Tangent_Angle;       /* '<S366>/Add' */
  const real_T Atan1;                  /* '<S366>/Atan1' */
  const real_T FR_Tangent_Angle;       /* '<S366>/Add1' */
  const real_T Atan3;                  /* '<S366>/Atan3' */
  const real_T BL_Tangent_Angle;       /* '<S366>/Add2' */
  const real_T Atan4;                  /* '<S366>/Atan4' */
  const real_T BR_Tangent_Angle;       /* '<S366>/Add3' */
} ConstB_Code_Gen_Model_T;

/* Constant parameters (default storage) */
typedef struct {
  /* Expression: Coral_Arm_Lower_Limit_Out
   * Referenced by: '<S9>/Range of Motion Protection Limit'
   */
  real_T RangeofMotionProtectionLimit_ta[75];

  /* Expression: Coral_Arm_Lower_Limit_Elevator_Height_Input
   * Referenced by: '<S9>/Range of Motion Protection Limit'
   */
  real_T RangeofMotionProtectionLimit_bp[75];

  /* Expression: Spline_Capture_Radius
   * Referenced by: '<S212>/Capture Radius'
   */
  real_T CaptureRadius_tableData[4];

  /* Pooled Parameter (Expression: Spline_Velocity_Axis)
   * Referenced by:
   *   '<S212>/Capture Radius'
   *   '<S212>/Lookahead Distance'
   */
  real_T pooled10[4];

  /* Expression: Spline_Lookahead_Dist
   * Referenced by: '<S212>/Lookahead Distance'
   */
  real_T LookaheadDistance_tableData[4];

  /* Expression: All_Paths_Ref_Poses
   * Referenced by: '<S30>/Constant'
   */
  real_T Constant_Value_k[800];

  /* Expression: All_Paths_Num_Poses
   * Referenced by: '<S30>/1-D Lookup Table'
   */
  real_T uDLookupTable_tableData[20];

  /* Expression: Steering_Mod_Drv_out
   * Referenced by: '<S449>/Modulation_Drv'
   */
  real_T Modulation_Drv_tableData[21];

  /* Expression: Steering_Mod_Drv_in
   * Referenced by: '<S449>/Modulation_Drv'
   */
  real_T Modulation_Drv_bp01Data[21];

  /* Expression: Steering_Mod_Str_Rel_out
   * Referenced by: '<S448>/Modulation_Str_Y_Rel'
   */
  real_T Modulation_Str_Y_Rel_tableData[21];

  /* Expression: Steering_Mod_Str_Rel_in
   * Referenced by: '<S448>/Modulation_Str_Y_Rel'
   */
  real_T Modulation_Str_Y_Rel_bp01Data[21];

  /* Pooled Parameter (Expression: Rotation_Local_Inv)
   * Referenced by:
   *   '<S22>/Constant4'
   *   '<S23>/Constant4'
   */
  real_T pooled27[16];

  /* Pooled Parameter (Expression: Elevator_Height_Lower_Limit_Out)
   * Referenced by:
   *   '<S13>/Range of Motion Protection Limit'
   *   '<S13>/Range of Motion Protection Limit1'
   */
  real_T pooled35[96];

  /* Pooled Parameter (Expression: Elevator_Height_Lower_Limit_Coral_Arm_Input)
   * Referenced by:
   *   '<S13>/Range of Motion Protection Limit'
   *   '<S13>/Range of Motion Protection Limit1'
   */
  real_T pooled36[96];

  /* Expression: Coral_Arm_DC_Upper_Limit_Out
   * Referenced by: '<S9>/1-D Lookup Table'
   */
  real_T uDLookupTable_tableData_l[3];

  /* Expression: Coral_Arm_DC_Upper_Limit_Angle_In
   * Referenced by: '<S9>/1-D Lookup Table'
   */
  real_T uDLookupTable_bp01Data[3];

  /* Expression: Coral_Arm_DC_Lower_Limit_Out
   * Referenced by: '<S9>/1-D Lookup Table1'
   */
  real_T uDLookupTable1_tableData[2];

  /* Expression: Coral_Arm_DC_Lower_Limit_Angle_In
   * Referenced by: '<S9>/1-D Lookup Table1'
   */
  real_T uDLookupTable1_bp01Data[2];

  /* Pooled Parameter (Expression: Drive_Motor_Control_Scale_Factor)
   * Referenced by:
   *   '<S284>/1-D Lookup Table'
   *   '<S305>/1-D Lookup Table'
   *   '<S326>/1-D Lookup Table'
   *   '<S347>/1-D Lookup Table'
   */
  real_T pooled37[2];

  /* Pooled Parameter (Expression: Drive_Motor_Control_Module_Angle_Error)
   * Referenced by:
   *   '<S284>/1-D Lookup Table'
   *   '<S305>/1-D Lookup Table'
   *   '<S326>/1-D Lookup Table'
   *   '<S347>/1-D Lookup Table'
   */
  real_T pooled38[2];
} ConstP_Code_Gen_Model_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T GameState;                    /* '<Root>/GameState' */
  real_T IsBlueAlliance;               /* '<Root>/IsBlueAlliance' */
  real_T MatchTime;                    /* '<Root>/MatchTime' */
  real_T Joystick_Left_X;              /* '<Root>/Joystick_Left_X' */
  real_T Joystick_Left_Y;              /* '<Root>/Joystick_Left_Y' */
  real_T Joystick_Left_Z;              /* '<Root>/Joystick_Left_Z' */
  real_T Joystick_Right_X;             /* '<Root>/Joystick_Right_X' */
  real_T Joystick_Right_Y;             /* '<Root>/Joystick_Right_Y' */
  real_T Joystick_Right_Z;             /* '<Root>/Joystick_Right_Z' */
  real_T Joystick_Left_B1;             /* '<Root>/Joystick_Left_B1' */
  real_T Joystick_Left_B2;             /* '<Root>/Joystick_Left_B2' */
  real_T Joystick_Left_B3;             /* '<Root>/Joystick_Left_B3' */
  real_T Joystick_Left_B4;             /* '<Root>/Joystick_Left_B4' */
  real_T Joystick_Left_B5;             /* '<Root>/Joystick_Left_B5' */
  real_T Joystick_Left_B6;             /* '<Root>/Joystick_Left_B6' */
  real_T Joystick_Left_B7;             /* '<Root>/Joystick_Left_B7' */
  real_T Joystick_Left_B8;             /* '<Root>/Joystick_Left_B8' */
  real_T Joystick_Left_B9;             /* '<Root>/Joystick_Left_B9' */
  real_T Joystick_Left_B10;            /* '<Root>/Joystick_Left_B10' */
  real_T Joystick_Left_B11;            /* '<Root>/Joystick_Left_B11' */
  real_T Joystick_Left_B12;            /* '<Root>/Joystick_Left_B12' */
  real_T Joystick_Left_B13;            /* '<Root>/Joystick_Left_B13' */
  real_T Joystick_Left_B14;            /* '<Root>/Joystick_Left_B14' */
  real_T Joystick_Left_B15;            /* '<Root>/Joystick_Left_B15' */
  real_T Joystick_Left_B16;            /* '<Root>/Joystick_Left_B16' */
  real_T Joystick_Left_POV;            /* '<Root>/Joystick_Left_POV' */
  real_T Joystick_Right_B1;            /* '<Root>/Joystick_Right_B1' */
  real_T Joystick_Right_B2;            /* '<Root>/Joystick_Right_B2' */
  real_T Joystick_Right_B3;            /* '<Root>/Joystick_Right_B3' */
  real_T Joystick_Right_B4;            /* '<Root>/Joystick_Right_B4' */
  real_T Joystick_Right_B5;            /* '<Root>/Joystick_Right_B5' */
  real_T Joystick_Right_B6;            /* '<Root>/Joystick_Right_B6' */
  real_T Joystick_Right_B7;            /* '<Root>/Joystick_Right_B7' */
  real_T Joystick_Right_B8;            /* '<Root>/Joystick_Right_B8' */
  real_T Joystick_Right_B9;            /* '<Root>/Joystick_Right_B9' */
  real_T Joystick_Right_B10;           /* '<Root>/Joystick_Right_B10' */
  real_T Joystick_Right_B11;           /* '<Root>/Joystick_Right_B11' */
  real_T Joystick_Right_B12;           /* '<Root>/Joystick_Right_B12' */
  real_T Joystick_Right_B13;           /* '<Root>/Joystick_Right_B13' */
  real_T Joystick_Right_B14;           /* '<Root>/Joystick_Right_B14' */
  real_T Joystick_Right_B15;           /* '<Root>/Joystick_Right_B15' */
  real_T Joystick_Right_B16;           /* '<Root>/Joystick_Right_B16' */
  real_T Joystick_Right_POV;           /* '<Root>/Joystick_Right_POV' */
  real_T Gamepad_Stick_Left_X;         /* '<Root>/Gamepad_Stick_Left_X' */
  real_T Gamepad_Stick_Left_Y;         /* '<Root>/Gamepad_Stick_Left_Y' */
  real_T Gamepad_Stick_Right_X;        /* '<Root>/Gamepad_Stick_Right_X' */
  real_T Gamepad_Stick_Right_Y;        /* '<Root>/Gamepad_Stick_Right_Y' */
  real_T Gamepad_B1_A;                 /* '<Root>/Gamepad_B1_A' */
  real_T Gamepad_B2_B;                 /* '<Root>/Gamepad_B2_B' */
  real_T Gamepad_B3_X;                 /* '<Root>/Gamepad_B3_X' */
  real_T Gamepad_B4_Y;                 /* '<Root>/Gamepad_B4_Y' */
  real_T Gamepad_LB;                   /* '<Root>/Gamepad_LB' */
  real_T Gamepad_LT;                   /* '<Root>/Gamepad_LT' */
  real_T Gamepad_RB;                   /* '<Root>/Gamepad_RB' */
  real_T Gamepad_RT;                   /* '<Root>/Gamepad_RT' */
  real_T Gamepad_Back;                 /* '<Root>/Gamepad_Back' */
  real_T Gamepad_Start;                /* '<Root>/Gamepad_Start' */
  real_T Gamepad_POV;                  /* '<Root>/Gamepad_POV' */
  real_T Gyro_Angle;                   /* '<Root>/Gyro_Angle' */
  real_T FrontLeft_Drive_Motor_Speed; /* '<Root>/FrontLeft_Drive_Motor_Speed' */
  real_T FrontRight_Drive_Motor_Speed;
                                     /* '<Root>/FrontRight_Drive_Motor_Speed' */
  real_T BackLeft_Drive_Motor_Speed;   /* '<Root>/BackLeft_Drive_Motor_Speed' */
  real_T BackRight_Drive_Motor_Speed; /* '<Root>/BackRight_Drive_Motor_Speed' */
  real_T FrontLeft_Drive_Motor_Rev;    /* '<Root>/FrontLeft_Drive_Motor_Rev' */
  real_T FrontRight_Drive_Motor_Rev;   /* '<Root>/FrontRight_Drive_Motor_Rev' */
  real_T BackLeft_Drive_Motor_Rev;     /* '<Root>/BackLeft_Drive_Motor_Rev' */
  real_T BackRight_Drive_Motor_Rev;    /* '<Root>/BackRight_Drive_Motor_Rev' */
  real_T FrontLeft_Steer_Rev;          /* '<Root>/FrontLeft_Steer_Rev' */
  real_T FrontRight_Steer_Rev;         /* '<Root>/FrontRight_Steer_Rev' */
  real_T BackLeft_Steer_Rev;           /* '<Root>/BackLeft_Steer_Rev' */
  real_T BackRight_Steer_Rev;          /* '<Root>/BackRight_Steer_Rev' */
  real_T FrontLeft_Turn_Offset;        /* '<Root>/FrontLeft_Turn_Offset' */
  real_T FrontRight_Turn_Offset;       /* '<Root>/FrontRight_Turn_Offset' */
  real_T BackLeft_Turn_Offset;         /* '<Root>/BackLeft_Turn_Offset' */
  real_T BackRight_Turn_Offset;        /* '<Root>/BackRight_Turn_Offset' */
  real_T Limelight_Est_Pose_X;         /* '<Root>/Limelight_Est_Pose_X' */
  real_T Limelight_Est_Pose_Y;         /* '<Root>/Limelight_Est_Pose_Y' */
  real_T Num_Tags_Detected;            /* '<Root>/Num_Tags_Detected' */
  real_T Elevator_Motor_Rev;           /* '<Root>/Elevator_Motor_Rev' */
  real_T Elevator_Limit_Switch_Bottom;
                                     /* '<Root>/Elevator_Limit_Switch_Bottom' */
  real_T Elevator_Limit_Switch_Top;    /* '<Root>/Elevator_Limit_Switch_Top' */
  real_T Coral_Arm_Angle_Measured_Raw;
                                     /* '<Root>/Coral_Arm_Angle_Measured_Raw' */
  real_T Coral_TOF_Distance;           /* '<Root>/Coral_TOF_Distance' */
  real_T Coral_Limit_Switch;           /* '<Root>/Coral_Limit_Switch' */
  real_T Algae_Limit_Switch;           /* '<Root>/Algae_Limit_Switch' */
  real_T Limelight_Tag_X;              /* '<Root>/Limelight_Tag_X' */
  real_T Limelight_Tag_Y;              /* '<Root>/Limelight_Tag_Y' */
  real_T Limelight_Tag_Angle;          /* '<Root>/Limelight_Tag_Angle' */
  real_T Winch_Revs;                   /* '<Root>/Winch_Revs' */
  real_T Actuator_Revs;                /* '<Root>/Actuator_Revs' */
} ExtU_Code_Gen_Model_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T FrontLeft_Steer_DutyCycle;    /* '<Root>/FrontLeft_Steer_DutyCycle' */
  real_T FrontLeft_Drive_DutyCycle;    /* '<Root>/FrontLeft_Drive_DutyCycle' */
  real_T FrontRight_Steer_DutyCycle;   /* '<Root>/FrontRight_Steer_DutyCycle' */
  real_T FrontRight_Drive_DutyCycle;   /* '<Root>/FrontRight_Drive_DutyCycle' */
  real_T BackLeft_Steer_DutyCycle;     /* '<Root>/BackLeft_Steer_DutyCycle' */
  real_T BackLeft_Drive_DutyCycle;     /* '<Root>/BackLeft_Drive_DutyCycle' */
  real_T BackRight_Steer_DutyCycle;    /* '<Root>/BackRight_Steer_DutyCycle' */
  real_T BackRight_Drive_DutyCycle;    /* '<Root>/BackRight_Drive_DutyCycle' */
  boolean_T Enable_Wheels;             /* '<Root>/Enable_Wheels' */
  boolean_T Reset_Wheel_Offsets;       /* '<Root>/Reset_Wheel_Offsets' */
  boolean_T Disable_Wheels;            /* '<Root>/Disable_Wheels' */
  boolean_T Swerve_Motors_Disabled;    /* '<Root>/Swerve_Motors_Disabled' */
  real_T Elevator_DutyCycle;           /* '<Root>/Elevator_DutyCycle' */
  real_T Coral_Arm_DutyCycle;          /* '<Root>/Coral_Arm_DutyCycle' */
  real_T Coral_Wheel_DutyCycle;        /* '<Root>/Coral_Wheel_DutyCycle' */
  real_T Algae_Wheel_Outside_DutyCycle;
                                    /* '<Root>/Algae_Wheel_Outside_DutyCycle' */
  real_T Algae_Wheel_Inside_DutyCycle;
                                     /* '<Root>/Algae_Wheel_Inside_DutyCycle' */
  real_T Gyro_Angle_Offset_Total;      /* '<Root>/Gyro_Angle_Offset_Total' */
  real_T Winch_DutyCycle;              /* '<Root>/Winch_DutyCycle' */
  real_T Actuator_DutyCycle;           /* '<Root>/Actuator_DutyCycle' */
  real_T CANdle_LED_ID;                /* '<Root>/CANdle_LED_ID' */
  uint8_T Desired_Pipeline;            /* '<Root>/Desired_Pipeline' */
} ExtY_Code_Gen_Model_T;

/* Real-time Model Data Structure */
struct tag_RTM_Code_Gen_Model_T {
  const char_T * volatile errorStatus;
};

/* Block signals (default storage) */
extern B_Code_Gen_Model_T Code_Gen_Model_B;

/* Block states (default storage) */
extern DW_Code_Gen_Model_T Code_Gen_Model_DW;

/* External inputs (root inport signals with default storage) */
extern ExtU_Code_Gen_Model_T Code_Gen_Model_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_Code_Gen_Model_T Code_Gen_Model_Y;
extern const ConstB_Code_Gen_Model_T Code_Gen_Model_ConstB;/* constant block i/o */

/* Constant parameters (default storage) */
extern const ConstP_Code_Gen_Model_T Code_Gen_Model_ConstP;

/*
 * Exported Global Parameters
 *
 * Note: Exported global parameters are tunable parameters with an exported
 * global storage class designation.  Code generation will declare the memory for
 * these parameters and exports their symbols.
 *
 */
extern real_T AT_Integral_Enable_Error_Angle;
                                     /* Variable: AT_Integral_Enable_Error_Angle
                                      * Referenced by:
                                      *   '<S432>/Constant'
                                      *   '<S38>/Constant'
                                      */
extern real_T AT_Integral_Enable_Error_XY;/* Variable: AT_Integral_Enable_Error_XY
                                           * Referenced by:
                                           *   '<S439>/Constant'
                                           *   '<S440>/Constant'
                                           *   '<S45>/Constant'
                                           *   '<S46>/Constant'
                                           */
extern real_T AT_Max_Error_Angle;      /* Variable: AT_Max_Error_Angle
                                        * Referenced by:
                                        *   '<S438>/Constant'
                                        *   '<S44>/Constant'
                                        */
extern real_T AT_Max_Error_XY;         /* Variable: AT_Max_Error_XY
                                        * Referenced by:
                                        *   '<S436>/Constant'
                                        *   '<S437>/Constant'
                                        *   '<S42>/Constant'
                                        *   '<S43>/Constant'
                                        */
extern real_T AT_On_Target_Time;       /* Variable: AT_On_Target_Time
                                        * Referenced by:
                                        *   '<S428>/Reefscape_Chart'
                                        *   '<S33>/Reefscape_Chart'
                                        */
extern real_T AT_Reef_Target_Algae_X;  /* Variable: AT_Reef_Target_Algae_X
                                        * Referenced by:
                                        *   '<S426>/Constant7'
                                        *   '<S31>/Constant7'
                                        */
extern real_T AT_Reef_Target_Algae_Y;  /* Variable: AT_Reef_Target_Algae_Y
                                        * Referenced by:
                                        *   '<S426>/Constant6'
                                        *   '<S31>/Constant6'
                                        */
extern real_T AT_Reef_Target_Center_Y; /* Variable: AT_Reef_Target_Center_Y
                                        * Referenced by:
                                        *   '<S426>/Constant3'
                                        *   '<S31>/Constant3'
                                        */
extern real_T AT_Reef_Target_L1_X;     /* Variable: AT_Reef_Target_L1_X
                                        * Referenced by:
                                        *   '<S426>/Constant4'
                                        *   '<S31>/Constant4'
                                        */
extern real_T AT_Reef_Target_L2_L3_X;  /* Variable: AT_Reef_Target_L2_L3_X
                                        * Referenced by:
                                        *   '<S426>/Constant'
                                        *   '<S31>/Constant'
                                        */
extern real_T AT_Reef_Target_L4_X;     /* Variable: AT_Reef_Target_L4_X
                                        * Referenced by:
                                        *   '<S426>/Constant5'
                                        *   '<S31>/Constant5'
                                        */
extern real_T AT_Reef_Target_Left_Y;   /* Variable: AT_Reef_Target_Left_Y
                                        * Referenced by:
                                        *   '<S426>/Constant1'
                                        *   '<S31>/Constant1'
                                        */
extern real_T AT_Reef_Target_Right_Y;  /* Variable: AT_Reef_Target_Right_Y
                                        * Referenced by: '<S426>/Constant2'
                                        */
extern real_T AT_Steering_Error_Angle_Gain_P;
                                     /* Variable: AT_Steering_Error_Angle_Gain_P
                                      * Referenced by:
                                      *   '<S35>/Constant4'
                                      *   '<S448>/Constant4'
                                      */
extern real_T AT_Steering_Speed_Max;   /* Variable: AT_Steering_Speed_Max
                                        * Referenced by:
                                        *   '<S35>/Constant10'
                                        *   '<S448>/Constant10'
                                        */
extern real_T AT_Translation_Control_Gain_Field;
                                  /* Variable: AT_Translation_Control_Gain_Field
                                   * Referenced by: '<S449>/Gain2'
                                   */
extern real_T AT_Translation_Control_Gain_Relative;
                               /* Variable: AT_Translation_Control_Gain_Relative
                                * Referenced by:
                                *   '<S35>/Gain1'
                                *   '<S449>/Gain1'
                                */
extern real_T AT_Translation_Speed_Max_Field;
                                     /* Variable: AT_Translation_Speed_Max_Field
                                      * Referenced by: '<S449>/Constant5'
                                      */
extern real_T AT_Translation_Speed_Max_Relative;
                                  /* Variable: AT_Translation_Speed_Max_Relative
                                   * Referenced by:
                                   *   '<S35>/Constant8'
                                   *   '<S449>/Constant8'
                                   */
extern real_T Actuator_DC;             /* Variable: Actuator_DC
                                        * Referenced by: '<S15>/Constant6'
                                        */
extern real_T Actuator_Rev_Startup_Range;/* Variable: Actuator_Rev_Startup_Range
                                          * Referenced by: '<S110>/Constant'
                                          */
extern real_T Actuator_Rev_Target;     /* Variable: Actuator_Rev_Target
                                        * Referenced by: '<S111>/Constant'
                                        */
extern real_T Algae_Eject_Time;        /* Variable: Algae_Eject_Time
                                        * Referenced by:
                                        *   '<S428>/Reefscape_Chart'
                                        *   '<S33>/Reefscape_Chart'
                                        */
extern real_T Algae_Hold_DC;           /* Variable: Algae_Hold_DC
                                        * Referenced by:
                                        *   '<S428>/Reefscape_Chart'
                                        *   '<S33>/Reefscape_Chart'
                                        */
extern real_T Algae_Pull_In_DC;        /* Variable: Algae_Pull_In_DC
                                        * Referenced by:
                                        *   '<S428>/Reefscape_Chart'
                                        *   '<S33>/Reefscape_Chart'
                                        */
extern real_T Algae_Push_Out_DC;       /* Variable: Algae_Push_Out_DC
                                        * Referenced by:
                                        *   '<S428>/Reefscape_Chart'
                                        *   '<S33>/Reefscape_Chart'
                                        */
extern real_T Auto_Algae_Height_Time;  /* Variable: Auto_Algae_Height_Time
                                        * Referenced by: '<S30>/Reefscape_Auto_Steps'
                                        */
extern real_T Auto_Backup_Time_Processor;/* Variable: Auto_Backup_Time_Processor
                                          * Referenced by: '<S30>/Reefscape_Auto_Steps'
                                          */
extern real_T Auto_Backup_Time_Reef;   /* Variable: Auto_Backup_Time_Reef
                                        * Referenced by: '<S30>/Reefscape_Auto_Steps'
                                        */
extern real_T Auto_Path1_Delay_to_L2_Time;/* Variable: Auto_Path1_Delay_to_L2_Time
                                           * Referenced by: '<S30>/Reefscape_Auto_Steps'
                                           */
extern real_T Auto_Path1_Delay_to_L4_Time;/* Variable: Auto_Path1_Delay_to_L4_Time
                                           * Referenced by: '<S30>/Reefscape_Auto_Steps'
                                           */
extern real_T Auto_Path2_Delay_to_L4_Time;/* Variable: Auto_Path2_Delay_to_L4_Time
                                           * Referenced by: '<S30>/Reefscape_Auto_Steps'
                                           */
extern real_T Auto_Speed_Algae;        /* Variable: Auto_Speed_Algae
                                        * Referenced by: '<S30>/Reefscape_Auto_Steps'
                                        */
extern real_T Auto_Speed_Coral;        /* Variable: Auto_Speed_Coral
                                        * Referenced by: '<S30>/Reefscape_Auto_Steps'
                                        */
extern real_T Auto_Speed_Processor;    /* Variable: Auto_Speed_Processor
                                        * Referenced by: '<S30>/Reefscape_Auto_Steps'
                                        */
extern real_T Auto_Speed_Reef;         /* Variable: Auto_Speed_Reef
                                        * Referenced by: '<S30>/Reefscape_Auto_Steps'
                                        */
extern real_T Auto_Starting_Position;  /* Variable: Auto_Starting_Position
                                        * Referenced by:
                                        *   '<S16>/Constant2'
                                        *   '<S30>/Constant1'
                                        */
extern real_T Boost_Trigger_Decreasing_Limit;
                                     /* Variable: Boost_Trigger_Decreasing_Limit
                                      * Referenced by: '<S463>/Constant1'
                                      */
extern real_T Boost_Trigger_High_Speed;/* Variable: Boost_Trigger_High_Speed
                                        * Referenced by:
                                        *   '<S459>/Constant'
                                        *   '<S459>/Saturation'
                                        */
extern real_T Boost_Trigger_Increasing_Limit;
                                     /* Variable: Boost_Trigger_Increasing_Limit
                                      * Referenced by: '<S463>/Constant3'
                                      */
extern real_T Boost_Trigger_Low_Speed; /* Variable: Boost_Trigger_Low_Speed
                                        * Referenced by: '<S459>/Constant1'
                                        */
extern real_T Coral_Arm_Angle_Coral_Score_Lower_Rate;
                             /* Variable: Coral_Arm_Angle_Coral_Score_Lower_Rate
                              * Referenced by:
                              *   '<S428>/Reefscape_Chart'
                              *   '<S33>/Reefscape_Chart'
                              */
extern real_T Coral_Arm_Angle_Error_Threshold;
                                    /* Variable: Coral_Arm_Angle_Error_Threshold
                                     * Referenced by:
                                     *   '<S428>/Reefscape_Chart'
                                     *   '<S33>/Reefscape_Chart'
                                     */
extern real_T Coral_Arm_Angle_L1;      /* Variable: Coral_Arm_Angle_L1
                                        * Referenced by:
                                        *   '<S428>/Reefscape_Chart'
                                        *   '<S33>/Reefscape_Chart'
                                        */
extern real_T Coral_Arm_Angle_L2;      /* Variable: Coral_Arm_Angle_L2
                                        * Referenced by:
                                        *   '<S428>/Reefscape_Chart'
                                        *   '<S33>/Reefscape_Chart'
                                        */
extern real_T Coral_Arm_Angle_L3;      /* Variable: Coral_Arm_Angle_L3
                                        * Referenced by:
                                        *   '<S428>/Reefscape_Chart'
                                        *   '<S33>/Reefscape_Chart'
                                        */
extern real_T Coral_Arm_Angle_L4;      /* Variable: Coral_Arm_Angle_L4
                                        * Referenced by:
                                        *   '<S428>/Reefscape_Chart'
                                        *   '<S33>/Reefscape_Chart'
                                        */
extern real_T Coral_Arm_Angle_L4_Eject_Auto;
                                      /* Variable: Coral_Arm_Angle_L4_Eject_Auto
                                       * Referenced by:
                                       *   '<S428>/Reefscape_Chart'
                                       *   '<S33>/Reefscape_Chart'
                                       */
extern real_T Coral_Arm_Angle_L4_Eject_Teleop;
                                    /* Variable: Coral_Arm_Angle_L4_Eject_Teleop
                                     * Referenced by:
                                     *   '<S428>/Reefscape_Chart'
                                     *   '<S33>/Reefscape_Chart'
                                     */
extern real_T Coral_Arm_Angle_Neg_Threshold;
                                      /* Variable: Coral_Arm_Angle_Neg_Threshold
                                       * Referenced by: '<S73>/Constant'
                                       */
extern real_T Coral_Arm_Angle_Pos_Threshold;
                                      /* Variable: Coral_Arm_Angle_Pos_Threshold
                                       * Referenced by:
                                       *   '<S74>/Constant'
                                       *   '<S75>/Constant'
                                       */
extern real_T Coral_Arm_Angle_Start;   /* Variable: Coral_Arm_Angle_Start
                                        * Referenced by:
                                        *   '<S428>/Reefscape_Chart'
                                        *   '<S33>/Reefscape_Chart'
                                        */
extern real_T Coral_Arm_Angle_Start_Thresh;/* Variable: Coral_Arm_Angle_Start_Thresh
                                            * Referenced by:
                                            *   '<S428>/Reefscape_Chart'
                                            *   '<S33>/Reefscape_Chart'
                                            */
extern real_T Coral_Arm_Angle_Up;      /* Variable: Coral_Arm_Angle_Up
                                        * Referenced by:
                                        *   '<S428>/Reefscape_Chart'
                                        *   '<S33>/Reefscape_Chart'
                                        */
extern real_T Coral_Arm_DC_Inc_RL;     /* Variable: Coral_Arm_DC_Inc_RL
                                        * Referenced by: '<S76>/Constant3'
                                        */
extern real_T Coral_Arm_Gain_Int;      /* Variable: Coral_Arm_Gain_Int
                                        * Referenced by: '<S77>/Gain2'
                                        */
extern real_T Coral_Arm_Gain_Prop;     /* Variable: Coral_Arm_Gain_Prop
                                        * Referenced by: '<S77>/Gain1'
                                        */
extern real_T Coral_Arm_Int_IC;        /* Variable: Coral_Arm_Int_IC
                                        * Referenced by: '<S77>/Constant3'
                                        */
extern real_T Coral_Arm_Int_LL;        /* Variable: Coral_Arm_Int_LL
                                        * Referenced by: '<S77>/Saturation1'
                                        */
extern real_T Coral_Arm_Int_UL;        /* Variable: Coral_Arm_Int_UL
                                        * Referenced by: '<S77>/Saturation1'
                                        */
extern real_T Coral_Arm_Manual_Gain;   /* Variable: Coral_Arm_Manual_Gain
                                        * Referenced by:
                                        *   '<S428>/Reefscape_Chart'
                                        *   '<S33>/Reefscape_Chart'
                                        */
extern real_T Coral_Arm_Neg90_DC;      /* Variable: Coral_Arm_Neg90_DC
                                        * Referenced by: '<S9>/Constant2'
                                        */
extern real_T Coral_Arm_Pos90_DC;      /* Variable: Coral_Arm_Pos90_DC
                                        * Referenced by: '<S9>/Constant1'
                                        */
extern real_T Coral_Detect_Distance;   /* Variable: Coral_Detect_Distance
                                        * Referenced by:
                                        *   '<S30>/Reefscape_Auto_Steps'
                                        *   '<S428>/Reefscape_Chart'
                                        *   '<S33>/Reefscape_Chart'
                                        */
extern real_T Coral_Eject_Time;        /* Variable: Coral_Eject_Time
                                        * Referenced by:
                                        *   '<S428>/Reefscape_Chart'
                                        *   '<S33>/Reefscape_Chart'
                                        */
extern real_T Coral_Motor_DC_Eject;    /* Variable: Coral_Motor_DC_Eject
                                        * Referenced by:
                                        *   '<S428>/Reefscape_Chart'
                                        *   '<S33>/Reefscape_Chart'
                                        */
extern real_T Coral_Motor_DC_Hold;     /* Variable: Coral_Motor_DC_Hold
                                        * Referenced by:
                                        *   '<S428>/Reefscape_Chart'
                                        *   '<S33>/Reefscape_Chart'
                                        */
extern real_T Coral_Motor_DC_Pickup;   /* Variable: Coral_Motor_DC_Pickup
                                        * Referenced by:
                                        *   '<S428>/Reefscape_Chart'
                                        *   '<S33>/Reefscape_Chart'
                                        */
extern real_T Drive_Engage_Hook_Angle; /* Variable: Drive_Engage_Hook_Angle
                                        * Referenced by: '<S449>/Constant9'
                                        */
extern real_T Drive_Engage_Hook_Speed; /* Variable: Drive_Engage_Hook_Speed
                                        * Referenced by: '<S449>/Constant7'
                                        */
extern real_T Drive_Motor_Control_D;   /* Variable: Drive_Motor_Control_D
                                        * Referenced by:
                                        *   '<S282>/Constant3'
                                        *   '<S303>/Constant3'
                                        *   '<S324>/Constant3'
                                        *   '<S345>/Constant3'
                                        */
extern real_T Drive_Motor_Control_D_FilterCoeff;
                                  /* Variable: Drive_Motor_Control_D_FilterCoeff
                                   * Referenced by:
                                   *   '<S282>/Constant2'
                                   *   '<S303>/Constant2'
                                   *   '<S324>/Constant2'
                                   *   '<S345>/Constant2'
                                   */
extern real_T Drive_Motor_Control_D_LL;/* Variable: Drive_Motor_Control_D_LL
                                        * Referenced by:
                                        *   '<S282>/Saturation'
                                        *   '<S303>/Saturation'
                                        *   '<S324>/Saturation'
                                        *   '<S345>/Saturation'
                                        */
extern real_T Drive_Motor_Control_D_UL;/* Variable: Drive_Motor_Control_D_UL
                                        * Referenced by:
                                        *   '<S282>/Saturation'
                                        *   '<S303>/Saturation'
                                        *   '<S324>/Saturation'
                                        *   '<S345>/Saturation'
                                        */
extern real_T Drive_Motor_Control_FF;  /* Variable: Drive_Motor_Control_FF
                                        * Referenced by:
                                        *   '<S282>/Gain'
                                        *   '<S303>/Gain'
                                        *   '<S324>/Gain'
                                        *   '<S345>/Gain'
                                        */
extern real_T Drive_Motor_Control_I;   /* Variable: Drive_Motor_Control_I
                                        * Referenced by:
                                        *   '<S282>/Gain2'
                                        *   '<S303>/Gain2'
                                        *   '<S324>/Gain2'
                                        *   '<S345>/Gain2'
                                        */
extern real_T Drive_Motor_Control_I_LL;/* Variable: Drive_Motor_Control_I_LL
                                        * Referenced by:
                                        *   '<S282>/Saturation1'
                                        *   '<S303>/Saturation1'
                                        *   '<S324>/Saturation1'
                                        *   '<S345>/Saturation1'
                                        */
extern real_T Drive_Motor_Control_I_UL;/* Variable: Drive_Motor_Control_I_UL
                                        * Referenced by:
                                        *   '<S282>/Saturation1'
                                        *   '<S303>/Saturation1'
                                        *   '<S324>/Saturation1'
                                        *   '<S345>/Saturation1'
                                        */
extern real_T Drive_Motor_Control_P;   /* Variable: Drive_Motor_Control_P
                                        * Referenced by:
                                        *   '<S282>/Gain1'
                                        *   '<S303>/Gain1'
                                        *   '<S324>/Gain1'
                                        *   '<S345>/Gain1'
                                        */
extern real_T Drive_Motor_Control_Sign_Change_Deadband;
                           /* Variable: Drive_Motor_Control_Sign_Change_Deadband
                            * Referenced by:
                            *   '<S287>/Constant'
                            *   '<S308>/Constant'
                            *   '<S329>/Constant'
                            *   '<S350>/Constant'
                            */
extern real_T Elevator_Bottom_DC;      /* Variable: Elevator_Bottom_DC
                                        * Referenced by: '<S13>/Constant7'
                                        */
extern real_T Elevator_DC_Inc_RL;      /* Variable: Elevator_DC_Inc_RL
                                        * Referenced by: '<S94>/Constant3'
                                        */
extern real_T Elevator_Error_Bottom_Disable;
                                      /* Variable: Elevator_Error_Bottom_Disable
                                       * Referenced by: '<S91>/Constant'
                                       */
extern real_T Elevator_Error_Increase; /* Variable: Elevator_Error_Increase
                                        * Referenced by: '<S13>/Constant6'
                                        */
extern real_T Elevator_Gain_Int;       /* Variable: Elevator_Gain_Int
                                        * Referenced by: '<S95>/Gain2'
                                        */
extern real_T Elevator_Gain_Prop;      /* Variable: Elevator_Gain_Prop
                                        * Referenced by: '<S95>/Gain1'
                                        */
extern real_T Elevator_Height_Algae_High;/* Variable: Elevator_Height_Algae_High
                                          * Referenced by:
                                          *   '<S428>/Reefscape_Chart'
                                          *   '<S33>/Reefscape_Chart'
                                          */
extern real_T Elevator_Height_Algae_Low;/* Variable: Elevator_Height_Algae_Low
                                         * Referenced by:
                                         *   '<S428>/Reefscape_Chart'
                                         *   '<S33>/Reefscape_Chart'
                                         */
extern real_T Elevator_Height_Algae_Score;/* Variable: Elevator_Height_Algae_Score
                                           * Referenced by:
                                           *   '<S428>/Reefscape_Chart'
                                           *   '<S33>/Reefscape_Chart'
                                           */
extern real_T Elevator_Height_Bottom;  /* Variable: Elevator_Height_Bottom
                                        * Referenced by:
                                        *   '<S428>/Reefscape_Chart'
                                        *   '<S33>/Reefscape_Chart'
                                        */
extern real_T Elevator_Height_Bottom_Pre;/* Variable: Elevator_Height_Bottom_Pre
                                          * Referenced by:
                                          *   '<S428>/Reefscape_Chart'
                                          *   '<S33>/Reefscape_Chart'
                                          */
extern real_T Elevator_Height_Coral_Arm_Low_Thresh;
                               /* Variable: Elevator_Height_Coral_Arm_Low_Thresh
                                * Referenced by: '<S72>/Constant'
                                */
extern real_T Elevator_Height_Coral_Score_Lower_Rate;
                             /* Variable: Elevator_Height_Coral_Score_Lower_Rate
                              * Referenced by:
                              *   '<S428>/Reefscape_Chart'
                              *   '<S33>/Reefscape_Chart'
                              */
extern real_T Elevator_Height_End_Game;/* Variable: Elevator_Height_End_Game
                                        * Referenced by:
                                        *   '<S15>/Constant5'
                                        *   '<S428>/Reefscape_Chart'
                                        *   '<S33>/Reefscape_Chart'
                                        */
extern real_T Elevator_Height_Error_Threshold;
                                    /* Variable: Elevator_Height_Error_Threshold
                                     * Referenced by:
                                     *   '<S92>/Constant'
                                     *   '<S428>/Reefscape_Chart'
                                     *   '<S33>/Reefscape_Chart'
                                     */
extern real_T Elevator_Height_L1;      /* Variable: Elevator_Height_L1
                                        * Referenced by:
                                        *   '<S428>/Reefscape_Chart'
                                        *   '<S33>/Reefscape_Chart'
                                        */
extern real_T Elevator_Height_L2;      /* Variable: Elevator_Height_L2
                                        * Referenced by:
                                        *   '<S428>/Reefscape_Chart'
                                        *   '<S33>/Reefscape_Chart'
                                        */
extern real_T Elevator_Height_L2_Eject;/* Variable: Elevator_Height_L2_Eject
                                        * Referenced by:
                                        *   '<S428>/Reefscape_Chart'
                                        *   '<S33>/Reefscape_Chart'
                                        */
extern real_T Elevator_Height_L3;      /* Variable: Elevator_Height_L3
                                        * Referenced by:
                                        *   '<S428>/Reefscape_Chart'
                                        *   '<S33>/Reefscape_Chart'
                                        */
extern real_T Elevator_Height_L3_Eject;/* Variable: Elevator_Height_L3_Eject
                                        * Referenced by:
                                        *   '<S428>/Reefscape_Chart'
                                        *   '<S33>/Reefscape_Chart'
                                        */
extern real_T Elevator_Height_L4;      /* Variable: Elevator_Height_L4
                                        * Referenced by:
                                        *   '<S428>/Reefscape_Chart'
                                        *   '<S33>/Reefscape_Chart'
                                        */
extern real_T Elevator_Height_Lower;   /* Variable: Elevator_Height_Lower
                                        * Referenced by:
                                        *   '<S428>/Reefscape_Chart'
                                        *   '<S33>/Reefscape_Chart'
                                        */
extern real_T Elevator_Height_Manual_Gain;/* Variable: Elevator_Height_Manual_Gain
                                           * Referenced by:
                                           *   '<S428>/Reefscape_Chart'
                                           *   '<S33>/Reefscape_Chart'
                                           */
extern real_T Elevator_Height_PickupLower_Reset;
                                  /* Variable: Elevator_Height_PickupLower_Reset
                                   * Referenced by: '<S14>/Constant2'
                                   */
extern real_T Elevator_Height_Prepare; /* Variable: Elevator_Height_Prepare
                                        * Referenced by:
                                        *   '<S428>/Reefscape_Chart'
                                        *   '<S33>/Reefscape_Chart'
                                        */
extern real_T Elevator_Height_Raise;   /* Variable: Elevator_Height_Raise
                                        * Referenced by:
                                        *   '<S428>/Reefscape_Chart'
                                        *   '<S33>/Reefscape_Chart'
                                        */
extern real_T Elevator_Height_Top_Reset;/* Variable: Elevator_Height_Top_Reset
                                         * Referenced by:
                                         *   '<S14>/Constant1'
                                         *   '<S14>/Constant3'
                                         */
extern real_T Elevator_Hold_at_Top_DC; /* Variable: Elevator_Hold_at_Top_DC
                                        * Referenced by: '<S13>/Constant1'
                                        */
extern real_T Elevator_Int_IC;         /* Variable: Elevator_Int_IC
                                        * Referenced by: '<S95>/Constant3'
                                        */
extern real_T Elevator_Int_LL;         /* Variable: Elevator_Int_LL
                                        * Referenced by: '<S95>/Saturation1'
                                        */
extern real_T Elevator_Int_UL;         /* Variable: Elevator_Int_UL
                                        * Referenced by: '<S95>/Saturation1'
                                        */
extern real_T Elevator_Limit_Switch_Debounce_F2T;
                                 /* Variable: Elevator_Limit_Switch_Debounce_F2T
                                  * Referenced by:
                                  *   '<S10>/Constant1'
                                  *   '<S11>/Constant1'
                                  */
extern real_T Elevator_Limit_Switch_Debounce_T2F;
                                 /* Variable: Elevator_Limit_Switch_Debounce_T2F
                                  * Referenced by:
                                  *   '<S10>/Constant2'
                                  *   '<S11>/Constant2'
                                  */
extern real_T Elevator_LowerPickup_Time;/* Variable: Elevator_LowerPickup_Time
                                         * Referenced by:
                                         *   '<S428>/Reefscape_Chart'
                                         *   '<S33>/Reefscape_Chart'
                                         */
extern real_T Elevator_MotorRev_to_Inch;/* Variable: Elevator_MotorRev_to_Inch
                                         * Referenced by: '<S14>/Gain1'
                                         */
extern real_T Elevator_Total_LL;       /* Variable: Elevator_Total_LL
                                        * Referenced by:
                                        *   '<S13>/Constant8'
                                        *   '<S95>/Constant1'
                                        *   '<S95>/Saturation2'
                                        */
extern real_T Elevator_Total_UL;       /* Variable: Elevator_Total_UL
                                        * Referenced by:
                                        *   '<S95>/Constant'
                                        *   '<S95>/Saturation2'
                                        */
extern real_T Gyro_Calibration_Auto_Center;/* Variable: Gyro_Calibration_Auto_Center
                                            * Referenced by: '<S16>/Constant5'
                                            */
extern real_T Gyro_Calibration_Auto_Left;/* Variable: Gyro_Calibration_Auto_Left
                                          * Referenced by: '<S16>/Constant4'
                                          */
extern real_T Gyro_Calibration_Auto_Right;/* Variable: Gyro_Calibration_Auto_Right
                                           * Referenced by: '<S16>/Constant6'
                                           */
extern real_T Gyro_Calibration_Default;/* Variable: Gyro_Calibration_Default
                                        * Referenced by:
                                        *   '<S16>/Constant7'
                                        *   '<S16>/Unit Delay1'
                                        */
extern real_T Gyro_Calibration_Reset_Flag;/* Variable: Gyro_Calibration_Reset_Flag
                                           * Referenced by: '<S16>/Constant3'
                                           */
extern real_T KF_Enable;               /* Variable: KF_Enable
                                        * Referenced by:
                                        *   '<S19>/Constant1'
                                        *   '<S19>/Constant2'
                                        */
extern real_T L4_Switch_Time;          /* Variable: L4_Switch_Time
                                        * Referenced by:
                                        *   '<S428>/Reefscape_Chart'
                                        *   '<S33>/Reefscape_Chart'
                                        */
extern real_T Limelight_Tag_Angle_Offset;/* Variable: Limelight_Tag_Angle_Offset
                                          * Referenced by: '<S20>/Constant2'
                                          */
extern real_T Limelight_Tag_X_Offset;  /* Variable: Limelight_Tag_X_Offset
                                        * Referenced by: '<S20>/Constant'
                                        */
extern real_T Limelight_Tag_Y_Offset;  /* Variable: Limelight_Tag_Y_Offset
                                        * Referenced by: '<S20>/Constant1'
                                        */
extern real_T MatchTime_Skip_Coral_Pickup;/* Variable: MatchTime_Skip_Coral_Pickup
                                           * Referenced by: '<S30>/Reefscape_Auto_Steps'
                                           */
extern real_T MatchTime_Skip_Second_L4;/* Variable: MatchTime_Skip_Second_L4
                                        * Referenced by: '<S30>/Reefscape_Auto_Steps'
                                        */
extern real_T Odometry_IC_X;           /* Variable: Odometry_IC_X
                                        * Referenced by: '<S2>/Constant'
                                        */
extern real_T Odometry_IC_Y;           /* Variable: Odometry_IC_Y
                                        * Referenced by: '<S2>/Constant1'
                                        */
extern real_T Odometry_Reset_IC;       /* Variable: Odometry_Reset_IC
                                        * Referenced by:
                                        *   '<S22>/Constant'
                                        *   '<S23>/Constant'
                                        */
extern real_T Odometry_X_Y_TEAR;       /* Variable: Odometry_X_Y_TEAR
                                        * Referenced by:
                                        *   '<S197>/Constant'
                                        *   '<S208>/Constant'
                                        */
extern real_T Spline_Last_Pose_Distance_to_Velocity_Gain;
                         /* Variable: Spline_Last_Pose_Distance_to_Velocity_Gain
                          * Referenced by: '<S267>/Constant2'
                          */
extern real_T Spline_Max_Centripital_Acceleration;
                                /* Variable: Spline_Max_Centripital_Acceleration
                                 * Referenced by: '<S267>/Constant1'
                                 */
extern real_T Spline_Pose_Num_Before_End_Reduce_Speed;
                            /* Variable: Spline_Pose_Num_Before_End_Reduce_Speed
                             * Referenced by: '<S214>/Constant'
                             */
extern real_T Spline_Stop_Radius;      /* Variable: Spline_Stop_Radius
                                        * Referenced by: '<S227>/Constant'
                                        */
extern real_T Spline_Velocity_Multiplier_TEST;
                                    /* Variable: Spline_Velocity_Multiplier_TEST
                                     * Referenced by: '<S267>/Constant3'
                                     */
extern real_T Steering_Absolute_Cmd_Approach_Zero_Error_Thresh;
                   /* Variable: Steering_Absolute_Cmd_Approach_Zero_Error_Thresh
                    * Referenced by: '<S378>/Constant5'
                    */
extern real_T Steering_Absolute_Cmd_Approach_Zero_Final_Thresh;
                   /* Variable: Steering_Absolute_Cmd_Approach_Zero_Final_Thresh
                    * Referenced by: '<S378>/Constant6'
                    */
extern real_T Steering_Absolute_Cmd_NonZero_Error_Thresh;
                         /* Variable: Steering_Absolute_Cmd_NonZero_Error_Thresh
                          * Referenced by: '<S378>/Constant9'
                          */
extern real_T Steering_Absolute_Cmd_NonZero_Final_Scale_Factor;
                   /* Variable: Steering_Absolute_Cmd_NonZero_Final_Scale_Factor
                    * Referenced by: '<S378>/Constant10'
                    */
extern real_T Steering_Absolute_Cmd_Rate_Limit_Dec;
                               /* Variable: Steering_Absolute_Cmd_Rate_Limit_Dec
                                * Referenced by: '<S378>/Constant1'
                                */
extern real_T Steering_Absolute_Cmd_Rate_Limit_Inc;
                               /* Variable: Steering_Absolute_Cmd_Rate_Limit_Inc
                                * Referenced by: '<S378>/Constant3'
                                */
extern real_T Steering_Heading_Control_D;/* Variable: Steering_Heading_Control_D
                                          * Referenced by: '<S395>/Constant3'
                                          */
extern real_T Steering_Heading_Control_D_FilterCoeff;
                             /* Variable: Steering_Heading_Control_D_FilterCoeff
                              * Referenced by: '<S395>/Constant2'
                              */
extern real_T Steering_Heading_Control_D_LL;
                                      /* Variable: Steering_Heading_Control_D_LL
                                       * Referenced by: '<S395>/Saturation'
                                       */
extern real_T Steering_Heading_Control_D_UL;
                                      /* Variable: Steering_Heading_Control_D_UL
                                       * Referenced by: '<S395>/Saturation'
                                       */
extern real_T Steering_Heading_Control_Deadzone;
                                  /* Variable: Steering_Heading_Control_Deadzone
                                   * Referenced by: '<S394>/Constant'
                                   */
extern real_T Steering_Heading_Control_I;/* Variable: Steering_Heading_Control_I
                                          * Referenced by: '<S395>/Gain2'
                                          */
extern real_T Steering_Heading_Control_I_LL;
                                      /* Variable: Steering_Heading_Control_I_LL
                                       * Referenced by: '<S395>/Saturation1'
                                       */
extern real_T Steering_Heading_Control_I_UL;
                                      /* Variable: Steering_Heading_Control_I_UL
                                       * Referenced by: '<S395>/Saturation1'
                                       */
extern real_T Steering_Heading_Control_P;/* Variable: Steering_Heading_Control_P
                                          * Referenced by: '<S395>/Gain1'
                                          */
extern real_T Steering_Heading_Control_Total_LL;
                                  /* Variable: Steering_Heading_Control_Total_LL
                                   * Referenced by:
                                   *   '<S395>/Constant1'
                                   *   '<S395>/Saturation2'
                                   */
extern real_T Steering_Heading_Control_Total_UL;
                                  /* Variable: Steering_Heading_Control_Total_UL
                                   * Referenced by:
                                   *   '<S395>/Constant'
                                   *   '<S395>/Saturation2'
                                   */
extern real_T Steering_Motor_Control_D;/* Variable: Steering_Motor_Control_D
                                        * Referenced by:
                                        *   '<S285>/Constant3'
                                        *   '<S306>/Constant3'
                                        *   '<S327>/Constant3'
                                        *   '<S348>/Constant3'
                                        */
extern real_T Steering_Motor_Control_D_FilterCoeff;
                               /* Variable: Steering_Motor_Control_D_FilterCoeff
                                * Referenced by:
                                *   '<S285>/Constant2'
                                *   '<S306>/Constant2'
                                *   '<S327>/Constant2'
                                *   '<S348>/Constant2'
                                */
extern real_T Steering_Motor_Control_D_LL;/* Variable: Steering_Motor_Control_D_LL
                                           * Referenced by:
                                           *   '<S285>/Saturation'
                                           *   '<S306>/Saturation'
                                           *   '<S327>/Saturation'
                                           *   '<S348>/Saturation'
                                           */
extern real_T Steering_Motor_Control_D_UL;/* Variable: Steering_Motor_Control_D_UL
                                           * Referenced by:
                                           *   '<S285>/Saturation'
                                           *   '<S306>/Saturation'
                                           *   '<S327>/Saturation'
                                           *   '<S348>/Saturation'
                                           */
extern real_T Steering_Motor_Control_I;/* Variable: Steering_Motor_Control_I
                                        * Referenced by:
                                        *   '<S285>/Gain2'
                                        *   '<S306>/Gain2'
                                        *   '<S327>/Gain2'
                                        *   '<S348>/Gain2'
                                        */
extern real_T Steering_Motor_Control_I_LL;/* Variable: Steering_Motor_Control_I_LL
                                           * Referenced by:
                                           *   '<S285>/Saturation1'
                                           *   '<S306>/Saturation1'
                                           *   '<S327>/Saturation1'
                                           *   '<S348>/Saturation1'
                                           */
extern real_T Steering_Motor_Control_I_UL;/* Variable: Steering_Motor_Control_I_UL
                                           * Referenced by:
                                           *   '<S285>/Saturation1'
                                           *   '<S306>/Saturation1'
                                           *   '<S327>/Saturation1'
                                           *   '<S348>/Saturation1'
                                           */
extern real_T Steering_Motor_Control_P;/* Variable: Steering_Motor_Control_P
                                        * Referenced by:
                                        *   '<S285>/Gain1'
                                        *   '<S306>/Gain1'
                                        *   '<S327>/Gain1'
                                        *   '<S348>/Gain1'
                                        */
extern real_T Steering_Relative_Cmd_Approach_Zero_Error_Thresh;
                   /* Variable: Steering_Relative_Cmd_Approach_Zero_Error_Thresh
                    * Referenced by: '<S377>/Constant5'
                    */
extern real_T Steering_Relative_Cmd_Approach_Zero_Final_Thresh;
                   /* Variable: Steering_Relative_Cmd_Approach_Zero_Final_Thresh
                    * Referenced by: '<S377>/Constant6'
                    */
extern real_T Steering_Relative_Cmd_NonZero_Error_Thresh;
                         /* Variable: Steering_Relative_Cmd_NonZero_Error_Thresh
                          * Referenced by: '<S377>/Constant9'
                          */
extern real_T Steering_Relative_Cmd_NonZero_Final_Scale_Factor;
                   /* Variable: Steering_Relative_Cmd_NonZero_Final_Scale_Factor
                    * Referenced by: '<S377>/Constant10'
                    */
extern real_T Steering_Relative_Cmd_Rate_Limit_Dec;
                               /* Variable: Steering_Relative_Cmd_Rate_Limit_Dec
                                * Referenced by: '<S377>/Constant1'
                                */
extern real_T Steering_Relative_Cmd_Rate_Limit_Inc;
                               /* Variable: Steering_Relative_Cmd_Rate_Limit_Inc
                                * Referenced by: '<S377>/Constant3'
                                */
extern real_T Steering_Relative_Gain;  /* Variable: Steering_Relative_Gain
                                        * Referenced by: '<S448>/Constant'
                                        */
extern real_T Steering_Twist_Gain;     /* Variable: Steering_Twist_Gain
                                        * Referenced by: '<S448>/Constant1'
                                        */
extern real_T TEST_CANdle_Flag;        /* Variable: TEST_CANdle_Flag
                                        * Referenced by: '<S4>/Constant2'
                                        */
extern real_T TEST_CANdle_LED_ID;      /* Variable: TEST_CANdle_LED_ID
                                        * Referenced by: '<S4>/Constant3'
                                        */
extern real_T TEST_Swerve_Mode_Override_Flag;
                                     /* Variable: TEST_Swerve_Mode_Override_Flag
                                      * Referenced by: '<S429>/Constant5'
                                      */
extern real_T TEST_Swerve_Mode_Steering;/* Variable: TEST_Swerve_Mode_Steering
                                         * Referenced by: '<S429>/Constant8'
                                         */
extern real_T TEST_Swerve_Mode_Translation;/* Variable: TEST_Swerve_Mode_Translation
                                            * Referenced by: '<S429>/Constant7'
                                            */
extern real_T Translation_Speed_Approach_Zero_Error_Thresh;
                       /* Variable: Translation_Speed_Approach_Zero_Error_Thresh
                        * Referenced by: '<S365>/Constant5'
                        */
extern real_T Translation_Speed_Approach_Zero_Final_Thresh;
                       /* Variable: Translation_Speed_Approach_Zero_Final_Thresh
                        * Referenced by: '<S365>/Constant6'
                        */
extern real_T Translation_Speed_NonZero_Error_Thresh;
                             /* Variable: Translation_Speed_NonZero_Error_Thresh
                              * Referenced by: '<S365>/Constant9'
                              */
extern real_T Translation_Speed_NonZero_Final_Scale_Factor;
                       /* Variable: Translation_Speed_NonZero_Final_Scale_Factor
                        * Referenced by: '<S365>/Constant10'
                        */
extern real_T Translation_Speed_Rate_Limit_Dec;
                                   /* Variable: Translation_Speed_Rate_Limit_Dec
                                    * Referenced by: '<S365>/Constant1'
                                    */
extern real_T Translation_Speed_Rate_Limit_Inc;
                                   /* Variable: Translation_Speed_Rate_Limit_Inc
                                    * Referenced by: '<S365>/Constant3'
                                    */
extern real_T Translation_Twist_Gain;  /* Variable: Translation_Twist_Gain
                                        * Referenced by: '<S449>/Gain'
                                        */
extern real_T Twist_Deadzone_neg;      /* Variable: Twist_Deadzone_neg
                                        * Referenced by:
                                        *   '<S448>/Dead Zone'
                                        *   '<S449>/Dead Zone'
                                        */
extern real_T Twist_Deadzone_pos;      /* Variable: Twist_Deadzone_pos
                                        * Referenced by:
                                        *   '<S448>/Dead Zone'
                                        *   '<S449>/Dead Zone'
                                        */
extern real_T Winch_Hold_DC;           /* Variable: Winch_Hold_DC
                                        * Referenced by: '<S15>/Constant2'
                                        */
extern real_T Winch_Rev_Target;        /* Variable: Winch_Rev_Target
                                        * Referenced by: '<S109>/Constant'
                                        */
extern real_T Winch_Spool_DC;          /* Variable: Winch_Spool_DC
                                        * Referenced by: '<S15>/Constant1'
                                        */

/* Model entry point functions */
extern void Code_Gen_Model_initialize(void);
extern void Code_Gen_Model_step(void);
extern void Code_Gen_Model_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Code_Gen_Model_T *const Code_Gen_Model_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S31>/Logical Operator10' : Unused code path elimination
 * Block '<S71>/Data Type Duplicate' : Unused code path elimination
 * Block '<S71>/Data Type Propagation' : Unused code path elimination
 * Block '<S84>/Data Type Duplicate' : Unused code path elimination
 * Block '<S84>/Data Type Propagation' : Unused code path elimination
 * Block '<S85>/FixPt Data Type Duplicate1' : Unused code path elimination
 * Block '<S87>/Data Type Duplicate' : Unused code path elimination
 * Block '<S87>/Data Type Propagation' : Unused code path elimination
 * Block '<S88>/Data Type Duplicate' : Unused code path elimination
 * Block '<S88>/Data Type Propagation' : Unused code path elimination
 * Block '<S78>/Data Type Duplicate' : Unused code path elimination
 * Block '<S78>/Data Type Propagation' : Unused code path elimination
 * Block '<S102>/Data Type Duplicate' : Unused code path elimination
 * Block '<S102>/Data Type Propagation' : Unused code path elimination
 * Block '<S103>/FixPt Data Type Duplicate1' : Unused code path elimination
 * Block '<S105>/Data Type Duplicate' : Unused code path elimination
 * Block '<S105>/Data Type Propagation' : Unused code path elimination
 * Block '<S96>/Data Type Duplicate' : Unused code path elimination
 * Block '<S96>/Data Type Propagation' : Unused code path elimination
 * Block '<S177>/Data Type Duplicate' : Unused code path elimination
 * Block '<S178>/Data Type Duplicate' : Unused code path elimination
 * Block '<S179>/Conversion' : Unused code path elimination
 * Block '<S179>/Data Type Duplicate' : Unused code path elimination
 * Block '<S180>/Data Type Duplicate' : Unused code path elimination
 * Block '<S138>/Data Type Duplicate' : Unused code path elimination
 * Block '<S139>/Data Type Duplicate' : Unused code path elimination
 * Block '<S140>/Data Type Duplicate' : Unused code path elimination
 * Block '<S141>/Data Type Duplicate' : Unused code path elimination
 * Block '<S142>/Data Type Duplicate' : Unused code path elimination
 * Block '<S143>/Data Type Duplicate' : Unused code path elimination
 * Block '<S144>/Data Type Duplicate' : Unused code path elimination
 * Block '<S145>/Conversion' : Unused code path elimination
 * Block '<S145>/Data Type Duplicate' : Unused code path elimination
 * Block '<S146>/Data Type Duplicate' : Unused code path elimination
 * Block '<S147>/Data Type Duplicate' : Unused code path elimination
 * Block '<S148>/Data Type Duplicate' : Unused code path elimination
 * Block '<S150>/Data Type Duplicate' : Unused code path elimination
 * Block '<S151>/Data Type Duplicate' : Unused code path elimination
 * Block '<S134>/G' : Unused code path elimination
 * Block '<S134>/H' : Unused code path elimination
 * Block '<S134>/N' : Unused code path elimination
 * Block '<S134>/P0' : Unused code path elimination
 * Block '<S134>/Q' : Unused code path elimination
 * Block '<S134>/R' : Unused code path elimination
 * Block '<S166>/CheckSignalProperties' : Unused code path elimination
 * Block '<S175>/CheckSignalProperties' : Unused code path elimination
 * Block '<S176>/CheckSignalProperties' : Unused code path elimination
 * Block '<S24>/Unit Delay1' : Unused code path elimination
 * Block '<S25>/Gain' : Unused code path elimination
 * Block '<S25>/Gain1' : Unused code path elimination
 * Block '<S25>/Scope' : Unused code path elimination
 * Block '<S226>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S230>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S236>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S270>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S290>/Data Type Duplicate' : Unused code path elimination
 * Block '<S290>/Data Type Propagation' : Unused code path elimination
 * Block '<S282>/Scope' : Unused code path elimination
 * Block '<S284>/Scope' : Unused code path elimination
 * Block '<S301>/Data Type Duplicate' : Unused code path elimination
 * Block '<S301>/Data Type Propagation' : Unused code path elimination
 * Block '<S285>/Scope' : Unused code path elimination
 * Block '<S311>/Data Type Duplicate' : Unused code path elimination
 * Block '<S311>/Data Type Propagation' : Unused code path elimination
 * Block '<S303>/Scope' : Unused code path elimination
 * Block '<S305>/Scope' : Unused code path elimination
 * Block '<S322>/Data Type Duplicate' : Unused code path elimination
 * Block '<S322>/Data Type Propagation' : Unused code path elimination
 * Block '<S306>/Scope' : Unused code path elimination
 * Block '<S332>/Data Type Duplicate' : Unused code path elimination
 * Block '<S332>/Data Type Propagation' : Unused code path elimination
 * Block '<S324>/Scope' : Unused code path elimination
 * Block '<S326>/Scope' : Unused code path elimination
 * Block '<S343>/Data Type Duplicate' : Unused code path elimination
 * Block '<S343>/Data Type Propagation' : Unused code path elimination
 * Block '<S327>/Scope' : Unused code path elimination
 * Block '<S353>/Data Type Duplicate' : Unused code path elimination
 * Block '<S353>/Data Type Propagation' : Unused code path elimination
 * Block '<S345>/Scope' : Unused code path elimination
 * Block '<S347>/Scope' : Unused code path elimination
 * Block '<S364>/Data Type Duplicate' : Unused code path elimination
 * Block '<S364>/Data Type Propagation' : Unused code path elimination
 * Block '<S348>/Scope' : Unused code path elimination
 * Block '<S375>/Data Type Duplicate' : Unused code path elimination
 * Block '<S375>/Data Type Propagation' : Unused code path elimination
 * Block '<S376>/FixPt Data Type Duplicate1' : Unused code path elimination
 * Block '<S385>/Data Type Duplicate' : Unused code path elimination
 * Block '<S385>/Data Type Propagation' : Unused code path elimination
 * Block '<S386>/FixPt Data Type Duplicate1' : Unused code path elimination
 * Block '<S392>/Data Type Duplicate' : Unused code path elimination
 * Block '<S392>/Data Type Propagation' : Unused code path elimination
 * Block '<S393>/FixPt Data Type Duplicate1' : Unused code path elimination
 * Block '<S399>/Data Type Duplicate' : Unused code path elimination
 * Block '<S399>/Data Type Propagation' : Unused code path elimination
 * Block '<S395>/Scope' : Unused code path elimination
 * Block '<S426>/Logical Operator10' : Unused code path elimination
 * Block '<S458>/Data Type Duplicate' : Unused code path elimination
 * Block '<S458>/Data Type Propagation' : Unused code path elimination
 * Block '<S465>/Data Type Duplicate' : Unused code path elimination
 * Block '<S465>/Data Type Propagation' : Unused code path elimination
 * Block '<S466>/FixPt Data Type Duplicate1' : Unused code path elimination
 * Block '<S30>/Signal Copy3' : Eliminate redundant signal conversion block
 * Block '<S30>/Signal Copy4' : Eliminate redundant signal conversion block
 * Block '<S30>/Signal Copy5' : Eliminate redundant signal conversion block
 * Block '<S177>/Conversion' : Eliminate redundant data type conversion
 * Block '<S178>/Conversion' : Eliminate redundant data type conversion
 * Block '<S180>/Conversion' : Eliminate redundant data type conversion
 * Block '<S134>/DataTypeConversionEnable' : Eliminate redundant data type conversion
 * Block '<S150>/Conversion' : Eliminate redundant data type conversion
 * Block '<S154>/Reshape' : Reshape block reduction
 * Block '<S134>/ReshapeX0' : Reshape block reduction
 * Block '<S134>/Reshapeu' : Reshape block reduction
 * Block '<S134>/Reshapexhat' : Reshape block reduction
 * Block '<S19>/Signal Copy' : Eliminate redundant signal conversion block
 * Block '<S19>/Signal Copy1' : Eliminate redundant signal conversion block
 * Block '<S22>/Signal Copy' : Eliminate redundant signal conversion block
 * Block '<S22>/Signal Copy1' : Eliminate redundant signal conversion block
 * Block '<S22>/Signal Copy2' : Eliminate redundant signal conversion block
 * Block '<S22>/Signal Copy3' : Eliminate redundant signal conversion block
 * Block '<S23>/Signal Copy' : Eliminate redundant signal conversion block
 * Block '<S23>/Signal Copy1' : Eliminate redundant signal conversion block
 * Block '<S23>/Signal Copy2' : Eliminate redundant signal conversion block
 * Block '<S23>/Signal Copy3' : Eliminate redundant signal conversion block
 * Block '<S266>/Signal Copy' : Eliminate redundant signal conversion block
 * Block '<S28>/Signal Copy3' : Eliminate redundant signal conversion block
 * Block '<S28>/Signal Copy4' : Eliminate redundant signal conversion block
 * Block '<S28>/Signal Copy5' : Eliminate redundant signal conversion block
 * Block '<S31>/Constant2' : Unused code path elimination
 */

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'Code_Gen_Model'
 * '<S1>'   : 'Code_Gen_Model/High Frequency Block'
 * '<S2>'   : 'Code_Gen_Model/RoboRio Controls'
 * '<S3>'   : 'Code_Gen_Model/RoboRio Controls/Autonomous'
 * '<S4>'   : 'Code_Gen_Model/RoboRio Controls/CANdle_LED_ID Calculation'
 * '<S5>'   : 'Code_Gen_Model/RoboRio Controls/Compare To Zero'
 * '<S6>'   : 'Code_Gen_Model/RoboRio Controls/Compare To Zero1'
 * '<S7>'   : 'Code_Gen_Model/RoboRio Controls/Compare To Zero2'
 * '<S8>'   : 'Code_Gen_Model/RoboRio Controls/Compare To Zero3'
 * '<S9>'   : 'Code_Gen_Model/RoboRio Controls/Coral Arm Motor Control'
 * '<S10>'  : 'Code_Gen_Model/RoboRio Controls/Debounce'
 * '<S11>'  : 'Code_Gen_Model/RoboRio Controls/Debounce1'
 * '<S12>'  : 'Code_Gen_Model/RoboRio Controls/Disabled'
 * '<S13>'  : 'Code_Gen_Model/RoboRio Controls/Elevator Motor Control'
 * '<S14>'  : 'Code_Gen_Model/RoboRio Controls/Elevator_Height_Pre_Processing'
 * '<S15>'  : 'Code_Gen_Model/RoboRio Controls/End_Game'
 * '<S16>'  : 'Code_Gen_Model/RoboRio Controls/Gyro_Angles'
 * '<S17>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing'
 * '<S18>'  : 'Code_Gen_Model/RoboRio Controls/Internal Feedback'
 * '<S19>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter'
 * '<S20>'  : 'Code_Gen_Model/RoboRio Controls/Limelight_Tag_Corrections'
 * '<S21>'  : 'Code_Gen_Model/RoboRio Controls/Merge'
 * '<S22>'  : 'Code_Gen_Model/RoboRio Controls/Odometry'
 * '<S23>'  : 'Code_Gen_Model/RoboRio Controls/Odometry1'
 * '<S24>'  : 'Code_Gen_Model/RoboRio Controls/Previous GameState'
 * '<S25>'  : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following'
 * '<S26>'  : 'Code_Gen_Model/RoboRio Controls/Steer_Module_Offset_Adjustments'
 * '<S27>'  : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive'
 * '<S28>'  : 'Code_Gen_Model/RoboRio Controls/Teleop'
 * '<S29>'  : 'Code_Gen_Model/RoboRio Controls/Test'
 * '<S30>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem'
 * '<S31>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/April Tag Relative Errors'
 * '<S32>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/Path ID Selection'
 * '<S33>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/Reefscape Teleop'
 * '<S34>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/Reefscape_Auto_Steps'
 * '<S35>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/Swerve_Drive_Commands'
 * '<S36>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/April Tag Relative Errors/Compare To Constant'
 * '<S37>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/April Tag Relative Errors/Compare To Constant1'
 * '<S38>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/April Tag Relative Errors/Compare To Constant10'
 * '<S39>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/April Tag Relative Errors/Compare To Constant2'
 * '<S40>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/April Tag Relative Errors/Compare To Constant3'
 * '<S41>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/April Tag Relative Errors/Compare To Constant4'
 * '<S42>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/April Tag Relative Errors/Compare To Constant5'
 * '<S43>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/April Tag Relative Errors/Compare To Constant6'
 * '<S44>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/April Tag Relative Errors/Compare To Constant7'
 * '<S45>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/April Tag Relative Errors/Compare To Constant8'
 * '<S46>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/April Tag Relative Errors/Compare To Constant9'
 * '<S47>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/April Tag Relative Errors/Compare To Zero'
 * '<S48>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/April Tag Relative Errors/Compare To Zero1'
 * '<S49>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/April Tag Relative Errors/Compare To Zero2'
 * '<S50>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/April Tag Relative Errors/Compare To Zero3'
 * '<S51>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/April Tag Relative Errors/Compare To Zero4'
 * '<S52>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/April Tag Relative Errors/Compare To Zero5'
 * '<S53>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/April Tag Relative Errors/Compare To Zero9'
 * '<S54>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/Path ID Selection/Compare To Constant'
 * '<S55>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/Path ID Selection/Compare To Constant2'
 * '<S56>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/Reefscape Teleop/Detect Increase'
 * '<S57>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/Reefscape Teleop/Detect Increase1'
 * '<S58>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/Reefscape Teleop/Detect Increase10'
 * '<S59>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/Reefscape Teleop/Detect Increase11'
 * '<S60>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/Reefscape Teleop/Detect Increase12'
 * '<S61>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/Reefscape Teleop/Detect Increase13'
 * '<S62>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/Reefscape Teleop/Detect Increase2'
 * '<S63>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/Reefscape Teleop/Detect Increase3'
 * '<S64>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/Reefscape Teleop/Detect Increase4'
 * '<S65>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/Reefscape Teleop/Detect Increase5'
 * '<S66>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/Reefscape Teleop/Detect Increase6'
 * '<S67>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/Reefscape Teleop/Detect Increase7'
 * '<S68>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/Reefscape Teleop/Detect Increase8'
 * '<S69>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/Reefscape Teleop/Detect Increase9'
 * '<S70>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/Reefscape Teleop/Reefscape_Chart'
 * '<S71>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/Swerve_Drive_Commands/Saturation Dynamic'
 * '<S72>'  : 'Code_Gen_Model/RoboRio Controls/Coral Arm Motor Control/Compare To Constant'
 * '<S73>'  : 'Code_Gen_Model/RoboRio Controls/Coral Arm Motor Control/Compare To Constant1'
 * '<S74>'  : 'Code_Gen_Model/RoboRio Controls/Coral Arm Motor Control/Compare To Constant2'
 * '<S75>'  : 'Code_Gen_Model/RoboRio Controls/Coral Arm Motor Control/Compare To Constant3'
 * '<S76>'  : 'Code_Gen_Model/RoboRio Controls/Coral Arm Motor Control/Complex Rate Limit'
 * '<S77>'  : 'Code_Gen_Model/RoboRio Controls/Coral Arm Motor Control/PI and Integral Enable'
 * '<S78>'  : 'Code_Gen_Model/RoboRio Controls/Coral Arm Motor Control/Saturation Dynamic'
 * '<S79>'  : 'Code_Gen_Model/RoboRio Controls/Coral Arm Motor Control/Complex Rate Limit/Compare To Zero'
 * '<S80>'  : 'Code_Gen_Model/RoboRio Controls/Coral Arm Motor Control/Complex Rate Limit/Compare To Zero1'
 * '<S81>'  : 'Code_Gen_Model/RoboRio Controls/Coral Arm Motor Control/Complex Rate Limit/Compare To Zero2'
 * '<S82>'  : 'Code_Gen_Model/RoboRio Controls/Coral Arm Motor Control/Complex Rate Limit/Compare To Zero3'
 * '<S83>'  : 'Code_Gen_Model/RoboRio Controls/Coral Arm Motor Control/Complex Rate Limit/Discrete Rate Limiter'
 * '<S84>'  : 'Code_Gen_Model/RoboRio Controls/Coral Arm Motor Control/Complex Rate Limit/Discrete Rate Limiter/Saturation Dynamic'
 * '<S85>'  : 'Code_Gen_Model/RoboRio Controls/Coral Arm Motor Control/Complex Rate Limit/Discrete Rate Limiter/Unit Delay External IC'
 * '<S86>'  : 'Code_Gen_Model/RoboRio Controls/Coral Arm Motor Control/PI and Integral Enable/Detect Increase'
 * '<S87>'  : 'Code_Gen_Model/RoboRio Controls/Coral Arm Motor Control/PI and Integral Enable/Saturation Dynamic'
 * '<S88>'  : 'Code_Gen_Model/RoboRio Controls/Coral Arm Motor Control/PI and Integral Enable/Saturation Dynamic1'
 * '<S89>'  : 'Code_Gen_Model/RoboRio Controls/Debounce/Debounce'
 * '<S90>'  : 'Code_Gen_Model/RoboRio Controls/Debounce1/Debounce'
 * '<S91>'  : 'Code_Gen_Model/RoboRio Controls/Elevator Motor Control/Compare To Constant'
 * '<S92>'  : 'Code_Gen_Model/RoboRio Controls/Elevator Motor Control/Compare To Constant2'
 * '<S93>'  : 'Code_Gen_Model/RoboRio Controls/Elevator Motor Control/Compare To Zero'
 * '<S94>'  : 'Code_Gen_Model/RoboRio Controls/Elevator Motor Control/Complex Rate Limit'
 * '<S95>'  : 'Code_Gen_Model/RoboRio Controls/Elevator Motor Control/PI and Integral Enable'
 * '<S96>'  : 'Code_Gen_Model/RoboRio Controls/Elevator Motor Control/Saturation Dynamic'
 * '<S97>'  : 'Code_Gen_Model/RoboRio Controls/Elevator Motor Control/Complex Rate Limit/Compare To Zero'
 * '<S98>'  : 'Code_Gen_Model/RoboRio Controls/Elevator Motor Control/Complex Rate Limit/Compare To Zero1'
 * '<S99>'  : 'Code_Gen_Model/RoboRio Controls/Elevator Motor Control/Complex Rate Limit/Compare To Zero2'
 * '<S100>' : 'Code_Gen_Model/RoboRio Controls/Elevator Motor Control/Complex Rate Limit/Compare To Zero3'
 * '<S101>' : 'Code_Gen_Model/RoboRio Controls/Elevator Motor Control/Complex Rate Limit/Discrete Rate Limiter'
 * '<S102>' : 'Code_Gen_Model/RoboRio Controls/Elevator Motor Control/Complex Rate Limit/Discrete Rate Limiter/Saturation Dynamic'
 * '<S103>' : 'Code_Gen_Model/RoboRio Controls/Elevator Motor Control/Complex Rate Limit/Discrete Rate Limiter/Unit Delay External IC'
 * '<S104>' : 'Code_Gen_Model/RoboRio Controls/Elevator Motor Control/PI and Integral Enable/Detect Increase'
 * '<S105>' : 'Code_Gen_Model/RoboRio Controls/Elevator Motor Control/PI and Integral Enable/Saturation Dynamic'
 * '<S106>' : 'Code_Gen_Model/RoboRio Controls/Elevator_Height_Pre_Processing/Detect Decrease'
 * '<S107>' : 'Code_Gen_Model/RoboRio Controls/Elevator_Height_Pre_Processing/Detect Decrease1'
 * '<S108>' : 'Code_Gen_Model/RoboRio Controls/Elevator_Height_Pre_Processing/Detect Increase'
 * '<S109>' : 'Code_Gen_Model/RoboRio Controls/End_Game/Compare To Constant'
 * '<S110>' : 'Code_Gen_Model/RoboRio Controls/End_Game/Compare To Constant1'
 * '<S111>' : 'Code_Gen_Model/RoboRio Controls/End_Game/Compare To Constant2'
 * '<S112>' : 'Code_Gen_Model/RoboRio Controls/End_Game/Compare To Zero'
 * '<S113>' : 'Code_Gen_Model/RoboRio Controls/Gyro_Angles/Degrees to Radians'
 * '<S114>' : 'Code_Gen_Model/RoboRio Controls/Gyro_Angles/Detect Increase'
 * '<S115>' : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Constant'
 * '<S116>' : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Constant1'
 * '<S117>' : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Constant2'
 * '<S118>' : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Constant3'
 * '<S119>' : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Constant4'
 * '<S120>' : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Constant5'
 * '<S121>' : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Constant6'
 * '<S122>' : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Constant7'
 * '<S123>' : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Constant8'
 * '<S124>' : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero1'
 * '<S125>' : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero14'
 * '<S126>' : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero15'
 * '<S127>' : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero16'
 * '<S128>' : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero17'
 * '<S129>' : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero6'
 * '<S130>' : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero8'
 * '<S131>' : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Detect Increase'
 * '<S132>' : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Detect Increase1'
 * '<S133>' : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Detect Increase2'
 * '<S134>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter'
 * '<S135>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CalculatePL'
 * '<S136>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CalculateYhat'
 * '<S137>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CovarianceOutputConfigurator'
 * '<S138>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionA'
 * '<S139>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionB'
 * '<S140>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionC'
 * '<S141>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionD'
 * '<S142>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionG'
 * '<S143>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionH'
 * '<S144>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionN'
 * '<S145>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionP'
 * '<S146>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionP0'
 * '<S147>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionQ'
 * '<S148>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionR'
 * '<S149>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionReset'
 * '<S150>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionX'
 * '<S151>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionX0'
 * '<S152>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionu'
 * '<S153>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/MemoryP'
 * '<S154>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/Observer'
 * '<S155>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/ReducedQRN'
 * '<S156>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/Reset'
 * '<S157>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/Reshapeyhat'
 * '<S158>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/ScalarExpansionP0'
 * '<S159>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/ScalarExpansionQ'
 * '<S160>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/ScalarExpansionR'
 * '<S161>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/UseCurrentEstimator'
 * '<S162>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkA'
 * '<S163>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkB'
 * '<S164>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkC'
 * '<S165>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkD'
 * '<S166>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkEnable'
 * '<S167>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkG'
 * '<S168>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkH'
 * '<S169>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkN'
 * '<S170>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkP0'
 * '<S171>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkQ'
 * '<S172>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkR'
 * '<S173>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkReset'
 * '<S174>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkX0'
 * '<S175>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checku'
 * '<S176>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checky'
 * '<S177>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CalculatePL/DataTypeConversionL'
 * '<S178>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CalculatePL/DataTypeConversionM'
 * '<S179>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CalculatePL/DataTypeConversionP'
 * '<S180>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CalculatePL/DataTypeConversionZ'
 * '<S181>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CalculatePL/Ground'
 * '<S182>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CalculateYhat/Ground'
 * '<S183>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CovarianceOutputConfigurator/decideOutput'
 * '<S184>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CovarianceOutputConfigurator/decideOutput/SqrtUsedFcn'
 * '<S185>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/Observer/MeasurementUpdate'
 * '<S186>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/ReducedQRN/Ground'
 * '<S187>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/UseCurrentEstimator/Enabled Subsystem'
 * '<S188>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Difference'
 * '<S189>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Difference1'
 * '<S190>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Difference3'
 * '<S191>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Difference4'
 * '<S192>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Difference5'
 * '<S193>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Polar to Cartesian'
 * '<S194>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Polar to Cartesian1'
 * '<S195>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Polar to Cartesian2'
 * '<S196>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Polar to Cartesian3'
 * '<S197>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Tear for validation testing'
 * '<S198>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Tear for validation testing/Compare To Zero'
 * '<S199>' : 'Code_Gen_Model/RoboRio Controls/Odometry1/Difference'
 * '<S200>' : 'Code_Gen_Model/RoboRio Controls/Odometry1/Difference1'
 * '<S201>' : 'Code_Gen_Model/RoboRio Controls/Odometry1/Difference3'
 * '<S202>' : 'Code_Gen_Model/RoboRio Controls/Odometry1/Difference4'
 * '<S203>' : 'Code_Gen_Model/RoboRio Controls/Odometry1/Difference5'
 * '<S204>' : 'Code_Gen_Model/RoboRio Controls/Odometry1/Polar to Cartesian'
 * '<S205>' : 'Code_Gen_Model/RoboRio Controls/Odometry1/Polar to Cartesian1'
 * '<S206>' : 'Code_Gen_Model/RoboRio Controls/Odometry1/Polar to Cartesian2'
 * '<S207>' : 'Code_Gen_Model/RoboRio Controls/Odometry1/Polar to Cartesian3'
 * '<S208>' : 'Code_Gen_Model/RoboRio Controls/Odometry1/Tear for validation testing'
 * '<S209>' : 'Code_Gen_Model/RoboRio Controls/Odometry1/Tear for validation testing/Compare To Zero'
 * '<S210>' : 'Code_Gen_Model/RoboRio Controls/Previous GameState/Chart'
 * '<S211>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Pass Through'
 * '<S212>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled'
 * '<S213>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses'
 * '<S214>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Find_Targets'
 * '<S215>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Steering_and_Drive_Commands'
 * '<S216>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/If Action Subsystem'
 * '<S217>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification'
 * '<S218>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning'
 * '<S219>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Escape_Auto_Driving'
 * '<S220>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid'
 * '<S221>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Catch-all if not the last point and not in the circle'
 * '<S222>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Circle_Check_Valid'
 * '<S223>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Increment_If_Rectangle_Check'
 * '<S224>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Circle_Check_Valid/Increment_Search'
 * '<S225>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Circle_Check_Valid/Is_Last_Point'
 * '<S226>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Circle_Check_Valid/Increment_Search/Increment Real World'
 * '<S227>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Circle_Check_Valid/Is_Last_Point/Compare To Constant'
 * '<S228>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Circle_Check_Valid/Is_Last_Point/Robot_Is_At_Destination'
 * '<S229>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Circle_Check_Valid/Is_Last_Point/Straight_Line_Path_To_End'
 * '<S230>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Increment_If_Rectangle_Check/Increment Real World'
 * '<S231>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Increment_If_Rectangle_Check/Subsystem Reference'
 * '<S232>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Increment_If_Rectangle_Check/Subsystem Reference/Compare To Constant'
 * '<S233>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Increment_If_Rectangle_Check/Subsystem Reference/Compare To Constant1'
 * '<S234>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Make_Knots'
 * '<S235>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning'
 * '<S236>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Make_Knots/Decrement Real World'
 * '<S237>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Make_Knots/Find_Control_Pose'
 * '<S238>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Make_Knots/Find_Control_Pose1'
 * '<S239>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop'
 * '<S240>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Compare To Constant'
 * '<S241>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve'
 * '<S242>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Find_Point_Coefficients'
 * '<S243>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve'
 * '<S244>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Acc'
 * '<S245>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Pos'
 * '<S246>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Vel'
 * '<S247>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Curvature'
 * '<S248>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_U_And_Powers'
 * '<S249>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Acc/Subsystem Reference'
 * '<S250>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Acc/ddA'
 * '<S251>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Acc/ddB'
 * '<S252>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Acc/ddC'
 * '<S253>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Pos/A'
 * '<S254>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Pos/B'
 * '<S255>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Pos/C'
 * '<S256>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Pos/Subsystem Reference'
 * '<S257>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Vel/Subsystem Reference'
 * '<S258>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Vel/dA'
 * '<S259>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Vel/dB'
 * '<S260>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Vel/dC'
 * '<S261>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Curvature/MATLAB Function'
 * '<S262>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Find_Targets/Distance Along Curve'
 * '<S263>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Find_Targets/Find closest index to curve'
 * '<S264>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Find_Targets/Find first index that meets distance target'
 * '<S265>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Find_Targets/Find velocity and heading'
 * '<S266>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Find_Targets/Heading'
 * '<S267>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Find_Targets/Velocity'
 * '<S268>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Find_Targets/Find velocity and heading/Dynamic Lookup Tables'
 * '<S269>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Find_Targets/Find velocity and heading/Latch'
 * '<S270>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Find_Targets/Find velocity and heading/Dynamic Lookup Tables/Decrement'
 * '<S271>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Steering_and_Drive_Commands/Translation Angle'
 * '<S272>' : 'Code_Gen_Model/RoboRio Controls/Steer_Module_Offset_Adjustments/Angle Modulus'
 * '<S273>' : 'Code_Gen_Model/RoboRio Controls/Steer_Module_Offset_Adjustments/Angle Modulus1'
 * '<S274>' : 'Code_Gen_Model/RoboRio Controls/Steer_Module_Offset_Adjustments/Angle Modulus2'
 * '<S275>' : 'Code_Gen_Model/RoboRio Controls/Steer_Module_Offset_Adjustments/Angle Modulus3'
 * '<S276>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module'
 * '<S277>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1'
 * '<S278>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2'
 * '<S279>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3'
 * '<S280>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle'
 * '<S281>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Direction Change Drive Reduction Factor'
 * '<S282>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Feed Forward plus PID and Integral Enable'
 * '<S283>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Optimize'
 * '<S284>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Steering Module Error Drive Reduction Factor'
 * '<S285>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Steering with Angle Error Modulus PID'
 * '<S286>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Tangential_Velocity_To_RPM'
 * '<S287>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Direction Change Drive Reduction Factor/Compare To Constant'
 * '<S288>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Feed Forward plus PID and Integral Enable/Difference'
 * '<S289>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Feed Forward plus PID and Integral Enable/Low_Pass_Filter'
 * '<S290>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Feed Forward plus PID and Integral Enable/Saturation Dynamic'
 * '<S291>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Optimize/Compare To Constant'
 * '<S292>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Optimize/Minus1'
 * '<S293>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Optimize/RotateBy'
 * '<S294>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Optimize/Minus1/RotateBy'
 * '<S295>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Optimize/Minus1/RotateBy/Compare To Constant'
 * '<S296>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Optimize/RotateBy/Compare To Constant'
 * '<S297>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Steering Module Error Drive Reduction Factor/Angle Modulus to plus or minus pi over two'
 * '<S298>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Steering with Angle Error Modulus PID/Angle Modulus'
 * '<S299>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Steering with Angle Error Modulus PID/Difference'
 * '<S300>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Steering with Angle Error Modulus PID/Low_Pass_Filter'
 * '<S301>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Steering with Angle Error Modulus PID/Saturation Dynamic'
 * '<S302>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Direction Change Drive Reduction Factor'
 * '<S303>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Feed Forward plus PID and Integral Enable'
 * '<S304>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Optimize'
 * '<S305>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Steering Module Error Drive Reduction Factor'
 * '<S306>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Steering with Angle Error Modulus PID'
 * '<S307>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Tangential_Velocity_To_RPM'
 * '<S308>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Direction Change Drive Reduction Factor/Compare To Constant'
 * '<S309>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Feed Forward plus PID and Integral Enable/Difference'
 * '<S310>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Feed Forward plus PID and Integral Enable/Low_Pass_Filter'
 * '<S311>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Feed Forward plus PID and Integral Enable/Saturation Dynamic'
 * '<S312>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Optimize/Compare To Constant'
 * '<S313>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Optimize/Minus1'
 * '<S314>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Optimize/RotateBy'
 * '<S315>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Optimize/Minus1/RotateBy'
 * '<S316>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Optimize/Minus1/RotateBy/Compare To Constant'
 * '<S317>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Optimize/RotateBy/Compare To Constant'
 * '<S318>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Steering Module Error Drive Reduction Factor/Angle Modulus to plus or minus pi over two'
 * '<S319>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Steering with Angle Error Modulus PID/Angle Modulus'
 * '<S320>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Steering with Angle Error Modulus PID/Difference'
 * '<S321>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Steering with Angle Error Modulus PID/Low_Pass_Filter'
 * '<S322>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Steering with Angle Error Modulus PID/Saturation Dynamic'
 * '<S323>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Direction Change Drive Reduction Factor'
 * '<S324>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Feed Forward plus PID and Integral Enable'
 * '<S325>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Optimize'
 * '<S326>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Steering Module Error Drive Reduction Factor'
 * '<S327>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Steering with Angle Error Modulus PID'
 * '<S328>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Tangential_Velocity_To_RPM'
 * '<S329>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Direction Change Drive Reduction Factor/Compare To Constant'
 * '<S330>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Feed Forward plus PID and Integral Enable/Difference'
 * '<S331>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Feed Forward plus PID and Integral Enable/Low_Pass_Filter'
 * '<S332>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Feed Forward plus PID and Integral Enable/Saturation Dynamic'
 * '<S333>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Optimize/Compare To Constant'
 * '<S334>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Optimize/Minus1'
 * '<S335>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Optimize/RotateBy'
 * '<S336>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Optimize/Minus1/RotateBy'
 * '<S337>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Optimize/Minus1/RotateBy/Compare To Constant'
 * '<S338>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Optimize/RotateBy/Compare To Constant'
 * '<S339>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Steering Module Error Drive Reduction Factor/Angle Modulus to plus or minus pi over two'
 * '<S340>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Steering with Angle Error Modulus PID/Angle Modulus'
 * '<S341>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Steering with Angle Error Modulus PID/Difference'
 * '<S342>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Steering with Angle Error Modulus PID/Low_Pass_Filter'
 * '<S343>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Steering with Angle Error Modulus PID/Saturation Dynamic'
 * '<S344>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Direction Change Drive Reduction Factor'
 * '<S345>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Feed Forward plus PID and Integral Enable'
 * '<S346>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Optimize'
 * '<S347>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Steering Module Error Drive Reduction Factor'
 * '<S348>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Steering with Angle Error Modulus PID'
 * '<S349>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Tangential_Velocity_To_RPM'
 * '<S350>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Direction Change Drive Reduction Factor/Compare To Constant'
 * '<S351>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Feed Forward plus PID and Integral Enable/Difference'
 * '<S352>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Feed Forward plus PID and Integral Enable/Low_Pass_Filter'
 * '<S353>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Feed Forward plus PID and Integral Enable/Saturation Dynamic'
 * '<S354>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Optimize/Compare To Constant'
 * '<S355>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Optimize/Minus1'
 * '<S356>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Optimize/RotateBy'
 * '<S357>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Optimize/Minus1/RotateBy'
 * '<S358>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Optimize/Minus1/RotateBy/Compare To Constant'
 * '<S359>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Optimize/RotateBy/Compare To Constant'
 * '<S360>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Steering Module Error Drive Reduction Factor/Angle Modulus to plus or minus pi over two'
 * '<S361>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Steering with Angle Error Modulus PID/Angle Modulus'
 * '<S362>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Steering with Angle Error Modulus PID/Difference'
 * '<S363>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Steering with Angle Error Modulus PID/Low_Pass_Filter'
 * '<S364>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Steering with Angle Error Modulus PID/Saturation Dynamic'
 * '<S365>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Complex Rate Limit'
 * '<S366>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Initialize Function'
 * '<S367>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command'
 * '<S368>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Translation Steering Command'
 * '<S369>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator'
 * '<S370>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Complex Rate Limit/Compare To Zero'
 * '<S371>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Complex Rate Limit/Compare To Zero1'
 * '<S372>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Complex Rate Limit/Compare To Zero2'
 * '<S373>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Complex Rate Limit/Compare To Zero3'
 * '<S374>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Complex Rate Limit/Discrete Rate Limiter'
 * '<S375>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Complex Rate Limit/Discrete Rate Limiter/Saturation Dynamic'
 * '<S376>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Complex Rate Limit/Discrete Rate Limiter/Unit Delay External IC'
 * '<S377>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit'
 * '<S378>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit1'
 * '<S379>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Steering Heading PID'
 * '<S380>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit/Compare To Zero'
 * '<S381>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit/Compare To Zero1'
 * '<S382>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit/Compare To Zero2'
 * '<S383>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit/Compare To Zero3'
 * '<S384>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit/Discrete Rate Limiter'
 * '<S385>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit/Discrete Rate Limiter/Saturation Dynamic'
 * '<S386>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit/Discrete Rate Limiter/Unit Delay External IC'
 * '<S387>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit1/Compare To Zero'
 * '<S388>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit1/Compare To Zero1'
 * '<S389>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit1/Compare To Zero2'
 * '<S390>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit1/Compare To Zero3'
 * '<S391>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit1/Discrete Rate Limiter'
 * '<S392>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit1/Discrete Rate Limiter/Saturation Dynamic'
 * '<S393>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit1/Discrete Rate Limiter/Unit Delay External IC'
 * '<S394>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Steering Heading PID/Compare To Constant'
 * '<S395>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Steering Heading PID/PID with Error Wrapping'
 * '<S396>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Steering Heading PID/PID with Error Wrapping/Angle Modulus'
 * '<S397>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Steering Heading PID/PID with Error Wrapping/Difference'
 * '<S398>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Steering Heading PID/PID with Error Wrapping/Low_Pass_Filter'
 * '<S399>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Steering Heading PID/PID with Error Wrapping/Saturation Dynamic'
 * '<S400>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Translation Steering Command/Angle Modulus'
 * '<S401>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Reduce Speeds for Maximum Speed Limit'
 * '<S402>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add'
 * '<S403>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add1'
 * '<S404>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add2'
 * '<S405>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add3'
 * '<S406>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add/Angle_Saver'
 * '<S407>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add/Cartesian to Polar'
 * '<S408>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add/Polar to Cartesian'
 * '<S409>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add/Polar to Cartesian1'
 * '<S410>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add/Angle_Saver/Compare To Zero1'
 * '<S411>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add1/Angle_Saver'
 * '<S412>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add1/Cartesian to Polar'
 * '<S413>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add1/Polar to Cartesian'
 * '<S414>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add1/Polar to Cartesian1'
 * '<S415>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add1/Angle_Saver/Compare To Zero1'
 * '<S416>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add2/Angle_Saver'
 * '<S417>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add2/Cartesian to Polar'
 * '<S418>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add2/Polar to Cartesian'
 * '<S419>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add2/Polar to Cartesian1'
 * '<S420>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add2/Angle_Saver/Compare To Zero1'
 * '<S421>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add3/Angle_Saver'
 * '<S422>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add3/Cartesian to Polar'
 * '<S423>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add3/Polar to Cartesian'
 * '<S424>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add3/Polar to Cartesian1'
 * '<S425>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add3/Angle_Saver/Compare To Zero1'
 * '<S426>' : 'Code_Gen_Model/RoboRio Controls/Teleop/April Tag Relative Errors'
 * '<S427>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive'
 * '<S428>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Reefscape Teleop'
 * '<S429>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Subsystem'
 * '<S430>' : 'Code_Gen_Model/RoboRio Controls/Teleop/April Tag Relative Errors/Compare To Constant'
 * '<S431>' : 'Code_Gen_Model/RoboRio Controls/Teleop/April Tag Relative Errors/Compare To Constant1'
 * '<S432>' : 'Code_Gen_Model/RoboRio Controls/Teleop/April Tag Relative Errors/Compare To Constant10'
 * '<S433>' : 'Code_Gen_Model/RoboRio Controls/Teleop/April Tag Relative Errors/Compare To Constant2'
 * '<S434>' : 'Code_Gen_Model/RoboRio Controls/Teleop/April Tag Relative Errors/Compare To Constant3'
 * '<S435>' : 'Code_Gen_Model/RoboRio Controls/Teleop/April Tag Relative Errors/Compare To Constant4'
 * '<S436>' : 'Code_Gen_Model/RoboRio Controls/Teleop/April Tag Relative Errors/Compare To Constant5'
 * '<S437>' : 'Code_Gen_Model/RoboRio Controls/Teleop/April Tag Relative Errors/Compare To Constant6'
 * '<S438>' : 'Code_Gen_Model/RoboRio Controls/Teleop/April Tag Relative Errors/Compare To Constant7'
 * '<S439>' : 'Code_Gen_Model/RoboRio Controls/Teleop/April Tag Relative Errors/Compare To Constant8'
 * '<S440>' : 'Code_Gen_Model/RoboRio Controls/Teleop/April Tag Relative Errors/Compare To Constant9'
 * '<S441>' : 'Code_Gen_Model/RoboRio Controls/Teleop/April Tag Relative Errors/Compare To Zero'
 * '<S442>' : 'Code_Gen_Model/RoboRio Controls/Teleop/April Tag Relative Errors/Compare To Zero1'
 * '<S443>' : 'Code_Gen_Model/RoboRio Controls/Teleop/April Tag Relative Errors/Compare To Zero2'
 * '<S444>' : 'Code_Gen_Model/RoboRio Controls/Teleop/April Tag Relative Errors/Compare To Zero3'
 * '<S445>' : 'Code_Gen_Model/RoboRio Controls/Teleop/April Tag Relative Errors/Compare To Zero4'
 * '<S446>' : 'Code_Gen_Model/RoboRio Controls/Teleop/April Tag Relative Errors/Compare To Zero5'
 * '<S447>' : 'Code_Gen_Model/RoboRio Controls/Teleop/April Tag Relative Errors/Compare To Zero9'
 * '<S448>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering'
 * '<S449>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation'
 * '<S450>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering/Compare To Zero2'
 * '<S451>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering/Detect Increase'
 * '<S452>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering/Detect Increase1'
 * '<S453>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering/Detect Increase2'
 * '<S454>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering/Detect Increase3'
 * '<S455>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering/Detect Increase4'
 * '<S456>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering/Detect Increase5'
 * '<S457>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering/Previous active game state was not Teleop'
 * '<S458>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering/Saturation Dynamic'
 * '<S459>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Boost and Rate Limit'
 * '<S460>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Compare To Zero'
 * '<S461>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Compare To Zero1'
 * '<S462>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Latch Outputs when Both Inputs Zero'
 * '<S463>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Boost and Rate Limit/Simple Rate Limit'
 * '<S464>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Boost and Rate Limit/Simple Rate Limit/Discrete Rate Limiter'
 * '<S465>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Boost and Rate Limit/Simple Rate Limit/Discrete Rate Limiter/Saturation Dynamic'
 * '<S466>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Boost and Rate Limit/Simple Rate Limit/Discrete Rate Limiter/Unit Delay External IC'
 * '<S467>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Latch Outputs when Both Inputs Zero/Compare To Zero'
 * '<S468>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Latch Outputs when Both Inputs Zero/Compare To Zero1'
 * '<S469>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Reefscape Teleop/Detect Increase'
 * '<S470>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Reefscape Teleop/Detect Increase1'
 * '<S471>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Reefscape Teleop/Detect Increase10'
 * '<S472>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Reefscape Teleop/Detect Increase11'
 * '<S473>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Reefscape Teleop/Detect Increase12'
 * '<S474>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Reefscape Teleop/Detect Increase13'
 * '<S475>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Reefscape Teleop/Detect Increase2'
 * '<S476>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Reefscape Teleop/Detect Increase3'
 * '<S477>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Reefscape Teleop/Detect Increase4'
 * '<S478>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Reefscape Teleop/Detect Increase5'
 * '<S479>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Reefscape Teleop/Detect Increase6'
 * '<S480>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Reefscape Teleop/Detect Increase7'
 * '<S481>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Reefscape Teleop/Detect Increase8'
 * '<S482>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Reefscape Teleop/Detect Increase9'
 * '<S483>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Reefscape Teleop/Reefscape_Chart'
 */
#endif                                 /* Code_Gen_Model_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
