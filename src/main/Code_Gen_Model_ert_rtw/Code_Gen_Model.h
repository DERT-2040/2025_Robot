/*
 * Sponsored License - for use in support of a program or activity
 * sponsored by MathWorks.  Not for government, commercial or other
 * non-sponsored organizational use.
 *
 * File: Code_Gen_Model.h
 *
 * Code generated for Simulink model 'Code_Gen_Model'.
 *
 * Model version                  : 2.359
 * Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
 * C/C++ source code generated on : Thu Mar 20 21:22:13 2025
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

/* Block states (default storage) for system '<S29>/Reefscape_Chart' */
typedef struct {
  real_T timer;                        /* '<S29>/Reefscape_Chart' */
  real_T timer_robot_target;           /* '<S29>/Reefscape_Chart' */
  uint8_T is_active_c4_Code_Gen_Model; /* '<S29>/Reefscape_Chart' */
  uint8_T is_Elevator_CoralArm_CoralWheel;/* '<S29>/Reefscape_Chart' */
  uint8_T is_Coral;                    /* '<S29>/Reefscape_Chart' */
  uint8_T is_Coral_Eject;              /* '<S29>/Reefscape_Chart' */
  uint8_T is_Level_2;                  /* '<S29>/Reefscape_Chart' */
  uint8_T is_Level_3;                  /* '<S29>/Reefscape_Chart' */
  uint8_T is_Level_4_Auto;             /* '<S29>/Reefscape_Chart' */
  uint8_T is_Level_4_Teleop;           /* '<S29>/Reefscape_Chart' */
  uint8_T is_Coral_Score_Position;     /* '<S29>/Reefscape_Chart' */
  uint8_T is_Actions;                  /* '<S29>/Reefscape_Chart' */
  uint8_T is_Set_Level;                /* '<S29>/Reefscape_Chart' */
  uint8_T is_Elevator_Height_Bottom;   /* '<S29>/Reefscape_Chart' */
  uint8_T is_Set_Level_c;              /* '<S29>/Reefscape_Chart' */
  uint8_T is_Algae_Wheels;             /* '<S29>/Reefscape_Chart' */
  uint8_T is_AT_On_Target_Timer;       /* '<S29>/Reefscape_Chart' */
  boolean_T Set_L1;                    /* '<S29>/Reefscape_Chart' */
  boolean_T Set_L2;                    /* '<S29>/Reefscape_Chart' */
  boolean_T Set_L3;                    /* '<S29>/Reefscape_Chart' */
  boolean_T Set_L4;                    /* '<S29>/Reefscape_Chart' */
} DW_Reefscape_Chart_Code_Gen_M_T;

/* Block signals (default storage) */
typedef struct {
  real_T FL_Steer_Module_Angle;        /* '<S262>/Add1' */
  real_T FR_Steer_Module_Angle;        /* '<S263>/Add1' */
  real_T BL_Steer_Module_Angle;        /* '<S264>/Add1' */
  real_T BR_Steer_Module_Angle;        /* '<S265>/Add1' */
  real_T Gyro_Angle_Calibrated_deg;    /* '<S13>/Subtract1' */
  real_T Gyro_Angle_rad;               /* '<S106>/Gain1' */
  real_T Gyro_Angle_Field_rad;         /* '<S13>/Add' */
  real_T Product6[2];                  /* '<S19>/Product6' */
  real_T Odom_Position_X;              /* '<S19>/Accumulator2' */
  real_T KF_Position_X;                /* '<S16>/Switch' */
  real_T Odom_Position_Y;              /* '<S19>/Accumulator' */
  real_T KF_Position_Y;                /* '<S16>/Switch1' */
  real_T Drive_Joystick_X;             /* '<S14>/Signal Copy1' */
  real_T Drive_Joystick_Y;             /* '<S14>/Signal Copy2' */
  real_T Drive_Joystick_Z;             /* '<S14>/Signal Copy3' */
  real_T Steer_Joystick_Y;             /* '<S14>/Signal Copy5' */
  real_T Steer_Joystick_Z;             /* '<S14>/Signal Copy6' */
  real_T Limelight_Tag_Corrected_X;    /* '<S17>/Add' */
  real_T Limelight_Tag_Corrected_Y;    /* '<S17>/Add1' */
  real_T Limelight_Tag_Corrected_Angle;/* '<S17>/Add2' */
  real_T Elevator_Height_Measured_Raw; /* '<S11>/Gain1' */
  real_T Elevator_Height_Offset;       /* '<S11>/Switch1' */
  real_T Elevator_Height_Measured;     /* '<S11>/Switch' */
  real_T Coral_Arm_Angle_Measured;     /* '<S1>/Add Constant' */
  real_T Spline_Num_Poses;             /* '<S18>/Merge9' */
  real_T Steering_Abs_Cmd;             /* '<S18>/Merge1' */
  real_T Steering_Rel_Cmd;             /* '<S18>/Merge2' */
  real_T Translation_Speed;            /* '<S18>/Merge4' */
  real_T Translation_Angle;            /* '<S18>/Merge3' */
  real_T Translation_Speed_SPF;        /* '<S21>/Merge2' */
  real_T Translation_Speed_RL;         /* '<S364>/Sum' */
  real_T Translation_Angle_SPF;        /* '<S21>/Merge3' */
  real_T Gyro_Angle_SPF;               /* '<S21>/Merge8' */
  real_T Translation_Steering_Cmd;     /* '<S358>/Switch' */
  real_T Steering_Abs_Cmd_SPF;         /* '<S21>/Merge' */
  real_T Steering_Localized_PID;       /* '<S385>/Saturation2' */
  real_T Steering_Rel_Cmd_SPF;         /* '<S21>/Merge1' */
  real_T Steering_Localized_Cmd;       /* '<S357>/Switch' */
  real_T BR_Desired_Wheel_Speed_in;    /* '<S411>/Switch1' */
  real_T FL_Desired_Wheel_Speed_in;    /* '<S396>/Switch1' */
  real_T FR_Desired_Wheel_Speed_in;    /* '<S401>/Switch1' */
  real_T BL_Desired_Wheel_Speed_in;    /* '<S406>/Switch1' */
  real_T BR_Desired_Wheel_Speed;       /* '<S391>/Product3' */
  real_T BR_Desired_Module_Angle;      /* '<S411>/Switch' */
  real_T FL_Desired_Module_Angle;      /* '<S396>/Switch' */
  real_T FL_Desired_Wheel_Speed;       /* '<S391>/Product' */
  real_T FR_Desired_Module_Angle;      /* '<S401>/Switch' */
  real_T FR_Desired_Wheel_Speed;       /* '<S391>/Product1' */
  real_T BL_Desired_Module_Angle;      /* '<S406>/Switch' */
  real_T BL_Desired_Wheel_Speed;       /* '<S391>/Product2' */
  real_T Elevator_Height_Desired_merge;/* '<S18>/Merge11' */
  real_T Coral_Arm_Angle_Desired_merge;/* '<S18>/Merge13' */
  real_T Elevator_Error;               /* '<S10>/Add' */
  real_T Elevator_Proportional;        /* '<S88>/Gain1' */
  real_T Elevator_Integral;            /* '<S88>/Switch' */
  real_T Coral_ArmAngle_Error;         /* '<S8>/Subtract' */
  real_T Elevator_Proportional_l;      /* '<S72>/Gain1' */
  real_T Elevator_Integral_o;          /* '<S72>/Switch' */
  real_T Odometry_Y_global_est_ft;     /* '<S198>/meters to feet1' */
  real_T Odometry_Y_global_TEAR_ft;    /* '<S198>/Subtract1' */
  real_T Odometry_X_global_est_ft;     /* '<S198>/meters to feet' */
  real_T Odometry_X_global_TEAR_ft;    /* '<S198>/Subtract' */
  real_T Steer_Joystick_X;             /* '<S14>/Signal Copy4' */
  real_T AT_Field_Error_X;             /* '<S416>/Switch2' */
  real_T AT_Field_Error_Y;             /* '<S416>/Switch4' */
  real_T AT_Relative_Error_Error_Y;    /* '<S24>/Signal Copy8' */
  real_T AT_Relative_Error_Error_X;    /* '<S24>/Signal Copy7' */
  real_T AT_Relative_Error_Angle;      /* '<S24>/Signal Copy9' */
  real_T Steering_Abs_Gyro_Latch;      /* '<S439>/Switch8' */
  real_T Steering_Abs_Gyro;            /* '<S439>/Switch2' */
  real_T AT_Field_Target_Angle;        /* '<S416>/Switch15' */
  real_T Steering_Abs_Angle;           /* '<S439>/Switch3' */
  real_T State_ID_Teleop;              /* '<S419>/Reefscape_Chart' */
  real_T Elevator_Height_Desired;      /* '<S419>/Reefscape_Chart' */
  real_T Coral_Arm_Angle_Desired;      /* '<S419>/Reefscape_Chart' */
  real_T Coral_Wheel_DC;               /* '<S419>/Reefscape_Chart' */
  real_T Auto_AT_Relative_Error_Y;     /* '<S26>/Signal Copy6' */
  real_T Auto_AT_Relative_Error_X;     /* '<S26>/Signal Copy2' */
  real_T Auto_AT_Relative_Error_Angle; /* '<S26>/Signal Copy7' */
  real_T Translation_Speed_k;          /* '<S26>/Reefscape_Auto_Steps' */
  real_T Translation_Angle_c;          /* '<S26>/Reefscape_Auto_Steps' */
  real_T State_ID_Auto;                /* '<S29>/Reefscape_Chart' */
  real_T Elevator_Height_Desired_h;    /* '<S29>/Reefscape_Chart' */
  real_T Coral_Arm_Angle_Desired_f;    /* '<S29>/Reefscape_Chart' */
  real_T Coral_Wheel_DC_a;             /* '<S29>/Reefscape_Chart' */
  real_T Spline_Follow_Index;          /* '<S207>/Merge4' */
  real_T Spline_Target_Y;              /* '<S204>/Selector6' */
  real_T Spline_Target_X;              /* '<S204>/Selector2' */
  real_T Assignment[450];              /* '<S229>/Assignment' */
  real_T Product2[2];                  /* '<S188>/Product2' */
  real_T Product3[2];                  /* '<S186>/Product3' */
  uint16_T Set_Coral_Level;            /* '<S419>/Reefscape_Chart' */
  uint16_T Set_Coral_Level_j;          /* '<S29>/Reefscape_Chart' */
  uint16_T WhileIterator;              /* '<S254>/While Iterator' */
  uint8_T Set_Algae_Level;             /* '<S419>/Reefscape_Chart' */
  uint8_T Switch9;                     /* '<S28>/Switch9' */
  uint8_T Path_ID;                     /* '<S26>/Reefscape_Auto_Steps' */
  uint8_T Auto_Step_ID;                /* '<S26>/Reefscape_Auto_Steps' */
  uint8_T Set_Algae_Level_p;           /* '<S29>/Reefscape_Chart' */
  uint8_T Active_GameState;            /* '<S20>/Chart' */
  boolean_T Button_Enable_Wheels;      /* '<S132>/FixPt Relational Operator' */
  boolean_T Button_Reset_Wheel_Offsets;/* '<S133>/FixPt Relational Operator' */
  boolean_T Button_Disable_Wheels;     /* '<S134>/FixPt Relational Operator' */
  boolean_T Drive_Joystick_Z_Mode;     /* '<S115>/Compare' */
  boolean_T Is_Boosting;               /* '<S125>/Compare' */
  boolean_T Face_Toward_Driver;        /* '<S113>/Compare' */
  boolean_T Face_Right_Driver;         /* '<S114>/Compare' */
  boolean_T Face_Left_Driver;          /* '<S116>/Compare' */
  boolean_T Face_Away_Driver;          /* '<S109>/Compare' */
  boolean_T Align_Left;                /* '<S123>/Compare' */
  boolean_T Align_Right;               /* '<S122>/Compare' */
  boolean_T Align_Center;              /* '<S124>/Compare' */
  boolean_T Coral_Station_Left;        /* '<S121>/Compare' */
  boolean_T Coral_Station_Right;       /* '<S120>/Compare' */
  boolean_T Processor;                 /* '<S119>/Compare' */
  boolean_T Cage_Left_Start;           /* '<S117>/Compare' */
  boolean_T Cage_Middle_Start;         /* '<S118>/Compare' */
  boolean_T Cage_Right_Start;          /* '<S126>/Compare' */
  boolean_T Cage_Left_Finish;          /* '<S127>/Compare' */
  boolean_T Cage_Middle_Finish;        /* '<S128>/Compare' */
  boolean_T Cage_Right_Finish;         /* '<S129>/Compare' */
  boolean_T Gamepad_POV_Up;            /* '<S108>/Compare' */
  boolean_T Gamepad_POV_Down;          /* '<S110>/Compare' */
  boolean_T Gamepad_POV_Left;          /* '<S112>/Compare' */
  boolean_T Gamepad_POV_Right;         /* '<S111>/Compare' */
  boolean_T Spline_Enable;             /* '<S18>/Merge7' */
  boolean_T Is_Absolute_Translation_SPF;/* '<S21>/Merge4' */
  boolean_T Is_Absolute_Steering_SPF;  /* '<S21>/Merge5' */
  boolean_T Swerve_Drive_Integral_Enable;/* '<S18>/Merge23' */
  boolean_T Reefscape_Motors_Enable_merge;/* '<S18>/Merge12' */
  boolean_T Winch_Cmd;                 /* '<S131>/Compare' */
  boolean_T Actuator_Cmd;              /* '<S130>/Compare' */
  boolean_T Robot_Reached_Destination_l;/* '<S21>/Merge7' */
  boolean_T Test_Mode;                 /* '<S18>/Merge10' */
  boolean_T Elevator_LowerPickup_Reset_merg;/* '<S18>/Merge21' */
  boolean_T AT_Relative_Error_Enable;  /* '<S24>/Signal Copy6' */
  boolean_T Teleop_AT_On_Target;       /* '<S24>/Signal Copy10' */
  boolean_T Steering_Abs_Angle_Active; /* '<S439>/AND6' */
  boolean_T Elevator_LowerPickup_Reset;/* '<S419>/Reefscape_Chart' */
  boolean_T Coral_Pickup_Lower_Wait_State;/* '<S419>/Reefscape_Chart' */
  boolean_T UnitDelay1;                /* '<S26>/Unit Delay1' */
  boolean_T Auto_AT_Relative_Enable;   /* '<S26>/Signal Copy1' */
  boolean_T Auto_AT_On_Target;         /* '<S26>/Signal Copy8' */
  boolean_T Align_Left_d;              /* '<S26>/Reefscape_Auto_Steps' */
  boolean_T Align_Right_i;             /* '<S26>/Reefscape_Auto_Steps' */
  boolean_T Align_Center_b;            /* '<S26>/Reefscape_Auto_Steps' */
  boolean_T Gamepad_B4_Y_out;          /* '<S26>/Reefscape_Auto_Steps' */
  boolean_T Gamepad_Start_out;         /* '<S26>/Reefscape_Auto_Steps' */
  boolean_T Gamepad_Back_out;          /* '<S26>/Reefscape_Auto_Steps' */
  boolean_T Gamepad_LT_out;            /* '<S26>/Reefscape_Auto_Steps' */
  boolean_T Gamepad_POV_Down_o;        /* '<S26>/Reefscape_Auto_Steps' */
  boolean_T Gamepad_POV_Left_d;        /* '<S26>/Reefscape_Auto_Steps' */
  boolean_T Elevator_LowerPickup_Reset_g;/* '<S29>/Reefscape_Chart' */
  boolean_T Coral_Pickup_Lower_Wait_State_m;/* '<S29>/Reefscape_Chart' */
  boolean_T Coral_Score_j;             /* '<S29>/Reefscape_Chart' */
  boolean_T Spline_Out_Of_Bounds;      /* '<S207>/Merge1' */
} B_Code_Gen_Model_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T UD_DSTATE;                    /* '<S190>/UD' */
  real_T UD_DSTATE_m;                  /* '<S191>/UD' */
  real_T UD_DSTATE_i;                  /* '<S192>/UD' */
  real_T UD_DSTATE_c;                  /* '<S193>/UD' */
  real_T TappedDelay_X[2];             /* '<S16>/Tapped Delay' */
  real_T TappedDelay1_X[2];            /* '<S16>/Tapped Delay1' */
  real_T MemoryX_DSTATE[2];            /* '<S135>/MemoryX' */
  real_T DelayInput1_DSTATE;           /* '<S107>/Delay Input1' */
  real_T UnitDelay1_DSTATE;            /* '<S13>/Unit Delay1' */
  real_T UD_DSTATE_d;                  /* '<S189>/UD' */
  real_T Accumulator2_DSTATE;          /* '<S19>/Accumulator2' */
  real_T Accumulator_DSTATE;           /* '<S19>/Accumulator' */
  real_T DelayInput1_DSTATE_n;         /* '<S132>/Delay Input1' */
  real_T DelayInput1_DSTATE_e;         /* '<S133>/Delay Input1' */
  real_T DelayInput1_DSTATE_nj;        /* '<S134>/Delay Input1' */
  real_T UnitDelay1_DSTATE_i;          /* '<S388>/Unit Delay1' */
  real_T UD_DSTATE_a;                  /* '<S387>/UD' */
  real_T UnitDelay_DSTATE_m;           /* '<S385>/Unit Delay' */
  real_T UnitDelay_DSTATE_d;           /* '<S368>/Unit Delay' */
  real_T FixPtUnitDelay1_DSTATE_e;     /* '<S383>/FixPt Unit Delay1' */
  real_T UnitDelay_DSTATE_g;           /* '<S367>/Unit Delay' */
  real_T FixPtUnitDelay1_DSTATE_p;     /* '<S376>/FixPt Unit Delay1' */
  real_T UnitDelay1_DSTATE_j;          /* '<S342>/Unit Delay1' */
  real_T UD_DSTATE_j;                  /* '<S341>/UD' */
  real_T UnitDelay_DSTATE_l;           /* '<S335>/Unit Delay' */
  real_T UnitDelay1_DSTATE_f;          /* '<S279>/Unit Delay1' */
  real_T UD_DSTATE_h;                  /* '<S278>/UD' */
  real_T UnitDelay_DSTATE_j;           /* '<S272>/Unit Delay' */
  real_T UnitDelay1_DSTATE_b;          /* '<S290>/Unit Delay1' */
  real_T UD_DSTATE_b;                  /* '<S289>/UD' */
  real_T UnitDelay_DSTATE_e;           /* '<S275>/Unit Delay' */
  real_T UnitDelay1_DSTATE_e;          /* '<S300>/Unit Delay1' */
  real_T UD_DSTATE_mm;                 /* '<S299>/UD' */
  real_T UnitDelay_DSTATE_h;           /* '<S293>/Unit Delay' */
  real_T UnitDelay1_DSTATE_n;          /* '<S311>/Unit Delay1' */
  real_T UD_DSTATE_i1;                 /* '<S310>/UD' */
  real_T UnitDelay_DSTATE_dt;          /* '<S296>/Unit Delay' */
  real_T UnitDelay1_DSTATE_n4;         /* '<S321>/Unit Delay1' */
  real_T UD_DSTATE_o;                  /* '<S320>/UD' */
  real_T UnitDelay_DSTATE_f;           /* '<S314>/Unit Delay' */
  real_T UnitDelay1_DSTATE_nw;         /* '<S332>/Unit Delay1' */
  real_T UD_DSTATE_k;                  /* '<S331>/UD' */
  real_T UnitDelay_DSTATE_k;           /* '<S317>/Unit Delay' */
  real_T UnitDelay1_DSTATE_iw;         /* '<S353>/Unit Delay1' */
  real_T UD_DSTATE_l;                  /* '<S352>/UD' */
  real_T UnitDelay_DSTATE_lm;          /* '<S338>/Unit Delay' */
  real_T UnitDelay_DSTATE_mh;          /* '<S87>/Unit Delay' */
  real_T FixPtUnitDelay1_DSTATE_l;     /* '<S96>/FixPt Unit Delay1' */
  real_T UnitDelay_DSTATE_oz;          /* '<S71>/Unit Delay' */
  real_T FixPtUnitDelay1_DSTATE_pc;    /* '<S80>/FixPt Unit Delay1' */
  real_T UnitDelay1_DSTATE_d;          /* '<S198>/Unit Delay1' */
  real_T UnitDelay_DSTATE_c;           /* '<S198>/Unit Delay' */
  real_T UnitDelay1_DSTATE_l;          /* '<S453>/Unit Delay1' */
  real_T UnitDelay_DSTATE_p;           /* '<S453>/Unit Delay' */
  real_T DelayInput1_DSTATE_c;         /* '<S460>/Delay Input1' */
  real_T DelayInput1_DSTATE_nr;        /* '<S461>/Delay Input1' */
  real_T DelayInput1_DSTATE_ez;        /* '<S465>/Delay Input1' */
  real_T DelayInput1_DSTATE_nh;        /* '<S466>/Delay Input1' */
  real_T DelayInput1_DSTATE_i;         /* '<S467>/Delay Input1' */
  real_T DelayInput1_DSTATE_cp;        /* '<S462>/Delay Input1' */
  real_T DelayInput1_DSTATE_p;         /* '<S468>/Delay Input1' */
  real_T DelayInput1_DSTATE_o;         /* '<S471>/Delay Input1' */
  real_T DelayInput1_DSTATE_j;         /* '<S472>/Delay Input1' */
  real_T UnitDelay1_DSTATE_nr;         /* '<S417>/Unit Delay1' */
  real_T UnitDelay_DSTATE_kq;          /* '<S417>/Unit Delay' */
  real_T FixPtUnitDelay1_DSTATE_f;     /* '<S457>/FixPt Unit Delay1' */
  real_T UnitDelay3_DSTATE;            /* '<S439>/Unit Delay3' */
  real_T UnitDelay1_DSTATE_e1;         /* '<S416>/Unit Delay1' */
  real_T UnitDelay1_DSTATE_j2;         /* '<S439>/Unit Delay1' */
  real_T UnitDelay1_DSTATE_ek;         /* '<S27>/Unit Delay1' */
  real_T UnitDelay_DSTATE_b;           /* '<S27>/Unit Delay' */
  real_T UnitDelay_DSTATE_gh;          /* '<S203>/Unit Delay' */
  real_T UnitDelay_DSTATE_hn;          /* '<S202>/Unit Delay' */
  real_T UnitDelay1_DSTATE_f4;         /* '<S255>/Unit Delay1' */
  real_T UnitDelay_DSTATE_g4;          /* '<S255>/Unit Delay' */
  real_T UnitDelay_DSTATE_le;          /* '<S205>/Unit Delay' */
  real_T UnitDelay1_DSTATE_kc;         /* '<S205>/Unit Delay1' */
  real_T timer;                        /* '<S26>/Reefscape_Auto_Steps' */
  void *MatrixConcatenate_PWORK;       /* '<S224>/Matrix Concatenate' */
  int32_T Selector5_DIMS1[2];          /* '<S224>/Selector5' */
  int32_T MatrixConcatenate_DIMS1[2];  /* '<S224>/Matrix Concatenate' */
  int32_T Selector4_DIMS1[2];          /* '<S224>/Selector4' */
  uint8_T FixPtUnitDelay2_DSTATE;      /* '<S366>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_p;    /* '<S383>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_c;    /* '<S376>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_o;    /* '<S96>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_j;    /* '<S80>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_a;    /* '<S457>/FixPt Unit Delay2' */
  boolean_T DelayInput1_DSTATE_b;      /* '<S99>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_o1;     /* '<S100>/Delay Input1' */
  boolean_T UnitDelay_DSTATE_mph;      /* '<S1>/Unit Delay' */
  boolean_T DelayInput1_DSTATE_po;     /* '<S101>/Delay Input1' */
  boolean_T UnitDelay_DSTATE_ll;       /* '<S15>/Unit Delay' */
  boolean_T DelayInput1_DSTATE_be;     /* '<S97>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_op;     /* '<S81>/Delay Input1' */
  boolean_T UnitDelay_DSTATE_gln;      /* '<S12>/Unit Delay' */
  boolean_T UnitDelay1_DSTATE_kb;      /* '<S12>/Unit Delay1' */
  boolean_T UnitDelay2_DSTATE;         /* '<S12>/Unit Delay2' */
  boolean_T UnitDelay_DSTATE_ir;       /* '<S25>/Unit Delay' */
  boolean_T DelayInput1_DSTATE_oy;     /* '<S469>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_f;      /* '<S470>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_o5;     /* '<S463>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_a;      /* '<S464>/Delay Input1' */
  boolean_T UnitDelay_DSTATE_ia;       /* '<S24>/Unit Delay' */
  boolean_T DelayInput1_DSTATE_jp;     /* '<S447>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_ft;     /* '<S446>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_m;      /* '<S442>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_k;      /* '<S443>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_g;      /* '<S444>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_g2;     /* '<S445>/Delay Input1' */
  boolean_T UnitDelay2_DSTATE_l;       /* '<S439>/Unit Delay2' */
  boolean_T UnitDelay4_DSTATE;         /* '<S439>/Unit Delay4' */
  boolean_T UnitDelay1_DSTATE_p;       /* '<S26>/Unit Delay1' */
  boolean_T DelayInput1_DSTATE_ne;     /* '<S58>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_l;      /* '<S52>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_bd;     /* '<S53>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_au;     /* '<S57>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_ff;     /* '<S59>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_ev;     /* '<S54>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_o1g;    /* '<S60>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_os;     /* '<S63>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_b2;     /* '<S64>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_d;      /* '<S61>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_b3;     /* '<S62>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_ae;     /* '<S55>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_mu;     /* '<S56>/Delay Input1' */
  boolean_T UnitDelay_DSTATE_i3;       /* '<S26>/Unit Delay' */
  boolean_T UnitDelay_DSTATE_e4;       /* '<S210>/Unit Delay' */
  boolean_T UnitDelay_DSTATE_n;        /* '<S215>/Unit Delay' */
  int8_T Accumulator2_PrevResetState;  /* '<S19>/Accumulator2' */
  int8_T Accumulator_PrevResetState;   /* '<S19>/Accumulator' */
  int8_T SwitchCase_ActiveSubsystem;   /* '<S1>/Switch Case' */
  int8_T If_ActiveSubsystem;           /* '<S21>/If' */
  int8_T If_ActiveSubsystem_h;         /* '<S207>/If' */
  int8_T If_ActiveSubsystem_o;         /* '<S210>/If' */
  int8_T If_ActiveSubsystem_d;         /* '<S212>/If' */
  uint8_T is_active_c6_Code_Gen_Model; /* '<S26>/Reefscape_Auto_Steps' */
  uint8_T is_c6_Code_Gen_Model;        /* '<S26>/Reefscape_Auto_Steps' */
  uint8_T is_Center;                   /* '<S26>/Reefscape_Auto_Steps' */
  uint8_T is_Path_to_Reef;             /* '<S26>/Reefscape_Auto_Steps' */
  uint8_T is_Left_and_Right;           /* '<S26>/Reefscape_Auto_Steps' */
  uint8_T is_Path_to_Reef_1;           /* '<S26>/Reefscape_Auto_Steps' */
  uint8_T is_Path_to_Reef_2;           /* '<S26>/Reefscape_Auto_Steps' */
  uint8_T is_Path_to_Reef_3;           /* '<S26>/Reefscape_Auto_Steps' */
  uint8_T is_active_c9_Code_Gen_Model; /* '<S20>/Chart' */
  uint8_T is_c9_Code_Gen_Model;        /* '<S20>/Chart' */
  boolean_T icLoad;                    /* '<S135>/MemoryX' */
  boolean_T Relay_Mode;                /* '<S237>/Relay' */
  boolean_T EnabledSubsystem_MODE;     /* '<S162>/Enabled Subsystem' */
  boolean_T MeasurementUpdate_MODE;    /* '<S155>/MeasurementUpdate' */
  DW_Reefscape_Chart_Code_Gen_M_T sf_Reefscape_Chart_n;/* '<S419>/Reefscape_Chart' */
  DW_Reefscape_Chart_Code_Gen_M_T sf_Reefscape_Chart;/* '<S29>/Reefscape_Chart' */
} DW_Code_Gen_Model_T;

/* Invariant block signals (default storage) */
typedef struct {
  const real_T UnaryMinus;             /* '<S71>/Unary Minus' */
  const real_T UnaryMinus_m;           /* '<S87>/Unary Minus' */
  const real_T Cos5;                   /* '<S283>/Cos5' */
  const real_T Sin5;                   /* '<S283>/Sin5' */
  const real_T Cos5_g;                 /* '<S304>/Cos5' */
  const real_T Sin5_m;                 /* '<S304>/Sin5' */
  const real_T Cos5_i;                 /* '<S325>/Cos5' */
  const real_T Sin5_e;                 /* '<S325>/Sin5' */
  const real_T Cos5_b;                 /* '<S346>/Cos5' */
  const real_T Sin5_c;                 /* '<S346>/Sin5' */
  const real_T DeadZone;               /* '<S29>/Dead Zone' */
  const real_T DeadZone1;              /* '<S29>/Dead Zone1' */
  const real_T Atan2;                  /* '<S356>/Atan2' */
  const real_T FL_Tangent_Angle;       /* '<S356>/Add' */
  const real_T Atan1;                  /* '<S356>/Atan1' */
  const real_T FR_Tangent_Angle;       /* '<S356>/Add1' */
  const real_T Atan3;                  /* '<S356>/Atan3' */
  const real_T BL_Tangent_Angle;       /* '<S356>/Add2' */
  const real_T Atan4;                  /* '<S356>/Atan4' */
  const real_T BR_Tangent_Angle;       /* '<S356>/Add3' */
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
   * Referenced by: '<S202>/Capture Radius'
   */
  real_T CaptureRadius_tableData[4];

  /* Pooled Parameter (Expression: Spline_Velocity_Axis)
   * Referenced by:
   *   '<S202>/Capture Radius'
   *   '<S202>/Lookahead Distance'
   */
  real_T pooled8[4];

  /* Expression: Spline_Lookahead_Dist
   * Referenced by: '<S202>/Lookahead Distance'
   */
  real_T LookaheadDistance_tableData[4];

  /* Expression: All_Paths_Ref_Poses
   * Referenced by: '<S26>/Constant'
   */
  real_T Constant_Value_k[800];

  /* Expression: All_Paths_Num_Poses
   * Referenced by: '<S26>/1-D Lookup Table'
   */
  real_T uDLookupTable_tableData[20];

  /* Expression: Steering_Mod_Drv_out
   * Referenced by: '<S440>/Modulation_Drv'
   */
  real_T Modulation_Drv_tableData[21];

  /* Expression: Steering_Mod_Drv_in
   * Referenced by: '<S440>/Modulation_Drv'
   */
  real_T Modulation_Drv_bp01Data[21];

  /* Expression: Steering_Mod_Str_Rel_out
   * Referenced by: '<S439>/Modulation_Str_Y_Rel'
   */
  real_T Modulation_Str_Y_Rel_tableData[21];

  /* Expression: Steering_Mod_Str_Rel_in
   * Referenced by: '<S439>/Modulation_Str_Y_Rel'
   */
  real_T Modulation_Str_Y_Rel_bp01Data[21];

  /* Expression: Rotation_Local_Inv
   * Referenced by: '<S19>/Constant4'
   */
  real_T Constant4_Value[16];

  /* Pooled Parameter (Expression: Drive_Motor_Control_Scale_Factor)
   * Referenced by:
   *   '<S274>/1-D Lookup Table'
   *   '<S295>/1-D Lookup Table'
   *   '<S316>/1-D Lookup Table'
   *   '<S337>/1-D Lookup Table'
   */
  real_T pooled32[2];

  /* Pooled Parameter (Expression: Drive_Motor_Control_Module_Angle_Error)
   * Referenced by:
   *   '<S274>/1-D Lookup Table'
   *   '<S295>/1-D Lookup Table'
   *   '<S316>/1-D Lookup Table'
   *   '<S337>/1-D Lookup Table'
   */
  real_T pooled33[2];

  /* Pooled Parameter (Expression: Elevator_Height_Lower_Limit_Out)
   * Referenced by:
   *   '<S10>/Range of Motion Protection Limit'
   *   '<S10>/Range of Motion Protection Limit1'
   */
  real_T pooled34[96];

  /* Pooled Parameter (Expression: Elevator_Height_Lower_Limit_Coral_Arm_Input)
   * Referenced by:
   *   '<S10>/Range of Motion Protection Limit'
   *   '<S10>/Range of Motion Protection Limit1'
   */
  real_T pooled35[96];

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
  real_T Enable_Wheels;                /* '<Root>/Enable_Wheels' */
  real_T Reset_Wheel_Offsets;          /* '<Root>/Reset_Wheel_Offsets' */
  real_T Disable_Wheels;               /* '<Root>/Disable_Wheels' */
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
                                        * Referenced by: '<S416>/Constant14'
                                        */
extern real_T AT_CS_L_Angle_Red;       /* Variable: AT_CS_L_Angle_Red
                                        * Referenced by: '<S416>/Constant13'
                                        */
extern real_T AT_CS_L_X_Blue;          /* Variable: AT_CS_L_X_Blue
                                        * Referenced by: '<S416>/Constant9'
                                        */
extern real_T AT_CS_L_X_Red;           /* Variable: AT_CS_L_X_Red
                                        * Referenced by: '<S416>/Constant5'
                                        */
extern real_T AT_CS_L_Y_Blue;          /* Variable: AT_CS_L_Y_Blue
                                        * Referenced by: '<S416>/Constant28'
                                        */
extern real_T AT_CS_L_Y_Red;           /* Variable: AT_CS_L_Y_Red
                                        * Referenced by: '<S416>/Constant27'
                                        */
extern real_T AT_CS_R_Angle_Blue;      /* Variable: AT_CS_R_Angle_Blue
                                        * Referenced by: '<S416>/Constant12'
                                        */
extern real_T AT_CS_R_Angle_Red;       /* Variable: AT_CS_R_Angle_Red
                                        * Referenced by: '<S416>/Constant11'
                                        */
extern real_T AT_CS_R_X_Blue;          /* Variable: AT_CS_R_X_Blue
                                        * Referenced by: '<S416>/Constant4'
                                        */
extern real_T AT_CS_R_X_Red;           /* Variable: AT_CS_R_X_Red
                                        * Referenced by: '<S416>/Constant17'
                                        */
extern real_T AT_CS_R_Y_Blue;          /* Variable: AT_CS_R_Y_Blue
                                        * Referenced by: '<S416>/Constant26'
                                        */
extern real_T AT_CS_R_Y_Red;           /* Variable: AT_CS_R_Y_Red
                                        * Referenced by: '<S416>/Constant3'
                                        */
extern real_T AT_Cage_L_Finish_Angle_Blue;/* Variable: AT_Cage_L_Finish_Angle_Blue
                                           * Referenced by: '<S416>/Constant55'
                                           */
extern real_T AT_Cage_L_Finish_Angle_Red;/* Variable: AT_Cage_L_Finish_Angle_Red
                                          * Referenced by: '<S416>/Constant54'
                                          */
extern real_T AT_Cage_L_Finish_X_Blue; /* Variable: AT_Cage_L_Finish_X_Blue
                                        * Referenced by: '<S416>/Constant39'
                                        */
extern real_T AT_Cage_L_Finish_X_Red;  /* Variable: AT_Cage_L_Finish_X_Red
                                        * Referenced by: '<S416>/Constant2'
                                        */
extern real_T AT_Cage_L_Finish_Y_Blue; /* Variable: AT_Cage_L_Finish_Y_Blue
                                        * Referenced by: '<S416>/Constant43'
                                        */
extern real_T AT_Cage_L_Finish_Y_Red;  /* Variable: AT_Cage_L_Finish_Y_Red
                                        * Referenced by: '<S416>/Constant42'
                                        */
extern real_T AT_Cage_L_Start_Angle_Blue;/* Variable: AT_Cage_L_Start_Angle_Blue
                                          * Referenced by: '<S416>/Constant49'
                                          */
extern real_T AT_Cage_L_Start_Angle_Red;/* Variable: AT_Cage_L_Start_Angle_Red
                                         * Referenced by: '<S416>/Constant48'
                                         */
extern real_T AT_Cage_L_Start_X_Blue;  /* Variable: AT_Cage_L_Start_X_Blue
                                        * Referenced by: '<S416>/Constant7'
                                        */
extern real_T AT_Cage_L_Start_X_Red;   /* Variable: AT_Cage_L_Start_X_Red
                                        * Referenced by: '<S416>/Constant15'
                                        */
extern real_T AT_Cage_L_Start_Y_Blue;  /* Variable: AT_Cage_L_Start_Y_Blue
                                        * Referenced by: '<S416>/Constant32'
                                        */
extern real_T AT_Cage_L_Start_Y_Red;   /* Variable: AT_Cage_L_Start_Y_Red
                                        * Referenced by: '<S416>/Constant25'
                                        */
extern real_T AT_Cage_M_Finish_Angle_Blue;/* Variable: AT_Cage_M_Finish_Angle_Blue
                                           * Referenced by: '<S416>/Constant53'
                                           */
extern real_T AT_Cage_M_Finish_Angle_Red;/* Variable: AT_Cage_M_Finish_Angle_Red
                                          * Referenced by: '<S416>/Constant52'
                                          */
extern real_T AT_Cage_M_Finish_X_Blue; /* Variable: AT_Cage_M_Finish_X_Blue
                                        * Referenced by: '<S416>/Constant34'
                                        */
extern real_T AT_Cage_M_Finish_X_Red;  /* Variable: AT_Cage_M_Finish_X_Red
                                        * Referenced by: '<S416>/Constant35'
                                        */
extern real_T AT_Cage_M_Finish_Y_Blue; /* Variable: AT_Cage_M_Finish_Y_Blue
                                        * Referenced by: '<S416>/Constant41'
                                        */
extern real_T AT_Cage_M_Finish_Y_Red;  /* Variable: AT_Cage_M_Finish_Y_Red
                                        * Referenced by: '<S416>/Constant44'
                                        */
extern real_T AT_Cage_M_Start_Angle_Blue;/* Variable: AT_Cage_M_Start_Angle_Blue
                                          * Referenced by: '<S416>/Constant47'
                                          */
extern real_T AT_Cage_M_Start_Angle_Red;/* Variable: AT_Cage_M_Start_Angle_Red
                                         * Referenced by: '<S416>/Constant46'
                                         */
extern real_T AT_Cage_M_Start_X_Blue;  /* Variable: AT_Cage_M_Start_X_Blue
                                        * Referenced by: '<S416>/Constant20'
                                        */
extern real_T AT_Cage_M_Start_X_Red;   /* Variable: AT_Cage_M_Start_X_Red
                                        * Referenced by: '<S416>/Constant24'
                                        */
extern real_T AT_Cage_M_Start_Y_Blue;  /* Variable: AT_Cage_M_Start_Y_Blue
                                        * Referenced by: '<S416>/Constant22'
                                        */
extern real_T AT_Cage_M_Start_Y_Red;   /* Variable: AT_Cage_M_Start_Y_Red
                                        * Referenced by: '<S416>/Constant33'
                                        */
extern real_T AT_Cage_R_Finish_Angle_Blue;/* Variable: AT_Cage_R_Finish_Angle_Blue
                                           * Referenced by: '<S416>/Constant51'
                                           */
extern real_T AT_Cage_R_Finish_Angle_Red;/* Variable: AT_Cage_R_Finish_Angle_Red
                                          * Referenced by: '<S416>/Constant56'
                                          */
extern real_T AT_Cage_R_Finish_X_Blue; /* Variable: AT_Cage_R_Finish_X_Blue
                                        * Referenced by: '<S416>/Constant36'
                                        */
extern real_T AT_Cage_R_Finish_X_Red;  /* Variable: AT_Cage_R_Finish_X_Red
                                        * Referenced by: '<S416>/Constant38'
                                        */
extern real_T AT_Cage_R_Finish_Y_Blue; /* Variable: AT_Cage_R_Finish_Y_Blue
                                        * Referenced by: '<S416>/Constant45'
                                        */
extern real_T AT_Cage_R_Finish_Y_Red;  /* Variable: AT_Cage_R_Finish_Y_Red
                                        * Referenced by: '<S416>/Constant40'
                                        */
extern real_T AT_Cage_R_Start_Angle_Blue;/* Variable: AT_Cage_R_Start_Angle_Blue
                                          * Referenced by: '<S416>/Constant1'
                                          */
extern real_T AT_Cage_R_Start_Angle_Red;/* Variable: AT_Cage_R_Start_Angle_Red
                                         * Referenced by: '<S416>/Constant50'
                                         */
extern real_T AT_Cage_R_Start_X_Blue;  /* Variable: AT_Cage_R_Start_X_Blue
                                        * Referenced by: '<S416>/Constant29'
                                        */
extern real_T AT_Cage_R_Start_X_Red;   /* Variable: AT_Cage_R_Start_X_Red
                                        * Referenced by: '<S416>/Constant31'
                                        */
extern real_T AT_Cage_R_Start_Y_Blue;  /* Variable: AT_Cage_R_Start_Y_Blue
                                        * Referenced by: '<S416>/Constant6'
                                        */
extern real_T AT_Cage_R_Start_Y_Red;   /* Variable: AT_Cage_R_Start_Y_Red
                                        * Referenced by: '<S416>/Constant16'
                                        */
extern real_T AT_Integral_Enable_Error_Angle;
                                     /* Variable: AT_Integral_Enable_Error_Angle
                                      * Referenced by:
                                      *   '<S423>/Constant'
                                      *   '<S34>/Constant'
                                      */
extern real_T AT_Integral_Enable_Error_XY;/* Variable: AT_Integral_Enable_Error_XY
                                           * Referenced by:
                                           *   '<S430>/Constant'
                                           *   '<S431>/Constant'
                                           *   '<S41>/Constant'
                                           *   '<S42>/Constant'
                                           */
extern real_T AT_Max_Error_Angle;      /* Variable: AT_Max_Error_Angle
                                        * Referenced by:
                                        *   '<S429>/Constant'
                                        *   '<S40>/Constant'
                                        */
extern real_T AT_Max_Error_XY;         /* Variable: AT_Max_Error_XY
                                        * Referenced by:
                                        *   '<S427>/Constant'
                                        *   '<S428>/Constant'
                                        *   '<S38>/Constant'
                                        *   '<S39>/Constant'
                                        */
extern real_T AT_On_Target_Time;       /* Variable: AT_On_Target_Time
                                        * Referenced by:
                                        *   '<S419>/Reefscape_Chart'
                                        *   '<S29>/Reefscape_Chart'
                                        */
extern real_T AT_Processor_Angle_Blue; /* Variable: AT_Processor_Angle_Blue
                                        * Referenced by: '<S416>/Constant10'
                                        */
extern real_T AT_Processor_Angle_Red;  /* Variable: AT_Processor_Angle_Red
                                        * Referenced by: '<S416>/Constant8'
                                        */
extern real_T AT_Processor_X_Blue;     /* Variable: AT_Processor_X_Blue
                                        * Referenced by: '<S416>/Constant18'
                                        */
extern real_T AT_Processor_X_Red;      /* Variable: AT_Processor_X_Red
                                        * Referenced by: '<S416>/Constant19'
                                        */
extern real_T AT_Processor_Y_Blue;     /* Variable: AT_Processor_Y_Blue
                                        * Referenced by: '<S416>/Constant21'
                                        */
extern real_T AT_Processor_Y_Red;      /* Variable: AT_Processor_Y_Red
                                        * Referenced by: '<S416>/Constant23'
                                        */
extern real_T AT_Reef_Target_Algae_X;  /* Variable: AT_Reef_Target_Algae_X
                                        * Referenced by:
                                        *   '<S417>/Constant7'
                                        *   '<S27>/Constant7'
                                        */
extern real_T AT_Reef_Target_Algae_Y;  /* Variable: AT_Reef_Target_Algae_Y
                                        * Referenced by:
                                        *   '<S417>/Constant6'
                                        *   '<S27>/Constant6'
                                        */
extern real_T AT_Reef_Target_Center_Y; /* Variable: AT_Reef_Target_Center_Y
                                        * Referenced by:
                                        *   '<S417>/Constant3'
                                        *   '<S27>/Constant3'
                                        */
extern real_T AT_Reef_Target_L1_X;     /* Variable: AT_Reef_Target_L1_X
                                        * Referenced by:
                                        *   '<S417>/Constant4'
                                        *   '<S27>/Constant4'
                                        */
extern real_T AT_Reef_Target_L2_L3_X;  /* Variable: AT_Reef_Target_L2_L3_X
                                        * Referenced by:
                                        *   '<S417>/Constant'
                                        *   '<S27>/Constant'
                                        */
extern real_T AT_Reef_Target_L4_X;     /* Variable: AT_Reef_Target_L4_X
                                        * Referenced by:
                                        *   '<S417>/Constant5'
                                        *   '<S27>/Constant5'
                                        */
extern real_T AT_Reef_Target_Left_Y;   /* Variable: AT_Reef_Target_Left_Y
                                        * Referenced by:
                                        *   '<S417>/Constant1'
                                        *   '<S27>/Constant1'
                                        */
extern real_T AT_Reef_Target_Right_Y;  /* Variable: AT_Reef_Target_Right_Y
                                        * Referenced by:
                                        *   '<S417>/Constant2'
                                        *   '<S27>/Constant2'
                                        */
extern real_T AT_Steering_Error_Angle_Gain_P;
                                     /* Variable: AT_Steering_Error_Angle_Gain_P
                                      * Referenced by:
                                      *   '<S31>/Constant4'
                                      *   '<S439>/Constant4'
                                      */
extern real_T AT_Steering_Speed_Max;   /* Variable: AT_Steering_Speed_Max
                                        * Referenced by:
                                        *   '<S31>/Constant10'
                                        *   '<S439>/Constant10'
                                        */
extern real_T AT_Translation_Control_Gain_Field;
                                  /* Variable: AT_Translation_Control_Gain_Field
                                   * Referenced by: '<S440>/Gain2'
                                   */
extern real_T AT_Translation_Control_Gain_Relative;
                               /* Variable: AT_Translation_Control_Gain_Relative
                                * Referenced by:
                                *   '<S31>/Gain1'
                                *   '<S440>/Gain1'
                                */
extern real_T AT_Translation_Speed_Max_Field;
                                     /* Variable: AT_Translation_Speed_Max_Field
                                      * Referenced by: '<S440>/Constant5'
                                      */
extern real_T AT_Translation_Speed_Max_Relative;
                                  /* Variable: AT_Translation_Speed_Max_Relative
                                   * Referenced by:
                                   *   '<S31>/Constant8'
                                   *   '<S440>/Constant8'
                                   */
extern real_T Actuator_DC;             /* Variable: Actuator_DC
                                        * Referenced by: '<S12>/Constant6'
                                        */
extern real_T Actuator_Rev_Startup_Range;/* Variable: Actuator_Rev_Startup_Range
                                          * Referenced by: '<S103>/Constant'
                                          */
extern real_T Actuator_Rev_Target;     /* Variable: Actuator_Rev_Target
                                        * Referenced by: '<S104>/Constant'
                                        */
extern real_T Algae_Eject_Time;        /* Variable: Algae_Eject_Time
                                        * Referenced by:
                                        *   '<S419>/Reefscape_Chart'
                                        *   '<S29>/Reefscape_Chart'
                                        */
extern real_T Algae_Hold_DC;           /* Variable: Algae_Hold_DC
                                        * Referenced by:
                                        *   '<S419>/Reefscape_Chart'
                                        *   '<S29>/Reefscape_Chart'
                                        */
extern real_T Algae_Pull_In_DC;        /* Variable: Algae_Pull_In_DC
                                        * Referenced by:
                                        *   '<S419>/Reefscape_Chart'
                                        *   '<S29>/Reefscape_Chart'
                                        */
extern real_T Algae_Push_Out_DC;       /* Variable: Algae_Push_Out_DC
                                        * Referenced by:
                                        *   '<S419>/Reefscape_Chart'
                                        *   '<S29>/Reefscape_Chart'
                                        */
extern real_T Auto_Algae_Height_Time;  /* Variable: Auto_Algae_Height_Time
                                        * Referenced by: '<S26>/Reefscape_Auto_Steps'
                                        */
extern real_T Auto_Backup_Time_Reef;   /* Variable: Auto_Backup_Time_Reef
                                        * Referenced by: '<S26>/Reefscape_Auto_Steps'
                                        */
extern real_T Auto_Path1_Delay_to_L4_Time;/* Variable: Auto_Path1_Delay_to_L4_Time
                                           * Referenced by: '<S26>/Reefscape_Auto_Steps'
                                           */
extern real_T Auto_Path2_Delay_to_L4_Time;/* Variable: Auto_Path2_Delay_to_L4_Time
                                           * Referenced by: '<S26>/Reefscape_Auto_Steps'
                                           */
extern real_T Auto_Speed_Algae;        /* Variable: Auto_Speed_Algae
                                        * Referenced by: '<S26>/Reefscape_Auto_Steps'
                                        */
extern real_T Auto_Speed_Coral;        /* Variable: Auto_Speed_Coral
                                        * Referenced by: '<S26>/Reefscape_Auto_Steps'
                                        */
extern real_T Auto_Speed_Reef;         /* Variable: Auto_Speed_Reef
                                        * Referenced by: '<S26>/Reefscape_Auto_Steps'
                                        */
extern real_T Auto_Starting_Position;  /* Variable: Auto_Starting_Position
                                        * Referenced by: '<S26>/Constant1'
                                        */
extern real_T Boost_Trigger_Decreasing_Limit;
                                     /* Variable: Boost_Trigger_Decreasing_Limit
                                      * Referenced by: '<S454>/Constant1'
                                      */
extern real_T Boost_Trigger_High_Speed;/* Variable: Boost_Trigger_High_Speed
                                        * Referenced by:
                                        *   '<S450>/Constant'
                                        *   '<S450>/Saturation'
                                        */
extern real_T Boost_Trigger_Increasing_Limit;
                                     /* Variable: Boost_Trigger_Increasing_Limit
                                      * Referenced by: '<S454>/Constant3'
                                      */
extern real_T Boost_Trigger_Low_Speed; /* Variable: Boost_Trigger_Low_Speed
                                        * Referenced by: '<S450>/Constant1'
                                        */
extern real_T Coral_Arm_Angle_Coral_Score_Lower_Rate;
                             /* Variable: Coral_Arm_Angle_Coral_Score_Lower_Rate
                              * Referenced by:
                              *   '<S419>/Reefscape_Chart'
                              *   '<S29>/Reefscape_Chart'
                              */
extern real_T Coral_Arm_Angle_Error_Threshold;
                                    /* Variable: Coral_Arm_Angle_Error_Threshold
                                     * Referenced by:
                                     *   '<S419>/Reefscape_Chart'
                                     *   '<S29>/Reefscape_Chart'
                                     */
extern real_T Coral_Arm_Angle_L1;      /* Variable: Coral_Arm_Angle_L1
                                        * Referenced by:
                                        *   '<S419>/Reefscape_Chart'
                                        *   '<S29>/Reefscape_Chart'
                                        */
extern real_T Coral_Arm_Angle_L2;      /* Variable: Coral_Arm_Angle_L2
                                        * Referenced by:
                                        *   '<S419>/Reefscape_Chart'
                                        *   '<S29>/Reefscape_Chart'
                                        */
extern real_T Coral_Arm_Angle_L3;      /* Variable: Coral_Arm_Angle_L3
                                        * Referenced by:
                                        *   '<S419>/Reefscape_Chart'
                                        *   '<S29>/Reefscape_Chart'
                                        */
extern real_T Coral_Arm_Angle_L4;      /* Variable: Coral_Arm_Angle_L4
                                        * Referenced by:
                                        *   '<S419>/Reefscape_Chart'
                                        *   '<S29>/Reefscape_Chart'
                                        */
extern real_T Coral_Arm_Angle_L4_Eject_Auto;
                                      /* Variable: Coral_Arm_Angle_L4_Eject_Auto
                                       * Referenced by:
                                       *   '<S419>/Reefscape_Chart'
                                       *   '<S29>/Reefscape_Chart'
                                       */
extern real_T Coral_Arm_Angle_L4_Eject_Teleop;
                                    /* Variable: Coral_Arm_Angle_L4_Eject_Teleop
                                     * Referenced by:
                                     *   '<S419>/Reefscape_Chart'
                                     *   '<S29>/Reefscape_Chart'
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
                                        *   '<S419>/Reefscape_Chart'
                                        *   '<S29>/Reefscape_Chart'
                                        */
extern real_T Coral_Arm_Angle_Start_Thresh;/* Variable: Coral_Arm_Angle_Start_Thresh
                                            * Referenced by:
                                            *   '<S419>/Reefscape_Chart'
                                            *   '<S29>/Reefscape_Chart'
                                            */
extern real_T Coral_Arm_Angle_Up;      /* Variable: Coral_Arm_Angle_Up
                                        * Referenced by:
                                        *   '<S419>/Reefscape_Chart'
                                        *   '<S29>/Reefscape_Chart'
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
                                        *   '<S419>/Reefscape_Chart'
                                        *   '<S29>/Reefscape_Chart'
                                        */
extern real_T Coral_Arm_Neg90_DC;      /* Variable: Coral_Arm_Neg90_DC
                                        * Referenced by: '<S8>/Constant2'
                                        */
extern real_T Coral_Arm_Pos90_DC;      /* Variable: Coral_Arm_Pos90_DC
                                        * Referenced by: '<S8>/Constant1'
                                        */
extern real_T Coral_Detect_Distance;   /* Variable: Coral_Detect_Distance
                                        * Referenced by:
                                        *   '<S419>/Reefscape_Chart'
                                        *   '<S29>/Reefscape_Chart'
                                        */
extern real_T Coral_Eject_Time;        /* Variable: Coral_Eject_Time
                                        * Referenced by:
                                        *   '<S419>/Reefscape_Chart'
                                        *   '<S29>/Reefscape_Chart'
                                        */
extern real_T Coral_Motor_DC_Eject;    /* Variable: Coral_Motor_DC_Eject
                                        * Referenced by:
                                        *   '<S419>/Reefscape_Chart'
                                        *   '<S29>/Reefscape_Chart'
                                        */
extern real_T Coral_Motor_DC_Hold;     /* Variable: Coral_Motor_DC_Hold
                                        * Referenced by:
                                        *   '<S419>/Reefscape_Chart'
                                        *   '<S29>/Reefscape_Chart'
                                        */
extern real_T Coral_Motor_DC_Pickup;   /* Variable: Coral_Motor_DC_Pickup
                                        * Referenced by:
                                        *   '<S419>/Reefscape_Chart'
                                        *   '<S29>/Reefscape_Chart'
                                        */
extern real_T Drive_Motor_Control_D;   /* Variable: Drive_Motor_Control_D
                                        * Referenced by:
                                        *   '<S272>/Constant3'
                                        *   '<S293>/Constant3'
                                        *   '<S314>/Constant3'
                                        *   '<S335>/Constant3'
                                        */
extern real_T Drive_Motor_Control_D_FilterCoeff;
                                  /* Variable: Drive_Motor_Control_D_FilterCoeff
                                   * Referenced by:
                                   *   '<S272>/Constant2'
                                   *   '<S293>/Constant2'
                                   *   '<S314>/Constant2'
                                   *   '<S335>/Constant2'
                                   */
extern real_T Drive_Motor_Control_D_LL;/* Variable: Drive_Motor_Control_D_LL
                                        * Referenced by:
                                        *   '<S272>/Saturation'
                                        *   '<S293>/Saturation'
                                        *   '<S314>/Saturation'
                                        *   '<S335>/Saturation'
                                        */
extern real_T Drive_Motor_Control_D_UL;/* Variable: Drive_Motor_Control_D_UL
                                        * Referenced by:
                                        *   '<S272>/Saturation'
                                        *   '<S293>/Saturation'
                                        *   '<S314>/Saturation'
                                        *   '<S335>/Saturation'
                                        */
extern real_T Drive_Motor_Control_FF;  /* Variable: Drive_Motor_Control_FF
                                        * Referenced by:
                                        *   '<S272>/Gain'
                                        *   '<S293>/Gain'
                                        *   '<S314>/Gain'
                                        *   '<S335>/Gain'
                                        */
extern real_T Drive_Motor_Control_I;   /* Variable: Drive_Motor_Control_I
                                        * Referenced by:
                                        *   '<S272>/Gain2'
                                        *   '<S293>/Gain2'
                                        *   '<S314>/Gain2'
                                        *   '<S335>/Gain2'
                                        */
extern real_T Drive_Motor_Control_I_LL;/* Variable: Drive_Motor_Control_I_LL
                                        * Referenced by:
                                        *   '<S272>/Saturation1'
                                        *   '<S293>/Saturation1'
                                        *   '<S314>/Saturation1'
                                        *   '<S335>/Saturation1'
                                        */
extern real_T Drive_Motor_Control_I_UL;/* Variable: Drive_Motor_Control_I_UL
                                        * Referenced by:
                                        *   '<S272>/Saturation1'
                                        *   '<S293>/Saturation1'
                                        *   '<S314>/Saturation1'
                                        *   '<S335>/Saturation1'
                                        */
extern real_T Drive_Motor_Control_P;   /* Variable: Drive_Motor_Control_P
                                        * Referenced by:
                                        *   '<S272>/Gain1'
                                        *   '<S293>/Gain1'
                                        *   '<S314>/Gain1'
                                        *   '<S335>/Gain1'
                                        */
extern real_T Drive_Motor_Control_Sign_Change_Deadband;
                           /* Variable: Drive_Motor_Control_Sign_Change_Deadband
                            * Referenced by:
                            *   '<S277>/Constant'
                            *   '<S298>/Constant'
                            *   '<S319>/Constant'
                            *   '<S340>/Constant'
                            */
extern real_T Elevator_Bottom_DC;      /* Variable: Elevator_Bottom_DC
                                        * Referenced by: '<S10>/Constant7'
                                        */
extern real_T Elevator_DC_Inc_RL;      /* Variable: Elevator_DC_Inc_RL
                                        * Referenced by: '<S87>/Constant3'
                                        */
extern real_T Elevator_Error_Bottom_Disable;
                                      /* Variable: Elevator_Error_Bottom_Disable
                                       * Referenced by: '<S84>/Constant'
                                       */
extern real_T Elevator_Error_Increase; /* Variable: Elevator_Error_Increase
                                        * Referenced by: '<S10>/Constant6'
                                        */
extern real_T Elevator_Gain_Int;       /* Variable: Elevator_Gain_Int
                                        * Referenced by: '<S88>/Gain2'
                                        */
extern real_T Elevator_Gain_Prop;      /* Variable: Elevator_Gain_Prop
                                        * Referenced by: '<S88>/Gain1'
                                        */
extern real_T Elevator_Height_Algae_High;/* Variable: Elevator_Height_Algae_High
                                          * Referenced by:
                                          *   '<S419>/Reefscape_Chart'
                                          *   '<S29>/Reefscape_Chart'
                                          */
extern real_T Elevator_Height_Algae_Low;/* Variable: Elevator_Height_Algae_Low
                                         * Referenced by:
                                         *   '<S419>/Reefscape_Chart'
                                         *   '<S29>/Reefscape_Chart'
                                         */
extern real_T Elevator_Height_Algae_Score;/* Variable: Elevator_Height_Algae_Score
                                           * Referenced by:
                                           *   '<S419>/Reefscape_Chart'
                                           *   '<S29>/Reefscape_Chart'
                                           */
extern real_T Elevator_Height_Bottom;  /* Variable: Elevator_Height_Bottom
                                        * Referenced by:
                                        *   '<S419>/Reefscape_Chart'
                                        *   '<S29>/Reefscape_Chart'
                                        */
extern real_T Elevator_Height_Coral_Arm_Low_Thresh;
                               /* Variable: Elevator_Height_Coral_Arm_Low_Thresh
                                * Referenced by: '<S67>/Constant'
                                */
extern real_T Elevator_Height_Coral_Score_Lower_Rate;
                             /* Variable: Elevator_Height_Coral_Score_Lower_Rate
                              * Referenced by:
                              *   '<S419>/Reefscape_Chart'
                              *   '<S29>/Reefscape_Chart'
                              */
extern real_T Elevator_Height_End_Game;/* Variable: Elevator_Height_End_Game
                                        * Referenced by:
                                        *   '<S12>/Constant5'
                                        *   '<S419>/Reefscape_Chart'
                                        *   '<S29>/Reefscape_Chart'
                                        */
extern real_T Elevator_Height_Error_Threshold;
                                    /* Variable: Elevator_Height_Error_Threshold
                                     * Referenced by:
                                     *   '<S85>/Constant'
                                     *   '<S419>/Reefscape_Chart'
                                     *   '<S29>/Reefscape_Chart'
                                     */
extern real_T Elevator_Height_L1;      /* Variable: Elevator_Height_L1
                                        * Referenced by:
                                        *   '<S419>/Reefscape_Chart'
                                        *   '<S29>/Reefscape_Chart'
                                        */
extern real_T Elevator_Height_L2;      /* Variable: Elevator_Height_L2
                                        * Referenced by:
                                        *   '<S419>/Reefscape_Chart'
                                        *   '<S29>/Reefscape_Chart'
                                        */
extern real_T Elevator_Height_L2_Eject;/* Variable: Elevator_Height_L2_Eject
                                        * Referenced by:
                                        *   '<S419>/Reefscape_Chart'
                                        *   '<S29>/Reefscape_Chart'
                                        */
extern real_T Elevator_Height_L3;      /* Variable: Elevator_Height_L3
                                        * Referenced by:
                                        *   '<S419>/Reefscape_Chart'
                                        *   '<S29>/Reefscape_Chart'
                                        */
extern real_T Elevator_Height_L3_Eject;/* Variable: Elevator_Height_L3_Eject
                                        * Referenced by:
                                        *   '<S419>/Reefscape_Chart'
                                        *   '<S29>/Reefscape_Chart'
                                        */
extern real_T Elevator_Height_L4;      /* Variable: Elevator_Height_L4
                                        * Referenced by:
                                        *   '<S419>/Reefscape_Chart'
                                        *   '<S29>/Reefscape_Chart'
                                        */
extern real_T Elevator_Height_Lower;   /* Variable: Elevator_Height_Lower
                                        * Referenced by:
                                        *   '<S419>/Reefscape_Chart'
                                        *   '<S29>/Reefscape_Chart'
                                        */
extern real_T Elevator_Height_Manual_Gain;/* Variable: Elevator_Height_Manual_Gain
                                           * Referenced by:
                                           *   '<S419>/Reefscape_Chart'
                                           *   '<S29>/Reefscape_Chart'
                                           */
extern real_T Elevator_Height_PickupLower_Reset;
                                  /* Variable: Elevator_Height_PickupLower_Reset
                                   * Referenced by: '<S11>/Constant2'
                                   */
extern real_T Elevator_Height_Prepare; /* Variable: Elevator_Height_Prepare
                                        * Referenced by:
                                        *   '<S419>/Reefscape_Chart'
                                        *   '<S29>/Reefscape_Chart'
                                        */
extern real_T Elevator_Height_Raise;   /* Variable: Elevator_Height_Raise
                                        * Referenced by:
                                        *   '<S419>/Reefscape_Chart'
                                        *   '<S29>/Reefscape_Chart'
                                        */
extern real_T Elevator_Height_Top_Reset;/* Variable: Elevator_Height_Top_Reset
                                         * Referenced by:
                                         *   '<S11>/Constant1'
                                         *   '<S11>/Constant3'
                                         */
extern real_T Elevator_Hold_at_Top_DC; /* Variable: Elevator_Hold_at_Top_DC
                                        * Referenced by: '<S10>/Constant1'
                                        */
extern real_T Elevator_Int_IC;         /* Variable: Elevator_Int_IC
                                        * Referenced by: '<S88>/Constant3'
                                        */
extern real_T Elevator_Int_LL;         /* Variable: Elevator_Int_LL
                                        * Referenced by: '<S88>/Saturation1'
                                        */
extern real_T Elevator_Int_UL;         /* Variable: Elevator_Int_UL
                                        * Referenced by: '<S88>/Saturation1'
                                        */
extern real_T Elevator_LowerPickup_Time;/* Variable: Elevator_LowerPickup_Time
                                         * Referenced by:
                                         *   '<S419>/Reefscape_Chart'
                                         *   '<S29>/Reefscape_Chart'
                                         */
extern real_T Elevator_MotorRev_to_Inch;/* Variable: Elevator_MotorRev_to_Inch
                                         * Referenced by: '<S11>/Gain1'
                                         */
extern real_T Elevator_Total_LL;       /* Variable: Elevator_Total_LL
                                        * Referenced by:
                                        *   '<S88>/Constant1'
                                        *   '<S88>/Saturation2'
                                        */
extern real_T Elevator_Total_UL;       /* Variable: Elevator_Total_UL
                                        * Referenced by:
                                        *   '<S88>/Constant'
                                        *   '<S88>/Saturation2'
                                        */
extern real_T Gyro_Calibration_Reset_Degree;
                                      /* Variable: Gyro_Calibration_Reset_Degree
                                       * Referenced by:
                                       *   '<S13>/Constant2'
                                       *   '<S13>/Unit Delay1'
                                       */
extern real_T Gyro_Calibration_Reset_Flag;/* Variable: Gyro_Calibration_Reset_Flag
                                           * Referenced by: '<S13>/Constant3'
                                           */
extern real_T KF_Enable;               /* Variable: KF_Enable
                                        * Referenced by:
                                        *   '<S16>/Constant1'
                                        *   '<S16>/Constant2'
                                        */
extern real_T Limelight_Tag_Angle_Offset;/* Variable: Limelight_Tag_Angle_Offset
                                          * Referenced by: '<S17>/Constant2'
                                          */
extern real_T Limelight_Tag_X_Offset;  /* Variable: Limelight_Tag_X_Offset
                                        * Referenced by: '<S17>/Constant'
                                        */
extern real_T Limelight_Tag_Y_Offset;  /* Variable: Limelight_Tag_Y_Offset
                                        * Referenced by: '<S17>/Constant1'
                                        */
extern real_T Odometry_IC_X;           /* Variable: Odometry_IC_X
                                        * Referenced by: '<S1>/Constant'
                                        */
extern real_T Odometry_IC_Y;           /* Variable: Odometry_IC_Y
                                        * Referenced by: '<S1>/Constant1'
                                        */
extern real_T Odometry_Reset_IC;       /* Variable: Odometry_Reset_IC
                                        * Referenced by: '<S19>/Constant'
                                        */
extern real_T Odometry_X_Y_TEAR;       /* Variable: Odometry_X_Y_TEAR
                                        * Referenced by: '<S198>/Constant'
                                        */
extern real_T Spline_Last_Pose_Distance_to_Velocity_Gain;
                         /* Variable: Spline_Last_Pose_Distance_to_Velocity_Gain
                          * Referenced by: '<S257>/Constant2'
                          */
extern real_T Spline_Max_Centripital_Acceleration;
                                /* Variable: Spline_Max_Centripital_Acceleration
                                 * Referenced by: '<S257>/Constant1'
                                 */
extern real_T Spline_Pose_Num_Before_End_Reduce_Speed;
                            /* Variable: Spline_Pose_Num_Before_End_Reduce_Speed
                             * Referenced by: '<S204>/Constant'
                             */
extern real_T Spline_Stop_Radius;      /* Variable: Spline_Stop_Radius
                                        * Referenced by: '<S217>/Constant'
                                        */
extern real_T Spline_Velocity_Multiplier_TEST;
                                    /* Variable: Spline_Velocity_Multiplier_TEST
                                     * Referenced by: '<S257>/Constant3'
                                     */
extern real_T Steering_Absolute_Cmd_Approach_Zero_Error_Thresh;
                   /* Variable: Steering_Absolute_Cmd_Approach_Zero_Error_Thresh
                    * Referenced by: '<S368>/Constant5'
                    */
extern real_T Steering_Absolute_Cmd_Approach_Zero_Final_Thresh;
                   /* Variable: Steering_Absolute_Cmd_Approach_Zero_Final_Thresh
                    * Referenced by: '<S368>/Constant6'
                    */
extern real_T Steering_Absolute_Cmd_NonZero_Error_Thresh;
                         /* Variable: Steering_Absolute_Cmd_NonZero_Error_Thresh
                          * Referenced by: '<S368>/Constant9'
                          */
extern real_T Steering_Absolute_Cmd_NonZero_Final_Scale_Factor;
                   /* Variable: Steering_Absolute_Cmd_NonZero_Final_Scale_Factor
                    * Referenced by: '<S368>/Constant10'
                    */
extern real_T Steering_Absolute_Cmd_Rate_Limit_Dec;
                               /* Variable: Steering_Absolute_Cmd_Rate_Limit_Dec
                                * Referenced by: '<S368>/Constant1'
                                */
extern real_T Steering_Absolute_Cmd_Rate_Limit_Inc;
                               /* Variable: Steering_Absolute_Cmd_Rate_Limit_Inc
                                * Referenced by: '<S368>/Constant3'
                                */
extern real_T Steering_Heading_Control_D;/* Variable: Steering_Heading_Control_D
                                          * Referenced by: '<S385>/Constant3'
                                          */
extern real_T Steering_Heading_Control_D_FilterCoeff;
                             /* Variable: Steering_Heading_Control_D_FilterCoeff
                              * Referenced by: '<S385>/Constant2'
                              */
extern real_T Steering_Heading_Control_D_LL;
                                      /* Variable: Steering_Heading_Control_D_LL
                                       * Referenced by: '<S385>/Saturation'
                                       */
extern real_T Steering_Heading_Control_D_UL;
                                      /* Variable: Steering_Heading_Control_D_UL
                                       * Referenced by: '<S385>/Saturation'
                                       */
extern real_T Steering_Heading_Control_Deadzone;
                                  /* Variable: Steering_Heading_Control_Deadzone
                                   * Referenced by: '<S384>/Constant'
                                   */
extern real_T Steering_Heading_Control_I;/* Variable: Steering_Heading_Control_I
                                          * Referenced by: '<S385>/Gain2'
                                          */
extern real_T Steering_Heading_Control_I_LL;
                                      /* Variable: Steering_Heading_Control_I_LL
                                       * Referenced by: '<S385>/Saturation1'
                                       */
extern real_T Steering_Heading_Control_I_UL;
                                      /* Variable: Steering_Heading_Control_I_UL
                                       * Referenced by: '<S385>/Saturation1'
                                       */
extern real_T Steering_Heading_Control_P;/* Variable: Steering_Heading_Control_P
                                          * Referenced by: '<S385>/Gain1'
                                          */
extern real_T Steering_Heading_Control_Total_LL;
                                  /* Variable: Steering_Heading_Control_Total_LL
                                   * Referenced by:
                                   *   '<S385>/Constant1'
                                   *   '<S385>/Saturation2'
                                   */
extern real_T Steering_Heading_Control_Total_UL;
                                  /* Variable: Steering_Heading_Control_Total_UL
                                   * Referenced by:
                                   *   '<S385>/Constant'
                                   *   '<S385>/Saturation2'
                                   */
extern real_T Steering_Motor_Control_D;/* Variable: Steering_Motor_Control_D
                                        * Referenced by:
                                        *   '<S275>/Constant3'
                                        *   '<S296>/Constant3'
                                        *   '<S317>/Constant3'
                                        *   '<S338>/Constant3'
                                        */
extern real_T Steering_Motor_Control_D_FilterCoeff;
                               /* Variable: Steering_Motor_Control_D_FilterCoeff
                                * Referenced by:
                                *   '<S275>/Constant2'
                                *   '<S296>/Constant2'
                                *   '<S317>/Constant2'
                                *   '<S338>/Constant2'
                                */
extern real_T Steering_Motor_Control_D_LL;/* Variable: Steering_Motor_Control_D_LL
                                           * Referenced by:
                                           *   '<S275>/Saturation'
                                           *   '<S296>/Saturation'
                                           *   '<S317>/Saturation'
                                           *   '<S338>/Saturation'
                                           */
extern real_T Steering_Motor_Control_D_UL;/* Variable: Steering_Motor_Control_D_UL
                                           * Referenced by:
                                           *   '<S275>/Saturation'
                                           *   '<S296>/Saturation'
                                           *   '<S317>/Saturation'
                                           *   '<S338>/Saturation'
                                           */
extern real_T Steering_Motor_Control_I;/* Variable: Steering_Motor_Control_I
                                        * Referenced by:
                                        *   '<S275>/Gain2'
                                        *   '<S296>/Gain2'
                                        *   '<S317>/Gain2'
                                        *   '<S338>/Gain2'
                                        */
extern real_T Steering_Motor_Control_I_LL;/* Variable: Steering_Motor_Control_I_LL
                                           * Referenced by:
                                           *   '<S275>/Saturation1'
                                           *   '<S296>/Saturation1'
                                           *   '<S317>/Saturation1'
                                           *   '<S338>/Saturation1'
                                           */
extern real_T Steering_Motor_Control_I_UL;/* Variable: Steering_Motor_Control_I_UL
                                           * Referenced by:
                                           *   '<S275>/Saturation1'
                                           *   '<S296>/Saturation1'
                                           *   '<S317>/Saturation1'
                                           *   '<S338>/Saturation1'
                                           */
extern real_T Steering_Motor_Control_P;/* Variable: Steering_Motor_Control_P
                                        * Referenced by:
                                        *   '<S275>/Gain1'
                                        *   '<S296>/Gain1'
                                        *   '<S317>/Gain1'
                                        *   '<S338>/Gain1'
                                        */
extern real_T Steering_Relative_Cmd_Approach_Zero_Error_Thresh;
                   /* Variable: Steering_Relative_Cmd_Approach_Zero_Error_Thresh
                    * Referenced by: '<S367>/Constant5'
                    */
extern real_T Steering_Relative_Cmd_Approach_Zero_Final_Thresh;
                   /* Variable: Steering_Relative_Cmd_Approach_Zero_Final_Thresh
                    * Referenced by: '<S367>/Constant6'
                    */
extern real_T Steering_Relative_Cmd_NonZero_Error_Thresh;
                         /* Variable: Steering_Relative_Cmd_NonZero_Error_Thresh
                          * Referenced by: '<S367>/Constant9'
                          */
extern real_T Steering_Relative_Cmd_NonZero_Final_Scale_Factor;
                   /* Variable: Steering_Relative_Cmd_NonZero_Final_Scale_Factor
                    * Referenced by: '<S367>/Constant10'
                    */
extern real_T Steering_Relative_Cmd_Rate_Limit_Dec;
                               /* Variable: Steering_Relative_Cmd_Rate_Limit_Dec
                                * Referenced by: '<S367>/Constant1'
                                */
extern real_T Steering_Relative_Cmd_Rate_Limit_Inc;
                               /* Variable: Steering_Relative_Cmd_Rate_Limit_Inc
                                * Referenced by: '<S367>/Constant3'
                                */
extern real_T Steering_Relative_Gain;  /* Variable: Steering_Relative_Gain
                                        * Referenced by: '<S439>/Constant'
                                        */
extern real_T Steering_Twist_Gain;     /* Variable: Steering_Twist_Gain
                                        * Referenced by: '<S439>/Constant1'
                                        */
extern real_T TEST_CANdle_Flag;        /* Variable: TEST_CANdle_Flag
                                        * Referenced by: '<S3>/Constant2'
                                        */
extern real_T TEST_CANdle_LED_ID;      /* Variable: TEST_CANdle_LED_ID
                                        * Referenced by: '<S3>/Constant3'
                                        */
extern real_T TEST_Swerve_Mode_Override_Flag;
                                     /* Variable: TEST_Swerve_Mode_Override_Flag
                                      * Referenced by: '<S420>/Constant5'
                                      */
extern real_T TEST_Swerve_Mode_Steering;/* Variable: TEST_Swerve_Mode_Steering
                                         * Referenced by: '<S420>/Constant8'
                                         */
extern real_T TEST_Swerve_Mode_Translation;/* Variable: TEST_Swerve_Mode_Translation
                                            * Referenced by: '<S420>/Constant7'
                                            */
extern real_T Translation_Speed_Approach_Zero_Error_Thresh;
                       /* Variable: Translation_Speed_Approach_Zero_Error_Thresh
                        * Referenced by: '<S355>/Constant5'
                        */
extern real_T Translation_Speed_Approach_Zero_Final_Thresh;
                       /* Variable: Translation_Speed_Approach_Zero_Final_Thresh
                        * Referenced by: '<S355>/Constant6'
                        */
extern real_T Translation_Speed_NonZero_Error_Thresh;
                             /* Variable: Translation_Speed_NonZero_Error_Thresh
                              * Referenced by: '<S355>/Constant9'
                              */
extern real_T Translation_Speed_NonZero_Final_Scale_Factor;
                       /* Variable: Translation_Speed_NonZero_Final_Scale_Factor
                        * Referenced by: '<S355>/Constant10'
                        */
extern real_T Translation_Speed_Rate_Limit_Dec;
                                   /* Variable: Translation_Speed_Rate_Limit_Dec
                                    * Referenced by: '<S355>/Constant1'
                                    */
extern real_T Translation_Speed_Rate_Limit_Inc;
                                   /* Variable: Translation_Speed_Rate_Limit_Inc
                                    * Referenced by: '<S355>/Constant3'
                                    */
extern real_T Translation_Twist_Gain;  /* Variable: Translation_Twist_Gain
                                        * Referenced by: '<S440>/Gain'
                                        */
extern real_T Twist_Deadzone_neg;      /* Variable: Twist_Deadzone_neg
                                        * Referenced by:
                                        *   '<S439>/Dead Zone'
                                        *   '<S440>/Dead Zone'
                                        */
extern real_T Twist_Deadzone_pos;      /* Variable: Twist_Deadzone_pos
                                        * Referenced by:
                                        *   '<S439>/Dead Zone'
                                        *   '<S440>/Dead Zone'
                                        */
extern real_T Winch_Hold_DC;           /* Variable: Winch_Hold_DC
                                        * Referenced by: '<S12>/Constant2'
                                        */
extern real_T Winch_Rev_Target;        /* Variable: Winch_Rev_Target
                                        * Referenced by: '<S102>/Constant'
                                        */
extern real_T Winch_Spool_DC;          /* Variable: Winch_Spool_DC
                                        * Referenced by: '<S12>/Constant1'
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
 * Block '<S27>/Logical Operator10' : Unused code path elimination
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
 * Block '<S95>/Data Type Duplicate' : Unused code path elimination
 * Block '<S95>/Data Type Propagation' : Unused code path elimination
 * Block '<S96>/FixPt Data Type Duplicate1' : Unused code path elimination
 * Block '<S98>/Data Type Duplicate' : Unused code path elimination
 * Block '<S98>/Data Type Propagation' : Unused code path elimination
 * Block '<S89>/Data Type Duplicate' : Unused code path elimination
 * Block '<S89>/Data Type Propagation' : Unused code path elimination
 * Block '<S178>/Data Type Duplicate' : Unused code path elimination
 * Block '<S179>/Data Type Duplicate' : Unused code path elimination
 * Block '<S180>/Conversion' : Unused code path elimination
 * Block '<S180>/Data Type Duplicate' : Unused code path elimination
 * Block '<S181>/Data Type Duplicate' : Unused code path elimination
 * Block '<S139>/Data Type Duplicate' : Unused code path elimination
 * Block '<S140>/Data Type Duplicate' : Unused code path elimination
 * Block '<S141>/Data Type Duplicate' : Unused code path elimination
 * Block '<S142>/Data Type Duplicate' : Unused code path elimination
 * Block '<S143>/Data Type Duplicate' : Unused code path elimination
 * Block '<S144>/Data Type Duplicate' : Unused code path elimination
 * Block '<S145>/Data Type Duplicate' : Unused code path elimination
 * Block '<S146>/Conversion' : Unused code path elimination
 * Block '<S146>/Data Type Duplicate' : Unused code path elimination
 * Block '<S147>/Data Type Duplicate' : Unused code path elimination
 * Block '<S148>/Data Type Duplicate' : Unused code path elimination
 * Block '<S149>/Data Type Duplicate' : Unused code path elimination
 * Block '<S151>/Data Type Duplicate' : Unused code path elimination
 * Block '<S152>/Data Type Duplicate' : Unused code path elimination
 * Block '<S135>/G' : Unused code path elimination
 * Block '<S135>/H' : Unused code path elimination
 * Block '<S135>/N' : Unused code path elimination
 * Block '<S135>/P0' : Unused code path elimination
 * Block '<S135>/Q' : Unused code path elimination
 * Block '<S135>/R' : Unused code path elimination
 * Block '<S167>/CheckSignalProperties' : Unused code path elimination
 * Block '<S176>/CheckSignalProperties' : Unused code path elimination
 * Block '<S177>/CheckSignalProperties' : Unused code path elimination
 * Block '<S20>/Unit Delay1' : Unused code path elimination
 * Block '<S21>/Gain' : Unused code path elimination
 * Block '<S21>/Gain1' : Unused code path elimination
 * Block '<S21>/Scope' : Unused code path elimination
 * Block '<S216>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S220>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S226>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S260>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S280>/Data Type Duplicate' : Unused code path elimination
 * Block '<S280>/Data Type Propagation' : Unused code path elimination
 * Block '<S272>/Scope' : Unused code path elimination
 * Block '<S274>/Scope' : Unused code path elimination
 * Block '<S291>/Data Type Duplicate' : Unused code path elimination
 * Block '<S291>/Data Type Propagation' : Unused code path elimination
 * Block '<S275>/Scope' : Unused code path elimination
 * Block '<S301>/Data Type Duplicate' : Unused code path elimination
 * Block '<S301>/Data Type Propagation' : Unused code path elimination
 * Block '<S293>/Scope' : Unused code path elimination
 * Block '<S295>/Scope' : Unused code path elimination
 * Block '<S312>/Data Type Duplicate' : Unused code path elimination
 * Block '<S312>/Data Type Propagation' : Unused code path elimination
 * Block '<S296>/Scope' : Unused code path elimination
 * Block '<S322>/Data Type Duplicate' : Unused code path elimination
 * Block '<S322>/Data Type Propagation' : Unused code path elimination
 * Block '<S314>/Scope' : Unused code path elimination
 * Block '<S316>/Scope' : Unused code path elimination
 * Block '<S333>/Data Type Duplicate' : Unused code path elimination
 * Block '<S333>/Data Type Propagation' : Unused code path elimination
 * Block '<S317>/Scope' : Unused code path elimination
 * Block '<S343>/Data Type Duplicate' : Unused code path elimination
 * Block '<S343>/Data Type Propagation' : Unused code path elimination
 * Block '<S335>/Scope' : Unused code path elimination
 * Block '<S337>/Scope' : Unused code path elimination
 * Block '<S354>/Data Type Duplicate' : Unused code path elimination
 * Block '<S354>/Data Type Propagation' : Unused code path elimination
 * Block '<S338>/Scope' : Unused code path elimination
 * Block '<S365>/Data Type Duplicate' : Unused code path elimination
 * Block '<S365>/Data Type Propagation' : Unused code path elimination
 * Block '<S366>/FixPt Data Type Duplicate1' : Unused code path elimination
 * Block '<S375>/Data Type Duplicate' : Unused code path elimination
 * Block '<S375>/Data Type Propagation' : Unused code path elimination
 * Block '<S376>/FixPt Data Type Duplicate1' : Unused code path elimination
 * Block '<S382>/Data Type Duplicate' : Unused code path elimination
 * Block '<S382>/Data Type Propagation' : Unused code path elimination
 * Block '<S383>/FixPt Data Type Duplicate1' : Unused code path elimination
 * Block '<S389>/Data Type Duplicate' : Unused code path elimination
 * Block '<S389>/Data Type Propagation' : Unused code path elimination
 * Block '<S385>/Scope' : Unused code path elimination
 * Block '<S417>/Logical Operator10' : Unused code path elimination
 * Block '<S449>/Data Type Duplicate' : Unused code path elimination
 * Block '<S449>/Data Type Propagation' : Unused code path elimination
 * Block '<S456>/Data Type Duplicate' : Unused code path elimination
 * Block '<S456>/Data Type Propagation' : Unused code path elimination
 * Block '<S457>/FixPt Data Type Duplicate1' : Unused code path elimination
 * Block '<S26>/Signal Copy3' : Eliminate redundant signal conversion block
 * Block '<S26>/Signal Copy4' : Eliminate redundant signal conversion block
 * Block '<S26>/Signal Copy5' : Eliminate redundant signal conversion block
 * Block '<S178>/Conversion' : Eliminate redundant data type conversion
 * Block '<S179>/Conversion' : Eliminate redundant data type conversion
 * Block '<S181>/Conversion' : Eliminate redundant data type conversion
 * Block '<S135>/DataTypeConversionEnable' : Eliminate redundant data type conversion
 * Block '<S151>/Conversion' : Eliminate redundant data type conversion
 * Block '<S155>/Reshape' : Reshape block reduction
 * Block '<S135>/ReshapeX0' : Reshape block reduction
 * Block '<S135>/Reshapeu' : Reshape block reduction
 * Block '<S135>/Reshapexhat' : Reshape block reduction
 * Block '<S16>/Signal Copy' : Eliminate redundant signal conversion block
 * Block '<S16>/Signal Copy1' : Eliminate redundant signal conversion block
 * Block '<S19>/Signal Copy' : Eliminate redundant signal conversion block
 * Block '<S19>/Signal Copy1' : Eliminate redundant signal conversion block
 * Block '<S19>/Signal Copy2' : Eliminate redundant signal conversion block
 * Block '<S19>/Signal Copy3' : Eliminate redundant signal conversion block
 * Block '<S256>/Signal Copy' : Eliminate redundant signal conversion block
 * Block '<S24>/Signal Copy1' : Eliminate redundant signal conversion block
 * Block '<S24>/Signal Copy2' : Eliminate redundant signal conversion block
 * Block '<S24>/Signal Copy3' : Eliminate redundant signal conversion block
 * Block '<S24>/Signal Copy4' : Eliminate redundant signal conversion block
 * Block '<S24>/Signal Copy5' : Eliminate redundant signal conversion block
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
 * '<S9>'   : 'Code_Gen_Model/RoboRio Controls/Disabled'
 * '<S10>'  : 'Code_Gen_Model/RoboRio Controls/Elevator Motor Control'
 * '<S11>'  : 'Code_Gen_Model/RoboRio Controls/Elevator_Height_Pre_Processing'
 * '<S12>'  : 'Code_Gen_Model/RoboRio Controls/End_Game'
 * '<S13>'  : 'Code_Gen_Model/RoboRio Controls/Gyro_Angles'
 * '<S14>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing'
 * '<S15>'  : 'Code_Gen_Model/RoboRio Controls/Internal Feedback'
 * '<S16>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter'
 * '<S17>'  : 'Code_Gen_Model/RoboRio Controls/Limelight_Tag_Corrections'
 * '<S18>'  : 'Code_Gen_Model/RoboRio Controls/Merge'
 * '<S19>'  : 'Code_Gen_Model/RoboRio Controls/Odometry'
 * '<S20>'  : 'Code_Gen_Model/RoboRio Controls/Previous GameState'
 * '<S21>'  : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following'
 * '<S22>'  : 'Code_Gen_Model/RoboRio Controls/Steer_Module_Offset_Adjustments'
 * '<S23>'  : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive'
 * '<S24>'  : 'Code_Gen_Model/RoboRio Controls/Teleop'
 * '<S25>'  : 'Code_Gen_Model/RoboRio Controls/Test'
 * '<S26>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem'
 * '<S27>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/April Tag Relative Errors'
 * '<S28>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/Path ID Selection'
 * '<S29>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/Reefscape Teleop'
 * '<S30>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/Reefscape_Auto_Steps'
 * '<S31>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/Swerve_Drive_Commands'
 * '<S32>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/April Tag Relative Errors/Compare To Constant'
 * '<S33>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/April Tag Relative Errors/Compare To Constant1'
 * '<S34>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/April Tag Relative Errors/Compare To Constant10'
 * '<S35>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/April Tag Relative Errors/Compare To Constant2'
 * '<S36>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/April Tag Relative Errors/Compare To Constant3'
 * '<S37>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/April Tag Relative Errors/Compare To Constant4'
 * '<S38>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/April Tag Relative Errors/Compare To Constant5'
 * '<S39>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/April Tag Relative Errors/Compare To Constant6'
 * '<S40>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/April Tag Relative Errors/Compare To Constant7'
 * '<S41>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/April Tag Relative Errors/Compare To Constant8'
 * '<S42>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/April Tag Relative Errors/Compare To Constant9'
 * '<S43>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/April Tag Relative Errors/Compare To Zero'
 * '<S44>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/April Tag Relative Errors/Compare To Zero1'
 * '<S45>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/April Tag Relative Errors/Compare To Zero2'
 * '<S46>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/April Tag Relative Errors/Compare To Zero3'
 * '<S47>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/April Tag Relative Errors/Compare To Zero4'
 * '<S48>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/April Tag Relative Errors/Compare To Zero5'
 * '<S49>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/April Tag Relative Errors/Compare To Zero9'
 * '<S50>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/Path ID Selection/Compare To Constant'
 * '<S51>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/Path ID Selection/Compare To Constant1'
 * '<S52>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/Reefscape Teleop/Detect Increase'
 * '<S53>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/Reefscape Teleop/Detect Increase1'
 * '<S54>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/Reefscape Teleop/Detect Increase10'
 * '<S55>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/Reefscape Teleop/Detect Increase11'
 * '<S56>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/Reefscape Teleop/Detect Increase12'
 * '<S57>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/Reefscape Teleop/Detect Increase2'
 * '<S58>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/Reefscape Teleop/Detect Increase3'
 * '<S59>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/Reefscape Teleop/Detect Increase4'
 * '<S60>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/Reefscape Teleop/Detect Increase5'
 * '<S61>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/Reefscape Teleop/Detect Increase6'
 * '<S62>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/Reefscape Teleop/Detect Increase7'
 * '<S63>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/Reefscape Teleop/Detect Increase8'
 * '<S64>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/Reefscape Teleop/Detect Increase9'
 * '<S65>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/Reefscape Teleop/Reefscape_Chart'
 * '<S66>'  : 'Code_Gen_Model/RoboRio Controls/Autonomous/Subsystem/Swerve_Drive_Commands/Saturation Dynamic'
 * '<S67>'  : 'Code_Gen_Model/RoboRio Controls/Coral Arm Motor Control/Compare To Constant'
 * '<S68>'  : 'Code_Gen_Model/RoboRio Controls/Coral Arm Motor Control/Compare To Constant1'
 * '<S69>'  : 'Code_Gen_Model/RoboRio Controls/Coral Arm Motor Control/Compare To Constant2'
 * '<S70>'  : 'Code_Gen_Model/RoboRio Controls/Coral Arm Motor Control/Compare To Constant3'
 * '<S71>'  : 'Code_Gen_Model/RoboRio Controls/Coral Arm Motor Control/Complex Rate Limit'
 * '<S72>'  : 'Code_Gen_Model/RoboRio Controls/Coral Arm Motor Control/PI and Integral Enable'
 * '<S73>'  : 'Code_Gen_Model/RoboRio Controls/Coral Arm Motor Control/Saturation Dynamic'
 * '<S74>'  : 'Code_Gen_Model/RoboRio Controls/Coral Arm Motor Control/Complex Rate Limit/Compare To Zero'
 * '<S75>'  : 'Code_Gen_Model/RoboRio Controls/Coral Arm Motor Control/Complex Rate Limit/Compare To Zero1'
 * '<S76>'  : 'Code_Gen_Model/RoboRio Controls/Coral Arm Motor Control/Complex Rate Limit/Compare To Zero2'
 * '<S77>'  : 'Code_Gen_Model/RoboRio Controls/Coral Arm Motor Control/Complex Rate Limit/Compare To Zero3'
 * '<S78>'  : 'Code_Gen_Model/RoboRio Controls/Coral Arm Motor Control/Complex Rate Limit/Discrete Rate Limiter'
 * '<S79>'  : 'Code_Gen_Model/RoboRio Controls/Coral Arm Motor Control/Complex Rate Limit/Discrete Rate Limiter/Saturation Dynamic'
 * '<S80>'  : 'Code_Gen_Model/RoboRio Controls/Coral Arm Motor Control/Complex Rate Limit/Discrete Rate Limiter/Unit Delay External IC'
 * '<S81>'  : 'Code_Gen_Model/RoboRio Controls/Coral Arm Motor Control/PI and Integral Enable/Detect Increase'
 * '<S82>'  : 'Code_Gen_Model/RoboRio Controls/Coral Arm Motor Control/PI and Integral Enable/Saturation Dynamic'
 * '<S83>'  : 'Code_Gen_Model/RoboRio Controls/Coral Arm Motor Control/PI and Integral Enable/Saturation Dynamic1'
 * '<S84>'  : 'Code_Gen_Model/RoboRio Controls/Elevator Motor Control/Compare To Constant'
 * '<S85>'  : 'Code_Gen_Model/RoboRio Controls/Elevator Motor Control/Compare To Constant2'
 * '<S86>'  : 'Code_Gen_Model/RoboRio Controls/Elevator Motor Control/Compare To Zero'
 * '<S87>'  : 'Code_Gen_Model/RoboRio Controls/Elevator Motor Control/Complex Rate Limit'
 * '<S88>'  : 'Code_Gen_Model/RoboRio Controls/Elevator Motor Control/PI and Integral Enable'
 * '<S89>'  : 'Code_Gen_Model/RoboRio Controls/Elevator Motor Control/Saturation Dynamic'
 * '<S90>'  : 'Code_Gen_Model/RoboRio Controls/Elevator Motor Control/Complex Rate Limit/Compare To Zero'
 * '<S91>'  : 'Code_Gen_Model/RoboRio Controls/Elevator Motor Control/Complex Rate Limit/Compare To Zero1'
 * '<S92>'  : 'Code_Gen_Model/RoboRio Controls/Elevator Motor Control/Complex Rate Limit/Compare To Zero2'
 * '<S93>'  : 'Code_Gen_Model/RoboRio Controls/Elevator Motor Control/Complex Rate Limit/Compare To Zero3'
 * '<S94>'  : 'Code_Gen_Model/RoboRio Controls/Elevator Motor Control/Complex Rate Limit/Discrete Rate Limiter'
 * '<S95>'  : 'Code_Gen_Model/RoboRio Controls/Elevator Motor Control/Complex Rate Limit/Discrete Rate Limiter/Saturation Dynamic'
 * '<S96>'  : 'Code_Gen_Model/RoboRio Controls/Elevator Motor Control/Complex Rate Limit/Discrete Rate Limiter/Unit Delay External IC'
 * '<S97>'  : 'Code_Gen_Model/RoboRio Controls/Elevator Motor Control/PI and Integral Enable/Detect Increase'
 * '<S98>'  : 'Code_Gen_Model/RoboRio Controls/Elevator Motor Control/PI and Integral Enable/Saturation Dynamic'
 * '<S99>'  : 'Code_Gen_Model/RoboRio Controls/Elevator_Height_Pre_Processing/Detect Decrease'
 * '<S100>' : 'Code_Gen_Model/RoboRio Controls/Elevator_Height_Pre_Processing/Detect Decrease1'
 * '<S101>' : 'Code_Gen_Model/RoboRio Controls/Elevator_Height_Pre_Processing/Detect Increase'
 * '<S102>' : 'Code_Gen_Model/RoboRio Controls/End_Game/Compare To Constant'
 * '<S103>' : 'Code_Gen_Model/RoboRio Controls/End_Game/Compare To Constant1'
 * '<S104>' : 'Code_Gen_Model/RoboRio Controls/End_Game/Compare To Constant2'
 * '<S105>' : 'Code_Gen_Model/RoboRio Controls/End_Game/Compare To Zero'
 * '<S106>' : 'Code_Gen_Model/RoboRio Controls/Gyro_Angles/Degrees to Radians'
 * '<S107>' : 'Code_Gen_Model/RoboRio Controls/Gyro_Angles/Detect Increase'
 * '<S108>' : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Constant'
 * '<S109>' : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Constant1'
 * '<S110>' : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Constant2'
 * '<S111>' : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Constant3'
 * '<S112>' : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Constant4'
 * '<S113>' : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Constant5'
 * '<S114>' : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Constant6'
 * '<S115>' : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Constant7'
 * '<S116>' : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Constant8'
 * '<S117>' : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero'
 * '<S118>' : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero1'
 * '<S119>' : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero11'
 * '<S120>' : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero12'
 * '<S121>' : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero13'
 * '<S122>' : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero14'
 * '<S123>' : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero15'
 * '<S124>' : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero16'
 * '<S125>' : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero17'
 * '<S126>' : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero2'
 * '<S127>' : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero3'
 * '<S128>' : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero4'
 * '<S129>' : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero5'
 * '<S130>' : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero6'
 * '<S131>' : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero8'
 * '<S132>' : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Detect Increase'
 * '<S133>' : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Detect Increase1'
 * '<S134>' : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Detect Increase2'
 * '<S135>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter'
 * '<S136>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CalculatePL'
 * '<S137>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CalculateYhat'
 * '<S138>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CovarianceOutputConfigurator'
 * '<S139>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionA'
 * '<S140>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionB'
 * '<S141>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionC'
 * '<S142>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionD'
 * '<S143>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionG'
 * '<S144>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionH'
 * '<S145>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionN'
 * '<S146>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionP'
 * '<S147>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionP0'
 * '<S148>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionQ'
 * '<S149>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionR'
 * '<S150>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionReset'
 * '<S151>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionX'
 * '<S152>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionX0'
 * '<S153>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionu'
 * '<S154>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/MemoryP'
 * '<S155>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/Observer'
 * '<S156>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/ReducedQRN'
 * '<S157>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/Reset'
 * '<S158>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/Reshapeyhat'
 * '<S159>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/ScalarExpansionP0'
 * '<S160>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/ScalarExpansionQ'
 * '<S161>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/ScalarExpansionR'
 * '<S162>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/UseCurrentEstimator'
 * '<S163>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkA'
 * '<S164>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkB'
 * '<S165>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkC'
 * '<S166>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkD'
 * '<S167>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkEnable'
 * '<S168>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkG'
 * '<S169>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkH'
 * '<S170>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkN'
 * '<S171>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkP0'
 * '<S172>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkQ'
 * '<S173>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkR'
 * '<S174>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkReset'
 * '<S175>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkX0'
 * '<S176>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checku'
 * '<S177>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checky'
 * '<S178>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CalculatePL/DataTypeConversionL'
 * '<S179>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CalculatePL/DataTypeConversionM'
 * '<S180>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CalculatePL/DataTypeConversionP'
 * '<S181>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CalculatePL/DataTypeConversionZ'
 * '<S182>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CalculatePL/Ground'
 * '<S183>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CalculateYhat/Ground'
 * '<S184>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CovarianceOutputConfigurator/decideOutput'
 * '<S185>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CovarianceOutputConfigurator/decideOutput/SqrtUsedFcn'
 * '<S186>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/Observer/MeasurementUpdate'
 * '<S187>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/ReducedQRN/Ground'
 * '<S188>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/UseCurrentEstimator/Enabled Subsystem'
 * '<S189>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Difference'
 * '<S190>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Difference1'
 * '<S191>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Difference3'
 * '<S192>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Difference4'
 * '<S193>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Difference5'
 * '<S194>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Polar to Cartesian'
 * '<S195>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Polar to Cartesian1'
 * '<S196>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Polar to Cartesian2'
 * '<S197>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Polar to Cartesian3'
 * '<S198>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Tear for validation testing'
 * '<S199>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Tear for validation testing/Compare To Zero'
 * '<S200>' : 'Code_Gen_Model/RoboRio Controls/Previous GameState/Chart'
 * '<S201>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Pass Through'
 * '<S202>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled'
 * '<S203>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses'
 * '<S204>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Find_Targets'
 * '<S205>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Steering_and_Drive_Commands'
 * '<S206>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/If Action Subsystem'
 * '<S207>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification'
 * '<S208>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning'
 * '<S209>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Escape_Auto_Driving'
 * '<S210>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid'
 * '<S211>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Catch-all if not the last point and not in the circle'
 * '<S212>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Circle_Check_Valid'
 * '<S213>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Increment_If_Rectangle_Check'
 * '<S214>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Circle_Check_Valid/Increment_Search'
 * '<S215>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Circle_Check_Valid/Is_Last_Point'
 * '<S216>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Circle_Check_Valid/Increment_Search/Increment Real World'
 * '<S217>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Circle_Check_Valid/Is_Last_Point/Compare To Constant'
 * '<S218>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Circle_Check_Valid/Is_Last_Point/Robot_Is_At_Destination'
 * '<S219>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Circle_Check_Valid/Is_Last_Point/Straight_Line_Path_To_End'
 * '<S220>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Increment_If_Rectangle_Check/Increment Real World'
 * '<S221>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Increment_If_Rectangle_Check/Subsystem Reference'
 * '<S222>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Increment_If_Rectangle_Check/Subsystem Reference/Compare To Constant'
 * '<S223>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Increment_If_Rectangle_Check/Subsystem Reference/Compare To Constant1'
 * '<S224>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Make_Knots'
 * '<S225>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning'
 * '<S226>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Make_Knots/Decrement Real World'
 * '<S227>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Make_Knots/Find_Control_Pose'
 * '<S228>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Make_Knots/Find_Control_Pose1'
 * '<S229>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop'
 * '<S230>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Compare To Constant'
 * '<S231>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve'
 * '<S232>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Find_Point_Coefficients'
 * '<S233>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve'
 * '<S234>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Acc'
 * '<S235>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Pos'
 * '<S236>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Vel'
 * '<S237>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Curvature'
 * '<S238>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_U_And_Powers'
 * '<S239>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Acc/Subsystem Reference'
 * '<S240>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Acc/ddA'
 * '<S241>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Acc/ddB'
 * '<S242>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Acc/ddC'
 * '<S243>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Pos/A'
 * '<S244>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Pos/B'
 * '<S245>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Pos/C'
 * '<S246>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Pos/Subsystem Reference'
 * '<S247>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Vel/Subsystem Reference'
 * '<S248>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Vel/dA'
 * '<S249>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Vel/dB'
 * '<S250>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Vel/dC'
 * '<S251>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Curvature/MATLAB Function'
 * '<S252>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Find_Targets/Distance Along Curve'
 * '<S253>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Find_Targets/Find closest index to curve'
 * '<S254>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Find_Targets/Find first index that meets distance target'
 * '<S255>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Find_Targets/Find velocity and heading'
 * '<S256>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Find_Targets/Heading'
 * '<S257>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Find_Targets/Velocity'
 * '<S258>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Find_Targets/Find velocity and heading/Dynamic Lookup Tables'
 * '<S259>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Find_Targets/Find velocity and heading/Latch'
 * '<S260>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Find_Targets/Find velocity and heading/Dynamic Lookup Tables/Decrement'
 * '<S261>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Steering_and_Drive_Commands/Translation Angle'
 * '<S262>' : 'Code_Gen_Model/RoboRio Controls/Steer_Module_Offset_Adjustments/Angle Modulus'
 * '<S263>' : 'Code_Gen_Model/RoboRio Controls/Steer_Module_Offset_Adjustments/Angle Modulus1'
 * '<S264>' : 'Code_Gen_Model/RoboRio Controls/Steer_Module_Offset_Adjustments/Angle Modulus2'
 * '<S265>' : 'Code_Gen_Model/RoboRio Controls/Steer_Module_Offset_Adjustments/Angle Modulus3'
 * '<S266>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module'
 * '<S267>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1'
 * '<S268>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2'
 * '<S269>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3'
 * '<S270>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle'
 * '<S271>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Direction Change Drive Reduction Factor'
 * '<S272>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Feed Forward plus PID and Integral Enable'
 * '<S273>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Optimize'
 * '<S274>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Steering Module Error Drive Reduction Factor'
 * '<S275>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Steering with Angle Error Modulus PID'
 * '<S276>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Tangential_Velocity_To_RPM'
 * '<S277>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Direction Change Drive Reduction Factor/Compare To Constant'
 * '<S278>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Feed Forward plus PID and Integral Enable/Difference'
 * '<S279>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Feed Forward plus PID and Integral Enable/Low_Pass_Filter'
 * '<S280>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Feed Forward plus PID and Integral Enable/Saturation Dynamic'
 * '<S281>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Optimize/Compare To Constant'
 * '<S282>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Optimize/Minus1'
 * '<S283>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Optimize/RotateBy'
 * '<S284>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Optimize/Minus1/RotateBy'
 * '<S285>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Optimize/Minus1/RotateBy/Compare To Constant'
 * '<S286>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Optimize/RotateBy/Compare To Constant'
 * '<S287>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Steering Module Error Drive Reduction Factor/Angle Modulus to plus or minus pi over two'
 * '<S288>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Steering with Angle Error Modulus PID/Angle Modulus'
 * '<S289>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Steering with Angle Error Modulus PID/Difference'
 * '<S290>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Steering with Angle Error Modulus PID/Low_Pass_Filter'
 * '<S291>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Steering with Angle Error Modulus PID/Saturation Dynamic'
 * '<S292>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Direction Change Drive Reduction Factor'
 * '<S293>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Feed Forward plus PID and Integral Enable'
 * '<S294>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Optimize'
 * '<S295>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Steering Module Error Drive Reduction Factor'
 * '<S296>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Steering with Angle Error Modulus PID'
 * '<S297>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Tangential_Velocity_To_RPM'
 * '<S298>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Direction Change Drive Reduction Factor/Compare To Constant'
 * '<S299>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Feed Forward plus PID and Integral Enable/Difference'
 * '<S300>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Feed Forward plus PID and Integral Enable/Low_Pass_Filter'
 * '<S301>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Feed Forward plus PID and Integral Enable/Saturation Dynamic'
 * '<S302>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Optimize/Compare To Constant'
 * '<S303>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Optimize/Minus1'
 * '<S304>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Optimize/RotateBy'
 * '<S305>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Optimize/Minus1/RotateBy'
 * '<S306>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Optimize/Minus1/RotateBy/Compare To Constant'
 * '<S307>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Optimize/RotateBy/Compare To Constant'
 * '<S308>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Steering Module Error Drive Reduction Factor/Angle Modulus to plus or minus pi over two'
 * '<S309>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Steering with Angle Error Modulus PID/Angle Modulus'
 * '<S310>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Steering with Angle Error Modulus PID/Difference'
 * '<S311>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Steering with Angle Error Modulus PID/Low_Pass_Filter'
 * '<S312>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Steering with Angle Error Modulus PID/Saturation Dynamic'
 * '<S313>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Direction Change Drive Reduction Factor'
 * '<S314>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Feed Forward plus PID and Integral Enable'
 * '<S315>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Optimize'
 * '<S316>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Steering Module Error Drive Reduction Factor'
 * '<S317>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Steering with Angle Error Modulus PID'
 * '<S318>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Tangential_Velocity_To_RPM'
 * '<S319>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Direction Change Drive Reduction Factor/Compare To Constant'
 * '<S320>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Feed Forward plus PID and Integral Enable/Difference'
 * '<S321>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Feed Forward plus PID and Integral Enable/Low_Pass_Filter'
 * '<S322>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Feed Forward plus PID and Integral Enable/Saturation Dynamic'
 * '<S323>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Optimize/Compare To Constant'
 * '<S324>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Optimize/Minus1'
 * '<S325>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Optimize/RotateBy'
 * '<S326>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Optimize/Minus1/RotateBy'
 * '<S327>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Optimize/Minus1/RotateBy/Compare To Constant'
 * '<S328>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Optimize/RotateBy/Compare To Constant'
 * '<S329>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Steering Module Error Drive Reduction Factor/Angle Modulus to plus or minus pi over two'
 * '<S330>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Steering with Angle Error Modulus PID/Angle Modulus'
 * '<S331>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Steering with Angle Error Modulus PID/Difference'
 * '<S332>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Steering with Angle Error Modulus PID/Low_Pass_Filter'
 * '<S333>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Steering with Angle Error Modulus PID/Saturation Dynamic'
 * '<S334>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Direction Change Drive Reduction Factor'
 * '<S335>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Feed Forward plus PID and Integral Enable'
 * '<S336>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Optimize'
 * '<S337>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Steering Module Error Drive Reduction Factor'
 * '<S338>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Steering with Angle Error Modulus PID'
 * '<S339>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Tangential_Velocity_To_RPM'
 * '<S340>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Direction Change Drive Reduction Factor/Compare To Constant'
 * '<S341>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Feed Forward plus PID and Integral Enable/Difference'
 * '<S342>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Feed Forward plus PID and Integral Enable/Low_Pass_Filter'
 * '<S343>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Feed Forward plus PID and Integral Enable/Saturation Dynamic'
 * '<S344>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Optimize/Compare To Constant'
 * '<S345>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Optimize/Minus1'
 * '<S346>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Optimize/RotateBy'
 * '<S347>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Optimize/Minus1/RotateBy'
 * '<S348>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Optimize/Minus1/RotateBy/Compare To Constant'
 * '<S349>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Optimize/RotateBy/Compare To Constant'
 * '<S350>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Steering Module Error Drive Reduction Factor/Angle Modulus to plus or minus pi over two'
 * '<S351>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Steering with Angle Error Modulus PID/Angle Modulus'
 * '<S352>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Steering with Angle Error Modulus PID/Difference'
 * '<S353>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Steering with Angle Error Modulus PID/Low_Pass_Filter'
 * '<S354>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Steering with Angle Error Modulus PID/Saturation Dynamic'
 * '<S355>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Complex Rate Limit'
 * '<S356>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Initialize Function'
 * '<S357>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command'
 * '<S358>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Translation Steering Command'
 * '<S359>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator'
 * '<S360>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Complex Rate Limit/Compare To Zero'
 * '<S361>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Complex Rate Limit/Compare To Zero1'
 * '<S362>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Complex Rate Limit/Compare To Zero2'
 * '<S363>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Complex Rate Limit/Compare To Zero3'
 * '<S364>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Complex Rate Limit/Discrete Rate Limiter'
 * '<S365>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Complex Rate Limit/Discrete Rate Limiter/Saturation Dynamic'
 * '<S366>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Complex Rate Limit/Discrete Rate Limiter/Unit Delay External IC'
 * '<S367>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit'
 * '<S368>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit1'
 * '<S369>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Steering Heading PID'
 * '<S370>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit/Compare To Zero'
 * '<S371>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit/Compare To Zero1'
 * '<S372>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit/Compare To Zero2'
 * '<S373>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit/Compare To Zero3'
 * '<S374>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit/Discrete Rate Limiter'
 * '<S375>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit/Discrete Rate Limiter/Saturation Dynamic'
 * '<S376>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit/Discrete Rate Limiter/Unit Delay External IC'
 * '<S377>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit1/Compare To Zero'
 * '<S378>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit1/Compare To Zero1'
 * '<S379>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit1/Compare To Zero2'
 * '<S380>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit1/Compare To Zero3'
 * '<S381>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit1/Discrete Rate Limiter'
 * '<S382>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit1/Discrete Rate Limiter/Saturation Dynamic'
 * '<S383>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit1/Discrete Rate Limiter/Unit Delay External IC'
 * '<S384>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Steering Heading PID/Compare To Constant'
 * '<S385>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Steering Heading PID/PID with Error Wrapping'
 * '<S386>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Steering Heading PID/PID with Error Wrapping/Angle Modulus'
 * '<S387>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Steering Heading PID/PID with Error Wrapping/Difference'
 * '<S388>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Steering Heading PID/PID with Error Wrapping/Low_Pass_Filter'
 * '<S389>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Steering Heading PID/PID with Error Wrapping/Saturation Dynamic'
 * '<S390>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Translation Steering Command/Angle Modulus'
 * '<S391>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Reduce Speeds for Maximum Speed Limit'
 * '<S392>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add'
 * '<S393>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add1'
 * '<S394>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add2'
 * '<S395>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add3'
 * '<S396>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add/Angle_Saver'
 * '<S397>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add/Cartesian to Polar'
 * '<S398>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add/Polar to Cartesian'
 * '<S399>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add/Polar to Cartesian1'
 * '<S400>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add/Angle_Saver/Compare To Zero1'
 * '<S401>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add1/Angle_Saver'
 * '<S402>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add1/Cartesian to Polar'
 * '<S403>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add1/Polar to Cartesian'
 * '<S404>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add1/Polar to Cartesian1'
 * '<S405>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add1/Angle_Saver/Compare To Zero1'
 * '<S406>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add2/Angle_Saver'
 * '<S407>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add2/Cartesian to Polar'
 * '<S408>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add2/Polar to Cartesian'
 * '<S409>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add2/Polar to Cartesian1'
 * '<S410>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add2/Angle_Saver/Compare To Zero1'
 * '<S411>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add3/Angle_Saver'
 * '<S412>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add3/Cartesian to Polar'
 * '<S413>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add3/Polar to Cartesian'
 * '<S414>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add3/Polar to Cartesian1'
 * '<S415>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add3/Angle_Saver/Compare To Zero1'
 * '<S416>' : 'Code_Gen_Model/RoboRio Controls/Teleop/April Tag Field XY Errors and Target Angle'
 * '<S417>' : 'Code_Gen_Model/RoboRio Controls/Teleop/April Tag Relative Errors'
 * '<S418>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive'
 * '<S419>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Reefscape Teleop'
 * '<S420>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Subsystem'
 * '<S421>' : 'Code_Gen_Model/RoboRio Controls/Teleop/April Tag Relative Errors/Compare To Constant'
 * '<S422>' : 'Code_Gen_Model/RoboRio Controls/Teleop/April Tag Relative Errors/Compare To Constant1'
 * '<S423>' : 'Code_Gen_Model/RoboRio Controls/Teleop/April Tag Relative Errors/Compare To Constant10'
 * '<S424>' : 'Code_Gen_Model/RoboRio Controls/Teleop/April Tag Relative Errors/Compare To Constant2'
 * '<S425>' : 'Code_Gen_Model/RoboRio Controls/Teleop/April Tag Relative Errors/Compare To Constant3'
 * '<S426>' : 'Code_Gen_Model/RoboRio Controls/Teleop/April Tag Relative Errors/Compare To Constant4'
 * '<S427>' : 'Code_Gen_Model/RoboRio Controls/Teleop/April Tag Relative Errors/Compare To Constant5'
 * '<S428>' : 'Code_Gen_Model/RoboRio Controls/Teleop/April Tag Relative Errors/Compare To Constant6'
 * '<S429>' : 'Code_Gen_Model/RoboRio Controls/Teleop/April Tag Relative Errors/Compare To Constant7'
 * '<S430>' : 'Code_Gen_Model/RoboRio Controls/Teleop/April Tag Relative Errors/Compare To Constant8'
 * '<S431>' : 'Code_Gen_Model/RoboRio Controls/Teleop/April Tag Relative Errors/Compare To Constant9'
 * '<S432>' : 'Code_Gen_Model/RoboRio Controls/Teleop/April Tag Relative Errors/Compare To Zero'
 * '<S433>' : 'Code_Gen_Model/RoboRio Controls/Teleop/April Tag Relative Errors/Compare To Zero1'
 * '<S434>' : 'Code_Gen_Model/RoboRio Controls/Teleop/April Tag Relative Errors/Compare To Zero2'
 * '<S435>' : 'Code_Gen_Model/RoboRio Controls/Teleop/April Tag Relative Errors/Compare To Zero3'
 * '<S436>' : 'Code_Gen_Model/RoboRio Controls/Teleop/April Tag Relative Errors/Compare To Zero4'
 * '<S437>' : 'Code_Gen_Model/RoboRio Controls/Teleop/April Tag Relative Errors/Compare To Zero5'
 * '<S438>' : 'Code_Gen_Model/RoboRio Controls/Teleop/April Tag Relative Errors/Compare To Zero9'
 * '<S439>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering'
 * '<S440>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation'
 * '<S441>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering/Compare To Zero2'
 * '<S442>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering/Detect Increase'
 * '<S443>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering/Detect Increase1'
 * '<S444>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering/Detect Increase2'
 * '<S445>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering/Detect Increase3'
 * '<S446>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering/Detect Increase4'
 * '<S447>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering/Detect Increase5'
 * '<S448>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering/Previous active game state was not Teleop'
 * '<S449>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering/Saturation Dynamic'
 * '<S450>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Boost and Rate Limit'
 * '<S451>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Compare To Zero'
 * '<S452>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Compare To Zero1'
 * '<S453>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Latch Outputs when Both Inputs Zero'
 * '<S454>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Boost and Rate Limit/Simple Rate Limit'
 * '<S455>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Boost and Rate Limit/Simple Rate Limit/Discrete Rate Limiter'
 * '<S456>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Boost and Rate Limit/Simple Rate Limit/Discrete Rate Limiter/Saturation Dynamic'
 * '<S457>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Boost and Rate Limit/Simple Rate Limit/Discrete Rate Limiter/Unit Delay External IC'
 * '<S458>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Latch Outputs when Both Inputs Zero/Compare To Zero'
 * '<S459>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Latch Outputs when Both Inputs Zero/Compare To Zero1'
 * '<S460>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Reefscape Teleop/Detect Increase'
 * '<S461>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Reefscape Teleop/Detect Increase1'
 * '<S462>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Reefscape Teleop/Detect Increase10'
 * '<S463>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Reefscape Teleop/Detect Increase11'
 * '<S464>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Reefscape Teleop/Detect Increase12'
 * '<S465>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Reefscape Teleop/Detect Increase2'
 * '<S466>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Reefscape Teleop/Detect Increase3'
 * '<S467>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Reefscape Teleop/Detect Increase4'
 * '<S468>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Reefscape Teleop/Detect Increase5'
 * '<S469>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Reefscape Teleop/Detect Increase6'
 * '<S470>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Reefscape Teleop/Detect Increase7'
 * '<S471>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Reefscape Teleop/Detect Increase8'
 * '<S472>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Reefscape Teleop/Detect Increase9'
 * '<S473>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Reefscape Teleop/Reefscape_Chart'
 */
#endif                                 /* RTW_HEADER_Code_Gen_Model_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
