/*
 * Sponsored License - for use in support of a program or activity
 * sponsored by MathWorks.  Not for government, commercial or other
 * non-sponsored organizational use.
 *
 * File: Robot_Control.h
 *
 * Code generated for Simulink model 'Robot_Control'.
 *
 * Model version                  : 2.423
 * Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
 * C/C++ source code generated on : Sat Dec 13 21:35:45 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM 7
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Robot_Control_h_
#define RTW_HEADER_Robot_Control_h_
#ifndef Robot_Control_COMMON_INCLUDES_
#define Robot_Control_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* Robot_Control_COMMON_INCLUDES_ */

#include "Robot_Control_types.h"
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
} DW_Debounce_Robot_Control_T;

/* Block states (default storage) for system '<S28>/Reefscape_Chart' */
typedef struct {
  real_T timer;                        /* '<S28>/Reefscape_Chart' */
  real_T timer_robot_target;           /* '<S28>/Reefscape_Chart' */
  uint8_T is_active_c5_Robot_Control;  /* '<S28>/Reefscape_Chart' */
  uint8_T is_Elevator_CoralArm_CoralWheel;/* '<S28>/Reefscape_Chart' */
  uint8_T is_Algae_Pickup_High;        /* '<S28>/Reefscape_Chart' */
  uint8_T is_Algae_Pickup_Low;         /* '<S28>/Reefscape_Chart' */
  uint8_T is_Algae_Score;              /* '<S28>/Reefscape_Chart' */
  uint8_T is_Coral;                    /* '<S28>/Reefscape_Chart' */
  uint8_T is_Coral_Eject;              /* '<S28>/Reefscape_Chart' */
  uint8_T is_Level_2;                  /* '<S28>/Reefscape_Chart' */
  uint8_T is_Level_3;                  /* '<S28>/Reefscape_Chart' */
  uint8_T is_Level_4_Auto;             /* '<S28>/Reefscape_Chart' */
  uint8_T is_Level_4_Teleop;           /* '<S28>/Reefscape_Chart' */
  uint8_T is_Coral_Score_Position;     /* '<S28>/Reefscape_Chart' */
  uint8_T is_Actions;                  /* '<S28>/Reefscape_Chart' */
  uint8_T is_Coral_Pickup_Prepare;     /* '<S28>/Reefscape_Chart' */
  uint8_T is_Set_Level;                /* '<S28>/Reefscape_Chart' */
  uint8_T is_Elevator_Height_Bottom;   /* '<S28>/Reefscape_Chart' */
  uint8_T is_Elevator_Height_Bottom_pre;/* '<S28>/Reefscape_Chart' */
  uint8_T is_End_Game_Climb;           /* '<S28>/Reefscape_Chart' */
  uint8_T is_Set_Level_n;              /* '<S28>/Reefscape_Chart' */
  uint8_T is_Algae_Wheels;             /* '<S28>/Reefscape_Chart' */
  uint8_T is_AT_On_Target_Timer;       /* '<S28>/Reefscape_Chart' */
  boolean_T Set_L1;                    /* '<S28>/Reefscape_Chart' */
  boolean_T Set_L2;                    /* '<S28>/Reefscape_Chart' */
  boolean_T Set_L3;                    /* '<S28>/Reefscape_Chart' */
  boolean_T Set_L4;                    /* '<S28>/Reefscape_Chart' */
} DW_Reefscape_Chart_Robot_Cont_T;

/* Block signals (default storage) */
typedef struct {
  real_T Drive_Joystick_X;             /* '<S15>/Signal Copy1' */
  real_T Drive_Joystick_Y;             /* '<S15>/Signal Copy2' */
  real_T Drive_Joystick_Z;             /* '<S15>/Signal Copy3' */
  real_T Steer_Joystick_Y;             /* '<S15>/Signal Copy5' */
  real_T Steer_Joystick_Z;             /* '<S15>/Signal Copy6' */
  real_T Limelight_Tag_Corrected_X;    /* '<S18>/Add' */
  real_T Limelight_Tag_Corrected_Y;    /* '<S18>/Add1' */
  real_T Limelight_Tag_Corrected_Angle;/* '<S18>/Add2' */
  real_T Elevator_Height_Measured_Raw; /* '<S13>/Gain1' */
  real_T Elevator_Height_Offset;       /* '<S13>/Switch1' */
  real_T Elevator_Height_Measured;     /* '<S13>/Switch' */
  real_T Coral_Arm_Angle_Measured;     /* '<S1>/Add Constant' */
  real_T KF_Position_X;                /* '<S17>/Switch' */
  real_T KF_Position_Y;                /* '<S17>/Switch1' */
  real_T Spline_Num_Poses;             /* '<S19>/Merge9' */
  real_T Steering_Abs_Cmd;             /* '<S19>/Merge1' */
  real_T Steering_Rel_Cmd;             /* '<S19>/Merge2' */
  real_T Translation_Speed;            /* '<S19>/Merge4' */
  real_T Translation_Angle;            /* '<S19>/Merge3' */
  real_T Translation_Speed_SPF;        /* '<S21>/Merge2' */
  real_T Translation_Speed_RL;         /* '<S341>/Sum' */
  real_T Translation_Angle_SPF;        /* '<S21>/Merge3' */
  real_T Gyro_Angle_SPF;               /* '<S21>/Merge8' */
  real_T Translation_Steering_Cmd;     /* '<S335>/Switch' */
  real_T Steering_Abs_Cmd_SPF;         /* '<S21>/Merge' */
  real_T Steering_Localized_PID;       /* '<S362>/Saturation2' */
  real_T Steering_Rel_Cmd_SPF;         /* '<S21>/Merge1' */
  real_T Steering_Localized_Cmd;       /* '<S334>/Switch' */
  real_T BR_Desired_Wheel_Speed_in;    /* '<S388>/Switch1' */
  real_T FL_Desired_Wheel_Speed_in;    /* '<S373>/Switch1' */
  real_T FR_Desired_Wheel_Speed_in;    /* '<S378>/Switch1' */
  real_T BL_Desired_Wheel_Speed_in;    /* '<S383>/Switch1' */
  real_T BR_Desired_Wheel_Speed;       /* '<S368>/Product3' */
  real_T BR_Desired_Module_Angle;      /* '<S388>/Switch' */
  real_T FL_Desired_Module_Angle;      /* '<S373>/Switch' */
  real_T FL_Desired_Wheel_Speed;       /* '<S368>/Product' */
  real_T FR_Desired_Module_Angle;      /* '<S378>/Switch' */
  real_T FR_Desired_Wheel_Speed;       /* '<S368>/Product1' */
  real_T BL_Desired_Module_Angle;      /* '<S383>/Switch' */
  real_T BL_Desired_Wheel_Speed;       /* '<S368>/Product2' */
  real_T Elevator_Height_Desired_merge;/* '<S19>/Merge11' */
  real_T Coral_Arm_Angle_Desired_merge;/* '<S19>/Merge13' */
  real_T Elevator_Error;               /* '<S12>/Add' */
  real_T Elevator_Proportional;        /* '<S90>/Gain1' */
  real_T Elevator_Integral;            /* '<S90>/Switch' */
  real_T Coral_ArmAngle_Error;         /* '<S8>/Subtract' */
  real_T Elevator_Proportional_l;      /* '<S72>/Gain1' */
  real_T Elevator_Integral_o;          /* '<S72>/Switch' */
  real_T loop_counter_robot_control;   /* '<S1>/Sum' */
  real_T Steer_Joystick_X;             /* '<S15>/Signal Copy4' */
  real_T AT_Relative_Error_Error_Y;    /* '<S23>/Signal Copy8' */
  real_T AT_Relative_Error_Error_X;    /* '<S23>/Signal Copy7' */
  real_T AT_Relative_Error_Angle;      /* '<S23>/Signal Copy9' */
  real_T Steering_Abs_Gyro_Latch;      /* '<S415>/Switch8' */
  real_T Steering_Abs_Gyro;            /* '<S415>/Switch2' */
  real_T Steering_Abs_Angle;           /* '<S415>/Switch3' */
  real_T State_ID_Teleop;              /* '<S395>/Reefscape_Chart' */
  real_T Elevator_Height_Desired;      /* '<S395>/Reefscape_Chart' */
  real_T Coral_Arm_Angle_Desired;      /* '<S395>/Reefscape_Chart' */
  real_T Coral_Wheel_DC;               /* '<S395>/Reefscape_Chart' */
  real_T UnitDelay2;                   /* '<S25>/Unit Delay2' */
  real_T Auto_AT_Relative_Error_Y;     /* '<S25>/Signal Copy6' */
  real_T Auto_AT_Relative_Error_X;     /* '<S25>/Signal Copy2' */
  real_T Auto_AT_Relative_Error_Angle; /* '<S25>/Signal Copy7' */
  real_T Translation_Speed_g;          /* '<S25>/Reefscape_Auto_Steps' */
  real_T Translation_Angle_l;          /* '<S25>/Reefscape_Auto_Steps' */
  real_T State_ID_Auto;                /* '<S28>/Reefscape_Chart' */
  real_T Elevator_Height_Desired_h;    /* '<S28>/Reefscape_Chart' */
  real_T Coral_Arm_Angle_Desired_f;    /* '<S28>/Reefscape_Chart' */
  real_T Coral_Wheel_DC_a;             /* '<S28>/Reefscape_Chart' */
  real_T Spline_Follow_Index;          /* '<S188>/Merge4' */
  real_T Spline_Target_Y;              /* '<S185>/Selector6' */
  real_T Spline_Target_X;              /* '<S185>/Selector2' */
  real_T Assignment[450];              /* '<S210>/Assignment' */
  real_T Product2[2];                  /* '<S180>/Product2' */
  real_T Product3[2];                  /* '<S178>/Product3' */
  uint16_T Set_Coral_Level;            /* '<S395>/Reefscape_Chart' */
  uint16_T Set_Coral_Level_j;          /* '<S28>/Reefscape_Chart' */
  uint16_T WhileIterator;              /* '<S235>/While Iterator' */
  uint8_T Set_Algae_Level;             /* '<S395>/Reefscape_Chart' */
  uint8_T Desired_Pipeline;            /* '<S395>/Reefscape_Chart' */
  uint8_T Path_ID;                     /* '<S25>/Reefscape_Auto_Steps' */
  uint8_T Auto_Step_ID;                /* '<S25>/Reefscape_Auto_Steps' */
  uint8_T Set_Algae_Level_p;           /* '<S28>/Reefscape_Chart' */
  uint8_T Active_GameState;            /* '<S20>/Chart' */
  boolean_T Button_Enable_Wheels;      /* '<S124>/FixPt Relational Operator' */
  boolean_T Button_Reset_Wheel_Offsets;/* '<S125>/FixPt Relational Operator' */
  boolean_T Button_Disable_Wheels;     /* '<S126>/FixPt Relational Operator' */
  boolean_T Drive_Joystick_Z_Mode;     /* '<S115>/Compare' */
  boolean_T Is_Boosting;               /* '<S121>/Compare' */
  boolean_T Face_Toward_Driver;        /* '<S113>/Compare' */
  boolean_T Face_Right_Driver;         /* '<S114>/Compare' */
  boolean_T Face_Left_Driver;          /* '<S116>/Compare' */
  boolean_T Face_Away_Driver;          /* '<S109>/Compare' */
  boolean_T Align_Left;                /* '<S119>/Compare' */
  boolean_T Align_Right;               /* '<S118>/Compare' */
  boolean_T Align_Center;              /* '<S120>/Compare' */
  boolean_T Drive_Engage_Hook;         /* '<S117>/Compare' */
  boolean_T Gamepad_POV_Up;            /* '<S108>/Compare' */
  boolean_T Gamepad_POV_Down;          /* '<S110>/Compare' */
  boolean_T Gamepad_POV_Left;          /* '<S112>/Compare' */
  boolean_T Gamepad_POV_Right;         /* '<S111>/Compare' */
  boolean_T Spline_Enable;             /* '<S19>/Merge7' */
  boolean_T Is_Absolute_Translation_SPF;/* '<S21>/Merge4' */
  boolean_T Is_Absolute_Steering_SPF;  /* '<S21>/Merge5' */
  boolean_T Swerve_Drive_Integral_Enable;/* '<S19>/Merge23' */
  boolean_T Reefscape_Motors_Enable_merge;/* '<S19>/Merge12' */
  boolean_T Winch_Cmd;                 /* '<S123>/Compare' */
  boolean_T Actuator_Cmd;              /* '<S122>/Compare' */
  boolean_T Robot_Reached_Destination_l;/* '<S21>/Merge7' */
  boolean_T Test_Mode;                 /* '<S19>/Merge10' */
  boolean_T Elevator_LowerPickup_Reset_merg;/* '<S19>/Merge21' */
  boolean_T AT_Relative_Error_Enable;  /* '<S23>/Signal Copy6' */
  boolean_T Steering_Abs_Angle_Active; /* '<S415>/AND6' */
  boolean_T Teleop_AT_On_Target;       /* '<S23>/Signal Copy10' */
  boolean_T Elevator_LowerPickup_Reset;/* '<S395>/Reefscape_Chart' */
  boolean_T Coral_Pickup_Lower_Wait_State;/* '<S395>/Reefscape_Chart' */
  boolean_T Auto_AT_Relative_Enable;   /* '<S25>/Signal Copy1' */
  boolean_T Auto_AT_On_Target;         /* '<S25>/Signal Copy8' */
  boolean_T Align_Left_d;              /* '<S25>/Reefscape_Auto_Steps' */
  boolean_T Align_Center_a;            /* '<S25>/Reefscape_Auto_Steps' */
  boolean_T Gamepad_B4_Y_out;          /* '<S25>/Reefscape_Auto_Steps' */
  boolean_T Gamepad_Start_out;         /* '<S25>/Reefscape_Auto_Steps' */
  boolean_T Gamepad_Back_out;          /* '<S25>/Reefscape_Auto_Steps' */
  boolean_T Gamepad_RT_out;            /* '<S25>/Reefscape_Auto_Steps' */
  boolean_T Gamepad_POV_Down_k;        /* '<S25>/Reefscape_Auto_Steps' */
  boolean_T Gamepad_POV_Left_p;        /* '<S25>/Reefscape_Auto_Steps' */
  boolean_T Path_Enable;               /* '<S25>/Reefscape_Auto_Steps' */
  boolean_T Gamepad_B1_A_out;          /* '<S25>/Reefscape_Auto_Steps' */
  boolean_T Gamepad_B3_X_out;          /* '<S25>/Reefscape_Auto_Steps' */
  boolean_T Elevator_LowerPickup_Reset_g;/* '<S28>/Reefscape_Chart' */
  boolean_T Coral_Pickup_Lower_Wait_State_m;/* '<S28>/Reefscape_Chart' */
  boolean_T Coral_Score_j;             /* '<S28>/Reefscape_Chart' */
  boolean_T Spline_Out_Of_Bounds;      /* '<S188>/Merge1' */
  boolean_T Out;                       /* '<S10>/Debounce' */
  boolean_T Out_h;                     /* '<S9>/Debounce' */
} B_Robot_Control_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T DelayInput1_DSTATE;           /* '<S124>/Delay Input1' */
  real_T DelayInput1_DSTATE_e;         /* '<S125>/Delay Input1' */
  real_T DelayInput1_DSTATE_n;         /* '<S126>/Delay Input1' */
  real_T TappedDelay_X[2];             /* '<S17>/Tapped Delay' */
  real_T TappedDelay1_X[2];            /* '<S17>/Tapped Delay1' */
  real_T MemoryX_DSTATE[2];            /* '<S127>/MemoryX' */
  real_T UnitDelay1_DSTATE_i;          /* '<S365>/Unit Delay1' */
  real_T UD_DSTATE;                    /* '<S364>/UD' */
  real_T UnitDelay_DSTATE_m;           /* '<S362>/Unit Delay' */
  real_T UnitDelay_DSTATE_d;           /* '<S345>/Unit Delay' */
  real_T FixPtUnitDelay1_DSTATE_e;     /* '<S360>/FixPt Unit Delay1' */
  real_T UnitDelay_DSTATE_g;           /* '<S344>/Unit Delay' */
  real_T FixPtUnitDelay1_DSTATE_p;     /* '<S353>/FixPt Unit Delay1' */
  real_T UnitDelay1_DSTATE_j;          /* '<S319>/Unit Delay1' */
  real_T UD_DSTATE_j;                  /* '<S318>/UD' */
  real_T UnitDelay_DSTATE_l;           /* '<S312>/Unit Delay' */
  real_T UnitDelay1_DSTATE_f;          /* '<S256>/Unit Delay1' */
  real_T UD_DSTATE_h;                  /* '<S255>/UD' */
  real_T UnitDelay_DSTATE_j;           /* '<S249>/Unit Delay' */
  real_T UnitDelay1_DSTATE_b;          /* '<S267>/Unit Delay1' */
  real_T UD_DSTATE_b;                  /* '<S266>/UD' */
  real_T UnitDelay_DSTATE_e;           /* '<S252>/Unit Delay' */
  real_T UnitDelay1_DSTATE_e;          /* '<S277>/Unit Delay1' */
  real_T UD_DSTATE_m;                  /* '<S276>/UD' */
  real_T UnitDelay_DSTATE_h;           /* '<S270>/Unit Delay' */
  real_T UnitDelay1_DSTATE_n;          /* '<S288>/Unit Delay1' */
  real_T UD_DSTATE_i;                  /* '<S287>/UD' */
  real_T UnitDelay_DSTATE_dt;          /* '<S273>/Unit Delay' */
  real_T UnitDelay1_DSTATE_n4;         /* '<S298>/Unit Delay1' */
  real_T UD_DSTATE_o;                  /* '<S297>/UD' */
  real_T UnitDelay_DSTATE_f;           /* '<S291>/Unit Delay' */
  real_T UnitDelay1_DSTATE_nw;         /* '<S309>/Unit Delay1' */
  real_T UD_DSTATE_k;                  /* '<S308>/UD' */
  real_T UnitDelay_DSTATE_k;           /* '<S294>/Unit Delay' */
  real_T UnitDelay1_DSTATE_iw;         /* '<S330>/Unit Delay1' */
  real_T UD_DSTATE_l;                  /* '<S329>/UD' */
  real_T UnitDelay_DSTATE_lm;          /* '<S315>/Unit Delay' */
  real_T UnitDelay_DSTATE_mh;          /* '<S89>/Unit Delay' */
  real_T FixPtUnitDelay1_DSTATE_l;     /* '<S98>/FixPt Unit Delay1' */
  real_T UnitDelay_DSTATE_oz;          /* '<S71>/Unit Delay' */
  real_T FixPtUnitDelay1_DSTATE_pc;    /* '<S80>/FixPt Unit Delay1' */
  real_T DelayInput1_DSTATE_c;         /* '<S436>/Delay Input1' */
  real_T DelayInput1_DSTATE_nr;        /* '<S437>/Delay Input1' */
  real_T DelayInput1_DSTATE_ez;        /* '<S442>/Delay Input1' */
  real_T DelayInput1_DSTATE_nh;        /* '<S443>/Delay Input1' */
  real_T DelayInput1_DSTATE_i;         /* '<S444>/Delay Input1' */
  real_T DelayInput1_DSTATE_cp;        /* '<S438>/Delay Input1' */
  real_T DelayInput1_DSTATE_p;         /* '<S445>/Delay Input1' */
  real_T DelayInput1_DSTATE_o;         /* '<S448>/Delay Input1' */
  real_T DelayInput1_DSTATE_j;         /* '<S449>/Delay Input1' */
  real_T DelayInput1_DSTATE_b;         /* '<S441>/Delay Input1' */
  real_T UnitDelay1_DSTATE_nr;         /* '<S393>/Unit Delay1' */
  real_T UnitDelay_DSTATE_kq;          /* '<S393>/Unit Delay' */
  real_T UnitDelay1_DSTATE_l;          /* '<S429>/Unit Delay1' */
  real_T UnitDelay_DSTATE_p;           /* '<S429>/Unit Delay' */
  real_T FixPtUnitDelay1_DSTATE_f;     /* '<S433>/FixPt Unit Delay1' */
  real_T UnitDelay3_DSTATE;            /* '<S415>/Unit Delay3' */
  real_T UnitDelay1_DSTATE_j2;         /* '<S415>/Unit Delay1' */
  real_T UnitDelay2_DSTATE;            /* '<S25>/Unit Delay2' */
  real_T UnitDelay1_DSTATE_ek;         /* '<S26>/Unit Delay1' */
  real_T UnitDelay_DSTATE_b;           /* '<S26>/Unit Delay' */
  real_T UnitDelay_DSTATE_gh;          /* '<S184>/Unit Delay' */
  real_T UnitDelay_DSTATE_hn;          /* '<S183>/Unit Delay' */
  real_T UnitDelay1_DSTATE_f4;         /* '<S236>/Unit Delay1' */
  real_T UnitDelay_DSTATE_g4;          /* '<S236>/Unit Delay' */
  real_T UnitDelay_DSTATE_le;          /* '<S186>/Unit Delay' */
  real_T UnitDelay1_DSTATE_k;          /* '<S186>/Unit Delay1' */
  real_T timer;                        /* '<S25>/Reefscape_Auto_Steps' */
  void *MatrixConcatenate_PWORK;       /* '<S205>/Matrix Concatenate' */
  int32_T Selector5_DIMS1[2];          /* '<S205>/Selector5' */
  int32_T MatrixConcatenate_DIMS1[2];  /* '<S205>/Matrix Concatenate' */
  int32_T Selector4_DIMS1[2];          /* '<S205>/Selector4' */
  uint8_T FixPtUnitDelay2_DSTATE;      /* '<S343>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_p;    /* '<S360>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_c;    /* '<S353>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_o;    /* '<S98>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_j;    /* '<S80>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_a;    /* '<S433>/FixPt Unit Delay2' */
  boolean_T DelayInput1_DSTATE_bd;     /* '<S101>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_o1;     /* '<S102>/Delay Input1' */
  boolean_T UnitDelay_DSTATE_mph;      /* '<S1>/Unit Delay' */
  boolean_T DelayInput1_DSTATE_po;     /* '<S103>/Delay Input1' */
  boolean_T UnitDelay_DSTATE_ll;       /* '<S16>/Unit Delay' */
  boolean_T DelayInput1_DSTATE_be;     /* '<S99>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_op;     /* '<S81>/Delay Input1' */
  boolean_T UnitDelay_DSTATE_gln;      /* '<S14>/Unit Delay' */
  boolean_T UnitDelay1_DSTATE_kb;      /* '<S14>/Unit Delay1' */
  boolean_T UnitDelay2_DSTATE_k;       /* '<S14>/Unit Delay2' */
  boolean_T UnitDelay_DSTATE_ir;       /* '<S24>/Unit Delay' */
  boolean_T DelayInput1_DSTATE_oy;     /* '<S446>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_f;      /* '<S447>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_o5;     /* '<S439>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_a;      /* '<S440>/Delay Input1' */
  boolean_T UnitDelay_DSTATE_ia;       /* '<S23>/Unit Delay' */
  boolean_T DelayInput1_DSTATE_jp;     /* '<S423>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_ft;     /* '<S422>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_m;      /* '<S418>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_k;      /* '<S419>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_g;      /* '<S420>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_g2;     /* '<S421>/Delay Input1' */
  boolean_T UnitDelay2_DSTATE_l;       /* '<S415>/Unit Delay2' */
  boolean_T UnitDelay4_DSTATE;         /* '<S415>/Unit Delay4' */
  boolean_T UnitDelay1_DSTATE_p;       /* '<S25>/Unit Delay1' */
  boolean_T DelayInput1_DSTATE_l;      /* '<S51>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_bdz;    /* '<S52>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_au;     /* '<S57>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_ne;     /* '<S58>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_ff;     /* '<S59>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_ev;     /* '<S53>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_o1g;    /* '<S60>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_os;     /* '<S63>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_b2;     /* '<S64>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_bm;     /* '<S56>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_d;      /* '<S61>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_b3;     /* '<S62>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_ae;     /* '<S54>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_mu;     /* '<S55>/Delay Input1' */
  boolean_T UnitDelay_DSTATE_i3;       /* '<S25>/Unit Delay' */
  boolean_T UnitDelay_DSTATE_e4;       /* '<S191>/Unit Delay' */
  boolean_T UnitDelay_DSTATE_n;        /* '<S196>/Unit Delay' */
  int8_T SwitchCase_ActiveSubsystem;   /* '<S1>/Switch Case' */
  int8_T If_ActiveSubsystem;           /* '<S21>/If' */
  int8_T If_ActiveSubsystem_h;         /* '<S188>/If' */
  int8_T If_ActiveSubsystem_o;         /* '<S191>/If' */
  int8_T If_ActiveSubsystem_d;         /* '<S193>/If' */
  uint8_T is_active_c6_Robot_Control;  /* '<S25>/Reefscape_Auto_Steps' */
  uint8_T is_c6_Robot_Control;         /* '<S25>/Reefscape_Auto_Steps' */
  uint8_T is_Center;                   /* '<S25>/Reefscape_Auto_Steps' */
  uint8_T is_Path_to_Reef;             /* '<S25>/Reefscape_Auto_Steps' */
  uint8_T is_Left_and_Right;           /* '<S25>/Reefscape_Auto_Steps' */
  uint8_T is_Path_to_Reef_1;           /* '<S25>/Reefscape_Auto_Steps' */
  uint8_T is_Drive;                    /* '<S25>/Reefscape_Auto_Steps' */
  uint8_T is_Path_to_Reef_2;           /* '<S25>/Reefscape_Auto_Steps' */
  uint8_T is_Path_to_Reef_2_v2;        /* '<S25>/Reefscape_Auto_Steps' */
  uint8_T is_active_c9_Robot_Control;  /* '<S20>/Chart' */
  uint8_T is_c9_Robot_Control;         /* '<S20>/Chart' */
  boolean_T icLoad;                    /* '<S127>/MemoryX' */
  boolean_T Relay_Mode;                /* '<S218>/Relay' */
  boolean_T EnabledSubsystem_MODE;     /* '<S154>/Enabled Subsystem' */
  boolean_T MeasurementUpdate_MODE;    /* '<S147>/MeasurementUpdate' */
  DW_Reefscape_Chart_Robot_Cont_T sf_Reefscape_Chart_n;/* '<S395>/Reefscape_Chart' */
  DW_Reefscape_Chart_Robot_Cont_T sf_Reefscape_Chart;/* '<S28>/Reefscape_Chart' */
  DW_Debounce_Robot_Control_T sf_Debounce_m;/* '<S10>/Debounce' */
  DW_Debounce_Robot_Control_T sf_Debounce;/* '<S9>/Debounce' */
} DW_Robot_Control_T;

/* Invariant block signals (default storage) */
typedef struct {
  const real_T UnaryMinus;             /* '<S71>/Unary Minus' */
  const real_T UnaryMinus_m;           /* '<S89>/Unary Minus' */
  const real_T Cos5;                   /* '<S260>/Cos5' */
  const real_T Sin5;                   /* '<S260>/Sin5' */
  const real_T Cos5_g;                 /* '<S281>/Cos5' */
  const real_T Sin5_m;                 /* '<S281>/Sin5' */
  const real_T Cos5_i;                 /* '<S302>/Cos5' */
  const real_T Sin5_e;                 /* '<S302>/Sin5' */
  const real_T Cos5_b;                 /* '<S323>/Cos5' */
  const real_T Sin5_c;                 /* '<S323>/Sin5' */
  const real_T DeadZone;               /* '<S28>/Dead Zone' */
  const real_T DeadZone1;              /* '<S28>/Dead Zone1' */
  const real_T Atan2;                  /* '<S333>/Atan2' */
  const real_T FL_Tangent_Angle;       /* '<S333>/Add' */
  const real_T Atan1;                  /* '<S333>/Atan1' */
  const real_T FR_Tangent_Angle;       /* '<S333>/Add1' */
  const real_T Atan3;                  /* '<S333>/Atan3' */
  const real_T BL_Tangent_Angle;       /* '<S333>/Add2' */
  const real_T Atan4;                  /* '<S333>/Atan4' */
  const real_T BR_Tangent_Angle;       /* '<S333>/Add3' */
} ConstB_Robot_Control_T;

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
  real_T FrontLeft_Drive_Motor_Speed; /* '<Root>/FrontLeft_Drive_Motor_Speed' */
  real_T FrontRight_Drive_Motor_Speed;
                                     /* '<Root>/FrontRight_Drive_Motor_Speed' */
  real_T BackLeft_Drive_Motor_Speed;   /* '<Root>/BackLeft_Drive_Motor_Speed' */
  real_T BackRight_Drive_Motor_Speed; /* '<Root>/BackRight_Drive_Motor_Speed' */
  real_T Gyro_Angle_Field_rad;         /* '<Root>/Gyro_Angle_Field_rad' */
  real_T Gyro_Angle_rad;               /* '<Root>/Gyro_Angle_rad' */
  real_T Auto_Start_Position;          /* '<Root>/Auto_Start_Position' */
  real_T FL_Steer_Module_Angle;        /* '<Root>/FL_Steer_Module_Angle' */
  real_T FR_Steer_Module_Angle;        /* '<Root>/FR_Steer_Module_Angle' */
  real_T BL_Steer_Module_Angle;        /* '<Root>/BL_Steer_Module_Angle' */
  real_T BR_Steer_Module_Angle;        /* '<Root>/BR_Steer_Module_Angle' */
  real_T Odom_Position_X;              /* '<Root>/Odom_Position_X' */
  real_T Odom_Position_Y;              /* '<Root>/Odom_Position_Y' */
  real_T Odom_Delta_X;                 /* '<Root>/Odom_Delta_X' */
  real_T Odom_Delta_Y;                 /* '<Root>/Odom_Delta_Y' */
  real_T Limelight_Est_Pose_X;         /* '<Root>/Limelight_Est_Pose_X' */
  real_T Limelight_Est_Pose_Y;         /* '<Root>/Limelight_Est_Pose_Y' */
  real_T Num_Tags_Detected;            /* '<Root>/Num_Tags_Detected' */
  real_T Limelight_Tag_X;              /* '<Root>/Limelight_Tag_X' */
  real_T Limelight_Tag_Y;              /* '<Root>/Limelight_Tag_Y' */
  real_T Limelight_Tag_Angle;          /* '<Root>/Limelight_Tag_Angle' */
  real_T Elevator_Motor_Rev;           /* '<Root>/Elevator_Motor_Rev' */
  real_T Elevator_Limit_Switch_Bottom;
                                     /* '<Root>/Elevator_Limit_Switch_Bottom' */
  real_T Elevator_Limit_Switch_Top;    /* '<Root>/Elevator_Limit_Switch_Top' */
  real_T Coral_Arm_Angle_Measured_Raw;
                                     /* '<Root>/Coral_Arm_Angle_Measured_Raw' */
  real_T Coral_TOF_Distance;           /* '<Root>/Coral_TOF_Distance' */
  real_T Coral_Limit_Switch;           /* '<Root>/Coral_Limit_Switch' */
  real_T Algae_Limit_Switch;           /* '<Root>/Algae_Limit_Switch' */
  real_T Winch_Revs;                   /* '<Root>/Winch_Revs' */
  real_T Actuator_Revs;                /* '<Root>/Actuator_Revs' */
} ExtU_Robot_Control_T;

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
  real_T Winch_DutyCycle;              /* '<Root>/Winch_DutyCycle' */
  real_T Actuator_DutyCycle;           /* '<Root>/Actuator_DutyCycle' */
  real_T CANdle_LED_ID;                /* '<Root>/CANdle_LED_ID' */
  uint8_T Desired_Pipeline;            /* '<Root>/Desired_Pipeline' */
} ExtY_Robot_Control_T;

/* Real-time Model Data Structure */
struct tag_RTM_Robot_Control_T {
  const char_T * volatile errorStatus;
};

/* Block signals (default storage) */
extern B_Robot_Control_T Robot_Control_B;

/* Block states (default storage) */
extern DW_Robot_Control_T Robot_Control_DW;

/* External inputs (root inport signals with default storage) */
extern ExtU_Robot_Control_T Robot_Control_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_Robot_Control_T Robot_Control_Y;
extern const ConstB_Robot_Control_T Robot_Control_ConstB;/* constant block i/o */

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
                                      *   '<S399>/Constant'
                                      *   '<S33>/Constant'
                                      */
extern real_T AT_Integral_Enable_Error_XY;/* Variable: AT_Integral_Enable_Error_XY
                                           * Referenced by:
                                           *   '<S406>/Constant'
                                           *   '<S407>/Constant'
                                           *   '<S40>/Constant'
                                           *   '<S41>/Constant'
                                           */
extern real_T AT_Max_Error_Angle;      /* Variable: AT_Max_Error_Angle
                                        * Referenced by:
                                        *   '<S405>/Constant'
                                        *   '<S39>/Constant'
                                        */
extern real_T AT_Max_Error_XY;         /* Variable: AT_Max_Error_XY
                                        * Referenced by:
                                        *   '<S403>/Constant'
                                        *   '<S404>/Constant'
                                        *   '<S37>/Constant'
                                        *   '<S38>/Constant'
                                        */
extern real_T AT_On_Target_Time;       /* Variable: AT_On_Target_Time
                                        * Referenced by:
                                        *   '<S395>/Reefscape_Chart'
                                        *   '<S28>/Reefscape_Chart'
                                        */
extern real_T AT_Reef_Target_Algae_X;  /* Variable: AT_Reef_Target_Algae_X
                                        * Referenced by:
                                        *   '<S393>/Constant7'
                                        *   '<S26>/Constant7'
                                        */
extern real_T AT_Reef_Target_Algae_Y;  /* Variable: AT_Reef_Target_Algae_Y
                                        * Referenced by:
                                        *   '<S393>/Constant6'
                                        *   '<S26>/Constant6'
                                        */
extern real_T AT_Reef_Target_Center_Y; /* Variable: AT_Reef_Target_Center_Y
                                        * Referenced by:
                                        *   '<S393>/Constant3'
                                        *   '<S26>/Constant3'
                                        */
extern real_T AT_Reef_Target_L1_X;     /* Variable: AT_Reef_Target_L1_X
                                        * Referenced by:
                                        *   '<S393>/Constant4'
                                        *   '<S26>/Constant4'
                                        */
extern real_T AT_Reef_Target_L2_L3_X;  /* Variable: AT_Reef_Target_L2_L3_X
                                        * Referenced by:
                                        *   '<S393>/Constant'
                                        *   '<S26>/Constant'
                                        */
extern real_T AT_Reef_Target_L4_X;     /* Variable: AT_Reef_Target_L4_X
                                        * Referenced by:
                                        *   '<S393>/Constant5'
                                        *   '<S26>/Constant5'
                                        */
extern real_T AT_Reef_Target_Left_Y;   /* Variable: AT_Reef_Target_Left_Y
                                        * Referenced by:
                                        *   '<S393>/Constant1'
                                        *   '<S26>/Constant1'
                                        */
extern real_T AT_Reef_Target_Right_Y;  /* Variable: AT_Reef_Target_Right_Y
                                        * Referenced by: '<S393>/Constant2'
                                        */
extern real_T AT_Steering_Error_Angle_Gain_P;
                                     /* Variable: AT_Steering_Error_Angle_Gain_P
                                      * Referenced by:
                                      *   '<S30>/Constant4'
                                      *   '<S415>/Constant4'
                                      */
extern real_T AT_Steering_Speed_Max;   /* Variable: AT_Steering_Speed_Max
                                        * Referenced by:
                                        *   '<S30>/Constant10'
                                        *   '<S415>/Constant10'
                                        */
extern real_T AT_Translation_Control_Gain_Field;
                                  /* Variable: AT_Translation_Control_Gain_Field
                                   * Referenced by: '<S416>/Gain2'
                                   */
extern real_T AT_Translation_Control_Gain_Relative;
                               /* Variable: AT_Translation_Control_Gain_Relative
                                * Referenced by:
                                *   '<S30>/Gain1'
                                *   '<S416>/Gain1'
                                */
extern real_T AT_Translation_Speed_Max_Field;
                                     /* Variable: AT_Translation_Speed_Max_Field
                                      * Referenced by: '<S416>/Constant5'
                                      */
extern real_T AT_Translation_Speed_Max_Relative;
                                  /* Variable: AT_Translation_Speed_Max_Relative
                                   * Referenced by:
                                   *   '<S30>/Constant8'
                                   *   '<S416>/Constant8'
                                   */
extern real_T Actuator_DC;             /* Variable: Actuator_DC
                                        * Referenced by: '<S14>/Constant6'
                                        */
extern real_T Actuator_Rev_Startup_Range;/* Variable: Actuator_Rev_Startup_Range
                                          * Referenced by: '<S105>/Constant'
                                          */
extern real_T Actuator_Rev_Target;     /* Variable: Actuator_Rev_Target
                                        * Referenced by: '<S106>/Constant'
                                        */
extern real_T Algae_Eject_Time;        /* Variable: Algae_Eject_Time
                                        * Referenced by:
                                        *   '<S395>/Reefscape_Chart'
                                        *   '<S28>/Reefscape_Chart'
                                        */
extern real_T Algae_Hold_DC;           /* Variable: Algae_Hold_DC
                                        * Referenced by:
                                        *   '<S395>/Reefscape_Chart'
                                        *   '<S28>/Reefscape_Chart'
                                        */
extern real_T Algae_Pull_In_DC;        /* Variable: Algae_Pull_In_DC
                                        * Referenced by:
                                        *   '<S395>/Reefscape_Chart'
                                        *   '<S28>/Reefscape_Chart'
                                        */
extern real_T Algae_Push_Out_DC;       /* Variable: Algae_Push_Out_DC
                                        * Referenced by:
                                        *   '<S395>/Reefscape_Chart'
                                        *   '<S28>/Reefscape_Chart'
                                        */
extern real_T Auto_Algae_Height_Time;  /* Variable: Auto_Algae_Height_Time
                                        * Referenced by: '<S25>/Reefscape_Auto_Steps'
                                        */
extern real_T Auto_Backup_Time_Processor;/* Variable: Auto_Backup_Time_Processor
                                          * Referenced by: '<S25>/Reefscape_Auto_Steps'
                                          */
extern real_T Auto_Backup_Time_Reef;   /* Variable: Auto_Backup_Time_Reef
                                        * Referenced by: '<S25>/Reefscape_Auto_Steps'
                                        */
extern real_T Auto_Path1_Delay_to_L2_Time;/* Variable: Auto_Path1_Delay_to_L2_Time
                                           * Referenced by: '<S25>/Reefscape_Auto_Steps'
                                           */
extern real_T Auto_Path1_Delay_to_L4_Time;/* Variable: Auto_Path1_Delay_to_L4_Time
                                           * Referenced by: '<S25>/Reefscape_Auto_Steps'
                                           */
extern real_T Auto_Path2_Delay_to_L4_Time;/* Variable: Auto_Path2_Delay_to_L4_Time
                                           * Referenced by: '<S25>/Reefscape_Auto_Steps'
                                           */
extern real_T Auto_Speed_Algae;        /* Variable: Auto_Speed_Algae
                                        * Referenced by: '<S25>/Reefscape_Auto_Steps'
                                        */
extern real_T Auto_Speed_Coral;        /* Variable: Auto_Speed_Coral
                                        * Referenced by: '<S25>/Reefscape_Auto_Steps'
                                        */
extern real_T Auto_Speed_Processor;    /* Variable: Auto_Speed_Processor
                                        * Referenced by: '<S25>/Reefscape_Auto_Steps'
                                        */
extern real_T Auto_Speed_Reef;         /* Variable: Auto_Speed_Reef
                                        * Referenced by: '<S25>/Reefscape_Auto_Steps'
                                        */
extern real_T Boost_Trigger_Decreasing_Limit;
                                     /* Variable: Boost_Trigger_Decreasing_Limit
                                      * Referenced by: '<S430>/Constant1'
                                      */
extern real_T Boost_Trigger_High_Speed;/* Variable: Boost_Trigger_High_Speed
                                        * Referenced by:
                                        *   '<S426>/Constant'
                                        *   '<S426>/Saturation'
                                        */
extern real_T Boost_Trigger_Increasing_Limit;
                                     /* Variable: Boost_Trigger_Increasing_Limit
                                      * Referenced by: '<S430>/Constant3'
                                      */
extern real_T Boost_Trigger_Low_Speed; /* Variable: Boost_Trigger_Low_Speed
                                        * Referenced by: '<S426>/Constant1'
                                        */
extern real_T Coral_Arm_Angle_Coral_Score_Lower_Rate;
                             /* Variable: Coral_Arm_Angle_Coral_Score_Lower_Rate
                              * Referenced by:
                              *   '<S395>/Reefscape_Chart'
                              *   '<S28>/Reefscape_Chart'
                              */
extern real_T Coral_Arm_Angle_Error_Threshold;
                                    /* Variable: Coral_Arm_Angle_Error_Threshold
                                     * Referenced by:
                                     *   '<S395>/Reefscape_Chart'
                                     *   '<S28>/Reefscape_Chart'
                                     */
extern real_T Coral_Arm_Angle_L1;      /* Variable: Coral_Arm_Angle_L1
                                        * Referenced by:
                                        *   '<S395>/Reefscape_Chart'
                                        *   '<S28>/Reefscape_Chart'
                                        */
extern real_T Coral_Arm_Angle_L2;      /* Variable: Coral_Arm_Angle_L2
                                        * Referenced by:
                                        *   '<S395>/Reefscape_Chart'
                                        *   '<S28>/Reefscape_Chart'
                                        */
extern real_T Coral_Arm_Angle_L3;      /* Variable: Coral_Arm_Angle_L3
                                        * Referenced by:
                                        *   '<S395>/Reefscape_Chart'
                                        *   '<S28>/Reefscape_Chart'
                                        */
extern real_T Coral_Arm_Angle_L4;      /* Variable: Coral_Arm_Angle_L4
                                        * Referenced by:
                                        *   '<S395>/Reefscape_Chart'
                                        *   '<S28>/Reefscape_Chart'
                                        */
extern real_T Coral_Arm_Angle_L4_Eject_Auto;
                                      /* Variable: Coral_Arm_Angle_L4_Eject_Auto
                                       * Referenced by:
                                       *   '<S395>/Reefscape_Chart'
                                       *   '<S28>/Reefscape_Chart'
                                       */
extern real_T Coral_Arm_Angle_L4_Eject_Teleop;
                                    /* Variable: Coral_Arm_Angle_L4_Eject_Teleop
                                     * Referenced by:
                                     *   '<S395>/Reefscape_Chart'
                                     *   '<S28>/Reefscape_Chart'
                                     */
extern real_T Coral_Arm_Angle_Neg_Threshold;
                                      /* Variable: Coral_Arm_Angle_Neg_Threshold
                                       * Referenced by: '<S68>/Constant'
                                       */
extern real_T Coral_Arm_Angle_Pos_Threshold;
                                      /* Variable: Coral_Arm_Angle_Pos_Threshold
                                       * Referenced by:
                                       *   '<S69>/Constant'
                                       *   '<S70>/Constant'
                                       */
extern real_T Coral_Arm_Angle_Start;   /* Variable: Coral_Arm_Angle_Start
                                        * Referenced by:
                                        *   '<S395>/Reefscape_Chart'
                                        *   '<S28>/Reefscape_Chart'
                                        */
extern real_T Coral_Arm_Angle_Start_Thresh;/* Variable: Coral_Arm_Angle_Start_Thresh
                                            * Referenced by:
                                            *   '<S395>/Reefscape_Chart'
                                            *   '<S28>/Reefscape_Chart'
                                            */
extern real_T Coral_Arm_Angle_Up;      /* Variable: Coral_Arm_Angle_Up
                                        * Referenced by:
                                        *   '<S395>/Reefscape_Chart'
                                        *   '<S28>/Reefscape_Chart'
                                        */
extern real_T Coral_Arm_DC_Inc_RL;     /* Variable: Coral_Arm_DC_Inc_RL
                                        * Referenced by: '<S71>/Constant3'
                                        */
extern real_T Coral_Arm_Gain_Int;      /* Variable: Coral_Arm_Gain_Int
                                        * Referenced by: '<S72>/Gain2'
                                        */
extern real_T Coral_Arm_Gain_Prop;     /* Variable: Coral_Arm_Gain_Prop
                                        * Referenced by: '<S72>/Gain1'
                                        */
extern real_T Coral_Arm_Int_IC;        /* Variable: Coral_Arm_Int_IC
                                        * Referenced by: '<S72>/Constant3'
                                        */
extern real_T Coral_Arm_Int_LL;        /* Variable: Coral_Arm_Int_LL
                                        * Referenced by: '<S72>/Saturation1'
                                        */
extern real_T Coral_Arm_Int_UL;        /* Variable: Coral_Arm_Int_UL
                                        * Referenced by: '<S72>/Saturation1'
                                        */
extern real_T Coral_Arm_Manual_Gain;   /* Variable: Coral_Arm_Manual_Gain
                                        * Referenced by:
                                        *   '<S395>/Reefscape_Chart'
                                        *   '<S28>/Reefscape_Chart'
                                        */
extern real_T Coral_Arm_Neg90_DC;      /* Variable: Coral_Arm_Neg90_DC
                                        * Referenced by: '<S8>/Constant2'
                                        */
extern real_T Coral_Arm_Pos90_DC;      /* Variable: Coral_Arm_Pos90_DC
                                        * Referenced by: '<S8>/Constant1'
                                        */
extern real_T Coral_Detect_Distance;   /* Variable: Coral_Detect_Distance
                                        * Referenced by:
                                        *   '<S25>/Reefscape_Auto_Steps'
                                        *   '<S395>/Reefscape_Chart'
                                        *   '<S28>/Reefscape_Chart'
                                        */
extern real_T Coral_Eject_Time;        /* Variable: Coral_Eject_Time
                                        * Referenced by:
                                        *   '<S395>/Reefscape_Chart'
                                        *   '<S28>/Reefscape_Chart'
                                        */
extern real_T Coral_Motor_DC_Eject;    /* Variable: Coral_Motor_DC_Eject
                                        * Referenced by:
                                        *   '<S395>/Reefscape_Chart'
                                        *   '<S28>/Reefscape_Chart'
                                        */
extern real_T Coral_Motor_DC_Hold;     /* Variable: Coral_Motor_DC_Hold
                                        * Referenced by:
                                        *   '<S395>/Reefscape_Chart'
                                        *   '<S28>/Reefscape_Chart'
                                        */
extern real_T Coral_Motor_DC_Pickup;   /* Variable: Coral_Motor_DC_Pickup
                                        * Referenced by:
                                        *   '<S395>/Reefscape_Chart'
                                        *   '<S28>/Reefscape_Chart'
                                        */
extern real_T Drive_Engage_Hook_Angle; /* Variable: Drive_Engage_Hook_Angle
                                        * Referenced by: '<S416>/Constant9'
                                        */
extern real_T Drive_Engage_Hook_Speed; /* Variable: Drive_Engage_Hook_Speed
                                        * Referenced by: '<S416>/Constant7'
                                        */
extern real_T Drive_Motor_Control_D;   /* Variable: Drive_Motor_Control_D
                                        * Referenced by:
                                        *   '<S249>/Constant3'
                                        *   '<S270>/Constant3'
                                        *   '<S291>/Constant3'
                                        *   '<S312>/Constant3'
                                        */
extern real_T Drive_Motor_Control_D_FilterCoeff;
                                  /* Variable: Drive_Motor_Control_D_FilterCoeff
                                   * Referenced by:
                                   *   '<S249>/Constant2'
                                   *   '<S270>/Constant2'
                                   *   '<S291>/Constant2'
                                   *   '<S312>/Constant2'
                                   */
extern real_T Drive_Motor_Control_D_LL;/* Variable: Drive_Motor_Control_D_LL
                                        * Referenced by:
                                        *   '<S249>/Saturation'
                                        *   '<S270>/Saturation'
                                        *   '<S291>/Saturation'
                                        *   '<S312>/Saturation'
                                        */
extern real_T Drive_Motor_Control_D_UL;/* Variable: Drive_Motor_Control_D_UL
                                        * Referenced by:
                                        *   '<S249>/Saturation'
                                        *   '<S270>/Saturation'
                                        *   '<S291>/Saturation'
                                        *   '<S312>/Saturation'
                                        */
extern real_T Drive_Motor_Control_FF;  /* Variable: Drive_Motor_Control_FF
                                        * Referenced by:
                                        *   '<S249>/Gain'
                                        *   '<S270>/Gain'
                                        *   '<S291>/Gain'
                                        *   '<S312>/Gain'
                                        */
extern real_T Drive_Motor_Control_I;   /* Variable: Drive_Motor_Control_I
                                        * Referenced by:
                                        *   '<S249>/Gain2'
                                        *   '<S270>/Gain2'
                                        *   '<S291>/Gain2'
                                        *   '<S312>/Gain2'
                                        */
extern real_T Drive_Motor_Control_I_LL;/* Variable: Drive_Motor_Control_I_LL
                                        * Referenced by:
                                        *   '<S249>/Saturation1'
                                        *   '<S270>/Saturation1'
                                        *   '<S291>/Saturation1'
                                        *   '<S312>/Saturation1'
                                        */
extern real_T Drive_Motor_Control_I_UL;/* Variable: Drive_Motor_Control_I_UL
                                        * Referenced by:
                                        *   '<S249>/Saturation1'
                                        *   '<S270>/Saturation1'
                                        *   '<S291>/Saturation1'
                                        *   '<S312>/Saturation1'
                                        */
extern real_T Drive_Motor_Control_P;   /* Variable: Drive_Motor_Control_P
                                        * Referenced by:
                                        *   '<S249>/Gain1'
                                        *   '<S270>/Gain1'
                                        *   '<S291>/Gain1'
                                        *   '<S312>/Gain1'
                                        */
extern real_T Drive_Motor_Control_Sign_Change_Deadband;
                           /* Variable: Drive_Motor_Control_Sign_Change_Deadband
                            * Referenced by:
                            *   '<S254>/Constant'
                            *   '<S275>/Constant'
                            *   '<S296>/Constant'
                            *   '<S317>/Constant'
                            */
extern real_T Elevator_Bottom_DC;      /* Variable: Elevator_Bottom_DC
                                        * Referenced by: '<S12>/Constant7'
                                        */
extern real_T Elevator_DC_Inc_RL;      /* Variable: Elevator_DC_Inc_RL
                                        * Referenced by: '<S89>/Constant3'
                                        */
extern real_T Elevator_Error_Bottom_Disable;
                                      /* Variable: Elevator_Error_Bottom_Disable
                                       * Referenced by: '<S86>/Constant'
                                       */
extern real_T Elevator_Error_Increase; /* Variable: Elevator_Error_Increase
                                        * Referenced by: '<S12>/Constant6'
                                        */
extern real_T Elevator_Gain_Int;       /* Variable: Elevator_Gain_Int
                                        * Referenced by: '<S90>/Gain2'
                                        */
extern real_T Elevator_Gain_Prop;      /* Variable: Elevator_Gain_Prop
                                        * Referenced by: '<S90>/Gain1'
                                        */
extern real_T Elevator_Height_Algae_High;/* Variable: Elevator_Height_Algae_High
                                          * Referenced by:
                                          *   '<S395>/Reefscape_Chart'
                                          *   '<S28>/Reefscape_Chart'
                                          */
extern real_T Elevator_Height_Algae_Low;/* Variable: Elevator_Height_Algae_Low
                                         * Referenced by:
                                         *   '<S395>/Reefscape_Chart'
                                         *   '<S28>/Reefscape_Chart'
                                         */
extern real_T Elevator_Height_Algae_Score;/* Variable: Elevator_Height_Algae_Score
                                           * Referenced by:
                                           *   '<S395>/Reefscape_Chart'
                                           *   '<S28>/Reefscape_Chart'
                                           */
extern real_T Elevator_Height_Bottom;  /* Variable: Elevator_Height_Bottom
                                        * Referenced by:
                                        *   '<S395>/Reefscape_Chart'
                                        *   '<S28>/Reefscape_Chart'
                                        */
extern real_T Elevator_Height_Bottom_Pre;/* Variable: Elevator_Height_Bottom_Pre
                                          * Referenced by:
                                          *   '<S395>/Reefscape_Chart'
                                          *   '<S28>/Reefscape_Chart'
                                          */
extern real_T Elevator_Height_Coral_Arm_Low_Thresh;
                               /* Variable: Elevator_Height_Coral_Arm_Low_Thresh
                                * Referenced by: '<S67>/Constant'
                                */
extern real_T Elevator_Height_Coral_Score_Lower_Rate;
                             /* Variable: Elevator_Height_Coral_Score_Lower_Rate
                              * Referenced by:
                              *   '<S395>/Reefscape_Chart'
                              *   '<S28>/Reefscape_Chart'
                              */
extern real_T Elevator_Height_End_Game;/* Variable: Elevator_Height_End_Game
                                        * Referenced by:
                                        *   '<S14>/Constant5'
                                        *   '<S395>/Reefscape_Chart'
                                        *   '<S28>/Reefscape_Chart'
                                        */
extern real_T Elevator_Height_Error_Threshold;
                                    /* Variable: Elevator_Height_Error_Threshold
                                     * Referenced by:
                                     *   '<S87>/Constant'
                                     *   '<S395>/Reefscape_Chart'
                                     *   '<S28>/Reefscape_Chart'
                                     */
extern real_T Elevator_Height_L1;      /* Variable: Elevator_Height_L1
                                        * Referenced by:
                                        *   '<S395>/Reefscape_Chart'
                                        *   '<S28>/Reefscape_Chart'
                                        */
extern real_T Elevator_Height_L2;      /* Variable: Elevator_Height_L2
                                        * Referenced by:
                                        *   '<S395>/Reefscape_Chart'
                                        *   '<S28>/Reefscape_Chart'
                                        */
extern real_T Elevator_Height_L2_Eject;/* Variable: Elevator_Height_L2_Eject
                                        * Referenced by:
                                        *   '<S395>/Reefscape_Chart'
                                        *   '<S28>/Reefscape_Chart'
                                        */
extern real_T Elevator_Height_L3;      /* Variable: Elevator_Height_L3
                                        * Referenced by:
                                        *   '<S395>/Reefscape_Chart'
                                        *   '<S28>/Reefscape_Chart'
                                        */
extern real_T Elevator_Height_L3_Eject;/* Variable: Elevator_Height_L3_Eject
                                        * Referenced by:
                                        *   '<S395>/Reefscape_Chart'
                                        *   '<S28>/Reefscape_Chart'
                                        */
extern real_T Elevator_Height_L4;      /* Variable: Elevator_Height_L4
                                        * Referenced by:
                                        *   '<S395>/Reefscape_Chart'
                                        *   '<S28>/Reefscape_Chart'
                                        */
extern real_T Elevator_Height_Lower;   /* Variable: Elevator_Height_Lower
                                        * Referenced by:
                                        *   '<S395>/Reefscape_Chart'
                                        *   '<S28>/Reefscape_Chart'
                                        */
extern real_T Elevator_Height_Manual_Gain;/* Variable: Elevator_Height_Manual_Gain
                                           * Referenced by:
                                           *   '<S395>/Reefscape_Chart'
                                           *   '<S28>/Reefscape_Chart'
                                           */
extern real_T Elevator_Height_PickupLower_Reset;
                                  /* Variable: Elevator_Height_PickupLower_Reset
                                   * Referenced by: '<S13>/Constant2'
                                   */
extern real_T Elevator_Height_Prepare; /* Variable: Elevator_Height_Prepare
                                        * Referenced by:
                                        *   '<S395>/Reefscape_Chart'
                                        *   '<S28>/Reefscape_Chart'
                                        */
extern real_T Elevator_Height_Raise;   /* Variable: Elevator_Height_Raise
                                        * Referenced by:
                                        *   '<S395>/Reefscape_Chart'
                                        *   '<S28>/Reefscape_Chart'
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
                                        * Referenced by: '<S90>/Constant3'
                                        */
extern real_T Elevator_Int_LL;         /* Variable: Elevator_Int_LL
                                        * Referenced by: '<S90>/Saturation1'
                                        */
extern real_T Elevator_Int_UL;         /* Variable: Elevator_Int_UL
                                        * Referenced by: '<S90>/Saturation1'
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
                                         *   '<S395>/Reefscape_Chart'
                                         *   '<S28>/Reefscape_Chart'
                                         */
extern real_T Elevator_MotorRev_to_Inch;/* Variable: Elevator_MotorRev_to_Inch
                                         * Referenced by: '<S13>/Gain1'
                                         */
extern real_T Elevator_Total_LL;       /* Variable: Elevator_Total_LL
                                        * Referenced by:
                                        *   '<S12>/Constant8'
                                        *   '<S90>/Constant1'
                                        *   '<S90>/Saturation2'
                                        */
extern real_T Elevator_Total_UL;       /* Variable: Elevator_Total_UL
                                        * Referenced by:
                                        *   '<S90>/Constant'
                                        *   '<S90>/Saturation2'
                                        */
extern real_T KF_Enable;               /* Variable: KF_Enable
                                        * Referenced by:
                                        *   '<S17>/Constant1'
                                        *   '<S17>/Constant2'
                                        */
extern real_T L4_Switch_Time;          /* Variable: L4_Switch_Time
                                        * Referenced by:
                                        *   '<S395>/Reefscape_Chart'
                                        *   '<S28>/Reefscape_Chart'
                                        */
extern real_T Limelight_Tag_Angle_Offset;/* Variable: Limelight_Tag_Angle_Offset
                                          * Referenced by: '<S18>/Constant2'
                                          */
extern real_T Limelight_Tag_X_Offset;  /* Variable: Limelight_Tag_X_Offset
                                        * Referenced by: '<S18>/Constant'
                                        */
extern real_T Limelight_Tag_Y_Offset;  /* Variable: Limelight_Tag_Y_Offset
                                        * Referenced by: '<S18>/Constant1'
                                        */
extern real_T MatchTime_Skip_Coral_Pickup;/* Variable: MatchTime_Skip_Coral_Pickup
                                           * Referenced by: '<S25>/Reefscape_Auto_Steps'
                                           */
extern real_T MatchTime_Skip_Second_L4;/* Variable: MatchTime_Skip_Second_L4
                                        * Referenced by: '<S25>/Reefscape_Auto_Steps'
                                        */
extern real_T Spline_Last_Pose_Distance_to_Velocity_Gain;
                         /* Variable: Spline_Last_Pose_Distance_to_Velocity_Gain
                          * Referenced by: '<S238>/Constant2'
                          */
extern real_T Spline_Max_Centripital_Acceleration;
                                /* Variable: Spline_Max_Centripital_Acceleration
                                 * Referenced by: '<S238>/Constant1'
                                 */
extern real_T Spline_Pose_Num_Before_End_Reduce_Speed;
                            /* Variable: Spline_Pose_Num_Before_End_Reduce_Speed
                             * Referenced by: '<S185>/Constant'
                             */
extern real_T Spline_Stop_Radius;      /* Variable: Spline_Stop_Radius
                                        * Referenced by: '<S198>/Constant'
                                        */
extern real_T Spline_Velocity_Multiplier_TEST;
                                    /* Variable: Spline_Velocity_Multiplier_TEST
                                     * Referenced by: '<S238>/Constant3'
                                     */
extern real_T Steering_Absolute_Cmd_Approach_Zero_Error_Thresh;
                   /* Variable: Steering_Absolute_Cmd_Approach_Zero_Error_Thresh
                    * Referenced by: '<S345>/Constant5'
                    */
extern real_T Steering_Absolute_Cmd_Approach_Zero_Final_Thresh;
                   /* Variable: Steering_Absolute_Cmd_Approach_Zero_Final_Thresh
                    * Referenced by: '<S345>/Constant6'
                    */
extern real_T Steering_Absolute_Cmd_NonZero_Error_Thresh;
                         /* Variable: Steering_Absolute_Cmd_NonZero_Error_Thresh
                          * Referenced by: '<S345>/Constant9'
                          */
extern real_T Steering_Absolute_Cmd_NonZero_Final_Scale_Factor;
                   /* Variable: Steering_Absolute_Cmd_NonZero_Final_Scale_Factor
                    * Referenced by: '<S345>/Constant10'
                    */
extern real_T Steering_Absolute_Cmd_Rate_Limit_Dec;
                               /* Variable: Steering_Absolute_Cmd_Rate_Limit_Dec
                                * Referenced by: '<S345>/Constant1'
                                */
extern real_T Steering_Absolute_Cmd_Rate_Limit_Inc;
                               /* Variable: Steering_Absolute_Cmd_Rate_Limit_Inc
                                * Referenced by: '<S345>/Constant3'
                                */
extern real_T Steering_Heading_Control_D;/* Variable: Steering_Heading_Control_D
                                          * Referenced by: '<S362>/Constant3'
                                          */
extern real_T Steering_Heading_Control_D_FilterCoeff;
                             /* Variable: Steering_Heading_Control_D_FilterCoeff
                              * Referenced by: '<S362>/Constant2'
                              */
extern real_T Steering_Heading_Control_D_LL;
                                      /* Variable: Steering_Heading_Control_D_LL
                                       * Referenced by: '<S362>/Saturation'
                                       */
extern real_T Steering_Heading_Control_D_UL;
                                      /* Variable: Steering_Heading_Control_D_UL
                                       * Referenced by: '<S362>/Saturation'
                                       */
extern real_T Steering_Heading_Control_Deadzone;
                                  /* Variable: Steering_Heading_Control_Deadzone
                                   * Referenced by: '<S361>/Constant'
                                   */
extern real_T Steering_Heading_Control_I;/* Variable: Steering_Heading_Control_I
                                          * Referenced by: '<S362>/Gain2'
                                          */
extern real_T Steering_Heading_Control_I_LL;
                                      /* Variable: Steering_Heading_Control_I_LL
                                       * Referenced by: '<S362>/Saturation1'
                                       */
extern real_T Steering_Heading_Control_I_UL;
                                      /* Variable: Steering_Heading_Control_I_UL
                                       * Referenced by: '<S362>/Saturation1'
                                       */
extern real_T Steering_Heading_Control_P;/* Variable: Steering_Heading_Control_P
                                          * Referenced by: '<S362>/Gain1'
                                          */
extern real_T Steering_Heading_Control_Total_LL;
                                  /* Variable: Steering_Heading_Control_Total_LL
                                   * Referenced by:
                                   *   '<S362>/Constant1'
                                   *   '<S362>/Saturation2'
                                   */
extern real_T Steering_Heading_Control_Total_UL;
                                  /* Variable: Steering_Heading_Control_Total_UL
                                   * Referenced by:
                                   *   '<S362>/Constant'
                                   *   '<S362>/Saturation2'
                                   */
extern real_T Steering_Motor_Control_D;/* Variable: Steering_Motor_Control_D
                                        * Referenced by:
                                        *   '<S252>/Constant3'
                                        *   '<S273>/Constant3'
                                        *   '<S294>/Constant3'
                                        *   '<S315>/Constant3'
                                        */
extern real_T Steering_Motor_Control_D_FilterCoeff;
                               /* Variable: Steering_Motor_Control_D_FilterCoeff
                                * Referenced by:
                                *   '<S252>/Constant2'
                                *   '<S273>/Constant2'
                                *   '<S294>/Constant2'
                                *   '<S315>/Constant2'
                                */
extern real_T Steering_Motor_Control_D_LL;/* Variable: Steering_Motor_Control_D_LL
                                           * Referenced by:
                                           *   '<S252>/Saturation'
                                           *   '<S273>/Saturation'
                                           *   '<S294>/Saturation'
                                           *   '<S315>/Saturation'
                                           */
extern real_T Steering_Motor_Control_D_UL;/* Variable: Steering_Motor_Control_D_UL
                                           * Referenced by:
                                           *   '<S252>/Saturation'
                                           *   '<S273>/Saturation'
                                           *   '<S294>/Saturation'
                                           *   '<S315>/Saturation'
                                           */
extern real_T Steering_Motor_Control_I;/* Variable: Steering_Motor_Control_I
                                        * Referenced by:
                                        *   '<S252>/Gain2'
                                        *   '<S273>/Gain2'
                                        *   '<S294>/Gain2'
                                        *   '<S315>/Gain2'
                                        */
extern real_T Steering_Motor_Control_I_LL;/* Variable: Steering_Motor_Control_I_LL
                                           * Referenced by:
                                           *   '<S252>/Saturation1'
                                           *   '<S273>/Saturation1'
                                           *   '<S294>/Saturation1'
                                           *   '<S315>/Saturation1'
                                           */
extern real_T Steering_Motor_Control_I_UL;/* Variable: Steering_Motor_Control_I_UL
                                           * Referenced by:
                                           *   '<S252>/Saturation1'
                                           *   '<S273>/Saturation1'
                                           *   '<S294>/Saturation1'
                                           *   '<S315>/Saturation1'
                                           */
extern real_T Steering_Motor_Control_P;/* Variable: Steering_Motor_Control_P
                                        * Referenced by:
                                        *   '<S252>/Gain1'
                                        *   '<S273>/Gain1'
                                        *   '<S294>/Gain1'
                                        *   '<S315>/Gain1'
                                        */
extern real_T Steering_Relative_Cmd_Approach_Zero_Error_Thresh;
                   /* Variable: Steering_Relative_Cmd_Approach_Zero_Error_Thresh
                    * Referenced by: '<S344>/Constant5'
                    */
extern real_T Steering_Relative_Cmd_Approach_Zero_Final_Thresh;
                   /* Variable: Steering_Relative_Cmd_Approach_Zero_Final_Thresh
                    * Referenced by: '<S344>/Constant6'
                    */
extern real_T Steering_Relative_Cmd_NonZero_Error_Thresh;
                         /* Variable: Steering_Relative_Cmd_NonZero_Error_Thresh
                          * Referenced by: '<S344>/Constant9'
                          */
extern real_T Steering_Relative_Cmd_NonZero_Final_Scale_Factor;
                   /* Variable: Steering_Relative_Cmd_NonZero_Final_Scale_Factor
                    * Referenced by: '<S344>/Constant10'
                    */
extern real_T Steering_Relative_Cmd_Rate_Limit_Dec;
                               /* Variable: Steering_Relative_Cmd_Rate_Limit_Dec
                                * Referenced by: '<S344>/Constant1'
                                */
extern real_T Steering_Relative_Cmd_Rate_Limit_Inc;
                               /* Variable: Steering_Relative_Cmd_Rate_Limit_Inc
                                * Referenced by: '<S344>/Constant3'
                                */
extern real_T Steering_Relative_Gain;  /* Variable: Steering_Relative_Gain
                                        * Referenced by: '<S415>/Constant'
                                        */
extern real_T Steering_Twist_Gain;     /* Variable: Steering_Twist_Gain
                                        * Referenced by: '<S415>/Constant1'
                                        */
extern real_T TEST_CANdle_Flag;        /* Variable: TEST_CANdle_Flag
                                        * Referenced by: '<S3>/Constant2'
                                        */
extern real_T TEST_CANdle_LED_ID;      /* Variable: TEST_CANdle_LED_ID
                                        * Referenced by: '<S3>/Constant3'
                                        */
extern real_T TEST_Swerve_Mode_Override_Flag;
                                     /* Variable: TEST_Swerve_Mode_Override_Flag
                                      * Referenced by: '<S396>/Constant5'
                                      */
extern real_T TEST_Swerve_Mode_Steering;/* Variable: TEST_Swerve_Mode_Steering
                                         * Referenced by: '<S396>/Constant8'
                                         */
extern real_T TEST_Swerve_Mode_Translation;/* Variable: TEST_Swerve_Mode_Translation
                                            * Referenced by: '<S396>/Constant7'
                                            */
extern real_T Translation_Speed_Approach_Zero_Error_Thresh;
                       /* Variable: Translation_Speed_Approach_Zero_Error_Thresh
                        * Referenced by: '<S332>/Constant5'
                        */
extern real_T Translation_Speed_Approach_Zero_Final_Thresh;
                       /* Variable: Translation_Speed_Approach_Zero_Final_Thresh
                        * Referenced by: '<S332>/Constant6'
                        */
extern real_T Translation_Speed_NonZero_Error_Thresh;
                             /* Variable: Translation_Speed_NonZero_Error_Thresh
                              * Referenced by: '<S332>/Constant9'
                              */
extern real_T Translation_Speed_NonZero_Final_Scale_Factor;
                       /* Variable: Translation_Speed_NonZero_Final_Scale_Factor
                        * Referenced by: '<S332>/Constant10'
                        */
extern real_T Translation_Speed_Rate_Limit_Dec;
                                   /* Variable: Translation_Speed_Rate_Limit_Dec
                                    * Referenced by: '<S332>/Constant1'
                                    */
extern real_T Translation_Speed_Rate_Limit_Inc;
                                   /* Variable: Translation_Speed_Rate_Limit_Inc
                                    * Referenced by: '<S332>/Constant3'
                                    */
extern real_T Translation_Twist_Gain;  /* Variable: Translation_Twist_Gain
                                        * Referenced by: '<S416>/Gain'
                                        */
extern real_T Twist_Deadzone_neg;      /* Variable: Twist_Deadzone_neg
                                        * Referenced by:
                                        *   '<S415>/Dead Zone'
                                        *   '<S416>/Dead Zone'
                                        */
extern real_T Twist_Deadzone_pos;      /* Variable: Twist_Deadzone_pos
                                        * Referenced by:
                                        *   '<S415>/Dead Zone'
                                        *   '<S416>/Dead Zone'
                                        */
extern real_T Winch_Hold_DC;           /* Variable: Winch_Hold_DC
                                        * Referenced by: '<S14>/Constant2'
                                        */
extern real_T Winch_Rev_Target;        /* Variable: Winch_Rev_Target
                                        * Referenced by: '<S104>/Constant'
                                        */
extern real_T Winch_Spool_DC;          /* Variable: Winch_Spool_DC
                                        * Referenced by: '<S14>/Constant1'
                                        */
extern uint8_T TEST_Pipeline;          /* Variable: TEST_Pipeline
                                        * Referenced by: '<S24>/Constant22'
                                        */

/* Model entry point functions */
extern void Robot_Control_initialize(void);
extern void Robot_Control_step(void);
extern void Robot_Control_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Robot_Control_T *const Robot_Control_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S26>/Logical Operator10' : Unused code path elimination
 * Block '<S66>/Data Type Duplicate' : Unused code path elimination
 * Block '<S66>/Data Type Propagation' : Unused code path elimination
 * Block '<S79>/Data Type Duplicate' : Unused code path elimination
 * Block '<S79>/Data Type Propagation' : Unused code path elimination
 * Block '<S80>/FixPt Data Type Duplicate1' : Unused code path elimination
 * Block '<S82>/Data Type Duplicate' : Unused code path elimination
 * Block '<S82>/Data Type Propagation' : Unused code path elimination
 * Block '<S83>/Data Type Duplicate' : Unused code path elimination
 * Block '<S83>/Data Type Propagation' : Unused code path elimination
 * Block '<S73>/Data Type Duplicate' : Unused code path elimination
 * Block '<S73>/Data Type Propagation' : Unused code path elimination
 * Block '<S97>/Data Type Duplicate' : Unused code path elimination
 * Block '<S97>/Data Type Propagation' : Unused code path elimination
 * Block '<S98>/FixPt Data Type Duplicate1' : Unused code path elimination
 * Block '<S100>/Data Type Duplicate' : Unused code path elimination
 * Block '<S100>/Data Type Propagation' : Unused code path elimination
 * Block '<S91>/Data Type Duplicate' : Unused code path elimination
 * Block '<S91>/Data Type Propagation' : Unused code path elimination
 * Block '<S170>/Data Type Duplicate' : Unused code path elimination
 * Block '<S171>/Data Type Duplicate' : Unused code path elimination
 * Block '<S172>/Conversion' : Unused code path elimination
 * Block '<S172>/Data Type Duplicate' : Unused code path elimination
 * Block '<S173>/Data Type Duplicate' : Unused code path elimination
 * Block '<S131>/Data Type Duplicate' : Unused code path elimination
 * Block '<S132>/Data Type Duplicate' : Unused code path elimination
 * Block '<S133>/Data Type Duplicate' : Unused code path elimination
 * Block '<S134>/Data Type Duplicate' : Unused code path elimination
 * Block '<S135>/Data Type Duplicate' : Unused code path elimination
 * Block '<S136>/Data Type Duplicate' : Unused code path elimination
 * Block '<S137>/Data Type Duplicate' : Unused code path elimination
 * Block '<S138>/Conversion' : Unused code path elimination
 * Block '<S138>/Data Type Duplicate' : Unused code path elimination
 * Block '<S139>/Data Type Duplicate' : Unused code path elimination
 * Block '<S140>/Data Type Duplicate' : Unused code path elimination
 * Block '<S141>/Data Type Duplicate' : Unused code path elimination
 * Block '<S143>/Data Type Duplicate' : Unused code path elimination
 * Block '<S144>/Data Type Duplicate' : Unused code path elimination
 * Block '<S127>/G' : Unused code path elimination
 * Block '<S127>/H' : Unused code path elimination
 * Block '<S127>/N' : Unused code path elimination
 * Block '<S127>/P0' : Unused code path elimination
 * Block '<S127>/Q' : Unused code path elimination
 * Block '<S127>/R' : Unused code path elimination
 * Block '<S159>/CheckSignalProperties' : Unused code path elimination
 * Block '<S168>/CheckSignalProperties' : Unused code path elimination
 * Block '<S169>/CheckSignalProperties' : Unused code path elimination
 * Block '<S20>/Unit Delay1' : Unused code path elimination
 * Block '<S21>/Gain' : Unused code path elimination
 * Block '<S21>/Gain1' : Unused code path elimination
 * Block '<S21>/Scope' : Unused code path elimination
 * Block '<S197>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S201>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S207>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S241>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S257>/Data Type Duplicate' : Unused code path elimination
 * Block '<S257>/Data Type Propagation' : Unused code path elimination
 * Block '<S249>/Scope' : Unused code path elimination
 * Block '<S251>/Scope' : Unused code path elimination
 * Block '<S268>/Data Type Duplicate' : Unused code path elimination
 * Block '<S268>/Data Type Propagation' : Unused code path elimination
 * Block '<S252>/Scope' : Unused code path elimination
 * Block '<S278>/Data Type Duplicate' : Unused code path elimination
 * Block '<S278>/Data Type Propagation' : Unused code path elimination
 * Block '<S270>/Scope' : Unused code path elimination
 * Block '<S272>/Scope' : Unused code path elimination
 * Block '<S289>/Data Type Duplicate' : Unused code path elimination
 * Block '<S289>/Data Type Propagation' : Unused code path elimination
 * Block '<S273>/Scope' : Unused code path elimination
 * Block '<S299>/Data Type Duplicate' : Unused code path elimination
 * Block '<S299>/Data Type Propagation' : Unused code path elimination
 * Block '<S291>/Scope' : Unused code path elimination
 * Block '<S293>/Scope' : Unused code path elimination
 * Block '<S310>/Data Type Duplicate' : Unused code path elimination
 * Block '<S310>/Data Type Propagation' : Unused code path elimination
 * Block '<S294>/Scope' : Unused code path elimination
 * Block '<S320>/Data Type Duplicate' : Unused code path elimination
 * Block '<S320>/Data Type Propagation' : Unused code path elimination
 * Block '<S312>/Scope' : Unused code path elimination
 * Block '<S314>/Scope' : Unused code path elimination
 * Block '<S331>/Data Type Duplicate' : Unused code path elimination
 * Block '<S331>/Data Type Propagation' : Unused code path elimination
 * Block '<S315>/Scope' : Unused code path elimination
 * Block '<S342>/Data Type Duplicate' : Unused code path elimination
 * Block '<S342>/Data Type Propagation' : Unused code path elimination
 * Block '<S343>/FixPt Data Type Duplicate1' : Unused code path elimination
 * Block '<S352>/Data Type Duplicate' : Unused code path elimination
 * Block '<S352>/Data Type Propagation' : Unused code path elimination
 * Block '<S353>/FixPt Data Type Duplicate1' : Unused code path elimination
 * Block '<S359>/Data Type Duplicate' : Unused code path elimination
 * Block '<S359>/Data Type Propagation' : Unused code path elimination
 * Block '<S360>/FixPt Data Type Duplicate1' : Unused code path elimination
 * Block '<S366>/Data Type Duplicate' : Unused code path elimination
 * Block '<S366>/Data Type Propagation' : Unused code path elimination
 * Block '<S362>/Scope' : Unused code path elimination
 * Block '<S393>/Logical Operator10' : Unused code path elimination
 * Block '<S425>/Data Type Duplicate' : Unused code path elimination
 * Block '<S425>/Data Type Propagation' : Unused code path elimination
 * Block '<S432>/Data Type Duplicate' : Unused code path elimination
 * Block '<S432>/Data Type Propagation' : Unused code path elimination
 * Block '<S433>/FixPt Data Type Duplicate1' : Unused code path elimination
 * Block '<S25>/Signal Copy3' : Eliminate redundant signal conversion block
 * Block '<S25>/Signal Copy4' : Eliminate redundant signal conversion block
 * Block '<S25>/Signal Copy5' : Eliminate redundant signal conversion block
 * Block '<S170>/Conversion' : Eliminate redundant data type conversion
 * Block '<S171>/Conversion' : Eliminate redundant data type conversion
 * Block '<S173>/Conversion' : Eliminate redundant data type conversion
 * Block '<S127>/DataTypeConversionEnable' : Eliminate redundant data type conversion
 * Block '<S143>/Conversion' : Eliminate redundant data type conversion
 * Block '<S147>/Reshape' : Reshape block reduction
 * Block '<S127>/ReshapeX0' : Reshape block reduction
 * Block '<S127>/Reshapexhat' : Reshape block reduction
 * Block '<S17>/Signal Copy' : Eliminate redundant signal conversion block
 * Block '<S17>/Signal Copy1' : Eliminate redundant signal conversion block
 * Block '<S237>/Signal Copy' : Eliminate redundant signal conversion block
 * Block '<S23>/Signal Copy3' : Eliminate redundant signal conversion block
 * Block '<S23>/Signal Copy4' : Eliminate redundant signal conversion block
 * Block '<S23>/Signal Copy5' : Eliminate redundant signal conversion block
 * Block '<S26>/Constant2' : Unused code path elimination
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
 * '<Root>' : 'Robot_Control'
 * '<S1>'   : 'Robot_Control/Control_System'
 * '<S2>'   : 'Robot_Control/Control_System/Autonomous'
 * '<S3>'   : 'Robot_Control/Control_System/CANdle_LED_ID Calculation'
 * '<S4>'   : 'Robot_Control/Control_System/Compare To Zero'
 * '<S5>'   : 'Robot_Control/Control_System/Compare To Zero1'
 * '<S6>'   : 'Robot_Control/Control_System/Compare To Zero2'
 * '<S7>'   : 'Robot_Control/Control_System/Compare To Zero3'
 * '<S8>'   : 'Robot_Control/Control_System/Coral Arm Motor Control'
 * '<S9>'   : 'Robot_Control/Control_System/Debounce'
 * '<S10>'  : 'Robot_Control/Control_System/Debounce1'
 * '<S11>'  : 'Robot_Control/Control_System/Disabled'
 * '<S12>'  : 'Robot_Control/Control_System/Elevator Motor Control'
 * '<S13>'  : 'Robot_Control/Control_System/Elevator_Height_Pre_Processing'
 * '<S14>'  : 'Robot_Control/Control_System/End_Game'
 * '<S15>'  : 'Robot_Control/Control_System/Human_Input_Pre_Processing'
 * '<S16>'  : 'Robot_Control/Control_System/Internal Feedback'
 * '<S17>'  : 'Robot_Control/Control_System/Kalman_Filter'
 * '<S18>'  : 'Robot_Control/Control_System/Limelight_Tag_Corrections'
 * '<S19>'  : 'Robot_Control/Control_System/Merge'
 * '<S20>'  : 'Robot_Control/Control_System/Previous GameState'
 * '<S21>'  : 'Robot_Control/Control_System/Spline_Path_Following'
 * '<S22>'  : 'Robot_Control/Control_System/Swerve_Drive'
 * '<S23>'  : 'Robot_Control/Control_System/Teleop'
 * '<S24>'  : 'Robot_Control/Control_System/Test'
 * '<S25>'  : 'Robot_Control/Control_System/Autonomous/Subsystem'
 * '<S26>'  : 'Robot_Control/Control_System/Autonomous/Subsystem/April Tag Relative Errors'
 * '<S27>'  : 'Robot_Control/Control_System/Autonomous/Subsystem/Path ID Selection'
 * '<S28>'  : 'Robot_Control/Control_System/Autonomous/Subsystem/Reefscape Teleop'
 * '<S29>'  : 'Robot_Control/Control_System/Autonomous/Subsystem/Reefscape_Auto_Steps'
 * '<S30>'  : 'Robot_Control/Control_System/Autonomous/Subsystem/Swerve_Drive_Commands'
 * '<S31>'  : 'Robot_Control/Control_System/Autonomous/Subsystem/April Tag Relative Errors/Compare To Constant'
 * '<S32>'  : 'Robot_Control/Control_System/Autonomous/Subsystem/April Tag Relative Errors/Compare To Constant1'
 * '<S33>'  : 'Robot_Control/Control_System/Autonomous/Subsystem/April Tag Relative Errors/Compare To Constant10'
 * '<S34>'  : 'Robot_Control/Control_System/Autonomous/Subsystem/April Tag Relative Errors/Compare To Constant2'
 * '<S35>'  : 'Robot_Control/Control_System/Autonomous/Subsystem/April Tag Relative Errors/Compare To Constant3'
 * '<S36>'  : 'Robot_Control/Control_System/Autonomous/Subsystem/April Tag Relative Errors/Compare To Constant4'
 * '<S37>'  : 'Robot_Control/Control_System/Autonomous/Subsystem/April Tag Relative Errors/Compare To Constant5'
 * '<S38>'  : 'Robot_Control/Control_System/Autonomous/Subsystem/April Tag Relative Errors/Compare To Constant6'
 * '<S39>'  : 'Robot_Control/Control_System/Autonomous/Subsystem/April Tag Relative Errors/Compare To Constant7'
 * '<S40>'  : 'Robot_Control/Control_System/Autonomous/Subsystem/April Tag Relative Errors/Compare To Constant8'
 * '<S41>'  : 'Robot_Control/Control_System/Autonomous/Subsystem/April Tag Relative Errors/Compare To Constant9'
 * '<S42>'  : 'Robot_Control/Control_System/Autonomous/Subsystem/April Tag Relative Errors/Compare To Zero'
 * '<S43>'  : 'Robot_Control/Control_System/Autonomous/Subsystem/April Tag Relative Errors/Compare To Zero1'
 * '<S44>'  : 'Robot_Control/Control_System/Autonomous/Subsystem/April Tag Relative Errors/Compare To Zero2'
 * '<S45>'  : 'Robot_Control/Control_System/Autonomous/Subsystem/April Tag Relative Errors/Compare To Zero3'
 * '<S46>'  : 'Robot_Control/Control_System/Autonomous/Subsystem/April Tag Relative Errors/Compare To Zero4'
 * '<S47>'  : 'Robot_Control/Control_System/Autonomous/Subsystem/April Tag Relative Errors/Compare To Zero5'
 * '<S48>'  : 'Robot_Control/Control_System/Autonomous/Subsystem/April Tag Relative Errors/Compare To Zero9'
 * '<S49>'  : 'Robot_Control/Control_System/Autonomous/Subsystem/Path ID Selection/Compare To Constant'
 * '<S50>'  : 'Robot_Control/Control_System/Autonomous/Subsystem/Path ID Selection/Compare To Constant2'
 * '<S51>'  : 'Robot_Control/Control_System/Autonomous/Subsystem/Reefscape Teleop/Detect Increase'
 * '<S52>'  : 'Robot_Control/Control_System/Autonomous/Subsystem/Reefscape Teleop/Detect Increase1'
 * '<S53>'  : 'Robot_Control/Control_System/Autonomous/Subsystem/Reefscape Teleop/Detect Increase10'
 * '<S54>'  : 'Robot_Control/Control_System/Autonomous/Subsystem/Reefscape Teleop/Detect Increase11'
 * '<S55>'  : 'Robot_Control/Control_System/Autonomous/Subsystem/Reefscape Teleop/Detect Increase12'
 * '<S56>'  : 'Robot_Control/Control_System/Autonomous/Subsystem/Reefscape Teleop/Detect Increase13'
 * '<S57>'  : 'Robot_Control/Control_System/Autonomous/Subsystem/Reefscape Teleop/Detect Increase2'
 * '<S58>'  : 'Robot_Control/Control_System/Autonomous/Subsystem/Reefscape Teleop/Detect Increase3'
 * '<S59>'  : 'Robot_Control/Control_System/Autonomous/Subsystem/Reefscape Teleop/Detect Increase4'
 * '<S60>'  : 'Robot_Control/Control_System/Autonomous/Subsystem/Reefscape Teleop/Detect Increase5'
 * '<S61>'  : 'Robot_Control/Control_System/Autonomous/Subsystem/Reefscape Teleop/Detect Increase6'
 * '<S62>'  : 'Robot_Control/Control_System/Autonomous/Subsystem/Reefscape Teleop/Detect Increase7'
 * '<S63>'  : 'Robot_Control/Control_System/Autonomous/Subsystem/Reefscape Teleop/Detect Increase8'
 * '<S64>'  : 'Robot_Control/Control_System/Autonomous/Subsystem/Reefscape Teleop/Detect Increase9'
 * '<S65>'  : 'Robot_Control/Control_System/Autonomous/Subsystem/Reefscape Teleop/Reefscape_Chart'
 * '<S66>'  : 'Robot_Control/Control_System/Autonomous/Subsystem/Swerve_Drive_Commands/Saturation Dynamic'
 * '<S67>'  : 'Robot_Control/Control_System/Coral Arm Motor Control/Compare To Constant'
 * '<S68>'  : 'Robot_Control/Control_System/Coral Arm Motor Control/Compare To Constant1'
 * '<S69>'  : 'Robot_Control/Control_System/Coral Arm Motor Control/Compare To Constant2'
 * '<S70>'  : 'Robot_Control/Control_System/Coral Arm Motor Control/Compare To Constant3'
 * '<S71>'  : 'Robot_Control/Control_System/Coral Arm Motor Control/Complex Rate Limit'
 * '<S72>'  : 'Robot_Control/Control_System/Coral Arm Motor Control/PI and Integral Enable'
 * '<S73>'  : 'Robot_Control/Control_System/Coral Arm Motor Control/Saturation Dynamic'
 * '<S74>'  : 'Robot_Control/Control_System/Coral Arm Motor Control/Complex Rate Limit/Compare To Zero'
 * '<S75>'  : 'Robot_Control/Control_System/Coral Arm Motor Control/Complex Rate Limit/Compare To Zero1'
 * '<S76>'  : 'Robot_Control/Control_System/Coral Arm Motor Control/Complex Rate Limit/Compare To Zero2'
 * '<S77>'  : 'Robot_Control/Control_System/Coral Arm Motor Control/Complex Rate Limit/Compare To Zero3'
 * '<S78>'  : 'Robot_Control/Control_System/Coral Arm Motor Control/Complex Rate Limit/Discrete Rate Limiter'
 * '<S79>'  : 'Robot_Control/Control_System/Coral Arm Motor Control/Complex Rate Limit/Discrete Rate Limiter/Saturation Dynamic'
 * '<S80>'  : 'Robot_Control/Control_System/Coral Arm Motor Control/Complex Rate Limit/Discrete Rate Limiter/Unit Delay External IC'
 * '<S81>'  : 'Robot_Control/Control_System/Coral Arm Motor Control/PI and Integral Enable/Detect Increase'
 * '<S82>'  : 'Robot_Control/Control_System/Coral Arm Motor Control/PI and Integral Enable/Saturation Dynamic'
 * '<S83>'  : 'Robot_Control/Control_System/Coral Arm Motor Control/PI and Integral Enable/Saturation Dynamic1'
 * '<S84>'  : 'Robot_Control/Control_System/Debounce/Debounce'
 * '<S85>'  : 'Robot_Control/Control_System/Debounce1/Debounce'
 * '<S86>'  : 'Robot_Control/Control_System/Elevator Motor Control/Compare To Constant'
 * '<S87>'  : 'Robot_Control/Control_System/Elevator Motor Control/Compare To Constant2'
 * '<S88>'  : 'Robot_Control/Control_System/Elevator Motor Control/Compare To Zero'
 * '<S89>'  : 'Robot_Control/Control_System/Elevator Motor Control/Complex Rate Limit'
 * '<S90>'  : 'Robot_Control/Control_System/Elevator Motor Control/PI and Integral Enable'
 * '<S91>'  : 'Robot_Control/Control_System/Elevator Motor Control/Saturation Dynamic'
 * '<S92>'  : 'Robot_Control/Control_System/Elevator Motor Control/Complex Rate Limit/Compare To Zero'
 * '<S93>'  : 'Robot_Control/Control_System/Elevator Motor Control/Complex Rate Limit/Compare To Zero1'
 * '<S94>'  : 'Robot_Control/Control_System/Elevator Motor Control/Complex Rate Limit/Compare To Zero2'
 * '<S95>'  : 'Robot_Control/Control_System/Elevator Motor Control/Complex Rate Limit/Compare To Zero3'
 * '<S96>'  : 'Robot_Control/Control_System/Elevator Motor Control/Complex Rate Limit/Discrete Rate Limiter'
 * '<S97>'  : 'Robot_Control/Control_System/Elevator Motor Control/Complex Rate Limit/Discrete Rate Limiter/Saturation Dynamic'
 * '<S98>'  : 'Robot_Control/Control_System/Elevator Motor Control/Complex Rate Limit/Discrete Rate Limiter/Unit Delay External IC'
 * '<S99>'  : 'Robot_Control/Control_System/Elevator Motor Control/PI and Integral Enable/Detect Increase'
 * '<S100>' : 'Robot_Control/Control_System/Elevator Motor Control/PI and Integral Enable/Saturation Dynamic'
 * '<S101>' : 'Robot_Control/Control_System/Elevator_Height_Pre_Processing/Detect Decrease'
 * '<S102>' : 'Robot_Control/Control_System/Elevator_Height_Pre_Processing/Detect Decrease1'
 * '<S103>' : 'Robot_Control/Control_System/Elevator_Height_Pre_Processing/Detect Increase'
 * '<S104>' : 'Robot_Control/Control_System/End_Game/Compare To Constant'
 * '<S105>' : 'Robot_Control/Control_System/End_Game/Compare To Constant1'
 * '<S106>' : 'Robot_Control/Control_System/End_Game/Compare To Constant2'
 * '<S107>' : 'Robot_Control/Control_System/End_Game/Compare To Zero'
 * '<S108>' : 'Robot_Control/Control_System/Human_Input_Pre_Processing/Compare To Constant'
 * '<S109>' : 'Robot_Control/Control_System/Human_Input_Pre_Processing/Compare To Constant1'
 * '<S110>' : 'Robot_Control/Control_System/Human_Input_Pre_Processing/Compare To Constant2'
 * '<S111>' : 'Robot_Control/Control_System/Human_Input_Pre_Processing/Compare To Constant3'
 * '<S112>' : 'Robot_Control/Control_System/Human_Input_Pre_Processing/Compare To Constant4'
 * '<S113>' : 'Robot_Control/Control_System/Human_Input_Pre_Processing/Compare To Constant5'
 * '<S114>' : 'Robot_Control/Control_System/Human_Input_Pre_Processing/Compare To Constant6'
 * '<S115>' : 'Robot_Control/Control_System/Human_Input_Pre_Processing/Compare To Constant7'
 * '<S116>' : 'Robot_Control/Control_System/Human_Input_Pre_Processing/Compare To Constant8'
 * '<S117>' : 'Robot_Control/Control_System/Human_Input_Pre_Processing/Compare To Zero1'
 * '<S118>' : 'Robot_Control/Control_System/Human_Input_Pre_Processing/Compare To Zero14'
 * '<S119>' : 'Robot_Control/Control_System/Human_Input_Pre_Processing/Compare To Zero15'
 * '<S120>' : 'Robot_Control/Control_System/Human_Input_Pre_Processing/Compare To Zero16'
 * '<S121>' : 'Robot_Control/Control_System/Human_Input_Pre_Processing/Compare To Zero17'
 * '<S122>' : 'Robot_Control/Control_System/Human_Input_Pre_Processing/Compare To Zero6'
 * '<S123>' : 'Robot_Control/Control_System/Human_Input_Pre_Processing/Compare To Zero8'
 * '<S124>' : 'Robot_Control/Control_System/Human_Input_Pre_Processing/Detect Increase'
 * '<S125>' : 'Robot_Control/Control_System/Human_Input_Pre_Processing/Detect Increase1'
 * '<S126>' : 'Robot_Control/Control_System/Human_Input_Pre_Processing/Detect Increase2'
 * '<S127>' : 'Robot_Control/Control_System/Kalman_Filter/Kalman Filter'
 * '<S128>' : 'Robot_Control/Control_System/Kalman_Filter/Kalman Filter/CalculatePL'
 * '<S129>' : 'Robot_Control/Control_System/Kalman_Filter/Kalman Filter/CalculateYhat'
 * '<S130>' : 'Robot_Control/Control_System/Kalman_Filter/Kalman Filter/CovarianceOutputConfigurator'
 * '<S131>' : 'Robot_Control/Control_System/Kalman_Filter/Kalman Filter/DataTypeConversionA'
 * '<S132>' : 'Robot_Control/Control_System/Kalman_Filter/Kalman Filter/DataTypeConversionB'
 * '<S133>' : 'Robot_Control/Control_System/Kalman_Filter/Kalman Filter/DataTypeConversionC'
 * '<S134>' : 'Robot_Control/Control_System/Kalman_Filter/Kalman Filter/DataTypeConversionD'
 * '<S135>' : 'Robot_Control/Control_System/Kalman_Filter/Kalman Filter/DataTypeConversionG'
 * '<S136>' : 'Robot_Control/Control_System/Kalman_Filter/Kalman Filter/DataTypeConversionH'
 * '<S137>' : 'Robot_Control/Control_System/Kalman_Filter/Kalman Filter/DataTypeConversionN'
 * '<S138>' : 'Robot_Control/Control_System/Kalman_Filter/Kalman Filter/DataTypeConversionP'
 * '<S139>' : 'Robot_Control/Control_System/Kalman_Filter/Kalman Filter/DataTypeConversionP0'
 * '<S140>' : 'Robot_Control/Control_System/Kalman_Filter/Kalman Filter/DataTypeConversionQ'
 * '<S141>' : 'Robot_Control/Control_System/Kalman_Filter/Kalman Filter/DataTypeConversionR'
 * '<S142>' : 'Robot_Control/Control_System/Kalman_Filter/Kalman Filter/DataTypeConversionReset'
 * '<S143>' : 'Robot_Control/Control_System/Kalman_Filter/Kalman Filter/DataTypeConversionX'
 * '<S144>' : 'Robot_Control/Control_System/Kalman_Filter/Kalman Filter/DataTypeConversionX0'
 * '<S145>' : 'Robot_Control/Control_System/Kalman_Filter/Kalman Filter/DataTypeConversionu'
 * '<S146>' : 'Robot_Control/Control_System/Kalman_Filter/Kalman Filter/MemoryP'
 * '<S147>' : 'Robot_Control/Control_System/Kalman_Filter/Kalman Filter/Observer'
 * '<S148>' : 'Robot_Control/Control_System/Kalman_Filter/Kalman Filter/ReducedQRN'
 * '<S149>' : 'Robot_Control/Control_System/Kalman_Filter/Kalman Filter/Reset'
 * '<S150>' : 'Robot_Control/Control_System/Kalman_Filter/Kalman Filter/Reshapeyhat'
 * '<S151>' : 'Robot_Control/Control_System/Kalman_Filter/Kalman Filter/ScalarExpansionP0'
 * '<S152>' : 'Robot_Control/Control_System/Kalman_Filter/Kalman Filter/ScalarExpansionQ'
 * '<S153>' : 'Robot_Control/Control_System/Kalman_Filter/Kalman Filter/ScalarExpansionR'
 * '<S154>' : 'Robot_Control/Control_System/Kalman_Filter/Kalman Filter/UseCurrentEstimator'
 * '<S155>' : 'Robot_Control/Control_System/Kalman_Filter/Kalman Filter/checkA'
 * '<S156>' : 'Robot_Control/Control_System/Kalman_Filter/Kalman Filter/checkB'
 * '<S157>' : 'Robot_Control/Control_System/Kalman_Filter/Kalman Filter/checkC'
 * '<S158>' : 'Robot_Control/Control_System/Kalman_Filter/Kalman Filter/checkD'
 * '<S159>' : 'Robot_Control/Control_System/Kalman_Filter/Kalman Filter/checkEnable'
 * '<S160>' : 'Robot_Control/Control_System/Kalman_Filter/Kalman Filter/checkG'
 * '<S161>' : 'Robot_Control/Control_System/Kalman_Filter/Kalman Filter/checkH'
 * '<S162>' : 'Robot_Control/Control_System/Kalman_Filter/Kalman Filter/checkN'
 * '<S163>' : 'Robot_Control/Control_System/Kalman_Filter/Kalman Filter/checkP0'
 * '<S164>' : 'Robot_Control/Control_System/Kalman_Filter/Kalman Filter/checkQ'
 * '<S165>' : 'Robot_Control/Control_System/Kalman_Filter/Kalman Filter/checkR'
 * '<S166>' : 'Robot_Control/Control_System/Kalman_Filter/Kalman Filter/checkReset'
 * '<S167>' : 'Robot_Control/Control_System/Kalman_Filter/Kalman Filter/checkX0'
 * '<S168>' : 'Robot_Control/Control_System/Kalman_Filter/Kalman Filter/checku'
 * '<S169>' : 'Robot_Control/Control_System/Kalman_Filter/Kalman Filter/checky'
 * '<S170>' : 'Robot_Control/Control_System/Kalman_Filter/Kalman Filter/CalculatePL/DataTypeConversionL'
 * '<S171>' : 'Robot_Control/Control_System/Kalman_Filter/Kalman Filter/CalculatePL/DataTypeConversionM'
 * '<S172>' : 'Robot_Control/Control_System/Kalman_Filter/Kalman Filter/CalculatePL/DataTypeConversionP'
 * '<S173>' : 'Robot_Control/Control_System/Kalman_Filter/Kalman Filter/CalculatePL/DataTypeConversionZ'
 * '<S174>' : 'Robot_Control/Control_System/Kalman_Filter/Kalman Filter/CalculatePL/Ground'
 * '<S175>' : 'Robot_Control/Control_System/Kalman_Filter/Kalman Filter/CalculateYhat/Ground'
 * '<S176>' : 'Robot_Control/Control_System/Kalman_Filter/Kalman Filter/CovarianceOutputConfigurator/decideOutput'
 * '<S177>' : 'Robot_Control/Control_System/Kalman_Filter/Kalman Filter/CovarianceOutputConfigurator/decideOutput/SqrtUsedFcn'
 * '<S178>' : 'Robot_Control/Control_System/Kalman_Filter/Kalman Filter/Observer/MeasurementUpdate'
 * '<S179>' : 'Robot_Control/Control_System/Kalman_Filter/Kalman Filter/ReducedQRN/Ground'
 * '<S180>' : 'Robot_Control/Control_System/Kalman_Filter/Kalman Filter/UseCurrentEstimator/Enabled Subsystem'
 * '<S181>' : 'Robot_Control/Control_System/Previous GameState/Chart'
 * '<S182>' : 'Robot_Control/Control_System/Spline_Path_Following/Pass Through'
 * '<S183>' : 'Robot_Control/Control_System/Spline_Path_Following/Spline Path Following Enabled'
 * '<S184>' : 'Robot_Control/Control_System/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses'
 * '<S185>' : 'Robot_Control/Control_System/Spline_Path_Following/Spline Path Following Enabled/Find_Targets'
 * '<S186>' : 'Robot_Control/Control_System/Spline_Path_Following/Spline Path Following Enabled/Steering_and_Drive_Commands'
 * '<S187>' : 'Robot_Control/Control_System/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/If Action Subsystem'
 * '<S188>' : 'Robot_Control/Control_System/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification'
 * '<S189>' : 'Robot_Control/Control_System/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning'
 * '<S190>' : 'Robot_Control/Control_System/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Escape_Auto_Driving'
 * '<S191>' : 'Robot_Control/Control_System/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid'
 * '<S192>' : 'Robot_Control/Control_System/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Catch-all if not the last point and not in the circle'
 * '<S193>' : 'Robot_Control/Control_System/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Circle_Check_Valid'
 * '<S194>' : 'Robot_Control/Control_System/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Increment_If_Rectangle_Check'
 * '<S195>' : 'Robot_Control/Control_System/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Circle_Check_Valid/Increment_Search'
 * '<S196>' : 'Robot_Control/Control_System/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Circle_Check_Valid/Is_Last_Point'
 * '<S197>' : 'Robot_Control/Control_System/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Circle_Check_Valid/Increment_Search/Increment Real World'
 * '<S198>' : 'Robot_Control/Control_System/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Circle_Check_Valid/Is_Last_Point/Compare To Constant'
 * '<S199>' : 'Robot_Control/Control_System/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Circle_Check_Valid/Is_Last_Point/Robot_Is_At_Destination'
 * '<S200>' : 'Robot_Control/Control_System/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Circle_Check_Valid/Is_Last_Point/Straight_Line_Path_To_End'
 * '<S201>' : 'Robot_Control/Control_System/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Increment_If_Rectangle_Check/Increment Real World'
 * '<S202>' : 'Robot_Control/Control_System/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Increment_If_Rectangle_Check/Subsystem Reference'
 * '<S203>' : 'Robot_Control/Control_System/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Increment_If_Rectangle_Check/Subsystem Reference/Compare To Constant'
 * '<S204>' : 'Robot_Control/Control_System/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Increment_If_Rectangle_Check/Subsystem Reference/Compare To Constant1'
 * '<S205>' : 'Robot_Control/Control_System/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Make_Knots'
 * '<S206>' : 'Robot_Control/Control_System/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning'
 * '<S207>' : 'Robot_Control/Control_System/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Make_Knots/Decrement Real World'
 * '<S208>' : 'Robot_Control/Control_System/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Make_Knots/Find_Control_Pose'
 * '<S209>' : 'Robot_Control/Control_System/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Make_Knots/Find_Control_Pose1'
 * '<S210>' : 'Robot_Control/Control_System/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop'
 * '<S211>' : 'Robot_Control/Control_System/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Compare To Constant'
 * '<S212>' : 'Robot_Control/Control_System/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve'
 * '<S213>' : 'Robot_Control/Control_System/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Find_Point_Coefficients'
 * '<S214>' : 'Robot_Control/Control_System/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve'
 * '<S215>' : 'Robot_Control/Control_System/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Acc'
 * '<S216>' : 'Robot_Control/Control_System/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Pos'
 * '<S217>' : 'Robot_Control/Control_System/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Vel'
 * '<S218>' : 'Robot_Control/Control_System/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Curvature'
 * '<S219>' : 'Robot_Control/Control_System/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_U_And_Powers'
 * '<S220>' : 'Robot_Control/Control_System/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Acc/Subsystem Reference'
 * '<S221>' : 'Robot_Control/Control_System/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Acc/ddA'
 * '<S222>' : 'Robot_Control/Control_System/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Acc/ddB'
 * '<S223>' : 'Robot_Control/Control_System/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Acc/ddC'
 * '<S224>' : 'Robot_Control/Control_System/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Pos/A'
 * '<S225>' : 'Robot_Control/Control_System/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Pos/B'
 * '<S226>' : 'Robot_Control/Control_System/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Pos/C'
 * '<S227>' : 'Robot_Control/Control_System/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Pos/Subsystem Reference'
 * '<S228>' : 'Robot_Control/Control_System/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Vel/Subsystem Reference'
 * '<S229>' : 'Robot_Control/Control_System/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Vel/dA'
 * '<S230>' : 'Robot_Control/Control_System/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Vel/dB'
 * '<S231>' : 'Robot_Control/Control_System/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Vel/dC'
 * '<S232>' : 'Robot_Control/Control_System/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Curvature/MATLAB Function'
 * '<S233>' : 'Robot_Control/Control_System/Spline_Path_Following/Spline Path Following Enabled/Find_Targets/Distance Along Curve'
 * '<S234>' : 'Robot_Control/Control_System/Spline_Path_Following/Spline Path Following Enabled/Find_Targets/Find closest index to curve'
 * '<S235>' : 'Robot_Control/Control_System/Spline_Path_Following/Spline Path Following Enabled/Find_Targets/Find first index that meets distance target'
 * '<S236>' : 'Robot_Control/Control_System/Spline_Path_Following/Spline Path Following Enabled/Find_Targets/Find velocity and heading'
 * '<S237>' : 'Robot_Control/Control_System/Spline_Path_Following/Spline Path Following Enabled/Find_Targets/Heading'
 * '<S238>' : 'Robot_Control/Control_System/Spline_Path_Following/Spline Path Following Enabled/Find_Targets/Velocity'
 * '<S239>' : 'Robot_Control/Control_System/Spline_Path_Following/Spline Path Following Enabled/Find_Targets/Find velocity and heading/Dynamic Lookup Tables'
 * '<S240>' : 'Robot_Control/Control_System/Spline_Path_Following/Spline Path Following Enabled/Find_Targets/Find velocity and heading/Latch'
 * '<S241>' : 'Robot_Control/Control_System/Spline_Path_Following/Spline Path Following Enabled/Find_Targets/Find velocity and heading/Dynamic Lookup Tables/Decrement'
 * '<S242>' : 'Robot_Control/Control_System/Spline_Path_Following/Spline Path Following Enabled/Steering_and_Drive_Commands/Translation Angle'
 * '<S243>' : 'Robot_Control/Control_System/Swerve_Drive/Swerve_Drive_Module'
 * '<S244>' : 'Robot_Control/Control_System/Swerve_Drive/Swerve_Drive_Module1'
 * '<S245>' : 'Robot_Control/Control_System/Swerve_Drive/Swerve_Drive_Module2'
 * '<S246>' : 'Robot_Control/Control_System/Swerve_Drive/Swerve_Drive_Module3'
 * '<S247>' : 'Robot_Control/Control_System/Swerve_Drive/Wheel Module Speed and Angle'
 * '<S248>' : 'Robot_Control/Control_System/Swerve_Drive/Swerve_Drive_Module/Direction Change Drive Reduction Factor'
 * '<S249>' : 'Robot_Control/Control_System/Swerve_Drive/Swerve_Drive_Module/Feed Forward plus PID and Integral Enable'
 * '<S250>' : 'Robot_Control/Control_System/Swerve_Drive/Swerve_Drive_Module/Optimize'
 * '<S251>' : 'Robot_Control/Control_System/Swerve_Drive/Swerve_Drive_Module/Steering Module Error Drive Reduction Factor'
 * '<S252>' : 'Robot_Control/Control_System/Swerve_Drive/Swerve_Drive_Module/Steering with Angle Error Modulus PID'
 * '<S253>' : 'Robot_Control/Control_System/Swerve_Drive/Swerve_Drive_Module/Tangential_Velocity_To_RPM'
 * '<S254>' : 'Robot_Control/Control_System/Swerve_Drive/Swerve_Drive_Module/Direction Change Drive Reduction Factor/Compare To Constant'
 * '<S255>' : 'Robot_Control/Control_System/Swerve_Drive/Swerve_Drive_Module/Feed Forward plus PID and Integral Enable/Difference'
 * '<S256>' : 'Robot_Control/Control_System/Swerve_Drive/Swerve_Drive_Module/Feed Forward plus PID and Integral Enable/Low_Pass_Filter'
 * '<S257>' : 'Robot_Control/Control_System/Swerve_Drive/Swerve_Drive_Module/Feed Forward plus PID and Integral Enable/Saturation Dynamic'
 * '<S258>' : 'Robot_Control/Control_System/Swerve_Drive/Swerve_Drive_Module/Optimize/Compare To Constant'
 * '<S259>' : 'Robot_Control/Control_System/Swerve_Drive/Swerve_Drive_Module/Optimize/Minus1'
 * '<S260>' : 'Robot_Control/Control_System/Swerve_Drive/Swerve_Drive_Module/Optimize/RotateBy'
 * '<S261>' : 'Robot_Control/Control_System/Swerve_Drive/Swerve_Drive_Module/Optimize/Minus1/RotateBy'
 * '<S262>' : 'Robot_Control/Control_System/Swerve_Drive/Swerve_Drive_Module/Optimize/Minus1/RotateBy/Compare To Constant'
 * '<S263>' : 'Robot_Control/Control_System/Swerve_Drive/Swerve_Drive_Module/Optimize/RotateBy/Compare To Constant'
 * '<S264>' : 'Robot_Control/Control_System/Swerve_Drive/Swerve_Drive_Module/Steering Module Error Drive Reduction Factor/Angle Modulus to plus or minus pi over two'
 * '<S265>' : 'Robot_Control/Control_System/Swerve_Drive/Swerve_Drive_Module/Steering with Angle Error Modulus PID/Angle Modulus'
 * '<S266>' : 'Robot_Control/Control_System/Swerve_Drive/Swerve_Drive_Module/Steering with Angle Error Modulus PID/Difference'
 * '<S267>' : 'Robot_Control/Control_System/Swerve_Drive/Swerve_Drive_Module/Steering with Angle Error Modulus PID/Low_Pass_Filter'
 * '<S268>' : 'Robot_Control/Control_System/Swerve_Drive/Swerve_Drive_Module/Steering with Angle Error Modulus PID/Saturation Dynamic'
 * '<S269>' : 'Robot_Control/Control_System/Swerve_Drive/Swerve_Drive_Module1/Direction Change Drive Reduction Factor'
 * '<S270>' : 'Robot_Control/Control_System/Swerve_Drive/Swerve_Drive_Module1/Feed Forward plus PID and Integral Enable'
 * '<S271>' : 'Robot_Control/Control_System/Swerve_Drive/Swerve_Drive_Module1/Optimize'
 * '<S272>' : 'Robot_Control/Control_System/Swerve_Drive/Swerve_Drive_Module1/Steering Module Error Drive Reduction Factor'
 * '<S273>' : 'Robot_Control/Control_System/Swerve_Drive/Swerve_Drive_Module1/Steering with Angle Error Modulus PID'
 * '<S274>' : 'Robot_Control/Control_System/Swerve_Drive/Swerve_Drive_Module1/Tangential_Velocity_To_RPM'
 * '<S275>' : 'Robot_Control/Control_System/Swerve_Drive/Swerve_Drive_Module1/Direction Change Drive Reduction Factor/Compare To Constant'
 * '<S276>' : 'Robot_Control/Control_System/Swerve_Drive/Swerve_Drive_Module1/Feed Forward plus PID and Integral Enable/Difference'
 * '<S277>' : 'Robot_Control/Control_System/Swerve_Drive/Swerve_Drive_Module1/Feed Forward plus PID and Integral Enable/Low_Pass_Filter'
 * '<S278>' : 'Robot_Control/Control_System/Swerve_Drive/Swerve_Drive_Module1/Feed Forward plus PID and Integral Enable/Saturation Dynamic'
 * '<S279>' : 'Robot_Control/Control_System/Swerve_Drive/Swerve_Drive_Module1/Optimize/Compare To Constant'
 * '<S280>' : 'Robot_Control/Control_System/Swerve_Drive/Swerve_Drive_Module1/Optimize/Minus1'
 * '<S281>' : 'Robot_Control/Control_System/Swerve_Drive/Swerve_Drive_Module1/Optimize/RotateBy'
 * '<S282>' : 'Robot_Control/Control_System/Swerve_Drive/Swerve_Drive_Module1/Optimize/Minus1/RotateBy'
 * '<S283>' : 'Robot_Control/Control_System/Swerve_Drive/Swerve_Drive_Module1/Optimize/Minus1/RotateBy/Compare To Constant'
 * '<S284>' : 'Robot_Control/Control_System/Swerve_Drive/Swerve_Drive_Module1/Optimize/RotateBy/Compare To Constant'
 * '<S285>' : 'Robot_Control/Control_System/Swerve_Drive/Swerve_Drive_Module1/Steering Module Error Drive Reduction Factor/Angle Modulus to plus or minus pi over two'
 * '<S286>' : 'Robot_Control/Control_System/Swerve_Drive/Swerve_Drive_Module1/Steering with Angle Error Modulus PID/Angle Modulus'
 * '<S287>' : 'Robot_Control/Control_System/Swerve_Drive/Swerve_Drive_Module1/Steering with Angle Error Modulus PID/Difference'
 * '<S288>' : 'Robot_Control/Control_System/Swerve_Drive/Swerve_Drive_Module1/Steering with Angle Error Modulus PID/Low_Pass_Filter'
 * '<S289>' : 'Robot_Control/Control_System/Swerve_Drive/Swerve_Drive_Module1/Steering with Angle Error Modulus PID/Saturation Dynamic'
 * '<S290>' : 'Robot_Control/Control_System/Swerve_Drive/Swerve_Drive_Module2/Direction Change Drive Reduction Factor'
 * '<S291>' : 'Robot_Control/Control_System/Swerve_Drive/Swerve_Drive_Module2/Feed Forward plus PID and Integral Enable'
 * '<S292>' : 'Robot_Control/Control_System/Swerve_Drive/Swerve_Drive_Module2/Optimize'
 * '<S293>' : 'Robot_Control/Control_System/Swerve_Drive/Swerve_Drive_Module2/Steering Module Error Drive Reduction Factor'
 * '<S294>' : 'Robot_Control/Control_System/Swerve_Drive/Swerve_Drive_Module2/Steering with Angle Error Modulus PID'
 * '<S295>' : 'Robot_Control/Control_System/Swerve_Drive/Swerve_Drive_Module2/Tangential_Velocity_To_RPM'
 * '<S296>' : 'Robot_Control/Control_System/Swerve_Drive/Swerve_Drive_Module2/Direction Change Drive Reduction Factor/Compare To Constant'
 * '<S297>' : 'Robot_Control/Control_System/Swerve_Drive/Swerve_Drive_Module2/Feed Forward plus PID and Integral Enable/Difference'
 * '<S298>' : 'Robot_Control/Control_System/Swerve_Drive/Swerve_Drive_Module2/Feed Forward plus PID and Integral Enable/Low_Pass_Filter'
 * '<S299>' : 'Robot_Control/Control_System/Swerve_Drive/Swerve_Drive_Module2/Feed Forward plus PID and Integral Enable/Saturation Dynamic'
 * '<S300>' : 'Robot_Control/Control_System/Swerve_Drive/Swerve_Drive_Module2/Optimize/Compare To Constant'
 * '<S301>' : 'Robot_Control/Control_System/Swerve_Drive/Swerve_Drive_Module2/Optimize/Minus1'
 * '<S302>' : 'Robot_Control/Control_System/Swerve_Drive/Swerve_Drive_Module2/Optimize/RotateBy'
 * '<S303>' : 'Robot_Control/Control_System/Swerve_Drive/Swerve_Drive_Module2/Optimize/Minus1/RotateBy'
 * '<S304>' : 'Robot_Control/Control_System/Swerve_Drive/Swerve_Drive_Module2/Optimize/Minus1/RotateBy/Compare To Constant'
 * '<S305>' : 'Robot_Control/Control_System/Swerve_Drive/Swerve_Drive_Module2/Optimize/RotateBy/Compare To Constant'
 * '<S306>' : 'Robot_Control/Control_System/Swerve_Drive/Swerve_Drive_Module2/Steering Module Error Drive Reduction Factor/Angle Modulus to plus or minus pi over two'
 * '<S307>' : 'Robot_Control/Control_System/Swerve_Drive/Swerve_Drive_Module2/Steering with Angle Error Modulus PID/Angle Modulus'
 * '<S308>' : 'Robot_Control/Control_System/Swerve_Drive/Swerve_Drive_Module2/Steering with Angle Error Modulus PID/Difference'
 * '<S309>' : 'Robot_Control/Control_System/Swerve_Drive/Swerve_Drive_Module2/Steering with Angle Error Modulus PID/Low_Pass_Filter'
 * '<S310>' : 'Robot_Control/Control_System/Swerve_Drive/Swerve_Drive_Module2/Steering with Angle Error Modulus PID/Saturation Dynamic'
 * '<S311>' : 'Robot_Control/Control_System/Swerve_Drive/Swerve_Drive_Module3/Direction Change Drive Reduction Factor'
 * '<S312>' : 'Robot_Control/Control_System/Swerve_Drive/Swerve_Drive_Module3/Feed Forward plus PID and Integral Enable'
 * '<S313>' : 'Robot_Control/Control_System/Swerve_Drive/Swerve_Drive_Module3/Optimize'
 * '<S314>' : 'Robot_Control/Control_System/Swerve_Drive/Swerve_Drive_Module3/Steering Module Error Drive Reduction Factor'
 * '<S315>' : 'Robot_Control/Control_System/Swerve_Drive/Swerve_Drive_Module3/Steering with Angle Error Modulus PID'
 * '<S316>' : 'Robot_Control/Control_System/Swerve_Drive/Swerve_Drive_Module3/Tangential_Velocity_To_RPM'
 * '<S317>' : 'Robot_Control/Control_System/Swerve_Drive/Swerve_Drive_Module3/Direction Change Drive Reduction Factor/Compare To Constant'
 * '<S318>' : 'Robot_Control/Control_System/Swerve_Drive/Swerve_Drive_Module3/Feed Forward plus PID and Integral Enable/Difference'
 * '<S319>' : 'Robot_Control/Control_System/Swerve_Drive/Swerve_Drive_Module3/Feed Forward plus PID and Integral Enable/Low_Pass_Filter'
 * '<S320>' : 'Robot_Control/Control_System/Swerve_Drive/Swerve_Drive_Module3/Feed Forward plus PID and Integral Enable/Saturation Dynamic'
 * '<S321>' : 'Robot_Control/Control_System/Swerve_Drive/Swerve_Drive_Module3/Optimize/Compare To Constant'
 * '<S322>' : 'Robot_Control/Control_System/Swerve_Drive/Swerve_Drive_Module3/Optimize/Minus1'
 * '<S323>' : 'Robot_Control/Control_System/Swerve_Drive/Swerve_Drive_Module3/Optimize/RotateBy'
 * '<S324>' : 'Robot_Control/Control_System/Swerve_Drive/Swerve_Drive_Module3/Optimize/Minus1/RotateBy'
 * '<S325>' : 'Robot_Control/Control_System/Swerve_Drive/Swerve_Drive_Module3/Optimize/Minus1/RotateBy/Compare To Constant'
 * '<S326>' : 'Robot_Control/Control_System/Swerve_Drive/Swerve_Drive_Module3/Optimize/RotateBy/Compare To Constant'
 * '<S327>' : 'Robot_Control/Control_System/Swerve_Drive/Swerve_Drive_Module3/Steering Module Error Drive Reduction Factor/Angle Modulus to plus or minus pi over two'
 * '<S328>' : 'Robot_Control/Control_System/Swerve_Drive/Swerve_Drive_Module3/Steering with Angle Error Modulus PID/Angle Modulus'
 * '<S329>' : 'Robot_Control/Control_System/Swerve_Drive/Swerve_Drive_Module3/Steering with Angle Error Modulus PID/Difference'
 * '<S330>' : 'Robot_Control/Control_System/Swerve_Drive/Swerve_Drive_Module3/Steering with Angle Error Modulus PID/Low_Pass_Filter'
 * '<S331>' : 'Robot_Control/Control_System/Swerve_Drive/Swerve_Drive_Module3/Steering with Angle Error Modulus PID/Saturation Dynamic'
 * '<S332>' : 'Robot_Control/Control_System/Swerve_Drive/Wheel Module Speed and Angle/Complex Rate Limit'
 * '<S333>' : 'Robot_Control/Control_System/Swerve_Drive/Wheel Module Speed and Angle/Initialize Function'
 * '<S334>' : 'Robot_Control/Control_System/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command'
 * '<S335>' : 'Robot_Control/Control_System/Swerve_Drive/Wheel Module Speed and Angle/Translation Steering Command'
 * '<S336>' : 'Robot_Control/Control_System/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator'
 * '<S337>' : 'Robot_Control/Control_System/Swerve_Drive/Wheel Module Speed and Angle/Complex Rate Limit/Compare To Zero'
 * '<S338>' : 'Robot_Control/Control_System/Swerve_Drive/Wheel Module Speed and Angle/Complex Rate Limit/Compare To Zero1'
 * '<S339>' : 'Robot_Control/Control_System/Swerve_Drive/Wheel Module Speed and Angle/Complex Rate Limit/Compare To Zero2'
 * '<S340>' : 'Robot_Control/Control_System/Swerve_Drive/Wheel Module Speed and Angle/Complex Rate Limit/Compare To Zero3'
 * '<S341>' : 'Robot_Control/Control_System/Swerve_Drive/Wheel Module Speed and Angle/Complex Rate Limit/Discrete Rate Limiter'
 * '<S342>' : 'Robot_Control/Control_System/Swerve_Drive/Wheel Module Speed and Angle/Complex Rate Limit/Discrete Rate Limiter/Saturation Dynamic'
 * '<S343>' : 'Robot_Control/Control_System/Swerve_Drive/Wheel Module Speed and Angle/Complex Rate Limit/Discrete Rate Limiter/Unit Delay External IC'
 * '<S344>' : 'Robot_Control/Control_System/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit'
 * '<S345>' : 'Robot_Control/Control_System/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit1'
 * '<S346>' : 'Robot_Control/Control_System/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Steering Heading PID'
 * '<S347>' : 'Robot_Control/Control_System/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit/Compare To Zero'
 * '<S348>' : 'Robot_Control/Control_System/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit/Compare To Zero1'
 * '<S349>' : 'Robot_Control/Control_System/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit/Compare To Zero2'
 * '<S350>' : 'Robot_Control/Control_System/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit/Compare To Zero3'
 * '<S351>' : 'Robot_Control/Control_System/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit/Discrete Rate Limiter'
 * '<S352>' : 'Robot_Control/Control_System/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit/Discrete Rate Limiter/Saturation Dynamic'
 * '<S353>' : 'Robot_Control/Control_System/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit/Discrete Rate Limiter/Unit Delay External IC'
 * '<S354>' : 'Robot_Control/Control_System/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit1/Compare To Zero'
 * '<S355>' : 'Robot_Control/Control_System/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit1/Compare To Zero1'
 * '<S356>' : 'Robot_Control/Control_System/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit1/Compare To Zero2'
 * '<S357>' : 'Robot_Control/Control_System/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit1/Compare To Zero3'
 * '<S358>' : 'Robot_Control/Control_System/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit1/Discrete Rate Limiter'
 * '<S359>' : 'Robot_Control/Control_System/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit1/Discrete Rate Limiter/Saturation Dynamic'
 * '<S360>' : 'Robot_Control/Control_System/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit1/Discrete Rate Limiter/Unit Delay External IC'
 * '<S361>' : 'Robot_Control/Control_System/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Steering Heading PID/Compare To Constant'
 * '<S362>' : 'Robot_Control/Control_System/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Steering Heading PID/PID with Error Wrapping'
 * '<S363>' : 'Robot_Control/Control_System/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Steering Heading PID/PID with Error Wrapping/Angle Modulus'
 * '<S364>' : 'Robot_Control/Control_System/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Steering Heading PID/PID with Error Wrapping/Difference'
 * '<S365>' : 'Robot_Control/Control_System/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Steering Heading PID/PID with Error Wrapping/Low_Pass_Filter'
 * '<S366>' : 'Robot_Control/Control_System/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Steering Heading PID/PID with Error Wrapping/Saturation Dynamic'
 * '<S367>' : 'Robot_Control/Control_System/Swerve_Drive/Wheel Module Speed and Angle/Translation Steering Command/Angle Modulus'
 * '<S368>' : 'Robot_Control/Control_System/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Reduce Speeds for Maximum Speed Limit'
 * '<S369>' : 'Robot_Control/Control_System/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add'
 * '<S370>' : 'Robot_Control/Control_System/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add1'
 * '<S371>' : 'Robot_Control/Control_System/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add2'
 * '<S372>' : 'Robot_Control/Control_System/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add3'
 * '<S373>' : 'Robot_Control/Control_System/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add/Angle_Saver'
 * '<S374>' : 'Robot_Control/Control_System/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add/Cartesian to Polar'
 * '<S375>' : 'Robot_Control/Control_System/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add/Polar to Cartesian'
 * '<S376>' : 'Robot_Control/Control_System/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add/Polar to Cartesian1'
 * '<S377>' : 'Robot_Control/Control_System/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add/Angle_Saver/Compare To Zero1'
 * '<S378>' : 'Robot_Control/Control_System/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add1/Angle_Saver'
 * '<S379>' : 'Robot_Control/Control_System/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add1/Cartesian to Polar'
 * '<S380>' : 'Robot_Control/Control_System/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add1/Polar to Cartesian'
 * '<S381>' : 'Robot_Control/Control_System/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add1/Polar to Cartesian1'
 * '<S382>' : 'Robot_Control/Control_System/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add1/Angle_Saver/Compare To Zero1'
 * '<S383>' : 'Robot_Control/Control_System/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add2/Angle_Saver'
 * '<S384>' : 'Robot_Control/Control_System/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add2/Cartesian to Polar'
 * '<S385>' : 'Robot_Control/Control_System/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add2/Polar to Cartesian'
 * '<S386>' : 'Robot_Control/Control_System/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add2/Polar to Cartesian1'
 * '<S387>' : 'Robot_Control/Control_System/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add2/Angle_Saver/Compare To Zero1'
 * '<S388>' : 'Robot_Control/Control_System/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add3/Angle_Saver'
 * '<S389>' : 'Robot_Control/Control_System/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add3/Cartesian to Polar'
 * '<S390>' : 'Robot_Control/Control_System/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add3/Polar to Cartesian'
 * '<S391>' : 'Robot_Control/Control_System/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add3/Polar to Cartesian1'
 * '<S392>' : 'Robot_Control/Control_System/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add3/Angle_Saver/Compare To Zero1'
 * '<S393>' : 'Robot_Control/Control_System/Teleop/April Tag Relative Errors'
 * '<S394>' : 'Robot_Control/Control_System/Teleop/Joystick_Input_To_Swerve_Drive'
 * '<S395>' : 'Robot_Control/Control_System/Teleop/Reefscape Teleop'
 * '<S396>' : 'Robot_Control/Control_System/Teleop/Subsystem'
 * '<S397>' : 'Robot_Control/Control_System/Teleop/April Tag Relative Errors/Compare To Constant'
 * '<S398>' : 'Robot_Control/Control_System/Teleop/April Tag Relative Errors/Compare To Constant1'
 * '<S399>' : 'Robot_Control/Control_System/Teleop/April Tag Relative Errors/Compare To Constant10'
 * '<S400>' : 'Robot_Control/Control_System/Teleop/April Tag Relative Errors/Compare To Constant2'
 * '<S401>' : 'Robot_Control/Control_System/Teleop/April Tag Relative Errors/Compare To Constant3'
 * '<S402>' : 'Robot_Control/Control_System/Teleop/April Tag Relative Errors/Compare To Constant4'
 * '<S403>' : 'Robot_Control/Control_System/Teleop/April Tag Relative Errors/Compare To Constant5'
 * '<S404>' : 'Robot_Control/Control_System/Teleop/April Tag Relative Errors/Compare To Constant6'
 * '<S405>' : 'Robot_Control/Control_System/Teleop/April Tag Relative Errors/Compare To Constant7'
 * '<S406>' : 'Robot_Control/Control_System/Teleop/April Tag Relative Errors/Compare To Constant8'
 * '<S407>' : 'Robot_Control/Control_System/Teleop/April Tag Relative Errors/Compare To Constant9'
 * '<S408>' : 'Robot_Control/Control_System/Teleop/April Tag Relative Errors/Compare To Zero'
 * '<S409>' : 'Robot_Control/Control_System/Teleop/April Tag Relative Errors/Compare To Zero1'
 * '<S410>' : 'Robot_Control/Control_System/Teleop/April Tag Relative Errors/Compare To Zero2'
 * '<S411>' : 'Robot_Control/Control_System/Teleop/April Tag Relative Errors/Compare To Zero3'
 * '<S412>' : 'Robot_Control/Control_System/Teleop/April Tag Relative Errors/Compare To Zero4'
 * '<S413>' : 'Robot_Control/Control_System/Teleop/April Tag Relative Errors/Compare To Zero5'
 * '<S414>' : 'Robot_Control/Control_System/Teleop/April Tag Relative Errors/Compare To Zero9'
 * '<S415>' : 'Robot_Control/Control_System/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering'
 * '<S416>' : 'Robot_Control/Control_System/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation'
 * '<S417>' : 'Robot_Control/Control_System/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering/Compare To Zero2'
 * '<S418>' : 'Robot_Control/Control_System/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering/Detect Increase'
 * '<S419>' : 'Robot_Control/Control_System/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering/Detect Increase1'
 * '<S420>' : 'Robot_Control/Control_System/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering/Detect Increase2'
 * '<S421>' : 'Robot_Control/Control_System/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering/Detect Increase3'
 * '<S422>' : 'Robot_Control/Control_System/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering/Detect Increase4'
 * '<S423>' : 'Robot_Control/Control_System/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering/Detect Increase5'
 * '<S424>' : 'Robot_Control/Control_System/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering/Previous active game state was not Teleop'
 * '<S425>' : 'Robot_Control/Control_System/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering/Saturation Dynamic'
 * '<S426>' : 'Robot_Control/Control_System/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Boost and Rate Limit'
 * '<S427>' : 'Robot_Control/Control_System/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Compare To Zero'
 * '<S428>' : 'Robot_Control/Control_System/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Compare To Zero1'
 * '<S429>' : 'Robot_Control/Control_System/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Latch Outputs when Both Inputs Zero'
 * '<S430>' : 'Robot_Control/Control_System/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Boost and Rate Limit/Simple Rate Limit'
 * '<S431>' : 'Robot_Control/Control_System/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Boost and Rate Limit/Simple Rate Limit/Discrete Rate Limiter'
 * '<S432>' : 'Robot_Control/Control_System/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Boost and Rate Limit/Simple Rate Limit/Discrete Rate Limiter/Saturation Dynamic'
 * '<S433>' : 'Robot_Control/Control_System/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Boost and Rate Limit/Simple Rate Limit/Discrete Rate Limiter/Unit Delay External IC'
 * '<S434>' : 'Robot_Control/Control_System/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Latch Outputs when Both Inputs Zero/Compare To Zero'
 * '<S435>' : 'Robot_Control/Control_System/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Latch Outputs when Both Inputs Zero/Compare To Zero1'
 * '<S436>' : 'Robot_Control/Control_System/Teleop/Reefscape Teleop/Detect Increase'
 * '<S437>' : 'Robot_Control/Control_System/Teleop/Reefscape Teleop/Detect Increase1'
 * '<S438>' : 'Robot_Control/Control_System/Teleop/Reefscape Teleop/Detect Increase10'
 * '<S439>' : 'Robot_Control/Control_System/Teleop/Reefscape Teleop/Detect Increase11'
 * '<S440>' : 'Robot_Control/Control_System/Teleop/Reefscape Teleop/Detect Increase12'
 * '<S441>' : 'Robot_Control/Control_System/Teleop/Reefscape Teleop/Detect Increase13'
 * '<S442>' : 'Robot_Control/Control_System/Teleop/Reefscape Teleop/Detect Increase2'
 * '<S443>' : 'Robot_Control/Control_System/Teleop/Reefscape Teleop/Detect Increase3'
 * '<S444>' : 'Robot_Control/Control_System/Teleop/Reefscape Teleop/Detect Increase4'
 * '<S445>' : 'Robot_Control/Control_System/Teleop/Reefscape Teleop/Detect Increase5'
 * '<S446>' : 'Robot_Control/Control_System/Teleop/Reefscape Teleop/Detect Increase6'
 * '<S447>' : 'Robot_Control/Control_System/Teleop/Reefscape Teleop/Detect Increase7'
 * '<S448>' : 'Robot_Control/Control_System/Teleop/Reefscape Teleop/Detect Increase8'
 * '<S449>' : 'Robot_Control/Control_System/Teleop/Reefscape Teleop/Detect Increase9'
 * '<S450>' : 'Robot_Control/Control_System/Teleop/Reefscape Teleop/Reefscape_Chart'
 */
#endif                                 /* RTW_HEADER_Robot_Control_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
