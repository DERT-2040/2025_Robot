/*
 * Sponsored License - for use in support of a program or activity
 * sponsored by MathWorks.  Not for government, commercial or other
 * non-sponsored organizational use.
 *
 * File: Code_Gen_Model.c
 *
 * Code generated for Simulink model 'Code_Gen_Model'.
 *
 * Model version                  : 2.224
 * Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
 * C/C++ source code generated on : Sun Jan 26 14:01:58 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM 7
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Code_Gen_Model.h"
#include "rtwtypes.h"
#include <math.h>
#include "rt_nonfinite.h"
#include "Code_Gen_Model_private.h"
#include "rt_defines.h"
#include <float.h>

/* Named constants for Chart: '<S14>/Chart' */
#define Code_Gen_Model_IN_Disabled     ((uint8_T)1U)
#define Code_Gen_Model_IN_Not_Disabled ((uint8_T)2U)

/* Exported block parameters */
real_T AT_Target_Tag_11_Field_Angle = 2.0944;/* Variable: AT_Target_Tag_11_Field_Angle
                                              * Referenced by: '<S320>/Constant12'
                                              */
real_T AT_Target_Tag_11_X = 12.5143;   /* Variable: AT_Target_Tag_11_X
                                        * Referenced by: '<S320>/Constant4'
                                        */
real_T AT_Target_Tag_11_Y = 2.6574;    /* Variable: AT_Target_Tag_11_Y
                                        * Referenced by: '<S320>/Constant26'
                                        */
real_T AT_Target_Tag_12_Field_Angle = -2.0944;/* Variable: AT_Target_Tag_12_Field_Angle
                                               * Referenced by: '<S320>/Constant11'
                                               */
real_T AT_Target_Tag_12_X = 12.5143;   /* Variable: AT_Target_Tag_12_X
                                        * Referenced by: '<S320>/Constant17'
                                        */
real_T AT_Target_Tag_12_Y = 5.5542;    /* Variable: AT_Target_Tag_12_Y
                                        * Referenced by: '<S320>/Constant3'
                                        */
real_T AT_Target_Tag_13_Field_Angle = 0.0;/* Variable: AT_Target_Tag_13_Field_Angle
                                           * Referenced by: '<S320>/Constant10'
                                           */
real_T AT_Target_Tag_13_X = 10.001;    /* Variable: AT_Target_Tag_13_X
                                        * Referenced by: '<S320>/Constant18'
                                        */
real_T AT_Target_Tag_13_Y = 4.1051;    /* Variable: AT_Target_Tag_13_Y
                                        * Referenced by: '<S320>/Constant21'
                                        */
real_T AT_Target_Tag_14_Field_Angle = 0.0;/* Variable: AT_Target_Tag_14_Field_Angle
                                           * Referenced by: '<S320>/Constant8'
                                           */
real_T AT_Target_Tag_14_X = 6.54;      /* Variable: AT_Target_Tag_14_X
                                        * Referenced by: '<S320>/Constant19'
                                        */
real_T AT_Target_Tag_14_Y = 4.1051;    /* Variable: AT_Target_Tag_14_Y
                                        * Referenced by: '<S320>/Constant23'
                                        */
real_T AT_Target_Tag_15_Field_Angle = 2.0944;/* Variable: AT_Target_Tag_15_Field_Angle
                                              * Referenced by: '<S320>/Constant7'
                                              */
real_T AT_Target_Tag_15_X = 4.0317;    /* Variable: AT_Target_Tag_15_X
                                        * Referenced by: '<S320>/Constant20'
                                        */
real_T AT_Target_Tag_15_Y = 5.5542;    /* Variable: AT_Target_Tag_15_Y
                                        * Referenced by: '<S320>/Constant24'
                                        */
real_T AT_Target_Tag_16_Field_Angle = 4.1888;/* Variable: AT_Target_Tag_16_Field_Angle
                                              * Referenced by: '<S320>/Constant6'
                                              */
real_T AT_Target_Tag_16_X = 4.0317;    /* Variable: AT_Target_Tag_16_X
                                        * Referenced by: '<S320>/Constant22'
                                        */
real_T AT_Target_Tag_16_Y = 2.6574;    /* Variable: AT_Target_Tag_16_Y
                                        * Referenced by: '<S320>/Constant25'
                                        */
real_T AT_Target_Tag_5_Field_Angle = 1.5708;/* Variable: AT_Target_Tag_5_Field_Angle
                                             * Referenced by: '<S320>/Constant14'
                                             */
real_T AT_Target_Tag_5_X = 14.7008;    /* Variable: AT_Target_Tag_5_X
                                        * Referenced by: '<S320>/Constant9'
                                        */
real_T AT_Target_Tag_5_Y = 7.2898;     /* Variable: AT_Target_Tag_5_Y
                                        * Referenced by: '<S320>/Constant28'
                                        */
real_T AT_Target_Tag_6_Field_Angle = 4.7124;/* Variable: AT_Target_Tag_6_Field_Angle
                                             * Referenced by: '<S320>/Constant13'
                                             */
real_T AT_Target_Tag_6_X = 1.8415;     /* Variable: AT_Target_Tag_6_X
                                        * Referenced by: '<S320>/Constant5'
                                        */
real_T AT_Target_Tag_6_Y = 7.2898;     /* Variable: AT_Target_Tag_6_Y
                                        * Referenced by: '<S320>/Constant27'
                                        */
real_T AT_XY_Control_Gain = 1.5;       /* Variable: AT_XY_Control_Gain
                                        * Referenced by: '<S324>/Gain2'
                                        */
real_T Boost_Trigger_Decreasing_Limit = -0.28;
                                     /* Variable: Boost_Trigger_Decreasing_Limit
                                      * Referenced by: '<S337>/Constant1'
                                      */
real_T Boost_Trigger_High_Speed = 5.0; /* Variable: Boost_Trigger_High_Speed
                                        * Referenced by:
                                        *   '<S333>/Constant'
                                        *   '<S333>/Saturation'
                                        */
real_T Boost_Trigger_Increasing_Limit = 3.5;
                                     /* Variable: Boost_Trigger_Increasing_Limit
                                      * Referenced by: '<S337>/Constant3'
                                      */
real_T Boost_Trigger_Low_Speed = 1.5;  /* Variable: Boost_Trigger_Low_Speed
                                        * Referenced by: '<S333>/Constant1'
                                        */
real_T Distance_FL_y = 0.18732;        /* Variable: Distance_FL_y
                                        * Referenced by: '<S260>/Constant4'
                                        */
real_T Drive_Motor_Control_D = 0.0001; /* Variable: Drive_Motor_Control_D
                                        * Referenced by:
                                        *   '<S176>/Constant3'
                                        *   '<S197>/Constant3'
                                        *   '<S218>/Constant3'
                                        *   '<S239>/Constant3'
                                        */
real_T Drive_Motor_Control_D_FilterCoeff = 0.22223;
                                  /* Variable: Drive_Motor_Control_D_FilterCoeff
                                   * Referenced by:
                                   *   '<S176>/Constant2'
                                   *   '<S197>/Constant2'
                                   *   '<S218>/Constant2'
                                   *   '<S239>/Constant2'
                                   */
real_T Drive_Motor_Control_D_LL = -0.2;/* Variable: Drive_Motor_Control_D_LL
                                        * Referenced by:
                                        *   '<S176>/Saturation'
                                        *   '<S197>/Saturation'
                                        *   '<S218>/Saturation'
                                        *   '<S239>/Saturation'
                                        */
real_T Drive_Motor_Control_D_UL = 0.2; /* Variable: Drive_Motor_Control_D_UL
                                        * Referenced by:
                                        *   '<S176>/Saturation'
                                        *   '<S197>/Saturation'
                                        *   '<S218>/Saturation'
                                        *   '<S239>/Saturation'
                                        */
real_T Drive_Motor_Control_FF = 0.00016129;/* Variable: Drive_Motor_Control_FF
                                            * Referenced by:
                                            *   '<S176>/Gain'
                                            *   '<S197>/Gain'
                                            *   '<S218>/Gain'
                                            *   '<S239>/Gain'
                                            */
real_T Drive_Motor_Control_I = 0.0;    /* Variable: Drive_Motor_Control_I
                                        * Referenced by:
                                        *   '<S176>/Gain2'
                                        *   '<S197>/Gain2'
                                        *   '<S218>/Gain2'
                                        *   '<S239>/Gain2'
                                        */
real_T Drive_Motor_Control_I_LL = 0.0; /* Variable: Drive_Motor_Control_I_LL
                                        * Referenced by:
                                        *   '<S176>/Saturation1'
                                        *   '<S197>/Saturation1'
                                        *   '<S218>/Saturation1'
                                        *   '<S239>/Saturation1'
                                        */
real_T Drive_Motor_Control_I_UL = 0.0; /* Variable: Drive_Motor_Control_I_UL
                                        * Referenced by:
                                        *   '<S176>/Saturation1'
                                        *   '<S197>/Saturation1'
                                        *   '<S218>/Saturation1'
                                        *   '<S239>/Saturation1'
                                        */
real_T Drive_Motor_Control_P = 5.0E-6; /* Variable: Drive_Motor_Control_P
                                        * Referenced by:
                                        *   '<S176>/Gain1'
                                        *   '<S197>/Gain1'
                                        *   '<S218>/Gain1'
                                        *   '<S239>/Gain1'
                                        */
real_T Drive_Motor_Control_Sign_Change_Deadband = 7000.0;
                           /* Variable: Drive_Motor_Control_Sign_Change_Deadband
                            * Referenced by:
                            *   '<S181>/Constant'
                            *   '<S202>/Constant'
                            *   '<S223>/Constant'
                            *   '<S244>/Constant'
                            */
real_T Elevator_Gain_Int = 0.001;      /* Variable: Elevator_Gain_Int
                                        * Referenced by: '<S20>/Gain2'
                                        */
real_T Elevator_Gain_Prop = 0.05;      /* Variable: Elevator_Gain_Prop
                                        * Referenced by: '<S20>/Gain1'
                                        */
real_T Elevator_Height_Bottom = 0.0;   /* Variable: Elevator_Height_Bottom
                                        * Referenced by: '<S322>/Constant6'
                                        */
real_T Elevator_Height_L1 = 13.0;      /* Variable: Elevator_Height_L1
                                        * Referenced by: '<S322>/Constant'
                                        */
real_T Elevator_Height_L2 = 5.2;       /* Variable: Elevator_Height_L2
                                        * Referenced by: '<S322>/Constant2'
                                        */
real_T Elevator_Height_L3 = 13.1;      /* Variable: Elevator_Height_L3
                                        * Referenced by: '<S322>/Constant1'
                                        */
real_T Elevator_Height_L4 = 26.12;     /* Variable: Elevator_Height_L4
                                        * Referenced by: '<S322>/Constant3'
                                        */
real_T Elevator_Height_Pickup = 7.0;   /* Variable: Elevator_Height_Pickup
                                        * Referenced by: '<S322>/Constant4'
                                        */
real_T Elevator_Height_RL_Dec = -0.08; /* Variable: Elevator_Height_RL_Dec
                                        * Referenced by: '<S349>/Constant1'
                                        */
real_T Elevator_Height_RL_Inc = 0.08;  /* Variable: Elevator_Height_RL_Inc
                                        * Referenced by: '<S349>/Constant3'
                                        */
real_T Elevator_Hold_at_Top_DC = 0.05; /* Variable: Elevator_Hold_at_Top_DC
                                        * Referenced by: '<S6>/Constant1'
                                        */
real_T Elevator_Int_IC = 0.0;          /* Variable: Elevator_Int_IC
                                        * Referenced by: '<S20>/Constant3'
                                        */
real_T Elevator_Int_LL = -0.1;         /* Variable: Elevator_Int_LL
                                        * Referenced by: '<S20>/Saturation1'
                                        */
real_T Elevator_Int_UL = 0.1;          /* Variable: Elevator_Int_UL
                                        * Referenced by: '<S20>/Saturation1'
                                        */
real_T Elevator_MotorRev_to_Inch = 0.31416;/* Variable: Elevator_MotorRev_to_Inch
                                            * Referenced by: '<S7>/Gain1'
                                            */
real_T Elevator_Total_LL = -0.2;       /* Variable: Elevator_Total_LL
                                        * Referenced by:
                                        *   '<S20>/Constant1'
                                        *   '<S20>/Saturation2'
                                        */
real_T Elevator_Total_UL = 0.2;        /* Variable: Elevator_Total_UL
                                        * Referenced by:
                                        *   '<S20>/Constant'
                                        *   '<S20>/Saturation2'
                                        */
real_T Gyro_Calibration_Reset_Degree = 0.0;
                                      /* Variable: Gyro_Calibration_Reset_Degree
                                       * Referenced by:
                                       *   '<S8>/Constant2'
                                       *   '<S8>/Unit Delay1'
                                       */
real_T Gyro_Calibration_Reset_Flag = 0.0;/* Variable: Gyro_Calibration_Reset_Flag
                                          * Referenced by: '<S8>/Constant3'
                                          */
real_T KF_Enable = 1.0;                /* Variable: KF_Enable
                                        * Referenced by:
                                        *   '<S11>/Constant1'
                                        *   '<S11>/Constant2'
                                        */
real_T KF_Vision_Ambiguity_Thresh = 0.1;/* Variable: KF_Vision_Ambiguity_Thresh
                                         * Referenced by: '<S11>/Constant'
                                         */
real_T Odometry_IC_X = 0.0;            /* Variable: Odometry_IC_X
                                        * Referenced by: '<S1>/Constant'
                                        */
real_T Odometry_IC_Y = 0.0;            /* Variable: Odometry_IC_Y
                                        * Referenced by: '<S1>/Constant1'
                                        */
real_T Odometry_Reset_IC = 0.0;        /* Variable: Odometry_Reset_IC
                                        * Referenced by: '<S13>/Constant'
                                        */
real_T Odometry_X_Y_TEAR = 0.0;        /* Variable: Odometry_X_Y_TEAR
                                        * Referenced by: '<S102>/Constant'
                                        */
real_T Spline_Last_Pose_Distance_to_Velocity_Gain = 2.0;
                         /* Variable: Spline_Last_Pose_Distance_to_Velocity_Gain
                          * Referenced by: '<S161>/Constant2'
                          */
real_T Spline_Max_Centripital_Acceleration = 10.0;
                                /* Variable: Spline_Max_Centripital_Acceleration
                                 * Referenced by: '<S161>/Constant1'
                                 */
real_T Spline_Pose_Num_Before_End_Reduce_Speed = 1.0;
                            /* Variable: Spline_Pose_Num_Before_End_Reduce_Speed
                             * Referenced by: '<S108>/Constant'
                             */
real_T Spline_Stop_Radius = 0.1;       /* Variable: Spline_Stop_Radius
                                        * Referenced by: '<S121>/Constant'
                                        */
real_T Spline_Velocity_Multiplier_TEST = 1.0;
                                    /* Variable: Spline_Velocity_Multiplier_TEST
                                     * Referenced by: '<S161>/Constant3'
                                     */
real_T Steering_Absolute_Cmd_Approach_Zero_Error_Thresh = 0.2;
                   /* Variable: Steering_Absolute_Cmd_Approach_Zero_Error_Thresh
                    * Referenced by: '<S272>/Constant5'
                    */
real_T Steering_Absolute_Cmd_Approach_Zero_Final_Thresh = 0.01;
                   /* Variable: Steering_Absolute_Cmd_Approach_Zero_Final_Thresh
                    * Referenced by: '<S272>/Constant6'
                    */
real_T Steering_Absolute_Cmd_NonZero_Error_Thresh = 0.2;
                         /* Variable: Steering_Absolute_Cmd_NonZero_Error_Thresh
                          * Referenced by: '<S272>/Constant9'
                          */
real_T Steering_Absolute_Cmd_NonZero_Final_Scale_Factor = 0.1;
                   /* Variable: Steering_Absolute_Cmd_NonZero_Final_Scale_Factor
                    * Referenced by: '<S272>/Constant10'
                    */
real_T Steering_Absolute_Cmd_Rate_Limit_Dec = -1.0;
                               /* Variable: Steering_Absolute_Cmd_Rate_Limit_Dec
                                * Referenced by: '<S272>/Constant1'
                                */
real_T Steering_Absolute_Cmd_Rate_Limit_Inc = 1.0;
                               /* Variable: Steering_Absolute_Cmd_Rate_Limit_Inc
                                * Referenced by: '<S272>/Constant3'
                                */
real_T Steering_Heading_Control_D = 0.0;/* Variable: Steering_Heading_Control_D
                                         * Referenced by: '<S289>/Constant3'
                                         */
real_T Steering_Heading_Control_D_FilterCoeff = 0.22223;
                             /* Variable: Steering_Heading_Control_D_FilterCoeff
                              * Referenced by: '<S289>/Constant2'
                              */
real_T Steering_Heading_Control_D_LL = 0.0;
                                      /* Variable: Steering_Heading_Control_D_LL
                                       * Referenced by: '<S289>/Saturation'
                                       */
real_T Steering_Heading_Control_D_UL = 0.0;
                                      /* Variable: Steering_Heading_Control_D_UL
                                       * Referenced by: '<S289>/Saturation'
                                       */
real_T Steering_Heading_Control_Deadzone = 0.1;
                                  /* Variable: Steering_Heading_Control_Deadzone
                                   * Referenced by: '<S288>/Constant'
                                   */
real_T Steering_Heading_Control_I = 0.0;/* Variable: Steering_Heading_Control_I
                                         * Referenced by: '<S289>/Gain2'
                                         */
real_T Steering_Heading_Control_I_LL = -0.1;
                                      /* Variable: Steering_Heading_Control_I_LL
                                       * Referenced by: '<S289>/Saturation1'
                                       */
real_T Steering_Heading_Control_I_UL = 0.1;
                                      /* Variable: Steering_Heading_Control_I_UL
                                       * Referenced by: '<S289>/Saturation1'
                                       */
real_T Steering_Heading_Control_P = 2.5;/* Variable: Steering_Heading_Control_P
                                         * Referenced by: '<S289>/Gain1'
                                         */
real_T Steering_Heading_Control_Total_LL = -2.5;
                                  /* Variable: Steering_Heading_Control_Total_LL
                                   * Referenced by:
                                   *   '<S289>/Constant1'
                                   *   '<S289>/Saturation2'
                                   */
real_T Steering_Heading_Control_Total_UL = 2.5;
                                  /* Variable: Steering_Heading_Control_Total_UL
                                   * Referenced by:
                                   *   '<S289>/Constant'
                                   *   '<S289>/Saturation2'
                                   */
real_T Steering_Motor_Control_D = 0.5; /* Variable: Steering_Motor_Control_D
                                        * Referenced by:
                                        *   '<S179>/Constant3'
                                        *   '<S200>/Constant3'
                                        *   '<S221>/Constant3'
                                        *   '<S242>/Constant3'
                                        */
real_T Steering_Motor_Control_D_FilterCoeff = 0.22223;
                               /* Variable: Steering_Motor_Control_D_FilterCoeff
                                * Referenced by:
                                *   '<S179>/Constant2'
                                *   '<S200>/Constant2'
                                *   '<S221>/Constant2'
                                *   '<S242>/Constant2'
                                */
real_T Steering_Motor_Control_D_LL = -0.2;/* Variable: Steering_Motor_Control_D_LL
                                           * Referenced by:
                                           *   '<S179>/Saturation'
                                           *   '<S200>/Saturation'
                                           *   '<S221>/Saturation'
                                           *   '<S242>/Saturation'
                                           */
real_T Steering_Motor_Control_D_UL = 0.2;/* Variable: Steering_Motor_Control_D_UL
                                          * Referenced by:
                                          *   '<S179>/Saturation'
                                          *   '<S200>/Saturation'
                                          *   '<S221>/Saturation'
                                          *   '<S242>/Saturation'
                                          */
real_T Steering_Motor_Control_I = 0.005;/* Variable: Steering_Motor_Control_I
                                         * Referenced by:
                                         *   '<S179>/Gain2'
                                         *   '<S200>/Gain2'
                                         *   '<S221>/Gain2'
                                         *   '<S242>/Gain2'
                                         */
real_T Steering_Motor_Control_I_LL = -0.005;/* Variable: Steering_Motor_Control_I_LL
                                             * Referenced by:
                                             *   '<S179>/Saturation1'
                                             *   '<S200>/Saturation1'
                                             *   '<S221>/Saturation1'
                                             *   '<S242>/Saturation1'
                                             */
real_T Steering_Motor_Control_I_UL = 0.005;/* Variable: Steering_Motor_Control_I_UL
                                            * Referenced by:
                                            *   '<S179>/Saturation1'
                                            *   '<S200>/Saturation1'
                                            *   '<S221>/Saturation1'
                                            *   '<S242>/Saturation1'
                                            */
real_T Steering_Motor_Control_P = 0.15;/* Variable: Steering_Motor_Control_P
                                        * Referenced by:
                                        *   '<S179>/Gain1'
                                        *   '<S200>/Gain1'
                                        *   '<S221>/Gain1'
                                        *   '<S242>/Gain1'
                                        */
real_T Steering_Relative_Cmd_Approach_Zero_Error_Thresh = 0.2;
                   /* Variable: Steering_Relative_Cmd_Approach_Zero_Error_Thresh
                    * Referenced by: '<S271>/Constant5'
                    */
real_T Steering_Relative_Cmd_Approach_Zero_Final_Thresh = 0.01;
                   /* Variable: Steering_Relative_Cmd_Approach_Zero_Final_Thresh
                    * Referenced by: '<S271>/Constant6'
                    */
real_T Steering_Relative_Cmd_NonZero_Error_Thresh = 0.2;
                         /* Variable: Steering_Relative_Cmd_NonZero_Error_Thresh
                          * Referenced by: '<S271>/Constant9'
                          */
real_T Steering_Relative_Cmd_NonZero_Final_Scale_Factor = 1.0;
                   /* Variable: Steering_Relative_Cmd_NonZero_Final_Scale_Factor
                    * Referenced by: '<S271>/Constant10'
                    */
real_T Steering_Relative_Cmd_Rate_Limit_Dec = -10.0;
                               /* Variable: Steering_Relative_Cmd_Rate_Limit_Dec
                                * Referenced by: '<S271>/Constant1'
                                */
real_T Steering_Relative_Cmd_Rate_Limit_Inc = 10.0;
                               /* Variable: Steering_Relative_Cmd_Rate_Limit_Inc
                                * Referenced by: '<S271>/Constant3'
                                */
real_T Steering_Relative_Gain = 5.0;   /* Variable: Steering_Relative_Gain
                                        * Referenced by: '<S323>/Constant'
                                        */
real_T Steering_Twist_Gain = -0.5;     /* Variable: Steering_Twist_Gain
                                        * Referenced by: '<S323>/Constant1'
                                        */
real_T TEST_Swerve_Mode_Override_Flag = 0.0;
                                     /* Variable: TEST_Swerve_Mode_Override_Flag
                                      * Referenced by: '<S18>/Constant5'
                                      */
real_T TEST_Swerve_Mode_Steering = 0.0;/* Variable: TEST_Swerve_Mode_Steering
                                        * Referenced by: '<S18>/Constant8'
                                        */
real_T TEST_Swerve_Mode_Translation = 0.0;/* Variable: TEST_Swerve_Mode_Translation
                                           * Referenced by: '<S18>/Constant7'
                                           */
real_T Translation_Speed_Approach_Zero_Error_Thresh = 0.2;
                       /* Variable: Translation_Speed_Approach_Zero_Error_Thresh
                        * Referenced by: '<S259>/Constant5'
                        */
real_T Translation_Speed_Approach_Zero_Final_Thresh = 0.01;
                       /* Variable: Translation_Speed_Approach_Zero_Final_Thresh
                        * Referenced by: '<S259>/Constant6'
                        */
real_T Translation_Speed_NonZero_Error_Thresh = 0.15;
                             /* Variable: Translation_Speed_NonZero_Error_Thresh
                              * Referenced by: '<S259>/Constant9'
                              */
real_T Translation_Speed_NonZero_Final_Scale_Factor = 0.05;
                       /* Variable: Translation_Speed_NonZero_Final_Scale_Factor
                        * Referenced by: '<S259>/Constant10'
                        */
real_T Translation_Speed_Rate_Limit_Dec = -4.0;
                                   /* Variable: Translation_Speed_Rate_Limit_Dec
                                    * Referenced by: '<S259>/Constant1'
                                    */
real_T Translation_Speed_Rate_Limit_Inc = 4.0;
                                   /* Variable: Translation_Speed_Rate_Limit_Inc
                                    * Referenced by: '<S259>/Constant3'
                                    */
real_T Translation_Twist_Gain = 0.5;   /* Variable: Translation_Twist_Gain
                                        * Referenced by: '<S324>/Gain'
                                        */
real_T Twist_Deadzone_neg = -0.01;     /* Variable: Twist_Deadzone_neg
                                        * Referenced by:
                                        *   '<S323>/Dead Zone'
                                        *   '<S324>/Dead Zone'
                                        */
real_T Twist_Deadzone_pos = 0.01;      /* Variable: Twist_Deadzone_pos
                                        * Referenced by:
                                        *   '<S323>/Dead Zone'
                                        *   '<S324>/Dead Zone'
                                        */

/* Block signals (default storage) */
B_Code_Gen_Model_T Code_Gen_Model_B;

/* Block states (default storage) */
DW_Code_Gen_Model_T Code_Gen_Model_DW;

/* External inputs (root inport signals with default storage) */
ExtU_Code_Gen_Model_T Code_Gen_Model_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_Code_Gen_Model_T Code_Gen_Model_Y;

/* Real-time model */
static RT_MODEL_Code_Gen_Model_T Code_Gen_Model_M_;
RT_MODEL_Code_Gen_Model_T *const Code_Gen_Model_M = &Code_Gen_Model_M_;

/* Lookup Binary Search Utility BINARYSEARCH_real_T */
void BINARYSEARCH_real_T(uint32_T *piLeft, uint32_T *piRght, real_T u, const
  real_T *pData, uint32_T iHi)
{
  /* Find the location of current input value in the data table. */
  *piLeft = 0U;
  *piRght = iHi;
  if (u <= pData[0] ) {
    /* Less than or equal to the smallest point in the table. */
    *piRght = 0U;
  } else if (u >= pData[iHi] ) {
    /* Greater than or equal to the largest point in the table. */
    *piLeft = iHi;
  } else {
    uint32_T i;

    /* Do a binary search. */
    while (( *piRght - *piLeft ) > 1U ) {
      /* Get the average of the left and right indices using to Floor rounding. */
      i = (*piLeft + *piRght) >> 1;

      /* Move either the right index or the left index so that */
      /*  LeftDataPoint <= CurrentValue < RightDataPoint */
      if (u < pData[i] ) {
        *piRght = i;
      } else {
        *piLeft = i;
      }
    }
  }
}

/* Lookup Utility LookUp_real_T_real_T */
void LookUp_real_T_real_T(real_T *pY, const real_T *pYData, real_T u, const
  real_T *pUData, uint32_T iHi)
{
  uint32_T iLeft;
  uint32_T iRght;
  BINARYSEARCH_real_T( &(iLeft), &(iRght), u, pUData, iHi);

  {
    real_T lambda;
    if (pUData[iRght] > pUData[iLeft] ) {
      real_T num;
      real_T den;
      den = pUData[iRght];
      den -= pUData[iLeft];
      num = u;
      num -= pUData[iLeft];
      lambda = num / den;
    } else {
      lambda = 0.0;
    }

    {
      real_T yLeftCast;
      real_T yRghtCast;
      yLeftCast = pYData[iLeft];
      yRghtCast = pYData[iRght];
      yLeftCast += lambda * ( yRghtCast - yLeftCast );
      (*pY) = yLeftCast;
    }
  }
}

real_T look1_binlcpw(real_T u0, const real_T bp0[], const real_T table[],
                     uint32_T maxIndex)
{
  real_T frac;
  real_T yL_0d0;
  uint32_T iLeft;

  /* Column-major Lookup 1-D
     Search method: 'binary'
     Use previous index: 'off'
     Interpolation method: 'Linear point-slope'
     Extrapolation method: 'Clip'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'off'
   */
  /* Prelookup - Index and Fraction
     Index Search method: 'binary'
     Extrapolation method: 'Clip'
     Use previous index: 'off'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'off'
   */
  if (u0 <= bp0[0U]) {
    iLeft = 0U;
    frac = 0.0;
  } else if (u0 < bp0[maxIndex]) {
    uint32_T bpIdx;
    uint32_T iRght;

    /* Binary Search */
    bpIdx = (maxIndex >> 1U);
    iLeft = 0U;
    iRght = maxIndex;
    while ((iRght - iLeft) > 1U) {
      if (u0 < bp0[bpIdx]) {
        iRght = bpIdx;
      } else {
        iLeft = bpIdx;
      }

      bpIdx = ((iRght + iLeft) >> 1U);
    }

    frac = (u0 - bp0[iLeft]) / (bp0[iLeft + 1U] - bp0[iLeft]);
  } else {
    iLeft = maxIndex - 1U;
    frac = 1.0;
  }

  /* Column-major Interpolation 1-D
     Interpolation method: 'Linear point-slope'
     Use last breakpoint for index at or above upper limit: 'off'
     Overflow mode: 'portable wrapping'
   */
  yL_0d0 = table[iLeft];
  return ((table[iLeft + 1U] - yL_0d0) * frac) + yL_0d0;
}

real_T rt_hypotd_snf(real_T u0, real_T u1)
{
  real_T a;
  real_T b;
  real_T y;
  a = fabs(u0);
  b = fabs(u1);
  if (a < b) {
    a /= b;
    y = sqrt((a * a) + 1.0) * b;
  } else if (a > b) {
    b /= a;
    y = sqrt((b * b) + 1.0) * a;
  } else if (rtIsNaN(b)) {
    y = (rtNaN);
  } else {
    y = a * 1.4142135623730951;
  }

  return y;
}

real_T rt_atan2d_snf(real_T u0, real_T u1)
{
  real_T y;
  if ((rtIsNaN(u0)) || (rtIsNaN(u1))) {
    y = (rtNaN);
  } else if ((rtIsInf(u0)) && (rtIsInf(u1))) {
    int32_T tmp;
    int32_T tmp_0;
    if (u0 > 0.0) {
      tmp = 1;
    } else {
      tmp = -1;
    }

    if (u1 > 0.0) {
      tmp_0 = 1;
    } else {
      tmp_0 = -1;
    }

    y = atan2(tmp, tmp_0);
  } else if (u1 == 0.0) {
    if (u0 > 0.0) {
      y = RT_PI / 2.0;
    } else if (u0 < 0.0) {
      y = -(RT_PI / 2.0);
    } else {
      y = 0.0;
    }
  } else {
    y = atan2(u0, u1);
  }

  return y;
}

real_T rt_modd_snf(real_T u0, real_T u1)
{
  real_T y;
  y = u0;
  if (u1 == 0.0) {
    if (u0 == 0.0) {
      y = u1;
    }
  } else if (((rtIsNaN(u0)) || (rtIsNaN(u1))) || (rtIsInf(u0))) {
    y = (rtNaN);
  } else if (u0 == 0.0) {
    y = 0.0 / u1;
  } else if (rtIsInf(u1)) {
    if ((u1 < 0.0) != (u0 < 0.0)) {
      y = u1;
    }
  } else {
    boolean_T yEq;
    y = fmod(u0, u1);
    yEq = (y == 0.0);
    if ((!yEq) && (u1 > floor(u1))) {
      real_T q;
      q = fabs(u0 / u1);
      yEq = !(fabs(q - floor(q + 0.5)) > (DBL_EPSILON * q));
    }

    if (yEq) {
      y = u1 * 0.0;
    } else if ((u0 < 0.0) != (u1 < 0.0)) {
      y += u1;
    }
  }

  return y;
}

/* Model step function */
void Code_Gen_Model_step(void)
{
  /* local block i/o variables */
  real_T rtb_LookupTableDynamic1;
  real_T rtb_LookupTableDynamic;
  real_T rtb_LookupTableDynamic1_g;
  real_T rtb_LookupTableDynamic_p;
  real_T rtb_LookupTableDynamic1_i;
  real_T rtb_LookupTableDynamic_j;
  real_T rtb_thetay_n_0[8];
  real_T rtb_Akxhatkk1[2];
  real_T rtb_Minus_n[2];
  real_T rtb_Add2_k_idx_0;
  real_T rtb_Add2_k_idx_1;
  real_T rtb_Add_du;
  real_T rtb_Add_gj;
  real_T rtb_Add_i;
  real_T rtb_Add_o2;
  real_T rtb_Add_oh;
  real_T rtb_FeedForward;
  real_T rtb_FeedForward_a;
  real_T rtb_FeedForward_n;
  real_T rtb_Hypot_bl;
  real_T rtb_Hypot_d;
  real_T rtb_Init;
  real_T rtb_Merge1;
  real_T rtb_POSEexponentialmatrixfori_0;
  real_T rtb_POSEexponentialmatrixfori_1;
  real_T rtb_Product_d;
  real_T rtb_Reshapey_idx_0;
  real_T rtb_Reshapey_idx_1;
  real_T rtb_Rotationmatrixfromlocalto_0;
  real_T rtb_Rotationmatrixfromlocalto_1;
  real_T rtb_Rotationmatrixfromlocalto_2;
  real_T rtb_Subtract1;
  real_T rtb_Subtract1_a;
  real_T rtb_Subtract1_do;
  real_T rtb_Subtract1_f;
  real_T rtb_Subtract1_of;
  real_T rtb_Subtract_e;
  real_T rtb_Sum_jt;
  real_T rtb_Switch1;
  real_T rtb_Switch1_p2;
  real_T rtb_Switch1_pz;
  real_T rtb_Switch2;
  real_T rtb_Switch2_a;
  real_T rtb_Switch4;
  real_T rtb_Switch_ms;
  real_T rtb_rx;
  real_T rtb_rx_h;
  real_T rtb_rx_l;
  real_T rtb_rx_o;
  real_T rtb_thetay;
  real_T rtb_thetay_i;
  real_T rtb_thetay_l;
  real_T rtb_thetay_n;
  real_T tmp;
  int32_T i;
  int32_T rtb_Num_Segments;
  int32_T tmp_0;
  int8_T rtAction;
  int8_T rtPrevAction;
  uint8_T rtb_GameState;
  boolean_T rtb_AND;
  boolean_T rtb_AND1;
  boolean_T rtb_AND2;
  boolean_T rtb_AT_Tag_5_Active;
  boolean_T rtb_Compare_pf;
  boolean_T rtb_FixPtRelationalOperator;
  boolean_T rtb_FixPtRelationalOperator_ea;
  boolean_T rtb_FixPtRelationalOperator_f;
  boolean_T rtb_Is_Absolute_Steering;
  boolean_T rtb_Is_Absolute_Translation_g;
  boolean_T rtb_Relative_Translation_Flag;
  boolean_T rtb_Swerve_Motors_Disabled;

  /* RelationalOperator: '<S36>/FixPt Relational Operator' incorporates:
   *  Inport: '<Root>/Joystick_Left_B11'
   *  UnitDelay: '<S36>/Delay Input1'
   *
   * Block description for '<S36>/Delay Input1':
   *
   *  Store in Global RAM
   */
  rtb_FixPtRelationalOperator = (Code_Gen_Model_U.Joystick_Left_B11 >
    Code_Gen_Model_DW.DelayInput1_DSTATE);

  /* RelationalOperator: '<S38>/FixPt Relational Operator' incorporates:
   *  Inport: '<Root>/Joystick_Left_B13'
   *  UnitDelay: '<S38>/Delay Input1'
   *
   * Block description for '<S38>/Delay Input1':
   *
   *  Store in Global RAM
   */
  rtb_FixPtRelationalOperator_ea = (Code_Gen_Model_U.Joystick_Left_B13 >
    Code_Gen_Model_DW.DelayInput1_DSTATE_n);

  /* SignalConversion: '<S9>/Signal Copy1' incorporates:
   *  Inport: '<Root>/Joystick_Left_X'
   */
  Code_Gen_Model_B.Drive_Joystick_X = Code_Gen_Model_U.Joystick_Left_X;

  /* SignalConversion: '<S9>/Signal Copy2' incorporates:
   *  Inport: '<Root>/Joystick_Left_Y'
   */
  Code_Gen_Model_B.Drive_Joystick_Y = Code_Gen_Model_U.Joystick_Left_Y;

  /* SignalConversion: '<S9>/Signal Copy3' incorporates:
   *  Inport: '<Root>/Joystick_Left_Z'
   */
  Code_Gen_Model_B.Drive_Joystick_Z = Code_Gen_Model_U.Joystick_Left_Z;

  /* RelationalOperator: '<S28>/Compare' incorporates:
   *  Constant: '<S28>/Constant'
   *  Inport: '<Root>/Joystick_Left_POV'
   */
  Code_Gen_Model_B.Drive_Joystick_Z_Mode = (Code_Gen_Model_U.Joystick_Left_POV
    != -1.0);

  /* SignalConversion: '<S9>/Signal Copy5' incorporates:
   *  Inport: '<Root>/Joystick_Right_Y'
   */
  Code_Gen_Model_B.Steer_Joystick_Y = Code_Gen_Model_U.Joystick_Right_Y;

  /* SignalConversion: '<S9>/Signal Copy6' incorporates:
   *  Inport: '<Root>/Joystick_Right_Z'
   */
  Code_Gen_Model_B.Steer_Joystick_Z = Code_Gen_Model_U.Joystick_Right_Z;

  /* RelationalOperator: '<S35>/Compare' incorporates:
   *  Constant: '<S35>/Constant'
   *  Inport: '<Root>/Joystick_Left_B1'
   */
  Code_Gen_Model_B.Is_Boosting = (Code_Gen_Model_U.Joystick_Left_B1 != 0.0);

  /* RelationalOperator: '<S33>/Compare' incorporates:
   *  Constant: '<S33>/Constant'
   *  Inport: '<Root>/Joystick_Left_B3'
   */
  Code_Gen_Model_B.Align_Amp = (Code_Gen_Model_U.Joystick_Left_B3 != 0.0);

  /* RelationalOperator: '<S32>/Compare' incorporates:
   *  Constant: '<S32>/Constant'
   *  Inport: '<Root>/Joystick_Left_B4'
   */
  Code_Gen_Model_B.Align_Speaker = (Code_Gen_Model_U.Joystick_Left_B4 != 0.0);

  /* RelationalOperator: '<S31>/Compare' incorporates:
   *  Constant: '<S31>/Constant'
   *  Inport: '<Root>/Joystick_Right_B2'
   */
  Code_Gen_Model_B.Face_Toward_Driver = (Code_Gen_Model_U.Joystick_Right_B2 !=
    0.0);

  /* RelationalOperator: '<S29>/Compare' incorporates:
   *  Constant: '<S29>/Constant'
   *  Inport: '<Root>/Joystick_Right_B4'
   */
  Code_Gen_Model_B.Face_Right_Driver = (Code_Gen_Model_U.Joystick_Right_B4 !=
    0.0);

  /* RelationalOperator: '<S30>/Compare' incorporates:
   *  Constant: '<S30>/Constant'
   *  Inport: '<Root>/Joystick_Right_B3'
   */
  Code_Gen_Model_B.Face_Left_Driver = (Code_Gen_Model_U.Joystick_Right_B3 != 0.0);

  /* RelationalOperator: '<S27>/Compare' incorporates:
   *  Constant: '<S27>/Constant'
   *  Inport: '<Root>/Joystick_Right_POV'
   */
  Code_Gen_Model_B.Face_Away_Driver = (Code_Gen_Model_U.Joystick_Right_POV !=
    -1.0);

  /* Reshape: '<S39>/Reshapey' incorporates:
   *  Inport: '<Root>/Photon_Est_Pose_X'
   *  Inport: '<Root>/Photon_Est_Pose_Y'
   *  S-Function (sfix_udelay): '<S11>/Tapped Delay'
   *  S-Function (sfix_udelay): '<S11>/Tapped Delay1'
   *  Sum: '<S11>/Add'
   *  Sum: '<S11>/Add1'
   */
  rtb_Reshapey_idx_0 = (((((Code_Gen_Model_U.Photon_Est_Pose_X +
    Code_Gen_Model_DW.TappedDelay_X[0]) + Code_Gen_Model_DW.TappedDelay_X[1]) +
    Code_Gen_Model_DW.TappedDelay_X[2]) + Code_Gen_Model_DW.TappedDelay_X[3]) +
                        Code_Gen_Model_DW.TappedDelay_X[4]) +
    Code_Gen_Model_DW.TappedDelay_X[5];
  rtb_Reshapey_idx_1 = (((((Code_Gen_Model_U.Photon_Est_Pose_Y +
    Code_Gen_Model_DW.TappedDelay1_X[0]) + Code_Gen_Model_DW.TappedDelay1_X[1])
    + Code_Gen_Model_DW.TappedDelay1_X[2]) + Code_Gen_Model_DW.TappedDelay1_X[3])
                        + Code_Gen_Model_DW.TappedDelay1_X[4]) +
    Code_Gen_Model_DW.TappedDelay1_X[5];

  /* Delay: '<S39>/MemoryX' incorporates:
   *  Constant: '<S39>/X0'
   */
  if (Code_Gen_Model_DW.icLoad) {
    Code_Gen_Model_DW.MemoryX_DSTATE[0] = 0.0;
    Code_Gen_Model_DW.MemoryX_DSTATE[1] = 0.0;
  }

  /* Logic: '<S11>/AND' incorporates:
   *  Constant: '<S11>/Constant'
   *  Constant: '<S11>/Constant1'
   *  Inport: '<Root>/Photon_Est_Pose_Ambiguity'
   *  RelationalOperator: '<S11>/Relational Operator'
   */
  rtb_AND = ((Code_Gen_Model_U.Photon_Est_Pose_Ambiguity <=
              KF_Vision_Ambiguity_Thresh) && (KF_Enable != 0.0));

  /* Outputs for Enabled SubSystem: '<S66>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S92>/Enable'
   */
  if (rtb_AND) {
    Code_Gen_Model_DW.EnabledSubsystem_MODE = true;

    /* Sum: '<S92>/Add1' incorporates:
     *  Constant: '<S39>/C'
     *  Delay: '<S39>/MemoryX'
     *  Product: '<S92>/Product'
     */
    rtb_Switch1 = rtb_Reshapey_idx_0 - ((0.0 * Code_Gen_Model_DW.MemoryX_DSTATE
      [1]) + Code_Gen_Model_DW.MemoryX_DSTATE[0]);
    rtb_Switch1_p2 = rtb_Reshapey_idx_1 - ((0.0 *
      Code_Gen_Model_DW.MemoryX_DSTATE[0]) + Code_Gen_Model_DW.MemoryX_DSTATE[1]);

    /* Product: '<S92>/Product2' incorporates:
     *  Constant: '<S40>/KalmanGainM'
     */
    Code_Gen_Model_B.Product2[0] = (0.09512492197250387 * rtb_Switch1) +
      (5.9896845167210271E-17 * rtb_Switch1_p2);
    Code_Gen_Model_B.Product2[1] = (5.9896845167210271E-17 * rtb_Switch1) +
      (0.095124921972503981 * rtb_Switch1_p2);
  } else if (Code_Gen_Model_DW.EnabledSubsystem_MODE) {
    /* Disable for Product: '<S92>/Product2' incorporates:
     *  Outport: '<S92>/deltax'
     */
    Code_Gen_Model_B.Product2[0] = 0.0;
    Code_Gen_Model_B.Product2[1] = 0.0;
    Code_Gen_Model_DW.EnabledSubsystem_MODE = false;
  }

  /* End of Outputs for SubSystem: '<S66>/Enabled Subsystem' */

  /* Sum: '<S66>/Add' incorporates:
   *  Delay: '<S39>/MemoryX'
   */
  rtb_Akxhatkk1[0] = Code_Gen_Model_B.Product2[0] +
    Code_Gen_Model_DW.MemoryX_DSTATE[0];
  rtb_Akxhatkk1[1] = Code_Gen_Model_B.Product2[1] +
    Code_Gen_Model_DW.MemoryX_DSTATE[1];

  /* DiscreteIntegrator: '<S13>/Accumulator2' incorporates:
   *  Constant: '<S13>/Constant'
   *  Constant: '<S1>/Constant'
   */
  if ((Odometry_Reset_IC > 0.0) &&
      (Code_Gen_Model_DW.Accumulator2_PrevResetState <= 0)) {
    Code_Gen_Model_DW.Accumulator2_DSTATE = Odometry_IC_X;
  }

  /* DiscreteIntegrator: '<S13>/Accumulator2' */
  Code_Gen_Model_B.Odom_Position_X = Code_Gen_Model_DW.Accumulator2_DSTATE;

  /* Switch: '<S11>/Switch' incorporates:
   *  Constant: '<S11>/Constant2'
   */
  if (KF_Enable != 0.0) {
    /* Switch: '<S11>/Switch' */
    Code_Gen_Model_B.KF_Position_X = rtb_Akxhatkk1[0];
  } else {
    /* Switch: '<S11>/Switch' */
    Code_Gen_Model_B.KF_Position_X = Code_Gen_Model_B.Odom_Position_X;
  }

  /* End of Switch: '<S11>/Switch' */

  /* DiscreteIntegrator: '<S13>/Accumulator' incorporates:
   *  Constant: '<S13>/Constant'
   *  Constant: '<S1>/Constant1'
   */
  if ((Odometry_Reset_IC > 0.0) && (Code_Gen_Model_DW.Accumulator_PrevResetState
       <= 0)) {
    Code_Gen_Model_DW.Accumulator_DSTATE = Odometry_IC_Y;
  }

  /* DiscreteIntegrator: '<S13>/Accumulator' */
  Code_Gen_Model_B.Odom_Position_Y = Code_Gen_Model_DW.Accumulator_DSTATE;

  /* Switch: '<S11>/Switch1' incorporates:
   *  Constant: '<S11>/Constant2'
   */
  if (KF_Enable != 0.0) {
    /* Switch: '<S11>/Switch1' */
    Code_Gen_Model_B.KF_Position_Y = rtb_Akxhatkk1[1];
  } else {
    /* Switch: '<S11>/Switch1' */
    Code_Gen_Model_B.KF_Position_Y = Code_Gen_Model_B.Odom_Position_Y;
  }

  /* End of Switch: '<S11>/Switch1' */

  /* Switch: '<S8>/Switch1' incorporates:
   *  Constant: '<S8>/Constant2'
   *  Constant: '<S8>/Constant3'
   *  Inport: '<Root>/Gyro_Angle'
   *  RelationalOperator: '<S26>/FixPt Relational Operator'
   *  Sum: '<S8>/Sum'
   *  UnitDelay: '<S26>/Delay Input1'
   *  UnitDelay: '<S8>/Unit Delay1'
   *
   * Block description for '<S26>/Delay Input1':
   *
   *  Store in Global RAM
   */
  if (Gyro_Calibration_Reset_Flag > Code_Gen_Model_DW.DelayInput1_DSTATE_p) {
    rtb_Switch1 = Gyro_Calibration_Reset_Degree - Code_Gen_Model_U.Gyro_Angle;
  } else {
    rtb_Switch1 = Code_Gen_Model_DW.UnitDelay1_DSTATE;
  }

  /* End of Switch: '<S8>/Switch1' */

  /* Sum: '<S8>/Subtract1' incorporates:
   *  Inport: '<Root>/Gyro_Angle'
   */
  Code_Gen_Model_B.Gyro_Angle_Calibrated_deg = Code_Gen_Model_U.Gyro_Angle +
    rtb_Switch1;

  /* Gain: '<S25>/Gain1' */
  Code_Gen_Model_B.Gyro_Angle_rad = 0.017453292519943295 *
    Code_Gen_Model_B.Gyro_Angle_Calibrated_deg;

  /* SwitchCase: '<S1>/Switch Case' incorporates:
   *  Inport: '<Root>/GameState'
   */
  rtPrevAction = Code_Gen_Model_DW.SwitchCase_ActiveSubsystem;
  tmp = trunc(Code_Gen_Model_U.GameState);
  if ((rtIsNaN(tmp)) || (rtIsInf(tmp))) {
    tmp = 0.0;
  } else {
    tmp = fmod(tmp, 4.294967296E+9);
  }

  switch ((tmp < 0.0) ? (-((int32_T)((uint32_T)(-tmp)))) : ((int32_T)((uint32_T)
            tmp))) {
   case 0:
    rtAction = 0;
    break;

   case 1:
    rtAction = 1;
    break;

   case 2:
    rtAction = 2;
    break;

   default:
    rtAction = 3;
    break;
  }

  Code_Gen_Model_DW.SwitchCase_ActiveSubsystem = rtAction;
  switch (rtAction) {
   case 0:
    /* Outputs for IfAction SubSystem: '<S1>/Disabled' incorporates:
     *  ActionPort: '<S5>/Action Port'
     */
    /* Merge: '<S12>/Merge1' incorporates:
     *  Constant: '<S5>/Constant1'
     *  SignalConversion generated from: '<S5>/Steering_Abs_Cmd'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd = 0.0;

    /* Merge: '<S12>/Merge2' incorporates:
     *  Constant: '<S5>/Constant2'
     *  SignalConversion generated from: '<S5>/Steering_Rel_Cmd'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd = 0.0;

    /* Merge: '<S12>/Merge3' incorporates:
     *  Constant: '<S5>/Constant3'
     *  SignalConversion generated from: '<S5>/Translation_Angle'
     */
    Code_Gen_Model_B.Translation_Angle = 0.0;

    /* Merge: '<S12>/Merge4' incorporates:
     *  Constant: '<S5>/Constant4'
     *  SignalConversion generated from: '<S5>/Translation_Speed'
     */
    Code_Gen_Model_B.Translation_Speed = 0.0;

    /* SignalConversion generated from: '<S5>/Is_Absolute_Translation' incorporates:
     *  Constant: '<S5>/Constant5'
     */
    rtb_Is_Absolute_Translation_g = true;

    /* SignalConversion generated from: '<S5>/Is_Absolute_Steering' incorporates:
     *  Constant: '<S5>/Constant6'
     */
    rtb_Is_Absolute_Steering = true;

    /* Merge: '<S12>/Merge7' incorporates:
     *  Constant: '<S5>/Constant7'
     *  SignalConversion generated from: '<S5>/Spline_Enable'
     */
    Code_Gen_Model_B.Spline_Enable = false;

    /* Merge: '<S12>/Merge9' incorporates:
     *  Constant: '<S5>/Constant9'
     *  SignalConversion generated from: '<S5>/Spline_Num_Poses'
     */
    Code_Gen_Model_B.Spline_Num_Poses = 10.0;

    /* Merge: '<S12>/Merge10' incorporates:
     *  Constant: '<S5>/Constant10'
     *  SignalConversion generated from: '<S5>/Test_Mode'
     */
    Code_Gen_Model_B.Test_Mode = false;

    /* SignalConversion generated from: '<S5>/Enable_Wheels' incorporates:
     *  Constant: '<S5>/Constant18'
     */
    rtb_thetay = 0.0;

    /* SignalConversion generated from: '<S5>/Reset_Wheel_Offsets' incorporates:
     *  Constant: '<S5>/Constant13'
     */
    rtb_rx = 0.0;

    /* SignalConversion generated from: '<S5>/Disable_Wheels' incorporates:
     *  Constant: '<S5>/Constant14'
     */
    rtb_thetay_n = 0.0;

    /* SignalConversion generated from: '<S5>/Swerve_Motors_Disabled' incorporates:
     *  Constant: '<S5>/Constant12'
     */
    rtb_Swerve_Motors_Disabled = false;

    /* Merge: '<S12>/Merge11' incorporates:
     *  Constant: '<S5>/Constant11'
     *  SignalConversion generated from: '<S5>/Elevator_Height_Desired'
     */
    Code_Gen_Model_B.Elevator_Height_Desired = 0.0;

    /* Merge: '<S12>/Merge12' incorporates:
     *  Constant: '<S5>/Constant15'
     *  SignalConversion generated from: '<S5>/Elevator_Motor_Enable'
     */
    Code_Gen_Model_B.Elevator_Motor_Enable = false;

    /* End of Outputs for SubSystem: '<S1>/Disabled' */
    break;

   case 1:
    /* Outputs for IfAction SubSystem: '<S1>/Autonomous' incorporates:
     *  ActionPort: '<S2>/Action Port'
     */
    /* Merge: '<S12>/Merge1' incorporates:
     *  Constant: '<S2>/Constant10'
     *  SignalConversion generated from: '<S2>/Steering_Abs_Cmd'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd = 0.0;

    /* Merge: '<S12>/Merge2' incorporates:
     *  Constant: '<S2>/Constant2'
     *  SignalConversion generated from: '<S2>/Steering_Rel_Cmd'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd = 0.0;

    /* Merge: '<S12>/Merge3' incorporates:
     *  Constant: '<S2>/Constant7'
     *  SignalConversion generated from: '<S2>/Translation_Angle'
     */
    Code_Gen_Model_B.Translation_Angle = 0.0;

    /* Merge: '<S12>/Merge4' incorporates:
     *  Constant: '<S2>/Constant9'
     *  SignalConversion generated from: '<S2>/Translation_Speed'
     */
    Code_Gen_Model_B.Translation_Speed = 0.0;

    /* SignalConversion generated from: '<S2>/Is_Absolute_Translation' incorporates:
     *  Constant: '<S2>/Constant8'
     */
    rtb_Is_Absolute_Translation_g = true;

    /* SignalConversion generated from: '<S2>/Is_Absolute_Steering' incorporates:
     *  Constant: '<S2>/Constant5'
     */
    rtb_Is_Absolute_Steering = true;

    /* Merge: '<S12>/Merge7' incorporates:
     *  Constant: '<S2>/Constant6'
     *  SignalConversion generated from: '<S2>/Spline_Enable'
     */
    Code_Gen_Model_B.Spline_Enable = false;

    /* Merge: '<S12>/Merge9' incorporates:
     *  Constant: '<S2>/Constant16'
     *  SignalConversion generated from: '<S2>/Spline_Num_Poses'
     */
    Code_Gen_Model_B.Spline_Num_Poses = 10.0;

    /* Merge: '<S12>/Merge10' incorporates:
     *  Constant: '<S2>/Constant3'
     *  SignalConversion generated from: '<S2>/Test_Mode'
     */
    Code_Gen_Model_B.Test_Mode = false;

    /* SignalConversion generated from: '<S2>/Enable_Wheels' incorporates:
     *  Constant: '<S2>/Constant1'
     */
    rtb_thetay = 0.0;

    /* SignalConversion generated from: '<S2>/Reset_Wheel_Offsets' incorporates:
     *  Constant: '<S2>/Constant13'
     */
    rtb_rx = 0.0;

    /* SignalConversion generated from: '<S2>/Disable_Wheels' incorporates:
     *  Constant: '<S2>/Constant14'
     */
    rtb_thetay_n = 0.0;

    /* SignalConversion generated from: '<S2>/Swerve_Motors_Disabled' incorporates:
     *  Constant: '<S2>/Constant4'
     */
    rtb_Swerve_Motors_Disabled = false;

    /* Merge: '<S12>/Merge11' incorporates:
     *  Constant: '<S2>/Constant11'
     *  SignalConversion generated from: '<S2>/Elevator_Height_Desired'
     */
    Code_Gen_Model_B.Elevator_Height_Desired = 0.0;

    /* Merge: '<S12>/Merge12' incorporates:
     *  Constant: '<S2>/Constant12'
     *  SignalConversion generated from: '<S2>/Elevator_Motor_Enable'
     */
    Code_Gen_Model_B.Elevator_Motor_Enable = false;

    /* End of Outputs for SubSystem: '<S1>/Autonomous' */
    break;

   case 2:
    /* Outputs for IfAction SubSystem: '<S1>/Teleop' incorporates:
     *  ActionPort: '<S18>/Action Port'
     */
    /* Logic: '<S320>/Logical Operator3' incorporates:
     *  Inport: '<Root>/IsBlueAlliance'
     */
    rtb_Swerve_Motors_Disabled = ((Code_Gen_Model_B.Align_Amp) &&
      (Code_Gen_Model_U.IsBlueAlliance != 0.0));

    /* Logic: '<S320>/Logical Operator2' incorporates:
     *  Inport: '<Root>/IsBlueAlliance'
     *  Logic: '<S320>/Logical Operator10'
     */
    rtb_AT_Tag_5_Active = ((Code_Gen_Model_B.Align_Amp) &&
      (!(Code_Gen_Model_U.IsBlueAlliance != 0.0)));

    /* Switch: '<S320>/Switch15' incorporates:
     *  Switch: '<S320>/Switch16'
     *  Switch: '<S320>/Switch23'
     *  Switch: '<S320>/Switch24'
     */
    if (rtb_AT_Tag_5_Active) {
      /* Switch: '<S320>/Switch15' incorporates:
       *  Constant: '<S320>/Constant9'
       *  Sum: '<S320>/Add17'
       */
      Code_Gen_Model_B.AT_Error_X = AT_Target_Tag_5_X -
        Code_Gen_Model_B.KF_Position_X;

      /* Switch: '<S320>/Switch23' incorporates:
       *  Constant: '<S320>/Constant28'
       *  Sum: '<S320>/Add23'
       */
      Code_Gen_Model_B.AT_Error_Y = AT_Target_Tag_5_Y -
        Code_Gen_Model_B.KF_Position_Y;
    } else if (rtb_Swerve_Motors_Disabled) {
      /* Switch: '<S320>/Switch15' incorporates:
       *  Constant: '<S320>/Constant5'
       *  Sum: '<S320>/Add16'
       *  Switch: '<S320>/Switch16'
       */
      Code_Gen_Model_B.AT_Error_X = AT_Target_Tag_6_X -
        Code_Gen_Model_B.KF_Position_X;

      /* Switch: '<S320>/Switch23' incorporates:
       *  Constant: '<S320>/Constant27'
       *  Sum: '<S320>/Add22'
       *  Switch: '<S320>/Switch24'
       */
      Code_Gen_Model_B.AT_Error_Y = AT_Target_Tag_6_Y -
        Code_Gen_Model_B.KF_Position_Y;
    } else {
      /* Switch: '<S320>/Switch15' incorporates:
       *  Constant: '<S320>/Constant1'
       *  Switch: '<S320>/Switch1'
       *  Switch: '<S320>/Switch12'
       *  Switch: '<S320>/Switch13'
       *  Switch: '<S320>/Switch14'
       *  Switch: '<S320>/Switch16'
       *  Switch: '<S320>/Switch17'
       *  Switch: '<S320>/Switch18'
       */
      Code_Gen_Model_B.AT_Error_X = 0.0;

      /* Switch: '<S320>/Switch23' incorporates:
       *  Constant: '<S320>/Constant2'
       *  Switch: '<S320>/Switch19'
       *  Switch: '<S320>/Switch20'
       *  Switch: '<S320>/Switch21'
       *  Switch: '<S320>/Switch22'
       *  Switch: '<S320>/Switch24'
       *  Switch: '<S320>/Switch25'
       *  Switch: '<S320>/Switch26'
       */
      Code_Gen_Model_B.AT_Error_Y = 0.0;
    }

    /* End of Switch: '<S320>/Switch15' */

    /* Switch: '<S336>/Switch1' incorporates:
     *  Constant: '<S341>/Constant'
     *  Constant: '<S342>/Constant'
     *  Logic: '<S336>/AND'
     *  RelationalOperator: '<S341>/Compare'
     *  RelationalOperator: '<S342>/Compare'
     *  Switch: '<S336>/Switch2'
     *  UnitDelay: '<S336>/Unit Delay'
     *  UnitDelay: '<S336>/Unit Delay1'
     */
    if ((Code_Gen_Model_B.Drive_Joystick_X == 0.0) &&
        (Code_Gen_Model_B.Drive_Joystick_Y == 0.0)) {
      rtb_Switch1_p2 = Code_Gen_Model_DW.UnitDelay1_DSTATE_l;
      rtb_Switch2 = Code_Gen_Model_DW.UnitDelay_DSTATE_p;
    } else {
      rtb_Switch1_p2 = Code_Gen_Model_B.Drive_Joystick_Y;
      rtb_Switch2 = Code_Gen_Model_B.Drive_Joystick_X;
    }

    /* End of Switch: '<S336>/Switch1' */

    /* Lookup_n-D: '<S324>/Modulation_Drv' incorporates:
     *  Math: '<S324>/Magnitude'
     */
    rtb_thetay = look1_binlcpw(rt_hypotd_snf(Code_Gen_Model_B.Drive_Joystick_X,
      Code_Gen_Model_B.Drive_Joystick_Y),
      Code_Gen_Model_ConstP.Modulation_Drv_bp01Data,
      Code_Gen_Model_ConstP.Modulation_Drv_tableData, 20U);

    /* RelationalOperator: '<S334>/Compare' incorporates:
     *  Constant: '<S334>/Constant'
     */
    rtb_Compare_pf = (rtb_thetay == 0.0);

    /* DeadZone: '<S324>/Dead Zone' */
    if (Code_Gen_Model_B.Drive_Joystick_Z > Twist_Deadzone_pos) {
      rtb_thetay_n = Code_Gen_Model_B.Drive_Joystick_Z - Twist_Deadzone_pos;
    } else if (Code_Gen_Model_B.Drive_Joystick_Z >= Twist_Deadzone_neg) {
      rtb_thetay_n = 0.0;
    } else {
      rtb_thetay_n = Code_Gen_Model_B.Drive_Joystick_Z - Twist_Deadzone_neg;
    }

    /* End of DeadZone: '<S324>/Dead Zone' */

    /* Logic: '<S324>/Logical Operator' incorporates:
     *  Constant: '<S335>/Constant'
     *  RelationalOperator: '<S335>/Compare'
     */
    rtb_Relative_Translation_Flag = ((rtb_thetay_n != 0.0) && rtb_Compare_pf);

    /* Switch: '<S324>/Switch1' incorporates:
     *  Switch: '<S324>/Switch4'
     */
    if (rtb_Relative_Translation_Flag) {
      /* Switch: '<S324>/Switch5' */
      if (Code_Gen_Model_B.Drive_Joystick_Z_Mode) {
        /* Merge: '<S12>/Merge3' incorporates:
         *  Constant: '<S324>/Constant3'
         */
        Code_Gen_Model_B.Translation_Angle = -1.5707963267948966;
      } else {
        /* Merge: '<S12>/Merge3' incorporates:
         *  Constant: '<S324>/Constant4'
         */
        Code_Gen_Model_B.Translation_Angle = 0.0;
      }

      /* End of Switch: '<S324>/Switch5' */
    } else if (rtb_Compare_pf) {
      /* Switch: '<S324>/Switch6' incorporates:
       *  Constant: '<S324>/Constant'
       *  Constant: '<S324>/Constant1'
       *  Inport: '<Root>/IsBlueAlliance'
       *  Switch: '<S324>/Switch4'
       */
      if (Code_Gen_Model_U.IsBlueAlliance != 0.0) {
        tmp = 0.0;
      } else {
        tmp = 3.1415926535897931;
      }

      /* Merge: '<S12>/Merge3' incorporates:
       *  Sum: '<S324>/Add1'
       *  Switch: '<S324>/Switch4'
       *  Switch: '<S324>/Switch6'
       *  Trigonometry: '<S324>/Atan1'
       */
      Code_Gen_Model_B.Translation_Angle = rt_atan2d_snf
        (Code_Gen_Model_B.AT_Error_Y, Code_Gen_Model_B.AT_Error_X) + tmp;
    } else {
      /* Merge: '<S12>/Merge3' incorporates:
       *  Switch: '<S324>/Switch4'
       *  Trigonometry: '<S324>/Atan2'
       */
      Code_Gen_Model_B.Translation_Angle = rt_atan2d_snf(rtb_Switch1_p2,
        rtb_Switch2);
    }

    /* End of Switch: '<S324>/Switch1' */

    /* Switch: '<S18>/Switch' incorporates:
     *  Constant: '<S18>/Constant5'
     *  Constant: '<S18>/Constant7'
     *  DataTypeConversion: '<S18>/Data Type Conversion'
     *  Switch: '<S324>/Switch3'
     */
    if (TEST_Swerve_Mode_Override_Flag != 0.0) {
      rtb_Is_Absolute_Translation_g = (TEST_Swerve_Mode_Translation != 0.0);
    } else {
      rtb_Is_Absolute_Translation_g = !rtb_Relative_Translation_Flag;
    }

    /* End of Switch: '<S18>/Switch' */

    /* DeadZone: '<S323>/Dead Zone' */
    if (Code_Gen_Model_B.Steer_Joystick_Z > Twist_Deadzone_pos) {
      tmp = Code_Gen_Model_B.Steer_Joystick_Z - Twist_Deadzone_pos;
    } else if (Code_Gen_Model_B.Steer_Joystick_Z >= Twist_Deadzone_neg) {
      tmp = 0.0;
    } else {
      tmp = Code_Gen_Model_B.Steer_Joystick_Z - Twist_Deadzone_neg;
    }

    /* Sum: '<S323>/Add' incorporates:
     *  Constant: '<S323>/Constant'
     *  Constant: '<S323>/Constant1'
     *  DeadZone: '<S323>/Dead Zone'
     *  Lookup_n-D: '<S323>/Modulation_Str_Y_Rel'
     *  Product: '<S323>/Product'
     *  Product: '<S323>/Product1'
     *  SignalConversion: '<S9>/Signal Copy5'
     */
    rtb_Switch2_a = (look1_binlcpw(Code_Gen_Model_B.Steer_Joystick_Y,
      Code_Gen_Model_ConstP.Modulation_Str_Y_Rel_bp01Data,
      Code_Gen_Model_ConstP.Modulation_Str_Y_Rel_tableData, 20U) *
                     Steering_Relative_Gain) + (tmp * Steering_Twist_Gain);

    /* RelationalOperator: '<S325>/Compare' incorporates:
     *  Constant: '<S325>/Constant'
     */
    rtb_FixPtRelationalOperator = (rtb_Switch2_a == 0.0);

    /* Switch: '<S18>/Switch1' incorporates:
     *  Constant: '<S18>/Constant5'
     *  Constant: '<S18>/Constant8'
     *  DataTypeConversion: '<S18>/Data Type Conversion1'
     */
    if (TEST_Swerve_Mode_Override_Flag != 0.0) {
      rtb_Is_Absolute_Steering = (TEST_Swerve_Mode_Steering != 0.0);
    } else {
      rtb_Is_Absolute_Steering = rtb_FixPtRelationalOperator;
    }

    /* End of Switch: '<S18>/Switch1' */

    /* Logic: '<S320>/Logical Operator11' */
    rtb_FixPtRelationalOperator_ea = ((Code_Gen_Model_B.Align_Amp) ||
      (Code_Gen_Model_B.Align_Speaker));

    /* RelationalOperator: '<S330>/FixPt Relational Operator' incorporates:
     *  UnitDelay: '<S330>/Delay Input1'
     *
     * Block description for '<S330>/Delay Input1':
     *
     *  Store in Global RAM
     */
    rtb_FixPtRelationalOperator_f = (((int32_T)rtb_FixPtRelationalOperator_ea) >
      ((int32_T)Code_Gen_Model_DW.DelayInput1_DSTATE_f));

    /* Logic: '<S323>/AND2' incorporates:
     *  RelationalOperator: '<S326>/FixPt Relational Operator'
     *  RelationalOperator: '<S327>/FixPt Relational Operator'
     *  RelationalOperator: '<S328>/FixPt Relational Operator'
     *  RelationalOperator: '<S329>/FixPt Relational Operator'
     *  UnitDelay: '<S326>/Delay Input1'
     *  UnitDelay: '<S327>/Delay Input1'
     *  UnitDelay: '<S328>/Delay Input1'
     *  UnitDelay: '<S329>/Delay Input1'
     *
     * Block description for '<S326>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S327>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S328>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S329>/Delay Input1':
     *
     *  Store in Global RAM
     */
    rtb_AND2 = ((((((int32_T)Code_Gen_Model_B.Face_Away_Driver) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_m)) || (((int32_T)
      Code_Gen_Model_B.Face_Left_Driver) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_k))) || (((int32_T)
      Code_Gen_Model_B.Face_Toward_Driver) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_g))) || (((int32_T)
      Code_Gen_Model_B.Face_Right_Driver) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_g2)));

    /* Logic: '<S323>/AND1' incorporates:
     *  Logic: '<S323>/AND3'
     *  Logic: '<S323>/AND7'
     *  UnitDelay: '<S323>/Unit Delay2'
     */
    rtb_AND1 = ((rtb_FixPtRelationalOperator && (!rtb_FixPtRelationalOperator_f))
                && (rtb_AND2 || (Code_Gen_Model_DW.UnitDelay2_DSTATE)));

    /* Logic: '<S323>/AND4' incorporates:
     *  Logic: '<S323>/AND5'
     *  Logic: '<S323>/AND8'
     *  UnitDelay: '<S323>/Unit Delay4'
     */
    rtb_FixPtRelationalOperator_f = ((rtb_FixPtRelationalOperator && (!rtb_AND2))
      && (rtb_FixPtRelationalOperator_f || (Code_Gen_Model_DW.UnitDelay4_DSTATE)));

    /* Logic: '<S323>/AND6' */
    Code_Gen_Model_B.Steering_Abs_Angle_Active = (rtb_AND1 ||
      rtb_FixPtRelationalOperator_f);

    /* Switch: '<S323>/Switch8' incorporates:
     *  Constant: '<S332>/Constant'
     *  Logic: '<S323>/AND9'
     *  RelationalOperator: '<S331>/FixPt Relational Operator'
     *  RelationalOperator: '<S332>/Compare'
     *  UnitDelay: '<S14>/Unit Delay'
     *  UnitDelay: '<S331>/Delay Input1'
     *
     * Block description for '<S331>/Delay Input1':
     *
     *  Store in Global RAM
     */
    if (((Code_Gen_Model_B.Steering_Abs_Angle_Active) || (((int32_T)
           rtb_FixPtRelationalOperator) > ((int32_T)
           Code_Gen_Model_DW.DelayInput1_DSTATE_j))) ||
        (Code_Gen_Model_B.Active_GameState != 2)) {
      /* Switch: '<S323>/Switch8' */
      Code_Gen_Model_B.Steering_Abs_Gyro_Latch = Code_Gen_Model_B.Gyro_Angle_rad;
    }

    /* End of Switch: '<S323>/Switch8' */

    /* Switch: '<S323>/Switch2' */
    if (Code_Gen_Model_B.Steering_Abs_Angle_Active) {
      /* Switch: '<S323>/Switch2' incorporates:
       *  Constant: '<S323>/Constant2'
       */
      Code_Gen_Model_B.Steering_Abs_Gyro = 0.0;
    } else {
      /* Switch: '<S323>/Switch2' */
      Code_Gen_Model_B.Steering_Abs_Gyro =
        Code_Gen_Model_B.Steering_Abs_Gyro_Latch;
    }

    /* End of Switch: '<S323>/Switch2' */

    /* Logic: '<S320>/Logical Operator' incorporates:
     *  Logic: '<S320>/Logical Operator1'
     *  Logic: '<S320>/Logical Operator13'
     *  UnitDelay: '<S320>/Unit Delay'
     */
    Code_Gen_Model_B.previous_call_was_for_speaker =
      ((!Code_Gen_Model_B.Align_Amp) && ((Code_Gen_Model_B.Align_Speaker) ||
        (Code_Gen_Model_B.previous_call_was_for_speaker)));

    /* Switch: '<S320>/Switch2' incorporates:
     *  Switch: '<S320>/Switch4'
     *  Switch: '<S320>/Switch5'
     */
    if (Code_Gen_Model_B.previous_call_was_for_speaker) {
      /* Switch: '<S320>/Switch2' incorporates:
       *  Constant: '<S18>/Constant'
       */
      Code_Gen_Model_B.AT_Target_Angle = 0.0;
    } else if (rtb_AT_Tag_5_Active) {
      /* Switch: '<S320>/Switch2' incorporates:
       *  Constant: '<S320>/Constant14'
       *  Switch: '<S320>/Switch4'
       */
      Code_Gen_Model_B.AT_Target_Angle = AT_Target_Tag_5_Field_Angle;
    } else if (rtb_Swerve_Motors_Disabled) {
      /* Switch: '<S320>/Switch2' incorporates:
       *  Constant: '<S320>/Constant13'
       *  Switch: '<S320>/Switch4'
       *  Switch: '<S320>/Switch5'
       */
      Code_Gen_Model_B.AT_Target_Angle = AT_Target_Tag_6_Field_Angle;
    }

    /* End of Switch: '<S320>/Switch2' */

    /* Switch: '<S323>/Switch4' incorporates:
     *  Constant: '<S323>/Constant5'
     *  Switch: '<S323>/Switch1'
     *  Switch: '<S323>/Switch5'
     *  Switch: '<S323>/Switch6'
     *  Switch: '<S323>/Switch7'
     */
    if (Code_Gen_Model_B.Face_Away_Driver) {
      rtb_Switch4 = 0.0;
    } else if (Code_Gen_Model_B.Face_Left_Driver) {
      /* Switch: '<S323>/Switch5' incorporates:
       *  Constant: '<S323>/Constant6'
       */
      rtb_Switch4 = 1.5707963267948966;
    } else if (Code_Gen_Model_B.Face_Toward_Driver) {
      /* Switch: '<S323>/Switch6' incorporates:
       *  Constant: '<S323>/Constant7'
       *  Switch: '<S323>/Switch5'
       */
      rtb_Switch4 = 3.1415926535897931;
    } else if (Code_Gen_Model_B.Face_Right_Driver) {
      /* Switch: '<S323>/Switch7' incorporates:
       *  Constant: '<S323>/Constant8'
       *  Switch: '<S323>/Switch5'
       *  Switch: '<S323>/Switch6'
       */
      rtb_Switch4 = 4.71238898038469;
    } else if (rtb_FixPtRelationalOperator_f) {
      /* Switch: '<S323>/Switch1' incorporates:
       *  Switch: '<S323>/Switch5'
       *  Switch: '<S323>/Switch6'
       *  Switch: '<S323>/Switch7'
       */
      rtb_Switch4 = Code_Gen_Model_B.AT_Target_Angle;
    } else {
      /* Switch: '<S323>/Switch6' incorporates:
       *  Switch: '<S323>/Switch5'
       *  Switch: '<S323>/Switch7'
       *  UnitDelay: '<S323>/Unit Delay1'
       */
      rtb_Switch4 = Code_Gen_Model_DW.UnitDelay1_DSTATE_j2;
    }

    /* End of Switch: '<S323>/Switch4' */

    /* Switch: '<S323>/Switch3' */
    if (Code_Gen_Model_B.Steering_Abs_Angle_Active) {
      /* Switch: '<S323>/Switch3' */
      Code_Gen_Model_B.Steering_Abs_Angle = rtb_Switch4;
    } else {
      /* Switch: '<S323>/Switch3' incorporates:
       *  Constant: '<S323>/Constant3'
       */
      Code_Gen_Model_B.Steering_Abs_Angle = 0.0;
    }

    /* End of Switch: '<S323>/Switch3' */

    /* Merge: '<S12>/Merge1' incorporates:
     *  Sum: '<S323>/Add1'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd = Code_Gen_Model_B.Steering_Abs_Angle +
      Code_Gen_Model_B.Steering_Abs_Gyro;

    /* Merge: '<S12>/Merge2' incorporates:
     *  SignalConversion: '<S323>/Signal Copy'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd = rtb_Switch2_a;

    /* Switch: '<S333>/Switch1' incorporates:
     *  Constant: '<S333>/Constant'
     *  Constant: '<S333>/Constant1'
     */
    if (Code_Gen_Model_B.Is_Boosting) {
      rtb_Init = Boost_Trigger_High_Speed;
    } else {
      rtb_Init = Boost_Trigger_Low_Speed;
    }

    /* End of Switch: '<S333>/Switch1' */

    /* Switch: '<S340>/Init' incorporates:
     *  UnitDelay: '<S340>/FixPt Unit Delay1'
     *  UnitDelay: '<S340>/FixPt Unit Delay2'
     */
    if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_a != 0) {
      rtb_Switch2_a = rtb_Init;
    } else {
      rtb_Switch2_a = Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_f;
    }

    /* End of Switch: '<S340>/Init' */

    /* Sum: '<S338>/Sum1' */
    rtb_rx = rtb_Init - rtb_Switch2_a;

    /* Switch: '<S339>/Switch2' incorporates:
     *  Constant: '<S337>/Constant1'
     *  Constant: '<S337>/Constant3'
     *  RelationalOperator: '<S339>/LowerRelop1'
     *  RelationalOperator: '<S339>/UpperRelop'
     *  Switch: '<S339>/Switch'
     */
    if (rtb_rx > Boost_Trigger_Increasing_Limit) {
      rtb_rx = Boost_Trigger_Increasing_Limit;
    } else if (rtb_rx < Boost_Trigger_Decreasing_Limit) {
      /* Switch: '<S339>/Switch' incorporates:
       *  Constant: '<S337>/Constant1'
       */
      rtb_rx = Boost_Trigger_Decreasing_Limit;
    }

    /* Sum: '<S338>/Sum' incorporates:
     *  Switch: '<S339>/Switch2'
     */
    rtb_Sum_jt = rtb_rx + rtb_Switch2_a;

    /* Switch: '<S324>/Switch' incorporates:
     *  Switch: '<S324>/Switch2'
     */
    if (rtb_Relative_Translation_Flag) {
      /* Merge: '<S12>/Merge4' incorporates:
       *  Gain: '<S324>/Gain'
       */
      Code_Gen_Model_B.Translation_Speed = Translation_Twist_Gain * rtb_thetay_n;
    } else if (rtb_Compare_pf) {
      /* Merge: '<S12>/Merge4' incorporates:
       *  Gain: '<S324>/Gain2'
       *  Math: '<S324>/Magnitude1'
       *  Switch: '<S324>/Switch2'
       */
      Code_Gen_Model_B.Translation_Speed = AT_XY_Control_Gain * rt_hypotd_snf
        (Code_Gen_Model_B.AT_Error_X, Code_Gen_Model_B.AT_Error_Y);
    } else {
      /* Product: '<S333>/Product' incorporates:
       *  Switch: '<S324>/Switch2'
       */
      rtb_Switch1_pz = rtb_thetay * rtb_Sum_jt;

      /* Saturate: '<S333>/Saturation' incorporates:
       *  Switch: '<S324>/Switch2'
       */
      if (rtb_Switch1_pz > Boost_Trigger_High_Speed) {
        /* Merge: '<S12>/Merge4' */
        Code_Gen_Model_B.Translation_Speed = Boost_Trigger_High_Speed;
      } else if (rtb_Switch1_pz < (-Boost_Trigger_High_Speed)) {
        /* Merge: '<S12>/Merge4' */
        Code_Gen_Model_B.Translation_Speed = -Boost_Trigger_High_Speed;
      } else {
        /* Merge: '<S12>/Merge4' */
        Code_Gen_Model_B.Translation_Speed = rtb_Switch1_pz;
      }

      /* End of Saturate: '<S333>/Saturation' */
    }

    /* End of Switch: '<S324>/Switch' */

    /* Merge: '<S12>/Merge7' incorporates:
     *  Constant: '<S18>/Constant3'
     *  SignalConversion generated from: '<S18>/Spline_Enable'
     */
    Code_Gen_Model_B.Spline_Enable = false;

    /* Merge: '<S12>/Merge9' incorporates:
     *  Constant: '<S18>/Constant9'
     *  SignalConversion generated from: '<S18>/Spline_Num_Poses'
     */
    Code_Gen_Model_B.Spline_Num_Poses = 10.0;

    /* Merge: '<S12>/Merge10' incorporates:
     *  Constant: '<S18>/Constant1'
     *  SignalConversion generated from: '<S18>/Test_Mode'
     */
    Code_Gen_Model_B.Test_Mode = false;

    /* SignalConversion generated from: '<S18>/Enable_Wheels' incorporates:
     *  Constant: '<S18>/Constant6'
     */
    rtb_thetay = 0.0;

    /* SignalConversion generated from: '<S18>/Reset_Wheel_Offsets' incorporates:
     *  Constant: '<S18>/Constant13'
     */
    rtb_rx = 0.0;

    /* SignalConversion generated from: '<S18>/Disable_Wheels' incorporates:
     *  Constant: '<S18>/Constant14'
     */
    rtb_thetay_n = 0.0;

    /* SignalConversion generated from: '<S18>/Swerve_Motors_Disabled' incorporates:
     *  Constant: '<S18>/Constant2'
     */
    rtb_Swerve_Motors_Disabled = false;

    /* Merge: '<S12>/Merge12' incorporates:
     *  Constant: '<S322>/Constant5'
     *  SignalConversion generated from: '<S18>/Elevator_Motor_Enable'
     */
    Code_Gen_Model_B.Elevator_Motor_Enable = true;

    /* Switch: '<S322>/Switch' incorporates:
     *  Constant: '<S322>/Constant'
     *  Inport: '<Root>/Gamepad_B1_A'
     *  Inport: '<Root>/Gamepad_B2_B'
     *  Inport: '<Root>/Gamepad_B3_X'
     *  Inport: '<Root>/Gamepad_B4_Y'
     *  Inport: '<Root>/Gamepad_Back'
     *  Inport: '<Root>/Gamepad_Start'
     *  RelationalOperator: '<S343>/FixPt Relational Operator'
     *  RelationalOperator: '<S344>/FixPt Relational Operator'
     *  RelationalOperator: '<S345>/FixPt Relational Operator'
     *  RelationalOperator: '<S346>/FixPt Relational Operator'
     *  RelationalOperator: '<S347>/FixPt Relational Operator'
     *  RelationalOperator: '<S348>/FixPt Relational Operator'
     *  Switch: '<S322>/Switch1'
     *  Switch: '<S322>/Switch2'
     *  Switch: '<S322>/Switch3'
     *  Switch: '<S322>/Switch4'
     *  Switch: '<S322>/Switch5'
     *  UnitDelay: '<S343>/Delay Input1'
     *  UnitDelay: '<S344>/Delay Input1'
     *  UnitDelay: '<S345>/Delay Input1'
     *  UnitDelay: '<S346>/Delay Input1'
     *  UnitDelay: '<S347>/Delay Input1'
     *  UnitDelay: '<S348>/Delay Input1'
     *
     * Block description for '<S343>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S344>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S345>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S346>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S347>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S348>/Delay Input1':
     *
     *  Store in Global RAM
     */
    if (Code_Gen_Model_U.Gamepad_B1_A > Code_Gen_Model_DW.DelayInput1_DSTATE_c)
    {
      rtb_Switch_ms = Elevator_Height_L1;
    } else if (Code_Gen_Model_U.Gamepad_B2_B >
               Code_Gen_Model_DW.DelayInput1_DSTATE_nr) {
      /* Switch: '<S322>/Switch1' incorporates:
       *  Constant: '<S322>/Constant1'
       */
      rtb_Switch_ms = Elevator_Height_L3;
    } else if (Code_Gen_Model_U.Gamepad_B3_X >
               Code_Gen_Model_DW.DelayInput1_DSTATE_ez) {
      /* Switch: '<S322>/Switch2' incorporates:
       *  Constant: '<S322>/Constant2'
       *  Switch: '<S322>/Switch1'
       */
      rtb_Switch_ms = Elevator_Height_L2;
    } else if (Code_Gen_Model_U.Gamepad_B4_Y >
               Code_Gen_Model_DW.DelayInput1_DSTATE_nh) {
      /* Switch: '<S322>/Switch3' incorporates:
       *  Constant: '<S322>/Constant3'
       *  Switch: '<S322>/Switch1'
       *  Switch: '<S322>/Switch2'
       */
      rtb_Switch_ms = Elevator_Height_L4;
    } else if (Code_Gen_Model_U.Gamepad_Start >
               Code_Gen_Model_DW.DelayInput1_DSTATE_i) {
      /* Switch: '<S322>/Switch4' incorporates:
       *  Constant: '<S322>/Constant4'
       *  Switch: '<S322>/Switch1'
       *  Switch: '<S322>/Switch2'
       *  Switch: '<S322>/Switch3'
       */
      rtb_Switch_ms = Elevator_Height_Pickup;
    } else if (Code_Gen_Model_U.Gamepad_Back >
               Code_Gen_Model_DW.DelayInput1_DSTATE_pd) {
      /* Switch: '<S322>/Switch5' incorporates:
       *  Constant: '<S322>/Constant6'
       *  Switch: '<S322>/Switch1'
       *  Switch: '<S322>/Switch2'
       *  Switch: '<S322>/Switch3'
       *  Switch: '<S322>/Switch4'
       */
      rtb_Switch_ms = Elevator_Height_Bottom;
    } else {
      /* Switch: '<S322>/Switch4' incorporates:
       *  Switch: '<S322>/Switch1'
       *  Switch: '<S322>/Switch2'
       *  Switch: '<S322>/Switch3'
       *  UnitDelay: '<S322>/Unit Delay'
       */
      rtb_Switch_ms = Code_Gen_Model_DW.UnitDelay_DSTATE_ad;
    }

    /* End of Switch: '<S322>/Switch' */

    /* Switch: '<S352>/Init' incorporates:
     *  UnitDelay: '<S352>/FixPt Unit Delay1'
     *  UnitDelay: '<S352>/FixPt Unit Delay2'
     */
    if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_h != 0) {
      rtb_Init = rtb_Switch_ms;
    } else {
      rtb_Init = Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_i;
    }

    /* End of Switch: '<S352>/Init' */

    /* Sum: '<S350>/Sum1' */
    rtb_Switch2_a = rtb_Switch_ms - rtb_Init;

    /* Switch: '<S351>/Switch2' incorporates:
     *  Constant: '<S349>/Constant1'
     *  Constant: '<S349>/Constant3'
     *  RelationalOperator: '<S351>/LowerRelop1'
     *  RelationalOperator: '<S351>/UpperRelop'
     *  Switch: '<S351>/Switch'
     */
    if (rtb_Switch2_a > Elevator_Height_RL_Inc) {
      rtb_Switch2_a = Elevator_Height_RL_Inc;
    } else if (rtb_Switch2_a < Elevator_Height_RL_Dec) {
      /* Switch: '<S351>/Switch' incorporates:
       *  Constant: '<S349>/Constant1'
       */
      rtb_Switch2_a = Elevator_Height_RL_Dec;
    }

    /* End of Switch: '<S351>/Switch2' */

    /* Sum: '<S350>/Sum' */
    rtb_Switch2_a += rtb_Init;

    /* Merge: '<S12>/Merge11' incorporates:
     *  SignalConversion generated from: '<S18>/Elevator_Height_Desired'
     */
    Code_Gen_Model_B.Elevator_Height_Desired = rtb_Switch2_a;

    /* Update for UnitDelay: '<S336>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_l = rtb_Switch1_p2;

    /* Update for UnitDelay: '<S336>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_p = rtb_Switch2;

    /* Update for UnitDelay: '<S331>/Delay Input1'
     *
     * Block description for '<S331>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_j = rtb_FixPtRelationalOperator;

    /* Update for UnitDelay: '<S330>/Delay Input1'
     *
     * Block description for '<S330>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_f = rtb_FixPtRelationalOperator_ea;

    /* Update for UnitDelay: '<S326>/Delay Input1'
     *
     * Block description for '<S326>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_m = Code_Gen_Model_B.Face_Away_Driver;

    /* Update for UnitDelay: '<S327>/Delay Input1'
     *
     * Block description for '<S327>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_k = Code_Gen_Model_B.Face_Left_Driver;

    /* Update for UnitDelay: '<S328>/Delay Input1'
     *
     * Block description for '<S328>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_g = Code_Gen_Model_B.Face_Toward_Driver;

    /* Update for UnitDelay: '<S329>/Delay Input1'
     *
     * Block description for '<S329>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_g2 = Code_Gen_Model_B.Face_Right_Driver;

    /* Update for UnitDelay: '<S323>/Unit Delay2' */
    Code_Gen_Model_DW.UnitDelay2_DSTATE = rtb_AND1;

    /* Update for UnitDelay: '<S323>/Unit Delay4' */
    Code_Gen_Model_DW.UnitDelay4_DSTATE = rtb_FixPtRelationalOperator_f;

    /* Update for UnitDelay: '<S323>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_j2 = rtb_Switch4;

    /* Update for UnitDelay: '<S340>/FixPt Unit Delay2' incorporates:
     *  Constant: '<S340>/FixPt Constant'
     */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_a = 0U;

    /* Update for UnitDelay: '<S340>/FixPt Unit Delay1' */
    Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_f = rtb_Sum_jt;

    /* Update for UnitDelay: '<S343>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_B1_A'
     *
     * Block description for '<S343>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_c = Code_Gen_Model_U.Gamepad_B1_A;

    /* Update for UnitDelay: '<S344>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_B2_B'
     *
     * Block description for '<S344>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_nr = Code_Gen_Model_U.Gamepad_B2_B;

    /* Update for UnitDelay: '<S345>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_B3_X'
     *
     * Block description for '<S345>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_ez = Code_Gen_Model_U.Gamepad_B3_X;

    /* Update for UnitDelay: '<S346>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_B4_Y'
     *
     * Block description for '<S346>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_nh = Code_Gen_Model_U.Gamepad_B4_Y;

    /* Update for UnitDelay: '<S347>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_Start'
     *
     * Block description for '<S347>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_i = Code_Gen_Model_U.Gamepad_Start;

    /* Update for UnitDelay: '<S348>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_Back'
     *
     * Block description for '<S348>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_pd = Code_Gen_Model_U.Gamepad_Back;

    /* Update for UnitDelay: '<S322>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_ad = rtb_Switch_ms;

    /* Update for UnitDelay: '<S352>/FixPt Unit Delay2' incorporates:
     *  Constant: '<S352>/FixPt Constant'
     */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_h = 0U;

    /* Update for UnitDelay: '<S352>/FixPt Unit Delay1' */
    Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_i = rtb_Switch2_a;

    /* End of Outputs for SubSystem: '<S1>/Teleop' */
    break;

   default:
    /* InitializeConditions for IfAction SubSystem: '<S1>/Test' incorporates:
     *  ActionPort: '<S19>/Action Port'
     */
    /* InitializeConditions for SwitchCase: '<S1>/Switch Case' incorporates:
     *  UnitDelay: '<S19>/Unit Delay'
     */
    Code_Gen_Model_DW.UnitDelay_DSTATE_ir = ((rtAction == rtPrevAction) &&
      (Code_Gen_Model_DW.UnitDelay_DSTATE_ir));

    /* End of InitializeConditions for SubSystem: '<S1>/Test' */

    /* Outputs for IfAction SubSystem: '<S1>/Test' incorporates:
     *  ActionPort: '<S19>/Action Port'
     */
    /* Merge: '<S12>/Merge1' incorporates:
     *  Constant: '<S19>/Constant1'
     *  SignalConversion generated from: '<S19>/Steering_Abs_Cmd'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd = 0.0;

    /* Merge: '<S12>/Merge2' incorporates:
     *  Constant: '<S19>/Constant2'
     *  SignalConversion generated from: '<S19>/Steering_Rel_Cmd'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd = 0.0;

    /* Merge: '<S12>/Merge3' incorporates:
     *  Constant: '<S19>/Constant3'
     *  SignalConversion generated from: '<S19>/Translation_Angle'
     */
    Code_Gen_Model_B.Translation_Angle = 0.0;

    /* Merge: '<S12>/Merge4' incorporates:
     *  Constant: '<S19>/Constant4'
     *  SignalConversion generated from: '<S19>/Translation_Speed'
     */
    Code_Gen_Model_B.Translation_Speed = 0.0;

    /* SignalConversion generated from: '<S19>/Is_Absolute_Translation' incorporates:
     *  Constant: '<S19>/Constant5'
     */
    rtb_Is_Absolute_Translation_g = false;

    /* SignalConversion generated from: '<S19>/Is_Absolute_Steering' incorporates:
     *  Constant: '<S19>/Constant6'
     */
    rtb_Is_Absolute_Steering = false;

    /* Merge: '<S12>/Merge7' incorporates:
     *  Constant: '<S19>/Constant7'
     *  SignalConversion generated from: '<S19>/Spline_Enable'
     */
    Code_Gen_Model_B.Spline_Enable = false;

    /* Merge: '<S12>/Merge9' incorporates:
     *  Constant: '<S19>/Constant9'
     *  SignalConversion generated from: '<S19>/Spline_Num_Poses'
     */
    Code_Gen_Model_B.Spline_Num_Poses = 10.0;

    /* Merge: '<S12>/Merge10' incorporates:
     *  Constant: '<S19>/Constant12'
     *  SignalConversion generated from: '<S19>/Test_Mode'
     */
    Code_Gen_Model_B.Test_Mode = true;

    /* Switch: '<S19>/Switch' incorporates:
     *  Constant: '<S19>/Constant14'
     *  Switch: '<S19>/Switch1'
     *  UnitDelay: '<S19>/Unit Delay'
     */
    if (rtb_FixPtRelationalOperator_ea) {
      rtb_Swerve_Motors_Disabled = true;
    } else if (rtb_FixPtRelationalOperator) {
      /* Switch: '<S19>/Switch1' incorporates:
       *  Constant: '<S19>/Constant13'
       */
      rtb_Swerve_Motors_Disabled = false;
    } else {
      rtb_Swerve_Motors_Disabled = Code_Gen_Model_DW.UnitDelay_DSTATE_ir;
    }

    /* End of Switch: '<S19>/Switch' */

    /* Merge: '<S12>/Merge11' incorporates:
     *  Constant: '<S19>/Constant10'
     *  SignalConversion generated from: '<S19>/Elevator_Height_Desired'
     */
    Code_Gen_Model_B.Elevator_Height_Desired = 0.0;

    /* Merge: '<S12>/Merge12' incorporates:
     *  Constant: '<S19>/Constant11'
     *  SignalConversion generated from: '<S19>/Elevator_Motor_Enable'
     */
    Code_Gen_Model_B.Elevator_Motor_Enable = false;

    /* DataTypeConversion: '<S19>/Cast To Boolean1' */
    rtb_thetay = rtb_FixPtRelationalOperator;

    /* DataTypeConversion: '<S19>/Cast To Boolean3' */
    rtb_thetay_n = rtb_FixPtRelationalOperator_ea;

    /* DataTypeConversion: '<S19>/Cast To Boolean2' incorporates:
     *  Inport: '<Root>/Joystick_Left_B12'
     *  RelationalOperator: '<S37>/FixPt Relational Operator'
     *  UnitDelay: '<S37>/Delay Input1'
     *
     * Block description for '<S37>/Delay Input1':
     *
     *  Store in Global RAM
     */
    rtb_rx = (Code_Gen_Model_U.Joystick_Left_B12 >
              Code_Gen_Model_DW.DelayInput1_DSTATE_e);

    /* Update for UnitDelay: '<S19>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_ir = rtb_Swerve_Motors_Disabled;

    /* End of Outputs for SubSystem: '<S1>/Test' */
    break;
  }

  /* End of SwitchCase: '<S1>/Switch Case' */

  /* Switch: '<S8>/Switch' incorporates:
   *  Constant: '<S8>/Constant'
   *  Constant: '<S8>/Constant1'
   *  Inport: '<Root>/IsBlueAlliance'
   */
  if (Code_Gen_Model_U.IsBlueAlliance != 0.0) {
    tmp = 0.0;
  } else {
    tmp = 3.1415926535897931;
  }

  /* Sum: '<S8>/Add' incorporates:
   *  Switch: '<S8>/Switch'
   */
  Code_Gen_Model_B.Gyro_Angle_Field_rad = Code_Gen_Model_B.Gyro_Angle_rad + tmp;

  /* If: '<S15>/If' incorporates:
   *  Constant: '<S105>/Constant'
   *  Merge: '<S15>/Merge'
   *  Merge: '<S15>/Merge1'
   *  Merge: '<S15>/Merge2'
   *  Merge: '<S15>/Merge3'
   *  Merge: '<S15>/Merge4'
   *  Merge: '<S15>/Merge5'
   *  Merge: '<S15>/Merge7'
   *  Merge: '<S15>/Merge8'
   *  SignalConversion generated from: '<S105>/Robot_Reached_Destination'
   */
  rtPrevAction = Code_Gen_Model_DW.If_ActiveSubsystem;
  Code_Gen_Model_DW.If_ActiveSubsystem = 1;
  if ((rtPrevAction != 1) && (rtPrevAction == 0)) {
    /* Disable for If: '<S111>/If' */
    if (Code_Gen_Model_DW.If_ActiveSubsystem_h == 0) {
      /* Disable for If: '<S114>/If' */
      if (Code_Gen_Model_DW.If_ActiveSubsystem_o == 0) {
        /* Disable for If: '<S116>/If' */
        Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;
      }

      Code_Gen_Model_DW.If_ActiveSubsystem_o = -1;

      /* End of Disable for If: '<S114>/If' */
    }

    Code_Gen_Model_DW.If_ActiveSubsystem_h = -1;

    /* End of Disable for If: '<S111>/If' */
  }

  /* Outputs for IfAction SubSystem: '<S15>/Pass Through' incorporates:
   *  ActionPort: '<S105>/Action Port'
   */
  Code_Gen_Model_B.Robot_Reached_Destination = true;
  Code_Gen_Model_B.Steering_Abs_Cmd_SPF = Code_Gen_Model_B.Steering_Abs_Cmd;
  Code_Gen_Model_B.Steering_Rel_Cmd_SPF = Code_Gen_Model_B.Steering_Rel_Cmd;
  Code_Gen_Model_B.Translation_Speed_SPF = Code_Gen_Model_B.Translation_Speed;
  Code_Gen_Model_B.Translation_Angle_SPF = Code_Gen_Model_B.Translation_Angle;
  Code_Gen_Model_B.Is_Absolute_Translation_SPF = rtb_Is_Absolute_Translation_g;
  Code_Gen_Model_B.Is_Absolute_Steering_SPF = rtb_Is_Absolute_Steering;
  Code_Gen_Model_B.Gyro_Angle_SPF = Code_Gen_Model_B.Gyro_Angle_rad;

  /* End of If: '<S15>/If' */
  /* End of Outputs for SubSystem: '<S15>/Pass Through' */

  /* UnitDelay: '<S259>/Unit Delay' */
  rtb_Merge1 = Code_Gen_Model_B.Translation_Speed_RL;

  /* Signum: '<S259>/Sign2' */
  if (rtIsNaN(rtb_Merge1)) {
    tmp = (rtNaN);
  } else if (rtb_Merge1 < 0.0) {
    tmp = -1.0;
  } else {
    tmp = (rtb_Merge1 > 0.0);
  }

  /* Signum: '<S259>/Sign1' */
  if (rtIsNaN(Code_Gen_Model_B.Translation_Speed_SPF)) {
    rtb_Add_du = (rtNaN);
  } else if (Code_Gen_Model_B.Translation_Speed_SPF < 0.0) {
    rtb_Add_du = -1.0;
  } else {
    rtb_Add_du = (Code_Gen_Model_B.Translation_Speed_SPF > 0.0);
  }

  /* Product: '<S259>/Product1' incorporates:
   *  Signum: '<S259>/Sign1'
   *  Signum: '<S259>/Sign2'
   */
  tmp *= rtb_Add_du;
  if (rtIsNaN(tmp)) {
    rtb_Num_Segments = 0;
  } else {
    rtb_Num_Segments = (int32_T)fmod(tmp, 256.0);
  }

  /* Switch: '<S259>/Switch' incorporates:
   *  Constant: '<S259>/Constant'
   *  Constant: '<S264>/Constant'
   *  Constant: '<S265>/Constant'
   *  Logic: '<S259>/or'
   *  Product: '<S259>/Product1'
   *  RelationalOperator: '<S264>/Compare'
   *  RelationalOperator: '<S265>/Compare'
   */
  if ((rtb_Merge1 == 0.0) || (((rtb_Num_Segments < 0) ? ((int32_T)((int8_T)
          (-((int8_T)((uint8_T)(-((real_T)rtb_Num_Segments))))))) :
        rtb_Num_Segments) > 0)) {
    rtb_Switch_ms = Code_Gen_Model_B.Translation_Speed_SPF;
  } else {
    rtb_Switch_ms = 0.0;
  }

  /* End of Switch: '<S259>/Switch' */

  /* RelationalOperator: '<S266>/Compare' incorporates:
   *  Constant: '<S266>/Constant'
   */
  rtb_Is_Absolute_Translation_g = (rtb_Switch_ms == 0.0);

  /* RelationalOperator: '<S267>/Compare' incorporates:
   *  Constant: '<S267>/Constant'
   */
  rtb_Is_Absolute_Steering = (rtb_Switch_ms > 0.0);

  /* Abs: '<S259>/Abs' incorporates:
   *  Sum: '<S259>/Subtract'
   */
  rtb_Merge1 = fabs(rtb_Merge1 - Code_Gen_Model_B.Translation_Speed_SPF);

  /* Switch: '<S259>/Switch5' incorporates:
   *  Constant: '<S259>/Constant1'
   *  Switch: '<S259>/Switch1'
   *  UnaryMinus: '<S259>/Unary Minus'
   */
  if (rtb_Is_Absolute_Translation_g) {
    /* SignalConversion generated from: '<S259>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S259>/Constant4'
     *  Constant: '<S259>/Constant6'
     */
    rtb_Akxhatkk1[0] = Translation_Speed_Approach_Zero_Final_Thresh;
    rtb_Akxhatkk1[1] = 1.0;

    /* SignalConversion generated from: '<S259>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S259>/Constant2'
     *  Constant: '<S259>/Constant5'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Translation_Speed_Approach_Zero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S259>/Lookup Table Dynamic' */
    /* Dynamic Look-Up Table Block: '<S259>/Lookup Table Dynamic'
     * Input0  Data Type:  Floating Point real_T
     * Input1  Data Type:  Floating Point real_T
     * Input2  Data Type:  Floating Point real_T
     * Output0 Data Type:  Floating Point real_T
     * Lookup Method: Linear_Endpoint
     *
     */
    LookUp_real_T_real_T( &(rtb_LookupTableDynamic_j), &rtb_Akxhatkk1[0],
                         rtb_Merge1, &rtb_Minus_n[0], 1U);
    rtb_Switch1_p2 = rtb_LookupTableDynamic_j;
    tmp = -Translation_Speed_Rate_Limit_Dec;
  } else {
    /* SignalConversion generated from: '<S259>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S259>/Constant10'
     *  Constant: '<S259>/Constant8'
     */
    rtb_Akxhatkk1[0] = Translation_Speed_NonZero_Final_Scale_Factor;
    rtb_Akxhatkk1[1] = 1.0;

    /* SignalConversion generated from: '<S259>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S259>/Constant7'
     *  Constant: '<S259>/Constant9'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Translation_Speed_NonZero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S259>/Lookup Table Dynamic1' */
    /* Dynamic Look-Up Table Block: '<S259>/Lookup Table Dynamic1'
     * Input0  Data Type:  Floating Point real_T
     * Input1  Data Type:  Floating Point real_T
     * Input2  Data Type:  Floating Point real_T
     * Output0 Data Type:  Floating Point real_T
     * Lookup Method: Linear_Endpoint
     *
     */
    LookUp_real_T_real_T( &(rtb_LookupTableDynamic1_i), &rtb_Akxhatkk1[0],
                         rtb_Merge1, &rtb_Minus_n[0], 1U);
    rtb_Switch1_p2 = rtb_LookupTableDynamic1_i;

    /* Switch: '<S259>/Switch3' incorporates:
     *  Constant: '<S259>/Constant1'
     *  Constant: '<S259>/Constant3'
     *  UnaryMinus: '<S259>/Unary Minus'
     */
    if (rtb_Is_Absolute_Steering) {
      tmp = Translation_Speed_Rate_Limit_Inc;
    } else {
      tmp = -Translation_Speed_Rate_Limit_Dec;
    }

    /* End of Switch: '<S259>/Switch3' */
  }

  /* End of Switch: '<S259>/Switch5' */

  /* Product: '<S259>/Product' incorporates:
   *  Switch: '<S259>/Switch1'
   */
  rtb_Switch2 = tmp * rtb_Switch1_p2;

  /* Switch: '<S270>/Init' incorporates:
   *  UnitDelay: '<S270>/FixPt Unit Delay1'
   *  UnitDelay: '<S270>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE != 0) {
    rtb_Merge1 = rtb_Switch_ms;
  } else {
    rtb_Merge1 = Code_Gen_Model_B.Translation_Speed_RL;
  }

  /* End of Switch: '<S270>/Init' */

  /* Sum: '<S268>/Sum1' */
  rtb_Switch4 = rtb_Switch_ms - rtb_Merge1;

  /* Switch: '<S269>/Switch2' incorporates:
   *  RelationalOperator: '<S269>/LowerRelop1'
   */
  if (!(rtb_Switch4 > rtb_Switch2)) {
    /* Switch: '<S259>/Switch2' incorporates:
     *  Constant: '<S259>/Constant1'
     *  Constant: '<S259>/Constant3'
     *  Switch: '<S259>/Switch4'
     *  UnaryMinus: '<S259>/Unary Minus1'
     */
    if (rtb_Is_Absolute_Translation_g) {
      tmp = Translation_Speed_Rate_Limit_Dec;
    } else if (rtb_Is_Absolute_Steering) {
      /* Switch: '<S259>/Switch4' incorporates:
       *  Constant: '<S259>/Constant1'
       */
      tmp = Translation_Speed_Rate_Limit_Dec;
    } else {
      tmp = -Translation_Speed_Rate_Limit_Inc;
    }

    /* Product: '<S259>/Product2' incorporates:
     *  Switch: '<S259>/Switch2'
     */
    rtb_Switch2 = tmp * rtb_Switch1_p2;

    /* Switch: '<S269>/Switch' incorporates:
     *  RelationalOperator: '<S269>/UpperRelop'
     */
    if (!(rtb_Switch4 < rtb_Switch2)) {
      rtb_Switch2 = rtb_Switch4;
    }

    /* End of Switch: '<S269>/Switch' */
  }

  /* End of Switch: '<S269>/Switch2' */

  /* Sum: '<S268>/Sum' */
  Code_Gen_Model_B.Translation_Speed_RL = rtb_Switch2 + rtb_Merge1;

  /* Switch: '<S262>/Switch' */
  if (Code_Gen_Model_B.Is_Absolute_Translation_SPF) {
    /* Switch: '<S262>/Switch' incorporates:
     *  Constant: '<S294>/Constant3'
     *  Constant: '<S294>/Constant4'
     *  Math: '<S294>/Math Function'
     *  Sum: '<S262>/Subtract'
     *  Sum: '<S294>/Add1'
     *  Sum: '<S294>/Add2'
     */
    Code_Gen_Model_B.Translation_Steering_Cmd = rt_modd_snf
      ((Code_Gen_Model_B.Translation_Angle_SPF - Code_Gen_Model_B.Gyro_Angle_SPF)
       + 3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;
  } else {
    /* Switch: '<S262>/Switch' */
    Code_Gen_Model_B.Translation_Steering_Cmd =
      Code_Gen_Model_B.Translation_Angle_SPF;
  }

  /* End of Switch: '<S262>/Switch' */

  /* Sum: '<S290>/Add1' incorporates:
   *  Constant: '<S290>/Constant3'
   *  Constant: '<S290>/Constant4'
   *  Math: '<S290>/Math Function'
   *  Sum: '<S289>/Sum'
   *  Sum: '<S290>/Add2'
   */
  rtb_Switch2 = rt_modd_snf((Code_Gen_Model_B.Steering_Abs_Cmd_SPF -
    Code_Gen_Model_B.Gyro_Angle_SPF) + 3.1415926535897931, 6.2831853071795862) -
    3.1415926535897931;

  /* Sum: '<S292>/Sum1' incorporates:
   *  Constant: '<S289>/Constant2'
   *  Product: '<S292>/Product'
   *  Sum: '<S292>/Sum'
   *  UnitDelay: '<S292>/Unit Delay1'
   */
  rtb_Merge1 = ((rtb_Switch2 - Code_Gen_Model_DW.UnitDelay1_DSTATE_i) *
                Steering_Heading_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_i;

  /* Product: '<S289>/Product' incorporates:
   *  Constant: '<S289>/Constant3'
   */
  rtb_Switch1_p2 = rtb_Merge1 * Steering_Heading_Control_D;

  /* Sum: '<S291>/Diff' incorporates:
   *  UnitDelay: '<S291>/UD'
   *
   * Block description for '<S291>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S291>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Switch1_pz = rtb_Switch1_p2 - Code_Gen_Model_DW.UD_DSTATE;

  /* Saturate: '<S289>/Saturation' */
  if (rtb_Switch1_pz > Steering_Heading_Control_D_UL) {
    rtb_Switch1_pz = Steering_Heading_Control_D_UL;
  } else if (rtb_Switch1_pz < Steering_Heading_Control_D_LL) {
    rtb_Switch1_pz = Steering_Heading_Control_D_LL;
  }

  /* Sum: '<S289>/Add' incorporates:
   *  Gain: '<S289>/Gain1'
   *  Saturate: '<S289>/Saturation'
   */
  rtb_Switch4 = (Steering_Heading_Control_P * rtb_Switch2) + rtb_Switch1_pz;

  /* Sum: '<S289>/Subtract' incorporates:
   *  Constant: '<S289>/Constant'
   */
  rtb_rx_h = Steering_Heading_Control_Total_UL - rtb_Switch4;

  /* Sum: '<S289>/Sum2' incorporates:
   *  Gain: '<S289>/Gain2'
   *  UnitDelay: '<S289>/Unit Delay'
   */
  rtb_Switch2 = (Steering_Heading_Control_I * rtb_Switch2) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_m;

  /* Switch: '<S293>/Switch2' incorporates:
   *  RelationalOperator: '<S293>/LowerRelop1'
   */
  if (!(rtb_Switch2 > rtb_rx_h)) {
    /* Sum: '<S289>/Subtract1' incorporates:
     *  Constant: '<S289>/Constant1'
     */
    rtb_Sum_jt = Steering_Heading_Control_Total_LL - rtb_Switch4;

    /* Switch: '<S293>/Switch' incorporates:
     *  RelationalOperator: '<S293>/UpperRelop'
     */
    if (rtb_Switch2 < rtb_Sum_jt) {
      rtb_rx_h = rtb_Sum_jt;
    } else {
      rtb_rx_h = rtb_Switch2;
    }

    /* End of Switch: '<S293>/Switch' */
  }

  /* End of Switch: '<S293>/Switch2' */

  /* Saturate: '<S289>/Saturation1' */
  if (rtb_rx_h > Steering_Heading_Control_I_UL) {
    rtb_Switch2 = Steering_Heading_Control_I_UL;
  } else if (rtb_rx_h < Steering_Heading_Control_I_LL) {
    rtb_Switch2 = Steering_Heading_Control_I_LL;
  } else {
    rtb_Switch2 = rtb_rx_h;
  }

  /* End of Saturate: '<S289>/Saturation1' */

  /* Sum: '<S289>/Add1' */
  rtb_Switch1_pz = rtb_Switch4 + rtb_Switch2;

  /* Saturate: '<S289>/Saturation2' */
  if (rtb_Switch1_pz > Steering_Heading_Control_Total_UL) {
    /* Saturate: '<S289>/Saturation2' */
    Code_Gen_Model_B.Steering_Localized_PID = Steering_Heading_Control_Total_UL;
  } else if (rtb_Switch1_pz < Steering_Heading_Control_Total_LL) {
    /* Saturate: '<S289>/Saturation2' */
    Code_Gen_Model_B.Steering_Localized_PID = Steering_Heading_Control_Total_LL;
  } else {
    /* Saturate: '<S289>/Saturation2' */
    Code_Gen_Model_B.Steering_Localized_PID = rtb_Switch1_pz;
  }

  /* End of Saturate: '<S289>/Saturation2' */

  /* Switch: '<S273>/Switch' incorporates:
   *  Abs: '<S273>/Abs'
   *  Constant: '<S273>/Constant'
   *  Constant: '<S288>/Constant'
   *  RelationalOperator: '<S288>/Compare'
   */
  if (fabs(Code_Gen_Model_B.Steering_Localized_PID) >
      Steering_Heading_Control_Deadzone) {
    rtb_rx_h = Code_Gen_Model_B.Steering_Localized_PID;
  } else {
    rtb_rx_h = 0.0;
  }

  /* End of Switch: '<S273>/Switch' */

  /* Signum: '<S272>/Sign2' incorporates:
   *  UnitDelay: '<S272>/Unit Delay'
   */
  if (rtIsNaN(Code_Gen_Model_DW.UnitDelay_DSTATE_d)) {
    tmp = (rtNaN);
  } else if (Code_Gen_Model_DW.UnitDelay_DSTATE_d < 0.0) {
    tmp = -1.0;
  } else {
    tmp = (Code_Gen_Model_DW.UnitDelay_DSTATE_d > 0.0);
  }

  /* Signum: '<S272>/Sign1' */
  if (rtIsNaN(rtb_rx_h)) {
    rtb_Add_du = (rtNaN);
  } else if (rtb_rx_h < 0.0) {
    rtb_Add_du = -1.0;
  } else {
    rtb_Add_du = (rtb_rx_h > 0.0);
  }

  /* Product: '<S272>/Product1' incorporates:
   *  Signum: '<S272>/Sign1'
   *  Signum: '<S272>/Sign2'
   */
  tmp *= rtb_Add_du;
  if (rtIsNaN(tmp)) {
    rtb_Num_Segments = 0;
  } else {
    rtb_Num_Segments = (int32_T)fmod(tmp, 256.0);
  }

  /* Switch: '<S272>/Switch' incorporates:
   *  Constant: '<S272>/Constant'
   *  Constant: '<S281>/Constant'
   *  Constant: '<S282>/Constant'
   *  Logic: '<S272>/or'
   *  Product: '<S272>/Product1'
   *  RelationalOperator: '<S281>/Compare'
   *  RelationalOperator: '<S282>/Compare'
   *  UnitDelay: '<S272>/Unit Delay'
   */
  if ((Code_Gen_Model_DW.UnitDelay_DSTATE_d == 0.0) || (((rtb_Num_Segments < 0) ?
        ((int32_T)((int8_T)(-((int8_T)((uint8_T)(-((real_T)rtb_Num_Segments)))))))
        : rtb_Num_Segments) > 0)) {
    rtb_rx_o = rtb_rx_h;
  } else {
    rtb_rx_o = 0.0;
  }

  /* End of Switch: '<S272>/Switch' */

  /* RelationalOperator: '<S283>/Compare' incorporates:
   *  Constant: '<S283>/Constant'
   */
  rtb_Is_Absolute_Translation_g = (rtb_rx_o == 0.0);

  /* RelationalOperator: '<S284>/Compare' incorporates:
   *  Constant: '<S284>/Constant'
   */
  rtb_Is_Absolute_Steering = (rtb_rx_o > 0.0);

  /* Abs: '<S272>/Abs' incorporates:
   *  Sum: '<S272>/Subtract'
   *  UnitDelay: '<S272>/Unit Delay'
   */
  rtb_Switch4 = fabs(Code_Gen_Model_DW.UnitDelay_DSTATE_d - rtb_rx_h);

  /* Switch: '<S272>/Switch5' incorporates:
   *  Constant: '<S272>/Constant1'
   *  Switch: '<S272>/Switch1'
   *  UnaryMinus: '<S272>/Unary Minus'
   */
  if (rtb_Is_Absolute_Translation_g) {
    /* SignalConversion generated from: '<S272>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S272>/Constant4'
     *  Constant: '<S272>/Constant6'
     */
    rtb_Akxhatkk1[0] = Steering_Absolute_Cmd_Approach_Zero_Final_Thresh;
    rtb_Akxhatkk1[1] = 1.0;

    /* SignalConversion generated from: '<S272>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S272>/Constant2'
     *  Constant: '<S272>/Constant5'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Steering_Absolute_Cmd_Approach_Zero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S272>/Lookup Table Dynamic' */
    /* Dynamic Look-Up Table Block: '<S272>/Lookup Table Dynamic'
     * Input0  Data Type:  Floating Point real_T
     * Input1  Data Type:  Floating Point real_T
     * Input2  Data Type:  Floating Point real_T
     * Output0 Data Type:  Floating Point real_T
     * Lookup Method: Linear_Endpoint
     *
     */
    LookUp_real_T_real_T( &(rtb_LookupTableDynamic), &rtb_Akxhatkk1[0],
                         rtb_Switch4, &rtb_Minus_n[0], 1U);
    rtb_Switch4 = rtb_LookupTableDynamic;
    tmp = -Steering_Absolute_Cmd_Rate_Limit_Dec;
  } else {
    /* SignalConversion generated from: '<S272>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S272>/Constant10'
     *  Constant: '<S272>/Constant8'
     */
    rtb_Akxhatkk1[0] = Steering_Absolute_Cmd_NonZero_Final_Scale_Factor;
    rtb_Akxhatkk1[1] = 1.0;

    /* SignalConversion generated from: '<S272>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S272>/Constant7'
     *  Constant: '<S272>/Constant9'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Steering_Absolute_Cmd_NonZero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S272>/Lookup Table Dynamic1' */
    /* Dynamic Look-Up Table Block: '<S272>/Lookup Table Dynamic1'
     * Input0  Data Type:  Floating Point real_T
     * Input1  Data Type:  Floating Point real_T
     * Input2  Data Type:  Floating Point real_T
     * Output0 Data Type:  Floating Point real_T
     * Lookup Method: Linear_Endpoint
     *
     */
    LookUp_real_T_real_T( &(rtb_LookupTableDynamic1), &rtb_Akxhatkk1[0],
                         rtb_Switch4, &rtb_Minus_n[0], 1U);
    rtb_Switch4 = rtb_LookupTableDynamic1;

    /* Switch: '<S272>/Switch3' incorporates:
     *  Constant: '<S272>/Constant1'
     *  Constant: '<S272>/Constant3'
     *  UnaryMinus: '<S272>/Unary Minus'
     */
    if (rtb_Is_Absolute_Steering) {
      tmp = Steering_Absolute_Cmd_Rate_Limit_Inc;
    } else {
      tmp = -Steering_Absolute_Cmd_Rate_Limit_Dec;
    }

    /* End of Switch: '<S272>/Switch3' */
  }

  /* End of Switch: '<S272>/Switch5' */

  /* Product: '<S272>/Product' incorporates:
   *  Switch: '<S272>/Switch1'
   */
  rtb_thetay_i = tmp * rtb_Switch4;

  /* Switch: '<S287>/Init' incorporates:
   *  UnitDelay: '<S287>/FixPt Unit Delay1'
   *  UnitDelay: '<S287>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_p != 0) {
    rtb_rx_h = rtb_rx_o;
  } else {
    rtb_rx_h = Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_e;
  }

  /* End of Switch: '<S287>/Init' */

  /* Sum: '<S285>/Sum1' */
  rtb_Sum_jt = rtb_rx_o - rtb_rx_h;

  /* Switch: '<S286>/Switch2' incorporates:
   *  RelationalOperator: '<S286>/LowerRelop1'
   */
  if (!(rtb_Sum_jt > rtb_thetay_i)) {
    /* Switch: '<S272>/Switch2' incorporates:
     *  Constant: '<S272>/Constant1'
     *  Constant: '<S272>/Constant3'
     *  Switch: '<S272>/Switch4'
     *  UnaryMinus: '<S272>/Unary Minus1'
     */
    if (rtb_Is_Absolute_Translation_g) {
      tmp = Steering_Absolute_Cmd_Rate_Limit_Dec;
    } else if (rtb_Is_Absolute_Steering) {
      /* Switch: '<S272>/Switch4' incorporates:
       *  Constant: '<S272>/Constant1'
       */
      tmp = Steering_Absolute_Cmd_Rate_Limit_Dec;
    } else {
      tmp = -Steering_Absolute_Cmd_Rate_Limit_Inc;
    }

    /* Product: '<S272>/Product2' incorporates:
     *  Switch: '<S272>/Switch2'
     */
    rtb_Switch2_a = tmp * rtb_Switch4;

    /* Switch: '<S286>/Switch' incorporates:
     *  RelationalOperator: '<S286>/UpperRelop'
     */
    if (rtb_Sum_jt < rtb_Switch2_a) {
      rtb_thetay_i = rtb_Switch2_a;
    } else {
      rtb_thetay_i = rtb_Sum_jt;
    }

    /* End of Switch: '<S286>/Switch' */
  }

  /* End of Switch: '<S286>/Switch2' */

  /* Sum: '<S285>/Sum' */
  rtb_Switch4 = rtb_thetay_i + rtb_rx_h;

  /* Signum: '<S271>/Sign2' incorporates:
   *  UnitDelay: '<S271>/Unit Delay'
   */
  if (rtIsNaN(Code_Gen_Model_DW.UnitDelay_DSTATE_g)) {
    tmp = (rtNaN);
  } else if (Code_Gen_Model_DW.UnitDelay_DSTATE_g < 0.0) {
    tmp = -1.0;
  } else {
    tmp = (Code_Gen_Model_DW.UnitDelay_DSTATE_g > 0.0);
  }

  /* Signum: '<S271>/Sign1' */
  if (rtIsNaN(Code_Gen_Model_B.Steering_Rel_Cmd_SPF)) {
    rtb_Add_du = (rtNaN);
  } else if (Code_Gen_Model_B.Steering_Rel_Cmd_SPF < 0.0) {
    rtb_Add_du = -1.0;
  } else {
    rtb_Add_du = (Code_Gen_Model_B.Steering_Rel_Cmd_SPF > 0.0);
  }

  /* Product: '<S271>/Product1' incorporates:
   *  Signum: '<S271>/Sign1'
   *  Signum: '<S271>/Sign2'
   */
  tmp *= rtb_Add_du;
  if (rtIsNaN(tmp)) {
    rtb_Num_Segments = 0;
  } else {
    rtb_Num_Segments = (int32_T)fmod(tmp, 256.0);
  }

  /* Switch: '<S271>/Switch' incorporates:
   *  Constant: '<S271>/Constant'
   *  Constant: '<S274>/Constant'
   *  Constant: '<S275>/Constant'
   *  Logic: '<S271>/or'
   *  Product: '<S271>/Product1'
   *  RelationalOperator: '<S274>/Compare'
   *  RelationalOperator: '<S275>/Compare'
   *  UnitDelay: '<S271>/Unit Delay'
   */
  if ((Code_Gen_Model_DW.UnitDelay_DSTATE_g == 0.0) || (((rtb_Num_Segments < 0) ?
        ((int32_T)((int8_T)(-((int8_T)((uint8_T)(-((real_T)rtb_Num_Segments)))))))
        : rtb_Num_Segments) > 0)) {
    rtb_thetay_i = Code_Gen_Model_B.Steering_Rel_Cmd_SPF;
  } else {
    rtb_thetay_i = 0.0;
  }

  /* End of Switch: '<S271>/Switch' */

  /* RelationalOperator: '<S276>/Compare' incorporates:
   *  Constant: '<S276>/Constant'
   */
  rtb_Is_Absolute_Translation_g = (rtb_thetay_i == 0.0);

  /* RelationalOperator: '<S277>/Compare' incorporates:
   *  Constant: '<S277>/Constant'
   */
  rtb_Is_Absolute_Steering = (rtb_thetay_i > 0.0);

  /* Abs: '<S271>/Abs' incorporates:
   *  Sum: '<S271>/Subtract'
   *  UnitDelay: '<S271>/Unit Delay'
   */
  rtb_Sum_jt = fabs(Code_Gen_Model_DW.UnitDelay_DSTATE_g -
                    Code_Gen_Model_B.Steering_Rel_Cmd_SPF);

  /* Switch: '<S271>/Switch5' incorporates:
   *  Constant: '<S271>/Constant1'
   *  Switch: '<S271>/Switch1'
   *  UnaryMinus: '<S271>/Unary Minus'
   */
  if (rtb_Is_Absolute_Translation_g) {
    /* SignalConversion generated from: '<S271>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S271>/Constant4'
     *  Constant: '<S271>/Constant6'
     */
    rtb_Akxhatkk1[0] = Steering_Relative_Cmd_Approach_Zero_Final_Thresh;
    rtb_Akxhatkk1[1] = 1.0;

    /* SignalConversion generated from: '<S271>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S271>/Constant2'
     *  Constant: '<S271>/Constant5'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Steering_Relative_Cmd_Approach_Zero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S271>/Lookup Table Dynamic' */
    /* Dynamic Look-Up Table Block: '<S271>/Lookup Table Dynamic'
     * Input0  Data Type:  Floating Point real_T
     * Input1  Data Type:  Floating Point real_T
     * Input2  Data Type:  Floating Point real_T
     * Output0 Data Type:  Floating Point real_T
     * Lookup Method: Linear_Endpoint
     *
     */
    LookUp_real_T_real_T( &(rtb_LookupTableDynamic_p), &rtb_Akxhatkk1[0],
                         rtb_Sum_jt, &rtb_Minus_n[0], 1U);
    rtb_Sum_jt = rtb_LookupTableDynamic_p;
    tmp = -Steering_Relative_Cmd_Rate_Limit_Dec;
  } else {
    /* SignalConversion generated from: '<S271>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S271>/Constant10'
     *  Constant: '<S271>/Constant8'
     */
    rtb_Akxhatkk1[0] = Steering_Relative_Cmd_NonZero_Final_Scale_Factor;
    rtb_Akxhatkk1[1] = 1.0;

    /* SignalConversion generated from: '<S271>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S271>/Constant7'
     *  Constant: '<S271>/Constant9'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Steering_Relative_Cmd_NonZero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S271>/Lookup Table Dynamic1' */
    /* Dynamic Look-Up Table Block: '<S271>/Lookup Table Dynamic1'
     * Input0  Data Type:  Floating Point real_T
     * Input1  Data Type:  Floating Point real_T
     * Input2  Data Type:  Floating Point real_T
     * Output0 Data Type:  Floating Point real_T
     * Lookup Method: Linear_Endpoint
     *
     */
    LookUp_real_T_real_T( &(rtb_LookupTableDynamic1_g), &rtb_Akxhatkk1[0],
                         rtb_Sum_jt, &rtb_Minus_n[0], 1U);
    rtb_Sum_jt = rtb_LookupTableDynamic1_g;

    /* Switch: '<S271>/Switch3' incorporates:
     *  Constant: '<S271>/Constant1'
     *  Constant: '<S271>/Constant3'
     *  UnaryMinus: '<S271>/Unary Minus'
     */
    if (rtb_Is_Absolute_Steering) {
      tmp = Steering_Relative_Cmd_Rate_Limit_Inc;
    } else {
      tmp = -Steering_Relative_Cmd_Rate_Limit_Dec;
    }

    /* End of Switch: '<S271>/Switch3' */
  }

  /* End of Switch: '<S271>/Switch5' */

  /* Product: '<S271>/Product' incorporates:
   *  Switch: '<S271>/Switch1'
   */
  rtb_rx_h = tmp * rtb_Sum_jt;

  /* Switch: '<S280>/Init' incorporates:
   *  UnitDelay: '<S280>/FixPt Unit Delay1'
   *  UnitDelay: '<S280>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_c != 0) {
    rtb_rx_o = rtb_thetay_i;
  } else {
    rtb_rx_o = Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_p;
  }

  /* End of Switch: '<S280>/Init' */

  /* Sum: '<S278>/Sum1' */
  rtb_Switch2_a = rtb_thetay_i - rtb_rx_o;

  /* Switch: '<S279>/Switch2' incorporates:
   *  RelationalOperator: '<S279>/LowerRelop1'
   */
  if (!(rtb_Switch2_a > rtb_rx_h)) {
    /* Switch: '<S271>/Switch2' incorporates:
     *  Constant: '<S271>/Constant1'
     *  Constant: '<S271>/Constant3'
     *  Switch: '<S271>/Switch4'
     *  UnaryMinus: '<S271>/Unary Minus1'
     */
    if (rtb_Is_Absolute_Translation_g) {
      tmp = Steering_Relative_Cmd_Rate_Limit_Dec;
    } else if (rtb_Is_Absolute_Steering) {
      /* Switch: '<S271>/Switch4' incorporates:
       *  Constant: '<S271>/Constant1'
       */
      tmp = Steering_Relative_Cmd_Rate_Limit_Dec;
    } else {
      tmp = -Steering_Relative_Cmd_Rate_Limit_Inc;
    }

    /* Product: '<S271>/Product2' incorporates:
     *  Switch: '<S271>/Switch2'
     */
    rtb_Init = tmp * rtb_Sum_jt;

    /* Switch: '<S279>/Switch' incorporates:
     *  RelationalOperator: '<S279>/UpperRelop'
     */
    if (rtb_Switch2_a < rtb_Init) {
      rtb_rx_h = rtb_Init;
    } else {
      rtb_rx_h = rtb_Switch2_a;
    }

    /* End of Switch: '<S279>/Switch' */
  }

  /* End of Switch: '<S279>/Switch2' */

  /* Sum: '<S278>/Sum' */
  rtb_Sum_jt = rtb_rx_h + rtb_rx_o;

  /* Switch: '<S261>/Switch' */
  if (Code_Gen_Model_B.Is_Absolute_Steering_SPF) {
    /* Switch: '<S261>/Switch' */
    Code_Gen_Model_B.Steering_Localized_Cmd = rtb_Switch4;
  } else {
    /* Switch: '<S261>/Switch' */
    Code_Gen_Model_B.Steering_Localized_Cmd = rtb_Sum_jt;
  }

  /* End of Switch: '<S261>/Switch' */

  /* Outputs for Atomic SubSystem: '<S174>/Initialize Function' */
  /* Sum: '<S260>/Add' incorporates:
   *  Constant: '<S260>/Constant'
   *  Constant: '<S260>/Constant4'
   *  Constant: '<S260>/Constant5'
   *  Trigonometry: '<S260>/Atan2'
   */
  rtb_Switch2_a = rt_atan2d_snf(Distance_FL_y, 0.187325) + 1.5707963267948966;

  /* End of Outputs for SubSystem: '<S174>/Initialize Function' */

  /* Fcn: '<S302>/r->x' incorporates:
   *  Fcn: '<S307>/r->x'
   *  Fcn: '<S312>/r->x'
   *  Fcn: '<S317>/r->x'
   */
  rtb_rx_l = Code_Gen_Model_B.Translation_Speed_RL * cos
    (Code_Gen_Model_B.Translation_Steering_Cmd);

  /* Sum: '<S296>/Add' incorporates:
   *  Fcn: '<S302>/r->x'
   *  Fcn: '<S303>/r->x'
   */
  rtb_Akxhatkk1[0] = (Code_Gen_Model_B.Steering_Localized_Cmd * cos
                      (rtb_Switch2_a)) + rtb_rx_l;

  /* Fcn: '<S302>/theta->y' incorporates:
   *  Fcn: '<S307>/theta->y'
   *  Fcn: '<S312>/theta->y'
   *  Fcn: '<S317>/theta->y'
   */
  rtb_Add_oh = Code_Gen_Model_B.Translation_Speed_RL * sin
    (Code_Gen_Model_B.Translation_Steering_Cmd);

  /* Sum: '<S296>/Add' incorporates:
   *  Fcn: '<S302>/theta->y'
   *  Fcn: '<S303>/theta->y'
   */
  rtb_Akxhatkk1[1] = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                      (rtb_Switch2_a)) + rtb_Add_oh;

  /* Fcn: '<S301>/x->r' */
  rtb_rx_o = rt_hypotd_snf(rtb_Akxhatkk1[0], rtb_Akxhatkk1[1]);

  /* RelationalOperator: '<S304>/Compare' incorporates:
   *  Constant: '<S304>/Constant'
   */
  rtb_Is_Absolute_Translation_g = (rtb_rx_o == 0.0);

  /* Switch: '<S300>/Switch' */
  if (!rtb_Is_Absolute_Translation_g) {
    /* Switch: '<S300>/Switch' incorporates:
     *  Fcn: '<S301>/x->theta'
     */
    Code_Gen_Model_B.FL_Desired_Module_Angle = rt_atan2d_snf(rtb_Akxhatkk1[1],
      rtb_Akxhatkk1[0]);
  }

  /* End of Switch: '<S300>/Switch' */

  /* Trigonometry: '<S188>/Cos4' incorporates:
   *  Switch: '<S177>/Angle_Switch'
   *  Trigonometry: '<S187>/Cos4'
   */
  rtb_Switch2_a = cos(Code_Gen_Model_B.FL_Desired_Module_Angle);

  /* Sum: '<S166>/Add1' incorporates:
   *  Constant: '<S166>/Constant3'
   *  Constant: '<S166>/Constant4'
   *  Gain: '<S16>/Revolutions to Radians'
   *  Inport: '<Root>/FrontLeft_Steer_Rev'
   *  Inport: '<Root>/FrontLeft_Turn_Offset'
   *  Math: '<S166>/Math Function'
   *  Sum: '<S166>/Add2'
   *  Sum: '<S16>/Add'
   */
  Code_Gen_Model_B.FL_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.FrontLeft_Steer_Rev -
       Code_Gen_Model_U.FrontLeft_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Trigonometry: '<S188>/Sin5' incorporates:
   *  UnaryMinus: '<S186>/Unary Minus'
   */
  rtb_Switch_ms = sin(-Code_Gen_Model_B.FL_Steer_Module_Angle);

  /* Trigonometry: '<S188>/Sin4' incorporates:
   *  Switch: '<S177>/Angle_Switch'
   *  Trigonometry: '<S187>/Sin4'
   */
  rtb_Init = sin(Code_Gen_Model_B.FL_Desired_Module_Angle);

  /* Trigonometry: '<S188>/Cos5' incorporates:
   *  UnaryMinus: '<S186>/Unary Minus'
   */
  rtb_rx_h = cos(-Code_Gen_Model_B.FL_Steer_Module_Angle);

  /* Sum: '<S188>/Subtract1' incorporates:
   *  Product: '<S188>/Product2'
   *  Product: '<S188>/Product3'
   *  Trigonometry: '<S188>/Cos4'
   *  Trigonometry: '<S188>/Sin4'
   */
  rtb_Subtract1 = (rtb_Switch2_a * rtb_Switch_ms) + (rtb_Init * rtb_rx_h);

  /* Sum: '<S188>/Subtract' incorporates:
   *  Product: '<S188>/Product'
   *  Product: '<S188>/Product1'
   *  Trigonometry: '<S188>/Cos4'
   *  Trigonometry: '<S188>/Sin4'
   */
  rtb_Switch_ms = (rtb_Switch2_a * rtb_rx_h) - (rtb_Init * rtb_Switch_ms);

  /* Math: '<S188>/Hypot' */
  rtb_rx_h = rt_hypotd_snf(rtb_Switch_ms, rtb_Subtract1);

  /* Switch: '<S188>/Switch' incorporates:
   *  Constant: '<S188>/Constant'
   *  Constant: '<S188>/Constant1'
   *  Constant: '<S189>/Constant'
   *  Product: '<S188>/Divide'
   *  Product: '<S188>/Divide1'
   *  RelationalOperator: '<S189>/Compare'
   *  Switch: '<S188>/Switch1'
   */
  if (rtb_rx_h > 1.0E-6) {
    rtb_thetay_i = rtb_Subtract1 / rtb_rx_h;
    rtb_rx_h = rtb_Switch_ms / rtb_rx_h;
  } else {
    rtb_thetay_i = 0.0;
    rtb_rx_h = 1.0;
  }

  /* End of Switch: '<S188>/Switch' */

  /* RelationalOperator: '<S185>/Compare' incorporates:
   *  Abs: '<S177>/Abs'
   *  Constant: '<S185>/Constant'
   *  Trigonometry: '<S188>/Atan1'
   */
  rtb_Is_Absolute_Steering = (fabs(rt_atan2d_snf(rtb_thetay_i, rtb_rx_h)) >
    1.5707963267948966);

  /* Switch: '<S177>/Angle_Switch' incorporates:
   *  Trigonometry: '<S187>/Atan1'
   */
  if (rtb_Is_Absolute_Steering) {
    /* Sum: '<S187>/Subtract1' incorporates:
     *  Product: '<S187>/Product2'
     *  Product: '<S187>/Product3'
     */
    rtb_Switch_ms = (rtb_Switch2_a * Code_Gen_Model_ConstB.Sin5) + (rtb_Init *
      Code_Gen_Model_ConstB.Cos5);

    /* Sum: '<S187>/Subtract' incorporates:
     *  Product: '<S187>/Product'
     *  Product: '<S187>/Product1'
     */
    rtb_Init = (rtb_Switch2_a * Code_Gen_Model_ConstB.Cos5) - (rtb_Init *
      Code_Gen_Model_ConstB.Sin5);

    /* Math: '<S187>/Hypot' */
    rtb_Switch2_a = rt_hypotd_snf(rtb_Init, rtb_Switch_ms);

    /* Switch: '<S187>/Switch1' incorporates:
     *  Constant: '<S187>/Constant'
     *  Constant: '<S187>/Constant1'
     *  Constant: '<S190>/Constant'
     *  Product: '<S187>/Divide'
     *  Product: '<S187>/Divide1'
     *  RelationalOperator: '<S190>/Compare'
     *  Switch: '<S187>/Switch'
     */
    if (rtb_Switch2_a > 1.0E-6) {
      rtb_Init /= rtb_Switch2_a;
      rtb_Switch2_a = rtb_Switch_ms / rtb_Switch2_a;
    } else {
      rtb_Init = 1.0;
      rtb_Switch2_a = 0.0;
    }

    /* End of Switch: '<S187>/Switch1' */
    rtb_thetay_i = rt_atan2d_snf(rtb_Switch2_a, rtb_Init);
  } else {
    rtb_thetay_i = Code_Gen_Model_B.FL_Desired_Module_Angle;
  }

  /* Sum: '<S179>/Sum' incorporates:
   *  Sum: '<S178>/Add'
   */
  rtb_FeedForward = rtb_thetay_i - Code_Gen_Model_B.FL_Steer_Module_Angle;

  /* Sum: '<S192>/Add1' incorporates:
   *  Constant: '<S192>/Constant3'
   *  Constant: '<S192>/Constant4'
   *  Math: '<S192>/Math Function'
   *  Sum: '<S179>/Sum'
   *  Sum: '<S192>/Add2'
   */
  rtb_rx_h = rt_modd_snf(rtb_FeedForward + 3.1415926535897931,
    6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S194>/Sum1' incorporates:
   *  Constant: '<S179>/Constant2'
   *  Product: '<S194>/Product'
   *  Sum: '<S194>/Sum'
   *  UnitDelay: '<S194>/Unit Delay1'
   */
  rtb_Switch2_a = ((rtb_rx_h - Code_Gen_Model_DW.UnitDelay1_DSTATE_b) *
                   Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_b;

  /* Product: '<S179>/Product' incorporates:
   *  Constant: '<S179>/Constant3'
   */
  rtb_Init = rtb_Switch2_a * Steering_Motor_Control_D;

  /* Sum: '<S193>/Diff' incorporates:
   *  UnitDelay: '<S193>/UD'
   *
   * Block description for '<S193>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S193>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Switch1_pz = rtb_Init - Code_Gen_Model_DW.UD_DSTATE_b;

  /* Saturate: '<S179>/Saturation' */
  if (rtb_Switch1_pz > Steering_Motor_Control_D_UL) {
    rtb_Switch1_pz = Steering_Motor_Control_D_UL;
  } else if (rtb_Switch1_pz < Steering_Motor_Control_D_LL) {
    rtb_Switch1_pz = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S179>/Add' incorporates:
   *  Gain: '<S179>/Gain1'
   *  Saturate: '<S179>/Saturation'
   */
  rtb_Subtract1 = (Steering_Motor_Control_P * rtb_rx_h) + rtb_Switch1_pz;

  /* Sum: '<S179>/Subtract' incorporates:
   *  Constant: '<S179>/Constant'
   */
  rtb_Switch_ms = 1.0 - rtb_Subtract1;

  /* Sum: '<S179>/Sum2' incorporates:
   *  Gain: '<S179>/Gain2'
   *  UnitDelay: '<S179>/Unit Delay'
   */
  rtb_rx_h = (Steering_Motor_Control_I * rtb_rx_h) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_e;

  /* Switch: '<S195>/Switch2' incorporates:
   *  Constant: '<S179>/Constant'
   *  RelationalOperator: '<S195>/LowerRelop1'
   *  Sum: '<S179>/Subtract'
   */
  if (!(rtb_rx_h > (1.0 - rtb_Subtract1))) {
    /* Sum: '<S179>/Subtract1' incorporates:
     *  Constant: '<S179>/Constant1'
     */
    rtb_Switch_ms = -1.0 - rtb_Subtract1;

    /* Switch: '<S195>/Switch' incorporates:
     *  Constant: '<S179>/Constant1'
     *  RelationalOperator: '<S195>/UpperRelop'
     *  Sum: '<S179>/Subtract1'
     */
    if (!(rtb_rx_h < (-1.0 - rtb_Subtract1))) {
      rtb_Switch_ms = rtb_rx_h;
    }

    /* End of Switch: '<S195>/Switch' */
  }

  /* End of Switch: '<S195>/Switch2' */

  /* Saturate: '<S179>/Saturation1' */
  if (rtb_Switch_ms > Steering_Motor_Control_I_UL) {
    rtb_Switch_ms = Steering_Motor_Control_I_UL;
  } else if (rtb_Switch_ms < Steering_Motor_Control_I_LL) {
    rtb_Switch_ms = Steering_Motor_Control_I_LL;
  }

  /* End of Saturate: '<S179>/Saturation1' */

  /* Sum: '<S179>/Add1' */
  rtb_Switch1_pz = rtb_Subtract1 + rtb_Switch_ms;

  /* Saturate: '<S179>/Saturation2' */
  if (rtb_Switch1_pz > 1.0) {
    /* Outport: '<Root>/FrontLeft_Steer_DutyCycle' */
    Code_Gen_Model_Y.FrontLeft_Steer_DutyCycle = 1.0;
  } else if (rtb_Switch1_pz < -1.0) {
    /* Outport: '<Root>/FrontLeft_Steer_DutyCycle' */
    Code_Gen_Model_Y.FrontLeft_Steer_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/FrontLeft_Steer_DutyCycle' */
    Code_Gen_Model_Y.FrontLeft_Steer_DutyCycle = rtb_Switch1_pz;
  }

  /* End of Saturate: '<S179>/Saturation2' */

  /* Switch: '<S300>/Switch1' */
  if (rtb_Is_Absolute_Translation_g) {
    /* Switch: '<S300>/Switch1' incorporates:
     *  Constant: '<S300>/Constant'
     */
    Code_Gen_Model_B.FL_Desired_Wheel_Speed_in = 1.0E-15;
  } else {
    /* Switch: '<S300>/Switch1' */
    Code_Gen_Model_B.FL_Desired_Wheel_Speed_in = rtb_rx_o;
  }

  /* End of Switch: '<S300>/Switch1' */

  /* Sum: '<S297>/Add' incorporates:
   *  Fcn: '<S308>/r->x'
   *  Fcn: '<S308>/theta->y'
   */
  rtb_Akxhatkk1[0] = (Code_Gen_Model_B.Steering_Localized_Cmd * cos
                      (Code_Gen_Model_ConstB.FR_Tangent_Angle)) + rtb_rx_l;
  rtb_Akxhatkk1[1] = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                      (Code_Gen_Model_ConstB.FR_Tangent_Angle)) + rtb_Add_oh;

  /* Fcn: '<S306>/x->r' */
  rtb_rx_h = rt_hypotd_snf(rtb_Akxhatkk1[0], rtb_Akxhatkk1[1]);

  /* RelationalOperator: '<S309>/Compare' incorporates:
   *  Constant: '<S309>/Constant'
   */
  rtb_Is_Absolute_Translation_g = (rtb_rx_h == 0.0);

  /* Switch: '<S305>/Switch1' */
  if (rtb_Is_Absolute_Translation_g) {
    /* Switch: '<S305>/Switch1' incorporates:
     *  Constant: '<S305>/Constant'
     */
    Code_Gen_Model_B.FR_Desired_Wheel_Speed_in = 1.0E-15;
  } else {
    /* Switch: '<S305>/Switch1' */
    Code_Gen_Model_B.FR_Desired_Wheel_Speed_in = rtb_rx_h;
  }

  /* End of Switch: '<S305>/Switch1' */

  /* Sum: '<S298>/Add' incorporates:
   *  Fcn: '<S313>/r->x'
   *  Fcn: '<S313>/theta->y'
   */
  rtb_Minus_n[0] = (Code_Gen_Model_B.Steering_Localized_Cmd * cos
                    (Code_Gen_Model_ConstB.BL_Tangent_Angle)) + rtb_rx_l;
  rtb_Minus_n[1] = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                    (Code_Gen_Model_ConstB.BL_Tangent_Angle)) + rtb_Add_oh;

  /* Fcn: '<S311>/x->r' */
  rtb_thetay_l = rt_hypotd_snf(rtb_Minus_n[0], rtb_Minus_n[1]);

  /* RelationalOperator: '<S314>/Compare' incorporates:
   *  Constant: '<S314>/Constant'
   */
  rtb_FixPtRelationalOperator = (rtb_thetay_l == 0.0);

  /* Switch: '<S310>/Switch1' */
  if (rtb_FixPtRelationalOperator) {
    /* Switch: '<S310>/Switch1' incorporates:
     *  Constant: '<S310>/Constant'
     */
    Code_Gen_Model_B.BL_Desired_Wheel_Speed_in = 1.0E-15;
  } else {
    /* Switch: '<S310>/Switch1' */
    Code_Gen_Model_B.BL_Desired_Wheel_Speed_in = rtb_thetay_l;
  }

  /* End of Switch: '<S310>/Switch1' */

  /* Sum: '<S299>/Add' incorporates:
   *  Fcn: '<S318>/r->x'
   *  Fcn: '<S318>/theta->y'
   */
  rtb_Add2_k_idx_0 = (Code_Gen_Model_B.Steering_Localized_Cmd * cos
                      (Code_Gen_Model_ConstB.BR_Tangent_Angle)) + rtb_rx_l;
  rtb_Add2_k_idx_1 = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                      (Code_Gen_Model_ConstB.BR_Tangent_Angle)) + rtb_Add_oh;

  /* Fcn: '<S316>/x->r' */
  rtb_rx_l = rt_hypotd_snf(rtb_Add2_k_idx_0, rtb_Add2_k_idx_1);

  /* RelationalOperator: '<S319>/Compare' incorporates:
   *  Constant: '<S319>/Constant'
   */
  rtb_FixPtRelationalOperator_ea = (rtb_rx_l == 0.0);

  /* Switch: '<S315>/Switch1' */
  if (rtb_FixPtRelationalOperator_ea) {
    /* Switch: '<S315>/Switch1' incorporates:
     *  Constant: '<S315>/Constant'
     */
    Code_Gen_Model_B.BR_Desired_Wheel_Speed_in = 1.0E-15;
  } else {
    /* Switch: '<S315>/Switch1' */
    Code_Gen_Model_B.BR_Desired_Wheel_Speed_in = rtb_rx_l;
  }

  /* End of Switch: '<S315>/Switch1' */

  /* Product: '<S295>/Divide' incorporates:
   *  Abs: '<S295>/Abs'
   *  Abs: '<S295>/Abs1'
   *  Abs: '<S295>/Abs2'
   *  Abs: '<S295>/Abs3'
   *  Constant: '<S295>/Constant'
   *  MinMax: '<S295>/Max'
   */
  rtb_rx_o = 5.389313721017964 / fmax(fmax(fmax(fmax(5.389313721017964,
    Code_Gen_Model_B.FL_Desired_Wheel_Speed_in),
    Code_Gen_Model_B.FR_Desired_Wheel_Speed_in),
    Code_Gen_Model_B.BL_Desired_Wheel_Speed_in),
    Code_Gen_Model_B.BR_Desired_Wheel_Speed_in);

  /* Product: '<S295>/Product' */
  Code_Gen_Model_B.FL_Desired_Wheel_Speed =
    Code_Gen_Model_B.FL_Desired_Wheel_Speed_in * rtb_rx_o;

  /* Switch: '<S177>/Speed_Switch' incorporates:
   *  UnaryMinus: '<S177>/Unary Minus'
   */
  if (rtb_Is_Absolute_Steering) {
    tmp = -Code_Gen_Model_B.FL_Desired_Wheel_Speed;
  } else {
    tmp = Code_Gen_Model_B.FL_Desired_Wheel_Speed;
  }

  /* Product: '<S180>/Product2' incorporates:
   *  Constant: '<S180>/Constant'
   *  Switch: '<S177>/Speed_Switch'
   */
  rtb_rx_l = tmp * 1150.4247703785388;

  /* Signum: '<S175>/Sign' */
  if (rtIsNaN(rtb_rx_l)) {
    tmp = (rtNaN);
  } else if (rtb_rx_l < 0.0) {
    tmp = -1.0;
  } else {
    tmp = (rtb_rx_l > 0.0);
  }

  /* Signum: '<S175>/Sign1' incorporates:
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed)) {
    rtb_Add_du = (rtNaN);
  } else if (Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed < 0.0) {
    rtb_Add_du = -1.0;
  } else {
    rtb_Add_du = (Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed > 0.0);
  }

  /* Product: '<S170>/Product' incorporates:
   *  Abs: '<S175>/Abs'
   *  Abs: '<S178>/Abs'
   *  Constant: '<S181>/Constant'
   *  Constant: '<S191>/Constant3'
   *  Constant: '<S191>/Constant4'
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Speed'
   *  Logic: '<S175>/OR'
   *  Lookup_n-D: '<S178>/1-D Lookup Table'
   *  Math: '<S191>/Math Function'
   *  RelationalOperator: '<S175>/Equal1'
   *  RelationalOperator: '<S181>/Compare'
   *  Signum: '<S175>/Sign'
   *  Signum: '<S175>/Sign1'
   *  Sum: '<S191>/Add1'
   *  Sum: '<S191>/Add2'
   */
  rtb_rx_l = (((real_T)((tmp == rtb_Add_du) || (fabs
    (Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_rx_l) * look1_binlcpw(fabs
    (rt_modd_snf(rtb_FeedForward + 1.5707963267948966, 3.1415926535897931) -
     1.5707963267948966), Code_Gen_Model_ConstP.pooled23,
    Code_Gen_Model_ConstP.pooled22, 1U);

  /* Gain: '<S176>/Gain' */
  rtb_FeedForward = Drive_Motor_Control_FF * rtb_rx_l;

  /* Sum: '<S176>/Sum' incorporates:
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Speed'
   */
  rtb_rx_l -= Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed;

  /* Sum: '<S183>/Sum1' incorporates:
   *  Constant: '<S176>/Constant2'
   *  Product: '<S183>/Product'
   *  Sum: '<S183>/Sum'
   *  UnitDelay: '<S183>/Unit Delay1'
   */
  rtb_rx_h = ((rtb_rx_l - Code_Gen_Model_DW.UnitDelay1_DSTATE_a) *
              Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_a;

  /* Product: '<S176>/Product' incorporates:
   *  Constant: '<S176>/Constant3'
   */
  rtb_Subtract1 = rtb_rx_h * Drive_Motor_Control_D;

  /* Sum: '<S182>/Diff' incorporates:
   *  UnitDelay: '<S182>/UD'
   *
   * Block description for '<S182>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S182>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Switch1_pz = rtb_Subtract1 - Code_Gen_Model_DW.UD_DSTATE_o;

  /* Saturate: '<S176>/Saturation' */
  if (rtb_Switch1_pz > Drive_Motor_Control_D_UL) {
    rtb_Switch1_pz = Drive_Motor_Control_D_UL;
  } else if (rtb_Switch1_pz < Drive_Motor_Control_D_LL) {
    rtb_Switch1_pz = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S176>/Add' incorporates:
   *  Gain: '<S176>/Gain1'
   *  Saturate: '<S176>/Saturation'
   */
  rtb_Add_oh = ((Drive_Motor_Control_P * rtb_rx_l) + rtb_FeedForward) +
    rtb_Switch1_pz;

  /* Sum: '<S176>/Subtract' incorporates:
   *  Constant: '<S176>/Constant'
   */
  rtb_thetay_l = 1.0 - rtb_Add_oh;

  /* Sum: '<S176>/Sum2' incorporates:
   *  Gain: '<S176>/Gain2'
   *  UnitDelay: '<S176>/Unit Delay'
   */
  rtb_FeedForward = (Drive_Motor_Control_I * rtb_rx_l) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_f;

  /* Switch: '<S184>/Switch2' incorporates:
   *  Constant: '<S176>/Constant'
   *  RelationalOperator: '<S184>/LowerRelop1'
   *  Sum: '<S176>/Subtract'
   */
  if (!(rtb_FeedForward > (1.0 - rtb_Add_oh))) {
    /* Switch: '<S184>/Switch' incorporates:
     *  Constant: '<S176>/Constant1'
     *  RelationalOperator: '<S184>/UpperRelop'
     *  Sum: '<S176>/Subtract1'
     */
    if (rtb_FeedForward < (-1.0 - rtb_Add_oh)) {
      rtb_thetay_l = -1.0 - rtb_Add_oh;
    } else {
      rtb_thetay_l = rtb_FeedForward;
    }

    /* End of Switch: '<S184>/Switch' */
  }

  /* End of Switch: '<S184>/Switch2' */

  /* Saturate: '<S176>/Saturation1' */
  if (rtb_thetay_l > Drive_Motor_Control_I_UL) {
    rtb_FeedForward = Drive_Motor_Control_I_UL;
  } else if (rtb_thetay_l < Drive_Motor_Control_I_LL) {
    rtb_FeedForward = Drive_Motor_Control_I_LL;
  } else {
    rtb_FeedForward = rtb_thetay_l;
  }

  /* End of Saturate: '<S176>/Saturation1' */

  /* Sum: '<S176>/Add1' */
  rtb_Switch1_pz = rtb_Add_oh + rtb_FeedForward;

  /* Saturate: '<S176>/Saturation2' */
  if (rtb_Switch1_pz > 1.0) {
    /* Outport: '<Root>/FrontLeft_Drive_DutyCycle' */
    Code_Gen_Model_Y.FrontLeft_Drive_DutyCycle = 1.0;
  } else if (rtb_Switch1_pz < -1.0) {
    /* Outport: '<Root>/FrontLeft_Drive_DutyCycle' */
    Code_Gen_Model_Y.FrontLeft_Drive_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/FrontLeft_Drive_DutyCycle' */
    Code_Gen_Model_Y.FrontLeft_Drive_DutyCycle = rtb_Switch1_pz;
  }

  /* End of Saturate: '<S176>/Saturation2' */

  /* Switch: '<S305>/Switch' */
  if (!rtb_Is_Absolute_Translation_g) {
    /* Switch: '<S305>/Switch' incorporates:
     *  Fcn: '<S306>/x->theta'
     */
    Code_Gen_Model_B.FR_Desired_Module_Angle = rt_atan2d_snf(rtb_Akxhatkk1[1],
      rtb_Akxhatkk1[0]);
  }

  /* End of Switch: '<S305>/Switch' */

  /* Trigonometry: '<S209>/Cos4' incorporates:
   *  Switch: '<S198>/Angle_Switch'
   *  Trigonometry: '<S208>/Cos4'
   */
  rtb_Subtract_e = cos(Code_Gen_Model_B.FR_Desired_Module_Angle);

  /* Sum: '<S167>/Add1' incorporates:
   *  Constant: '<S167>/Constant3'
   *  Constant: '<S167>/Constant4'
   *  Gain: '<S16>/Revolutions to Radians1'
   *  Inport: '<Root>/FrontRight_Steer_Rev'
   *  Inport: '<Root>/FrontRight_Turn_Offset'
   *  Math: '<S167>/Math Function'
   *  Sum: '<S167>/Add2'
   *  Sum: '<S16>/Add1'
   */
  Code_Gen_Model_B.FR_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.FrontRight_Steer_Rev -
       Code_Gen_Model_U.FrontRight_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Trigonometry: '<S209>/Sin5' incorporates:
   *  UnaryMinus: '<S207>/Unary Minus'
   */
  rtb_thetay_i = sin(-Code_Gen_Model_B.FR_Steer_Module_Angle);

  /* Trigonometry: '<S209>/Sin4' incorporates:
   *  Switch: '<S198>/Angle_Switch'
   *  Trigonometry: '<S208>/Sin4'
   */
  rtb_Product_d = sin(Code_Gen_Model_B.FR_Desired_Module_Angle);

  /* Trigonometry: '<S209>/Cos5' incorporates:
   *  UnaryMinus: '<S207>/Unary Minus'
   */
  rtb_thetay_l = cos(-Code_Gen_Model_B.FR_Steer_Module_Angle);

  /* Sum: '<S209>/Subtract1' incorporates:
   *  Product: '<S209>/Product2'
   *  Product: '<S209>/Product3'
   *  Trigonometry: '<S209>/Cos4'
   *  Trigonometry: '<S209>/Sin4'
   */
  rtb_Add_oh = (rtb_Subtract_e * rtb_thetay_i) + (rtb_Product_d * rtb_thetay_l);

  /* Sum: '<S209>/Subtract' incorporates:
   *  Product: '<S209>/Product'
   *  Product: '<S209>/Product1'
   *  Trigonometry: '<S209>/Cos4'
   *  Trigonometry: '<S209>/Sin4'
   */
  rtb_Subtract1_of = (rtb_Subtract_e * rtb_thetay_l) - (rtb_Product_d *
    rtb_thetay_i);

  /* Math: '<S209>/Hypot' */
  rtb_Hypot_bl = rt_hypotd_snf(rtb_Subtract1_of, rtb_Add_oh);

  /* Switch: '<S209>/Switch' incorporates:
   *  Constant: '<S209>/Constant'
   *  Constant: '<S209>/Constant1'
   *  Constant: '<S210>/Constant'
   *  Product: '<S209>/Divide'
   *  Product: '<S209>/Divide1'
   *  RelationalOperator: '<S210>/Compare'
   *  Switch: '<S209>/Switch1'
   */
  if (rtb_Hypot_bl > 1.0E-6) {
    rtb_rx_l = rtb_Add_oh / rtb_Hypot_bl;
    rtb_thetay_l = rtb_Subtract1_of / rtb_Hypot_bl;
  } else {
    rtb_rx_l = 0.0;
    rtb_thetay_l = 1.0;
  }

  /* End of Switch: '<S209>/Switch' */

  /* RelationalOperator: '<S206>/Compare' incorporates:
   *  Abs: '<S198>/Abs'
   *  Constant: '<S206>/Constant'
   *  Trigonometry: '<S209>/Atan1'
   */
  rtb_Is_Absolute_Steering = (fabs(rt_atan2d_snf(rtb_rx_l, rtb_thetay_l)) >
    1.5707963267948966);

  /* Switch: '<S198>/Angle_Switch' incorporates:
   *  Trigonometry: '<S208>/Atan1'
   */
  if (rtb_Is_Absolute_Steering) {
    /* Sum: '<S208>/Subtract1' incorporates:
     *  Product: '<S208>/Product2'
     *  Product: '<S208>/Product3'
     */
    rtb_Add_oh = (rtb_Subtract_e * Code_Gen_Model_ConstB.Sin5_m) +
      (rtb_Product_d * Code_Gen_Model_ConstB.Cos5_g);

    /* Sum: '<S208>/Subtract' incorporates:
     *  Product: '<S208>/Product'
     *  Product: '<S208>/Product1'
     */
    rtb_Hypot_bl = (rtb_Subtract_e * Code_Gen_Model_ConstB.Cos5_g) -
      (rtb_Product_d * Code_Gen_Model_ConstB.Sin5_m);

    /* Math: '<S208>/Hypot' */
    rtb_Subtract1_of = rt_hypotd_snf(rtb_Hypot_bl, rtb_Add_oh);

    /* Switch: '<S208>/Switch1' incorporates:
     *  Constant: '<S208>/Constant'
     *  Constant: '<S208>/Constant1'
     *  Constant: '<S211>/Constant'
     *  Product: '<S208>/Divide'
     *  Product: '<S208>/Divide1'
     *  RelationalOperator: '<S211>/Compare'
     *  Switch: '<S208>/Switch'
     */
    if (rtb_Subtract1_of > 1.0E-6) {
      rtb_Hypot_bl /= rtb_Subtract1_of;
      rtb_Add_oh /= rtb_Subtract1_of;
    } else {
      rtb_Hypot_bl = 1.0;
      rtb_Add_oh = 0.0;
    }

    /* End of Switch: '<S208>/Switch1' */
    rtb_rx_l = rt_atan2d_snf(rtb_Add_oh, rtb_Hypot_bl);
  } else {
    rtb_rx_l = Code_Gen_Model_B.FR_Desired_Module_Angle;
  }

  /* Sum: '<S200>/Sum' incorporates:
   *  Sum: '<S199>/Add'
   */
  rtb_rx_l -= Code_Gen_Model_B.FR_Steer_Module_Angle;

  /* Sum: '<S213>/Add1' incorporates:
   *  Constant: '<S213>/Constant3'
   *  Constant: '<S213>/Constant4'
   *  Math: '<S213>/Math Function'
   *  Sum: '<S200>/Sum'
   *  Sum: '<S213>/Add2'
   */
  rtb_thetay_l = rt_modd_snf(rtb_rx_l + 3.1415926535897931, 6.2831853071795862)
    - 3.1415926535897931;

  /* Sum: '<S215>/Sum1' incorporates:
   *  Constant: '<S200>/Constant2'
   *  Product: '<S215>/Product'
   *  Sum: '<S215>/Sum'
   *  UnitDelay: '<S215>/Unit Delay1'
   */
  rtb_Add_oh = ((rtb_thetay_l - Code_Gen_Model_DW.UnitDelay1_DSTATE_n) *
                Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_n;

  /* Product: '<S200>/Product' incorporates:
   *  Constant: '<S200>/Constant3'
   */
  rtb_Subtract1_of = rtb_Add_oh * Steering_Motor_Control_D;

  /* Sum: '<S214>/Diff' incorporates:
   *  UnitDelay: '<S214>/UD'
   *
   * Block description for '<S214>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S214>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Switch1_pz = rtb_Subtract1_of - Code_Gen_Model_DW.UD_DSTATE_i;

  /* Saturate: '<S200>/Saturation' */
  if (rtb_Switch1_pz > Steering_Motor_Control_D_UL) {
    rtb_Switch1_pz = Steering_Motor_Control_D_UL;
  } else if (rtb_Switch1_pz < Steering_Motor_Control_D_LL) {
    rtb_Switch1_pz = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S200>/Add' incorporates:
   *  Gain: '<S200>/Gain1'
   *  Saturate: '<S200>/Saturation'
   */
  rtb_Add_i = (Steering_Motor_Control_P * rtb_thetay_l) + rtb_Switch1_pz;

  /* Sum: '<S200>/Subtract' incorporates:
   *  Constant: '<S200>/Constant'
   */
  rtb_thetay_i = 1.0 - rtb_Add_i;

  /* Sum: '<S200>/Sum2' incorporates:
   *  Gain: '<S200>/Gain2'
   *  UnitDelay: '<S200>/Unit Delay'
   */
  rtb_Hypot_bl = (Steering_Motor_Control_I * rtb_thetay_l) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_dt;

  /* Switch: '<S216>/Switch2' incorporates:
   *  Constant: '<S200>/Constant'
   *  RelationalOperator: '<S216>/LowerRelop1'
   *  Sum: '<S200>/Subtract'
   */
  if (!(rtb_Hypot_bl > (1.0 - rtb_Add_i))) {
    /* Switch: '<S216>/Switch' incorporates:
     *  Constant: '<S200>/Constant1'
     *  RelationalOperator: '<S216>/UpperRelop'
     *  Sum: '<S200>/Subtract1'
     */
    if (rtb_Hypot_bl < (-1.0 - rtb_Add_i)) {
      rtb_thetay_i = -1.0 - rtb_Add_i;
    } else {
      rtb_thetay_i = rtb_Hypot_bl;
    }

    /* End of Switch: '<S216>/Switch' */
  }

  /* End of Switch: '<S216>/Switch2' */

  /* Saturate: '<S200>/Saturation1' */
  if (rtb_thetay_i > Steering_Motor_Control_I_UL) {
    rtb_Hypot_bl = Steering_Motor_Control_I_UL;
  } else if (rtb_thetay_i < Steering_Motor_Control_I_LL) {
    rtb_Hypot_bl = Steering_Motor_Control_I_LL;
  } else {
    rtb_Hypot_bl = rtb_thetay_i;
  }

  /* End of Saturate: '<S200>/Saturation1' */

  /* Sum: '<S200>/Add1' */
  rtb_Switch1_pz = rtb_Add_i + rtb_Hypot_bl;

  /* Saturate: '<S200>/Saturation2' */
  if (rtb_Switch1_pz > 1.0) {
    /* Outport: '<Root>/FrontRight_Steer_DutyCycle' */
    Code_Gen_Model_Y.FrontRight_Steer_DutyCycle = 1.0;
  } else if (rtb_Switch1_pz < -1.0) {
    /* Outport: '<Root>/FrontRight_Steer_DutyCycle' */
    Code_Gen_Model_Y.FrontRight_Steer_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/FrontRight_Steer_DutyCycle' */
    Code_Gen_Model_Y.FrontRight_Steer_DutyCycle = rtb_Switch1_pz;
  }

  /* End of Saturate: '<S200>/Saturation2' */

  /* Product: '<S295>/Product1' */
  Code_Gen_Model_B.FR_Desired_Wheel_Speed =
    Code_Gen_Model_B.FR_Desired_Wheel_Speed_in * rtb_rx_o;

  /* Switch: '<S198>/Speed_Switch' incorporates:
   *  UnaryMinus: '<S198>/Unary Minus'
   */
  if (rtb_Is_Absolute_Steering) {
    tmp = -Code_Gen_Model_B.FR_Desired_Wheel_Speed;
  } else {
    tmp = Code_Gen_Model_B.FR_Desired_Wheel_Speed;
  }

  /* Product: '<S201>/Product2' incorporates:
   *  Constant: '<S201>/Constant'
   *  Switch: '<S198>/Speed_Switch'
   */
  rtb_thetay_l = tmp * 1150.4247703785388;

  /* Signum: '<S196>/Sign' */
  if (rtIsNaN(rtb_thetay_l)) {
    tmp = (rtNaN);
  } else if (rtb_thetay_l < 0.0) {
    tmp = -1.0;
  } else {
    tmp = (rtb_thetay_l > 0.0);
  }

  /* Signum: '<S196>/Sign1' incorporates:
   *  Inport: '<Root>/FrontRight_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.FrontRight_Drive_Motor_Speed)) {
    rtb_Add_du = (rtNaN);
  } else if (Code_Gen_Model_U.FrontRight_Drive_Motor_Speed < 0.0) {
    rtb_Add_du = -1.0;
  } else {
    rtb_Add_du = (Code_Gen_Model_U.FrontRight_Drive_Motor_Speed > 0.0);
  }

  /* Product: '<S171>/Product' incorporates:
   *  Abs: '<S196>/Abs'
   *  Abs: '<S199>/Abs'
   *  Constant: '<S202>/Constant'
   *  Constant: '<S212>/Constant3'
   *  Constant: '<S212>/Constant4'
   *  Inport: '<Root>/FrontRight_Drive_Motor_Speed'
   *  Logic: '<S196>/OR'
   *  Lookup_n-D: '<S199>/1-D Lookup Table'
   *  Math: '<S212>/Math Function'
   *  RelationalOperator: '<S196>/Equal1'
   *  RelationalOperator: '<S202>/Compare'
   *  Signum: '<S196>/Sign'
   *  Signum: '<S196>/Sign1'
   *  Sum: '<S212>/Add1'
   *  Sum: '<S212>/Add2'
   */
  rtb_thetay_l = (((real_T)((tmp == rtb_Add_du) || (fabs
    (Code_Gen_Model_U.FrontRight_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_thetay_l) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_rx_l + 1.5707963267948966, 3.1415926535897931) -
          1.5707963267948966), Code_Gen_Model_ConstP.pooled23,
     Code_Gen_Model_ConstP.pooled22, 1U);

  /* Gain: '<S197>/Gain' */
  rtb_FeedForward_n = Drive_Motor_Control_FF * rtb_thetay_l;

  /* Sum: '<S197>/Sum' incorporates:
   *  Inport: '<Root>/FrontRight_Drive_Motor_Speed'
   */
  rtb_thetay_l -= Code_Gen_Model_U.FrontRight_Drive_Motor_Speed;

  /* Sum: '<S204>/Sum1' incorporates:
   *  Constant: '<S197>/Constant2'
   *  Product: '<S204>/Product'
   *  Sum: '<S204>/Sum'
   *  UnitDelay: '<S204>/Unit Delay1'
   */
  rtb_Add_i = ((rtb_thetay_l - Code_Gen_Model_DW.UnitDelay1_DSTATE_b1) *
               Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_b1;

  /* Product: '<S197>/Product' incorporates:
   *  Constant: '<S197>/Constant3'
   */
  rtb_Subtract1_a = rtb_Add_i * Drive_Motor_Control_D;

  /* Sum: '<S203>/Diff' incorporates:
   *  UnitDelay: '<S203>/UD'
   *
   * Block description for '<S203>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S203>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Switch1_pz = rtb_Subtract1_a - Code_Gen_Model_DW.UD_DSTATE_e;

  /* Saturate: '<S197>/Saturation' */
  if (rtb_Switch1_pz > Drive_Motor_Control_D_UL) {
    rtb_Switch1_pz = Drive_Motor_Control_D_UL;
  } else if (rtb_Switch1_pz < Drive_Motor_Control_D_LL) {
    rtb_Switch1_pz = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S197>/Add' incorporates:
   *  Gain: '<S197>/Gain1'
   *  Saturate: '<S197>/Saturation'
   */
  rtb_Add_o2 = ((Drive_Motor_Control_P * rtb_thetay_l) + rtb_FeedForward_n) +
    rtb_Switch1_pz;

  /* Sum: '<S197>/Subtract' incorporates:
   *  Constant: '<S197>/Constant'
   */
  rtb_rx_l = 1.0 - rtb_Add_o2;

  /* Sum: '<S197>/Sum2' incorporates:
   *  Gain: '<S197>/Gain2'
   *  UnitDelay: '<S197>/Unit Delay'
   */
  rtb_FeedForward_n = (Drive_Motor_Control_I * rtb_thetay_l) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_em;

  /* Switch: '<S205>/Switch2' incorporates:
   *  Constant: '<S197>/Constant'
   *  RelationalOperator: '<S205>/LowerRelop1'
   *  Sum: '<S197>/Subtract'
   */
  if (!(rtb_FeedForward_n > (1.0 - rtb_Add_o2))) {
    /* Switch: '<S205>/Switch' incorporates:
     *  Constant: '<S197>/Constant1'
     *  RelationalOperator: '<S205>/UpperRelop'
     *  Sum: '<S197>/Subtract1'
     */
    if (rtb_FeedForward_n < (-1.0 - rtb_Add_o2)) {
      rtb_rx_l = -1.0 - rtb_Add_o2;
    } else {
      rtb_rx_l = rtb_FeedForward_n;
    }

    /* End of Switch: '<S205>/Switch' */
  }

  /* End of Switch: '<S205>/Switch2' */

  /* Saturate: '<S197>/Saturation1' */
  if (rtb_rx_l > Drive_Motor_Control_I_UL) {
    rtb_FeedForward_n = Drive_Motor_Control_I_UL;
  } else if (rtb_rx_l < Drive_Motor_Control_I_LL) {
    rtb_FeedForward_n = Drive_Motor_Control_I_LL;
  } else {
    rtb_FeedForward_n = rtb_rx_l;
  }

  /* End of Saturate: '<S197>/Saturation1' */

  /* Sum: '<S197>/Add1' */
  rtb_Switch1_pz = rtb_Add_o2 + rtb_FeedForward_n;

  /* Saturate: '<S197>/Saturation2' */
  if (rtb_Switch1_pz > 1.0) {
    /* Outport: '<Root>/FrontRight_Drive_DutyCycle' */
    Code_Gen_Model_Y.FrontRight_Drive_DutyCycle = 1.0;
  } else if (rtb_Switch1_pz < -1.0) {
    /* Outport: '<Root>/FrontRight_Drive_DutyCycle' */
    Code_Gen_Model_Y.FrontRight_Drive_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/FrontRight_Drive_DutyCycle' */
    Code_Gen_Model_Y.FrontRight_Drive_DutyCycle = rtb_Switch1_pz;
  }

  /* End of Saturate: '<S197>/Saturation2' */

  /* Switch: '<S310>/Switch' */
  if (!rtb_FixPtRelationalOperator) {
    /* Switch: '<S310>/Switch' incorporates:
     *  Fcn: '<S311>/x->theta'
     */
    Code_Gen_Model_B.BL_Desired_Module_Angle = rt_atan2d_snf(rtb_Minus_n[1],
      rtb_Minus_n[0]);
  }

  /* End of Switch: '<S310>/Switch' */

  /* Trigonometry: '<S230>/Cos4' incorporates:
   *  Switch: '<S219>/Angle_Switch'
   *  Trigonometry: '<S229>/Cos4'
   */
  rtb_Subtract_e = cos(Code_Gen_Model_B.BL_Desired_Module_Angle);

  /* Sum: '<S168>/Add1' incorporates:
   *  Constant: '<S168>/Constant3'
   *  Constant: '<S168>/Constant4'
   *  Gain: '<S16>/Revolutions to Radians2'
   *  Inport: '<Root>/BackLeft_Steer_Rev'
   *  Inport: '<Root>/BackLeft_Turn_Offset'
   *  Math: '<S168>/Math Function'
   *  Sum: '<S168>/Add2'
   *  Sum: '<S16>/Add2'
   */
  Code_Gen_Model_B.BL_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.BackLeft_Steer_Rev -
       Code_Gen_Model_U.BackLeft_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Trigonometry: '<S230>/Sin5' incorporates:
   *  UnaryMinus: '<S228>/Unary Minus'
   */
  rtb_thetay_i = sin(-Code_Gen_Model_B.BL_Steer_Module_Angle);

  /* Trigonometry: '<S230>/Sin4' incorporates:
   *  Switch: '<S219>/Angle_Switch'
   *  Trigonometry: '<S229>/Sin4'
   */
  rtb_Product_d = sin(Code_Gen_Model_B.BL_Desired_Module_Angle);

  /* Trigonometry: '<S230>/Cos5' incorporates:
   *  UnaryMinus: '<S228>/Unary Minus'
   */
  rtb_thetay_l = cos(-Code_Gen_Model_B.BL_Steer_Module_Angle);

  /* Sum: '<S230>/Subtract1' incorporates:
   *  Product: '<S230>/Product2'
   *  Product: '<S230>/Product3'
   *  Trigonometry: '<S230>/Cos4'
   *  Trigonometry: '<S230>/Sin4'
   */
  rtb_Add_o2 = (rtb_Subtract_e * rtb_thetay_i) + (rtb_Product_d * rtb_thetay_l);

  /* Sum: '<S230>/Subtract' incorporates:
   *  Product: '<S230>/Product'
   *  Product: '<S230>/Product1'
   *  Trigonometry: '<S230>/Cos4'
   *  Trigonometry: '<S230>/Sin4'
   */
  rtb_Subtract1_do = (rtb_Subtract_e * rtb_thetay_l) - (rtb_Product_d *
    rtb_thetay_i);

  /* Math: '<S230>/Hypot' */
  rtb_Hypot_d = rt_hypotd_snf(rtb_Subtract1_do, rtb_Add_o2);

  /* Switch: '<S230>/Switch' incorporates:
   *  Constant: '<S230>/Constant'
   *  Constant: '<S230>/Constant1'
   *  Constant: '<S231>/Constant'
   *  Product: '<S230>/Divide'
   *  Product: '<S230>/Divide1'
   *  RelationalOperator: '<S231>/Compare'
   *  Switch: '<S230>/Switch1'
   */
  if (rtb_Hypot_d > 1.0E-6) {
    rtb_rx_l = rtb_Add_o2 / rtb_Hypot_d;
    rtb_thetay_l = rtb_Subtract1_do / rtb_Hypot_d;
  } else {
    rtb_rx_l = 0.0;
    rtb_thetay_l = 1.0;
  }

  /* End of Switch: '<S230>/Switch' */

  /* RelationalOperator: '<S227>/Compare' incorporates:
   *  Abs: '<S219>/Abs'
   *  Constant: '<S227>/Constant'
   *  Trigonometry: '<S230>/Atan1'
   */
  rtb_FixPtRelationalOperator = (fabs(rt_atan2d_snf(rtb_rx_l, rtb_thetay_l)) >
    1.5707963267948966);

  /* Switch: '<S219>/Angle_Switch' incorporates:
   *  Trigonometry: '<S229>/Atan1'
   */
  if (rtb_FixPtRelationalOperator) {
    /* Sum: '<S229>/Subtract1' incorporates:
     *  Product: '<S229>/Product2'
     *  Product: '<S229>/Product3'
     */
    rtb_Add_o2 = (rtb_Subtract_e * Code_Gen_Model_ConstB.Sin5_e) +
      (rtb_Product_d * Code_Gen_Model_ConstB.Cos5_i);

    /* Sum: '<S229>/Subtract' incorporates:
     *  Product: '<S229>/Product'
     *  Product: '<S229>/Product1'
     */
    rtb_Hypot_d = (rtb_Subtract_e * Code_Gen_Model_ConstB.Cos5_i) -
      (rtb_Product_d * Code_Gen_Model_ConstB.Sin5_e);

    /* Math: '<S229>/Hypot' */
    rtb_Subtract1_do = rt_hypotd_snf(rtb_Hypot_d, rtb_Add_o2);

    /* Switch: '<S229>/Switch1' incorporates:
     *  Constant: '<S229>/Constant'
     *  Constant: '<S229>/Constant1'
     *  Constant: '<S232>/Constant'
     *  Product: '<S229>/Divide'
     *  Product: '<S229>/Divide1'
     *  RelationalOperator: '<S232>/Compare'
     *  Switch: '<S229>/Switch'
     */
    if (rtb_Subtract1_do > 1.0E-6) {
      rtb_Hypot_d /= rtb_Subtract1_do;
      rtb_Add_o2 /= rtb_Subtract1_do;
    } else {
      rtb_Hypot_d = 1.0;
      rtb_Add_o2 = 0.0;
    }

    /* End of Switch: '<S229>/Switch1' */
    rtb_rx_l = rt_atan2d_snf(rtb_Add_o2, rtb_Hypot_d);
  } else {
    rtb_rx_l = Code_Gen_Model_B.BL_Desired_Module_Angle;
  }

  /* Sum: '<S221>/Sum' incorporates:
   *  Sum: '<S220>/Add'
   */
  rtb_rx_l -= Code_Gen_Model_B.BL_Steer_Module_Angle;

  /* Sum: '<S234>/Add1' incorporates:
   *  Constant: '<S234>/Constant3'
   *  Constant: '<S234>/Constant4'
   *  Math: '<S234>/Math Function'
   *  Sum: '<S221>/Sum'
   *  Sum: '<S234>/Add2'
   */
  rtb_thetay_l = rt_modd_snf(rtb_rx_l + 3.1415926535897931, 6.2831853071795862)
    - 3.1415926535897931;

  /* Sum: '<S236>/Sum1' incorporates:
   *  Constant: '<S221>/Constant2'
   *  Product: '<S236>/Product'
   *  Sum: '<S236>/Sum'
   *  UnitDelay: '<S236>/Unit Delay1'
   */
  rtb_Add_o2 = ((rtb_thetay_l - Code_Gen_Model_DW.UnitDelay1_DSTATE_nw) *
                Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_nw;

  /* Product: '<S221>/Product' incorporates:
   *  Constant: '<S221>/Constant3'
   */
  rtb_Subtract1_do = rtb_Add_o2 * Steering_Motor_Control_D;

  /* Sum: '<S235>/Diff' incorporates:
   *  UnitDelay: '<S235>/UD'
   *
   * Block description for '<S235>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S235>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Switch1_pz = rtb_Subtract1_do - Code_Gen_Model_DW.UD_DSTATE_k;

  /* Saturate: '<S221>/Saturation' */
  if (rtb_Switch1_pz > Steering_Motor_Control_D_UL) {
    rtb_Switch1_pz = Steering_Motor_Control_D_UL;
  } else if (rtb_Switch1_pz < Steering_Motor_Control_D_LL) {
    rtb_Switch1_pz = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S221>/Add' incorporates:
   *  Gain: '<S221>/Gain1'
   *  Saturate: '<S221>/Saturation'
   */
  rtb_Add_gj = (Steering_Motor_Control_P * rtb_thetay_l) + rtb_Switch1_pz;

  /* Sum: '<S221>/Subtract' incorporates:
   *  Constant: '<S221>/Constant'
   */
  rtb_thetay_i = 1.0 - rtb_Add_gj;

  /* Sum: '<S221>/Sum2' incorporates:
   *  Gain: '<S221>/Gain2'
   *  UnitDelay: '<S221>/Unit Delay'
   */
  rtb_Hypot_d = (Steering_Motor_Control_I * rtb_thetay_l) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_k;

  /* Switch: '<S237>/Switch2' incorporates:
   *  Constant: '<S221>/Constant'
   *  RelationalOperator: '<S237>/LowerRelop1'
   *  Sum: '<S221>/Subtract'
   */
  if (!(rtb_Hypot_d > (1.0 - rtb_Add_gj))) {
    /* Switch: '<S237>/Switch' incorporates:
     *  Constant: '<S221>/Constant1'
     *  RelationalOperator: '<S237>/UpperRelop'
     *  Sum: '<S221>/Subtract1'
     */
    if (rtb_Hypot_d < (-1.0 - rtb_Add_gj)) {
      rtb_thetay_i = -1.0 - rtb_Add_gj;
    } else {
      rtb_thetay_i = rtb_Hypot_d;
    }

    /* End of Switch: '<S237>/Switch' */
  }

  /* End of Switch: '<S237>/Switch2' */

  /* Saturate: '<S221>/Saturation1' */
  if (rtb_thetay_i > Steering_Motor_Control_I_UL) {
    rtb_Hypot_d = Steering_Motor_Control_I_UL;
  } else if (rtb_thetay_i < Steering_Motor_Control_I_LL) {
    rtb_Hypot_d = Steering_Motor_Control_I_LL;
  } else {
    rtb_Hypot_d = rtb_thetay_i;
  }

  /* End of Saturate: '<S221>/Saturation1' */

  /* Sum: '<S221>/Add1' */
  rtb_Switch1_pz = rtb_Add_gj + rtb_Hypot_d;

  /* Saturate: '<S221>/Saturation2' */
  if (rtb_Switch1_pz > 1.0) {
    /* Outport: '<Root>/BackLeft_Steer_DutyCycle' */
    Code_Gen_Model_Y.BackLeft_Steer_DutyCycle = 1.0;
  } else if (rtb_Switch1_pz < -1.0) {
    /* Outport: '<Root>/BackLeft_Steer_DutyCycle' */
    Code_Gen_Model_Y.BackLeft_Steer_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/BackLeft_Steer_DutyCycle' */
    Code_Gen_Model_Y.BackLeft_Steer_DutyCycle = rtb_Switch1_pz;
  }

  /* End of Saturate: '<S221>/Saturation2' */

  /* Product: '<S295>/Product2' */
  Code_Gen_Model_B.BL_Desired_Wheel_Speed =
    Code_Gen_Model_B.BL_Desired_Wheel_Speed_in * rtb_rx_o;

  /* Switch: '<S219>/Speed_Switch' incorporates:
   *  UnaryMinus: '<S219>/Unary Minus'
   */
  if (rtb_FixPtRelationalOperator) {
    tmp = -Code_Gen_Model_B.BL_Desired_Wheel_Speed;
  } else {
    tmp = Code_Gen_Model_B.BL_Desired_Wheel_Speed;
  }

  /* Product: '<S222>/Product2' incorporates:
   *  Constant: '<S222>/Constant'
   *  Switch: '<S219>/Speed_Switch'
   */
  rtb_thetay_l = tmp * 1150.4247703785388;

  /* Signum: '<S217>/Sign' */
  if (rtIsNaN(rtb_thetay_l)) {
    tmp = (rtNaN);
  } else if (rtb_thetay_l < 0.0) {
    tmp = -1.0;
  } else {
    tmp = (rtb_thetay_l > 0.0);
  }

  /* Signum: '<S217>/Sign1' incorporates:
   *  Inport: '<Root>/BackLeft_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.BackLeft_Drive_Motor_Speed)) {
    rtb_Add_du = (rtNaN);
  } else if (Code_Gen_Model_U.BackLeft_Drive_Motor_Speed < 0.0) {
    rtb_Add_du = -1.0;
  } else {
    rtb_Add_du = (Code_Gen_Model_U.BackLeft_Drive_Motor_Speed > 0.0);
  }

  /* Product: '<S172>/Product' incorporates:
   *  Abs: '<S217>/Abs'
   *  Abs: '<S220>/Abs'
   *  Constant: '<S223>/Constant'
   *  Constant: '<S233>/Constant3'
   *  Constant: '<S233>/Constant4'
   *  Inport: '<Root>/BackLeft_Drive_Motor_Speed'
   *  Logic: '<S217>/OR'
   *  Lookup_n-D: '<S220>/1-D Lookup Table'
   *  Math: '<S233>/Math Function'
   *  RelationalOperator: '<S217>/Equal1'
   *  RelationalOperator: '<S223>/Compare'
   *  Signum: '<S217>/Sign'
   *  Signum: '<S217>/Sign1'
   *  Sum: '<S233>/Add1'
   *  Sum: '<S233>/Add2'
   */
  rtb_thetay_l = (((real_T)((tmp == rtb_Add_du) || (fabs
    (Code_Gen_Model_U.BackLeft_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_thetay_l) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_rx_l + 1.5707963267948966, 3.1415926535897931) -
          1.5707963267948966), Code_Gen_Model_ConstP.pooled23,
     Code_Gen_Model_ConstP.pooled22, 1U);

  /* Gain: '<S218>/Gain' */
  rtb_FeedForward_a = Drive_Motor_Control_FF * rtb_thetay_l;

  /* Sum: '<S218>/Sum' incorporates:
   *  Inport: '<Root>/BackLeft_Drive_Motor_Speed'
   */
  rtb_thetay_l -= Code_Gen_Model_U.BackLeft_Drive_Motor_Speed;

  /* Sum: '<S225>/Sum1' incorporates:
   *  Constant: '<S218>/Constant2'
   *  Product: '<S225>/Product'
   *  Sum: '<S225>/Sum'
   *  UnitDelay: '<S225>/Unit Delay1'
   */
  rtb_Add_gj = ((rtb_thetay_l - Code_Gen_Model_DW.UnitDelay1_DSTATE_f) *
                Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_f;

  /* Product: '<S218>/Product' incorporates:
   *  Constant: '<S218>/Constant3'
   */
  rtb_Subtract1_f = rtb_Add_gj * Drive_Motor_Control_D;

  /* Sum: '<S224>/Diff' incorporates:
   *  UnitDelay: '<S224>/UD'
   *
   * Block description for '<S224>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S224>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Switch1_pz = rtb_Subtract1_f - Code_Gen_Model_DW.UD_DSTATE_l;

  /* Saturate: '<S218>/Saturation' */
  if (rtb_Switch1_pz > Drive_Motor_Control_D_UL) {
    rtb_Switch1_pz = Drive_Motor_Control_D_UL;
  } else if (rtb_Switch1_pz < Drive_Motor_Control_D_LL) {
    rtb_Switch1_pz = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S218>/Add' incorporates:
   *  Gain: '<S218>/Gain1'
   *  Saturate: '<S218>/Saturation'
   */
  rtb_thetay_i = ((Drive_Motor_Control_P * rtb_thetay_l) + rtb_FeedForward_a) +
    rtb_Switch1_pz;

  /* Sum: '<S218>/Subtract' incorporates:
   *  Constant: '<S218>/Constant'
   */
  rtb_rx_l = 1.0 - rtb_thetay_i;

  /* Sum: '<S218>/Sum2' incorporates:
   *  Gain: '<S218>/Gain2'
   *  UnitDelay: '<S218>/Unit Delay'
   */
  rtb_FeedForward_a = (Drive_Motor_Control_I * rtb_thetay_l) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_gp;

  /* Switch: '<S226>/Switch2' incorporates:
   *  Constant: '<S218>/Constant'
   *  RelationalOperator: '<S226>/LowerRelop1'
   *  Sum: '<S218>/Subtract'
   */
  if (!(rtb_FeedForward_a > (1.0 - rtb_thetay_i))) {
    /* Sum: '<S218>/Subtract1' incorporates:
     *  Constant: '<S218>/Constant1'
     */
    rtb_rx_l = -1.0 - rtb_thetay_i;

    /* Switch: '<S226>/Switch' incorporates:
     *  Constant: '<S218>/Constant1'
     *  RelationalOperator: '<S226>/UpperRelop'
     *  Sum: '<S218>/Subtract1'
     */
    if (!(rtb_FeedForward_a < (-1.0 - rtb_thetay_i))) {
      rtb_rx_l = rtb_FeedForward_a;
    }

    /* End of Switch: '<S226>/Switch' */
  }

  /* End of Switch: '<S226>/Switch2' */

  /* Saturate: '<S218>/Saturation1' */
  if (rtb_rx_l > Drive_Motor_Control_I_UL) {
    rtb_FeedForward_a = Drive_Motor_Control_I_UL;
  } else if (rtb_rx_l < Drive_Motor_Control_I_LL) {
    rtb_FeedForward_a = Drive_Motor_Control_I_LL;
  } else {
    rtb_FeedForward_a = rtb_rx_l;
  }

  /* End of Saturate: '<S218>/Saturation1' */

  /* Sum: '<S218>/Add1' */
  rtb_Switch1_pz = rtb_thetay_i + rtb_FeedForward_a;

  /* Saturate: '<S218>/Saturation2' */
  if (rtb_Switch1_pz > 1.0) {
    /* Outport: '<Root>/BackLeft_Drive_DutyCycle' */
    Code_Gen_Model_Y.BackLeft_Drive_DutyCycle = 1.0;
  } else if (rtb_Switch1_pz < -1.0) {
    /* Outport: '<Root>/BackLeft_Drive_DutyCycle' */
    Code_Gen_Model_Y.BackLeft_Drive_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/BackLeft_Drive_DutyCycle' */
    Code_Gen_Model_Y.BackLeft_Drive_DutyCycle = rtb_Switch1_pz;
  }

  /* End of Saturate: '<S218>/Saturation2' */

  /* Switch: '<S315>/Switch' */
  if (!rtb_FixPtRelationalOperator_ea) {
    /* Switch: '<S315>/Switch' incorporates:
     *  Fcn: '<S316>/x->theta'
     */
    Code_Gen_Model_B.BR_Desired_Module_Angle = rt_atan2d_snf(rtb_Add2_k_idx_1,
      rtb_Add2_k_idx_0);
  }

  /* End of Switch: '<S315>/Switch' */

  /* Trigonometry: '<S251>/Cos4' incorporates:
   *  Switch: '<S240>/Angle_Switch'
   *  Trigonometry: '<S250>/Cos4'
   */
  rtb_Subtract_e = cos(Code_Gen_Model_B.BR_Desired_Module_Angle);

  /* Sum: '<S169>/Add1' incorporates:
   *  Constant: '<S169>/Constant3'
   *  Constant: '<S169>/Constant4'
   *  Gain: '<S16>/Revolutions to Radians3'
   *  Inport: '<Root>/BackRight_Steer_Rev'
   *  Inport: '<Root>/BackRight_Turn_Offset'
   *  Math: '<S169>/Math Function'
   *  Sum: '<S169>/Add2'
   *  Sum: '<S16>/Add3'
   */
  Code_Gen_Model_B.BR_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.BackRight_Steer_Rev -
       Code_Gen_Model_U.BackRight_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Trigonometry: '<S251>/Sin5' incorporates:
   *  UnaryMinus: '<S249>/Unary Minus'
   */
  rtb_thetay_i = sin(-Code_Gen_Model_B.BR_Steer_Module_Angle);

  /* Trigonometry: '<S251>/Sin4' incorporates:
   *  Switch: '<S240>/Angle_Switch'
   *  Trigonometry: '<S250>/Sin4'
   */
  rtb_Product_d = sin(Code_Gen_Model_B.BR_Desired_Module_Angle);

  /* Trigonometry: '<S251>/Cos5' incorporates:
   *  UnaryMinus: '<S249>/Unary Minus'
   */
  rtb_thetay_l = cos(-Code_Gen_Model_B.BR_Steer_Module_Angle);

  /* Sum: '<S251>/Subtract1' incorporates:
   *  Product: '<S251>/Product2'
   *  Product: '<S251>/Product3'
   *  Trigonometry: '<S251>/Cos4'
   *  Trigonometry: '<S251>/Sin4'
   */
  rtb_rx_l = (rtb_Subtract_e * rtb_thetay_i) + (rtb_Product_d * rtb_thetay_l);

  /* Sum: '<S251>/Subtract' incorporates:
   *  Product: '<S251>/Product'
   *  Product: '<S251>/Product1'
   *  Trigonometry: '<S251>/Cos4'
   *  Trigonometry: '<S251>/Sin4'
   */
  rtb_thetay_i = (rtb_Subtract_e * rtb_thetay_l) - (rtb_Product_d * rtb_thetay_i);

  /* Math: '<S251>/Hypot' */
  rtb_thetay_l = rt_hypotd_snf(rtb_thetay_i, rtb_rx_l);

  /* Switch: '<S251>/Switch' incorporates:
   *  Constant: '<S251>/Constant'
   *  Constant: '<S251>/Constant1'
   *  Constant: '<S252>/Constant'
   *  Product: '<S251>/Divide'
   *  Product: '<S251>/Divide1'
   *  RelationalOperator: '<S252>/Compare'
   *  Switch: '<S251>/Switch1'
   */
  if (rtb_thetay_l > 1.0E-6) {
    rtb_rx_l /= rtb_thetay_l;
    rtb_thetay_l = rtb_thetay_i / rtb_thetay_l;
  } else {
    rtb_rx_l = 0.0;
    rtb_thetay_l = 1.0;
  }

  /* End of Switch: '<S251>/Switch' */

  /* RelationalOperator: '<S248>/Compare' incorporates:
   *  Abs: '<S240>/Abs'
   *  Constant: '<S248>/Constant'
   *  Trigonometry: '<S251>/Atan1'
   */
  rtb_FixPtRelationalOperator_ea = (fabs(rt_atan2d_snf(rtb_rx_l, rtb_thetay_l)) >
    1.5707963267948966);

  /* Switch: '<S240>/Angle_Switch' incorporates:
   *  Trigonometry: '<S250>/Atan1'
   */
  if (rtb_FixPtRelationalOperator_ea) {
    /* Sum: '<S250>/Subtract1' incorporates:
     *  Product: '<S250>/Product2'
     *  Product: '<S250>/Product3'
     */
    rtb_thetay_i = (rtb_Subtract_e * Code_Gen_Model_ConstB.Sin5_c) +
      (rtb_Product_d * Code_Gen_Model_ConstB.Cos5_b);

    /* Sum: '<S250>/Subtract' incorporates:
     *  Product: '<S250>/Product'
     *  Product: '<S250>/Product1'
     */
    rtb_Subtract_e = (rtb_Subtract_e * Code_Gen_Model_ConstB.Cos5_b) -
      (rtb_Product_d * Code_Gen_Model_ConstB.Sin5_c);

    /* Math: '<S250>/Hypot' */
    rtb_rx_l = rt_hypotd_snf(rtb_Subtract_e, rtb_thetay_i);

    /* Switch: '<S250>/Switch1' incorporates:
     *  Constant: '<S250>/Constant'
     *  Constant: '<S250>/Constant1'
     *  Constant: '<S253>/Constant'
     *  Product: '<S250>/Divide'
     *  Product: '<S250>/Divide1'
     *  RelationalOperator: '<S253>/Compare'
     *  Switch: '<S250>/Switch'
     */
    if (rtb_rx_l > 1.0E-6) {
      rtb_Subtract_e /= rtb_rx_l;
      rtb_thetay_i /= rtb_rx_l;
    } else {
      rtb_Subtract_e = 1.0;
      rtb_thetay_i = 0.0;
    }

    /* End of Switch: '<S250>/Switch1' */
    rtb_rx_l = rt_atan2d_snf(rtb_thetay_i, rtb_Subtract_e);
  } else {
    rtb_rx_l = Code_Gen_Model_B.BR_Desired_Module_Angle;
  }

  /* Sum: '<S242>/Sum' incorporates:
   *  Sum: '<S241>/Add'
   */
  rtb_rx_l -= Code_Gen_Model_B.BR_Steer_Module_Angle;

  /* Sum: '<S255>/Add1' incorporates:
   *  Constant: '<S255>/Constant3'
   *  Constant: '<S255>/Constant4'
   *  Math: '<S255>/Math Function'
   *  Sum: '<S242>/Sum'
   *  Sum: '<S255>/Add2'
   */
  rtb_thetay_l = rt_modd_snf(rtb_rx_l + 3.1415926535897931, 6.2831853071795862)
    - 3.1415926535897931;

  /* Sum: '<S257>/Sum1' incorporates:
   *  Constant: '<S242>/Constant2'
   *  Product: '<S257>/Product'
   *  Sum: '<S257>/Sum'
   *  UnitDelay: '<S257>/Unit Delay1'
   */
  rtb_Subtract_e = ((rtb_thetay_l - Code_Gen_Model_DW.UnitDelay1_DSTATE_iw) *
                    Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_iw;

  /* Product: '<S242>/Product' incorporates:
   *  Constant: '<S242>/Constant3'
   */
  rtb_Product_d = rtb_Subtract_e * Steering_Motor_Control_D;

  /* Sum: '<S256>/Diff' incorporates:
   *  UnitDelay: '<S256>/UD'
   *
   * Block description for '<S256>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S256>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Switch1_pz = rtb_Product_d - Code_Gen_Model_DW.UD_DSTATE_ll;

  /* Saturate: '<S242>/Saturation' */
  if (rtb_Switch1_pz > Steering_Motor_Control_D_UL) {
    rtb_Switch1_pz = Steering_Motor_Control_D_UL;
  } else if (rtb_Switch1_pz < Steering_Motor_Control_D_LL) {
    rtb_Switch1_pz = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S242>/Add' incorporates:
   *  Gain: '<S242>/Gain1'
   *  Saturate: '<S242>/Saturation'
   */
  rtb_Add_du = (Steering_Motor_Control_P * rtb_thetay_l) + rtb_Switch1_pz;

  /* Sum: '<S242>/Subtract' incorporates:
   *  Constant: '<S242>/Constant'
   */
  rtb_thetay_i = 1.0 - rtb_Add_du;

  /* Sum: '<S242>/Sum2' incorporates:
   *  Gain: '<S242>/Gain2'
   *  UnitDelay: '<S242>/Unit Delay'
   */
  rtb_thetay_l = (Steering_Motor_Control_I * rtb_thetay_l) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_l;

  /* Switch: '<S258>/Switch2' incorporates:
   *  Constant: '<S242>/Constant'
   *  RelationalOperator: '<S258>/LowerRelop1'
   *  Sum: '<S242>/Subtract'
   */
  if (!(rtb_thetay_l > (1.0 - rtb_Add_du))) {
    /* Sum: '<S242>/Subtract1' incorporates:
     *  Constant: '<S242>/Constant1'
     */
    rtb_thetay_i = -1.0 - rtb_Add_du;

    /* Switch: '<S258>/Switch' incorporates:
     *  Constant: '<S242>/Constant1'
     *  RelationalOperator: '<S258>/UpperRelop'
     *  Sum: '<S242>/Subtract1'
     */
    if (!(rtb_thetay_l < (-1.0 - rtb_Add_du))) {
      rtb_thetay_i = rtb_thetay_l;
    }

    /* End of Switch: '<S258>/Switch' */
  }

  /* End of Switch: '<S258>/Switch2' */

  /* Saturate: '<S242>/Saturation1' */
  if (rtb_thetay_i > Steering_Motor_Control_I_UL) {
    rtb_Add2_k_idx_0 = Steering_Motor_Control_I_UL;
  } else if (rtb_thetay_i < Steering_Motor_Control_I_LL) {
    rtb_Add2_k_idx_0 = Steering_Motor_Control_I_LL;
  } else {
    rtb_Add2_k_idx_0 = rtb_thetay_i;
  }

  /* End of Saturate: '<S242>/Saturation1' */

  /* Sum: '<S242>/Add1' */
  rtb_Switch1_pz = rtb_Add_du + rtb_Add2_k_idx_0;

  /* Saturate: '<S242>/Saturation2' */
  if (rtb_Switch1_pz > 1.0) {
    /* Outport: '<Root>/BackRight_Steer_DutyCycle' */
    Code_Gen_Model_Y.BackRight_Steer_DutyCycle = 1.0;
  } else if (rtb_Switch1_pz < -1.0) {
    /* Outport: '<Root>/BackRight_Steer_DutyCycle' */
    Code_Gen_Model_Y.BackRight_Steer_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/BackRight_Steer_DutyCycle' */
    Code_Gen_Model_Y.BackRight_Steer_DutyCycle = rtb_Switch1_pz;
  }

  /* End of Saturate: '<S242>/Saturation2' */

  /* Product: '<S295>/Product3' */
  Code_Gen_Model_B.BR_Desired_Wheel_Speed =
    Code_Gen_Model_B.BR_Desired_Wheel_Speed_in * rtb_rx_o;

  /* Switch: '<S240>/Speed_Switch' incorporates:
   *  UnaryMinus: '<S240>/Unary Minus'
   */
  if (rtb_FixPtRelationalOperator_ea) {
    tmp = -Code_Gen_Model_B.BR_Desired_Wheel_Speed;
  } else {
    tmp = Code_Gen_Model_B.BR_Desired_Wheel_Speed;
  }

  /* Product: '<S243>/Product2' incorporates:
   *  Constant: '<S243>/Constant'
   *  Switch: '<S240>/Speed_Switch'
   */
  rtb_thetay_l = tmp * 1150.4247703785388;

  /* Signum: '<S238>/Sign' */
  if (rtIsNaN(rtb_thetay_l)) {
    tmp = (rtNaN);
  } else if (rtb_thetay_l < 0.0) {
    tmp = -1.0;
  } else {
    tmp = (rtb_thetay_l > 0.0);
  }

  /* Signum: '<S238>/Sign1' incorporates:
   *  Inport: '<Root>/BackRight_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.BackRight_Drive_Motor_Speed)) {
    rtb_Add_du = (rtNaN);
  } else if (Code_Gen_Model_U.BackRight_Drive_Motor_Speed < 0.0) {
    rtb_Add_du = -1.0;
  } else {
    rtb_Add_du = (Code_Gen_Model_U.BackRight_Drive_Motor_Speed > 0.0);
  }

  /* Product: '<S173>/Product' incorporates:
   *  Abs: '<S238>/Abs'
   *  Abs: '<S241>/Abs'
   *  Constant: '<S244>/Constant'
   *  Constant: '<S254>/Constant3'
   *  Constant: '<S254>/Constant4'
   *  Inport: '<Root>/BackRight_Drive_Motor_Speed'
   *  Logic: '<S238>/OR'
   *  Lookup_n-D: '<S241>/1-D Lookup Table'
   *  Math: '<S254>/Math Function'
   *  RelationalOperator: '<S238>/Equal1'
   *  RelationalOperator: '<S244>/Compare'
   *  Signum: '<S238>/Sign'
   *  Signum: '<S238>/Sign1'
   *  Sum: '<S254>/Add1'
   *  Sum: '<S254>/Add2'
   */
  rtb_thetay_l = (((real_T)((tmp == rtb_Add_du) || (fabs
    (Code_Gen_Model_U.BackRight_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_thetay_l) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_rx_l + 1.5707963267948966, 3.1415926535897931) -
          1.5707963267948966), Code_Gen_Model_ConstP.pooled23,
     Code_Gen_Model_ConstP.pooled22, 1U);

  /* Gain: '<S239>/Gain' */
  rtb_thetay_i = Drive_Motor_Control_FF * rtb_thetay_l;

  /* Sum: '<S239>/Sum' incorporates:
   *  Inport: '<Root>/BackRight_Drive_Motor_Speed'
   */
  rtb_thetay_l -= Code_Gen_Model_U.BackRight_Drive_Motor_Speed;

  /* Sum: '<S246>/Sum1' incorporates:
   *  Constant: '<S239>/Constant2'
   *  Product: '<S246>/Product'
   *  Sum: '<S246>/Sum'
   *  UnitDelay: '<S246>/Unit Delay1'
   */
  rtb_rx_o = ((rtb_thetay_l - Code_Gen_Model_DW.UnitDelay1_DSTATE_k) *
              Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_k;

  /* Product: '<S239>/Product' incorporates:
   *  Constant: '<S239>/Constant3'
   */
  rtb_Add_du = rtb_rx_o * Drive_Motor_Control_D;

  /* Sum: '<S245>/Diff' incorporates:
   *  UnitDelay: '<S245>/UD'
   *
   * Block description for '<S245>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S245>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Switch1_pz = rtb_Add_du - Code_Gen_Model_DW.UD_DSTATE_c;

  /* Saturate: '<S239>/Saturation' */
  if (rtb_Switch1_pz > Drive_Motor_Control_D_UL) {
    rtb_Switch1_pz = Drive_Motor_Control_D_UL;
  } else if (rtb_Switch1_pz < Drive_Motor_Control_D_LL) {
    rtb_Switch1_pz = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S239>/Add' incorporates:
   *  Gain: '<S239>/Gain1'
   *  Saturate: '<S239>/Saturation'
   */
  rtb_thetay_i = ((Drive_Motor_Control_P * rtb_thetay_l) + rtb_thetay_i) +
    rtb_Switch1_pz;

  /* Sum: '<S239>/Subtract' incorporates:
   *  Constant: '<S239>/Constant'
   */
  rtb_rx_l = 1.0 - rtb_thetay_i;

  /* Sum: '<S239>/Sum2' incorporates:
   *  Gain: '<S239>/Gain2'
   *  UnitDelay: '<S239>/Unit Delay'
   */
  rtb_thetay_l = (Drive_Motor_Control_I * rtb_thetay_l) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_a;

  /* Switch: '<S247>/Switch2' incorporates:
   *  Constant: '<S239>/Constant'
   *  RelationalOperator: '<S247>/LowerRelop1'
   *  Sum: '<S239>/Subtract'
   */
  if (!(rtb_thetay_l > (1.0 - rtb_thetay_i))) {
    /* Sum: '<S239>/Subtract1' incorporates:
     *  Constant: '<S239>/Constant1'
     */
    rtb_rx_l = -1.0 - rtb_thetay_i;

    /* Switch: '<S247>/Switch' incorporates:
     *  Constant: '<S239>/Constant1'
     *  RelationalOperator: '<S247>/UpperRelop'
     *  Sum: '<S239>/Subtract1'
     */
    if (!(rtb_thetay_l < (-1.0 - rtb_thetay_i))) {
      rtb_rx_l = rtb_thetay_l;
    }

    /* End of Switch: '<S247>/Switch' */
  }

  /* End of Switch: '<S247>/Switch2' */

  /* Saturate: '<S239>/Saturation1' */
  if (rtb_rx_l > Drive_Motor_Control_I_UL) {
    rtb_rx_l = Drive_Motor_Control_I_UL;
  } else if (rtb_rx_l < Drive_Motor_Control_I_LL) {
    rtb_rx_l = Drive_Motor_Control_I_LL;
  }

  /* End of Saturate: '<S239>/Saturation1' */

  /* Sum: '<S239>/Add1' */
  rtb_Switch1_pz = rtb_thetay_i + rtb_rx_l;

  /* Saturate: '<S239>/Saturation2' */
  if (rtb_Switch1_pz > 1.0) {
    /* Outport: '<Root>/BackRight_Drive_DutyCycle' */
    Code_Gen_Model_Y.BackRight_Drive_DutyCycle = 1.0;
  } else if (rtb_Switch1_pz < -1.0) {
    /* Outport: '<Root>/BackRight_Drive_DutyCycle' */
    Code_Gen_Model_Y.BackRight_Drive_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/BackRight_Drive_DutyCycle' */
    Code_Gen_Model_Y.BackRight_Drive_DutyCycle = rtb_Switch1_pz;
  }

  /* End of Saturate: '<S239>/Saturation2' */

  /* Outport: '<Root>/Enable_Wheels' */
  Code_Gen_Model_Y.Enable_Wheels = rtb_thetay;

  /* Outport: '<Root>/Reset_Wheel_Offsets' */
  Code_Gen_Model_Y.Reset_Wheel_Offsets = rtb_rx;

  /* Outport: '<Root>/Disable_Wheels' */
  Code_Gen_Model_Y.Disable_Wheels = rtb_thetay_n;

  /* Outport: '<Root>/Swerve_Motors_Disabled' */
  Code_Gen_Model_Y.Swerve_Motors_Disabled = rtb_Swerve_Motors_Disabled;

  /* RelationalOperator: '<S4>/Compare' incorporates:
   *  Constant: '<S4>/Constant'
   *  Inport: '<Root>/Elevator_Limit_Switch_Top'
   */
  rtb_Swerve_Motors_Disabled = (Code_Gen_Model_U.Elevator_Limit_Switch_Top !=
    0.0);

  /* RelationalOperator: '<S3>/Compare' incorporates:
   *  Constant: '<S3>/Constant'
   *  Inport: '<Root>/Elevator_Limit_Switch_Bottom'
   */
  rtb_Is_Absolute_Translation_g = (Code_Gen_Model_U.Elevator_Limit_Switch_Bottom
    != 0.0);

  /* Gain: '<S7>/Gain1' incorporates:
   *  Inport: '<Root>/Elevator_Motor_Rev'
   */
  Code_Gen_Model_B.Elevator_Height_Measured_Raw = Elevator_MotorRev_to_Inch *
    Code_Gen_Model_U.Elevator_Motor_Rev;

  /* Switch: '<S7>/Switch1' incorporates:
   *  RelationalOperator: '<S24>/FixPt Relational Operator'
   *  UnitDelay: '<S24>/Delay Input1'
   *  UnitDelay: '<S7>/Unit Delay1'
   *
   * Block description for '<S24>/Delay Input1':
   *
   *  Store in Global RAM
   */
  if (((int32_T)rtb_Is_Absolute_Translation_g) < ((int32_T)
       Code_Gen_Model_DW.DelayInput1_DSTATE_l)) {
    rtb_Switch1_pz = Code_Gen_Model_B.Elevator_Height_Measured_Raw;
  } else {
    rtb_Switch1_pz = Code_Gen_Model_DW.UnitDelay1_DSTATE_j;
  }

  /* End of Switch: '<S7>/Switch1' */

  /* Sum: '<S7>/Subtract' */
  Code_Gen_Model_B.Elevator_Height_Offset =
    Code_Gen_Model_B.Elevator_Height_Measured_Raw - rtb_Switch1_pz;

  /* Switch: '<S7>/Switch' */
  if (rtb_Is_Absolute_Translation_g) {
    /* Switch: '<S7>/Switch' incorporates:
     *  Constant: '<S7>/Constant'
     */
    Code_Gen_Model_B.Elevator_Height_Measured = 0.0;
  } else {
    /* Switch: '<S7>/Switch' */
    Code_Gen_Model_B.Elevator_Height_Measured =
      Code_Gen_Model_B.Elevator_Height_Offset;
  }

  /* End of Switch: '<S7>/Switch' */

  /* Sum: '<S20>/Sum' */
  rtb_thetay_n = Code_Gen_Model_B.Elevator_Height_Desired -
    Code_Gen_Model_B.Elevator_Height_Measured;

  /* Gain: '<S20>/Gain1' */
  rtb_thetay = Elevator_Gain_Prop * rtb_thetay_n;

  /* Logic: '<S6>/Logical Operator' incorporates:
   *  Logic: '<S6>/NOT'
   *  Logic: '<S6>/OR'
   */
  rtb_Is_Absolute_Steering = ((Code_Gen_Model_B.Elevator_Motor_Enable) &&
    ((!rtb_Swerve_Motors_Disabled) && (!rtb_Is_Absolute_Translation_g)));

  /* Switch: '<S20>/Switch' incorporates:
   *  Constant: '<S20>/Constant2'
   */
  if (rtb_Is_Absolute_Steering) {
    /* Switch: '<S20>/Switch1' incorporates:
     *  Constant: '<S20>/Constant3'
     *  UnitDelay: '<S22>/Delay Input1'
     *
     * Block description for '<S22>/Delay Input1':
     *
     *  Store in Global RAM
     */
    if (!Code_Gen_Model_DW.DelayInput1_DSTATE_np) {
      rtb_Add2_k_idx_1 = Elevator_Int_IC;
    } else {
      /* Sum: '<S20>/Sum2' incorporates:
       *  Gain: '<S20>/Gain2'
       *  UnitDelay: '<S20>/Unit Delay'
       */
      rtb_thetay_n = (Elevator_Gain_Int * rtb_thetay_n) +
        Code_Gen_Model_DW.UnitDelay_DSTATE_oo;

      /* Sum: '<S20>/Subtract' incorporates:
       *  Constant: '<S20>/Constant'
       */
      rtb_rx = Elevator_Total_UL - rtb_thetay;

      /* Switch: '<S23>/Switch2' incorporates:
       *  RelationalOperator: '<S23>/LowerRelop1'
       */
      if (!(rtb_thetay_n > rtb_rx)) {
        /* Sum: '<S20>/Subtract1' incorporates:
         *  Constant: '<S20>/Constant1'
         */
        rtb_rx = Elevator_Total_LL - rtb_thetay;

        /* Switch: '<S23>/Switch' incorporates:
         *  RelationalOperator: '<S23>/UpperRelop'
         */
        if (!(rtb_thetay_n < rtb_rx)) {
          rtb_rx = rtb_thetay_n;
        }

        /* End of Switch: '<S23>/Switch' */
      }

      /* End of Switch: '<S23>/Switch2' */

      /* Saturate: '<S20>/Saturation1' */
      if (rtb_rx > Elevator_Int_UL) {
        rtb_Add2_k_idx_1 = Elevator_Int_UL;
      } else if (rtb_rx < Elevator_Int_LL) {
        rtb_Add2_k_idx_1 = Elevator_Int_LL;
      } else {
        rtb_Add2_k_idx_1 = rtb_rx;
      }

      /* End of Saturate: '<S20>/Saturation1' */
    }

    /* End of Switch: '<S20>/Switch1' */
  } else {
    rtb_Add2_k_idx_1 = 0.0;
  }

  /* End of Switch: '<S20>/Switch' */

  /* Switch: '<S6>/Switch2' */
  if (Code_Gen_Model_B.Elevator_Motor_Enable) {
    /* Sum: '<S20>/Add1' */
    rtb_thetay += rtb_Add2_k_idx_1;

    /* Saturate: '<S20>/Saturation2' */
    if (rtb_thetay > Elevator_Total_UL) {
      rtb_thetay = Elevator_Total_UL;
    } else if (rtb_thetay < Elevator_Total_LL) {
      rtb_thetay = Elevator_Total_LL;
    }

    /* End of Saturate: '<S20>/Saturation2' */

    /* Switch: '<S6>/Switch1' incorporates:
     *  Constant: '<S6>/Constant1'
     *  Constant: '<S6>/Constant2'
     */
    if (rtb_Swerve_Motors_Disabled) {
      rtb_thetay_n = Elevator_Hold_at_Top_DC;
    } else {
      rtb_thetay_n = 1.0;
    }

    /* End of Switch: '<S6>/Switch1' */

    /* Switch: '<S21>/Switch2' incorporates:
     *  RelationalOperator: '<S21>/LowerRelop1'
     *  Switch: '<S6>/Switch'
     */
    if (rtb_thetay > rtb_thetay_n) {
      /* Outport: '<Root>/Elevator_DutyCycle' */
      Code_Gen_Model_Y.Elevator_DutyCycle = rtb_thetay_n;
    } else {
      if (rtb_Is_Absolute_Translation_g) {
        /* Switch: '<S6>/Switch' incorporates:
         *  Constant: '<S6>/Constant3'
         */
        rtb_thetay_n = 0.0;
      } else {
        /* Switch: '<S6>/Switch' incorporates:
         *  Constant: '<S6>/Constant4'
         */
        rtb_thetay_n = -1.0;
      }

      /* Switch: '<S21>/Switch' incorporates:
       *  RelationalOperator: '<S21>/UpperRelop'
       */
      if (rtb_thetay < rtb_thetay_n) {
        /* Outport: '<Root>/Elevator_DutyCycle' */
        Code_Gen_Model_Y.Elevator_DutyCycle = rtb_thetay_n;
      } else {
        /* Outport: '<Root>/Elevator_DutyCycle' */
        Code_Gen_Model_Y.Elevator_DutyCycle = rtb_thetay;
      }

      /* End of Switch: '<S21>/Switch' */
    }

    /* End of Switch: '<S21>/Switch2' */
  } else {
    /* Outport: '<Root>/Elevator_DutyCycle' incorporates:
     *  Constant: '<S6>/Constant5'
     */
    Code_Gen_Model_Y.Elevator_DutyCycle = 0.0;
  }

  /* End of Switch: '<S6>/Switch2' */

  /* SignalConversion: '<S9>/Signal Copy4' incorporates:
   *  Inport: '<Root>/Joystick_Right_X'
   */
  Code_Gen_Model_B.Steer_Joystick_X = Code_Gen_Model_U.Joystick_Right_X;

  /* Trigonometry: '<S13>/Trigonometric Function1' */
  rtb_rx = sin(Code_Gen_Model_B.Gyro_Angle_Field_rad);

  /* SignalConversion generated from: '<S13>/Rotation matrix from local to global' incorporates:
   *  Trigonometry: '<S13>/Trigonometric Function'
   */
  rtb_Rotationmatrixfromlocalto_1 = cos(Code_Gen_Model_B.Gyro_Angle_Field_rad);
  rtb_Rotationmatrixfromlocalto_2 = rtb_rx;

  /* SignalConversion generated from: '<S13>/Rotation matrix from local to global' incorporates:
   *  UnaryMinus: '<S13>/Unary Minus'
   */
  rtb_Rotationmatrixfromlocalto_0 = -rtb_rx;

  /* Sum: '<S93>/Diff' incorporates:
   *  UnitDelay: '<S93>/UD'
   *
   * Block description for '<S93>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S93>/UD':
   *
   *  Store in Global RAM
   */
  rtb_thetay_n = Code_Gen_Model_B.Gyro_Angle_Field_rad -
    Code_Gen_Model_DW.UD_DSTATE_d;

  /* Sum: '<S13>/Subtract2' incorporates:
   *  Constant: '<S13>/Constant3'
   *  Gain: '<S13>/Gain7'
   *  Math: '<S13>/Square'
   */
  rtb_rx = 1.0 - ((rtb_thetay_n * rtb_thetay_n) * 0.16666666666666666);

  /* Gain: '<S13>/Gain6' */
  rtb_thetay_n *= 0.5;

  /* SignalConversion generated from: '<S13>/POSE exponential matrix for improved accuracy while rotating' */
  rtb_POSEexponentialmatrixfori_0 = rtb_thetay_n;

  /* SignalConversion generated from: '<S13>/POSE exponential matrix for improved accuracy while rotating' incorporates:
   *  UnaryMinus: '<S13>/Unary Minus2'
   */
  rtb_POSEexponentialmatrixfori_1 = -rtb_thetay_n;

  /* Product: '<S13>/Product' incorporates:
   *  Constant: '<S13>/Constant1'
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Rev'
   *  Sum: '<S94>/Diff'
   *  UnitDelay: '<S94>/UD'
   *
   * Block description for '<S94>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S94>/UD':
   *
   *  Store in Global RAM
   */
  rtb_thetay_n = (Code_Gen_Model_U.FrontLeft_Drive_Motor_Rev -
                  Code_Gen_Model_DW.UD_DSTATE_j) * 0.049599071116336282;

  /* Product: '<S13>/Product1' incorporates:
   *  Constant: '<S13>/Constant1'
   *  Inport: '<Root>/FrontRight_Drive_Motor_Rev'
   *  Sum: '<S95>/Diff'
   *  UnitDelay: '<S95>/UD'
   *
   * Block description for '<S95>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S95>/UD':
   *
   *  Store in Global RAM
   */
  rtb_thetay = (Code_Gen_Model_U.FrontRight_Drive_Motor_Rev -
                Code_Gen_Model_DW.UD_DSTATE_m) * 0.049599071116336282;

  /* Product: '<S13>/Product2' incorporates:
   *  Constant: '<S13>/Constant1'
   *  Inport: '<Root>/BackLeft_Drive_Motor_Rev'
   *  Sum: '<S96>/Diff'
   *  UnitDelay: '<S96>/UD'
   *
   * Block description for '<S96>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S96>/UD':
   *
   *  Store in Global RAM
   */
  rtb_thetay_l = (Code_Gen_Model_U.BackLeft_Drive_Motor_Rev -
                  Code_Gen_Model_DW.UD_DSTATE_ic) * 0.049599071116336282;

  /* Product: '<S13>/Product3' incorporates:
   *  Constant: '<S13>/Constant1'
   *  Inport: '<Root>/BackRight_Drive_Motor_Rev'
   *  Sum: '<S97>/Diff'
   *  UnitDelay: '<S97>/UD'
   *
   * Block description for '<S97>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S97>/UD':
   *
   *  Store in Global RAM
   */
  rtb_thetay_i = (Code_Gen_Model_U.BackRight_Drive_Motor_Rev -
                  Code_Gen_Model_DW.UD_DSTATE_ce) * 0.049599071116336282;

  /* SignalConversion generated from: '<S13>/Product7' incorporates:
   *  Fcn: '<S100>/r->x'
   *  Fcn: '<S100>/theta->y'
   *  Fcn: '<S101>/r->x'
   *  Fcn: '<S101>/theta->y'
   *  Fcn: '<S98>/r->x'
   *  Fcn: '<S98>/theta->y'
   *  Fcn: '<S99>/r->x'
   *  Fcn: '<S99>/theta->y'
   */
  rtb_thetay_n_0[0] = rtb_thetay_n * cos(Code_Gen_Model_B.FL_Steer_Module_Angle);
  rtb_thetay_n_0[1] = rtb_thetay_n * sin(Code_Gen_Model_B.FL_Steer_Module_Angle);
  rtb_thetay_n_0[2] = rtb_thetay * cos(Code_Gen_Model_B.FR_Steer_Module_Angle);
  rtb_thetay_n_0[3] = rtb_thetay * sin(Code_Gen_Model_B.FR_Steer_Module_Angle);
  rtb_thetay_n_0[4] = rtb_thetay_l * cos(Code_Gen_Model_B.BL_Steer_Module_Angle);
  rtb_thetay_n_0[5] = rtb_thetay_l * sin(Code_Gen_Model_B.BL_Steer_Module_Angle);
  rtb_thetay_n_0[6] = rtb_thetay_i * cos(Code_Gen_Model_B.BR_Steer_Module_Angle);
  rtb_thetay_n_0[7] = rtb_thetay_i * sin(Code_Gen_Model_B.BR_Steer_Module_Angle);

  /* Product: '<S13>/Product7' incorporates:
   *  Constant: '<S13>/Constant4'
   */
  for (rtb_Num_Segments = 0; rtb_Num_Segments < 2; rtb_Num_Segments++) {
    tmp = 0.0;
    tmp_0 = 0;
    for (i = 0; i < 8; i++) {
      tmp += Code_Gen_Model_ConstP.Constant4_Value[tmp_0 + rtb_Num_Segments] *
        rtb_thetay_n_0[i];
      tmp_0 += 2;
    }

    rtb_Akxhatkk1[rtb_Num_Segments] = tmp;
  }

  /* End of Product: '<S13>/Product7' */

  /* Product: '<S13>/Product6' incorporates:
   *  Concatenate: '<S13>/POSE exponential matrix for improved accuracy while rotating'
   *  SignalConversion generated from: '<S13>/POSE exponential matrix for improved accuracy while rotating'
   */
  rtb_thetay = (rtb_rx * rtb_Akxhatkk1[0]) + (rtb_POSEexponentialmatrixfori_1 *
    rtb_Akxhatkk1[1]);
  rtb_thetay_n = (rtb_POSEexponentialmatrixfori_0 * rtb_Akxhatkk1[0]) + (rtb_rx *
    rtb_Akxhatkk1[1]);

  /* Product: '<S13>/Product6' incorporates:
   *  Concatenate: '<S13>/Rotation matrix from local to global'
   */
  Code_Gen_Model_B.Product6[0] = (rtb_Rotationmatrixfromlocalto_1 * rtb_thetay)
    + (rtb_Rotationmatrixfromlocalto_0 * rtb_thetay_n);
  Code_Gen_Model_B.Product6[1] = (rtb_Rotationmatrixfromlocalto_2 * rtb_thetay)
    + (rtb_Rotationmatrixfromlocalto_1 * rtb_thetay_n);

  /* Outputs for Enabled SubSystem: '<S59>/MeasurementUpdate' incorporates:
   *  EnablePort: '<S90>/Enable'
   */
  if (rtb_AND) {
    Code_Gen_Model_DW.MeasurementUpdate_MODE = true;

    /* Product: '<S90>/D[k]*u[k]' incorporates:
     *  Constant: '<S39>/D'
     */
    rtb_thetay = (0.0 * Code_Gen_Model_B.Product6[0]) + (0.0 *
      Code_Gen_Model_B.Product6[1]);

    /* Sum: '<S90>/Sum' incorporates:
     *  Constant: '<S39>/C'
     *  Delay: '<S39>/MemoryX'
     *  Product: '<S90>/C[k]*xhat[k|k-1]'
     *  Product: '<S90>/D[k]*u[k]'
     *  Sum: '<S90>/Add1'
     */
    rtb_Reshapey_idx_0 -= ((0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[1]) +
      Code_Gen_Model_DW.MemoryX_DSTATE[0]) + rtb_thetay;
    rtb_Reshapey_idx_1 -= ((0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[0]) +
      Code_Gen_Model_DW.MemoryX_DSTATE[1]) + rtb_thetay;

    /* Product: '<S90>/Product3' incorporates:
     *  Constant: '<S40>/KalmanGainL'
     */
    Code_Gen_Model_B.Product3[0] = (0.0951249219725039 * rtb_Reshapey_idx_0) + (
      -2.0601714451538746E-17 * rtb_Reshapey_idx_1);
    Code_Gen_Model_B.Product3[1] = (1.304610855474728E-16 * rtb_Reshapey_idx_0)
      + (0.095124921972504 * rtb_Reshapey_idx_1);
  } else if (Code_Gen_Model_DW.MeasurementUpdate_MODE) {
    /* Disable for Product: '<S90>/Product3' incorporates:
     *  Outport: '<S90>/L*(y[k]-yhat[k|k-1])'
     */
    Code_Gen_Model_B.Product3[0] = 0.0;
    Code_Gen_Model_B.Product3[1] = 0.0;
    Code_Gen_Model_DW.MeasurementUpdate_MODE = false;
  }

  /* End of Outputs for SubSystem: '<S59>/MeasurementUpdate' */

  /* RelationalOperator: '<S103>/Compare' incorporates:
   *  Constant: '<S102>/Constant'
   *  Constant: '<S103>/Constant'
   */
  rtb_Swerve_Motors_Disabled = (Odometry_X_Y_TEAR != 0.0);

  /* Gain: '<S102>/meters to feet' */
  Code_Gen_Model_B.Odometry_X_global_est_ft = 3.28084 *
    Code_Gen_Model_B.Odom_Position_X;

  /* Switch: '<S102>/Switch' incorporates:
   *  UnitDelay: '<S102>/Unit Delay'
   */
  if (rtb_Swerve_Motors_Disabled) {
    rtb_thetay = Code_Gen_Model_B.Odometry_X_global_est_ft;
  } else {
    rtb_thetay = Code_Gen_Model_DW.UnitDelay_DSTATE_c;
  }

  /* End of Switch: '<S102>/Switch' */

  /* Sum: '<S102>/Subtract' */
  Code_Gen_Model_B.Odometry_X_global_TEAR_ft =
    Code_Gen_Model_B.Odometry_X_global_est_ft - rtb_thetay;

  /* Gain: '<S102>/meters to feet1' */
  Code_Gen_Model_B.Odometry_Y_global_est_ft = 3.28084 *
    Code_Gen_Model_B.Odom_Position_Y;

  /* Switch: '<S102>/Switch1' incorporates:
   *  UnitDelay: '<S102>/Unit Delay1'
   */
  if (rtb_Swerve_Motors_Disabled) {
    rtb_thetay_n = Code_Gen_Model_B.Odometry_Y_global_est_ft;
  } else {
    rtb_thetay_n = Code_Gen_Model_DW.UnitDelay1_DSTATE_d;
  }

  /* End of Switch: '<S102>/Switch1' */

  /* Sum: '<S102>/Subtract1' */
  Code_Gen_Model_B.Odometry_Y_global_TEAR_ft =
    Code_Gen_Model_B.Odometry_Y_global_est_ft - rtb_thetay_n;

  /* DataTypeConversion: '<S14>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/GameState'
   */
  tmp = floor(Code_Gen_Model_U.GameState);
  if ((rtIsNaN(tmp)) || (rtIsInf(tmp))) {
    tmp = 0.0;
  } else {
    tmp = fmod(tmp, 256.0);
  }

  rtb_GameState = (uint8_T)((tmp < 0.0) ? ((int32_T)((uint8_T)(-((int8_T)
    ((uint8_T)(-tmp)))))) : ((int32_T)((uint8_T)tmp)));

  /* End of DataTypeConversion: '<S14>/Data Type Conversion' */

  /* Chart: '<S14>/Chart' */
  if (Code_Gen_Model_DW.is_active_c9_Code_Gen_Model == 0U) {
    Code_Gen_Model_DW.is_active_c9_Code_Gen_Model = 1U;
    Code_Gen_Model_B.Active_GameState = 0U;
    Code_Gen_Model_DW.is_c9_Code_Gen_Model = Code_Gen_Model_IN_Disabled;
  } else if (Code_Gen_Model_DW.is_c9_Code_Gen_Model ==
             Code_Gen_Model_IN_Disabled) {
    if (rtb_GameState != 0) {
      Code_Gen_Model_DW.is_c9_Code_Gen_Model = Code_Gen_Model_IN_Not_Disabled;
      Code_Gen_Model_B.Active_GameState = rtb_GameState;
    }

    /* case IN_Not_Disabled: */
  } else if (rtb_GameState == 0) {
    Code_Gen_Model_DW.is_c9_Code_Gen_Model = Code_Gen_Model_IN_Disabled;
  } else {
    Code_Gen_Model_B.Active_GameState = rtb_GameState;
  }

  /* End of Chart: '<S14>/Chart' */

  /* Update for UnitDelay: '<S36>/Delay Input1' incorporates:
   *  Inport: '<Root>/Joystick_Left_B11'
   *
   * Block description for '<S36>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE = Code_Gen_Model_U.Joystick_Left_B11;

  /* Update for UnitDelay: '<S37>/Delay Input1' incorporates:
   *  Inport: '<Root>/Joystick_Left_B12'
   *
   * Block description for '<S37>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_e = Code_Gen_Model_U.Joystick_Left_B12;

  /* Update for UnitDelay: '<S38>/Delay Input1' incorporates:
   *  Inport: '<Root>/Joystick_Left_B13'
   *
   * Block description for '<S38>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_n = Code_Gen_Model_U.Joystick_Left_B13;
  for (rtb_Num_Segments = 0; rtb_Num_Segments < 5; rtb_Num_Segments++) {
    /* Update for S-Function (sfix_udelay): '<S11>/Tapped Delay' incorporates:
     *  Bias: '<S133>/Bias'
     *  Merge: '<S107>/Merge1'
     *  S-Function (sfix_udelay): '<S11>/Tapped Delay1'
     */
    Code_Gen_Model_DW.TappedDelay_X[rtb_Num_Segments] =
      Code_Gen_Model_DW.TappedDelay_X[rtb_Num_Segments + 1];

    /* Update for S-Function (sfix_udelay): '<S11>/Tapped Delay1' incorporates:
     *  Bias: '<S133>/Bias'
     *  Merge: '<S107>/Merge1'
     *  S-Function (sfix_udelay): '<S11>/Tapped Delay'
     */
    Code_Gen_Model_DW.TappedDelay1_X[rtb_Num_Segments] =
      Code_Gen_Model_DW.TappedDelay1_X[rtb_Num_Segments + 1];
  }

  /* Update for S-Function (sfix_udelay): '<S11>/Tapped Delay' */
  Code_Gen_Model_DW.TappedDelay_X[5] = Code_Gen_Model_B.Product6[0];

  /* Update for S-Function (sfix_udelay): '<S11>/Tapped Delay1' */
  Code_Gen_Model_DW.TappedDelay1_X[5] = Code_Gen_Model_B.Product6[1];

  /* Update for Delay: '<S39>/MemoryX' */
  Code_Gen_Model_DW.icLoad = false;

  /* Product: '<S59>/A[k]*xhat[k|k-1]' incorporates:
   *  Constant: '<S39>/A'
   *  Delay: '<S39>/MemoryX'
   */
  rtb_Reshapey_idx_0 = (0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[1]) +
    Code_Gen_Model_DW.MemoryX_DSTATE[0];
  rtb_Reshapey_idx_1 = (0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[0]) +
    Code_Gen_Model_DW.MemoryX_DSTATE[1];

  /* Update for Delay: '<S39>/MemoryX' incorporates:
   *  Constant: '<S39>/B'
   *  Product: '<S59>/A[k]*xhat[k|k-1]'
   *  Product: '<S59>/B[k]*u[k]'
   *  Sum: '<S59>/Add'
   */
  Code_Gen_Model_DW.MemoryX_DSTATE[0] = (((0.0 * Code_Gen_Model_B.Product6[1]) +
    Code_Gen_Model_B.Product6[0]) + rtb_Reshapey_idx_0) +
    Code_Gen_Model_B.Product3[0];
  Code_Gen_Model_DW.MemoryX_DSTATE[1] = (((0.0 * Code_Gen_Model_B.Product6[0]) +
    Code_Gen_Model_B.Product6[1]) + rtb_Reshapey_idx_1) +
    Code_Gen_Model_B.Product3[1];

  /* Update for DiscreteIntegrator: '<S13>/Accumulator2' incorporates:
   *  Constant: '<S13>/Constant'
   *  DiscreteIntegrator: '<S13>/Accumulator'
   */
  Code_Gen_Model_DW.Accumulator2_DSTATE += Code_Gen_Model_B.Product6[0];
  if (Odometry_Reset_IC > 0.0) {
    Code_Gen_Model_DW.Accumulator2_PrevResetState = 1;
    Code_Gen_Model_DW.Accumulator_PrevResetState = 1;
  } else {
    if (Odometry_Reset_IC < 0.0) {
      Code_Gen_Model_DW.Accumulator2_PrevResetState = -1;
    } else if (Odometry_Reset_IC == 0.0) {
      Code_Gen_Model_DW.Accumulator2_PrevResetState = 0;
    } else {
      Code_Gen_Model_DW.Accumulator2_PrevResetState = 2;
    }

    if (Odometry_Reset_IC < 0.0) {
      Code_Gen_Model_DW.Accumulator_PrevResetState = -1;
    } else if (Odometry_Reset_IC == 0.0) {
      Code_Gen_Model_DW.Accumulator_PrevResetState = 0;
    } else {
      Code_Gen_Model_DW.Accumulator_PrevResetState = 2;
    }
  }

  /* End of Update for DiscreteIntegrator: '<S13>/Accumulator2' */

  /* Update for DiscreteIntegrator: '<S13>/Accumulator' */
  Code_Gen_Model_DW.Accumulator_DSTATE += Code_Gen_Model_B.Product6[1];

  /* Update for UnitDelay: '<S26>/Delay Input1' incorporates:
   *  Constant: '<S8>/Constant3'
   *
   * Block description for '<S26>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_p = Gyro_Calibration_Reset_Flag;

  /* Update for UnitDelay: '<S8>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE = rtb_Switch1;

  /* Update for UnitDelay: '<S270>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S270>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE = 0U;

  /* Update for UnitDelay: '<S292>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_i = rtb_Merge1;

  /* Update for UnitDelay: '<S291>/UD'
   *
   * Block description for '<S291>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE = rtb_Switch1_p2;

  /* Update for UnitDelay: '<S289>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_m = rtb_Switch2;

  /* Update for UnitDelay: '<S272>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_d = rtb_Switch4;

  /* Update for UnitDelay: '<S287>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S287>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_p = 0U;

  /* Update for UnitDelay: '<S287>/FixPt Unit Delay1' */
  Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_e = rtb_Switch4;

  /* Update for UnitDelay: '<S271>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_g = rtb_Sum_jt;

  /* Update for UnitDelay: '<S280>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S280>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_c = 0U;

  /* Update for UnitDelay: '<S280>/FixPt Unit Delay1' */
  Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_p = rtb_Sum_jt;

  /* Update for UnitDelay: '<S194>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_b = rtb_Switch2_a;

  /* Update for UnitDelay: '<S193>/UD'
   *
   * Block description for '<S193>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_b = rtb_Init;

  /* Update for UnitDelay: '<S179>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_e = rtb_Switch_ms;

  /* Update for UnitDelay: '<S183>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_a = rtb_rx_h;

  /* Update for UnitDelay: '<S182>/UD'
   *
   * Block description for '<S182>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_o = rtb_Subtract1;

  /* Update for UnitDelay: '<S176>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_f = rtb_FeedForward;

  /* Update for UnitDelay: '<S215>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_n = rtb_Add_oh;

  /* Update for UnitDelay: '<S214>/UD'
   *
   * Block description for '<S214>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_i = rtb_Subtract1_of;

  /* Update for UnitDelay: '<S200>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_dt = rtb_Hypot_bl;

  /* Update for UnitDelay: '<S204>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_b1 = rtb_Add_i;

  /* Update for UnitDelay: '<S203>/UD'
   *
   * Block description for '<S203>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_e = rtb_Subtract1_a;

  /* Update for UnitDelay: '<S197>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_em = rtb_FeedForward_n;

  /* Update for UnitDelay: '<S236>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_nw = rtb_Add_o2;

  /* Update for UnitDelay: '<S235>/UD'
   *
   * Block description for '<S235>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_k = rtb_Subtract1_do;

  /* Update for UnitDelay: '<S221>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_k = rtb_Hypot_d;

  /* Update for UnitDelay: '<S225>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_f = rtb_Add_gj;

  /* Update for UnitDelay: '<S224>/UD'
   *
   * Block description for '<S224>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_l = rtb_Subtract1_f;

  /* Update for UnitDelay: '<S218>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_gp = rtb_FeedForward_a;

  /* Update for UnitDelay: '<S257>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_iw = rtb_Subtract_e;

  /* Update for UnitDelay: '<S256>/UD'
   *
   * Block description for '<S256>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_ll = rtb_Product_d;

  /* Update for UnitDelay: '<S242>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_l = rtb_Add2_k_idx_0;

  /* Update for UnitDelay: '<S246>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_k = rtb_rx_o;

  /* Update for UnitDelay: '<S245>/UD'
   *
   * Block description for '<S245>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_c = rtb_Add_du;

  /* Update for UnitDelay: '<S239>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_a = rtb_rx_l;

  /* Update for UnitDelay: '<S24>/Delay Input1'
   *
   * Block description for '<S24>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_l = rtb_Is_Absolute_Translation_g;

  /* Update for UnitDelay: '<S7>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_j = rtb_Switch1_pz;

  /* Update for UnitDelay: '<S22>/Delay Input1'
   *
   * Block description for '<S22>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_np = rtb_Is_Absolute_Steering;

  /* Update for UnitDelay: '<S20>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_oo = rtb_Add2_k_idx_1;

  /* Update for UnitDelay: '<S93>/UD'
   *
   * Block description for '<S93>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_d = Code_Gen_Model_B.Gyro_Angle_Field_rad;

  /* Update for UnitDelay: '<S94>/UD' incorporates:
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Rev'
   *
   * Block description for '<S94>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_j = Code_Gen_Model_U.FrontLeft_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S95>/UD' incorporates:
   *  Inport: '<Root>/FrontRight_Drive_Motor_Rev'
   *
   * Block description for '<S95>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_m = Code_Gen_Model_U.FrontRight_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S96>/UD' incorporates:
   *  Inport: '<Root>/BackLeft_Drive_Motor_Rev'
   *
   * Block description for '<S96>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_ic = Code_Gen_Model_U.BackLeft_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S97>/UD' incorporates:
   *  Inport: '<Root>/BackRight_Drive_Motor_Rev'
   *
   * Block description for '<S97>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_ce = Code_Gen_Model_U.BackRight_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S102>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_c = rtb_thetay;

  /* Update for UnitDelay: '<S102>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_d = rtb_thetay_n;
}

/* Model initialize function */
void Code_Gen_Model_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  {
    real_T Constant;
    real_T Constant1;

    /* Start for Constant: '<S1>/Constant' */
    Constant = Odometry_IC_X;

    /* Start for Constant: '<S1>/Constant1' */
    Constant1 = Odometry_IC_Y;

    /* Start for SwitchCase: '<S1>/Switch Case' */
    Code_Gen_Model_DW.SwitchCase_ActiveSubsystem = -1;

    /* Start for If: '<S15>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem = -1;

    /* InitializeConditions for Delay: '<S39>/MemoryX' */
    Code_Gen_Model_DW.icLoad = true;

    /* InitializeConditions for DiscreteIntegrator: '<S13>/Accumulator2' */
    Code_Gen_Model_DW.Accumulator2_DSTATE = Constant;
    Code_Gen_Model_DW.Accumulator2_PrevResetState = 2;

    /* InitializeConditions for DiscreteIntegrator: '<S13>/Accumulator' */
    Code_Gen_Model_DW.Accumulator_DSTATE = Constant1;
    Code_Gen_Model_DW.Accumulator_PrevResetState = 2;

    /* InitializeConditions for UnitDelay: '<S8>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE = Gyro_Calibration_Reset_Degree;

    /* InitializeConditions for UnitDelay: '<S270>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE = 1U;

    /* InitializeConditions for UnitDelay: '<S287>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_p = 1U;

    /* InitializeConditions for UnitDelay: '<S280>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_c = 1U;

    /* SystemInitialize for IfAction SubSystem: '<S1>/Teleop' */
    /* InitializeConditions for UnitDelay: '<S340>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_a = 1U;

    /* InitializeConditions for UnitDelay: '<S352>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_h = 1U;

    /* End of SystemInitialize for SubSystem: '<S1>/Teleop' */

    /* SystemInitialize for IfAction SubSystem: '<S15>/Spline Path Following Enabled' */
    /* Start for If: '<S111>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem_h = -1;

    /* InitializeConditions for UnitDelay: '<S107>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_gh = 2.0;

    /* SystemInitialize for IfAction SubSystem: '<S111>/Robot_Index_Is_Valid' */
    /* Start for If: '<S114>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem_o = -1;

    /* SystemInitialize for IfAction SubSystem: '<S114>/Circle_Check_Valid' */
    /* Start for If: '<S116>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;

    /* End of SystemInitialize for SubSystem: '<S114>/Circle_Check_Valid' */
    /* End of SystemInitialize for SubSystem: '<S111>/Robot_Index_Is_Valid' */
    /* End of SystemInitialize for SubSystem: '<S15>/Spline Path Following Enabled' */
  }
}

/* Model terminate function */
void Code_Gen_Model_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
