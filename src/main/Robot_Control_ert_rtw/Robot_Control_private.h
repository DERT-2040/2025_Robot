/*
 * Sponsored License - for use in support of a program or activity
 * sponsored by MathWorks.  Not for government, commercial or other
 * non-sponsored organizational use.
 *
 * File: Robot_Control_private.h
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

#ifndef RTW_HEADER_Robot_Control_private_h_
#define RTW_HEADER_Robot_Control_private_h_
#include "rtwtypes.h"
#include "Robot_Control.h"
#include "Robot_Control_types.h"

extern const real_T rtCP_pooled_lxShGashPgga[75];
extern const real_T rtCP_pooled_wu034Lhr0L9p[75];
extern const real_T rtCP_pooled_mZW03emckTZz[4];
extern const real_T rtCP_pooled_Por1fGzmcW36[4];
extern const real_T rtCP_pooled_INwGxsZyA2TK[4];
extern const real_T rtCP_pooled_ekLlM9ItYyIs[800];
extern const real_T rtCP_pooled_XAcq3ZhpCYaD[20];
extern const real_T rtCP_pooled_MtklTCiS35sn[21];
extern const real_T rtCP_pooled_pwqtSNbEs40J[21];
extern const real_T rtCP_pooled_mVxns4hAKRNf[21];
extern const real_T rtCP_pooled_wsH2dcaSihoN[21];
extern const real_T rtCP_pooled_O4lHSDP8vPjo[2];
extern const real_T rtCP_pooled_Ha5Ct2ozjCBu[2];
extern const real_T rtCP_pooled_t9tZpQ8c0gbe[96];
extern const real_T rtCP_pooled_HaC23w2UWSfW[96];
extern const real_T rtCP_pooled_Tps4jvEFJTpD[3];
extern const real_T rtCP_pooled_SFmlQjB2JDuy[3];
extern const real_T rtCP_pooled_d2U5tflpDNIm[2];
extern const real_T rtCP_pooled_5yrI5sG4rd1T[2];

#define rtCP_RangeofMotionProtectionLim rtCP_pooled_lxShGashPgga /* Expression: Coral_Arm_Lower_Limit_Out
                                                                  * Referenced by: '<S8>/Range of Motion Protection Limit'
                                                                  */
#define rtCP_RangeofMotionProtectionL_j rtCP_pooled_wu034Lhr0L9p /* Expression: Coral_Arm_Lower_Limit_Elevator_Height_Input
                                                                  * Referenced by: '<S8>/Range of Motion Protection Limit'
                                                                  */
#define rtCP_CaptureRadius_tableData   rtCP_pooled_mZW03emckTZz  /* Expression: Spline_Capture_Radius
                                                                  * Referenced by: '<S183>/Capture Radius'
                                                                  */
#define rtCP_CaptureRadius_bp01Data    rtCP_pooled_Por1fGzmcW36  /* Expression: Spline_Velocity_Axis
                                                                  * Referenced by: '<S183>/Capture Radius'
                                                                  */
#define rtCP_LookaheadDistance_tableDat rtCP_pooled_INwGxsZyA2TK /* Expression: Spline_Lookahead_Dist
                                                                  * Referenced by: '<S183>/Lookahead Distance'
                                                                  */
#define rtCP_LookaheadDistance_bp01Data rtCP_pooled_Por1fGzmcW36 /* Expression: Spline_Velocity_Axis
                                                                  * Referenced by: '<S183>/Lookahead Distance'
                                                                  */
#define rtCP_Constant_Value_k          rtCP_pooled_ekLlM9ItYyIs  /* Expression: All_Paths_Ref_Poses
                                                                  * Referenced by: '<S25>/Constant'
                                                                  */
#define rtCP_uDLookupTable_tableData   rtCP_pooled_XAcq3ZhpCYaD  /* Expression: All_Paths_Num_Poses
                                                                  * Referenced by: '<S25>/1-D Lookup Table'
                                                                  */
#define rtCP_Modulation_Drv_tableData  rtCP_pooled_MtklTCiS35sn  /* Expression: Steering_Mod_Drv_out
                                                                  * Referenced by: '<S416>/Modulation_Drv'
                                                                  */
#define rtCP_Modulation_Drv_bp01Data   rtCP_pooled_pwqtSNbEs40J  /* Expression: Steering_Mod_Drv_in
                                                                  * Referenced by: '<S416>/Modulation_Drv'
                                                                  */
#define rtCP_Modulation_Str_Y_Rel_table rtCP_pooled_mVxns4hAKRNf /* Expression: Steering_Mod_Str_Rel_out
                                                                  * Referenced by: '<S415>/Modulation_Str_Y_Rel'
                                                                  */
#define rtCP_Modulation_Str_Y_Rel_bp01D rtCP_pooled_wsH2dcaSihoN /* Expression: Steering_Mod_Str_Rel_in
                                                                  * Referenced by: '<S415>/Modulation_Str_Y_Rel'
                                                                  */
#define rtCP_uDLookupTable_tableData_g rtCP_pooled_O4lHSDP8vPjo  /* Expression: Drive_Motor_Control_Scale_Factor
                                                                  * Referenced by: '<S314>/1-D Lookup Table'
                                                                  */
#define rtCP_uDLookupTable_bp01Data    rtCP_pooled_Ha5Ct2ozjCBu  /* Expression: Drive_Motor_Control_Module_Angle_Error
                                                                  * Referenced by: '<S314>/1-D Lookup Table'
                                                                  */
#define rtCP_uDLookupTable_tableData_j rtCP_pooled_O4lHSDP8vPjo  /* Expression: Drive_Motor_Control_Scale_Factor
                                                                  * Referenced by: '<S251>/1-D Lookup Table'
                                                                  */
#define rtCP_uDLookupTable_bp01Data_h  rtCP_pooled_Ha5Ct2ozjCBu  /* Expression: Drive_Motor_Control_Module_Angle_Error
                                                                  * Referenced by: '<S251>/1-D Lookup Table'
                                                                  */
#define rtCP_uDLookupTable_tableData_gs rtCP_pooled_O4lHSDP8vPjo /* Expression: Drive_Motor_Control_Scale_Factor
                                                                  * Referenced by: '<S272>/1-D Lookup Table'
                                                                  */
#define rtCP_uDLookupTable_bp01Data_p  rtCP_pooled_Ha5Ct2ozjCBu  /* Expression: Drive_Motor_Control_Module_Angle_Error
                                                                  * Referenced by: '<S272>/1-D Lookup Table'
                                                                  */
#define rtCP_uDLookupTable_tableData_h rtCP_pooled_O4lHSDP8vPjo  /* Expression: Drive_Motor_Control_Scale_Factor
                                                                  * Referenced by: '<S293>/1-D Lookup Table'
                                                                  */
#define rtCP_uDLookupTable_bp01Data_j  rtCP_pooled_Ha5Ct2ozjCBu  /* Expression: Drive_Motor_Control_Module_Angle_Error
                                                                  * Referenced by: '<S293>/1-D Lookup Table'
                                                                  */
#define rtCP_RangeofMotionProtection_jh rtCP_pooled_t9tZpQ8c0gbe /* Expression: Elevator_Height_Lower_Limit_Out
                                                                  * Referenced by: '<S12>/Range of Motion Protection Limit1'
                                                                  */
#define rtCP_RangeofMotionProtectionL_a rtCP_pooled_HaC23w2UWSfW /* Expression: Elevator_Height_Lower_Limit_Coral_Arm_Input
                                                                  * Referenced by: '<S12>/Range of Motion Protection Limit1'
                                                                  */
#define rtCP_RangeofMotionProtectionL_d rtCP_pooled_t9tZpQ8c0gbe /* Expression: Elevator_Height_Lower_Limit_Out
                                                                  * Referenced by: '<S12>/Range of Motion Protection Limit'
                                                                  */
#define rtCP_RangeofMotionProtection_aw rtCP_pooled_HaC23w2UWSfW /* Expression: Elevator_Height_Lower_Limit_Coral_Arm_Input
                                                                  * Referenced by: '<S12>/Range of Motion Protection Limit'
                                                                  */
#define rtCP_uDLookupTable_tableData_l rtCP_pooled_Tps4jvEFJTpD  /* Expression: Coral_Arm_DC_Upper_Limit_Out
                                                                  * Referenced by: '<S8>/1-D Lookup Table'
                                                                  */
#define rtCP_uDLookupTable_bp01Data_o  rtCP_pooled_SFmlQjB2JDuy  /* Expression: Coral_Arm_DC_Upper_Limit_Angle_In
                                                                  * Referenced by: '<S8>/1-D Lookup Table'
                                                                  */
#define rtCP_uDLookupTable1_tableData  rtCP_pooled_d2U5tflpDNIm  /* Expression: Coral_Arm_DC_Lower_Limit_Out
                                                                  * Referenced by: '<S8>/1-D Lookup Table1'
                                                                  */
#define rtCP_uDLookupTable1_bp01Data   rtCP_pooled_5yrI5sG4rd1T  /* Expression: Coral_Arm_DC_Lower_Limit_Angle_In
                                                                  * Referenced by: '<S8>/1-D Lookup Table1'
                                                                  */

extern void Robot_Control_Debounce_Init(boolean_T *rty_Out);
extern void Robot_Control_Debounce(boolean_T rtu_In, boolean_T rtu_Init_Cond,
  real_T rtu_Time_True, real_T rtu_Time_False, boolean_T *rty_Out,
  DW_Debounce_Robot_Control_T *localDW);
extern void Robot_Cont_Reefscape_Chart_Init(real_T *rty_State_ID, real_T
  *rty_Elevator_Height_Desired, real_T *rty_Coral_Arm_Angle_Desired, real_T
  *rty_Coral_Wheel_DC, real_T *rty_Algae_Wheel_Outside_DC, real_T
  *rty_Algae_Wheel_Inside_DC, boolean_T *rty_Elevator_LowerPickup_Reset,
  boolean_T *rty_Coral_Pickup_Lower_Wait_Sta, uint16_T *rty_Set_Coral_Level,
  uint8_T *rty_Set_Algae_Level, boolean_T *rty_Coral_Score, uint8_T
  *rty_Desired_Pipeline);
extern void Robot_Con_Reefscape_Chart_Reset(real_T *rty_State_ID, real_T
  *rty_Elevator_Height_Desired, real_T *rty_Coral_Arm_Angle_Desired, real_T
  *rty_Coral_Wheel_DC, real_T *rty_Algae_Wheel_Outside_DC, real_T
  *rty_Algae_Wheel_Inside_DC, boolean_T *rty_Elevator_LowerPickup_Reset,
  boolean_T *rty_Coral_Pickup_Lower_Wait_Sta, uint16_T *rty_Set_Coral_Level,
  uint8_T *rty_Set_Algae_Level, boolean_T *rty_Coral_Score, uint8_T
  *rty_Desired_Pipeline, DW_Reefscape_Chart_Robot_Cont_T *localDW);
extern void Robot_Control_Reefscape_Chart(uint8_T rtu_GameState, boolean_T
  rtu_Gamepad_B1_A, boolean_T rtu_Gamepad_B2_B, boolean_T rtu_Gamepad_B3_X,
  boolean_T rtu_Gamepad_B4_Y, boolean_T rtu_Gamepad_Start, boolean_T
  rtu_Gamepad_Back, boolean_T rtu_Gamepad_RB, boolean_T rtu_Gamepad_LT,
  boolean_T rtu_Gamepad_RT, boolean_T rtu_Gamepad_POV_Up, boolean_T
  rtu_Gamepad_POV_Down, boolean_T rtu_Gamepad_POV_Left, boolean_T
  rtu_Gamepad_POV_Right, real_T rtu_Gamepad_Stick_Left_Y, real_T
  rtu_Gamepad_Stick_Right_Y, real_T rtu_Elevator_Height_Measured, real_T
  rtu_Coral_Arm_Angle_Measured, real_T rtu_Coral_TOF_Distance, boolean_T
  rtu_Coral_Limit_Switch, boolean_T rtu_Algae_Limit_Switch, boolean_T
  rtu_AT_On_Target, real_T *rty_State_ID, real_T *rty_Elevator_Height_Desired,
  real_T *rty_Coral_Arm_Angle_Desired, real_T *rty_Coral_Wheel_DC, real_T
  *rty_Algae_Wheel_Outside_DC, real_T *rty_Algae_Wheel_Inside_DC, boolean_T
  *rty_Elevator_LowerPickup_Reset, boolean_T *rty_Coral_Pickup_Lower_Wait_Sta,
  uint16_T *rty_Set_Coral_Level, uint8_T *rty_Set_Algae_Level, boolean_T
  *rty_Coral_Score, uint8_T *rty_Desired_Pipeline,
  DW_Reefscape_Chart_Robot_Cont_T *localDW);

#endif                                 /* RTW_HEADER_Robot_Control_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
