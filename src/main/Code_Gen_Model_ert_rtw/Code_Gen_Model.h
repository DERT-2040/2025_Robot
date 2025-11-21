/*
 * Sponsored License - for use in support of a program or activity
 * sponsored by MathWorks.  Not for government, commercial or other
 * non-sponsored organizational use.
 *
 * File: Code_Gen_Model.h
 *
 * Code generated for Simulink model 'Code_Gen_Model'.
 *
 * Model version                  : 2.402
 * Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
 * C/C++ source code generated on : Fri Nov 21 06:59:08 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM 7
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Code_Gen_Model_h_
#define RTW_HEADER_Code_Gen_Model_h_
#ifndef Code_Gen_Model_COMMON_INCLUDES_
#define Code_Gen_Model_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* Code_Gen_Model_COMMON_INCLUDES_ */

#include "Code_Gen_Model_types.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"
#include "rtGetNaN.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block states (default storage) for system '<S9>/Debounce' */
typedef struct {
  real_T timer;                        /* '<S9>/Debounce' */
  uint8_T is_active_c3_Controls_Component;/* '<S9>/Debounce' */
  uint8_T is_c3_Controls_Components_lib;/* '<S9>/Debounce' */
} DW_Debounce_Code_Gen_Model_T;

/* Block states (default storage) for system '<S32>/Reefscape_Chart' */
typedef struct {
  real_T timer;                        /* '<S32>/Reefscape_Chart' */
  real_T timer_robot_target;           /* '<S32>/Reefscape_Chart' */
  uint8_T is_active_c5_Code_Gen_Model; /* '<S32>/Reefscape_Chart' */
  uint8_T is_Elevator_CoralArm_CoralWheel;/* '<S32>/Reefscape_Chart' */
  uint8_T is_Algae_Pickup_High;        /* '<S32>/Reefscape_Chart' */
  uint8_T is_Algae_Pickup_Low;         /* '<S32>/Reefscape_Chart' */
  uint8_T is_Algae_Score;              /* '<S32>/Reefscape_Chart' */
  uint8_T is_Coral;                    /* '<S32>/Reefscape_Chart' */
  uint8_T is_Coral_Eject;              /* '<S32>/Reefscape_Chart' */
  uint8_T is_Level_2;                  /* '<S32>/Reefscape_Chart' */
  uint8_T is_Level_3;                  /* '<S32>/Reefscape_Chart' */
  uint8_T is_Level_4_Auto;             /* '<S32>/Reefscape_Chart' */
  uint8_T is_Level_4_Teleop;           /* '<S32>/Reefscape_Chart' */
  uint8_T is_Coral_Score_Position;     /* '<S32>/Reefscape_Chart' */
  uint8_T is_Actions;                  /* '<S32>/Reefscape_Chart' */
  uint8_T is_Coral_Pickup_Prepare;     /* '<S32>/Reefscape_Chart' */
  uint8_T is_Set_Level;                /* '<S32>/Reefscape_Chart' */
  uint8_T is_Elevator_Height_Bottom;   /* '<S32>/Reefscape_Chart' */
  uint8_T is_Elevator_Height_Bottom_pre;/* '<S32>/Reefscape_Chart' */
  uint8_T is_End_Game_Climb;           /* '<S32>/Reefscape_Chart' */
  uint8_T is_Set_Level_n;              /* '<S32>/Reefscape_Chart' */
  uint8_T is_Algae_Wheels;             /* '<S32>/Reefscape_Chart' */
  uint8_T is_AT_On_Target_Timer;       /* '<S32>/Reefscape_Chart' */
  boolean_T Set_L1;                    /* '<S32>/Reefscape_Chart' */
  boolean_T Set_L2;                    /* '<S32>/Reefscape_Chart' */
  boolean_T Set_L3;                    /* '<S32>/Reefscape_Chart' */
  boolean_T Set_L4;                    /* '<S32>/Reefscape_Chart' */
} DW_Reefscape_Chart_Code_Gen_M_T;

/* Block signals (default storage) */
typedef struct {
  real_T FL_Steer_Module_Angle;        /* '<S271>/Add1' */
  real_T FR_Steer_Module_Angle;        /* '<S272>/Add1' */
  real_T BL_Steer_Module_Angle;        /* '<S273>/Add1' */
  real_T BR_Steer_Module_Angle;        /* '<S274>/Add1' */
  real_T Drive_Joystick_X;             /* '<S16>/Signal Copy1' */
  real_T Drive_Joystick_Y;             /* '<S16>/Signal Copy2' */
  real_T Drive_Joystick_Z;             /* '<S16>/Signal Copy3' */
  real_T Steer_Joystick_Y;             /* '<S16>/Signal Copy5' */
  real_T Steer_Joystick_Z;             /* '<S16>/Signal Copy6' */
  real_T Gyro_Angle_Calibrated_deg;    /* '<S15>/Subtract1' */
  real_T Gyro_Angle_rad;               /* '<S112>/Gain1' */
  real_T Limelight_Tag_Corrected_X;    /* '<S19>/Add' */
  real_T Limelight_Tag_Corrected_Y;    /* '<S19>/Add1' */
  real_T Limelight_Tag_Corrected_Angle;/* '<S19>/Add2' */
  real_T Elevator_Height_Measured_Raw; /* '<S13>/Gain1' */
  real_T Elevator_Height_Offset;       /* '<S13>/Switch1' */
  real_T Elevator_Height_Measured;     /* '<S13>/Switch' */
  real_T Coral_Arm_Angle_Measured;     /* '<S1>/Add Constant' */
  real_T Gyro_Angle_Field_rad;         /* '<S15>/Add' */
  real_T Product6[2];                  /* '<S21>/Product6' */
  real_T Odom_Position_X;              /* '<S21>/Accumulator2' */
  real_T KF_Position_X;                /* '<S18>/Switch' */
  real_T Odom_Position_Y;              /* '<S21>/Accumulator' */
  real_T KF_Position_Y;                /* '<S18>/Switch1' */
  real_T Spline_Num_Poses;             /* '<S20>/Merge9' */
  real_T Steering_Abs_Cmd;             /* '<S20>/Merge1' */
  real_T Steering_Rel_Cmd;             /* '<S20>/Merge2' */
  real_T Translation_Speed;            /* '<S20>/Merge4' */
  real_T Translation_Angle;            /* '<S20>/Merge3' */
  real_T Translation_Speed_SPF;        /* '<S24>/Merge2' */
  real_T Translation_Speed_RL;         /* '<S373>/Sum' */
  real_T Translation_Angle_SPF;        /* '<S24>/Merge3' */
  real_T Gyro_Angle_SPF;               /* '<S24>/Merge8' */
  real_T Translation_Steering_Cmd;     /* '<S367>/Switch' */
  real_T Steering_Abs_Cmd_SPF;         /* '<S24>/Merge' */
  real_T Steering_Localized_PID;       /* '<S394>/Saturation2' */
  real_T Steering_Rel_Cmd_SPF;         /* '<S24>/Merge1' */
  real_T Steering_Localized_Cmd;       /* '<S366>/Switch' */
  real_T BR_Desired_Wheel_Speed_in;    /* '<S420>/Switch1' */
  real_T FL_Desired_Wheel_Speed_in;    /* '<S405>/Switch1' */
  real_T FR_Desired_Wheel_Speed_in;    /* '<S410>/Switch1' */
  real_T BL_Desired_Wheel_Speed_in;    /* '<S415>/Switch1' */
  real_T BR_Desired_Wheel_Speed;       /* '<S400>/Product3' */
  real_T BR_Desired_Module_Angle;      /* '<S420>/Switch' */
  real_T FL_Desired_Module_Angle;      /* '<S405>/Switch' */
  real_T FL_Desired_Wheel_Speed;       /* '<S400>/Product' */
  real_T FR_Desired_Module_Angle;      /* '<S410>/Switch' */
  real_T FR_Desired_Wheel_Speed;       /* '<S400>/Product1' */
  real_T BL_Desired_Module_Angle;      /* '<S415>/Switch' */
  real_T BL_Desired_Wheel_Speed;       /* '<S400>/Product2' */
  real_T Elevator_Height_Desired_merge;/* '<S20>/Merge11' */
  real_T Coral_Arm_Angle_Desired_merge;/* '<S20>/Merge13' */
  real_T Elevator_Error;               /* '<S12>/Add' */
  real_T Elevator_Proportional;        /* '<S94>/Gain1' */
  real_T Elevator_Integral;            /* '<S94>/Switch' */
  real_T Coral_ArmAngle_Error;         /* '<S8>/Subtract' */
  real_T Elevator_Proportional_l;      /* '<S76>/Gain1' */
  real_T Elevator_Integral_o;          /* '<S76>/Switch' */
  real_T Odometry_Y_global_est_ft;     /* '<S196>/meters to feet1' */
  real_T Odometry_Y_global_TEAR_ft;    /* '<S196>/Subtract1' */
  real_T Odometry_X_global_est_ft;     /* '<S196>/meters to feet' */
  real_T Odometry_X_global_TEAR_ft;    /* '<S196>/Subtract' */
  real_T Product6_d[2];                /* '<S22>/Product6' */
  real_T Odom_Position_X_p;            /* '<S22>/Accumulator2' */
  real_T Odometry_X_global_est_ft_i;   /* '<S207>/meters to feet' */
  real_T Odometry_X_global_TEAR_ft_e;  /* '<S207>/Subtract' */
  real_T Odom_Position_Y_l;            /* '<S22>/Accumulator' */
  real_T Odometry_Y_global_est_ft_k;   /* '<S207>/meters to feet1' */
  real_T Odometry_Y_global_TEAR_ft_d;  /* '<S207>/Subtract1' */
  real_T Steer_Joystick_X;             /* '<S16>/Signal Copy4' */
  real_T AT_Relative_Error_Error_Y;    /* '<S27>/Signal Copy8' */
  real_T AT_Relative_Error_Error_X;    /* '<S27>/Signal Copy7' */
  real_T AT_Relative_Error_Angle;      /* '<S27>/Signal Copy9' */
  real_T Steering_Abs_Gyro_Latch;      /* '<S447>/Switch8' */
  real_T Steering_Abs_Gyro;            /* '<S447>/Switch2' */
  real_T Steering_Abs_Angle;           /* '<S447>/Switch3' */
  real_T State_ID_Teleop;              /* '<S427>/Reefscape_Chart' */
  real_T Elevator_Height_Desired;      /* '<S427>/Reefscape_Chart' */
  real_T Coral_Arm_Angle_Desired;      /* '<S427>/Reefscape_Chart' */
  real_T Coral_Wheel_DC;               /* '<S427>/Reefscape_Chart' */
  real_T UnitDelay2;                   /* '<S29>/Unit Delay2' */
  real_T Auto_AT_Relative_Error_Y;     /* '<S29>/Signal Copy6' */
  real_T Auto_AT_Relative_Error_X;     /* '<S29>/Signal Copy2' */
  real_T Auto_AT_Relative_Error_Angle; /* '<S29>/Signal Copy7' */
  real_T Translation_Speed_g;          /* '<S29>/Reefscape_Auto_Steps' */
  real_T Translation_Angle_l;          /* '<S29>/Reefscape_Auto_Steps' */
  real_T State_ID_Auto;                /* '<S32>/Reefscape_Chart' */
  real_T Elevator_Height_Desired_h;    /* '<S32>/Reefscape_Chart' */
  real_T Coral_Arm_Angle_Desired_f;    /* '<S32>/Reefscape_Chart' */
  real_T Coral_Wheel_DC_a;             /* '<S32>/Reefscape_Chart' */
  real_T Spline_Follow_Index;          /* '<S216>/Merge4' */
  real_T Spline_Target_Y;              /* '<S213>/Selector6' */
  real_T Spline_Target_X;              /* '<S213>/Selector2' */
  real_T Assignment[450];              /* '<S238>/Assignment' */
  real_T Product2[2];                  /* '<S186>/Product2' */
  real_T Product3[2];                  /* '<S184>/Product3' */
  uint16_T Set_Coral_Level;            /* '<S427>/Reefscape_Chart' */
  uint16_T Set_Coral_Level_j;          /* '<S32>/Reefscape_Chart' */
  uint16_T WhileIterator;              /* '<S263>/While Iterator' */
  uint8_T Set_Algae_Level;             /* '<S427>/Reefscape_Chart' */
  uint8_T Desired_Pipeline;            /* '<S427>/Reefscape_Chart' */
  uint8_T Path_ID;                     /* '<S29>/Reefscape_Auto_Steps' */
  uint8_T Auto_Step_ID;                /* '<S29>/Reefscape_Auto_Steps' */
  uint8_T Set_Algae_Level_p;           /* '<S32>/Reefscape_Chart' */
  uint8_T Active_GameState;            /* '<S23>/Chart' */
  boolean_T Button_Enable_Wheels;      /* '<S130>/FixPt Relational Operator' */
  boolean_T Button_Reset_Wheel_Offsets;/* '<S131>/FixPt Relational Operator' */
  boolean_T Button_Disable_Wheels;     /* '<S132>/FixPt Relational Operator' */
  boolean_T Drive_Joystick_Z_Mode;     /* '<S121>/Compare' */
  boolean_T Is_Boosting;               /* '<S127>/Compare' */
  boolean_T Face_Toward_Driver;        /* '<S119>/Compare' */
  boolean_T Face_Right_Driver;         /* '<S120>/Compare' */
  boolean_T Face_Left_Driver;          /* '<S122>/Compare' */
  boolean_T Face_Away_Driver;          /* '<S115>/Compare' */
  boolean_T Align_Left;                /* '<S125>/Compare' */
  boolean_T Align_Right;               /* '<S124>/Compare' */
  boolean_T Align_Center;              /* '<S126>/Compare' */
  boolean_T Drive_Engage_Hook;         /* '<S123>/Compare' */
  boolean_T Gamepad_POV_Up;            /* '<S114>/Compare' */
  boolean_T Gamepad_POV_Down;          /* '<S116>/Compare' */
  boolean_T Gamepad_POV_Left;          /* '<S118>/Compare' */
  boolean_T Gamepad_POV_Right;         /* '<S117>/Compare' */
  boolean_T Spline_Enable;             /* '<S20>/Merge7' */
  boolean_T Is_Absolute_Translation_SPF;/* '<S24>/Merge4' */
  boolean_T Is_Absolute_Steering_SPF;  /* '<S24>/Merge5' */
  boolean_T Swerve_Drive_Integral_Enable;/* '<S20>/Merge23' */
  boolean_T Reefscape_Motors_Enable_merge;/* '<S20>/Merge12' */
  boolean_T Winch_Cmd;                 /* '<S129>/Compare' */
  boolean_T Actuator_Cmd;              /* '<S128>/Compare' */
  boolean_T Robot_Reached_Destination_l;/* '<S24>/Merge7' */
  boolean_T Test_Mode;                 /* '<S20>/Merge10' */
  boolean_T Elevator_LowerPickup_Reset_merg;/* '<S20>/Merge21' */
  boolean_T AT_Relative_Error_Enable;  /* '<S27>/Signal Copy6' */
  boolean_T Steering_Abs_Angle_Active; /* '<S447>/AND6' */
  boolean_T Teleop_AT_On_Target;       /* '<S27>/Signal Copy10' */
  boolean_T Elevator_LowerPickup_Reset;/* '<S427>/Reefscape_Chart' */
  boolean_T Coral_Pickup_Lower_Wait_State;/* '<S427>/Reefscape_Chart' */
  boolean_T Auto_AT_Relative_Enable;   /* '<S29>/Signal Copy1' */
  boolean_T Auto_AT_On_Target;         /* '<S29>/Signal Copy8' */
  boolean_T Align_Left_d;              /* '<S29>/Reefscape_Auto_Steps' */
  boolean_T Align_Center_a;            /* '<S29>/Reefscape_Auto_Steps' */
  boolean_T Gamepad_B4_Y_out;          /* '<S29>/Reefscape_Auto_Steps' */
  boolean_T Gamepad_Start_out;         /* '<S29>/Reefscape_Auto_Steps' */
  boolean_T Gamepad_Back_out;          /* '<S29>/Reefscape_Auto_Steps' */
  boolean_T Gamepad_RT_out;            /* '<S29>/Reefscape_Auto_Steps' */
  boolean_T Gamepad_POV_Down_k;        /* '<S29>/Reefscape_Auto_Steps' */
  boolean_T Gamepad_POV_Left_p;        /* '<S29>/Reefscape_Auto_Steps' */
  boolean_T Path_Enable;               /* '<S29>/Reefscape_Auto_Steps' */
  boolean_T Gamepad_B1_A_out;          /* '<S29>/Reefscape_Auto_Steps' */
  boolean_T Gamepad_B3_X_out;          /* '<S29>/Reefscape_Auto_Steps' */
  boolean_T Elevator_LowerPickup_Reset_g;/* '<S32>/Reefscape_Chart' */
  boolean_T Coral_Pickup_Lower_Wait_State_m;/* '<S32>/Reefscape_Chart' */
  boolean_T Coral_Score_j;             /* '<S32>/Reefscape_Chart' */
  boolean_T Spline_Out_Of_Bounds;      /* '<S216>/Merge1' */
  boolean_T Out;                       /* '<S10>/Debounce' */
  boolean_T Out_h;                     /* '<S9>/Debounce' */
} B_Code_Gen_Model_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T UD_DSTATE;                    /* '<S188>/UD' */
  real_T UD_DSTATE_m;                  /* '<S189>/UD' */
  real_T UD_DSTATE_i;                  /* '<S190>/UD' */
  real_T UD_DSTATE_c;                  /* '<S191>/UD' */
  real_T DelayInput1_DSTATE;           /* '<S130>/Delay Input1' */
  real_T DelayInput1_DSTATE_e;         /* '<S131>/Delay Input1' */
  real_T DelayInput1_DSTATE_n;         /* '<S132>/Delay Input1' */
  real_T DelayInput1_DSTATE_p;         /* '<S113>/Delay Input1' */
  real_T UnitDelay1_DSTATE;            /* '<S15>/Unit Delay1' */
  real_T TappedDelay_X[2];             /* '<S18>/Tapped Delay' */
  real_T TappedDelay1_X[2];            /* '<S18>/Tapped Delay1' */
  real_T MemoryX_DSTATE[2];            /* '<S133>/MemoryX' */
  real_T UD_DSTATE_d;                  /* '<S187>/UD' */
  real_T Accumulator2_DSTATE;          /* '<S21>/Accumulator2' */
  real_T Accumulator_DSTATE;           /* '<S21>/Accumulator' */
  real_T UnitDelay1_DSTATE_i;          /* '<S397>/Unit Delay1' */
  real_T UD_DSTATE_a;                  /* '<S396>/UD' */
  real_T UnitDelay_DSTATE_m;           /* '<S394>/Unit Delay' */
  real_T UnitDelay_DSTATE_d;           /* '<S377>/Unit Delay' */
  real_T FixPtUnitDelay1_DSTATE_e;     /* '<S392>/FixPt Unit Delay1' */
  real_T UnitDelay_DSTATE_g;           /* '<S376>/Unit Delay' */
  real_T FixPtUnitDelay1_DSTATE_p;     /* '<S385>/FixPt Unit Delay1' */
  real_T UnitDelay1_DSTATE_j;          /* '<S351>/Unit Delay1' */
  real_T UD_DSTATE_j;                  /* '<S350>/UD' */
  real_T UnitDelay_DSTATE_l;           /* '<S344>/Unit Delay' */
  real_T UnitDelay1_DSTATE_f;          /* '<S288>/Unit Delay1' */
  real_T UD_DSTATE_h;                  /* '<S287>/UD' */
  real_T UnitDelay_DSTATE_j;           /* '<S281>/Unit Delay' */
  real_T UnitDelay1_DSTATE_b;          /* '<S299>/Unit Delay1' */
  real_T UD_DSTATE_b;                  /* '<S298>/UD' */
  real_T UnitDelay_DSTATE_e;           /* '<S284>/Unit Delay' */
  real_T UnitDelay1_DSTATE_e;          /* '<S309>/Unit Delay1' */
  real_T UD_DSTATE_mm;                 /* '<S308>/UD' */
  real_T UnitDelay_DSTATE_h;           /* '<S302>/Unit Delay' */
  real_T UnitDelay1_DSTATE_n;          /* '<S320>/Unit Delay1' */
  real_T UD_DSTATE_i1;                 /* '<S319>/UD' */
  real_T UnitDelay_DSTATE_dt;          /* '<S305>/Unit Delay' */
  real_T UnitDelay1_DSTATE_n4;         /* '<S330>/Unit Delay1' */
  real_T UD_DSTATE_o;                  /* '<S329>/UD' */
  real_T UnitDelay_DSTATE_f;           /* '<S323>/Unit Delay' */
  real_T UnitDelay1_DSTATE_nw;         /* '<S341>/Unit Delay1' */
  real_T UD_DSTATE_k;                  /* '<S340>/UD' */
  real_T UnitDelay_DSTATE_k;           /* '<S326>/Unit Delay' */
  real_T UnitDelay1_DSTATE_iw;         /* '<S362>/Unit Delay1' */
  real_T UD_DSTATE_l;                  /* '<S361>/UD' */
  real_T UnitDelay_DSTATE_lm;          /* '<S347>/Unit Delay' */
  real_T UnitDelay_DSTATE_mh;          /* '<S93>/Unit Delay' */
  real_T FixPtUnitDelay1_DSTATE_l;     /* '<S102>/FixPt Unit Delay1' */
  real_T UnitDelay_DSTATE_oz;          /* '<S75>/Unit Delay' */
  real_T FixPtUnitDelay1_DSTATE_pc;    /* '<S84>/FixPt Unit Delay1' */
  real_T UnitDelay1_DSTATE_d;          /* '<S196>/Unit Delay1' */
  real_T UnitDelay_DSTATE_c;           /* '<S196>/Unit Delay' */
  real_T UD_DSTATE_e;                  /* '<S199>/UD' */
  real_T UD_DSTATE_p;                  /* '<S200>/UD' */
  real_T UD_DSTATE_bg;                 /* '<S201>/UD' */
  real_T UD_DSTATE_cp;                 /* '<S202>/UD' */
  real_T UD_DSTATE_do;                 /* '<S198>/UD' */
  real_T Accumulator2_DSTATE_p;        /* '<S22>/Accumulator2' */
  real_T UnitDelay_DSTATE_b;           /* '<S207>/Unit Delay' */
  real_T Accumulator_DSTATE_p;         /* '<S22>/Accumulator' */
  real_T UnitDelay1_DSTATE_a;          /* '<S207>/Unit Delay1' */
  real_T DelayInput1_DSTATE_c;         /* '<S468>/Delay Input1' */
  real_T DelayInput1_DSTATE_nr;        /* '<S469>/Delay Input1' */
  real_T DelayInput1_DSTATE_ez;        /* '<S474>/Delay Input1' */
  real_T DelayInput1_DSTATE_nh;        /* '<S475>/Delay Input1' */
  real_T DelayInput1_DSTATE_i;         /* '<S476>/Delay Input1' */
  real_T DelayInput1_DSTATE_cp;        /* '<S470>/Delay Input1' */
  real_T DelayInput1_DSTATE_pd;        /* '<S477>/Delay Input1' */
  real_T DelayInput1_DSTATE_o;         /* '<S480>/Delay Input1' */
  real_T DelayInput1_DSTATE_j;         /* '<S481>/Delay Input1' */
  real_T DelayInput1_DSTATE_b;         /* '<S473>/Delay Input1' */
  real_T UnitDelay1_DSTATE_nr;         /* '<S425>/Unit Delay1' */
  real_T UnitDelay_DSTATE_kq;          /* '<S425>/Unit Delay' */
  real_T UnitDelay1_DSTATE_l;          /* '<S461>/Unit Delay1' */
  real_T UnitDelay_DSTATE_p;           /* '<S461>/Unit Delay' */
  real_T FixPtUnitDelay1_DSTATE_f;     /* '<S465>/FixPt Unit Delay1' */
  real_T UnitDelay3_DSTATE;            /* '<S447>/Unit Delay3' */
  real_T UnitDelay1_DSTATE_j2;         /* '<S447>/Unit Delay1' */
  real_T UnitDelay2_DSTATE;            /* '<S29>/Unit Delay2' */
  real_T UnitDelay1_DSTATE_ek;         /* '<S30>/Unit Delay1' */
  real_T UnitDelay_DSTATE_bc;          /* '<S30>/Unit Delay' */
  real_T UnitDelay_DSTATE_gh;          /* '<S212>/Unit Delay' */
  real_T UnitDelay_DSTATE_hn;          /* '<S211>/Unit Delay' */
  real_T UnitDelay1_DSTATE_f4;         /* '<S264>/Unit Delay1' */
  real_T UnitDelay_DSTATE_g4;          /* '<S264>/Unit Delay' */
  real_T UnitDelay_DSTATE_le;          /* '<S214>/Unit Delay' */
  real_T UnitDelay1_DSTATE_kc;         /* '<S214>/Unit Delay1' */
  real_T timer;                        /* '<S29>/Reefscape_Auto_Steps' */
  void *MatrixConcatenate_PWORK;       /* '<S233>/Matrix Concatenate' */
  int32_T Selector5_DIMS1[2];          /* '<S233>/Selector5' */
  int32_T MatrixConcatenate_DIMS1[2];  /* '<S233>/Matrix Concatenate' */
  int32_T Selector4_DIMS1[2];          /* '<S233>/Selector4' */
  uint8_T FixPtUnitDelay2_DSTATE;      /* '<S375>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_p;    /* '<S392>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_c;    /* '<S385>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_o;    /* '<S102>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_j;    /* '<S84>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_a;    /* '<S465>/FixPt Unit Delay2' */
  boolean_T DelayInput1_DSTATE_bd;     /* '<S105>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_o1;     /* '<S106>/Delay Input1' */
  boolean_T UnitDelay_DSTATE_mph;      /* '<S1>/Unit Delay' */
  boolean_T DelayInput1_DSTATE_po;     /* '<S107>/Delay Input1' */
  boolean_T UnitDelay_DSTATE_ll;       /* '<S17>/Unit Delay' */
  boolean_T DelayInput1_DSTATE_be;     /* '<S103>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_op;     /* '<S85>/Delay Input1' */
  boolean_T UnitDelay_DSTATE_gln;      /* '<S14>/Unit Delay' */
  boolean_T UnitDelay1_DSTATE_kb;      /* '<S14>/Unit Delay1' */
  boolean_T UnitDelay2_DSTATE_k;       /* '<S14>/Unit Delay2' */
  boolean_T UnitDelay_DSTATE_ir;       /* '<S28>/Unit Delay' */
  boolean_T DelayInput1_DSTATE_oy;     /* '<S478>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_f;      /* '<S479>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_o5;     /* '<S471>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_a;      /* '<S472>/Delay Input1' */
  boolean_T UnitDelay_DSTATE_ia;       /* '<S27>/Unit Delay' */
  boolean_T DelayInput1_DSTATE_jp;     /* '<S455>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_ft;     /* '<S454>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_m;      /* '<S450>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_k;      /* '<S451>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_g;      /* '<S452>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_g2;     /* '<S453>/Delay Input1' */
  boolean_T UnitDelay2_DSTATE_l;       /* '<S447>/Unit Delay2' */
  boolean_T UnitDelay4_DSTATE;         /* '<S447>/Unit Delay4' */
  boolean_T UnitDelay1_DSTATE_p;       /* '<S29>/Unit Delay1' */
  boolean_T DelayInput1_DSTATE_l;      /* '<S55>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_bdz;    /* '<S56>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_au;     /* '<S61>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_ne;     /* '<S62>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_ff;     /* '<S63>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_ev;     /* '<S57>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_o1g;    /* '<S64>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_os;     /* '<S67>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_b2;     /* '<S68>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_bm;     /* '<S60>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_d;      /* '<S65>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_b3;     /* '<S66>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_ae;     /* '<S58>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_mu;     /* '<S59>/Delay Input1' */
  boolean_T UnitDelay_DSTATE_i3;       /* '<S29>/Unit Delay' */
  boolean_T UnitDelay_DSTATE_e4;       /* '<S219>/Unit Delay' */
  boolean_T UnitDelay_DSTATE_n;        /* '<S224>/Unit Delay' */
  int8_T SwitchCase_ActiveSubsystem;   /* '<S1>/Switch Case' */
  int8_T Accumulator2_PrevResetState;  /* '<S21>/Accumulator2' */
  int8_T Accumulator_PrevResetState;   /* '<S21>/Accumulator' */
  int8_T If_ActiveSubsystem;           /* '<S24>/If' */
  int8_T Accumulator2_PrevResetState_c;/* '<S22>/Accumulator2' */
  int8_T Accumulator_PrevResetState_j; /* '<S22>/Accumulator' */
  int8_T If_ActiveSubsystem_h;         /* '<S216>/If' */
  int8_T If_ActiveSubsystem_o;         /* '<S219>/If' */
  int8_T If_ActiveSubsystem_d;         /* '<S221>/If' */
  uint8_T Accumulator2_IC_LOADING;     /* '<S22>/Accumulator2' */
  uint8_T Accumulator_IC_LOADING;      /* '<S22>/Accumulator' */
  uint8_T is_active_c6_Code_Gen_Model; /* '<S29>/Reefscape_Auto_Steps' */
  uint8_T is_c6_Code_Gen_Model;        /* '<S29>/Reefscape_Auto_Steps' */
  uint8_T is_Center;                   /* '<S29>/Reefscape_Auto_Steps' */
  uint8_T is_Path_to_Reef;             /* '<S29>/Reefscape_Auto_Steps' */
  uint8_T is_Left_and_Right;           /* '<S29>/Reefscape_Auto_Steps' */
  uint8_T is_Path_to_Reef_1;           /* '<S29>/Reefscape_Auto_Steps' */
  uint8_T is_Drive;                    /* '<S29>/Reefscape_Auto_Steps' */
  uint8_T is_Path_to_Reef_2;           /* '<S29>/Reefscape_Auto_Steps' */
  uint8_T is_Path_to_Reef_2_v2;        /* '<S29>/Reefscape_Auto_Steps' */
  uint8_T is_active_c9_Code_Gen_Model; /* '<S23>/Chart' */
  uint8_T is_c9_Code_Gen_Model;        /* '<S23>/Chart' */
  boolean_T icLoad;                    /* '<S133>/MemoryX' */
  boolean_T Relay_Mode;                /* '<S246>/Relay' */
  boolean_T EnabledSubsystem_MODE;     /* '<S160>/Enabled Subsystem' */
  boolean_T MeasurementUpdate_MODE;    /* '<S153>/MeasurementUpdate' */
  DW_Reefscape_Chart_Code_Gen_M_T sf_Reefscape_Chart_n;/* '<S427>/Reefscape_Chart' */
  DW_Reefscape_Chart_Code_Gen_M_T sf_Reefscape_Chart;/* '<S32>/Reefscape_Chart' */
  DW_Debounce_Code_Gen_Model_T sf_Debounce_m;/* '<S10>/Debounce' */
  DW_Debounce_Code_Gen_Model_T sf_Debounce;/* '<S9>/Debounce' */
} DW_Code_Gen_Model_T;

/* Invariant block signals (default storage) */
typedef struct {
  const real_T UnaryMinus;             /* '<S75>/Unary Minus' */
  const real_T UnaryMinus_m;           /* '<S93>/Unary Minus' */
  const real_T Cos5;                   /* '<S292>/Cos5' */
  const real_T Sin5;                   /* '<S292>/Sin5' */
  const real_T Cos5_g;                 /* '<S313>/Cos5' */
  const real_T Sin5_m;                 /* '<S313>/Sin5' */
  const real_T Cos5_i;                 /* '<S334>/Cos5' */
  const real_T Sin5_e;                 /* '<S334>/Sin5' */
  const real_T Cos5_b;                 /* '<S355>/Cos5' */
  const real_T Sin5_c;                 /* '<S355>/Sin5' */
  const real_T TrigonometricFunction;  /* '<S22>/Trigonometric Function' */
  const real_T TrigonometricFunction1; /* '<S22>/Trigonometric Function1' */
  const real_T UnaryMinus_g;           /* '<S22>/Unary Minus' */
  const real_T Rotationmatrixfromlocaltogl[4];
                              /* '<S22>/Rotation matrix from local to global' */
  const real_T DeadZone;               /* '<S32>/Dead Zone' */
  const real_T DeadZone1;              /* '<S32>/Dead Zone1' */
  const real_T Atan2;                  /* '<S365>/Atan2' */
  const real_T FL_Tangent_Angle;       /* '<S365>/Add' */
  const real_T Atan1;                  /* '<S365>/Atan1' */
  const real_T FR_Tangent_Angle;       /* '<S365>/Add1' */
  const real_T Atan3;                  /* '<S365>/Atan3' */
  const real_T BL_Tangent_Angle;       /* '<S365>/Add2' */
  const real_T Atan4;                  /* '<S365>/Atan4' */
  const real_T BR_Tangent_Angle;       /* '<S365>/Add3' */
} ConstB_Code_Gen_Model_T;

/* Constant parameters (default storage) */
typedef struct {
  /* Expression: Coral_Arm_Lower_Limit_Out
   * Referenced by: '<S8>/Range of Motion Protection Limit'
   */
  real_T RangeofMotionProtectionLimit_ta[75];

  /* Expression: Coral_Arm_Lower_Limit_Elevator_Height_Input
   * Referenced by: '<S8>/Range of Motion Protection Limit'
   */
  real_T RangeofMotionProtectionLimit_bp[75];

  /* Expression: Spline_Capture_Radius
   * Referenced by: '<S211>/Capture Radius'
   */
  real_T CaptureRadius_tableData[4];

  /* Pooled Parameter (Expression: Spline_Velocity_Axis)
   * Referenced by:
   *   '<S211>/Capture Radius'
   *   '<S211>/Lookahead Distance'
   */
  real_T pooled9[4];

  /* Expression: Spline_Lookahead_Dist
   * Referenced by: '<S211>/Lookahead Distance'
   */
  real_T LookaheadDistance_tableData[4];

  /* Expression: All_Paths_Ref_Poses
   * Referenced by: '<S29>/Constant'
   */
  real_T Constant_Value_k[800];

  /* Expression: All_Paths_Num_Poses
   * Referenced by: '<S29>/1-D Lookup Table'
   */
  real_T uDLookupTable_tableData[20];

  /* Expression: Steering_Mod_Drv_out
   * Referenced by: '<S448>/Modulation_Drv'
   */
  real_T Modulation_Drv_tableData[21];

  /* Expression: Steering_Mod_Drv_in
   * Referenced by: '<S448>/Modulation_Drv'
   */
  real_T Modulation_Drv_bp01Data[21];

  /* Expression: Steering_Mod_Str_Rel_out
   * Referenced by: '<S447>/Modulation_Str_Y_Rel'
   */
  real_T Modulation_Str_Y_Rel_tableData[21];

  /* Expression: Steering_Mod_Str_Rel_in
   * Referenced by: '<S447>/Modulation_Str_Y_Rel'
   */
  real_T Modulation_Str_Y_Rel_bp01Data[21];

  /* Pooled Parameter (Expression: Rotation_Local_Inv)
   * Referenced by:
   *   '<S21>/Constant4'
   *   '<S22>/Constant4'
   */
  real_T pooled27[16];

  /* Pooled Parameter (Expression: Drive_Motor_Control_Scale_Factor)
   * Referenced by:
   *   '<S283>/1-D Lookup Table'
   *   '<S304>/1-D Lookup Table'
   *   '<S325>/1-D Lookup Table'
   *   '<S346>/1-D Lookup Table'
   */
  real_T pooled35[2];

  /* Pooled Parameter (Expression: Drive_Motor_Control_Module_Angle_Error)
   * Referenced by:
   *   '<S283>/1-D Lookup Table'
   *   '<S304>/1-D Lookup Table'
   *   '<S325>/1-D Lookup Table'
   *   '<S346>/1-D Lookup Table'
   */
  real_T pooled36[2];

  /* Pooled Parameter (Expression: Elevator_Height_Lower_Limit_Out)
   * Referenced by:
   *   '<S12>/Range of Motion Protection Limit'
   *   '<S12>/Range of Motion Protection Limit1'
   */
  real_T pooled37[96];

  /* Pooled Parameter (Expression: Elevator_Height_Lower_Limit_Coral_Arm_Input)
   * Referenced by:
   *   '<S12>/Range of Motion Protection Limit'
   *   '<S12>/Range of Motion Protection Limit1'
   */
  real_T pooled38[96];

  /* Expression: Coral_Arm_DC_Upper_Limit_Out
   * Referenced by: '<S8>/1-D Lookup Table'
   */
  real_T uDLookupTable_tableData_l[3];

  /* Expression: Coral_Arm_DC_Upper_Limit_Angle_In
   * Referenced by: '<S8>/1-D Lookup Table'
   */
  real_T uDLookupTable_bp01Data[3];

  /* Expression: Coral_Arm_DC_Lower_Limit_Out
   * Referenced by: '<S8>/1-D Lookup Table1'
   */
  real_T uDLookupTable1_tableData[2];

  /* Expression: Coral_Arm_DC_Lower_Limit_Angle_In
   * Referenced by: '<S8>/1-D Lookup Table1'
   */
  real_T uDLookupTable1_bp01Data[2];
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
                                      *   '<S431>/Constant'
                                      *   '<S37>/Constant'
                                      */
extern real_T AT_Integral_Enable_Error_XY;/* Variable: AT_Integral_Enable_Error_XY
                                           * Referenced by:
                                           *   '<S438>/Constant'
                                           *   '<S439>/Constant'
                                           *   '<S44>/Constant'
                                           *   '<S45>/Constant'
                                           */
extern real_T AT_Max_Error_Angle;      /* Variable: AT_Max_Error_Angle
                                        * Referenced by:
                                        *   '<S437>/Constant'
                                        *   '<S43>/Constant'
                                        */
extern real_T AT_Max_Error_XY;         /* Variable: AT_Max_Error_XY
                                        * Referenced by:
                                        *   '<S435>/Constant'
                                        *   '<S436>/Constant'
                                        *   '<S41>/Constant'
                                        *   '<S42>/Constant'
                                        */
extern real_T AT_On_Target_Time;       /* Variable: AT_On_Target_Time
                                        * Referenced by:
                                        *   '<S427>/Reefscape_Chart'
                                        *   '<S32>/Reefscape_Chart'
                                        */
extern real_T AT_Reef_Target_Algae_X;  /* Variable: AT_Reef_Target_Algae_X
                                        * Referenced by:
                                        *   '<S425>/Constant7'
                                        *   '<S30>/Constant7'
                                        */
extern real_T AT_Reef_Target_Algae_Y;  /* Variable: AT_Reef_Target_Algae_Y
                                        * Referenced by:
                                        *   '<S425>/Constant6'
                                        *   '<S30>/Constant6'
                                        */
extern real_T AT_Reef_Target_Center_Y; /* Variable: AT_Reef_Target_Center_Y
                                        * Referenced by:
                                        *   '<S425>/Constant3'
                                        *   '<S30>/Constant3'
                                        */
extern real_T AT_Reef_Target_L1_X;     /* Variable: AT_Reef_Target_L1_X
                                        * Referenced by:
                                        *   '<S425>/Constant4'
                                        *   '<S30>/Constant4'
                                        */
extern real_T AT_Reef_Target_L2_L3_X;  /* Variable: AT_Reef_Target_L2_L3_X
                                        * Referenced by:
                                        *   '<S425>/Constant'
                                        *   '<S30>/Constant'
                                        */
extern real_T AT_Reef_Target_L4_X;     /* Variable: AT_Reef_Target_L4_X
                                        * Referenced by:
                                        *   '<S425>/Constant5'
                                        *   '<S30>/Constant5'
                                        */
extern real_T AT_Reef_Target_Left_Y;   /* Variable: AT_Reef_Target_Left_Y
                                        * Referenced by:
                                        *   '<S425>/Constant1'
                                        *   '<S30>/Constant1'
                                        */
extern real_T AT_Reef_Target_Right_Y;  /* Variable: AT_Reef_Target_Right_Y
                                        * Referenced by: '<S425>/Constant2'
                                        */
extern real_T AT_Steering_Error_Angle_Gain_P;
                                     /* Variable: AT_Steering_Error_Angle_Gain_P
                                      * Referenced by:
                                      *   '<S34>/Constant4'
                                      *   '<S447>/Constant4'
                                      */
extern real_T AT_Steering_Speed_Max;   /* Variable: AT_Steering_Speed_Max
                                        * Referenced by:
                                        *   '<S34>/Constant10'
                                        *   '<S447>/Constant10'
                                        */
extern real_T AT_Translation_Control_Gain_Field;
                                  /* Variable: AT_Translation_Control_Gain_Field
                                   * Referenced by: '<S448>/Gain2'
                                   */
extern real_T AT_Translation_Control_Gain_Relative;
                               /* Variable: AT_Translation_Control_Gain_Relative
                                * Referenced by:
                                *   '<S34>/Gain1'
                                *   '<S448>/Gain1'
                                */
extern real_T AT_Translation_Speed_Max_Field;
                                     /* Variable: AT_Translation_Speed_Max_Field
                                      * Referenced by: '<S448>/Constant5'
                                      */
extern real_T AT_Translation_Speed_Max_Relative;
                                  /* Variable: AT_Translation_Speed_Max_Relative
                                   * Referenced by:
                                   *   '<S34>/Constant8'
                                   *   '<S448>/Constant8'
                                   */
extern real_T Actuator_DC;             /* Variable: Actuator_DC
                                        * Referenced by: '<S14>/Constant6'
                                        */
extern real_T Actuator_Rev_Startup_Range;/* Variable: Actuator_Rev_Startup_Range
                                          * Referenced by: '<S109>/Constant'
                                          */
extern real_T Actuator_Rev_Target;     /* Variable: Actuator_Rev_Target
                                        * Referenced by: '<S110>/Constant'
                                        */
extern real_T Algae_Eject_Time;        /* Variable: Algae_Eject_Time
                                        * Referenced by:
                                        *   '<S427>/Reefscape_Chart'
                                        *   '<S32>/Reefscape_Chart'
                                        */
extern real_T Algae_Hold_DC;           /* Variable: Algae_Hold_DC
                                        * Referenced by:
                                        *   '<S427>/Reefscape_Chart'
                                        *   '<S32>/Reefscape_Chart'
                                        */
extern real_T Algae_Pull_In_DC;        /* Variable: Algae_Pull_In_DC
                                        * Referenced by:
                                        *   '<S427>/Reefscape_Chart'
                                        *   '<S32>/Reefscape_Chart'
                                        */
extern real_T Algae_Push_Out_DC;       /* Variable: Algae_Push_Out_DC
                                        * Referenced by:
                                        *   '<S427>/Reefscape_Chart'
                                        *   '<S32>/Reefscape_Chart'
                                        */
extern real_T Auto_Algae_Height_Time;  /* Variable: Auto_Algae_Height_Time
                                        * Referenced by: '<S29>/Reefscape_Auto_Steps'
                                        */
extern real_T Auto_Backup_Time_Processor;/* Variable: Auto_Backup_Time_Processor
                                          * Referenced by: '<S29>/Reefscape_Auto_Steps'
                                          */
extern real_T Auto_Backup_Time_Reef;   /* Variable: Auto_Backup_Time_Reef
                                        * Referenced by: '<S29>/Reefscape_Auto_Steps'
                                        */
extern real_T Auto_Path1_Delay_to_L2_Time;/* Variable: Auto_Path1_Delay_to_L2_Time
                                           * Referenced by: '<S29>/Reefscape_Auto_Steps'
                                           */
extern real_T Auto_Path1_Delay_to_L4_Time;/* Variable: Auto_Path1_Delay_to_L4_Time
                                           * Referenced by: '<S29>/Reefscape_Auto_Steps'
                                           */
extern real_T Auto_Path2_Delay_to_L4_Time;/* Variable: Auto_Path2_Delay_to_L4_Time
                                           * Referenced by: '<S29>/Reefscape_Auto_Steps'
                                           */
extern real_T Auto_Speed_Algae;        /* Variable: Auto_Speed_Algae
                                        * Referenced by: '<S29>/Reefscape_Auto_Steps'
                                        */
extern real_T Auto_Speed_Coral;        /* Variable: Auto_Speed_Coral
                                        * Referenced by: '<S29>/Reefscape_Auto_Steps'
                                        */
extern real_T Auto_Speed_Processor;    /* Variable: Auto_Speed_Processor
                                        * Referenced by: '<S29>/Reefscape_Auto_Steps'
                                        */
extern real_T Auto_Speed_Reef;         /* Variable: Auto_Speed_Reef
                                        * Referenced by: '<S29>/Reefscape_Auto_Steps'
                                        */
extern real_T Auto_Starting_Position;  /* Variable: Auto_Starting_Position
                                        * Referenced by:
                                        *   '<S15>/Constant2'
                                        *   '<S29>/Constant1'
                                        */
extern real_T Boost_Trigger_Decreasing_Limit;
                                     /* Variable: Boost_Trigger_Decreasing_Limit
                                      * Referenced by: '<S462>/Constant1'
                                      */
extern real_T Boost_Trigger_High_Speed;/* Variable: Boost_Trigger_High_Speed
                                        * Referenced by:
                                        *   '<S458>/Constant'
                                        *   '<S458>/Saturation'
                                        */
extern real_T Boost_Trigger_Increasing_Limit;
                                     /* Variable: Boost_Trigger_Increasing_Limit
                                      * Referenced by: '<S462>/Constant3'
                                      */
extern real_T Boost_Trigger_Low_Speed; /* Variable: Boost_Trigger_Low_Speed
                                        * Referenced by: '<S458>/Constant1'
                                        */
extern real_T Coral_Arm_Angle_Coral_Score_Lower_Rate;
                             /* Variable: Coral_Arm_Angle_Coral_Score_Lower_Rate
                              * Referenced by:
                              *   '<S427>/Reefscape_Chart'
                              *   '<S32>/Reefscape_Chart'
                              */
extern real_T Coral_Arm_Angle_Error_Threshold;
                                    /* Variable: Coral_Arm_Angle_Error_Threshold
                                     * Referenced by:
                                     *   '<S427>/Reefscape_Chart'
                                     *   '<S32>/Reefscape_Chart'
                                     */
extern real_T Coral_Arm_Angle_L1;      /* Variable: Coral_Arm_Angle_L1
                                        * Referenced by:
                                        *   '<S427>/Reefscape_Chart'
                                        *   '<S32>/Reefscape_Chart'
                                        */
extern real_T Coral_Arm_Angle_L2;      /* Variable: Coral_Arm_Angle_L2
                                        * Referenced by:
                                        *   '<S427>/Reefscape_Chart'
                                        *   '<S32>/Reefscape_Chart'
                                        */
extern real_T Coral_Arm_Angle_L3;      /* Variable: Coral_Arm_Angle_L3
                                        * Referenced by:
                                        *   '<S427>/Reefscape_Chart'
                                        *   '<S32>/Reefscape_Chart'
                                        */
extern real_T Coral_Arm_Angle_L4;      /* Variable: Coral_Arm_Angle_L4
                                        * Referenced by:
                                        *   '<S427>/Reefscape_Chart'
                                        *   '<S32>/Reefscape_Chart'
                                        */
extern real_T Coral_Arm_Angle_L4_Eject_Auto;
                                      /* Variable: Coral_Arm_Angle_L4_Eject_Auto
                                       * Referenced by:
                                       *   '<S427>/Reefscape_Chart'
                                       *   '<S32>/Reefscape_Chart'
                                       */
extern real_T Coral_Arm_Angle_L4_Eject_Teleop;
                                    /* Variable: Coral_Arm_Angle_L4_Eject_Teleop
                                     * Referenced by:
                                     *   '<S427>/Reefscape_Chart'
                                     *   '<S32>/Reefscape_Chart'
                                     */
extern real_T Coral_Arm_Angle_Neg_Threshold;
                                      /* Variable: Coral_Arm_Angle_Neg_Threshold
                                       * Referenced by: '<S72>/Constant'
                                       */
extern real_T Coral_Arm_Angle_Pos_Threshold;
                                      /* Variable: Coral_Arm_Angle_Pos_Threshold
                                       * Referenced by:
                                       *   '<S73>/Constant'
                                       *   '<S74>/Constant'
                                       */
extern real_T Coral_Arm_Angle_Start;   /* Variable: Coral_Arm_Angle_Start
                                        * Referenced by:
                                        *   '<S427>/Reefscape_Chart'
                                        *   '<S32>/Reefscape_Chart'
                                        */
extern real_T Coral_Arm_Angle_Start_Thresh;/* Variable: Coral_Arm_Angle_Start_Thresh
                                            * Referenced by:
                                            *   '<S427>/Reefscape_Chart'
                                            *   '<S32>/Reefscape_Chart'
                                            */
extern real_T Coral_Arm_Angle_Up;      /* Variable: Coral_Arm_Angle_Up
                                        * Referenced by:
                                        *   '<S427>/Reefscape_Chart'
                                        *   '<S32>/Reefscape_Chart'
                                        */
extern real_T Coral_Arm_DC_Inc_RL;     /* Variable: Coral_Arm_DC_Inc_RL
                                        * Referenced by: '<S75>/Constant3'
                                        */
extern real_T Coral_Arm_Gain_Int;      /* Variable: Coral_Arm_Gain_Int
                                        * Referenced by: '<S76>/Gain2'
                                        */
extern real_T Coral_Arm_Gain_Prop;     /* Variable: Coral_Arm_Gain_Prop
                                        * Referenced by: '<S76>/Gain1'
                                        */
extern real_T Coral_Arm_Int_IC;        /* Variable: Coral_Arm_Int_IC
                                        * Referenced by: '<S76>/Constant3'
                                        */
extern real_T Coral_Arm_Int_LL;        /* Variable: Coral_Arm_Int_LL
                                        * Referenced by: '<S76>/Saturation1'
                                        */
extern real_T Coral_Arm_Int_UL;        /* Variable: Coral_Arm_Int_UL
                                        * Referenced by: '<S76>/Saturation1'
                                        */
extern real_T Coral_Arm_Manual_Gain;   /* Variable: Coral_Arm_Manual_Gain
                                        * Referenced by:
                                        *   '<S427>/Reefscape_Chart'
                                        *   '<S32>/Reefscape_Chart'
                                        */
extern real_T Coral_Arm_Neg90_DC;      /* Variable: Coral_Arm_Neg90_DC
                                        * Referenced by: '<S8>/Constant2'
                                        */
extern real_T Coral_Arm_Pos90_DC;      /* Variable: Coral_Arm_Pos90_DC
                                        * Referenced by: '<S8>/Constant1'
                                        */
extern real_T Coral_Detect_Distance;   /* Variable: Coral_Detect_Distance
                                        * Referenced by:
                                        *   '<S29>/Reefscape_Auto_Steps'
                                        *   '<S427>/Reefscape_Chart'
                                        *   '<S32>/Reefscape_Chart'
                                        */
extern real_T Coral_Eject_Time;        /* Variable: Coral_Eject_Time
                                        * Referenced by:
                                        *   '<S427>/Reefscape_Chart'
                                        *   '<S32>/Reefscape_Chart'
                                        */
extern real_T Coral_Motor_DC_Eject;    /* Variable: Coral_Motor_DC_Eject
                                        * Referenced by:
                                        *   '<S427>/Reefscape_Chart'
                                        *   '<S32>/Reefscape_Chart'
                                        */
extern real_T Coral_Motor_DC_Hold;     /* Variable: Coral_Motor_DC_Hold
                                        * Referenced by:
                                        *   '<S427>/Reefscape_Chart'
                                        *   '<S32>/Reefscape_Chart'
                                        */
extern real_T Coral_Motor_DC_Pickup;   /* Variable: Coral_Motor_DC_Pickup
                                        * Referenced by:
                                        *   '<S427>/Reefscape_Chart'
                                        *   '<S32>/Reefscape_Chart'
                                        */
extern real_T Drive_Engage_Hook_Angle; /* Variable: Drive_Engage_Hook_Angle
                                        * Referenced by: '<S448>/Constant9'
                                        */
extern real_T Drive_Engage_Hook_Speed; /* Variable: Drive_Engage_Hook_Speed
                                        * Referenced by: '<S448>/Constant7'
                                        */
extern real_T Drive_Motor_Control_D;   /* Variable: Drive_Motor_Control_D
                                        * Referenced by:
                                        *   '<S281>/Constant3'
                                        *   '<S302>/Constant3'
                                        *   '<S323>/Constant3'
                                        *   '<S344>/Constant3'
                                        */
extern real_T Drive_Motor_Control_D_FilterCoeff;
                                  /* Variable: Drive_Motor_Control_D_FilterCoeff
                                   * Referenced by:
                                   *   '<S281>/Constant2'
                                   *   '<S302>/Constant2'
                                   *   '<S323>/Constant2'
                                   *   '<S344>/Constant2'
                                   */
extern real_T Drive_Motor_Control_D_LL;/* Variable: Drive_Motor_Control_D_LL
                                        * Referenced by:
                                        *   '<S281>/Saturation'
                                        *   '<S302>/Saturation'
                                        *   '<S323>/Saturation'
                                        *   '<S344>/Saturation'
                                        */
extern real_T Drive_Motor_Control_D_UL;/* Variable: Drive_Motor_Control_D_UL
                                        * Referenced by:
                                        *   '<S281>/Saturation'
                                        *   '<S302>/Saturation'
                                        *   '<S323>/Saturation'
                                        *   '<S344>/Saturation'
                                        */
extern real_T Drive_Motor_Control_FF;  /* Variable: Drive_Motor_Control_FF
                                        * Referenced by:
                                        *   '<S281>/Gain'
                                        *   '<S302>/Gain'
                                        *   '<S323>/Gain'
                                        *   '<S344>/Gain'
                                        */
extern real_T Drive_Motor_Control_I;   /* Variable: Drive_Motor_Control_I
                                        * Referenced by:
                                        *   '<S281>/Gain2'
                                        *   '<S302>/Gain2'
                                        *   '<S323>/Gain2'
                                        *   '<S344>/Gain2'
                                        */
extern real_T Drive_Motor_Control_I_LL;/* Variable: Drive_Motor_Control_I_LL
                                        * Referenced by:
                                        *   '<S281>/Saturation1'
                                        *   '<S302>/Saturation1'
                                        *   '<S323>/Saturation1'
                                        *   '<S344>/Saturation1'
                                        */
extern real_T Drive_Motor_Control_I_UL;/* Variable: Drive_Motor_Control_I_UL
                                        * Referenced by:
                                        *   '<S281>/Saturation1'
                                        *   '<S302>/Saturation1'
                                        *   '<S323>/Saturation1'
                                        *   '<S344>/Saturation1'
                                        */
extern real_T Drive_Motor_Control_P;   /* Variable: Drive_Motor_Control_P
                                        * Referenced by:
                                        *   '<S281>/Gain1'
                                        *   '<S302>/Gain1'
                                        *   '<S323>/Gain1'
                                        *   '<S344>/Gain1'
                                        */
extern real_T Drive_Motor_Control_Sign_Change_Deadband;
                           /* Variable: Drive_Motor_Control_Sign_Change_Deadband
                            * Referenced by:
                            *   '<S286>/Constant'
                            *   '<S307>/Constant'
                            *   '<S328>/Constant'
                            *   '<S349>/Constant'
                            */
extern real_T Elevator_Bottom_DC;      /* Variable: Elevator_Bottom_DC
                                        * Referenced by: '<S12>/Constant7'
                                        */
extern real_T Elevator_DC_Inc_RL;      /* Variable: Elevator_DC_Inc_RL
                                        * Referenced by: '<S93>/Constant3'
                                        */
extern real_T Elevator_Error_Bottom_Disable;
                                      /* Variable: Elevator_Error_Bottom_Disable
                                       * Referenced by: '<S90>/Constant'
                                       */
extern real_T Elevator_Error_Increase; /* Variable: Elevator_Error_Increase
                                        * Referenced by: '<S12>/Constant6'
                                        */
extern real_T Elevator_Gain_Int;       /* Variable: Elevator_Gain_Int
                                        * Referenced by: '<S94>/Gain2'
                                        */
extern real_T Elevator_Gain_Prop;      /* Variable: Elevator_Gain_Prop
                                        * Referenced by: '<S94>/Gain1'
                                        */
extern real_T Elevator_Height_Algae_High;/* Variable: Elevator_Height_Algae_High
                                          * Referenced by:
                                          *   '<S427>/Reefscape_Chart'
                                          *   '<S32>/Reefscape_Chart'
                                          */
extern real_T Elevator_Height_Algae_Low;/* Variable: Elevator_Height_Algae_Low
                                         * Referenced by:
                                         *   '<S427>/Reefscape_Chart'
                                         *   '<S32>/Reefscape_Chart'
                                         */
extern real_T Elevator_Height_Algae_Score;/* Variable: Elevator_Height_Algae_Score
                                           * Referenced by:
                                           *   '<S427>/Reefscape_Chart'
                                           *   '<S32>/Reefscape_Chart'
                                           */
extern real_T Elevator_Height_Bottom;  /* Variable: Elevator_Height_Bottom
                                        * Referenced by:
                                        *   '<S427>/Reefscape_Chart'
                                        *   '<S32>/Reefscape_Chart'
                                        */
extern real_T Elevator_Height_Bottom_Pre;/* Variable: Elevator_Height_Bottom_Pre
                                          * Referenced by:
                                          *   '<S427>/Reefscape_Chart'
                                          *   '<S32>/Reefscape_Chart'
                                          */
extern real_T Elevator_Height_Coral_Arm_Low_Thresh;
                               /* Variable: Elevator_Height_Coral_Arm_Low_Thresh
                                * Referenced by: '<S71>/Constant'
                                */
extern real_T Elevator_Height_Coral_Score_Lower_Rate;
                             /* Variable: Elevator_Height_Coral_Score_Lower_Rate
                              * Referenced by:
                              *   '<S427>/Reefscape_Chart'
                              *   '<S32>/Reefscape_Chart'
                              */
extern real_T Elevator_Height_End_Game;/* Variable: Elevator_Height_End_Game
                                        * Referenced by:
                                        *   '<S14>/Constant5'
                                        *   '<S427>/Reefscape_Chart'
                                        *   '<S32>/Reefscape_Chart'
                                        */
extern real_T Elevator_Height_Error_Threshold;
                                    /* Variable: Elevator_Height_Error_Threshold
                                     * Referenced by:
                                     *   '<S91>/Constant'
                                     *   '<S427>/Reefscape_Chart'
                                     *   '<S32>/Reefscape_Chart'
                                     */
extern real_T Elevator_Height_L1;      /* Variable: Elevator_Height_L1
                                        * Referenced by:
                                        *   '<S427>/Reefscape_Chart'
                                        *   '<S32>/Reefscape_Chart'
                                        */
extern real_T Elevator_Height_L2;      /* Variable: Elevator_Height_L2
                                        * Referenced by:
                                        *   '<S427>/Reefscape_Chart'
                                        *   '<S32>/Reefscape_Chart'
                                        */
extern real_T Elevator_Height_L2_Eject;/* Variable: Elevator_Height_L2_Eject
                                        * Referenced by:
                                        *   '<S427>/Reefscape_Chart'
                                        *   '<S32>/Reefscape_Chart'
                                        */
extern real_T Elevator_Height_L3;      /* Variable: Elevator_Height_L3
                                        * Referenced by:
                                        *   '<S427>/Reefscape_Chart'
                                        *   '<S32>/Reefscape_Chart'
                                        */
extern real_T Elevator_Height_L3_Eject;/* Variable: Elevator_Height_L3_Eject
                                        * Referenced by:
                                        *   '<S427>/Reefscape_Chart'
                                        *   '<S32>/Reefscape_Chart'
                                        */
extern real_T Elevator_Height_L4;      /* Variable: Elevator_Height_L4
                                        * Referenced by:
                                        *   '<S427>/Reefscape_Chart'
                                        *   '<S32>/Reefscape_Chart'
                                        */
extern real_T Elevator_Height_Lower;   /* Variable: Elevator_Height_Lower
                                        * Referenced by:
                                        *   '<S427>/Reefscape_Chart'
                                        *   '<S32>/Reefscape_Chart'
                                        */
extern real_T Elevator_Height_Manual_Gain;/* Variable: Elevator_Height_Manual_Gain
                                           * Referenced by:
                                           *   '<S427>/Reefscape_Chart'
                                           *   '<S32>/Reefscape_Chart'
                                           */
extern real_T Elevator_Height_PickupLower_Reset;
                                  /* Variable: Elevator_Height_PickupLower_Reset
                                   * Referenced by: '<S13>/Constant2'
                                   */
extern real_T Elevator_Height_Prepare; /* Variable: Elevator_Height_Prepare
                                        * Referenced by:
                                        *   '<S427>/Reefscape_Chart'
                                        *   '<S32>/Reefscape_Chart'
                                        */
extern real_T Elevator_Height_Raise;   /* Variable: Elevator_Height_Raise
                                        * Referenced by:
                                        *   '<S427>/Reefscape_Chart'
                                        *   '<S32>/Reefscape_Chart'
                                        */
extern real_T Elevator_Height_Top_Reset;/* Variable: Elevator_Height_Top_Reset
                                         * Referenced by:
                                         *   '<S13>/Constant1'
                                         *   '<S13>/Constant3'
                                         */
extern real_T Elevator_Hold_at_Top_DC; /* Variable: Elevator_Hold_at_Top_DC
                                        * Referenced by: '<S12>/Constant1'
                                        */
extern real_T Elevator_Int_IC;         /* Variable: Elevator_Int_IC
                                        * Referenced by: '<S94>/Constant3'
                                        */
extern real_T Elevator_Int_LL;         /* Variable: Elevator_Int_LL
                                        * Referenced by: '<S94>/Saturation1'
                                        */
extern real_T Elevator_Int_UL;         /* Variable: Elevator_Int_UL
                                        * Referenced by: '<S94>/Saturation1'
                                        */
extern real_T Elevator_Limit_Switch_Debounce_F2T;
                                 /* Variable: Elevator_Limit_Switch_Debounce_F2T
                                  * Referenced by:
                                  *   '<S9>/Constant1'
                                  *   '<S10>/Constant1'
                                  */
extern real_T Elevator_Limit_Switch_Debounce_T2F;
                                 /* Variable: Elevator_Limit_Switch_Debounce_T2F
                                  * Referenced by:
                                  *   '<S9>/Constant2'
                                  *   '<S10>/Constant2'
                                  */
extern real_T Elevator_LowerPickup_Time;/* Variable: Elevator_LowerPickup_Time
                                         * Referenced by:
                                         *   '<S427>/Reefscape_Chart'
                                         *   '<S32>/Reefscape_Chart'
                                         */
extern real_T Elevator_MotorRev_to_Inch;/* Variable: Elevator_MotorRev_to_Inch
                                         * Referenced by: '<S13>/Gain1'
                                         */
extern real_T Elevator_Total_LL;       /* Variable: Elevator_Total_LL
                                        * Referenced by:
                                        *   '<S12>/Constant8'
                                        *   '<S94>/Constant1'
                                        *   '<S94>/Saturation2'
                                        */
extern real_T Elevator_Total_UL;       /* Variable: Elevator_Total_UL
                                        * Referenced by:
                                        *   '<S94>/Constant'
                                        *   '<S94>/Saturation2'
                                        */
extern real_T Gyro_Calibration_Auto_Center;/* Variable: Gyro_Calibration_Auto_Center
                                            * Referenced by: '<S15>/Constant5'
                                            */
extern real_T Gyro_Calibration_Auto_Left;/* Variable: Gyro_Calibration_Auto_Left
                                          * Referenced by: '<S15>/Constant4'
                                          */
extern real_T Gyro_Calibration_Auto_Right;/* Variable: Gyro_Calibration_Auto_Right
                                           * Referenced by: '<S15>/Constant6'
                                           */
extern real_T Gyro_Calibration_Default;/* Variable: Gyro_Calibration_Default
                                        * Referenced by:
                                        *   '<S15>/Constant7'
                                        *   '<S15>/Unit Delay1'
                                        */
extern real_T Gyro_Calibration_Reset_Flag;/* Variable: Gyro_Calibration_Reset_Flag
                                           * Referenced by: '<S15>/Constant3'
                                           */
extern real_T KF_Enable;               /* Variable: KF_Enable
                                        * Referenced by:
                                        *   '<S18>/Constant1'
                                        *   '<S18>/Constant2'
                                        */
extern real_T L4_Switch_Time;          /* Variable: L4_Switch_Time
                                        * Referenced by:
                                        *   '<S427>/Reefscape_Chart'
                                        *   '<S32>/Reefscape_Chart'
                                        */
extern real_T Limelight_Tag_Angle_Offset;/* Variable: Limelight_Tag_Angle_Offset
                                          * Referenced by: '<S19>/Constant2'
                                          */
extern real_T Limelight_Tag_X_Offset;  /* Variable: Limelight_Tag_X_Offset
                                        * Referenced by: '<S19>/Constant'
                                        */
extern real_T Limelight_Tag_Y_Offset;  /* Variable: Limelight_Tag_Y_Offset
                                        * Referenced by: '<S19>/Constant1'
                                        */
extern real_T MatchTime_Skip_Coral_Pickup;/* Variable: MatchTime_Skip_Coral_Pickup
                                           * Referenced by: '<S29>/Reefscape_Auto_Steps'
                                           */
extern real_T MatchTime_Skip_Second_L4;/* Variable: MatchTime_Skip_Second_L4
                                        * Referenced by: '<S29>/Reefscape_Auto_Steps'
                                        */
extern real_T Odometry_IC_X;           /* Variable: Odometry_IC_X
                                        * Referenced by: '<S1>/Constant'
                                        */
extern real_T Odometry_IC_Y;           /* Variable: Odometry_IC_Y
                                        * Referenced by: '<S1>/Constant1'
                                        */
extern real_T Odometry_Reset_IC;       /* Variable: Odometry_Reset_IC
                                        * Referenced by:
                                        *   '<S21>/Constant'
                                        *   '<S22>/Constant'
                                        */
extern real_T Odometry_X_Y_TEAR;       /* Variable: Odometry_X_Y_TEAR
                                        * Referenced by:
                                        *   '<S196>/Constant'
                                        *   '<S207>/Constant'
                                        */
extern real_T Spline_Last_Pose_Distance_to_Velocity_Gain;
                         /* Variable: Spline_Last_Pose_Distance_to_Velocity_Gain
                          * Referenced by: '<S266>/Constant2'
                          */
extern real_T Spline_Max_Centripital_Acceleration;
                                /* Variable: Spline_Max_Centripital_Acceleration
                                 * Referenced by: '<S266>/Constant1'
                                 */
extern real_T Spline_Pose_Num_Before_End_Reduce_Speed;
                            /* Variable: Spline_Pose_Num_Before_End_Reduce_Speed
                             * Referenced by: '<S213>/Constant'
                             */
extern real_T Spline_Stop_Radius;      /* Variable: Spline_Stop_Radius
                                        * Referenced by: '<S226>/Constant'
                                        */
extern real_T Spline_Velocity_Multiplier_TEST;
                                    /* Variable: Spline_Velocity_Multiplier_TEST
                                     * Referenced by: '<S266>/Constant3'
                                     */
extern real_T Steering_Absolute_Cmd_Approach_Zero_Error_Thresh;
                   /* Variable: Steering_Absolute_Cmd_Approach_Zero_Error_Thresh
                    * Referenced by: '<S377>/Constant5'
                    */
extern real_T Steering_Absolute_Cmd_Approach_Zero_Final_Thresh;
                   /* Variable: Steering_Absolute_Cmd_Approach_Zero_Final_Thresh
                    * Referenced by: '<S377>/Constant6'
                    */
extern real_T Steering_Absolute_Cmd_NonZero_Error_Thresh;
                         /* Variable: Steering_Absolute_Cmd_NonZero_Error_Thresh
                          * Referenced by: '<S377>/Constant9'
                          */
extern real_T Steering_Absolute_Cmd_NonZero_Final_Scale_Factor;
                   /* Variable: Steering_Absolute_Cmd_NonZero_Final_Scale_Factor
                    * Referenced by: '<S377>/Constant10'
                    */
extern real_T Steering_Absolute_Cmd_Rate_Limit_Dec;
                               /* Variable: Steering_Absolute_Cmd_Rate_Limit_Dec
                                * Referenced by: '<S377>/Constant1'
                                */
extern real_T Steering_Absolute_Cmd_Rate_Limit_Inc;
                               /* Variable: Steering_Absolute_Cmd_Rate_Limit_Inc
                                * Referenced by: '<S377>/Constant3'
                                */
extern real_T Steering_Heading_Control_D;/* Variable: Steering_Heading_Control_D
                                          * Referenced by: '<S394>/Constant3'
                                          */
extern real_T Steering_Heading_Control_D_FilterCoeff;
                             /* Variable: Steering_Heading_Control_D_FilterCoeff
                              * Referenced by: '<S394>/Constant2'
                              */
extern real_T Steering_Heading_Control_D_LL;
                                      /* Variable: Steering_Heading_Control_D_LL
                                       * Referenced by: '<S394>/Saturation'
                                       */
extern real_T Steering_Heading_Control_D_UL;
                                      /* Variable: Steering_Heading_Control_D_UL
                                       * Referenced by: '<S394>/Saturation'
                                       */
extern real_T Steering_Heading_Control_Deadzone;
                                  /* Variable: Steering_Heading_Control_Deadzone
                                   * Referenced by: '<S393>/Constant'
                                   */
extern real_T Steering_Heading_Control_I;/* Variable: Steering_Heading_Control_I
                                          * Referenced by: '<S394>/Gain2'
                                          */
extern real_T Steering_Heading_Control_I_LL;
                                      /* Variable: Steering_Heading_Control_I_LL
                                       * Referenced by: '<S394>/Saturation1'
                                       */
extern real_T Steering_Heading_Control_I_UL;
                                      /* Variable: Steering_Heading_Control_I_UL
                                       * Referenced by: '<S394>/Saturation1'
                                       */
extern real_T Steering_Heading_Control_P;/* Variable: Steering_Heading_Control_P
                                          * Referenced by: '<S394>/Gain1'
                                          */
extern real_T Steering_Heading_Control_Total_LL;
                                  /* Variable: Steering_Heading_Control_Total_LL
                                   * Referenced by:
                                   *   '<S394>/Constant1'
                                   *   '<S394>/Saturation2'
                                   */
extern real_T Steering_Heading_Control_Total_UL;
                                  /* Variable: Steering_Heading_Control_Total_UL
                                   * Referenced by:
                                   *   '<S394>/Constant'
                                   *   '<S394>/Saturation2'
                                   */
extern real_T Steering_Motor_Control_D;/* Variable: Steering_Motor_Control_D
                                        * Referenced by:
                                        *   '<S284>/Constant3'
                                        *   '<S305>/Constant3'
                                        *   '<S326>/Constant3'
                                        *   '<S347>/Constant3'
                                        */
extern real_T Steering_Motor_Control_D_FilterCoeff;
                               /* Variable: Steering_Motor_Control_D_FilterCoeff
                                * Referenced by:
                                *   '<S284>/Constant2'
                                *   '<S305>/Constant2'
                                *   '<S326>/Constant2'
                                *   '<S347>/Constant2'
                                */
extern real_T Steering_Motor_Control_D_LL;/* Variable: Steering_Motor_Control_D_LL
                                           * Referenced by:
                                           *   '<S284>/Saturation'
                                           *   '<S305>/Saturation'
                                           *   '<S326>/Saturation'
                                           *   '<S347>/Saturation'
                                           */
extern real_T Steering_Motor_Control_D_UL;/* Variable: Steering_Motor_Control_D_UL
                                           * Referenced by:
                                           *   '<S284>/Saturation'
                                           *   '<S305>/Saturation'
                                           *   '<S326>/Saturation'
                                           *   '<S347>/Saturation'
                                           */
extern real_T Steering_Motor_Control_I;/* Variable: Steering_Motor_Control_I
                                        * Referenced by:
                                        *   '<S284>/Gain2'
                                        *   '<S305>/Gain2'
                                        *   '<S326>/Gain2'
                                        *   '<S347>/Gain2'
                                        */
extern real_T Steering_Motor_Control_I_LL;/* Variable: Steering_Motor_Control_I_LL
                                           * Referenced by:
                                           *   '<S284>/Saturation1'
                                           *   '<S305>/Saturation1'
                                           *   '<S326>/Saturation1'
                                           *   '<S347>/Saturation1'
                                           */
extern real_T Steering_Motor_Control_I_UL;/* Variable: Steering_Motor_Control_I_UL
                                           * Referenced by:
                                           *   '<S284>/Saturation1'
                                           *   '<S305>/Saturation1'
                                           *   '<S326>/Saturation1'
                                           *   '<S347>/Saturation1'
                                           */
extern real_T Steering_Motor_Control_P;/* Variable: Steering_Motor_Control_P
                                        * Referenced by:
                                        *   '<S284>/Gain1'
                                        *   '<S305>/Gain1'
                                        *   '<S326>/Gain1'
                                        *   '<S347>/Gain1'
                                        */
extern real_T Steering_Relative_Cmd_Approach_Zero_Error_Thresh;
                   /* Variable: Steering_Relative_Cmd_Approach_Zero_Error_Thresh
                    * Referenced by: '<S376>/Constant5'
                    */
extern real_T Steering_Relative_Cmd_Approach_Zero_Final_Thresh;
                   /* Variable: Steering_Relative_Cmd_Approach_Zero_Final_Thresh
                    * Referenced by: '<S376>/Constant6'
                    */
extern real_T Steering_Relative_Cmd_NonZero_Error_Thresh;
                         /* Variable: Steering_Relative_Cmd_NonZero_Error_Thresh
                          * Referenced by: '<S376>/Constant9'
                          */
extern real_T Steering_Relative_Cmd_NonZero_Final_Scale_Factor;
                   /* Variable: Steering_Relative_Cmd_NonZero_Final_Scale_Factor
                    * Referenced by: '<S376>/Constant10'
                    */
extern real_T Steering_Relative_Cmd_Rate_Limit_Dec;
                               /* Variable: Steering_Relative_Cmd_Rate_Limit_Dec
                                * Referenced by: '<S376>/Constant1'
                                */
extern real_T Steering_Relative_Cmd_Rate_Limit_Inc;
                               /* Variable: Steering_Relative_Cmd_Rate_Limit_Inc
                                * Referenced by: '<S376>/Constant3'
                                */
extern real_T Steering_Relative_Gain;  /* Variable: Steering_Relative_Gain
                                        * Referenced by: '<S447>/Constant'
                                        */
extern real_T Steering_Twist_Gain;     /* Variable: Steering_Twist_Gain
                                        * Referenced by: '<S447>/Constant1'
                                        */
extern real_T TEST_CANdle_Flag;        /* Variable: TEST_CANdle_Flag
                                        * Referenced by: '<S3>/Constant2'
                                        */
extern real_T TEST_CANdle_LED_ID;      /* Variable: TEST_CANdle_LED_ID
                                        * Referenced by: '<S3>/Constant3'
                                        */
extern real_T TEST_Swerve_Mode_Override_Flag;
                                     /* Variable: TEST_Swerve_Mode_Override_Flag
                                      * Referenced by: '<S428>/Constant5'
                                      */
extern real_T TEST_Swerve_Mode_Steering;/* Variable: TEST_Swerve_Mode_Steering
                                         * Referenced by: '<S428>/Constant8'
                                         */
extern real_T TEST_Swerve_Mode_Translation;/* Variable: TEST_Swerve_Mode_Translation
                                            * Referenced by: '<S428>/Constant7'
                                            */
extern real_T Translation_Speed_Approach_Zero_Error_Thresh;
                       /* Variable: Translation_Speed_Approach_Zero_Error_Thresh
                        * Referenced by: '<S364>/Constant5'
                        */
extern real_T Translation_Speed_Approach_Zero_Final_Thresh;
                       /* Variable: Translation_Speed_Approach_Zero_Final_Thresh
                        * Referenced by: '<S364>/Constant6'
                        */
extern real_T Translation_Speed_NonZero_Error_Thresh;
                             /* Variable: Translation_Speed_NonZero_Error_Thresh
                              * Referenced by: '<S364>/Constant9'
                              */
extern real_T Translation_Speed_NonZero_Final_Scale_Factor;
                       /* Variable: Translation_Speed_NonZero_Final_Scale_Factor
                        * Referenced by: '<S364>/Constant10'
                        */
extern real_T Translation_Speed_Rate_Limit_Dec;
                                   /* Variable: Translation_Speed_Rate_Limit_Dec
                                    * Referenced by: '<S364>/Constant1'
                                    */
extern real_T Translation_Speed_Rate_Limit_Inc;
                                   /* Variable: Translation_Speed_Rate_Limit_Inc
                                    * Referenced by: '<S364>/Constant3'
                                    */
extern real_T Translation_Twist_Gain;  /* Variable: Translation_Twist_Gain
                                        * Referenced by: '<S448>/Gain'
                                        */
extern real_T Twist_Deadzone_neg;      /* Variable: Twist_Deadzone_neg
                                        * Referenced by:
                                        *   '<S447>/Dead Zone'
                                        *   '<S448>/Dead Zone'
                                        */
extern real_T Twist_Deadzone_pos;      /* Variable: Twist_Deadzone_pos
                                        * Referenced by:
                                        *   '<S447>/Dead Zone'
                                        *   '<S448>/Dead Zone'
                                        */
extern real_T Winch_Hold_DC;           /* Variable: Winch_Hold_DC
                                        * Referenced by: '<S14>/Constant2'
                                        */
extern real_T Winch_Rev_Target;        /* Variable: Winch_Rev_Target
                                        * Referenced by: '<S108>/Constant'
                                        */
extern real_T Winch_Spool_DC;          /* Variable: Winch_Spool_DC
                                        * Referenced by: '<S14>/Constant1'
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
 * Block '<S30>/Logical Operator10' : Unused code path elimination
 * Block '<S70>/Data Type Duplicate' : Unused code path elimination
 * Block '<S70>/Data Type Propagation' : Unused code path elimination
 * Block '<S83>/Data Type Duplicate' : Unused code path elimination
 * Block '<S83>/Data Type Propagation' : Unused code path elimination
 * Block '<S84>/FixPt Data Type Duplicate1' : Unused code path elimination
 * Block '<S86>/Data Type Duplicate' : Unused code path elimination
 * Block '<S86>/Data Type Propagation' : Unused code path elimination
 * Block '<S87>/Data Type Duplicate' : Unused code path elimination
 * Block '<S87>/Data Type Propagation' : Unused code path elimination
 * Block '<S77>/Data Type Duplicate' : Unused code path elimination
 * Block '<S77>/Data Type Propagation' : Unused code path elimination
 * Block '<S101>/Data Type Duplicate' : Unused code path elimination
 * Block '<S101>/Data Type Propagation' : Unused code path elimination
 * Block '<S102>/FixPt Data Type Duplicate1' : Unused code path elimination
 * Block '<S104>/Data Type Duplicate' : Unused code path elimination
 * Block '<S104>/Data Type Propagation' : Unused code path elimination
 * Block '<S95>/Data Type Duplicate' : Unused code path elimination
 * Block '<S95>/Data Type Propagation' : Unused code path elimination
 * Block '<S176>/Data Type Duplicate' : Unused code path elimination
 * Block '<S177>/Data Type Duplicate' : Unused code path elimination
 * Block '<S178>/Conversion' : Unused code path elimination
 * Block '<S178>/Data Type Duplicate' : Unused code path elimination
 * Block '<S179>/Data Type Duplicate' : Unused code path elimination
 * Block '<S137>/Data Type Duplicate' : Unused code path elimination
 * Block '<S138>/Data Type Duplicate' : Unused code path elimination
 * Block '<S139>/Data Type Duplicate' : Unused code path elimination
 * Block '<S140>/Data Type Duplicate' : Unused code path elimination
 * Block '<S141>/Data Type Duplicate' : Unused code path elimination
 * Block '<S142>/Data Type Duplicate' : Unused code path elimination
 * Block '<S143>/Data Type Duplicate' : Unused code path elimination
 * Block '<S144>/Conversion' : Unused code path elimination
 * Block '<S144>/Data Type Duplicate' : Unused code path elimination
 * Block '<S145>/Data Type Duplicate' : Unused code path elimination
 * Block '<S146>/Data Type Duplicate' : Unused code path elimination
 * Block '<S147>/Data Type Duplicate' : Unused code path elimination
 * Block '<S149>/Data Type Duplicate' : Unused code path elimination
 * Block '<S150>/Data Type Duplicate' : Unused code path elimination
 * Block '<S133>/G' : Unused code path elimination
 * Block '<S133>/H' : Unused code path elimination
 * Block '<S133>/N' : Unused code path elimination
 * Block '<S133>/P0' : Unused code path elimination
 * Block '<S133>/Q' : Unused code path elimination
 * Block '<S133>/R' : Unused code path elimination
 * Block '<S165>/CheckSignalProperties' : Unused code path elimination
 * Block '<S174>/CheckSignalProperties' : Unused code path elimination
 * Block '<S175>/CheckSignalProperties' : Unused code path elimination
 * Block '<S23>/Unit Delay1' : Unused code path elimination
 * Block '<S24>/Gain' : Unused code path elimination
 * Block '<S24>/Gain1' : Unused code path elimination
 * Block '<S24>/Scope' : Unused code path elimination
 * Block '<S225>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S229>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S235>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S269>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S289>/Data Type Duplicate' : Unused code path elimination
 * Block '<S289>/Data Type Propagation' : Unused code path elimination
 * Block '<S281>/Scope' : Unused code path elimination
 * Block '<S283>/Scope' : Unused code path elimination
 * Block '<S300>/Data Type Duplicate' : Unused code path elimination
 * Block '<S300>/Data Type Propagation' : Unused code path elimination
 * Block '<S284>/Scope' : Unused code path elimination
 * Block '<S310>/Data Type Duplicate' : Unused code path elimination
 * Block '<S310>/Data Type Propagation' : Unused code path elimination
 * Block '<S302>/Scope' : Unused code path elimination
 * Block '<S304>/Scope' : Unused code path elimination
 * Block '<S321>/Data Type Duplicate' : Unused code path elimination
 * Block '<S321>/Data Type Propagation' : Unused code path elimination
 * Block '<S305>/Scope' : Unused code path elimination
 * Block '<S331>/Data Type Duplicate' : Unused code path elimination
 * Block '<S331>/Data Type Propagation' : Unused code path elimination
 * Block '<S323>/Scope' : Unused code path elimination
 * Block '<S325>/Scope' : Unused code path elimination
 * Block '<S342>/Data Type Duplicate' : Unused code path elimination
 * Block '<S342>/Data Type Propagation' : Unused code path elimination
 * Block '<S326>/Scope' : Unused code path elimination
 * Block '<S352>/Data Type Duplicate' : Unused code path elimination
 * Block '<S352>/Data Type Propagation' : Unused code path elimination
 * Block '<S344>/Scope' : Unused code path elimination
 * Block '<S346>/Scope' : Unused code path elimination
 * Block '<S363>/Data Type Duplicate' : Unused code path elimination
 * Block '<S363>/Data Type Propagation' : Unused code path elimination
 * Block '<S347>/Scope' : Unused code path elimination
 * Block '<S374>/Data Type Duplicate' : Unused code path elimination
 * Block '<S374>/Data Type Propagation' : Unused code path elimination
 * Block '<S375>/FixPt Data Type Duplicate1' : Unused code path elimination
 * Block '<S384>/Data Type Duplicate' : Unused code path elimination
 * Block '<S384>/Data Type Propagation' : Unused code path elimination
 * Block '<S385>/FixPt Data Type Duplicate1' : Unused code path elimination
 * Block '<S391>/Data Type Duplicate' : Unused code path elimination
 * Block '<S391>/Data Type Propagation' : Unused code path elimination
 * Block '<S392>/FixPt Data Type Duplicate1' : Unused code path elimination
 * Block '<S398>/Data Type Duplicate' : Unused code path elimination
 * Block '<S398>/Data Type Propagation' : Unused code path elimination
 * Block '<S394>/Scope' : Unused code path elimination
 * Block '<S425>/Logical Operator10' : Unused code path elimination
 * Block '<S457>/Data Type Duplicate' : Unused code path elimination
 * Block '<S457>/Data Type Propagation' : Unused code path elimination
 * Block '<S464>/Data Type Duplicate' : Unused code path elimination
 * Block '<S464>/Data Type Propagation' : Unused code path elimination
 * Block '<S465>/FixPt Data Type Duplicate1' : Unused code path elimination
 * Block '<S29>/Signal Copy3' : Eliminate redundant signal conversion block
 * Block '<S29>/Signal Copy4' : Eliminate redundant signal conversion block
 * Block '<S29>/Signal Copy5' : Eliminate redundant signal conversion block
 * Block '<S176>/Conversion' : Eliminate redundant data type conversion
 * Block '<S177>/Conversion' : Eliminate redundant data type conversion
 * Block '<S179>/Conversion' : Eliminate redundant data type conversion
 * Block '<S133>/DataTypeConversionEnable' : Eliminate redundant data type conversion
 * Block '<S149>/Conversion' : Eliminate redundant data type conversion
 * Block '<S153>/Reshape' : Reshape block reduction
 * Block '<S133>/ReshapeX0' : Reshape block reduction
 * Block '<S133>/Reshapeu' : Reshape block reduction
 * Block '<S133>/Reshapexhat' : Reshape block reduction
 * Block '<S18>/Signal Copy' : Eliminate redundant signal conversion block
 * Block '<S18>/Signal Copy1' : Eliminate redundant signal conversion block
 * Block '<S21>/Signal Copy' : Eliminate redundant signal conversion block
 * Block '<S21>/Signal Copy1' : Eliminate redundant signal conversion block
 * Block '<S21>/Signal Copy2' : Eliminate redundant signal conversion block
 * Block '<S21>/Signal Copy3' : Eliminate redundant signal conversion block
 * Block '<S22>/Signal Copy' : Eliminate redundant signal conversion block
 * Block '<S22>/Signal Copy1' : Eliminate redundant signal conversion block
 * Block '<S22>/Signal Copy2' : Eliminate redundant signal conversion block
 * Block '<S22>/Signal Copy3' : Eliminate redundant signal conversion block
 * Block '<S265>/Signal Copy' : Eliminate redundant signal conversion block
 * Block '<S27>/Signal Copy3' : Eliminate redundant signal conversion block
 * Block '<S27>/Signal Copy4' : Eliminate redundant signal conversion block
 * Block '<S27>/Signal Copy5' : Eliminate redundant signal conversion block
 * Block '<S30>/Constant2' : Unused code path elimination
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
 * '<S1>'   : 'Code_Gen_Model/RoboRio Controls'
 * '<S2>'   : 'Code_Gen_Model/RoboRio Controls/Autonomous'
 * '<S3>'   : 'Code_Gen_Model/RoboRio Controls/CANdle_LED_ID Calculation'
 * '<S4>'   : 'Code_Gen_Model/RoboRio Controls/Compare To Zero'
 * '<S5>'   : 'Code_Gen_Model/RoboRio Controls/Compare To Zero1'
 * '<S6>'   : 'Code_Gen_Model/RoboRio Controls/Compare To Zero2'
 * '<S7>'   : 'Code_Gen_Model/RoboRio Controls/Compare To Zero3'
 * '<S8>'   : 'Code_Gen_Model/RoboRio Controls/Coral Arm Motor Control'
 * '<S9>'   : 'Code_Gen_Model/RoboRio Controls/Debounce'
 * '<S10>'  : 'Code_Gen_Model/RoboRio Controls/Debounce1'
 * '<S11>'  : 'Code_Gen_Model/RoboRio Controls/Disabled'
 * '<S12>'  : 'Code_Gen_Model/RoboRio Controls/Elevator Motor Control'
 * '<S13>'  : 'Code_Gen_Model/RoboRio Controls/Elevator_Height_Pre_Processing'
 * '<S14>'  : 'Code_Gen_Model/RoboRio Controls/End_Game'
 * '<S15>'  : 'Code_Gen_Model/RoboRio Controls/Gyro_Angles'
 * '<S16>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing'
 * '<S17>'  : 'Code_Gen_Model/RoboRio Controls/Internal Feedback'
 * '<S18>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter'
 * '<S19>'  : 'Code_Gen_Model/RoboRio Controls/Limelight_Tag_Corrections'
 * '<S20>'  : 'Code_Gen_Model/RoboRio Controls/Merge'
 * '<S21>'  : 'Code_Gen_Model/RoboRio Controls/Odometry'
 * '<S22>'  : 'Code_Gen_Model/RoboRio Controls/Odometry1'
 * '<S23>'  : 'Code_Gen_Model/RoboRio Controls/Previous GameState'
 * '<S24>'  : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following'
 * '<S25>'  : 'Code_Gen_Model/RoboRio Controls/Steer_Module_Offset_Adjustments'
 * '<S26>'  : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive'
 * '<S27>'  : 'Code_Gen_Model/RoboRio Controls/Teleop'
 * '<S28>'  : 'Code_Gen_Model/RoboRio Controls/Test'
 * '<S29>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem'
 * '<S30>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/April Tag Relative Errors'
 * '<S31>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/Path ID Selection'
 * '<S32>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/Reefscape Teleop'
 * '<S33>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/Reefscape_Auto_Steps'
 * '<S34>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/Swerve_Drive_Commands'
 * '<S35>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/April Tag Relative Errors/Compare To Constant'
 * '<S36>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/April Tag Relative Errors/Compare To Constant1'
 * '<S37>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/April Tag Relative Errors/Compare To Constant10'
 * '<S38>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/April Tag Relative Errors/Compare To Constant2'
 * '<S39>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/April Tag Relative Errors/Compare To Constant3'
 * '<S40>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/April Tag Relative Errors/Compare To Constant4'
 * '<S41>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/April Tag Relative Errors/Compare To Constant5'
 * '<S42>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/April Tag Relative Errors/Compare To Constant6'
 * '<S43>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/April Tag Relative Errors/Compare To Constant7'
 * '<S44>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/April Tag Relative Errors/Compare To Constant8'
 * '<S45>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/April Tag Relative Errors/Compare To Constant9'
 * '<S46>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/April Tag Relative Errors/Compare To Zero'
 * '<S47>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/April Tag Relative Errors/Compare To Zero1'
 * '<S48>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/April Tag Relative Errors/Compare To Zero2'
 * '<S49>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/April Tag Relative Errors/Compare To Zero3'
 * '<S50>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/April Tag Relative Errors/Compare To Zero4'
 * '<S51>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/April Tag Relative Errors/Compare To Zero5'
 * '<S52>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/April Tag Relative Errors/Compare To Zero9'
 * '<S53>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/Path ID Selection/Compare To Constant'
 * '<S54>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/Path ID Selection/Compare To Constant2'
 * '<S55>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/Reefscape Teleop/Detect Increase'
 * '<S56>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/Reefscape Teleop/Detect Increase1'
 * '<S57>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/Reefscape Teleop/Detect Increase10'
 * '<S58>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/Reefscape Teleop/Detect Increase11'
 * '<S59>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/Reefscape Teleop/Detect Increase12'
 * '<S60>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/Reefscape Teleop/Detect Increase13'
 * '<S61>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/Reefscape Teleop/Detect Increase2'
 * '<S62>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/Reefscape Teleop/Detect Increase3'
 * '<S63>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/Reefscape Teleop/Detect Increase4'
 * '<S64>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/Reefscape Teleop/Detect Increase5'
 * '<S65>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/Reefscape Teleop/Detect Increase6'
 * '<S66>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/Reefscape Teleop/Detect Increase7'
 * '<S67>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/Reefscape Teleop/Detect Increase8'
 * '<S68>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/Reefscape Teleop/Detect Increase9'
 * '<S69>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/Reefscape Teleop/Reefscape_Chart'
 * '<S70>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/Swerve_Drive_Commands/Saturation Dynamic'
 * '<S71>'  : 'Code_Gen_Model/RoboRio Controls/Coral Arm Motor Control/Compare To Constant'
 * '<S72>'  : 'Code_Gen_Model/RoboRio Controls/Coral Arm Motor Control/Compare To Constant1'
 * '<S73>'  : 'Code_Gen_Model/RoboRio Controls/Coral Arm Motor Control/Compare To Constant2'
 * '<S74>'  : 'Code_Gen_Model/RoboRio Controls/Coral Arm Motor Control/Compare To Constant3'
 * '<S75>'  : 'Code_Gen_Model/RoboRio Controls/Coral Arm Motor Control/Complex Rate Limit'
 * '<S76>'  : 'Code_Gen_Model/RoboRio Controls/Coral Arm Motor Control/PI and Integral Enable'
 * '<S77>'  : 'Code_Gen_Model/RoboRio Controls/Coral Arm Motor Control/Saturation Dynamic'
 * '<S78>'  : 'Code_Gen_Model/RoboRio Controls/Coral Arm Motor Control/Complex Rate Limit/Compare To Zero'
 * '<S79>'  : 'Code_Gen_Model/RoboRio Controls/Coral Arm Motor Control/Complex Rate Limit/Compare To Zero1'
 * '<S80>'  : 'Code_Gen_Model/RoboRio Controls/Coral Arm Motor Control/Complex Rate Limit/Compare To Zero2'
 * '<S81>'  : 'Code_Gen_Model/RoboRio Controls/Coral Arm Motor Control/Complex Rate Limit/Compare To Zero3'
 * '<S82>'  : 'Code_Gen_Model/RoboRio Controls/Coral Arm Motor Control/Complex Rate Limit/Discrete Rate Limiter'
 * '<S83>'  : 'Code_Gen_Model/RoboRio Controls/Coral Arm Motor Control/Complex Rate Limit/Discrete Rate Limiter/Saturation Dynamic'
 * '<S84>'  : 'Code_Gen_Model/RoboRio Controls/Coral Arm Motor Control/Complex Rate Limit/Discrete Rate Limiter/Unit Delay External IC'
 * '<S85>'  : 'Code_Gen_Model/RoboRio Controls/Coral Arm Motor Control/PI and Integral Enable/Detect Increase'
 * '<S86>'  : 'Code_Gen_Model/RoboRio Controls/Coral Arm Motor Control/PI and Integral Enable/Saturation Dynamic'
 * '<S87>'  : 'Code_Gen_Model/RoboRio Controls/Coral Arm Motor Control/PI and Integral Enable/Saturation Dynamic1'
 * '<S88>'  : 'Code_Gen_Model/RoboRio Controls/Debounce/Debounce'
 * '<S89>'  : 'Code_Gen_Model/RoboRio Controls/Debounce1/Debounce'
 * '<S90>'  : 'Code_Gen_Model/RoboRio Controls/Elevator Motor Control/Compare To Constant'
 * '<S91>'  : 'Code_Gen_Model/RoboRio Controls/Elevator Motor Control/Compare To Constant2'
 * '<S92>'  : 'Code_Gen_Model/RoboRio Controls/Elevator Motor Control/Compare To Zero'
 * '<S93>'  : 'Code_Gen_Model/RoboRio Controls/Elevator Motor Control/Complex Rate Limit'
 * '<S94>'  : 'Code_Gen_Model/RoboRio Controls/Elevator Motor Control/PI and Integral Enable'
 * '<S95>'  : 'Code_Gen_Model/RoboRio Controls/Elevator Motor Control/Saturation Dynamic'
 * '<S96>'  : 'Code_Gen_Model/RoboRio Controls/Elevator Motor Control/Complex Rate Limit/Compare To Zero'
 * '<S97>'  : 'Code_Gen_Model/RoboRio Controls/Elevator Motor Control/Complex Rate Limit/Compare To Zero1'
 * '<S98>'  : 'Code_Gen_Model/RoboRio Controls/Elevator Motor Control/Complex Rate Limit/Compare To Zero2'
 * '<S99>'  : 'Code_Gen_Model/RoboRio Controls/Elevator Motor Control/Complex Rate Limit/Compare To Zero3'
 * '<S100>' : 'Code_Gen_Model/RoboRio Controls/Elevator Motor Control/Complex Rate Limit/Discrete Rate Limiter'
 * '<S101>' : 'Code_Gen_Model/RoboRio Controls/Elevator Motor Control/Complex Rate Limit/Discrete Rate Limiter/Saturation Dynamic'
 * '<S102>' : 'Code_Gen_Model/RoboRio Controls/Elevator Motor Control/Complex Rate Limit/Discrete Rate Limiter/Unit Delay External IC'
 * '<S103>' : 'Code_Gen_Model/RoboRio Controls/Elevator Motor Control/PI and Integral Enable/Detect Increase'
 * '<S104>' : 'Code_Gen_Model/RoboRio Controls/Elevator Motor Control/PI and Integral Enable/Saturation Dynamic'
 * '<S105>' : 'Code_Gen_Model/RoboRio Controls/Elevator_Height_Pre_Processing/Detect Decrease'
 * '<S106>' : 'Code_Gen_Model/RoboRio Controls/Elevator_Height_Pre_Processing/Detect Decrease1'
 * '<S107>' : 'Code_Gen_Model/RoboRio Controls/Elevator_Height_Pre_Processing/Detect Increase'
 * '<S108>' : 'Code_Gen_Model/RoboRio Controls/End_Game/Compare To Constant'
 * '<S109>' : 'Code_Gen_Model/RoboRio Controls/End_Game/Compare To Constant1'
 * '<S110>' : 'Code_Gen_Model/RoboRio Controls/End_Game/Compare To Constant2'
 * '<S111>' : 'Code_Gen_Model/RoboRio Controls/End_Game/Compare To Zero'
 * '<S112>' : 'Code_Gen_Model/RoboRio Controls/Gyro_Angles/Degrees to Radians'
 * '<S113>' : 'Code_Gen_Model/RoboRio Controls/Gyro_Angles/Detect Increase'
 * '<S114>' : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Constant'
 * '<S115>' : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Constant1'
 * '<S116>' : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Constant2'
 * '<S117>' : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Constant3'
 * '<S118>' : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Constant4'
 * '<S119>' : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Constant5'
 * '<S120>' : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Constant6'
 * '<S121>' : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Constant7'
 * '<S122>' : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Constant8'
 * '<S123>' : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero1'
 * '<S124>' : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero14'
 * '<S125>' : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero15'
 * '<S126>' : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero16'
 * '<S127>' : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero17'
 * '<S128>' : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero6'
 * '<S129>' : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero8'
 * '<S130>' : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Detect Increase'
 * '<S131>' : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Detect Increase1'
 * '<S132>' : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Detect Increase2'
 * '<S133>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter'
 * '<S134>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CalculatePL'
 * '<S135>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CalculateYhat'
 * '<S136>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CovarianceOutputConfigurator'
 * '<S137>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionA'
 * '<S138>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionB'
 * '<S139>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionC'
 * '<S140>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionD'
 * '<S141>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionG'
 * '<S142>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionH'
 * '<S143>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionN'
 * '<S144>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionP'
 * '<S145>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionP0'
 * '<S146>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionQ'
 * '<S147>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionR'
 * '<S148>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionReset'
 * '<S149>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionX'
 * '<S150>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionX0'
 * '<S151>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionu'
 * '<S152>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/MemoryP'
 * '<S153>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/Observer'
 * '<S154>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/ReducedQRN'
 * '<S155>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/Reset'
 * '<S156>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/Reshapeyhat'
 * '<S157>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/ScalarExpansionP0'
 * '<S158>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/ScalarExpansionQ'
 * '<S159>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/ScalarExpansionR'
 * '<S160>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/UseCurrentEstimator'
 * '<S161>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkA'
 * '<S162>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkB'
 * '<S163>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkC'
 * '<S164>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkD'
 * '<S165>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkEnable'
 * '<S166>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkG'
 * '<S167>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkH'
 * '<S168>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkN'
 * '<S169>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkP0'
 * '<S170>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkQ'
 * '<S171>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkR'
 * '<S172>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkReset'
 * '<S173>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkX0'
 * '<S174>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checku'
 * '<S175>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checky'
 * '<S176>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CalculatePL/DataTypeConversionL'
 * '<S177>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CalculatePL/DataTypeConversionM'
 * '<S178>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CalculatePL/DataTypeConversionP'
 * '<S179>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CalculatePL/DataTypeConversionZ'
 * '<S180>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CalculatePL/Ground'
 * '<S181>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CalculateYhat/Ground'
 * '<S182>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CovarianceOutputConfigurator/decideOutput'
 * '<S183>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CovarianceOutputConfigurator/decideOutput/SqrtUsedFcn'
 * '<S184>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/Observer/MeasurementUpdate'
 * '<S185>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/ReducedQRN/Ground'
 * '<S186>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/UseCurrentEstimator/Enabled Subsystem'
 * '<S187>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Difference'
 * '<S188>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Difference1'
 * '<S189>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Difference3'
 * '<S190>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Difference4'
 * '<S191>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Difference5'
 * '<S192>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Polar to Cartesian'
 * '<S193>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Polar to Cartesian1'
 * '<S194>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Polar to Cartesian2'
 * '<S195>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Polar to Cartesian3'
 * '<S196>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Tear for validation testing'
 * '<S197>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Tear for validation testing/Compare To Zero'
 * '<S198>' : 'Code_Gen_Model/RoboRio Controls/Odometry1/Difference'
 * '<S199>' : 'Code_Gen_Model/RoboRio Controls/Odometry1/Difference1'
 * '<S200>' : 'Code_Gen_Model/RoboRio Controls/Odometry1/Difference3'
 * '<S201>' : 'Code_Gen_Model/RoboRio Controls/Odometry1/Difference4'
 * '<S202>' : 'Code_Gen_Model/RoboRio Controls/Odometry1/Difference5'
 * '<S203>' : 'Code_Gen_Model/RoboRio Controls/Odometry1/Polar to Cartesian'
 * '<S204>' : 'Code_Gen_Model/RoboRio Controls/Odometry1/Polar to Cartesian1'
 * '<S205>' : 'Code_Gen_Model/RoboRio Controls/Odometry1/Polar to Cartesian2'
 * '<S206>' : 'Code_Gen_Model/RoboRio Controls/Odometry1/Polar to Cartesian3'
 * '<S207>' : 'Code_Gen_Model/RoboRio Controls/Odometry1/Tear for validation testing'
 * '<S208>' : 'Code_Gen_Model/RoboRio Controls/Odometry1/Tear for validation testing/Compare To Zero'
 * '<S209>' : 'Code_Gen_Model/RoboRio Controls/Previous GameState/Chart'
 * '<S210>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Pass Through'
 * '<S211>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled'
 * '<S212>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses'
 * '<S213>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Find_Targets'
 * '<S214>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Steering_and_Drive_Commands'
 * '<S215>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/If Action Subsystem'
 * '<S216>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification'
 * '<S217>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning'
 * '<S218>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Escape_Auto_Driving'
 * '<S219>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid'
 * '<S220>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Catch-all if not the last point and not in the circle'
 * '<S221>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Circle_Check_Valid'
 * '<S222>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Increment_If_Rectangle_Check'
 * '<S223>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Circle_Check_Valid/Increment_Search'
 * '<S224>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Circle_Check_Valid/Is_Last_Point'
 * '<S225>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Circle_Check_Valid/Increment_Search/Increment Real World'
 * '<S226>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Circle_Check_Valid/Is_Last_Point/Compare To Constant'
 * '<S227>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Circle_Check_Valid/Is_Last_Point/Robot_Is_At_Destination'
 * '<S228>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Circle_Check_Valid/Is_Last_Point/Straight_Line_Path_To_End'
 * '<S229>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Increment_If_Rectangle_Check/Increment Real World'
 * '<S230>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Increment_If_Rectangle_Check/Subsystem Reference'
 * '<S231>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Increment_If_Rectangle_Check/Subsystem Reference/Compare To Constant'
 * '<S232>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Increment_If_Rectangle_Check/Subsystem Reference/Compare To Constant1'
 * '<S233>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Make_Knots'
 * '<S234>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning'
 * '<S235>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Make_Knots/Decrement Real World'
 * '<S236>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Make_Knots/Find_Control_Pose'
 * '<S237>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Make_Knots/Find_Control_Pose1'
 * '<S238>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop'
 * '<S239>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Compare To Constant'
 * '<S240>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve'
 * '<S241>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Find_Point_Coefficients'
 * '<S242>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve'
 * '<S243>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Acc'
 * '<S244>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Pos'
 * '<S245>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Vel'
 * '<S246>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Curvature'
 * '<S247>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_U_And_Powers'
 * '<S248>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Acc/Subsystem Reference'
 * '<S249>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Acc/ddA'
 * '<S250>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Acc/ddB'
 * '<S251>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Acc/ddC'
 * '<S252>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Pos/A'
 * '<S253>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Pos/B'
 * '<S254>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Pos/C'
 * '<S255>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Pos/Subsystem Reference'
 * '<S256>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Vel/Subsystem Reference'
 * '<S257>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Vel/dA'
 * '<S258>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Vel/dB'
 * '<S259>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Vel/dC'
 * '<S260>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Curvature/MATLAB Function'
 * '<S261>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Find_Targets/Distance Along Curve'
 * '<S262>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Find_Targets/Find closest index to curve'
 * '<S263>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Find_Targets/Find first index that meets distance target'
 * '<S264>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Find_Targets/Find velocity and heading'
 * '<S265>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Find_Targets/Heading'
 * '<S266>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Find_Targets/Velocity'
 * '<S267>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Find_Targets/Find velocity and heading/Dynamic Lookup Tables'
 * '<S268>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Find_Targets/Find velocity and heading/Latch'
 * '<S269>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Find_Targets/Find velocity and heading/Dynamic Lookup Tables/Decrement'
 * '<S270>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Steering_and_Drive_Commands/Translation Angle'
 * '<S271>' : 'Code_Gen_Model/RoboRio Controls/Steer_Module_Offset_Adjustments/Angle Modulus'
 * '<S272>' : 'Code_Gen_Model/RoboRio Controls/Steer_Module_Offset_Adjustments/Angle Modulus1'
 * '<S273>' : 'Code_Gen_Model/RoboRio Controls/Steer_Module_Offset_Adjustments/Angle Modulus2'
 * '<S274>' : 'Code_Gen_Model/RoboRio Controls/Steer_Module_Offset_Adjustments/Angle Modulus3'
 * '<S275>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module'
 * '<S276>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1'
 * '<S277>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2'
 * '<S278>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3'
 * '<S279>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle'
 * '<S280>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Direction Change Drive Reduction Factor'
 * '<S281>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Feed Forward plus PID and Integral Enable'
 * '<S282>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Optimize'
 * '<S283>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Steering Module Error Drive Reduction Factor'
 * '<S284>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Steering with Angle Error Modulus PID'
 * '<S285>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Tangential_Velocity_To_RPM'
 * '<S286>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Direction Change Drive Reduction Factor/Compare To Constant'
 * '<S287>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Feed Forward plus PID and Integral Enable/Difference'
 * '<S288>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Feed Forward plus PID and Integral Enable/Low_Pass_Filter'
 * '<S289>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Feed Forward plus PID and Integral Enable/Saturation Dynamic'
 * '<S290>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Optimize/Compare To Constant'
 * '<S291>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Optimize/Minus1'
 * '<S292>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Optimize/RotateBy'
 * '<S293>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Optimize/Minus1/RotateBy'
 * '<S294>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Optimize/Minus1/RotateBy/Compare To Constant'
 * '<S295>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Optimize/RotateBy/Compare To Constant'
 * '<S296>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Steering Module Error Drive Reduction Factor/Angle Modulus to plus or minus pi over two'
 * '<S297>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Steering with Angle Error Modulus PID/Angle Modulus'
 * '<S298>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Steering with Angle Error Modulus PID/Difference'
 * '<S299>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Steering with Angle Error Modulus PID/Low_Pass_Filter'
 * '<S300>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Steering with Angle Error Modulus PID/Saturation Dynamic'
 * '<S301>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Direction Change Drive Reduction Factor'
 * '<S302>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Feed Forward plus PID and Integral Enable'
 * '<S303>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Optimize'
 * '<S304>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Steering Module Error Drive Reduction Factor'
 * '<S305>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Steering with Angle Error Modulus PID'
 * '<S306>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Tangential_Velocity_To_RPM'
 * '<S307>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Direction Change Drive Reduction Factor/Compare To Constant'
 * '<S308>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Feed Forward plus PID and Integral Enable/Difference'
 * '<S309>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Feed Forward plus PID and Integral Enable/Low_Pass_Filter'
 * '<S310>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Feed Forward plus PID and Integral Enable/Saturation Dynamic'
 * '<S311>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Optimize/Compare To Constant'
 * '<S312>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Optimize/Minus1'
 * '<S313>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Optimize/RotateBy'
 * '<S314>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Optimize/Minus1/RotateBy'
 * '<S315>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Optimize/Minus1/RotateBy/Compare To Constant'
 * '<S316>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Optimize/RotateBy/Compare To Constant'
 * '<S317>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Steering Module Error Drive Reduction Factor/Angle Modulus to plus or minus pi over two'
 * '<S318>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Steering with Angle Error Modulus PID/Angle Modulus'
 * '<S319>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Steering with Angle Error Modulus PID/Difference'
 * '<S320>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Steering with Angle Error Modulus PID/Low_Pass_Filter'
 * '<S321>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Steering with Angle Error Modulus PID/Saturation Dynamic'
 * '<S322>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Direction Change Drive Reduction Factor'
 * '<S323>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Feed Forward plus PID and Integral Enable'
 * '<S324>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Optimize'
 * '<S325>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Steering Module Error Drive Reduction Factor'
 * '<S326>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Steering with Angle Error Modulus PID'
 * '<S327>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Tangential_Velocity_To_RPM'
 * '<S328>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Direction Change Drive Reduction Factor/Compare To Constant'
 * '<S329>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Feed Forward plus PID and Integral Enable/Difference'
 * '<S330>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Feed Forward plus PID and Integral Enable/Low_Pass_Filter'
 * '<S331>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Feed Forward plus PID and Integral Enable/Saturation Dynamic'
 * '<S332>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Optimize/Compare To Constant'
 * '<S333>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Optimize/Minus1'
 * '<S334>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Optimize/RotateBy'
 * '<S335>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Optimize/Minus1/RotateBy'
 * '<S336>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Optimize/Minus1/RotateBy/Compare To Constant'
 * '<S337>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Optimize/RotateBy/Compare To Constant'
 * '<S338>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Steering Module Error Drive Reduction Factor/Angle Modulus to plus or minus pi over two'
 * '<S339>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Steering with Angle Error Modulus PID/Angle Modulus'
 * '<S340>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Steering with Angle Error Modulus PID/Difference'
 * '<S341>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Steering with Angle Error Modulus PID/Low_Pass_Filter'
 * '<S342>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Steering with Angle Error Modulus PID/Saturation Dynamic'
 * '<S343>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Direction Change Drive Reduction Factor'
 * '<S344>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Feed Forward plus PID and Integral Enable'
 * '<S345>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Optimize'
 * '<S346>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Steering Module Error Drive Reduction Factor'
 * '<S347>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Steering with Angle Error Modulus PID'
 * '<S348>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Tangential_Velocity_To_RPM'
 * '<S349>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Direction Change Drive Reduction Factor/Compare To Constant'
 * '<S350>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Feed Forward plus PID and Integral Enable/Difference'
 * '<S351>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Feed Forward plus PID and Integral Enable/Low_Pass_Filter'
 * '<S352>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Feed Forward plus PID and Integral Enable/Saturation Dynamic'
 * '<S353>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Optimize/Compare To Constant'
 * '<S354>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Optimize/Minus1'
 * '<S355>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Optimize/RotateBy'
 * '<S356>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Optimize/Minus1/RotateBy'
 * '<S357>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Optimize/Minus1/RotateBy/Compare To Constant'
 * '<S358>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Optimize/RotateBy/Compare To Constant'
 * '<S359>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Steering Module Error Drive Reduction Factor/Angle Modulus to plus or minus pi over two'
 * '<S360>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Steering with Angle Error Modulus PID/Angle Modulus'
 * '<S361>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Steering with Angle Error Modulus PID/Difference'
 * '<S362>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Steering with Angle Error Modulus PID/Low_Pass_Filter'
 * '<S363>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Steering with Angle Error Modulus PID/Saturation Dynamic'
 * '<S364>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Complex Rate Limit'
 * '<S365>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Initialize Function'
 * '<S366>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command'
 * '<S367>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Translation Steering Command'
 * '<S368>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator'
 * '<S369>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Complex Rate Limit/Compare To Zero'
 * '<S370>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Complex Rate Limit/Compare To Zero1'
 * '<S371>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Complex Rate Limit/Compare To Zero2'
 * '<S372>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Complex Rate Limit/Compare To Zero3'
 * '<S373>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Complex Rate Limit/Discrete Rate Limiter'
 * '<S374>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Complex Rate Limit/Discrete Rate Limiter/Saturation Dynamic'
 * '<S375>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Complex Rate Limit/Discrete Rate Limiter/Unit Delay External IC'
 * '<S376>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit'
 * '<S377>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit1'
 * '<S378>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Steering Heading PID'
 * '<S379>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit/Compare To Zero'
 * '<S380>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit/Compare To Zero1'
 * '<S381>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit/Compare To Zero2'
 * '<S382>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit/Compare To Zero3'
 * '<S383>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit/Discrete Rate Limiter'
 * '<S384>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit/Discrete Rate Limiter/Saturation Dynamic'
 * '<S385>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit/Discrete Rate Limiter/Unit Delay External IC'
 * '<S386>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit1/Compare To Zero'
 * '<S387>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit1/Compare To Zero1'
 * '<S388>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit1/Compare To Zero2'
 * '<S389>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit1/Compare To Zero3'
 * '<S390>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit1/Discrete Rate Limiter'
 * '<S391>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit1/Discrete Rate Limiter/Saturation Dynamic'
 * '<S392>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit1/Discrete Rate Limiter/Unit Delay External IC'
 * '<S393>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Steering Heading PID/Compare To Constant'
 * '<S394>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Steering Heading PID/PID with Error Wrapping'
 * '<S395>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Steering Heading PID/PID with Error Wrapping/Angle Modulus'
 * '<S396>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Steering Heading PID/PID with Error Wrapping/Difference'
 * '<S397>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Steering Heading PID/PID with Error Wrapping/Low_Pass_Filter'
 * '<S398>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Steering Heading PID/PID with Error Wrapping/Saturation Dynamic'
 * '<S399>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Translation Steering Command/Angle Modulus'
 * '<S400>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Reduce Speeds for Maximum Speed Limit'
 * '<S401>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add'
 * '<S402>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add1'
 * '<S403>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add2'
 * '<S404>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add3'
 * '<S405>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add/Angle_Saver'
 * '<S406>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add/Cartesian to Polar'
 * '<S407>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add/Polar to Cartesian'
 * '<S408>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add/Polar to Cartesian1'
 * '<S409>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add/Angle_Saver/Compare To Zero1'
 * '<S410>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add1/Angle_Saver'
 * '<S411>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add1/Cartesian to Polar'
 * '<S412>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add1/Polar to Cartesian'
 * '<S413>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add1/Polar to Cartesian1'
 * '<S414>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add1/Angle_Saver/Compare To Zero1'
 * '<S415>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add2/Angle_Saver'
 * '<S416>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add2/Cartesian to Polar'
 * '<S417>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add2/Polar to Cartesian'
 * '<S418>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add2/Polar to Cartesian1'
 * '<S419>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add2/Angle_Saver/Compare To Zero1'
 * '<S420>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add3/Angle_Saver'
 * '<S421>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add3/Cartesian to Polar'
 * '<S422>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add3/Polar to Cartesian'
 * '<S423>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add3/Polar to Cartesian1'
 * '<S424>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add3/Angle_Saver/Compare To Zero1'
 * '<S425>' : 'Code_Gen_Model/RoboRio Controls/Teleop/April Tag Relative Errors'
 * '<S426>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive'
 * '<S427>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Reefscape Teleop'
 * '<S428>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Subsystem'
 * '<S429>' : 'Code_Gen_Model/RoboRio Controls/Teleop/April Tag Relative Errors/Compare To Constant'
 * '<S430>' : 'Code_Gen_Model/RoboRio Controls/Teleop/April Tag Relative Errors/Compare To Constant1'
 * '<S431>' : 'Code_Gen_Model/RoboRio Controls/Teleop/April Tag Relative Errors/Compare To Constant10'
 * '<S432>' : 'Code_Gen_Model/RoboRio Controls/Teleop/April Tag Relative Errors/Compare To Constant2'
 * '<S433>' : 'Code_Gen_Model/RoboRio Controls/Teleop/April Tag Relative Errors/Compare To Constant3'
 * '<S434>' : 'Code_Gen_Model/RoboRio Controls/Teleop/April Tag Relative Errors/Compare To Constant4'
 * '<S435>' : 'Code_Gen_Model/RoboRio Controls/Teleop/April Tag Relative Errors/Compare To Constant5'
 * '<S436>' : 'Code_Gen_Model/RoboRio Controls/Teleop/April Tag Relative Errors/Compare To Constant6'
 * '<S437>' : 'Code_Gen_Model/RoboRio Controls/Teleop/April Tag Relative Errors/Compare To Constant7'
 * '<S438>' : 'Code_Gen_Model/RoboRio Controls/Teleop/April Tag Relative Errors/Compare To Constant8'
 * '<S439>' : 'Code_Gen_Model/RoboRio Controls/Teleop/April Tag Relative Errors/Compare To Constant9'
 * '<S440>' : 'Code_Gen_Model/RoboRio Controls/Teleop/April Tag Relative Errors/Compare To Zero'
 * '<S441>' : 'Code_Gen_Model/RoboRio Controls/Teleop/April Tag Relative Errors/Compare To Zero1'
 * '<S442>' : 'Code_Gen_Model/RoboRio Controls/Teleop/April Tag Relative Errors/Compare To Zero2'
 * '<S443>' : 'Code_Gen_Model/RoboRio Controls/Teleop/April Tag Relative Errors/Compare To Zero3'
 * '<S444>' : 'Code_Gen_Model/RoboRio Controls/Teleop/April Tag Relative Errors/Compare To Zero4'
 * '<S445>' : 'Code_Gen_Model/RoboRio Controls/Teleop/April Tag Relative Errors/Compare To Zero5'
 * '<S446>' : 'Code_Gen_Model/RoboRio Controls/Teleop/April Tag Relative Errors/Compare To Zero9'
 * '<S447>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering'
 * '<S448>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation'
 * '<S449>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering/Compare To Zero2'
 * '<S450>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering/Detect Increase'
 * '<S451>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering/Detect Increase1'
 * '<S452>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering/Detect Increase2'
 * '<S453>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering/Detect Increase3'
 * '<S454>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering/Detect Increase4'
 * '<S455>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering/Detect Increase5'
 * '<S456>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering/Previous active game state was not Teleop'
 * '<S457>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering/Saturation Dynamic'
 * '<S458>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Boost and Rate Limit'
 * '<S459>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Compare To Zero'
 * '<S460>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Compare To Zero1'
 * '<S461>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Latch Outputs when Both Inputs Zero'
 * '<S462>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Boost and Rate Limit/Simple Rate Limit'
 * '<S463>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Boost and Rate Limit/Simple Rate Limit/Discrete Rate Limiter'
 * '<S464>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Boost and Rate Limit/Simple Rate Limit/Discrete Rate Limiter/Saturation Dynamic'
 * '<S465>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Boost and Rate Limit/Simple Rate Limit/Discrete Rate Limiter/Unit Delay External IC'
 * '<S466>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Latch Outputs when Both Inputs Zero/Compare To Zero'
 * '<S467>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Latch Outputs when Both Inputs Zero/Compare To Zero1'
 * '<S468>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Reefscape Teleop/Detect Increase'
 * '<S469>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Reefscape Teleop/Detect Increase1'
 * '<S470>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Reefscape Teleop/Detect Increase10'
 * '<S471>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Reefscape Teleop/Detect Increase11'
 * '<S472>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Reefscape Teleop/Detect Increase12'
 * '<S473>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Reefscape Teleop/Detect Increase13'
 * '<S474>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Reefscape Teleop/Detect Increase2'
 * '<S475>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Reefscape Teleop/Detect Increase3'
 * '<S476>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Reefscape Teleop/Detect Increase4'
 * '<S477>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Reefscape Teleop/Detect Increase5'
 * '<S478>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Reefscape Teleop/Detect Increase6'
 * '<S479>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Reefscape Teleop/Detect Increase7'
 * '<S480>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Reefscape Teleop/Detect Increase8'
 * '<S481>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Reefscape Teleop/Detect Increase9'
 * '<S482>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Reefscape Teleop/Reefscape_Chart'
 */
#endif                                 /* RTW_HEADER_Code_Gen_Model_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
