/*
 * Sponsored License - for use in support of a program or activity
 * sponsored by MathWorks.  Not for government, commercial or other
 * non-sponsored organizational use.
 *
 * File: Code_Gen_Model.h
 *
 * Code generated for Simulink model 'Code_Gen_Model'.
 *
 * Model version                  : 2.385
 * Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
 * C/C++ source code generated on : Thu Mar 27 22:05:15 2025
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

/* Block states (default storage) for system '<S31>/Reefscape_Chart' */
typedef struct {
  real_T timer;                        /* '<S31>/Reefscape_Chart' */
  real_T timer_robot_target;           /* '<S31>/Reefscape_Chart' */
  uint8_T is_active_c4_Code_Gen_Model; /* '<S31>/Reefscape_Chart' */
  uint8_T is_Elevator_CoralArm_CoralWheel;/* '<S31>/Reefscape_Chart' */
  uint8_T is_Algae_Pickup_High;        /* '<S31>/Reefscape_Chart' */
  uint8_T is_Algae_Pickup_Low;         /* '<S31>/Reefscape_Chart' */
  uint8_T is_Algae_Score;              /* '<S31>/Reefscape_Chart' */
  uint8_T is_Coral;                    /* '<S31>/Reefscape_Chart' */
  uint8_T is_Coral_Eject;              /* '<S31>/Reefscape_Chart' */
  uint8_T is_Level_2;                  /* '<S31>/Reefscape_Chart' */
  uint8_T is_Level_3;                  /* '<S31>/Reefscape_Chart' */
  uint8_T is_Level_4_Auto;             /* '<S31>/Reefscape_Chart' */
  uint8_T is_Level_4_Teleop;           /* '<S31>/Reefscape_Chart' */
  uint8_T is_Coral_Score_Position;     /* '<S31>/Reefscape_Chart' */
  uint8_T is_Actions;                  /* '<S31>/Reefscape_Chart' */
  uint8_T is_Coral_Pickup_Prepare;     /* '<S31>/Reefscape_Chart' */
  uint8_T is_Set_Level;                /* '<S31>/Reefscape_Chart' */
  uint8_T is_Elevator_Height_Bottom;   /* '<S31>/Reefscape_Chart' */
  uint8_T is_Elevator_Height_Bottom_pre;/* '<S31>/Reefscape_Chart' */
  uint8_T is_End_Game_Climb;           /* '<S31>/Reefscape_Chart' */
  uint8_T is_Set_Level_n;              /* '<S31>/Reefscape_Chart' */
  uint8_T is_Algae_Wheels;             /* '<S31>/Reefscape_Chart' */
  uint8_T is_AT_On_Target_Timer;       /* '<S31>/Reefscape_Chart' */
  boolean_T Set_L1;                    /* '<S31>/Reefscape_Chart' */
  boolean_T Set_L2;                    /* '<S31>/Reefscape_Chart' */
  boolean_T Set_L3;                    /* '<S31>/Reefscape_Chart' */
  boolean_T Set_L4;                    /* '<S31>/Reefscape_Chart' */
} DW_Reefscape_Chart_Code_Gen_M_T;

/* Block signals (default storage) */
typedef struct {
  real_T FL_Steer_Module_Angle;        /* '<S268>/Add1' */
  real_T FR_Steer_Module_Angle;        /* '<S269>/Add1' */
  real_T BL_Steer_Module_Angle;        /* '<S270>/Add1' */
  real_T BR_Steer_Module_Angle;        /* '<S271>/Add1' */
  real_T Gyro_Angle_Calibrated_deg;    /* '<S15>/Subtract1' */
  real_T Gyro_Angle_rad;               /* '<S112>/Gain1' */
  real_T Gyro_Angle_Field_rad;         /* '<S15>/Add' */
  real_T Product6[2];                  /* '<S21>/Product6' */
  real_T Odom_Position_X;              /* '<S21>/Accumulator2' */
  real_T KF_Position_X;                /* '<S18>/Switch' */
  real_T Odom_Position_Y;              /* '<S21>/Accumulator' */
  real_T KF_Position_Y;                /* '<S18>/Switch1' */
  real_T Drive_Joystick_X;             /* '<S16>/Signal Copy1' */
  real_T Drive_Joystick_Y;             /* '<S16>/Signal Copy2' */
  real_T Drive_Joystick_Z;             /* '<S16>/Signal Copy3' */
  real_T Steer_Joystick_Y;             /* '<S16>/Signal Copy5' */
  real_T Steer_Joystick_Z;             /* '<S16>/Signal Copy6' */
  real_T Limelight_Tag_Corrected_X;    /* '<S19>/Add' */
  real_T Limelight_Tag_Corrected_Y;    /* '<S19>/Add1' */
  real_T Limelight_Tag_Corrected_Angle;/* '<S19>/Add2' */
  real_T Elevator_Height_Measured_Raw; /* '<S13>/Gain1' */
  real_T Elevator_Height_Offset;       /* '<S13>/Switch1' */
  real_T Elevator_Height_Measured;     /* '<S13>/Switch' */
  real_T Coral_Arm_Angle_Measured;     /* '<S1>/Add Constant' */
  real_T Spline_Num_Poses;             /* '<S20>/Merge9' */
  real_T Steering_Abs_Cmd;             /* '<S20>/Merge1' */
  real_T Steering_Rel_Cmd;             /* '<S20>/Merge2' */
  real_T Translation_Speed;            /* '<S20>/Merge4' */
  real_T Translation_Angle;            /* '<S20>/Merge3' */
  real_T Translation_Speed_SPF;        /* '<S23>/Merge2' */
  real_T Translation_Speed_RL;         /* '<S370>/Sum' */
  real_T Translation_Angle_SPF;        /* '<S23>/Merge3' */
  real_T Gyro_Angle_SPF;               /* '<S23>/Merge8' */
  real_T Translation_Steering_Cmd;     /* '<S364>/Switch' */
  real_T Steering_Abs_Cmd_SPF;         /* '<S23>/Merge' */
  real_T Steering_Localized_PID;       /* '<S391>/Saturation2' */
  real_T Steering_Rel_Cmd_SPF;         /* '<S23>/Merge1' */
  real_T Steering_Localized_Cmd;       /* '<S363>/Switch' */
  real_T BR_Desired_Wheel_Speed_in;    /* '<S417>/Switch1' */
  real_T FL_Desired_Wheel_Speed_in;    /* '<S402>/Switch1' */
  real_T FR_Desired_Wheel_Speed_in;    /* '<S407>/Switch1' */
  real_T BL_Desired_Wheel_Speed_in;    /* '<S412>/Switch1' */
  real_T BR_Desired_Wheel_Speed;       /* '<S397>/Product3' */
  real_T BR_Desired_Module_Angle;      /* '<S417>/Switch' */
  real_T FL_Desired_Module_Angle;      /* '<S402>/Switch' */
  real_T FL_Desired_Wheel_Speed;       /* '<S397>/Product' */
  real_T FR_Desired_Module_Angle;      /* '<S407>/Switch' */
  real_T FR_Desired_Wheel_Speed;       /* '<S397>/Product1' */
  real_T BL_Desired_Module_Angle;      /* '<S412>/Switch' */
  real_T BL_Desired_Wheel_Speed;       /* '<S397>/Product2' */
  real_T Elevator_Height_Desired_merge;/* '<S20>/Merge11' */
  real_T Coral_Arm_Angle_Desired_merge;/* '<S20>/Merge13' */
  real_T Elevator_Error;               /* '<S12>/Add' */
  real_T Elevator_Proportional;        /* '<S94>/Gain1' */
  real_T Elevator_Integral;            /* '<S94>/Switch' */
  real_T Coral_ArmAngle_Error;         /* '<S8>/Subtract' */
  real_T Elevator_Proportional_l;      /* '<S76>/Gain1' */
  real_T Elevator_Integral_o;          /* '<S76>/Switch' */
  real_T Odometry_Y_global_est_ft;     /* '<S204>/meters to feet1' */
  real_T Odometry_Y_global_TEAR_ft;    /* '<S204>/Subtract1' */
  real_T Odometry_X_global_est_ft;     /* '<S204>/meters to feet' */
  real_T Odometry_X_global_TEAR_ft;    /* '<S204>/Subtract' */
  real_T Steer_Joystick_X;             /* '<S16>/Signal Copy4' */
  real_T AT_Field_Error_X;             /* '<S422>/Switch2' */
  real_T AT_Field_Error_Y;             /* '<S422>/Switch4' */
  real_T AT_Relative_Error_Error_Y;    /* '<S26>/Signal Copy8' */
  real_T AT_Relative_Error_Error_X;    /* '<S26>/Signal Copy7' */
  real_T AT_Relative_Error_Angle;      /* '<S26>/Signal Copy9' */
  real_T Steering_Abs_Gyro_Latch;      /* '<S445>/Switch8' */
  real_T Steering_Abs_Gyro;            /* '<S445>/Switch2' */
  real_T AT_Field_Target_Angle;        /* '<S422>/Switch15' */
  real_T Steering_Abs_Angle;           /* '<S445>/Switch3' */
  real_T State_ID_Teleop;              /* '<S425>/Reefscape_Chart' */
  real_T Elevator_Height_Desired;      /* '<S425>/Reefscape_Chart' */
  real_T Coral_Arm_Angle_Desired;      /* '<S425>/Reefscape_Chart' */
  real_T Coral_Wheel_DC;               /* '<S425>/Reefscape_Chart' */
  real_T UnitDelay2;                   /* '<S28>/Unit Delay2' */
  real_T Auto_AT_Relative_Error_Y;     /* '<S28>/Signal Copy6' */
  real_T Auto_AT_Relative_Error_X;     /* '<S28>/Signal Copy2' */
  real_T Auto_AT_Relative_Error_Angle; /* '<S28>/Signal Copy7' */
  real_T Translation_Speed_k;          /* '<S28>/Reefscape_Auto_Steps' */
  real_T Translation_Angle_c;          /* '<S28>/Reefscape_Auto_Steps' */
  real_T State_ID_Auto;                /* '<S31>/Reefscape_Chart' */
  real_T Elevator_Height_Desired_h;    /* '<S31>/Reefscape_Chart' */
  real_T Coral_Arm_Angle_Desired_f;    /* '<S31>/Reefscape_Chart' */
  real_T Coral_Wheel_DC_a;             /* '<S31>/Reefscape_Chart' */
  real_T Spline_Follow_Index;          /* '<S213>/Merge4' */
  real_T Spline_Target_Y;              /* '<S210>/Selector6' */
  real_T Spline_Target_X;              /* '<S210>/Selector2' */
  real_T Assignment[450];              /* '<S235>/Assignment' */
  real_T Product2[2];                  /* '<S194>/Product2' */
  real_T Product3[2];                  /* '<S192>/Product3' */
  uint16_T Set_Coral_Level;            /* '<S425>/Reefscape_Chart' */
  uint16_T Set_Coral_Level_j;          /* '<S31>/Reefscape_Chart' */
  uint16_T WhileIterator;              /* '<S260>/While Iterator' */
  uint8_T Set_Algae_Level;             /* '<S425>/Reefscape_Chart' */
  uint8_T Path_ID;                     /* '<S28>/Reefscape_Auto_Steps' */
  uint8_T Auto_Step_ID;                /* '<S28>/Reefscape_Auto_Steps' */
  uint8_T Set_Algae_Level_p;           /* '<S31>/Reefscape_Chart' */
  uint8_T Active_GameState;            /* '<S22>/Chart' */
  boolean_T Button_Enable_Wheels;      /* '<S138>/FixPt Relational Operator' */
  boolean_T Button_Reset_Wheel_Offsets;/* '<S139>/FixPt Relational Operator' */
  boolean_T Button_Disable_Wheels;     /* '<S140>/FixPt Relational Operator' */
  boolean_T Drive_Joystick_Z_Mode;     /* '<S121>/Compare' */
  boolean_T Is_Boosting;               /* '<S131>/Compare' */
  boolean_T Face_Toward_Driver;        /* '<S119>/Compare' */
  boolean_T Face_Right_Driver;         /* '<S120>/Compare' */
  boolean_T Face_Left_Driver;          /* '<S122>/Compare' */
  boolean_T Face_Away_Driver;          /* '<S115>/Compare' */
  boolean_T Align_Left;                /* '<S129>/Compare' */
  boolean_T Align_Right;               /* '<S128>/Compare' */
  boolean_T Align_Center;              /* '<S130>/Compare' */
  boolean_T Coral_Station_Left;        /* '<S127>/Compare' */
  boolean_T Coral_Station_Right;       /* '<S126>/Compare' */
  boolean_T Processor;                 /* '<S125>/Compare' */
  boolean_T Cage_Left_Start;           /* '<S123>/Compare' */
  boolean_T Cage_Middle_Start;         /* '<S124>/Compare' */
  boolean_T Cage_Right_Start;          /* '<S132>/Compare' */
  boolean_T Cage_Left_Finish;          /* '<S133>/Compare' */
  boolean_T Cage_Middle_Finish;        /* '<S134>/Compare' */
  boolean_T Cage_Right_Finish;         /* '<S135>/Compare' */
  boolean_T Gamepad_POV_Up;            /* '<S114>/Compare' */
  boolean_T Gamepad_POV_Down;          /* '<S116>/Compare' */
  boolean_T Gamepad_POV_Left;          /* '<S118>/Compare' */
  boolean_T Gamepad_POV_Right;         /* '<S117>/Compare' */
  boolean_T Spline_Enable;             /* '<S20>/Merge7' */
  boolean_T Is_Absolute_Translation_SPF;/* '<S23>/Merge4' */
  boolean_T Is_Absolute_Steering_SPF;  /* '<S23>/Merge5' */
  boolean_T Swerve_Drive_Integral_Enable;/* '<S20>/Merge23' */
  boolean_T Reefscape_Motors_Enable_merge;/* '<S20>/Merge12' */
  boolean_T Winch_Cmd;                 /* '<S137>/Compare' */
  boolean_T Actuator_Cmd;              /* '<S136>/Compare' */
  boolean_T Robot_Reached_Destination_l;/* '<S23>/Merge7' */
  boolean_T Test_Mode;                 /* '<S20>/Merge10' */
  boolean_T Elevator_LowerPickup_Reset_merg;/* '<S20>/Merge21' */
  boolean_T AT_Relative_Error_Enable;  /* '<S26>/Signal Copy6' */
  boolean_T Teleop_AT_On_Target;       /* '<S26>/Signal Copy10' */
  boolean_T Steering_Abs_Angle_Active; /* '<S445>/AND6' */
  boolean_T Elevator_LowerPickup_Reset;/* '<S425>/Reefscape_Chart' */
  boolean_T Coral_Pickup_Lower_Wait_State;/* '<S425>/Reefscape_Chart' */
  boolean_T UnitDelay1;                /* '<S28>/Unit Delay1' */
  boolean_T Auto_AT_Relative_Enable;   /* '<S28>/Signal Copy1' */
  boolean_T Auto_AT_On_Target;         /* '<S28>/Signal Copy8' */
  boolean_T Align_Left_d;              /* '<S28>/Reefscape_Auto_Steps' */
  boolean_T Align_Right_i;             /* '<S28>/Reefscape_Auto_Steps' */
  boolean_T Align_Center_b;            /* '<S28>/Reefscape_Auto_Steps' */
  boolean_T Gamepad_B4_Y_out;          /* '<S28>/Reefscape_Auto_Steps' */
  boolean_T Gamepad_Start_out;         /* '<S28>/Reefscape_Auto_Steps' */
  boolean_T Gamepad_Back_out;          /* '<S28>/Reefscape_Auto_Steps' */
  boolean_T Gamepad_RT_out;            /* '<S28>/Reefscape_Auto_Steps' */
  boolean_T Gamepad_POV_Down_o;        /* '<S28>/Reefscape_Auto_Steps' */
  boolean_T Gamepad_POV_Left_d;        /* '<S28>/Reefscape_Auto_Steps' */
  boolean_T Gamepad_B1_A_out;          /* '<S28>/Reefscape_Auto_Steps' */
  boolean_T Gamepad_B3_X_out;          /* '<S28>/Reefscape_Auto_Steps' */
  boolean_T Elevator_LowerPickup_Reset_g;/* '<S31>/Reefscape_Chart' */
  boolean_T Coral_Pickup_Lower_Wait_State_m;/* '<S31>/Reefscape_Chart' */
  boolean_T Coral_Score_j;             /* '<S31>/Reefscape_Chart' */
  boolean_T Spline_Out_Of_Bounds;      /* '<S213>/Merge1' */
  boolean_T Out;                       /* '<S10>/Debounce' */
  boolean_T Out_h;                     /* '<S9>/Debounce' */
} B_Code_Gen_Model_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T UD_DSTATE;                    /* '<S196>/UD' */
  real_T UD_DSTATE_m;                  /* '<S197>/UD' */
  real_T UD_DSTATE_i;                  /* '<S198>/UD' */
  real_T UD_DSTATE_c;                  /* '<S199>/UD' */
  real_T TappedDelay_X[2];             /* '<S18>/Tapped Delay' */
  real_T TappedDelay1_X[2];            /* '<S18>/Tapped Delay1' */
  real_T MemoryX_DSTATE[2];            /* '<S141>/MemoryX' */
  real_T DelayInput1_DSTATE;           /* '<S113>/Delay Input1' */
  real_T UnitDelay1_DSTATE;            /* '<S15>/Unit Delay1' */
  real_T UD_DSTATE_d;                  /* '<S195>/UD' */
  real_T Accumulator2_DSTATE;          /* '<S21>/Accumulator2' */
  real_T Accumulator_DSTATE;           /* '<S21>/Accumulator' */
  real_T DelayInput1_DSTATE_n;         /* '<S138>/Delay Input1' */
  real_T DelayInput1_DSTATE_e;         /* '<S139>/Delay Input1' */
  real_T DelayInput1_DSTATE_nj;        /* '<S140>/Delay Input1' */
  real_T UnitDelay1_DSTATE_i;          /* '<S394>/Unit Delay1' */
  real_T UD_DSTATE_a;                  /* '<S393>/UD' */
  real_T UnitDelay_DSTATE_m;           /* '<S391>/Unit Delay' */
  real_T UnitDelay_DSTATE_d;           /* '<S374>/Unit Delay' */
  real_T FixPtUnitDelay1_DSTATE_e;     /* '<S389>/FixPt Unit Delay1' */
  real_T UnitDelay_DSTATE_g;           /* '<S373>/Unit Delay' */
  real_T FixPtUnitDelay1_DSTATE_p;     /* '<S382>/FixPt Unit Delay1' */
  real_T UnitDelay1_DSTATE_j;          /* '<S348>/Unit Delay1' */
  real_T UD_DSTATE_j;                  /* '<S347>/UD' */
  real_T UnitDelay_DSTATE_l;           /* '<S341>/Unit Delay' */
  real_T UnitDelay1_DSTATE_f;          /* '<S285>/Unit Delay1' */
  real_T UD_DSTATE_h;                  /* '<S284>/UD' */
  real_T UnitDelay_DSTATE_j;           /* '<S278>/Unit Delay' */
  real_T UnitDelay1_DSTATE_b;          /* '<S296>/Unit Delay1' */
  real_T UD_DSTATE_b;                  /* '<S295>/UD' */
  real_T UnitDelay_DSTATE_e;           /* '<S281>/Unit Delay' */
  real_T UnitDelay1_DSTATE_e;          /* '<S306>/Unit Delay1' */
  real_T UD_DSTATE_mm;                 /* '<S305>/UD' */
  real_T UnitDelay_DSTATE_h;           /* '<S299>/Unit Delay' */
  real_T UnitDelay1_DSTATE_n;          /* '<S317>/Unit Delay1' */
  real_T UD_DSTATE_i1;                 /* '<S316>/UD' */
  real_T UnitDelay_DSTATE_dt;          /* '<S302>/Unit Delay' */
  real_T UnitDelay1_DSTATE_n4;         /* '<S327>/Unit Delay1' */
  real_T UD_DSTATE_o;                  /* '<S326>/UD' */
  real_T UnitDelay_DSTATE_f;           /* '<S320>/Unit Delay' */
  real_T UnitDelay1_DSTATE_nw;         /* '<S338>/Unit Delay1' */
  real_T UD_DSTATE_k;                  /* '<S337>/UD' */
  real_T UnitDelay_DSTATE_k;           /* '<S323>/Unit Delay' */
  real_T UnitDelay1_DSTATE_iw;         /* '<S359>/Unit Delay1' */
  real_T UD_DSTATE_l;                  /* '<S358>/UD' */
  real_T UnitDelay_DSTATE_lm;          /* '<S344>/Unit Delay' */
  real_T UnitDelay_DSTATE_mh;          /* '<S93>/Unit Delay' */
  real_T FixPtUnitDelay1_DSTATE_l;     /* '<S102>/FixPt Unit Delay1' */
  real_T UnitDelay_DSTATE_oz;          /* '<S75>/Unit Delay' */
  real_T FixPtUnitDelay1_DSTATE_pc;    /* '<S84>/FixPt Unit Delay1' */
  real_T UnitDelay1_DSTATE_d;          /* '<S204>/Unit Delay1' */
  real_T UnitDelay_DSTATE_c;           /* '<S204>/Unit Delay' */
  real_T UnitDelay1_DSTATE_l;          /* '<S459>/Unit Delay1' */
  real_T UnitDelay_DSTATE_p;           /* '<S459>/Unit Delay' */
  real_T DelayInput1_DSTATE_c;         /* '<S466>/Delay Input1' */
  real_T DelayInput1_DSTATE_nr;        /* '<S467>/Delay Input1' */
  real_T DelayInput1_DSTATE_ez;        /* '<S472>/Delay Input1' */
  real_T DelayInput1_DSTATE_nh;        /* '<S473>/Delay Input1' */
  real_T DelayInput1_DSTATE_i;         /* '<S474>/Delay Input1' */
  real_T DelayInput1_DSTATE_cp;        /* '<S468>/Delay Input1' */
  real_T DelayInput1_DSTATE_p;         /* '<S475>/Delay Input1' */
  real_T DelayInput1_DSTATE_o;         /* '<S478>/Delay Input1' */
  real_T DelayInput1_DSTATE_j;         /* '<S479>/Delay Input1' */
  real_T DelayInput1_DSTATE_b;         /* '<S471>/Delay Input1' */
  real_T UnitDelay1_DSTATE_nr;         /* '<S423>/Unit Delay1' */
  real_T UnitDelay_DSTATE_kq;          /* '<S423>/Unit Delay' */
  real_T FixPtUnitDelay1_DSTATE_f;     /* '<S463>/FixPt Unit Delay1' */
  real_T UnitDelay3_DSTATE;            /* '<S445>/Unit Delay3' */
  real_T UnitDelay1_DSTATE_e1;         /* '<S422>/Unit Delay1' */
  real_T UnitDelay1_DSTATE_j2;         /* '<S445>/Unit Delay1' */
  real_T UnitDelay2_DSTATE;            /* '<S28>/Unit Delay2' */
  real_T UnitDelay1_DSTATE_ek;         /* '<S29>/Unit Delay1' */
  real_T UnitDelay_DSTATE_b;           /* '<S29>/Unit Delay' */
  real_T UnitDelay_DSTATE_gh;          /* '<S209>/Unit Delay' */
  real_T UnitDelay_DSTATE_hn;          /* '<S208>/Unit Delay' */
  real_T UnitDelay1_DSTATE_f4;         /* '<S261>/Unit Delay1' */
  real_T UnitDelay_DSTATE_g4;          /* '<S261>/Unit Delay' */
  real_T UnitDelay_DSTATE_le;          /* '<S211>/Unit Delay' */
  real_T UnitDelay1_DSTATE_kc;         /* '<S211>/Unit Delay1' */
  real_T timer;                        /* '<S28>/Reefscape_Auto_Steps' */
  void *MatrixConcatenate_PWORK;       /* '<S230>/Matrix Concatenate' */
  int32_T Selector5_DIMS1[2];          /* '<S230>/Selector5' */
  int32_T MatrixConcatenate_DIMS1[2];  /* '<S230>/Matrix Concatenate' */
  int32_T Selector4_DIMS1[2];          /* '<S230>/Selector4' */
  uint8_T FixPtUnitDelay2_DSTATE;      /* '<S372>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_p;    /* '<S389>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_c;    /* '<S382>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_o;    /* '<S102>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_j;    /* '<S84>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_a;    /* '<S463>/FixPt Unit Delay2' */
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
  boolean_T UnitDelay_DSTATE_ir;       /* '<S27>/Unit Delay' */
  boolean_T DelayInput1_DSTATE_oy;     /* '<S476>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_f;      /* '<S477>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_o5;     /* '<S469>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_a;      /* '<S470>/Delay Input1' */
  boolean_T UnitDelay_DSTATE_ia;       /* '<S26>/Unit Delay' */
  boolean_T DelayInput1_DSTATE_jp;     /* '<S453>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_ft;     /* '<S452>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_m;      /* '<S448>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_k;      /* '<S449>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_g;      /* '<S450>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_g2;     /* '<S451>/Delay Input1' */
  boolean_T UnitDelay2_DSTATE_l;       /* '<S445>/Unit Delay2' */
  boolean_T UnitDelay4_DSTATE;         /* '<S445>/Unit Delay4' */
  boolean_T UnitDelay1_DSTATE_p;       /* '<S28>/Unit Delay1' */
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
  boolean_T UnitDelay_DSTATE_i3;       /* '<S28>/Unit Delay' */
  boolean_T UnitDelay_DSTATE_e4;       /* '<S216>/Unit Delay' */
  boolean_T UnitDelay_DSTATE_n;        /* '<S221>/Unit Delay' */
  int8_T Accumulator2_PrevResetState;  /* '<S21>/Accumulator2' */
  int8_T Accumulator_PrevResetState;   /* '<S21>/Accumulator' */
  int8_T SwitchCase_ActiveSubsystem;   /* '<S1>/Switch Case' */
  int8_T If_ActiveSubsystem;           /* '<S23>/If' */
  int8_T If_ActiveSubsystem_h;         /* '<S213>/If' */
  int8_T If_ActiveSubsystem_o;         /* '<S216>/If' */
  int8_T If_ActiveSubsystem_d;         /* '<S218>/If' */
  uint8_T is_active_c6_Code_Gen_Model; /* '<S28>/Reefscape_Auto_Steps' */
  uint8_T is_c6_Code_Gen_Model;        /* '<S28>/Reefscape_Auto_Steps' */
  uint8_T is_Center;                   /* '<S28>/Reefscape_Auto_Steps' */
  uint8_T is_Path_to_Reef;             /* '<S28>/Reefscape_Auto_Steps' */
  uint8_T is_Left_and_Right;           /* '<S28>/Reefscape_Auto_Steps' */
  uint8_T is_Path_to_Reef_1;           /* '<S28>/Reefscape_Auto_Steps' */
  uint8_T is_Drive;                    /* '<S28>/Reefscape_Auto_Steps' */
  uint8_T is_Path_to_Reef_2;           /* '<S28>/Reefscape_Auto_Steps' */
  uint8_T is_Path_to_Reef_2_v2;        /* '<S28>/Reefscape_Auto_Steps' */
  uint8_T is_Path_to_Reef_3;           /* '<S28>/Reefscape_Auto_Steps' */
  uint8_T is_active_c9_Code_Gen_Model; /* '<S22>/Chart' */
  uint8_T is_c9_Code_Gen_Model;        /* '<S22>/Chart' */
  boolean_T icLoad;                    /* '<S141>/MemoryX' */
  boolean_T Relay_Mode;                /* '<S243>/Relay' */
  boolean_T EnabledSubsystem_MODE;     /* '<S168>/Enabled Subsystem' */
  boolean_T MeasurementUpdate_MODE;    /* '<S161>/MeasurementUpdate' */
  DW_Reefscape_Chart_Code_Gen_M_T sf_Reefscape_Chart_n;/* '<S425>/Reefscape_Chart' */
  DW_Reefscape_Chart_Code_Gen_M_T sf_Reefscape_Chart;/* '<S31>/Reefscape_Chart' */
  DW_Debounce_Code_Gen_Model_T sf_Debounce_m;/* '<S10>/Debounce' */
  DW_Debounce_Code_Gen_Model_T sf_Debounce;/* '<S9>/Debounce' */
} DW_Code_Gen_Model_T;

/* Invariant block signals (default storage) */
typedef struct {
  const real_T UnaryMinus;             /* '<S75>/Unary Minus' */
  const real_T UnaryMinus_m;           /* '<S93>/Unary Minus' */
  const real_T Cos5;                   /* '<S289>/Cos5' */
  const real_T Sin5;                   /* '<S289>/Sin5' */
  const real_T Cos5_g;                 /* '<S310>/Cos5' */
  const real_T Sin5_m;                 /* '<S310>/Sin5' */
  const real_T Cos5_i;                 /* '<S331>/Cos5' */
  const real_T Sin5_e;                 /* '<S331>/Sin5' */
  const real_T Cos5_b;                 /* '<S352>/Cos5' */
  const real_T Sin5_c;                 /* '<S352>/Sin5' */
  const real_T DeadZone;               /* '<S31>/Dead Zone' */
  const real_T DeadZone1;              /* '<S31>/Dead Zone1' */
  const real_T Atan2;                  /* '<S362>/Atan2' */
  const real_T FL_Tangent_Angle;       /* '<S362>/Add' */
  const real_T Atan1;                  /* '<S362>/Atan1' */
  const real_T FR_Tangent_Angle;       /* '<S362>/Add1' */
  const real_T Atan3;                  /* '<S362>/Atan3' */
  const real_T BL_Tangent_Angle;       /* '<S362>/Add2' */
  const real_T Atan4;                  /* '<S362>/Atan4' */
  const real_T BR_Tangent_Angle;       /* '<S362>/Add3' */
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
   * Referenced by: '<S208>/Capture Radius'
   */
  real_T CaptureRadius_tableData[4];

  /* Pooled Parameter (Expression: Spline_Velocity_Axis)
   * Referenced by:
   *   '<S208>/Capture Radius'
   *   '<S208>/Lookahead Distance'
   */
  real_T pooled9[4];

  /* Expression: Spline_Lookahead_Dist
   * Referenced by: '<S208>/Lookahead Distance'
   */
  real_T LookaheadDistance_tableData[4];

  /* Expression: All_Paths_Ref_Poses
   * Referenced by: '<S28>/Constant'
   */
  real_T Constant_Value_k[960];

  /* Expression: All_Paths_Num_Poses
   * Referenced by: '<S28>/1-D Lookup Table'
   */
  real_T uDLookupTable_tableData[24];

  /* Expression: Steering_Mod_Drv_out
   * Referenced by: '<S446>/Modulation_Drv'
   */
  real_T Modulation_Drv_tableData[21];

  /* Expression: Steering_Mod_Drv_in
   * Referenced by: '<S446>/Modulation_Drv'
   */
  real_T Modulation_Drv_bp01Data[21];

  /* Expression: Steering_Mod_Str_Rel_out
   * Referenced by: '<S445>/Modulation_Str_Y_Rel'
   */
  real_T Modulation_Str_Y_Rel_tableData[21];

  /* Expression: Steering_Mod_Str_Rel_in
   * Referenced by: '<S445>/Modulation_Str_Y_Rel'
   */
  real_T Modulation_Str_Y_Rel_bp01Data[21];

  /* Expression: Rotation_Local_Inv
   * Referenced by: '<S21>/Constant4'
   */
  real_T Constant4_Value[16];

  /* Pooled Parameter (Expression: Drive_Motor_Control_Scale_Factor)
   * Referenced by:
   *   '<S280>/1-D Lookup Table'
   *   '<S301>/1-D Lookup Table'
   *   '<S322>/1-D Lookup Table'
   *   '<S343>/1-D Lookup Table'
   */
  real_T pooled33[2];

  /* Pooled Parameter (Expression: Drive_Motor_Control_Module_Angle_Error)
   * Referenced by:
   *   '<S280>/1-D Lookup Table'
   *   '<S301>/1-D Lookup Table'
   *   '<S322>/1-D Lookup Table'
   *   '<S343>/1-D Lookup Table'
   */
  real_T pooled34[2];

  /* Pooled Parameter (Expression: Elevator_Height_Lower_Limit_Out)
   * Referenced by:
   *   '<S12>/Range of Motion Protection Limit'
   *   '<S12>/Range of Motion Protection Limit1'
   */
  real_T pooled35[96];

  /* Pooled Parameter (Expression: Elevator_Height_Lower_Limit_Coral_Arm_Input)
   * Referenced by:
   *   '<S12>/Range of Motion Protection Limit'
   *   '<S12>/Range of Motion Protection Limit1'
   */
  real_T pooled36[96];

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
extern real_T AT_CS_L_Angle_Blue;      /* Variable: AT_CS_L_Angle_Blue
                                        * Referenced by: '<S422>/Constant14'
                                        */
extern real_T AT_CS_L_Angle_Red;       /* Variable: AT_CS_L_Angle_Red
                                        * Referenced by: '<S422>/Constant13'
                                        */
extern real_T AT_CS_L_X_Blue;          /* Variable: AT_CS_L_X_Blue
                                        * Referenced by: '<S422>/Constant9'
                                        */
extern real_T AT_CS_L_X_Red;           /* Variable: AT_CS_L_X_Red
                                        * Referenced by: '<S422>/Constant5'
                                        */
extern real_T AT_CS_L_Y_Blue;          /* Variable: AT_CS_L_Y_Blue
                                        * Referenced by: '<S422>/Constant28'
                                        */
extern real_T AT_CS_L_Y_Red;           /* Variable: AT_CS_L_Y_Red
                                        * Referenced by: '<S422>/Constant27'
                                        */
extern real_T AT_CS_R_Angle_Blue;      /* Variable: AT_CS_R_Angle_Blue
                                        * Referenced by: '<S422>/Constant12'
                                        */
extern real_T AT_CS_R_Angle_Red;       /* Variable: AT_CS_R_Angle_Red
                                        * Referenced by: '<S422>/Constant11'
                                        */
extern real_T AT_CS_R_X_Blue;          /* Variable: AT_CS_R_X_Blue
                                        * Referenced by: '<S422>/Constant4'
                                        */
extern real_T AT_CS_R_X_Red;           /* Variable: AT_CS_R_X_Red
                                        * Referenced by: '<S422>/Constant17'
                                        */
extern real_T AT_CS_R_Y_Blue;          /* Variable: AT_CS_R_Y_Blue
                                        * Referenced by: '<S422>/Constant26'
                                        */
extern real_T AT_CS_R_Y_Red;           /* Variable: AT_CS_R_Y_Red
                                        * Referenced by: '<S422>/Constant3'
                                        */
extern real_T AT_Cage_L_Finish_Angle_Blue;/* Variable: AT_Cage_L_Finish_Angle_Blue
                                           * Referenced by: '<S422>/Constant55'
                                           */
extern real_T AT_Cage_L_Finish_Angle_Red;/* Variable: AT_Cage_L_Finish_Angle_Red
                                          * Referenced by: '<S422>/Constant54'
                                          */
extern real_T AT_Cage_L_Finish_X_Blue; /* Variable: AT_Cage_L_Finish_X_Blue
                                        * Referenced by: '<S422>/Constant39'
                                        */
extern real_T AT_Cage_L_Finish_X_Red;  /* Variable: AT_Cage_L_Finish_X_Red
                                        * Referenced by: '<S422>/Constant2'
                                        */
extern real_T AT_Cage_L_Finish_Y_Blue; /* Variable: AT_Cage_L_Finish_Y_Blue
                                        * Referenced by: '<S422>/Constant43'
                                        */
extern real_T AT_Cage_L_Finish_Y_Red;  /* Variable: AT_Cage_L_Finish_Y_Red
                                        * Referenced by: '<S422>/Constant42'
                                        */
extern real_T AT_Cage_L_Start_Angle_Blue;/* Variable: AT_Cage_L_Start_Angle_Blue
                                          * Referenced by: '<S422>/Constant49'
                                          */
extern real_T AT_Cage_L_Start_Angle_Red;/* Variable: AT_Cage_L_Start_Angle_Red
                                         * Referenced by: '<S422>/Constant48'
                                         */
extern real_T AT_Cage_L_Start_X_Blue;  /* Variable: AT_Cage_L_Start_X_Blue
                                        * Referenced by: '<S422>/Constant7'
                                        */
extern real_T AT_Cage_L_Start_X_Red;   /* Variable: AT_Cage_L_Start_X_Red
                                        * Referenced by: '<S422>/Constant15'
                                        */
extern real_T AT_Cage_L_Start_Y_Blue;  /* Variable: AT_Cage_L_Start_Y_Blue
                                        * Referenced by: '<S422>/Constant32'
                                        */
extern real_T AT_Cage_L_Start_Y_Red;   /* Variable: AT_Cage_L_Start_Y_Red
                                        * Referenced by: '<S422>/Constant25'
                                        */
extern real_T AT_Cage_M_Finish_Angle_Blue;/* Variable: AT_Cage_M_Finish_Angle_Blue
                                           * Referenced by: '<S422>/Constant53'
                                           */
extern real_T AT_Cage_M_Finish_Angle_Red;/* Variable: AT_Cage_M_Finish_Angle_Red
                                          * Referenced by: '<S422>/Constant52'
                                          */
extern real_T AT_Cage_M_Finish_X_Blue; /* Variable: AT_Cage_M_Finish_X_Blue
                                        * Referenced by: '<S422>/Constant34'
                                        */
extern real_T AT_Cage_M_Finish_X_Red;  /* Variable: AT_Cage_M_Finish_X_Red
                                        * Referenced by: '<S422>/Constant35'
                                        */
extern real_T AT_Cage_M_Finish_Y_Blue; /* Variable: AT_Cage_M_Finish_Y_Blue
                                        * Referenced by: '<S422>/Constant41'
                                        */
extern real_T AT_Cage_M_Finish_Y_Red;  /* Variable: AT_Cage_M_Finish_Y_Red
                                        * Referenced by: '<S422>/Constant44'
                                        */
extern real_T AT_Cage_M_Start_Angle_Blue;/* Variable: AT_Cage_M_Start_Angle_Blue
                                          * Referenced by: '<S422>/Constant47'
                                          */
extern real_T AT_Cage_M_Start_Angle_Red;/* Variable: AT_Cage_M_Start_Angle_Red
                                         * Referenced by: '<S422>/Constant46'
                                         */
extern real_T AT_Cage_M_Start_X_Blue;  /* Variable: AT_Cage_M_Start_X_Blue
                                        * Referenced by: '<S422>/Constant20'
                                        */
extern real_T AT_Cage_M_Start_X_Red;   /* Variable: AT_Cage_M_Start_X_Red
                                        * Referenced by: '<S422>/Constant24'
                                        */
extern real_T AT_Cage_M_Start_Y_Blue;  /* Variable: AT_Cage_M_Start_Y_Blue
                                        * Referenced by: '<S422>/Constant22'
                                        */
extern real_T AT_Cage_M_Start_Y_Red;   /* Variable: AT_Cage_M_Start_Y_Red
                                        * Referenced by: '<S422>/Constant33'
                                        */
extern real_T AT_Cage_R_Finish_Angle_Blue;/* Variable: AT_Cage_R_Finish_Angle_Blue
                                           * Referenced by: '<S422>/Constant51'
                                           */
extern real_T AT_Cage_R_Finish_Angle_Red;/* Variable: AT_Cage_R_Finish_Angle_Red
                                          * Referenced by: '<S422>/Constant56'
                                          */
extern real_T AT_Cage_R_Finish_X_Blue; /* Variable: AT_Cage_R_Finish_X_Blue
                                        * Referenced by: '<S422>/Constant36'
                                        */
extern real_T AT_Cage_R_Finish_X_Red;  /* Variable: AT_Cage_R_Finish_X_Red
                                        * Referenced by: '<S422>/Constant38'
                                        */
extern real_T AT_Cage_R_Finish_Y_Blue; /* Variable: AT_Cage_R_Finish_Y_Blue
                                        * Referenced by: '<S422>/Constant45'
                                        */
extern real_T AT_Cage_R_Finish_Y_Red;  /* Variable: AT_Cage_R_Finish_Y_Red
                                        * Referenced by: '<S422>/Constant40'
                                        */
extern real_T AT_Cage_R_Start_Angle_Blue;/* Variable: AT_Cage_R_Start_Angle_Blue
                                          * Referenced by: '<S422>/Constant1'
                                          */
extern real_T AT_Cage_R_Start_Angle_Red;/* Variable: AT_Cage_R_Start_Angle_Red
                                         * Referenced by: '<S422>/Constant50'
                                         */
extern real_T AT_Cage_R_Start_X_Blue;  /* Variable: AT_Cage_R_Start_X_Blue
                                        * Referenced by: '<S422>/Constant29'
                                        */
extern real_T AT_Cage_R_Start_X_Red;   /* Variable: AT_Cage_R_Start_X_Red
                                        * Referenced by: '<S422>/Constant31'
                                        */
extern real_T AT_Cage_R_Start_Y_Blue;  /* Variable: AT_Cage_R_Start_Y_Blue
                                        * Referenced by: '<S422>/Constant6'
                                        */
extern real_T AT_Cage_R_Start_Y_Red;   /* Variable: AT_Cage_R_Start_Y_Red
                                        * Referenced by: '<S422>/Constant16'
                                        */
extern real_T AT_Integral_Enable_Error_Angle;
                                     /* Variable: AT_Integral_Enable_Error_Angle
                                      * Referenced by:
                                      *   '<S429>/Constant'
                                      *   '<S36>/Constant'
                                      */
extern real_T AT_Integral_Enable_Error_XY;/* Variable: AT_Integral_Enable_Error_XY
                                           * Referenced by:
                                           *   '<S436>/Constant'
                                           *   '<S437>/Constant'
                                           *   '<S43>/Constant'
                                           *   '<S44>/Constant'
                                           */
extern real_T AT_Max_Error_Angle;      /* Variable: AT_Max_Error_Angle
                                        * Referenced by:
                                        *   '<S435>/Constant'
                                        *   '<S42>/Constant'
                                        */
extern real_T AT_Max_Error_XY;         /* Variable: AT_Max_Error_XY
                                        * Referenced by:
                                        *   '<S433>/Constant'
                                        *   '<S434>/Constant'
                                        *   '<S40>/Constant'
                                        *   '<S41>/Constant'
                                        */
extern real_T AT_On_Target_Time;       /* Variable: AT_On_Target_Time
                                        * Referenced by:
                                        *   '<S425>/Reefscape_Chart'
                                        *   '<S31>/Reefscape_Chart'
                                        */
extern real_T AT_Processor_Angle_Blue; /* Variable: AT_Processor_Angle_Blue
                                        * Referenced by: '<S422>/Constant10'
                                        */
extern real_T AT_Processor_Angle_Red;  /* Variable: AT_Processor_Angle_Red
                                        * Referenced by: '<S422>/Constant8'
                                        */
extern real_T AT_Processor_X_Blue;     /* Variable: AT_Processor_X_Blue
                                        * Referenced by: '<S422>/Constant18'
                                        */
extern real_T AT_Processor_X_Red;      /* Variable: AT_Processor_X_Red
                                        * Referenced by: '<S422>/Constant19'
                                        */
extern real_T AT_Processor_Y_Blue;     /* Variable: AT_Processor_Y_Blue
                                        * Referenced by: '<S422>/Constant21'
                                        */
extern real_T AT_Processor_Y_Red;      /* Variable: AT_Processor_Y_Red
                                        * Referenced by: '<S422>/Constant23'
                                        */
extern real_T AT_Reef_Target_Algae_X;  /* Variable: AT_Reef_Target_Algae_X
                                        * Referenced by:
                                        *   '<S423>/Constant7'
                                        *   '<S29>/Constant7'
                                        */
extern real_T AT_Reef_Target_Algae_Y;  /* Variable: AT_Reef_Target_Algae_Y
                                        * Referenced by:
                                        *   '<S423>/Constant6'
                                        *   '<S29>/Constant6'
                                        */
extern real_T AT_Reef_Target_Center_Y; /* Variable: AT_Reef_Target_Center_Y
                                        * Referenced by:
                                        *   '<S423>/Constant3'
                                        *   '<S29>/Constant3'
                                        */
extern real_T AT_Reef_Target_L1_X;     /* Variable: AT_Reef_Target_L1_X
                                        * Referenced by:
                                        *   '<S423>/Constant4'
                                        *   '<S29>/Constant4'
                                        */
extern real_T AT_Reef_Target_L2_L3_X;  /* Variable: AT_Reef_Target_L2_L3_X
                                        * Referenced by:
                                        *   '<S423>/Constant'
                                        *   '<S29>/Constant'
                                        */
extern real_T AT_Reef_Target_L4_X;     /* Variable: AT_Reef_Target_L4_X
                                        * Referenced by:
                                        *   '<S423>/Constant5'
                                        *   '<S29>/Constant5'
                                        */
extern real_T AT_Reef_Target_Left_Y;   /* Variable: AT_Reef_Target_Left_Y
                                        * Referenced by:
                                        *   '<S423>/Constant1'
                                        *   '<S29>/Constant1'
                                        */
extern real_T AT_Reef_Target_Right_Y;  /* Variable: AT_Reef_Target_Right_Y
                                        * Referenced by:
                                        *   '<S423>/Constant2'
                                        *   '<S29>/Constant2'
                                        */
extern real_T AT_Steering_Error_Angle_Gain_P;
                                     /* Variable: AT_Steering_Error_Angle_Gain_P
                                      * Referenced by:
                                      *   '<S33>/Constant4'
                                      *   '<S445>/Constant4'
                                      */
extern real_T AT_Steering_Speed_Max;   /* Variable: AT_Steering_Speed_Max
                                        * Referenced by:
                                        *   '<S33>/Constant10'
                                        *   '<S445>/Constant10'
                                        */
extern real_T AT_Translation_Control_Gain_Field;
                                  /* Variable: AT_Translation_Control_Gain_Field
                                   * Referenced by: '<S446>/Gain2'
                                   */
extern real_T AT_Translation_Control_Gain_Relative;
                               /* Variable: AT_Translation_Control_Gain_Relative
                                * Referenced by:
                                *   '<S33>/Gain1'
                                *   '<S446>/Gain1'
                                */
extern real_T AT_Translation_Speed_Max_Field;
                                     /* Variable: AT_Translation_Speed_Max_Field
                                      * Referenced by: '<S446>/Constant5'
                                      */
extern real_T AT_Translation_Speed_Max_Relative;
                                  /* Variable: AT_Translation_Speed_Max_Relative
                                   * Referenced by:
                                   *   '<S33>/Constant8'
                                   *   '<S446>/Constant8'
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
                                        *   '<S425>/Reefscape_Chart'
                                        *   '<S31>/Reefscape_Chart'
                                        */
extern real_T Algae_Hold_DC;           /* Variable: Algae_Hold_DC
                                        * Referenced by:
                                        *   '<S425>/Reefscape_Chart'
                                        *   '<S31>/Reefscape_Chart'
                                        */
extern real_T Algae_Pull_In_DC;        /* Variable: Algae_Pull_In_DC
                                        * Referenced by:
                                        *   '<S425>/Reefscape_Chart'
                                        *   '<S31>/Reefscape_Chart'
                                        */
extern real_T Algae_Push_Out_DC;       /* Variable: Algae_Push_Out_DC
                                        * Referenced by:
                                        *   '<S425>/Reefscape_Chart'
                                        *   '<S31>/Reefscape_Chart'
                                        */
extern real_T Auto_Algae_Height_Time;  /* Variable: Auto_Algae_Height_Time
                                        * Referenced by: '<S28>/Reefscape_Auto_Steps'
                                        */
extern real_T Auto_Backup_Time_Processor;/* Variable: Auto_Backup_Time_Processor
                                          * Referenced by: '<S28>/Reefscape_Auto_Steps'
                                          */
extern real_T Auto_Backup_Time_Reef;   /* Variable: Auto_Backup_Time_Reef
                                        * Referenced by: '<S28>/Reefscape_Auto_Steps'
                                        */
extern real_T Auto_Path1_Delay_to_L2_Time;/* Variable: Auto_Path1_Delay_to_L2_Time
                                           * Referenced by: '<S28>/Reefscape_Auto_Steps'
                                           */
extern real_T Auto_Path1_Delay_to_L4_Time;/* Variable: Auto_Path1_Delay_to_L4_Time
                                           * Referenced by: '<S28>/Reefscape_Auto_Steps'
                                           */
extern real_T Auto_Path2_Delay_to_L4_Time;/* Variable: Auto_Path2_Delay_to_L4_Time
                                           * Referenced by: '<S28>/Reefscape_Auto_Steps'
                                           */
extern real_T Auto_Speed_Algae;        /* Variable: Auto_Speed_Algae
                                        * Referenced by: '<S28>/Reefscape_Auto_Steps'
                                        */
extern real_T Auto_Speed_Coral;        /* Variable: Auto_Speed_Coral
                                        * Referenced by: '<S28>/Reefscape_Auto_Steps'
                                        */
extern real_T Auto_Speed_Processor;    /* Variable: Auto_Speed_Processor
                                        * Referenced by: '<S28>/Reefscape_Auto_Steps'
                                        */
extern real_T Auto_Speed_Reef;         /* Variable: Auto_Speed_Reef
                                        * Referenced by: '<S28>/Reefscape_Auto_Steps'
                                        */
extern real_T Auto_Starting_Position;  /* Variable: Auto_Starting_Position
                                        * Referenced by: '<S28>/Constant1'
                                        */
extern real_T Boost_Trigger_Decreasing_Limit;
                                     /* Variable: Boost_Trigger_Decreasing_Limit
                                      * Referenced by: '<S460>/Constant1'
                                      */
extern real_T Boost_Trigger_High_Speed;/* Variable: Boost_Trigger_High_Speed
                                        * Referenced by:
                                        *   '<S456>/Constant'
                                        *   '<S456>/Saturation'
                                        */
extern real_T Boost_Trigger_Increasing_Limit;
                                     /* Variable: Boost_Trigger_Increasing_Limit
                                      * Referenced by: '<S460>/Constant3'
                                      */
extern real_T Boost_Trigger_Low_Speed; /* Variable: Boost_Trigger_Low_Speed
                                        * Referenced by: '<S456>/Constant1'
                                        */
extern real_T Coral_Arm_Angle_Coral_Score_Lower_Rate;
                             /* Variable: Coral_Arm_Angle_Coral_Score_Lower_Rate
                              * Referenced by:
                              *   '<S425>/Reefscape_Chart'
                              *   '<S31>/Reefscape_Chart'
                              */
extern real_T Coral_Arm_Angle_Error_Threshold;
                                    /* Variable: Coral_Arm_Angle_Error_Threshold
                                     * Referenced by:
                                     *   '<S425>/Reefscape_Chart'
                                     *   '<S31>/Reefscape_Chart'
                                     */
extern real_T Coral_Arm_Angle_L1;      /* Variable: Coral_Arm_Angle_L1
                                        * Referenced by:
                                        *   '<S425>/Reefscape_Chart'
                                        *   '<S31>/Reefscape_Chart'
                                        */
extern real_T Coral_Arm_Angle_L2;      /* Variable: Coral_Arm_Angle_L2
                                        * Referenced by:
                                        *   '<S425>/Reefscape_Chart'
                                        *   '<S31>/Reefscape_Chart'
                                        */
extern real_T Coral_Arm_Angle_L3;      /* Variable: Coral_Arm_Angle_L3
                                        * Referenced by:
                                        *   '<S425>/Reefscape_Chart'
                                        *   '<S31>/Reefscape_Chart'
                                        */
extern real_T Coral_Arm_Angle_L4;      /* Variable: Coral_Arm_Angle_L4
                                        * Referenced by:
                                        *   '<S425>/Reefscape_Chart'
                                        *   '<S31>/Reefscape_Chart'
                                        */
extern real_T Coral_Arm_Angle_L4_Eject_Auto;
                                      /* Variable: Coral_Arm_Angle_L4_Eject_Auto
                                       * Referenced by:
                                       *   '<S425>/Reefscape_Chart'
                                       *   '<S31>/Reefscape_Chart'
                                       */
extern real_T Coral_Arm_Angle_L4_Eject_Teleop;
                                    /* Variable: Coral_Arm_Angle_L4_Eject_Teleop
                                     * Referenced by:
                                     *   '<S425>/Reefscape_Chart'
                                     *   '<S31>/Reefscape_Chart'
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
                                        *   '<S425>/Reefscape_Chart'
                                        *   '<S31>/Reefscape_Chart'
                                        */
extern real_T Coral_Arm_Angle_Start_Thresh;/* Variable: Coral_Arm_Angle_Start_Thresh
                                            * Referenced by:
                                            *   '<S425>/Reefscape_Chart'
                                            *   '<S31>/Reefscape_Chart'
                                            */
extern real_T Coral_Arm_Angle_Up;      /* Variable: Coral_Arm_Angle_Up
                                        * Referenced by:
                                        *   '<S425>/Reefscape_Chart'
                                        *   '<S31>/Reefscape_Chart'
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
                                        *   '<S425>/Reefscape_Chart'
                                        *   '<S31>/Reefscape_Chart'
                                        */
extern real_T Coral_Arm_Neg90_DC;      /* Variable: Coral_Arm_Neg90_DC
                                        * Referenced by: '<S8>/Constant2'
                                        */
extern real_T Coral_Arm_Pos90_DC;      /* Variable: Coral_Arm_Pos90_DC
                                        * Referenced by: '<S8>/Constant1'
                                        */
extern real_T Coral_Detect_Distance;   /* Variable: Coral_Detect_Distance
                                        * Referenced by:
                                        *   '<S28>/Reefscape_Auto_Steps'
                                        *   '<S425>/Reefscape_Chart'
                                        *   '<S31>/Reefscape_Chart'
                                        */
extern real_T Coral_Eject_Time;        /* Variable: Coral_Eject_Time
                                        * Referenced by:
                                        *   '<S425>/Reefscape_Chart'
                                        *   '<S31>/Reefscape_Chart'
                                        */
extern real_T Coral_Motor_DC_Eject;    /* Variable: Coral_Motor_DC_Eject
                                        * Referenced by:
                                        *   '<S425>/Reefscape_Chart'
                                        *   '<S31>/Reefscape_Chart'
                                        */
extern real_T Coral_Motor_DC_Hold;     /* Variable: Coral_Motor_DC_Hold
                                        * Referenced by:
                                        *   '<S425>/Reefscape_Chart'
                                        *   '<S31>/Reefscape_Chart'
                                        */
extern real_T Coral_Motor_DC_Pickup;   /* Variable: Coral_Motor_DC_Pickup
                                        * Referenced by:
                                        *   '<S425>/Reefscape_Chart'
                                        *   '<S31>/Reefscape_Chart'
                                        */
extern real_T Drive_Motor_Control_D;   /* Variable: Drive_Motor_Control_D
                                        * Referenced by:
                                        *   '<S278>/Constant3'
                                        *   '<S299>/Constant3'
                                        *   '<S320>/Constant3'
                                        *   '<S341>/Constant3'
                                        */
extern real_T Drive_Motor_Control_D_FilterCoeff;
                                  /* Variable: Drive_Motor_Control_D_FilterCoeff
                                   * Referenced by:
                                   *   '<S278>/Constant2'
                                   *   '<S299>/Constant2'
                                   *   '<S320>/Constant2'
                                   *   '<S341>/Constant2'
                                   */
extern real_T Drive_Motor_Control_D_LL;/* Variable: Drive_Motor_Control_D_LL
                                        * Referenced by:
                                        *   '<S278>/Saturation'
                                        *   '<S299>/Saturation'
                                        *   '<S320>/Saturation'
                                        *   '<S341>/Saturation'
                                        */
extern real_T Drive_Motor_Control_D_UL;/* Variable: Drive_Motor_Control_D_UL
                                        * Referenced by:
                                        *   '<S278>/Saturation'
                                        *   '<S299>/Saturation'
                                        *   '<S320>/Saturation'
                                        *   '<S341>/Saturation'
                                        */
extern real_T Drive_Motor_Control_FF;  /* Variable: Drive_Motor_Control_FF
                                        * Referenced by:
                                        *   '<S278>/Gain'
                                        *   '<S299>/Gain'
                                        *   '<S320>/Gain'
                                        *   '<S341>/Gain'
                                        */
extern real_T Drive_Motor_Control_I;   /* Variable: Drive_Motor_Control_I
                                        * Referenced by:
                                        *   '<S278>/Gain2'
                                        *   '<S299>/Gain2'
                                        *   '<S320>/Gain2'
                                        *   '<S341>/Gain2'
                                        */
extern real_T Drive_Motor_Control_I_LL;/* Variable: Drive_Motor_Control_I_LL
                                        * Referenced by:
                                        *   '<S278>/Saturation1'
                                        *   '<S299>/Saturation1'
                                        *   '<S320>/Saturation1'
                                        *   '<S341>/Saturation1'
                                        */
extern real_T Drive_Motor_Control_I_UL;/* Variable: Drive_Motor_Control_I_UL
                                        * Referenced by:
                                        *   '<S278>/Saturation1'
                                        *   '<S299>/Saturation1'
                                        *   '<S320>/Saturation1'
                                        *   '<S341>/Saturation1'
                                        */
extern real_T Drive_Motor_Control_P;   /* Variable: Drive_Motor_Control_P
                                        * Referenced by:
                                        *   '<S278>/Gain1'
                                        *   '<S299>/Gain1'
                                        *   '<S320>/Gain1'
                                        *   '<S341>/Gain1'
                                        */
extern real_T Drive_Motor_Control_Sign_Change_Deadband;
                           /* Variable: Drive_Motor_Control_Sign_Change_Deadband
                            * Referenced by:
                            *   '<S283>/Constant'
                            *   '<S304>/Constant'
                            *   '<S325>/Constant'
                            *   '<S346>/Constant'
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
                                          *   '<S425>/Reefscape_Chart'
                                          *   '<S31>/Reefscape_Chart'
                                          */
extern real_T Elevator_Height_Algae_Low;/* Variable: Elevator_Height_Algae_Low
                                         * Referenced by:
                                         *   '<S425>/Reefscape_Chart'
                                         *   '<S31>/Reefscape_Chart'
                                         */
extern real_T Elevator_Height_Algae_Score;/* Variable: Elevator_Height_Algae_Score
                                           * Referenced by:
                                           *   '<S425>/Reefscape_Chart'
                                           *   '<S31>/Reefscape_Chart'
                                           */
extern real_T Elevator_Height_Bottom;  /* Variable: Elevator_Height_Bottom
                                        * Referenced by:
                                        *   '<S425>/Reefscape_Chart'
                                        *   '<S31>/Reefscape_Chart'
                                        */
extern real_T Elevator_Height_Coral_Arm_Low_Thresh;
                               /* Variable: Elevator_Height_Coral_Arm_Low_Thresh
                                * Referenced by: '<S71>/Constant'
                                */
extern real_T Elevator_Height_Coral_Score_Lower_Rate;
                             /* Variable: Elevator_Height_Coral_Score_Lower_Rate
                              * Referenced by:
                              *   '<S425>/Reefscape_Chart'
                              *   '<S31>/Reefscape_Chart'
                              */
extern real_T Elevator_Height_End_Game;/* Variable: Elevator_Height_End_Game
                                        * Referenced by:
                                        *   '<S14>/Constant5'
                                        *   '<S425>/Reefscape_Chart'
                                        *   '<S31>/Reefscape_Chart'
                                        */
extern real_T Elevator_Height_Error_Threshold;
                                    /* Variable: Elevator_Height_Error_Threshold
                                     * Referenced by:
                                     *   '<S91>/Constant'
                                     *   '<S425>/Reefscape_Chart'
                                     *   '<S31>/Reefscape_Chart'
                                     */
extern real_T Elevator_Height_L1;      /* Variable: Elevator_Height_L1
                                        * Referenced by:
                                        *   '<S425>/Reefscape_Chart'
                                        *   '<S31>/Reefscape_Chart'
                                        */
extern real_T Elevator_Height_L2;      /* Variable: Elevator_Height_L2
                                        * Referenced by:
                                        *   '<S425>/Reefscape_Chart'
                                        *   '<S31>/Reefscape_Chart'
                                        */
extern real_T Elevator_Height_L2_Eject;/* Variable: Elevator_Height_L2_Eject
                                        * Referenced by:
                                        *   '<S425>/Reefscape_Chart'
                                        *   '<S31>/Reefscape_Chart'
                                        */
extern real_T Elevator_Height_L3;      /* Variable: Elevator_Height_L3
                                        * Referenced by:
                                        *   '<S425>/Reefscape_Chart'
                                        *   '<S31>/Reefscape_Chart'
                                        */
extern real_T Elevator_Height_L3_Eject;/* Variable: Elevator_Height_L3_Eject
                                        * Referenced by:
                                        *   '<S425>/Reefscape_Chart'
                                        *   '<S31>/Reefscape_Chart'
                                        */
extern real_T Elevator_Height_L4;      /* Variable: Elevator_Height_L4
                                        * Referenced by:
                                        *   '<S425>/Reefscape_Chart'
                                        *   '<S31>/Reefscape_Chart'
                                        */
extern real_T Elevator_Height_Lower;   /* Variable: Elevator_Height_Lower
                                        * Referenced by:
                                        *   '<S425>/Reefscape_Chart'
                                        *   '<S31>/Reefscape_Chart'
                                        */
extern real_T Elevator_Height_Manual_Gain;/* Variable: Elevator_Height_Manual_Gain
                                           * Referenced by:
                                           *   '<S425>/Reefscape_Chart'
                                           *   '<S31>/Reefscape_Chart'
                                           */
extern real_T Elevator_Height_PickupLower_Reset;
                                  /* Variable: Elevator_Height_PickupLower_Reset
                                   * Referenced by: '<S13>/Constant2'
                                   */
extern real_T Elevator_Height_Prepare; /* Variable: Elevator_Height_Prepare
                                        * Referenced by:
                                        *   '<S425>/Reefscape_Chart'
                                        *   '<S31>/Reefscape_Chart'
                                        */
extern real_T Elevator_Height_Raise;   /* Variable: Elevator_Height_Raise
                                        * Referenced by:
                                        *   '<S425>/Reefscape_Chart'
                                        *   '<S31>/Reefscape_Chart'
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
                                         *   '<S425>/Reefscape_Chart'
                                         *   '<S31>/Reefscape_Chart'
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
extern real_T Gyro_Calibration_Reset_Degree;
                                      /* Variable: Gyro_Calibration_Reset_Degree
                                       * Referenced by:
                                       *   '<S15>/Constant2'
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
                                        *   '<S425>/Reefscape_Chart'
                                        *   '<S31>/Reefscape_Chart'
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
extern real_T Odometry_IC_X;           /* Variable: Odometry_IC_X
                                        * Referenced by: '<S1>/Constant'
                                        */
extern real_T Odometry_IC_Y;           /* Variable: Odometry_IC_Y
                                        * Referenced by: '<S1>/Constant1'
                                        */
extern real_T Odometry_Reset_IC;       /* Variable: Odometry_Reset_IC
                                        * Referenced by: '<S21>/Constant'
                                        */
extern real_T Odometry_X_Y_TEAR;       /* Variable: Odometry_X_Y_TEAR
                                        * Referenced by: '<S204>/Constant'
                                        */
extern real_T Spline_Last_Pose_Distance_to_Velocity_Gain;
                         /* Variable: Spline_Last_Pose_Distance_to_Velocity_Gain
                          * Referenced by: '<S263>/Constant2'
                          */
extern real_T Spline_Max_Centripital_Acceleration;
                                /* Variable: Spline_Max_Centripital_Acceleration
                                 * Referenced by: '<S263>/Constant1'
                                 */
extern real_T Spline_Pose_Num_Before_End_Reduce_Speed;
                            /* Variable: Spline_Pose_Num_Before_End_Reduce_Speed
                             * Referenced by: '<S210>/Constant'
                             */
extern real_T Spline_Stop_Radius;      /* Variable: Spline_Stop_Radius
                                        * Referenced by: '<S223>/Constant'
                                        */
extern real_T Spline_Velocity_Multiplier_TEST;
                                    /* Variable: Spline_Velocity_Multiplier_TEST
                                     * Referenced by: '<S263>/Constant3'
                                     */
extern real_T Steering_Absolute_Cmd_Approach_Zero_Error_Thresh;
                   /* Variable: Steering_Absolute_Cmd_Approach_Zero_Error_Thresh
                    * Referenced by: '<S374>/Constant5'
                    */
extern real_T Steering_Absolute_Cmd_Approach_Zero_Final_Thresh;
                   /* Variable: Steering_Absolute_Cmd_Approach_Zero_Final_Thresh
                    * Referenced by: '<S374>/Constant6'
                    */
extern real_T Steering_Absolute_Cmd_NonZero_Error_Thresh;
                         /* Variable: Steering_Absolute_Cmd_NonZero_Error_Thresh
                          * Referenced by: '<S374>/Constant9'
                          */
extern real_T Steering_Absolute_Cmd_NonZero_Final_Scale_Factor;
                   /* Variable: Steering_Absolute_Cmd_NonZero_Final_Scale_Factor
                    * Referenced by: '<S374>/Constant10'
                    */
extern real_T Steering_Absolute_Cmd_Rate_Limit_Dec;
                               /* Variable: Steering_Absolute_Cmd_Rate_Limit_Dec
                                * Referenced by: '<S374>/Constant1'
                                */
extern real_T Steering_Absolute_Cmd_Rate_Limit_Inc;
                               /* Variable: Steering_Absolute_Cmd_Rate_Limit_Inc
                                * Referenced by: '<S374>/Constant3'
                                */
extern real_T Steering_Heading_Control_D;/* Variable: Steering_Heading_Control_D
                                          * Referenced by: '<S391>/Constant3'
                                          */
extern real_T Steering_Heading_Control_D_FilterCoeff;
                             /* Variable: Steering_Heading_Control_D_FilterCoeff
                              * Referenced by: '<S391>/Constant2'
                              */
extern real_T Steering_Heading_Control_D_LL;
                                      /* Variable: Steering_Heading_Control_D_LL
                                       * Referenced by: '<S391>/Saturation'
                                       */
extern real_T Steering_Heading_Control_D_UL;
                                      /* Variable: Steering_Heading_Control_D_UL
                                       * Referenced by: '<S391>/Saturation'
                                       */
extern real_T Steering_Heading_Control_Deadzone;
                                  /* Variable: Steering_Heading_Control_Deadzone
                                   * Referenced by: '<S390>/Constant'
                                   */
extern real_T Steering_Heading_Control_I;/* Variable: Steering_Heading_Control_I
                                          * Referenced by: '<S391>/Gain2'
                                          */
extern real_T Steering_Heading_Control_I_LL;
                                      /* Variable: Steering_Heading_Control_I_LL
                                       * Referenced by: '<S391>/Saturation1'
                                       */
extern real_T Steering_Heading_Control_I_UL;
                                      /* Variable: Steering_Heading_Control_I_UL
                                       * Referenced by: '<S391>/Saturation1'
                                       */
extern real_T Steering_Heading_Control_P;/* Variable: Steering_Heading_Control_P
                                          * Referenced by: '<S391>/Gain1'
                                          */
extern real_T Steering_Heading_Control_Total_LL;
                                  /* Variable: Steering_Heading_Control_Total_LL
                                   * Referenced by:
                                   *   '<S391>/Constant1'
                                   *   '<S391>/Saturation2'
                                   */
extern real_T Steering_Heading_Control_Total_UL;
                                  /* Variable: Steering_Heading_Control_Total_UL
                                   * Referenced by:
                                   *   '<S391>/Constant'
                                   *   '<S391>/Saturation2'
                                   */
extern real_T Steering_Motor_Control_D;/* Variable: Steering_Motor_Control_D
                                        * Referenced by:
                                        *   '<S281>/Constant3'
                                        *   '<S302>/Constant3'
                                        *   '<S323>/Constant3'
                                        *   '<S344>/Constant3'
                                        */
extern real_T Steering_Motor_Control_D_FilterCoeff;
                               /* Variable: Steering_Motor_Control_D_FilterCoeff
                                * Referenced by:
                                *   '<S281>/Constant2'
                                *   '<S302>/Constant2'
                                *   '<S323>/Constant2'
                                *   '<S344>/Constant2'
                                */
extern real_T Steering_Motor_Control_D_LL;/* Variable: Steering_Motor_Control_D_LL
                                           * Referenced by:
                                           *   '<S281>/Saturation'
                                           *   '<S302>/Saturation'
                                           *   '<S323>/Saturation'
                                           *   '<S344>/Saturation'
                                           */
extern real_T Steering_Motor_Control_D_UL;/* Variable: Steering_Motor_Control_D_UL
                                           * Referenced by:
                                           *   '<S281>/Saturation'
                                           *   '<S302>/Saturation'
                                           *   '<S323>/Saturation'
                                           *   '<S344>/Saturation'
                                           */
extern real_T Steering_Motor_Control_I;/* Variable: Steering_Motor_Control_I
                                        * Referenced by:
                                        *   '<S281>/Gain2'
                                        *   '<S302>/Gain2'
                                        *   '<S323>/Gain2'
                                        *   '<S344>/Gain2'
                                        */
extern real_T Steering_Motor_Control_I_LL;/* Variable: Steering_Motor_Control_I_LL
                                           * Referenced by:
                                           *   '<S281>/Saturation1'
                                           *   '<S302>/Saturation1'
                                           *   '<S323>/Saturation1'
                                           *   '<S344>/Saturation1'
                                           */
extern real_T Steering_Motor_Control_I_UL;/* Variable: Steering_Motor_Control_I_UL
                                           * Referenced by:
                                           *   '<S281>/Saturation1'
                                           *   '<S302>/Saturation1'
                                           *   '<S323>/Saturation1'
                                           *   '<S344>/Saturation1'
                                           */
extern real_T Steering_Motor_Control_P;/* Variable: Steering_Motor_Control_P
                                        * Referenced by:
                                        *   '<S281>/Gain1'
                                        *   '<S302>/Gain1'
                                        *   '<S323>/Gain1'
                                        *   '<S344>/Gain1'
                                        */
extern real_T Steering_Relative_Cmd_Approach_Zero_Error_Thresh;
                   /* Variable: Steering_Relative_Cmd_Approach_Zero_Error_Thresh
                    * Referenced by: '<S373>/Constant5'
                    */
extern real_T Steering_Relative_Cmd_Approach_Zero_Final_Thresh;
                   /* Variable: Steering_Relative_Cmd_Approach_Zero_Final_Thresh
                    * Referenced by: '<S373>/Constant6'
                    */
extern real_T Steering_Relative_Cmd_NonZero_Error_Thresh;
                         /* Variable: Steering_Relative_Cmd_NonZero_Error_Thresh
                          * Referenced by: '<S373>/Constant9'
                          */
extern real_T Steering_Relative_Cmd_NonZero_Final_Scale_Factor;
                   /* Variable: Steering_Relative_Cmd_NonZero_Final_Scale_Factor
                    * Referenced by: '<S373>/Constant10'
                    */
extern real_T Steering_Relative_Cmd_Rate_Limit_Dec;
                               /* Variable: Steering_Relative_Cmd_Rate_Limit_Dec
                                * Referenced by: '<S373>/Constant1'
                                */
extern real_T Steering_Relative_Cmd_Rate_Limit_Inc;
                               /* Variable: Steering_Relative_Cmd_Rate_Limit_Inc
                                * Referenced by: '<S373>/Constant3'
                                */
extern real_T Steering_Relative_Gain;  /* Variable: Steering_Relative_Gain
                                        * Referenced by: '<S445>/Constant'
                                        */
extern real_T Steering_Twist_Gain;     /* Variable: Steering_Twist_Gain
                                        * Referenced by: '<S445>/Constant1'
                                        */
extern real_T TEST_CANdle_Flag;        /* Variable: TEST_CANdle_Flag
                                        * Referenced by: '<S3>/Constant2'
                                        */
extern real_T TEST_CANdle_LED_ID;      /* Variable: TEST_CANdle_LED_ID
                                        * Referenced by: '<S3>/Constant3'
                                        */
extern real_T TEST_Swerve_Mode_Override_Flag;
                                     /* Variable: TEST_Swerve_Mode_Override_Flag
                                      * Referenced by: '<S426>/Constant5'
                                      */
extern real_T TEST_Swerve_Mode_Steering;/* Variable: TEST_Swerve_Mode_Steering
                                         * Referenced by: '<S426>/Constant8'
                                         */
extern real_T TEST_Swerve_Mode_Translation;/* Variable: TEST_Swerve_Mode_Translation
                                            * Referenced by: '<S426>/Constant7'
                                            */
extern real_T Translation_Speed_Approach_Zero_Error_Thresh;
                       /* Variable: Translation_Speed_Approach_Zero_Error_Thresh
                        * Referenced by: '<S361>/Constant5'
                        */
extern real_T Translation_Speed_Approach_Zero_Final_Thresh;
                       /* Variable: Translation_Speed_Approach_Zero_Final_Thresh
                        * Referenced by: '<S361>/Constant6'
                        */
extern real_T Translation_Speed_NonZero_Error_Thresh;
                             /* Variable: Translation_Speed_NonZero_Error_Thresh
                              * Referenced by: '<S361>/Constant9'
                              */
extern real_T Translation_Speed_NonZero_Final_Scale_Factor;
                       /* Variable: Translation_Speed_NonZero_Final_Scale_Factor
                        * Referenced by: '<S361>/Constant10'
                        */
extern real_T Translation_Speed_Rate_Limit_Dec;
                                   /* Variable: Translation_Speed_Rate_Limit_Dec
                                    * Referenced by: '<S361>/Constant1'
                                    */
extern real_T Translation_Speed_Rate_Limit_Inc;
                                   /* Variable: Translation_Speed_Rate_Limit_Inc
                                    * Referenced by: '<S361>/Constant3'
                                    */
extern real_T Translation_Twist_Gain;  /* Variable: Translation_Twist_Gain
                                        * Referenced by: '<S446>/Gain'
                                        */
extern real_T Twist_Deadzone_neg;      /* Variable: Twist_Deadzone_neg
                                        * Referenced by:
                                        *   '<S445>/Dead Zone'
                                        *   '<S446>/Dead Zone'
                                        */
extern real_T Twist_Deadzone_pos;      /* Variable: Twist_Deadzone_pos
                                        * Referenced by:
                                        *   '<S445>/Dead Zone'
                                        *   '<S446>/Dead Zone'
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
 * Block '<S29>/Logical Operator10' : Unused code path elimination
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
 * Block '<S184>/Data Type Duplicate' : Unused code path elimination
 * Block '<S185>/Data Type Duplicate' : Unused code path elimination
 * Block '<S186>/Conversion' : Unused code path elimination
 * Block '<S186>/Data Type Duplicate' : Unused code path elimination
 * Block '<S187>/Data Type Duplicate' : Unused code path elimination
 * Block '<S145>/Data Type Duplicate' : Unused code path elimination
 * Block '<S146>/Data Type Duplicate' : Unused code path elimination
 * Block '<S147>/Data Type Duplicate' : Unused code path elimination
 * Block '<S148>/Data Type Duplicate' : Unused code path elimination
 * Block '<S149>/Data Type Duplicate' : Unused code path elimination
 * Block '<S150>/Data Type Duplicate' : Unused code path elimination
 * Block '<S151>/Data Type Duplicate' : Unused code path elimination
 * Block '<S152>/Conversion' : Unused code path elimination
 * Block '<S152>/Data Type Duplicate' : Unused code path elimination
 * Block '<S153>/Data Type Duplicate' : Unused code path elimination
 * Block '<S154>/Data Type Duplicate' : Unused code path elimination
 * Block '<S155>/Data Type Duplicate' : Unused code path elimination
 * Block '<S157>/Data Type Duplicate' : Unused code path elimination
 * Block '<S158>/Data Type Duplicate' : Unused code path elimination
 * Block '<S141>/G' : Unused code path elimination
 * Block '<S141>/H' : Unused code path elimination
 * Block '<S141>/N' : Unused code path elimination
 * Block '<S141>/P0' : Unused code path elimination
 * Block '<S141>/Q' : Unused code path elimination
 * Block '<S141>/R' : Unused code path elimination
 * Block '<S173>/CheckSignalProperties' : Unused code path elimination
 * Block '<S182>/CheckSignalProperties' : Unused code path elimination
 * Block '<S183>/CheckSignalProperties' : Unused code path elimination
 * Block '<S22>/Unit Delay1' : Unused code path elimination
 * Block '<S23>/Gain' : Unused code path elimination
 * Block '<S23>/Gain1' : Unused code path elimination
 * Block '<S23>/Scope' : Unused code path elimination
 * Block '<S222>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S226>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S232>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S266>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S286>/Data Type Duplicate' : Unused code path elimination
 * Block '<S286>/Data Type Propagation' : Unused code path elimination
 * Block '<S278>/Scope' : Unused code path elimination
 * Block '<S280>/Scope' : Unused code path elimination
 * Block '<S297>/Data Type Duplicate' : Unused code path elimination
 * Block '<S297>/Data Type Propagation' : Unused code path elimination
 * Block '<S281>/Scope' : Unused code path elimination
 * Block '<S307>/Data Type Duplicate' : Unused code path elimination
 * Block '<S307>/Data Type Propagation' : Unused code path elimination
 * Block '<S299>/Scope' : Unused code path elimination
 * Block '<S301>/Scope' : Unused code path elimination
 * Block '<S318>/Data Type Duplicate' : Unused code path elimination
 * Block '<S318>/Data Type Propagation' : Unused code path elimination
 * Block '<S302>/Scope' : Unused code path elimination
 * Block '<S328>/Data Type Duplicate' : Unused code path elimination
 * Block '<S328>/Data Type Propagation' : Unused code path elimination
 * Block '<S320>/Scope' : Unused code path elimination
 * Block '<S322>/Scope' : Unused code path elimination
 * Block '<S339>/Data Type Duplicate' : Unused code path elimination
 * Block '<S339>/Data Type Propagation' : Unused code path elimination
 * Block '<S323>/Scope' : Unused code path elimination
 * Block '<S349>/Data Type Duplicate' : Unused code path elimination
 * Block '<S349>/Data Type Propagation' : Unused code path elimination
 * Block '<S341>/Scope' : Unused code path elimination
 * Block '<S343>/Scope' : Unused code path elimination
 * Block '<S360>/Data Type Duplicate' : Unused code path elimination
 * Block '<S360>/Data Type Propagation' : Unused code path elimination
 * Block '<S344>/Scope' : Unused code path elimination
 * Block '<S371>/Data Type Duplicate' : Unused code path elimination
 * Block '<S371>/Data Type Propagation' : Unused code path elimination
 * Block '<S372>/FixPt Data Type Duplicate1' : Unused code path elimination
 * Block '<S381>/Data Type Duplicate' : Unused code path elimination
 * Block '<S381>/Data Type Propagation' : Unused code path elimination
 * Block '<S382>/FixPt Data Type Duplicate1' : Unused code path elimination
 * Block '<S388>/Data Type Duplicate' : Unused code path elimination
 * Block '<S388>/Data Type Propagation' : Unused code path elimination
 * Block '<S389>/FixPt Data Type Duplicate1' : Unused code path elimination
 * Block '<S395>/Data Type Duplicate' : Unused code path elimination
 * Block '<S395>/Data Type Propagation' : Unused code path elimination
 * Block '<S391>/Scope' : Unused code path elimination
 * Block '<S423>/Logical Operator10' : Unused code path elimination
 * Block '<S455>/Data Type Duplicate' : Unused code path elimination
 * Block '<S455>/Data Type Propagation' : Unused code path elimination
 * Block '<S462>/Data Type Duplicate' : Unused code path elimination
 * Block '<S462>/Data Type Propagation' : Unused code path elimination
 * Block '<S463>/FixPt Data Type Duplicate1' : Unused code path elimination
 * Block '<S28>/Signal Copy3' : Eliminate redundant signal conversion block
 * Block '<S28>/Signal Copy4' : Eliminate redundant signal conversion block
 * Block '<S28>/Signal Copy5' : Eliminate redundant signal conversion block
 * Block '<S184>/Conversion' : Eliminate redundant data type conversion
 * Block '<S185>/Conversion' : Eliminate redundant data type conversion
 * Block '<S187>/Conversion' : Eliminate redundant data type conversion
 * Block '<S141>/DataTypeConversionEnable' : Eliminate redundant data type conversion
 * Block '<S157>/Conversion' : Eliminate redundant data type conversion
 * Block '<S161>/Reshape' : Reshape block reduction
 * Block '<S141>/ReshapeX0' : Reshape block reduction
 * Block '<S141>/Reshapeu' : Reshape block reduction
 * Block '<S141>/Reshapexhat' : Reshape block reduction
 * Block '<S18>/Signal Copy' : Eliminate redundant signal conversion block
 * Block '<S18>/Signal Copy1' : Eliminate redundant signal conversion block
 * Block '<S21>/Signal Copy' : Eliminate redundant signal conversion block
 * Block '<S21>/Signal Copy1' : Eliminate redundant signal conversion block
 * Block '<S21>/Signal Copy2' : Eliminate redundant signal conversion block
 * Block '<S21>/Signal Copy3' : Eliminate redundant signal conversion block
 * Block '<S262>/Signal Copy' : Eliminate redundant signal conversion block
 * Block '<S26>/Signal Copy1' : Eliminate redundant signal conversion block
 * Block '<S26>/Signal Copy2' : Eliminate redundant signal conversion block
 * Block '<S26>/Signal Copy3' : Eliminate redundant signal conversion block
 * Block '<S26>/Signal Copy4' : Eliminate redundant signal conversion block
 * Block '<S26>/Signal Copy5' : Eliminate redundant signal conversion block
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
 * '<S22>'  : 'Code_Gen_Model/RoboRio Controls/Previous GameState'
 * '<S23>'  : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following'
 * '<S24>'  : 'Code_Gen_Model/RoboRio Controls/Steer_Module_Offset_Adjustments'
 * '<S25>'  : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive'
 * '<S26>'  : 'Code_Gen_Model/RoboRio Controls/Teleop'
 * '<S27>'  : 'Code_Gen_Model/RoboRio Controls/Test'
 * '<S28>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem'
 * '<S29>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/April Tag Relative Errors'
 * '<S30>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/Path ID Selection'
 * '<S31>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/Reefscape Teleop'
 * '<S32>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/Reefscape_Auto_Steps'
 * '<S33>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/Swerve_Drive_Commands'
 * '<S34>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/April Tag Relative Errors/Compare To Constant'
 * '<S35>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/April Tag Relative Errors/Compare To Constant1'
 * '<S36>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/April Tag Relative Errors/Compare To Constant10'
 * '<S37>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/April Tag Relative Errors/Compare To Constant2'
 * '<S38>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/April Tag Relative Errors/Compare To Constant3'
 * '<S39>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/April Tag Relative Errors/Compare To Constant4'
 * '<S40>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/April Tag Relative Errors/Compare To Constant5'
 * '<S41>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/April Tag Relative Errors/Compare To Constant6'
 * '<S42>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/April Tag Relative Errors/Compare To Constant7'
 * '<S43>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/April Tag Relative Errors/Compare To Constant8'
 * '<S44>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/April Tag Relative Errors/Compare To Constant9'
 * '<S45>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/April Tag Relative Errors/Compare To Zero'
 * '<S46>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/April Tag Relative Errors/Compare To Zero1'
 * '<S47>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/April Tag Relative Errors/Compare To Zero2'
 * '<S48>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/April Tag Relative Errors/Compare To Zero3'
 * '<S49>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/April Tag Relative Errors/Compare To Zero4'
 * '<S50>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/April Tag Relative Errors/Compare To Zero5'
 * '<S51>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/April Tag Relative Errors/Compare To Zero9'
 * '<S52>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/Path ID Selection/Compare To Constant'
 * '<S53>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/Path ID Selection/Compare To Constant1'
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
 * '<S123>' : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero'
 * '<S124>' : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero1'
 * '<S125>' : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero11'
 * '<S126>' : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero12'
 * '<S127>' : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero13'
 * '<S128>' : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero14'
 * '<S129>' : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero15'
 * '<S130>' : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero16'
 * '<S131>' : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero17'
 * '<S132>' : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero2'
 * '<S133>' : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero3'
 * '<S134>' : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero4'
 * '<S135>' : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero5'
 * '<S136>' : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero6'
 * '<S137>' : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero8'
 * '<S138>' : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Detect Increase'
 * '<S139>' : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Detect Increase1'
 * '<S140>' : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Detect Increase2'
 * '<S141>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter'
 * '<S142>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CalculatePL'
 * '<S143>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CalculateYhat'
 * '<S144>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CovarianceOutputConfigurator'
 * '<S145>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionA'
 * '<S146>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionB'
 * '<S147>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionC'
 * '<S148>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionD'
 * '<S149>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionG'
 * '<S150>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionH'
 * '<S151>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionN'
 * '<S152>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionP'
 * '<S153>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionP0'
 * '<S154>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionQ'
 * '<S155>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionR'
 * '<S156>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionReset'
 * '<S157>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionX'
 * '<S158>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionX0'
 * '<S159>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionu'
 * '<S160>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/MemoryP'
 * '<S161>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/Observer'
 * '<S162>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/ReducedQRN'
 * '<S163>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/Reset'
 * '<S164>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/Reshapeyhat'
 * '<S165>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/ScalarExpansionP0'
 * '<S166>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/ScalarExpansionQ'
 * '<S167>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/ScalarExpansionR'
 * '<S168>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/UseCurrentEstimator'
 * '<S169>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkA'
 * '<S170>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkB'
 * '<S171>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkC'
 * '<S172>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkD'
 * '<S173>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkEnable'
 * '<S174>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkG'
 * '<S175>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkH'
 * '<S176>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkN'
 * '<S177>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkP0'
 * '<S178>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkQ'
 * '<S179>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkR'
 * '<S180>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkReset'
 * '<S181>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkX0'
 * '<S182>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checku'
 * '<S183>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checky'
 * '<S184>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CalculatePL/DataTypeConversionL'
 * '<S185>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CalculatePL/DataTypeConversionM'
 * '<S186>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CalculatePL/DataTypeConversionP'
 * '<S187>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CalculatePL/DataTypeConversionZ'
 * '<S188>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CalculatePL/Ground'
 * '<S189>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CalculateYhat/Ground'
 * '<S190>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CovarianceOutputConfigurator/decideOutput'
 * '<S191>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CovarianceOutputConfigurator/decideOutput/SqrtUsedFcn'
 * '<S192>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/Observer/MeasurementUpdate'
 * '<S193>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/ReducedQRN/Ground'
 * '<S194>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/UseCurrentEstimator/Enabled Subsystem'
 * '<S195>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Difference'
 * '<S196>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Difference1'
 * '<S197>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Difference3'
 * '<S198>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Difference4'
 * '<S199>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Difference5'
 * '<S200>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Polar to Cartesian'
 * '<S201>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Polar to Cartesian1'
 * '<S202>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Polar to Cartesian2'
 * '<S203>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Polar to Cartesian3'
 * '<S204>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Tear for validation testing'
 * '<S205>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Tear for validation testing/Compare To Zero'
 * '<S206>' : 'Code_Gen_Model/RoboRio Controls/Previous GameState/Chart'
 * '<S207>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Pass Through'
 * '<S208>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled'
 * '<S209>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses'
 * '<S210>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Find_Targets'
 * '<S211>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Steering_and_Drive_Commands'
 * '<S212>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/If Action Subsystem'
 * '<S213>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification'
 * '<S214>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning'
 * '<S215>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Escape_Auto_Driving'
 * '<S216>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid'
 * '<S217>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Catch-all if not the last point and not in the circle'
 * '<S218>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Circle_Check_Valid'
 * '<S219>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Increment_If_Rectangle_Check'
 * '<S220>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Circle_Check_Valid/Increment_Search'
 * '<S221>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Circle_Check_Valid/Is_Last_Point'
 * '<S222>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Circle_Check_Valid/Increment_Search/Increment Real World'
 * '<S223>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Circle_Check_Valid/Is_Last_Point/Compare To Constant'
 * '<S224>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Circle_Check_Valid/Is_Last_Point/Robot_Is_At_Destination'
 * '<S225>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Circle_Check_Valid/Is_Last_Point/Straight_Line_Path_To_End'
 * '<S226>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Increment_If_Rectangle_Check/Increment Real World'
 * '<S227>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Increment_If_Rectangle_Check/Subsystem Reference'
 * '<S228>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Increment_If_Rectangle_Check/Subsystem Reference/Compare To Constant'
 * '<S229>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Increment_If_Rectangle_Check/Subsystem Reference/Compare To Constant1'
 * '<S230>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Make_Knots'
 * '<S231>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning'
 * '<S232>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Make_Knots/Decrement Real World'
 * '<S233>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Make_Knots/Find_Control_Pose'
 * '<S234>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Make_Knots/Find_Control_Pose1'
 * '<S235>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop'
 * '<S236>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Compare To Constant'
 * '<S237>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve'
 * '<S238>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Find_Point_Coefficients'
 * '<S239>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve'
 * '<S240>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Acc'
 * '<S241>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Pos'
 * '<S242>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Vel'
 * '<S243>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Curvature'
 * '<S244>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_U_And_Powers'
 * '<S245>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Acc/Subsystem Reference'
 * '<S246>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Acc/ddA'
 * '<S247>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Acc/ddB'
 * '<S248>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Acc/ddC'
 * '<S249>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Pos/A'
 * '<S250>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Pos/B'
 * '<S251>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Pos/C'
 * '<S252>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Pos/Subsystem Reference'
 * '<S253>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Vel/Subsystem Reference'
 * '<S254>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Vel/dA'
 * '<S255>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Vel/dB'
 * '<S256>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Vel/dC'
 * '<S257>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Curvature/MATLAB Function'
 * '<S258>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Find_Targets/Distance Along Curve'
 * '<S259>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Find_Targets/Find closest index to curve'
 * '<S260>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Find_Targets/Find first index that meets distance target'
 * '<S261>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Find_Targets/Find velocity and heading'
 * '<S262>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Find_Targets/Heading'
 * '<S263>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Find_Targets/Velocity'
 * '<S264>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Find_Targets/Find velocity and heading/Dynamic Lookup Tables'
 * '<S265>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Find_Targets/Find velocity and heading/Latch'
 * '<S266>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Find_Targets/Find velocity and heading/Dynamic Lookup Tables/Decrement'
 * '<S267>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Steering_and_Drive_Commands/Translation Angle'
 * '<S268>' : 'Code_Gen_Model/RoboRio Controls/Steer_Module_Offset_Adjustments/Angle Modulus'
 * '<S269>' : 'Code_Gen_Model/RoboRio Controls/Steer_Module_Offset_Adjustments/Angle Modulus1'
 * '<S270>' : 'Code_Gen_Model/RoboRio Controls/Steer_Module_Offset_Adjustments/Angle Modulus2'
 * '<S271>' : 'Code_Gen_Model/RoboRio Controls/Steer_Module_Offset_Adjustments/Angle Modulus3'
 * '<S272>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module'
 * '<S273>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1'
 * '<S274>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2'
 * '<S275>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3'
 * '<S276>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle'
 * '<S277>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Direction Change Drive Reduction Factor'
 * '<S278>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Feed Forward plus PID and Integral Enable'
 * '<S279>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Optimize'
 * '<S280>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Steering Module Error Drive Reduction Factor'
 * '<S281>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Steering with Angle Error Modulus PID'
 * '<S282>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Tangential_Velocity_To_RPM'
 * '<S283>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Direction Change Drive Reduction Factor/Compare To Constant'
 * '<S284>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Feed Forward plus PID and Integral Enable/Difference'
 * '<S285>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Feed Forward plus PID and Integral Enable/Low_Pass_Filter'
 * '<S286>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Feed Forward plus PID and Integral Enable/Saturation Dynamic'
 * '<S287>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Optimize/Compare To Constant'
 * '<S288>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Optimize/Minus1'
 * '<S289>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Optimize/RotateBy'
 * '<S290>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Optimize/Minus1/RotateBy'
 * '<S291>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Optimize/Minus1/RotateBy/Compare To Constant'
 * '<S292>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Optimize/RotateBy/Compare To Constant'
 * '<S293>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Steering Module Error Drive Reduction Factor/Angle Modulus to plus or minus pi over two'
 * '<S294>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Steering with Angle Error Modulus PID/Angle Modulus'
 * '<S295>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Steering with Angle Error Modulus PID/Difference'
 * '<S296>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Steering with Angle Error Modulus PID/Low_Pass_Filter'
 * '<S297>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Steering with Angle Error Modulus PID/Saturation Dynamic'
 * '<S298>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Direction Change Drive Reduction Factor'
 * '<S299>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Feed Forward plus PID and Integral Enable'
 * '<S300>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Optimize'
 * '<S301>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Steering Module Error Drive Reduction Factor'
 * '<S302>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Steering with Angle Error Modulus PID'
 * '<S303>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Tangential_Velocity_To_RPM'
 * '<S304>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Direction Change Drive Reduction Factor/Compare To Constant'
 * '<S305>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Feed Forward plus PID and Integral Enable/Difference'
 * '<S306>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Feed Forward plus PID and Integral Enable/Low_Pass_Filter'
 * '<S307>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Feed Forward plus PID and Integral Enable/Saturation Dynamic'
 * '<S308>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Optimize/Compare To Constant'
 * '<S309>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Optimize/Minus1'
 * '<S310>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Optimize/RotateBy'
 * '<S311>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Optimize/Minus1/RotateBy'
 * '<S312>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Optimize/Minus1/RotateBy/Compare To Constant'
 * '<S313>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Optimize/RotateBy/Compare To Constant'
 * '<S314>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Steering Module Error Drive Reduction Factor/Angle Modulus to plus or minus pi over two'
 * '<S315>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Steering with Angle Error Modulus PID/Angle Modulus'
 * '<S316>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Steering with Angle Error Modulus PID/Difference'
 * '<S317>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Steering with Angle Error Modulus PID/Low_Pass_Filter'
 * '<S318>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Steering with Angle Error Modulus PID/Saturation Dynamic'
 * '<S319>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Direction Change Drive Reduction Factor'
 * '<S320>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Feed Forward plus PID and Integral Enable'
 * '<S321>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Optimize'
 * '<S322>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Steering Module Error Drive Reduction Factor'
 * '<S323>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Steering with Angle Error Modulus PID'
 * '<S324>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Tangential_Velocity_To_RPM'
 * '<S325>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Direction Change Drive Reduction Factor/Compare To Constant'
 * '<S326>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Feed Forward plus PID and Integral Enable/Difference'
 * '<S327>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Feed Forward plus PID and Integral Enable/Low_Pass_Filter'
 * '<S328>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Feed Forward plus PID and Integral Enable/Saturation Dynamic'
 * '<S329>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Optimize/Compare To Constant'
 * '<S330>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Optimize/Minus1'
 * '<S331>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Optimize/RotateBy'
 * '<S332>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Optimize/Minus1/RotateBy'
 * '<S333>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Optimize/Minus1/RotateBy/Compare To Constant'
 * '<S334>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Optimize/RotateBy/Compare To Constant'
 * '<S335>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Steering Module Error Drive Reduction Factor/Angle Modulus to plus or minus pi over two'
 * '<S336>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Steering with Angle Error Modulus PID/Angle Modulus'
 * '<S337>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Steering with Angle Error Modulus PID/Difference'
 * '<S338>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Steering with Angle Error Modulus PID/Low_Pass_Filter'
 * '<S339>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Steering with Angle Error Modulus PID/Saturation Dynamic'
 * '<S340>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Direction Change Drive Reduction Factor'
 * '<S341>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Feed Forward plus PID and Integral Enable'
 * '<S342>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Optimize'
 * '<S343>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Steering Module Error Drive Reduction Factor'
 * '<S344>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Steering with Angle Error Modulus PID'
 * '<S345>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Tangential_Velocity_To_RPM'
 * '<S346>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Direction Change Drive Reduction Factor/Compare To Constant'
 * '<S347>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Feed Forward plus PID and Integral Enable/Difference'
 * '<S348>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Feed Forward plus PID and Integral Enable/Low_Pass_Filter'
 * '<S349>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Feed Forward plus PID and Integral Enable/Saturation Dynamic'
 * '<S350>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Optimize/Compare To Constant'
 * '<S351>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Optimize/Minus1'
 * '<S352>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Optimize/RotateBy'
 * '<S353>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Optimize/Minus1/RotateBy'
 * '<S354>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Optimize/Minus1/RotateBy/Compare To Constant'
 * '<S355>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Optimize/RotateBy/Compare To Constant'
 * '<S356>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Steering Module Error Drive Reduction Factor/Angle Modulus to plus or minus pi over two'
 * '<S357>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Steering with Angle Error Modulus PID/Angle Modulus'
 * '<S358>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Steering with Angle Error Modulus PID/Difference'
 * '<S359>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Steering with Angle Error Modulus PID/Low_Pass_Filter'
 * '<S360>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Steering with Angle Error Modulus PID/Saturation Dynamic'
 * '<S361>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Complex Rate Limit'
 * '<S362>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Initialize Function'
 * '<S363>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command'
 * '<S364>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Translation Steering Command'
 * '<S365>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator'
 * '<S366>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Complex Rate Limit/Compare To Zero'
 * '<S367>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Complex Rate Limit/Compare To Zero1'
 * '<S368>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Complex Rate Limit/Compare To Zero2'
 * '<S369>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Complex Rate Limit/Compare To Zero3'
 * '<S370>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Complex Rate Limit/Discrete Rate Limiter'
 * '<S371>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Complex Rate Limit/Discrete Rate Limiter/Saturation Dynamic'
 * '<S372>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Complex Rate Limit/Discrete Rate Limiter/Unit Delay External IC'
 * '<S373>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit'
 * '<S374>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit1'
 * '<S375>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Steering Heading PID'
 * '<S376>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit/Compare To Zero'
 * '<S377>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit/Compare To Zero1'
 * '<S378>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit/Compare To Zero2'
 * '<S379>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit/Compare To Zero3'
 * '<S380>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit/Discrete Rate Limiter'
 * '<S381>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit/Discrete Rate Limiter/Saturation Dynamic'
 * '<S382>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit/Discrete Rate Limiter/Unit Delay External IC'
 * '<S383>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit1/Compare To Zero'
 * '<S384>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit1/Compare To Zero1'
 * '<S385>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit1/Compare To Zero2'
 * '<S386>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit1/Compare To Zero3'
 * '<S387>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit1/Discrete Rate Limiter'
 * '<S388>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit1/Discrete Rate Limiter/Saturation Dynamic'
 * '<S389>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit1/Discrete Rate Limiter/Unit Delay External IC'
 * '<S390>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Steering Heading PID/Compare To Constant'
 * '<S391>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Steering Heading PID/PID with Error Wrapping'
 * '<S392>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Steering Heading PID/PID with Error Wrapping/Angle Modulus'
 * '<S393>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Steering Heading PID/PID with Error Wrapping/Difference'
 * '<S394>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Steering Heading PID/PID with Error Wrapping/Low_Pass_Filter'
 * '<S395>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Steering Heading PID/PID with Error Wrapping/Saturation Dynamic'
 * '<S396>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Translation Steering Command/Angle Modulus'
 * '<S397>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Reduce Speeds for Maximum Speed Limit'
 * '<S398>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add'
 * '<S399>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add1'
 * '<S400>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add2'
 * '<S401>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add3'
 * '<S402>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add/Angle_Saver'
 * '<S403>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add/Cartesian to Polar'
 * '<S404>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add/Polar to Cartesian'
 * '<S405>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add/Polar to Cartesian1'
 * '<S406>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add/Angle_Saver/Compare To Zero1'
 * '<S407>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add1/Angle_Saver'
 * '<S408>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add1/Cartesian to Polar'
 * '<S409>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add1/Polar to Cartesian'
 * '<S410>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add1/Polar to Cartesian1'
 * '<S411>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add1/Angle_Saver/Compare To Zero1'
 * '<S412>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add2/Angle_Saver'
 * '<S413>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add2/Cartesian to Polar'
 * '<S414>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add2/Polar to Cartesian'
 * '<S415>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add2/Polar to Cartesian1'
 * '<S416>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add2/Angle_Saver/Compare To Zero1'
 * '<S417>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add3/Angle_Saver'
 * '<S418>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add3/Cartesian to Polar'
 * '<S419>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add3/Polar to Cartesian'
 * '<S420>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add3/Polar to Cartesian1'
 * '<S421>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add3/Angle_Saver/Compare To Zero1'
 * '<S422>' : 'Code_Gen_Model/RoboRio Controls/Teleop/April Tag Field XY Errors and Target Angle'
 * '<S423>' : 'Code_Gen_Model/RoboRio Controls/Teleop/April Tag Relative Errors'
 * '<S424>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive'
 * '<S425>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Reefscape Teleop'
 * '<S426>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Subsystem'
 * '<S427>' : 'Code_Gen_Model/RoboRio Controls/Teleop/April Tag Relative Errors/Compare To Constant'
 * '<S428>' : 'Code_Gen_Model/RoboRio Controls/Teleop/April Tag Relative Errors/Compare To Constant1'
 * '<S429>' : 'Code_Gen_Model/RoboRio Controls/Teleop/April Tag Relative Errors/Compare To Constant10'
 * '<S430>' : 'Code_Gen_Model/RoboRio Controls/Teleop/April Tag Relative Errors/Compare To Constant2'
 * '<S431>' : 'Code_Gen_Model/RoboRio Controls/Teleop/April Tag Relative Errors/Compare To Constant3'
 * '<S432>' : 'Code_Gen_Model/RoboRio Controls/Teleop/April Tag Relative Errors/Compare To Constant4'
 * '<S433>' : 'Code_Gen_Model/RoboRio Controls/Teleop/April Tag Relative Errors/Compare To Constant5'
 * '<S434>' : 'Code_Gen_Model/RoboRio Controls/Teleop/April Tag Relative Errors/Compare To Constant6'
 * '<S435>' : 'Code_Gen_Model/RoboRio Controls/Teleop/April Tag Relative Errors/Compare To Constant7'
 * '<S436>' : 'Code_Gen_Model/RoboRio Controls/Teleop/April Tag Relative Errors/Compare To Constant8'
 * '<S437>' : 'Code_Gen_Model/RoboRio Controls/Teleop/April Tag Relative Errors/Compare To Constant9'
 * '<S438>' : 'Code_Gen_Model/RoboRio Controls/Teleop/April Tag Relative Errors/Compare To Zero'
 * '<S439>' : 'Code_Gen_Model/RoboRio Controls/Teleop/April Tag Relative Errors/Compare To Zero1'
 * '<S440>' : 'Code_Gen_Model/RoboRio Controls/Teleop/April Tag Relative Errors/Compare To Zero2'
 * '<S441>' : 'Code_Gen_Model/RoboRio Controls/Teleop/April Tag Relative Errors/Compare To Zero3'
 * '<S442>' : 'Code_Gen_Model/RoboRio Controls/Teleop/April Tag Relative Errors/Compare To Zero4'
 * '<S443>' : 'Code_Gen_Model/RoboRio Controls/Teleop/April Tag Relative Errors/Compare To Zero5'
 * '<S444>' : 'Code_Gen_Model/RoboRio Controls/Teleop/April Tag Relative Errors/Compare To Zero9'
 * '<S445>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering'
 * '<S446>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation'
 * '<S447>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering/Compare To Zero2'
 * '<S448>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering/Detect Increase'
 * '<S449>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering/Detect Increase1'
 * '<S450>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering/Detect Increase2'
 * '<S451>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering/Detect Increase3'
 * '<S452>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering/Detect Increase4'
 * '<S453>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering/Detect Increase5'
 * '<S454>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering/Previous active game state was not Teleop'
 * '<S455>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering/Saturation Dynamic'
 * '<S456>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Boost and Rate Limit'
 * '<S457>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Compare To Zero'
 * '<S458>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Compare To Zero1'
 * '<S459>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Latch Outputs when Both Inputs Zero'
 * '<S460>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Boost and Rate Limit/Simple Rate Limit'
 * '<S461>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Boost and Rate Limit/Simple Rate Limit/Discrete Rate Limiter'
 * '<S462>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Boost and Rate Limit/Simple Rate Limit/Discrete Rate Limiter/Saturation Dynamic'
 * '<S463>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Boost and Rate Limit/Simple Rate Limit/Discrete Rate Limiter/Unit Delay External IC'
 * '<S464>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Latch Outputs when Both Inputs Zero/Compare To Zero'
 * '<S465>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Latch Outputs when Both Inputs Zero/Compare To Zero1'
 * '<S466>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Reefscape Teleop/Detect Increase'
 * '<S467>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Reefscape Teleop/Detect Increase1'
 * '<S468>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Reefscape Teleop/Detect Increase10'
 * '<S469>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Reefscape Teleop/Detect Increase11'
 * '<S470>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Reefscape Teleop/Detect Increase12'
 * '<S471>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Reefscape Teleop/Detect Increase13'
 * '<S472>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Reefscape Teleop/Detect Increase2'
 * '<S473>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Reefscape Teleop/Detect Increase3'
 * '<S474>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Reefscape Teleop/Detect Increase4'
 * '<S475>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Reefscape Teleop/Detect Increase5'
 * '<S476>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Reefscape Teleop/Detect Increase6'
 * '<S477>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Reefscape Teleop/Detect Increase7'
 * '<S478>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Reefscape Teleop/Detect Increase8'
 * '<S479>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Reefscape Teleop/Detect Increase9'
 * '<S480>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Reefscape Teleop/Reefscape_Chart'
 */
#endif                                 /* RTW_HEADER_Code_Gen_Model_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
