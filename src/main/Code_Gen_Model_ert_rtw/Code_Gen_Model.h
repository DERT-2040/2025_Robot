/*
 * Sponsored License - for use in support of a program or activity
 * sponsored by MathWorks.  Not for government, commercial or other
 * non-sponsored organizational use.
 *
 * File: Code_Gen_Model.h
 *
 * Code generated for Simulink model 'Code_Gen_Model'.
 *
 * Model version                  : 2.307
 * Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
 * C/C++ source code generated on : Thu Mar  6 21:31:50 2025
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
  real_T FL_Steer_Module_Angle;        /* '<S213>/Add1' */
  real_T FR_Steer_Module_Angle;        /* '<S214>/Add1' */
  real_T BL_Steer_Module_Angle;        /* '<S215>/Add1' */
  real_T BR_Steer_Module_Angle;        /* '<S216>/Add1' */
  real_T Gyro_Angle_Calibrated_deg;    /* '<S11>/Subtract1' */
  real_T Gyro_Angle_rad;               /* '<S59>/Gain1' */
  real_T Gyro_Angle_Field_rad;         /* '<S11>/Add' */
  real_T Product6[2];                  /* '<S17>/Product6' */
  real_T Odom_Position_X;              /* '<S17>/Accumulator2' */
  real_T KF_Position_X;                /* '<S14>/Switch' */
  real_T Odom_Position_Y;              /* '<S17>/Accumulator' */
  real_T KF_Position_Y;                /* '<S14>/Switch1' */
  real_T Drive_Joystick_X;             /* '<S12>/Signal Copy1' */
  real_T Drive_Joystick_Y;             /* '<S12>/Signal Copy2' */
  real_T Drive_Joystick_Z;             /* '<S12>/Signal Copy3' */
  real_T Steer_Joystick_Y;             /* '<S12>/Signal Copy5' */
  real_T Steer_Joystick_Z;             /* '<S12>/Signal Copy6' */
  real_T Limelight_Tag_Corrected_X;    /* '<S15>/Add' */
  real_T Limelight_Tag_Corrected_Y;    /* '<S15>/Add1' */
  real_T Limelight_Tag_Corrected_Angle;/* '<S15>/Add2' */
  real_T Elevator_Height_Measured_Raw; /* '<S10>/Gain1' */
  real_T Elevator_Height_Offset;       /* '<S10>/Switch1' */
  real_T Elevator_Height_Measured;     /* '<S10>/Switch' */
  real_T Coral_Arm_Angle_Measured;     /* '<S1>/Add Constant' */
  real_T Spline_Num_Poses;             /* '<S16>/Merge9' */
  real_T Steering_Abs_Cmd;             /* '<S16>/Merge1' */
  real_T Steering_Rel_Cmd;             /* '<S16>/Merge2' */
  real_T Translation_Speed;            /* '<S16>/Merge4' */
  real_T Translation_Angle;            /* '<S16>/Merge3' */
  real_T Translation_Speed_SPF;        /* '<S19>/Merge2' */
  real_T Translation_Speed_RL;         /* '<S315>/Sum' */
  real_T Translation_Angle_SPF;        /* '<S19>/Merge3' */
  real_T Gyro_Angle_SPF;               /* '<S19>/Merge8' */
  real_T Translation_Steering_Cmd;     /* '<S309>/Switch' */
  real_T Steering_Abs_Cmd_SPF;         /* '<S19>/Merge' */
  real_T Steering_Localized_PID;       /* '<S336>/Saturation2' */
  real_T Steering_Rel_Cmd_SPF;         /* '<S19>/Merge1' */
  real_T Steering_Localized_Cmd;       /* '<S308>/Switch' */
  real_T BR_Desired_Wheel_Speed_in;    /* '<S362>/Switch1' */
  real_T FL_Desired_Wheel_Speed_in;    /* '<S347>/Switch1' */
  real_T FR_Desired_Wheel_Speed_in;    /* '<S352>/Switch1' */
  real_T BL_Desired_Wheel_Speed_in;    /* '<S357>/Switch1' */
  real_T BR_Desired_Wheel_Speed;       /* '<S342>/Product3' */
  real_T BR_Desired_Module_Angle;      /* '<S362>/Switch' */
  real_T FL_Desired_Module_Angle;      /* '<S347>/Switch' */
  real_T FL_Desired_Wheel_Speed;       /* '<S342>/Product' */
  real_T FR_Desired_Module_Angle;      /* '<S352>/Switch' */
  real_T FR_Desired_Wheel_Speed;       /* '<S342>/Product1' */
  real_T BL_Desired_Module_Angle;      /* '<S357>/Switch' */
  real_T BL_Desired_Wheel_Speed;       /* '<S342>/Product2' */
  real_T Elevator_Height_Desired;      /* '<S16>/Merge11' */
  real_T Coral_Arm_Angle_Desired;      /* '<S16>/Merge13' */
  real_T Elevator_Error;               /* '<S9>/Add' */
  real_T Elevator_Proportional;        /* '<S45>/Gain1' */
  real_T Elevator_Integral;            /* '<S45>/Switch' */
  real_T Coral_ArmAngle_Error;         /* '<S7>/Subtract' */
  real_T Elevator_Proportional_l;      /* '<S29>/Gain1' */
  real_T Elevator_Integral_o;          /* '<S29>/Switch' */
  real_T Odometry_Y_global_est_ft;     /* '<S149>/meters to feet1' */
  real_T Odometry_Y_global_TEAR_ft;    /* '<S149>/Subtract1' */
  real_T Odometry_X_global_est_ft;     /* '<S149>/meters to feet' */
  real_T Odometry_X_global_TEAR_ft;    /* '<S149>/Subtract' */
  real_T Steer_Joystick_X;             /* '<S12>/Signal Copy4' */
  real_T AT_Field_Error_X;             /* '<S367>/Switch2' */
  real_T AT_Field_Error_Y;             /* '<S367>/Switch4' */
  real_T DeadZone;                     /* '<S370>/Dead Zone' */
  real_T DeadZone1;                    /* '<S370>/Dead Zone1' */
  real_T AT_Relative_Error_X;          /* '<S368>/Unary Minus1' */
  real_T AT_Relative_Error_Y;          /* '<S368>/Subtract1' */
  real_T AT_Relative_Error_Angle;      /* '<S368>/Unary Minus' */
  real_T Steering_Abs_Gyro_Latch;      /* '<S390>/Switch8' */
  real_T Steering_Abs_Gyro;            /* '<S390>/Switch2' */
  real_T AT_Field_Target_Angle;        /* '<S367>/Switch15' */
  real_T Steering_Abs_Angle;           /* '<S390>/Switch3' */
  real_T Elevator_Height_Desired_m;    /* '<S370>/Reefscape_Chart' */
  real_T Coral_Arm_Angle_Desired_o;    /* '<S370>/Reefscape_Chart' */
  real_T Coral_Wheel_DC;               /* '<S370>/Reefscape_Chart' */
  real_T Spline_Follow_Index;          /* '<S158>/Merge4' */
  real_T Spline_Target_Y;              /* '<S155>/Selector6' */
  real_T Spline_Target_X;              /* '<S155>/Selector2' */
  real_T Product2[2];                  /* '<S139>/Product2' */
  real_T Product3[2];                  /* '<S137>/Product3' */
  uint8_T Set_Coral_Level;             /* '<S370>/Reefscape_Chart' */
  uint8_T Set_Algae_Level;             /* '<S370>/Reefscape_Chart' */
  uint8_T Active_GameState;            /* '<S18>/Chart' */
  boolean_T Button_Enable_Wheels;      /* '<S83>/FixPt Relational Operator' */
  boolean_T Button_Reset_Wheel_Offsets;/* '<S84>/FixPt Relational Operator' */
  boolean_T Button_Disable_Wheels;     /* '<S85>/FixPt Relational Operator' */
  boolean_T Drive_Joystick_Z_Mode;     /* '<S68>/Compare' */
  boolean_T Is_Boosting;               /* '<S78>/Compare' */
  boolean_T Face_Toward_Driver;        /* '<S66>/Compare' */
  boolean_T Face_Right_Driver;         /* '<S67>/Compare' */
  boolean_T Face_Left_Driver;          /* '<S69>/Compare' */
  boolean_T Face_Away_Driver;          /* '<S62>/Compare' */
  boolean_T Align_Left;                /* '<S76>/Compare' */
  boolean_T Align_Right;               /* '<S75>/Compare' */
  boolean_T Align_Center;              /* '<S77>/Compare' */
  boolean_T Coral_Station_Left;        /* '<S74>/Compare' */
  boolean_T Coral_Station_Right;       /* '<S73>/Compare' */
  boolean_T Processor;                 /* '<S72>/Compare' */
  boolean_T Cage_Left_Start;           /* '<S70>/Compare' */
  boolean_T Cage_Middle_Start;         /* '<S71>/Compare' */
  boolean_T Cage_Right_Start;          /* '<S79>/Compare' */
  boolean_T Cage_Left_Finish;          /* '<S80>/Compare' */
  boolean_T Cage_Middle_Finish;        /* '<S81>/Compare' */
  boolean_T Cage_Right_Finish;         /* '<S82>/Compare' */
  boolean_T Gamepad_POV_Up;            /* '<S61>/Compare' */
  boolean_T Gamepad_POV_Down;          /* '<S63>/Compare' */
  boolean_T Gamepad_POV_Left;          /* '<S65>/Compare' */
  boolean_T Gamepad_POV_Right;         /* '<S64>/Compare' */
  boolean_T Spline_Enable;             /* '<S16>/Merge7' */
  boolean_T Is_Absolute_Translation_SPF;/* '<S19>/Merge4' */
  boolean_T Is_Absolute_Steering_SPF;  /* '<S19>/Merge5' */
  boolean_T Swerve_Drive_Integral_Enable;/* '<S16>/Merge23' */
  boolean_T Reefscape_Motors_Enable;   /* '<S16>/Merge12' */
  boolean_T Robot_Reached_Destination; /* '<S19>/Merge7' */
  boolean_T Test_Mode;                 /* '<S16>/Merge10' */
  boolean_T Elevator_LowerPickup_Reset_tp;/* '<S16>/Merge21' */
  boolean_T FixPtRelationalOperator;   /* '<S413>/FixPt Relational Operator' */
  boolean_T FixPtRelationalOperator_n; /* '<S414>/FixPt Relational Operator' */
  boolean_T FixPtRelationalOperator_k; /* '<S418>/FixPt Relational Operator' */
  boolean_T FixPtRelationalOperator_d; /* '<S419>/FixPt Relational Operator' */
  boolean_T FixPtRelationalOperator_m; /* '<S423>/FixPt Relational Operator' */
  boolean_T FixPtRelationalOperator_ji;/* '<S416>/FixPt Relational Operator' */
  boolean_T FixPtRelationalOperator_ml;/* '<S417>/FixPt Relational Operator' */
  boolean_T AT_Relative_Enable;        /* '<S368>/Logical Operator1' */
  boolean_T AT_On_Target;              /* '<S368>/Logical Operator' */
  boolean_T Steering_Abs_Angle_Active; /* '<S390>/AND6' */
  boolean_T Elevator_LowerPickup_Reset;/* '<S370>/Reefscape_Chart' */
  boolean_T Coral_Pickup_Lower_Wait_State;/* '<S370>/Reefscape_Chart' */
  boolean_T Spline_Out_Of_Bounds;      /* '<S158>/Merge1' */
} B_Code_Gen_Model_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T UD_DSTATE;                    /* '<S141>/UD' */
  real_T UD_DSTATE_m;                  /* '<S142>/UD' */
  real_T UD_DSTATE_i;                  /* '<S143>/UD' */
  real_T UD_DSTATE_c;                  /* '<S144>/UD' */
  real_T TappedDelay_X[2];             /* '<S14>/Tapped Delay' */
  real_T TappedDelay1_X[2];            /* '<S14>/Tapped Delay1' */
  real_T MemoryX_DSTATE[2];            /* '<S86>/MemoryX' */
  real_T DelayInput1_DSTATE;           /* '<S60>/Delay Input1' */
  real_T UnitDelay1_DSTATE;            /* '<S11>/Unit Delay1' */
  real_T UD_DSTATE_d;                  /* '<S140>/UD' */
  real_T Accumulator2_DSTATE;          /* '<S17>/Accumulator2' */
  real_T Accumulator_DSTATE;           /* '<S17>/Accumulator' */
  real_T DelayInput1_DSTATE_n;         /* '<S83>/Delay Input1' */
  real_T DelayInput1_DSTATE_e;         /* '<S84>/Delay Input1' */
  real_T DelayInput1_DSTATE_nj;        /* '<S85>/Delay Input1' */
  real_T UnitDelay1_DSTATE_i;          /* '<S339>/Unit Delay1' */
  real_T UD_DSTATE_a;                  /* '<S338>/UD' */
  real_T UnitDelay_DSTATE_m;           /* '<S336>/Unit Delay' */
  real_T UnitDelay_DSTATE_d;           /* '<S319>/Unit Delay' */
  real_T FixPtUnitDelay1_DSTATE_e;     /* '<S334>/FixPt Unit Delay1' */
  real_T UnitDelay_DSTATE_g;           /* '<S318>/Unit Delay' */
  real_T FixPtUnitDelay1_DSTATE_p;     /* '<S327>/FixPt Unit Delay1' */
  real_T UnitDelay1_DSTATE_j;          /* '<S293>/Unit Delay1' */
  real_T UD_DSTATE_j;                  /* '<S292>/UD' */
  real_T UnitDelay_DSTATE_l;           /* '<S286>/Unit Delay' */
  real_T UnitDelay1_DSTATE_f;          /* '<S230>/Unit Delay1' */
  real_T UD_DSTATE_h;                  /* '<S229>/UD' */
  real_T UnitDelay_DSTATE_j;           /* '<S223>/Unit Delay' */
  real_T UnitDelay1_DSTATE_b;          /* '<S241>/Unit Delay1' */
  real_T UD_DSTATE_b;                  /* '<S240>/UD' */
  real_T UnitDelay_DSTATE_e;           /* '<S226>/Unit Delay' */
  real_T UnitDelay1_DSTATE_e;          /* '<S251>/Unit Delay1' */
  real_T UD_DSTATE_mm;                 /* '<S250>/UD' */
  real_T UnitDelay_DSTATE_h;           /* '<S244>/Unit Delay' */
  real_T UnitDelay1_DSTATE_n;          /* '<S262>/Unit Delay1' */
  real_T UD_DSTATE_i1;                 /* '<S261>/UD' */
  real_T UnitDelay_DSTATE_dt;          /* '<S247>/Unit Delay' */
  real_T UnitDelay1_DSTATE_n4;         /* '<S272>/Unit Delay1' */
  real_T UD_DSTATE_o;                  /* '<S271>/UD' */
  real_T UnitDelay_DSTATE_f;           /* '<S265>/Unit Delay' */
  real_T UnitDelay1_DSTATE_nw;         /* '<S283>/Unit Delay1' */
  real_T UD_DSTATE_k;                  /* '<S282>/UD' */
  real_T UnitDelay_DSTATE_k;           /* '<S268>/Unit Delay' */
  real_T UnitDelay1_DSTATE_iw;         /* '<S304>/Unit Delay1' */
  real_T UD_DSTATE_l;                  /* '<S303>/UD' */
  real_T UnitDelay_DSTATE_lm;          /* '<S289>/Unit Delay' */
  real_T UnitDelay_DSTATE_mh;          /* '<S44>/Unit Delay' */
  real_T FixPtUnitDelay1_DSTATE_l;     /* '<S53>/FixPt Unit Delay1' */
  real_T UnitDelay_DSTATE_oz;          /* '<S28>/Unit Delay' */
  real_T FixPtUnitDelay1_DSTATE_pc;    /* '<S37>/FixPt Unit Delay1' */
  real_T UnitDelay1_DSTATE_d;          /* '<S149>/Unit Delay1' */
  real_T UnitDelay_DSTATE_c;           /* '<S149>/Unit Delay' */
  real_T UnitDelay1_DSTATE_l;          /* '<S406>/Unit Delay1' */
  real_T UnitDelay_DSTATE_p;           /* '<S406>/Unit Delay' */
  real_T DelayInput1_DSTATE_c;         /* '<S413>/Delay Input1' */
  real_T DelayInput1_DSTATE_nr;        /* '<S414>/Delay Input1' */
  real_T DelayInput1_DSTATE_ez;        /* '<S418>/Delay Input1' */
  real_T DelayInput1_DSTATE_nh;        /* '<S419>/Delay Input1' */
  real_T DelayInput1_DSTATE_i;         /* '<S420>/Delay Input1' */
  real_T DelayInput1_DSTATE_cp;        /* '<S415>/Delay Input1' */
  real_T DelayInput1_DSTATE_p;         /* '<S421>/Delay Input1' */
  real_T DelayInput1_DSTATE_o;         /* '<S424>/Delay Input1' */
  real_T DelayInput1_DSTATE_j;         /* '<S425>/Delay Input1' */
  real_T UnitDelay_DSTATE_kq;          /* '<S368>/Unit Delay' */
  real_T UnitDelay1_DSTATE_nr;         /* '<S368>/Unit Delay1' */
  real_T FixPtUnitDelay1_DSTATE_f;     /* '<S410>/FixPt Unit Delay1' */
  real_T UnitDelay_DSTATE_kr;          /* '<S399>/Unit Delay' */
  real_T UnitDelay3_DSTATE;            /* '<S390>/Unit Delay3' */
  real_T UnitDelay1_DSTATE_e1;         /* '<S367>/Unit Delay1' */
  real_T UnitDelay1_DSTATE_j2;         /* '<S390>/Unit Delay1' */
  real_T UnitDelay_DSTATE_gh;          /* '<S154>/Unit Delay' */
  real_T timer;                        /* '<S370>/Reefscape_Chart' */
  real_T timer_robot_target;           /* '<S370>/Reefscape_Chart' */
  int32_T Selector4_DIMS1[2];          /* '<S175>/Selector4' */
  uint8_T FixPtUnitDelay2_DSTATE;      /* '<S317>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_p;    /* '<S334>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_c;    /* '<S327>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_o;    /* '<S53>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_j;    /* '<S37>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_a;    /* '<S410>/FixPt Unit Delay2' */
  boolean_T DelayInput1_DSTATE_b;      /* '<S56>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_o1;     /* '<S57>/Delay Input1' */
  boolean_T UnitDelay_DSTATE_mph;      /* '<S1>/Unit Delay' */
  boolean_T DelayInput1_DSTATE_po;     /* '<S58>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_be;     /* '<S54>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_op;     /* '<S38>/Delay Input1' */
  boolean_T UnitDelay_DSTATE_ir;       /* '<S23>/Unit Delay' */
  boolean_T DelayInput1_DSTATE_oy;     /* '<S422>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_f;      /* '<S423>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_o5;     /* '<S416>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_a;      /* '<S417>/Delay Input1' */
  boolean_T UnitDelay_DSTATE_irb;      /* '<S22>/Unit Delay' */
  boolean_T DelayInput1_DSTATE_is;     /* '<S401>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_jp;     /* '<S398>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_ft;     /* '<S397>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_m;      /* '<S393>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_k;      /* '<S394>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_g;      /* '<S395>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_g2;     /* '<S396>/Delay Input1' */
  boolean_T UnitDelay2_DSTATE;         /* '<S390>/Unit Delay2' */
  boolean_T UnitDelay4_DSTATE;         /* '<S390>/Unit Delay4' */
  int8_T Accumulator2_PrevResetState;  /* '<S17>/Accumulator2' */
  int8_T Accumulator_PrevResetState;   /* '<S17>/Accumulator' */
  int8_T SwitchCase_ActiveSubsystem;   /* '<S1>/Switch Case' */
  int8_T If_ActiveSubsystem;           /* '<S19>/If' */
  int8_T If_ActiveSubsystem_h;         /* '<S158>/If' */
  int8_T If_ActiveSubsystem_o;         /* '<S161>/If' */
  int8_T If_ActiveSubsystem_d;         /* '<S163>/If' */
  uint8_T is_active_c4_Code_Gen_Model; /* '<S370>/Reefscape_Chart' */
  uint8_T is_Elevator_CoralArm_CoralWheel;/* '<S370>/Reefscape_Chart' */
  uint8_T is_Coral_Eject;              /* '<S370>/Reefscape_Chart' */
  uint8_T is_Actions;                  /* '<S370>/Reefscape_Chart' */
  uint8_T is_Set_Level;                /* '<S370>/Reefscape_Chart' */
  uint8_T is_Coral_Score_Position;     /* '<S370>/Reefscape_Chart' */
  uint8_T is_Algae_Wheels;             /* '<S370>/Reefscape_Chart' */
  uint8_T is_AT_On_Target_Timer;       /* '<S370>/Reefscape_Chart' */
  uint8_T is_active_c9_Code_Gen_Model; /* '<S18>/Chart' */
  uint8_T is_c9_Code_Gen_Model;        /* '<S18>/Chart' */
  boolean_T icLoad;                    /* '<S86>/MemoryX' */
  boolean_T Set_L1;                    /* '<S370>/Reefscape_Chart' */
  boolean_T Set_L2;                    /* '<S370>/Reefscape_Chart' */
  boolean_T Set_L3;                    /* '<S370>/Reefscape_Chart' */
  boolean_T Set_L4;                    /* '<S370>/Reefscape_Chart' */
  boolean_T EnabledSubsystem_MODE;     /* '<S113>/Enabled Subsystem' */
  boolean_T MeasurementUpdate_MODE;    /* '<S106>/MeasurementUpdate' */
} DW_Code_Gen_Model_T;

/* Invariant block signals (default storage) */
typedef struct {
  const real_T UnaryMinus;             /* '<S28>/Unary Minus' */
  const real_T UnaryMinus_m;           /* '<S44>/Unary Minus' */
  const real_T Cos5;                   /* '<S234>/Cos5' */
  const real_T Sin5;                   /* '<S234>/Sin5' */
  const real_T Cos5_g;                 /* '<S255>/Cos5' */
  const real_T Sin5_m;                 /* '<S255>/Sin5' */
  const real_T Cos5_i;                 /* '<S276>/Cos5' */
  const real_T Sin5_e;                 /* '<S276>/Sin5' */
  const real_T Cos5_b;                 /* '<S297>/Cos5' */
  const real_T Sin5_c;                 /* '<S297>/Sin5' */
  const real_T Atan2;                  /* '<S307>/Atan2' */
  const real_T FL_Tangent_Angle;       /* '<S307>/Add' */
  const real_T Atan1;                  /* '<S307>/Atan1' */
  const real_T FR_Tangent_Angle;       /* '<S307>/Add1' */
  const real_T Atan3;                  /* '<S307>/Atan3' */
  const real_T BL_Tangent_Angle;       /* '<S307>/Add2' */
  const real_T Atan4;                  /* '<S307>/Atan4' */
  const real_T BR_Tangent_Angle;       /* '<S307>/Add3' */
} ConstB_Code_Gen_Model_T;

/* Constant parameters (default storage) */
typedef struct {
  /* Expression: Coral_Arm_Lower_Limit_Out
   * Referenced by: '<S7>/Range of Motion Protection Limit'
   */
  real_T RangeofMotionProtectionLimit_ta[75];

  /* Expression: Coral_Arm_Lower_Limit_Elevator_Height_Input
   * Referenced by: '<S7>/Range of Motion Protection Limit'
   */
  real_T RangeofMotionProtectionLimit_bp[75];

  /* Expression: Steering_Mod_Drv_out
   * Referenced by: '<S391>/Modulation_Drv'
   */
  real_T Modulation_Drv_tableData[21];

  /* Expression: Steering_Mod_Drv_in
   * Referenced by: '<S391>/Modulation_Drv'
   */
  real_T Modulation_Drv_bp01Data[21];

  /* Expression: Steering_Mod_Str_Rel_out
   * Referenced by: '<S390>/Modulation_Str_Y_Rel'
   */
  real_T Modulation_Str_Y_Rel_tableData[21];

  /* Expression: Steering_Mod_Str_Rel_in
   * Referenced by: '<S390>/Modulation_Str_Y_Rel'
   */
  real_T Modulation_Str_Y_Rel_bp01Data[21];

  /* Expression: Rotation_Local_Inv
   * Referenced by: '<S17>/Constant4'
   */
  real_T Constant4_Value[16];

  /* Pooled Parameter (Expression: Drive_Motor_Control_Scale_Factor)
   * Referenced by:
   *   '<S225>/1-D Lookup Table'
   *   '<S246>/1-D Lookup Table'
   *   '<S267>/1-D Lookup Table'
   *   '<S288>/1-D Lookup Table'
   */
  real_T pooled32[2];

  /* Pooled Parameter (Expression: Drive_Motor_Control_Module_Angle_Error)
   * Referenced by:
   *   '<S225>/1-D Lookup Table'
   *   '<S246>/1-D Lookup Table'
   *   '<S267>/1-D Lookup Table'
   *   '<S288>/1-D Lookup Table'
   */
  real_T pooled33[2];

  /* Pooled Parameter (Expression: Elevator_Height_Lower_Limit_Out)
   * Referenced by:
   *   '<S9>/Range of Motion Protection Limit'
   *   '<S9>/Range of Motion Protection Limit1'
   */
  real_T pooled34[96];

  /* Pooled Parameter (Expression: Elevator_Height_Lower_Limit_Coral_Arm_Input)
   * Referenced by:
   *   '<S9>/Range of Motion Protection Limit'
   *   '<S9>/Range of Motion Protection Limit1'
   */
  real_T pooled35[96];

  /* Expression: Coral_Arm_DC_Upper_Limit_Out
   * Referenced by: '<S7>/1-D Lookup Table'
   */
  real_T uDLookupTable_tableData[3];

  /* Expression: Coral_Arm_DC_Upper_Limit_Angle_In
   * Referenced by: '<S7>/1-D Lookup Table'
   */
  real_T uDLookupTable_bp01Data[3];

  /* Expression: Coral_Arm_DC_Lower_Limit_Out
   * Referenced by: '<S7>/1-D Lookup Table1'
   */
  real_T uDLookupTable1_tableData[2];

  /* Expression: Coral_Arm_DC_Lower_Limit_Angle_In
   * Referenced by: '<S7>/1-D Lookup Table1'
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
                                        * Referenced by: '<S367>/Constant14'
                                        */
extern real_T AT_CS_L_Angle_Red;       /* Variable: AT_CS_L_Angle_Red
                                        * Referenced by: '<S367>/Constant13'
                                        */
extern real_T AT_CS_L_X_Blue;          /* Variable: AT_CS_L_X_Blue
                                        * Referenced by: '<S367>/Constant9'
                                        */
extern real_T AT_CS_L_X_Red;           /* Variable: AT_CS_L_X_Red
                                        * Referenced by: '<S367>/Constant5'
                                        */
extern real_T AT_CS_L_Y_Blue;          /* Variable: AT_CS_L_Y_Blue
                                        * Referenced by: '<S367>/Constant28'
                                        */
extern real_T AT_CS_L_Y_Red;           /* Variable: AT_CS_L_Y_Red
                                        * Referenced by: '<S367>/Constant27'
                                        */
extern real_T AT_CS_R_Angle_Blue;      /* Variable: AT_CS_R_Angle_Blue
                                        * Referenced by: '<S367>/Constant12'
                                        */
extern real_T AT_CS_R_Angle_Red;       /* Variable: AT_CS_R_Angle_Red
                                        * Referenced by: '<S367>/Constant11'
                                        */
extern real_T AT_CS_R_X_Blue;          /* Variable: AT_CS_R_X_Blue
                                        * Referenced by: '<S367>/Constant4'
                                        */
extern real_T AT_CS_R_X_Red;           /* Variable: AT_CS_R_X_Red
                                        * Referenced by: '<S367>/Constant17'
                                        */
extern real_T AT_CS_R_Y_Blue;          /* Variable: AT_CS_R_Y_Blue
                                        * Referenced by: '<S367>/Constant26'
                                        */
extern real_T AT_CS_R_Y_Red;           /* Variable: AT_CS_R_Y_Red
                                        * Referenced by: '<S367>/Constant3'
                                        */
extern real_T AT_Cage_L_Finish_Angle_Blue;/* Variable: AT_Cage_L_Finish_Angle_Blue
                                           * Referenced by: '<S367>/Constant55'
                                           */
extern real_T AT_Cage_L_Finish_Angle_Red;/* Variable: AT_Cage_L_Finish_Angle_Red
                                          * Referenced by: '<S367>/Constant54'
                                          */
extern real_T AT_Cage_L_Finish_X_Blue; /* Variable: AT_Cage_L_Finish_X_Blue
                                        * Referenced by: '<S367>/Constant39'
                                        */
extern real_T AT_Cage_L_Finish_X_Red;  /* Variable: AT_Cage_L_Finish_X_Red
                                        * Referenced by: '<S367>/Constant2'
                                        */
extern real_T AT_Cage_L_Finish_Y_Blue; /* Variable: AT_Cage_L_Finish_Y_Blue
                                        * Referenced by: '<S367>/Constant43'
                                        */
extern real_T AT_Cage_L_Finish_Y_Red;  /* Variable: AT_Cage_L_Finish_Y_Red
                                        * Referenced by: '<S367>/Constant42'
                                        */
extern real_T AT_Cage_L_Start_Angle_Blue;/* Variable: AT_Cage_L_Start_Angle_Blue
                                          * Referenced by: '<S367>/Constant49'
                                          */
extern real_T AT_Cage_L_Start_Angle_Red;/* Variable: AT_Cage_L_Start_Angle_Red
                                         * Referenced by: '<S367>/Constant48'
                                         */
extern real_T AT_Cage_L_Start_X_Blue;  /* Variable: AT_Cage_L_Start_X_Blue
                                        * Referenced by: '<S367>/Constant7'
                                        */
extern real_T AT_Cage_L_Start_X_Red;   /* Variable: AT_Cage_L_Start_X_Red
                                        * Referenced by: '<S367>/Constant15'
                                        */
extern real_T AT_Cage_L_Start_Y_Blue;  /* Variable: AT_Cage_L_Start_Y_Blue
                                        * Referenced by: '<S367>/Constant32'
                                        */
extern real_T AT_Cage_L_Start_Y_Red;   /* Variable: AT_Cage_L_Start_Y_Red
                                        * Referenced by: '<S367>/Constant25'
                                        */
extern real_T AT_Cage_M_Finish_Angle_Blue;/* Variable: AT_Cage_M_Finish_Angle_Blue
                                           * Referenced by: '<S367>/Constant53'
                                           */
extern real_T AT_Cage_M_Finish_Angle_Red;/* Variable: AT_Cage_M_Finish_Angle_Red
                                          * Referenced by: '<S367>/Constant52'
                                          */
extern real_T AT_Cage_M_Finish_X_Blue; /* Variable: AT_Cage_M_Finish_X_Blue
                                        * Referenced by: '<S367>/Constant34'
                                        */
extern real_T AT_Cage_M_Finish_X_Red;  /* Variable: AT_Cage_M_Finish_X_Red
                                        * Referenced by: '<S367>/Constant35'
                                        */
extern real_T AT_Cage_M_Finish_Y_Blue; /* Variable: AT_Cage_M_Finish_Y_Blue
                                        * Referenced by: '<S367>/Constant41'
                                        */
extern real_T AT_Cage_M_Finish_Y_Red;  /* Variable: AT_Cage_M_Finish_Y_Red
                                        * Referenced by: '<S367>/Constant44'
                                        */
extern real_T AT_Cage_M_Start_Angle_Blue;/* Variable: AT_Cage_M_Start_Angle_Blue
                                          * Referenced by: '<S367>/Constant47'
                                          */
extern real_T AT_Cage_M_Start_Angle_Red;/* Variable: AT_Cage_M_Start_Angle_Red
                                         * Referenced by: '<S367>/Constant46'
                                         */
extern real_T AT_Cage_M_Start_X_Blue;  /* Variable: AT_Cage_M_Start_X_Blue
                                        * Referenced by: '<S367>/Constant20'
                                        */
extern real_T AT_Cage_M_Start_X_Red;   /* Variable: AT_Cage_M_Start_X_Red
                                        * Referenced by: '<S367>/Constant24'
                                        */
extern real_T AT_Cage_M_Start_Y_Blue;  /* Variable: AT_Cage_M_Start_Y_Blue
                                        * Referenced by: '<S367>/Constant22'
                                        */
extern real_T AT_Cage_M_Start_Y_Red;   /* Variable: AT_Cage_M_Start_Y_Red
                                        * Referenced by: '<S367>/Constant33'
                                        */
extern real_T AT_Cage_R_Finish_Angle_Blue;/* Variable: AT_Cage_R_Finish_Angle_Blue
                                           * Referenced by: '<S367>/Constant51'
                                           */
extern real_T AT_Cage_R_Finish_Angle_Red;/* Variable: AT_Cage_R_Finish_Angle_Red
                                          * Referenced by: '<S367>/Constant56'
                                          */
extern real_T AT_Cage_R_Finish_X_Blue; /* Variable: AT_Cage_R_Finish_X_Blue
                                        * Referenced by: '<S367>/Constant36'
                                        */
extern real_T AT_Cage_R_Finish_X_Red;  /* Variable: AT_Cage_R_Finish_X_Red
                                        * Referenced by: '<S367>/Constant38'
                                        */
extern real_T AT_Cage_R_Finish_Y_Blue; /* Variable: AT_Cage_R_Finish_Y_Blue
                                        * Referenced by: '<S367>/Constant45'
                                        */
extern real_T AT_Cage_R_Finish_Y_Red;  /* Variable: AT_Cage_R_Finish_Y_Red
                                        * Referenced by: '<S367>/Constant40'
                                        */
extern real_T AT_Cage_R_Start_Angle_Blue;/* Variable: AT_Cage_R_Start_Angle_Blue
                                          * Referenced by: '<S367>/Constant1'
                                          */
extern real_T AT_Cage_R_Start_Angle_Red;/* Variable: AT_Cage_R_Start_Angle_Red
                                         * Referenced by: '<S367>/Constant50'
                                         */
extern real_T AT_Cage_R_Start_X_Blue;  /* Variable: AT_Cage_R_Start_X_Blue
                                        * Referenced by: '<S367>/Constant29'
                                        */
extern real_T AT_Cage_R_Start_X_Red;   /* Variable: AT_Cage_R_Start_X_Red
                                        * Referenced by: '<S367>/Constant31'
                                        */
extern real_T AT_Cage_R_Start_Y_Blue;  /* Variable: AT_Cage_R_Start_Y_Blue
                                        * Referenced by: '<S367>/Constant6'
                                        */
extern real_T AT_Cage_R_Start_Y_Red;   /* Variable: AT_Cage_R_Start_Y_Red
                                        * Referenced by: '<S367>/Constant16'
                                        */
extern real_T AT_Integral_Enable_Error_Angle;
                                     /* Variable: AT_Integral_Enable_Error_Angle
                                      * Referenced by: '<S374>/Constant'
                                      */
extern real_T AT_Integral_Enable_Error_XY;/* Variable: AT_Integral_Enable_Error_XY
                                           * Referenced by:
                                           *   '<S381>/Constant'
                                           *   '<S382>/Constant'
                                           */
extern real_T AT_Max_Error_Angle;      /* Variable: AT_Max_Error_Angle
                                        * Referenced by: '<S380>/Constant'
                                        */
extern real_T AT_Max_Error_XY;         /* Variable: AT_Max_Error_XY
                                        * Referenced by:
                                        *   '<S378>/Constant'
                                        *   '<S379>/Constant'
                                        */
extern real_T AT_On_Target_Time;       /* Variable: AT_On_Target_Time
                                        * Referenced by: '<S370>/Reefscape_Chart'
                                        */
extern real_T AT_Processor_Angle_Blue; /* Variable: AT_Processor_Angle_Blue
                                        * Referenced by: '<S367>/Constant10'
                                        */
extern real_T AT_Processor_Angle_Red;  /* Variable: AT_Processor_Angle_Red
                                        * Referenced by: '<S367>/Constant8'
                                        */
extern real_T AT_Processor_X_Blue;     /* Variable: AT_Processor_X_Blue
                                        * Referenced by: '<S367>/Constant18'
                                        */
extern real_T AT_Processor_X_Red;      /* Variable: AT_Processor_X_Red
                                        * Referenced by: '<S367>/Constant19'
                                        */
extern real_T AT_Processor_Y_Blue;     /* Variable: AT_Processor_Y_Blue
                                        * Referenced by: '<S367>/Constant21'
                                        */
extern real_T AT_Processor_Y_Red;      /* Variable: AT_Processor_Y_Red
                                        * Referenced by: '<S367>/Constant23'
                                        */
extern real_T AT_Reef_Target_Algae_X;  /* Variable: AT_Reef_Target_Algae_X
                                        * Referenced by: '<S368>/Constant7'
                                        */
extern real_T AT_Reef_Target_Algae_Y;  /* Variable: AT_Reef_Target_Algae_Y
                                        * Referenced by: '<S368>/Constant6'
                                        */
extern real_T AT_Reef_Target_Center_Y; /* Variable: AT_Reef_Target_Center_Y
                                        * Referenced by: '<S368>/Constant3'
                                        */
extern real_T AT_Reef_Target_L1_X;     /* Variable: AT_Reef_Target_L1_X
                                        * Referenced by: '<S368>/Constant4'
                                        */
extern real_T AT_Reef_Target_L2_L3_X;  /* Variable: AT_Reef_Target_L2_L3_X
                                        * Referenced by: '<S368>/Constant'
                                        */
extern real_T AT_Reef_Target_L4_X;     /* Variable: AT_Reef_Target_L4_X
                                        * Referenced by: '<S368>/Constant5'
                                        */
extern real_T AT_Reef_Target_Left_Y;   /* Variable: AT_Reef_Target_Left_Y
                                        * Referenced by: '<S368>/Constant1'
                                        */
extern real_T AT_Reef_Target_Right_Y;  /* Variable: AT_Reef_Target_Right_Y
                                        * Referenced by: '<S368>/Constant2'
                                        */
extern real_T AT_Steering_Error_Angle_Gain_I;
                                     /* Variable: AT_Steering_Error_Angle_Gain_I
                                      * Referenced by: '<S399>/Gain2'
                                      */
extern real_T AT_Steering_Error_Angle_Gain_P;
                                     /* Variable: AT_Steering_Error_Angle_Gain_P
                                      * Referenced by: '<S399>/Gain1'
                                      */
extern real_T AT_Steering_Speed_Int_LL;/* Variable: AT_Steering_Speed_Int_LL
                                        * Referenced by: '<S399>/Saturation1'
                                        */
extern real_T AT_Steering_Speed_Int_UL;/* Variable: AT_Steering_Speed_Int_UL
                                        * Referenced by: '<S399>/Saturation1'
                                        */
extern real_T AT_Steering_Speed_LL;    /* Variable: AT_Steering_Speed_LL
                                        * Referenced by:
                                        *   '<S399>/Constant1'
                                        *   '<S399>/Saturation2'
                                        */
extern real_T AT_Steering_Speed_UL;    /* Variable: AT_Steering_Speed_UL
                                        * Referenced by:
                                        *   '<S399>/Constant'
                                        *   '<S399>/Saturation2'
                                        */
extern real_T AT_Translation_Control_Gain_Field;
                                  /* Variable: AT_Translation_Control_Gain_Field
                                   * Referenced by: '<S391>/Gain2'
                                   */
extern real_T AT_Translation_Control_Gain_Relative;
                               /* Variable: AT_Translation_Control_Gain_Relative
                                * Referenced by: '<S391>/Gain1'
                                */
extern real_T AT_Translation_Speed_Max_Field;
                                     /* Variable: AT_Translation_Speed_Max_Field
                                      * Referenced by: '<S391>/Constant5'
                                      */
extern real_T AT_Translation_Speed_Max_Relative;
                                  /* Variable: AT_Translation_Speed_Max_Relative
                                   * Referenced by: '<S391>/Constant8'
                                   */
extern real_T Algae_Eject_Time;        /* Variable: Algae_Eject_Time
                                        * Referenced by: '<S370>/Reefscape_Chart'
                                        */
extern real_T Algae_Hold_DC;           /* Variable: Algae_Hold_DC
                                        * Referenced by: '<S370>/Reefscape_Chart'
                                        */
extern real_T Algae_Pull_In_DC;        /* Variable: Algae_Pull_In_DC
                                        * Referenced by: '<S370>/Reefscape_Chart'
                                        */
extern real_T Algae_Push_Out_DC;       /* Variable: Algae_Push_Out_DC
                                        * Referenced by: '<S370>/Reefscape_Chart'
                                        */
extern real_T Boost_Trigger_Decreasing_Limit;
                                     /* Variable: Boost_Trigger_Decreasing_Limit
                                      * Referenced by: '<S407>/Constant1'
                                      */
extern real_T Boost_Trigger_High_Speed;/* Variable: Boost_Trigger_High_Speed
                                        * Referenced by:
                                        *   '<S403>/Constant'
                                        *   '<S403>/Saturation'
                                        */
extern real_T Boost_Trigger_Increasing_Limit;
                                     /* Variable: Boost_Trigger_Increasing_Limit
                                      * Referenced by: '<S407>/Constant3'
                                      */
extern real_T Boost_Trigger_Low_Speed; /* Variable: Boost_Trigger_Low_Speed
                                        * Referenced by: '<S403>/Constant1'
                                        */
extern real_T Coral_Arm_Angle_Coral_Score_Lower_Rate;
                             /* Variable: Coral_Arm_Angle_Coral_Score_Lower_Rate
                              * Referenced by: '<S370>/Reefscape_Chart'
                              */
extern real_T Coral_Arm_Angle_Error_Threshold;
                                    /* Variable: Coral_Arm_Angle_Error_Threshold
                                     * Referenced by: '<S370>/Reefscape_Chart'
                                     */
extern real_T Coral_Arm_Angle_L1;      /* Variable: Coral_Arm_Angle_L1
                                        * Referenced by: '<S370>/Reefscape_Chart'
                                        */
extern real_T Coral_Arm_Angle_L2;      /* Variable: Coral_Arm_Angle_L2
                                        * Referenced by: '<S370>/Reefscape_Chart'
                                        */
extern real_T Coral_Arm_Angle_L3;      /* Variable: Coral_Arm_Angle_L3
                                        * Referenced by: '<S370>/Reefscape_Chart'
                                        */
extern real_T Coral_Arm_Angle_L4;      /* Variable: Coral_Arm_Angle_L4
                                        * Referenced by: '<S370>/Reefscape_Chart'
                                        */
extern real_T Coral_Arm_Angle_L4_Eject;/* Variable: Coral_Arm_Angle_L4_Eject
                                        * Referenced by: '<S370>/Reefscape_Chart'
                                        */
extern real_T Coral_Arm_Angle_Neg_Threshold;
                                      /* Variable: Coral_Arm_Angle_Neg_Threshold
                                       * Referenced by: '<S25>/Constant'
                                       */
extern real_T Coral_Arm_Angle_Pos_Threshold;
                                      /* Variable: Coral_Arm_Angle_Pos_Threshold
                                       * Referenced by:
                                       *   '<S26>/Constant'
                                       *   '<S27>/Constant'
                                       */
extern real_T Coral_Arm_Angle_Start;   /* Variable: Coral_Arm_Angle_Start
                                        * Referenced by: '<S370>/Reefscape_Chart'
                                        */
extern real_T Coral_Arm_Angle_Start_Thresh;/* Variable: Coral_Arm_Angle_Start_Thresh
                                            * Referenced by: '<S370>/Reefscape_Chart'
                                            */
extern real_T Coral_Arm_Angle_Up;      /* Variable: Coral_Arm_Angle_Up
                                        * Referenced by: '<S370>/Reefscape_Chart'
                                        */
extern real_T Coral_Arm_DC_Inc_RL;     /* Variable: Coral_Arm_DC_Inc_RL
                                        * Referenced by: '<S28>/Constant3'
                                        */
extern real_T Coral_Arm_Gain_Int;      /* Variable: Coral_Arm_Gain_Int
                                        * Referenced by: '<S29>/Gain2'
                                        */
extern real_T Coral_Arm_Gain_Prop;     /* Variable: Coral_Arm_Gain_Prop
                                        * Referenced by: '<S29>/Gain1'
                                        */
extern real_T Coral_Arm_Int_IC;        /* Variable: Coral_Arm_Int_IC
                                        * Referenced by: '<S29>/Constant3'
                                        */
extern real_T Coral_Arm_Int_LL;        /* Variable: Coral_Arm_Int_LL
                                        * Referenced by: '<S29>/Saturation1'
                                        */
extern real_T Coral_Arm_Int_UL;        /* Variable: Coral_Arm_Int_UL
                                        * Referenced by: '<S29>/Saturation1'
                                        */
extern real_T Coral_Arm_Manual_Gain;   /* Variable: Coral_Arm_Manual_Gain
                                        * Referenced by: '<S370>/Reefscape_Chart'
                                        */
extern real_T Coral_Arm_Neg90_DC;      /* Variable: Coral_Arm_Neg90_DC
                                        * Referenced by: '<S7>/Constant2'
                                        */
extern real_T Coral_Arm_Pos90_DC;      /* Variable: Coral_Arm_Pos90_DC
                                        * Referenced by: '<S7>/Constant1'
                                        */
extern real_T Coral_Detect_Distance;   /* Variable: Coral_Detect_Distance
                                        * Referenced by: '<S370>/Reefscape_Chart'
                                        */
extern real_T Coral_Eject_Time;        /* Variable: Coral_Eject_Time
                                        * Referenced by: '<S370>/Reefscape_Chart'
                                        */
extern real_T Coral_Motor_DC_Eject;    /* Variable: Coral_Motor_DC_Eject
                                        * Referenced by: '<S370>/Reefscape_Chart'
                                        */
extern real_T Coral_Motor_DC_Hold;     /* Variable: Coral_Motor_DC_Hold
                                        * Referenced by: '<S370>/Reefscape_Chart'
                                        */
extern real_T Coral_Motor_DC_Pickup;   /* Variable: Coral_Motor_DC_Pickup
                                        * Referenced by: '<S370>/Reefscape_Chart'
                                        */
extern real_T Drive_Motor_Control_D;   /* Variable: Drive_Motor_Control_D
                                        * Referenced by:
                                        *   '<S223>/Constant3'
                                        *   '<S244>/Constant3'
                                        *   '<S265>/Constant3'
                                        *   '<S286>/Constant3'
                                        */
extern real_T Drive_Motor_Control_D_FilterCoeff;
                                  /* Variable: Drive_Motor_Control_D_FilterCoeff
                                   * Referenced by:
                                   *   '<S223>/Constant2'
                                   *   '<S244>/Constant2'
                                   *   '<S265>/Constant2'
                                   *   '<S286>/Constant2'
                                   */
extern real_T Drive_Motor_Control_D_LL;/* Variable: Drive_Motor_Control_D_LL
                                        * Referenced by:
                                        *   '<S223>/Saturation'
                                        *   '<S244>/Saturation'
                                        *   '<S265>/Saturation'
                                        *   '<S286>/Saturation'
                                        */
extern real_T Drive_Motor_Control_D_UL;/* Variable: Drive_Motor_Control_D_UL
                                        * Referenced by:
                                        *   '<S223>/Saturation'
                                        *   '<S244>/Saturation'
                                        *   '<S265>/Saturation'
                                        *   '<S286>/Saturation'
                                        */
extern real_T Drive_Motor_Control_FF;  /* Variable: Drive_Motor_Control_FF
                                        * Referenced by:
                                        *   '<S223>/Gain'
                                        *   '<S244>/Gain'
                                        *   '<S265>/Gain'
                                        *   '<S286>/Gain'
                                        */
extern real_T Drive_Motor_Control_I;   /* Variable: Drive_Motor_Control_I
                                        * Referenced by:
                                        *   '<S223>/Gain2'
                                        *   '<S244>/Gain2'
                                        *   '<S265>/Gain2'
                                        *   '<S286>/Gain2'
                                        */
extern real_T Drive_Motor_Control_I_LL;/* Variable: Drive_Motor_Control_I_LL
                                        * Referenced by:
                                        *   '<S223>/Saturation1'
                                        *   '<S244>/Saturation1'
                                        *   '<S265>/Saturation1'
                                        *   '<S286>/Saturation1'
                                        */
extern real_T Drive_Motor_Control_I_UL;/* Variable: Drive_Motor_Control_I_UL
                                        * Referenced by:
                                        *   '<S223>/Saturation1'
                                        *   '<S244>/Saturation1'
                                        *   '<S265>/Saturation1'
                                        *   '<S286>/Saturation1'
                                        */
extern real_T Drive_Motor_Control_P;   /* Variable: Drive_Motor_Control_P
                                        * Referenced by:
                                        *   '<S223>/Gain1'
                                        *   '<S244>/Gain1'
                                        *   '<S265>/Gain1'
                                        *   '<S286>/Gain1'
                                        */
extern real_T Drive_Motor_Control_Sign_Change_Deadband;
                           /* Variable: Drive_Motor_Control_Sign_Change_Deadband
                            * Referenced by:
                            *   '<S228>/Constant'
                            *   '<S249>/Constant'
                            *   '<S270>/Constant'
                            *   '<S291>/Constant'
                            */
extern real_T Elevator_Bottom_DC;      /* Variable: Elevator_Bottom_DC
                                        * Referenced by: '<S9>/Constant7'
                                        */
extern real_T Elevator_DC_Inc_RL;      /* Variable: Elevator_DC_Inc_RL
                                        * Referenced by: '<S44>/Constant3'
                                        */
extern real_T Elevator_Error_Bottom_Disable;
                                      /* Variable: Elevator_Error_Bottom_Disable
                                       * Referenced by: '<S41>/Constant'
                                       */
extern real_T Elevator_Error_Increase; /* Variable: Elevator_Error_Increase
                                        * Referenced by: '<S9>/Constant6'
                                        */
extern real_T Elevator_Gain_Int;       /* Variable: Elevator_Gain_Int
                                        * Referenced by: '<S45>/Gain2'
                                        */
extern real_T Elevator_Gain_Prop;      /* Variable: Elevator_Gain_Prop
                                        * Referenced by: '<S45>/Gain1'
                                        */
extern real_T Elevator_Height_Algae_High;/* Variable: Elevator_Height_Algae_High
                                          * Referenced by: '<S370>/Reefscape_Chart'
                                          */
extern real_T Elevator_Height_Algae_Low;/* Variable: Elevator_Height_Algae_Low
                                         * Referenced by: '<S370>/Reefscape_Chart'
                                         */
extern real_T Elevator_Height_Algae_Score;/* Variable: Elevator_Height_Algae_Score
                                           * Referenced by: '<S370>/Reefscape_Chart'
                                           */
extern real_T Elevator_Height_Bottom;  /* Variable: Elevator_Height_Bottom
                                        * Referenced by: '<S370>/Reefscape_Chart'
                                        */
extern real_T Elevator_Height_Coral_Arm_Low_Thresh;
                               /* Variable: Elevator_Height_Coral_Arm_Low_Thresh
                                * Referenced by: '<S24>/Constant'
                                */
extern real_T Elevator_Height_Coral_Score_Lower_Rate;
                             /* Variable: Elevator_Height_Coral_Score_Lower_Rate
                              * Referenced by: '<S370>/Reefscape_Chart'
                              */
extern real_T Elevator_Height_Error_Threshold;
                                    /* Variable: Elevator_Height_Error_Threshold
                                     * Referenced by:
                                     *   '<S42>/Constant'
                                     *   '<S370>/Reefscape_Chart'
                                     */
extern real_T Elevator_Height_L1;      /* Variable: Elevator_Height_L1
                                        * Referenced by: '<S370>/Reefscape_Chart'
                                        */
extern real_T Elevator_Height_L2;      /* Variable: Elevator_Height_L2
                                        * Referenced by: '<S370>/Reefscape_Chart'
                                        */
extern real_T Elevator_Height_L3;      /* Variable: Elevator_Height_L3
                                        * Referenced by: '<S370>/Reefscape_Chart'
                                        */
extern real_T Elevator_Height_L4;      /* Variable: Elevator_Height_L4
                                        * Referenced by: '<S370>/Reefscape_Chart'
                                        */
extern real_T Elevator_Height_Lower;   /* Variable: Elevator_Height_Lower
                                        * Referenced by: '<S370>/Reefscape_Chart'
                                        */
extern real_T Elevator_Height_Manual_Gain;/* Variable: Elevator_Height_Manual_Gain
                                           * Referenced by: '<S370>/Reefscape_Chart'
                                           */
extern real_T Elevator_Height_PickupLower_Reset;
                                  /* Variable: Elevator_Height_PickupLower_Reset
                                   * Referenced by: '<S10>/Constant2'
                                   */
extern real_T Elevator_Height_Prepare; /* Variable: Elevator_Height_Prepare
                                        * Referenced by: '<S370>/Reefscape_Chart'
                                        */
extern real_T Elevator_Height_Raise;   /* Variable: Elevator_Height_Raise
                                        * Referenced by: '<S370>/Reefscape_Chart'
                                        */
extern real_T Elevator_Height_Top;     /* Variable: Elevator_Height_Top
                                        * Referenced by: '<S370>/Reefscape_Chart'
                                        */
extern real_T Elevator_Height_Top_Reset;/* Variable: Elevator_Height_Top_Reset
                                         * Referenced by:
                                         *   '<S10>/Constant1'
                                         *   '<S10>/Constant3'
                                         */
extern real_T Elevator_Hold_at_Top_DC; /* Variable: Elevator_Hold_at_Top_DC
                                        * Referenced by: '<S9>/Constant1'
                                        */
extern real_T Elevator_Int_IC;         /* Variable: Elevator_Int_IC
                                        * Referenced by: '<S45>/Constant3'
                                        */
extern real_T Elevator_Int_LL;         /* Variable: Elevator_Int_LL
                                        * Referenced by: '<S45>/Saturation1'
                                        */
extern real_T Elevator_Int_UL;         /* Variable: Elevator_Int_UL
                                        * Referenced by: '<S45>/Saturation1'
                                        */
extern real_T Elevator_LowerPickup_Time;/* Variable: Elevator_LowerPickup_Time
                                         * Referenced by: '<S370>/Reefscape_Chart'
                                         */
extern real_T Elevator_MotorRev_to_Inch;/* Variable: Elevator_MotorRev_to_Inch
                                         * Referenced by: '<S10>/Gain1'
                                         */
extern real_T Elevator_Total_LL;       /* Variable: Elevator_Total_LL
                                        * Referenced by:
                                        *   '<S45>/Constant1'
                                        *   '<S45>/Saturation2'
                                        */
extern real_T Elevator_Total_UL;       /* Variable: Elevator_Total_UL
                                        * Referenced by:
                                        *   '<S45>/Constant'
                                        *   '<S45>/Saturation2'
                                        */
extern real_T Gyro_Calibration_Reset_Degree;
                                      /* Variable: Gyro_Calibration_Reset_Degree
                                       * Referenced by:
                                       *   '<S11>/Constant2'
                                       *   '<S11>/Unit Delay1'
                                       */
extern real_T Gyro_Calibration_Reset_Flag;/* Variable: Gyro_Calibration_Reset_Flag
                                           * Referenced by: '<S11>/Constant3'
                                           */
extern real_T KF_Enable;               /* Variable: KF_Enable
                                        * Referenced by:
                                        *   '<S14>/Constant1'
                                        *   '<S14>/Constant2'
                                        */
extern real_T Limelight_Tag_Angle_Offset;/* Variable: Limelight_Tag_Angle_Offset
                                          * Referenced by: '<S15>/Constant2'
                                          */
extern real_T Limelight_Tag_X_Offset;  /* Variable: Limelight_Tag_X_Offset
                                        * Referenced by: '<S15>/Constant'
                                        */
extern real_T Limelight_Tag_Y_Offset;  /* Variable: Limelight_Tag_Y_Offset
                                        * Referenced by: '<S15>/Constant1'
                                        */
extern real_T Odometry_IC_X;           /* Variable: Odometry_IC_X
                                        * Referenced by: '<S1>/Constant'
                                        */
extern real_T Odometry_IC_Y;           /* Variable: Odometry_IC_Y
                                        * Referenced by: '<S1>/Constant1'
                                        */
extern real_T Odometry_Reset_IC;       /* Variable: Odometry_Reset_IC
                                        * Referenced by: '<S17>/Constant'
                                        */
extern real_T Odometry_X_Y_TEAR;       /* Variable: Odometry_X_Y_TEAR
                                        * Referenced by: '<S149>/Constant'
                                        */
extern real_T Spline_Last_Pose_Distance_to_Velocity_Gain;
                         /* Variable: Spline_Last_Pose_Distance_to_Velocity_Gain
                          * Referenced by: '<S208>/Constant2'
                          */
extern real_T Spline_Max_Centripital_Acceleration;
                                /* Variable: Spline_Max_Centripital_Acceleration
                                 * Referenced by: '<S208>/Constant1'
                                 */
extern real_T Spline_Pose_Num_Before_End_Reduce_Speed;
                            /* Variable: Spline_Pose_Num_Before_End_Reduce_Speed
                             * Referenced by: '<S155>/Constant'
                             */
extern real_T Spline_Stop_Radius;      /* Variable: Spline_Stop_Radius
                                        * Referenced by: '<S168>/Constant'
                                        */
extern real_T Spline_Velocity_Multiplier_TEST;
                                    /* Variable: Spline_Velocity_Multiplier_TEST
                                     * Referenced by: '<S208>/Constant3'
                                     */
extern real_T Steering_Absolute_Cmd_Approach_Zero_Error_Thresh;
                   /* Variable: Steering_Absolute_Cmd_Approach_Zero_Error_Thresh
                    * Referenced by: '<S319>/Constant5'
                    */
extern real_T Steering_Absolute_Cmd_Approach_Zero_Final_Thresh;
                   /* Variable: Steering_Absolute_Cmd_Approach_Zero_Final_Thresh
                    * Referenced by: '<S319>/Constant6'
                    */
extern real_T Steering_Absolute_Cmd_NonZero_Error_Thresh;
                         /* Variable: Steering_Absolute_Cmd_NonZero_Error_Thresh
                          * Referenced by: '<S319>/Constant9'
                          */
extern real_T Steering_Absolute_Cmd_NonZero_Final_Scale_Factor;
                   /* Variable: Steering_Absolute_Cmd_NonZero_Final_Scale_Factor
                    * Referenced by: '<S319>/Constant10'
                    */
extern real_T Steering_Absolute_Cmd_Rate_Limit_Dec;
                               /* Variable: Steering_Absolute_Cmd_Rate_Limit_Dec
                                * Referenced by: '<S319>/Constant1'
                                */
extern real_T Steering_Absolute_Cmd_Rate_Limit_Inc;
                               /* Variable: Steering_Absolute_Cmd_Rate_Limit_Inc
                                * Referenced by: '<S319>/Constant3'
                                */
extern real_T Steering_Heading_Control_D;/* Variable: Steering_Heading_Control_D
                                          * Referenced by: '<S336>/Constant3'
                                          */
extern real_T Steering_Heading_Control_D_FilterCoeff;
                             /* Variable: Steering_Heading_Control_D_FilterCoeff
                              * Referenced by: '<S336>/Constant2'
                              */
extern real_T Steering_Heading_Control_D_LL;
                                      /* Variable: Steering_Heading_Control_D_LL
                                       * Referenced by: '<S336>/Saturation'
                                       */
extern real_T Steering_Heading_Control_D_UL;
                                      /* Variable: Steering_Heading_Control_D_UL
                                       * Referenced by: '<S336>/Saturation'
                                       */
extern real_T Steering_Heading_Control_Deadzone;
                                  /* Variable: Steering_Heading_Control_Deadzone
                                   * Referenced by: '<S335>/Constant'
                                   */
extern real_T Steering_Heading_Control_I;/* Variable: Steering_Heading_Control_I
                                          * Referenced by: '<S336>/Gain2'
                                          */
extern real_T Steering_Heading_Control_I_LL;
                                      /* Variable: Steering_Heading_Control_I_LL
                                       * Referenced by: '<S336>/Saturation1'
                                       */
extern real_T Steering_Heading_Control_I_UL;
                                      /* Variable: Steering_Heading_Control_I_UL
                                       * Referenced by: '<S336>/Saturation1'
                                       */
extern real_T Steering_Heading_Control_P;/* Variable: Steering_Heading_Control_P
                                          * Referenced by: '<S336>/Gain1'
                                          */
extern real_T Steering_Heading_Control_Total_LL;
                                  /* Variable: Steering_Heading_Control_Total_LL
                                   * Referenced by:
                                   *   '<S336>/Constant1'
                                   *   '<S336>/Saturation2'
                                   */
extern real_T Steering_Heading_Control_Total_UL;
                                  /* Variable: Steering_Heading_Control_Total_UL
                                   * Referenced by:
                                   *   '<S336>/Constant'
                                   *   '<S336>/Saturation2'
                                   */
extern real_T Steering_Motor_Control_D;/* Variable: Steering_Motor_Control_D
                                        * Referenced by:
                                        *   '<S226>/Constant3'
                                        *   '<S247>/Constant3'
                                        *   '<S268>/Constant3'
                                        *   '<S289>/Constant3'
                                        */
extern real_T Steering_Motor_Control_D_FilterCoeff;
                               /* Variable: Steering_Motor_Control_D_FilterCoeff
                                * Referenced by:
                                *   '<S226>/Constant2'
                                *   '<S247>/Constant2'
                                *   '<S268>/Constant2'
                                *   '<S289>/Constant2'
                                */
extern real_T Steering_Motor_Control_D_LL;/* Variable: Steering_Motor_Control_D_LL
                                           * Referenced by:
                                           *   '<S226>/Saturation'
                                           *   '<S247>/Saturation'
                                           *   '<S268>/Saturation'
                                           *   '<S289>/Saturation'
                                           */
extern real_T Steering_Motor_Control_D_UL;/* Variable: Steering_Motor_Control_D_UL
                                           * Referenced by:
                                           *   '<S226>/Saturation'
                                           *   '<S247>/Saturation'
                                           *   '<S268>/Saturation'
                                           *   '<S289>/Saturation'
                                           */
extern real_T Steering_Motor_Control_I;/* Variable: Steering_Motor_Control_I
                                        * Referenced by:
                                        *   '<S226>/Gain2'
                                        *   '<S247>/Gain2'
                                        *   '<S268>/Gain2'
                                        *   '<S289>/Gain2'
                                        */
extern real_T Steering_Motor_Control_I_LL;/* Variable: Steering_Motor_Control_I_LL
                                           * Referenced by:
                                           *   '<S226>/Saturation1'
                                           *   '<S247>/Saturation1'
                                           *   '<S268>/Saturation1'
                                           *   '<S289>/Saturation1'
                                           */
extern real_T Steering_Motor_Control_I_UL;/* Variable: Steering_Motor_Control_I_UL
                                           * Referenced by:
                                           *   '<S226>/Saturation1'
                                           *   '<S247>/Saturation1'
                                           *   '<S268>/Saturation1'
                                           *   '<S289>/Saturation1'
                                           */
extern real_T Steering_Motor_Control_P;/* Variable: Steering_Motor_Control_P
                                        * Referenced by:
                                        *   '<S226>/Gain1'
                                        *   '<S247>/Gain1'
                                        *   '<S268>/Gain1'
                                        *   '<S289>/Gain1'
                                        */
extern real_T Steering_Relative_Cmd_Approach_Zero_Error_Thresh;
                   /* Variable: Steering_Relative_Cmd_Approach_Zero_Error_Thresh
                    * Referenced by: '<S318>/Constant5'
                    */
extern real_T Steering_Relative_Cmd_Approach_Zero_Final_Thresh;
                   /* Variable: Steering_Relative_Cmd_Approach_Zero_Final_Thresh
                    * Referenced by: '<S318>/Constant6'
                    */
extern real_T Steering_Relative_Cmd_NonZero_Error_Thresh;
                         /* Variable: Steering_Relative_Cmd_NonZero_Error_Thresh
                          * Referenced by: '<S318>/Constant9'
                          */
extern real_T Steering_Relative_Cmd_NonZero_Final_Scale_Factor;
                   /* Variable: Steering_Relative_Cmd_NonZero_Final_Scale_Factor
                    * Referenced by: '<S318>/Constant10'
                    */
extern real_T Steering_Relative_Cmd_Rate_Limit_Dec;
                               /* Variable: Steering_Relative_Cmd_Rate_Limit_Dec
                                * Referenced by: '<S318>/Constant1'
                                */
extern real_T Steering_Relative_Cmd_Rate_Limit_Inc;
                               /* Variable: Steering_Relative_Cmd_Rate_Limit_Inc
                                * Referenced by: '<S318>/Constant3'
                                */
extern real_T Steering_Relative_Gain;  /* Variable: Steering_Relative_Gain
                                        * Referenced by: '<S390>/Constant'
                                        */
extern real_T Steering_Twist_Gain;     /* Variable: Steering_Twist_Gain
                                        * Referenced by: '<S390>/Constant1'
                                        */
extern real_T TEST_Swerve_Mode_Override_Flag;
                                     /* Variable: TEST_Swerve_Mode_Override_Flag
                                      * Referenced by: '<S371>/Constant5'
                                      */
extern real_T TEST_Swerve_Mode_Steering;/* Variable: TEST_Swerve_Mode_Steering
                                         * Referenced by: '<S371>/Constant8'
                                         */
extern real_T TEST_Swerve_Mode_Translation;/* Variable: TEST_Swerve_Mode_Translation
                                            * Referenced by: '<S371>/Constant7'
                                            */
extern real_T Translation_Speed_Approach_Zero_Error_Thresh;
                       /* Variable: Translation_Speed_Approach_Zero_Error_Thresh
                        * Referenced by: '<S306>/Constant5'
                        */
extern real_T Translation_Speed_Approach_Zero_Final_Thresh;
                       /* Variable: Translation_Speed_Approach_Zero_Final_Thresh
                        * Referenced by: '<S306>/Constant6'
                        */
extern real_T Translation_Speed_NonZero_Error_Thresh;
                             /* Variable: Translation_Speed_NonZero_Error_Thresh
                              * Referenced by: '<S306>/Constant9'
                              */
extern real_T Translation_Speed_NonZero_Final_Scale_Factor;
                       /* Variable: Translation_Speed_NonZero_Final_Scale_Factor
                        * Referenced by: '<S306>/Constant10'
                        */
extern real_T Translation_Speed_Rate_Limit_Dec;
                                   /* Variable: Translation_Speed_Rate_Limit_Dec
                                    * Referenced by: '<S306>/Constant1'
                                    */
extern real_T Translation_Speed_Rate_Limit_Inc;
                                   /* Variable: Translation_Speed_Rate_Limit_Inc
                                    * Referenced by: '<S306>/Constant3'
                                    */
extern real_T Translation_Twist_Gain;  /* Variable: Translation_Twist_Gain
                                        * Referenced by: '<S391>/Gain'
                                        */
extern real_T Twist_Deadzone_neg;      /* Variable: Twist_Deadzone_neg
                                        * Referenced by:
                                        *   '<S390>/Dead Zone'
                                        *   '<S391>/Dead Zone'
                                        */
extern real_T Twist_Deadzone_pos;      /* Variable: Twist_Deadzone_pos
                                        * Referenced by:
                                        *   '<S390>/Dead Zone'
                                        *   '<S391>/Dead Zone'
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
 * Block '<S36>/Data Type Duplicate' : Unused code path elimination
 * Block '<S36>/Data Type Propagation' : Unused code path elimination
 * Block '<S37>/FixPt Data Type Duplicate1' : Unused code path elimination
 * Block '<S39>/Data Type Duplicate' : Unused code path elimination
 * Block '<S39>/Data Type Propagation' : Unused code path elimination
 * Block '<S40>/Data Type Duplicate' : Unused code path elimination
 * Block '<S40>/Data Type Propagation' : Unused code path elimination
 * Block '<S30>/Data Type Duplicate' : Unused code path elimination
 * Block '<S30>/Data Type Propagation' : Unused code path elimination
 * Block '<S52>/Data Type Duplicate' : Unused code path elimination
 * Block '<S52>/Data Type Propagation' : Unused code path elimination
 * Block '<S53>/FixPt Data Type Duplicate1' : Unused code path elimination
 * Block '<S55>/Data Type Duplicate' : Unused code path elimination
 * Block '<S55>/Data Type Propagation' : Unused code path elimination
 * Block '<S46>/Data Type Duplicate' : Unused code path elimination
 * Block '<S46>/Data Type Propagation' : Unused code path elimination
 * Block '<S13>/Unit Delay' : Unused code path elimination
 * Block '<S129>/Data Type Duplicate' : Unused code path elimination
 * Block '<S130>/Data Type Duplicate' : Unused code path elimination
 * Block '<S131>/Conversion' : Unused code path elimination
 * Block '<S131>/Data Type Duplicate' : Unused code path elimination
 * Block '<S132>/Data Type Duplicate' : Unused code path elimination
 * Block '<S90>/Data Type Duplicate' : Unused code path elimination
 * Block '<S91>/Data Type Duplicate' : Unused code path elimination
 * Block '<S92>/Data Type Duplicate' : Unused code path elimination
 * Block '<S93>/Data Type Duplicate' : Unused code path elimination
 * Block '<S94>/Data Type Duplicate' : Unused code path elimination
 * Block '<S95>/Data Type Duplicate' : Unused code path elimination
 * Block '<S96>/Data Type Duplicate' : Unused code path elimination
 * Block '<S97>/Conversion' : Unused code path elimination
 * Block '<S97>/Data Type Duplicate' : Unused code path elimination
 * Block '<S98>/Data Type Duplicate' : Unused code path elimination
 * Block '<S99>/Data Type Duplicate' : Unused code path elimination
 * Block '<S100>/Data Type Duplicate' : Unused code path elimination
 * Block '<S102>/Data Type Duplicate' : Unused code path elimination
 * Block '<S103>/Data Type Duplicate' : Unused code path elimination
 * Block '<S86>/G' : Unused code path elimination
 * Block '<S86>/H' : Unused code path elimination
 * Block '<S86>/N' : Unused code path elimination
 * Block '<S86>/P0' : Unused code path elimination
 * Block '<S86>/Q' : Unused code path elimination
 * Block '<S86>/R' : Unused code path elimination
 * Block '<S118>/CheckSignalProperties' : Unused code path elimination
 * Block '<S127>/CheckSignalProperties' : Unused code path elimination
 * Block '<S128>/CheckSignalProperties' : Unused code path elimination
 * Block '<S19>/Gain' : Unused code path elimination
 * Block '<S19>/Gain1' : Unused code path elimination
 * Block '<S19>/Scope' : Unused code path elimination
 * Block '<S167>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S171>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S177>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S211>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S231>/Data Type Duplicate' : Unused code path elimination
 * Block '<S231>/Data Type Propagation' : Unused code path elimination
 * Block '<S223>/Scope' : Unused code path elimination
 * Block '<S225>/Scope' : Unused code path elimination
 * Block '<S242>/Data Type Duplicate' : Unused code path elimination
 * Block '<S242>/Data Type Propagation' : Unused code path elimination
 * Block '<S226>/Scope' : Unused code path elimination
 * Block '<S252>/Data Type Duplicate' : Unused code path elimination
 * Block '<S252>/Data Type Propagation' : Unused code path elimination
 * Block '<S244>/Scope' : Unused code path elimination
 * Block '<S246>/Scope' : Unused code path elimination
 * Block '<S263>/Data Type Duplicate' : Unused code path elimination
 * Block '<S263>/Data Type Propagation' : Unused code path elimination
 * Block '<S247>/Scope' : Unused code path elimination
 * Block '<S273>/Data Type Duplicate' : Unused code path elimination
 * Block '<S273>/Data Type Propagation' : Unused code path elimination
 * Block '<S265>/Scope' : Unused code path elimination
 * Block '<S267>/Scope' : Unused code path elimination
 * Block '<S284>/Data Type Duplicate' : Unused code path elimination
 * Block '<S284>/Data Type Propagation' : Unused code path elimination
 * Block '<S268>/Scope' : Unused code path elimination
 * Block '<S294>/Data Type Duplicate' : Unused code path elimination
 * Block '<S294>/Data Type Propagation' : Unused code path elimination
 * Block '<S286>/Scope' : Unused code path elimination
 * Block '<S288>/Scope' : Unused code path elimination
 * Block '<S305>/Data Type Duplicate' : Unused code path elimination
 * Block '<S305>/Data Type Propagation' : Unused code path elimination
 * Block '<S289>/Scope' : Unused code path elimination
 * Block '<S316>/Data Type Duplicate' : Unused code path elimination
 * Block '<S316>/Data Type Propagation' : Unused code path elimination
 * Block '<S317>/FixPt Data Type Duplicate1' : Unused code path elimination
 * Block '<S326>/Data Type Duplicate' : Unused code path elimination
 * Block '<S326>/Data Type Propagation' : Unused code path elimination
 * Block '<S327>/FixPt Data Type Duplicate1' : Unused code path elimination
 * Block '<S333>/Data Type Duplicate' : Unused code path elimination
 * Block '<S333>/Data Type Propagation' : Unused code path elimination
 * Block '<S334>/FixPt Data Type Duplicate1' : Unused code path elimination
 * Block '<S340>/Data Type Duplicate' : Unused code path elimination
 * Block '<S340>/Data Type Propagation' : Unused code path elimination
 * Block '<S336>/Scope' : Unused code path elimination
 * Block '<S368>/Logical Operator10' : Unused code path elimination
 * Block '<S402>/Data Type Duplicate' : Unused code path elimination
 * Block '<S402>/Data Type Propagation' : Unused code path elimination
 * Block '<S409>/Data Type Duplicate' : Unused code path elimination
 * Block '<S409>/Data Type Propagation' : Unused code path elimination
 * Block '<S410>/FixPt Data Type Duplicate1' : Unused code path elimination
 * Block '<S129>/Conversion' : Eliminate redundant data type conversion
 * Block '<S130>/Conversion' : Eliminate redundant data type conversion
 * Block '<S132>/Conversion' : Eliminate redundant data type conversion
 * Block '<S86>/DataTypeConversionEnable' : Eliminate redundant data type conversion
 * Block '<S102>/Conversion' : Eliminate redundant data type conversion
 * Block '<S106>/Reshape' : Reshape block reduction
 * Block '<S86>/ReshapeX0' : Reshape block reduction
 * Block '<S86>/Reshapeu' : Reshape block reduction
 * Block '<S86>/Reshapexhat' : Reshape block reduction
 * Block '<S14>/Signal Copy' : Eliminate redundant signal conversion block
 * Block '<S14>/Signal Copy1' : Eliminate redundant signal conversion block
 * Block '<S17>/Signal Copy' : Eliminate redundant signal conversion block
 * Block '<S17>/Signal Copy1' : Eliminate redundant signal conversion block
 * Block '<S17>/Signal Copy2' : Eliminate redundant signal conversion block
 * Block '<S17>/Signal Copy3' : Eliminate redundant signal conversion block
 * Block '<S207>/Signal Copy' : Eliminate redundant signal conversion block
 * Block '<S22>/Signal Copy1' : Eliminate redundant signal conversion block
 * Block '<S22>/Signal Copy2' : Eliminate redundant signal conversion block
 * Block '<S22>/Signal Copy3' : Eliminate redundant signal conversion block
 * Block '<S22>/Signal Copy4' : Eliminate redundant signal conversion block
 * Block '<S22>/Signal Copy5' : Eliminate redundant signal conversion block
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
 * '<S6>'   : 'Code_Gen_Model/RoboRio Controls/Compare To Zero3'
 * '<S7>'   : 'Code_Gen_Model/RoboRio Controls/Coral Arm Motor Control'
 * '<S8>'   : 'Code_Gen_Model/RoboRio Controls/Disabled'
 * '<S9>'   : 'Code_Gen_Model/RoboRio Controls/Elevator Motor Control'
 * '<S10>'  : 'Code_Gen_Model/RoboRio Controls/Elevator_Height_Pre_Processing'
 * '<S11>'  : 'Code_Gen_Model/RoboRio Controls/Gyro_Angles'
 * '<S12>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing'
 * '<S13>'  : 'Code_Gen_Model/RoboRio Controls/Internal Feedback'
 * '<S14>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter'
 * '<S15>'  : 'Code_Gen_Model/RoboRio Controls/Limelight_Tag_Corrections'
 * '<S16>'  : 'Code_Gen_Model/RoboRio Controls/Merge'
 * '<S17>'  : 'Code_Gen_Model/RoboRio Controls/Odometry'
 * '<S18>'  : 'Code_Gen_Model/RoboRio Controls/Previous GameState'
 * '<S19>'  : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following'
 * '<S20>'  : 'Code_Gen_Model/RoboRio Controls/Steer_Module_Offset_Adjustments'
 * '<S21>'  : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive'
 * '<S22>'  : 'Code_Gen_Model/RoboRio Controls/Teleop'
 * '<S23>'  : 'Code_Gen_Model/RoboRio Controls/Test'
 * '<S24>'  : 'Code_Gen_Model/RoboRio Controls/Coral Arm Motor Control/Compare To Constant'
 * '<S25>'  : 'Code_Gen_Model/RoboRio Controls/Coral Arm Motor Control/Compare To Constant1'
 * '<S26>'  : 'Code_Gen_Model/RoboRio Controls/Coral Arm Motor Control/Compare To Constant2'
 * '<S27>'  : 'Code_Gen_Model/RoboRio Controls/Coral Arm Motor Control/Compare To Constant3'
 * '<S28>'  : 'Code_Gen_Model/RoboRio Controls/Coral Arm Motor Control/Complex Rate Limit'
 * '<S29>'  : 'Code_Gen_Model/RoboRio Controls/Coral Arm Motor Control/PI and Integral Enable'
 * '<S30>'  : 'Code_Gen_Model/RoboRio Controls/Coral Arm Motor Control/Saturation Dynamic'
 * '<S31>'  : 'Code_Gen_Model/RoboRio Controls/Coral Arm Motor Control/Complex Rate Limit/Compare To Zero'
 * '<S32>'  : 'Code_Gen_Model/RoboRio Controls/Coral Arm Motor Control/Complex Rate Limit/Compare To Zero1'
 * '<S33>'  : 'Code_Gen_Model/RoboRio Controls/Coral Arm Motor Control/Complex Rate Limit/Compare To Zero2'
 * '<S34>'  : 'Code_Gen_Model/RoboRio Controls/Coral Arm Motor Control/Complex Rate Limit/Compare To Zero3'
 * '<S35>'  : 'Code_Gen_Model/RoboRio Controls/Coral Arm Motor Control/Complex Rate Limit/Discrete Rate Limiter'
 * '<S36>'  : 'Code_Gen_Model/RoboRio Controls/Coral Arm Motor Control/Complex Rate Limit/Discrete Rate Limiter/Saturation Dynamic'
 * '<S37>'  : 'Code_Gen_Model/RoboRio Controls/Coral Arm Motor Control/Complex Rate Limit/Discrete Rate Limiter/Unit Delay External IC'
 * '<S38>'  : 'Code_Gen_Model/RoboRio Controls/Coral Arm Motor Control/PI and Integral Enable/Detect Increase'
 * '<S39>'  : 'Code_Gen_Model/RoboRio Controls/Coral Arm Motor Control/PI and Integral Enable/Saturation Dynamic'
 * '<S40>'  : 'Code_Gen_Model/RoboRio Controls/Coral Arm Motor Control/PI and Integral Enable/Saturation Dynamic1'
 * '<S41>'  : 'Code_Gen_Model/RoboRio Controls/Elevator Motor Control/Compare To Constant'
 * '<S42>'  : 'Code_Gen_Model/RoboRio Controls/Elevator Motor Control/Compare To Constant2'
 * '<S43>'  : 'Code_Gen_Model/RoboRio Controls/Elevator Motor Control/Compare To Zero'
 * '<S44>'  : 'Code_Gen_Model/RoboRio Controls/Elevator Motor Control/Complex Rate Limit'
 * '<S45>'  : 'Code_Gen_Model/RoboRio Controls/Elevator Motor Control/PI and Integral Enable'
 * '<S46>'  : 'Code_Gen_Model/RoboRio Controls/Elevator Motor Control/Saturation Dynamic'
 * '<S47>'  : 'Code_Gen_Model/RoboRio Controls/Elevator Motor Control/Complex Rate Limit/Compare To Zero'
 * '<S48>'  : 'Code_Gen_Model/RoboRio Controls/Elevator Motor Control/Complex Rate Limit/Compare To Zero1'
 * '<S49>'  : 'Code_Gen_Model/RoboRio Controls/Elevator Motor Control/Complex Rate Limit/Compare To Zero2'
 * '<S50>'  : 'Code_Gen_Model/RoboRio Controls/Elevator Motor Control/Complex Rate Limit/Compare To Zero3'
 * '<S51>'  : 'Code_Gen_Model/RoboRio Controls/Elevator Motor Control/Complex Rate Limit/Discrete Rate Limiter'
 * '<S52>'  : 'Code_Gen_Model/RoboRio Controls/Elevator Motor Control/Complex Rate Limit/Discrete Rate Limiter/Saturation Dynamic'
 * '<S53>'  : 'Code_Gen_Model/RoboRio Controls/Elevator Motor Control/Complex Rate Limit/Discrete Rate Limiter/Unit Delay External IC'
 * '<S54>'  : 'Code_Gen_Model/RoboRio Controls/Elevator Motor Control/PI and Integral Enable/Detect Increase'
 * '<S55>'  : 'Code_Gen_Model/RoboRio Controls/Elevator Motor Control/PI and Integral Enable/Saturation Dynamic'
 * '<S56>'  : 'Code_Gen_Model/RoboRio Controls/Elevator_Height_Pre_Processing/Detect Decrease'
 * '<S57>'  : 'Code_Gen_Model/RoboRio Controls/Elevator_Height_Pre_Processing/Detect Decrease1'
 * '<S58>'  : 'Code_Gen_Model/RoboRio Controls/Elevator_Height_Pre_Processing/Detect Increase'
 * '<S59>'  : 'Code_Gen_Model/RoboRio Controls/Gyro_Angles/Degrees to Radians'
 * '<S60>'  : 'Code_Gen_Model/RoboRio Controls/Gyro_Angles/Detect Increase'
 * '<S61>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Constant'
 * '<S62>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Constant1'
 * '<S63>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Constant2'
 * '<S64>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Constant3'
 * '<S65>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Constant4'
 * '<S66>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Constant5'
 * '<S67>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Constant6'
 * '<S68>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Constant7'
 * '<S69>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Constant8'
 * '<S70>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero'
 * '<S71>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero1'
 * '<S72>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero11'
 * '<S73>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero12'
 * '<S74>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero13'
 * '<S75>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero14'
 * '<S76>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero15'
 * '<S77>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero16'
 * '<S78>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero17'
 * '<S79>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero2'
 * '<S80>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero3'
 * '<S81>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero4'
 * '<S82>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero5'
 * '<S83>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Detect Increase'
 * '<S84>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Detect Increase1'
 * '<S85>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Detect Increase2'
 * '<S86>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter'
 * '<S87>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CalculatePL'
 * '<S88>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CalculateYhat'
 * '<S89>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CovarianceOutputConfigurator'
 * '<S90>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionA'
 * '<S91>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionB'
 * '<S92>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionC'
 * '<S93>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionD'
 * '<S94>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionG'
 * '<S95>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionH'
 * '<S96>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionN'
 * '<S97>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionP'
 * '<S98>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionP0'
 * '<S99>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionQ'
 * '<S100>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionR'
 * '<S101>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionReset'
 * '<S102>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionX'
 * '<S103>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionX0'
 * '<S104>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionu'
 * '<S105>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/MemoryP'
 * '<S106>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/Observer'
 * '<S107>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/ReducedQRN'
 * '<S108>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/Reset'
 * '<S109>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/Reshapeyhat'
 * '<S110>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/ScalarExpansionP0'
 * '<S111>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/ScalarExpansionQ'
 * '<S112>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/ScalarExpansionR'
 * '<S113>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/UseCurrentEstimator'
 * '<S114>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkA'
 * '<S115>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkB'
 * '<S116>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkC'
 * '<S117>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkD'
 * '<S118>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkEnable'
 * '<S119>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkG'
 * '<S120>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkH'
 * '<S121>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkN'
 * '<S122>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkP0'
 * '<S123>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkQ'
 * '<S124>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkR'
 * '<S125>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkReset'
 * '<S126>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkX0'
 * '<S127>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checku'
 * '<S128>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checky'
 * '<S129>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CalculatePL/DataTypeConversionL'
 * '<S130>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CalculatePL/DataTypeConversionM'
 * '<S131>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CalculatePL/DataTypeConversionP'
 * '<S132>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CalculatePL/DataTypeConversionZ'
 * '<S133>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CalculatePL/Ground'
 * '<S134>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CalculateYhat/Ground'
 * '<S135>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CovarianceOutputConfigurator/decideOutput'
 * '<S136>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CovarianceOutputConfigurator/decideOutput/SqrtUsedFcn'
 * '<S137>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/Observer/MeasurementUpdate'
 * '<S138>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/ReducedQRN/Ground'
 * '<S139>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/UseCurrentEstimator/Enabled Subsystem'
 * '<S140>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Difference'
 * '<S141>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Difference1'
 * '<S142>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Difference3'
 * '<S143>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Difference4'
 * '<S144>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Difference5'
 * '<S145>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Polar to Cartesian'
 * '<S146>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Polar to Cartesian1'
 * '<S147>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Polar to Cartesian2'
 * '<S148>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Polar to Cartesian3'
 * '<S149>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Tear for validation testing'
 * '<S150>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Tear for validation testing/Compare To Zero'
 * '<S151>' : 'Code_Gen_Model/RoboRio Controls/Previous GameState/Chart'
 * '<S152>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Pass Through'
 * '<S153>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled'
 * '<S154>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses'
 * '<S155>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Find_Targets'
 * '<S156>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Steering_and_Drive_Commands'
 * '<S157>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/If Action Subsystem'
 * '<S158>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification'
 * '<S159>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning'
 * '<S160>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Escape_Auto_Driving'
 * '<S161>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid'
 * '<S162>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Catch-all if not the last point and not in the circle'
 * '<S163>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Circle_Check_Valid'
 * '<S164>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Increment_If_Rectangle_Check'
 * '<S165>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Circle_Check_Valid/Increment_Search'
 * '<S166>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Circle_Check_Valid/Is_Last_Point'
 * '<S167>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Circle_Check_Valid/Increment_Search/Increment Real World'
 * '<S168>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Circle_Check_Valid/Is_Last_Point/Compare To Constant'
 * '<S169>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Circle_Check_Valid/Is_Last_Point/Robot_Is_At_Destination'
 * '<S170>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Circle_Check_Valid/Is_Last_Point/Straight_Line_Path_To_End'
 * '<S171>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Increment_If_Rectangle_Check/Increment Real World'
 * '<S172>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Increment_If_Rectangle_Check/Subsystem Reference'
 * '<S173>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Increment_If_Rectangle_Check/Subsystem Reference/Compare To Constant'
 * '<S174>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Increment_If_Rectangle_Check/Subsystem Reference/Compare To Constant1'
 * '<S175>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Make_Knots'
 * '<S176>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning'
 * '<S177>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Make_Knots/Decrement Real World'
 * '<S178>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Make_Knots/Find_Control_Pose'
 * '<S179>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Make_Knots/Find_Control_Pose1'
 * '<S180>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop'
 * '<S181>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Compare To Constant'
 * '<S182>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve'
 * '<S183>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Find_Point_Coefficients'
 * '<S184>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve'
 * '<S185>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Acc'
 * '<S186>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Pos'
 * '<S187>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Vel'
 * '<S188>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Curvature'
 * '<S189>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_U_And_Powers'
 * '<S190>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Acc/Subsystem Reference'
 * '<S191>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Acc/ddA'
 * '<S192>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Acc/ddB'
 * '<S193>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Acc/ddC'
 * '<S194>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Pos/A'
 * '<S195>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Pos/B'
 * '<S196>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Pos/C'
 * '<S197>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Pos/Subsystem Reference'
 * '<S198>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Vel/Subsystem Reference'
 * '<S199>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Vel/dA'
 * '<S200>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Vel/dB'
 * '<S201>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Vel/dC'
 * '<S202>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Curvature/MATLAB Function'
 * '<S203>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Find_Targets/Distance Along Curve'
 * '<S204>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Find_Targets/Find closest index to curve'
 * '<S205>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Find_Targets/Find first index that meets distance target'
 * '<S206>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Find_Targets/Find velocity and heading'
 * '<S207>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Find_Targets/Heading'
 * '<S208>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Find_Targets/Velocity'
 * '<S209>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Find_Targets/Find velocity and heading/Dynamic Lookup Tables'
 * '<S210>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Find_Targets/Find velocity and heading/Latch'
 * '<S211>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Find_Targets/Find velocity and heading/Dynamic Lookup Tables/Decrement'
 * '<S212>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Steering_and_Drive_Commands/Translation Angle'
 * '<S213>' : 'Code_Gen_Model/RoboRio Controls/Steer_Module_Offset_Adjustments/Angle Modulus'
 * '<S214>' : 'Code_Gen_Model/RoboRio Controls/Steer_Module_Offset_Adjustments/Angle Modulus1'
 * '<S215>' : 'Code_Gen_Model/RoboRio Controls/Steer_Module_Offset_Adjustments/Angle Modulus2'
 * '<S216>' : 'Code_Gen_Model/RoboRio Controls/Steer_Module_Offset_Adjustments/Angle Modulus3'
 * '<S217>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module'
 * '<S218>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1'
 * '<S219>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2'
 * '<S220>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3'
 * '<S221>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle'
 * '<S222>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Direction Change Drive Reduction Factor'
 * '<S223>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Feed Forward plus PID and Integral Enable'
 * '<S224>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Optimize'
 * '<S225>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Steering Module Error Drive Reduction Factor'
 * '<S226>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Steering with Angle Error Modulus PID'
 * '<S227>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Tangential_Velocity_To_RPM'
 * '<S228>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Direction Change Drive Reduction Factor/Compare To Constant'
 * '<S229>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Feed Forward plus PID and Integral Enable/Difference'
 * '<S230>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Feed Forward plus PID and Integral Enable/Low_Pass_Filter'
 * '<S231>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Feed Forward plus PID and Integral Enable/Saturation Dynamic'
 * '<S232>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Optimize/Compare To Constant'
 * '<S233>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Optimize/Minus1'
 * '<S234>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Optimize/RotateBy'
 * '<S235>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Optimize/Minus1/RotateBy'
 * '<S236>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Optimize/Minus1/RotateBy/Compare To Constant'
 * '<S237>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Optimize/RotateBy/Compare To Constant'
 * '<S238>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Steering Module Error Drive Reduction Factor/Angle Modulus to plus or minus pi over two'
 * '<S239>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Steering with Angle Error Modulus PID/Angle Modulus'
 * '<S240>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Steering with Angle Error Modulus PID/Difference'
 * '<S241>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Steering with Angle Error Modulus PID/Low_Pass_Filter'
 * '<S242>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Steering with Angle Error Modulus PID/Saturation Dynamic'
 * '<S243>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Direction Change Drive Reduction Factor'
 * '<S244>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Feed Forward plus PID and Integral Enable'
 * '<S245>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Optimize'
 * '<S246>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Steering Module Error Drive Reduction Factor'
 * '<S247>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Steering with Angle Error Modulus PID'
 * '<S248>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Tangential_Velocity_To_RPM'
 * '<S249>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Direction Change Drive Reduction Factor/Compare To Constant'
 * '<S250>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Feed Forward plus PID and Integral Enable/Difference'
 * '<S251>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Feed Forward plus PID and Integral Enable/Low_Pass_Filter'
 * '<S252>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Feed Forward plus PID and Integral Enable/Saturation Dynamic'
 * '<S253>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Optimize/Compare To Constant'
 * '<S254>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Optimize/Minus1'
 * '<S255>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Optimize/RotateBy'
 * '<S256>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Optimize/Minus1/RotateBy'
 * '<S257>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Optimize/Minus1/RotateBy/Compare To Constant'
 * '<S258>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Optimize/RotateBy/Compare To Constant'
 * '<S259>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Steering Module Error Drive Reduction Factor/Angle Modulus to plus or minus pi over two'
 * '<S260>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Steering with Angle Error Modulus PID/Angle Modulus'
 * '<S261>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Steering with Angle Error Modulus PID/Difference'
 * '<S262>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Steering with Angle Error Modulus PID/Low_Pass_Filter'
 * '<S263>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Steering with Angle Error Modulus PID/Saturation Dynamic'
 * '<S264>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Direction Change Drive Reduction Factor'
 * '<S265>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Feed Forward plus PID and Integral Enable'
 * '<S266>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Optimize'
 * '<S267>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Steering Module Error Drive Reduction Factor'
 * '<S268>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Steering with Angle Error Modulus PID'
 * '<S269>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Tangential_Velocity_To_RPM'
 * '<S270>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Direction Change Drive Reduction Factor/Compare To Constant'
 * '<S271>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Feed Forward plus PID and Integral Enable/Difference'
 * '<S272>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Feed Forward plus PID and Integral Enable/Low_Pass_Filter'
 * '<S273>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Feed Forward plus PID and Integral Enable/Saturation Dynamic'
 * '<S274>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Optimize/Compare To Constant'
 * '<S275>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Optimize/Minus1'
 * '<S276>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Optimize/RotateBy'
 * '<S277>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Optimize/Minus1/RotateBy'
 * '<S278>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Optimize/Minus1/RotateBy/Compare To Constant'
 * '<S279>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Optimize/RotateBy/Compare To Constant'
 * '<S280>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Steering Module Error Drive Reduction Factor/Angle Modulus to plus or minus pi over two'
 * '<S281>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Steering with Angle Error Modulus PID/Angle Modulus'
 * '<S282>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Steering with Angle Error Modulus PID/Difference'
 * '<S283>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Steering with Angle Error Modulus PID/Low_Pass_Filter'
 * '<S284>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Steering with Angle Error Modulus PID/Saturation Dynamic'
 * '<S285>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Direction Change Drive Reduction Factor'
 * '<S286>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Feed Forward plus PID and Integral Enable'
 * '<S287>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Optimize'
 * '<S288>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Steering Module Error Drive Reduction Factor'
 * '<S289>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Steering with Angle Error Modulus PID'
 * '<S290>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Tangential_Velocity_To_RPM'
 * '<S291>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Direction Change Drive Reduction Factor/Compare To Constant'
 * '<S292>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Feed Forward plus PID and Integral Enable/Difference'
 * '<S293>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Feed Forward plus PID and Integral Enable/Low_Pass_Filter'
 * '<S294>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Feed Forward plus PID and Integral Enable/Saturation Dynamic'
 * '<S295>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Optimize/Compare To Constant'
 * '<S296>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Optimize/Minus1'
 * '<S297>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Optimize/RotateBy'
 * '<S298>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Optimize/Minus1/RotateBy'
 * '<S299>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Optimize/Minus1/RotateBy/Compare To Constant'
 * '<S300>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Optimize/RotateBy/Compare To Constant'
 * '<S301>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Steering Module Error Drive Reduction Factor/Angle Modulus to plus or minus pi over two'
 * '<S302>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Steering with Angle Error Modulus PID/Angle Modulus'
 * '<S303>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Steering with Angle Error Modulus PID/Difference'
 * '<S304>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Steering with Angle Error Modulus PID/Low_Pass_Filter'
 * '<S305>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Steering with Angle Error Modulus PID/Saturation Dynamic'
 * '<S306>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Complex Rate Limit'
 * '<S307>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Initialize Function'
 * '<S308>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command'
 * '<S309>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Translation Steering Command'
 * '<S310>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator'
 * '<S311>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Complex Rate Limit/Compare To Zero'
 * '<S312>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Complex Rate Limit/Compare To Zero1'
 * '<S313>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Complex Rate Limit/Compare To Zero2'
 * '<S314>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Complex Rate Limit/Compare To Zero3'
 * '<S315>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Complex Rate Limit/Discrete Rate Limiter'
 * '<S316>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Complex Rate Limit/Discrete Rate Limiter/Saturation Dynamic'
 * '<S317>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Complex Rate Limit/Discrete Rate Limiter/Unit Delay External IC'
 * '<S318>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit'
 * '<S319>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit1'
 * '<S320>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Steering Heading PID'
 * '<S321>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit/Compare To Zero'
 * '<S322>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit/Compare To Zero1'
 * '<S323>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit/Compare To Zero2'
 * '<S324>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit/Compare To Zero3'
 * '<S325>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit/Discrete Rate Limiter'
 * '<S326>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit/Discrete Rate Limiter/Saturation Dynamic'
 * '<S327>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit/Discrete Rate Limiter/Unit Delay External IC'
 * '<S328>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit1/Compare To Zero'
 * '<S329>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit1/Compare To Zero1'
 * '<S330>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit1/Compare To Zero2'
 * '<S331>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit1/Compare To Zero3'
 * '<S332>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit1/Discrete Rate Limiter'
 * '<S333>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit1/Discrete Rate Limiter/Saturation Dynamic'
 * '<S334>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit1/Discrete Rate Limiter/Unit Delay External IC'
 * '<S335>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Steering Heading PID/Compare To Constant'
 * '<S336>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Steering Heading PID/PID with Error Wrapping'
 * '<S337>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Steering Heading PID/PID with Error Wrapping/Angle Modulus'
 * '<S338>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Steering Heading PID/PID with Error Wrapping/Difference'
 * '<S339>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Steering Heading PID/PID with Error Wrapping/Low_Pass_Filter'
 * '<S340>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Steering Heading PID/PID with Error Wrapping/Saturation Dynamic'
 * '<S341>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Translation Steering Command/Angle Modulus'
 * '<S342>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Reduce Speeds for Maximum Speed Limit'
 * '<S343>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add'
 * '<S344>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add1'
 * '<S345>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add2'
 * '<S346>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add3'
 * '<S347>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add/Angle_Saver'
 * '<S348>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add/Cartesian to Polar'
 * '<S349>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add/Polar to Cartesian'
 * '<S350>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add/Polar to Cartesian1'
 * '<S351>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add/Angle_Saver/Compare To Zero1'
 * '<S352>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add1/Angle_Saver'
 * '<S353>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add1/Cartesian to Polar'
 * '<S354>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add1/Polar to Cartesian'
 * '<S355>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add1/Polar to Cartesian1'
 * '<S356>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add1/Angle_Saver/Compare To Zero1'
 * '<S357>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add2/Angle_Saver'
 * '<S358>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add2/Cartesian to Polar'
 * '<S359>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add2/Polar to Cartesian'
 * '<S360>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add2/Polar to Cartesian1'
 * '<S361>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add2/Angle_Saver/Compare To Zero1'
 * '<S362>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add3/Angle_Saver'
 * '<S363>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add3/Cartesian to Polar'
 * '<S364>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add3/Polar to Cartesian'
 * '<S365>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add3/Polar to Cartesian1'
 * '<S366>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add3/Angle_Saver/Compare To Zero1'
 * '<S367>' : 'Code_Gen_Model/RoboRio Controls/Teleop/April Tag Field XY Errors and Target Angle'
 * '<S368>' : 'Code_Gen_Model/RoboRio Controls/Teleop/April Tag Relative Errors'
 * '<S369>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive'
 * '<S370>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Reefscape Teleop'
 * '<S371>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Subsystem'
 * '<S372>' : 'Code_Gen_Model/RoboRio Controls/Teleop/April Tag Relative Errors/Compare To Constant'
 * '<S373>' : 'Code_Gen_Model/RoboRio Controls/Teleop/April Tag Relative Errors/Compare To Constant1'
 * '<S374>' : 'Code_Gen_Model/RoboRio Controls/Teleop/April Tag Relative Errors/Compare To Constant10'
 * '<S375>' : 'Code_Gen_Model/RoboRio Controls/Teleop/April Tag Relative Errors/Compare To Constant2'
 * '<S376>' : 'Code_Gen_Model/RoboRio Controls/Teleop/April Tag Relative Errors/Compare To Constant3'
 * '<S377>' : 'Code_Gen_Model/RoboRio Controls/Teleop/April Tag Relative Errors/Compare To Constant4'
 * '<S378>' : 'Code_Gen_Model/RoboRio Controls/Teleop/April Tag Relative Errors/Compare To Constant5'
 * '<S379>' : 'Code_Gen_Model/RoboRio Controls/Teleop/April Tag Relative Errors/Compare To Constant6'
 * '<S380>' : 'Code_Gen_Model/RoboRio Controls/Teleop/April Tag Relative Errors/Compare To Constant7'
 * '<S381>' : 'Code_Gen_Model/RoboRio Controls/Teleop/April Tag Relative Errors/Compare To Constant8'
 * '<S382>' : 'Code_Gen_Model/RoboRio Controls/Teleop/April Tag Relative Errors/Compare To Constant9'
 * '<S383>' : 'Code_Gen_Model/RoboRio Controls/Teleop/April Tag Relative Errors/Compare To Zero'
 * '<S384>' : 'Code_Gen_Model/RoboRio Controls/Teleop/April Tag Relative Errors/Compare To Zero1'
 * '<S385>' : 'Code_Gen_Model/RoboRio Controls/Teleop/April Tag Relative Errors/Compare To Zero2'
 * '<S386>' : 'Code_Gen_Model/RoboRio Controls/Teleop/April Tag Relative Errors/Compare To Zero3'
 * '<S387>' : 'Code_Gen_Model/RoboRio Controls/Teleop/April Tag Relative Errors/Compare To Zero4'
 * '<S388>' : 'Code_Gen_Model/RoboRio Controls/Teleop/April Tag Relative Errors/Compare To Zero5'
 * '<S389>' : 'Code_Gen_Model/RoboRio Controls/Teleop/April Tag Relative Errors/Compare To Zero9'
 * '<S390>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering'
 * '<S391>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation'
 * '<S392>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering/Compare To Zero2'
 * '<S393>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering/Detect Increase'
 * '<S394>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering/Detect Increase1'
 * '<S395>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering/Detect Increase2'
 * '<S396>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering/Detect Increase3'
 * '<S397>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering/Detect Increase4'
 * '<S398>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering/Detect Increase5'
 * '<S399>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering/PI and Integral Enable'
 * '<S400>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering/Previous game state was not Teleop'
 * '<S401>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering/PI and Integral Enable/Detect Increase'
 * '<S402>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering/PI and Integral Enable/Saturation Dynamic'
 * '<S403>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Boost and Rate Limit'
 * '<S404>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Compare To Zero'
 * '<S405>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Compare To Zero1'
 * '<S406>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Latch Outputs when Both Inputs Zero'
 * '<S407>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Boost and Rate Limit/Simple Rate Limit'
 * '<S408>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Boost and Rate Limit/Simple Rate Limit/Discrete Rate Limiter'
 * '<S409>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Boost and Rate Limit/Simple Rate Limit/Discrete Rate Limiter/Saturation Dynamic'
 * '<S410>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Boost and Rate Limit/Simple Rate Limit/Discrete Rate Limiter/Unit Delay External IC'
 * '<S411>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Latch Outputs when Both Inputs Zero/Compare To Zero'
 * '<S412>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Latch Outputs when Both Inputs Zero/Compare To Zero1'
 * '<S413>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Reefscape Teleop/Detect Increase'
 * '<S414>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Reefscape Teleop/Detect Increase1'
 * '<S415>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Reefscape Teleop/Detect Increase10'
 * '<S416>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Reefscape Teleop/Detect Increase11'
 * '<S417>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Reefscape Teleop/Detect Increase12'
 * '<S418>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Reefscape Teleop/Detect Increase2'
 * '<S419>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Reefscape Teleop/Detect Increase3'
 * '<S420>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Reefscape Teleop/Detect Increase4'
 * '<S421>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Reefscape Teleop/Detect Increase5'
 * '<S422>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Reefscape Teleop/Detect Increase6'
 * '<S423>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Reefscape Teleop/Detect Increase7'
 * '<S424>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Reefscape Teleop/Detect Increase8'
 * '<S425>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Reefscape Teleop/Detect Increase9'
 * '<S426>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Reefscape Teleop/Reefscape_Chart'
 */
#endif                                 /* RTW_HEADER_Code_Gen_Model_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
