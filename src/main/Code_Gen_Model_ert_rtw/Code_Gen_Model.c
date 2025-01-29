/*
 * Sponsored License - for use in support of a program or activity
 * sponsored by MathWorks.  Not for government, commercial or other
 * non-sponsored organizational use.
 *
 * File: Code_Gen_Model.c
 *
 * Code generated for Simulink model 'Code_Gen_Model'.
 *
 * Model version                  : 2.225
 * Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
 * C/C++ source code generated on : Tue Jan 28 22:28:32 2025
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
                                              * Referenced by: '<S322>/Constant12'
                                              */
real_T AT_Target_Tag_11_X = 12.5143;   /* Variable: AT_Target_Tag_11_X
                                        * Referenced by: '<S322>/Constant4'
                                        */
real_T AT_Target_Tag_11_Y = 2.6574;    /* Variable: AT_Target_Tag_11_Y
                                        * Referenced by: '<S322>/Constant26'
                                        */
real_T AT_Target_Tag_12_Field_Angle = -2.0944;/* Variable: AT_Target_Tag_12_Field_Angle
                                               * Referenced by: '<S322>/Constant11'
                                               */
real_T AT_Target_Tag_12_X = 12.5143;   /* Variable: AT_Target_Tag_12_X
                                        * Referenced by: '<S322>/Constant17'
                                        */
real_T AT_Target_Tag_12_Y = 5.5542;    /* Variable: AT_Target_Tag_12_Y
                                        * Referenced by: '<S322>/Constant3'
                                        */
real_T AT_Target_Tag_13_Field_Angle = 0.0;/* Variable: AT_Target_Tag_13_Field_Angle
                                           * Referenced by: '<S322>/Constant10'
                                           */
real_T AT_Target_Tag_13_X = 10.001;    /* Variable: AT_Target_Tag_13_X
                                        * Referenced by: '<S322>/Constant18'
                                        */
real_T AT_Target_Tag_13_Y = 4.1051;    /* Variable: AT_Target_Tag_13_Y
                                        * Referenced by: '<S322>/Constant21'
                                        */
real_T AT_Target_Tag_14_Field_Angle = 0.0;/* Variable: AT_Target_Tag_14_Field_Angle
                                           * Referenced by: '<S322>/Constant8'
                                           */
real_T AT_Target_Tag_14_X = 6.54;      /* Variable: AT_Target_Tag_14_X
                                        * Referenced by: '<S322>/Constant19'
                                        */
real_T AT_Target_Tag_14_Y = 4.1051;    /* Variable: AT_Target_Tag_14_Y
                                        * Referenced by: '<S322>/Constant23'
                                        */
real_T AT_Target_Tag_15_Field_Angle = 2.0944;/* Variable: AT_Target_Tag_15_Field_Angle
                                              * Referenced by: '<S322>/Constant7'
                                              */
real_T AT_Target_Tag_15_X = 4.0317;    /* Variable: AT_Target_Tag_15_X
                                        * Referenced by: '<S322>/Constant20'
                                        */
real_T AT_Target_Tag_15_Y = 5.5542;    /* Variable: AT_Target_Tag_15_Y
                                        * Referenced by: '<S322>/Constant24'
                                        */
real_T AT_Target_Tag_16_Field_Angle = 4.1888;/* Variable: AT_Target_Tag_16_Field_Angle
                                              * Referenced by: '<S322>/Constant6'
                                              */
real_T AT_Target_Tag_16_X = 4.0317;    /* Variable: AT_Target_Tag_16_X
                                        * Referenced by: '<S322>/Constant22'
                                        */
real_T AT_Target_Tag_16_Y = 2.6574;    /* Variable: AT_Target_Tag_16_Y
                                        * Referenced by: '<S322>/Constant25'
                                        */
real_T AT_Target_Tag_5_Field_Angle = 1.5708;/* Variable: AT_Target_Tag_5_Field_Angle
                                             * Referenced by: '<S322>/Constant14'
                                             */
real_T AT_Target_Tag_5_X = 14.7008;    /* Variable: AT_Target_Tag_5_X
                                        * Referenced by: '<S322>/Constant9'
                                        */
real_T AT_Target_Tag_5_Y = 7.2898;     /* Variable: AT_Target_Tag_5_Y
                                        * Referenced by: '<S322>/Constant28'
                                        */
real_T AT_Target_Tag_6_Field_Angle = 4.7124;/* Variable: AT_Target_Tag_6_Field_Angle
                                             * Referenced by: '<S322>/Constant13'
                                             */
real_T AT_Target_Tag_6_X = 1.8415;     /* Variable: AT_Target_Tag_6_X
                                        * Referenced by: '<S322>/Constant5'
                                        */
real_T AT_Target_Tag_6_Y = 7.2898;     /* Variable: AT_Target_Tag_6_Y
                                        * Referenced by: '<S322>/Constant27'
                                        */
real_T AT_XY_Control_Gain = 1.5;       /* Variable: AT_XY_Control_Gain
                                        * Referenced by: '<S326>/Gain2'
                                        */
real_T Boost_Trigger_Decreasing_Limit = -0.28;
                                     /* Variable: Boost_Trigger_Decreasing_Limit
                                      * Referenced by: '<S339>/Constant1'
                                      */
real_T Boost_Trigger_High_Speed = 5.0; /* Variable: Boost_Trigger_High_Speed
                                        * Referenced by:
                                        *   '<S335>/Constant'
                                        *   '<S335>/Saturation'
                                        */
real_T Boost_Trigger_Increasing_Limit = 3.5;
                                     /* Variable: Boost_Trigger_Increasing_Limit
                                      * Referenced by: '<S339>/Constant3'
                                      */
real_T Boost_Trigger_Low_Speed = 1.5;  /* Variable: Boost_Trigger_Low_Speed
                                        * Referenced by: '<S335>/Constant1'
                                        */
real_T Distance_FL_y = 0.18732;        /* Variable: Distance_FL_y
                                        * Referenced by: '<S262>/Constant4'
                                        */
real_T Drive_Motor_Control_D = 0.0001; /* Variable: Drive_Motor_Control_D
                                        * Referenced by:
                                        *   '<S178>/Constant3'
                                        *   '<S199>/Constant3'
                                        *   '<S220>/Constant3'
                                        *   '<S241>/Constant3'
                                        */
real_T Drive_Motor_Control_D_FilterCoeff = 0.22223;
                                  /* Variable: Drive_Motor_Control_D_FilterCoeff
                                   * Referenced by:
                                   *   '<S178>/Constant2'
                                   *   '<S199>/Constant2'
                                   *   '<S220>/Constant2'
                                   *   '<S241>/Constant2'
                                   */
real_T Drive_Motor_Control_D_LL = -0.2;/* Variable: Drive_Motor_Control_D_LL
                                        * Referenced by:
                                        *   '<S178>/Saturation'
                                        *   '<S199>/Saturation'
                                        *   '<S220>/Saturation'
                                        *   '<S241>/Saturation'
                                        */
real_T Drive_Motor_Control_D_UL = 0.2; /* Variable: Drive_Motor_Control_D_UL
                                        * Referenced by:
                                        *   '<S178>/Saturation'
                                        *   '<S199>/Saturation'
                                        *   '<S220>/Saturation'
                                        *   '<S241>/Saturation'
                                        */
real_T Drive_Motor_Control_FF = 0.00016129;/* Variable: Drive_Motor_Control_FF
                                            * Referenced by:
                                            *   '<S178>/Gain'
                                            *   '<S199>/Gain'
                                            *   '<S220>/Gain'
                                            *   '<S241>/Gain'
                                            */
real_T Drive_Motor_Control_I = 0.0;    /* Variable: Drive_Motor_Control_I
                                        * Referenced by:
                                        *   '<S178>/Gain2'
                                        *   '<S199>/Gain2'
                                        *   '<S220>/Gain2'
                                        *   '<S241>/Gain2'
                                        */
real_T Drive_Motor_Control_I_LL = 0.0; /* Variable: Drive_Motor_Control_I_LL
                                        * Referenced by:
                                        *   '<S178>/Saturation1'
                                        *   '<S199>/Saturation1'
                                        *   '<S220>/Saturation1'
                                        *   '<S241>/Saturation1'
                                        */
real_T Drive_Motor_Control_I_UL = 0.0; /* Variable: Drive_Motor_Control_I_UL
                                        * Referenced by:
                                        *   '<S178>/Saturation1'
                                        *   '<S199>/Saturation1'
                                        *   '<S220>/Saturation1'
                                        *   '<S241>/Saturation1'
                                        */
real_T Drive_Motor_Control_P = 5.0E-6; /* Variable: Drive_Motor_Control_P
                                        * Referenced by:
                                        *   '<S178>/Gain1'
                                        *   '<S199>/Gain1'
                                        *   '<S220>/Gain1'
                                        *   '<S241>/Gain1'
                                        */
real_T Drive_Motor_Control_Sign_Change_Deadband = 7000.0;
                           /* Variable: Drive_Motor_Control_Sign_Change_Deadband
                            * Referenced by:
                            *   '<S183>/Constant'
                            *   '<S204>/Constant'
                            *   '<S225>/Constant'
                            *   '<S246>/Constant'
                            */
real_T Elevator_Error_Bottom_Disable = 3.0;
                                      /* Variable: Elevator_Error_Bottom_Disable
                                       * Referenced by: '<S20>/Constant'
                                       */
real_T Elevator_Gain_Int = 0.02;       /* Variable: Elevator_Gain_Int
                                        * Referenced by: '<S22>/Gain2'
                                        */
real_T Elevator_Gain_Prop = 0.3;       /* Variable: Elevator_Gain_Prop
                                        * Referenced by: '<S22>/Gain1'
                                        */
real_T Elevator_Height_Bottom = 0.0;   /* Variable: Elevator_Height_Bottom
                                        * Referenced by: '<S324>/Constant6'
                                        */
real_T Elevator_Height_L1 = 13.0;      /* Variable: Elevator_Height_L1
                                        * Referenced by: '<S324>/Constant'
                                        */
real_T Elevator_Height_L2 = 5.25;      /* Variable: Elevator_Height_L2
                                        * Referenced by: '<S324>/Constant2'
                                        */
real_T Elevator_Height_L3 = 13.125;    /* Variable: Elevator_Height_L3
                                        * Referenced by: '<S324>/Constant1'
                                        */
real_T Elevator_Height_L4 = 26.125;    /* Variable: Elevator_Height_L4
                                        * Referenced by: '<S324>/Constant3'
                                        */
real_T Elevator_Height_Pickup = 7.0;   /* Variable: Elevator_Height_Pickup
                                        * Referenced by: '<S324>/Constant4'
                                        */
real_T Elevator_Hold_at_Top_DC = 0.01; /* Variable: Elevator_Hold_at_Top_DC
                                        * Referenced by: '<S6>/Constant1'
                                        */
real_T Elevator_Int_IC = 0.0;          /* Variable: Elevator_Int_IC
                                        * Referenced by: '<S22>/Constant3'
                                        */
real_T Elevator_Int_LL = -0.1;         /* Variable: Elevator_Int_LL
                                        * Referenced by: '<S22>/Saturation1'
                                        */
real_T Elevator_Int_UL = 0.1;          /* Variable: Elevator_Int_UL
                                        * Referenced by: '<S22>/Saturation1'
                                        */
real_T Elevator_MotorRev_to_Inch = 0.27646;/* Variable: Elevator_MotorRev_to_Inch
                                            * Referenced by: '<S7>/Gain1'
                                            */
real_T Elevator_Total_LL = -0.4;       /* Variable: Elevator_Total_LL
                                        * Referenced by:
                                        *   '<S22>/Constant1'
                                        *   '<S22>/Saturation2'
                                        */
real_T Elevator_Total_UL = 1.0;        /* Variable: Elevator_Total_UL
                                        * Referenced by:
                                        *   '<S22>/Constant'
                                        *   '<S22>/Saturation2'
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
                                        * Referenced by: '<S104>/Constant'
                                        */
real_T Spline_Last_Pose_Distance_to_Velocity_Gain = 2.0;
                         /* Variable: Spline_Last_Pose_Distance_to_Velocity_Gain
                          * Referenced by: '<S163>/Constant2'
                          */
real_T Spline_Max_Centripital_Acceleration = 10.0;
                                /* Variable: Spline_Max_Centripital_Acceleration
                                 * Referenced by: '<S163>/Constant1'
                                 */
real_T Spline_Pose_Num_Before_End_Reduce_Speed = 1.0;
                            /* Variable: Spline_Pose_Num_Before_End_Reduce_Speed
                             * Referenced by: '<S110>/Constant'
                             */
real_T Spline_Stop_Radius = 0.1;       /* Variable: Spline_Stop_Radius
                                        * Referenced by: '<S123>/Constant'
                                        */
real_T Spline_Velocity_Multiplier_TEST = 1.0;
                                    /* Variable: Spline_Velocity_Multiplier_TEST
                                     * Referenced by: '<S163>/Constant3'
                                     */
real_T Steering_Absolute_Cmd_Approach_Zero_Error_Thresh = 0.2;
                   /* Variable: Steering_Absolute_Cmd_Approach_Zero_Error_Thresh
                    * Referenced by: '<S274>/Constant5'
                    */
real_T Steering_Absolute_Cmd_Approach_Zero_Final_Thresh = 0.01;
                   /* Variable: Steering_Absolute_Cmd_Approach_Zero_Final_Thresh
                    * Referenced by: '<S274>/Constant6'
                    */
real_T Steering_Absolute_Cmd_NonZero_Error_Thresh = 0.2;
                         /* Variable: Steering_Absolute_Cmd_NonZero_Error_Thresh
                          * Referenced by: '<S274>/Constant9'
                          */
real_T Steering_Absolute_Cmd_NonZero_Final_Scale_Factor = 0.1;
                   /* Variable: Steering_Absolute_Cmd_NonZero_Final_Scale_Factor
                    * Referenced by: '<S274>/Constant10'
                    */
real_T Steering_Absolute_Cmd_Rate_Limit_Dec = -1.0;
                               /* Variable: Steering_Absolute_Cmd_Rate_Limit_Dec
                                * Referenced by: '<S274>/Constant1'
                                */
real_T Steering_Absolute_Cmd_Rate_Limit_Inc = 1.0;
                               /* Variable: Steering_Absolute_Cmd_Rate_Limit_Inc
                                * Referenced by: '<S274>/Constant3'
                                */
real_T Steering_Heading_Control_D = 0.0;/* Variable: Steering_Heading_Control_D
                                         * Referenced by: '<S291>/Constant3'
                                         */
real_T Steering_Heading_Control_D_FilterCoeff = 0.22223;
                             /* Variable: Steering_Heading_Control_D_FilterCoeff
                              * Referenced by: '<S291>/Constant2'
                              */
real_T Steering_Heading_Control_D_LL = 0.0;
                                      /* Variable: Steering_Heading_Control_D_LL
                                       * Referenced by: '<S291>/Saturation'
                                       */
real_T Steering_Heading_Control_D_UL = 0.0;
                                      /* Variable: Steering_Heading_Control_D_UL
                                       * Referenced by: '<S291>/Saturation'
                                       */
real_T Steering_Heading_Control_Deadzone = 0.1;
                                  /* Variable: Steering_Heading_Control_Deadzone
                                   * Referenced by: '<S290>/Constant'
                                   */
real_T Steering_Heading_Control_I = 0.0;/* Variable: Steering_Heading_Control_I
                                         * Referenced by: '<S291>/Gain2'
                                         */
real_T Steering_Heading_Control_I_LL = -0.1;
                                      /* Variable: Steering_Heading_Control_I_LL
                                       * Referenced by: '<S291>/Saturation1'
                                       */
real_T Steering_Heading_Control_I_UL = 0.1;
                                      /* Variable: Steering_Heading_Control_I_UL
                                       * Referenced by: '<S291>/Saturation1'
                                       */
real_T Steering_Heading_Control_P = 2.5;/* Variable: Steering_Heading_Control_P
                                         * Referenced by: '<S291>/Gain1'
                                         */
real_T Steering_Heading_Control_Total_LL = -2.5;
                                  /* Variable: Steering_Heading_Control_Total_LL
                                   * Referenced by:
                                   *   '<S291>/Constant1'
                                   *   '<S291>/Saturation2'
                                   */
real_T Steering_Heading_Control_Total_UL = 2.5;
                                  /* Variable: Steering_Heading_Control_Total_UL
                                   * Referenced by:
                                   *   '<S291>/Constant'
                                   *   '<S291>/Saturation2'
                                   */
real_T Steering_Motor_Control_D = 0.5; /* Variable: Steering_Motor_Control_D
                                        * Referenced by:
                                        *   '<S181>/Constant3'
                                        *   '<S202>/Constant3'
                                        *   '<S223>/Constant3'
                                        *   '<S244>/Constant3'
                                        */
real_T Steering_Motor_Control_D_FilterCoeff = 0.22223;
                               /* Variable: Steering_Motor_Control_D_FilterCoeff
                                * Referenced by:
                                *   '<S181>/Constant2'
                                *   '<S202>/Constant2'
                                *   '<S223>/Constant2'
                                *   '<S244>/Constant2'
                                */
real_T Steering_Motor_Control_D_LL = -0.2;/* Variable: Steering_Motor_Control_D_LL
                                           * Referenced by:
                                           *   '<S181>/Saturation'
                                           *   '<S202>/Saturation'
                                           *   '<S223>/Saturation'
                                           *   '<S244>/Saturation'
                                           */
real_T Steering_Motor_Control_D_UL = 0.2;/* Variable: Steering_Motor_Control_D_UL
                                          * Referenced by:
                                          *   '<S181>/Saturation'
                                          *   '<S202>/Saturation'
                                          *   '<S223>/Saturation'
                                          *   '<S244>/Saturation'
                                          */
real_T Steering_Motor_Control_I = 0.005;/* Variable: Steering_Motor_Control_I
                                         * Referenced by:
                                         *   '<S181>/Gain2'
                                         *   '<S202>/Gain2'
                                         *   '<S223>/Gain2'
                                         *   '<S244>/Gain2'
                                         */
real_T Steering_Motor_Control_I_LL = -0.005;/* Variable: Steering_Motor_Control_I_LL
                                             * Referenced by:
                                             *   '<S181>/Saturation1'
                                             *   '<S202>/Saturation1'
                                             *   '<S223>/Saturation1'
                                             *   '<S244>/Saturation1'
                                             */
real_T Steering_Motor_Control_I_UL = 0.005;/* Variable: Steering_Motor_Control_I_UL
                                            * Referenced by:
                                            *   '<S181>/Saturation1'
                                            *   '<S202>/Saturation1'
                                            *   '<S223>/Saturation1'
                                            *   '<S244>/Saturation1'
                                            */
real_T Steering_Motor_Control_P = 0.15;/* Variable: Steering_Motor_Control_P
                                        * Referenced by:
                                        *   '<S181>/Gain1'
                                        *   '<S202>/Gain1'
                                        *   '<S223>/Gain1'
                                        *   '<S244>/Gain1'
                                        */
real_T Steering_Relative_Cmd_Approach_Zero_Error_Thresh = 0.2;
                   /* Variable: Steering_Relative_Cmd_Approach_Zero_Error_Thresh
                    * Referenced by: '<S273>/Constant5'
                    */
real_T Steering_Relative_Cmd_Approach_Zero_Final_Thresh = 0.01;
                   /* Variable: Steering_Relative_Cmd_Approach_Zero_Final_Thresh
                    * Referenced by: '<S273>/Constant6'
                    */
real_T Steering_Relative_Cmd_NonZero_Error_Thresh = 0.2;
                         /* Variable: Steering_Relative_Cmd_NonZero_Error_Thresh
                          * Referenced by: '<S273>/Constant9'
                          */
real_T Steering_Relative_Cmd_NonZero_Final_Scale_Factor = 1.0;
                   /* Variable: Steering_Relative_Cmd_NonZero_Final_Scale_Factor
                    * Referenced by: '<S273>/Constant10'
                    */
real_T Steering_Relative_Cmd_Rate_Limit_Dec = -10.0;
                               /* Variable: Steering_Relative_Cmd_Rate_Limit_Dec
                                * Referenced by: '<S273>/Constant1'
                                */
real_T Steering_Relative_Cmd_Rate_Limit_Inc = 10.0;
                               /* Variable: Steering_Relative_Cmd_Rate_Limit_Inc
                                * Referenced by: '<S273>/Constant3'
                                */
real_T Steering_Relative_Gain = 5.0;   /* Variable: Steering_Relative_Gain
                                        * Referenced by: '<S325>/Constant'
                                        */
real_T Steering_Twist_Gain = -0.5;     /* Variable: Steering_Twist_Gain
                                        * Referenced by: '<S325>/Constant1'
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
                        * Referenced by: '<S261>/Constant5'
                        */
real_T Translation_Speed_Approach_Zero_Final_Thresh = 0.01;
                       /* Variable: Translation_Speed_Approach_Zero_Final_Thresh
                        * Referenced by: '<S261>/Constant6'
                        */
real_T Translation_Speed_NonZero_Error_Thresh = 0.15;
                             /* Variable: Translation_Speed_NonZero_Error_Thresh
                              * Referenced by: '<S261>/Constant9'
                              */
real_T Translation_Speed_NonZero_Final_Scale_Factor = 0.05;
                       /* Variable: Translation_Speed_NonZero_Final_Scale_Factor
                        * Referenced by: '<S261>/Constant10'
                        */
real_T Translation_Speed_Rate_Limit_Dec = -4.0;
                                   /* Variable: Translation_Speed_Rate_Limit_Dec
                                    * Referenced by: '<S261>/Constant1'
                                    */
real_T Translation_Speed_Rate_Limit_Inc = 4.0;
                                   /* Variable: Translation_Speed_Rate_Limit_Inc
                                    * Referenced by: '<S261>/Constant3'
                                    */
real_T Translation_Twist_Gain = 0.5;   /* Variable: Translation_Twist_Gain
                                        * Referenced by: '<S326>/Gain'
                                        */
real_T Twist_Deadzone_neg = -0.01;     /* Variable: Twist_Deadzone_neg
                                        * Referenced by:
                                        *   '<S325>/Dead Zone'
                                        *   '<S326>/Dead Zone'
                                        */
real_T Twist_Deadzone_pos = 0.01;      /* Variable: Twist_Deadzone_pos
                                        * Referenced by:
                                        *   '<S325>/Dead Zone'
                                        *   '<S326>/Dead Zone'
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
  real_T rtb_Elevator_Height_Desired;
  real_T rtb_FeedForward;
  real_T rtb_FeedForward_a;
  real_T rtb_FeedForward_n;
  real_T rtb_Hypot_bl;
  real_T rtb_Hypot_d;
  real_T rtb_Merge1;
  real_T rtb_POSEexponentialmatrixfori_0;
  real_T rtb_POSEexponentialmatrixfori_1;
  real_T rtb_Product2_e;
  real_T rtb_Product_d;
  real_T rtb_Reshapey_idx_0;
  real_T rtb_Reshapey_idx_1;
  real_T rtb_Rotationmatrixfromlocalto_0;
  real_T rtb_Rotationmatrixfromlocalto_1;
  real_T rtb_Subtract1;
  real_T rtb_Subtract1_a;
  real_T rtb_Subtract1_do;
  real_T rtb_Subtract1_f;
  real_T rtb_Subtract1_of;
  real_T rtb_Sum1_h;
  real_T rtb_Switch1;
  real_T rtb_Switch1_p2;
  real_T rtb_Switch1_pz;
  real_T rtb_Switch2;
  real_T rtb_Switch4;
  real_T rtb_Uk1_nx;
  real_T rtb_rx;
  real_T rtb_rx_c;
  real_T rtb_rx_d;
  real_T rtb_rx_g;
  real_T rtb_rx_nr;
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

  /* RelationalOperator: '<S38>/FixPt Relational Operator' incorporates:
   *  Inport: '<Root>/Joystick_Left_B11'
   *  UnitDelay: '<S38>/Delay Input1'
   *
   * Block description for '<S38>/Delay Input1':
   *
   *  Store in Global RAM
   */
  rtb_FixPtRelationalOperator = (Code_Gen_Model_U.Joystick_Left_B11 >
    Code_Gen_Model_DW.DelayInput1_DSTATE);

  /* RelationalOperator: '<S40>/FixPt Relational Operator' incorporates:
   *  Inport: '<Root>/Joystick_Left_B13'
   *  UnitDelay: '<S40>/Delay Input1'
   *
   * Block description for '<S40>/Delay Input1':
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

  /* RelationalOperator: '<S30>/Compare' incorporates:
   *  Constant: '<S30>/Constant'
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

  /* RelationalOperator: '<S37>/Compare' incorporates:
   *  Constant: '<S37>/Constant'
   *  Inport: '<Root>/Joystick_Left_B1'
   */
  Code_Gen_Model_B.Is_Boosting = (Code_Gen_Model_U.Joystick_Left_B1 != 0.0);

  /* RelationalOperator: '<S35>/Compare' incorporates:
   *  Constant: '<S35>/Constant'
   *  Inport: '<Root>/Joystick_Left_B3'
   */
  Code_Gen_Model_B.Align_Amp = (Code_Gen_Model_U.Joystick_Left_B3 != 0.0);

  /* RelationalOperator: '<S34>/Compare' incorporates:
   *  Constant: '<S34>/Constant'
   *  Inport: '<Root>/Joystick_Left_B4'
   */
  Code_Gen_Model_B.Align_Speaker = (Code_Gen_Model_U.Joystick_Left_B4 != 0.0);

  /* RelationalOperator: '<S33>/Compare' incorporates:
   *  Constant: '<S33>/Constant'
   *  Inport: '<Root>/Joystick_Right_B2'
   */
  Code_Gen_Model_B.Face_Toward_Driver = (Code_Gen_Model_U.Joystick_Right_B2 !=
    0.0);

  /* RelationalOperator: '<S31>/Compare' incorporates:
   *  Constant: '<S31>/Constant'
   *  Inport: '<Root>/Joystick_Right_B4'
   */
  Code_Gen_Model_B.Face_Right_Driver = (Code_Gen_Model_U.Joystick_Right_B4 !=
    0.0);

  /* RelationalOperator: '<S32>/Compare' incorporates:
   *  Constant: '<S32>/Constant'
   *  Inport: '<Root>/Joystick_Right_B3'
   */
  Code_Gen_Model_B.Face_Left_Driver = (Code_Gen_Model_U.Joystick_Right_B3 != 0.0);

  /* RelationalOperator: '<S29>/Compare' incorporates:
   *  Constant: '<S29>/Constant'
   *  Inport: '<Root>/Joystick_Right_POV'
   */
  Code_Gen_Model_B.Face_Away_Driver = (Code_Gen_Model_U.Joystick_Right_POV !=
    -1.0);

  /* Reshape: '<S41>/Reshapey' incorporates:
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

  /* Delay: '<S41>/MemoryX' incorporates:
   *  Constant: '<S41>/X0'
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

  /* Outputs for Enabled SubSystem: '<S68>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S94>/Enable'
   */
  if (rtb_AND) {
    Code_Gen_Model_DW.EnabledSubsystem_MODE = true;

    /* Sum: '<S94>/Add1' incorporates:
     *  Constant: '<S41>/C'
     *  Delay: '<S41>/MemoryX'
     *  Product: '<S94>/Product'
     */
    rtb_Switch1 = rtb_Reshapey_idx_0 - ((0.0 * Code_Gen_Model_DW.MemoryX_DSTATE
      [1]) + Code_Gen_Model_DW.MemoryX_DSTATE[0]);
    rtb_Switch1_p2 = rtb_Reshapey_idx_1 - ((0.0 *
      Code_Gen_Model_DW.MemoryX_DSTATE[0]) + Code_Gen_Model_DW.MemoryX_DSTATE[1]);

    /* Product: '<S94>/Product2' incorporates:
     *  Constant: '<S42>/KalmanGainM'
     */
    Code_Gen_Model_B.Product2[0] = (0.09512492197250387 * rtb_Switch1) +
      (5.9896845167210271E-17 * rtb_Switch1_p2);
    Code_Gen_Model_B.Product2[1] = (5.9896845167210271E-17 * rtb_Switch1) +
      (0.095124921972503981 * rtb_Switch1_p2);
  } else if (Code_Gen_Model_DW.EnabledSubsystem_MODE) {
    /* Disable for Product: '<S94>/Product2' incorporates:
     *  Outport: '<S94>/deltax'
     */
    Code_Gen_Model_B.Product2[0] = 0.0;
    Code_Gen_Model_B.Product2[1] = 0.0;
    Code_Gen_Model_DW.EnabledSubsystem_MODE = false;
  }

  /* End of Outputs for SubSystem: '<S68>/Enabled Subsystem' */

  /* Sum: '<S68>/Add' incorporates:
   *  Delay: '<S41>/MemoryX'
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
   *  RelationalOperator: '<S28>/FixPt Relational Operator'
   *  Sum: '<S8>/Sum'
   *  UnitDelay: '<S28>/Delay Input1'
   *  UnitDelay: '<S8>/Unit Delay1'
   *
   * Block description for '<S28>/Delay Input1':
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

  /* Gain: '<S27>/Gain1' */
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
    /* Logic: '<S322>/Logical Operator3' incorporates:
     *  Inport: '<Root>/IsBlueAlliance'
     */
    rtb_Swerve_Motors_Disabled = ((Code_Gen_Model_B.Align_Amp) &&
      (Code_Gen_Model_U.IsBlueAlliance != 0.0));

    /* Logic: '<S322>/Logical Operator2' incorporates:
     *  Inport: '<Root>/IsBlueAlliance'
     *  Logic: '<S322>/Logical Operator10'
     */
    rtb_AT_Tag_5_Active = ((Code_Gen_Model_B.Align_Amp) &&
      (!(Code_Gen_Model_U.IsBlueAlliance != 0.0)));

    /* Switch: '<S322>/Switch15' incorporates:
     *  Switch: '<S322>/Switch16'
     *  Switch: '<S322>/Switch23'
     *  Switch: '<S322>/Switch24'
     */
    if (rtb_AT_Tag_5_Active) {
      /* Switch: '<S322>/Switch15' incorporates:
       *  Constant: '<S322>/Constant9'
       *  Sum: '<S322>/Add17'
       */
      Code_Gen_Model_B.AT_Error_X = AT_Target_Tag_5_X -
        Code_Gen_Model_B.KF_Position_X;

      /* Switch: '<S322>/Switch23' incorporates:
       *  Constant: '<S322>/Constant28'
       *  Sum: '<S322>/Add23'
       */
      Code_Gen_Model_B.AT_Error_Y = AT_Target_Tag_5_Y -
        Code_Gen_Model_B.KF_Position_Y;
    } else if (rtb_Swerve_Motors_Disabled) {
      /* Switch: '<S322>/Switch15' incorporates:
       *  Constant: '<S322>/Constant5'
       *  Sum: '<S322>/Add16'
       *  Switch: '<S322>/Switch16'
       */
      Code_Gen_Model_B.AT_Error_X = AT_Target_Tag_6_X -
        Code_Gen_Model_B.KF_Position_X;

      /* Switch: '<S322>/Switch23' incorporates:
       *  Constant: '<S322>/Constant27'
       *  Sum: '<S322>/Add22'
       *  Switch: '<S322>/Switch24'
       */
      Code_Gen_Model_B.AT_Error_Y = AT_Target_Tag_6_Y -
        Code_Gen_Model_B.KF_Position_Y;
    } else {
      /* Switch: '<S322>/Switch15' incorporates:
       *  Constant: '<S322>/Constant1'
       *  Switch: '<S322>/Switch1'
       *  Switch: '<S322>/Switch12'
       *  Switch: '<S322>/Switch13'
       *  Switch: '<S322>/Switch14'
       *  Switch: '<S322>/Switch16'
       *  Switch: '<S322>/Switch17'
       *  Switch: '<S322>/Switch18'
       */
      Code_Gen_Model_B.AT_Error_X = 0.0;

      /* Switch: '<S322>/Switch23' incorporates:
       *  Constant: '<S322>/Constant2'
       *  Switch: '<S322>/Switch19'
       *  Switch: '<S322>/Switch20'
       *  Switch: '<S322>/Switch21'
       *  Switch: '<S322>/Switch22'
       *  Switch: '<S322>/Switch24'
       *  Switch: '<S322>/Switch25'
       *  Switch: '<S322>/Switch26'
       */
      Code_Gen_Model_B.AT_Error_Y = 0.0;
    }

    /* End of Switch: '<S322>/Switch15' */

    /* Switch: '<S338>/Switch1' incorporates:
     *  Constant: '<S343>/Constant'
     *  Constant: '<S344>/Constant'
     *  Logic: '<S338>/AND'
     *  RelationalOperator: '<S343>/Compare'
     *  RelationalOperator: '<S344>/Compare'
     *  Switch: '<S338>/Switch2'
     *  UnitDelay: '<S338>/Unit Delay'
     *  UnitDelay: '<S338>/Unit Delay1'
     */
    if ((Code_Gen_Model_B.Drive_Joystick_X == 0.0) &&
        (Code_Gen_Model_B.Drive_Joystick_Y == 0.0)) {
      rtb_Switch1_p2 = Code_Gen_Model_DW.UnitDelay1_DSTATE_l;
      rtb_Switch2 = Code_Gen_Model_DW.UnitDelay_DSTATE_p;
    } else {
      rtb_Switch1_p2 = Code_Gen_Model_B.Drive_Joystick_Y;
      rtb_Switch2 = Code_Gen_Model_B.Drive_Joystick_X;
    }

    /* End of Switch: '<S338>/Switch1' */

    /* Lookup_n-D: '<S326>/Modulation_Drv' incorporates:
     *  Math: '<S326>/Magnitude'
     */
    rtb_thetay = look1_binlcpw(rt_hypotd_snf(Code_Gen_Model_B.Drive_Joystick_X,
      Code_Gen_Model_B.Drive_Joystick_Y),
      Code_Gen_Model_ConstP.Modulation_Drv_bp01Data,
      Code_Gen_Model_ConstP.Modulation_Drv_tableData, 20U);

    /* RelationalOperator: '<S336>/Compare' incorporates:
     *  Constant: '<S336>/Constant'
     */
    rtb_Compare_pf = (rtb_thetay == 0.0);

    /* DeadZone: '<S326>/Dead Zone' */
    if (Code_Gen_Model_B.Drive_Joystick_Z > Twist_Deadzone_pos) {
      rtb_thetay_n = Code_Gen_Model_B.Drive_Joystick_Z - Twist_Deadzone_pos;
    } else if (Code_Gen_Model_B.Drive_Joystick_Z >= Twist_Deadzone_neg) {
      rtb_thetay_n = 0.0;
    } else {
      rtb_thetay_n = Code_Gen_Model_B.Drive_Joystick_Z - Twist_Deadzone_neg;
    }

    /* End of DeadZone: '<S326>/Dead Zone' */

    /* Logic: '<S326>/Logical Operator' incorporates:
     *  Constant: '<S337>/Constant'
     *  RelationalOperator: '<S337>/Compare'
     */
    rtb_Relative_Translation_Flag = ((rtb_thetay_n != 0.0) && rtb_Compare_pf);

    /* Switch: '<S326>/Switch1' incorporates:
     *  Switch: '<S326>/Switch4'
     */
    if (rtb_Relative_Translation_Flag) {
      /* Switch: '<S326>/Switch5' */
      if (Code_Gen_Model_B.Drive_Joystick_Z_Mode) {
        /* Merge: '<S12>/Merge3' incorporates:
         *  Constant: '<S326>/Constant3'
         */
        Code_Gen_Model_B.Translation_Angle = -1.5707963267948966;
      } else {
        /* Merge: '<S12>/Merge3' incorporates:
         *  Constant: '<S326>/Constant4'
         */
        Code_Gen_Model_B.Translation_Angle = 0.0;
      }

      /* End of Switch: '<S326>/Switch5' */
    } else if (rtb_Compare_pf) {
      /* Switch: '<S326>/Switch6' incorporates:
       *  Constant: '<S326>/Constant'
       *  Constant: '<S326>/Constant1'
       *  Inport: '<Root>/IsBlueAlliance'
       *  Switch: '<S326>/Switch4'
       */
      if (Code_Gen_Model_U.IsBlueAlliance != 0.0) {
        tmp = 0.0;
      } else {
        tmp = 3.1415926535897931;
      }

      /* Merge: '<S12>/Merge3' incorporates:
       *  Sum: '<S326>/Add1'
       *  Switch: '<S326>/Switch4'
       *  Switch: '<S326>/Switch6'
       *  Trigonometry: '<S326>/Atan1'
       */
      Code_Gen_Model_B.Translation_Angle = rt_atan2d_snf
        (Code_Gen_Model_B.AT_Error_Y, Code_Gen_Model_B.AT_Error_X) + tmp;
    } else {
      /* Merge: '<S12>/Merge3' incorporates:
       *  Switch: '<S326>/Switch4'
       *  Trigonometry: '<S326>/Atan2'
       */
      Code_Gen_Model_B.Translation_Angle = rt_atan2d_snf(rtb_Switch1_p2,
        rtb_Switch2);
    }

    /* End of Switch: '<S326>/Switch1' */

    /* Switch: '<S18>/Switch' incorporates:
     *  Constant: '<S18>/Constant5'
     *  Constant: '<S18>/Constant7'
     *  DataTypeConversion: '<S18>/Data Type Conversion'
     *  Switch: '<S326>/Switch3'
     */
    if (TEST_Swerve_Mode_Override_Flag != 0.0) {
      rtb_Is_Absolute_Translation_g = (TEST_Swerve_Mode_Translation != 0.0);
    } else {
      rtb_Is_Absolute_Translation_g = !rtb_Relative_Translation_Flag;
    }

    /* End of Switch: '<S18>/Switch' */

    /* DeadZone: '<S325>/Dead Zone' */
    if (Code_Gen_Model_B.Steer_Joystick_Z > Twist_Deadzone_pos) {
      tmp = Code_Gen_Model_B.Steer_Joystick_Z - Twist_Deadzone_pos;
    } else if (Code_Gen_Model_B.Steer_Joystick_Z >= Twist_Deadzone_neg) {
      tmp = 0.0;
    } else {
      tmp = Code_Gen_Model_B.Steer_Joystick_Z - Twist_Deadzone_neg;
    }

    /* Sum: '<S325>/Add' incorporates:
     *  Constant: '<S325>/Constant'
     *  Constant: '<S325>/Constant1'
     *  DeadZone: '<S325>/Dead Zone'
     *  Lookup_n-D: '<S325>/Modulation_Str_Y_Rel'
     *  Product: '<S325>/Product'
     *  Product: '<S325>/Product1'
     *  SignalConversion: '<S9>/Signal Copy5'
     */
    rtb_rx = (look1_binlcpw(Code_Gen_Model_B.Steer_Joystick_Y,
               Code_Gen_Model_ConstP.Modulation_Str_Y_Rel_bp01Data,
               Code_Gen_Model_ConstP.Modulation_Str_Y_Rel_tableData, 20U) *
              Steering_Relative_Gain) + (tmp * Steering_Twist_Gain);

    /* RelationalOperator: '<S327>/Compare' incorporates:
     *  Constant: '<S327>/Constant'
     */
    rtb_FixPtRelationalOperator = (rtb_rx == 0.0);

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

    /* Logic: '<S322>/Logical Operator11' */
    rtb_FixPtRelationalOperator_ea = ((Code_Gen_Model_B.Align_Amp) ||
      (Code_Gen_Model_B.Align_Speaker));

    /* RelationalOperator: '<S332>/FixPt Relational Operator' incorporates:
     *  UnitDelay: '<S332>/Delay Input1'
     *
     * Block description for '<S332>/Delay Input1':
     *
     *  Store in Global RAM
     */
    rtb_FixPtRelationalOperator_f = (((int32_T)rtb_FixPtRelationalOperator_ea) >
      ((int32_T)Code_Gen_Model_DW.DelayInput1_DSTATE_f));

    /* Logic: '<S325>/AND2' incorporates:
     *  RelationalOperator: '<S328>/FixPt Relational Operator'
     *  RelationalOperator: '<S329>/FixPt Relational Operator'
     *  RelationalOperator: '<S330>/FixPt Relational Operator'
     *  RelationalOperator: '<S331>/FixPt Relational Operator'
     *  UnitDelay: '<S328>/Delay Input1'
     *  UnitDelay: '<S329>/Delay Input1'
     *  UnitDelay: '<S330>/Delay Input1'
     *  UnitDelay: '<S331>/Delay Input1'
     *
     * Block description for '<S328>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S329>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S330>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S331>/Delay Input1':
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

    /* Logic: '<S325>/AND1' incorporates:
     *  Logic: '<S325>/AND3'
     *  Logic: '<S325>/AND7'
     *  UnitDelay: '<S325>/Unit Delay2'
     */
    rtb_AND1 = ((rtb_FixPtRelationalOperator && (!rtb_FixPtRelationalOperator_f))
                && (rtb_AND2 || (Code_Gen_Model_DW.UnitDelay2_DSTATE)));

    /* Logic: '<S325>/AND4' incorporates:
     *  Logic: '<S325>/AND5'
     *  Logic: '<S325>/AND8'
     *  UnitDelay: '<S325>/Unit Delay4'
     */
    rtb_FixPtRelationalOperator_f = ((rtb_FixPtRelationalOperator && (!rtb_AND2))
      && (rtb_FixPtRelationalOperator_f || (Code_Gen_Model_DW.UnitDelay4_DSTATE)));

    /* Logic: '<S325>/AND6' */
    Code_Gen_Model_B.Steering_Abs_Angle_Active = (rtb_AND1 ||
      rtb_FixPtRelationalOperator_f);

    /* Switch: '<S325>/Switch8' incorporates:
     *  Constant: '<S334>/Constant'
     *  Logic: '<S325>/AND9'
     *  RelationalOperator: '<S333>/FixPt Relational Operator'
     *  RelationalOperator: '<S334>/Compare'
     *  UnitDelay: '<S14>/Unit Delay'
     *  UnitDelay: '<S333>/Delay Input1'
     *
     * Block description for '<S333>/Delay Input1':
     *
     *  Store in Global RAM
     */
    if (((Code_Gen_Model_B.Steering_Abs_Angle_Active) || (((int32_T)
           rtb_FixPtRelationalOperator) > ((int32_T)
           Code_Gen_Model_DW.DelayInput1_DSTATE_jp))) ||
        (Code_Gen_Model_B.Active_GameState != 2)) {
      /* Switch: '<S325>/Switch8' */
      Code_Gen_Model_B.Steering_Abs_Gyro_Latch = Code_Gen_Model_B.Gyro_Angle_rad;
    }

    /* End of Switch: '<S325>/Switch8' */

    /* Switch: '<S325>/Switch2' */
    if (Code_Gen_Model_B.Steering_Abs_Angle_Active) {
      /* Switch: '<S325>/Switch2' incorporates:
       *  Constant: '<S325>/Constant2'
       */
      Code_Gen_Model_B.Steering_Abs_Gyro = 0.0;
    } else {
      /* Switch: '<S325>/Switch2' */
      Code_Gen_Model_B.Steering_Abs_Gyro =
        Code_Gen_Model_B.Steering_Abs_Gyro_Latch;
    }

    /* End of Switch: '<S325>/Switch2' */

    /* Logic: '<S322>/Logical Operator' incorporates:
     *  Logic: '<S322>/Logical Operator1'
     *  Logic: '<S322>/Logical Operator13'
     *  UnitDelay: '<S322>/Unit Delay'
     */
    Code_Gen_Model_B.previous_call_was_for_speaker =
      ((!Code_Gen_Model_B.Align_Amp) && ((Code_Gen_Model_B.Align_Speaker) ||
        (Code_Gen_Model_B.previous_call_was_for_speaker)));

    /* Switch: '<S322>/Switch2' incorporates:
     *  Switch: '<S322>/Switch4'
     *  Switch: '<S322>/Switch5'
     */
    if (Code_Gen_Model_B.previous_call_was_for_speaker) {
      /* Switch: '<S322>/Switch2' incorporates:
       *  Constant: '<S18>/Constant'
       */
      Code_Gen_Model_B.AT_Target_Angle = 0.0;
    } else if (rtb_AT_Tag_5_Active) {
      /* Switch: '<S322>/Switch2' incorporates:
       *  Constant: '<S322>/Constant14'
       *  Switch: '<S322>/Switch4'
       */
      Code_Gen_Model_B.AT_Target_Angle = AT_Target_Tag_5_Field_Angle;
    } else if (rtb_Swerve_Motors_Disabled) {
      /* Switch: '<S322>/Switch2' incorporates:
       *  Constant: '<S322>/Constant13'
       *  Switch: '<S322>/Switch4'
       *  Switch: '<S322>/Switch5'
       */
      Code_Gen_Model_B.AT_Target_Angle = AT_Target_Tag_6_Field_Angle;
    }

    /* End of Switch: '<S322>/Switch2' */

    /* Switch: '<S325>/Switch4' incorporates:
     *  Constant: '<S325>/Constant5'
     *  Switch: '<S325>/Switch1'
     *  Switch: '<S325>/Switch5'
     *  Switch: '<S325>/Switch6'
     *  Switch: '<S325>/Switch7'
     */
    if (Code_Gen_Model_B.Face_Away_Driver) {
      rtb_Switch4 = 0.0;
    } else if (Code_Gen_Model_B.Face_Left_Driver) {
      /* Switch: '<S325>/Switch5' incorporates:
       *  Constant: '<S325>/Constant6'
       */
      rtb_Switch4 = 1.5707963267948966;
    } else if (Code_Gen_Model_B.Face_Toward_Driver) {
      /* Switch: '<S325>/Switch6' incorporates:
       *  Constant: '<S325>/Constant7'
       *  Switch: '<S325>/Switch5'
       */
      rtb_Switch4 = 3.1415926535897931;
    } else if (Code_Gen_Model_B.Face_Right_Driver) {
      /* Switch: '<S325>/Switch7' incorporates:
       *  Constant: '<S325>/Constant8'
       *  Switch: '<S325>/Switch5'
       *  Switch: '<S325>/Switch6'
       */
      rtb_Switch4 = 4.71238898038469;
    } else if (rtb_FixPtRelationalOperator_f) {
      /* Switch: '<S325>/Switch1' incorporates:
       *  Switch: '<S325>/Switch5'
       *  Switch: '<S325>/Switch6'
       *  Switch: '<S325>/Switch7'
       */
      rtb_Switch4 = Code_Gen_Model_B.AT_Target_Angle;
    } else {
      /* Switch: '<S325>/Switch6' incorporates:
       *  Switch: '<S325>/Switch5'
       *  Switch: '<S325>/Switch7'
       *  UnitDelay: '<S325>/Unit Delay1'
       */
      rtb_Switch4 = Code_Gen_Model_DW.UnitDelay1_DSTATE_j2;
    }

    /* End of Switch: '<S325>/Switch4' */

    /* Switch: '<S325>/Switch3' */
    if (Code_Gen_Model_B.Steering_Abs_Angle_Active) {
      /* Switch: '<S325>/Switch3' */
      Code_Gen_Model_B.Steering_Abs_Angle = rtb_Switch4;
    } else {
      /* Switch: '<S325>/Switch3' incorporates:
       *  Constant: '<S325>/Constant3'
       */
      Code_Gen_Model_B.Steering_Abs_Angle = 0.0;
    }

    /* End of Switch: '<S325>/Switch3' */

    /* Merge: '<S12>/Merge1' incorporates:
     *  Sum: '<S325>/Add1'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd = Code_Gen_Model_B.Steering_Abs_Angle +
      Code_Gen_Model_B.Steering_Abs_Gyro;

    /* Merge: '<S12>/Merge2' incorporates:
     *  SignalConversion: '<S325>/Signal Copy'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd = rtb_rx;

    /* Switch: '<S335>/Switch1' incorporates:
     *  Constant: '<S335>/Constant'
     *  Constant: '<S335>/Constant1'
     */
    if (Code_Gen_Model_B.Is_Boosting) {
      rtb_Uk1_nx = Boost_Trigger_High_Speed;
    } else {
      rtb_Uk1_nx = Boost_Trigger_Low_Speed;
    }

    /* End of Switch: '<S335>/Switch1' */

    /* Switch: '<S342>/Init' incorporates:
     *  UnitDelay: '<S342>/FixPt Unit Delay1'
     *  UnitDelay: '<S342>/FixPt Unit Delay2'
     */
    if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_a != 0) {
      rtb_rx = rtb_Uk1_nx;
    } else {
      rtb_rx = Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_f;
    }

    /* End of Switch: '<S342>/Init' */

    /* Sum: '<S340>/Sum1' */
    rtb_Uk1_nx -= rtb_rx;

    /* Switch: '<S341>/Switch2' incorporates:
     *  Constant: '<S339>/Constant1'
     *  Constant: '<S339>/Constant3'
     *  RelationalOperator: '<S341>/LowerRelop1'
     *  RelationalOperator: '<S341>/UpperRelop'
     *  Switch: '<S341>/Switch'
     */
    if (rtb_Uk1_nx > Boost_Trigger_Increasing_Limit) {
      rtb_Uk1_nx = Boost_Trigger_Increasing_Limit;
    } else if (rtb_Uk1_nx < Boost_Trigger_Decreasing_Limit) {
      /* Switch: '<S341>/Switch' incorporates:
       *  Constant: '<S339>/Constant1'
       */
      rtb_Uk1_nx = Boost_Trigger_Decreasing_Limit;
    }

    /* End of Switch: '<S341>/Switch2' */

    /* Sum: '<S340>/Sum' */
    rtb_Uk1_nx += rtb_rx;

    /* Switch: '<S326>/Switch' incorporates:
     *  Switch: '<S326>/Switch2'
     */
    if (rtb_Relative_Translation_Flag) {
      /* Merge: '<S12>/Merge4' incorporates:
       *  Gain: '<S326>/Gain'
       */
      Code_Gen_Model_B.Translation_Speed = Translation_Twist_Gain * rtb_thetay_n;
    } else if (rtb_Compare_pf) {
      /* Merge: '<S12>/Merge4' incorporates:
       *  Gain: '<S326>/Gain2'
       *  Math: '<S326>/Magnitude1'
       *  Switch: '<S326>/Switch2'
       */
      Code_Gen_Model_B.Translation_Speed = AT_XY_Control_Gain * rt_hypotd_snf
        (Code_Gen_Model_B.AT_Error_X, Code_Gen_Model_B.AT_Error_Y);
    } else {
      /* Product: '<S335>/Product' incorporates:
       *  Switch: '<S326>/Switch2'
       */
      rtb_Switch1_pz = rtb_thetay * rtb_Uk1_nx;

      /* Saturate: '<S335>/Saturation' incorporates:
       *  Switch: '<S326>/Switch2'
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

      /* End of Saturate: '<S335>/Saturation' */
    }

    /* End of Switch: '<S326>/Switch' */

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
     *  Constant: '<S324>/Constant5'
     *  SignalConversion generated from: '<S18>/Elevator_Motor_Enable'
     */
    Code_Gen_Model_B.Elevator_Motor_Enable = true;

    /* Switch: '<S324>/Switch' incorporates:
     *  Constant: '<S324>/Constant'
     *  Inport: '<Root>/Gamepad_B1_A'
     *  Inport: '<Root>/Gamepad_B2_B'
     *  Inport: '<Root>/Gamepad_B3_X'
     *  Inport: '<Root>/Gamepad_B4_Y'
     *  Inport: '<Root>/Gamepad_Back'
     *  Inport: '<Root>/Gamepad_Start'
     *  RelationalOperator: '<S345>/FixPt Relational Operator'
     *  RelationalOperator: '<S346>/FixPt Relational Operator'
     *  RelationalOperator: '<S347>/FixPt Relational Operator'
     *  RelationalOperator: '<S348>/FixPt Relational Operator'
     *  RelationalOperator: '<S349>/FixPt Relational Operator'
     *  RelationalOperator: '<S350>/FixPt Relational Operator'
     *  Switch: '<S324>/Switch1'
     *  Switch: '<S324>/Switch2'
     *  Switch: '<S324>/Switch3'
     *  Switch: '<S324>/Switch4'
     *  Switch: '<S324>/Switch5'
     *  UnitDelay: '<S345>/Delay Input1'
     *  UnitDelay: '<S346>/Delay Input1'
     *  UnitDelay: '<S347>/Delay Input1'
     *  UnitDelay: '<S348>/Delay Input1'
     *  UnitDelay: '<S349>/Delay Input1'
     *  UnitDelay: '<S350>/Delay Input1'
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
     *
     * Block description for '<S349>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S350>/Delay Input1':
     *
     *  Store in Global RAM
     */
    if (Code_Gen_Model_U.Gamepad_B1_A > Code_Gen_Model_DW.DelayInput1_DSTATE_c)
    {
      rtb_Elevator_Height_Desired = Elevator_Height_L1;
    } else if (Code_Gen_Model_U.Gamepad_B2_B >
               Code_Gen_Model_DW.DelayInput1_DSTATE_nr) {
      /* Switch: '<S324>/Switch1' incorporates:
       *  Constant: '<S324>/Constant1'
       */
      rtb_Elevator_Height_Desired = Elevator_Height_L3;
    } else if (Code_Gen_Model_U.Gamepad_B3_X >
               Code_Gen_Model_DW.DelayInput1_DSTATE_ez) {
      /* Switch: '<S324>/Switch2' incorporates:
       *  Constant: '<S324>/Constant2'
       *  Switch: '<S324>/Switch1'
       */
      rtb_Elevator_Height_Desired = Elevator_Height_L2;
    } else if (Code_Gen_Model_U.Gamepad_B4_Y >
               Code_Gen_Model_DW.DelayInput1_DSTATE_nh) {
      /* Switch: '<S324>/Switch3' incorporates:
       *  Constant: '<S324>/Constant3'
       *  Switch: '<S324>/Switch1'
       *  Switch: '<S324>/Switch2'
       */
      rtb_Elevator_Height_Desired = Elevator_Height_L4;
    } else if (Code_Gen_Model_U.Gamepad_Start >
               Code_Gen_Model_DW.DelayInput1_DSTATE_i) {
      /* Switch: '<S324>/Switch4' incorporates:
       *  Constant: '<S324>/Constant4'
       *  Switch: '<S324>/Switch1'
       *  Switch: '<S324>/Switch2'
       *  Switch: '<S324>/Switch3'
       */
      rtb_Elevator_Height_Desired = Elevator_Height_Pickup;
    } else if (Code_Gen_Model_U.Gamepad_Back >
               Code_Gen_Model_DW.DelayInput1_DSTATE_pd) {
      /* Switch: '<S324>/Switch5' incorporates:
       *  Constant: '<S324>/Constant6'
       *  Switch: '<S324>/Switch1'
       *  Switch: '<S324>/Switch2'
       *  Switch: '<S324>/Switch3'
       *  Switch: '<S324>/Switch4'
       */
      rtb_Elevator_Height_Desired = Elevator_Height_Bottom;
    } else {
      /* Switch: '<S324>/Switch4' incorporates:
       *  Switch: '<S324>/Switch1'
       *  Switch: '<S324>/Switch2'
       *  Switch: '<S324>/Switch3'
       *  UnitDelay: '<S324>/Unit Delay'
       */
      rtb_Elevator_Height_Desired = Code_Gen_Model_DW.UnitDelay_DSTATE_ad;
    }

    /* End of Switch: '<S324>/Switch' */

    /* Merge: '<S12>/Merge11' incorporates:
     *  SignalConversion generated from: '<S18>/Elevator_Height_Desired'
     */
    Code_Gen_Model_B.Elevator_Height_Desired = rtb_Elevator_Height_Desired;

    /* Update for UnitDelay: '<S338>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_l = rtb_Switch1_p2;

    /* Update for UnitDelay: '<S338>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_p = rtb_Switch2;

    /* Update for UnitDelay: '<S333>/Delay Input1'
     *
     * Block description for '<S333>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_jp = rtb_FixPtRelationalOperator;

    /* Update for UnitDelay: '<S332>/Delay Input1'
     *
     * Block description for '<S332>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_f = rtb_FixPtRelationalOperator_ea;

    /* Update for UnitDelay: '<S328>/Delay Input1'
     *
     * Block description for '<S328>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_m = Code_Gen_Model_B.Face_Away_Driver;

    /* Update for UnitDelay: '<S329>/Delay Input1'
     *
     * Block description for '<S329>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_k = Code_Gen_Model_B.Face_Left_Driver;

    /* Update for UnitDelay: '<S330>/Delay Input1'
     *
     * Block description for '<S330>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_g = Code_Gen_Model_B.Face_Toward_Driver;

    /* Update for UnitDelay: '<S331>/Delay Input1'
     *
     * Block description for '<S331>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_g2 = Code_Gen_Model_B.Face_Right_Driver;

    /* Update for UnitDelay: '<S325>/Unit Delay2' */
    Code_Gen_Model_DW.UnitDelay2_DSTATE = rtb_AND1;

    /* Update for UnitDelay: '<S325>/Unit Delay4' */
    Code_Gen_Model_DW.UnitDelay4_DSTATE = rtb_FixPtRelationalOperator_f;

    /* Update for UnitDelay: '<S325>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_j2 = rtb_Switch4;

    /* Update for UnitDelay: '<S342>/FixPt Unit Delay2' incorporates:
     *  Constant: '<S342>/FixPt Constant'
     */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_a = 0U;

    /* Update for UnitDelay: '<S342>/FixPt Unit Delay1' */
    Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_f = rtb_Uk1_nx;

    /* Update for UnitDelay: '<S345>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_B1_A'
     *
     * Block description for '<S345>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_c = Code_Gen_Model_U.Gamepad_B1_A;

    /* Update for UnitDelay: '<S346>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_B2_B'
     *
     * Block description for '<S346>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_nr = Code_Gen_Model_U.Gamepad_B2_B;

    /* Update for UnitDelay: '<S347>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_B3_X'
     *
     * Block description for '<S347>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_ez = Code_Gen_Model_U.Gamepad_B3_X;

    /* Update for UnitDelay: '<S348>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_B4_Y'
     *
     * Block description for '<S348>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_nh = Code_Gen_Model_U.Gamepad_B4_Y;

    /* Update for UnitDelay: '<S349>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_Start'
     *
     * Block description for '<S349>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_i = Code_Gen_Model_U.Gamepad_Start;

    /* Update for UnitDelay: '<S350>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_Back'
     *
     * Block description for '<S350>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_pd = Code_Gen_Model_U.Gamepad_Back;

    /* Update for UnitDelay: '<S324>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_ad = rtb_Elevator_Height_Desired;

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
     *  RelationalOperator: '<S39>/FixPt Relational Operator'
     *  UnitDelay: '<S39>/Delay Input1'
     *
     * Block description for '<S39>/Delay Input1':
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
   *  Constant: '<S107>/Constant'
   *  Merge: '<S15>/Merge'
   *  Merge: '<S15>/Merge1'
   *  Merge: '<S15>/Merge2'
   *  Merge: '<S15>/Merge3'
   *  Merge: '<S15>/Merge4'
   *  Merge: '<S15>/Merge5'
   *  Merge: '<S15>/Merge7'
   *  Merge: '<S15>/Merge8'
   *  SignalConversion generated from: '<S107>/Robot_Reached_Destination'
   */
  rtPrevAction = Code_Gen_Model_DW.If_ActiveSubsystem;
  Code_Gen_Model_DW.If_ActiveSubsystem = 1;
  if ((rtPrevAction != 1) && (rtPrevAction == 0)) {
    /* Disable for If: '<S113>/If' */
    if (Code_Gen_Model_DW.If_ActiveSubsystem_h == 0) {
      /* Disable for If: '<S116>/If' */
      if (Code_Gen_Model_DW.If_ActiveSubsystem_o == 0) {
        /* Disable for If: '<S118>/If' */
        Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;
      }

      Code_Gen_Model_DW.If_ActiveSubsystem_o = -1;

      /* End of Disable for If: '<S116>/If' */
    }

    Code_Gen_Model_DW.If_ActiveSubsystem_h = -1;

    /* End of Disable for If: '<S113>/If' */
  }

  /* Outputs for IfAction SubSystem: '<S15>/Pass Through' incorporates:
   *  ActionPort: '<S107>/Action Port'
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

  /* UnitDelay: '<S261>/Unit Delay' */
  rtb_Merge1 = Code_Gen_Model_B.Translation_Speed_RL;

  /* Signum: '<S261>/Sign2' */
  if (rtIsNaN(rtb_Merge1)) {
    tmp = (rtNaN);
  } else if (rtb_Merge1 < 0.0) {
    tmp = -1.0;
  } else {
    tmp = (rtb_Merge1 > 0.0);
  }

  /* Signum: '<S261>/Sign1' */
  if (rtIsNaN(Code_Gen_Model_B.Translation_Speed_SPF)) {
    rtb_Add_du = (rtNaN);
  } else if (Code_Gen_Model_B.Translation_Speed_SPF < 0.0) {
    rtb_Add_du = -1.0;
  } else {
    rtb_Add_du = (Code_Gen_Model_B.Translation_Speed_SPF > 0.0);
  }

  /* Product: '<S261>/Product1' incorporates:
   *  Signum: '<S261>/Sign1'
   *  Signum: '<S261>/Sign2'
   */
  tmp *= rtb_Add_du;
  if (rtIsNaN(tmp)) {
    rtb_Num_Segments = 0;
  } else {
    rtb_Num_Segments = (int32_T)fmod(tmp, 256.0);
  }

  /* Switch: '<S261>/Switch' incorporates:
   *  Constant: '<S261>/Constant'
   *  Constant: '<S266>/Constant'
   *  Constant: '<S267>/Constant'
   *  Logic: '<S261>/or'
   *  Product: '<S261>/Product1'
   *  RelationalOperator: '<S266>/Compare'
   *  RelationalOperator: '<S267>/Compare'
   */
  if ((rtb_Merge1 == 0.0) || (((rtb_Num_Segments < 0) ? ((int32_T)((int8_T)
          (-((int8_T)((uint8_T)(-((real_T)rtb_Num_Segments))))))) :
        rtb_Num_Segments) > 0)) {
    rtb_rx_c = Code_Gen_Model_B.Translation_Speed_SPF;
  } else {
    rtb_rx_c = 0.0;
  }

  /* End of Switch: '<S261>/Switch' */

  /* RelationalOperator: '<S268>/Compare' incorporates:
   *  Constant: '<S268>/Constant'
   */
  rtb_Is_Absolute_Translation_g = (rtb_rx_c == 0.0);

  /* RelationalOperator: '<S269>/Compare' incorporates:
   *  Constant: '<S269>/Constant'
   */
  rtb_Is_Absolute_Steering = (rtb_rx_c > 0.0);

  /* Abs: '<S261>/Abs' incorporates:
   *  Sum: '<S261>/Subtract'
   */
  rtb_Merge1 = fabs(rtb_Merge1 - Code_Gen_Model_B.Translation_Speed_SPF);

  /* Switch: '<S261>/Switch5' incorporates:
   *  Constant: '<S261>/Constant1'
   *  Switch: '<S261>/Switch1'
   *  UnaryMinus: '<S261>/Unary Minus'
   */
  if (rtb_Is_Absolute_Translation_g) {
    /* SignalConversion generated from: '<S261>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S261>/Constant4'
     *  Constant: '<S261>/Constant6'
     */
    rtb_Akxhatkk1[0] = Translation_Speed_Approach_Zero_Final_Thresh;
    rtb_Akxhatkk1[1] = 1.0;

    /* SignalConversion generated from: '<S261>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S261>/Constant2'
     *  Constant: '<S261>/Constant5'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Translation_Speed_Approach_Zero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S261>/Lookup Table Dynamic' */
    /* Dynamic Look-Up Table Block: '<S261>/Lookup Table Dynamic'
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
    /* SignalConversion generated from: '<S261>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S261>/Constant10'
     *  Constant: '<S261>/Constant8'
     */
    rtb_Akxhatkk1[0] = Translation_Speed_NonZero_Final_Scale_Factor;
    rtb_Akxhatkk1[1] = 1.0;

    /* SignalConversion generated from: '<S261>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S261>/Constant7'
     *  Constant: '<S261>/Constant9'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Translation_Speed_NonZero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S261>/Lookup Table Dynamic1' */
    /* Dynamic Look-Up Table Block: '<S261>/Lookup Table Dynamic1'
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

    /* Switch: '<S261>/Switch3' incorporates:
     *  Constant: '<S261>/Constant1'
     *  Constant: '<S261>/Constant3'
     *  UnaryMinus: '<S261>/Unary Minus'
     */
    if (rtb_Is_Absolute_Steering) {
      tmp = Translation_Speed_Rate_Limit_Inc;
    } else {
      tmp = -Translation_Speed_Rate_Limit_Dec;
    }

    /* End of Switch: '<S261>/Switch3' */
  }

  /* End of Switch: '<S261>/Switch5' */

  /* Product: '<S261>/Product' incorporates:
   *  Switch: '<S261>/Switch1'
   */
  rtb_Switch2 = tmp * rtb_Switch1_p2;

  /* Switch: '<S272>/Init' incorporates:
   *  UnitDelay: '<S272>/FixPt Unit Delay1'
   *  UnitDelay: '<S272>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE != 0) {
    rtb_Merge1 = rtb_rx_c;
  } else {
    rtb_Merge1 = Code_Gen_Model_B.Translation_Speed_RL;
  }

  /* End of Switch: '<S272>/Init' */

  /* Sum: '<S270>/Sum1' */
  rtb_Switch4 = rtb_rx_c - rtb_Merge1;

  /* Switch: '<S271>/Switch2' incorporates:
   *  RelationalOperator: '<S271>/LowerRelop1'
   */
  if (!(rtb_Switch4 > rtb_Switch2)) {
    /* Switch: '<S261>/Switch2' incorporates:
     *  Constant: '<S261>/Constant1'
     *  Constant: '<S261>/Constant3'
     *  Switch: '<S261>/Switch4'
     *  UnaryMinus: '<S261>/Unary Minus1'
     */
    if (rtb_Is_Absolute_Translation_g) {
      tmp = Translation_Speed_Rate_Limit_Dec;
    } else if (rtb_Is_Absolute_Steering) {
      /* Switch: '<S261>/Switch4' incorporates:
       *  Constant: '<S261>/Constant1'
       */
      tmp = Translation_Speed_Rate_Limit_Dec;
    } else {
      tmp = -Translation_Speed_Rate_Limit_Inc;
    }

    /* Product: '<S261>/Product2' incorporates:
     *  Switch: '<S261>/Switch2'
     */
    rtb_Switch2 = tmp * rtb_Switch1_p2;

    /* Switch: '<S271>/Switch' incorporates:
     *  RelationalOperator: '<S271>/UpperRelop'
     */
    if (!(rtb_Switch4 < rtb_Switch2)) {
      rtb_Switch2 = rtb_Switch4;
    }

    /* End of Switch: '<S271>/Switch' */
  }

  /* End of Switch: '<S271>/Switch2' */

  /* Sum: '<S270>/Sum' */
  Code_Gen_Model_B.Translation_Speed_RL = rtb_Switch2 + rtb_Merge1;

  /* Switch: '<S264>/Switch' */
  if (Code_Gen_Model_B.Is_Absolute_Translation_SPF) {
    /* Switch: '<S264>/Switch' incorporates:
     *  Constant: '<S296>/Constant3'
     *  Constant: '<S296>/Constant4'
     *  Math: '<S296>/Math Function'
     *  Sum: '<S264>/Subtract'
     *  Sum: '<S296>/Add1'
     *  Sum: '<S296>/Add2'
     */
    Code_Gen_Model_B.Translation_Steering_Cmd = rt_modd_snf
      ((Code_Gen_Model_B.Translation_Angle_SPF - Code_Gen_Model_B.Gyro_Angle_SPF)
       + 3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;
  } else {
    /* Switch: '<S264>/Switch' */
    Code_Gen_Model_B.Translation_Steering_Cmd =
      Code_Gen_Model_B.Translation_Angle_SPF;
  }

  /* End of Switch: '<S264>/Switch' */

  /* Sum: '<S292>/Add1' incorporates:
   *  Constant: '<S292>/Constant3'
   *  Constant: '<S292>/Constant4'
   *  Math: '<S292>/Math Function'
   *  Sum: '<S291>/Sum'
   *  Sum: '<S292>/Add2'
   */
  rtb_Switch2 = rt_modd_snf((Code_Gen_Model_B.Steering_Abs_Cmd_SPF -
    Code_Gen_Model_B.Gyro_Angle_SPF) + 3.1415926535897931, 6.2831853071795862) -
    3.1415926535897931;

  /* Sum: '<S294>/Sum1' incorporates:
   *  Constant: '<S291>/Constant2'
   *  Product: '<S294>/Product'
   *  Sum: '<S294>/Sum'
   *  UnitDelay: '<S294>/Unit Delay1'
   */
  rtb_Merge1 = ((rtb_Switch2 - Code_Gen_Model_DW.UnitDelay1_DSTATE_i) *
                Steering_Heading_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_i;

  /* Product: '<S291>/Product' incorporates:
   *  Constant: '<S291>/Constant3'
   */
  rtb_Switch1_p2 = rtb_Merge1 * Steering_Heading_Control_D;

  /* Sum: '<S293>/Diff' incorporates:
   *  UnitDelay: '<S293>/UD'
   *
   * Block description for '<S293>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S293>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Switch1_pz = rtb_Switch1_p2 - Code_Gen_Model_DW.UD_DSTATE;

  /* Saturate: '<S291>/Saturation' */
  if (rtb_Switch1_pz > Steering_Heading_Control_D_UL) {
    rtb_Switch1_pz = Steering_Heading_Control_D_UL;
  } else if (rtb_Switch1_pz < Steering_Heading_Control_D_LL) {
    rtb_Switch1_pz = Steering_Heading_Control_D_LL;
  }

  /* Sum: '<S291>/Add' incorporates:
   *  Gain: '<S291>/Gain1'
   *  Saturate: '<S291>/Saturation'
   */
  rtb_Switch4 = (Steering_Heading_Control_P * rtb_Switch2) + rtb_Switch1_pz;

  /* Sum: '<S291>/Subtract' incorporates:
   *  Constant: '<S291>/Constant'
   */
  rtb_rx_g = Steering_Heading_Control_Total_UL - rtb_Switch4;

  /* Sum: '<S291>/Sum2' incorporates:
   *  Gain: '<S291>/Gain2'
   *  UnitDelay: '<S291>/Unit Delay'
   */
  rtb_Switch2 = (Steering_Heading_Control_I * rtb_Switch2) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_m;

  /* Switch: '<S295>/Switch2' incorporates:
   *  RelationalOperator: '<S295>/LowerRelop1'
   */
  if (!(rtb_Switch2 > rtb_rx_g)) {
    /* Sum: '<S291>/Subtract1' incorporates:
     *  Constant: '<S291>/Constant1'
     */
    rtb_Uk1_nx = Steering_Heading_Control_Total_LL - rtb_Switch4;

    /* Switch: '<S295>/Switch' incorporates:
     *  RelationalOperator: '<S295>/UpperRelop'
     */
    if (rtb_Switch2 < rtb_Uk1_nx) {
      rtb_rx_g = rtb_Uk1_nx;
    } else {
      rtb_rx_g = rtb_Switch2;
    }

    /* End of Switch: '<S295>/Switch' */
  }

  /* End of Switch: '<S295>/Switch2' */

  /* Saturate: '<S291>/Saturation1' */
  if (rtb_rx_g > Steering_Heading_Control_I_UL) {
    rtb_Switch2 = Steering_Heading_Control_I_UL;
  } else if (rtb_rx_g < Steering_Heading_Control_I_LL) {
    rtb_Switch2 = Steering_Heading_Control_I_LL;
  } else {
    rtb_Switch2 = rtb_rx_g;
  }

  /* End of Saturate: '<S291>/Saturation1' */

  /* Sum: '<S291>/Add1' */
  rtb_Switch1_pz = rtb_Switch4 + rtb_Switch2;

  /* Saturate: '<S291>/Saturation2' */
  if (rtb_Switch1_pz > Steering_Heading_Control_Total_UL) {
    /* Saturate: '<S291>/Saturation2' */
    Code_Gen_Model_B.Steering_Localized_PID = Steering_Heading_Control_Total_UL;
  } else if (rtb_Switch1_pz < Steering_Heading_Control_Total_LL) {
    /* Saturate: '<S291>/Saturation2' */
    Code_Gen_Model_B.Steering_Localized_PID = Steering_Heading_Control_Total_LL;
  } else {
    /* Saturate: '<S291>/Saturation2' */
    Code_Gen_Model_B.Steering_Localized_PID = rtb_Switch1_pz;
  }

  /* End of Saturate: '<S291>/Saturation2' */

  /* Switch: '<S275>/Switch' incorporates:
   *  Abs: '<S275>/Abs'
   *  Constant: '<S275>/Constant'
   *  Constant: '<S290>/Constant'
   *  RelationalOperator: '<S290>/Compare'
   */
  if (fabs(Code_Gen_Model_B.Steering_Localized_PID) >
      Steering_Heading_Control_Deadzone) {
    rtb_rx_g = Code_Gen_Model_B.Steering_Localized_PID;
  } else {
    rtb_rx_g = 0.0;
  }

  /* End of Switch: '<S275>/Switch' */

  /* Signum: '<S274>/Sign2' incorporates:
   *  UnitDelay: '<S274>/Unit Delay'
   */
  if (rtIsNaN(Code_Gen_Model_DW.UnitDelay_DSTATE_d)) {
    tmp = (rtNaN);
  } else if (Code_Gen_Model_DW.UnitDelay_DSTATE_d < 0.0) {
    tmp = -1.0;
  } else {
    tmp = (Code_Gen_Model_DW.UnitDelay_DSTATE_d > 0.0);
  }

  /* Signum: '<S274>/Sign1' */
  if (rtIsNaN(rtb_rx_g)) {
    rtb_Add_du = (rtNaN);
  } else if (rtb_rx_g < 0.0) {
    rtb_Add_du = -1.0;
  } else {
    rtb_Add_du = (rtb_rx_g > 0.0);
  }

  /* Product: '<S274>/Product1' incorporates:
   *  Signum: '<S274>/Sign1'
   *  Signum: '<S274>/Sign2'
   */
  tmp *= rtb_Add_du;
  if (rtIsNaN(tmp)) {
    rtb_Num_Segments = 0;
  } else {
    rtb_Num_Segments = (int32_T)fmod(tmp, 256.0);
  }

  /* Switch: '<S274>/Switch' incorporates:
   *  Constant: '<S274>/Constant'
   *  Constant: '<S283>/Constant'
   *  Constant: '<S284>/Constant'
   *  Logic: '<S274>/or'
   *  Product: '<S274>/Product1'
   *  RelationalOperator: '<S283>/Compare'
   *  RelationalOperator: '<S284>/Compare'
   *  UnitDelay: '<S274>/Unit Delay'
   */
  if ((Code_Gen_Model_DW.UnitDelay_DSTATE_d == 0.0) || (((rtb_Num_Segments < 0) ?
        ((int32_T)((int8_T)(-((int8_T)((uint8_T)(-((real_T)rtb_Num_Segments)))))))
        : rtb_Num_Segments) > 0)) {
    rtb_rx_nr = rtb_rx_g;
  } else {
    rtb_rx_nr = 0.0;
  }

  /* End of Switch: '<S274>/Switch' */

  /* RelationalOperator: '<S285>/Compare' incorporates:
   *  Constant: '<S285>/Constant'
   */
  rtb_Is_Absolute_Translation_g = (rtb_rx_nr == 0.0);

  /* RelationalOperator: '<S286>/Compare' incorporates:
   *  Constant: '<S286>/Constant'
   */
  rtb_Is_Absolute_Steering = (rtb_rx_nr > 0.0);

  /* Abs: '<S274>/Abs' incorporates:
   *  Sum: '<S274>/Subtract'
   *  UnitDelay: '<S274>/Unit Delay'
   */
  rtb_Switch4 = fabs(Code_Gen_Model_DW.UnitDelay_DSTATE_d - rtb_rx_g);

  /* Switch: '<S274>/Switch5' incorporates:
   *  Constant: '<S274>/Constant1'
   *  Switch: '<S274>/Switch1'
   *  UnaryMinus: '<S274>/Unary Minus'
   */
  if (rtb_Is_Absolute_Translation_g) {
    /* SignalConversion generated from: '<S274>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S274>/Constant4'
     *  Constant: '<S274>/Constant6'
     */
    rtb_Akxhatkk1[0] = Steering_Absolute_Cmd_Approach_Zero_Final_Thresh;
    rtb_Akxhatkk1[1] = 1.0;

    /* SignalConversion generated from: '<S274>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S274>/Constant2'
     *  Constant: '<S274>/Constant5'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Steering_Absolute_Cmd_Approach_Zero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S274>/Lookup Table Dynamic' */
    /* Dynamic Look-Up Table Block: '<S274>/Lookup Table Dynamic'
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
    /* SignalConversion generated from: '<S274>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S274>/Constant10'
     *  Constant: '<S274>/Constant8'
     */
    rtb_Akxhatkk1[0] = Steering_Absolute_Cmd_NonZero_Final_Scale_Factor;
    rtb_Akxhatkk1[1] = 1.0;

    /* SignalConversion generated from: '<S274>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S274>/Constant7'
     *  Constant: '<S274>/Constant9'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Steering_Absolute_Cmd_NonZero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S274>/Lookup Table Dynamic1' */
    /* Dynamic Look-Up Table Block: '<S274>/Lookup Table Dynamic1'
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

    /* Switch: '<S274>/Switch3' incorporates:
     *  Constant: '<S274>/Constant1'
     *  Constant: '<S274>/Constant3'
     *  UnaryMinus: '<S274>/Unary Minus'
     */
    if (rtb_Is_Absolute_Steering) {
      tmp = Steering_Absolute_Cmd_Rate_Limit_Inc;
    } else {
      tmp = -Steering_Absolute_Cmd_Rate_Limit_Dec;
    }

    /* End of Switch: '<S274>/Switch3' */
  }

  /* End of Switch: '<S274>/Switch5' */

  /* Product: '<S274>/Product' incorporates:
   *  Switch: '<S274>/Switch1'
   */
  rtb_thetay_i = tmp * rtb_Switch4;

  /* Switch: '<S289>/Init' incorporates:
   *  UnitDelay: '<S289>/FixPt Unit Delay1'
   *  UnitDelay: '<S289>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_p != 0) {
    rtb_rx_g = rtb_rx_nr;
  } else {
    rtb_rx_g = Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_e;
  }

  /* End of Switch: '<S289>/Init' */

  /* Sum: '<S287>/Sum1' */
  rtb_Uk1_nx = rtb_rx_nr - rtb_rx_g;

  /* Switch: '<S288>/Switch2' incorporates:
   *  RelationalOperator: '<S288>/LowerRelop1'
   */
  if (!(rtb_Uk1_nx > rtb_thetay_i)) {
    /* Switch: '<S274>/Switch2' incorporates:
     *  Constant: '<S274>/Constant1'
     *  Constant: '<S274>/Constant3'
     *  Switch: '<S274>/Switch4'
     *  UnaryMinus: '<S274>/Unary Minus1'
     */
    if (rtb_Is_Absolute_Translation_g) {
      tmp = Steering_Absolute_Cmd_Rate_Limit_Dec;
    } else if (rtb_Is_Absolute_Steering) {
      /* Switch: '<S274>/Switch4' incorporates:
       *  Constant: '<S274>/Constant1'
       */
      tmp = Steering_Absolute_Cmd_Rate_Limit_Dec;
    } else {
      tmp = -Steering_Absolute_Cmd_Rate_Limit_Inc;
    }

    /* Product: '<S274>/Product2' incorporates:
     *  Switch: '<S274>/Switch2'
     */
    rtb_Elevator_Height_Desired = tmp * rtb_Switch4;

    /* Switch: '<S288>/Switch' incorporates:
     *  RelationalOperator: '<S288>/UpperRelop'
     */
    if (rtb_Uk1_nx < rtb_Elevator_Height_Desired) {
      rtb_thetay_i = rtb_Elevator_Height_Desired;
    } else {
      rtb_thetay_i = rtb_Uk1_nx;
    }

    /* End of Switch: '<S288>/Switch' */
  }

  /* End of Switch: '<S288>/Switch2' */

  /* Sum: '<S287>/Sum' */
  rtb_Switch4 = rtb_thetay_i + rtb_rx_g;

  /* Signum: '<S273>/Sign2' incorporates:
   *  UnitDelay: '<S273>/Unit Delay'
   */
  if (rtIsNaN(Code_Gen_Model_DW.UnitDelay_DSTATE_g)) {
    tmp = (rtNaN);
  } else if (Code_Gen_Model_DW.UnitDelay_DSTATE_g < 0.0) {
    tmp = -1.0;
  } else {
    tmp = (Code_Gen_Model_DW.UnitDelay_DSTATE_g > 0.0);
  }

  /* Signum: '<S273>/Sign1' */
  if (rtIsNaN(Code_Gen_Model_B.Steering_Rel_Cmd_SPF)) {
    rtb_Add_du = (rtNaN);
  } else if (Code_Gen_Model_B.Steering_Rel_Cmd_SPF < 0.0) {
    rtb_Add_du = -1.0;
  } else {
    rtb_Add_du = (Code_Gen_Model_B.Steering_Rel_Cmd_SPF > 0.0);
  }

  /* Product: '<S273>/Product1' incorporates:
   *  Signum: '<S273>/Sign1'
   *  Signum: '<S273>/Sign2'
   */
  tmp *= rtb_Add_du;
  if (rtIsNaN(tmp)) {
    rtb_Num_Segments = 0;
  } else {
    rtb_Num_Segments = (int32_T)fmod(tmp, 256.0);
  }

  /* Switch: '<S273>/Switch' incorporates:
   *  Constant: '<S273>/Constant'
   *  Constant: '<S276>/Constant'
   *  Constant: '<S277>/Constant'
   *  Logic: '<S273>/or'
   *  Product: '<S273>/Product1'
   *  RelationalOperator: '<S276>/Compare'
   *  RelationalOperator: '<S277>/Compare'
   *  UnitDelay: '<S273>/Unit Delay'
   */
  if ((Code_Gen_Model_DW.UnitDelay_DSTATE_g == 0.0) || (((rtb_Num_Segments < 0) ?
        ((int32_T)((int8_T)(-((int8_T)((uint8_T)(-((real_T)rtb_Num_Segments)))))))
        : rtb_Num_Segments) > 0)) {
    rtb_thetay_i = Code_Gen_Model_B.Steering_Rel_Cmd_SPF;
  } else {
    rtb_thetay_i = 0.0;
  }

  /* End of Switch: '<S273>/Switch' */

  /* RelationalOperator: '<S278>/Compare' incorporates:
   *  Constant: '<S278>/Constant'
   */
  rtb_Is_Absolute_Translation_g = (rtb_thetay_i == 0.0);

  /* RelationalOperator: '<S279>/Compare' incorporates:
   *  Constant: '<S279>/Constant'
   */
  rtb_Is_Absolute_Steering = (rtb_thetay_i > 0.0);

  /* Abs: '<S273>/Abs' incorporates:
   *  Sum: '<S273>/Subtract'
   *  UnitDelay: '<S273>/Unit Delay'
   */
  rtb_Uk1_nx = fabs(Code_Gen_Model_DW.UnitDelay_DSTATE_g -
                    Code_Gen_Model_B.Steering_Rel_Cmd_SPF);

  /* Switch: '<S273>/Switch5' incorporates:
   *  Constant: '<S273>/Constant1'
   *  Switch: '<S273>/Switch1'
   *  UnaryMinus: '<S273>/Unary Minus'
   */
  if (rtb_Is_Absolute_Translation_g) {
    /* SignalConversion generated from: '<S273>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S273>/Constant4'
     *  Constant: '<S273>/Constant6'
     */
    rtb_Akxhatkk1[0] = Steering_Relative_Cmd_Approach_Zero_Final_Thresh;
    rtb_Akxhatkk1[1] = 1.0;

    /* SignalConversion generated from: '<S273>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S273>/Constant2'
     *  Constant: '<S273>/Constant5'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Steering_Relative_Cmd_Approach_Zero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S273>/Lookup Table Dynamic' */
    /* Dynamic Look-Up Table Block: '<S273>/Lookup Table Dynamic'
     * Input0  Data Type:  Floating Point real_T
     * Input1  Data Type:  Floating Point real_T
     * Input2  Data Type:  Floating Point real_T
     * Output0 Data Type:  Floating Point real_T
     * Lookup Method: Linear_Endpoint
     *
     */
    LookUp_real_T_real_T( &(rtb_LookupTableDynamic_p), &rtb_Akxhatkk1[0],
                         rtb_Uk1_nx, &rtb_Minus_n[0], 1U);
    rtb_Uk1_nx = rtb_LookupTableDynamic_p;
    tmp = -Steering_Relative_Cmd_Rate_Limit_Dec;
  } else {
    /* SignalConversion generated from: '<S273>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S273>/Constant10'
     *  Constant: '<S273>/Constant8'
     */
    rtb_Akxhatkk1[0] = Steering_Relative_Cmd_NonZero_Final_Scale_Factor;
    rtb_Akxhatkk1[1] = 1.0;

    /* SignalConversion generated from: '<S273>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S273>/Constant7'
     *  Constant: '<S273>/Constant9'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Steering_Relative_Cmd_NonZero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S273>/Lookup Table Dynamic1' */
    /* Dynamic Look-Up Table Block: '<S273>/Lookup Table Dynamic1'
     * Input0  Data Type:  Floating Point real_T
     * Input1  Data Type:  Floating Point real_T
     * Input2  Data Type:  Floating Point real_T
     * Output0 Data Type:  Floating Point real_T
     * Lookup Method: Linear_Endpoint
     *
     */
    LookUp_real_T_real_T( &(rtb_LookupTableDynamic1_g), &rtb_Akxhatkk1[0],
                         rtb_Uk1_nx, &rtb_Minus_n[0], 1U);
    rtb_Uk1_nx = rtb_LookupTableDynamic1_g;

    /* Switch: '<S273>/Switch3' incorporates:
     *  Constant: '<S273>/Constant1'
     *  Constant: '<S273>/Constant3'
     *  UnaryMinus: '<S273>/Unary Minus'
     */
    if (rtb_Is_Absolute_Steering) {
      tmp = Steering_Relative_Cmd_Rate_Limit_Inc;
    } else {
      tmp = -Steering_Relative_Cmd_Rate_Limit_Dec;
    }

    /* End of Switch: '<S273>/Switch3' */
  }

  /* End of Switch: '<S273>/Switch5' */

  /* Product: '<S273>/Product' incorporates:
   *  Switch: '<S273>/Switch1'
   */
  rtb_rx_g = tmp * rtb_Uk1_nx;

  /* Switch: '<S282>/Init' incorporates:
   *  UnitDelay: '<S282>/FixPt Unit Delay1'
   *  UnitDelay: '<S282>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_c != 0) {
    rtb_rx_nr = rtb_thetay_i;
  } else {
    rtb_rx_nr = Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_p;
  }

  /* End of Switch: '<S282>/Init' */

  /* Sum: '<S280>/Sum1' */
  rtb_Elevator_Height_Desired = rtb_thetay_i - rtb_rx_nr;

  /* Switch: '<S281>/Switch2' incorporates:
   *  RelationalOperator: '<S281>/LowerRelop1'
   */
  if (!(rtb_Elevator_Height_Desired > rtb_rx_g)) {
    /* Switch: '<S273>/Switch2' incorporates:
     *  Constant: '<S273>/Constant1'
     *  Constant: '<S273>/Constant3'
     *  Switch: '<S273>/Switch4'
     *  UnaryMinus: '<S273>/Unary Minus1'
     */
    if (rtb_Is_Absolute_Translation_g) {
      tmp = Steering_Relative_Cmd_Rate_Limit_Dec;
    } else if (rtb_Is_Absolute_Steering) {
      /* Switch: '<S273>/Switch4' incorporates:
       *  Constant: '<S273>/Constant1'
       */
      tmp = Steering_Relative_Cmd_Rate_Limit_Dec;
    } else {
      tmp = -Steering_Relative_Cmd_Rate_Limit_Inc;
    }

    /* Product: '<S273>/Product2' incorporates:
     *  Switch: '<S273>/Switch2'
     */
    rtb_Product2_e = tmp * rtb_Uk1_nx;

    /* Switch: '<S281>/Switch' incorporates:
     *  RelationalOperator: '<S281>/UpperRelop'
     */
    if (rtb_Elevator_Height_Desired < rtb_Product2_e) {
      rtb_rx_g = rtb_Product2_e;
    } else {
      rtb_rx_g = rtb_Elevator_Height_Desired;
    }

    /* End of Switch: '<S281>/Switch' */
  }

  /* End of Switch: '<S281>/Switch2' */

  /* Sum: '<S280>/Sum' */
  rtb_Uk1_nx = rtb_rx_g + rtb_rx_nr;

  /* Switch: '<S263>/Switch' */
  if (Code_Gen_Model_B.Is_Absolute_Steering_SPF) {
    /* Switch: '<S263>/Switch' */
    Code_Gen_Model_B.Steering_Localized_Cmd = rtb_Switch4;
  } else {
    /* Switch: '<S263>/Switch' */
    Code_Gen_Model_B.Steering_Localized_Cmd = rtb_Uk1_nx;
  }

  /* End of Switch: '<S263>/Switch' */

  /* Outputs for Atomic SubSystem: '<S176>/Initialize Function' */
  /* Sum: '<S262>/Add' incorporates:
   *  Constant: '<S262>/Constant'
   *  Constant: '<S262>/Constant4'
   *  Constant: '<S262>/Constant5'
   *  Trigonometry: '<S262>/Atan2'
   */
  rtb_Elevator_Height_Desired = rt_atan2d_snf(Distance_FL_y, 0.187325) +
    1.5707963267948966;

  /* End of Outputs for SubSystem: '<S176>/Initialize Function' */

  /* Fcn: '<S304>/r->x' incorporates:
   *  Fcn: '<S309>/r->x'
   *  Fcn: '<S314>/r->x'
   *  Fcn: '<S319>/r->x'
   */
  rtb_rx_d = Code_Gen_Model_B.Translation_Speed_RL * cos
    (Code_Gen_Model_B.Translation_Steering_Cmd);

  /* Sum: '<S298>/Add' incorporates:
   *  Fcn: '<S304>/r->x'
   *  Fcn: '<S305>/r->x'
   */
  rtb_Akxhatkk1[0] = (Code_Gen_Model_B.Steering_Localized_Cmd * cos
                      (rtb_Elevator_Height_Desired)) + rtb_rx_d;

  /* Fcn: '<S304>/theta->y' incorporates:
   *  Fcn: '<S309>/theta->y'
   *  Fcn: '<S314>/theta->y'
   *  Fcn: '<S319>/theta->y'
   */
  rtb_Add_oh = Code_Gen_Model_B.Translation_Speed_RL * sin
    (Code_Gen_Model_B.Translation_Steering_Cmd);

  /* Sum: '<S298>/Add' incorporates:
   *  Fcn: '<S304>/theta->y'
   *  Fcn: '<S305>/theta->y'
   */
  rtb_Akxhatkk1[1] = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                      (rtb_Elevator_Height_Desired)) + rtb_Add_oh;

  /* Fcn: '<S303>/x->r' */
  rtb_rx_nr = rt_hypotd_snf(rtb_Akxhatkk1[0], rtb_Akxhatkk1[1]);

  /* RelationalOperator: '<S306>/Compare' incorporates:
   *  Constant: '<S306>/Constant'
   */
  rtb_Is_Absolute_Translation_g = (rtb_rx_nr == 0.0);

  /* Switch: '<S302>/Switch' */
  if (!rtb_Is_Absolute_Translation_g) {
    /* Switch: '<S302>/Switch' incorporates:
     *  Fcn: '<S303>/x->theta'
     */
    Code_Gen_Model_B.FL_Desired_Module_Angle = rt_atan2d_snf(rtb_Akxhatkk1[1],
      rtb_Akxhatkk1[0]);
  }

  /* End of Switch: '<S302>/Switch' */

  /* Trigonometry: '<S190>/Cos4' incorporates:
   *  Switch: '<S179>/Angle_Switch'
   *  Trigonometry: '<S189>/Cos4'
   */
  rtb_Elevator_Height_Desired = cos(Code_Gen_Model_B.FL_Desired_Module_Angle);

  /* Sum: '<S168>/Add1' incorporates:
   *  Constant: '<S168>/Constant3'
   *  Constant: '<S168>/Constant4'
   *  Gain: '<S16>/Revolutions to Radians'
   *  Inport: '<Root>/FrontLeft_Steer_Rev'
   *  Inport: '<Root>/FrontLeft_Turn_Offset'
   *  Math: '<S168>/Math Function'
   *  Sum: '<S168>/Add2'
   *  Sum: '<S16>/Add'
   */
  Code_Gen_Model_B.FL_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.FrontLeft_Steer_Rev -
       Code_Gen_Model_U.FrontLeft_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Trigonometry: '<S190>/Sin5' incorporates:
   *  UnaryMinus: '<S188>/Unary Minus'
   */
  rtb_rx_c = sin(-Code_Gen_Model_B.FL_Steer_Module_Angle);

  /* Trigonometry: '<S190>/Sin4' incorporates:
   *  Switch: '<S179>/Angle_Switch'
   *  Trigonometry: '<S189>/Sin4'
   */
  rtb_Product2_e = sin(Code_Gen_Model_B.FL_Desired_Module_Angle);

  /* Trigonometry: '<S190>/Cos5' incorporates:
   *  UnaryMinus: '<S188>/Unary Minus'
   */
  rtb_rx_g = cos(-Code_Gen_Model_B.FL_Steer_Module_Angle);

  /* Sum: '<S190>/Subtract1' incorporates:
   *  Product: '<S190>/Product2'
   *  Product: '<S190>/Product3'
   *  Trigonometry: '<S190>/Cos4'
   *  Trigonometry: '<S190>/Sin4'
   */
  rtb_Subtract1 = (rtb_Elevator_Height_Desired * rtb_rx_c) + (rtb_Product2_e *
    rtb_rx_g);

  /* Sum: '<S190>/Subtract' incorporates:
   *  Product: '<S190>/Product'
   *  Product: '<S190>/Product1'
   *  Trigonometry: '<S190>/Cos4'
   *  Trigonometry: '<S190>/Sin4'
   */
  rtb_rx_c = (rtb_Elevator_Height_Desired * rtb_rx_g) - (rtb_Product2_e *
    rtb_rx_c);

  /* Math: '<S190>/Hypot' */
  rtb_rx_g = rt_hypotd_snf(rtb_rx_c, rtb_Subtract1);

  /* Switch: '<S190>/Switch' incorporates:
   *  Constant: '<S190>/Constant'
   *  Constant: '<S190>/Constant1'
   *  Constant: '<S191>/Constant'
   *  Product: '<S190>/Divide'
   *  Product: '<S190>/Divide1'
   *  RelationalOperator: '<S191>/Compare'
   *  Switch: '<S190>/Switch1'
   */
  if (rtb_rx_g > 1.0E-6) {
    rtb_thetay_i = rtb_Subtract1 / rtb_rx_g;
    rtb_rx_g = rtb_rx_c / rtb_rx_g;
  } else {
    rtb_thetay_i = 0.0;
    rtb_rx_g = 1.0;
  }

  /* End of Switch: '<S190>/Switch' */

  /* RelationalOperator: '<S187>/Compare' incorporates:
   *  Abs: '<S179>/Abs'
   *  Constant: '<S187>/Constant'
   *  Trigonometry: '<S190>/Atan1'
   */
  rtb_Is_Absolute_Steering = (fabs(rt_atan2d_snf(rtb_thetay_i, rtb_rx_g)) >
    1.5707963267948966);

  /* Switch: '<S179>/Angle_Switch' incorporates:
   *  Trigonometry: '<S189>/Atan1'
   */
  if (rtb_Is_Absolute_Steering) {
    /* Sum: '<S189>/Subtract1' incorporates:
     *  Product: '<S189>/Product2'
     *  Product: '<S189>/Product3'
     */
    rtb_rx_c = (rtb_Elevator_Height_Desired * Code_Gen_Model_ConstB.Sin5) +
      (rtb_Product2_e * Code_Gen_Model_ConstB.Cos5);

    /* Sum: '<S189>/Subtract' incorporates:
     *  Product: '<S189>/Product'
     *  Product: '<S189>/Product1'
     */
    rtb_Product2_e = (rtb_Elevator_Height_Desired * Code_Gen_Model_ConstB.Cos5)
      - (rtb_Product2_e * Code_Gen_Model_ConstB.Sin5);

    /* Math: '<S189>/Hypot' */
    rtb_Elevator_Height_Desired = rt_hypotd_snf(rtb_Product2_e, rtb_rx_c);

    /* Switch: '<S189>/Switch1' incorporates:
     *  Constant: '<S189>/Constant'
     *  Constant: '<S189>/Constant1'
     *  Constant: '<S192>/Constant'
     *  Product: '<S189>/Divide'
     *  Product: '<S189>/Divide1'
     *  RelationalOperator: '<S192>/Compare'
     *  Switch: '<S189>/Switch'
     */
    if (rtb_Elevator_Height_Desired > 1.0E-6) {
      rtb_Product2_e /= rtb_Elevator_Height_Desired;
      rtb_Elevator_Height_Desired = rtb_rx_c / rtb_Elevator_Height_Desired;
    } else {
      rtb_Product2_e = 1.0;
      rtb_Elevator_Height_Desired = 0.0;
    }

    /* End of Switch: '<S189>/Switch1' */
    rtb_thetay_i = rt_atan2d_snf(rtb_Elevator_Height_Desired, rtb_Product2_e);
  } else {
    rtb_thetay_i = Code_Gen_Model_B.FL_Desired_Module_Angle;
  }

  /* Sum: '<S181>/Sum' incorporates:
   *  Sum: '<S180>/Add'
   */
  rtb_FeedForward = rtb_thetay_i - Code_Gen_Model_B.FL_Steer_Module_Angle;

  /* Sum: '<S194>/Add1' incorporates:
   *  Constant: '<S194>/Constant3'
   *  Constant: '<S194>/Constant4'
   *  Math: '<S194>/Math Function'
   *  Sum: '<S181>/Sum'
   *  Sum: '<S194>/Add2'
   */
  rtb_rx_g = rt_modd_snf(rtb_FeedForward + 3.1415926535897931,
    6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S196>/Sum1' incorporates:
   *  Constant: '<S181>/Constant2'
   *  Product: '<S196>/Product'
   *  Sum: '<S196>/Sum'
   *  UnitDelay: '<S196>/Unit Delay1'
   */
  rtb_Elevator_Height_Desired = ((rtb_rx_g -
    Code_Gen_Model_DW.UnitDelay1_DSTATE_b) *
    Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_b;

  /* Product: '<S181>/Product' incorporates:
   *  Constant: '<S181>/Constant3'
   */
  rtb_Product2_e = rtb_Elevator_Height_Desired * Steering_Motor_Control_D;

  /* Sum: '<S195>/Diff' incorporates:
   *  UnitDelay: '<S195>/UD'
   *
   * Block description for '<S195>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S195>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Switch1_pz = rtb_Product2_e - Code_Gen_Model_DW.UD_DSTATE_b;

  /* Saturate: '<S181>/Saturation' */
  if (rtb_Switch1_pz > Steering_Motor_Control_D_UL) {
    rtb_Switch1_pz = Steering_Motor_Control_D_UL;
  } else if (rtb_Switch1_pz < Steering_Motor_Control_D_LL) {
    rtb_Switch1_pz = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S181>/Add' incorporates:
   *  Gain: '<S181>/Gain1'
   *  Saturate: '<S181>/Saturation'
   */
  rtb_Subtract1 = (Steering_Motor_Control_P * rtb_rx_g) + rtb_Switch1_pz;

  /* Sum: '<S181>/Subtract' incorporates:
   *  Constant: '<S181>/Constant'
   */
  rtb_rx_c = 1.0 - rtb_Subtract1;

  /* Sum: '<S181>/Sum2' incorporates:
   *  Gain: '<S181>/Gain2'
   *  UnitDelay: '<S181>/Unit Delay'
   */
  rtb_rx_g = (Steering_Motor_Control_I * rtb_rx_g) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_e;

  /* Switch: '<S197>/Switch2' incorporates:
   *  Constant: '<S181>/Constant'
   *  RelationalOperator: '<S197>/LowerRelop1'
   *  Sum: '<S181>/Subtract'
   */
  if (!(rtb_rx_g > (1.0 - rtb_Subtract1))) {
    /* Sum: '<S181>/Subtract1' incorporates:
     *  Constant: '<S181>/Constant1'
     */
    rtb_rx_c = -1.0 - rtb_Subtract1;

    /* Switch: '<S197>/Switch' incorporates:
     *  Constant: '<S181>/Constant1'
     *  RelationalOperator: '<S197>/UpperRelop'
     *  Sum: '<S181>/Subtract1'
     */
    if (!(rtb_rx_g < (-1.0 - rtb_Subtract1))) {
      rtb_rx_c = rtb_rx_g;
    }

    /* End of Switch: '<S197>/Switch' */
  }

  /* End of Switch: '<S197>/Switch2' */

  /* Saturate: '<S181>/Saturation1' */
  if (rtb_rx_c > Steering_Motor_Control_I_UL) {
    rtb_rx_c = Steering_Motor_Control_I_UL;
  } else if (rtb_rx_c < Steering_Motor_Control_I_LL) {
    rtb_rx_c = Steering_Motor_Control_I_LL;
  }

  /* End of Saturate: '<S181>/Saturation1' */

  /* Sum: '<S181>/Add1' */
  rtb_Switch1_pz = rtb_Subtract1 + rtb_rx_c;

  /* Saturate: '<S181>/Saturation2' */
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

  /* End of Saturate: '<S181>/Saturation2' */

  /* Switch: '<S302>/Switch1' */
  if (rtb_Is_Absolute_Translation_g) {
    /* Switch: '<S302>/Switch1' incorporates:
     *  Constant: '<S302>/Constant'
     */
    Code_Gen_Model_B.FL_Desired_Wheel_Speed_in = 1.0E-15;
  } else {
    /* Switch: '<S302>/Switch1' */
    Code_Gen_Model_B.FL_Desired_Wheel_Speed_in = rtb_rx_nr;
  }

  /* End of Switch: '<S302>/Switch1' */

  /* Sum: '<S299>/Add' incorporates:
   *  Fcn: '<S310>/r->x'
   *  Fcn: '<S310>/theta->y'
   */
  rtb_Akxhatkk1[0] = (Code_Gen_Model_B.Steering_Localized_Cmd * cos
                      (Code_Gen_Model_ConstB.FR_Tangent_Angle)) + rtb_rx_d;
  rtb_Akxhatkk1[1] = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                      (Code_Gen_Model_ConstB.FR_Tangent_Angle)) + rtb_Add_oh;

  /* Fcn: '<S308>/x->r' */
  rtb_rx_g = rt_hypotd_snf(rtb_Akxhatkk1[0], rtb_Akxhatkk1[1]);

  /* RelationalOperator: '<S311>/Compare' incorporates:
   *  Constant: '<S311>/Constant'
   */
  rtb_Is_Absolute_Translation_g = (rtb_rx_g == 0.0);

  /* Switch: '<S307>/Switch1' */
  if (rtb_Is_Absolute_Translation_g) {
    /* Switch: '<S307>/Switch1' incorporates:
     *  Constant: '<S307>/Constant'
     */
    Code_Gen_Model_B.FR_Desired_Wheel_Speed_in = 1.0E-15;
  } else {
    /* Switch: '<S307>/Switch1' */
    Code_Gen_Model_B.FR_Desired_Wheel_Speed_in = rtb_rx_g;
  }

  /* End of Switch: '<S307>/Switch1' */

  /* Sum: '<S300>/Add' incorporates:
   *  Fcn: '<S315>/r->x'
   *  Fcn: '<S315>/theta->y'
   */
  rtb_Minus_n[0] = (Code_Gen_Model_B.Steering_Localized_Cmd * cos
                    (Code_Gen_Model_ConstB.BL_Tangent_Angle)) + rtb_rx_d;
  rtb_Minus_n[1] = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                    (Code_Gen_Model_ConstB.BL_Tangent_Angle)) + rtb_Add_oh;

  /* Fcn: '<S313>/x->r' */
  rtb_thetay_l = rt_hypotd_snf(rtb_Minus_n[0], rtb_Minus_n[1]);

  /* RelationalOperator: '<S316>/Compare' incorporates:
   *  Constant: '<S316>/Constant'
   */
  rtb_FixPtRelationalOperator = (rtb_thetay_l == 0.0);

  /* Switch: '<S312>/Switch1' */
  if (rtb_FixPtRelationalOperator) {
    /* Switch: '<S312>/Switch1' incorporates:
     *  Constant: '<S312>/Constant'
     */
    Code_Gen_Model_B.BL_Desired_Wheel_Speed_in = 1.0E-15;
  } else {
    /* Switch: '<S312>/Switch1' */
    Code_Gen_Model_B.BL_Desired_Wheel_Speed_in = rtb_thetay_l;
  }

  /* End of Switch: '<S312>/Switch1' */

  /* Sum: '<S301>/Add' incorporates:
   *  Fcn: '<S320>/r->x'
   *  Fcn: '<S320>/theta->y'
   */
  rtb_Add2_k_idx_0 = (Code_Gen_Model_B.Steering_Localized_Cmd * cos
                      (Code_Gen_Model_ConstB.BR_Tangent_Angle)) + rtb_rx_d;
  rtb_Add2_k_idx_1 = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                      (Code_Gen_Model_ConstB.BR_Tangent_Angle)) + rtb_Add_oh;

  /* Fcn: '<S318>/x->r' */
  rtb_rx_d = rt_hypotd_snf(rtb_Add2_k_idx_0, rtb_Add2_k_idx_1);

  /* RelationalOperator: '<S321>/Compare' incorporates:
   *  Constant: '<S321>/Constant'
   */
  rtb_FixPtRelationalOperator_ea = (rtb_rx_d == 0.0);

  /* Switch: '<S317>/Switch1' */
  if (rtb_FixPtRelationalOperator_ea) {
    /* Switch: '<S317>/Switch1' incorporates:
     *  Constant: '<S317>/Constant'
     */
    Code_Gen_Model_B.BR_Desired_Wheel_Speed_in = 1.0E-15;
  } else {
    /* Switch: '<S317>/Switch1' */
    Code_Gen_Model_B.BR_Desired_Wheel_Speed_in = rtb_rx_d;
  }

  /* End of Switch: '<S317>/Switch1' */

  /* Product: '<S297>/Divide' incorporates:
   *  Abs: '<S297>/Abs'
   *  Abs: '<S297>/Abs1'
   *  Abs: '<S297>/Abs2'
   *  Abs: '<S297>/Abs3'
   *  Constant: '<S297>/Constant'
   *  MinMax: '<S297>/Max'
   */
  rtb_rx_nr = 5.389313721017964 / fmax(fmax(fmax(fmax(5.389313721017964,
    Code_Gen_Model_B.FL_Desired_Wheel_Speed_in),
    Code_Gen_Model_B.FR_Desired_Wheel_Speed_in),
    Code_Gen_Model_B.BL_Desired_Wheel_Speed_in),
    Code_Gen_Model_B.BR_Desired_Wheel_Speed_in);

  /* Product: '<S297>/Product' */
  Code_Gen_Model_B.FL_Desired_Wheel_Speed =
    Code_Gen_Model_B.FL_Desired_Wheel_Speed_in * rtb_rx_nr;

  /* Switch: '<S179>/Speed_Switch' incorporates:
   *  UnaryMinus: '<S179>/Unary Minus'
   */
  if (rtb_Is_Absolute_Steering) {
    tmp = -Code_Gen_Model_B.FL_Desired_Wheel_Speed;
  } else {
    tmp = Code_Gen_Model_B.FL_Desired_Wheel_Speed;
  }

  /* Product: '<S182>/Product2' incorporates:
   *  Constant: '<S182>/Constant'
   *  Switch: '<S179>/Speed_Switch'
   */
  rtb_rx_d = tmp * 1150.4247703785388;

  /* Signum: '<S177>/Sign' */
  if (rtIsNaN(rtb_rx_d)) {
    tmp = (rtNaN);
  } else if (rtb_rx_d < 0.0) {
    tmp = -1.0;
  } else {
    tmp = (rtb_rx_d > 0.0);
  }

  /* Signum: '<S177>/Sign1' incorporates:
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed)) {
    rtb_Add_du = (rtNaN);
  } else if (Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed < 0.0) {
    rtb_Add_du = -1.0;
  } else {
    rtb_Add_du = (Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed > 0.0);
  }

  /* Product: '<S172>/Product' incorporates:
   *  Abs: '<S177>/Abs'
   *  Abs: '<S180>/Abs'
   *  Constant: '<S183>/Constant'
   *  Constant: '<S193>/Constant3'
   *  Constant: '<S193>/Constant4'
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Speed'
   *  Logic: '<S177>/OR'
   *  Lookup_n-D: '<S180>/1-D Lookup Table'
   *  Math: '<S193>/Math Function'
   *  RelationalOperator: '<S177>/Equal1'
   *  RelationalOperator: '<S183>/Compare'
   *  Signum: '<S177>/Sign'
   *  Signum: '<S177>/Sign1'
   *  Sum: '<S193>/Add1'
   *  Sum: '<S193>/Add2'
   */
  rtb_rx_d = (((real_T)((tmp == rtb_Add_du) || (fabs
    (Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_rx_d) * look1_binlcpw(fabs
    (rt_modd_snf(rtb_FeedForward + 1.5707963267948966, 3.1415926535897931) -
     1.5707963267948966), Code_Gen_Model_ConstP.pooled23,
    Code_Gen_Model_ConstP.pooled22, 1U);

  /* Gain: '<S178>/Gain' */
  rtb_FeedForward = Drive_Motor_Control_FF * rtb_rx_d;

  /* Sum: '<S178>/Sum' incorporates:
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Speed'
   */
  rtb_rx_d -= Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed;

  /* Sum: '<S185>/Sum1' incorporates:
   *  Constant: '<S178>/Constant2'
   *  Product: '<S185>/Product'
   *  Sum: '<S185>/Sum'
   *  UnitDelay: '<S185>/Unit Delay1'
   */
  rtb_rx_g = ((rtb_rx_d - Code_Gen_Model_DW.UnitDelay1_DSTATE_a) *
              Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_a;

  /* Product: '<S178>/Product' incorporates:
   *  Constant: '<S178>/Constant3'
   */
  rtb_Subtract1 = rtb_rx_g * Drive_Motor_Control_D;

  /* Sum: '<S184>/Diff' incorporates:
   *  UnitDelay: '<S184>/UD'
   *
   * Block description for '<S184>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S184>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Switch1_pz = rtb_Subtract1 - Code_Gen_Model_DW.UD_DSTATE_o;

  /* Saturate: '<S178>/Saturation' */
  if (rtb_Switch1_pz > Drive_Motor_Control_D_UL) {
    rtb_Switch1_pz = Drive_Motor_Control_D_UL;
  } else if (rtb_Switch1_pz < Drive_Motor_Control_D_LL) {
    rtb_Switch1_pz = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S178>/Add' incorporates:
   *  Gain: '<S178>/Gain1'
   *  Saturate: '<S178>/Saturation'
   */
  rtb_Add_oh = ((Drive_Motor_Control_P * rtb_rx_d) + rtb_FeedForward) +
    rtb_Switch1_pz;

  /* Sum: '<S178>/Subtract' incorporates:
   *  Constant: '<S178>/Constant'
   */
  rtb_thetay_l = 1.0 - rtb_Add_oh;

  /* Sum: '<S178>/Sum2' incorporates:
   *  Gain: '<S178>/Gain2'
   *  UnitDelay: '<S178>/Unit Delay'
   */
  rtb_FeedForward = (Drive_Motor_Control_I * rtb_rx_d) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_f;

  /* Switch: '<S186>/Switch2' incorporates:
   *  Constant: '<S178>/Constant'
   *  RelationalOperator: '<S186>/LowerRelop1'
   *  Sum: '<S178>/Subtract'
   */
  if (!(rtb_FeedForward > (1.0 - rtb_Add_oh))) {
    /* Switch: '<S186>/Switch' incorporates:
     *  Constant: '<S178>/Constant1'
     *  RelationalOperator: '<S186>/UpperRelop'
     *  Sum: '<S178>/Subtract1'
     */
    if (rtb_FeedForward < (-1.0 - rtb_Add_oh)) {
      rtb_thetay_l = -1.0 - rtb_Add_oh;
    } else {
      rtb_thetay_l = rtb_FeedForward;
    }

    /* End of Switch: '<S186>/Switch' */
  }

  /* End of Switch: '<S186>/Switch2' */

  /* Saturate: '<S178>/Saturation1' */
  if (rtb_thetay_l > Drive_Motor_Control_I_UL) {
    rtb_FeedForward = Drive_Motor_Control_I_UL;
  } else if (rtb_thetay_l < Drive_Motor_Control_I_LL) {
    rtb_FeedForward = Drive_Motor_Control_I_LL;
  } else {
    rtb_FeedForward = rtb_thetay_l;
  }

  /* End of Saturate: '<S178>/Saturation1' */

  /* Sum: '<S178>/Add1' */
  rtb_Switch1_pz = rtb_Add_oh + rtb_FeedForward;

  /* Saturate: '<S178>/Saturation2' */
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

  /* End of Saturate: '<S178>/Saturation2' */

  /* Switch: '<S307>/Switch' */
  if (!rtb_Is_Absolute_Translation_g) {
    /* Switch: '<S307>/Switch' incorporates:
     *  Fcn: '<S308>/x->theta'
     */
    Code_Gen_Model_B.FR_Desired_Module_Angle = rt_atan2d_snf(rtb_Akxhatkk1[1],
      rtb_Akxhatkk1[0]);
  }

  /* End of Switch: '<S307>/Switch' */

  /* Trigonometry: '<S211>/Cos4' incorporates:
   *  Switch: '<S200>/Angle_Switch'
   *  Trigonometry: '<S210>/Cos4'
   */
  rtb_Sum1_h = cos(Code_Gen_Model_B.FR_Desired_Module_Angle);

  /* Sum: '<S169>/Add1' incorporates:
   *  Constant: '<S169>/Constant3'
   *  Constant: '<S169>/Constant4'
   *  Gain: '<S16>/Revolutions to Radians1'
   *  Inport: '<Root>/FrontRight_Steer_Rev'
   *  Inport: '<Root>/FrontRight_Turn_Offset'
   *  Math: '<S169>/Math Function'
   *  Sum: '<S169>/Add2'
   *  Sum: '<S16>/Add1'
   */
  Code_Gen_Model_B.FR_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.FrontRight_Steer_Rev -
       Code_Gen_Model_U.FrontRight_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Trigonometry: '<S211>/Sin5' incorporates:
   *  UnaryMinus: '<S209>/Unary Minus'
   */
  rtb_thetay_i = sin(-Code_Gen_Model_B.FR_Steer_Module_Angle);

  /* Trigonometry: '<S211>/Sin4' incorporates:
   *  Switch: '<S200>/Angle_Switch'
   *  Trigonometry: '<S210>/Sin4'
   */
  rtb_Product_d = sin(Code_Gen_Model_B.FR_Desired_Module_Angle);

  /* Trigonometry: '<S211>/Cos5' incorporates:
   *  UnaryMinus: '<S209>/Unary Minus'
   */
  rtb_thetay_l = cos(-Code_Gen_Model_B.FR_Steer_Module_Angle);

  /* Sum: '<S211>/Subtract1' incorporates:
   *  Product: '<S211>/Product2'
   *  Product: '<S211>/Product3'
   *  Trigonometry: '<S211>/Cos4'
   *  Trigonometry: '<S211>/Sin4'
   */
  rtb_Add_oh = (rtb_Sum1_h * rtb_thetay_i) + (rtb_Product_d * rtb_thetay_l);

  /* Sum: '<S211>/Subtract' incorporates:
   *  Product: '<S211>/Product'
   *  Product: '<S211>/Product1'
   *  Trigonometry: '<S211>/Cos4'
   *  Trigonometry: '<S211>/Sin4'
   */
  rtb_Subtract1_of = (rtb_Sum1_h * rtb_thetay_l) - (rtb_Product_d * rtb_thetay_i);

  /* Math: '<S211>/Hypot' */
  rtb_Hypot_bl = rt_hypotd_snf(rtb_Subtract1_of, rtb_Add_oh);

  /* Switch: '<S211>/Switch' incorporates:
   *  Constant: '<S211>/Constant'
   *  Constant: '<S211>/Constant1'
   *  Constant: '<S212>/Constant'
   *  Product: '<S211>/Divide'
   *  Product: '<S211>/Divide1'
   *  RelationalOperator: '<S212>/Compare'
   *  Switch: '<S211>/Switch1'
   */
  if (rtb_Hypot_bl > 1.0E-6) {
    rtb_rx_d = rtb_Add_oh / rtb_Hypot_bl;
    rtb_thetay_l = rtb_Subtract1_of / rtb_Hypot_bl;
  } else {
    rtb_rx_d = 0.0;
    rtb_thetay_l = 1.0;
  }

  /* End of Switch: '<S211>/Switch' */

  /* RelationalOperator: '<S208>/Compare' incorporates:
   *  Abs: '<S200>/Abs'
   *  Constant: '<S208>/Constant'
   *  Trigonometry: '<S211>/Atan1'
   */
  rtb_Is_Absolute_Steering = (fabs(rt_atan2d_snf(rtb_rx_d, rtb_thetay_l)) >
    1.5707963267948966);

  /* Switch: '<S200>/Angle_Switch' incorporates:
   *  Trigonometry: '<S210>/Atan1'
   */
  if (rtb_Is_Absolute_Steering) {
    /* Sum: '<S210>/Subtract1' incorporates:
     *  Product: '<S210>/Product2'
     *  Product: '<S210>/Product3'
     */
    rtb_Add_oh = (rtb_Sum1_h * Code_Gen_Model_ConstB.Sin5_m) + (rtb_Product_d *
      Code_Gen_Model_ConstB.Cos5_g);

    /* Sum: '<S210>/Subtract' incorporates:
     *  Product: '<S210>/Product'
     *  Product: '<S210>/Product1'
     */
    rtb_Hypot_bl = (rtb_Sum1_h * Code_Gen_Model_ConstB.Cos5_g) - (rtb_Product_d *
      Code_Gen_Model_ConstB.Sin5_m);

    /* Math: '<S210>/Hypot' */
    rtb_Subtract1_of = rt_hypotd_snf(rtb_Hypot_bl, rtb_Add_oh);

    /* Switch: '<S210>/Switch1' incorporates:
     *  Constant: '<S210>/Constant'
     *  Constant: '<S210>/Constant1'
     *  Constant: '<S213>/Constant'
     *  Product: '<S210>/Divide'
     *  Product: '<S210>/Divide1'
     *  RelationalOperator: '<S213>/Compare'
     *  Switch: '<S210>/Switch'
     */
    if (rtb_Subtract1_of > 1.0E-6) {
      rtb_Hypot_bl /= rtb_Subtract1_of;
      rtb_Add_oh /= rtb_Subtract1_of;
    } else {
      rtb_Hypot_bl = 1.0;
      rtb_Add_oh = 0.0;
    }

    /* End of Switch: '<S210>/Switch1' */
    rtb_rx_d = rt_atan2d_snf(rtb_Add_oh, rtb_Hypot_bl);
  } else {
    rtb_rx_d = Code_Gen_Model_B.FR_Desired_Module_Angle;
  }

  /* Sum: '<S202>/Sum' incorporates:
   *  Sum: '<S201>/Add'
   */
  rtb_rx_d -= Code_Gen_Model_B.FR_Steer_Module_Angle;

  /* Sum: '<S215>/Add1' incorporates:
   *  Constant: '<S215>/Constant3'
   *  Constant: '<S215>/Constant4'
   *  Math: '<S215>/Math Function'
   *  Sum: '<S202>/Sum'
   *  Sum: '<S215>/Add2'
   */
  rtb_thetay_l = rt_modd_snf(rtb_rx_d + 3.1415926535897931, 6.2831853071795862)
    - 3.1415926535897931;

  /* Sum: '<S217>/Sum1' incorporates:
   *  Constant: '<S202>/Constant2'
   *  Product: '<S217>/Product'
   *  Sum: '<S217>/Sum'
   *  UnitDelay: '<S217>/Unit Delay1'
   */
  rtb_Add_oh = ((rtb_thetay_l - Code_Gen_Model_DW.UnitDelay1_DSTATE_n) *
                Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_n;

  /* Product: '<S202>/Product' incorporates:
   *  Constant: '<S202>/Constant3'
   */
  rtb_Subtract1_of = rtb_Add_oh * Steering_Motor_Control_D;

  /* Sum: '<S216>/Diff' incorporates:
   *  UnitDelay: '<S216>/UD'
   *
   * Block description for '<S216>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S216>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Switch1_pz = rtb_Subtract1_of - Code_Gen_Model_DW.UD_DSTATE_i;

  /* Saturate: '<S202>/Saturation' */
  if (rtb_Switch1_pz > Steering_Motor_Control_D_UL) {
    rtb_Switch1_pz = Steering_Motor_Control_D_UL;
  } else if (rtb_Switch1_pz < Steering_Motor_Control_D_LL) {
    rtb_Switch1_pz = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S202>/Add' incorporates:
   *  Gain: '<S202>/Gain1'
   *  Saturate: '<S202>/Saturation'
   */
  rtb_Add_i = (Steering_Motor_Control_P * rtb_thetay_l) + rtb_Switch1_pz;

  /* Sum: '<S202>/Subtract' incorporates:
   *  Constant: '<S202>/Constant'
   */
  rtb_thetay_i = 1.0 - rtb_Add_i;

  /* Sum: '<S202>/Sum2' incorporates:
   *  Gain: '<S202>/Gain2'
   *  UnitDelay: '<S202>/Unit Delay'
   */
  rtb_Hypot_bl = (Steering_Motor_Control_I * rtb_thetay_l) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_dt;

  /* Switch: '<S218>/Switch2' incorporates:
   *  Constant: '<S202>/Constant'
   *  RelationalOperator: '<S218>/LowerRelop1'
   *  Sum: '<S202>/Subtract'
   */
  if (!(rtb_Hypot_bl > (1.0 - rtb_Add_i))) {
    /* Switch: '<S218>/Switch' incorporates:
     *  Constant: '<S202>/Constant1'
     *  RelationalOperator: '<S218>/UpperRelop'
     *  Sum: '<S202>/Subtract1'
     */
    if (rtb_Hypot_bl < (-1.0 - rtb_Add_i)) {
      rtb_thetay_i = -1.0 - rtb_Add_i;
    } else {
      rtb_thetay_i = rtb_Hypot_bl;
    }

    /* End of Switch: '<S218>/Switch' */
  }

  /* End of Switch: '<S218>/Switch2' */

  /* Saturate: '<S202>/Saturation1' */
  if (rtb_thetay_i > Steering_Motor_Control_I_UL) {
    rtb_Hypot_bl = Steering_Motor_Control_I_UL;
  } else if (rtb_thetay_i < Steering_Motor_Control_I_LL) {
    rtb_Hypot_bl = Steering_Motor_Control_I_LL;
  } else {
    rtb_Hypot_bl = rtb_thetay_i;
  }

  /* End of Saturate: '<S202>/Saturation1' */

  /* Sum: '<S202>/Add1' */
  rtb_Switch1_pz = rtb_Add_i + rtb_Hypot_bl;

  /* Saturate: '<S202>/Saturation2' */
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

  /* End of Saturate: '<S202>/Saturation2' */

  /* Product: '<S297>/Product1' */
  Code_Gen_Model_B.FR_Desired_Wheel_Speed =
    Code_Gen_Model_B.FR_Desired_Wheel_Speed_in * rtb_rx_nr;

  /* Switch: '<S200>/Speed_Switch' incorporates:
   *  UnaryMinus: '<S200>/Unary Minus'
   */
  if (rtb_Is_Absolute_Steering) {
    tmp = -Code_Gen_Model_B.FR_Desired_Wheel_Speed;
  } else {
    tmp = Code_Gen_Model_B.FR_Desired_Wheel_Speed;
  }

  /* Product: '<S203>/Product2' incorporates:
   *  Constant: '<S203>/Constant'
   *  Switch: '<S200>/Speed_Switch'
   */
  rtb_thetay_l = tmp * 1150.4247703785388;

  /* Signum: '<S198>/Sign' */
  if (rtIsNaN(rtb_thetay_l)) {
    tmp = (rtNaN);
  } else if (rtb_thetay_l < 0.0) {
    tmp = -1.0;
  } else {
    tmp = (rtb_thetay_l > 0.0);
  }

  /* Signum: '<S198>/Sign1' incorporates:
   *  Inport: '<Root>/FrontRight_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.FrontRight_Drive_Motor_Speed)) {
    rtb_Add_du = (rtNaN);
  } else if (Code_Gen_Model_U.FrontRight_Drive_Motor_Speed < 0.0) {
    rtb_Add_du = -1.0;
  } else {
    rtb_Add_du = (Code_Gen_Model_U.FrontRight_Drive_Motor_Speed > 0.0);
  }

  /* Product: '<S173>/Product' incorporates:
   *  Abs: '<S198>/Abs'
   *  Abs: '<S201>/Abs'
   *  Constant: '<S204>/Constant'
   *  Constant: '<S214>/Constant3'
   *  Constant: '<S214>/Constant4'
   *  Inport: '<Root>/FrontRight_Drive_Motor_Speed'
   *  Logic: '<S198>/OR'
   *  Lookup_n-D: '<S201>/1-D Lookup Table'
   *  Math: '<S214>/Math Function'
   *  RelationalOperator: '<S198>/Equal1'
   *  RelationalOperator: '<S204>/Compare'
   *  Signum: '<S198>/Sign'
   *  Signum: '<S198>/Sign1'
   *  Sum: '<S214>/Add1'
   *  Sum: '<S214>/Add2'
   */
  rtb_thetay_l = (((real_T)((tmp == rtb_Add_du) || (fabs
    (Code_Gen_Model_U.FrontRight_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_thetay_l) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_rx_d + 1.5707963267948966, 3.1415926535897931) -
          1.5707963267948966), Code_Gen_Model_ConstP.pooled23,
     Code_Gen_Model_ConstP.pooled22, 1U);

  /* Gain: '<S199>/Gain' */
  rtb_FeedForward_n = Drive_Motor_Control_FF * rtb_thetay_l;

  /* Sum: '<S199>/Sum' incorporates:
   *  Inport: '<Root>/FrontRight_Drive_Motor_Speed'
   */
  rtb_thetay_l -= Code_Gen_Model_U.FrontRight_Drive_Motor_Speed;

  /* Sum: '<S206>/Sum1' incorporates:
   *  Constant: '<S199>/Constant2'
   *  Product: '<S206>/Product'
   *  Sum: '<S206>/Sum'
   *  UnitDelay: '<S206>/Unit Delay1'
   */
  rtb_Add_i = ((rtb_thetay_l - Code_Gen_Model_DW.UnitDelay1_DSTATE_b1) *
               Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_b1;

  /* Product: '<S199>/Product' incorporates:
   *  Constant: '<S199>/Constant3'
   */
  rtb_Subtract1_a = rtb_Add_i * Drive_Motor_Control_D;

  /* Sum: '<S205>/Diff' incorporates:
   *  UnitDelay: '<S205>/UD'
   *
   * Block description for '<S205>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S205>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Switch1_pz = rtb_Subtract1_a - Code_Gen_Model_DW.UD_DSTATE_e;

  /* Saturate: '<S199>/Saturation' */
  if (rtb_Switch1_pz > Drive_Motor_Control_D_UL) {
    rtb_Switch1_pz = Drive_Motor_Control_D_UL;
  } else if (rtb_Switch1_pz < Drive_Motor_Control_D_LL) {
    rtb_Switch1_pz = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S199>/Add' incorporates:
   *  Gain: '<S199>/Gain1'
   *  Saturate: '<S199>/Saturation'
   */
  rtb_Add_o2 = ((Drive_Motor_Control_P * rtb_thetay_l) + rtb_FeedForward_n) +
    rtb_Switch1_pz;

  /* Sum: '<S199>/Subtract' incorporates:
   *  Constant: '<S199>/Constant'
   */
  rtb_rx_d = 1.0 - rtb_Add_o2;

  /* Sum: '<S199>/Sum2' incorporates:
   *  Gain: '<S199>/Gain2'
   *  UnitDelay: '<S199>/Unit Delay'
   */
  rtb_FeedForward_n = (Drive_Motor_Control_I * rtb_thetay_l) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_em;

  /* Switch: '<S207>/Switch2' incorporates:
   *  Constant: '<S199>/Constant'
   *  RelationalOperator: '<S207>/LowerRelop1'
   *  Sum: '<S199>/Subtract'
   */
  if (!(rtb_FeedForward_n > (1.0 - rtb_Add_o2))) {
    /* Switch: '<S207>/Switch' incorporates:
     *  Constant: '<S199>/Constant1'
     *  RelationalOperator: '<S207>/UpperRelop'
     *  Sum: '<S199>/Subtract1'
     */
    if (rtb_FeedForward_n < (-1.0 - rtb_Add_o2)) {
      rtb_rx_d = -1.0 - rtb_Add_o2;
    } else {
      rtb_rx_d = rtb_FeedForward_n;
    }

    /* End of Switch: '<S207>/Switch' */
  }

  /* End of Switch: '<S207>/Switch2' */

  /* Saturate: '<S199>/Saturation1' */
  if (rtb_rx_d > Drive_Motor_Control_I_UL) {
    rtb_FeedForward_n = Drive_Motor_Control_I_UL;
  } else if (rtb_rx_d < Drive_Motor_Control_I_LL) {
    rtb_FeedForward_n = Drive_Motor_Control_I_LL;
  } else {
    rtb_FeedForward_n = rtb_rx_d;
  }

  /* End of Saturate: '<S199>/Saturation1' */

  /* Sum: '<S199>/Add1' */
  rtb_Switch1_pz = rtb_Add_o2 + rtb_FeedForward_n;

  /* Saturate: '<S199>/Saturation2' */
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

  /* End of Saturate: '<S199>/Saturation2' */

  /* Switch: '<S312>/Switch' */
  if (!rtb_FixPtRelationalOperator) {
    /* Switch: '<S312>/Switch' incorporates:
     *  Fcn: '<S313>/x->theta'
     */
    Code_Gen_Model_B.BL_Desired_Module_Angle = rt_atan2d_snf(rtb_Minus_n[1],
      rtb_Minus_n[0]);
  }

  /* End of Switch: '<S312>/Switch' */

  /* Trigonometry: '<S232>/Cos4' incorporates:
   *  Switch: '<S221>/Angle_Switch'
   *  Trigonometry: '<S231>/Cos4'
   */
  rtb_Sum1_h = cos(Code_Gen_Model_B.BL_Desired_Module_Angle);

  /* Sum: '<S170>/Add1' incorporates:
   *  Constant: '<S170>/Constant3'
   *  Constant: '<S170>/Constant4'
   *  Gain: '<S16>/Revolutions to Radians2'
   *  Inport: '<Root>/BackLeft_Steer_Rev'
   *  Inport: '<Root>/BackLeft_Turn_Offset'
   *  Math: '<S170>/Math Function'
   *  Sum: '<S16>/Add2'
   *  Sum: '<S170>/Add2'
   */
  Code_Gen_Model_B.BL_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.BackLeft_Steer_Rev -
       Code_Gen_Model_U.BackLeft_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Trigonometry: '<S232>/Sin5' incorporates:
   *  UnaryMinus: '<S230>/Unary Minus'
   */
  rtb_thetay_i = sin(-Code_Gen_Model_B.BL_Steer_Module_Angle);

  /* Trigonometry: '<S232>/Sin4' incorporates:
   *  Switch: '<S221>/Angle_Switch'
   *  Trigonometry: '<S231>/Sin4'
   */
  rtb_Product_d = sin(Code_Gen_Model_B.BL_Desired_Module_Angle);

  /* Trigonometry: '<S232>/Cos5' incorporates:
   *  UnaryMinus: '<S230>/Unary Minus'
   */
  rtb_thetay_l = cos(-Code_Gen_Model_B.BL_Steer_Module_Angle);

  /* Sum: '<S232>/Subtract1' incorporates:
   *  Product: '<S232>/Product2'
   *  Product: '<S232>/Product3'
   *  Trigonometry: '<S232>/Cos4'
   *  Trigonometry: '<S232>/Sin4'
   */
  rtb_Add_o2 = (rtb_Sum1_h * rtb_thetay_i) + (rtb_Product_d * rtb_thetay_l);

  /* Sum: '<S232>/Subtract' incorporates:
   *  Product: '<S232>/Product'
   *  Product: '<S232>/Product1'
   *  Trigonometry: '<S232>/Cos4'
   *  Trigonometry: '<S232>/Sin4'
   */
  rtb_Subtract1_do = (rtb_Sum1_h * rtb_thetay_l) - (rtb_Product_d * rtb_thetay_i);

  /* Math: '<S232>/Hypot' */
  rtb_Hypot_d = rt_hypotd_snf(rtb_Subtract1_do, rtb_Add_o2);

  /* Switch: '<S232>/Switch' incorporates:
   *  Constant: '<S232>/Constant'
   *  Constant: '<S232>/Constant1'
   *  Constant: '<S233>/Constant'
   *  Product: '<S232>/Divide'
   *  Product: '<S232>/Divide1'
   *  RelationalOperator: '<S233>/Compare'
   *  Switch: '<S232>/Switch1'
   */
  if (rtb_Hypot_d > 1.0E-6) {
    rtb_rx_d = rtb_Add_o2 / rtb_Hypot_d;
    rtb_thetay_l = rtb_Subtract1_do / rtb_Hypot_d;
  } else {
    rtb_rx_d = 0.0;
    rtb_thetay_l = 1.0;
  }

  /* End of Switch: '<S232>/Switch' */

  /* RelationalOperator: '<S229>/Compare' incorporates:
   *  Abs: '<S221>/Abs'
   *  Constant: '<S229>/Constant'
   *  Trigonometry: '<S232>/Atan1'
   */
  rtb_FixPtRelationalOperator = (fabs(rt_atan2d_snf(rtb_rx_d, rtb_thetay_l)) >
    1.5707963267948966);

  /* Switch: '<S221>/Angle_Switch' incorporates:
   *  Trigonometry: '<S231>/Atan1'
   */
  if (rtb_FixPtRelationalOperator) {
    /* Sum: '<S231>/Subtract1' incorporates:
     *  Product: '<S231>/Product2'
     *  Product: '<S231>/Product3'
     */
    rtb_Add_o2 = (rtb_Sum1_h * Code_Gen_Model_ConstB.Sin5_e) + (rtb_Product_d *
      Code_Gen_Model_ConstB.Cos5_i);

    /* Sum: '<S231>/Subtract' incorporates:
     *  Product: '<S231>/Product'
     *  Product: '<S231>/Product1'
     */
    rtb_Hypot_d = (rtb_Sum1_h * Code_Gen_Model_ConstB.Cos5_i) - (rtb_Product_d *
      Code_Gen_Model_ConstB.Sin5_e);

    /* Math: '<S231>/Hypot' */
    rtb_Subtract1_do = rt_hypotd_snf(rtb_Hypot_d, rtb_Add_o2);

    /* Switch: '<S231>/Switch1' incorporates:
     *  Constant: '<S231>/Constant'
     *  Constant: '<S231>/Constant1'
     *  Constant: '<S234>/Constant'
     *  Product: '<S231>/Divide'
     *  Product: '<S231>/Divide1'
     *  RelationalOperator: '<S234>/Compare'
     *  Switch: '<S231>/Switch'
     */
    if (rtb_Subtract1_do > 1.0E-6) {
      rtb_Hypot_d /= rtb_Subtract1_do;
      rtb_Add_o2 /= rtb_Subtract1_do;
    } else {
      rtb_Hypot_d = 1.0;
      rtb_Add_o2 = 0.0;
    }

    /* End of Switch: '<S231>/Switch1' */
    rtb_rx_d = rt_atan2d_snf(rtb_Add_o2, rtb_Hypot_d);
  } else {
    rtb_rx_d = Code_Gen_Model_B.BL_Desired_Module_Angle;
  }

  /* Sum: '<S223>/Sum' incorporates:
   *  Sum: '<S222>/Add'
   */
  rtb_rx_d -= Code_Gen_Model_B.BL_Steer_Module_Angle;

  /* Sum: '<S236>/Add1' incorporates:
   *  Constant: '<S236>/Constant3'
   *  Constant: '<S236>/Constant4'
   *  Math: '<S236>/Math Function'
   *  Sum: '<S223>/Sum'
   *  Sum: '<S236>/Add2'
   */
  rtb_thetay_l = rt_modd_snf(rtb_rx_d + 3.1415926535897931, 6.2831853071795862)
    - 3.1415926535897931;

  /* Sum: '<S238>/Sum1' incorporates:
   *  Constant: '<S223>/Constant2'
   *  Product: '<S238>/Product'
   *  Sum: '<S238>/Sum'
   *  UnitDelay: '<S238>/Unit Delay1'
   */
  rtb_Add_o2 = ((rtb_thetay_l - Code_Gen_Model_DW.UnitDelay1_DSTATE_nw) *
                Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_nw;

  /* Product: '<S223>/Product' incorporates:
   *  Constant: '<S223>/Constant3'
   */
  rtb_Subtract1_do = rtb_Add_o2 * Steering_Motor_Control_D;

  /* Sum: '<S237>/Diff' incorporates:
   *  UnitDelay: '<S237>/UD'
   *
   * Block description for '<S237>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S237>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Switch1_pz = rtb_Subtract1_do - Code_Gen_Model_DW.UD_DSTATE_k;

  /* Saturate: '<S223>/Saturation' */
  if (rtb_Switch1_pz > Steering_Motor_Control_D_UL) {
    rtb_Switch1_pz = Steering_Motor_Control_D_UL;
  } else if (rtb_Switch1_pz < Steering_Motor_Control_D_LL) {
    rtb_Switch1_pz = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S223>/Add' incorporates:
   *  Gain: '<S223>/Gain1'
   *  Saturate: '<S223>/Saturation'
   */
  rtb_Add_gj = (Steering_Motor_Control_P * rtb_thetay_l) + rtb_Switch1_pz;

  /* Sum: '<S223>/Subtract' incorporates:
   *  Constant: '<S223>/Constant'
   */
  rtb_thetay_i = 1.0 - rtb_Add_gj;

  /* Sum: '<S223>/Sum2' incorporates:
   *  Gain: '<S223>/Gain2'
   *  UnitDelay: '<S223>/Unit Delay'
   */
  rtb_Hypot_d = (Steering_Motor_Control_I * rtb_thetay_l) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_k;

  /* Switch: '<S239>/Switch2' incorporates:
   *  Constant: '<S223>/Constant'
   *  RelationalOperator: '<S239>/LowerRelop1'
   *  Sum: '<S223>/Subtract'
   */
  if (!(rtb_Hypot_d > (1.0 - rtb_Add_gj))) {
    /* Switch: '<S239>/Switch' incorporates:
     *  Constant: '<S223>/Constant1'
     *  RelationalOperator: '<S239>/UpperRelop'
     *  Sum: '<S223>/Subtract1'
     */
    if (rtb_Hypot_d < (-1.0 - rtb_Add_gj)) {
      rtb_thetay_i = -1.0 - rtb_Add_gj;
    } else {
      rtb_thetay_i = rtb_Hypot_d;
    }

    /* End of Switch: '<S239>/Switch' */
  }

  /* End of Switch: '<S239>/Switch2' */

  /* Saturate: '<S223>/Saturation1' */
  if (rtb_thetay_i > Steering_Motor_Control_I_UL) {
    rtb_Hypot_d = Steering_Motor_Control_I_UL;
  } else if (rtb_thetay_i < Steering_Motor_Control_I_LL) {
    rtb_Hypot_d = Steering_Motor_Control_I_LL;
  } else {
    rtb_Hypot_d = rtb_thetay_i;
  }

  /* End of Saturate: '<S223>/Saturation1' */

  /* Sum: '<S223>/Add1' */
  rtb_Switch1_pz = rtb_Add_gj + rtb_Hypot_d;

  /* Saturate: '<S223>/Saturation2' */
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

  /* End of Saturate: '<S223>/Saturation2' */

  /* Product: '<S297>/Product2' */
  Code_Gen_Model_B.BL_Desired_Wheel_Speed =
    Code_Gen_Model_B.BL_Desired_Wheel_Speed_in * rtb_rx_nr;

  /* Switch: '<S221>/Speed_Switch' incorporates:
   *  UnaryMinus: '<S221>/Unary Minus'
   */
  if (rtb_FixPtRelationalOperator) {
    tmp = -Code_Gen_Model_B.BL_Desired_Wheel_Speed;
  } else {
    tmp = Code_Gen_Model_B.BL_Desired_Wheel_Speed;
  }

  /* Product: '<S224>/Product2' incorporates:
   *  Constant: '<S224>/Constant'
   *  Switch: '<S221>/Speed_Switch'
   */
  rtb_thetay_l = tmp * 1150.4247703785388;

  /* Signum: '<S219>/Sign' */
  if (rtIsNaN(rtb_thetay_l)) {
    tmp = (rtNaN);
  } else if (rtb_thetay_l < 0.0) {
    tmp = -1.0;
  } else {
    tmp = (rtb_thetay_l > 0.0);
  }

  /* Signum: '<S219>/Sign1' incorporates:
   *  Inport: '<Root>/BackLeft_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.BackLeft_Drive_Motor_Speed)) {
    rtb_Add_du = (rtNaN);
  } else if (Code_Gen_Model_U.BackLeft_Drive_Motor_Speed < 0.0) {
    rtb_Add_du = -1.0;
  } else {
    rtb_Add_du = (Code_Gen_Model_U.BackLeft_Drive_Motor_Speed > 0.0);
  }

  /* Product: '<S174>/Product' incorporates:
   *  Abs: '<S219>/Abs'
   *  Abs: '<S222>/Abs'
   *  Constant: '<S225>/Constant'
   *  Constant: '<S235>/Constant3'
   *  Constant: '<S235>/Constant4'
   *  Inport: '<Root>/BackLeft_Drive_Motor_Speed'
   *  Logic: '<S219>/OR'
   *  Lookup_n-D: '<S222>/1-D Lookup Table'
   *  Math: '<S235>/Math Function'
   *  RelationalOperator: '<S219>/Equal1'
   *  RelationalOperator: '<S225>/Compare'
   *  Signum: '<S219>/Sign'
   *  Signum: '<S219>/Sign1'
   *  Sum: '<S235>/Add1'
   *  Sum: '<S235>/Add2'
   */
  rtb_thetay_l = (((real_T)((tmp == rtb_Add_du) || (fabs
    (Code_Gen_Model_U.BackLeft_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_thetay_l) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_rx_d + 1.5707963267948966, 3.1415926535897931) -
          1.5707963267948966), Code_Gen_Model_ConstP.pooled23,
     Code_Gen_Model_ConstP.pooled22, 1U);

  /* Gain: '<S220>/Gain' */
  rtb_FeedForward_a = Drive_Motor_Control_FF * rtb_thetay_l;

  /* Sum: '<S220>/Sum' incorporates:
   *  Inport: '<Root>/BackLeft_Drive_Motor_Speed'
   */
  rtb_thetay_l -= Code_Gen_Model_U.BackLeft_Drive_Motor_Speed;

  /* Sum: '<S227>/Sum1' incorporates:
   *  Constant: '<S220>/Constant2'
   *  Product: '<S227>/Product'
   *  Sum: '<S227>/Sum'
   *  UnitDelay: '<S227>/Unit Delay1'
   */
  rtb_Add_gj = ((rtb_thetay_l - Code_Gen_Model_DW.UnitDelay1_DSTATE_f) *
                Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_f;

  /* Product: '<S220>/Product' incorporates:
   *  Constant: '<S220>/Constant3'
   */
  rtb_Subtract1_f = rtb_Add_gj * Drive_Motor_Control_D;

  /* Sum: '<S226>/Diff' incorporates:
   *  UnitDelay: '<S226>/UD'
   *
   * Block description for '<S226>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S226>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Switch1_pz = rtb_Subtract1_f - Code_Gen_Model_DW.UD_DSTATE_l;

  /* Saturate: '<S220>/Saturation' */
  if (rtb_Switch1_pz > Drive_Motor_Control_D_UL) {
    rtb_Switch1_pz = Drive_Motor_Control_D_UL;
  } else if (rtb_Switch1_pz < Drive_Motor_Control_D_LL) {
    rtb_Switch1_pz = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S220>/Add' incorporates:
   *  Gain: '<S220>/Gain1'
   *  Saturate: '<S220>/Saturation'
   */
  rtb_thetay_i = ((Drive_Motor_Control_P * rtb_thetay_l) + rtb_FeedForward_a) +
    rtb_Switch1_pz;

  /* Sum: '<S220>/Subtract' incorporates:
   *  Constant: '<S220>/Constant'
   */
  rtb_rx_d = 1.0 - rtb_thetay_i;

  /* Sum: '<S220>/Sum2' incorporates:
   *  Gain: '<S220>/Gain2'
   *  UnitDelay: '<S220>/Unit Delay'
   */
  rtb_FeedForward_a = (Drive_Motor_Control_I * rtb_thetay_l) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_gp;

  /* Switch: '<S228>/Switch2' incorporates:
   *  Constant: '<S220>/Constant'
   *  RelationalOperator: '<S228>/LowerRelop1'
   *  Sum: '<S220>/Subtract'
   */
  if (!(rtb_FeedForward_a > (1.0 - rtb_thetay_i))) {
    /* Sum: '<S220>/Subtract1' incorporates:
     *  Constant: '<S220>/Constant1'
     */
    rtb_rx_d = -1.0 - rtb_thetay_i;

    /* Switch: '<S228>/Switch' incorporates:
     *  Constant: '<S220>/Constant1'
     *  RelationalOperator: '<S228>/UpperRelop'
     *  Sum: '<S220>/Subtract1'
     */
    if (!(rtb_FeedForward_a < (-1.0 - rtb_thetay_i))) {
      rtb_rx_d = rtb_FeedForward_a;
    }

    /* End of Switch: '<S228>/Switch' */
  }

  /* End of Switch: '<S228>/Switch2' */

  /* Saturate: '<S220>/Saturation1' */
  if (rtb_rx_d > Drive_Motor_Control_I_UL) {
    rtb_FeedForward_a = Drive_Motor_Control_I_UL;
  } else if (rtb_rx_d < Drive_Motor_Control_I_LL) {
    rtb_FeedForward_a = Drive_Motor_Control_I_LL;
  } else {
    rtb_FeedForward_a = rtb_rx_d;
  }

  /* End of Saturate: '<S220>/Saturation1' */

  /* Sum: '<S220>/Add1' */
  rtb_Switch1_pz = rtb_thetay_i + rtb_FeedForward_a;

  /* Saturate: '<S220>/Saturation2' */
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

  /* End of Saturate: '<S220>/Saturation2' */

  /* Switch: '<S317>/Switch' */
  if (!rtb_FixPtRelationalOperator_ea) {
    /* Switch: '<S317>/Switch' incorporates:
     *  Fcn: '<S318>/x->theta'
     */
    Code_Gen_Model_B.BR_Desired_Module_Angle = rt_atan2d_snf(rtb_Add2_k_idx_1,
      rtb_Add2_k_idx_0);
  }

  /* End of Switch: '<S317>/Switch' */

  /* Trigonometry: '<S253>/Cos4' incorporates:
   *  Switch: '<S242>/Angle_Switch'
   *  Trigonometry: '<S252>/Cos4'
   */
  rtb_Sum1_h = cos(Code_Gen_Model_B.BR_Desired_Module_Angle);

  /* Sum: '<S171>/Add1' incorporates:
   *  Constant: '<S171>/Constant3'
   *  Constant: '<S171>/Constant4'
   *  Gain: '<S16>/Revolutions to Radians3'
   *  Inport: '<Root>/BackRight_Steer_Rev'
   *  Inport: '<Root>/BackRight_Turn_Offset'
   *  Math: '<S171>/Math Function'
   *  Sum: '<S16>/Add3'
   *  Sum: '<S171>/Add2'
   */
  Code_Gen_Model_B.BR_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.BackRight_Steer_Rev -
       Code_Gen_Model_U.BackRight_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Trigonometry: '<S253>/Sin5' incorporates:
   *  UnaryMinus: '<S251>/Unary Minus'
   */
  rtb_thetay_i = sin(-Code_Gen_Model_B.BR_Steer_Module_Angle);

  /* Trigonometry: '<S253>/Sin4' incorporates:
   *  Switch: '<S242>/Angle_Switch'
   *  Trigonometry: '<S252>/Sin4'
   */
  rtb_Product_d = sin(Code_Gen_Model_B.BR_Desired_Module_Angle);

  /* Trigonometry: '<S253>/Cos5' incorporates:
   *  UnaryMinus: '<S251>/Unary Minus'
   */
  rtb_thetay_l = cos(-Code_Gen_Model_B.BR_Steer_Module_Angle);

  /* Sum: '<S253>/Subtract1' incorporates:
   *  Product: '<S253>/Product2'
   *  Product: '<S253>/Product3'
   *  Trigonometry: '<S253>/Cos4'
   *  Trigonometry: '<S253>/Sin4'
   */
  rtb_rx_d = (rtb_Sum1_h * rtb_thetay_i) + (rtb_Product_d * rtb_thetay_l);

  /* Sum: '<S253>/Subtract' incorporates:
   *  Product: '<S253>/Product'
   *  Product: '<S253>/Product1'
   *  Trigonometry: '<S253>/Cos4'
   *  Trigonometry: '<S253>/Sin4'
   */
  rtb_thetay_i = (rtb_Sum1_h * rtb_thetay_l) - (rtb_Product_d * rtb_thetay_i);

  /* Math: '<S253>/Hypot' */
  rtb_thetay_l = rt_hypotd_snf(rtb_thetay_i, rtb_rx_d);

  /* Switch: '<S253>/Switch' incorporates:
   *  Constant: '<S253>/Constant'
   *  Constant: '<S253>/Constant1'
   *  Constant: '<S254>/Constant'
   *  Product: '<S253>/Divide'
   *  Product: '<S253>/Divide1'
   *  RelationalOperator: '<S254>/Compare'
   *  Switch: '<S253>/Switch1'
   */
  if (rtb_thetay_l > 1.0E-6) {
    rtb_rx_d /= rtb_thetay_l;
    rtb_thetay_l = rtb_thetay_i / rtb_thetay_l;
  } else {
    rtb_rx_d = 0.0;
    rtb_thetay_l = 1.0;
  }

  /* End of Switch: '<S253>/Switch' */

  /* RelationalOperator: '<S250>/Compare' incorporates:
   *  Abs: '<S242>/Abs'
   *  Constant: '<S250>/Constant'
   *  Trigonometry: '<S253>/Atan1'
   */
  rtb_FixPtRelationalOperator_ea = (fabs(rt_atan2d_snf(rtb_rx_d, rtb_thetay_l)) >
    1.5707963267948966);

  /* Switch: '<S242>/Angle_Switch' incorporates:
   *  Trigonometry: '<S252>/Atan1'
   */
  if (rtb_FixPtRelationalOperator_ea) {
    /* Sum: '<S252>/Subtract1' incorporates:
     *  Product: '<S252>/Product2'
     *  Product: '<S252>/Product3'
     */
    rtb_thetay_i = (rtb_Sum1_h * Code_Gen_Model_ConstB.Sin5_c) + (rtb_Product_d *
      Code_Gen_Model_ConstB.Cos5_b);

    /* Sum: '<S252>/Subtract' incorporates:
     *  Product: '<S252>/Product'
     *  Product: '<S252>/Product1'
     */
    rtb_thetay_l = (rtb_Sum1_h * Code_Gen_Model_ConstB.Cos5_b) - (rtb_Product_d *
      Code_Gen_Model_ConstB.Sin5_c);

    /* Math: '<S252>/Hypot' */
    rtb_rx_d = rt_hypotd_snf(rtb_thetay_l, rtb_thetay_i);

    /* Switch: '<S252>/Switch1' incorporates:
     *  Constant: '<S252>/Constant'
     *  Constant: '<S252>/Constant1'
     *  Constant: '<S255>/Constant'
     *  Product: '<S252>/Divide'
     *  Product: '<S252>/Divide1'
     *  RelationalOperator: '<S255>/Compare'
     *  Switch: '<S252>/Switch'
     */
    if (rtb_rx_d > 1.0E-6) {
      rtb_thetay_l /= rtb_rx_d;
      rtb_thetay_i /= rtb_rx_d;
    } else {
      rtb_thetay_l = 1.0;
      rtb_thetay_i = 0.0;
    }

    /* End of Switch: '<S252>/Switch1' */
    rtb_rx_d = rt_atan2d_snf(rtb_thetay_i, rtb_thetay_l);
  } else {
    rtb_rx_d = Code_Gen_Model_B.BR_Desired_Module_Angle;
  }

  /* Sum: '<S244>/Sum' incorporates:
   *  Sum: '<S243>/Add'
   */
  rtb_rx_d -= Code_Gen_Model_B.BR_Steer_Module_Angle;

  /* Sum: '<S257>/Add1' incorporates:
   *  Constant: '<S257>/Constant3'
   *  Constant: '<S257>/Constant4'
   *  Math: '<S257>/Math Function'
   *  Sum: '<S244>/Sum'
   *  Sum: '<S257>/Add2'
   */
  rtb_thetay_l = rt_modd_snf(rtb_rx_d + 3.1415926535897931, 6.2831853071795862)
    - 3.1415926535897931;

  /* Sum: '<S259>/Sum1' incorporates:
   *  Constant: '<S244>/Constant2'
   *  Product: '<S259>/Product'
   *  Sum: '<S259>/Sum'
   *  UnitDelay: '<S259>/Unit Delay1'
   */
  rtb_Sum1_h = ((rtb_thetay_l - Code_Gen_Model_DW.UnitDelay1_DSTATE_iw) *
                Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_iw;

  /* Product: '<S244>/Product' incorporates:
   *  Constant: '<S244>/Constant3'
   */
  rtb_Product_d = rtb_Sum1_h * Steering_Motor_Control_D;

  /* Sum: '<S258>/Diff' incorporates:
   *  UnitDelay: '<S258>/UD'
   *
   * Block description for '<S258>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S258>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Switch1_pz = rtb_Product_d - Code_Gen_Model_DW.UD_DSTATE_ll;

  /* Saturate: '<S244>/Saturation' */
  if (rtb_Switch1_pz > Steering_Motor_Control_D_UL) {
    rtb_Switch1_pz = Steering_Motor_Control_D_UL;
  } else if (rtb_Switch1_pz < Steering_Motor_Control_D_LL) {
    rtb_Switch1_pz = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S244>/Add' incorporates:
   *  Gain: '<S244>/Gain1'
   *  Saturate: '<S244>/Saturation'
   */
  rtb_Add_du = (Steering_Motor_Control_P * rtb_thetay_l) + rtb_Switch1_pz;

  /* Sum: '<S244>/Subtract' incorporates:
   *  Constant: '<S244>/Constant'
   */
  rtb_thetay_i = 1.0 - rtb_Add_du;

  /* Sum: '<S244>/Sum2' incorporates:
   *  Gain: '<S244>/Gain2'
   *  UnitDelay: '<S244>/Unit Delay'
   */
  rtb_thetay_l = (Steering_Motor_Control_I * rtb_thetay_l) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_l;

  /* Switch: '<S260>/Switch2' incorporates:
   *  Constant: '<S244>/Constant'
   *  RelationalOperator: '<S260>/LowerRelop1'
   *  Sum: '<S244>/Subtract'
   */
  if (!(rtb_thetay_l > (1.0 - rtb_Add_du))) {
    /* Sum: '<S244>/Subtract1' incorporates:
     *  Constant: '<S244>/Constant1'
     */
    rtb_thetay_i = -1.0 - rtb_Add_du;

    /* Switch: '<S260>/Switch' incorporates:
     *  Constant: '<S244>/Constant1'
     *  RelationalOperator: '<S260>/UpperRelop'
     *  Sum: '<S244>/Subtract1'
     */
    if (!(rtb_thetay_l < (-1.0 - rtb_Add_du))) {
      rtb_thetay_i = rtb_thetay_l;
    }

    /* End of Switch: '<S260>/Switch' */
  }

  /* End of Switch: '<S260>/Switch2' */

  /* Saturate: '<S244>/Saturation1' */
  if (rtb_thetay_i > Steering_Motor_Control_I_UL) {
    rtb_Add2_k_idx_0 = Steering_Motor_Control_I_UL;
  } else if (rtb_thetay_i < Steering_Motor_Control_I_LL) {
    rtb_Add2_k_idx_0 = Steering_Motor_Control_I_LL;
  } else {
    rtb_Add2_k_idx_0 = rtb_thetay_i;
  }

  /* End of Saturate: '<S244>/Saturation1' */

  /* Sum: '<S244>/Add1' */
  rtb_Switch1_pz = rtb_Add_du + rtb_Add2_k_idx_0;

  /* Saturate: '<S244>/Saturation2' */
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

  /* End of Saturate: '<S244>/Saturation2' */

  /* Product: '<S297>/Product3' */
  Code_Gen_Model_B.BR_Desired_Wheel_Speed =
    Code_Gen_Model_B.BR_Desired_Wheel_Speed_in * rtb_rx_nr;

  /* Switch: '<S242>/Speed_Switch' incorporates:
   *  UnaryMinus: '<S242>/Unary Minus'
   */
  if (rtb_FixPtRelationalOperator_ea) {
    tmp = -Code_Gen_Model_B.BR_Desired_Wheel_Speed;
  } else {
    tmp = Code_Gen_Model_B.BR_Desired_Wheel_Speed;
  }

  /* Product: '<S245>/Product2' incorporates:
   *  Constant: '<S245>/Constant'
   *  Switch: '<S242>/Speed_Switch'
   */
  rtb_thetay_l = tmp * 1150.4247703785388;

  /* Signum: '<S240>/Sign' */
  if (rtIsNaN(rtb_thetay_l)) {
    tmp = (rtNaN);
  } else if (rtb_thetay_l < 0.0) {
    tmp = -1.0;
  } else {
    tmp = (rtb_thetay_l > 0.0);
  }

  /* Signum: '<S240>/Sign1' incorporates:
   *  Inport: '<Root>/BackRight_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.BackRight_Drive_Motor_Speed)) {
    rtb_Add_du = (rtNaN);
  } else if (Code_Gen_Model_U.BackRight_Drive_Motor_Speed < 0.0) {
    rtb_Add_du = -1.0;
  } else {
    rtb_Add_du = (Code_Gen_Model_U.BackRight_Drive_Motor_Speed > 0.0);
  }

  /* Product: '<S175>/Product' incorporates:
   *  Abs: '<S240>/Abs'
   *  Abs: '<S243>/Abs'
   *  Constant: '<S246>/Constant'
   *  Constant: '<S256>/Constant3'
   *  Constant: '<S256>/Constant4'
   *  Inport: '<Root>/BackRight_Drive_Motor_Speed'
   *  Logic: '<S240>/OR'
   *  Lookup_n-D: '<S243>/1-D Lookup Table'
   *  Math: '<S256>/Math Function'
   *  RelationalOperator: '<S240>/Equal1'
   *  RelationalOperator: '<S246>/Compare'
   *  Signum: '<S240>/Sign'
   *  Signum: '<S240>/Sign1'
   *  Sum: '<S256>/Add1'
   *  Sum: '<S256>/Add2'
   */
  rtb_thetay_l = (((real_T)((tmp == rtb_Add_du) || (fabs
    (Code_Gen_Model_U.BackRight_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_thetay_l) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_rx_d + 1.5707963267948966, 3.1415926535897931) -
          1.5707963267948966), Code_Gen_Model_ConstP.pooled23,
     Code_Gen_Model_ConstP.pooled22, 1U);

  /* Gain: '<S241>/Gain' */
  rtb_thetay_i = Drive_Motor_Control_FF * rtb_thetay_l;

  /* Sum: '<S241>/Sum' incorporates:
   *  Inport: '<Root>/BackRight_Drive_Motor_Speed'
   */
  rtb_thetay_l -= Code_Gen_Model_U.BackRight_Drive_Motor_Speed;

  /* Sum: '<S248>/Sum1' incorporates:
   *  Constant: '<S241>/Constant2'
   *  Product: '<S248>/Product'
   *  Sum: '<S248>/Sum'
   *  UnitDelay: '<S248>/Unit Delay1'
   */
  rtb_rx_nr = ((rtb_thetay_l - Code_Gen_Model_DW.UnitDelay1_DSTATE_k) *
               Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_k;

  /* Product: '<S241>/Product' incorporates:
   *  Constant: '<S241>/Constant3'
   */
  rtb_Add_du = rtb_rx_nr * Drive_Motor_Control_D;

  /* Sum: '<S247>/Diff' incorporates:
   *  UnitDelay: '<S247>/UD'
   *
   * Block description for '<S247>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S247>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Switch1_pz = rtb_Add_du - Code_Gen_Model_DW.UD_DSTATE_c;

  /* Saturate: '<S241>/Saturation' */
  if (rtb_Switch1_pz > Drive_Motor_Control_D_UL) {
    rtb_Switch1_pz = Drive_Motor_Control_D_UL;
  } else if (rtb_Switch1_pz < Drive_Motor_Control_D_LL) {
    rtb_Switch1_pz = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S241>/Add' incorporates:
   *  Gain: '<S241>/Gain1'
   *  Saturate: '<S241>/Saturation'
   */
  rtb_thetay_i = ((Drive_Motor_Control_P * rtb_thetay_l) + rtb_thetay_i) +
    rtb_Switch1_pz;

  /* Sum: '<S241>/Subtract' incorporates:
   *  Constant: '<S241>/Constant'
   */
  rtb_rx_d = 1.0 - rtb_thetay_i;

  /* Sum: '<S241>/Sum2' incorporates:
   *  Gain: '<S241>/Gain2'
   *  UnitDelay: '<S241>/Unit Delay'
   */
  rtb_thetay_l = (Drive_Motor_Control_I * rtb_thetay_l) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_a;

  /* Switch: '<S249>/Switch2' incorporates:
   *  Constant: '<S241>/Constant'
   *  RelationalOperator: '<S249>/LowerRelop1'
   *  Sum: '<S241>/Subtract'
   */
  if (!(rtb_thetay_l > (1.0 - rtb_thetay_i))) {
    /* Sum: '<S241>/Subtract1' incorporates:
     *  Constant: '<S241>/Constant1'
     */
    rtb_rx_d = -1.0 - rtb_thetay_i;

    /* Switch: '<S249>/Switch' incorporates:
     *  Constant: '<S241>/Constant1'
     *  RelationalOperator: '<S249>/UpperRelop'
     *  Sum: '<S241>/Subtract1'
     */
    if (!(rtb_thetay_l < (-1.0 - rtb_thetay_i))) {
      rtb_rx_d = rtb_thetay_l;
    }

    /* End of Switch: '<S249>/Switch' */
  }

  /* End of Switch: '<S249>/Switch2' */

  /* Saturate: '<S241>/Saturation1' */
  if (rtb_rx_d > Drive_Motor_Control_I_UL) {
    rtb_rx_d = Drive_Motor_Control_I_UL;
  } else if (rtb_rx_d < Drive_Motor_Control_I_LL) {
    rtb_rx_d = Drive_Motor_Control_I_LL;
  }

  /* End of Saturate: '<S241>/Saturation1' */

  /* Sum: '<S241>/Add1' */
  rtb_Switch1_pz = rtb_thetay_i + rtb_rx_d;

  /* Saturate: '<S241>/Saturation2' */
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

  /* End of Saturate: '<S241>/Saturation2' */

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
  rtb_Is_Absolute_Translation_g = (Code_Gen_Model_U.Elevator_Limit_Switch_Top !=
    0.0);

  /* RelationalOperator: '<S3>/Compare' incorporates:
   *  Constant: '<S3>/Constant'
   *  Inport: '<Root>/Elevator_Limit_Switch_Bottom'
   */
  rtb_Is_Absolute_Steering = (Code_Gen_Model_U.Elevator_Limit_Switch_Bottom !=
    0.0);

  /* Gain: '<S7>/Gain1' incorporates:
   *  Inport: '<Root>/Elevator_Motor_Rev'
   */
  Code_Gen_Model_B.Elevator_Height_Measured_Raw = Elevator_MotorRev_to_Inch *
    Code_Gen_Model_U.Elevator_Motor_Rev;

  /* Switch: '<S7>/Switch1' incorporates:
   *  RelationalOperator: '<S26>/FixPt Relational Operator'
   *  UnitDelay: '<S26>/Delay Input1'
   *  UnitDelay: '<S7>/Unit Delay1'
   *
   * Block description for '<S26>/Delay Input1':
   *
   *  Store in Global RAM
   */
  if (((int32_T)rtb_Is_Absolute_Steering) < ((int32_T)
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
  if (rtb_Is_Absolute_Steering) {
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

  /* Sum: '<S6>/Subtract' */
  Code_Gen_Model_B.Elevator_Error = Code_Gen_Model_B.Elevator_Height_Desired -
    Code_Gen_Model_B.Elevator_Height_Measured;

  /* Gain: '<S22>/Gain1' */
  Code_Gen_Model_B.Elevator_Proportional = Elevator_Gain_Prop *
    Code_Gen_Model_B.Elevator_Error;

  /* Logic: '<S6>/Logical Operator2' incorporates:
   *  Abs: '<S6>/Abs'
   *  Constant: '<S20>/Constant'
   *  Constant: '<S21>/Constant'
   *  Logic: '<S6>/Logical Operator1'
   *  Logic: '<S6>/NOT1'
   *  Logic: '<S6>/NOT2'
   *  RelationalOperator: '<S20>/Compare'
   *  RelationalOperator: '<S21>/Compare'
   */
  rtb_Swerve_Motors_Disabled = ((((!(Code_Gen_Model_B.Elevator_Height_Desired ==
    0.0)) || (!(fabs(Code_Gen_Model_B.Elevator_Error) <=
                Elevator_Error_Bottom_Disable))) || rtb_Is_Absolute_Steering) &&
    (Code_Gen_Model_B.Elevator_Motor_Enable));

  /* Logic: '<S6>/Logical Operator' incorporates:
   *  Logic: '<S6>/NOT'
   *  Logic: '<S6>/OR'
   */
  rtb_FixPtRelationalOperator = (rtb_Swerve_Motors_Disabled &&
    ((!rtb_Is_Absolute_Translation_g) && (!rtb_Is_Absolute_Steering)));

  /* Switch: '<S22>/Switch' */
  if (rtb_FixPtRelationalOperator) {
    /* Switch: '<S22>/Switch1' incorporates:
     *  UnitDelay: '<S24>/Delay Input1'
     *
     * Block description for '<S24>/Delay Input1':
     *
     *  Store in Global RAM
     */
    if (!Code_Gen_Model_DW.DelayInput1_DSTATE_j) {
      /* Switch: '<S22>/Switch' incorporates:
       *  Constant: '<S22>/Constant3'
       */
      Code_Gen_Model_B.Elevator_Integral = Elevator_Int_IC;
    } else {
      /* Sum: '<S22>/Sum2' incorporates:
       *  Gain: '<S22>/Gain2'
       *  UnitDelay: '<S22>/Unit Delay'
       */
      rtb_thetay = (Elevator_Gain_Int * Code_Gen_Model_B.Elevator_Error) +
        Code_Gen_Model_B.Elevator_Integral;

      /* Sum: '<S22>/Subtract' incorporates:
       *  Constant: '<S22>/Constant'
       */
      rtb_thetay_n = Elevator_Total_UL - Code_Gen_Model_B.Elevator_Proportional;

      /* Switch: '<S25>/Switch2' incorporates:
       *  RelationalOperator: '<S25>/LowerRelop1'
       */
      if (!(rtb_thetay > rtb_thetay_n)) {
        /* Sum: '<S22>/Subtract1' incorporates:
         *  Constant: '<S22>/Constant1'
         */
        rtb_thetay_n = Elevator_Total_LL -
          Code_Gen_Model_B.Elevator_Proportional;

        /* Switch: '<S25>/Switch' incorporates:
         *  RelationalOperator: '<S25>/UpperRelop'
         */
        if (!(rtb_thetay < rtb_thetay_n)) {
          rtb_thetay_n = rtb_thetay;
        }

        /* End of Switch: '<S25>/Switch' */
      }

      /* End of Switch: '<S25>/Switch2' */

      /* Saturate: '<S22>/Saturation1' */
      if (rtb_thetay_n > Elevator_Int_UL) {
        /* Switch: '<S22>/Switch' */
        Code_Gen_Model_B.Elevator_Integral = Elevator_Int_UL;
      } else if (rtb_thetay_n < Elevator_Int_LL) {
        /* Switch: '<S22>/Switch' */
        Code_Gen_Model_B.Elevator_Integral = Elevator_Int_LL;
      } else {
        /* Switch: '<S22>/Switch' */
        Code_Gen_Model_B.Elevator_Integral = rtb_thetay_n;
      }

      /* End of Saturate: '<S22>/Saturation1' */
    }

    /* End of Switch: '<S22>/Switch1' */
  } else {
    /* Switch: '<S22>/Switch' incorporates:
     *  Constant: '<S22>/Constant2'
     */
    Code_Gen_Model_B.Elevator_Integral = 0.0;
  }

  /* End of Switch: '<S22>/Switch' */

  /* Switch: '<S6>/Switch2' */
  if (rtb_Swerve_Motors_Disabled) {
    /* Sum: '<S22>/Add1' */
    rtb_thetay = Code_Gen_Model_B.Elevator_Proportional +
      Code_Gen_Model_B.Elevator_Integral;

    /* Saturate: '<S22>/Saturation2' */
    if (rtb_thetay > Elevator_Total_UL) {
      rtb_thetay = Elevator_Total_UL;
    } else if (rtb_thetay < Elevator_Total_LL) {
      rtb_thetay = Elevator_Total_LL;
    }

    /* End of Saturate: '<S22>/Saturation2' */

    /* Switch: '<S6>/Switch1' incorporates:
     *  Constant: '<S6>/Constant1'
     *  Constant: '<S6>/Constant2'
     */
    if (rtb_Is_Absolute_Translation_g) {
      rtb_thetay_n = Elevator_Hold_at_Top_DC;
    } else {
      rtb_thetay_n = 1.0;
    }

    /* End of Switch: '<S6>/Switch1' */

    /* Switch: '<S23>/Switch2' incorporates:
     *  RelationalOperator: '<S23>/LowerRelop1'
     *  Switch: '<S6>/Switch'
     */
    if (rtb_thetay > rtb_thetay_n) {
      /* Outport: '<Root>/Elevator_DutyCycle' */
      Code_Gen_Model_Y.Elevator_DutyCycle = rtb_thetay_n;
    } else {
      if (rtb_Is_Absolute_Steering) {
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

      /* Switch: '<S23>/Switch' incorporates:
       *  RelationalOperator: '<S23>/UpperRelop'
       */
      if (rtb_thetay < rtb_thetay_n) {
        /* Outport: '<Root>/Elevator_DutyCycle' */
        Code_Gen_Model_Y.Elevator_DutyCycle = rtb_thetay_n;
      } else {
        /* Outport: '<Root>/Elevator_DutyCycle' */
        Code_Gen_Model_Y.Elevator_DutyCycle = rtb_thetay;
      }

      /* End of Switch: '<S23>/Switch' */
    }

    /* End of Switch: '<S23>/Switch2' */
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
  rtb_Add2_k_idx_1 = cos(Code_Gen_Model_B.Gyro_Angle_Field_rad);
  rtb_Rotationmatrixfromlocalto_1 = rtb_rx;

  /* SignalConversion generated from: '<S13>/Rotation matrix from local to global' incorporates:
   *  UnaryMinus: '<S13>/Unary Minus'
   */
  rtb_Rotationmatrixfromlocalto_0 = -rtb_rx;

  /* Sum: '<S95>/Diff' incorporates:
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
  rtb_thetay_n = (Code_Gen_Model_U.FrontLeft_Drive_Motor_Rev -
                  Code_Gen_Model_DW.UD_DSTATE_j) * 0.049599071116336282;

  /* Product: '<S13>/Product1' incorporates:
   *  Constant: '<S13>/Constant1'
   *  Inport: '<Root>/FrontRight_Drive_Motor_Rev'
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
  rtb_thetay = (Code_Gen_Model_U.FrontRight_Drive_Motor_Rev -
                Code_Gen_Model_DW.UD_DSTATE_m) * 0.049599071116336282;

  /* Product: '<S13>/Product2' incorporates:
   *  Constant: '<S13>/Constant1'
   *  Inport: '<Root>/BackLeft_Drive_Motor_Rev'
   *  Sum: '<S98>/Diff'
   *  UnitDelay: '<S98>/UD'
   *
   * Block description for '<S98>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S98>/UD':
   *
   *  Store in Global RAM
   */
  rtb_thetay_l = (Code_Gen_Model_U.BackLeft_Drive_Motor_Rev -
                  Code_Gen_Model_DW.UD_DSTATE_ic) * 0.049599071116336282;

  /* Product: '<S13>/Product3' incorporates:
   *  Constant: '<S13>/Constant1'
   *  Inport: '<Root>/BackRight_Drive_Motor_Rev'
   *  Sum: '<S99>/Diff'
   *  UnitDelay: '<S99>/UD'
   *
   * Block description for '<S99>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S99>/UD':
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
   *  Fcn: '<S102>/r->x'
   *  Fcn: '<S102>/theta->y'
   *  Fcn: '<S103>/r->x'
   *  Fcn: '<S103>/theta->y'
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
  Code_Gen_Model_B.Product6[0] = (rtb_Add2_k_idx_1 * rtb_thetay) +
    (rtb_Rotationmatrixfromlocalto_0 * rtb_thetay_n);
  Code_Gen_Model_B.Product6[1] = (rtb_Rotationmatrixfromlocalto_1 * rtb_thetay)
    + (rtb_Add2_k_idx_1 * rtb_thetay_n);

  /* Outputs for Enabled SubSystem: '<S61>/MeasurementUpdate' incorporates:
   *  EnablePort: '<S92>/Enable'
   */
  if (rtb_AND) {
    Code_Gen_Model_DW.MeasurementUpdate_MODE = true;

    /* Product: '<S92>/D[k]*u[k]' incorporates:
     *  Constant: '<S41>/D'
     */
    rtb_thetay = (0.0 * Code_Gen_Model_B.Product6[0]) + (0.0 *
      Code_Gen_Model_B.Product6[1]);

    /* Sum: '<S92>/Sum' incorporates:
     *  Constant: '<S41>/C'
     *  Delay: '<S41>/MemoryX'
     *  Product: '<S92>/C[k]*xhat[k|k-1]'
     *  Product: '<S92>/D[k]*u[k]'
     *  Sum: '<S92>/Add1'
     */
    rtb_Reshapey_idx_0 -= ((0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[1]) +
      Code_Gen_Model_DW.MemoryX_DSTATE[0]) + rtb_thetay;
    rtb_Reshapey_idx_1 -= ((0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[0]) +
      Code_Gen_Model_DW.MemoryX_DSTATE[1]) + rtb_thetay;

    /* Product: '<S92>/Product3' incorporates:
     *  Constant: '<S42>/KalmanGainL'
     */
    Code_Gen_Model_B.Product3[0] = (0.0951249219725039 * rtb_Reshapey_idx_0) + (
      -2.0601714451538746E-17 * rtb_Reshapey_idx_1);
    Code_Gen_Model_B.Product3[1] = (1.304610855474728E-16 * rtb_Reshapey_idx_0)
      + (0.095124921972504 * rtb_Reshapey_idx_1);
  } else if (Code_Gen_Model_DW.MeasurementUpdate_MODE) {
    /* Disable for Product: '<S92>/Product3' incorporates:
     *  Outport: '<S92>/L*(y[k]-yhat[k|k-1])'
     */
    Code_Gen_Model_B.Product3[0] = 0.0;
    Code_Gen_Model_B.Product3[1] = 0.0;
    Code_Gen_Model_DW.MeasurementUpdate_MODE = false;
  }

  /* End of Outputs for SubSystem: '<S61>/MeasurementUpdate' */

  /* RelationalOperator: '<S105>/Compare' incorporates:
   *  Constant: '<S104>/Constant'
   *  Constant: '<S105>/Constant'
   */
  rtb_Swerve_Motors_Disabled = (Odometry_X_Y_TEAR != 0.0);

  /* Gain: '<S104>/meters to feet' */
  Code_Gen_Model_B.Odometry_X_global_est_ft = 3.28084 *
    Code_Gen_Model_B.Odom_Position_X;

  /* Switch: '<S104>/Switch' incorporates:
   *  UnitDelay: '<S104>/Unit Delay'
   */
  if (rtb_Swerve_Motors_Disabled) {
    rtb_thetay = Code_Gen_Model_B.Odometry_X_global_est_ft;
  } else {
    rtb_thetay = Code_Gen_Model_DW.UnitDelay_DSTATE_c;
  }

  /* End of Switch: '<S104>/Switch' */

  /* Sum: '<S104>/Subtract' */
  Code_Gen_Model_B.Odometry_X_global_TEAR_ft =
    Code_Gen_Model_B.Odometry_X_global_est_ft - rtb_thetay;

  /* Gain: '<S104>/meters to feet1' */
  Code_Gen_Model_B.Odometry_Y_global_est_ft = 3.28084 *
    Code_Gen_Model_B.Odom_Position_Y;

  /* Switch: '<S104>/Switch1' incorporates:
   *  UnitDelay: '<S104>/Unit Delay1'
   */
  if (rtb_Swerve_Motors_Disabled) {
    rtb_thetay_n = Code_Gen_Model_B.Odometry_Y_global_est_ft;
  } else {
    rtb_thetay_n = Code_Gen_Model_DW.UnitDelay1_DSTATE_d;
  }

  /* End of Switch: '<S104>/Switch1' */

  /* Sum: '<S104>/Subtract1' */
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

  /* Update for UnitDelay: '<S38>/Delay Input1' incorporates:
   *  Inport: '<Root>/Joystick_Left_B11'
   *
   * Block description for '<S38>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE = Code_Gen_Model_U.Joystick_Left_B11;

  /* Update for UnitDelay: '<S39>/Delay Input1' incorporates:
   *  Inport: '<Root>/Joystick_Left_B12'
   *
   * Block description for '<S39>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_e = Code_Gen_Model_U.Joystick_Left_B12;

  /* Update for UnitDelay: '<S40>/Delay Input1' incorporates:
   *  Inport: '<Root>/Joystick_Left_B13'
   *
   * Block description for '<S40>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_n = Code_Gen_Model_U.Joystick_Left_B13;
  for (rtb_Num_Segments = 0; rtb_Num_Segments < 5; rtb_Num_Segments++) {
    /* Update for S-Function (sfix_udelay): '<S11>/Tapped Delay' incorporates:
     *  Bias: '<S135>/Bias'
     *  Merge: '<S109>/Merge1'
     *  S-Function (sfix_udelay): '<S11>/Tapped Delay1'
     */
    Code_Gen_Model_DW.TappedDelay_X[rtb_Num_Segments] =
      Code_Gen_Model_DW.TappedDelay_X[rtb_Num_Segments + 1];

    /* Update for S-Function (sfix_udelay): '<S11>/Tapped Delay1' incorporates:
     *  Bias: '<S135>/Bias'
     *  Merge: '<S109>/Merge1'
     *  S-Function (sfix_udelay): '<S11>/Tapped Delay'
     */
    Code_Gen_Model_DW.TappedDelay1_X[rtb_Num_Segments] =
      Code_Gen_Model_DW.TappedDelay1_X[rtb_Num_Segments + 1];
  }

  /* Update for S-Function (sfix_udelay): '<S11>/Tapped Delay' */
  Code_Gen_Model_DW.TappedDelay_X[5] = Code_Gen_Model_B.Product6[0];

  /* Update for S-Function (sfix_udelay): '<S11>/Tapped Delay1' */
  Code_Gen_Model_DW.TappedDelay1_X[5] = Code_Gen_Model_B.Product6[1];

  /* Update for Delay: '<S41>/MemoryX' */
  Code_Gen_Model_DW.icLoad = false;

  /* Product: '<S61>/A[k]*xhat[k|k-1]' incorporates:
   *  Constant: '<S41>/A'
   *  Delay: '<S41>/MemoryX'
   */
  rtb_Reshapey_idx_0 = (0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[1]) +
    Code_Gen_Model_DW.MemoryX_DSTATE[0];
  rtb_Reshapey_idx_1 = (0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[0]) +
    Code_Gen_Model_DW.MemoryX_DSTATE[1];

  /* Update for Delay: '<S41>/MemoryX' incorporates:
   *  Constant: '<S41>/B'
   *  Product: '<S61>/A[k]*xhat[k|k-1]'
   *  Product: '<S61>/B[k]*u[k]'
   *  Sum: '<S61>/Add'
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

  /* Update for UnitDelay: '<S28>/Delay Input1' incorporates:
   *  Constant: '<S8>/Constant3'
   *
   * Block description for '<S28>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_p = Gyro_Calibration_Reset_Flag;

  /* Update for UnitDelay: '<S8>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE = rtb_Switch1;

  /* Update for UnitDelay: '<S272>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S272>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE = 0U;

  /* Update for UnitDelay: '<S294>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_i = rtb_Merge1;

  /* Update for UnitDelay: '<S293>/UD'
   *
   * Block description for '<S293>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE = rtb_Switch1_p2;

  /* Update for UnitDelay: '<S291>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_m = rtb_Switch2;

  /* Update for UnitDelay: '<S274>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_d = rtb_Switch4;

  /* Update for UnitDelay: '<S289>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S289>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_p = 0U;

  /* Update for UnitDelay: '<S289>/FixPt Unit Delay1' */
  Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_e = rtb_Switch4;

  /* Update for UnitDelay: '<S273>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_g = rtb_Uk1_nx;

  /* Update for UnitDelay: '<S282>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S282>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_c = 0U;

  /* Update for UnitDelay: '<S282>/FixPt Unit Delay1' */
  Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_p = rtb_Uk1_nx;

  /* Update for UnitDelay: '<S196>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_b = rtb_Elevator_Height_Desired;

  /* Update for UnitDelay: '<S195>/UD'
   *
   * Block description for '<S195>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_b = rtb_Product2_e;

  /* Update for UnitDelay: '<S181>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_e = rtb_rx_c;

  /* Update for UnitDelay: '<S185>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_a = rtb_rx_g;

  /* Update for UnitDelay: '<S184>/UD'
   *
   * Block description for '<S184>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_o = rtb_Subtract1;

  /* Update for UnitDelay: '<S178>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_f = rtb_FeedForward;

  /* Update for UnitDelay: '<S217>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_n = rtb_Add_oh;

  /* Update for UnitDelay: '<S216>/UD'
   *
   * Block description for '<S216>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_i = rtb_Subtract1_of;

  /* Update for UnitDelay: '<S202>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_dt = rtb_Hypot_bl;

  /* Update for UnitDelay: '<S206>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_b1 = rtb_Add_i;

  /* Update for UnitDelay: '<S205>/UD'
   *
   * Block description for '<S205>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_e = rtb_Subtract1_a;

  /* Update for UnitDelay: '<S199>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_em = rtb_FeedForward_n;

  /* Update for UnitDelay: '<S238>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_nw = rtb_Add_o2;

  /* Update for UnitDelay: '<S237>/UD'
   *
   * Block description for '<S237>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_k = rtb_Subtract1_do;

  /* Update for UnitDelay: '<S223>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_k = rtb_Hypot_d;

  /* Update for UnitDelay: '<S227>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_f = rtb_Add_gj;

  /* Update for UnitDelay: '<S226>/UD'
   *
   * Block description for '<S226>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_l = rtb_Subtract1_f;

  /* Update for UnitDelay: '<S220>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_gp = rtb_FeedForward_a;

  /* Update for UnitDelay: '<S259>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_iw = rtb_Sum1_h;

  /* Update for UnitDelay: '<S258>/UD'
   *
   * Block description for '<S258>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_ll = rtb_Product_d;

  /* Update for UnitDelay: '<S244>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_l = rtb_Add2_k_idx_0;

  /* Update for UnitDelay: '<S248>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_k = rtb_rx_nr;

  /* Update for UnitDelay: '<S247>/UD'
   *
   * Block description for '<S247>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_c = rtb_Add_du;

  /* Update for UnitDelay: '<S241>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_a = rtb_rx_d;

  /* Update for UnitDelay: '<S26>/Delay Input1'
   *
   * Block description for '<S26>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_l = rtb_Is_Absolute_Steering;

  /* Update for UnitDelay: '<S7>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_j = rtb_Switch1_pz;

  /* Update for UnitDelay: '<S24>/Delay Input1'
   *
   * Block description for '<S24>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_j = rtb_FixPtRelationalOperator;

  /* Update for UnitDelay: '<S95>/UD'
   *
   * Block description for '<S95>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_d = Code_Gen_Model_B.Gyro_Angle_Field_rad;

  /* Update for UnitDelay: '<S96>/UD' incorporates:
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Rev'
   *
   * Block description for '<S96>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_j = Code_Gen_Model_U.FrontLeft_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S97>/UD' incorporates:
   *  Inport: '<Root>/FrontRight_Drive_Motor_Rev'
   *
   * Block description for '<S97>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_m = Code_Gen_Model_U.FrontRight_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S98>/UD' incorporates:
   *  Inport: '<Root>/BackLeft_Drive_Motor_Rev'
   *
   * Block description for '<S98>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_ic = Code_Gen_Model_U.BackLeft_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S99>/UD' incorporates:
   *  Inport: '<Root>/BackRight_Drive_Motor_Rev'
   *
   * Block description for '<S99>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_ce = Code_Gen_Model_U.BackRight_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S104>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_c = rtb_thetay;

  /* Update for UnitDelay: '<S104>/Unit Delay1' */
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

    /* InitializeConditions for Delay: '<S41>/MemoryX' */
    Code_Gen_Model_DW.icLoad = true;

    /* InitializeConditions for DiscreteIntegrator: '<S13>/Accumulator2' */
    Code_Gen_Model_DW.Accumulator2_DSTATE = Constant;
    Code_Gen_Model_DW.Accumulator2_PrevResetState = 2;

    /* InitializeConditions for DiscreteIntegrator: '<S13>/Accumulator' */
    Code_Gen_Model_DW.Accumulator_DSTATE = Constant1;
    Code_Gen_Model_DW.Accumulator_PrevResetState = 2;

    /* InitializeConditions for UnitDelay: '<S8>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE = Gyro_Calibration_Reset_Degree;

    /* InitializeConditions for UnitDelay: '<S272>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE = 1U;

    /* InitializeConditions for UnitDelay: '<S289>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_p = 1U;

    /* InitializeConditions for UnitDelay: '<S282>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_c = 1U;

    /* SystemInitialize for IfAction SubSystem: '<S1>/Teleop' */
    /* InitializeConditions for UnitDelay: '<S342>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_a = 1U;

    /* End of SystemInitialize for SubSystem: '<S1>/Teleop' */

    /* SystemInitialize for IfAction SubSystem: '<S15>/Spline Path Following Enabled' */
    /* Start for If: '<S113>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem_h = -1;

    /* InitializeConditions for UnitDelay: '<S109>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_gh = 2.0;

    /* SystemInitialize for IfAction SubSystem: '<S113>/Robot_Index_Is_Valid' */
    /* Start for If: '<S116>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem_o = -1;

    /* SystemInitialize for IfAction SubSystem: '<S116>/Circle_Check_Valid' */
    /* Start for If: '<S118>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;

    /* End of SystemInitialize for SubSystem: '<S116>/Circle_Check_Valid' */
    /* End of SystemInitialize for SubSystem: '<S113>/Robot_Index_Is_Valid' */
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
