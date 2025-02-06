/*
 * Sponsored License - for use in support of a program or activity
 * sponsored by MathWorks.  Not for government, commercial or other
 * non-sponsored organizational use.
 *
 * File: Code_Gen_Model.h
 *
 * Code generated for Simulink model 'Code_Gen_Model'.
 *
 * Model version                  : 2.237
 * Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
 * C/C++ source code generated on : Wed Feb  5 22:00:39 2025
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
#include "rtGetNaN.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block signals (default storage) */
typedef struct {
  real_T Drive_Joystick_X;             /* '<S11>/Signal Copy1' */
  real_T Drive_Joystick_Y;             /* '<S11>/Signal Copy2' */
  real_T Drive_Joystick_Z;             /* '<S11>/Signal Copy3' */
  real_T Steer_Joystick_Y;             /* '<S11>/Signal Copy5' */
  real_T Steer_Joystick_Z;             /* '<S11>/Signal Copy6' */
  real_T Odom_Position_X;              /* '<S15>/Accumulator2' */
  real_T KF_Position_X;                /* '<S13>/Switch' */
  real_T Odom_Position_Y;              /* '<S15>/Accumulator' */
  real_T KF_Position_Y;                /* '<S13>/Switch1' */
  real_T Gyro_Angle_Calibrated_deg;    /* '<S10>/Subtract1' */
  real_T Gyro_Angle_rad;               /* '<S32>/Gain1' */
  real_T Elevator_Height_Measured_Raw; /* '<S9>/Gain1' */
  real_T Elevator_Height_Offset;       /* '<S9>/Subtract' */
  real_T Elevator_Height_Measured;     /* '<S9>/Switch' */
  real_T Coral_Arm_Angle_Measured;     /* '<S1>/Add Constant' */
  real_T Gyro_Angle_Field_rad;         /* '<S10>/Add' */
  real_T Spline_Num_Poses;             /* '<S14>/Merge9' */
  real_T Steering_Abs_Cmd;             /* '<S14>/Merge1' */
  real_T Steering_Rel_Cmd;             /* '<S14>/Merge2' */
  real_T Translation_Speed;            /* '<S14>/Merge4' */
  real_T Translation_Angle;            /* '<S14>/Merge3' */
  real_T Translation_Speed_SPF;        /* '<S17>/Merge2' */
  real_T Translation_Speed_RL;         /* '<S280>/Sum' */
  real_T Translation_Angle_SPF;        /* '<S17>/Merge3' */
  real_T Gyro_Angle_SPF;               /* '<S17>/Merge8' */
  real_T Translation_Steering_Cmd;     /* '<S274>/Switch' */
  real_T Steering_Abs_Cmd_SPF;         /* '<S17>/Merge' */
  real_T Steering_Localized_PID;       /* '<S301>/Saturation2' */
  real_T Steering_Rel_Cmd_SPF;         /* '<S17>/Merge1' */
  real_T Steering_Localized_Cmd;       /* '<S273>/Switch' */
  real_T FL_Desired_Module_Angle;      /* '<S312>/Switch' */
  real_T FL_Steer_Module_Angle;        /* '<S178>/Add1' */
  real_T FL_Desired_Wheel_Speed_in;    /* '<S312>/Switch1' */
  real_T FR_Desired_Wheel_Speed_in;    /* '<S317>/Switch1' */
  real_T BL_Desired_Wheel_Speed_in;    /* '<S322>/Switch1' */
  real_T BR_Desired_Wheel_Speed_in;    /* '<S327>/Switch1' */
  real_T FL_Desired_Wheel_Speed;       /* '<S307>/Product' */
  real_T FR_Desired_Module_Angle;      /* '<S317>/Switch' */
  real_T FR_Steer_Module_Angle;        /* '<S179>/Add1' */
  real_T FR_Desired_Wheel_Speed;       /* '<S307>/Product1' */
  real_T BL_Desired_Module_Angle;      /* '<S322>/Switch' */
  real_T BL_Steer_Module_Angle;        /* '<S180>/Add1' */
  real_T BL_Desired_Wheel_Speed;       /* '<S307>/Product2' */
  real_T BR_Desired_Module_Angle;      /* '<S327>/Switch' */
  real_T BR_Steer_Module_Angle;        /* '<S181>/Add1' */
  real_T BR_Desired_Wheel_Speed;       /* '<S307>/Product3' */
  real_T Elevator_Height_Desired;      /* '<S14>/Merge11' */
  real_T Elevator_Error;               /* '<S8>/Subtract' */
  real_T Elevator_Proportional;        /* '<S27>/Gain1' */
  real_T Elevator_Integral;            /* '<S27>/Switch' */
  real_T Coral_Arm_Angle_Desired;      /* '<S14>/Merge13' */
  real_T Coral_ArmAngle_Error;         /* '<S6>/Subtract' */
  real_T Elevator_Proportional_a;      /* '<S22>/Gain1' */
  real_T Elevator_Integral_j;          /* '<S22>/Switch' */
  real_T Steer_Joystick_X;             /* '<S11>/Signal Copy4' */
  real_T Product6[2];                  /* '<S15>/Product6' */
  real_T Odometry_X_global_est_ft;     /* '<S114>/meters to feet' */
  real_T Odometry_X_global_TEAR_ft;    /* '<S114>/Subtract' */
  real_T Odometry_Y_global_est_ft;     /* '<S114>/meters to feet1' */
  real_T Odometry_Y_global_TEAR_ft;    /* '<S114>/Subtract1' */
  real_T AT_Error_X;                   /* '<S332>/Switch15' */
  real_T AT_Error_Y;                   /* '<S332>/Switch23' */
  real_T Steering_Abs_Gyro_Latch;      /* '<S335>/Switch8' */
  real_T Steering_Abs_Gyro;            /* '<S335>/Switch2' */
  real_T AT_Target_Angle;              /* '<S332>/Switch2' */
  real_T Steering_Abs_Angle;           /* '<S335>/Switch3' */
  real_T Elevator_Height_Desired_m;    /* '<S334>/Coral_Chart' */
  real_T Coral_Arm_Angle_Desired_o;    /* '<S334>/Coral_Chart' */
  real_T Coral_Wheel_DC;               /* '<S334>/Coral_Chart' */
  real_T Spline_Follow_Index;          /* '<S123>/Merge4' */
  real_T Spline_Target_Y;              /* '<S120>/Selector6' */
  real_T Spline_Target_X;              /* '<S120>/Selector2' */
  real_T Product2[2];                  /* '<S104>/Product2' */
  real_T Product3[2];                  /* '<S102>/Product3' */
  uint8_T Active_GameState;            /* '<S16>/Chart' */
  boolean_T Drive_Joystick_Z_Mode;     /* '<S40>/Compare' */
  boolean_T Is_Boosting;               /* '<S47>/Compare' */
  boolean_T Align_Amp;                 /* '<S45>/Compare' */
  boolean_T Align_Speaker;             /* '<S44>/Compare' */
  boolean_T Face_Toward_Driver;        /* '<S43>/Compare' */
  boolean_T Face_Right_Driver;         /* '<S41>/Compare' */
  boolean_T Face_Left_Driver;          /* '<S42>/Compare' */
  boolean_T Face_Away_Driver;          /* '<S39>/Compare' */
  boolean_T Spline_Enable;             /* '<S14>/Merge7' */
  boolean_T Is_Absolute_Translation_SPF;/* '<S17>/Merge4' */
  boolean_T Is_Absolute_Steering_SPF;  /* '<S17>/Merge5' */
  boolean_T Reefscape_Motors_Enable;   /* '<S14>/Merge12' */
  boolean_T Test_Mode;                 /* '<S14>/Merge10' */
  boolean_T Robot_Reached_Destination; /* '<S17>/Merge7' */
  boolean_T Steering_Abs_Angle_Active; /* '<S335>/AND6' */
  boolean_T previous_call_was_for_speaker;/* '<S332>/Logical Operator' */
  boolean_T Spline_Out_Of_Bounds;      /* '<S123>/Merge1' */
} B_Code_Gen_Model_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T DelayInput1_DSTATE;           /* '<S48>/Delay Input1' */
  real_T DelayInput1_DSTATE_e;         /* '<S49>/Delay Input1' */
  real_T DelayInput1_DSTATE_n;         /* '<S50>/Delay Input1' */
  real_T TappedDelay_X[6];             /* '<S13>/Tapped Delay' */
  real_T TappedDelay1_X[6];            /* '<S13>/Tapped Delay1' */
  real_T MemoryX_DSTATE[2];            /* '<S51>/MemoryX' */
  real_T Accumulator2_DSTATE;          /* '<S15>/Accumulator2' */
  real_T Accumulator_DSTATE;           /* '<S15>/Accumulator' */
  real_T DelayInput1_DSTATE_p;         /* '<S33>/Delay Input1' */
  real_T UnitDelay1_DSTATE;            /* '<S10>/Unit Delay1' */
  real_T UnitDelay1_DSTATE_j;          /* '<S9>/Unit Delay1' */
  real_T UnitDelay1_DSTATE_i;          /* '<S304>/Unit Delay1' */
  real_T UD_DSTATE;                    /* '<S303>/UD' */
  real_T UnitDelay_DSTATE_m;           /* '<S301>/Unit Delay' */
  real_T UnitDelay_DSTATE_d;           /* '<S284>/Unit Delay' */
  real_T FixPtUnitDelay1_DSTATE_e;     /* '<S299>/FixPt Unit Delay1' */
  real_T UnitDelay_DSTATE_g;           /* '<S283>/Unit Delay' */
  real_T FixPtUnitDelay1_DSTATE_p;     /* '<S292>/FixPt Unit Delay1' */
  real_T UnitDelay1_DSTATE_b;          /* '<S206>/Unit Delay1' */
  real_T UD_DSTATE_b;                  /* '<S205>/UD' */
  real_T UnitDelay_DSTATE_e;           /* '<S191>/Unit Delay' */
  real_T UnitDelay1_DSTATE_a;          /* '<S195>/Unit Delay1' */
  real_T UD_DSTATE_o;                  /* '<S194>/UD' */
  real_T UnitDelay_DSTATE_f;           /* '<S188>/Unit Delay' */
  real_T UnitDelay1_DSTATE_n;          /* '<S227>/Unit Delay1' */
  real_T UD_DSTATE_i;                  /* '<S226>/UD' */
  real_T UnitDelay_DSTATE_dt;          /* '<S212>/Unit Delay' */
  real_T UnitDelay1_DSTATE_b1;         /* '<S216>/Unit Delay1' */
  real_T UD_DSTATE_e;                  /* '<S215>/UD' */
  real_T UnitDelay_DSTATE_em;          /* '<S209>/Unit Delay' */
  real_T UnitDelay1_DSTATE_nw;         /* '<S248>/Unit Delay1' */
  real_T UD_DSTATE_k;                  /* '<S247>/UD' */
  real_T UnitDelay_DSTATE_k;           /* '<S233>/Unit Delay' */
  real_T UnitDelay1_DSTATE_f;          /* '<S237>/Unit Delay1' */
  real_T UD_DSTATE_l;                  /* '<S236>/UD' */
  real_T UnitDelay_DSTATE_gp;          /* '<S230>/Unit Delay' */
  real_T UnitDelay1_DSTATE_iw;         /* '<S269>/Unit Delay1' */
  real_T UD_DSTATE_ll;                 /* '<S268>/UD' */
  real_T UnitDelay_DSTATE_l;           /* '<S254>/Unit Delay' */
  real_T UnitDelay1_DSTATE_k;          /* '<S258>/Unit Delay1' */
  real_T UD_DSTATE_c;                  /* '<S257>/UD' */
  real_T UnitDelay_DSTATE_a;           /* '<S251>/Unit Delay' */
  real_T UD_DSTATE_d;                  /* '<S105>/UD' */
  real_T UD_DSTATE_j;                  /* '<S106>/UD' */
  real_T UD_DSTATE_m;                  /* '<S107>/UD' */
  real_T UD_DSTATE_ic;                 /* '<S108>/UD' */
  real_T UD_DSTATE_ce;                 /* '<S109>/UD' */
  real_T UnitDelay_DSTATE_c;           /* '<S114>/Unit Delay' */
  real_T UnitDelay1_DSTATE_d;          /* '<S114>/Unit Delay1' */
  real_T UnitDelay1_DSTATE_l;          /* '<S348>/Unit Delay1' */
  real_T UnitDelay_DSTATE_p;           /* '<S348>/Unit Delay' */
  real_T UnitDelay1_DSTATE_j2;         /* '<S335>/Unit Delay1' */
  real_T FixPtUnitDelay1_DSTATE_f;     /* '<S352>/FixPt Unit Delay1' */
  real_T DelayInput1_DSTATE_c;         /* '<S356>/Delay Input1' */
  real_T DelayInput1_DSTATE_nr;        /* '<S357>/Delay Input1' */
  real_T DelayInput1_DSTATE_ez;        /* '<S358>/Delay Input1' */
  real_T DelayInput1_DSTATE_nh;        /* '<S359>/Delay Input1' */
  real_T DelayInput1_DSTATE_i;         /* '<S360>/Delay Input1' */
  real_T DelayInput1_DSTATE_pd;        /* '<S361>/Delay Input1' */
  real_T UnitDelay_DSTATE_gh;          /* '<S119>/Unit Delay' */
  real_T timer;                        /* '<S334>/Coral_Chart' */
  int32_T Selector4_DIMS1[2];          /* '<S140>/Selector4' */
  uint8_T FixPtUnitDelay2_DSTATE;      /* '<S282>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_p;    /* '<S299>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_c;    /* '<S292>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_a;    /* '<S352>/FixPt Unit Delay2' */
  boolean_T DelayInput1_DSTATE_l;      /* '<S31>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_j;      /* '<S29>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_en;     /* '<S23>/Delay Input1' */
  boolean_T UnitDelay_DSTATE_ir;       /* '<S21>/Unit Delay' */
  boolean_T DelayInput1_DSTATE_jp;     /* '<S343>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_f;      /* '<S342>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_m;      /* '<S338>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_k;      /* '<S339>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_g;      /* '<S340>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_g2;     /* '<S341>/Delay Input1' */
  boolean_T UnitDelay2_DSTATE;         /* '<S335>/Unit Delay2' */
  boolean_T UnitDelay4_DSTATE;         /* '<S335>/Unit Delay4' */
  boolean_T DelayInput1_DSTATE_o;      /* '<S362>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_fx;     /* '<S363>/Delay Input1' */
  int8_T Accumulator2_PrevResetState;  /* '<S15>/Accumulator2' */
  int8_T Accumulator_PrevResetState;   /* '<S15>/Accumulator' */
  int8_T SwitchCase_ActiveSubsystem;   /* '<S1>/Switch Case' */
  int8_T If_ActiveSubsystem;           /* '<S17>/If' */
  int8_T If_ActiveSubsystem_h;         /* '<S123>/If' */
  int8_T If_ActiveSubsystem_o;         /* '<S126>/If' */
  int8_T If_ActiveSubsystem_d;         /* '<S128>/If' */
  uint8_T is_active_c4_Code_Gen_Model; /* '<S334>/Coral_Chart' */
  uint8_T is_c4_Code_Gen_Model;        /* '<S334>/Coral_Chart' */
  uint8_T is_Coral_Eject;              /* '<S334>/Coral_Chart' */
  uint8_T is_active_c9_Code_Gen_Model; /* '<S16>/Chart' */
  uint8_T is_c9_Code_Gen_Model;        /* '<S16>/Chart' */
  boolean_T icLoad;                    /* '<S51>/MemoryX' */
  boolean_T EnabledSubsystem_MODE;     /* '<S78>/Enabled Subsystem' */
  boolean_T MeasurementUpdate_MODE;    /* '<S71>/MeasurementUpdate' */
} DW_Code_Gen_Model_T;

/* Invariant block signals (default storage) */
typedef struct {
  const real_T Cos5;                   /* '<S199>/Cos5' */
  const real_T Sin5;                   /* '<S199>/Sin5' */
  const real_T Cos5_g;                 /* '<S220>/Cos5' */
  const real_T Sin5_m;                 /* '<S220>/Sin5' */
  const real_T Cos5_i;                 /* '<S241>/Cos5' */
  const real_T Sin5_e;                 /* '<S241>/Sin5' */
  const real_T Cos5_b;                 /* '<S262>/Cos5' */
  const real_T Sin5_c;                 /* '<S262>/Sin5' */
  const real_T Atan1;                  /* '<S272>/Atan1' */
  const real_T FR_Tangent_Angle;       /* '<S272>/Add1' */
  const real_T Atan3;                  /* '<S272>/Atan3' */
  const real_T BL_Tangent_Angle;       /* '<S272>/Add2' */
  const real_T Atan4;                  /* '<S272>/Atan4' */
  const real_T BR_Tangent_Angle;       /* '<S272>/Add3' */
} ConstB_Code_Gen_Model_T;

/* Constant parameters (default storage) */
typedef struct {
  /* Expression: Steering_Mod_Drv_out
   * Referenced by: '<S336>/Modulation_Drv'
   */
  real_T Modulation_Drv_tableData[21];

  /* Expression: Steering_Mod_Drv_in
   * Referenced by: '<S336>/Modulation_Drv'
   */
  real_T Modulation_Drv_bp01Data[21];

  /* Expression: Steering_Mod_Str_Rel_out
   * Referenced by: '<S335>/Modulation_Str_Y_Rel'
   */
  real_T Modulation_Str_Y_Rel_tableData[21];

  /* Expression: Steering_Mod_Str_Rel_in
   * Referenced by: '<S335>/Modulation_Str_Y_Rel'
   */
  real_T Modulation_Str_Y_Rel_bp01Data[21];

  /* Expression: Rotation_Local_Inv
   * Referenced by: '<S15>/Constant4'
   */
  real_T Constant4_Value[16];

  /* Pooled Parameter (Expression: Drive_Motor_Control_Scale_Factor)
   * Referenced by:
   *   '<S190>/1-D Lookup Table'
   *   '<S211>/1-D Lookup Table'
   *   '<S232>/1-D Lookup Table'
   *   '<S253>/1-D Lookup Table'
   */
  real_T pooled23[2];

  /* Pooled Parameter (Expression: Drive_Motor_Control_Module_Angle_Error)
   * Referenced by:
   *   '<S190>/1-D Lookup Table'
   *   '<S211>/1-D Lookup Table'
   *   '<S232>/1-D Lookup Table'
   *   '<S253>/1-D Lookup Table'
   */
  real_T pooled24[2];
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
  real_T Photon_Est_Pose_X;            /* '<Root>/Photon_Est_Pose_X' */
  real_T Photon_Est_Pose_Y;            /* '<Root>/Photon_Est_Pose_Y' */
  real_T Photon_Est_Pose_Ambiguity;    /* '<Root>/Photon_Est_Pose_Ambiguity' */
  boolean_T AT_Tag_11_Found;           /* '<Root>/AT_Tag_11_Found' */
  boolean_T AT_Tag_12_Found;           /* '<Root>/AT_Tag_12_Found' */
  boolean_T AT_Tag_13_Found;           /* '<Root>/AT_Tag_13_Found' */
  real_T AT_Tag_14_Found;              /* '<Root>/AT_Tag_14_Found' */
  real_T AT_Tag_15_Found;              /* '<Root>/AT_Tag_15_Found' */
  real_T AT_Tag_16_Found;              /* '<Root>/AT_Tag_16_Found' */
  real_T Elevator_Motor_Rev;           /* '<Root>/Elevator_Motor_Rev' */
  real_T Elevator_Limit_Switch_Bottom;
                                     /* '<Root>/Elevator_Limit_Switch_Bottom' */
  real_T Elevator_Limit_Switch_Top;    /* '<Root>/Elevator_Limit_Switch_Top' */
  real_T Coral_Arm_Angle_Measured_Raw;
                                     /* '<Root>/Coral_Arm_Angle_Measured_Raw' */
  real_T Coral_TOF_Distance;           /* '<Root>/Coral_TOF_Distance' */
  real_T Coral_Limit_Switch;           /* '<Root>/Coral_Limit_Switch' */
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
extern real_T AT_Target_Tag_11_Field_Angle;/* Variable: AT_Target_Tag_11_Field_Angle
                                            * Referenced by: '<S332>/Constant12'
                                            */
extern real_T AT_Target_Tag_11_X;      /* Variable: AT_Target_Tag_11_X
                                        * Referenced by: '<S332>/Constant4'
                                        */
extern real_T AT_Target_Tag_11_Y;      /* Variable: AT_Target_Tag_11_Y
                                        * Referenced by: '<S332>/Constant26'
                                        */
extern real_T AT_Target_Tag_12_Field_Angle;/* Variable: AT_Target_Tag_12_Field_Angle
                                            * Referenced by: '<S332>/Constant11'
                                            */
extern real_T AT_Target_Tag_12_X;      /* Variable: AT_Target_Tag_12_X
                                        * Referenced by: '<S332>/Constant17'
                                        */
extern real_T AT_Target_Tag_12_Y;      /* Variable: AT_Target_Tag_12_Y
                                        * Referenced by: '<S332>/Constant3'
                                        */
extern real_T AT_Target_Tag_13_Field_Angle;/* Variable: AT_Target_Tag_13_Field_Angle
                                            * Referenced by: '<S332>/Constant10'
                                            */
extern real_T AT_Target_Tag_13_X;      /* Variable: AT_Target_Tag_13_X
                                        * Referenced by: '<S332>/Constant18'
                                        */
extern real_T AT_Target_Tag_13_Y;      /* Variable: AT_Target_Tag_13_Y
                                        * Referenced by: '<S332>/Constant21'
                                        */
extern real_T AT_Target_Tag_14_Field_Angle;/* Variable: AT_Target_Tag_14_Field_Angle
                                            * Referenced by: '<S332>/Constant8'
                                            */
extern real_T AT_Target_Tag_14_X;      /* Variable: AT_Target_Tag_14_X
                                        * Referenced by: '<S332>/Constant19'
                                        */
extern real_T AT_Target_Tag_14_Y;      /* Variable: AT_Target_Tag_14_Y
                                        * Referenced by: '<S332>/Constant23'
                                        */
extern real_T AT_Target_Tag_15_Field_Angle;/* Variable: AT_Target_Tag_15_Field_Angle
                                            * Referenced by: '<S332>/Constant7'
                                            */
extern real_T AT_Target_Tag_15_X;      /* Variable: AT_Target_Tag_15_X
                                        * Referenced by: '<S332>/Constant20'
                                        */
extern real_T AT_Target_Tag_15_Y;      /* Variable: AT_Target_Tag_15_Y
                                        * Referenced by: '<S332>/Constant24'
                                        */
extern real_T AT_Target_Tag_16_Field_Angle;/* Variable: AT_Target_Tag_16_Field_Angle
                                            * Referenced by: '<S332>/Constant6'
                                            */
extern real_T AT_Target_Tag_16_X;      /* Variable: AT_Target_Tag_16_X
                                        * Referenced by: '<S332>/Constant22'
                                        */
extern real_T AT_Target_Tag_16_Y;      /* Variable: AT_Target_Tag_16_Y
                                        * Referenced by: '<S332>/Constant25'
                                        */
extern real_T AT_Target_Tag_5_Field_Angle;/* Variable: AT_Target_Tag_5_Field_Angle
                                           * Referenced by: '<S332>/Constant14'
                                           */
extern real_T AT_Target_Tag_5_X;       /* Variable: AT_Target_Tag_5_X
                                        * Referenced by: '<S332>/Constant9'
                                        */
extern real_T AT_Target_Tag_5_Y;       /* Variable: AT_Target_Tag_5_Y
                                        * Referenced by: '<S332>/Constant28'
                                        */
extern real_T AT_Target_Tag_6_Field_Angle;/* Variable: AT_Target_Tag_6_Field_Angle
                                           * Referenced by: '<S332>/Constant13'
                                           */
extern real_T AT_Target_Tag_6_X;       /* Variable: AT_Target_Tag_6_X
                                        * Referenced by: '<S332>/Constant5'
                                        */
extern real_T AT_Target_Tag_6_Y;       /* Variable: AT_Target_Tag_6_Y
                                        * Referenced by: '<S332>/Constant27'
                                        */
extern real_T AT_XY_Control_Gain;      /* Variable: AT_XY_Control_Gain
                                        * Referenced by: '<S336>/Gain2'
                                        */
extern real_T Boost_Trigger_Decreasing_Limit;
                                     /* Variable: Boost_Trigger_Decreasing_Limit
                                      * Referenced by: '<S349>/Constant1'
                                      */
extern real_T Boost_Trigger_High_Speed;/* Variable: Boost_Trigger_High_Speed
                                        * Referenced by:
                                        *   '<S345>/Constant'
                                        *   '<S345>/Saturation'
                                        */
extern real_T Boost_Trigger_Increasing_Limit;
                                     /* Variable: Boost_Trigger_Increasing_Limit
                                      * Referenced by: '<S349>/Constant3'
                                      */
extern real_T Boost_Trigger_Low_Speed; /* Variable: Boost_Trigger_Low_Speed
                                        * Referenced by: '<S345>/Constant1'
                                        */
extern real_T Coral_Arm_Angle_Error_Threshold;
                                    /* Variable: Coral_Arm_Angle_Error_Threshold
                                     * Referenced by: '<S334>/Coral_Chart'
                                     */
extern real_T Coral_Arm_Angle_L1;      /* Variable: Coral_Arm_Angle_L1
                                        * Referenced by: '<S334>/Coral_Chart'
                                        */
extern real_T Coral_Arm_Angle_L2;      /* Variable: Coral_Arm_Angle_L2
                                        * Referenced by: '<S334>/Coral_Chart'
                                        */
extern real_T Coral_Arm_Angle_L3;      /* Variable: Coral_Arm_Angle_L3
                                        * Referenced by: '<S334>/Coral_Chart'
                                        */
extern real_T Coral_Arm_Angle_L4;      /* Variable: Coral_Arm_Angle_L4
                                        * Referenced by: '<S334>/Coral_Chart'
                                        */
extern real_T Coral_Arm_Gain_Int;      /* Variable: Coral_Arm_Gain_Int
                                        * Referenced by: '<S22>/Gain2'
                                        */
extern real_T Coral_Arm_Gain_Prop;     /* Variable: Coral_Arm_Gain_Prop
                                        * Referenced by: '<S22>/Gain1'
                                        */
extern real_T Coral_Arm_Int_IC;        /* Variable: Coral_Arm_Int_IC
                                        * Referenced by: '<S22>/Constant3'
                                        */
extern real_T Coral_Arm_Int_LL;        /* Variable: Coral_Arm_Int_LL
                                        * Referenced by: '<S22>/Saturation1'
                                        */
extern real_T Coral_Arm_Int_UL;        /* Variable: Coral_Arm_Int_UL
                                        * Referenced by: '<S22>/Saturation1'
                                        */
extern real_T Coral_Arm_Manual_Gain;   /* Variable: Coral_Arm_Manual_Gain
                                        * Referenced by: '<S334>/Coral_Chart'
                                        */
extern real_T Coral_Arm_Measurement_Offset;/* Variable: Coral_Arm_Measurement_Offset
                                            * Referenced by: '<S1>/Add Constant'
                                            */
extern real_T Coral_Arm_Total_LL;      /* Variable: Coral_Arm_Total_LL
                                        * Referenced by:
                                        *   '<S22>/Constant1'
                                        *   '<S22>/Saturation2'
                                        */
extern real_T Coral_Arm_Total_UL;      /* Variable: Coral_Arm_Total_UL
                                        * Referenced by:
                                        *   '<S22>/Constant'
                                        *   '<S22>/Saturation2'
                                        */
extern real_T Coral_Detect_Distance;   /* Variable: Coral_Detect_Distance
                                        * Referenced by: '<S334>/Coral_Chart'
                                        */
extern real_T Coral_Eject_Time;        /* Variable: Coral_Eject_Time
                                        * Referenced by: '<S334>/Coral_Chart'
                                        */
extern real_T Coral_Motor_DC_Eject;    /* Variable: Coral_Motor_DC_Eject
                                        * Referenced by: '<S334>/Coral_Chart'
                                        */
extern real_T Coral_Motor_DC_Hold;     /* Variable: Coral_Motor_DC_Hold
                                        * Referenced by: '<S334>/Coral_Chart'
                                        */
extern real_T Coral_Motor_DC_Pickup;   /* Variable: Coral_Motor_DC_Pickup
                                        * Referenced by: '<S334>/Coral_Chart'
                                        */
extern real_T Distance_FL_y;           /* Variable: Distance_FL_y
                                        * Referenced by: '<S272>/Constant4'
                                        */
extern real_T Drive_Motor_Control_D;   /* Variable: Drive_Motor_Control_D
                                        * Referenced by:
                                        *   '<S188>/Constant3'
                                        *   '<S209>/Constant3'
                                        *   '<S230>/Constant3'
                                        *   '<S251>/Constant3'
                                        */
extern real_T Drive_Motor_Control_D_FilterCoeff;
                                  /* Variable: Drive_Motor_Control_D_FilterCoeff
                                   * Referenced by:
                                   *   '<S188>/Constant2'
                                   *   '<S209>/Constant2'
                                   *   '<S230>/Constant2'
                                   *   '<S251>/Constant2'
                                   */
extern real_T Drive_Motor_Control_D_LL;/* Variable: Drive_Motor_Control_D_LL
                                        * Referenced by:
                                        *   '<S188>/Saturation'
                                        *   '<S209>/Saturation'
                                        *   '<S230>/Saturation'
                                        *   '<S251>/Saturation'
                                        */
extern real_T Drive_Motor_Control_D_UL;/* Variable: Drive_Motor_Control_D_UL
                                        * Referenced by:
                                        *   '<S188>/Saturation'
                                        *   '<S209>/Saturation'
                                        *   '<S230>/Saturation'
                                        *   '<S251>/Saturation'
                                        */
extern real_T Drive_Motor_Control_FF;  /* Variable: Drive_Motor_Control_FF
                                        * Referenced by:
                                        *   '<S188>/Gain'
                                        *   '<S209>/Gain'
                                        *   '<S230>/Gain'
                                        *   '<S251>/Gain'
                                        */
extern real_T Drive_Motor_Control_I;   /* Variable: Drive_Motor_Control_I
                                        * Referenced by:
                                        *   '<S188>/Gain2'
                                        *   '<S209>/Gain2'
                                        *   '<S230>/Gain2'
                                        *   '<S251>/Gain2'
                                        */
extern real_T Drive_Motor_Control_I_LL;/* Variable: Drive_Motor_Control_I_LL
                                        * Referenced by:
                                        *   '<S188>/Saturation1'
                                        *   '<S209>/Saturation1'
                                        *   '<S230>/Saturation1'
                                        *   '<S251>/Saturation1'
                                        */
extern real_T Drive_Motor_Control_I_UL;/* Variable: Drive_Motor_Control_I_UL
                                        * Referenced by:
                                        *   '<S188>/Saturation1'
                                        *   '<S209>/Saturation1'
                                        *   '<S230>/Saturation1'
                                        *   '<S251>/Saturation1'
                                        */
extern real_T Drive_Motor_Control_P;   /* Variable: Drive_Motor_Control_P
                                        * Referenced by:
                                        *   '<S188>/Gain1'
                                        *   '<S209>/Gain1'
                                        *   '<S230>/Gain1'
                                        *   '<S251>/Gain1'
                                        */
extern real_T Drive_Motor_Control_Sign_Change_Deadband;
                           /* Variable: Drive_Motor_Control_Sign_Change_Deadband
                            * Referenced by:
                            *   '<S193>/Constant'
                            *   '<S214>/Constant'
                            *   '<S235>/Constant'
                            *   '<S256>/Constant'
                            */
extern real_T Elevator_Error_Bottom_Disable;
                                      /* Variable: Elevator_Error_Bottom_Disable
                                       * Referenced by: '<S25>/Constant'
                                       */
extern real_T Elevator_Gain_Int;       /* Variable: Elevator_Gain_Int
                                        * Referenced by: '<S27>/Gain2'
                                        */
extern real_T Elevator_Gain_Prop;      /* Variable: Elevator_Gain_Prop
                                        * Referenced by: '<S27>/Gain1'
                                        */
extern real_T Elevator_Height_Bottom;  /* Variable: Elevator_Height_Bottom
                                        * Referenced by: '<S334>/Coral_Chart'
                                        */
extern real_T Elevator_Height_Error_Threshold;
                                    /* Variable: Elevator_Height_Error_Threshold
                                     * Referenced by: '<S334>/Coral_Chart'
                                     */
extern real_T Elevator_Height_L1;      /* Variable: Elevator_Height_L1
                                        * Referenced by: '<S334>/Coral_Chart'
                                        */
extern real_T Elevator_Height_L2;      /* Variable: Elevator_Height_L2
                                        * Referenced by: '<S334>/Coral_Chart'
                                        */
extern real_T Elevator_Height_L3;      /* Variable: Elevator_Height_L3
                                        * Referenced by: '<S334>/Coral_Chart'
                                        */
extern real_T Elevator_Height_L4;      /* Variable: Elevator_Height_L4
                                        * Referenced by: '<S334>/Coral_Chart'
                                        */
extern real_T Elevator_Height_Lower;   /* Variable: Elevator_Height_Lower
                                        * Referenced by: '<S334>/Coral_Chart'
                                        */
extern real_T Elevator_Height_Manual_Gain;/* Variable: Elevator_Height_Manual_Gain
                                           * Referenced by: '<S334>/Coral_Chart'
                                           */
extern real_T Elevator_Height_Prepare; /* Variable: Elevator_Height_Prepare
                                        * Referenced by: '<S334>/Coral_Chart'
                                        */
extern real_T Elevator_Height_Raise;   /* Variable: Elevator_Height_Raise
                                        * Referenced by: '<S334>/Coral_Chart'
                                        */
extern real_T Elevator_Height_Top;     /* Variable: Elevator_Height_Top
                                        * Referenced by: '<S334>/Coral_Chart'
                                        */
extern real_T Elevator_Hold_at_Top_DC; /* Variable: Elevator_Hold_at_Top_DC
                                        * Referenced by: '<S8>/Constant1'
                                        */
extern real_T Elevator_Int_IC;         /* Variable: Elevator_Int_IC
                                        * Referenced by: '<S27>/Constant3'
                                        */
extern real_T Elevator_Int_LL;         /* Variable: Elevator_Int_LL
                                        * Referenced by: '<S27>/Saturation1'
                                        */
extern real_T Elevator_Int_UL;         /* Variable: Elevator_Int_UL
                                        * Referenced by: '<S27>/Saturation1'
                                        */
extern real_T Elevator_MotorRev_to_Inch;/* Variable: Elevator_MotorRev_to_Inch
                                         * Referenced by: '<S9>/Gain1'
                                         */
extern real_T Elevator_Total_LL;       /* Variable: Elevator_Total_LL
                                        * Referenced by:
                                        *   '<S27>/Constant1'
                                        *   '<S27>/Saturation2'
                                        */
extern real_T Elevator_Total_UL;       /* Variable: Elevator_Total_UL
                                        * Referenced by:
                                        *   '<S27>/Constant'
                                        *   '<S27>/Saturation2'
                                        */
extern real_T Gyro_Calibration_Reset_Degree;
                                      /* Variable: Gyro_Calibration_Reset_Degree
                                       * Referenced by:
                                       *   '<S10>/Constant2'
                                       *   '<S10>/Unit Delay1'
                                       */
extern real_T Gyro_Calibration_Reset_Flag;/* Variable: Gyro_Calibration_Reset_Flag
                                           * Referenced by: '<S10>/Constant3'
                                           */
extern real_T KF_Enable;               /* Variable: KF_Enable
                                        * Referenced by:
                                        *   '<S13>/Constant1'
                                        *   '<S13>/Constant2'
                                        */
extern real_T KF_Vision_Ambiguity_Thresh;/* Variable: KF_Vision_Ambiguity_Thresh
                                          * Referenced by: '<S13>/Constant'
                                          */
extern real_T Odometry_IC_X;           /* Variable: Odometry_IC_X
                                        * Referenced by: '<S1>/Constant'
                                        */
extern real_T Odometry_IC_Y;           /* Variable: Odometry_IC_Y
                                        * Referenced by: '<S1>/Constant1'
                                        */
extern real_T Odometry_Reset_IC;       /* Variable: Odometry_Reset_IC
                                        * Referenced by: '<S15>/Constant'
                                        */
extern real_T Odometry_X_Y_TEAR;       /* Variable: Odometry_X_Y_TEAR
                                        * Referenced by: '<S114>/Constant'
                                        */
extern real_T Spline_Last_Pose_Distance_to_Velocity_Gain;
                         /* Variable: Spline_Last_Pose_Distance_to_Velocity_Gain
                          * Referenced by: '<S173>/Constant2'
                          */
extern real_T Spline_Max_Centripital_Acceleration;
                                /* Variable: Spline_Max_Centripital_Acceleration
                                 * Referenced by: '<S173>/Constant1'
                                 */
extern real_T Spline_Pose_Num_Before_End_Reduce_Speed;
                            /* Variable: Spline_Pose_Num_Before_End_Reduce_Speed
                             * Referenced by: '<S120>/Constant'
                             */
extern real_T Spline_Stop_Radius;      /* Variable: Spline_Stop_Radius
                                        * Referenced by: '<S133>/Constant'
                                        */
extern real_T Spline_Velocity_Multiplier_TEST;
                                    /* Variable: Spline_Velocity_Multiplier_TEST
                                     * Referenced by: '<S173>/Constant3'
                                     */
extern real_T Steering_Absolute_Cmd_Approach_Zero_Error_Thresh;
                   /* Variable: Steering_Absolute_Cmd_Approach_Zero_Error_Thresh
                    * Referenced by: '<S284>/Constant5'
                    */
extern real_T Steering_Absolute_Cmd_Approach_Zero_Final_Thresh;
                   /* Variable: Steering_Absolute_Cmd_Approach_Zero_Final_Thresh
                    * Referenced by: '<S284>/Constant6'
                    */
extern real_T Steering_Absolute_Cmd_NonZero_Error_Thresh;
                         /* Variable: Steering_Absolute_Cmd_NonZero_Error_Thresh
                          * Referenced by: '<S284>/Constant9'
                          */
extern real_T Steering_Absolute_Cmd_NonZero_Final_Scale_Factor;
                   /* Variable: Steering_Absolute_Cmd_NonZero_Final_Scale_Factor
                    * Referenced by: '<S284>/Constant10'
                    */
extern real_T Steering_Absolute_Cmd_Rate_Limit_Dec;
                               /* Variable: Steering_Absolute_Cmd_Rate_Limit_Dec
                                * Referenced by: '<S284>/Constant1'
                                */
extern real_T Steering_Absolute_Cmd_Rate_Limit_Inc;
                               /* Variable: Steering_Absolute_Cmd_Rate_Limit_Inc
                                * Referenced by: '<S284>/Constant3'
                                */
extern real_T Steering_Heading_Control_D;/* Variable: Steering_Heading_Control_D
                                          * Referenced by: '<S301>/Constant3'
                                          */
extern real_T Steering_Heading_Control_D_FilterCoeff;
                             /* Variable: Steering_Heading_Control_D_FilterCoeff
                              * Referenced by: '<S301>/Constant2'
                              */
extern real_T Steering_Heading_Control_D_LL;
                                      /* Variable: Steering_Heading_Control_D_LL
                                       * Referenced by: '<S301>/Saturation'
                                       */
extern real_T Steering_Heading_Control_D_UL;
                                      /* Variable: Steering_Heading_Control_D_UL
                                       * Referenced by: '<S301>/Saturation'
                                       */
extern real_T Steering_Heading_Control_Deadzone;
                                  /* Variable: Steering_Heading_Control_Deadzone
                                   * Referenced by: '<S300>/Constant'
                                   */
extern real_T Steering_Heading_Control_I;/* Variable: Steering_Heading_Control_I
                                          * Referenced by: '<S301>/Gain2'
                                          */
extern real_T Steering_Heading_Control_I_LL;
                                      /* Variable: Steering_Heading_Control_I_LL
                                       * Referenced by: '<S301>/Saturation1'
                                       */
extern real_T Steering_Heading_Control_I_UL;
                                      /* Variable: Steering_Heading_Control_I_UL
                                       * Referenced by: '<S301>/Saturation1'
                                       */
extern real_T Steering_Heading_Control_P;/* Variable: Steering_Heading_Control_P
                                          * Referenced by: '<S301>/Gain1'
                                          */
extern real_T Steering_Heading_Control_Total_LL;
                                  /* Variable: Steering_Heading_Control_Total_LL
                                   * Referenced by:
                                   *   '<S301>/Constant1'
                                   *   '<S301>/Saturation2'
                                   */
extern real_T Steering_Heading_Control_Total_UL;
                                  /* Variable: Steering_Heading_Control_Total_UL
                                   * Referenced by:
                                   *   '<S301>/Constant'
                                   *   '<S301>/Saturation2'
                                   */
extern real_T Steering_Motor_Control_D;/* Variable: Steering_Motor_Control_D
                                        * Referenced by:
                                        *   '<S191>/Constant3'
                                        *   '<S212>/Constant3'
                                        *   '<S233>/Constant3'
                                        *   '<S254>/Constant3'
                                        */
extern real_T Steering_Motor_Control_D_FilterCoeff;
                               /* Variable: Steering_Motor_Control_D_FilterCoeff
                                * Referenced by:
                                *   '<S191>/Constant2'
                                *   '<S212>/Constant2'
                                *   '<S233>/Constant2'
                                *   '<S254>/Constant2'
                                */
extern real_T Steering_Motor_Control_D_LL;/* Variable: Steering_Motor_Control_D_LL
                                           * Referenced by:
                                           *   '<S191>/Saturation'
                                           *   '<S212>/Saturation'
                                           *   '<S233>/Saturation'
                                           *   '<S254>/Saturation'
                                           */
extern real_T Steering_Motor_Control_D_UL;/* Variable: Steering_Motor_Control_D_UL
                                           * Referenced by:
                                           *   '<S191>/Saturation'
                                           *   '<S212>/Saturation'
                                           *   '<S233>/Saturation'
                                           *   '<S254>/Saturation'
                                           */
extern real_T Steering_Motor_Control_I;/* Variable: Steering_Motor_Control_I
                                        * Referenced by:
                                        *   '<S191>/Gain2'
                                        *   '<S212>/Gain2'
                                        *   '<S233>/Gain2'
                                        *   '<S254>/Gain2'
                                        */
extern real_T Steering_Motor_Control_I_LL;/* Variable: Steering_Motor_Control_I_LL
                                           * Referenced by:
                                           *   '<S191>/Saturation1'
                                           *   '<S212>/Saturation1'
                                           *   '<S233>/Saturation1'
                                           *   '<S254>/Saturation1'
                                           */
extern real_T Steering_Motor_Control_I_UL;/* Variable: Steering_Motor_Control_I_UL
                                           * Referenced by:
                                           *   '<S191>/Saturation1'
                                           *   '<S212>/Saturation1'
                                           *   '<S233>/Saturation1'
                                           *   '<S254>/Saturation1'
                                           */
extern real_T Steering_Motor_Control_P;/* Variable: Steering_Motor_Control_P
                                        * Referenced by:
                                        *   '<S191>/Gain1'
                                        *   '<S212>/Gain1'
                                        *   '<S233>/Gain1'
                                        *   '<S254>/Gain1'
                                        */
extern real_T Steering_Relative_Cmd_Approach_Zero_Error_Thresh;
                   /* Variable: Steering_Relative_Cmd_Approach_Zero_Error_Thresh
                    * Referenced by: '<S283>/Constant5'
                    */
extern real_T Steering_Relative_Cmd_Approach_Zero_Final_Thresh;
                   /* Variable: Steering_Relative_Cmd_Approach_Zero_Final_Thresh
                    * Referenced by: '<S283>/Constant6'
                    */
extern real_T Steering_Relative_Cmd_NonZero_Error_Thresh;
                         /* Variable: Steering_Relative_Cmd_NonZero_Error_Thresh
                          * Referenced by: '<S283>/Constant9'
                          */
extern real_T Steering_Relative_Cmd_NonZero_Final_Scale_Factor;
                   /* Variable: Steering_Relative_Cmd_NonZero_Final_Scale_Factor
                    * Referenced by: '<S283>/Constant10'
                    */
extern real_T Steering_Relative_Cmd_Rate_Limit_Dec;
                               /* Variable: Steering_Relative_Cmd_Rate_Limit_Dec
                                * Referenced by: '<S283>/Constant1'
                                */
extern real_T Steering_Relative_Cmd_Rate_Limit_Inc;
                               /* Variable: Steering_Relative_Cmd_Rate_Limit_Inc
                                * Referenced by: '<S283>/Constant3'
                                */
extern real_T Steering_Relative_Gain;  /* Variable: Steering_Relative_Gain
                                        * Referenced by: '<S335>/Constant'
                                        */
extern real_T Steering_Twist_Gain;     /* Variable: Steering_Twist_Gain
                                        * Referenced by: '<S335>/Constant1'
                                        */
extern real_T TEST_Swerve_Mode_Override_Flag;
                                     /* Variable: TEST_Swerve_Mode_Override_Flag
                                      * Referenced by: '<S20>/Constant5'
                                      */
extern real_T TEST_Swerve_Mode_Steering;/* Variable: TEST_Swerve_Mode_Steering
                                         * Referenced by: '<S20>/Constant8'
                                         */
extern real_T TEST_Swerve_Mode_Translation;/* Variable: TEST_Swerve_Mode_Translation
                                            * Referenced by: '<S20>/Constant7'
                                            */
extern real_T Translation_Speed_Approach_Zero_Error_Thresh;
                       /* Variable: Translation_Speed_Approach_Zero_Error_Thresh
                        * Referenced by: '<S271>/Constant5'
                        */
extern real_T Translation_Speed_Approach_Zero_Final_Thresh;
                       /* Variable: Translation_Speed_Approach_Zero_Final_Thresh
                        * Referenced by: '<S271>/Constant6'
                        */
extern real_T Translation_Speed_NonZero_Error_Thresh;
                             /* Variable: Translation_Speed_NonZero_Error_Thresh
                              * Referenced by: '<S271>/Constant9'
                              */
extern real_T Translation_Speed_NonZero_Final_Scale_Factor;
                       /* Variable: Translation_Speed_NonZero_Final_Scale_Factor
                        * Referenced by: '<S271>/Constant10'
                        */
extern real_T Translation_Speed_Rate_Limit_Dec;
                                   /* Variable: Translation_Speed_Rate_Limit_Dec
                                    * Referenced by: '<S271>/Constant1'
                                    */
extern real_T Translation_Speed_Rate_Limit_Inc;
                                   /* Variable: Translation_Speed_Rate_Limit_Inc
                                    * Referenced by: '<S271>/Constant3'
                                    */
extern real_T Translation_Twist_Gain;  /* Variable: Translation_Twist_Gain
                                        * Referenced by: '<S336>/Gain'
                                        */
extern real_T Twist_Deadzone_neg;      /* Variable: Twist_Deadzone_neg
                                        * Referenced by:
                                        *   '<S335>/Dead Zone'
                                        *   '<S336>/Dead Zone'
                                        */
extern real_T Twist_Deadzone_pos;      /* Variable: Twist_Deadzone_pos
                                        * Referenced by:
                                        *   '<S335>/Dead Zone'
                                        *   '<S336>/Dead Zone'
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
 * Block '<S24>/Data Type Duplicate' : Unused code path elimination
 * Block '<S24>/Data Type Propagation' : Unused code path elimination
 * Block '<S30>/Data Type Duplicate' : Unused code path elimination
 * Block '<S30>/Data Type Propagation' : Unused code path elimination
 * Block '<S28>/Data Type Duplicate' : Unused code path elimination
 * Block '<S28>/Data Type Propagation' : Unused code path elimination
 * Block '<S46>/Compare' : Unused code path elimination
 * Block '<S46>/Constant' : Unused code path elimination
 * Block '<S12>/Unit Delay' : Unused code path elimination
 * Block '<S94>/Data Type Duplicate' : Unused code path elimination
 * Block '<S95>/Data Type Duplicate' : Unused code path elimination
 * Block '<S96>/Conversion' : Unused code path elimination
 * Block '<S96>/Data Type Duplicate' : Unused code path elimination
 * Block '<S97>/Data Type Duplicate' : Unused code path elimination
 * Block '<S55>/Data Type Duplicate' : Unused code path elimination
 * Block '<S56>/Data Type Duplicate' : Unused code path elimination
 * Block '<S57>/Data Type Duplicate' : Unused code path elimination
 * Block '<S58>/Data Type Duplicate' : Unused code path elimination
 * Block '<S59>/Data Type Duplicate' : Unused code path elimination
 * Block '<S60>/Data Type Duplicate' : Unused code path elimination
 * Block '<S61>/Data Type Duplicate' : Unused code path elimination
 * Block '<S62>/Conversion' : Unused code path elimination
 * Block '<S62>/Data Type Duplicate' : Unused code path elimination
 * Block '<S63>/Data Type Duplicate' : Unused code path elimination
 * Block '<S64>/Data Type Duplicate' : Unused code path elimination
 * Block '<S65>/Data Type Duplicate' : Unused code path elimination
 * Block '<S67>/Data Type Duplicate' : Unused code path elimination
 * Block '<S68>/Data Type Duplicate' : Unused code path elimination
 * Block '<S51>/G' : Unused code path elimination
 * Block '<S51>/H' : Unused code path elimination
 * Block '<S51>/N' : Unused code path elimination
 * Block '<S51>/P0' : Unused code path elimination
 * Block '<S51>/Q' : Unused code path elimination
 * Block '<S51>/R' : Unused code path elimination
 * Block '<S83>/CheckSignalProperties' : Unused code path elimination
 * Block '<S92>/CheckSignalProperties' : Unused code path elimination
 * Block '<S93>/CheckSignalProperties' : Unused code path elimination
 * Block '<S17>/Gain' : Unused code path elimination
 * Block '<S17>/Gain1' : Unused code path elimination
 * Block '<S17>/Scope' : Unused code path elimination
 * Block '<S132>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S136>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S142>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S176>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S196>/Data Type Duplicate' : Unused code path elimination
 * Block '<S196>/Data Type Propagation' : Unused code path elimination
 * Block '<S188>/Scope' : Unused code path elimination
 * Block '<S190>/Scope' : Unused code path elimination
 * Block '<S207>/Data Type Duplicate' : Unused code path elimination
 * Block '<S207>/Data Type Propagation' : Unused code path elimination
 * Block '<S191>/Scope' : Unused code path elimination
 * Block '<S217>/Data Type Duplicate' : Unused code path elimination
 * Block '<S217>/Data Type Propagation' : Unused code path elimination
 * Block '<S209>/Scope' : Unused code path elimination
 * Block '<S211>/Scope' : Unused code path elimination
 * Block '<S228>/Data Type Duplicate' : Unused code path elimination
 * Block '<S228>/Data Type Propagation' : Unused code path elimination
 * Block '<S212>/Scope' : Unused code path elimination
 * Block '<S238>/Data Type Duplicate' : Unused code path elimination
 * Block '<S238>/Data Type Propagation' : Unused code path elimination
 * Block '<S230>/Scope' : Unused code path elimination
 * Block '<S232>/Scope' : Unused code path elimination
 * Block '<S249>/Data Type Duplicate' : Unused code path elimination
 * Block '<S249>/Data Type Propagation' : Unused code path elimination
 * Block '<S233>/Scope' : Unused code path elimination
 * Block '<S259>/Data Type Duplicate' : Unused code path elimination
 * Block '<S259>/Data Type Propagation' : Unused code path elimination
 * Block '<S251>/Scope' : Unused code path elimination
 * Block '<S253>/Scope' : Unused code path elimination
 * Block '<S270>/Data Type Duplicate' : Unused code path elimination
 * Block '<S270>/Data Type Propagation' : Unused code path elimination
 * Block '<S254>/Scope' : Unused code path elimination
 * Block '<S281>/Data Type Duplicate' : Unused code path elimination
 * Block '<S281>/Data Type Propagation' : Unused code path elimination
 * Block '<S282>/FixPt Data Type Duplicate1' : Unused code path elimination
 * Block '<S291>/Data Type Duplicate' : Unused code path elimination
 * Block '<S291>/Data Type Propagation' : Unused code path elimination
 * Block '<S292>/FixPt Data Type Duplicate1' : Unused code path elimination
 * Block '<S298>/Data Type Duplicate' : Unused code path elimination
 * Block '<S298>/Data Type Propagation' : Unused code path elimination
 * Block '<S299>/FixPt Data Type Duplicate1' : Unused code path elimination
 * Block '<S305>/Data Type Duplicate' : Unused code path elimination
 * Block '<S305>/Data Type Propagation' : Unused code path elimination
 * Block '<S301>/Scope' : Unused code path elimination
 * Block '<S351>/Data Type Duplicate' : Unused code path elimination
 * Block '<S351>/Data Type Propagation' : Unused code path elimination
 * Block '<S352>/FixPt Data Type Duplicate1' : Unused code path elimination
 * Block '<S94>/Conversion' : Eliminate redundant data type conversion
 * Block '<S95>/Conversion' : Eliminate redundant data type conversion
 * Block '<S97>/Conversion' : Eliminate redundant data type conversion
 * Block '<S51>/DataTypeConversionEnable' : Eliminate redundant data type conversion
 * Block '<S67>/Conversion' : Eliminate redundant data type conversion
 * Block '<S71>/Reshape' : Reshape block reduction
 * Block '<S51>/ReshapeX0' : Reshape block reduction
 * Block '<S51>/Reshapeu' : Reshape block reduction
 * Block '<S51>/Reshapexhat' : Reshape block reduction
 * Block '<S13>/Signal Copy' : Eliminate redundant signal conversion block
 * Block '<S13>/Signal Copy1' : Eliminate redundant signal conversion block
 * Block '<S15>/Signal Copy' : Eliminate redundant signal conversion block
 * Block '<S15>/Signal Copy1' : Eliminate redundant signal conversion block
 * Block '<S15>/Signal Copy2' : Eliminate redundant signal conversion block
 * Block '<S15>/Signal Copy3' : Eliminate redundant signal conversion block
 * Block '<S172>/Signal Copy' : Eliminate redundant signal conversion block
 * Block '<S20>/Signal Copy1' : Eliminate redundant signal conversion block
 * Block '<S20>/Signal Copy2' : Eliminate redundant signal conversion block
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
 * '<S3>'   : 'Code_Gen_Model/RoboRio Controls/Compare To Zero'
 * '<S4>'   : 'Code_Gen_Model/RoboRio Controls/Compare To Zero1'
 * '<S5>'   : 'Code_Gen_Model/RoboRio Controls/Compare To Zero2'
 * '<S6>'   : 'Code_Gen_Model/RoboRio Controls/Coral Arm Motor Control'
 * '<S7>'   : 'Code_Gen_Model/RoboRio Controls/Disabled'
 * '<S8>'   : 'Code_Gen_Model/RoboRio Controls/Elevator Motor Control'
 * '<S9>'   : 'Code_Gen_Model/RoboRio Controls/Elevator_Pre_Processing'
 * '<S10>'  : 'Code_Gen_Model/RoboRio Controls/Gyro_Angles'
 * '<S11>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing'
 * '<S12>'  : 'Code_Gen_Model/RoboRio Controls/Internal Feedback'
 * '<S13>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter'
 * '<S14>'  : 'Code_Gen_Model/RoboRio Controls/Merge'
 * '<S15>'  : 'Code_Gen_Model/RoboRio Controls/Odometry'
 * '<S16>'  : 'Code_Gen_Model/RoboRio Controls/Previous GameState'
 * '<S17>'  : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following'
 * '<S18>'  : 'Code_Gen_Model/RoboRio Controls/Steer_Module_Offset_Adjustments'
 * '<S19>'  : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive'
 * '<S20>'  : 'Code_Gen_Model/RoboRio Controls/Teleop'
 * '<S21>'  : 'Code_Gen_Model/RoboRio Controls/Test'
 * '<S22>'  : 'Code_Gen_Model/RoboRio Controls/Coral Arm Motor Control/PI and Integral Enable'
 * '<S23>'  : 'Code_Gen_Model/RoboRio Controls/Coral Arm Motor Control/PI and Integral Enable/Detect Increase'
 * '<S24>'  : 'Code_Gen_Model/RoboRio Controls/Coral Arm Motor Control/PI and Integral Enable/Saturation Dynamic'
 * '<S25>'  : 'Code_Gen_Model/RoboRio Controls/Elevator Motor Control/Compare To Constant'
 * '<S26>'  : 'Code_Gen_Model/RoboRio Controls/Elevator Motor Control/Compare To Zero'
 * '<S27>'  : 'Code_Gen_Model/RoboRio Controls/Elevator Motor Control/PI and Integral Enable'
 * '<S28>'  : 'Code_Gen_Model/RoboRio Controls/Elevator Motor Control/Saturation Dynamic'
 * '<S29>'  : 'Code_Gen_Model/RoboRio Controls/Elevator Motor Control/PI and Integral Enable/Detect Increase'
 * '<S30>'  : 'Code_Gen_Model/RoboRio Controls/Elevator Motor Control/PI and Integral Enable/Saturation Dynamic'
 * '<S31>'  : 'Code_Gen_Model/RoboRio Controls/Elevator_Pre_Processing/Detect Decrease'
 * '<S32>'  : 'Code_Gen_Model/RoboRio Controls/Gyro_Angles/Degrees to Radians'
 * '<S33>'  : 'Code_Gen_Model/RoboRio Controls/Gyro_Angles/Detect Increase'
 * '<S34>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Constant'
 * '<S35>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Constant1'
 * '<S36>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Constant2'
 * '<S37>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Constant3'
 * '<S38>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Constant4'
 * '<S39>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Constant5'
 * '<S40>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Constant7'
 * '<S41>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero11'
 * '<S42>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero12'
 * '<S43>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero13'
 * '<S44>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero14'
 * '<S45>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero15'
 * '<S46>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero16'
 * '<S47>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero17'
 * '<S48>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Detect Increase'
 * '<S49>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Detect Increase1'
 * '<S50>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Detect Increase2'
 * '<S51>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter'
 * '<S52>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CalculatePL'
 * '<S53>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CalculateYhat'
 * '<S54>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CovarianceOutputConfigurator'
 * '<S55>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionA'
 * '<S56>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionB'
 * '<S57>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionC'
 * '<S58>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionD'
 * '<S59>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionG'
 * '<S60>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionH'
 * '<S61>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionN'
 * '<S62>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionP'
 * '<S63>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionP0'
 * '<S64>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionQ'
 * '<S65>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionR'
 * '<S66>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionReset'
 * '<S67>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionX'
 * '<S68>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionX0'
 * '<S69>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionu'
 * '<S70>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/MemoryP'
 * '<S71>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/Observer'
 * '<S72>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/ReducedQRN'
 * '<S73>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/Reset'
 * '<S74>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/Reshapeyhat'
 * '<S75>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/ScalarExpansionP0'
 * '<S76>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/ScalarExpansionQ'
 * '<S77>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/ScalarExpansionR'
 * '<S78>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/UseCurrentEstimator'
 * '<S79>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkA'
 * '<S80>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkB'
 * '<S81>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkC'
 * '<S82>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkD'
 * '<S83>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkEnable'
 * '<S84>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkG'
 * '<S85>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkH'
 * '<S86>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkN'
 * '<S87>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkP0'
 * '<S88>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkQ'
 * '<S89>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkR'
 * '<S90>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkReset'
 * '<S91>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkX0'
 * '<S92>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checku'
 * '<S93>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checky'
 * '<S94>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CalculatePL/DataTypeConversionL'
 * '<S95>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CalculatePL/DataTypeConversionM'
 * '<S96>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CalculatePL/DataTypeConversionP'
 * '<S97>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CalculatePL/DataTypeConversionZ'
 * '<S98>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CalculatePL/Ground'
 * '<S99>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CalculateYhat/Ground'
 * '<S100>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CovarianceOutputConfigurator/decideOutput'
 * '<S101>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CovarianceOutputConfigurator/decideOutput/SqrtUsedFcn'
 * '<S102>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/Observer/MeasurementUpdate'
 * '<S103>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/ReducedQRN/Ground'
 * '<S104>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/UseCurrentEstimator/Enabled Subsystem'
 * '<S105>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Difference'
 * '<S106>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Difference1'
 * '<S107>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Difference3'
 * '<S108>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Difference4'
 * '<S109>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Difference5'
 * '<S110>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Polar to Cartesian'
 * '<S111>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Polar to Cartesian1'
 * '<S112>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Polar to Cartesian2'
 * '<S113>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Polar to Cartesian3'
 * '<S114>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Tear for validation testing'
 * '<S115>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Tear for validation testing/Compare To Zero'
 * '<S116>' : 'Code_Gen_Model/RoboRio Controls/Previous GameState/Chart'
 * '<S117>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Pass Through'
 * '<S118>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled'
 * '<S119>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses'
 * '<S120>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Find_Targets'
 * '<S121>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Steering_and_Drive_Commands'
 * '<S122>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/If Action Subsystem'
 * '<S123>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification'
 * '<S124>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning'
 * '<S125>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Escape_Auto_Driving'
 * '<S126>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid'
 * '<S127>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Catch-all if not the last point and not in the circle'
 * '<S128>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Circle_Check_Valid'
 * '<S129>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Increment_If_Rectangle_Check'
 * '<S130>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Circle_Check_Valid/Increment_Search'
 * '<S131>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Circle_Check_Valid/Is_Last_Point'
 * '<S132>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Circle_Check_Valid/Increment_Search/Increment Real World'
 * '<S133>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Circle_Check_Valid/Is_Last_Point/Compare To Constant'
 * '<S134>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Circle_Check_Valid/Is_Last_Point/Robot_Is_At_Destination'
 * '<S135>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Circle_Check_Valid/Is_Last_Point/Straight_Line_Path_To_End'
 * '<S136>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Increment_If_Rectangle_Check/Increment Real World'
 * '<S137>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Increment_If_Rectangle_Check/Subsystem Reference'
 * '<S138>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Increment_If_Rectangle_Check/Subsystem Reference/Compare To Constant'
 * '<S139>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Increment_If_Rectangle_Check/Subsystem Reference/Compare To Constant1'
 * '<S140>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Make_Knots'
 * '<S141>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning'
 * '<S142>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Make_Knots/Decrement Real World'
 * '<S143>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Make_Knots/Find_Control_Pose'
 * '<S144>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Make_Knots/Find_Control_Pose1'
 * '<S145>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop'
 * '<S146>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Compare To Constant'
 * '<S147>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve'
 * '<S148>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Find_Point_Coefficients'
 * '<S149>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve'
 * '<S150>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Acc'
 * '<S151>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Pos'
 * '<S152>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Vel'
 * '<S153>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Curvature'
 * '<S154>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_U_And_Powers'
 * '<S155>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Acc/Subsystem Reference'
 * '<S156>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Acc/ddA'
 * '<S157>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Acc/ddB'
 * '<S158>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Acc/ddC'
 * '<S159>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Pos/A'
 * '<S160>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Pos/B'
 * '<S161>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Pos/C'
 * '<S162>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Pos/Subsystem Reference'
 * '<S163>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Vel/Subsystem Reference'
 * '<S164>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Vel/dA'
 * '<S165>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Vel/dB'
 * '<S166>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Vel/dC'
 * '<S167>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Curvature/MATLAB Function'
 * '<S168>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Find_Targets/Distance Along Curve'
 * '<S169>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Find_Targets/Find closest index to curve'
 * '<S170>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Find_Targets/Find first index that meets distance target'
 * '<S171>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Find_Targets/Find velocity and heading'
 * '<S172>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Find_Targets/Heading'
 * '<S173>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Find_Targets/Velocity'
 * '<S174>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Find_Targets/Find velocity and heading/Dynamic Lookup Tables'
 * '<S175>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Find_Targets/Find velocity and heading/Latch'
 * '<S176>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Find_Targets/Find velocity and heading/Dynamic Lookup Tables/Decrement'
 * '<S177>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Steering_and_Drive_Commands/Translation Angle'
 * '<S178>' : 'Code_Gen_Model/RoboRio Controls/Steer_Module_Offset_Adjustments/Angle Modulus'
 * '<S179>' : 'Code_Gen_Model/RoboRio Controls/Steer_Module_Offset_Adjustments/Angle Modulus1'
 * '<S180>' : 'Code_Gen_Model/RoboRio Controls/Steer_Module_Offset_Adjustments/Angle Modulus2'
 * '<S181>' : 'Code_Gen_Model/RoboRio Controls/Steer_Module_Offset_Adjustments/Angle Modulus3'
 * '<S182>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module'
 * '<S183>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1'
 * '<S184>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2'
 * '<S185>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3'
 * '<S186>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle'
 * '<S187>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Direction Change Drive Reduction Factor'
 * '<S188>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Drive Feed Forward plus PID'
 * '<S189>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Optimize'
 * '<S190>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Steering Module Error Drive Reduction Factor'
 * '<S191>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Steering with Angle Error Modulus PID'
 * '<S192>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Tangential_Velocity_To_RPM'
 * '<S193>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Direction Change Drive Reduction Factor/Compare To Constant'
 * '<S194>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Drive Feed Forward plus PID/Difference'
 * '<S195>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Drive Feed Forward plus PID/Low_Pass_Filter'
 * '<S196>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Drive Feed Forward plus PID/Saturation Dynamic'
 * '<S197>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Optimize/Compare To Constant'
 * '<S198>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Optimize/Minus1'
 * '<S199>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Optimize/RotateBy'
 * '<S200>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Optimize/Minus1/RotateBy'
 * '<S201>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Optimize/Minus1/RotateBy/Compare To Constant'
 * '<S202>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Optimize/RotateBy/Compare To Constant'
 * '<S203>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Steering Module Error Drive Reduction Factor/Angle Modulus to plus or minus pi over two'
 * '<S204>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Steering with Angle Error Modulus PID/Angle Modulus'
 * '<S205>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Steering with Angle Error Modulus PID/Difference'
 * '<S206>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Steering with Angle Error Modulus PID/Low_Pass_Filter'
 * '<S207>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Steering with Angle Error Modulus PID/Saturation Dynamic'
 * '<S208>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Direction Change Drive Reduction Factor'
 * '<S209>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Drive Feed Forward plus PID'
 * '<S210>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Optimize'
 * '<S211>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Steering Module Error Drive Reduction Factor'
 * '<S212>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Steering with Angle Error Modulus PID'
 * '<S213>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Tangential_Velocity_To_RPM'
 * '<S214>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Direction Change Drive Reduction Factor/Compare To Constant'
 * '<S215>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Drive Feed Forward plus PID/Difference'
 * '<S216>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Drive Feed Forward plus PID/Low_Pass_Filter'
 * '<S217>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Drive Feed Forward plus PID/Saturation Dynamic'
 * '<S218>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Optimize/Compare To Constant'
 * '<S219>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Optimize/Minus1'
 * '<S220>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Optimize/RotateBy'
 * '<S221>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Optimize/Minus1/RotateBy'
 * '<S222>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Optimize/Minus1/RotateBy/Compare To Constant'
 * '<S223>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Optimize/RotateBy/Compare To Constant'
 * '<S224>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Steering Module Error Drive Reduction Factor/Angle Modulus to plus or minus pi over two'
 * '<S225>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Steering with Angle Error Modulus PID/Angle Modulus'
 * '<S226>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Steering with Angle Error Modulus PID/Difference'
 * '<S227>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Steering with Angle Error Modulus PID/Low_Pass_Filter'
 * '<S228>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Steering with Angle Error Modulus PID/Saturation Dynamic'
 * '<S229>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Direction Change Drive Reduction Factor'
 * '<S230>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Drive Feed Forward plus PID'
 * '<S231>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Optimize'
 * '<S232>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Steering Module Error Drive Reduction Factor'
 * '<S233>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Steering with Angle Error Modulus PID'
 * '<S234>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Tangential_Velocity_To_RPM'
 * '<S235>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Direction Change Drive Reduction Factor/Compare To Constant'
 * '<S236>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Drive Feed Forward plus PID/Difference'
 * '<S237>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Drive Feed Forward plus PID/Low_Pass_Filter'
 * '<S238>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Drive Feed Forward plus PID/Saturation Dynamic'
 * '<S239>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Optimize/Compare To Constant'
 * '<S240>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Optimize/Minus1'
 * '<S241>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Optimize/RotateBy'
 * '<S242>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Optimize/Minus1/RotateBy'
 * '<S243>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Optimize/Minus1/RotateBy/Compare To Constant'
 * '<S244>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Optimize/RotateBy/Compare To Constant'
 * '<S245>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Steering Module Error Drive Reduction Factor/Angle Modulus to plus or minus pi over two'
 * '<S246>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Steering with Angle Error Modulus PID/Angle Modulus'
 * '<S247>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Steering with Angle Error Modulus PID/Difference'
 * '<S248>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Steering with Angle Error Modulus PID/Low_Pass_Filter'
 * '<S249>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Steering with Angle Error Modulus PID/Saturation Dynamic'
 * '<S250>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Direction Change Drive Reduction Factor'
 * '<S251>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Drive Feed Forward plus PID'
 * '<S252>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Optimize'
 * '<S253>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Steering Module Error Drive Reduction Factor'
 * '<S254>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Steering with Angle Error Modulus PID'
 * '<S255>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Tangential_Velocity_To_RPM'
 * '<S256>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Direction Change Drive Reduction Factor/Compare To Constant'
 * '<S257>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Drive Feed Forward plus PID/Difference'
 * '<S258>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Drive Feed Forward plus PID/Low_Pass_Filter'
 * '<S259>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Drive Feed Forward plus PID/Saturation Dynamic'
 * '<S260>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Optimize/Compare To Constant'
 * '<S261>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Optimize/Minus1'
 * '<S262>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Optimize/RotateBy'
 * '<S263>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Optimize/Minus1/RotateBy'
 * '<S264>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Optimize/Minus1/RotateBy/Compare To Constant'
 * '<S265>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Optimize/RotateBy/Compare To Constant'
 * '<S266>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Steering Module Error Drive Reduction Factor/Angle Modulus to plus or minus pi over two'
 * '<S267>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Steering with Angle Error Modulus PID/Angle Modulus'
 * '<S268>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Steering with Angle Error Modulus PID/Difference'
 * '<S269>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Steering with Angle Error Modulus PID/Low_Pass_Filter'
 * '<S270>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Steering with Angle Error Modulus PID/Saturation Dynamic'
 * '<S271>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Complex Rate Limit'
 * '<S272>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Initialize Function'
 * '<S273>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command'
 * '<S274>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Translation Steering Command'
 * '<S275>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator'
 * '<S276>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Complex Rate Limit/Compare To Zero'
 * '<S277>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Complex Rate Limit/Compare To Zero1'
 * '<S278>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Complex Rate Limit/Compare To Zero2'
 * '<S279>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Complex Rate Limit/Compare To Zero3'
 * '<S280>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Complex Rate Limit/Discrete Rate Limiter'
 * '<S281>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Complex Rate Limit/Discrete Rate Limiter/Saturation Dynamic'
 * '<S282>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Complex Rate Limit/Discrete Rate Limiter/Unit Delay External IC'
 * '<S283>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit'
 * '<S284>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit1'
 * '<S285>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Steering Heading PID'
 * '<S286>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit/Compare To Zero'
 * '<S287>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit/Compare To Zero1'
 * '<S288>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit/Compare To Zero2'
 * '<S289>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit/Compare To Zero3'
 * '<S290>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit/Discrete Rate Limiter'
 * '<S291>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit/Discrete Rate Limiter/Saturation Dynamic'
 * '<S292>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit/Discrete Rate Limiter/Unit Delay External IC'
 * '<S293>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit1/Compare To Zero'
 * '<S294>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit1/Compare To Zero1'
 * '<S295>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit1/Compare To Zero2'
 * '<S296>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit1/Compare To Zero3'
 * '<S297>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit1/Discrete Rate Limiter'
 * '<S298>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit1/Discrete Rate Limiter/Saturation Dynamic'
 * '<S299>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit1/Discrete Rate Limiter/Unit Delay External IC'
 * '<S300>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Steering Heading PID/Compare To Constant'
 * '<S301>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Steering Heading PID/PID with Error Wrapping'
 * '<S302>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Steering Heading PID/PID with Error Wrapping/Angle Modulus'
 * '<S303>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Steering Heading PID/PID with Error Wrapping/Difference'
 * '<S304>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Steering Heading PID/PID with Error Wrapping/Low_Pass_Filter'
 * '<S305>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Steering Heading PID/PID with Error Wrapping/Saturation Dynamic'
 * '<S306>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Translation Steering Command/Angle Modulus'
 * '<S307>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Reduce Speeds for Maximum Speed Limit'
 * '<S308>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add'
 * '<S309>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add1'
 * '<S310>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add2'
 * '<S311>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add3'
 * '<S312>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add/Angle_Saver'
 * '<S313>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add/Cartesian to Polar'
 * '<S314>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add/Polar to Cartesian'
 * '<S315>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add/Polar to Cartesian1'
 * '<S316>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add/Angle_Saver/Compare To Zero1'
 * '<S317>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add1/Angle_Saver'
 * '<S318>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add1/Cartesian to Polar'
 * '<S319>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add1/Polar to Cartesian'
 * '<S320>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add1/Polar to Cartesian1'
 * '<S321>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add1/Angle_Saver/Compare To Zero1'
 * '<S322>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add2/Angle_Saver'
 * '<S323>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add2/Cartesian to Polar'
 * '<S324>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add2/Polar to Cartesian'
 * '<S325>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add2/Polar to Cartesian1'
 * '<S326>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add2/Angle_Saver/Compare To Zero1'
 * '<S327>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add3/Angle_Saver'
 * '<S328>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add3/Cartesian to Polar'
 * '<S329>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add3/Polar to Cartesian'
 * '<S330>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add3/Polar to Cartesian1'
 * '<S331>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add3/Angle_Saver/Compare To Zero1'
 * '<S332>' : 'Code_Gen_Model/RoboRio Controls/Teleop/April Tag Errors'
 * '<S333>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive'
 * '<S334>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Subsystem Reference'
 * '<S335>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering'
 * '<S336>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation'
 * '<S337>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering/Compare To Zero2'
 * '<S338>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering/Detect Increase'
 * '<S339>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering/Detect Increase1'
 * '<S340>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering/Detect Increase2'
 * '<S341>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering/Detect Increase3'
 * '<S342>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering/Detect Increase4'
 * '<S343>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering/Detect Increase5'
 * '<S344>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering/Previous game state was not Teleop'
 * '<S345>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Boost and Rate Limit'
 * '<S346>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Compare To Zero'
 * '<S347>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Compare To Zero1'
 * '<S348>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Latch Outputs when Both Inputs Zero'
 * '<S349>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Boost and Rate Limit/Simple Rate Limit'
 * '<S350>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Boost and Rate Limit/Simple Rate Limit/Discrete Rate Limiter'
 * '<S351>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Boost and Rate Limit/Simple Rate Limit/Discrete Rate Limiter/Saturation Dynamic'
 * '<S352>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Boost and Rate Limit/Simple Rate Limit/Discrete Rate Limiter/Unit Delay External IC'
 * '<S353>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Latch Outputs when Both Inputs Zero/Compare To Zero'
 * '<S354>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Latch Outputs when Both Inputs Zero/Compare To Zero1'
 * '<S355>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Subsystem Reference/Coral_Chart'
 * '<S356>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Subsystem Reference/Detect Increase'
 * '<S357>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Subsystem Reference/Detect Increase1'
 * '<S358>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Subsystem Reference/Detect Increase2'
 * '<S359>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Subsystem Reference/Detect Increase3'
 * '<S360>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Subsystem Reference/Detect Increase4'
 * '<S361>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Subsystem Reference/Detect Increase5'
 * '<S362>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Subsystem Reference/Detect Increase6'
 * '<S363>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Subsystem Reference/Detect Increase7'
 */
#endif                                 /* RTW_HEADER_Code_Gen_Model_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
