/*
 * Sponsored License - for use in support of a program or activity
 * sponsored by MathWorks.  Not for government, commercial or other
 * non-sponsored organizational use.
 *
 * File: Code_Gen_Model.h
 *
 * Code generated for Simulink model 'Code_Gen_Model'.
 *
 * Model version                  : 2.297
 * Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
 * C/C++ source code generated on : Mon Mar  3 18:20:25 2025
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
  real_T FL_Steer_Module_Angle;        /* '<S211>/Add1' */
  real_T FR_Steer_Module_Angle;        /* '<S212>/Add1' */
  real_T BL_Steer_Module_Angle;        /* '<S213>/Add1' */
  real_T BR_Steer_Module_Angle;        /* '<S214>/Add1' */
  real_T Gyro_Angle_Calibrated_deg;    /* '<S11>/Subtract1' */
  real_T Gyro_Angle_rad;               /* '<S57>/Gain1' */
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
  real_T Translation_Speed_RL;         /* '<S313>/Sum' */
  real_T Translation_Angle_SPF;        /* '<S19>/Merge3' */
  real_T Gyro_Angle_SPF;               /* '<S19>/Merge8' */
  real_T Translation_Steering_Cmd;     /* '<S307>/Switch' */
  real_T Steering_Abs_Cmd_SPF;         /* '<S19>/Merge' */
  real_T Steering_Localized_PID;       /* '<S334>/Saturation2' */
  real_T Steering_Rel_Cmd_SPF;         /* '<S19>/Merge1' */
  real_T Steering_Localized_Cmd;       /* '<S306>/Switch' */
  real_T BR_Desired_Wheel_Speed_in;    /* '<S360>/Switch1' */
  real_T FL_Desired_Wheel_Speed_in;    /* '<S345>/Switch1' */
  real_T FR_Desired_Wheel_Speed_in;    /* '<S350>/Switch1' */
  real_T BL_Desired_Wheel_Speed_in;    /* '<S355>/Switch1' */
  real_T BR_Desired_Wheel_Speed;       /* '<S340>/Product3' */
  real_T BR_Desired_Module_Angle;      /* '<S360>/Switch' */
  real_T FL_Desired_Wheel_Speed;       /* '<S340>/Product' */
  real_T FL_Desired_Module_Angle;      /* '<S345>/Switch' */
  real_T FR_Desired_Wheel_Speed;       /* '<S340>/Product1' */
  real_T FR_Desired_Module_Angle;      /* '<S350>/Switch' */
  real_T BL_Desired_Wheel_Speed;       /* '<S340>/Product2' */
  real_T BL_Desired_Module_Angle;      /* '<S355>/Switch' */
  real_T Elevator_Height_Desired;      /* '<S16>/Merge11' */
  real_T Coral_Arm_Angle_Desired;      /* '<S16>/Merge13' */
  real_T Elevator_Error;               /* '<S9>/Add' */
  real_T Elevator_Proportional;        /* '<S43>/Gain1' */
  real_T Elevator_Integral;            /* '<S43>/Switch' */
  real_T Coral_ArmAngle_Error;         /* '<S7>/Subtract' */
  real_T Elevator_Proportional_l;      /* '<S27>/Gain1' */
  real_T Elevator_Integral_o;          /* '<S27>/Switch' */
  real_T Odometry_Y_global_est_ft;     /* '<S147>/meters to feet1' */
  real_T Odometry_Y_global_TEAR_ft;    /* '<S147>/Subtract1' */
  real_T Odometry_X_global_est_ft;     /* '<S147>/meters to feet' */
  real_T Odometry_X_global_TEAR_ft;    /* '<S147>/Subtract' */
  real_T Steer_Joystick_X;             /* '<S12>/Signal Copy4' */
  real_T AT_Field_Error_X;             /* '<S365>/Switch2' */
  real_T AT_Field_Error_Y;             /* '<S365>/Switch4' */
  real_T AT_Relative_Error_Y;          /* '<S366>/Subtract1' */
  real_T DeadZone;                     /* '<S368>/Dead Zone' */
  real_T DeadZone1;                    /* '<S368>/Dead Zone1' */
  real_T AT_Relative_Error_Angle;      /* '<S366>/Unary Minus' */
  real_T Steering_Abs_Gyro_Latch;      /* '<S377>/Switch8' */
  real_T Steering_Abs_Gyro;            /* '<S377>/Switch2' */
  real_T AT_Field_Target_Angle;        /* '<S365>/Switch15' */
  real_T Steering_Abs_Angle;           /* '<S377>/Switch3' */
  real_T Elevator_Height_Desired_m;    /* '<S368>/Reefscape_Chart' */
  real_T Coral_Arm_Angle_Desired_o;    /* '<S368>/Reefscape_Chart' */
  real_T Coral_Wheel_DC;               /* '<S368>/Reefscape_Chart' */
  real_T Spline_Follow_Index;          /* '<S156>/Merge4' */
  real_T Spline_Target_Y;              /* '<S153>/Selector6' */
  real_T Spline_Target_X;              /* '<S153>/Selector2' */
  real_T Product2[2];                  /* '<S137>/Product2' */
  real_T Product3[2];                  /* '<S135>/Product3' */
  uint8_T Set_Level_Out;               /* '<S368>/Reefscape_Chart' */
  uint8_T Active_GameState;            /* '<S18>/Chart' */
  boolean_T Button_Enable_Wheels;      /* '<S81>/FixPt Relational Operator' */
  boolean_T Button_Reset_Wheel_Offsets;/* '<S82>/FixPt Relational Operator' */
  boolean_T Button_Disable_Wheels;     /* '<S83>/FixPt Relational Operator' */
  boolean_T Drive_Joystick_Z_Mode;     /* '<S66>/Compare' */
  boolean_T Is_Boosting;               /* '<S76>/Compare' */
  boolean_T Face_Toward_Driver;        /* '<S64>/Compare' */
  boolean_T Face_Right_Driver;         /* '<S65>/Compare' */
  boolean_T Face_Left_Driver;          /* '<S67>/Compare' */
  boolean_T Face_Away_Driver;          /* '<S60>/Compare' */
  boolean_T Align_Left;                /* '<S74>/Compare' */
  boolean_T Align_Right;               /* '<S73>/Compare' */
  boolean_T Align_Center;              /* '<S75>/Compare' */
  boolean_T Coral_Station_Left;        /* '<S72>/Compare' */
  boolean_T Coral_Station_Right;       /* '<S71>/Compare' */
  boolean_T Processor;                 /* '<S70>/Compare' */
  boolean_T Cage_Left_Start;           /* '<S68>/Compare' */
  boolean_T Cage_Middle_Start;         /* '<S69>/Compare' */
  boolean_T Cage_Right_Start;          /* '<S77>/Compare' */
  boolean_T Gamepad_POV_Up;            /* '<S59>/Compare' */
  boolean_T Gamepad_POV_Down;          /* '<S61>/Compare' */
  boolean_T Gamepad_POV_Left;          /* '<S63>/Compare' */
  boolean_T Gamepad_POV_Right;         /* '<S62>/Compare' */
  boolean_T Spline_Enable;             /* '<S16>/Merge7' */
  boolean_T Is_Absolute_Translation_SPF;/* '<S19>/Merge4' */
  boolean_T Is_Absolute_Steering_SPF;  /* '<S19>/Merge5' */
  boolean_T Reefscape_Motors_Enable;   /* '<S16>/Merge12' */
  boolean_T Robot_Reached_Destination; /* '<S19>/Merge7' */
  boolean_T Test_Mode;                 /* '<S16>/Merge10' */
  boolean_T Elevator_LowerPickup_Reset_tp;/* '<S16>/Merge21' */
  boolean_T Cage_Left_Finish;          /* '<S78>/Compare' */
  boolean_T Cage_Middle_Finish;        /* '<S79>/Compare' */
  boolean_T Cage_Right_Finish;         /* '<S80>/Compare' */
  boolean_T FixPtRelationalOperator;   /* '<S398>/FixPt Relational Operator' */
  boolean_T FixPtRelationalOperator_n; /* '<S399>/FixPt Relational Operator' */
  boolean_T FixPtRelationalOperator_k; /* '<S403>/FixPt Relational Operator' */
  boolean_T FixPtRelationalOperator_d; /* '<S404>/FixPt Relational Operator' */
  boolean_T FixPtRelationalOperator_m; /* '<S408>/FixPt Relational Operator' */
  boolean_T FixPtRelationalOperator_ji;/* '<S401>/FixPt Relational Operator' */
  boolean_T FixPtRelationalOperator_ml;/* '<S402>/FixPt Relational Operator' */
  boolean_T AT_Relative_Enable;        /* '<S366>/Logical Operator1' */
  boolean_T Steering_Abs_Angle_Active; /* '<S377>/AND6' */
  boolean_T Elevator_LowerPickup_Reset;/* '<S368>/Reefscape_Chart' */
  boolean_T Coral_Pickup_Lower_Wait_State;/* '<S368>/Reefscape_Chart' */
  boolean_T Spline_Out_Of_Bounds;      /* '<S156>/Merge1' */
} B_Code_Gen_Model_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T UD_DSTATE;                    /* '<S139>/UD' */
  real_T UD_DSTATE_m;                  /* '<S140>/UD' */
  real_T UD_DSTATE_i;                  /* '<S141>/UD' */
  real_T UD_DSTATE_c;                  /* '<S142>/UD' */
  real_T TappedDelay_X[2];             /* '<S14>/Tapped Delay' */
  real_T TappedDelay1_X[2];            /* '<S14>/Tapped Delay1' */
  real_T MemoryX_DSTATE[2];            /* '<S84>/MemoryX' */
  real_T DelayInput1_DSTATE;           /* '<S58>/Delay Input1' */
  real_T UnitDelay1_DSTATE;            /* '<S11>/Unit Delay1' */
  real_T UD_DSTATE_d;                  /* '<S138>/UD' */
  real_T Accumulator2_DSTATE;          /* '<S17>/Accumulator2' */
  real_T Accumulator_DSTATE;           /* '<S17>/Accumulator' */
  real_T DelayInput1_DSTATE_n;         /* '<S81>/Delay Input1' */
  real_T DelayInput1_DSTATE_e;         /* '<S82>/Delay Input1' */
  real_T DelayInput1_DSTATE_nj;        /* '<S83>/Delay Input1' */
  real_T UnitDelay1_DSTATE_i;          /* '<S337>/Unit Delay1' */
  real_T UD_DSTATE_a;                  /* '<S336>/UD' */
  real_T UnitDelay_DSTATE_m;           /* '<S334>/Unit Delay' */
  real_T UnitDelay_DSTATE_d;           /* '<S317>/Unit Delay' */
  real_T FixPtUnitDelay1_DSTATE_e;     /* '<S332>/FixPt Unit Delay1' */
  real_T UnitDelay_DSTATE_g;           /* '<S316>/Unit Delay' */
  real_T FixPtUnitDelay1_DSTATE_p;     /* '<S325>/FixPt Unit Delay1' */
  real_T UnitDelay1_DSTATE_kw;         /* '<S291>/Unit Delay1' */
  real_T UD_DSTATE_cs;                 /* '<S290>/UD' */
  real_T UnitDelay_DSTATE_a;           /* '<S284>/Unit Delay' */
  real_T UnitDelay1_DSTATE_iw;         /* '<S302>/Unit Delay1' */
  real_T UD_DSTATE_l;                  /* '<S301>/UD' */
  real_T UnitDelay_DSTATE_l;           /* '<S287>/Unit Delay' */
  real_T UnitDelay1_DSTATE_a;          /* '<S228>/Unit Delay1' */
  real_T UD_DSTATE_o;                  /* '<S227>/UD' */
  real_T UnitDelay_DSTATE_f;           /* '<S221>/Unit Delay' */
  real_T UnitDelay1_DSTATE_b;          /* '<S239>/Unit Delay1' */
  real_T UD_DSTATE_b;                  /* '<S238>/UD' */
  real_T UnitDelay_DSTATE_e;           /* '<S224>/Unit Delay' */
  real_T UnitDelay1_DSTATE_b1;         /* '<S249>/Unit Delay1' */
  real_T UD_DSTATE_e;                  /* '<S248>/UD' */
  real_T UnitDelay_DSTATE_em;          /* '<S242>/Unit Delay' */
  real_T UnitDelay1_DSTATE_n;          /* '<S260>/Unit Delay1' */
  real_T UD_DSTATE_i1;                 /* '<S259>/UD' */
  real_T UnitDelay_DSTATE_dt;          /* '<S245>/Unit Delay' */
  real_T UnitDelay1_DSTATE_f;          /* '<S270>/Unit Delay1' */
  real_T UD_DSTATE_lh;                 /* '<S269>/UD' */
  real_T UnitDelay_DSTATE_gp;          /* '<S263>/Unit Delay' */
  real_T UnitDelay1_DSTATE_nw;         /* '<S281>/Unit Delay1' */
  real_T UD_DSTATE_k;                  /* '<S280>/UD' */
  real_T UnitDelay_DSTATE_k;           /* '<S266>/Unit Delay' */
  real_T UnitDelay_DSTATE_mh;          /* '<S42>/Unit Delay' */
  real_T FixPtUnitDelay1_DSTATE_l;     /* '<S51>/FixPt Unit Delay1' */
  real_T UnitDelay_DSTATE_oz;          /* '<S26>/Unit Delay' */
  real_T FixPtUnitDelay1_DSTATE_pc;    /* '<S35>/FixPt Unit Delay1' */
  real_T UnitDelay1_DSTATE_d;          /* '<S147>/Unit Delay1' */
  real_T UnitDelay_DSTATE_c;           /* '<S147>/Unit Delay' */
  real_T UnitDelay1_DSTATE_l;          /* '<S391>/Unit Delay1' */
  real_T UnitDelay_DSTATE_p;           /* '<S391>/Unit Delay' */
  real_T UnitDelay1_DSTATE_nr;         /* '<S366>/Unit Delay1' */
  real_T DelayInput1_DSTATE_c;         /* '<S398>/Delay Input1' */
  real_T DelayInput1_DSTATE_nr;        /* '<S399>/Delay Input1' */
  real_T DelayInput1_DSTATE_ez;        /* '<S403>/Delay Input1' */
  real_T DelayInput1_DSTATE_nh;        /* '<S404>/Delay Input1' */
  real_T DelayInput1_DSTATE_i;         /* '<S405>/Delay Input1' */
  real_T DelayInput1_DSTATE_cp;        /* '<S400>/Delay Input1' */
  real_T DelayInput1_DSTATE_p;         /* '<S406>/Delay Input1' */
  real_T DelayInput1_DSTATE_o;         /* '<S409>/Delay Input1' */
  real_T DelayInput1_DSTATE_j;         /* '<S410>/Delay Input1' */
  real_T UnitDelay_DSTATE_kq;          /* '<S366>/Unit Delay' */
  real_T UnitDelay3_DSTATE;            /* '<S377>/Unit Delay3' */
  real_T UnitDelay1_DSTATE_e;          /* '<S365>/Unit Delay1' */
  real_T UnitDelay1_DSTATE_j;          /* '<S377>/Unit Delay1' */
  real_T FixPtUnitDelay1_DSTATE_f;     /* '<S395>/FixPt Unit Delay1' */
  real_T UnitDelay_DSTATE_gh;          /* '<S152>/Unit Delay' */
  real_T timer;                        /* '<S368>/Reefscape_Chart' */
  int32_T Selector4_DIMS1[2];          /* '<S173>/Selector4' */
  uint8_T FixPtUnitDelay2_DSTATE;      /* '<S315>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_p;    /* '<S332>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_c;    /* '<S325>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_o;    /* '<S51>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_j;    /* '<S35>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_a;    /* '<S395>/FixPt Unit Delay2' */
  boolean_T DelayInput1_DSTATE_b;      /* '<S54>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_o1;     /* '<S55>/Delay Input1' */
  boolean_T UnitDelay_DSTATE_mph;      /* '<S1>/Unit Delay' */
  boolean_T DelayInput1_DSTATE_po;     /* '<S56>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_be;     /* '<S52>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_op;     /* '<S36>/Delay Input1' */
  boolean_T UnitDelay_DSTATE_ir;       /* '<S23>/Unit Delay' */
  boolean_T DelayInput1_DSTATE_oy;     /* '<S407>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_f;      /* '<S408>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_o5;     /* '<S401>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_a;      /* '<S402>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_jp;     /* '<S385>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_ft;     /* '<S384>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_m;      /* '<S380>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_k;      /* '<S381>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_g;      /* '<S382>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_g2;     /* '<S383>/Delay Input1' */
  boolean_T UnitDelay2_DSTATE;         /* '<S377>/Unit Delay2' */
  boolean_T UnitDelay4_DSTATE;         /* '<S377>/Unit Delay4' */
  int8_T Accumulator2_PrevResetState;  /* '<S17>/Accumulator2' */
  int8_T Accumulator_PrevResetState;   /* '<S17>/Accumulator' */
  int8_T SwitchCase_ActiveSubsystem;   /* '<S1>/Switch Case' */
  int8_T If_ActiveSubsystem;           /* '<S19>/If' */
  int8_T If_ActiveSubsystem_h;         /* '<S156>/If' */
  int8_T If_ActiveSubsystem_o;         /* '<S159>/If' */
  int8_T If_ActiveSubsystem_d;         /* '<S161>/If' */
  uint8_T is_active_c4_Code_Gen_Model; /* '<S368>/Reefscape_Chart' */
  uint8_T is_Elevator_CoralArm_CoralWheel;/* '<S368>/Reefscape_Chart' */
  uint8_T is_Coral_Eject;              /* '<S368>/Reefscape_Chart' */
  uint8_T is_Actions;                  /* '<S368>/Reefscape_Chart' */
  uint8_T is_Set_Level;                /* '<S368>/Reefscape_Chart' */
  uint8_T is_Coral_Score_Position;     /* '<S368>/Reefscape_Chart' */
  uint8_T is_Algae_Wheels;             /* '<S368>/Reefscape_Chart' */
  uint8_T is_active_c9_Code_Gen_Model; /* '<S18>/Chart' */
  uint8_T is_c9_Code_Gen_Model;        /* '<S18>/Chart' */
  boolean_T icLoad;                    /* '<S84>/MemoryX' */
  boolean_T Set_L1;                    /* '<S368>/Reefscape_Chart' */
  boolean_T Set_L2;                    /* '<S368>/Reefscape_Chart' */
  boolean_T Set_L3;                    /* '<S368>/Reefscape_Chart' */
  boolean_T Set_L4;                    /* '<S368>/Reefscape_Chart' */
  boolean_T EnabledSubsystem_MODE;     /* '<S111>/Enabled Subsystem' */
  boolean_T MeasurementUpdate_MODE;    /* '<S104>/MeasurementUpdate' */
} DW_Code_Gen_Model_T;

/* Invariant block signals (default storage) */
typedef struct {
  const real_T UnaryMinus;             /* '<S26>/Unary Minus' */
  const real_T UnaryMinus_m;           /* '<S42>/Unary Minus' */
  const real_T Cos5;                   /* '<S232>/Cos5' */
  const real_T Sin5;                   /* '<S232>/Sin5' */
  const real_T Cos5_g;                 /* '<S253>/Cos5' */
  const real_T Sin5_m;                 /* '<S253>/Sin5' */
  const real_T Cos5_i;                 /* '<S274>/Cos5' */
  const real_T Sin5_e;                 /* '<S274>/Sin5' */
  const real_T Cos5_b;                 /* '<S295>/Cos5' */
  const real_T Sin5_c;                 /* '<S295>/Sin5' */
  const real_T Atan2;                  /* '<S305>/Atan2' */
  const real_T FL_Tangent_Angle;       /* '<S305>/Add' */
  const real_T Atan1;                  /* '<S305>/Atan1' */
  const real_T FR_Tangent_Angle;       /* '<S305>/Add1' */
  const real_T Atan3;                  /* '<S305>/Atan3' */
  const real_T BL_Tangent_Angle;       /* '<S305>/Add2' */
  const real_T Atan4;                  /* '<S305>/Atan4' */
  const real_T BR_Tangent_Angle;       /* '<S305>/Add3' */
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
   * Referenced by: '<S378>/Modulation_Drv'
   */
  real_T Modulation_Drv_tableData[21];

  /* Expression: Steering_Mod_Drv_in
   * Referenced by: '<S378>/Modulation_Drv'
   */
  real_T Modulation_Drv_bp01Data[21];

  /* Expression: Steering_Mod_Str_Rel_out
   * Referenced by: '<S377>/Modulation_Str_Y_Rel'
   */
  real_T Modulation_Str_Y_Rel_tableData[21];

  /* Expression: Steering_Mod_Str_Rel_in
   * Referenced by: '<S377>/Modulation_Str_Y_Rel'
   */
  real_T Modulation_Str_Y_Rel_bp01Data[21];

  /* Expression: Rotation_Local_Inv
   * Referenced by: '<S17>/Constant4'
   */
  real_T Constant4_Value[16];

  /* Pooled Parameter (Expression: Drive_Motor_Control_Scale_Factor)
   * Referenced by:
   *   '<S223>/1-D Lookup Table'
   *   '<S244>/1-D Lookup Table'
   *   '<S265>/1-D Lookup Table'
   *   '<S286>/1-D Lookup Table'
   */
  real_T pooled32[2];

  /* Pooled Parameter (Expression: Drive_Motor_Control_Module_Angle_Error)
   * Referenced by:
   *   '<S223>/1-D Lookup Table'
   *   '<S244>/1-D Lookup Table'
   *   '<S265>/1-D Lookup Table'
   *   '<S286>/1-D Lookup Table'
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
extern real_T AT_Reef_Target_Center_Y; /* Variable: AT_Reef_Target_Center_Y
                                        * Referenced by: '<S366>/Constant3'
                                        */
extern real_T AT_Reef_Target_L1_X;     /* Variable: AT_Reef_Target_L1_X
                                        * Referenced by: '<S366>/Constant4'
                                        */
extern real_T AT_Reef_Target_L2_L3_X;  /* Variable: AT_Reef_Target_L2_L3_X
                                        * Referenced by: '<S366>/Constant'
                                        */
extern real_T AT_Reef_Target_L4_X;     /* Variable: AT_Reef_Target_L4_X
                                        * Referenced by: '<S366>/Constant5'
                                        */
extern real_T AT_Reef_Target_Left_Y;   /* Variable: AT_Reef_Target_Left_Y
                                        * Referenced by: '<S366>/Constant1'
                                        */
extern real_T AT_Reef_Target_Right_Y;  /* Variable: AT_Reef_Target_Right_Y
                                        * Referenced by: '<S366>/Constant2'
                                        */
extern real_T AT_Steering_Error_Angle_Gain;/* Variable: AT_Steering_Error_Angle_Gain
                                            * Referenced by: '<S377>/Constant4'
                                            */
extern real_T AT_Steering_Speed_Max;   /* Variable: AT_Steering_Speed_Max
                                        * Referenced by: '<S377>/Constant10'
                                        */
extern real_T AT_Target_Tag_11_Field_Angle;/* Variable: AT_Target_Tag_11_Field_Angle
                                            * Referenced by: '<S365>/Constant12'
                                            */
extern real_T AT_Target_Tag_11_X;      /* Variable: AT_Target_Tag_11_X
                                        * Referenced by: '<S365>/Constant4'
                                        */
extern real_T AT_Target_Tag_11_Y;      /* Variable: AT_Target_Tag_11_Y
                                        * Referenced by: '<S365>/Constant26'
                                        */
extern real_T AT_Target_Tag_12_Field_Angle;/* Variable: AT_Target_Tag_12_Field_Angle
                                            * Referenced by: '<S365>/Constant11'
                                            */
extern real_T AT_Target_Tag_12_X;      /* Variable: AT_Target_Tag_12_X
                                        * Referenced by: '<S365>/Constant17'
                                        */
extern real_T AT_Target_Tag_12_Y;      /* Variable: AT_Target_Tag_12_Y
                                        * Referenced by: '<S365>/Constant3'
                                        */
extern real_T AT_Target_Tag_13_Field_Angle;/* Variable: AT_Target_Tag_13_Field_Angle
                                            * Referenced by: '<S365>/Constant10'
                                            */
extern real_T AT_Target_Tag_13_X;      /* Variable: AT_Target_Tag_13_X
                                        * Referenced by: '<S365>/Constant18'
                                        */
extern real_T AT_Target_Tag_13_Y;      /* Variable: AT_Target_Tag_13_Y
                                        * Referenced by: '<S365>/Constant21'
                                        */
extern real_T AT_Target_Tag_14_Field_Angle;/* Variable: AT_Target_Tag_14_Field_Angle
                                            * Referenced by: '<S365>/Constant8'
                                            */
extern real_T AT_Target_Tag_14_X;      /* Variable: AT_Target_Tag_14_X
                                        * Referenced by: '<S365>/Constant19'
                                        */
extern real_T AT_Target_Tag_14_Y;      /* Variable: AT_Target_Tag_14_Y
                                        * Referenced by: '<S365>/Constant23'
                                        */
extern real_T AT_Target_Tag_5_Field_Angle;/* Variable: AT_Target_Tag_5_Field_Angle
                                           * Referenced by: '<S365>/Constant14'
                                           */
extern real_T AT_Target_Tag_5_X;       /* Variable: AT_Target_Tag_5_X
                                        * Referenced by: '<S365>/Constant9'
                                        */
extern real_T AT_Target_Tag_5_Y;       /* Variable: AT_Target_Tag_5_Y
                                        * Referenced by: '<S365>/Constant28'
                                        */
extern real_T AT_Target_Tag_6_Field_Angle;/* Variable: AT_Target_Tag_6_Field_Angle
                                           * Referenced by: '<S365>/Constant13'
                                           */
extern real_T AT_Target_Tag_6_X;       /* Variable: AT_Target_Tag_6_X
                                        * Referenced by: '<S365>/Constant5'
                                        */
extern real_T AT_Target_Tag_6_Y;       /* Variable: AT_Target_Tag_6_Y
                                        * Referenced by: '<S365>/Constant27'
                                        */
extern real_T AT_Translation_Control_Gain;/* Variable: AT_Translation_Control_Gain
                                           * Referenced by:
                                           *   '<S378>/Gain1'
                                           *   '<S378>/Gain2'
                                           */
extern real_T AT_Translation_Speed_Max;/* Variable: AT_Translation_Speed_Max
                                        * Referenced by:
                                        *   '<S378>/Constant5'
                                        *   '<S378>/Constant8'
                                        */
extern real_T Algae_Eject_Time;        /* Variable: Algae_Eject_Time
                                        * Referenced by: '<S368>/Reefscape_Chart'
                                        */
extern real_T Algae_Hold_DC;           /* Variable: Algae_Hold_DC
                                        * Referenced by: '<S368>/Reefscape_Chart'
                                        */
extern real_T Algae_Pull_In_DC;        /* Variable: Algae_Pull_In_DC
                                        * Referenced by: '<S368>/Reefscape_Chart'
                                        */
extern real_T Algae_Push_Out_DC;       /* Variable: Algae_Push_Out_DC
                                        * Referenced by: '<S368>/Reefscape_Chart'
                                        */
extern real_T Boost_Trigger_Decreasing_Limit;
                                     /* Variable: Boost_Trigger_Decreasing_Limit
                                      * Referenced by: '<S392>/Constant1'
                                      */
extern real_T Boost_Trigger_High_Speed;/* Variable: Boost_Trigger_High_Speed
                                        * Referenced by:
                                        *   '<S388>/Constant'
                                        *   '<S388>/Saturation'
                                        */
extern real_T Boost_Trigger_Increasing_Limit;
                                     /* Variable: Boost_Trigger_Increasing_Limit
                                      * Referenced by: '<S392>/Constant3'
                                      */
extern real_T Boost_Trigger_Low_Speed; /* Variable: Boost_Trigger_Low_Speed
                                        * Referenced by: '<S388>/Constant1'
                                        */
extern real_T Coral_Arm_Angle_Error_Threshold;
                                    /* Variable: Coral_Arm_Angle_Error_Threshold
                                     * Referenced by: '<S368>/Reefscape_Chart'
                                     */
extern real_T Coral_Arm_Angle_L1;      /* Variable: Coral_Arm_Angle_L1
                                        * Referenced by: '<S368>/Reefscape_Chart'
                                        */
extern real_T Coral_Arm_Angle_L2;      /* Variable: Coral_Arm_Angle_L2
                                        * Referenced by: '<S368>/Reefscape_Chart'
                                        */
extern real_T Coral_Arm_Angle_L3;      /* Variable: Coral_Arm_Angle_L3
                                        * Referenced by: '<S368>/Reefscape_Chart'
                                        */
extern real_T Coral_Arm_Angle_L4;      /* Variable: Coral_Arm_Angle_L4
                                        * Referenced by: '<S368>/Reefscape_Chart'
                                        */
extern real_T Coral_Arm_Angle_Neg_Threshold;
                                      /* Variable: Coral_Arm_Angle_Neg_Threshold
                                       * Referenced by: '<S25>/Constant'
                                       */
extern real_T Coral_Arm_Angle_Start;   /* Variable: Coral_Arm_Angle_Start
                                        * Referenced by: '<S368>/Reefscape_Chart'
                                        */
extern real_T Coral_Arm_Angle_Start_Thresh;/* Variable: Coral_Arm_Angle_Start_Thresh
                                            * Referenced by: '<S368>/Reefscape_Chart'
                                            */
extern real_T Coral_Arm_Angle_Up;      /* Variable: Coral_Arm_Angle_Up
                                        * Referenced by: '<S368>/Reefscape_Chart'
                                        */
extern real_T Coral_Arm_DC_Inc_RL;     /* Variable: Coral_Arm_DC_Inc_RL
                                        * Referenced by: '<S26>/Constant3'
                                        */
extern real_T Coral_Arm_Gain_Int;      /* Variable: Coral_Arm_Gain_Int
                                        * Referenced by: '<S27>/Gain2'
                                        */
extern real_T Coral_Arm_Gain_Prop;     /* Variable: Coral_Arm_Gain_Prop
                                        * Referenced by: '<S27>/Gain1'
                                        */
extern real_T Coral_Arm_Int_IC;        /* Variable: Coral_Arm_Int_IC
                                        * Referenced by: '<S27>/Constant3'
                                        */
extern real_T Coral_Arm_Int_LL;        /* Variable: Coral_Arm_Int_LL
                                        * Referenced by: '<S27>/Saturation1'
                                        */
extern real_T Coral_Arm_Int_UL;        /* Variable: Coral_Arm_Int_UL
                                        * Referenced by: '<S27>/Saturation1'
                                        */
extern real_T Coral_Arm_Manual_Gain;   /* Variable: Coral_Arm_Manual_Gain
                                        * Referenced by: '<S368>/Reefscape_Chart'
                                        */
extern real_T Coral_Arm_Neg90_DC;      /* Variable: Coral_Arm_Neg90_DC
                                        * Referenced by: '<S7>/Constant2'
                                        */
extern real_T Coral_Detect_Distance;   /* Variable: Coral_Detect_Distance
                                        * Referenced by: '<S368>/Reefscape_Chart'
                                        */
extern real_T Coral_Eject_Time;        /* Variable: Coral_Eject_Time
                                        * Referenced by: '<S368>/Reefscape_Chart'
                                        */
extern real_T Coral_Motor_DC_Eject;    /* Variable: Coral_Motor_DC_Eject
                                        * Referenced by: '<S368>/Reefscape_Chart'
                                        */
extern real_T Coral_Motor_DC_Hold;     /* Variable: Coral_Motor_DC_Hold
                                        * Referenced by: '<S368>/Reefscape_Chart'
                                        */
extern real_T Coral_Motor_DC_Pickup;   /* Variable: Coral_Motor_DC_Pickup
                                        * Referenced by: '<S368>/Reefscape_Chart'
                                        */
extern real_T Drive_Motor_Control_D;   /* Variable: Drive_Motor_Control_D
                                        * Referenced by:
                                        *   '<S221>/Constant3'
                                        *   '<S242>/Constant3'
                                        *   '<S263>/Constant3'
                                        *   '<S284>/Constant3'
                                        */
extern real_T Drive_Motor_Control_D_FilterCoeff;
                                  /* Variable: Drive_Motor_Control_D_FilterCoeff
                                   * Referenced by:
                                   *   '<S221>/Constant2'
                                   *   '<S242>/Constant2'
                                   *   '<S263>/Constant2'
                                   *   '<S284>/Constant2'
                                   */
extern real_T Drive_Motor_Control_D_LL;/* Variable: Drive_Motor_Control_D_LL
                                        * Referenced by:
                                        *   '<S221>/Saturation'
                                        *   '<S242>/Saturation'
                                        *   '<S263>/Saturation'
                                        *   '<S284>/Saturation'
                                        */
extern real_T Drive_Motor_Control_D_UL;/* Variable: Drive_Motor_Control_D_UL
                                        * Referenced by:
                                        *   '<S221>/Saturation'
                                        *   '<S242>/Saturation'
                                        *   '<S263>/Saturation'
                                        *   '<S284>/Saturation'
                                        */
extern real_T Drive_Motor_Control_FF;  /* Variable: Drive_Motor_Control_FF
                                        * Referenced by:
                                        *   '<S221>/Gain'
                                        *   '<S242>/Gain'
                                        *   '<S263>/Gain'
                                        *   '<S284>/Gain'
                                        */
extern real_T Drive_Motor_Control_I;   /* Variable: Drive_Motor_Control_I
                                        * Referenced by:
                                        *   '<S221>/Gain2'
                                        *   '<S242>/Gain2'
                                        *   '<S263>/Gain2'
                                        *   '<S284>/Gain2'
                                        */
extern real_T Drive_Motor_Control_I_LL;/* Variable: Drive_Motor_Control_I_LL
                                        * Referenced by:
                                        *   '<S221>/Saturation1'
                                        *   '<S242>/Saturation1'
                                        *   '<S263>/Saturation1'
                                        *   '<S284>/Saturation1'
                                        */
extern real_T Drive_Motor_Control_I_UL;/* Variable: Drive_Motor_Control_I_UL
                                        * Referenced by:
                                        *   '<S221>/Saturation1'
                                        *   '<S242>/Saturation1'
                                        *   '<S263>/Saturation1'
                                        *   '<S284>/Saturation1'
                                        */
extern real_T Drive_Motor_Control_P;   /* Variable: Drive_Motor_Control_P
                                        * Referenced by:
                                        *   '<S221>/Gain1'
                                        *   '<S242>/Gain1'
                                        *   '<S263>/Gain1'
                                        *   '<S284>/Gain1'
                                        */
extern real_T Drive_Motor_Control_Sign_Change_Deadband;
                           /* Variable: Drive_Motor_Control_Sign_Change_Deadband
                            * Referenced by:
                            *   '<S226>/Constant'
                            *   '<S247>/Constant'
                            *   '<S268>/Constant'
                            *   '<S289>/Constant'
                            */
extern real_T Elevator_Bottom_DC;      /* Variable: Elevator_Bottom_DC
                                        * Referenced by: '<S9>/Constant7'
                                        */
extern real_T Elevator_DC_Inc_RL;      /* Variable: Elevator_DC_Inc_RL
                                        * Referenced by: '<S42>/Constant3'
                                        */
extern real_T Elevator_Error_Bottom_Disable;
                                      /* Variable: Elevator_Error_Bottom_Disable
                                       * Referenced by: '<S39>/Constant'
                                       */
extern real_T Elevator_Error_Increase; /* Variable: Elevator_Error_Increase
                                        * Referenced by: '<S9>/Constant6'
                                        */
extern real_T Elevator_Gain_Int;       /* Variable: Elevator_Gain_Int
                                        * Referenced by: '<S43>/Gain2'
                                        */
extern real_T Elevator_Gain_Prop;      /* Variable: Elevator_Gain_Prop
                                        * Referenced by: '<S43>/Gain1'
                                        */
extern real_T Elevator_Height_Algae_High;/* Variable: Elevator_Height_Algae_High
                                          * Referenced by: '<S368>/Reefscape_Chart'
                                          */
extern real_T Elevator_Height_Algae_Low;/* Variable: Elevator_Height_Algae_Low
                                         * Referenced by: '<S368>/Reefscape_Chart'
                                         */
extern real_T Elevator_Height_Algae_Score;/* Variable: Elevator_Height_Algae_Score
                                           * Referenced by: '<S368>/Reefscape_Chart'
                                           */
extern real_T Elevator_Height_Bottom;  /* Variable: Elevator_Height_Bottom
                                        * Referenced by: '<S368>/Reefscape_Chart'
                                        */
extern real_T Elevator_Height_Coral_Arm_Low_Thresh;
                               /* Variable: Elevator_Height_Coral_Arm_Low_Thresh
                                * Referenced by: '<S24>/Constant'
                                */
extern real_T Elevator_Height_Error_Threshold;
                                    /* Variable: Elevator_Height_Error_Threshold
                                     * Referenced by:
                                     *   '<S40>/Constant'
                                     *   '<S368>/Reefscape_Chart'
                                     */
extern real_T Elevator_Height_L1;      /* Variable: Elevator_Height_L1
                                        * Referenced by: '<S368>/Reefscape_Chart'
                                        */
extern real_T Elevator_Height_L2;      /* Variable: Elevator_Height_L2
                                        * Referenced by: '<S368>/Reefscape_Chart'
                                        */
extern real_T Elevator_Height_L3;      /* Variable: Elevator_Height_L3
                                        * Referenced by: '<S368>/Reefscape_Chart'
                                        */
extern real_T Elevator_Height_L4;      /* Variable: Elevator_Height_L4
                                        * Referenced by: '<S368>/Reefscape_Chart'
                                        */
extern real_T Elevator_Height_Lower;   /* Variable: Elevator_Height_Lower
                                        * Referenced by: '<S368>/Reefscape_Chart'
                                        */
extern real_T Elevator_Height_Manual_Gain;/* Variable: Elevator_Height_Manual_Gain
                                           * Referenced by: '<S368>/Reefscape_Chart'
                                           */
extern real_T Elevator_Height_PickupLower_Reset;
                                  /* Variable: Elevator_Height_PickupLower_Reset
                                   * Referenced by: '<S10>/Constant2'
                                   */
extern real_T Elevator_Height_Prepare; /* Variable: Elevator_Height_Prepare
                                        * Referenced by: '<S368>/Reefscape_Chart'
                                        */
extern real_T Elevator_Height_Raise;   /* Variable: Elevator_Height_Raise
                                        * Referenced by: '<S368>/Reefscape_Chart'
                                        */
extern real_T Elevator_Height_Top;     /* Variable: Elevator_Height_Top
                                        * Referenced by: '<S368>/Reefscape_Chart'
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
                                        * Referenced by: '<S43>/Constant3'
                                        */
extern real_T Elevator_Int_LL;         /* Variable: Elevator_Int_LL
                                        * Referenced by: '<S43>/Saturation1'
                                        */
extern real_T Elevator_Int_UL;         /* Variable: Elevator_Int_UL
                                        * Referenced by: '<S43>/Saturation1'
                                        */
extern real_T Elevator_LowerPickup_Time;/* Variable: Elevator_LowerPickup_Time
                                         * Referenced by: '<S368>/Reefscape_Chart'
                                         */
extern real_T Elevator_MotorRev_to_Inch;/* Variable: Elevator_MotorRev_to_Inch
                                         * Referenced by: '<S10>/Gain1'
                                         */
extern real_T Elevator_Total_LL;       /* Variable: Elevator_Total_LL
                                        * Referenced by:
                                        *   '<S43>/Constant1'
                                        *   '<S43>/Saturation2'
                                        */
extern real_T Elevator_Total_UL;       /* Variable: Elevator_Total_UL
                                        * Referenced by:
                                        *   '<S43>/Constant'
                                        *   '<S43>/Saturation2'
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
                                        * Referenced by: '<S147>/Constant'
                                        */
extern real_T Spline_Last_Pose_Distance_to_Velocity_Gain;
                         /* Variable: Spline_Last_Pose_Distance_to_Velocity_Gain
                          * Referenced by: '<S206>/Constant2'
                          */
extern real_T Spline_Max_Centripital_Acceleration;
                                /* Variable: Spline_Max_Centripital_Acceleration
                                 * Referenced by: '<S206>/Constant1'
                                 */
extern real_T Spline_Pose_Num_Before_End_Reduce_Speed;
                            /* Variable: Spline_Pose_Num_Before_End_Reduce_Speed
                             * Referenced by: '<S153>/Constant'
                             */
extern real_T Spline_Stop_Radius;      /* Variable: Spline_Stop_Radius
                                        * Referenced by: '<S166>/Constant'
                                        */
extern real_T Spline_Velocity_Multiplier_TEST;
                                    /* Variable: Spline_Velocity_Multiplier_TEST
                                     * Referenced by: '<S206>/Constant3'
                                     */
extern real_T Steering_Absolute_Cmd_Approach_Zero_Error_Thresh;
                   /* Variable: Steering_Absolute_Cmd_Approach_Zero_Error_Thresh
                    * Referenced by: '<S317>/Constant5'
                    */
extern real_T Steering_Absolute_Cmd_Approach_Zero_Final_Thresh;
                   /* Variable: Steering_Absolute_Cmd_Approach_Zero_Final_Thresh
                    * Referenced by: '<S317>/Constant6'
                    */
extern real_T Steering_Absolute_Cmd_NonZero_Error_Thresh;
                         /* Variable: Steering_Absolute_Cmd_NonZero_Error_Thresh
                          * Referenced by: '<S317>/Constant9'
                          */
extern real_T Steering_Absolute_Cmd_NonZero_Final_Scale_Factor;
                   /* Variable: Steering_Absolute_Cmd_NonZero_Final_Scale_Factor
                    * Referenced by: '<S317>/Constant10'
                    */
extern real_T Steering_Absolute_Cmd_Rate_Limit_Dec;
                               /* Variable: Steering_Absolute_Cmd_Rate_Limit_Dec
                                * Referenced by: '<S317>/Constant1'
                                */
extern real_T Steering_Absolute_Cmd_Rate_Limit_Inc;
                               /* Variable: Steering_Absolute_Cmd_Rate_Limit_Inc
                                * Referenced by: '<S317>/Constant3'
                                */
extern real_T Steering_Heading_Control_D;/* Variable: Steering_Heading_Control_D
                                          * Referenced by: '<S334>/Constant3'
                                          */
extern real_T Steering_Heading_Control_D_FilterCoeff;
                             /* Variable: Steering_Heading_Control_D_FilterCoeff
                              * Referenced by: '<S334>/Constant2'
                              */
extern real_T Steering_Heading_Control_D_LL;
                                      /* Variable: Steering_Heading_Control_D_LL
                                       * Referenced by: '<S334>/Saturation'
                                       */
extern real_T Steering_Heading_Control_D_UL;
                                      /* Variable: Steering_Heading_Control_D_UL
                                       * Referenced by: '<S334>/Saturation'
                                       */
extern real_T Steering_Heading_Control_Deadzone;
                                  /* Variable: Steering_Heading_Control_Deadzone
                                   * Referenced by: '<S333>/Constant'
                                   */
extern real_T Steering_Heading_Control_I;/* Variable: Steering_Heading_Control_I
                                          * Referenced by: '<S334>/Gain2'
                                          */
extern real_T Steering_Heading_Control_I_LL;
                                      /* Variable: Steering_Heading_Control_I_LL
                                       * Referenced by: '<S334>/Saturation1'
                                       */
extern real_T Steering_Heading_Control_I_UL;
                                      /* Variable: Steering_Heading_Control_I_UL
                                       * Referenced by: '<S334>/Saturation1'
                                       */
extern real_T Steering_Heading_Control_P;/* Variable: Steering_Heading_Control_P
                                          * Referenced by: '<S334>/Gain1'
                                          */
extern real_T Steering_Heading_Control_Total_LL;
                                  /* Variable: Steering_Heading_Control_Total_LL
                                   * Referenced by:
                                   *   '<S334>/Constant1'
                                   *   '<S334>/Saturation2'
                                   */
extern real_T Steering_Heading_Control_Total_UL;
                                  /* Variable: Steering_Heading_Control_Total_UL
                                   * Referenced by:
                                   *   '<S334>/Constant'
                                   *   '<S334>/Saturation2'
                                   */
extern real_T Steering_Motor_Control_D;/* Variable: Steering_Motor_Control_D
                                        * Referenced by:
                                        *   '<S224>/Constant3'
                                        *   '<S245>/Constant3'
                                        *   '<S266>/Constant3'
                                        *   '<S287>/Constant3'
                                        */
extern real_T Steering_Motor_Control_D_FilterCoeff;
                               /* Variable: Steering_Motor_Control_D_FilterCoeff
                                * Referenced by:
                                *   '<S224>/Constant2'
                                *   '<S245>/Constant2'
                                *   '<S266>/Constant2'
                                *   '<S287>/Constant2'
                                */
extern real_T Steering_Motor_Control_D_LL;/* Variable: Steering_Motor_Control_D_LL
                                           * Referenced by:
                                           *   '<S224>/Saturation'
                                           *   '<S245>/Saturation'
                                           *   '<S266>/Saturation'
                                           *   '<S287>/Saturation'
                                           */
extern real_T Steering_Motor_Control_D_UL;/* Variable: Steering_Motor_Control_D_UL
                                           * Referenced by:
                                           *   '<S224>/Saturation'
                                           *   '<S245>/Saturation'
                                           *   '<S266>/Saturation'
                                           *   '<S287>/Saturation'
                                           */
extern real_T Steering_Motor_Control_I;/* Variable: Steering_Motor_Control_I
                                        * Referenced by:
                                        *   '<S224>/Gain2'
                                        *   '<S245>/Gain2'
                                        *   '<S266>/Gain2'
                                        *   '<S287>/Gain2'
                                        */
extern real_T Steering_Motor_Control_I_LL;/* Variable: Steering_Motor_Control_I_LL
                                           * Referenced by:
                                           *   '<S224>/Saturation1'
                                           *   '<S245>/Saturation1'
                                           *   '<S266>/Saturation1'
                                           *   '<S287>/Saturation1'
                                           */
extern real_T Steering_Motor_Control_I_UL;/* Variable: Steering_Motor_Control_I_UL
                                           * Referenced by:
                                           *   '<S224>/Saturation1'
                                           *   '<S245>/Saturation1'
                                           *   '<S266>/Saturation1'
                                           *   '<S287>/Saturation1'
                                           */
extern real_T Steering_Motor_Control_P;/* Variable: Steering_Motor_Control_P
                                        * Referenced by:
                                        *   '<S224>/Gain1'
                                        *   '<S245>/Gain1'
                                        *   '<S266>/Gain1'
                                        *   '<S287>/Gain1'
                                        */
extern real_T Steering_Relative_Cmd_Approach_Zero_Error_Thresh;
                   /* Variable: Steering_Relative_Cmd_Approach_Zero_Error_Thresh
                    * Referenced by: '<S316>/Constant5'
                    */
extern real_T Steering_Relative_Cmd_Approach_Zero_Final_Thresh;
                   /* Variable: Steering_Relative_Cmd_Approach_Zero_Final_Thresh
                    * Referenced by: '<S316>/Constant6'
                    */
extern real_T Steering_Relative_Cmd_NonZero_Error_Thresh;
                         /* Variable: Steering_Relative_Cmd_NonZero_Error_Thresh
                          * Referenced by: '<S316>/Constant9'
                          */
extern real_T Steering_Relative_Cmd_NonZero_Final_Scale_Factor;
                   /* Variable: Steering_Relative_Cmd_NonZero_Final_Scale_Factor
                    * Referenced by: '<S316>/Constant10'
                    */
extern real_T Steering_Relative_Cmd_Rate_Limit_Dec;
                               /* Variable: Steering_Relative_Cmd_Rate_Limit_Dec
                                * Referenced by: '<S316>/Constant1'
                                */
extern real_T Steering_Relative_Cmd_Rate_Limit_Inc;
                               /* Variable: Steering_Relative_Cmd_Rate_Limit_Inc
                                * Referenced by: '<S316>/Constant3'
                                */
extern real_T Steering_Relative_Gain;  /* Variable: Steering_Relative_Gain
                                        * Referenced by: '<S377>/Constant'
                                        */
extern real_T Steering_Twist_Gain;     /* Variable: Steering_Twist_Gain
                                        * Referenced by: '<S377>/Constant1'
                                        */
extern real_T TEST_Swerve_Mode_Override_Flag;
                                     /* Variable: TEST_Swerve_Mode_Override_Flag
                                      * Referenced by: '<S369>/Constant5'
                                      */
extern real_T TEST_Swerve_Mode_Steering;/* Variable: TEST_Swerve_Mode_Steering
                                         * Referenced by: '<S369>/Constant8'
                                         */
extern real_T TEST_Swerve_Mode_Translation;/* Variable: TEST_Swerve_Mode_Translation
                                            * Referenced by: '<S369>/Constant7'
                                            */
extern real_T Translation_Speed_Approach_Zero_Error_Thresh;
                       /* Variable: Translation_Speed_Approach_Zero_Error_Thresh
                        * Referenced by: '<S304>/Constant5'
                        */
extern real_T Translation_Speed_Approach_Zero_Final_Thresh;
                       /* Variable: Translation_Speed_Approach_Zero_Final_Thresh
                        * Referenced by: '<S304>/Constant6'
                        */
extern real_T Translation_Speed_NonZero_Error_Thresh;
                             /* Variable: Translation_Speed_NonZero_Error_Thresh
                              * Referenced by: '<S304>/Constant9'
                              */
extern real_T Translation_Speed_NonZero_Final_Scale_Factor;
                       /* Variable: Translation_Speed_NonZero_Final_Scale_Factor
                        * Referenced by: '<S304>/Constant10'
                        */
extern real_T Translation_Speed_Rate_Limit_Dec;
                                   /* Variable: Translation_Speed_Rate_Limit_Dec
                                    * Referenced by: '<S304>/Constant1'
                                    */
extern real_T Translation_Speed_Rate_Limit_Inc;
                                   /* Variable: Translation_Speed_Rate_Limit_Inc
                                    * Referenced by: '<S304>/Constant3'
                                    */
extern real_T Translation_Twist_Gain;  /* Variable: Translation_Twist_Gain
                                        * Referenced by: '<S378>/Gain'
                                        */
extern real_T Twist_Deadzone_neg;      /* Variable: Twist_Deadzone_neg
                                        * Referenced by:
                                        *   '<S377>/Dead Zone'
                                        *   '<S378>/Dead Zone'
                                        */
extern real_T Twist_Deadzone_pos;      /* Variable: Twist_Deadzone_pos
                                        * Referenced by:
                                        *   '<S377>/Dead Zone'
                                        *   '<S378>/Dead Zone'
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
 * Block '<S34>/Data Type Duplicate' : Unused code path elimination
 * Block '<S34>/Data Type Propagation' : Unused code path elimination
 * Block '<S35>/FixPt Data Type Duplicate1' : Unused code path elimination
 * Block '<S37>/Data Type Duplicate' : Unused code path elimination
 * Block '<S37>/Data Type Propagation' : Unused code path elimination
 * Block '<S38>/Data Type Duplicate' : Unused code path elimination
 * Block '<S38>/Data Type Propagation' : Unused code path elimination
 * Block '<S28>/Data Type Duplicate' : Unused code path elimination
 * Block '<S28>/Data Type Propagation' : Unused code path elimination
 * Block '<S50>/Data Type Duplicate' : Unused code path elimination
 * Block '<S50>/Data Type Propagation' : Unused code path elimination
 * Block '<S51>/FixPt Data Type Duplicate1' : Unused code path elimination
 * Block '<S53>/Data Type Duplicate' : Unused code path elimination
 * Block '<S53>/Data Type Propagation' : Unused code path elimination
 * Block '<S44>/Data Type Duplicate' : Unused code path elimination
 * Block '<S44>/Data Type Propagation' : Unused code path elimination
 * Block '<S13>/Unit Delay' : Unused code path elimination
 * Block '<S127>/Data Type Duplicate' : Unused code path elimination
 * Block '<S128>/Data Type Duplicate' : Unused code path elimination
 * Block '<S129>/Conversion' : Unused code path elimination
 * Block '<S129>/Data Type Duplicate' : Unused code path elimination
 * Block '<S130>/Data Type Duplicate' : Unused code path elimination
 * Block '<S88>/Data Type Duplicate' : Unused code path elimination
 * Block '<S89>/Data Type Duplicate' : Unused code path elimination
 * Block '<S90>/Data Type Duplicate' : Unused code path elimination
 * Block '<S91>/Data Type Duplicate' : Unused code path elimination
 * Block '<S92>/Data Type Duplicate' : Unused code path elimination
 * Block '<S93>/Data Type Duplicate' : Unused code path elimination
 * Block '<S94>/Data Type Duplicate' : Unused code path elimination
 * Block '<S95>/Conversion' : Unused code path elimination
 * Block '<S95>/Data Type Duplicate' : Unused code path elimination
 * Block '<S96>/Data Type Duplicate' : Unused code path elimination
 * Block '<S97>/Data Type Duplicate' : Unused code path elimination
 * Block '<S98>/Data Type Duplicate' : Unused code path elimination
 * Block '<S100>/Data Type Duplicate' : Unused code path elimination
 * Block '<S101>/Data Type Duplicate' : Unused code path elimination
 * Block '<S84>/G' : Unused code path elimination
 * Block '<S84>/H' : Unused code path elimination
 * Block '<S84>/N' : Unused code path elimination
 * Block '<S84>/P0' : Unused code path elimination
 * Block '<S84>/Q' : Unused code path elimination
 * Block '<S84>/R' : Unused code path elimination
 * Block '<S116>/CheckSignalProperties' : Unused code path elimination
 * Block '<S125>/CheckSignalProperties' : Unused code path elimination
 * Block '<S126>/CheckSignalProperties' : Unused code path elimination
 * Block '<S19>/Gain' : Unused code path elimination
 * Block '<S19>/Gain1' : Unused code path elimination
 * Block '<S19>/Scope' : Unused code path elimination
 * Block '<S165>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S169>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S175>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S209>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S229>/Data Type Duplicate' : Unused code path elimination
 * Block '<S229>/Data Type Propagation' : Unused code path elimination
 * Block '<S221>/Scope' : Unused code path elimination
 * Block '<S223>/Scope' : Unused code path elimination
 * Block '<S240>/Data Type Duplicate' : Unused code path elimination
 * Block '<S240>/Data Type Propagation' : Unused code path elimination
 * Block '<S224>/Scope' : Unused code path elimination
 * Block '<S250>/Data Type Duplicate' : Unused code path elimination
 * Block '<S250>/Data Type Propagation' : Unused code path elimination
 * Block '<S242>/Scope' : Unused code path elimination
 * Block '<S244>/Scope' : Unused code path elimination
 * Block '<S261>/Data Type Duplicate' : Unused code path elimination
 * Block '<S261>/Data Type Propagation' : Unused code path elimination
 * Block '<S245>/Scope' : Unused code path elimination
 * Block '<S271>/Data Type Duplicate' : Unused code path elimination
 * Block '<S271>/Data Type Propagation' : Unused code path elimination
 * Block '<S263>/Scope' : Unused code path elimination
 * Block '<S265>/Scope' : Unused code path elimination
 * Block '<S282>/Data Type Duplicate' : Unused code path elimination
 * Block '<S282>/Data Type Propagation' : Unused code path elimination
 * Block '<S266>/Scope' : Unused code path elimination
 * Block '<S292>/Data Type Duplicate' : Unused code path elimination
 * Block '<S292>/Data Type Propagation' : Unused code path elimination
 * Block '<S284>/Scope' : Unused code path elimination
 * Block '<S286>/Scope' : Unused code path elimination
 * Block '<S303>/Data Type Duplicate' : Unused code path elimination
 * Block '<S303>/Data Type Propagation' : Unused code path elimination
 * Block '<S287>/Scope' : Unused code path elimination
 * Block '<S314>/Data Type Duplicate' : Unused code path elimination
 * Block '<S314>/Data Type Propagation' : Unused code path elimination
 * Block '<S315>/FixPt Data Type Duplicate1' : Unused code path elimination
 * Block '<S324>/Data Type Duplicate' : Unused code path elimination
 * Block '<S324>/Data Type Propagation' : Unused code path elimination
 * Block '<S325>/FixPt Data Type Duplicate1' : Unused code path elimination
 * Block '<S331>/Data Type Duplicate' : Unused code path elimination
 * Block '<S331>/Data Type Propagation' : Unused code path elimination
 * Block '<S332>/FixPt Data Type Duplicate1' : Unused code path elimination
 * Block '<S338>/Data Type Duplicate' : Unused code path elimination
 * Block '<S338>/Data Type Propagation' : Unused code path elimination
 * Block '<S334>/Scope' : Unused code path elimination
 * Block '<S365>/Logical Operator12' : Unused code path elimination
 * Block '<S365>/Logical Operator13' : Unused code path elimination
 * Block '<S365>/Logical Operator14' : Unused code path elimination
 * Block '<S365>/Logical Operator15' : Unused code path elimination
 * Block '<S365>/Logical Operator16' : Unused code path elimination
 * Block '<S365>/Logical Operator17' : Unused code path elimination
 * Block '<S365>/Logical Operator18' : Unused code path elimination
 * Block '<S365>/Logical Operator19' : Unused code path elimination
 * Block '<S365>/Logical Operator20' : Unused code path elimination
 * Block '<S365>/Logical Operator7' : Unused code path elimination
 * Block '<S365>/Logical Operator8' : Unused code path elimination
 * Block '<S365>/Logical Operator9' : Unused code path elimination
 * Block '<S366>/Logical Operator10' : Unused code path elimination
 * Block '<S387>/Data Type Duplicate' : Unused code path elimination
 * Block '<S387>/Data Type Propagation' : Unused code path elimination
 * Block '<S394>/Data Type Duplicate' : Unused code path elimination
 * Block '<S394>/Data Type Propagation' : Unused code path elimination
 * Block '<S395>/FixPt Data Type Duplicate1' : Unused code path elimination
 * Block '<S127>/Conversion' : Eliminate redundant data type conversion
 * Block '<S128>/Conversion' : Eliminate redundant data type conversion
 * Block '<S130>/Conversion' : Eliminate redundant data type conversion
 * Block '<S84>/DataTypeConversionEnable' : Eliminate redundant data type conversion
 * Block '<S100>/Conversion' : Eliminate redundant data type conversion
 * Block '<S104>/Reshape' : Reshape block reduction
 * Block '<S84>/ReshapeX0' : Reshape block reduction
 * Block '<S84>/Reshapeu' : Reshape block reduction
 * Block '<S84>/Reshapexhat' : Reshape block reduction
 * Block '<S14>/Signal Copy' : Eliminate redundant signal conversion block
 * Block '<S14>/Signal Copy1' : Eliminate redundant signal conversion block
 * Block '<S17>/Signal Copy' : Eliminate redundant signal conversion block
 * Block '<S17>/Signal Copy1' : Eliminate redundant signal conversion block
 * Block '<S17>/Signal Copy2' : Eliminate redundant signal conversion block
 * Block '<S17>/Signal Copy3' : Eliminate redundant signal conversion block
 * Block '<S205>/Signal Copy' : Eliminate redundant signal conversion block
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
 * '<S26>'  : 'Code_Gen_Model/RoboRio Controls/Coral Arm Motor Control/Complex Rate Limit'
 * '<S27>'  : 'Code_Gen_Model/RoboRio Controls/Coral Arm Motor Control/PI and Integral Enable'
 * '<S28>'  : 'Code_Gen_Model/RoboRio Controls/Coral Arm Motor Control/Saturation Dynamic'
 * '<S29>'  : 'Code_Gen_Model/RoboRio Controls/Coral Arm Motor Control/Complex Rate Limit/Compare To Zero'
 * '<S30>'  : 'Code_Gen_Model/RoboRio Controls/Coral Arm Motor Control/Complex Rate Limit/Compare To Zero1'
 * '<S31>'  : 'Code_Gen_Model/RoboRio Controls/Coral Arm Motor Control/Complex Rate Limit/Compare To Zero2'
 * '<S32>'  : 'Code_Gen_Model/RoboRio Controls/Coral Arm Motor Control/Complex Rate Limit/Compare To Zero3'
 * '<S33>'  : 'Code_Gen_Model/RoboRio Controls/Coral Arm Motor Control/Complex Rate Limit/Discrete Rate Limiter'
 * '<S34>'  : 'Code_Gen_Model/RoboRio Controls/Coral Arm Motor Control/Complex Rate Limit/Discrete Rate Limiter/Saturation Dynamic'
 * '<S35>'  : 'Code_Gen_Model/RoboRio Controls/Coral Arm Motor Control/Complex Rate Limit/Discrete Rate Limiter/Unit Delay External IC'
 * '<S36>'  : 'Code_Gen_Model/RoboRio Controls/Coral Arm Motor Control/PI and Integral Enable/Detect Increase'
 * '<S37>'  : 'Code_Gen_Model/RoboRio Controls/Coral Arm Motor Control/PI and Integral Enable/Saturation Dynamic'
 * '<S38>'  : 'Code_Gen_Model/RoboRio Controls/Coral Arm Motor Control/PI and Integral Enable/Saturation Dynamic1'
 * '<S39>'  : 'Code_Gen_Model/RoboRio Controls/Elevator Motor Control/Compare To Constant'
 * '<S40>'  : 'Code_Gen_Model/RoboRio Controls/Elevator Motor Control/Compare To Constant2'
 * '<S41>'  : 'Code_Gen_Model/RoboRio Controls/Elevator Motor Control/Compare To Zero'
 * '<S42>'  : 'Code_Gen_Model/RoboRio Controls/Elevator Motor Control/Complex Rate Limit'
 * '<S43>'  : 'Code_Gen_Model/RoboRio Controls/Elevator Motor Control/PI and Integral Enable'
 * '<S44>'  : 'Code_Gen_Model/RoboRio Controls/Elevator Motor Control/Saturation Dynamic'
 * '<S45>'  : 'Code_Gen_Model/RoboRio Controls/Elevator Motor Control/Complex Rate Limit/Compare To Zero'
 * '<S46>'  : 'Code_Gen_Model/RoboRio Controls/Elevator Motor Control/Complex Rate Limit/Compare To Zero1'
 * '<S47>'  : 'Code_Gen_Model/RoboRio Controls/Elevator Motor Control/Complex Rate Limit/Compare To Zero2'
 * '<S48>'  : 'Code_Gen_Model/RoboRio Controls/Elevator Motor Control/Complex Rate Limit/Compare To Zero3'
 * '<S49>'  : 'Code_Gen_Model/RoboRio Controls/Elevator Motor Control/Complex Rate Limit/Discrete Rate Limiter'
 * '<S50>'  : 'Code_Gen_Model/RoboRio Controls/Elevator Motor Control/Complex Rate Limit/Discrete Rate Limiter/Saturation Dynamic'
 * '<S51>'  : 'Code_Gen_Model/RoboRio Controls/Elevator Motor Control/Complex Rate Limit/Discrete Rate Limiter/Unit Delay External IC'
 * '<S52>'  : 'Code_Gen_Model/RoboRio Controls/Elevator Motor Control/PI and Integral Enable/Detect Increase'
 * '<S53>'  : 'Code_Gen_Model/RoboRio Controls/Elevator Motor Control/PI and Integral Enable/Saturation Dynamic'
 * '<S54>'  : 'Code_Gen_Model/RoboRio Controls/Elevator_Height_Pre_Processing/Detect Decrease'
 * '<S55>'  : 'Code_Gen_Model/RoboRio Controls/Elevator_Height_Pre_Processing/Detect Decrease1'
 * '<S56>'  : 'Code_Gen_Model/RoboRio Controls/Elevator_Height_Pre_Processing/Detect Increase'
 * '<S57>'  : 'Code_Gen_Model/RoboRio Controls/Gyro_Angles/Degrees to Radians'
 * '<S58>'  : 'Code_Gen_Model/RoboRio Controls/Gyro_Angles/Detect Increase'
 * '<S59>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Constant'
 * '<S60>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Constant1'
 * '<S61>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Constant2'
 * '<S62>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Constant3'
 * '<S63>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Constant4'
 * '<S64>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Constant5'
 * '<S65>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Constant6'
 * '<S66>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Constant7'
 * '<S67>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Constant8'
 * '<S68>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero'
 * '<S69>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero1'
 * '<S70>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero11'
 * '<S71>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero12'
 * '<S72>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero13'
 * '<S73>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero14'
 * '<S74>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero15'
 * '<S75>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero16'
 * '<S76>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero17'
 * '<S77>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero2'
 * '<S78>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero3'
 * '<S79>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero4'
 * '<S80>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero5'
 * '<S81>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Detect Increase'
 * '<S82>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Detect Increase1'
 * '<S83>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Detect Increase2'
 * '<S84>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter'
 * '<S85>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CalculatePL'
 * '<S86>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CalculateYhat'
 * '<S87>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CovarianceOutputConfigurator'
 * '<S88>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionA'
 * '<S89>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionB'
 * '<S90>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionC'
 * '<S91>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionD'
 * '<S92>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionG'
 * '<S93>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionH'
 * '<S94>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionN'
 * '<S95>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionP'
 * '<S96>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionP0'
 * '<S97>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionQ'
 * '<S98>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionR'
 * '<S99>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionReset'
 * '<S100>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionX'
 * '<S101>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionX0'
 * '<S102>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionu'
 * '<S103>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/MemoryP'
 * '<S104>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/Observer'
 * '<S105>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/ReducedQRN'
 * '<S106>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/Reset'
 * '<S107>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/Reshapeyhat'
 * '<S108>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/ScalarExpansionP0'
 * '<S109>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/ScalarExpansionQ'
 * '<S110>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/ScalarExpansionR'
 * '<S111>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/UseCurrentEstimator'
 * '<S112>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkA'
 * '<S113>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkB'
 * '<S114>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkC'
 * '<S115>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkD'
 * '<S116>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkEnable'
 * '<S117>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkG'
 * '<S118>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkH'
 * '<S119>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkN'
 * '<S120>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkP0'
 * '<S121>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkQ'
 * '<S122>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkR'
 * '<S123>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkReset'
 * '<S124>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkX0'
 * '<S125>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checku'
 * '<S126>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checky'
 * '<S127>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CalculatePL/DataTypeConversionL'
 * '<S128>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CalculatePL/DataTypeConversionM'
 * '<S129>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CalculatePL/DataTypeConversionP'
 * '<S130>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CalculatePL/DataTypeConversionZ'
 * '<S131>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CalculatePL/Ground'
 * '<S132>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CalculateYhat/Ground'
 * '<S133>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CovarianceOutputConfigurator/decideOutput'
 * '<S134>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CovarianceOutputConfigurator/decideOutput/SqrtUsedFcn'
 * '<S135>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/Observer/MeasurementUpdate'
 * '<S136>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/ReducedQRN/Ground'
 * '<S137>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/UseCurrentEstimator/Enabled Subsystem'
 * '<S138>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Difference'
 * '<S139>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Difference1'
 * '<S140>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Difference3'
 * '<S141>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Difference4'
 * '<S142>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Difference5'
 * '<S143>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Polar to Cartesian'
 * '<S144>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Polar to Cartesian1'
 * '<S145>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Polar to Cartesian2'
 * '<S146>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Polar to Cartesian3'
 * '<S147>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Tear for validation testing'
 * '<S148>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Tear for validation testing/Compare To Zero'
 * '<S149>' : 'Code_Gen_Model/RoboRio Controls/Previous GameState/Chart'
 * '<S150>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Pass Through'
 * '<S151>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled'
 * '<S152>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses'
 * '<S153>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Find_Targets'
 * '<S154>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Steering_and_Drive_Commands'
 * '<S155>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/If Action Subsystem'
 * '<S156>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification'
 * '<S157>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning'
 * '<S158>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Escape_Auto_Driving'
 * '<S159>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid'
 * '<S160>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Catch-all if not the last point and not in the circle'
 * '<S161>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Circle_Check_Valid'
 * '<S162>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Increment_If_Rectangle_Check'
 * '<S163>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Circle_Check_Valid/Increment_Search'
 * '<S164>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Circle_Check_Valid/Is_Last_Point'
 * '<S165>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Circle_Check_Valid/Increment_Search/Increment Real World'
 * '<S166>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Circle_Check_Valid/Is_Last_Point/Compare To Constant'
 * '<S167>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Circle_Check_Valid/Is_Last_Point/Robot_Is_At_Destination'
 * '<S168>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Circle_Check_Valid/Is_Last_Point/Straight_Line_Path_To_End'
 * '<S169>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Increment_If_Rectangle_Check/Increment Real World'
 * '<S170>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Increment_If_Rectangle_Check/Subsystem Reference'
 * '<S171>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Increment_If_Rectangle_Check/Subsystem Reference/Compare To Constant'
 * '<S172>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Increment_If_Rectangle_Check/Subsystem Reference/Compare To Constant1'
 * '<S173>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Make_Knots'
 * '<S174>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning'
 * '<S175>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Make_Knots/Decrement Real World'
 * '<S176>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Make_Knots/Find_Control_Pose'
 * '<S177>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Make_Knots/Find_Control_Pose1'
 * '<S178>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop'
 * '<S179>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Compare To Constant'
 * '<S180>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve'
 * '<S181>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Find_Point_Coefficients'
 * '<S182>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve'
 * '<S183>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Acc'
 * '<S184>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Pos'
 * '<S185>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Vel'
 * '<S186>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Curvature'
 * '<S187>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_U_And_Powers'
 * '<S188>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Acc/Subsystem Reference'
 * '<S189>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Acc/ddA'
 * '<S190>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Acc/ddB'
 * '<S191>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Acc/ddC'
 * '<S192>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Pos/A'
 * '<S193>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Pos/B'
 * '<S194>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Pos/C'
 * '<S195>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Pos/Subsystem Reference'
 * '<S196>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Vel/Subsystem Reference'
 * '<S197>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Vel/dA'
 * '<S198>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Vel/dB'
 * '<S199>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Vel/dC'
 * '<S200>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Curvature/MATLAB Function'
 * '<S201>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Find_Targets/Distance Along Curve'
 * '<S202>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Find_Targets/Find closest index to curve'
 * '<S203>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Find_Targets/Find first index that meets distance target'
 * '<S204>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Find_Targets/Find velocity and heading'
 * '<S205>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Find_Targets/Heading'
 * '<S206>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Find_Targets/Velocity'
 * '<S207>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Find_Targets/Find velocity and heading/Dynamic Lookup Tables'
 * '<S208>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Find_Targets/Find velocity and heading/Latch'
 * '<S209>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Find_Targets/Find velocity and heading/Dynamic Lookup Tables/Decrement'
 * '<S210>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Steering_and_Drive_Commands/Translation Angle'
 * '<S211>' : 'Code_Gen_Model/RoboRio Controls/Steer_Module_Offset_Adjustments/Angle Modulus'
 * '<S212>' : 'Code_Gen_Model/RoboRio Controls/Steer_Module_Offset_Adjustments/Angle Modulus1'
 * '<S213>' : 'Code_Gen_Model/RoboRio Controls/Steer_Module_Offset_Adjustments/Angle Modulus2'
 * '<S214>' : 'Code_Gen_Model/RoboRio Controls/Steer_Module_Offset_Adjustments/Angle Modulus3'
 * '<S215>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module'
 * '<S216>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1'
 * '<S217>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2'
 * '<S218>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3'
 * '<S219>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle'
 * '<S220>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Direction Change Drive Reduction Factor'
 * '<S221>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Drive Feed Forward plus PID'
 * '<S222>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Optimize'
 * '<S223>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Steering Module Error Drive Reduction Factor'
 * '<S224>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Steering with Angle Error Modulus PID'
 * '<S225>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Tangential_Velocity_To_RPM'
 * '<S226>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Direction Change Drive Reduction Factor/Compare To Constant'
 * '<S227>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Drive Feed Forward plus PID/Difference'
 * '<S228>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Drive Feed Forward plus PID/Low_Pass_Filter'
 * '<S229>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Drive Feed Forward plus PID/Saturation Dynamic'
 * '<S230>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Optimize/Compare To Constant'
 * '<S231>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Optimize/Minus1'
 * '<S232>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Optimize/RotateBy'
 * '<S233>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Optimize/Minus1/RotateBy'
 * '<S234>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Optimize/Minus1/RotateBy/Compare To Constant'
 * '<S235>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Optimize/RotateBy/Compare To Constant'
 * '<S236>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Steering Module Error Drive Reduction Factor/Angle Modulus to plus or minus pi over two'
 * '<S237>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Steering with Angle Error Modulus PID/Angle Modulus'
 * '<S238>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Steering with Angle Error Modulus PID/Difference'
 * '<S239>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Steering with Angle Error Modulus PID/Low_Pass_Filter'
 * '<S240>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Steering with Angle Error Modulus PID/Saturation Dynamic'
 * '<S241>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Direction Change Drive Reduction Factor'
 * '<S242>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Drive Feed Forward plus PID'
 * '<S243>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Optimize'
 * '<S244>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Steering Module Error Drive Reduction Factor'
 * '<S245>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Steering with Angle Error Modulus PID'
 * '<S246>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Tangential_Velocity_To_RPM'
 * '<S247>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Direction Change Drive Reduction Factor/Compare To Constant'
 * '<S248>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Drive Feed Forward plus PID/Difference'
 * '<S249>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Drive Feed Forward plus PID/Low_Pass_Filter'
 * '<S250>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Drive Feed Forward plus PID/Saturation Dynamic'
 * '<S251>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Optimize/Compare To Constant'
 * '<S252>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Optimize/Minus1'
 * '<S253>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Optimize/RotateBy'
 * '<S254>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Optimize/Minus1/RotateBy'
 * '<S255>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Optimize/Minus1/RotateBy/Compare To Constant'
 * '<S256>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Optimize/RotateBy/Compare To Constant'
 * '<S257>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Steering Module Error Drive Reduction Factor/Angle Modulus to plus or minus pi over two'
 * '<S258>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Steering with Angle Error Modulus PID/Angle Modulus'
 * '<S259>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Steering with Angle Error Modulus PID/Difference'
 * '<S260>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Steering with Angle Error Modulus PID/Low_Pass_Filter'
 * '<S261>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Steering with Angle Error Modulus PID/Saturation Dynamic'
 * '<S262>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Direction Change Drive Reduction Factor'
 * '<S263>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Drive Feed Forward plus PID'
 * '<S264>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Optimize'
 * '<S265>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Steering Module Error Drive Reduction Factor'
 * '<S266>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Steering with Angle Error Modulus PID'
 * '<S267>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Tangential_Velocity_To_RPM'
 * '<S268>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Direction Change Drive Reduction Factor/Compare To Constant'
 * '<S269>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Drive Feed Forward plus PID/Difference'
 * '<S270>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Drive Feed Forward plus PID/Low_Pass_Filter'
 * '<S271>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Drive Feed Forward plus PID/Saturation Dynamic'
 * '<S272>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Optimize/Compare To Constant'
 * '<S273>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Optimize/Minus1'
 * '<S274>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Optimize/RotateBy'
 * '<S275>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Optimize/Minus1/RotateBy'
 * '<S276>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Optimize/Minus1/RotateBy/Compare To Constant'
 * '<S277>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Optimize/RotateBy/Compare To Constant'
 * '<S278>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Steering Module Error Drive Reduction Factor/Angle Modulus to plus or minus pi over two'
 * '<S279>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Steering with Angle Error Modulus PID/Angle Modulus'
 * '<S280>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Steering with Angle Error Modulus PID/Difference'
 * '<S281>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Steering with Angle Error Modulus PID/Low_Pass_Filter'
 * '<S282>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Steering with Angle Error Modulus PID/Saturation Dynamic'
 * '<S283>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Direction Change Drive Reduction Factor'
 * '<S284>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Drive Feed Forward plus PID'
 * '<S285>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Optimize'
 * '<S286>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Steering Module Error Drive Reduction Factor'
 * '<S287>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Steering with Angle Error Modulus PID'
 * '<S288>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Tangential_Velocity_To_RPM'
 * '<S289>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Direction Change Drive Reduction Factor/Compare To Constant'
 * '<S290>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Drive Feed Forward plus PID/Difference'
 * '<S291>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Drive Feed Forward plus PID/Low_Pass_Filter'
 * '<S292>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Drive Feed Forward plus PID/Saturation Dynamic'
 * '<S293>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Optimize/Compare To Constant'
 * '<S294>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Optimize/Minus1'
 * '<S295>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Optimize/RotateBy'
 * '<S296>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Optimize/Minus1/RotateBy'
 * '<S297>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Optimize/Minus1/RotateBy/Compare To Constant'
 * '<S298>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Optimize/RotateBy/Compare To Constant'
 * '<S299>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Steering Module Error Drive Reduction Factor/Angle Modulus to plus or minus pi over two'
 * '<S300>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Steering with Angle Error Modulus PID/Angle Modulus'
 * '<S301>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Steering with Angle Error Modulus PID/Difference'
 * '<S302>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Steering with Angle Error Modulus PID/Low_Pass_Filter'
 * '<S303>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Steering with Angle Error Modulus PID/Saturation Dynamic'
 * '<S304>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Complex Rate Limit'
 * '<S305>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Initialize Function'
 * '<S306>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command'
 * '<S307>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Translation Steering Command'
 * '<S308>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator'
 * '<S309>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Complex Rate Limit/Compare To Zero'
 * '<S310>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Complex Rate Limit/Compare To Zero1'
 * '<S311>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Complex Rate Limit/Compare To Zero2'
 * '<S312>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Complex Rate Limit/Compare To Zero3'
 * '<S313>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Complex Rate Limit/Discrete Rate Limiter'
 * '<S314>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Complex Rate Limit/Discrete Rate Limiter/Saturation Dynamic'
 * '<S315>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Complex Rate Limit/Discrete Rate Limiter/Unit Delay External IC'
 * '<S316>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit'
 * '<S317>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit1'
 * '<S318>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Steering Heading PID'
 * '<S319>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit/Compare To Zero'
 * '<S320>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit/Compare To Zero1'
 * '<S321>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit/Compare To Zero2'
 * '<S322>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit/Compare To Zero3'
 * '<S323>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit/Discrete Rate Limiter'
 * '<S324>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit/Discrete Rate Limiter/Saturation Dynamic'
 * '<S325>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit/Discrete Rate Limiter/Unit Delay External IC'
 * '<S326>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit1/Compare To Zero'
 * '<S327>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit1/Compare To Zero1'
 * '<S328>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit1/Compare To Zero2'
 * '<S329>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit1/Compare To Zero3'
 * '<S330>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit1/Discrete Rate Limiter'
 * '<S331>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit1/Discrete Rate Limiter/Saturation Dynamic'
 * '<S332>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit1/Discrete Rate Limiter/Unit Delay External IC'
 * '<S333>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Steering Heading PID/Compare To Constant'
 * '<S334>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Steering Heading PID/PID with Error Wrapping'
 * '<S335>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Steering Heading PID/PID with Error Wrapping/Angle Modulus'
 * '<S336>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Steering Heading PID/PID with Error Wrapping/Difference'
 * '<S337>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Steering Heading PID/PID with Error Wrapping/Low_Pass_Filter'
 * '<S338>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Steering Heading PID/PID with Error Wrapping/Saturation Dynamic'
 * '<S339>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Translation Steering Command/Angle Modulus'
 * '<S340>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Reduce Speeds for Maximum Speed Limit'
 * '<S341>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add'
 * '<S342>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add1'
 * '<S343>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add2'
 * '<S344>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add3'
 * '<S345>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add/Angle_Saver'
 * '<S346>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add/Cartesian to Polar'
 * '<S347>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add/Polar to Cartesian'
 * '<S348>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add/Polar to Cartesian1'
 * '<S349>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add/Angle_Saver/Compare To Zero1'
 * '<S350>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add1/Angle_Saver'
 * '<S351>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add1/Cartesian to Polar'
 * '<S352>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add1/Polar to Cartesian'
 * '<S353>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add1/Polar to Cartesian1'
 * '<S354>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add1/Angle_Saver/Compare To Zero1'
 * '<S355>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add2/Angle_Saver'
 * '<S356>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add2/Cartesian to Polar'
 * '<S357>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add2/Polar to Cartesian'
 * '<S358>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add2/Polar to Cartesian1'
 * '<S359>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add2/Angle_Saver/Compare To Zero1'
 * '<S360>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add3/Angle_Saver'
 * '<S361>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add3/Cartesian to Polar'
 * '<S362>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add3/Polar to Cartesian'
 * '<S363>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add3/Polar to Cartesian1'
 * '<S364>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add3/Angle_Saver/Compare To Zero1'
 * '<S365>' : 'Code_Gen_Model/RoboRio Controls/Teleop/April Tag Field XY Errors and Target Angle'
 * '<S366>' : 'Code_Gen_Model/RoboRio Controls/Teleop/April Tag Relative Errors'
 * '<S367>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive'
 * '<S368>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Reefscape Teleop'
 * '<S369>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Subsystem'
 * '<S370>' : 'Code_Gen_Model/RoboRio Controls/Teleop/April Tag Relative Errors/Compare To Constant'
 * '<S371>' : 'Code_Gen_Model/RoboRio Controls/Teleop/April Tag Relative Errors/Compare To Constant1'
 * '<S372>' : 'Code_Gen_Model/RoboRio Controls/Teleop/April Tag Relative Errors/Compare To Constant2'
 * '<S373>' : 'Code_Gen_Model/RoboRio Controls/Teleop/April Tag Relative Errors/Compare To Zero'
 * '<S374>' : 'Code_Gen_Model/RoboRio Controls/Teleop/April Tag Relative Errors/Compare To Zero1'
 * '<S375>' : 'Code_Gen_Model/RoboRio Controls/Teleop/April Tag Relative Errors/Compare To Zero2'
 * '<S376>' : 'Code_Gen_Model/RoboRio Controls/Teleop/April Tag Relative Errors/Compare To Zero3'
 * '<S377>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering'
 * '<S378>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation'
 * '<S379>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering/Compare To Zero2'
 * '<S380>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering/Detect Increase'
 * '<S381>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering/Detect Increase1'
 * '<S382>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering/Detect Increase2'
 * '<S383>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering/Detect Increase3'
 * '<S384>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering/Detect Increase4'
 * '<S385>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering/Detect Increase5'
 * '<S386>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering/Previous game state was not Teleop'
 * '<S387>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering/Saturation Dynamic'
 * '<S388>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Boost and Rate Limit'
 * '<S389>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Compare To Zero'
 * '<S390>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Compare To Zero1'
 * '<S391>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Latch Outputs when Both Inputs Zero'
 * '<S392>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Boost and Rate Limit/Simple Rate Limit'
 * '<S393>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Boost and Rate Limit/Simple Rate Limit/Discrete Rate Limiter'
 * '<S394>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Boost and Rate Limit/Simple Rate Limit/Discrete Rate Limiter/Saturation Dynamic'
 * '<S395>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Boost and Rate Limit/Simple Rate Limit/Discrete Rate Limiter/Unit Delay External IC'
 * '<S396>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Latch Outputs when Both Inputs Zero/Compare To Zero'
 * '<S397>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Latch Outputs when Both Inputs Zero/Compare To Zero1'
 * '<S398>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Reefscape Teleop/Detect Increase'
 * '<S399>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Reefscape Teleop/Detect Increase1'
 * '<S400>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Reefscape Teleop/Detect Increase10'
 * '<S401>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Reefscape Teleop/Detect Increase11'
 * '<S402>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Reefscape Teleop/Detect Increase12'
 * '<S403>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Reefscape Teleop/Detect Increase2'
 * '<S404>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Reefscape Teleop/Detect Increase3'
 * '<S405>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Reefscape Teleop/Detect Increase4'
 * '<S406>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Reefscape Teleop/Detect Increase5'
 * '<S407>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Reefscape Teleop/Detect Increase6'
 * '<S408>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Reefscape Teleop/Detect Increase7'
 * '<S409>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Reefscape Teleop/Detect Increase8'
 * '<S410>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Reefscape Teleop/Detect Increase9'
 * '<S411>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Reefscape Teleop/Reefscape_Chart'
 */
#endif                                 /* RTW_HEADER_Code_Gen_Model_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
