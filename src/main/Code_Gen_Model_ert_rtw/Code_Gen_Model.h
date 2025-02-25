/*
 * Sponsored License - for use in support of a program or activity
 * sponsored by MathWorks.  Not for government, commercial or other
 * non-sponsored organizational use.
 *
 * File: Code_Gen_Model.h
 *
 * Code generated for Simulink model 'Code_Gen_Model'.
 *
 * Model version                  : 2.282
 * Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
 * C/C++ source code generated on : Mon Feb 24 21:42:56 2025
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
  real_T Drive_Joystick_X;             /* '<S12>/Signal Copy1' */
  real_T Drive_Joystick_Y;             /* '<S12>/Signal Copy2' */
  real_T Drive_Joystick_Z;             /* '<S12>/Signal Copy3' */
  real_T Steer_Joystick_Y;             /* '<S12>/Signal Copy5' */
  real_T Steer_Joystick_Z;             /* '<S12>/Signal Copy6' */
  real_T Odom_Position_X;              /* '<S16>/Accumulator2' */
  real_T KF_Position_X;                /* '<S14>/Switch' */
  real_T Odom_Position_Y;              /* '<S16>/Accumulator' */
  real_T KF_Position_Y;                /* '<S14>/Switch1' */
  real_T Gyro_Angle_Calibrated_deg;    /* '<S11>/Subtract1' */
  real_T Gyro_Angle_rad;               /* '<S56>/Gain1' */
  real_T Elevator_Height_Measured_Raw; /* '<S10>/Gain1' */
  real_T Elevator_Height_Offset;       /* '<S10>/Switch1' */
  real_T Elevator_Height_Measured;     /* '<S10>/Switch' */
  real_T Coral_Arm_Angle_Measured;     /* '<S1>/Add Constant' */
  real_T Gyro_Angle_Field_rad;         /* '<S11>/Add' */
  real_T Spline_Num_Poses;             /* '<S15>/Merge9' */
  real_T Steering_Abs_Cmd;             /* '<S15>/Merge1' */
  real_T Steering_Rel_Cmd;             /* '<S15>/Merge2' */
  real_T Translation_Speed;            /* '<S15>/Merge4' */
  real_T Translation_Angle;            /* '<S15>/Merge3' */
  real_T Translation_Speed_SPF;        /* '<S18>/Merge2' */
  real_T Translation_Speed_RL;         /* '<S303>/Sum' */
  real_T Translation_Angle_SPF;        /* '<S18>/Merge3' */
  real_T Gyro_Angle_SPF;               /* '<S18>/Merge8' */
  real_T Translation_Steering_Cmd;     /* '<S297>/Switch' */
  real_T Steering_Abs_Cmd_SPF;         /* '<S18>/Merge' */
  real_T Steering_Localized_PID;       /* '<S324>/Saturation2' */
  real_T Steering_Rel_Cmd_SPF;         /* '<S18>/Merge1' */
  real_T Steering_Localized_Cmd;       /* '<S296>/Switch' */
  real_T FL_Desired_Module_Angle;      /* '<S335>/Switch' */
  real_T FL_Steer_Module_Angle;        /* '<S201>/Add1' */
  real_T FL_Desired_Wheel_Speed_in;    /* '<S335>/Switch1' */
  real_T FR_Desired_Wheel_Speed_in;    /* '<S340>/Switch1' */
  real_T BL_Desired_Wheel_Speed_in;    /* '<S345>/Switch1' */
  real_T BR_Desired_Wheel_Speed_in;    /* '<S350>/Switch1' */
  real_T FL_Desired_Wheel_Speed;       /* '<S330>/Product' */
  real_T FR_Desired_Module_Angle;      /* '<S340>/Switch' */
  real_T FR_Steer_Module_Angle;        /* '<S202>/Add1' */
  real_T FR_Desired_Wheel_Speed;       /* '<S330>/Product1' */
  real_T BL_Desired_Module_Angle;      /* '<S345>/Switch' */
  real_T BL_Steer_Module_Angle;        /* '<S203>/Add1' */
  real_T BL_Desired_Wheel_Speed;       /* '<S330>/Product2' */
  real_T BR_Desired_Module_Angle;      /* '<S350>/Switch' */
  real_T BR_Steer_Module_Angle;        /* '<S204>/Add1' */
  real_T BR_Desired_Wheel_Speed;       /* '<S330>/Product3' */
  real_T Elevator_Height_Desired;      /* '<S15>/Merge11' */
  real_T Coral_Arm_Angle_Desired;      /* '<S15>/Merge13' */
  real_T Elevator_Error;               /* '<S9>/Add' */
  real_T Elevator_Proportional;        /* '<S42>/Gain1' */
  real_T Elevator_Integral;            /* '<S42>/Switch' */
  real_T Coral_ArmAngle_Error;         /* '<S7>/Subtract' */
  real_T Elevator_Proportional_l;      /* '<S26>/Gain1' */
  real_T Elevator_Integral_o;          /* '<S26>/Switch' */
  real_T Steer_Joystick_X;             /* '<S12>/Signal Copy4' */
  real_T Product6[2];                  /* '<S16>/Product6' */
  real_T Odometry_X_global_est_ft;     /* '<S137>/meters to feet' */
  real_T Odometry_X_global_TEAR_ft;    /* '<S137>/Subtract' */
  real_T Odometry_Y_global_est_ft;     /* '<S137>/meters to feet1' */
  real_T Odometry_Y_global_TEAR_ft;    /* '<S137>/Subtract1' */
  real_T AT_Error_X;                   /* '<S355>/Switch15' */
  real_T AT_Error_Y;                   /* '<S355>/Switch23' */
  real_T Steering_Abs_Gyro_Latch;      /* '<S358>/Switch8' */
  real_T Steering_Abs_Gyro;            /* '<S358>/Switch2' */
  real_T AT_Target_Angle;              /* '<S355>/Switch2' */
  real_T Steering_Abs_Angle;           /* '<S358>/Switch3' */
  real_T DeadZone;                     /* '<S357>/Dead Zone' */
  real_T DeadZone1;                    /* '<S357>/Dead Zone1' */
  real_T Elevator_Height_Desired_m;    /* '<S357>/Reefscape_Chart' */
  real_T Coral_Arm_Angle_Desired_o;    /* '<S357>/Reefscape_Chart' */
  real_T Coral_Wheel_DC;               /* '<S357>/Reefscape_Chart' */
  real_T Spline_Follow_Index;          /* '<S146>/Merge4' */
  real_T Spline_Target_Y;              /* '<S143>/Selector6' */
  real_T Spline_Target_X;              /* '<S143>/Selector2' */
  real_T Product2[2];                  /* '<S127>/Product2' */
  real_T Product3[2];                  /* '<S125>/Product3' */
  uint8_T Active_GameState;            /* '<S17>/Chart' */
  boolean_T Button_Enable_Wheels;      /* '<S71>/FixPt Relational Operator' */
  boolean_T Button_Reset_Wheel_Offsets;/* '<S72>/FixPt Relational Operator' */
  boolean_T Button_Disable_Wheels;     /* '<S73>/FixPt Relational Operator' */
  boolean_T Drive_Joystick_Z_Mode;     /* '<S63>/Compare' */
  boolean_T Is_Boosting;               /* '<S70>/Compare' */
  boolean_T Align_Amp;                 /* '<S68>/Compare' */
  boolean_T Align_Speaker;             /* '<S67>/Compare' */
  boolean_T Face_Toward_Driver;        /* '<S66>/Compare' */
  boolean_T Face_Right_Driver;         /* '<S64>/Compare' */
  boolean_T Face_Left_Driver;          /* '<S65>/Compare' */
  boolean_T Face_Away_Driver;          /* '<S62>/Compare' */
  boolean_T Gamepad_POV_Up;            /* '<S58>/Compare' */
  boolean_T Gamepad_POV_Down;          /* '<S59>/Compare' */
  boolean_T Gamepad_POV_Left;          /* '<S61>/Compare' */
  boolean_T Gamepad_POV_Right;         /* '<S60>/Compare' */
  boolean_T Spline_Enable;             /* '<S15>/Merge7' */
  boolean_T Is_Absolute_Translation_SPF;/* '<S18>/Merge4' */
  boolean_T Is_Absolute_Steering_SPF;  /* '<S18>/Merge5' */
  boolean_T Reefscape_Motors_Enable;   /* '<S15>/Merge12' */
  boolean_T Test_Mode;                 /* '<S15>/Merge10' */
  boolean_T Elevator_LowerPickup_Reset_tp;/* '<S15>/Merge21' */
  boolean_T Robot_Reached_Destination; /* '<S18>/Merge7' */
  boolean_T Steering_Abs_Angle_Active; /* '<S358>/AND6' */
  boolean_T previous_call_was_for_speaker;/* '<S355>/Logical Operator' */
  boolean_T FixPtRelationalOperator;   /* '<S378>/FixPt Relational Operator' */
  boolean_T FixPtRelationalOperator_n; /* '<S379>/FixPt Relational Operator' */
  boolean_T FixPtRelationalOperator_k; /* '<S383>/FixPt Relational Operator' */
  boolean_T FixPtRelationalOperator_d; /* '<S384>/FixPt Relational Operator' */
  boolean_T FixPtRelationalOperator_m; /* '<S388>/FixPt Relational Operator' */
  boolean_T FixPtRelationalOperator_ji;/* '<S381>/FixPt Relational Operator' */
  boolean_T FixPtRelationalOperator_ml;/* '<S382>/FixPt Relational Operator' */
  boolean_T Elevator_LowerPickup_Reset;/* '<S357>/Reefscape_Chart' */
  boolean_T Coral_Pickup_Lower_Wait_State;/* '<S357>/Reefscape_Chart' */
  boolean_T Spline_Out_Of_Bounds;      /* '<S146>/Merge1' */
} B_Code_Gen_Model_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T DelayInput1_DSTATE;           /* '<S71>/Delay Input1' */
  real_T DelayInput1_DSTATE_e;         /* '<S72>/Delay Input1' */
  real_T DelayInput1_DSTATE_n;         /* '<S73>/Delay Input1' */
  real_T TappedDelay_X[6];             /* '<S14>/Tapped Delay' */
  real_T TappedDelay1_X[6];            /* '<S14>/Tapped Delay1' */
  real_T MemoryX_DSTATE[2];            /* '<S74>/MemoryX' */
  real_T Accumulator2_DSTATE;          /* '<S16>/Accumulator2' */
  real_T Accumulator_DSTATE;           /* '<S16>/Accumulator' */
  real_T DelayInput1_DSTATE_p;         /* '<S57>/Delay Input1' */
  real_T UnitDelay1_DSTATE;            /* '<S11>/Unit Delay1' */
  real_T UnitDelay1_DSTATE_i;          /* '<S327>/Unit Delay1' */
  real_T UD_DSTATE;                    /* '<S326>/UD' */
  real_T UnitDelay_DSTATE_m;           /* '<S324>/Unit Delay' */
  real_T UnitDelay_DSTATE_d;           /* '<S307>/Unit Delay' */
  real_T FixPtUnitDelay1_DSTATE_e;     /* '<S322>/FixPt Unit Delay1' */
  real_T UnitDelay_DSTATE_g;           /* '<S306>/Unit Delay' */
  real_T FixPtUnitDelay1_DSTATE_p;     /* '<S315>/FixPt Unit Delay1' */
  real_T UnitDelay1_DSTATE_b;          /* '<S229>/Unit Delay1' */
  real_T UD_DSTATE_b;                  /* '<S228>/UD' */
  real_T UnitDelay_DSTATE_e;           /* '<S214>/Unit Delay' */
  real_T UnitDelay1_DSTATE_a;          /* '<S218>/Unit Delay1' */
  real_T UD_DSTATE_o;                  /* '<S217>/UD' */
  real_T UnitDelay_DSTATE_f;           /* '<S211>/Unit Delay' */
  real_T UnitDelay1_DSTATE_n;          /* '<S250>/Unit Delay1' */
  real_T UD_DSTATE_i;                  /* '<S249>/UD' */
  real_T UnitDelay_DSTATE_dt;          /* '<S235>/Unit Delay' */
  real_T UnitDelay1_DSTATE_b1;         /* '<S239>/Unit Delay1' */
  real_T UD_DSTATE_e;                  /* '<S238>/UD' */
  real_T UnitDelay_DSTATE_em;          /* '<S232>/Unit Delay' */
  real_T UnitDelay1_DSTATE_nw;         /* '<S271>/Unit Delay1' */
  real_T UD_DSTATE_k;                  /* '<S270>/UD' */
  real_T UnitDelay_DSTATE_k;           /* '<S256>/Unit Delay' */
  real_T UnitDelay1_DSTATE_f;          /* '<S260>/Unit Delay1' */
  real_T UD_DSTATE_l;                  /* '<S259>/UD' */
  real_T UnitDelay_DSTATE_gp;          /* '<S253>/Unit Delay' */
  real_T UnitDelay1_DSTATE_iw;         /* '<S292>/Unit Delay1' */
  real_T UD_DSTATE_ll;                 /* '<S291>/UD' */
  real_T UnitDelay_DSTATE_l;           /* '<S277>/Unit Delay' */
  real_T UnitDelay1_DSTATE_kw;         /* '<S281>/Unit Delay1' */
  real_T UD_DSTATE_c;                  /* '<S280>/UD' */
  real_T UnitDelay_DSTATE_a;           /* '<S274>/Unit Delay' */
  real_T UnitDelay_DSTATE_mh;          /* '<S41>/Unit Delay' */
  real_T FixPtUnitDelay1_DSTATE_l;     /* '<S50>/FixPt Unit Delay1' */
  real_T UnitDelay_DSTATE_oz;          /* '<S25>/Unit Delay' */
  real_T FixPtUnitDelay1_DSTATE_pc;    /* '<S34>/FixPt Unit Delay1' */
  real_T UD_DSTATE_d;                  /* '<S128>/UD' */
  real_T UD_DSTATE_j;                  /* '<S129>/UD' */
  real_T UD_DSTATE_m;                  /* '<S130>/UD' */
  real_T UD_DSTATE_ic;                 /* '<S131>/UD' */
  real_T UD_DSTATE_ce;                 /* '<S132>/UD' */
  real_T UnitDelay_DSTATE_c;           /* '<S137>/Unit Delay' */
  real_T UnitDelay1_DSTATE_d;          /* '<S137>/Unit Delay1' */
  real_T UnitDelay1_DSTATE_l;          /* '<S371>/Unit Delay1' */
  real_T UnitDelay_DSTATE_p;           /* '<S371>/Unit Delay' */
  real_T UnitDelay3_DSTATE;            /* '<S358>/Unit Delay3' */
  real_T UnitDelay1_DSTATE_e;          /* '<S355>/Unit Delay1' */
  real_T UnitDelay1_DSTATE_j;          /* '<S358>/Unit Delay1' */
  real_T FixPtUnitDelay1_DSTATE_f;     /* '<S375>/FixPt Unit Delay1' */
  real_T DelayInput1_DSTATE_c;         /* '<S378>/Delay Input1' */
  real_T DelayInput1_DSTATE_nr;        /* '<S379>/Delay Input1' */
  real_T DelayInput1_DSTATE_ez;        /* '<S383>/Delay Input1' */
  real_T DelayInput1_DSTATE_nh;        /* '<S384>/Delay Input1' */
  real_T DelayInput1_DSTATE_i;         /* '<S385>/Delay Input1' */
  real_T DelayInput1_DSTATE_cp;        /* '<S380>/Delay Input1' */
  real_T DelayInput1_DSTATE_pd;        /* '<S386>/Delay Input1' */
  real_T DelayInput1_DSTATE_o;         /* '<S389>/Delay Input1' */
  real_T DelayInput1_DSTATE_j;         /* '<S390>/Delay Input1' */
  real_T UnitDelay_DSTATE_gh;          /* '<S142>/Unit Delay' */
  real_T timer;                        /* '<S357>/Reefscape_Chart' */
  int32_T Selector4_DIMS1[2];          /* '<S163>/Selector4' */
  uint8_T FixPtUnitDelay2_DSTATE;      /* '<S305>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_p;    /* '<S322>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_c;    /* '<S315>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_o;    /* '<S50>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_j;    /* '<S34>/FixPt Unit Delay2' */
  uint8_T FixPtUnitDelay2_DSTATE_a;    /* '<S375>/FixPt Unit Delay2' */
  boolean_T DelayInput1_DSTATE_b;      /* '<S53>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_o1;     /* '<S54>/Delay Input1' */
  boolean_T UnitDelay_DSTATE_mph;      /* '<S1>/Unit Delay' */
  boolean_T DelayInput1_DSTATE_po;     /* '<S55>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_be;     /* '<S51>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_op;     /* '<S35>/Delay Input1' */
  boolean_T UnitDelay_DSTATE_ir;       /* '<S22>/Unit Delay' */
  boolean_T DelayInput1_DSTATE_jp;     /* '<S366>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_f;      /* '<S365>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_m;      /* '<S361>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_k;      /* '<S362>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_g;      /* '<S363>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_g2;     /* '<S364>/Delay Input1' */
  boolean_T UnitDelay2_DSTATE;         /* '<S358>/Unit Delay2' */
  boolean_T UnitDelay4_DSTATE;         /* '<S358>/Unit Delay4' */
  boolean_T UnitDelay_DSTATE_ho;       /* '<S355>/Unit Delay' */
  boolean_T DelayInput1_DSTATE_oy;     /* '<S387>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_fx;     /* '<S388>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_o5;     /* '<S381>/Delay Input1' */
  boolean_T DelayInput1_DSTATE_a;      /* '<S382>/Delay Input1' */
  int8_T Accumulator2_PrevResetState;  /* '<S16>/Accumulator2' */
  int8_T Accumulator_PrevResetState;   /* '<S16>/Accumulator' */
  int8_T SwitchCase_ActiveSubsystem;   /* '<S1>/Switch Case' */
  int8_T If_ActiveSubsystem;           /* '<S18>/If' */
  int8_T If_ActiveSubsystem_h;         /* '<S146>/If' */
  int8_T If_ActiveSubsystem_o;         /* '<S149>/If' */
  int8_T If_ActiveSubsystem_d;         /* '<S151>/If' */
  uint8_T is_active_c4_Code_Gen_Model; /* '<S357>/Reefscape_Chart' */
  uint8_T is_Elevator_CoralArm_CoralWheel;/* '<S357>/Reefscape_Chart' */
  uint8_T is_Coral_Eject;              /* '<S357>/Reefscape_Chart' */
  uint8_T is_Actions;                  /* '<S357>/Reefscape_Chart' */
  uint8_T is_Set_Level;                /* '<S357>/Reefscape_Chart' */
  uint8_T is_Coral_Score_Position;     /* '<S357>/Reefscape_Chart' */
  uint8_T is_Algae_Wheels;             /* '<S357>/Reefscape_Chart' */
  uint8_T is_active_c9_Code_Gen_Model; /* '<S17>/Chart' */
  uint8_T is_c9_Code_Gen_Model;        /* '<S17>/Chart' */
  boolean_T icLoad;                    /* '<S74>/MemoryX' */
  boolean_T Set_L1;                    /* '<S357>/Reefscape_Chart' */
  boolean_T Set_L2;                    /* '<S357>/Reefscape_Chart' */
  boolean_T Set_L3;                    /* '<S357>/Reefscape_Chart' */
  boolean_T Set_L4;                    /* '<S357>/Reefscape_Chart' */
  boolean_T EnabledSubsystem_MODE;     /* '<S101>/Enabled Subsystem' */
  boolean_T MeasurementUpdate_MODE;    /* '<S94>/MeasurementUpdate' */
} DW_Code_Gen_Model_T;

/* Invariant block signals (default storage) */
typedef struct {
  const real_T UnaryMinus;             /* '<S25>/Unary Minus' */
  const real_T UnaryMinus_m;           /* '<S41>/Unary Minus' */
  const real_T Cos5;                   /* '<S222>/Cos5' */
  const real_T Sin5;                   /* '<S222>/Sin5' */
  const real_T Cos5_g;                 /* '<S243>/Cos5' */
  const real_T Sin5_m;                 /* '<S243>/Sin5' */
  const real_T Cos5_i;                 /* '<S264>/Cos5' */
  const real_T Sin5_e;                 /* '<S264>/Sin5' */
  const real_T Cos5_b;                 /* '<S285>/Cos5' */
  const real_T Sin5_c;                 /* '<S285>/Sin5' */
  const real_T Atan1;                  /* '<S295>/Atan1' */
  const real_T FR_Tangent_Angle;       /* '<S295>/Add1' */
  const real_T Atan3;                  /* '<S295>/Atan3' */
  const real_T BL_Tangent_Angle;       /* '<S295>/Add2' */
  const real_T Atan4;                  /* '<S295>/Atan4' */
  const real_T BR_Tangent_Angle;       /* '<S295>/Add3' */
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
   * Referenced by: '<S359>/Modulation_Drv'
   */
  real_T Modulation_Drv_tableData[21];

  /* Expression: Steering_Mod_Drv_in
   * Referenced by: '<S359>/Modulation_Drv'
   */
  real_T Modulation_Drv_bp01Data[21];

  /* Expression: Steering_Mod_Str_Rel_out
   * Referenced by: '<S358>/Modulation_Str_Y_Rel'
   */
  real_T Modulation_Str_Y_Rel_tableData[21];

  /* Expression: Steering_Mod_Str_Rel_in
   * Referenced by: '<S358>/Modulation_Str_Y_Rel'
   */
  real_T Modulation_Str_Y_Rel_bp01Data[21];

  /* Expression: Rotation_Local_Inv
   * Referenced by: '<S16>/Constant4'
   */
  real_T Constant4_Value[16];

  /* Pooled Parameter (Expression: Drive_Motor_Control_Scale_Factor)
   * Referenced by:
   *   '<S213>/1-D Lookup Table'
   *   '<S234>/1-D Lookup Table'
   *   '<S255>/1-D Lookup Table'
   *   '<S276>/1-D Lookup Table'
   */
  real_T pooled27[2];

  /* Pooled Parameter (Expression: Drive_Motor_Control_Module_Angle_Error)
   * Referenced by:
   *   '<S213>/1-D Lookup Table'
   *   '<S234>/1-D Lookup Table'
   *   '<S255>/1-D Lookup Table'
   *   '<S276>/1-D Lookup Table'
   */
  real_T pooled28[2];

  /* Pooled Parameter (Expression: Elevator_Height_Lower_Limit_Out)
   * Referenced by:
   *   '<S9>/Range of Motion Protection Limit'
   *   '<S9>/Range of Motion Protection Limit1'
   */
  real_T pooled29[96];

  /* Pooled Parameter (Expression: Elevator_Height_Lower_Limit_Coral_Arm_Input)
   * Referenced by:
   *   '<S9>/Range of Motion Protection Limit'
   *   '<S9>/Range of Motion Protection Limit1'
   */
  real_T pooled30[96];

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
  real_T Algae_Limit_Switch;           /* '<Root>/Algae_Limit_Switch' */
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
                                            * Referenced by: '<S355>/Constant12'
                                            */
extern real_T AT_Target_Tag_11_X;      /* Variable: AT_Target_Tag_11_X
                                        * Referenced by: '<S355>/Constant4'
                                        */
extern real_T AT_Target_Tag_11_Y;      /* Variable: AT_Target_Tag_11_Y
                                        * Referenced by: '<S355>/Constant26'
                                        */
extern real_T AT_Target_Tag_12_Field_Angle;/* Variable: AT_Target_Tag_12_Field_Angle
                                            * Referenced by: '<S355>/Constant11'
                                            */
extern real_T AT_Target_Tag_12_X;      /* Variable: AT_Target_Tag_12_X
                                        * Referenced by: '<S355>/Constant17'
                                        */
extern real_T AT_Target_Tag_12_Y;      /* Variable: AT_Target_Tag_12_Y
                                        * Referenced by: '<S355>/Constant3'
                                        */
extern real_T AT_Target_Tag_13_Field_Angle;/* Variable: AT_Target_Tag_13_Field_Angle
                                            * Referenced by: '<S355>/Constant10'
                                            */
extern real_T AT_Target_Tag_13_X;      /* Variable: AT_Target_Tag_13_X
                                        * Referenced by: '<S355>/Constant18'
                                        */
extern real_T AT_Target_Tag_13_Y;      /* Variable: AT_Target_Tag_13_Y
                                        * Referenced by: '<S355>/Constant21'
                                        */
extern real_T AT_Target_Tag_14_Field_Angle;/* Variable: AT_Target_Tag_14_Field_Angle
                                            * Referenced by: '<S355>/Constant8'
                                            */
extern real_T AT_Target_Tag_14_X;      /* Variable: AT_Target_Tag_14_X
                                        * Referenced by: '<S355>/Constant19'
                                        */
extern real_T AT_Target_Tag_14_Y;      /* Variable: AT_Target_Tag_14_Y
                                        * Referenced by: '<S355>/Constant23'
                                        */
extern real_T AT_Target_Tag_15_Field_Angle;/* Variable: AT_Target_Tag_15_Field_Angle
                                            * Referenced by: '<S355>/Constant7'
                                            */
extern real_T AT_Target_Tag_15_X;      /* Variable: AT_Target_Tag_15_X
                                        * Referenced by: '<S355>/Constant20'
                                        */
extern real_T AT_Target_Tag_15_Y;      /* Variable: AT_Target_Tag_15_Y
                                        * Referenced by: '<S355>/Constant24'
                                        */
extern real_T AT_Target_Tag_16_Field_Angle;/* Variable: AT_Target_Tag_16_Field_Angle
                                            * Referenced by: '<S355>/Constant6'
                                            */
extern real_T AT_Target_Tag_16_X;      /* Variable: AT_Target_Tag_16_X
                                        * Referenced by: '<S355>/Constant22'
                                        */
extern real_T AT_Target_Tag_16_Y;      /* Variable: AT_Target_Tag_16_Y
                                        * Referenced by: '<S355>/Constant25'
                                        */
extern real_T AT_Target_Tag_5_Field_Angle;/* Variable: AT_Target_Tag_5_Field_Angle
                                           * Referenced by: '<S355>/Constant14'
                                           */
extern real_T AT_Target_Tag_5_X;       /* Variable: AT_Target_Tag_5_X
                                        * Referenced by: '<S355>/Constant9'
                                        */
extern real_T AT_Target_Tag_5_Y;       /* Variable: AT_Target_Tag_5_Y
                                        * Referenced by: '<S355>/Constant28'
                                        */
extern real_T AT_Target_Tag_6_Field_Angle;/* Variable: AT_Target_Tag_6_Field_Angle
                                           * Referenced by: '<S355>/Constant13'
                                           */
extern real_T AT_Target_Tag_6_X;       /* Variable: AT_Target_Tag_6_X
                                        * Referenced by: '<S355>/Constant5'
                                        */
extern real_T AT_Target_Tag_6_Y;       /* Variable: AT_Target_Tag_6_Y
                                        * Referenced by: '<S355>/Constant27'
                                        */
extern real_T AT_XY_Control_Gain;      /* Variable: AT_XY_Control_Gain
                                        * Referenced by: '<S359>/Gain2'
                                        */
extern real_T Algae_Eject_Time;        /* Variable: Algae_Eject_Time
                                        * Referenced by: '<S357>/Reefscape_Chart'
                                        */
extern real_T Algae_Hold_DC;           /* Variable: Algae_Hold_DC
                                        * Referenced by: '<S357>/Reefscape_Chart'
                                        */
extern real_T Algae_Pull_In_DC;        /* Variable: Algae_Pull_In_DC
                                        * Referenced by: '<S357>/Reefscape_Chart'
                                        */
extern real_T Algae_Push_Out_DC;       /* Variable: Algae_Push_Out_DC
                                        * Referenced by: '<S357>/Reefscape_Chart'
                                        */
extern real_T Boost_Trigger_Decreasing_Limit;
                                     /* Variable: Boost_Trigger_Decreasing_Limit
                                      * Referenced by: '<S372>/Constant1'
                                      */
extern real_T Boost_Trigger_High_Speed;/* Variable: Boost_Trigger_High_Speed
                                        * Referenced by:
                                        *   '<S368>/Constant'
                                        *   '<S368>/Saturation'
                                        */
extern real_T Boost_Trigger_Increasing_Limit;
                                     /* Variable: Boost_Trigger_Increasing_Limit
                                      * Referenced by: '<S372>/Constant3'
                                      */
extern real_T Boost_Trigger_Low_Speed; /* Variable: Boost_Trigger_Low_Speed
                                        * Referenced by: '<S368>/Constant1'
                                        */
extern real_T Coral_Arm_Angle_Error_Threshold;
                                    /* Variable: Coral_Arm_Angle_Error_Threshold
                                     * Referenced by: '<S357>/Reefscape_Chart'
                                     */
extern real_T Coral_Arm_Angle_L1;      /* Variable: Coral_Arm_Angle_L1
                                        * Referenced by: '<S357>/Reefscape_Chart'
                                        */
extern real_T Coral_Arm_Angle_L2;      /* Variable: Coral_Arm_Angle_L2
                                        * Referenced by: '<S357>/Reefscape_Chart'
                                        */
extern real_T Coral_Arm_Angle_L3;      /* Variable: Coral_Arm_Angle_L3
                                        * Referenced by: '<S357>/Reefscape_Chart'
                                        */
extern real_T Coral_Arm_Angle_L4;      /* Variable: Coral_Arm_Angle_L4
                                        * Referenced by: '<S357>/Reefscape_Chart'
                                        */
extern real_T Coral_Arm_Angle_Neg_Threshold;
                                      /* Variable: Coral_Arm_Angle_Neg_Threshold
                                       * Referenced by: '<S24>/Constant'
                                       */
extern real_T Coral_Arm_Angle_Start;   /* Variable: Coral_Arm_Angle_Start
                                        * Referenced by: '<S357>/Reefscape_Chart'
                                        */
extern real_T Coral_Arm_Angle_Start_Thresh;/* Variable: Coral_Arm_Angle_Start_Thresh
                                            * Referenced by: '<S357>/Reefscape_Chart'
                                            */
extern real_T Coral_Arm_Angle_Up;      /* Variable: Coral_Arm_Angle_Up
                                        * Referenced by: '<S357>/Reefscape_Chart'
                                        */
extern real_T Coral_Arm_DC_Inc_RL;     /* Variable: Coral_Arm_DC_Inc_RL
                                        * Referenced by: '<S25>/Constant3'
                                        */
extern real_T Coral_Arm_Gain_Int;      /* Variable: Coral_Arm_Gain_Int
                                        * Referenced by: '<S26>/Gain2'
                                        */
extern real_T Coral_Arm_Gain_Prop;     /* Variable: Coral_Arm_Gain_Prop
                                        * Referenced by: '<S26>/Gain1'
                                        */
extern real_T Coral_Arm_Int_IC;        /* Variable: Coral_Arm_Int_IC
                                        * Referenced by: '<S26>/Constant3'
                                        */
extern real_T Coral_Arm_Int_LL;        /* Variable: Coral_Arm_Int_LL
                                        * Referenced by: '<S26>/Saturation1'
                                        */
extern real_T Coral_Arm_Int_UL;        /* Variable: Coral_Arm_Int_UL
                                        * Referenced by: '<S26>/Saturation1'
                                        */
extern real_T Coral_Arm_Manual_Gain;   /* Variable: Coral_Arm_Manual_Gain
                                        * Referenced by: '<S357>/Reefscape_Chart'
                                        */
extern real_T Coral_Arm_Neg90_DC;      /* Variable: Coral_Arm_Neg90_DC
                                        * Referenced by: '<S7>/Constant2'
                                        */
extern real_T Coral_Detect_Distance;   /* Variable: Coral_Detect_Distance
                                        * Referenced by: '<S357>/Reefscape_Chart'
                                        */
extern real_T Coral_Eject_Time;        /* Variable: Coral_Eject_Time
                                        * Referenced by: '<S357>/Reefscape_Chart'
                                        */
extern real_T Coral_Motor_DC_Eject;    /* Variable: Coral_Motor_DC_Eject
                                        * Referenced by: '<S357>/Reefscape_Chart'
                                        */
extern real_T Coral_Motor_DC_Hold;     /* Variable: Coral_Motor_DC_Hold
                                        * Referenced by: '<S357>/Reefscape_Chart'
                                        */
extern real_T Coral_Motor_DC_Pickup;   /* Variable: Coral_Motor_DC_Pickup
                                        * Referenced by: '<S357>/Reefscape_Chart'
                                        */
extern real_T Distance_FL_y;           /* Variable: Distance_FL_y
                                        * Referenced by: '<S295>/Constant4'
                                        */
extern real_T Drive_Motor_Control_D;   /* Variable: Drive_Motor_Control_D
                                        * Referenced by:
                                        *   '<S211>/Constant3'
                                        *   '<S232>/Constant3'
                                        *   '<S253>/Constant3'
                                        *   '<S274>/Constant3'
                                        */
extern real_T Drive_Motor_Control_D_FilterCoeff;
                                  /* Variable: Drive_Motor_Control_D_FilterCoeff
                                   * Referenced by:
                                   *   '<S211>/Constant2'
                                   *   '<S232>/Constant2'
                                   *   '<S253>/Constant2'
                                   *   '<S274>/Constant2'
                                   */
extern real_T Drive_Motor_Control_D_LL;/* Variable: Drive_Motor_Control_D_LL
                                        * Referenced by:
                                        *   '<S211>/Saturation'
                                        *   '<S232>/Saturation'
                                        *   '<S253>/Saturation'
                                        *   '<S274>/Saturation'
                                        */
extern real_T Drive_Motor_Control_D_UL;/* Variable: Drive_Motor_Control_D_UL
                                        * Referenced by:
                                        *   '<S211>/Saturation'
                                        *   '<S232>/Saturation'
                                        *   '<S253>/Saturation'
                                        *   '<S274>/Saturation'
                                        */
extern real_T Drive_Motor_Control_FF;  /* Variable: Drive_Motor_Control_FF
                                        * Referenced by:
                                        *   '<S211>/Gain'
                                        *   '<S232>/Gain'
                                        *   '<S253>/Gain'
                                        *   '<S274>/Gain'
                                        */
extern real_T Drive_Motor_Control_I;   /* Variable: Drive_Motor_Control_I
                                        * Referenced by:
                                        *   '<S211>/Gain2'
                                        *   '<S232>/Gain2'
                                        *   '<S253>/Gain2'
                                        *   '<S274>/Gain2'
                                        */
extern real_T Drive_Motor_Control_I_LL;/* Variable: Drive_Motor_Control_I_LL
                                        * Referenced by:
                                        *   '<S211>/Saturation1'
                                        *   '<S232>/Saturation1'
                                        *   '<S253>/Saturation1'
                                        *   '<S274>/Saturation1'
                                        */
extern real_T Drive_Motor_Control_I_UL;/* Variable: Drive_Motor_Control_I_UL
                                        * Referenced by:
                                        *   '<S211>/Saturation1'
                                        *   '<S232>/Saturation1'
                                        *   '<S253>/Saturation1'
                                        *   '<S274>/Saturation1'
                                        */
extern real_T Drive_Motor_Control_P;   /* Variable: Drive_Motor_Control_P
                                        * Referenced by:
                                        *   '<S211>/Gain1'
                                        *   '<S232>/Gain1'
                                        *   '<S253>/Gain1'
                                        *   '<S274>/Gain1'
                                        */
extern real_T Drive_Motor_Control_Sign_Change_Deadband;
                           /* Variable: Drive_Motor_Control_Sign_Change_Deadband
                            * Referenced by:
                            *   '<S216>/Constant'
                            *   '<S237>/Constant'
                            *   '<S258>/Constant'
                            *   '<S279>/Constant'
                            */
extern real_T Elevator_Bottom_DC;      /* Variable: Elevator_Bottom_DC
                                        * Referenced by: '<S9>/Constant7'
                                        */
extern real_T Elevator_DC_Inc_RL;      /* Variable: Elevator_DC_Inc_RL
                                        * Referenced by: '<S41>/Constant3'
                                        */
extern real_T Elevator_Error_Bottom_Disable;
                                      /* Variable: Elevator_Error_Bottom_Disable
                                       * Referenced by: '<S38>/Constant'
                                       */
extern real_T Elevator_Error_Increase; /* Variable: Elevator_Error_Increase
                                        * Referenced by: '<S9>/Constant6'
                                        */
extern real_T Elevator_Gain_Int;       /* Variable: Elevator_Gain_Int
                                        * Referenced by: '<S42>/Gain2'
                                        */
extern real_T Elevator_Gain_Prop;      /* Variable: Elevator_Gain_Prop
                                        * Referenced by: '<S42>/Gain1'
                                        */
extern real_T Elevator_Height_Algae_High;/* Variable: Elevator_Height_Algae_High
                                          * Referenced by: '<S357>/Reefscape_Chart'
                                          */
extern real_T Elevator_Height_Algae_Low;/* Variable: Elevator_Height_Algae_Low
                                         * Referenced by: '<S357>/Reefscape_Chart'
                                         */
extern real_T Elevator_Height_Algae_Score;/* Variable: Elevator_Height_Algae_Score
                                           * Referenced by: '<S357>/Reefscape_Chart'
                                           */
extern real_T Elevator_Height_Bottom;  /* Variable: Elevator_Height_Bottom
                                        * Referenced by: '<S357>/Reefscape_Chart'
                                        */
extern real_T Elevator_Height_Coral_Arm_Low_Thresh;
                               /* Variable: Elevator_Height_Coral_Arm_Low_Thresh
                                * Referenced by: '<S23>/Constant'
                                */
extern real_T Elevator_Height_Error_Threshold;
                                    /* Variable: Elevator_Height_Error_Threshold
                                     * Referenced by:
                                     *   '<S39>/Constant'
                                     *   '<S357>/Reefscape_Chart'
                                     */
extern real_T Elevator_Height_L1;      /* Variable: Elevator_Height_L1
                                        * Referenced by: '<S357>/Reefscape_Chart'
                                        */
extern real_T Elevator_Height_L2;      /* Variable: Elevator_Height_L2
                                        * Referenced by: '<S357>/Reefscape_Chart'
                                        */
extern real_T Elevator_Height_L3;      /* Variable: Elevator_Height_L3
                                        * Referenced by: '<S357>/Reefscape_Chart'
                                        */
extern real_T Elevator_Height_L4;      /* Variable: Elevator_Height_L4
                                        * Referenced by: '<S357>/Reefscape_Chart'
                                        */
extern real_T Elevator_Height_Lower;   /* Variable: Elevator_Height_Lower
                                        * Referenced by: '<S357>/Reefscape_Chart'
                                        */
extern real_T Elevator_Height_Manual_Gain;/* Variable: Elevator_Height_Manual_Gain
                                           * Referenced by: '<S357>/Reefscape_Chart'
                                           */
extern real_T Elevator_Height_PickupLower_Reset;
                                  /* Variable: Elevator_Height_PickupLower_Reset
                                   * Referenced by: '<S10>/Constant2'
                                   */
extern real_T Elevator_Height_Prepare; /* Variable: Elevator_Height_Prepare
                                        * Referenced by: '<S357>/Reefscape_Chart'
                                        */
extern real_T Elevator_Height_Raise;   /* Variable: Elevator_Height_Raise
                                        * Referenced by: '<S357>/Reefscape_Chart'
                                        */
extern real_T Elevator_Height_Top;     /* Variable: Elevator_Height_Top
                                        * Referenced by: '<S357>/Reefscape_Chart'
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
                                        * Referenced by: '<S42>/Constant3'
                                        */
extern real_T Elevator_Int_LL;         /* Variable: Elevator_Int_LL
                                        * Referenced by: '<S42>/Saturation1'
                                        */
extern real_T Elevator_Int_UL;         /* Variable: Elevator_Int_UL
                                        * Referenced by: '<S42>/Saturation1'
                                        */
extern real_T Elevator_LowerPickup_Time;/* Variable: Elevator_LowerPickup_Time
                                         * Referenced by: '<S357>/Reefscape_Chart'
                                         */
extern real_T Elevator_MotorRev_to_Inch;/* Variable: Elevator_MotorRev_to_Inch
                                         * Referenced by: '<S10>/Gain1'
                                         */
extern real_T Elevator_Total_LL;       /* Variable: Elevator_Total_LL
                                        * Referenced by:
                                        *   '<S42>/Constant1'
                                        *   '<S42>/Saturation2'
                                        */
extern real_T Elevator_Total_UL;       /* Variable: Elevator_Total_UL
                                        * Referenced by:
                                        *   '<S42>/Constant'
                                        *   '<S42>/Saturation2'
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
extern real_T KF_Vision_Ambiguity_Thresh;/* Variable: KF_Vision_Ambiguity_Thresh
                                          * Referenced by: '<S14>/Constant'
                                          */
extern real_T Odometry_IC_X;           /* Variable: Odometry_IC_X
                                        * Referenced by: '<S1>/Constant'
                                        */
extern real_T Odometry_IC_Y;           /* Variable: Odometry_IC_Y
                                        * Referenced by: '<S1>/Constant1'
                                        */
extern real_T Odometry_Reset_IC;       /* Variable: Odometry_Reset_IC
                                        * Referenced by: '<S16>/Constant'
                                        */
extern real_T Odometry_X_Y_TEAR;       /* Variable: Odometry_X_Y_TEAR
                                        * Referenced by: '<S137>/Constant'
                                        */
extern real_T Spline_Last_Pose_Distance_to_Velocity_Gain;
                         /* Variable: Spline_Last_Pose_Distance_to_Velocity_Gain
                          * Referenced by: '<S196>/Constant2'
                          */
extern real_T Spline_Max_Centripital_Acceleration;
                                /* Variable: Spline_Max_Centripital_Acceleration
                                 * Referenced by: '<S196>/Constant1'
                                 */
extern real_T Spline_Pose_Num_Before_End_Reduce_Speed;
                            /* Variable: Spline_Pose_Num_Before_End_Reduce_Speed
                             * Referenced by: '<S143>/Constant'
                             */
extern real_T Spline_Stop_Radius;      /* Variable: Spline_Stop_Radius
                                        * Referenced by: '<S156>/Constant'
                                        */
extern real_T Spline_Velocity_Multiplier_TEST;
                                    /* Variable: Spline_Velocity_Multiplier_TEST
                                     * Referenced by: '<S196>/Constant3'
                                     */
extern real_T Steering_Absolute_Cmd_Approach_Zero_Error_Thresh;
                   /* Variable: Steering_Absolute_Cmd_Approach_Zero_Error_Thresh
                    * Referenced by: '<S307>/Constant5'
                    */
extern real_T Steering_Absolute_Cmd_Approach_Zero_Final_Thresh;
                   /* Variable: Steering_Absolute_Cmd_Approach_Zero_Final_Thresh
                    * Referenced by: '<S307>/Constant6'
                    */
extern real_T Steering_Absolute_Cmd_NonZero_Error_Thresh;
                         /* Variable: Steering_Absolute_Cmd_NonZero_Error_Thresh
                          * Referenced by: '<S307>/Constant9'
                          */
extern real_T Steering_Absolute_Cmd_NonZero_Final_Scale_Factor;
                   /* Variable: Steering_Absolute_Cmd_NonZero_Final_Scale_Factor
                    * Referenced by: '<S307>/Constant10'
                    */
extern real_T Steering_Absolute_Cmd_Rate_Limit_Dec;
                               /* Variable: Steering_Absolute_Cmd_Rate_Limit_Dec
                                * Referenced by: '<S307>/Constant1'
                                */
extern real_T Steering_Absolute_Cmd_Rate_Limit_Inc;
                               /* Variable: Steering_Absolute_Cmd_Rate_Limit_Inc
                                * Referenced by: '<S307>/Constant3'
                                */
extern real_T Steering_Heading_Control_D;/* Variable: Steering_Heading_Control_D
                                          * Referenced by: '<S324>/Constant3'
                                          */
extern real_T Steering_Heading_Control_D_FilterCoeff;
                             /* Variable: Steering_Heading_Control_D_FilterCoeff
                              * Referenced by: '<S324>/Constant2'
                              */
extern real_T Steering_Heading_Control_D_LL;
                                      /* Variable: Steering_Heading_Control_D_LL
                                       * Referenced by: '<S324>/Saturation'
                                       */
extern real_T Steering_Heading_Control_D_UL;
                                      /* Variable: Steering_Heading_Control_D_UL
                                       * Referenced by: '<S324>/Saturation'
                                       */
extern real_T Steering_Heading_Control_Deadzone;
                                  /* Variable: Steering_Heading_Control_Deadzone
                                   * Referenced by: '<S323>/Constant'
                                   */
extern real_T Steering_Heading_Control_I;/* Variable: Steering_Heading_Control_I
                                          * Referenced by: '<S324>/Gain2'
                                          */
extern real_T Steering_Heading_Control_I_LL;
                                      /* Variable: Steering_Heading_Control_I_LL
                                       * Referenced by: '<S324>/Saturation1'
                                       */
extern real_T Steering_Heading_Control_I_UL;
                                      /* Variable: Steering_Heading_Control_I_UL
                                       * Referenced by: '<S324>/Saturation1'
                                       */
extern real_T Steering_Heading_Control_P;/* Variable: Steering_Heading_Control_P
                                          * Referenced by: '<S324>/Gain1'
                                          */
extern real_T Steering_Heading_Control_Total_LL;
                                  /* Variable: Steering_Heading_Control_Total_LL
                                   * Referenced by:
                                   *   '<S324>/Constant1'
                                   *   '<S324>/Saturation2'
                                   */
extern real_T Steering_Heading_Control_Total_UL;
                                  /* Variable: Steering_Heading_Control_Total_UL
                                   * Referenced by:
                                   *   '<S324>/Constant'
                                   *   '<S324>/Saturation2'
                                   */
extern real_T Steering_Motor_Control_D;/* Variable: Steering_Motor_Control_D
                                        * Referenced by:
                                        *   '<S214>/Constant3'
                                        *   '<S235>/Constant3'
                                        *   '<S256>/Constant3'
                                        *   '<S277>/Constant3'
                                        */
extern real_T Steering_Motor_Control_D_FilterCoeff;
                               /* Variable: Steering_Motor_Control_D_FilterCoeff
                                * Referenced by:
                                *   '<S214>/Constant2'
                                *   '<S235>/Constant2'
                                *   '<S256>/Constant2'
                                *   '<S277>/Constant2'
                                */
extern real_T Steering_Motor_Control_D_LL;/* Variable: Steering_Motor_Control_D_LL
                                           * Referenced by:
                                           *   '<S214>/Saturation'
                                           *   '<S235>/Saturation'
                                           *   '<S256>/Saturation'
                                           *   '<S277>/Saturation'
                                           */
extern real_T Steering_Motor_Control_D_UL;/* Variable: Steering_Motor_Control_D_UL
                                           * Referenced by:
                                           *   '<S214>/Saturation'
                                           *   '<S235>/Saturation'
                                           *   '<S256>/Saturation'
                                           *   '<S277>/Saturation'
                                           */
extern real_T Steering_Motor_Control_I;/* Variable: Steering_Motor_Control_I
                                        * Referenced by:
                                        *   '<S214>/Gain2'
                                        *   '<S235>/Gain2'
                                        *   '<S256>/Gain2'
                                        *   '<S277>/Gain2'
                                        */
extern real_T Steering_Motor_Control_I_LL;/* Variable: Steering_Motor_Control_I_LL
                                           * Referenced by:
                                           *   '<S214>/Saturation1'
                                           *   '<S235>/Saturation1'
                                           *   '<S256>/Saturation1'
                                           *   '<S277>/Saturation1'
                                           */
extern real_T Steering_Motor_Control_I_UL;/* Variable: Steering_Motor_Control_I_UL
                                           * Referenced by:
                                           *   '<S214>/Saturation1'
                                           *   '<S235>/Saturation1'
                                           *   '<S256>/Saturation1'
                                           *   '<S277>/Saturation1'
                                           */
extern real_T Steering_Motor_Control_P;/* Variable: Steering_Motor_Control_P
                                        * Referenced by:
                                        *   '<S214>/Gain1'
                                        *   '<S235>/Gain1'
                                        *   '<S256>/Gain1'
                                        *   '<S277>/Gain1'
                                        */
extern real_T Steering_Relative_Cmd_Approach_Zero_Error_Thresh;
                   /* Variable: Steering_Relative_Cmd_Approach_Zero_Error_Thresh
                    * Referenced by: '<S306>/Constant5'
                    */
extern real_T Steering_Relative_Cmd_Approach_Zero_Final_Thresh;
                   /* Variable: Steering_Relative_Cmd_Approach_Zero_Final_Thresh
                    * Referenced by: '<S306>/Constant6'
                    */
extern real_T Steering_Relative_Cmd_NonZero_Error_Thresh;
                         /* Variable: Steering_Relative_Cmd_NonZero_Error_Thresh
                          * Referenced by: '<S306>/Constant9'
                          */
extern real_T Steering_Relative_Cmd_NonZero_Final_Scale_Factor;
                   /* Variable: Steering_Relative_Cmd_NonZero_Final_Scale_Factor
                    * Referenced by: '<S306>/Constant10'
                    */
extern real_T Steering_Relative_Cmd_Rate_Limit_Dec;
                               /* Variable: Steering_Relative_Cmd_Rate_Limit_Dec
                                * Referenced by: '<S306>/Constant1'
                                */
extern real_T Steering_Relative_Cmd_Rate_Limit_Inc;
                               /* Variable: Steering_Relative_Cmd_Rate_Limit_Inc
                                * Referenced by: '<S306>/Constant3'
                                */
extern real_T Steering_Relative_Gain;  /* Variable: Steering_Relative_Gain
                                        * Referenced by: '<S358>/Constant'
                                        */
extern real_T Steering_Twist_Gain;     /* Variable: Steering_Twist_Gain
                                        * Referenced by: '<S358>/Constant1'
                                        */
extern real_T TEST_Swerve_Mode_Override_Flag;
                                     /* Variable: TEST_Swerve_Mode_Override_Flag
                                      * Referenced by: '<S21>/Constant5'
                                      */
extern real_T TEST_Swerve_Mode_Steering;/* Variable: TEST_Swerve_Mode_Steering
                                         * Referenced by: '<S21>/Constant8'
                                         */
extern real_T TEST_Swerve_Mode_Translation;/* Variable: TEST_Swerve_Mode_Translation
                                            * Referenced by: '<S21>/Constant7'
                                            */
extern real_T Translation_Speed_Approach_Zero_Error_Thresh;
                       /* Variable: Translation_Speed_Approach_Zero_Error_Thresh
                        * Referenced by: '<S294>/Constant5'
                        */
extern real_T Translation_Speed_Approach_Zero_Final_Thresh;
                       /* Variable: Translation_Speed_Approach_Zero_Final_Thresh
                        * Referenced by: '<S294>/Constant6'
                        */
extern real_T Translation_Speed_NonZero_Error_Thresh;
                             /* Variable: Translation_Speed_NonZero_Error_Thresh
                              * Referenced by: '<S294>/Constant9'
                              */
extern real_T Translation_Speed_NonZero_Final_Scale_Factor;
                       /* Variable: Translation_Speed_NonZero_Final_Scale_Factor
                        * Referenced by: '<S294>/Constant10'
                        */
extern real_T Translation_Speed_Rate_Limit_Dec;
                                   /* Variable: Translation_Speed_Rate_Limit_Dec
                                    * Referenced by: '<S294>/Constant1'
                                    */
extern real_T Translation_Speed_Rate_Limit_Inc;
                                   /* Variable: Translation_Speed_Rate_Limit_Inc
                                    * Referenced by: '<S294>/Constant3'
                                    */
extern real_T Translation_Twist_Gain;  /* Variable: Translation_Twist_Gain
                                        * Referenced by: '<S359>/Gain'
                                        */
extern real_T Twist_Deadzone_neg;      /* Variable: Twist_Deadzone_neg
                                        * Referenced by:
                                        *   '<S358>/Dead Zone'
                                        *   '<S359>/Dead Zone'
                                        */
extern real_T Twist_Deadzone_pos;      /* Variable: Twist_Deadzone_pos
                                        * Referenced by:
                                        *   '<S358>/Dead Zone'
                                        *   '<S359>/Dead Zone'
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
 * Block '<S33>/Data Type Duplicate' : Unused code path elimination
 * Block '<S33>/Data Type Propagation' : Unused code path elimination
 * Block '<S34>/FixPt Data Type Duplicate1' : Unused code path elimination
 * Block '<S36>/Data Type Duplicate' : Unused code path elimination
 * Block '<S36>/Data Type Propagation' : Unused code path elimination
 * Block '<S37>/Data Type Duplicate' : Unused code path elimination
 * Block '<S37>/Data Type Propagation' : Unused code path elimination
 * Block '<S27>/Data Type Duplicate' : Unused code path elimination
 * Block '<S27>/Data Type Propagation' : Unused code path elimination
 * Block '<S49>/Data Type Duplicate' : Unused code path elimination
 * Block '<S49>/Data Type Propagation' : Unused code path elimination
 * Block '<S50>/FixPt Data Type Duplicate1' : Unused code path elimination
 * Block '<S52>/Data Type Duplicate' : Unused code path elimination
 * Block '<S52>/Data Type Propagation' : Unused code path elimination
 * Block '<S43>/Data Type Duplicate' : Unused code path elimination
 * Block '<S43>/Data Type Propagation' : Unused code path elimination
 * Block '<S69>/Compare' : Unused code path elimination
 * Block '<S69>/Constant' : Unused code path elimination
 * Block '<S13>/Unit Delay' : Unused code path elimination
 * Block '<S117>/Data Type Duplicate' : Unused code path elimination
 * Block '<S118>/Data Type Duplicate' : Unused code path elimination
 * Block '<S119>/Conversion' : Unused code path elimination
 * Block '<S119>/Data Type Duplicate' : Unused code path elimination
 * Block '<S120>/Data Type Duplicate' : Unused code path elimination
 * Block '<S78>/Data Type Duplicate' : Unused code path elimination
 * Block '<S79>/Data Type Duplicate' : Unused code path elimination
 * Block '<S80>/Data Type Duplicate' : Unused code path elimination
 * Block '<S81>/Data Type Duplicate' : Unused code path elimination
 * Block '<S82>/Data Type Duplicate' : Unused code path elimination
 * Block '<S83>/Data Type Duplicate' : Unused code path elimination
 * Block '<S84>/Data Type Duplicate' : Unused code path elimination
 * Block '<S85>/Conversion' : Unused code path elimination
 * Block '<S85>/Data Type Duplicate' : Unused code path elimination
 * Block '<S86>/Data Type Duplicate' : Unused code path elimination
 * Block '<S87>/Data Type Duplicate' : Unused code path elimination
 * Block '<S88>/Data Type Duplicate' : Unused code path elimination
 * Block '<S90>/Data Type Duplicate' : Unused code path elimination
 * Block '<S91>/Data Type Duplicate' : Unused code path elimination
 * Block '<S74>/G' : Unused code path elimination
 * Block '<S74>/H' : Unused code path elimination
 * Block '<S74>/N' : Unused code path elimination
 * Block '<S74>/P0' : Unused code path elimination
 * Block '<S74>/Q' : Unused code path elimination
 * Block '<S74>/R' : Unused code path elimination
 * Block '<S106>/CheckSignalProperties' : Unused code path elimination
 * Block '<S115>/CheckSignalProperties' : Unused code path elimination
 * Block '<S116>/CheckSignalProperties' : Unused code path elimination
 * Block '<S18>/Gain' : Unused code path elimination
 * Block '<S18>/Gain1' : Unused code path elimination
 * Block '<S18>/Scope' : Unused code path elimination
 * Block '<S155>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S159>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S165>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S199>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S219>/Data Type Duplicate' : Unused code path elimination
 * Block '<S219>/Data Type Propagation' : Unused code path elimination
 * Block '<S211>/Scope' : Unused code path elimination
 * Block '<S213>/Scope' : Unused code path elimination
 * Block '<S230>/Data Type Duplicate' : Unused code path elimination
 * Block '<S230>/Data Type Propagation' : Unused code path elimination
 * Block '<S214>/Scope' : Unused code path elimination
 * Block '<S240>/Data Type Duplicate' : Unused code path elimination
 * Block '<S240>/Data Type Propagation' : Unused code path elimination
 * Block '<S232>/Scope' : Unused code path elimination
 * Block '<S234>/Scope' : Unused code path elimination
 * Block '<S251>/Data Type Duplicate' : Unused code path elimination
 * Block '<S251>/Data Type Propagation' : Unused code path elimination
 * Block '<S235>/Scope' : Unused code path elimination
 * Block '<S261>/Data Type Duplicate' : Unused code path elimination
 * Block '<S261>/Data Type Propagation' : Unused code path elimination
 * Block '<S253>/Scope' : Unused code path elimination
 * Block '<S255>/Scope' : Unused code path elimination
 * Block '<S272>/Data Type Duplicate' : Unused code path elimination
 * Block '<S272>/Data Type Propagation' : Unused code path elimination
 * Block '<S256>/Scope' : Unused code path elimination
 * Block '<S282>/Data Type Duplicate' : Unused code path elimination
 * Block '<S282>/Data Type Propagation' : Unused code path elimination
 * Block '<S274>/Scope' : Unused code path elimination
 * Block '<S276>/Scope' : Unused code path elimination
 * Block '<S293>/Data Type Duplicate' : Unused code path elimination
 * Block '<S293>/Data Type Propagation' : Unused code path elimination
 * Block '<S277>/Scope' : Unused code path elimination
 * Block '<S304>/Data Type Duplicate' : Unused code path elimination
 * Block '<S304>/Data Type Propagation' : Unused code path elimination
 * Block '<S305>/FixPt Data Type Duplicate1' : Unused code path elimination
 * Block '<S314>/Data Type Duplicate' : Unused code path elimination
 * Block '<S314>/Data Type Propagation' : Unused code path elimination
 * Block '<S315>/FixPt Data Type Duplicate1' : Unused code path elimination
 * Block '<S321>/Data Type Duplicate' : Unused code path elimination
 * Block '<S321>/Data Type Propagation' : Unused code path elimination
 * Block '<S322>/FixPt Data Type Duplicate1' : Unused code path elimination
 * Block '<S328>/Data Type Duplicate' : Unused code path elimination
 * Block '<S328>/Data Type Propagation' : Unused code path elimination
 * Block '<S324>/Scope' : Unused code path elimination
 * Block '<S374>/Data Type Duplicate' : Unused code path elimination
 * Block '<S374>/Data Type Propagation' : Unused code path elimination
 * Block '<S375>/FixPt Data Type Duplicate1' : Unused code path elimination
 * Block '<S117>/Conversion' : Eliminate redundant data type conversion
 * Block '<S118>/Conversion' : Eliminate redundant data type conversion
 * Block '<S120>/Conversion' : Eliminate redundant data type conversion
 * Block '<S74>/DataTypeConversionEnable' : Eliminate redundant data type conversion
 * Block '<S90>/Conversion' : Eliminate redundant data type conversion
 * Block '<S94>/Reshape' : Reshape block reduction
 * Block '<S74>/ReshapeX0' : Reshape block reduction
 * Block '<S74>/Reshapeu' : Reshape block reduction
 * Block '<S74>/Reshapexhat' : Reshape block reduction
 * Block '<S14>/Signal Copy' : Eliminate redundant signal conversion block
 * Block '<S14>/Signal Copy1' : Eliminate redundant signal conversion block
 * Block '<S16>/Signal Copy' : Eliminate redundant signal conversion block
 * Block '<S16>/Signal Copy1' : Eliminate redundant signal conversion block
 * Block '<S16>/Signal Copy2' : Eliminate redundant signal conversion block
 * Block '<S16>/Signal Copy3' : Eliminate redundant signal conversion block
 * Block '<S195>/Signal Copy' : Eliminate redundant signal conversion block
 * Block '<S21>/Signal Copy1' : Eliminate redundant signal conversion block
 * Block '<S21>/Signal Copy2' : Eliminate redundant signal conversion block
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
 * '<S15>'  : 'Code_Gen_Model/RoboRio Controls/Merge'
 * '<S16>'  : 'Code_Gen_Model/RoboRio Controls/Odometry'
 * '<S17>'  : 'Code_Gen_Model/RoboRio Controls/Previous GameState'
 * '<S18>'  : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following'
 * '<S19>'  : 'Code_Gen_Model/RoboRio Controls/Steer_Module_Offset_Adjustments'
 * '<S20>'  : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive'
 * '<S21>'  : 'Code_Gen_Model/RoboRio Controls/Teleop'
 * '<S22>'  : 'Code_Gen_Model/RoboRio Controls/Test'
 * '<S23>'  : 'Code_Gen_Model/RoboRio Controls/Coral Arm Motor Control/Compare To Constant'
 * '<S24>'  : 'Code_Gen_Model/RoboRio Controls/Coral Arm Motor Control/Compare To Constant1'
 * '<S25>'  : 'Code_Gen_Model/RoboRio Controls/Coral Arm Motor Control/Complex Rate Limit'
 * '<S26>'  : 'Code_Gen_Model/RoboRio Controls/Coral Arm Motor Control/PI and Integral Enable'
 * '<S27>'  : 'Code_Gen_Model/RoboRio Controls/Coral Arm Motor Control/Saturation Dynamic'
 * '<S28>'  : 'Code_Gen_Model/RoboRio Controls/Coral Arm Motor Control/Complex Rate Limit/Compare To Zero'
 * '<S29>'  : 'Code_Gen_Model/RoboRio Controls/Coral Arm Motor Control/Complex Rate Limit/Compare To Zero1'
 * '<S30>'  : 'Code_Gen_Model/RoboRio Controls/Coral Arm Motor Control/Complex Rate Limit/Compare To Zero2'
 * '<S31>'  : 'Code_Gen_Model/RoboRio Controls/Coral Arm Motor Control/Complex Rate Limit/Compare To Zero3'
 * '<S32>'  : 'Code_Gen_Model/RoboRio Controls/Coral Arm Motor Control/Complex Rate Limit/Discrete Rate Limiter'
 * '<S33>'  : 'Code_Gen_Model/RoboRio Controls/Coral Arm Motor Control/Complex Rate Limit/Discrete Rate Limiter/Saturation Dynamic'
 * '<S34>'  : 'Code_Gen_Model/RoboRio Controls/Coral Arm Motor Control/Complex Rate Limit/Discrete Rate Limiter/Unit Delay External IC'
 * '<S35>'  : 'Code_Gen_Model/RoboRio Controls/Coral Arm Motor Control/PI and Integral Enable/Detect Increase'
 * '<S36>'  : 'Code_Gen_Model/RoboRio Controls/Coral Arm Motor Control/PI and Integral Enable/Saturation Dynamic'
 * '<S37>'  : 'Code_Gen_Model/RoboRio Controls/Coral Arm Motor Control/PI and Integral Enable/Saturation Dynamic1'
 * '<S38>'  : 'Code_Gen_Model/RoboRio Controls/Elevator Motor Control/Compare To Constant'
 * '<S39>'  : 'Code_Gen_Model/RoboRio Controls/Elevator Motor Control/Compare To Constant2'
 * '<S40>'  : 'Code_Gen_Model/RoboRio Controls/Elevator Motor Control/Compare To Zero'
 * '<S41>'  : 'Code_Gen_Model/RoboRio Controls/Elevator Motor Control/Complex Rate Limit'
 * '<S42>'  : 'Code_Gen_Model/RoboRio Controls/Elevator Motor Control/PI and Integral Enable'
 * '<S43>'  : 'Code_Gen_Model/RoboRio Controls/Elevator Motor Control/Saturation Dynamic'
 * '<S44>'  : 'Code_Gen_Model/RoboRio Controls/Elevator Motor Control/Complex Rate Limit/Compare To Zero'
 * '<S45>'  : 'Code_Gen_Model/RoboRio Controls/Elevator Motor Control/Complex Rate Limit/Compare To Zero1'
 * '<S46>'  : 'Code_Gen_Model/RoboRio Controls/Elevator Motor Control/Complex Rate Limit/Compare To Zero2'
 * '<S47>'  : 'Code_Gen_Model/RoboRio Controls/Elevator Motor Control/Complex Rate Limit/Compare To Zero3'
 * '<S48>'  : 'Code_Gen_Model/RoboRio Controls/Elevator Motor Control/Complex Rate Limit/Discrete Rate Limiter'
 * '<S49>'  : 'Code_Gen_Model/RoboRio Controls/Elevator Motor Control/Complex Rate Limit/Discrete Rate Limiter/Saturation Dynamic'
 * '<S50>'  : 'Code_Gen_Model/RoboRio Controls/Elevator Motor Control/Complex Rate Limit/Discrete Rate Limiter/Unit Delay External IC'
 * '<S51>'  : 'Code_Gen_Model/RoboRio Controls/Elevator Motor Control/PI and Integral Enable/Detect Increase'
 * '<S52>'  : 'Code_Gen_Model/RoboRio Controls/Elevator Motor Control/PI and Integral Enable/Saturation Dynamic'
 * '<S53>'  : 'Code_Gen_Model/RoboRio Controls/Elevator_Height_Pre_Processing/Detect Decrease'
 * '<S54>'  : 'Code_Gen_Model/RoboRio Controls/Elevator_Height_Pre_Processing/Detect Decrease1'
 * '<S55>'  : 'Code_Gen_Model/RoboRio Controls/Elevator_Height_Pre_Processing/Detect Increase'
 * '<S56>'  : 'Code_Gen_Model/RoboRio Controls/Gyro_Angles/Degrees to Radians'
 * '<S57>'  : 'Code_Gen_Model/RoboRio Controls/Gyro_Angles/Detect Increase'
 * '<S58>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Constant'
 * '<S59>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Constant2'
 * '<S60>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Constant3'
 * '<S61>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Constant4'
 * '<S62>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Constant5'
 * '<S63>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Constant7'
 * '<S64>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero11'
 * '<S65>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero12'
 * '<S66>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero13'
 * '<S67>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero14'
 * '<S68>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero15'
 * '<S69>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero16'
 * '<S70>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Compare To Zero17'
 * '<S71>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Detect Increase'
 * '<S72>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Detect Increase1'
 * '<S73>'  : 'Code_Gen_Model/RoboRio Controls/Human_Input_Pre_Processing/Detect Increase2'
 * '<S74>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter'
 * '<S75>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CalculatePL'
 * '<S76>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CalculateYhat'
 * '<S77>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CovarianceOutputConfigurator'
 * '<S78>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionA'
 * '<S79>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionB'
 * '<S80>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionC'
 * '<S81>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionD'
 * '<S82>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionG'
 * '<S83>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionH'
 * '<S84>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionN'
 * '<S85>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionP'
 * '<S86>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionP0'
 * '<S87>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionQ'
 * '<S88>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionR'
 * '<S89>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionReset'
 * '<S90>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionX'
 * '<S91>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionX0'
 * '<S92>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/DataTypeConversionu'
 * '<S93>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/MemoryP'
 * '<S94>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/Observer'
 * '<S95>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/ReducedQRN'
 * '<S96>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/Reset'
 * '<S97>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/Reshapeyhat'
 * '<S98>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/ScalarExpansionP0'
 * '<S99>'  : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/ScalarExpansionQ'
 * '<S100>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/ScalarExpansionR'
 * '<S101>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/UseCurrentEstimator'
 * '<S102>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkA'
 * '<S103>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkB'
 * '<S104>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkC'
 * '<S105>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkD'
 * '<S106>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkEnable'
 * '<S107>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkG'
 * '<S108>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkH'
 * '<S109>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkN'
 * '<S110>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkP0'
 * '<S111>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkQ'
 * '<S112>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkR'
 * '<S113>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkReset'
 * '<S114>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checkX0'
 * '<S115>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checku'
 * '<S116>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/checky'
 * '<S117>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CalculatePL/DataTypeConversionL'
 * '<S118>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CalculatePL/DataTypeConversionM'
 * '<S119>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CalculatePL/DataTypeConversionP'
 * '<S120>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CalculatePL/DataTypeConversionZ'
 * '<S121>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CalculatePL/Ground'
 * '<S122>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CalculateYhat/Ground'
 * '<S123>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CovarianceOutputConfigurator/decideOutput'
 * '<S124>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/CovarianceOutputConfigurator/decideOutput/SqrtUsedFcn'
 * '<S125>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/Observer/MeasurementUpdate'
 * '<S126>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/ReducedQRN/Ground'
 * '<S127>' : 'Code_Gen_Model/RoboRio Controls/Kalman_Filter/Kalman Filter/UseCurrentEstimator/Enabled Subsystem'
 * '<S128>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Difference'
 * '<S129>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Difference1'
 * '<S130>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Difference3'
 * '<S131>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Difference4'
 * '<S132>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Difference5'
 * '<S133>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Polar to Cartesian'
 * '<S134>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Polar to Cartesian1'
 * '<S135>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Polar to Cartesian2'
 * '<S136>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Polar to Cartesian3'
 * '<S137>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Tear for validation testing'
 * '<S138>' : 'Code_Gen_Model/RoboRio Controls/Odometry/Tear for validation testing/Compare To Zero'
 * '<S139>' : 'Code_Gen_Model/RoboRio Controls/Previous GameState/Chart'
 * '<S140>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Pass Through'
 * '<S141>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled'
 * '<S142>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses'
 * '<S143>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Find_Targets'
 * '<S144>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Steering_and_Drive_Commands'
 * '<S145>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/If Action Subsystem'
 * '<S146>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification'
 * '<S147>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning'
 * '<S148>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Escape_Auto_Driving'
 * '<S149>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid'
 * '<S150>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Catch-all if not the last point and not in the circle'
 * '<S151>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Circle_Check_Valid'
 * '<S152>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Increment_If_Rectangle_Check'
 * '<S153>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Circle_Check_Valid/Increment_Search'
 * '<S154>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Circle_Check_Valid/Is_Last_Point'
 * '<S155>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Circle_Check_Valid/Increment_Search/Increment Real World'
 * '<S156>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Circle_Check_Valid/Is_Last_Point/Compare To Constant'
 * '<S157>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Circle_Check_Valid/Is_Last_Point/Robot_Is_At_Destination'
 * '<S158>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Circle_Check_Valid/Is_Last_Point/Straight_Line_Path_To_End'
 * '<S159>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Increment_If_Rectangle_Check/Increment Real World'
 * '<S160>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Increment_If_Rectangle_Check/Subsystem Reference'
 * '<S161>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Increment_If_Rectangle_Check/Subsystem Reference/Compare To Constant'
 * '<S162>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Index_Modification/Robot_Index_Is_Valid/Increment_If_Rectangle_Check/Subsystem Reference/Compare To Constant1'
 * '<S163>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Make_Knots'
 * '<S164>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning'
 * '<S165>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Make_Knots/Decrement Real World'
 * '<S166>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Make_Knots/Find_Control_Pose'
 * '<S167>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Make_Knots/Find_Control_Pose1'
 * '<S168>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop'
 * '<S169>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Compare To Constant'
 * '<S170>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve'
 * '<S171>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Find_Point_Coefficients'
 * '<S172>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve'
 * '<S173>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Acc'
 * '<S174>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Pos'
 * '<S175>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Vel'
 * '<S176>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Curvature'
 * '<S177>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_U_And_Powers'
 * '<S178>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Acc/Subsystem Reference'
 * '<S179>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Acc/ddA'
 * '<S180>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Acc/ddB'
 * '<S181>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Acc/ddC'
 * '<S182>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Pos/A'
 * '<S183>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Pos/B'
 * '<S184>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Pos/C'
 * '<S185>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Pos/Subsystem Reference'
 * '<S186>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Vel/Subsystem Reference'
 * '<S187>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Vel/dA'
 * '<S188>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Vel/dB'
 * '<S189>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Catmull_Rom_Vel/dC'
 * '<S190>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Autonomously_Navigate_Poses/Make_Knots_and_Path_Planning/Path_Planning/Sampling_Loop/Sample_Catmull_Rom_Pos_And_Curve/Sample_Curve/Find_Curvature/MATLAB Function'
 * '<S191>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Find_Targets/Distance Along Curve'
 * '<S192>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Find_Targets/Find closest index to curve'
 * '<S193>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Find_Targets/Find first index that meets distance target'
 * '<S194>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Find_Targets/Find velocity and heading'
 * '<S195>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Find_Targets/Heading'
 * '<S196>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Find_Targets/Velocity'
 * '<S197>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Find_Targets/Find velocity and heading/Dynamic Lookup Tables'
 * '<S198>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Find_Targets/Find velocity and heading/Latch'
 * '<S199>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Find_Targets/Find velocity and heading/Dynamic Lookup Tables/Decrement'
 * '<S200>' : 'Code_Gen_Model/RoboRio Controls/Spline_Path_Following/Spline Path Following Enabled/Steering_and_Drive_Commands/Translation Angle'
 * '<S201>' : 'Code_Gen_Model/RoboRio Controls/Steer_Module_Offset_Adjustments/Angle Modulus'
 * '<S202>' : 'Code_Gen_Model/RoboRio Controls/Steer_Module_Offset_Adjustments/Angle Modulus1'
 * '<S203>' : 'Code_Gen_Model/RoboRio Controls/Steer_Module_Offset_Adjustments/Angle Modulus2'
 * '<S204>' : 'Code_Gen_Model/RoboRio Controls/Steer_Module_Offset_Adjustments/Angle Modulus3'
 * '<S205>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module'
 * '<S206>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1'
 * '<S207>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2'
 * '<S208>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3'
 * '<S209>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle'
 * '<S210>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Direction Change Drive Reduction Factor'
 * '<S211>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Drive Feed Forward plus PID'
 * '<S212>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Optimize'
 * '<S213>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Steering Module Error Drive Reduction Factor'
 * '<S214>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Steering with Angle Error Modulus PID'
 * '<S215>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Tangential_Velocity_To_RPM'
 * '<S216>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Direction Change Drive Reduction Factor/Compare To Constant'
 * '<S217>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Drive Feed Forward plus PID/Difference'
 * '<S218>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Drive Feed Forward plus PID/Low_Pass_Filter'
 * '<S219>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Drive Feed Forward plus PID/Saturation Dynamic'
 * '<S220>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Optimize/Compare To Constant'
 * '<S221>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Optimize/Minus1'
 * '<S222>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Optimize/RotateBy'
 * '<S223>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Optimize/Minus1/RotateBy'
 * '<S224>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Optimize/Minus1/RotateBy/Compare To Constant'
 * '<S225>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Optimize/RotateBy/Compare To Constant'
 * '<S226>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Steering Module Error Drive Reduction Factor/Angle Modulus to plus or minus pi over two'
 * '<S227>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Steering with Angle Error Modulus PID/Angle Modulus'
 * '<S228>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Steering with Angle Error Modulus PID/Difference'
 * '<S229>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Steering with Angle Error Modulus PID/Low_Pass_Filter'
 * '<S230>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module/Steering with Angle Error Modulus PID/Saturation Dynamic'
 * '<S231>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Direction Change Drive Reduction Factor'
 * '<S232>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Drive Feed Forward plus PID'
 * '<S233>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Optimize'
 * '<S234>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Steering Module Error Drive Reduction Factor'
 * '<S235>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Steering with Angle Error Modulus PID'
 * '<S236>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Tangential_Velocity_To_RPM'
 * '<S237>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Direction Change Drive Reduction Factor/Compare To Constant'
 * '<S238>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Drive Feed Forward plus PID/Difference'
 * '<S239>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Drive Feed Forward plus PID/Low_Pass_Filter'
 * '<S240>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Drive Feed Forward plus PID/Saturation Dynamic'
 * '<S241>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Optimize/Compare To Constant'
 * '<S242>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Optimize/Minus1'
 * '<S243>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Optimize/RotateBy'
 * '<S244>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Optimize/Minus1/RotateBy'
 * '<S245>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Optimize/Minus1/RotateBy/Compare To Constant'
 * '<S246>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Optimize/RotateBy/Compare To Constant'
 * '<S247>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Steering Module Error Drive Reduction Factor/Angle Modulus to plus or minus pi over two'
 * '<S248>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Steering with Angle Error Modulus PID/Angle Modulus'
 * '<S249>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Steering with Angle Error Modulus PID/Difference'
 * '<S250>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Steering with Angle Error Modulus PID/Low_Pass_Filter'
 * '<S251>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module1/Steering with Angle Error Modulus PID/Saturation Dynamic'
 * '<S252>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Direction Change Drive Reduction Factor'
 * '<S253>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Drive Feed Forward plus PID'
 * '<S254>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Optimize'
 * '<S255>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Steering Module Error Drive Reduction Factor'
 * '<S256>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Steering with Angle Error Modulus PID'
 * '<S257>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Tangential_Velocity_To_RPM'
 * '<S258>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Direction Change Drive Reduction Factor/Compare To Constant'
 * '<S259>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Drive Feed Forward plus PID/Difference'
 * '<S260>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Drive Feed Forward plus PID/Low_Pass_Filter'
 * '<S261>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Drive Feed Forward plus PID/Saturation Dynamic'
 * '<S262>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Optimize/Compare To Constant'
 * '<S263>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Optimize/Minus1'
 * '<S264>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Optimize/RotateBy'
 * '<S265>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Optimize/Minus1/RotateBy'
 * '<S266>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Optimize/Minus1/RotateBy/Compare To Constant'
 * '<S267>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Optimize/RotateBy/Compare To Constant'
 * '<S268>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Steering Module Error Drive Reduction Factor/Angle Modulus to plus or minus pi over two'
 * '<S269>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Steering with Angle Error Modulus PID/Angle Modulus'
 * '<S270>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Steering with Angle Error Modulus PID/Difference'
 * '<S271>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Steering with Angle Error Modulus PID/Low_Pass_Filter'
 * '<S272>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module2/Steering with Angle Error Modulus PID/Saturation Dynamic'
 * '<S273>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Direction Change Drive Reduction Factor'
 * '<S274>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Drive Feed Forward plus PID'
 * '<S275>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Optimize'
 * '<S276>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Steering Module Error Drive Reduction Factor'
 * '<S277>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Steering with Angle Error Modulus PID'
 * '<S278>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Tangential_Velocity_To_RPM'
 * '<S279>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Direction Change Drive Reduction Factor/Compare To Constant'
 * '<S280>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Drive Feed Forward plus PID/Difference'
 * '<S281>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Drive Feed Forward plus PID/Low_Pass_Filter'
 * '<S282>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Drive Feed Forward plus PID/Saturation Dynamic'
 * '<S283>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Optimize/Compare To Constant'
 * '<S284>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Optimize/Minus1'
 * '<S285>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Optimize/RotateBy'
 * '<S286>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Optimize/Minus1/RotateBy'
 * '<S287>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Optimize/Minus1/RotateBy/Compare To Constant'
 * '<S288>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Optimize/RotateBy/Compare To Constant'
 * '<S289>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Steering Module Error Drive Reduction Factor/Angle Modulus to plus or minus pi over two'
 * '<S290>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Steering with Angle Error Modulus PID/Angle Modulus'
 * '<S291>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Steering with Angle Error Modulus PID/Difference'
 * '<S292>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Steering with Angle Error Modulus PID/Low_Pass_Filter'
 * '<S293>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Swerve_Drive_Module3/Steering with Angle Error Modulus PID/Saturation Dynamic'
 * '<S294>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Complex Rate Limit'
 * '<S295>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Initialize Function'
 * '<S296>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command'
 * '<S297>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Translation Steering Command'
 * '<S298>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator'
 * '<S299>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Complex Rate Limit/Compare To Zero'
 * '<S300>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Complex Rate Limit/Compare To Zero1'
 * '<S301>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Complex Rate Limit/Compare To Zero2'
 * '<S302>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Complex Rate Limit/Compare To Zero3'
 * '<S303>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Complex Rate Limit/Discrete Rate Limiter'
 * '<S304>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Complex Rate Limit/Discrete Rate Limiter/Saturation Dynamic'
 * '<S305>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Complex Rate Limit/Discrete Rate Limiter/Unit Delay External IC'
 * '<S306>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit'
 * '<S307>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit1'
 * '<S308>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Steering Heading PID'
 * '<S309>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit/Compare To Zero'
 * '<S310>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit/Compare To Zero1'
 * '<S311>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit/Compare To Zero2'
 * '<S312>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit/Compare To Zero3'
 * '<S313>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit/Discrete Rate Limiter'
 * '<S314>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit/Discrete Rate Limiter/Saturation Dynamic'
 * '<S315>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit/Discrete Rate Limiter/Unit Delay External IC'
 * '<S316>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit1/Compare To Zero'
 * '<S317>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit1/Compare To Zero1'
 * '<S318>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit1/Compare To Zero2'
 * '<S319>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit1/Compare To Zero3'
 * '<S320>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit1/Discrete Rate Limiter'
 * '<S321>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit1/Discrete Rate Limiter/Saturation Dynamic'
 * '<S322>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Complex Rate Limit1/Discrete Rate Limiter/Unit Delay External IC'
 * '<S323>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Steering Heading PID/Compare To Constant'
 * '<S324>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Steering Heading PID/PID with Error Wrapping'
 * '<S325>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Steering Heading PID/PID with Error Wrapping/Angle Modulus'
 * '<S326>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Steering Heading PID/PID with Error Wrapping/Difference'
 * '<S327>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Steering Heading PID/PID with Error Wrapping/Low_Pass_Filter'
 * '<S328>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Steering Localized Command/Steering Heading PID/PID with Error Wrapping/Saturation Dynamic'
 * '<S329>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Translation Steering Command/Angle Modulus'
 * '<S330>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Reduce Speeds for Maximum Speed Limit'
 * '<S331>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add'
 * '<S332>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add1'
 * '<S333>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add2'
 * '<S334>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add3'
 * '<S335>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add/Angle_Saver'
 * '<S336>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add/Cartesian to Polar'
 * '<S337>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add/Polar to Cartesian'
 * '<S338>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add/Polar to Cartesian1'
 * '<S339>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add/Angle_Saver/Compare To Zero1'
 * '<S340>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add1/Angle_Saver'
 * '<S341>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add1/Cartesian to Polar'
 * '<S342>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add1/Polar to Cartesian'
 * '<S343>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add1/Polar to Cartesian1'
 * '<S344>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add1/Angle_Saver/Compare To Zero1'
 * '<S345>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add2/Angle_Saver'
 * '<S346>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add2/Cartesian to Polar'
 * '<S347>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add2/Polar to Cartesian'
 * '<S348>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add2/Polar to Cartesian1'
 * '<S349>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add2/Angle_Saver/Compare To Zero1'
 * '<S350>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add3/Angle_Saver'
 * '<S351>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add3/Cartesian to Polar'
 * '<S352>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add3/Polar to Cartesian'
 * '<S353>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add3/Polar to Cartesian1'
 * '<S354>' : 'Code_Gen_Model/RoboRio Controls/Swerve_Drive/Wheel Module Speed and Angle/Wheel_Angle_Calculator/Vector_Add3/Angle_Saver/Compare To Zero1'
 * '<S355>' : 'Code_Gen_Model/RoboRio Controls/Teleop/April Tag Errors'
 * '<S356>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive'
 * '<S357>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Reefscape Teleop'
 * '<S358>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering'
 * '<S359>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation'
 * '<S360>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering/Compare To Zero2'
 * '<S361>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering/Detect Increase'
 * '<S362>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering/Detect Increase1'
 * '<S363>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering/Detect Increase2'
 * '<S364>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering/Detect Increase3'
 * '<S365>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering/Detect Increase4'
 * '<S366>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering/Detect Increase5'
 * '<S367>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Steering/Previous game state was not Teleop'
 * '<S368>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Boost and Rate Limit'
 * '<S369>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Compare To Zero'
 * '<S370>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Compare To Zero1'
 * '<S371>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Latch Outputs when Both Inputs Zero'
 * '<S372>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Boost and Rate Limit/Simple Rate Limit'
 * '<S373>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Boost and Rate Limit/Simple Rate Limit/Discrete Rate Limiter'
 * '<S374>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Boost and Rate Limit/Simple Rate Limit/Discrete Rate Limiter/Saturation Dynamic'
 * '<S375>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Boost and Rate Limit/Simple Rate Limit/Discrete Rate Limiter/Unit Delay External IC'
 * '<S376>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Latch Outputs when Both Inputs Zero/Compare To Zero'
 * '<S377>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Joystick_Input_To_Swerve_Drive/Robot_Desired_Translation/Latch Outputs when Both Inputs Zero/Compare To Zero1'
 * '<S378>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Reefscape Teleop/Detect Increase'
 * '<S379>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Reefscape Teleop/Detect Increase1'
 * '<S380>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Reefscape Teleop/Detect Increase10'
 * '<S381>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Reefscape Teleop/Detect Increase11'
 * '<S382>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Reefscape Teleop/Detect Increase12'
 * '<S383>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Reefscape Teleop/Detect Increase2'
 * '<S384>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Reefscape Teleop/Detect Increase3'
 * '<S385>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Reefscape Teleop/Detect Increase4'
 * '<S386>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Reefscape Teleop/Detect Increase5'
 * '<S387>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Reefscape Teleop/Detect Increase6'
 * '<S388>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Reefscape Teleop/Detect Increase7'
 * '<S389>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Reefscape Teleop/Detect Increase8'
 * '<S390>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Reefscape Teleop/Detect Increase9'
 * '<S391>' : 'Code_Gen_Model/RoboRio Controls/Teleop/Reefscape Teleop/Reefscape_Chart'
 */
#endif                                 /* RTW_HEADER_Code_Gen_Model_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
