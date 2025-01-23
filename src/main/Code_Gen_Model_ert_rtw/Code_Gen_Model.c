/*
 * Sponsored License - for use in support of a program or activity
 * sponsored by MathWorks.  Not for government, commercial or other
 * non-sponsored organizational use.
 *
 * File: Code_Gen_Model.c
 *
 * Code generated for Simulink model 'Code_Gen_Model'.
 *
 * Model version                  : 2.221
 * Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
 * C/C++ source code generated on : Wed Jan 22 20:27:15 2025
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
                                              * Referenced by: '<S319>/Constant12'
                                              */
real_T AT_Target_Tag_11_X = 12.5143;   /* Variable: AT_Target_Tag_11_X
                                        * Referenced by: '<S319>/Constant4'
                                        */
real_T AT_Target_Tag_11_Y = 2.6574;    /* Variable: AT_Target_Tag_11_Y
                                        * Referenced by: '<S319>/Constant26'
                                        */
real_T AT_Target_Tag_12_Field_Angle = -2.0944;/* Variable: AT_Target_Tag_12_Field_Angle
                                               * Referenced by: '<S319>/Constant11'
                                               */
real_T AT_Target_Tag_12_X = 12.5143;   /* Variable: AT_Target_Tag_12_X
                                        * Referenced by: '<S319>/Constant17'
                                        */
real_T AT_Target_Tag_12_Y = 5.5542;    /* Variable: AT_Target_Tag_12_Y
                                        * Referenced by: '<S319>/Constant3'
                                        */
real_T AT_Target_Tag_13_Field_Angle = 0.0;/* Variable: AT_Target_Tag_13_Field_Angle
                                           * Referenced by: '<S319>/Constant10'
                                           */
real_T AT_Target_Tag_13_X = 10.001;    /* Variable: AT_Target_Tag_13_X
                                        * Referenced by: '<S319>/Constant18'
                                        */
real_T AT_Target_Tag_13_Y = 4.1051;    /* Variable: AT_Target_Tag_13_Y
                                        * Referenced by: '<S319>/Constant21'
                                        */
real_T AT_Target_Tag_14_Field_Angle = 0.0;/* Variable: AT_Target_Tag_14_Field_Angle
                                           * Referenced by: '<S319>/Constant8'
                                           */
real_T AT_Target_Tag_14_X = 6.54;      /* Variable: AT_Target_Tag_14_X
                                        * Referenced by: '<S319>/Constant19'
                                        */
real_T AT_Target_Tag_14_Y = 4.1051;    /* Variable: AT_Target_Tag_14_Y
                                        * Referenced by: '<S319>/Constant23'
                                        */
real_T AT_Target_Tag_15_Field_Angle = 2.0944;/* Variable: AT_Target_Tag_15_Field_Angle
                                              * Referenced by: '<S319>/Constant7'
                                              */
real_T AT_Target_Tag_15_X = 4.0317;    /* Variable: AT_Target_Tag_15_X
                                        * Referenced by: '<S319>/Constant20'
                                        */
real_T AT_Target_Tag_15_Y = 5.5542;    /* Variable: AT_Target_Tag_15_Y
                                        * Referenced by: '<S319>/Constant24'
                                        */
real_T AT_Target_Tag_16_Field_Angle = 4.1888;/* Variable: AT_Target_Tag_16_Field_Angle
                                              * Referenced by: '<S319>/Constant6'
                                              */
real_T AT_Target_Tag_16_X = 4.0317;    /* Variable: AT_Target_Tag_16_X
                                        * Referenced by: '<S319>/Constant22'
                                        */
real_T AT_Target_Tag_16_Y = 2.6574;    /* Variable: AT_Target_Tag_16_Y
                                        * Referenced by: '<S319>/Constant25'
                                        */
real_T AT_Target_Tag_5_Field_Angle = 1.5708;/* Variable: AT_Target_Tag_5_Field_Angle
                                             * Referenced by: '<S319>/Constant14'
                                             */
real_T AT_Target_Tag_5_X = 14.7008;    /* Variable: AT_Target_Tag_5_X
                                        * Referenced by: '<S319>/Constant9'
                                        */
real_T AT_Target_Tag_5_Y = 7.2898;     /* Variable: AT_Target_Tag_5_Y
                                        * Referenced by: '<S319>/Constant28'
                                        */
real_T AT_Target_Tag_6_Field_Angle = 4.7124;/* Variable: AT_Target_Tag_6_Field_Angle
                                             * Referenced by: '<S319>/Constant13'
                                             */
real_T AT_Target_Tag_6_X = 1.8415;     /* Variable: AT_Target_Tag_6_X
                                        * Referenced by: '<S319>/Constant5'
                                        */
real_T AT_Target_Tag_6_Y = 7.2898;     /* Variable: AT_Target_Tag_6_Y
                                        * Referenced by: '<S319>/Constant27'
                                        */
real_T AT_XY_Control_Gain = 1.5;       /* Variable: AT_XY_Control_Gain
                                        * Referenced by: '<S323>/Gain2'
                                        */
real_T Boost_Trigger_Decreasing_Limit = -0.28;
                                     /* Variable: Boost_Trigger_Decreasing_Limit
                                      * Referenced by: '<S336>/Constant1'
                                      */
real_T Boost_Trigger_High_Speed = 5.0; /* Variable: Boost_Trigger_High_Speed
                                        * Referenced by:
                                        *   '<S332>/Constant'
                                        *   '<S332>/Saturation'
                                        */
real_T Boost_Trigger_Increasing_Limit = 3.5;
                                     /* Variable: Boost_Trigger_Increasing_Limit
                                      * Referenced by: '<S336>/Constant3'
                                      */
real_T Boost_Trigger_Low_Speed = 1.5;  /* Variable: Boost_Trigger_Low_Speed
                                        * Referenced by: '<S332>/Constant1'
                                        */
real_T Distance_FL_y = 0.18732;        /* Variable: Distance_FL_y
                                        * Referenced by: '<S259>/Constant4'
                                        */
real_T Drive_Motor_Control_D = 0.0001; /* Variable: Drive_Motor_Control_D
                                        * Referenced by:
                                        *   '<S175>/Constant3'
                                        *   '<S196>/Constant3'
                                        *   '<S217>/Constant3'
                                        *   '<S238>/Constant3'
                                        */
real_T Drive_Motor_Control_D_FilterCoeff = 0.22223;
                                  /* Variable: Drive_Motor_Control_D_FilterCoeff
                                   * Referenced by:
                                   *   '<S175>/Constant2'
                                   *   '<S196>/Constant2'
                                   *   '<S217>/Constant2'
                                   *   '<S238>/Constant2'
                                   */
real_T Drive_Motor_Control_D_LL = -0.2;/* Variable: Drive_Motor_Control_D_LL
                                        * Referenced by:
                                        *   '<S175>/Saturation'
                                        *   '<S196>/Saturation'
                                        *   '<S217>/Saturation'
                                        *   '<S238>/Saturation'
                                        */
real_T Drive_Motor_Control_D_UL = 0.2; /* Variable: Drive_Motor_Control_D_UL
                                        * Referenced by:
                                        *   '<S175>/Saturation'
                                        *   '<S196>/Saturation'
                                        *   '<S217>/Saturation'
                                        *   '<S238>/Saturation'
                                        */
real_T Drive_Motor_Control_FF = 0.00016129;/* Variable: Drive_Motor_Control_FF
                                            * Referenced by:
                                            *   '<S175>/Gain'
                                            *   '<S196>/Gain'
                                            *   '<S217>/Gain'
                                            *   '<S238>/Gain'
                                            */
real_T Drive_Motor_Control_I = 0.0;    /* Variable: Drive_Motor_Control_I
                                        * Referenced by:
                                        *   '<S175>/Gain2'
                                        *   '<S196>/Gain2'
                                        *   '<S217>/Gain2'
                                        *   '<S238>/Gain2'
                                        */
real_T Drive_Motor_Control_I_LL = 0.0; /* Variable: Drive_Motor_Control_I_LL
                                        * Referenced by:
                                        *   '<S175>/Saturation1'
                                        *   '<S196>/Saturation1'
                                        *   '<S217>/Saturation1'
                                        *   '<S238>/Saturation1'
                                        */
real_T Drive_Motor_Control_I_UL = 0.0; /* Variable: Drive_Motor_Control_I_UL
                                        * Referenced by:
                                        *   '<S175>/Saturation1'
                                        *   '<S196>/Saturation1'
                                        *   '<S217>/Saturation1'
                                        *   '<S238>/Saturation1'
                                        */
real_T Drive_Motor_Control_P = 5.0E-6; /* Variable: Drive_Motor_Control_P
                                        * Referenced by:
                                        *   '<S175>/Gain1'
                                        *   '<S196>/Gain1'
                                        *   '<S217>/Gain1'
                                        *   '<S238>/Gain1'
                                        */
real_T Drive_Motor_Control_Sign_Change_Deadband = 7000.0;
                           /* Variable: Drive_Motor_Control_Sign_Change_Deadband
                            * Referenced by:
                            *   '<S180>/Constant'
                            *   '<S201>/Constant'
                            *   '<S222>/Constant'
                            *   '<S243>/Constant'
                            */
real_T Elevator_Gain_Int = 0.001;      /* Variable: Elevator_Gain_Int
                                        * Referenced by: '<S20>/Gain2'
                                        */
real_T Elevator_Gain_Prop = 0.05;      /* Variable: Elevator_Gain_Prop
                                        * Referenced by: '<S20>/Gain1'
                                        */
real_T Elevator_Height_L1 = 10.0;      /* Variable: Elevator_Height_L1
                                        * Referenced by: '<S321>/Constant'
                                        */
real_T Elevator_Height_L2 = 10.0;      /* Variable: Elevator_Height_L2
                                        * Referenced by: '<S321>/Constant2'
                                        */
real_T Elevator_Height_L3 = 10.0;      /* Variable: Elevator_Height_L3
                                        * Referenced by: '<S321>/Constant1'
                                        */
real_T Elevator_Height_L4 = 10.0;      /* Variable: Elevator_Height_L4
                                        * Referenced by: '<S321>/Constant3'
                                        */
real_T Elevator_Height_Pickup = 10.0;  /* Variable: Elevator_Height_Pickup
                                        * Referenced by: '<S321>/Constant4'
                                        */
real_T Elevator_Height_RL_Dec = -0.08; /* Variable: Elevator_Height_RL_Dec
                                        * Referenced by: '<S347>/Constant1'
                                        */
real_T Elevator_Height_RL_Inc = 0.08;  /* Variable: Elevator_Height_RL_Inc
                                        * Referenced by: '<S347>/Constant3'
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
                                            * Referenced by: '<S7>/Gain'
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
                                        * Referenced by: '<S101>/Constant'
                                        */
real_T Spline_Last_Pose_Distance_to_Velocity_Gain = 2.0;
                         /* Variable: Spline_Last_Pose_Distance_to_Velocity_Gain
                          * Referenced by: '<S160>/Constant2'
                          */
real_T Spline_Max_Centripital_Acceleration = 10.0;
                                /* Variable: Spline_Max_Centripital_Acceleration
                                 * Referenced by: '<S160>/Constant1'
                                 */
real_T Spline_Pose_Num_Before_End_Reduce_Speed = 1.0;
                            /* Variable: Spline_Pose_Num_Before_End_Reduce_Speed
                             * Referenced by: '<S107>/Constant'
                             */
real_T Spline_Stop_Radius = 0.1;       /* Variable: Spline_Stop_Radius
                                        * Referenced by: '<S120>/Constant'
                                        */
real_T Spline_Velocity_Multiplier_TEST = 1.0;
                                    /* Variable: Spline_Velocity_Multiplier_TEST
                                     * Referenced by: '<S160>/Constant3'
                                     */
real_T Steering_Absolute_Cmd_Approach_Zero_Error_Thresh = 0.2;
                   /* Variable: Steering_Absolute_Cmd_Approach_Zero_Error_Thresh
                    * Referenced by: '<S271>/Constant5'
                    */
real_T Steering_Absolute_Cmd_Approach_Zero_Final_Thresh = 0.01;
                   /* Variable: Steering_Absolute_Cmd_Approach_Zero_Final_Thresh
                    * Referenced by: '<S271>/Constant6'
                    */
real_T Steering_Absolute_Cmd_NonZero_Error_Thresh = 0.2;
                         /* Variable: Steering_Absolute_Cmd_NonZero_Error_Thresh
                          * Referenced by: '<S271>/Constant9'
                          */
real_T Steering_Absolute_Cmd_NonZero_Final_Scale_Factor = 0.1;
                   /* Variable: Steering_Absolute_Cmd_NonZero_Final_Scale_Factor
                    * Referenced by: '<S271>/Constant10'
                    */
real_T Steering_Absolute_Cmd_Rate_Limit_Dec = -1.0;
                               /* Variable: Steering_Absolute_Cmd_Rate_Limit_Dec
                                * Referenced by: '<S271>/Constant1'
                                */
real_T Steering_Absolute_Cmd_Rate_Limit_Inc = 1.0;
                               /* Variable: Steering_Absolute_Cmd_Rate_Limit_Inc
                                * Referenced by: '<S271>/Constant3'
                                */
real_T Steering_Heading_Control_D = 0.0;/* Variable: Steering_Heading_Control_D
                                         * Referenced by: '<S288>/Constant3'
                                         */
real_T Steering_Heading_Control_D_FilterCoeff = 0.22223;
                             /* Variable: Steering_Heading_Control_D_FilterCoeff
                              * Referenced by: '<S288>/Constant2'
                              */
real_T Steering_Heading_Control_D_LL = 0.0;
                                      /* Variable: Steering_Heading_Control_D_LL
                                       * Referenced by: '<S288>/Saturation'
                                       */
real_T Steering_Heading_Control_D_UL = 0.0;
                                      /* Variable: Steering_Heading_Control_D_UL
                                       * Referenced by: '<S288>/Saturation'
                                       */
real_T Steering_Heading_Control_Deadzone = 0.1;
                                  /* Variable: Steering_Heading_Control_Deadzone
                                   * Referenced by: '<S287>/Constant'
                                   */
real_T Steering_Heading_Control_I = 0.0;/* Variable: Steering_Heading_Control_I
                                         * Referenced by: '<S288>/Gain2'
                                         */
real_T Steering_Heading_Control_I_LL = -0.1;
                                      /* Variable: Steering_Heading_Control_I_LL
                                       * Referenced by: '<S288>/Saturation1'
                                       */
real_T Steering_Heading_Control_I_UL = 0.1;
                                      /* Variable: Steering_Heading_Control_I_UL
                                       * Referenced by: '<S288>/Saturation1'
                                       */
real_T Steering_Heading_Control_P = 2.5;/* Variable: Steering_Heading_Control_P
                                         * Referenced by: '<S288>/Gain1'
                                         */
real_T Steering_Heading_Control_Total_LL = -2.5;
                                  /* Variable: Steering_Heading_Control_Total_LL
                                   * Referenced by:
                                   *   '<S288>/Constant1'
                                   *   '<S288>/Saturation2'
                                   */
real_T Steering_Heading_Control_Total_UL = 2.5;
                                  /* Variable: Steering_Heading_Control_Total_UL
                                   * Referenced by:
                                   *   '<S288>/Constant'
                                   *   '<S288>/Saturation2'
                                   */
real_T Steering_Motor_Control_D = 0.5; /* Variable: Steering_Motor_Control_D
                                        * Referenced by:
                                        *   '<S178>/Constant3'
                                        *   '<S199>/Constant3'
                                        *   '<S220>/Constant3'
                                        *   '<S241>/Constant3'
                                        */
real_T Steering_Motor_Control_D_FilterCoeff = 0.22223;
                               /* Variable: Steering_Motor_Control_D_FilterCoeff
                                * Referenced by:
                                *   '<S178>/Constant2'
                                *   '<S199>/Constant2'
                                *   '<S220>/Constant2'
                                *   '<S241>/Constant2'
                                */
real_T Steering_Motor_Control_D_LL = -0.2;/* Variable: Steering_Motor_Control_D_LL
                                           * Referenced by:
                                           *   '<S178>/Saturation'
                                           *   '<S199>/Saturation'
                                           *   '<S220>/Saturation'
                                           *   '<S241>/Saturation'
                                           */
real_T Steering_Motor_Control_D_UL = 0.2;/* Variable: Steering_Motor_Control_D_UL
                                          * Referenced by:
                                          *   '<S178>/Saturation'
                                          *   '<S199>/Saturation'
                                          *   '<S220>/Saturation'
                                          *   '<S241>/Saturation'
                                          */
real_T Steering_Motor_Control_I = 0.005;/* Variable: Steering_Motor_Control_I
                                         * Referenced by:
                                         *   '<S178>/Gain2'
                                         *   '<S199>/Gain2'
                                         *   '<S220>/Gain2'
                                         *   '<S241>/Gain2'
                                         */
real_T Steering_Motor_Control_I_LL = -0.005;/* Variable: Steering_Motor_Control_I_LL
                                             * Referenced by:
                                             *   '<S178>/Saturation1'
                                             *   '<S199>/Saturation1'
                                             *   '<S220>/Saturation1'
                                             *   '<S241>/Saturation1'
                                             */
real_T Steering_Motor_Control_I_UL = 0.005;/* Variable: Steering_Motor_Control_I_UL
                                            * Referenced by:
                                            *   '<S178>/Saturation1'
                                            *   '<S199>/Saturation1'
                                            *   '<S220>/Saturation1'
                                            *   '<S241>/Saturation1'
                                            */
real_T Steering_Motor_Control_P = 0.15;/* Variable: Steering_Motor_Control_P
                                        * Referenced by:
                                        *   '<S178>/Gain1'
                                        *   '<S199>/Gain1'
                                        *   '<S220>/Gain1'
                                        *   '<S241>/Gain1'
                                        */
real_T Steering_Relative_Cmd_Approach_Zero_Error_Thresh = 0.2;
                   /* Variable: Steering_Relative_Cmd_Approach_Zero_Error_Thresh
                    * Referenced by: '<S270>/Constant5'
                    */
real_T Steering_Relative_Cmd_Approach_Zero_Final_Thresh = 0.01;
                   /* Variable: Steering_Relative_Cmd_Approach_Zero_Final_Thresh
                    * Referenced by: '<S270>/Constant6'
                    */
real_T Steering_Relative_Cmd_NonZero_Error_Thresh = 0.2;
                         /* Variable: Steering_Relative_Cmd_NonZero_Error_Thresh
                          * Referenced by: '<S270>/Constant9'
                          */
real_T Steering_Relative_Cmd_NonZero_Final_Scale_Factor = 1.0;
                   /* Variable: Steering_Relative_Cmd_NonZero_Final_Scale_Factor
                    * Referenced by: '<S270>/Constant10'
                    */
real_T Steering_Relative_Cmd_Rate_Limit_Dec = -10.0;
                               /* Variable: Steering_Relative_Cmd_Rate_Limit_Dec
                                * Referenced by: '<S270>/Constant1'
                                */
real_T Steering_Relative_Cmd_Rate_Limit_Inc = 10.0;
                               /* Variable: Steering_Relative_Cmd_Rate_Limit_Inc
                                * Referenced by: '<S270>/Constant3'
                                */
real_T Steering_Relative_Gain = 5.0;   /* Variable: Steering_Relative_Gain
                                        * Referenced by: '<S322>/Constant'
                                        */
real_T Steering_Twist_Gain = -0.5;     /* Variable: Steering_Twist_Gain
                                        * Referenced by: '<S322>/Constant1'
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
                        * Referenced by: '<S258>/Constant5'
                        */
real_T Translation_Speed_Approach_Zero_Final_Thresh = 0.01;
                       /* Variable: Translation_Speed_Approach_Zero_Final_Thresh
                        * Referenced by: '<S258>/Constant6'
                        */
real_T Translation_Speed_NonZero_Error_Thresh = 0.15;
                             /* Variable: Translation_Speed_NonZero_Error_Thresh
                              * Referenced by: '<S258>/Constant9'
                              */
real_T Translation_Speed_NonZero_Final_Scale_Factor = 0.05;
                       /* Variable: Translation_Speed_NonZero_Final_Scale_Factor
                        * Referenced by: '<S258>/Constant10'
                        */
real_T Translation_Speed_Rate_Limit_Dec = -4.0;
                                   /* Variable: Translation_Speed_Rate_Limit_Dec
                                    * Referenced by: '<S258>/Constant1'
                                    */
real_T Translation_Speed_Rate_Limit_Inc = 4.0;
                                   /* Variable: Translation_Speed_Rate_Limit_Inc
                                    * Referenced by: '<S258>/Constant3'
                                    */
real_T Translation_Twist_Gain = 0.5;   /* Variable: Translation_Twist_Gain
                                        * Referenced by: '<S323>/Gain'
                                        */
real_T Twist_Deadzone_neg = -0.01;     /* Variable: Twist_Deadzone_neg
                                        * Referenced by:
                                        *   '<S322>/Dead Zone'
                                        *   '<S323>/Dead Zone'
                                        */
real_T Twist_Deadzone_pos = 0.01;      /* Variable: Twist_Deadzone_pos
                                        * Referenced by:
                                        *   '<S322>/Dead Zone'
                                        *   '<S323>/Dead Zone'
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
  real_T rtb_Switch2_k[8];
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
  real_T rtb_Product2_e;
  real_T rtb_Product_d;
  real_T rtb_Product_j4;
  real_T rtb_Reshapey_idx_0;
  real_T rtb_Reshapey_idx_1;
  real_T rtb_Rotationmatrixfromlocalto_0;
  real_T rtb_Sin4;
  real_T rtb_Subtract1;
  real_T rtb_Subtract1_a;
  real_T rtb_Subtract1_do;
  real_T rtb_Subtract1_f;
  real_T rtb_Subtract1_of;
  real_T rtb_Subtract_e;
  real_T rtb_Sum_jt;
  real_T rtb_Switch1;
  real_T rtb_Switch1_p2;
  real_T rtb_Switch2;
  real_T rtb_Switch2_a;
  real_T rtb_Switch4;
  real_T rtb_Switch_ms;
  real_T rtb_rx;
  real_T rtb_rx_ht;
  real_T rtb_rx_i;
  real_T rtb_rx_kl;
  real_T rtb_rx_l;
  real_T rtb_thetay;
  real_T rtb_thetay_a;
  real_T u0;
  int32_T i;
  int32_T rtb_Num_Segments;
  int32_T tmp;
  int8_T rtAction;
  int8_T rtPrevAction;
  uint8_T rtb_GameState;
  boolean_T rtb_AND;
  boolean_T rtb_AND1;
  boolean_T rtb_AND2;
  boolean_T rtb_Compare_at;
  boolean_T rtb_Compare_m3;
  boolean_T rtb_FixPtRelationalOperator;
  boolean_T rtb_FixPtRelationalOperator_ea;
  boolean_T rtb_FixPtRelationalOperator_f;
  boolean_T rtb_Is_Absolute_Steering;
  boolean_T rtb_Is_Absolute_Translation_g;
  boolean_T rtb_Relative_Translation_Flag;
  boolean_T rtb_Swerve_Motors_Disabled;

  /* RelationalOperator: '<S35>/FixPt Relational Operator' incorporates:
   *  Inport: '<Root>/Joystick_Left_B11'
   *  UnitDelay: '<S35>/Delay Input1'
   *
   * Block description for '<S35>/Delay Input1':
   *
   *  Store in Global RAM
   */
  rtb_FixPtRelationalOperator = (Code_Gen_Model_U.Joystick_Left_B11 >
    Code_Gen_Model_DW.DelayInput1_DSTATE);

  /* RelationalOperator: '<S37>/FixPt Relational Operator' incorporates:
   *  Inport: '<Root>/Joystick_Left_B13'
   *  UnitDelay: '<S37>/Delay Input1'
   *
   * Block description for '<S37>/Delay Input1':
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

  /* RelationalOperator: '<S27>/Compare' incorporates:
   *  Constant: '<S27>/Constant'
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

  /* RelationalOperator: '<S34>/Compare' incorporates:
   *  Constant: '<S34>/Constant'
   *  Inport: '<Root>/Joystick_Left_B1'
   */
  Code_Gen_Model_B.Is_Boosting = (Code_Gen_Model_U.Joystick_Left_B1 != 0.0);

  /* RelationalOperator: '<S32>/Compare' incorporates:
   *  Constant: '<S32>/Constant'
   *  Inport: '<Root>/Joystick_Left_B3'
   */
  Code_Gen_Model_B.Align_Amp = (Code_Gen_Model_U.Joystick_Left_B3 != 0.0);

  /* RelationalOperator: '<S31>/Compare' incorporates:
   *  Constant: '<S31>/Constant'
   *  Inport: '<Root>/Joystick_Left_B4'
   */
  Code_Gen_Model_B.Align_Speaker = (Code_Gen_Model_U.Joystick_Left_B4 != 0.0);

  /* RelationalOperator: '<S30>/Compare' incorporates:
   *  Constant: '<S30>/Constant'
   *  Inport: '<Root>/Joystick_Right_B2'
   */
  Code_Gen_Model_B.Face_Toward_Driver = (Code_Gen_Model_U.Joystick_Right_B2 !=
    0.0);

  /* RelationalOperator: '<S28>/Compare' incorporates:
   *  Constant: '<S28>/Constant'
   *  Inport: '<Root>/Joystick_Right_B4'
   */
  Code_Gen_Model_B.Face_Right_Driver = (Code_Gen_Model_U.Joystick_Right_B4 !=
    0.0);

  /* RelationalOperator: '<S29>/Compare' incorporates:
   *  Constant: '<S29>/Constant'
   *  Inport: '<Root>/Joystick_Right_B3'
   */
  Code_Gen_Model_B.Face_Left_Driver = (Code_Gen_Model_U.Joystick_Right_B3 != 0.0);

  /* RelationalOperator: '<S26>/Compare' incorporates:
   *  Constant: '<S26>/Constant'
   *  Inport: '<Root>/Joystick_Right_POV'
   */
  Code_Gen_Model_B.Face_Away_Driver = (Code_Gen_Model_U.Joystick_Right_POV !=
    -1.0);

  /* Reshape: '<S38>/Reshapey' incorporates:
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

  /* Delay: '<S38>/MemoryX' incorporates:
   *  Constant: '<S38>/X0'
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

  /* Outputs for Enabled SubSystem: '<S65>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S91>/Enable'
   */
  if (rtb_AND) {
    Code_Gen_Model_DW.EnabledSubsystem_MODE = true;

    /* Sum: '<S91>/Add1' incorporates:
     *  Constant: '<S38>/C'
     *  Delay: '<S38>/MemoryX'
     *  Product: '<S91>/Product'
     */
    rtb_Switch1 = rtb_Reshapey_idx_0 - ((0.0 * Code_Gen_Model_DW.MemoryX_DSTATE
      [1]) + Code_Gen_Model_DW.MemoryX_DSTATE[0]);
    rtb_rx = rtb_Reshapey_idx_1 - ((0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[0]) +
      Code_Gen_Model_DW.MemoryX_DSTATE[1]);

    /* Product: '<S91>/Product2' incorporates:
     *  Constant: '<S39>/KalmanGainM'
     */
    Code_Gen_Model_B.Product2[0] = (0.09512492197250387 * rtb_Switch1) +
      (5.9896845167210271E-17 * rtb_rx);
    Code_Gen_Model_B.Product2[1] = (5.9896845167210271E-17 * rtb_Switch1) +
      (0.095124921972503981 * rtb_rx);
  } else if (Code_Gen_Model_DW.EnabledSubsystem_MODE) {
    /* Disable for Product: '<S91>/Product2' incorporates:
     *  Outport: '<S91>/deltax'
     */
    Code_Gen_Model_B.Product2[0] = 0.0;
    Code_Gen_Model_B.Product2[1] = 0.0;
    Code_Gen_Model_DW.EnabledSubsystem_MODE = false;
  }

  /* End of Outputs for SubSystem: '<S65>/Enabled Subsystem' */

  /* Sum: '<S65>/Add' incorporates:
   *  Delay: '<S38>/MemoryX'
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
   *  RelationalOperator: '<S25>/FixPt Relational Operator'
   *  Sum: '<S8>/Sum'
   *  UnitDelay: '<S25>/Delay Input1'
   *  UnitDelay: '<S8>/Unit Delay1'
   *
   * Block description for '<S25>/Delay Input1':
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

  /* Gain: '<S24>/Gain1' */
  Code_Gen_Model_B.Gyro_Angle_rad = 0.017453292519943295 *
    Code_Gen_Model_B.Gyro_Angle_Calibrated_deg;

  /* SwitchCase: '<S1>/Switch Case' incorporates:
   *  Inport: '<Root>/GameState'
   */
  rtPrevAction = Code_Gen_Model_DW.SwitchCase_ActiveSubsystem;
  u0 = trunc(Code_Gen_Model_U.GameState);
  if ((rtIsNaN(u0)) || (rtIsInf(u0))) {
    u0 = 0.0;
  } else {
    u0 = fmod(u0, 4.294967296E+9);
  }

  switch ((u0 < 0.0) ? (-((int32_T)((uint32_T)(-u0)))) : ((int32_T)((uint32_T)u0)))
  {
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
    rtb_rx = 0.0;

    /* SignalConversion generated from: '<S5>/Reset_Wheel_Offsets' incorporates:
     *  Constant: '<S5>/Constant13'
     */
    rtb_thetay = 0.0;

    /* SignalConversion generated from: '<S5>/Disable_Wheels' incorporates:
     *  Constant: '<S5>/Constant14'
     */
    rtb_rx_i = 0.0;

    /* SignalConversion generated from: '<S5>/Swerve_Motors_Disabled' incorporates:
     *  Constant: '<S5>/Constant12'
     */
    rtb_Swerve_Motors_Disabled = false;

    /* SignalConversion generated from: '<S5>/Elevator_Height_Desired' incorporates:
     *  Constant: '<S5>/Constant11'
     */
    rtb_Switch2_a = 0.0;

    /* SignalConversion generated from: '<S5>/Elevator_Motor_Enable' incorporates:
     *  Constant: '<S5>/Constant15'
     */
    rtb_Compare_m3 = false;

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
    rtb_rx = 0.0;

    /* SignalConversion generated from: '<S2>/Reset_Wheel_Offsets' incorporates:
     *  Constant: '<S2>/Constant13'
     */
    rtb_thetay = 0.0;

    /* SignalConversion generated from: '<S2>/Disable_Wheels' incorporates:
     *  Constant: '<S2>/Constant14'
     */
    rtb_rx_i = 0.0;

    /* SignalConversion generated from: '<S2>/Swerve_Motors_Disabled' incorporates:
     *  Constant: '<S2>/Constant4'
     */
    rtb_Swerve_Motors_Disabled = false;

    /* SignalConversion generated from: '<S2>/Elevator_Height_Desired' incorporates:
     *  Constant: '<S2>/Constant11'
     */
    rtb_Switch2_a = 0.0;

    /* SignalConversion generated from: '<S2>/Elevator_Motor_Enable' incorporates:
     *  Constant: '<S2>/Constant12'
     */
    rtb_Compare_m3 = false;

    /* End of Outputs for SubSystem: '<S1>/Autonomous' */
    break;

   case 2:
    /* Outputs for IfAction SubSystem: '<S1>/Teleop' incorporates:
     *  ActionPort: '<S18>/Action Port'
     */
    /* Logic: '<S319>/Logical Operator3' incorporates:
     *  Inport: '<Root>/IsBlueAlliance'
     */
    rtb_Compare_m3 = ((Code_Gen_Model_B.Align_Amp) &&
                      (Code_Gen_Model_U.IsBlueAlliance != 0.0));

    /* Logic: '<S319>/Logical Operator2' incorporates:
     *  Inport: '<Root>/IsBlueAlliance'
     *  Logic: '<S319>/Logical Operator10'
     */
    rtb_Swerve_Motors_Disabled = ((Code_Gen_Model_B.Align_Amp) &&
      (!(Code_Gen_Model_U.IsBlueAlliance != 0.0)));

    /* Switch: '<S319>/Switch15' incorporates:
     *  Switch: '<S319>/Switch16'
     *  Switch: '<S319>/Switch23'
     *  Switch: '<S319>/Switch24'
     */
    if (rtb_Swerve_Motors_Disabled) {
      /* Switch: '<S319>/Switch15' incorporates:
       *  Constant: '<S319>/Constant9'
       *  Sum: '<S319>/Add17'
       */
      Code_Gen_Model_B.AT_Error_X = AT_Target_Tag_5_X -
        Code_Gen_Model_B.KF_Position_X;

      /* Switch: '<S319>/Switch23' incorporates:
       *  Constant: '<S319>/Constant28'
       *  Sum: '<S319>/Add23'
       */
      Code_Gen_Model_B.AT_Error_Y = AT_Target_Tag_5_Y -
        Code_Gen_Model_B.KF_Position_Y;
    } else if (rtb_Compare_m3) {
      /* Switch: '<S319>/Switch15' incorporates:
       *  Constant: '<S319>/Constant5'
       *  Sum: '<S319>/Add16'
       *  Switch: '<S319>/Switch16'
       */
      Code_Gen_Model_B.AT_Error_X = AT_Target_Tag_6_X -
        Code_Gen_Model_B.KF_Position_X;

      /* Switch: '<S319>/Switch23' incorporates:
       *  Constant: '<S319>/Constant27'
       *  Sum: '<S319>/Add22'
       *  Switch: '<S319>/Switch24'
       */
      Code_Gen_Model_B.AT_Error_Y = AT_Target_Tag_6_Y -
        Code_Gen_Model_B.KF_Position_Y;
    } else {
      /* Switch: '<S319>/Switch15' incorporates:
       *  Constant: '<S319>/Constant1'
       *  Switch: '<S319>/Switch1'
       *  Switch: '<S319>/Switch12'
       *  Switch: '<S319>/Switch13'
       *  Switch: '<S319>/Switch14'
       *  Switch: '<S319>/Switch16'
       *  Switch: '<S319>/Switch17'
       *  Switch: '<S319>/Switch18'
       */
      Code_Gen_Model_B.AT_Error_X = 0.0;

      /* Switch: '<S319>/Switch23' incorporates:
       *  Constant: '<S319>/Constant2'
       *  Switch: '<S319>/Switch19'
       *  Switch: '<S319>/Switch20'
       *  Switch: '<S319>/Switch21'
       *  Switch: '<S319>/Switch22'
       *  Switch: '<S319>/Switch24'
       *  Switch: '<S319>/Switch25'
       *  Switch: '<S319>/Switch26'
       */
      Code_Gen_Model_B.AT_Error_Y = 0.0;
    }

    /* End of Switch: '<S319>/Switch15' */

    /* Switch: '<S335>/Switch1' incorporates:
     *  Constant: '<S340>/Constant'
     *  Constant: '<S341>/Constant'
     *  Logic: '<S335>/AND'
     *  RelationalOperator: '<S340>/Compare'
     *  RelationalOperator: '<S341>/Compare'
     *  Switch: '<S335>/Switch2'
     *  UnitDelay: '<S335>/Unit Delay'
     *  UnitDelay: '<S335>/Unit Delay1'
     */
    if ((Code_Gen_Model_B.Drive_Joystick_X == 0.0) &&
        (Code_Gen_Model_B.Drive_Joystick_Y == 0.0)) {
      rtb_Switch1_p2 = Code_Gen_Model_DW.UnitDelay1_DSTATE_l;
      rtb_Switch2 = Code_Gen_Model_DW.UnitDelay_DSTATE_p;
    } else {
      rtb_Switch1_p2 = Code_Gen_Model_B.Drive_Joystick_Y;
      rtb_Switch2 = Code_Gen_Model_B.Drive_Joystick_X;
    }

    /* End of Switch: '<S335>/Switch1' */

    /* Lookup_n-D: '<S323>/Modulation_Drv' incorporates:
     *  Math: '<S323>/Magnitude'
     */
    rtb_rx_i = look1_binlcpw(rt_hypotd_snf(Code_Gen_Model_B.Drive_Joystick_X,
      Code_Gen_Model_B.Drive_Joystick_Y),
      Code_Gen_Model_ConstP.Modulation_Drv_bp01Data,
      Code_Gen_Model_ConstP.Modulation_Drv_tableData, 20U);

    /* RelationalOperator: '<S333>/Compare' incorporates:
     *  Constant: '<S333>/Constant'
     */
    rtb_Compare_at = (rtb_rx_i == 0.0);

    /* DeadZone: '<S323>/Dead Zone' */
    if (Code_Gen_Model_B.Drive_Joystick_Z > Twist_Deadzone_pos) {
      rtb_thetay = Code_Gen_Model_B.Drive_Joystick_Z - Twist_Deadzone_pos;
    } else if (Code_Gen_Model_B.Drive_Joystick_Z >= Twist_Deadzone_neg) {
      rtb_thetay = 0.0;
    } else {
      rtb_thetay = Code_Gen_Model_B.Drive_Joystick_Z - Twist_Deadzone_neg;
    }

    /* End of DeadZone: '<S323>/Dead Zone' */

    /* Logic: '<S323>/Logical Operator' incorporates:
     *  Constant: '<S334>/Constant'
     *  RelationalOperator: '<S334>/Compare'
     */
    rtb_Relative_Translation_Flag = ((rtb_thetay != 0.0) && rtb_Compare_at);

    /* Switch: '<S323>/Switch1' incorporates:
     *  Switch: '<S323>/Switch4'
     */
    if (rtb_Relative_Translation_Flag) {
      /* Switch: '<S323>/Switch5' */
      if (Code_Gen_Model_B.Drive_Joystick_Z_Mode) {
        /* Merge: '<S12>/Merge3' incorporates:
         *  Constant: '<S323>/Constant3'
         */
        Code_Gen_Model_B.Translation_Angle = -1.5707963267948966;
      } else {
        /* Merge: '<S12>/Merge3' incorporates:
         *  Constant: '<S323>/Constant4'
         */
        Code_Gen_Model_B.Translation_Angle = 0.0;
      }

      /* End of Switch: '<S323>/Switch5' */
    } else if (rtb_Compare_at) {
      /* Switch: '<S323>/Switch6' incorporates:
       *  Constant: '<S323>/Constant'
       *  Constant: '<S323>/Constant1'
       *  Inport: '<Root>/IsBlueAlliance'
       *  Switch: '<S323>/Switch4'
       */
      if (Code_Gen_Model_U.IsBlueAlliance != 0.0) {
        u0 = 0.0;
      } else {
        u0 = 3.1415926535897931;
      }

      /* Merge: '<S12>/Merge3' incorporates:
       *  Sum: '<S323>/Add1'
       *  Switch: '<S323>/Switch4'
       *  Switch: '<S323>/Switch6'
       *  Trigonometry: '<S323>/Atan1'
       */
      Code_Gen_Model_B.Translation_Angle = rt_atan2d_snf
        (Code_Gen_Model_B.AT_Error_Y, Code_Gen_Model_B.AT_Error_X) + u0;
    } else {
      /* Merge: '<S12>/Merge3' incorporates:
       *  Switch: '<S323>/Switch4'
       *  Trigonometry: '<S323>/Atan2'
       */
      Code_Gen_Model_B.Translation_Angle = rt_atan2d_snf(rtb_Switch1_p2,
        rtb_Switch2);
    }

    /* End of Switch: '<S323>/Switch1' */

    /* Switch: '<S18>/Switch' incorporates:
     *  Constant: '<S18>/Constant5'
     *  Constant: '<S18>/Constant7'
     *  DataTypeConversion: '<S18>/Data Type Conversion'
     *  Switch: '<S323>/Switch3'
     */
    if (TEST_Swerve_Mode_Override_Flag != 0.0) {
      rtb_Is_Absolute_Translation_g = (TEST_Swerve_Mode_Translation != 0.0);
    } else {
      rtb_Is_Absolute_Translation_g = !rtb_Relative_Translation_Flag;
    }

    /* End of Switch: '<S18>/Switch' */

    /* DeadZone: '<S322>/Dead Zone' */
    if (Code_Gen_Model_B.Steer_Joystick_Z > Twist_Deadzone_pos) {
      u0 = Code_Gen_Model_B.Steer_Joystick_Z - Twist_Deadzone_pos;
    } else if (Code_Gen_Model_B.Steer_Joystick_Z >= Twist_Deadzone_neg) {
      u0 = 0.0;
    } else {
      u0 = Code_Gen_Model_B.Steer_Joystick_Z - Twist_Deadzone_neg;
    }

    /* Sum: '<S322>/Add' incorporates:
     *  Constant: '<S322>/Constant'
     *  Constant: '<S322>/Constant1'
     *  DeadZone: '<S322>/Dead Zone'
     *  Lookup_n-D: '<S322>/Modulation_Str_Y_Rel'
     *  Product: '<S322>/Product'
     *  Product: '<S322>/Product1'
     *  SignalConversion: '<S9>/Signal Copy5'
     */
    rtb_Switch2_a = (look1_binlcpw(Code_Gen_Model_B.Steer_Joystick_Y,
      Code_Gen_Model_ConstP.Modulation_Str_Y_Rel_bp01Data,
      Code_Gen_Model_ConstP.Modulation_Str_Y_Rel_tableData, 20U) *
                     Steering_Relative_Gain) + (u0 * Steering_Twist_Gain);

    /* RelationalOperator: '<S324>/Compare' incorporates:
     *  Constant: '<S324>/Constant'
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

    /* Logic: '<S319>/Logical Operator11' */
    rtb_FixPtRelationalOperator_ea = ((Code_Gen_Model_B.Align_Amp) ||
      (Code_Gen_Model_B.Align_Speaker));

    /* RelationalOperator: '<S329>/FixPt Relational Operator' incorporates:
     *  UnitDelay: '<S329>/Delay Input1'
     *
     * Block description for '<S329>/Delay Input1':
     *
     *  Store in Global RAM
     */
    rtb_FixPtRelationalOperator_f = (((int32_T)rtb_FixPtRelationalOperator_ea) >
      ((int32_T)Code_Gen_Model_DW.DelayInput1_DSTATE_f));

    /* Logic: '<S322>/AND2' incorporates:
     *  RelationalOperator: '<S325>/FixPt Relational Operator'
     *  RelationalOperator: '<S326>/FixPt Relational Operator'
     *  RelationalOperator: '<S327>/FixPt Relational Operator'
     *  RelationalOperator: '<S328>/FixPt Relational Operator'
     *  UnitDelay: '<S325>/Delay Input1'
     *  UnitDelay: '<S326>/Delay Input1'
     *  UnitDelay: '<S327>/Delay Input1'
     *  UnitDelay: '<S328>/Delay Input1'
     *
     * Block description for '<S325>/Delay Input1':
     *
     *  Store in Global RAM
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
     */
    rtb_AND2 = ((((((int32_T)Code_Gen_Model_B.Face_Away_Driver) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_m)) || (((int32_T)
      Code_Gen_Model_B.Face_Left_Driver) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_k))) || (((int32_T)
      Code_Gen_Model_B.Face_Toward_Driver) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_g))) || (((int32_T)
      Code_Gen_Model_B.Face_Right_Driver) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_g2)));

    /* Logic: '<S322>/AND1' incorporates:
     *  Logic: '<S322>/AND3'
     *  Logic: '<S322>/AND7'
     *  UnitDelay: '<S322>/Unit Delay2'
     */
    rtb_AND1 = ((rtb_FixPtRelationalOperator && (!rtb_FixPtRelationalOperator_f))
                && (rtb_AND2 || (Code_Gen_Model_DW.UnitDelay2_DSTATE)));

    /* Logic: '<S322>/AND4' incorporates:
     *  Logic: '<S322>/AND5'
     *  Logic: '<S322>/AND8'
     *  UnitDelay: '<S322>/Unit Delay4'
     */
    rtb_FixPtRelationalOperator_f = ((rtb_FixPtRelationalOperator && (!rtb_AND2))
      && (rtb_FixPtRelationalOperator_f || (Code_Gen_Model_DW.UnitDelay4_DSTATE)));

    /* Logic: '<S322>/AND6' */
    Code_Gen_Model_B.Steering_Abs_Angle_Active = (rtb_AND1 ||
      rtb_FixPtRelationalOperator_f);

    /* Switch: '<S322>/Switch8' incorporates:
     *  Constant: '<S331>/Constant'
     *  Logic: '<S322>/AND9'
     *  RelationalOperator: '<S330>/FixPt Relational Operator'
     *  RelationalOperator: '<S331>/Compare'
     *  UnitDelay: '<S14>/Unit Delay'
     *  UnitDelay: '<S330>/Delay Input1'
     *
     * Block description for '<S330>/Delay Input1':
     *
     *  Store in Global RAM
     */
    if (((Code_Gen_Model_B.Steering_Abs_Angle_Active) || (((int32_T)
           rtb_FixPtRelationalOperator) > ((int32_T)
           Code_Gen_Model_DW.DelayInput1_DSTATE_j))) ||
        (Code_Gen_Model_B.Active_GameState != 2)) {
      /* Switch: '<S322>/Switch8' */
      Code_Gen_Model_B.Steering_Abs_Gyro_Latch = Code_Gen_Model_B.Gyro_Angle_rad;
    }

    /* End of Switch: '<S322>/Switch8' */

    /* Switch: '<S322>/Switch2' */
    if (Code_Gen_Model_B.Steering_Abs_Angle_Active) {
      /* Switch: '<S322>/Switch2' incorporates:
       *  Constant: '<S322>/Constant2'
       */
      Code_Gen_Model_B.Steering_Abs_Gyro = 0.0;
    } else {
      /* Switch: '<S322>/Switch2' */
      Code_Gen_Model_B.Steering_Abs_Gyro =
        Code_Gen_Model_B.Steering_Abs_Gyro_Latch;
    }

    /* End of Switch: '<S322>/Switch2' */

    /* Logic: '<S319>/Logical Operator' incorporates:
     *  Logic: '<S319>/Logical Operator1'
     *  Logic: '<S319>/Logical Operator13'
     *  UnitDelay: '<S319>/Unit Delay'
     */
    Code_Gen_Model_B.previous_call_was_for_speaker =
      ((!Code_Gen_Model_B.Align_Amp) && ((Code_Gen_Model_B.Align_Speaker) ||
        (Code_Gen_Model_B.previous_call_was_for_speaker)));

    /* Switch: '<S319>/Switch2' incorporates:
     *  Switch: '<S319>/Switch4'
     *  Switch: '<S319>/Switch5'
     */
    if (Code_Gen_Model_B.previous_call_was_for_speaker) {
      /* Switch: '<S319>/Switch2' incorporates:
       *  Constant: '<S18>/Constant'
       */
      Code_Gen_Model_B.AT_Target_Angle = 0.0;
    } else if (rtb_Swerve_Motors_Disabled) {
      /* Switch: '<S319>/Switch2' incorporates:
       *  Constant: '<S319>/Constant14'
       *  Switch: '<S319>/Switch4'
       */
      Code_Gen_Model_B.AT_Target_Angle = AT_Target_Tag_5_Field_Angle;
    } else if (rtb_Compare_m3) {
      /* Switch: '<S319>/Switch2' incorporates:
       *  Constant: '<S319>/Constant13'
       *  Switch: '<S319>/Switch4'
       *  Switch: '<S319>/Switch5'
       */
      Code_Gen_Model_B.AT_Target_Angle = AT_Target_Tag_6_Field_Angle;
    }

    /* End of Switch: '<S319>/Switch2' */

    /* Switch: '<S322>/Switch4' incorporates:
     *  Constant: '<S322>/Constant5'
     *  Switch: '<S322>/Switch1'
     *  Switch: '<S322>/Switch5'
     *  Switch: '<S322>/Switch6'
     *  Switch: '<S322>/Switch7'
     */
    if (Code_Gen_Model_B.Face_Away_Driver) {
      rtb_Switch4 = 0.0;
    } else if (Code_Gen_Model_B.Face_Left_Driver) {
      /* Switch: '<S322>/Switch5' incorporates:
       *  Constant: '<S322>/Constant6'
       */
      rtb_Switch4 = 1.5707963267948966;
    } else if (Code_Gen_Model_B.Face_Toward_Driver) {
      /* Switch: '<S322>/Switch6' incorporates:
       *  Constant: '<S322>/Constant7'
       *  Switch: '<S322>/Switch5'
       */
      rtb_Switch4 = 3.1415926535897931;
    } else if (Code_Gen_Model_B.Face_Right_Driver) {
      /* Switch: '<S322>/Switch7' incorporates:
       *  Constant: '<S322>/Constant8'
       *  Switch: '<S322>/Switch5'
       *  Switch: '<S322>/Switch6'
       */
      rtb_Switch4 = 4.71238898038469;
    } else if (rtb_FixPtRelationalOperator_f) {
      /* Switch: '<S322>/Switch1' incorporates:
       *  Switch: '<S322>/Switch5'
       *  Switch: '<S322>/Switch6'
       *  Switch: '<S322>/Switch7'
       */
      rtb_Switch4 = Code_Gen_Model_B.AT_Target_Angle;
    } else {
      /* Switch: '<S322>/Switch6' incorporates:
       *  Switch: '<S322>/Switch5'
       *  Switch: '<S322>/Switch7'
       *  UnitDelay: '<S322>/Unit Delay1'
       */
      rtb_Switch4 = Code_Gen_Model_DW.UnitDelay1_DSTATE_j;
    }

    /* End of Switch: '<S322>/Switch4' */

    /* Switch: '<S322>/Switch3' */
    if (Code_Gen_Model_B.Steering_Abs_Angle_Active) {
      /* Switch: '<S322>/Switch3' */
      Code_Gen_Model_B.Steering_Abs_Angle = rtb_Switch4;
    } else {
      /* Switch: '<S322>/Switch3' incorporates:
       *  Constant: '<S322>/Constant3'
       */
      Code_Gen_Model_B.Steering_Abs_Angle = 0.0;
    }

    /* End of Switch: '<S322>/Switch3' */

    /* Merge: '<S12>/Merge1' incorporates:
     *  Sum: '<S322>/Add1'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd = Code_Gen_Model_B.Steering_Abs_Angle +
      Code_Gen_Model_B.Steering_Abs_Gyro;

    /* Merge: '<S12>/Merge2' incorporates:
     *  SignalConversion: '<S322>/Signal Copy'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd = rtb_Switch2_a;

    /* Switch: '<S332>/Switch1' incorporates:
     *  Constant: '<S332>/Constant'
     *  Constant: '<S332>/Constant1'
     */
    if (Code_Gen_Model_B.Is_Boosting) {
      rtb_Init = Boost_Trigger_High_Speed;
    } else {
      rtb_Init = Boost_Trigger_Low_Speed;
    }

    /* End of Switch: '<S332>/Switch1' */

    /* Switch: '<S339>/Init' incorporates:
     *  UnitDelay: '<S339>/FixPt Unit Delay1'
     *  UnitDelay: '<S339>/FixPt Unit Delay2'
     */
    if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_a != 0) {
      rtb_Switch2_a = rtb_Init;
    } else {
      rtb_Switch2_a = Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_f;
    }

    /* End of Switch: '<S339>/Init' */

    /* Sum: '<S337>/Sum1' */
    rtb_rx = rtb_Init - rtb_Switch2_a;

    /* Switch: '<S338>/Switch2' incorporates:
     *  Constant: '<S336>/Constant1'
     *  Constant: '<S336>/Constant3'
     *  RelationalOperator: '<S338>/LowerRelop1'
     *  RelationalOperator: '<S338>/UpperRelop'
     *  Switch: '<S338>/Switch'
     */
    if (rtb_rx > Boost_Trigger_Increasing_Limit) {
      rtb_rx = Boost_Trigger_Increasing_Limit;
    } else if (rtb_rx < Boost_Trigger_Decreasing_Limit) {
      /* Switch: '<S338>/Switch' incorporates:
       *  Constant: '<S336>/Constant1'
       */
      rtb_rx = Boost_Trigger_Decreasing_Limit;
    }

    /* Sum: '<S337>/Sum' incorporates:
     *  Switch: '<S338>/Switch2'
     */
    rtb_Sum_jt = rtb_rx + rtb_Switch2_a;

    /* Switch: '<S323>/Switch' incorporates:
     *  Switch: '<S323>/Switch2'
     */
    if (rtb_Relative_Translation_Flag) {
      /* Merge: '<S12>/Merge4' incorporates:
       *  Gain: '<S323>/Gain'
       */
      Code_Gen_Model_B.Translation_Speed = Translation_Twist_Gain * rtb_thetay;
    } else if (rtb_Compare_at) {
      /* Merge: '<S12>/Merge4' incorporates:
       *  Gain: '<S323>/Gain2'
       *  Math: '<S323>/Magnitude1'
       *  Switch: '<S323>/Switch2'
       */
      Code_Gen_Model_B.Translation_Speed = AT_XY_Control_Gain * rt_hypotd_snf
        (Code_Gen_Model_B.AT_Error_X, Code_Gen_Model_B.AT_Error_Y);
    } else {
      /* Product: '<S332>/Product' incorporates:
       *  Switch: '<S323>/Switch2'
       */
      u0 = rtb_rx_i * rtb_Sum_jt;

      /* Saturate: '<S332>/Saturation' incorporates:
       *  Switch: '<S323>/Switch2'
       */
      if (u0 > Boost_Trigger_High_Speed) {
        /* Merge: '<S12>/Merge4' */
        Code_Gen_Model_B.Translation_Speed = Boost_Trigger_High_Speed;
      } else if (u0 < (-Boost_Trigger_High_Speed)) {
        /* Merge: '<S12>/Merge4' */
        Code_Gen_Model_B.Translation_Speed = -Boost_Trigger_High_Speed;
      } else {
        /* Merge: '<S12>/Merge4' */
        Code_Gen_Model_B.Translation_Speed = u0;
      }

      /* End of Saturate: '<S332>/Saturation' */
    }

    /* End of Switch: '<S323>/Switch' */

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
    rtb_rx = 0.0;

    /* SignalConversion generated from: '<S18>/Reset_Wheel_Offsets' incorporates:
     *  Constant: '<S18>/Constant13'
     */
    rtb_thetay = 0.0;

    /* SignalConversion generated from: '<S18>/Disable_Wheels' incorporates:
     *  Constant: '<S18>/Constant14'
     */
    rtb_rx_i = 0.0;

    /* SignalConversion generated from: '<S18>/Swerve_Motors_Disabled' incorporates:
     *  Constant: '<S18>/Constant2'
     */
    rtb_Swerve_Motors_Disabled = false;

    /* SignalConversion generated from: '<S18>/Elevator_Motor_Enable' incorporates:
     *  Constant: '<S321>/Constant5'
     */
    rtb_Compare_m3 = true;

    /* Switch: '<S321>/Switch' incorporates:
     *  Constant: '<S321>/Constant'
     *  Inport: '<Root>/Gamepad_B1_A'
     *  Inport: '<Root>/Gamepad_B2_B'
     *  Inport: '<Root>/Gamepad_B3_X'
     *  Inport: '<Root>/Gamepad_B4_Y'
     *  Inport: '<Root>/Gamepad_Start'
     *  RelationalOperator: '<S342>/FixPt Relational Operator'
     *  RelationalOperator: '<S343>/FixPt Relational Operator'
     *  RelationalOperator: '<S344>/FixPt Relational Operator'
     *  RelationalOperator: '<S345>/FixPt Relational Operator'
     *  RelationalOperator: '<S346>/FixPt Relational Operator'
     *  Switch: '<S321>/Switch1'
     *  Switch: '<S321>/Switch2'
     *  Switch: '<S321>/Switch3'
     *  Switch: '<S321>/Switch4'
     *  UnitDelay: '<S342>/Delay Input1'
     *  UnitDelay: '<S343>/Delay Input1'
     *  UnitDelay: '<S344>/Delay Input1'
     *  UnitDelay: '<S345>/Delay Input1'
     *  UnitDelay: '<S346>/Delay Input1'
     *
     * Block description for '<S342>/Delay Input1':
     *
     *  Store in Global RAM
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
     */
    if (Code_Gen_Model_U.Gamepad_B1_A > Code_Gen_Model_DW.DelayInput1_DSTATE_c)
    {
      rtb_Switch_ms = Elevator_Height_L1;
    } else if (Code_Gen_Model_U.Gamepad_B2_B >
               Code_Gen_Model_DW.DelayInput1_DSTATE_nr) {
      /* Switch: '<S321>/Switch1' incorporates:
       *  Constant: '<S321>/Constant1'
       */
      rtb_Switch_ms = Elevator_Height_L3;
    } else if (Code_Gen_Model_U.Gamepad_B3_X >
               Code_Gen_Model_DW.DelayInput1_DSTATE_ez) {
      /* Switch: '<S321>/Switch2' incorporates:
       *  Constant: '<S321>/Constant2'
       *  Switch: '<S321>/Switch1'
       */
      rtb_Switch_ms = Elevator_Height_L2;
    } else if (Code_Gen_Model_U.Gamepad_B4_Y >
               Code_Gen_Model_DW.DelayInput1_DSTATE_nh) {
      /* Switch: '<S321>/Switch3' incorporates:
       *  Constant: '<S321>/Constant3'
       *  Switch: '<S321>/Switch1'
       *  Switch: '<S321>/Switch2'
       */
      rtb_Switch_ms = Elevator_Height_L4;
    } else if (Code_Gen_Model_U.Gamepad_Start >
               Code_Gen_Model_DW.DelayInput1_DSTATE_i) {
      /* Switch: '<S321>/Switch4' incorporates:
       *  Constant: '<S321>/Constant4'
       *  Switch: '<S321>/Switch1'
       *  Switch: '<S321>/Switch2'
       *  Switch: '<S321>/Switch3'
       */
      rtb_Switch_ms = Elevator_Height_Pickup;
    } else {
      /* Switch: '<S321>/Switch2' incorporates:
       *  Switch: '<S321>/Switch1'
       *  Switch: '<S321>/Switch3'
       *  UnitDelay: '<S321>/Unit Delay'
       */
      rtb_Switch_ms = Code_Gen_Model_DW.UnitDelay_DSTATE_ad;
    }

    /* End of Switch: '<S321>/Switch' */

    /* Switch: '<S350>/Init' incorporates:
     *  UnitDelay: '<S350>/FixPt Unit Delay1'
     *  UnitDelay: '<S350>/FixPt Unit Delay2'
     */
    if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_h != 0) {
      rtb_Init = rtb_Switch_ms;
    } else {
      rtb_Init = Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_i;
    }

    /* End of Switch: '<S350>/Init' */

    /* Sum: '<S348>/Sum1' */
    rtb_Switch2_a = rtb_Switch_ms - rtb_Init;

    /* Switch: '<S349>/Switch2' incorporates:
     *  Constant: '<S347>/Constant1'
     *  Constant: '<S347>/Constant3'
     *  RelationalOperator: '<S349>/LowerRelop1'
     *  RelationalOperator: '<S349>/UpperRelop'
     *  Switch: '<S349>/Switch'
     */
    if (rtb_Switch2_a > Elevator_Height_RL_Inc) {
      rtb_Switch2_a = Elevator_Height_RL_Inc;
    } else if (rtb_Switch2_a < Elevator_Height_RL_Dec) {
      /* Switch: '<S349>/Switch' incorporates:
       *  Constant: '<S347>/Constant1'
       */
      rtb_Switch2_a = Elevator_Height_RL_Dec;
    }

    /* End of Switch: '<S349>/Switch2' */

    /* Sum: '<S348>/Sum' */
    rtb_Switch2_a += rtb_Init;

    /* Update for UnitDelay: '<S335>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_l = rtb_Switch1_p2;

    /* Update for UnitDelay: '<S335>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_p = rtb_Switch2;

    /* Update for UnitDelay: '<S330>/Delay Input1'
     *
     * Block description for '<S330>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_j = rtb_FixPtRelationalOperator;

    /* Update for UnitDelay: '<S329>/Delay Input1'
     *
     * Block description for '<S329>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_f = rtb_FixPtRelationalOperator_ea;

    /* Update for UnitDelay: '<S325>/Delay Input1'
     *
     * Block description for '<S325>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_m = Code_Gen_Model_B.Face_Away_Driver;

    /* Update for UnitDelay: '<S326>/Delay Input1'
     *
     * Block description for '<S326>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_k = Code_Gen_Model_B.Face_Left_Driver;

    /* Update for UnitDelay: '<S327>/Delay Input1'
     *
     * Block description for '<S327>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_g = Code_Gen_Model_B.Face_Toward_Driver;

    /* Update for UnitDelay: '<S328>/Delay Input1'
     *
     * Block description for '<S328>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_g2 = Code_Gen_Model_B.Face_Right_Driver;

    /* Update for UnitDelay: '<S322>/Unit Delay2' */
    Code_Gen_Model_DW.UnitDelay2_DSTATE = rtb_AND1;

    /* Update for UnitDelay: '<S322>/Unit Delay4' */
    Code_Gen_Model_DW.UnitDelay4_DSTATE = rtb_FixPtRelationalOperator_f;

    /* Update for UnitDelay: '<S322>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_j = rtb_Switch4;

    /* Update for UnitDelay: '<S339>/FixPt Unit Delay2' incorporates:
     *  Constant: '<S339>/FixPt Constant'
     */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_a = 0U;

    /* Update for UnitDelay: '<S339>/FixPt Unit Delay1' */
    Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_f = rtb_Sum_jt;

    /* Update for UnitDelay: '<S342>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_B1_A'
     *
     * Block description for '<S342>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_c = Code_Gen_Model_U.Gamepad_B1_A;

    /* Update for UnitDelay: '<S343>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_B2_B'
     *
     * Block description for '<S343>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_nr = Code_Gen_Model_U.Gamepad_B2_B;

    /* Update for UnitDelay: '<S344>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_B3_X'
     *
     * Block description for '<S344>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_ez = Code_Gen_Model_U.Gamepad_B3_X;

    /* Update for UnitDelay: '<S345>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_B4_Y'
     *
     * Block description for '<S345>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_nh = Code_Gen_Model_U.Gamepad_B4_Y;

    /* Update for UnitDelay: '<S346>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_Start'
     *
     * Block description for '<S346>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_i = Code_Gen_Model_U.Gamepad_Start;

    /* Update for UnitDelay: '<S321>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_ad = rtb_Switch_ms;

    /* Update for UnitDelay: '<S350>/FixPt Unit Delay2' incorporates:
     *  Constant: '<S350>/FixPt Constant'
     */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_h = 0U;

    /* Update for UnitDelay: '<S350>/FixPt Unit Delay1' */
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

    /* SignalConversion generated from: '<S19>/Elevator_Height_Desired' incorporates:
     *  Constant: '<S19>/Constant10'
     */
    rtb_Switch2_a = 0.0;

    /* SignalConversion generated from: '<S19>/Elevator_Motor_Enable' incorporates:
     *  Constant: '<S19>/Constant11'
     */
    rtb_Compare_m3 = false;

    /* DataTypeConversion: '<S19>/Cast To Boolean1' */
    rtb_rx = rtb_FixPtRelationalOperator;

    /* DataTypeConversion: '<S19>/Cast To Boolean3' */
    rtb_rx_i = rtb_FixPtRelationalOperator_ea;

    /* DataTypeConversion: '<S19>/Cast To Boolean2' incorporates:
     *  Inport: '<Root>/Joystick_Left_B12'
     *  RelationalOperator: '<S36>/FixPt Relational Operator'
     *  UnitDelay: '<S36>/Delay Input1'
     *
     * Block description for '<S36>/Delay Input1':
     *
     *  Store in Global RAM
     */
    rtb_thetay = (Code_Gen_Model_U.Joystick_Left_B12 >
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
    u0 = 0.0;
  } else {
    u0 = 3.1415926535897931;
  }

  /* Sum: '<S8>/Add' incorporates:
   *  Switch: '<S8>/Switch'
   */
  Code_Gen_Model_B.Gyro_Angle_Field_rad = Code_Gen_Model_B.Gyro_Angle_rad + u0;

  /* If: '<S15>/If' incorporates:
   *  Constant: '<S104>/Constant'
   *  Merge: '<S15>/Merge'
   *  Merge: '<S15>/Merge1'
   *  Merge: '<S15>/Merge2'
   *  Merge: '<S15>/Merge3'
   *  Merge: '<S15>/Merge4'
   *  Merge: '<S15>/Merge5'
   *  Merge: '<S15>/Merge7'
   *  Merge: '<S15>/Merge8'
   *  SignalConversion generated from: '<S104>/Robot_Reached_Destination'
   */
  rtPrevAction = Code_Gen_Model_DW.If_ActiveSubsystem;
  Code_Gen_Model_DW.If_ActiveSubsystem = 1;
  if ((rtPrevAction != 1) && (rtPrevAction == 0)) {
    /* Disable for If: '<S110>/If' */
    if (Code_Gen_Model_DW.If_ActiveSubsystem_h == 0) {
      /* Disable for If: '<S113>/If' */
      if (Code_Gen_Model_DW.If_ActiveSubsystem_o == 0) {
        /* Disable for If: '<S115>/If' */
        Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;
      }

      Code_Gen_Model_DW.If_ActiveSubsystem_o = -1;

      /* End of Disable for If: '<S113>/If' */
    }

    Code_Gen_Model_DW.If_ActiveSubsystem_h = -1;

    /* End of Disable for If: '<S110>/If' */
  }

  /* Outputs for IfAction SubSystem: '<S15>/Pass Through' incorporates:
   *  ActionPort: '<S104>/Action Port'
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

  /* UnitDelay: '<S258>/Unit Delay' */
  rtb_Merge1 = Code_Gen_Model_B.Translation_Speed_RL;

  /* Signum: '<S258>/Sign2' */
  if (rtIsNaN(rtb_Merge1)) {
    u0 = (rtNaN);
  } else if (rtb_Merge1 < 0.0) {
    u0 = -1.0;
  } else {
    u0 = (rtb_Merge1 > 0.0);
  }

  /* Signum: '<S258>/Sign1' */
  if (rtIsNaN(Code_Gen_Model_B.Translation_Speed_SPF)) {
    rtb_Add_du = (rtNaN);
  } else if (Code_Gen_Model_B.Translation_Speed_SPF < 0.0) {
    rtb_Add_du = -1.0;
  } else {
    rtb_Add_du = (Code_Gen_Model_B.Translation_Speed_SPF > 0.0);
  }

  /* Product: '<S258>/Product1' incorporates:
   *  Signum: '<S258>/Sign1'
   *  Signum: '<S258>/Sign2'
   */
  u0 *= rtb_Add_du;
  if (rtIsNaN(u0)) {
    rtb_Num_Segments = 0;
  } else {
    rtb_Num_Segments = (int32_T)fmod(u0, 256.0);
  }

  /* Switch: '<S258>/Switch' incorporates:
   *  Constant: '<S258>/Constant'
   *  Constant: '<S263>/Constant'
   *  Constant: '<S264>/Constant'
   *  Logic: '<S258>/or'
   *  Product: '<S258>/Product1'
   *  RelationalOperator: '<S263>/Compare'
   *  RelationalOperator: '<S264>/Compare'
   */
  if ((rtb_Merge1 == 0.0) || (((rtb_Num_Segments < 0) ? ((int32_T)((int8_T)
          (-((int8_T)((uint8_T)(-((real_T)rtb_Num_Segments))))))) :
        rtb_Num_Segments) > 0)) {
    rtb_rx_l = Code_Gen_Model_B.Translation_Speed_SPF;
  } else {
    rtb_rx_l = 0.0;
  }

  /* End of Switch: '<S258>/Switch' */

  /* RelationalOperator: '<S265>/Compare' incorporates:
   *  Constant: '<S265>/Constant'
   */
  rtb_Is_Absolute_Translation_g = (rtb_rx_l == 0.0);

  /* RelationalOperator: '<S266>/Compare' incorporates:
   *  Constant: '<S266>/Constant'
   */
  rtb_Is_Absolute_Steering = (rtb_rx_l > 0.0);

  /* Abs: '<S258>/Abs' incorporates:
   *  Sum: '<S258>/Subtract'
   */
  rtb_Merge1 = fabs(rtb_Merge1 - Code_Gen_Model_B.Translation_Speed_SPF);

  /* Switch: '<S258>/Switch5' incorporates:
   *  Constant: '<S258>/Constant1'
   *  Switch: '<S258>/Switch1'
   *  UnaryMinus: '<S258>/Unary Minus'
   */
  if (rtb_Is_Absolute_Translation_g) {
    /* SignalConversion generated from: '<S258>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S258>/Constant4'
     *  Constant: '<S258>/Constant6'
     */
    rtb_Akxhatkk1[0] = Translation_Speed_Approach_Zero_Final_Thresh;
    rtb_Akxhatkk1[1] = 1.0;

    /* SignalConversion generated from: '<S258>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S258>/Constant2'
     *  Constant: '<S258>/Constant5'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Translation_Speed_Approach_Zero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S258>/Lookup Table Dynamic' */
    /* Dynamic Look-Up Table Block: '<S258>/Lookup Table Dynamic'
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
    u0 = -Translation_Speed_Rate_Limit_Dec;
  } else {
    /* SignalConversion generated from: '<S258>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S258>/Constant10'
     *  Constant: '<S258>/Constant8'
     */
    rtb_Akxhatkk1[0] = Translation_Speed_NonZero_Final_Scale_Factor;
    rtb_Akxhatkk1[1] = 1.0;

    /* SignalConversion generated from: '<S258>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S258>/Constant7'
     *  Constant: '<S258>/Constant9'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Translation_Speed_NonZero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S258>/Lookup Table Dynamic1' */
    /* Dynamic Look-Up Table Block: '<S258>/Lookup Table Dynamic1'
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

    /* Switch: '<S258>/Switch3' incorporates:
     *  Constant: '<S258>/Constant1'
     *  Constant: '<S258>/Constant3'
     *  UnaryMinus: '<S258>/Unary Minus'
     */
    if (rtb_Is_Absolute_Steering) {
      u0 = Translation_Speed_Rate_Limit_Inc;
    } else {
      u0 = -Translation_Speed_Rate_Limit_Dec;
    }

    /* End of Switch: '<S258>/Switch3' */
  }

  /* End of Switch: '<S258>/Switch5' */

  /* Product: '<S258>/Product' incorporates:
   *  Switch: '<S258>/Switch1'
   */
  rtb_Switch2 = u0 * rtb_Switch1_p2;

  /* Switch: '<S269>/Init' incorporates:
   *  UnitDelay: '<S269>/FixPt Unit Delay1'
   *  UnitDelay: '<S269>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE != 0) {
    rtb_Merge1 = rtb_rx_l;
  } else {
    rtb_Merge1 = Code_Gen_Model_B.Translation_Speed_RL;
  }

  /* End of Switch: '<S269>/Init' */

  /* Sum: '<S267>/Sum1' */
  rtb_Switch4 = rtb_rx_l - rtb_Merge1;

  /* Switch: '<S268>/Switch2' incorporates:
   *  RelationalOperator: '<S268>/LowerRelop1'
   */
  if (!(rtb_Switch4 > rtb_Switch2)) {
    /* Switch: '<S258>/Switch2' incorporates:
     *  Constant: '<S258>/Constant1'
     *  Constant: '<S258>/Constant3'
     *  Switch: '<S258>/Switch4'
     *  UnaryMinus: '<S258>/Unary Minus1'
     */
    if (rtb_Is_Absolute_Translation_g) {
      u0 = Translation_Speed_Rate_Limit_Dec;
    } else if (rtb_Is_Absolute_Steering) {
      /* Switch: '<S258>/Switch4' incorporates:
       *  Constant: '<S258>/Constant1'
       */
      u0 = Translation_Speed_Rate_Limit_Dec;
    } else {
      u0 = -Translation_Speed_Rate_Limit_Inc;
    }

    /* Product: '<S258>/Product2' incorporates:
     *  Switch: '<S258>/Switch2'
     */
    rtb_Switch2 = u0 * rtb_Switch1_p2;

    /* Switch: '<S268>/Switch' incorporates:
     *  RelationalOperator: '<S268>/UpperRelop'
     */
    if (!(rtb_Switch4 < rtb_Switch2)) {
      rtb_Switch2 = rtb_Switch4;
    }

    /* End of Switch: '<S268>/Switch' */
  }

  /* End of Switch: '<S268>/Switch2' */

  /* Sum: '<S267>/Sum' */
  Code_Gen_Model_B.Translation_Speed_RL = rtb_Switch2 + rtb_Merge1;

  /* Switch: '<S261>/Switch' */
  if (Code_Gen_Model_B.Is_Absolute_Translation_SPF) {
    /* Switch: '<S261>/Switch' incorporates:
     *  Constant: '<S293>/Constant3'
     *  Constant: '<S293>/Constant4'
     *  Math: '<S293>/Math Function'
     *  Sum: '<S261>/Subtract'
     *  Sum: '<S293>/Add1'
     *  Sum: '<S293>/Add2'
     */
    Code_Gen_Model_B.Translation_Steering_Cmd = rt_modd_snf
      ((Code_Gen_Model_B.Translation_Angle_SPF - Code_Gen_Model_B.Gyro_Angle_SPF)
       + 3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;
  } else {
    /* Switch: '<S261>/Switch' */
    Code_Gen_Model_B.Translation_Steering_Cmd =
      Code_Gen_Model_B.Translation_Angle_SPF;
  }

  /* End of Switch: '<S261>/Switch' */

  /* Sum: '<S289>/Add1' incorporates:
   *  Constant: '<S289>/Constant3'
   *  Constant: '<S289>/Constant4'
   *  Math: '<S289>/Math Function'
   *  Sum: '<S288>/Sum'
   *  Sum: '<S289>/Add2'
   */
  rtb_Switch2 = rt_modd_snf((Code_Gen_Model_B.Steering_Abs_Cmd_SPF -
    Code_Gen_Model_B.Gyro_Angle_SPF) + 3.1415926535897931, 6.2831853071795862) -
    3.1415926535897931;

  /* Sum: '<S291>/Sum1' incorporates:
   *  Constant: '<S288>/Constant2'
   *  Product: '<S291>/Product'
   *  Sum: '<S291>/Sum'
   *  UnitDelay: '<S291>/Unit Delay1'
   */
  rtb_Merge1 = ((rtb_Switch2 - Code_Gen_Model_DW.UnitDelay1_DSTATE_i) *
                Steering_Heading_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_i;

  /* Product: '<S288>/Product' incorporates:
   *  Constant: '<S288>/Constant3'
   */
  rtb_Switch1_p2 = rtb_Merge1 * Steering_Heading_Control_D;

  /* Sum: '<S290>/Diff' incorporates:
   *  UnitDelay: '<S290>/UD'
   *
   * Block description for '<S290>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S290>/UD':
   *
   *  Store in Global RAM
   */
  u0 = rtb_Switch1_p2 - Code_Gen_Model_DW.UD_DSTATE;

  /* Saturate: '<S288>/Saturation' */
  if (u0 > Steering_Heading_Control_D_UL) {
    u0 = Steering_Heading_Control_D_UL;
  } else if (u0 < Steering_Heading_Control_D_LL) {
    u0 = Steering_Heading_Control_D_LL;
  }

  /* Sum: '<S288>/Add' incorporates:
   *  Gain: '<S288>/Gain1'
   *  Saturate: '<S288>/Saturation'
   */
  rtb_Switch4 = (Steering_Heading_Control_P * rtb_Switch2) + u0;

  /* Sum: '<S288>/Subtract' incorporates:
   *  Constant: '<S288>/Constant'
   */
  rtb_Sin4 = Steering_Heading_Control_Total_UL - rtb_Switch4;

  /* Sum: '<S288>/Sum2' incorporates:
   *  Gain: '<S288>/Gain2'
   *  UnitDelay: '<S288>/Unit Delay'
   */
  rtb_Switch2 = (Steering_Heading_Control_I * rtb_Switch2) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_m;

  /* Switch: '<S292>/Switch2' incorporates:
   *  RelationalOperator: '<S292>/LowerRelop1'
   */
  if (!(rtb_Switch2 > rtb_Sin4)) {
    /* Sum: '<S288>/Subtract1' incorporates:
     *  Constant: '<S288>/Constant1'
     */
    rtb_Sum_jt = Steering_Heading_Control_Total_LL - rtb_Switch4;

    /* Switch: '<S292>/Switch' incorporates:
     *  RelationalOperator: '<S292>/UpperRelop'
     */
    if (rtb_Switch2 < rtb_Sum_jt) {
      rtb_Sin4 = rtb_Sum_jt;
    } else {
      rtb_Sin4 = rtb_Switch2;
    }

    /* End of Switch: '<S292>/Switch' */
  }

  /* End of Switch: '<S292>/Switch2' */

  /* Saturate: '<S288>/Saturation1' */
  if (rtb_Sin4 > Steering_Heading_Control_I_UL) {
    rtb_Switch2 = Steering_Heading_Control_I_UL;
  } else if (rtb_Sin4 < Steering_Heading_Control_I_LL) {
    rtb_Switch2 = Steering_Heading_Control_I_LL;
  } else {
    rtb_Switch2 = rtb_Sin4;
  }

  /* End of Saturate: '<S288>/Saturation1' */

  /* Sum: '<S288>/Add1' */
  u0 = rtb_Switch4 + rtb_Switch2;

  /* Saturate: '<S288>/Saturation2' */
  if (u0 > Steering_Heading_Control_Total_UL) {
    /* Saturate: '<S288>/Saturation2' */
    Code_Gen_Model_B.Steering_Localized_PID = Steering_Heading_Control_Total_UL;
  } else if (u0 < Steering_Heading_Control_Total_LL) {
    /* Saturate: '<S288>/Saturation2' */
    Code_Gen_Model_B.Steering_Localized_PID = Steering_Heading_Control_Total_LL;
  } else {
    /* Saturate: '<S288>/Saturation2' */
    Code_Gen_Model_B.Steering_Localized_PID = u0;
  }

  /* End of Saturate: '<S288>/Saturation2' */

  /* Switch: '<S272>/Switch' incorporates:
   *  Abs: '<S272>/Abs'
   *  Constant: '<S272>/Constant'
   *  Constant: '<S287>/Constant'
   *  RelationalOperator: '<S287>/Compare'
   */
  if (fabs(Code_Gen_Model_B.Steering_Localized_PID) >
      Steering_Heading_Control_Deadzone) {
    rtb_Sin4 = Code_Gen_Model_B.Steering_Localized_PID;
  } else {
    rtb_Sin4 = 0.0;
  }

  /* End of Switch: '<S272>/Switch' */

  /* Signum: '<S271>/Sign2' incorporates:
   *  UnitDelay: '<S271>/Unit Delay'
   */
  if (rtIsNaN(Code_Gen_Model_DW.UnitDelay_DSTATE_d)) {
    u0 = (rtNaN);
  } else if (Code_Gen_Model_DW.UnitDelay_DSTATE_d < 0.0) {
    u0 = -1.0;
  } else {
    u0 = (Code_Gen_Model_DW.UnitDelay_DSTATE_d > 0.0);
  }

  /* Signum: '<S271>/Sign1' */
  if (rtIsNaN(rtb_Sin4)) {
    rtb_Add_du = (rtNaN);
  } else if (rtb_Sin4 < 0.0) {
    rtb_Add_du = -1.0;
  } else {
    rtb_Add_du = (rtb_Sin4 > 0.0);
  }

  /* Product: '<S271>/Product1' incorporates:
   *  Signum: '<S271>/Sign1'
   *  Signum: '<S271>/Sign2'
   */
  u0 *= rtb_Add_du;
  if (rtIsNaN(u0)) {
    rtb_Num_Segments = 0;
  } else {
    rtb_Num_Segments = (int32_T)fmod(u0, 256.0);
  }

  /* Switch: '<S271>/Switch' incorporates:
   *  Constant: '<S271>/Constant'
   *  Constant: '<S280>/Constant'
   *  Constant: '<S281>/Constant'
   *  Logic: '<S271>/or'
   *  Product: '<S271>/Product1'
   *  RelationalOperator: '<S280>/Compare'
   *  RelationalOperator: '<S281>/Compare'
   *  UnitDelay: '<S271>/Unit Delay'
   */
  if ((Code_Gen_Model_DW.UnitDelay_DSTATE_d == 0.0) || (((rtb_Num_Segments < 0) ?
        ((int32_T)((int8_T)(-((int8_T)((uint8_T)(-((real_T)rtb_Num_Segments)))))))
        : rtb_Num_Segments) > 0)) {
    rtb_Init = rtb_Sin4;
  } else {
    rtb_Init = 0.0;
  }

  /* End of Switch: '<S271>/Switch' */

  /* RelationalOperator: '<S282>/Compare' incorporates:
   *  Constant: '<S282>/Constant'
   */
  rtb_Is_Absolute_Translation_g = (rtb_Init == 0.0);

  /* RelationalOperator: '<S283>/Compare' incorporates:
   *  Constant: '<S283>/Constant'
   */
  rtb_Is_Absolute_Steering = (rtb_Init > 0.0);

  /* Abs: '<S271>/Abs' incorporates:
   *  Sum: '<S271>/Subtract'
   *  UnitDelay: '<S271>/Unit Delay'
   */
  rtb_Switch4 = fabs(Code_Gen_Model_DW.UnitDelay_DSTATE_d - rtb_Sin4);

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
    rtb_Akxhatkk1[0] = Steering_Absolute_Cmd_Approach_Zero_Final_Thresh;
    rtb_Akxhatkk1[1] = 1.0;

    /* SignalConversion generated from: '<S271>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S271>/Constant2'
     *  Constant: '<S271>/Constant5'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Steering_Absolute_Cmd_Approach_Zero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S271>/Lookup Table Dynamic' */
    /* Dynamic Look-Up Table Block: '<S271>/Lookup Table Dynamic'
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
    u0 = -Steering_Absolute_Cmd_Rate_Limit_Dec;
  } else {
    /* SignalConversion generated from: '<S271>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S271>/Constant10'
     *  Constant: '<S271>/Constant8'
     */
    rtb_Akxhatkk1[0] = Steering_Absolute_Cmd_NonZero_Final_Scale_Factor;
    rtb_Akxhatkk1[1] = 1.0;

    /* SignalConversion generated from: '<S271>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S271>/Constant7'
     *  Constant: '<S271>/Constant9'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Steering_Absolute_Cmd_NonZero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S271>/Lookup Table Dynamic1' */
    /* Dynamic Look-Up Table Block: '<S271>/Lookup Table Dynamic1'
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

    /* Switch: '<S271>/Switch3' incorporates:
     *  Constant: '<S271>/Constant1'
     *  Constant: '<S271>/Constant3'
     *  UnaryMinus: '<S271>/Unary Minus'
     */
    if (rtb_Is_Absolute_Steering) {
      u0 = Steering_Absolute_Cmd_Rate_Limit_Inc;
    } else {
      u0 = -Steering_Absolute_Cmd_Rate_Limit_Dec;
    }

    /* End of Switch: '<S271>/Switch3' */
  }

  /* End of Switch: '<S271>/Switch5' */

  /* Product: '<S271>/Product' incorporates:
   *  Switch: '<S271>/Switch1'
   */
  rtb_rx_ht = u0 * rtb_Switch4;

  /* Switch: '<S286>/Init' incorporates:
   *  UnitDelay: '<S286>/FixPt Unit Delay1'
   *  UnitDelay: '<S286>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_p != 0) {
    rtb_Sin4 = rtb_Init;
  } else {
    rtb_Sin4 = Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_e;
  }

  /* End of Switch: '<S286>/Init' */

  /* Sum: '<S284>/Sum1' */
  rtb_Sum_jt = rtb_Init - rtb_Sin4;

  /* Switch: '<S285>/Switch2' incorporates:
   *  RelationalOperator: '<S285>/LowerRelop1'
   */
  if (!(rtb_Sum_jt > rtb_rx_ht)) {
    /* Switch: '<S271>/Switch2' incorporates:
     *  Constant: '<S271>/Constant1'
     *  Constant: '<S271>/Constant3'
     *  Switch: '<S271>/Switch4'
     *  UnaryMinus: '<S271>/Unary Minus1'
     */
    if (rtb_Is_Absolute_Translation_g) {
      u0 = Steering_Absolute_Cmd_Rate_Limit_Dec;
    } else if (rtb_Is_Absolute_Steering) {
      /* Switch: '<S271>/Switch4' incorporates:
       *  Constant: '<S271>/Constant1'
       */
      u0 = Steering_Absolute_Cmd_Rate_Limit_Dec;
    } else {
      u0 = -Steering_Absolute_Cmd_Rate_Limit_Inc;
    }

    /* Product: '<S271>/Product2' incorporates:
     *  Switch: '<S271>/Switch2'
     */
    rtb_Init = u0 * rtb_Switch4;

    /* Switch: '<S285>/Switch' incorporates:
     *  RelationalOperator: '<S285>/UpperRelop'
     */
    if (rtb_Sum_jt < rtb_Init) {
      rtb_rx_ht = rtb_Init;
    } else {
      rtb_rx_ht = rtb_Sum_jt;
    }

    /* End of Switch: '<S285>/Switch' */
  }

  /* End of Switch: '<S285>/Switch2' */

  /* Sum: '<S284>/Sum' */
  rtb_Switch4 = rtb_rx_ht + rtb_Sin4;

  /* Signum: '<S270>/Sign2' incorporates:
   *  UnitDelay: '<S270>/Unit Delay'
   */
  if (rtIsNaN(Code_Gen_Model_DW.UnitDelay_DSTATE_g)) {
    u0 = (rtNaN);
  } else if (Code_Gen_Model_DW.UnitDelay_DSTATE_g < 0.0) {
    u0 = -1.0;
  } else {
    u0 = (Code_Gen_Model_DW.UnitDelay_DSTATE_g > 0.0);
  }

  /* Signum: '<S270>/Sign1' */
  if (rtIsNaN(Code_Gen_Model_B.Steering_Rel_Cmd_SPF)) {
    rtb_Add_du = (rtNaN);
  } else if (Code_Gen_Model_B.Steering_Rel_Cmd_SPF < 0.0) {
    rtb_Add_du = -1.0;
  } else {
    rtb_Add_du = (Code_Gen_Model_B.Steering_Rel_Cmd_SPF > 0.0);
  }

  /* Product: '<S270>/Product1' incorporates:
   *  Signum: '<S270>/Sign1'
   *  Signum: '<S270>/Sign2'
   */
  u0 *= rtb_Add_du;
  if (rtIsNaN(u0)) {
    rtb_Num_Segments = 0;
  } else {
    rtb_Num_Segments = (int32_T)fmod(u0, 256.0);
  }

  /* Switch: '<S270>/Switch' incorporates:
   *  Constant: '<S270>/Constant'
   *  Constant: '<S273>/Constant'
   *  Constant: '<S274>/Constant'
   *  Logic: '<S270>/or'
   *  Product: '<S270>/Product1'
   *  RelationalOperator: '<S273>/Compare'
   *  RelationalOperator: '<S274>/Compare'
   *  UnitDelay: '<S270>/Unit Delay'
   */
  if ((Code_Gen_Model_DW.UnitDelay_DSTATE_g == 0.0) || (((rtb_Num_Segments < 0) ?
        ((int32_T)((int8_T)(-((int8_T)((uint8_T)(-((real_T)rtb_Num_Segments)))))))
        : rtb_Num_Segments) > 0)) {
    rtb_rx_ht = Code_Gen_Model_B.Steering_Rel_Cmd_SPF;
  } else {
    rtb_rx_ht = 0.0;
  }

  /* End of Switch: '<S270>/Switch' */

  /* RelationalOperator: '<S275>/Compare' incorporates:
   *  Constant: '<S275>/Constant'
   */
  rtb_Is_Absolute_Translation_g = (rtb_rx_ht == 0.0);

  /* RelationalOperator: '<S276>/Compare' incorporates:
   *  Constant: '<S276>/Constant'
   */
  rtb_Is_Absolute_Steering = (rtb_rx_ht > 0.0);

  /* Abs: '<S270>/Abs' incorporates:
   *  Sum: '<S270>/Subtract'
   *  UnitDelay: '<S270>/Unit Delay'
   */
  rtb_Sum_jt = fabs(Code_Gen_Model_DW.UnitDelay_DSTATE_g -
                    Code_Gen_Model_B.Steering_Rel_Cmd_SPF);

  /* Switch: '<S270>/Switch5' incorporates:
   *  Constant: '<S270>/Constant1'
   *  Switch: '<S270>/Switch1'
   *  UnaryMinus: '<S270>/Unary Minus'
   */
  if (rtb_Is_Absolute_Translation_g) {
    /* SignalConversion generated from: '<S270>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S270>/Constant4'
     *  Constant: '<S270>/Constant6'
     */
    rtb_Akxhatkk1[0] = Steering_Relative_Cmd_Approach_Zero_Final_Thresh;
    rtb_Akxhatkk1[1] = 1.0;

    /* SignalConversion generated from: '<S270>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S270>/Constant2'
     *  Constant: '<S270>/Constant5'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Steering_Relative_Cmd_Approach_Zero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S270>/Lookup Table Dynamic' */
    /* Dynamic Look-Up Table Block: '<S270>/Lookup Table Dynamic'
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
    u0 = -Steering_Relative_Cmd_Rate_Limit_Dec;
  } else {
    /* SignalConversion generated from: '<S270>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S270>/Constant10'
     *  Constant: '<S270>/Constant8'
     */
    rtb_Akxhatkk1[0] = Steering_Relative_Cmd_NonZero_Final_Scale_Factor;
    rtb_Akxhatkk1[1] = 1.0;

    /* SignalConversion generated from: '<S270>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S270>/Constant7'
     *  Constant: '<S270>/Constant9'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Steering_Relative_Cmd_NonZero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S270>/Lookup Table Dynamic1' */
    /* Dynamic Look-Up Table Block: '<S270>/Lookup Table Dynamic1'
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

    /* Switch: '<S270>/Switch3' incorporates:
     *  Constant: '<S270>/Constant1'
     *  Constant: '<S270>/Constant3'
     *  UnaryMinus: '<S270>/Unary Minus'
     */
    if (rtb_Is_Absolute_Steering) {
      u0 = Steering_Relative_Cmd_Rate_Limit_Inc;
    } else {
      u0 = -Steering_Relative_Cmd_Rate_Limit_Dec;
    }

    /* End of Switch: '<S270>/Switch3' */
  }

  /* End of Switch: '<S270>/Switch5' */

  /* Product: '<S270>/Product' incorporates:
   *  Switch: '<S270>/Switch1'
   */
  rtb_Sin4 = u0 * rtb_Sum_jt;

  /* Switch: '<S279>/Init' incorporates:
   *  UnitDelay: '<S279>/FixPt Unit Delay1'
   *  UnitDelay: '<S279>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_c != 0) {
    rtb_Init = rtb_rx_ht;
  } else {
    rtb_Init = Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_p;
  }

  /* End of Switch: '<S279>/Init' */

  /* Sum: '<S277>/Sum1' */
  rtb_Switch_ms = rtb_rx_ht - rtb_Init;

  /* Switch: '<S278>/Switch2' incorporates:
   *  RelationalOperator: '<S278>/LowerRelop1'
   */
  if (!(rtb_Switch_ms > rtb_Sin4)) {
    /* Switch: '<S270>/Switch2' incorporates:
     *  Constant: '<S270>/Constant1'
     *  Constant: '<S270>/Constant3'
     *  Switch: '<S270>/Switch4'
     *  UnaryMinus: '<S270>/Unary Minus1'
     */
    if (rtb_Is_Absolute_Translation_g) {
      u0 = Steering_Relative_Cmd_Rate_Limit_Dec;
    } else if (rtb_Is_Absolute_Steering) {
      /* Switch: '<S270>/Switch4' incorporates:
       *  Constant: '<S270>/Constant1'
       */
      u0 = Steering_Relative_Cmd_Rate_Limit_Dec;
    } else {
      u0 = -Steering_Relative_Cmd_Rate_Limit_Inc;
    }

    /* Product: '<S270>/Product2' incorporates:
     *  Switch: '<S270>/Switch2'
     */
    rtb_Product2_e = u0 * rtb_Sum_jt;

    /* Switch: '<S278>/Switch' incorporates:
     *  RelationalOperator: '<S278>/UpperRelop'
     */
    if (rtb_Switch_ms < rtb_Product2_e) {
      rtb_Sin4 = rtb_Product2_e;
    } else {
      rtb_Sin4 = rtb_Switch_ms;
    }

    /* End of Switch: '<S278>/Switch' */
  }

  /* End of Switch: '<S278>/Switch2' */

  /* Sum: '<S277>/Sum' */
  rtb_Sum_jt = rtb_Sin4 + rtb_Init;

  /* Switch: '<S260>/Switch' */
  if (Code_Gen_Model_B.Is_Absolute_Steering_SPF) {
    /* Switch: '<S260>/Switch' */
    Code_Gen_Model_B.Steering_Localized_Cmd = rtb_Switch4;
  } else {
    /* Switch: '<S260>/Switch' */
    Code_Gen_Model_B.Steering_Localized_Cmd = rtb_Sum_jt;
  }

  /* End of Switch: '<S260>/Switch' */

  /* Outputs for Atomic SubSystem: '<S173>/Initialize Function' */
  /* Sum: '<S259>/Add' incorporates:
   *  Constant: '<S259>/Constant'
   *  Constant: '<S259>/Constant4'
   *  Constant: '<S259>/Constant5'
   *  Trigonometry: '<S259>/Atan2'
   */
  rtb_Init = rt_atan2d_snf(Distance_FL_y, 0.187325) + 1.5707963267948966;

  /* End of Outputs for SubSystem: '<S173>/Initialize Function' */

  /* Fcn: '<S301>/r->x' incorporates:
   *  Fcn: '<S306>/r->x'
   *  Fcn: '<S311>/r->x'
   *  Fcn: '<S316>/r->x'
   */
  rtb_FeedForward = Code_Gen_Model_B.Translation_Speed_RL * cos
    (Code_Gen_Model_B.Translation_Steering_Cmd);

  /* Sum: '<S295>/Add' incorporates:
   *  Fcn: '<S301>/r->x'
   *  Fcn: '<S302>/r->x'
   */
  rtb_Akxhatkk1[0] = (Code_Gen_Model_B.Steering_Localized_Cmd * cos(rtb_Init)) +
    rtb_FeedForward;

  /* Fcn: '<S301>/theta->y' incorporates:
   *  Fcn: '<S306>/theta->y'
   *  Fcn: '<S311>/theta->y'
   *  Fcn: '<S316>/theta->y'
   */
  rtb_Add_oh = Code_Gen_Model_B.Translation_Speed_RL * sin
    (Code_Gen_Model_B.Translation_Steering_Cmd);

  /* Sum: '<S295>/Add' incorporates:
   *  Fcn: '<S301>/theta->y'
   *  Fcn: '<S302>/theta->y'
   */
  rtb_Akxhatkk1[1] = (Code_Gen_Model_B.Steering_Localized_Cmd * sin(rtb_Init)) +
    rtb_Add_oh;

  /* Fcn: '<S300>/x->r' */
  rtb_Init = rt_hypotd_snf(rtb_Akxhatkk1[0], rtb_Akxhatkk1[1]);

  /* RelationalOperator: '<S303>/Compare' incorporates:
   *  Constant: '<S303>/Constant'
   */
  rtb_Is_Absolute_Translation_g = (rtb_Init == 0.0);

  /* Switch: '<S299>/Switch' */
  if (!rtb_Is_Absolute_Translation_g) {
    /* Switch: '<S299>/Switch' incorporates:
     *  Fcn: '<S300>/x->theta'
     */
    Code_Gen_Model_B.FL_Desired_Module_Angle = rt_atan2d_snf(rtb_Akxhatkk1[1],
      rtb_Akxhatkk1[0]);
  }

  /* End of Switch: '<S299>/Switch' */

  /* Trigonometry: '<S187>/Cos4' incorporates:
   *  Switch: '<S176>/Angle_Switch'
   *  Trigonometry: '<S186>/Cos4'
   */
  rtb_Switch_ms = cos(Code_Gen_Model_B.FL_Desired_Module_Angle);

  /* Sum: '<S165>/Add1' incorporates:
   *  Constant: '<S165>/Constant3'
   *  Constant: '<S165>/Constant4'
   *  Gain: '<S16>/Revolutions to Radians'
   *  Inport: '<Root>/FrontLeft_Steer_Rev'
   *  Inport: '<Root>/FrontLeft_Turn_Offset'
   *  Math: '<S165>/Math Function'
   *  Sum: '<S165>/Add2'
   *  Sum: '<S16>/Add'
   */
  Code_Gen_Model_B.FL_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.FrontLeft_Steer_Rev -
       Code_Gen_Model_U.FrontLeft_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Trigonometry: '<S187>/Sin5' incorporates:
   *  UnaryMinus: '<S185>/Unary Minus'
   */
  rtb_rx_l = sin(-Code_Gen_Model_B.FL_Steer_Module_Angle);

  /* Trigonometry: '<S187>/Sin4' incorporates:
   *  Switch: '<S176>/Angle_Switch'
   *  Trigonometry: '<S186>/Sin4'
   */
  rtb_Product2_e = sin(Code_Gen_Model_B.FL_Desired_Module_Angle);

  /* Trigonometry: '<S187>/Cos5' incorporates:
   *  UnaryMinus: '<S185>/Unary Minus'
   */
  rtb_Sin4 = cos(-Code_Gen_Model_B.FL_Steer_Module_Angle);

  /* Sum: '<S187>/Subtract1' incorporates:
   *  Product: '<S187>/Product2'
   *  Product: '<S187>/Product3'
   *  Trigonometry: '<S187>/Cos4'
   *  Trigonometry: '<S187>/Sin4'
   */
  rtb_Subtract1 = (rtb_Switch_ms * rtb_rx_l) + (rtb_Product2_e * rtb_Sin4);

  /* Sum: '<S187>/Subtract' incorporates:
   *  Product: '<S187>/Product'
   *  Product: '<S187>/Product1'
   *  Trigonometry: '<S187>/Cos4'
   *  Trigonometry: '<S187>/Sin4'
   */
  rtb_rx_l = (rtb_Switch_ms * rtb_Sin4) - (rtb_Product2_e * rtb_rx_l);

  /* Math: '<S187>/Hypot' */
  rtb_Sin4 = rt_hypotd_snf(rtb_rx_l, rtb_Subtract1);

  /* Switch: '<S187>/Switch' incorporates:
   *  Constant: '<S187>/Constant'
   *  Constant: '<S187>/Constant1'
   *  Constant: '<S188>/Constant'
   *  Product: '<S187>/Divide'
   *  Product: '<S187>/Divide1'
   *  RelationalOperator: '<S188>/Compare'
   *  Switch: '<S187>/Switch1'
   */
  if (rtb_Sin4 > 1.0E-6) {
    rtb_rx_ht = rtb_Subtract1 / rtb_Sin4;
    rtb_Sin4 = rtb_rx_l / rtb_Sin4;
  } else {
    rtb_rx_ht = 0.0;
    rtb_Sin4 = 1.0;
  }

  /* End of Switch: '<S187>/Switch' */

  /* RelationalOperator: '<S184>/Compare' incorporates:
   *  Abs: '<S176>/Abs'
   *  Constant: '<S184>/Constant'
   *  Trigonometry: '<S187>/Atan1'
   */
  rtb_Is_Absolute_Steering = (fabs(rt_atan2d_snf(rtb_rx_ht, rtb_Sin4)) >
    1.5707963267948966);

  /* Switch: '<S176>/Angle_Switch' incorporates:
   *  Trigonometry: '<S186>/Atan1'
   */
  if (rtb_Is_Absolute_Steering) {
    /* Sum: '<S186>/Subtract1' incorporates:
     *  Product: '<S186>/Product2'
     *  Product: '<S186>/Product3'
     */
    rtb_rx_l = (rtb_Switch_ms * Code_Gen_Model_ConstB.Sin5) + (rtb_Product2_e *
      Code_Gen_Model_ConstB.Cos5);

    /* Sum: '<S186>/Subtract' incorporates:
     *  Product: '<S186>/Product'
     *  Product: '<S186>/Product1'
     */
    rtb_Product2_e = (rtb_Switch_ms * Code_Gen_Model_ConstB.Cos5) -
      (rtb_Product2_e * Code_Gen_Model_ConstB.Sin5);

    /* Math: '<S186>/Hypot' */
    rtb_Switch_ms = rt_hypotd_snf(rtb_Product2_e, rtb_rx_l);

    /* Switch: '<S186>/Switch1' incorporates:
     *  Constant: '<S186>/Constant'
     *  Constant: '<S186>/Constant1'
     *  Constant: '<S189>/Constant'
     *  Product: '<S186>/Divide'
     *  Product: '<S186>/Divide1'
     *  RelationalOperator: '<S189>/Compare'
     *  Switch: '<S186>/Switch'
     */
    if (rtb_Switch_ms > 1.0E-6) {
      rtb_Product2_e /= rtb_Switch_ms;
      rtb_Switch_ms = rtb_rx_l / rtb_Switch_ms;
    } else {
      rtb_Product2_e = 1.0;
      rtb_Switch_ms = 0.0;
    }

    /* End of Switch: '<S186>/Switch1' */
    rtb_rx_ht = rt_atan2d_snf(rtb_Switch_ms, rtb_Product2_e);
  } else {
    rtb_rx_ht = Code_Gen_Model_B.FL_Desired_Module_Angle;
  }

  /* Sum: '<S178>/Sum' incorporates:
   *  Sum: '<S177>/Add'
   */
  rtb_rx_ht -= Code_Gen_Model_B.FL_Steer_Module_Angle;

  /* Sum: '<S191>/Add1' incorporates:
   *  Constant: '<S191>/Constant3'
   *  Constant: '<S191>/Constant4'
   *  Math: '<S191>/Math Function'
   *  Sum: '<S178>/Sum'
   *  Sum: '<S191>/Add2'
   */
  rtb_Sin4 = rt_modd_snf(rtb_rx_ht + 3.1415926535897931, 6.2831853071795862) -
    3.1415926535897931;

  /* Sum: '<S193>/Sum1' incorporates:
   *  Constant: '<S178>/Constant2'
   *  Product: '<S193>/Product'
   *  Sum: '<S193>/Sum'
   *  UnitDelay: '<S193>/Unit Delay1'
   */
  rtb_Switch_ms = ((rtb_Sin4 - Code_Gen_Model_DW.UnitDelay1_DSTATE_b) *
                   Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_b;

  /* Product: '<S178>/Product' incorporates:
   *  Constant: '<S178>/Constant3'
   */
  rtb_Product2_e = rtb_Switch_ms * Steering_Motor_Control_D;

  /* Sum: '<S192>/Diff' incorporates:
   *  UnitDelay: '<S192>/UD'
   *
   * Block description for '<S192>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S192>/UD':
   *
   *  Store in Global RAM
   */
  u0 = rtb_Product2_e - Code_Gen_Model_DW.UD_DSTATE_b;

  /* Saturate: '<S178>/Saturation' */
  if (u0 > Steering_Motor_Control_D_UL) {
    u0 = Steering_Motor_Control_D_UL;
  } else if (u0 < Steering_Motor_Control_D_LL) {
    u0 = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S178>/Add' incorporates:
   *  Gain: '<S178>/Gain1'
   *  Saturate: '<S178>/Saturation'
   */
  rtb_Subtract1 = (Steering_Motor_Control_P * rtb_Sin4) + u0;

  /* Sum: '<S178>/Subtract' incorporates:
   *  Constant: '<S178>/Constant'
   */
  rtb_rx_l = 1.0 - rtb_Subtract1;

  /* Sum: '<S178>/Sum2' incorporates:
   *  Gain: '<S178>/Gain2'
   *  UnitDelay: '<S178>/Unit Delay'
   */
  rtb_Sin4 = (Steering_Motor_Control_I * rtb_Sin4) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_e;

  /* Switch: '<S194>/Switch2' incorporates:
   *  Constant: '<S178>/Constant'
   *  RelationalOperator: '<S194>/LowerRelop1'
   *  Sum: '<S178>/Subtract'
   */
  if (!(rtb_Sin4 > (1.0 - rtb_Subtract1))) {
    /* Sum: '<S178>/Subtract1' incorporates:
     *  Constant: '<S178>/Constant1'
     */
    rtb_rx_l = -1.0 - rtb_Subtract1;

    /* Switch: '<S194>/Switch' incorporates:
     *  Constant: '<S178>/Constant1'
     *  RelationalOperator: '<S194>/UpperRelop'
     *  Sum: '<S178>/Subtract1'
     */
    if (!(rtb_Sin4 < (-1.0 - rtb_Subtract1))) {
      rtb_rx_l = rtb_Sin4;
    }

    /* End of Switch: '<S194>/Switch' */
  }

  /* End of Switch: '<S194>/Switch2' */

  /* Saturate: '<S178>/Saturation1' */
  if (rtb_rx_l > Steering_Motor_Control_I_UL) {
    rtb_rx_l = Steering_Motor_Control_I_UL;
  } else if (rtb_rx_l < Steering_Motor_Control_I_LL) {
    rtb_rx_l = Steering_Motor_Control_I_LL;
  }

  /* End of Saturate: '<S178>/Saturation1' */

  /* Sum: '<S178>/Add1' */
  u0 = rtb_Subtract1 + rtb_rx_l;

  /* Saturate: '<S178>/Saturation2' */
  if (u0 > 1.0) {
    /* Outport: '<Root>/FrontLeft_Steer_DutyCycle' */
    Code_Gen_Model_Y.FrontLeft_Steer_DutyCycle = 1.0;
  } else if (u0 < -1.0) {
    /* Outport: '<Root>/FrontLeft_Steer_DutyCycle' */
    Code_Gen_Model_Y.FrontLeft_Steer_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/FrontLeft_Steer_DutyCycle' */
    Code_Gen_Model_Y.FrontLeft_Steer_DutyCycle = u0;
  }

  /* End of Saturate: '<S178>/Saturation2' */

  /* Switch: '<S299>/Switch1' */
  if (rtb_Is_Absolute_Translation_g) {
    /* Switch: '<S299>/Switch1' incorporates:
     *  Constant: '<S299>/Constant'
     */
    Code_Gen_Model_B.FL_Desired_Wheel_Speed_in = 1.0E-15;
  } else {
    /* Switch: '<S299>/Switch1' */
    Code_Gen_Model_B.FL_Desired_Wheel_Speed_in = rtb_Init;
  }

  /* End of Switch: '<S299>/Switch1' */

  /* Sum: '<S296>/Add' incorporates:
   *  Fcn: '<S307>/r->x'
   *  Fcn: '<S307>/theta->y'
   */
  rtb_Akxhatkk1[0] = (Code_Gen_Model_B.Steering_Localized_Cmd * cos
                      (Code_Gen_Model_ConstB.FR_Tangent_Angle)) +
    rtb_FeedForward;
  rtb_Akxhatkk1[1] = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                      (Code_Gen_Model_ConstB.FR_Tangent_Angle)) + rtb_Add_oh;

  /* Fcn: '<S305>/x->r' */
  rtb_Sin4 = rt_hypotd_snf(rtb_Akxhatkk1[0], rtb_Akxhatkk1[1]);

  /* RelationalOperator: '<S308>/Compare' incorporates:
   *  Constant: '<S308>/Constant'
   */
  rtb_Is_Absolute_Translation_g = (rtb_Sin4 == 0.0);

  /* Switch: '<S304>/Switch1' */
  if (rtb_Is_Absolute_Translation_g) {
    /* Switch: '<S304>/Switch1' incorporates:
     *  Constant: '<S304>/Constant'
     */
    Code_Gen_Model_B.FR_Desired_Wheel_Speed_in = 1.0E-15;
  } else {
    /* Switch: '<S304>/Switch1' */
    Code_Gen_Model_B.FR_Desired_Wheel_Speed_in = rtb_Sin4;
  }

  /* End of Switch: '<S304>/Switch1' */

  /* Sum: '<S297>/Add' incorporates:
   *  Fcn: '<S312>/r->x'
   *  Fcn: '<S312>/theta->y'
   */
  rtb_Minus_n[0] = (Code_Gen_Model_B.Steering_Localized_Cmd * cos
                    (Code_Gen_Model_ConstB.BL_Tangent_Angle)) + rtb_FeedForward;
  rtb_Minus_n[1] = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                    (Code_Gen_Model_ConstB.BL_Tangent_Angle)) + rtb_Add_oh;

  /* Fcn: '<S310>/x->r' */
  rtb_rx_kl = rt_hypotd_snf(rtb_Minus_n[0], rtb_Minus_n[1]);

  /* RelationalOperator: '<S313>/Compare' incorporates:
   *  Constant: '<S313>/Constant'
   */
  rtb_FixPtRelationalOperator = (rtb_rx_kl == 0.0);

  /* Switch: '<S309>/Switch1' */
  if (rtb_FixPtRelationalOperator) {
    /* Switch: '<S309>/Switch1' incorporates:
     *  Constant: '<S309>/Constant'
     */
    Code_Gen_Model_B.BL_Desired_Wheel_Speed_in = 1.0E-15;
  } else {
    /* Switch: '<S309>/Switch1' */
    Code_Gen_Model_B.BL_Desired_Wheel_Speed_in = rtb_rx_kl;
  }

  /* End of Switch: '<S309>/Switch1' */

  /* Sum: '<S298>/Add' incorporates:
   *  Fcn: '<S317>/r->x'
   *  Fcn: '<S317>/theta->y'
   */
  rtb_Add2_k_idx_0 = (Code_Gen_Model_B.Steering_Localized_Cmd * cos
                      (Code_Gen_Model_ConstB.BR_Tangent_Angle)) +
    rtb_FeedForward;
  rtb_Add2_k_idx_1 = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                      (Code_Gen_Model_ConstB.BR_Tangent_Angle)) + rtb_Add_oh;

  /* Fcn: '<S315>/x->r' */
  rtb_thetay_a = rt_hypotd_snf(rtb_Add2_k_idx_0, rtb_Add2_k_idx_1);

  /* RelationalOperator: '<S318>/Compare' incorporates:
   *  Constant: '<S318>/Constant'
   */
  rtb_FixPtRelationalOperator_ea = (rtb_thetay_a == 0.0);

  /* Switch: '<S314>/Switch1' */
  if (rtb_FixPtRelationalOperator_ea) {
    /* Switch: '<S314>/Switch1' incorporates:
     *  Constant: '<S314>/Constant'
     */
    Code_Gen_Model_B.BR_Desired_Wheel_Speed_in = 1.0E-15;
  } else {
    /* Switch: '<S314>/Switch1' */
    Code_Gen_Model_B.BR_Desired_Wheel_Speed_in = rtb_thetay_a;
  }

  /* End of Switch: '<S314>/Switch1' */

  /* Product: '<S294>/Divide' incorporates:
   *  Abs: '<S294>/Abs'
   *  Abs: '<S294>/Abs1'
   *  Abs: '<S294>/Abs2'
   *  Abs: '<S294>/Abs3'
   *  Constant: '<S294>/Constant'
   *  MinMax: '<S294>/Max'
   */
  rtb_Init = 5.389313721017964 / fmax(fmax(fmax(fmax(5.389313721017964,
    Code_Gen_Model_B.FL_Desired_Wheel_Speed_in),
    Code_Gen_Model_B.FR_Desired_Wheel_Speed_in),
    Code_Gen_Model_B.BL_Desired_Wheel_Speed_in),
    Code_Gen_Model_B.BR_Desired_Wheel_Speed_in);

  /* Product: '<S294>/Product' */
  Code_Gen_Model_B.FL_Desired_Wheel_Speed =
    Code_Gen_Model_B.FL_Desired_Wheel_Speed_in * rtb_Init;

  /* Switch: '<S176>/Speed_Switch' incorporates:
   *  UnaryMinus: '<S176>/Unary Minus'
   */
  if (rtb_Is_Absolute_Steering) {
    u0 = -Code_Gen_Model_B.FL_Desired_Wheel_Speed;
  } else {
    u0 = Code_Gen_Model_B.FL_Desired_Wheel_Speed;
  }

  /* Product: '<S179>/Product2' incorporates:
   *  Constant: '<S179>/Constant'
   *  Switch: '<S176>/Speed_Switch'
   */
  rtb_thetay_a = u0 * 1150.4247703785388;

  /* Signum: '<S174>/Sign' */
  if (rtIsNaN(rtb_thetay_a)) {
    u0 = (rtNaN);
  } else if (rtb_thetay_a < 0.0) {
    u0 = -1.0;
  } else {
    u0 = (rtb_thetay_a > 0.0);
  }

  /* Signum: '<S174>/Sign1' incorporates:
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed)) {
    rtb_Add_du = (rtNaN);
  } else if (Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed < 0.0) {
    rtb_Add_du = -1.0;
  } else {
    rtb_Add_du = (Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed > 0.0);
  }

  /* Product: '<S169>/Product' incorporates:
   *  Abs: '<S174>/Abs'
   *  Abs: '<S177>/Abs'
   *  Constant: '<S180>/Constant'
   *  Constant: '<S190>/Constant3'
   *  Constant: '<S190>/Constant4'
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Speed'
   *  Logic: '<S174>/OR'
   *  Lookup_n-D: '<S177>/1-D Lookup Table'
   *  Math: '<S190>/Math Function'
   *  RelationalOperator: '<S174>/Equal1'
   *  RelationalOperator: '<S180>/Compare'
   *  Signum: '<S174>/Sign'
   *  Signum: '<S174>/Sign1'
   *  Sum: '<S190>/Add1'
   *  Sum: '<S190>/Add2'
   */
  rtb_thetay_a = (((real_T)((u0 == rtb_Add_du) || (fabs
    (Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_thetay_a) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_rx_ht + 1.5707963267948966, 3.1415926535897931) -
          1.5707963267948966), Code_Gen_Model_ConstP.pooled23,
     Code_Gen_Model_ConstP.pooled22, 1U);

  /* Gain: '<S175>/Gain' */
  rtb_FeedForward = Drive_Motor_Control_FF * rtb_thetay_a;

  /* Sum: '<S175>/Sum' incorporates:
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Speed'
   */
  rtb_thetay_a -= Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed;

  /* Sum: '<S182>/Sum1' incorporates:
   *  Constant: '<S175>/Constant2'
   *  Product: '<S182>/Product'
   *  Sum: '<S182>/Sum'
   *  UnitDelay: '<S182>/Unit Delay1'
   */
  rtb_Sin4 = ((rtb_thetay_a - Code_Gen_Model_DW.UnitDelay1_DSTATE_a) *
              Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_a;

  /* Product: '<S175>/Product' incorporates:
   *  Constant: '<S175>/Constant3'
   */
  rtb_Subtract1 = rtb_Sin4 * Drive_Motor_Control_D;

  /* Sum: '<S181>/Diff' incorporates:
   *  UnitDelay: '<S181>/UD'
   *
   * Block description for '<S181>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S181>/UD':
   *
   *  Store in Global RAM
   */
  u0 = rtb_Subtract1 - Code_Gen_Model_DW.UD_DSTATE_o;

  /* Saturate: '<S175>/Saturation' */
  if (u0 > Drive_Motor_Control_D_UL) {
    u0 = Drive_Motor_Control_D_UL;
  } else if (u0 < Drive_Motor_Control_D_LL) {
    u0 = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S175>/Add' incorporates:
   *  Gain: '<S175>/Gain1'
   *  Saturate: '<S175>/Saturation'
   */
  rtb_Add_oh = ((Drive_Motor_Control_P * rtb_thetay_a) + rtb_FeedForward) + u0;

  /* Sum: '<S175>/Subtract' incorporates:
   *  Constant: '<S175>/Constant'
   */
  rtb_rx_kl = 1.0 - rtb_Add_oh;

  /* Sum: '<S175>/Sum2' incorporates:
   *  Gain: '<S175>/Gain2'
   *  UnitDelay: '<S175>/Unit Delay'
   */
  rtb_FeedForward = (Drive_Motor_Control_I * rtb_thetay_a) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_f;

  /* Switch: '<S183>/Switch2' incorporates:
   *  Constant: '<S175>/Constant'
   *  RelationalOperator: '<S183>/LowerRelop1'
   *  Sum: '<S175>/Subtract'
   */
  if (!(rtb_FeedForward > (1.0 - rtb_Add_oh))) {
    /* Switch: '<S183>/Switch' incorporates:
     *  Constant: '<S175>/Constant1'
     *  RelationalOperator: '<S183>/UpperRelop'
     *  Sum: '<S175>/Subtract1'
     */
    if (rtb_FeedForward < (-1.0 - rtb_Add_oh)) {
      rtb_rx_kl = -1.0 - rtb_Add_oh;
    } else {
      rtb_rx_kl = rtb_FeedForward;
    }

    /* End of Switch: '<S183>/Switch' */
  }

  /* End of Switch: '<S183>/Switch2' */

  /* Saturate: '<S175>/Saturation1' */
  if (rtb_rx_kl > Drive_Motor_Control_I_UL) {
    rtb_FeedForward = Drive_Motor_Control_I_UL;
  } else if (rtb_rx_kl < Drive_Motor_Control_I_LL) {
    rtb_FeedForward = Drive_Motor_Control_I_LL;
  } else {
    rtb_FeedForward = rtb_rx_kl;
  }

  /* End of Saturate: '<S175>/Saturation1' */

  /* Sum: '<S175>/Add1' */
  u0 = rtb_Add_oh + rtb_FeedForward;

  /* Saturate: '<S175>/Saturation2' */
  if (u0 > 1.0) {
    /* Outport: '<Root>/FrontLeft_Drive_DutyCycle' */
    Code_Gen_Model_Y.FrontLeft_Drive_DutyCycle = 1.0;
  } else if (u0 < -1.0) {
    /* Outport: '<Root>/FrontLeft_Drive_DutyCycle' */
    Code_Gen_Model_Y.FrontLeft_Drive_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/FrontLeft_Drive_DutyCycle' */
    Code_Gen_Model_Y.FrontLeft_Drive_DutyCycle = u0;
  }

  /* End of Saturate: '<S175>/Saturation2' */

  /* Switch: '<S304>/Switch' */
  if (!rtb_Is_Absolute_Translation_g) {
    /* Switch: '<S304>/Switch' incorporates:
     *  Fcn: '<S305>/x->theta'
     */
    Code_Gen_Model_B.FR_Desired_Module_Angle = rt_atan2d_snf(rtb_Akxhatkk1[1],
      rtb_Akxhatkk1[0]);
  }

  /* End of Switch: '<S304>/Switch' */

  /* Trigonometry: '<S208>/Cos4' incorporates:
   *  Switch: '<S197>/Angle_Switch'
   *  Trigonometry: '<S207>/Cos4'
   */
  rtb_Subtract_e = cos(Code_Gen_Model_B.FR_Desired_Module_Angle);

  /* Sum: '<S166>/Add1' incorporates:
   *  Constant: '<S166>/Constant3'
   *  Constant: '<S166>/Constant4'
   *  Gain: '<S16>/Revolutions to Radians1'
   *  Inport: '<Root>/FrontRight_Steer_Rev'
   *  Inport: '<Root>/FrontRight_Turn_Offset'
   *  Math: '<S166>/Math Function'
   *  Sum: '<S166>/Add2'
   *  Sum: '<S16>/Add1'
   */
  Code_Gen_Model_B.FR_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.FrontRight_Steer_Rev -
       Code_Gen_Model_U.FrontRight_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Trigonometry: '<S208>/Sin5' incorporates:
   *  UnaryMinus: '<S206>/Unary Minus'
   */
  rtb_rx_ht = sin(-Code_Gen_Model_B.FR_Steer_Module_Angle);

  /* Trigonometry: '<S208>/Sin4' incorporates:
   *  Switch: '<S197>/Angle_Switch'
   *  Trigonometry: '<S207>/Sin4'
   */
  rtb_Product_d = sin(Code_Gen_Model_B.FR_Desired_Module_Angle);

  /* Trigonometry: '<S208>/Cos5' incorporates:
   *  UnaryMinus: '<S206>/Unary Minus'
   */
  rtb_rx_kl = cos(-Code_Gen_Model_B.FR_Steer_Module_Angle);

  /* Sum: '<S208>/Subtract1' incorporates:
   *  Product: '<S208>/Product2'
   *  Product: '<S208>/Product3'
   *  Trigonometry: '<S208>/Cos4'
   *  Trigonometry: '<S208>/Sin4'
   */
  rtb_Add_oh = (rtb_Subtract_e * rtb_rx_ht) + (rtb_Product_d * rtb_rx_kl);

  /* Sum: '<S208>/Subtract' incorporates:
   *  Product: '<S208>/Product'
   *  Product: '<S208>/Product1'
   *  Trigonometry: '<S208>/Cos4'
   *  Trigonometry: '<S208>/Sin4'
   */
  rtb_Subtract1_of = (rtb_Subtract_e * rtb_rx_kl) - (rtb_Product_d * rtb_rx_ht);

  /* Math: '<S208>/Hypot' */
  rtb_Hypot_bl = rt_hypotd_snf(rtb_Subtract1_of, rtb_Add_oh);

  /* Switch: '<S208>/Switch' incorporates:
   *  Constant: '<S208>/Constant'
   *  Constant: '<S208>/Constant1'
   *  Constant: '<S209>/Constant'
   *  Product: '<S208>/Divide'
   *  Product: '<S208>/Divide1'
   *  RelationalOperator: '<S209>/Compare'
   *  Switch: '<S208>/Switch1'
   */
  if (rtb_Hypot_bl > 1.0E-6) {
    rtb_thetay_a = rtb_Add_oh / rtb_Hypot_bl;
    rtb_rx_kl = rtb_Subtract1_of / rtb_Hypot_bl;
  } else {
    rtb_thetay_a = 0.0;
    rtb_rx_kl = 1.0;
  }

  /* End of Switch: '<S208>/Switch' */

  /* RelationalOperator: '<S205>/Compare' incorporates:
   *  Abs: '<S197>/Abs'
   *  Constant: '<S205>/Constant'
   *  Trigonometry: '<S208>/Atan1'
   */
  rtb_Is_Absolute_Steering = (fabs(rt_atan2d_snf(rtb_thetay_a, rtb_rx_kl)) >
    1.5707963267948966);

  /* Switch: '<S197>/Angle_Switch' incorporates:
   *  Trigonometry: '<S207>/Atan1'
   */
  if (rtb_Is_Absolute_Steering) {
    /* Sum: '<S207>/Subtract1' incorporates:
     *  Product: '<S207>/Product2'
     *  Product: '<S207>/Product3'
     */
    rtb_Add_oh = (rtb_Subtract_e * Code_Gen_Model_ConstB.Sin5_m) +
      (rtb_Product_d * Code_Gen_Model_ConstB.Cos5_g);

    /* Sum: '<S207>/Subtract' incorporates:
     *  Product: '<S207>/Product'
     *  Product: '<S207>/Product1'
     */
    rtb_Hypot_bl = (rtb_Subtract_e * Code_Gen_Model_ConstB.Cos5_g) -
      (rtb_Product_d * Code_Gen_Model_ConstB.Sin5_m);

    /* Math: '<S207>/Hypot' */
    rtb_Subtract1_of = rt_hypotd_snf(rtb_Hypot_bl, rtb_Add_oh);

    /* Switch: '<S207>/Switch1' incorporates:
     *  Constant: '<S207>/Constant'
     *  Constant: '<S207>/Constant1'
     *  Constant: '<S210>/Constant'
     *  Product: '<S207>/Divide'
     *  Product: '<S207>/Divide1'
     *  RelationalOperator: '<S210>/Compare'
     *  Switch: '<S207>/Switch'
     */
    if (rtb_Subtract1_of > 1.0E-6) {
      rtb_Hypot_bl /= rtb_Subtract1_of;
      rtb_Add_oh /= rtb_Subtract1_of;
    } else {
      rtb_Hypot_bl = 1.0;
      rtb_Add_oh = 0.0;
    }

    /* End of Switch: '<S207>/Switch1' */
    rtb_thetay_a = rt_atan2d_snf(rtb_Add_oh, rtb_Hypot_bl);
  } else {
    rtb_thetay_a = Code_Gen_Model_B.FR_Desired_Module_Angle;
  }

  /* Sum: '<S199>/Sum' incorporates:
   *  Sum: '<S198>/Add'
   */
  rtb_Product_j4 = rtb_thetay_a - Code_Gen_Model_B.FR_Steer_Module_Angle;

  /* Sum: '<S212>/Add1' incorporates:
   *  Constant: '<S212>/Constant3'
   *  Constant: '<S212>/Constant4'
   *  Math: '<S212>/Math Function'
   *  Sum: '<S199>/Sum'
   *  Sum: '<S212>/Add2'
   */
  rtb_rx_kl = rt_modd_snf(rtb_Product_j4 + 3.1415926535897931,
    6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S214>/Sum1' incorporates:
   *  Constant: '<S199>/Constant2'
   *  Product: '<S214>/Product'
   *  Sum: '<S214>/Sum'
   *  UnitDelay: '<S214>/Unit Delay1'
   */
  rtb_Add_oh = ((rtb_rx_kl - Code_Gen_Model_DW.UnitDelay1_DSTATE_n) *
                Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_n;

  /* Product: '<S199>/Product' incorporates:
   *  Constant: '<S199>/Constant3'
   */
  rtb_Subtract1_of = rtb_Add_oh * Steering_Motor_Control_D;

  /* Sum: '<S213>/Diff' incorporates:
   *  UnitDelay: '<S213>/UD'
   *
   * Block description for '<S213>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S213>/UD':
   *
   *  Store in Global RAM
   */
  u0 = rtb_Subtract1_of - Code_Gen_Model_DW.UD_DSTATE_i;

  /* Saturate: '<S199>/Saturation' */
  if (u0 > Steering_Motor_Control_D_UL) {
    u0 = Steering_Motor_Control_D_UL;
  } else if (u0 < Steering_Motor_Control_D_LL) {
    u0 = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S199>/Add' incorporates:
   *  Gain: '<S199>/Gain1'
   *  Saturate: '<S199>/Saturation'
   */
  rtb_Add_i = (Steering_Motor_Control_P * rtb_rx_kl) + u0;

  /* Sum: '<S199>/Subtract' incorporates:
   *  Constant: '<S199>/Constant'
   */
  rtb_rx_ht = 1.0 - rtb_Add_i;

  /* Sum: '<S199>/Sum2' incorporates:
   *  Gain: '<S199>/Gain2'
   *  UnitDelay: '<S199>/Unit Delay'
   */
  rtb_Hypot_bl = (Steering_Motor_Control_I * rtb_rx_kl) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_dt;

  /* Switch: '<S215>/Switch2' incorporates:
   *  Constant: '<S199>/Constant'
   *  RelationalOperator: '<S215>/LowerRelop1'
   *  Sum: '<S199>/Subtract'
   */
  if (!(rtb_Hypot_bl > (1.0 - rtb_Add_i))) {
    /* Switch: '<S215>/Switch' incorporates:
     *  Constant: '<S199>/Constant1'
     *  RelationalOperator: '<S215>/UpperRelop'
     *  Sum: '<S199>/Subtract1'
     */
    if (rtb_Hypot_bl < (-1.0 - rtb_Add_i)) {
      rtb_rx_ht = -1.0 - rtb_Add_i;
    } else {
      rtb_rx_ht = rtb_Hypot_bl;
    }

    /* End of Switch: '<S215>/Switch' */
  }

  /* End of Switch: '<S215>/Switch2' */

  /* Saturate: '<S199>/Saturation1' */
  if (rtb_rx_ht > Steering_Motor_Control_I_UL) {
    rtb_Hypot_bl = Steering_Motor_Control_I_UL;
  } else if (rtb_rx_ht < Steering_Motor_Control_I_LL) {
    rtb_Hypot_bl = Steering_Motor_Control_I_LL;
  } else {
    rtb_Hypot_bl = rtb_rx_ht;
  }

  /* End of Saturate: '<S199>/Saturation1' */

  /* Sum: '<S199>/Add1' */
  u0 = rtb_Add_i + rtb_Hypot_bl;

  /* Saturate: '<S199>/Saturation2' */
  if (u0 > 1.0) {
    /* Outport: '<Root>/FrontRight_Steer_DutyCycle' */
    Code_Gen_Model_Y.FrontRight_Steer_DutyCycle = 1.0;
  } else if (u0 < -1.0) {
    /* Outport: '<Root>/FrontRight_Steer_DutyCycle' */
    Code_Gen_Model_Y.FrontRight_Steer_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/FrontRight_Steer_DutyCycle' */
    Code_Gen_Model_Y.FrontRight_Steer_DutyCycle = u0;
  }

  /* End of Saturate: '<S199>/Saturation2' */

  /* Product: '<S294>/Product1' */
  Code_Gen_Model_B.FR_Desired_Wheel_Speed =
    Code_Gen_Model_B.FR_Desired_Wheel_Speed_in * rtb_Init;

  /* Switch: '<S197>/Speed_Switch' incorporates:
   *  UnaryMinus: '<S197>/Unary Minus'
   */
  if (rtb_Is_Absolute_Steering) {
    u0 = -Code_Gen_Model_B.FR_Desired_Wheel_Speed;
  } else {
    u0 = Code_Gen_Model_B.FR_Desired_Wheel_Speed;
  }

  /* Product: '<S200>/Product2' incorporates:
   *  Constant: '<S200>/Constant'
   *  Switch: '<S197>/Speed_Switch'
   */
  rtb_rx_kl = u0 * 1150.4247703785388;

  /* Signum: '<S195>/Sign' */
  if (rtIsNaN(rtb_rx_kl)) {
    u0 = (rtNaN);
  } else if (rtb_rx_kl < 0.0) {
    u0 = -1.0;
  } else {
    u0 = (rtb_rx_kl > 0.0);
  }

  /* Signum: '<S195>/Sign1' incorporates:
   *  Inport: '<Root>/FrontRight_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.FrontRight_Drive_Motor_Speed)) {
    rtb_Add_du = (rtNaN);
  } else if (Code_Gen_Model_U.FrontRight_Drive_Motor_Speed < 0.0) {
    rtb_Add_du = -1.0;
  } else {
    rtb_Add_du = (Code_Gen_Model_U.FrontRight_Drive_Motor_Speed > 0.0);
  }

  /* Product: '<S170>/Product' incorporates:
   *  Abs: '<S195>/Abs'
   *  Abs: '<S198>/Abs'
   *  Constant: '<S201>/Constant'
   *  Constant: '<S211>/Constant3'
   *  Constant: '<S211>/Constant4'
   *  Inport: '<Root>/FrontRight_Drive_Motor_Speed'
   *  Logic: '<S195>/OR'
   *  Lookup_n-D: '<S198>/1-D Lookup Table'
   *  Math: '<S211>/Math Function'
   *  RelationalOperator: '<S195>/Equal1'
   *  RelationalOperator: '<S201>/Compare'
   *  Signum: '<S195>/Sign'
   *  Signum: '<S195>/Sign1'
   *  Sum: '<S211>/Add1'
   *  Sum: '<S211>/Add2'
   */
  rtb_rx_kl = (((real_T)((u0 == rtb_Add_du) || (fabs
    (Code_Gen_Model_U.FrontRight_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_rx_kl) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_Product_j4 + 1.5707963267948966, 3.1415926535897931) -
          1.5707963267948966), Code_Gen_Model_ConstP.pooled23,
     Code_Gen_Model_ConstP.pooled22, 1U);

  /* Gain: '<S196>/Gain' */
  rtb_FeedForward_n = Drive_Motor_Control_FF * rtb_rx_kl;

  /* Sum: '<S196>/Sum' incorporates:
   *  Inport: '<Root>/FrontRight_Drive_Motor_Speed'
   */
  rtb_rx_kl -= Code_Gen_Model_U.FrontRight_Drive_Motor_Speed;

  /* Sum: '<S203>/Sum1' incorporates:
   *  Constant: '<S196>/Constant2'
   *  Product: '<S203>/Product'
   *  Sum: '<S203>/Sum'
   *  UnitDelay: '<S203>/Unit Delay1'
   */
  rtb_Add_i = ((rtb_rx_kl - Code_Gen_Model_DW.UnitDelay1_DSTATE_b1) *
               Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_b1;

  /* Product: '<S196>/Product' incorporates:
   *  Constant: '<S196>/Constant3'
   */
  rtb_Subtract1_a = rtb_Add_i * Drive_Motor_Control_D;

  /* Sum: '<S202>/Diff' incorporates:
   *  UnitDelay: '<S202>/UD'
   *
   * Block description for '<S202>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S202>/UD':
   *
   *  Store in Global RAM
   */
  u0 = rtb_Subtract1_a - Code_Gen_Model_DW.UD_DSTATE_e;

  /* Saturate: '<S196>/Saturation' */
  if (u0 > Drive_Motor_Control_D_UL) {
    u0 = Drive_Motor_Control_D_UL;
  } else if (u0 < Drive_Motor_Control_D_LL) {
    u0 = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S196>/Add' incorporates:
   *  Gain: '<S196>/Gain1'
   *  Saturate: '<S196>/Saturation'
   */
  rtb_Add_o2 = ((Drive_Motor_Control_P * rtb_rx_kl) + rtb_FeedForward_n) + u0;

  /* Sum: '<S196>/Subtract' incorporates:
   *  Constant: '<S196>/Constant'
   */
  rtb_thetay_a = 1.0 - rtb_Add_o2;

  /* Sum: '<S196>/Sum2' incorporates:
   *  Gain: '<S196>/Gain2'
   *  UnitDelay: '<S196>/Unit Delay'
   */
  rtb_FeedForward_n = (Drive_Motor_Control_I * rtb_rx_kl) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_em;

  /* Switch: '<S204>/Switch2' incorporates:
   *  Constant: '<S196>/Constant'
   *  RelationalOperator: '<S204>/LowerRelop1'
   *  Sum: '<S196>/Subtract'
   */
  if (!(rtb_FeedForward_n > (1.0 - rtb_Add_o2))) {
    /* Switch: '<S204>/Switch' incorporates:
     *  Constant: '<S196>/Constant1'
     *  RelationalOperator: '<S204>/UpperRelop'
     *  Sum: '<S196>/Subtract1'
     */
    if (rtb_FeedForward_n < (-1.0 - rtb_Add_o2)) {
      rtb_thetay_a = -1.0 - rtb_Add_o2;
    } else {
      rtb_thetay_a = rtb_FeedForward_n;
    }

    /* End of Switch: '<S204>/Switch' */
  }

  /* End of Switch: '<S204>/Switch2' */

  /* Saturate: '<S196>/Saturation1' */
  if (rtb_thetay_a > Drive_Motor_Control_I_UL) {
    rtb_FeedForward_n = Drive_Motor_Control_I_UL;
  } else if (rtb_thetay_a < Drive_Motor_Control_I_LL) {
    rtb_FeedForward_n = Drive_Motor_Control_I_LL;
  } else {
    rtb_FeedForward_n = rtb_thetay_a;
  }

  /* End of Saturate: '<S196>/Saturation1' */

  /* Sum: '<S196>/Add1' */
  u0 = rtb_Add_o2 + rtb_FeedForward_n;

  /* Saturate: '<S196>/Saturation2' */
  if (u0 > 1.0) {
    /* Outport: '<Root>/FrontRight_Drive_DutyCycle' */
    Code_Gen_Model_Y.FrontRight_Drive_DutyCycle = 1.0;
  } else if (u0 < -1.0) {
    /* Outport: '<Root>/FrontRight_Drive_DutyCycle' */
    Code_Gen_Model_Y.FrontRight_Drive_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/FrontRight_Drive_DutyCycle' */
    Code_Gen_Model_Y.FrontRight_Drive_DutyCycle = u0;
  }

  /* End of Saturate: '<S196>/Saturation2' */

  /* Switch: '<S309>/Switch' */
  if (!rtb_FixPtRelationalOperator) {
    /* Switch: '<S309>/Switch' incorporates:
     *  Fcn: '<S310>/x->theta'
     */
    Code_Gen_Model_B.BL_Desired_Module_Angle = rt_atan2d_snf(rtb_Minus_n[1],
      rtb_Minus_n[0]);
  }

  /* End of Switch: '<S309>/Switch' */

  /* Trigonometry: '<S229>/Cos4' incorporates:
   *  Switch: '<S218>/Angle_Switch'
   *  Trigonometry: '<S228>/Cos4'
   */
  rtb_Subtract_e = cos(Code_Gen_Model_B.BL_Desired_Module_Angle);

  /* Sum: '<S167>/Add1' incorporates:
   *  Constant: '<S167>/Constant3'
   *  Constant: '<S167>/Constant4'
   *  Gain: '<S16>/Revolutions to Radians2'
   *  Inport: '<Root>/BackLeft_Steer_Rev'
   *  Inport: '<Root>/BackLeft_Turn_Offset'
   *  Math: '<S167>/Math Function'
   *  Sum: '<S167>/Add2'
   *  Sum: '<S16>/Add2'
   */
  Code_Gen_Model_B.BL_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.BackLeft_Steer_Rev -
       Code_Gen_Model_U.BackLeft_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Trigonometry: '<S229>/Sin5' incorporates:
   *  UnaryMinus: '<S227>/Unary Minus'
   */
  rtb_rx_ht = sin(-Code_Gen_Model_B.BL_Steer_Module_Angle);

  /* Trigonometry: '<S229>/Sin4' incorporates:
   *  Switch: '<S218>/Angle_Switch'
   *  Trigonometry: '<S228>/Sin4'
   */
  rtb_Product_d = sin(Code_Gen_Model_B.BL_Desired_Module_Angle);

  /* Trigonometry: '<S229>/Cos5' incorporates:
   *  UnaryMinus: '<S227>/Unary Minus'
   */
  rtb_rx_kl = cos(-Code_Gen_Model_B.BL_Steer_Module_Angle);

  /* Sum: '<S229>/Subtract1' incorporates:
   *  Product: '<S229>/Product2'
   *  Product: '<S229>/Product3'
   *  Trigonometry: '<S229>/Cos4'
   *  Trigonometry: '<S229>/Sin4'
   */
  rtb_Add_o2 = (rtb_Subtract_e * rtb_rx_ht) + (rtb_Product_d * rtb_rx_kl);

  /* Sum: '<S229>/Subtract' incorporates:
   *  Product: '<S229>/Product'
   *  Product: '<S229>/Product1'
   *  Trigonometry: '<S229>/Cos4'
   *  Trigonometry: '<S229>/Sin4'
   */
  rtb_Subtract1_do = (rtb_Subtract_e * rtb_rx_kl) - (rtb_Product_d * rtb_rx_ht);

  /* Math: '<S229>/Hypot' */
  rtb_Hypot_d = rt_hypotd_snf(rtb_Subtract1_do, rtb_Add_o2);

  /* Switch: '<S229>/Switch' incorporates:
   *  Constant: '<S229>/Constant'
   *  Constant: '<S229>/Constant1'
   *  Constant: '<S230>/Constant'
   *  Product: '<S229>/Divide'
   *  Product: '<S229>/Divide1'
   *  RelationalOperator: '<S230>/Compare'
   *  Switch: '<S229>/Switch1'
   */
  if (rtb_Hypot_d > 1.0E-6) {
    rtb_thetay_a = rtb_Add_o2 / rtb_Hypot_d;
    rtb_rx_kl = rtb_Subtract1_do / rtb_Hypot_d;
  } else {
    rtb_thetay_a = 0.0;
    rtb_rx_kl = 1.0;
  }

  /* End of Switch: '<S229>/Switch' */

  /* RelationalOperator: '<S226>/Compare' incorporates:
   *  Abs: '<S218>/Abs'
   *  Constant: '<S226>/Constant'
   *  Trigonometry: '<S229>/Atan1'
   */
  rtb_FixPtRelationalOperator = (fabs(rt_atan2d_snf(rtb_thetay_a, rtb_rx_kl)) >
    1.5707963267948966);

  /* Switch: '<S218>/Angle_Switch' incorporates:
   *  Trigonometry: '<S228>/Atan1'
   */
  if (rtb_FixPtRelationalOperator) {
    /* Sum: '<S228>/Subtract1' incorporates:
     *  Product: '<S228>/Product2'
     *  Product: '<S228>/Product3'
     */
    rtb_Add_o2 = (rtb_Subtract_e * Code_Gen_Model_ConstB.Sin5_e) +
      (rtb_Product_d * Code_Gen_Model_ConstB.Cos5_i);

    /* Sum: '<S228>/Subtract' incorporates:
     *  Product: '<S228>/Product'
     *  Product: '<S228>/Product1'
     */
    rtb_Hypot_d = (rtb_Subtract_e * Code_Gen_Model_ConstB.Cos5_i) -
      (rtb_Product_d * Code_Gen_Model_ConstB.Sin5_e);

    /* Math: '<S228>/Hypot' */
    rtb_Subtract1_do = rt_hypotd_snf(rtb_Hypot_d, rtb_Add_o2);

    /* Switch: '<S228>/Switch1' incorporates:
     *  Constant: '<S228>/Constant'
     *  Constant: '<S228>/Constant1'
     *  Constant: '<S231>/Constant'
     *  Product: '<S228>/Divide'
     *  Product: '<S228>/Divide1'
     *  RelationalOperator: '<S231>/Compare'
     *  Switch: '<S228>/Switch'
     */
    if (rtb_Subtract1_do > 1.0E-6) {
      rtb_Hypot_d /= rtb_Subtract1_do;
      rtb_Add_o2 /= rtb_Subtract1_do;
    } else {
      rtb_Hypot_d = 1.0;
      rtb_Add_o2 = 0.0;
    }

    /* End of Switch: '<S228>/Switch1' */
    rtb_thetay_a = rt_atan2d_snf(rtb_Add_o2, rtb_Hypot_d);
  } else {
    rtb_thetay_a = Code_Gen_Model_B.BL_Desired_Module_Angle;
  }

  /* Sum: '<S220>/Sum' incorporates:
   *  Sum: '<S219>/Add'
   */
  rtb_Product_j4 = rtb_thetay_a - Code_Gen_Model_B.BL_Steer_Module_Angle;

  /* Sum: '<S233>/Add1' incorporates:
   *  Constant: '<S233>/Constant3'
   *  Constant: '<S233>/Constant4'
   *  Math: '<S233>/Math Function'
   *  Sum: '<S220>/Sum'
   *  Sum: '<S233>/Add2'
   */
  rtb_rx_kl = rt_modd_snf(rtb_Product_j4 + 3.1415926535897931,
    6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S235>/Sum1' incorporates:
   *  Constant: '<S220>/Constant2'
   *  Product: '<S235>/Product'
   *  Sum: '<S235>/Sum'
   *  UnitDelay: '<S235>/Unit Delay1'
   */
  rtb_Add_o2 = ((rtb_rx_kl - Code_Gen_Model_DW.UnitDelay1_DSTATE_nw) *
                Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_nw;

  /* Product: '<S220>/Product' incorporates:
   *  Constant: '<S220>/Constant3'
   */
  rtb_Subtract1_do = rtb_Add_o2 * Steering_Motor_Control_D;

  /* Sum: '<S234>/Diff' incorporates:
   *  UnitDelay: '<S234>/UD'
   *
   * Block description for '<S234>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S234>/UD':
   *
   *  Store in Global RAM
   */
  u0 = rtb_Subtract1_do - Code_Gen_Model_DW.UD_DSTATE_k;

  /* Saturate: '<S220>/Saturation' */
  if (u0 > Steering_Motor_Control_D_UL) {
    u0 = Steering_Motor_Control_D_UL;
  } else if (u0 < Steering_Motor_Control_D_LL) {
    u0 = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S220>/Add' incorporates:
   *  Gain: '<S220>/Gain1'
   *  Saturate: '<S220>/Saturation'
   */
  rtb_Add_gj = (Steering_Motor_Control_P * rtb_rx_kl) + u0;

  /* Sum: '<S220>/Subtract' incorporates:
   *  Constant: '<S220>/Constant'
   */
  rtb_rx_ht = 1.0 - rtb_Add_gj;

  /* Sum: '<S220>/Sum2' incorporates:
   *  Gain: '<S220>/Gain2'
   *  UnitDelay: '<S220>/Unit Delay'
   */
  rtb_Hypot_d = (Steering_Motor_Control_I * rtb_rx_kl) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_k;

  /* Switch: '<S236>/Switch2' incorporates:
   *  Constant: '<S220>/Constant'
   *  RelationalOperator: '<S236>/LowerRelop1'
   *  Sum: '<S220>/Subtract'
   */
  if (!(rtb_Hypot_d > (1.0 - rtb_Add_gj))) {
    /* Switch: '<S236>/Switch' incorporates:
     *  Constant: '<S220>/Constant1'
     *  RelationalOperator: '<S236>/UpperRelop'
     *  Sum: '<S220>/Subtract1'
     */
    if (rtb_Hypot_d < (-1.0 - rtb_Add_gj)) {
      rtb_rx_ht = -1.0 - rtb_Add_gj;
    } else {
      rtb_rx_ht = rtb_Hypot_d;
    }

    /* End of Switch: '<S236>/Switch' */
  }

  /* End of Switch: '<S236>/Switch2' */

  /* Saturate: '<S220>/Saturation1' */
  if (rtb_rx_ht > Steering_Motor_Control_I_UL) {
    rtb_Hypot_d = Steering_Motor_Control_I_UL;
  } else if (rtb_rx_ht < Steering_Motor_Control_I_LL) {
    rtb_Hypot_d = Steering_Motor_Control_I_LL;
  } else {
    rtb_Hypot_d = rtb_rx_ht;
  }

  /* End of Saturate: '<S220>/Saturation1' */

  /* Sum: '<S220>/Add1' */
  u0 = rtb_Add_gj + rtb_Hypot_d;

  /* Saturate: '<S220>/Saturation2' */
  if (u0 > 1.0) {
    /* Outport: '<Root>/BackLeft_Steer_DutyCycle' */
    Code_Gen_Model_Y.BackLeft_Steer_DutyCycle = 1.0;
  } else if (u0 < -1.0) {
    /* Outport: '<Root>/BackLeft_Steer_DutyCycle' */
    Code_Gen_Model_Y.BackLeft_Steer_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/BackLeft_Steer_DutyCycle' */
    Code_Gen_Model_Y.BackLeft_Steer_DutyCycle = u0;
  }

  /* End of Saturate: '<S220>/Saturation2' */

  /* Product: '<S294>/Product2' */
  Code_Gen_Model_B.BL_Desired_Wheel_Speed =
    Code_Gen_Model_B.BL_Desired_Wheel_Speed_in * rtb_Init;

  /* Switch: '<S218>/Speed_Switch' incorporates:
   *  UnaryMinus: '<S218>/Unary Minus'
   */
  if (rtb_FixPtRelationalOperator) {
    u0 = -Code_Gen_Model_B.BL_Desired_Wheel_Speed;
  } else {
    u0 = Code_Gen_Model_B.BL_Desired_Wheel_Speed;
  }

  /* Product: '<S221>/Product2' incorporates:
   *  Constant: '<S221>/Constant'
   *  Switch: '<S218>/Speed_Switch'
   */
  rtb_rx_kl = u0 * 1150.4247703785388;

  /* Signum: '<S216>/Sign' */
  if (rtIsNaN(rtb_rx_kl)) {
    u0 = (rtNaN);
  } else if (rtb_rx_kl < 0.0) {
    u0 = -1.0;
  } else {
    u0 = (rtb_rx_kl > 0.0);
  }

  /* Signum: '<S216>/Sign1' incorporates:
   *  Inport: '<Root>/BackLeft_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.BackLeft_Drive_Motor_Speed)) {
    rtb_Add_du = (rtNaN);
  } else if (Code_Gen_Model_U.BackLeft_Drive_Motor_Speed < 0.0) {
    rtb_Add_du = -1.0;
  } else {
    rtb_Add_du = (Code_Gen_Model_U.BackLeft_Drive_Motor_Speed > 0.0);
  }

  /* Product: '<S171>/Product' incorporates:
   *  Abs: '<S216>/Abs'
   *  Abs: '<S219>/Abs'
   *  Constant: '<S222>/Constant'
   *  Constant: '<S232>/Constant3'
   *  Constant: '<S232>/Constant4'
   *  Inport: '<Root>/BackLeft_Drive_Motor_Speed'
   *  Logic: '<S216>/OR'
   *  Lookup_n-D: '<S219>/1-D Lookup Table'
   *  Math: '<S232>/Math Function'
   *  RelationalOperator: '<S216>/Equal1'
   *  RelationalOperator: '<S222>/Compare'
   *  Signum: '<S216>/Sign'
   *  Signum: '<S216>/Sign1'
   *  Sum: '<S232>/Add1'
   *  Sum: '<S232>/Add2'
   */
  rtb_rx_kl = (((real_T)((u0 == rtb_Add_du) || (fabs
    (Code_Gen_Model_U.BackLeft_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_rx_kl) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_Product_j4 + 1.5707963267948966, 3.1415926535897931) -
          1.5707963267948966), Code_Gen_Model_ConstP.pooled23,
     Code_Gen_Model_ConstP.pooled22, 1U);

  /* Gain: '<S217>/Gain' */
  rtb_FeedForward_a = Drive_Motor_Control_FF * rtb_rx_kl;

  /* Sum: '<S217>/Sum' incorporates:
   *  Inport: '<Root>/BackLeft_Drive_Motor_Speed'
   */
  rtb_rx_kl -= Code_Gen_Model_U.BackLeft_Drive_Motor_Speed;

  /* Sum: '<S224>/Sum1' incorporates:
   *  Constant: '<S217>/Constant2'
   *  Product: '<S224>/Product'
   *  Sum: '<S224>/Sum'
   *  UnitDelay: '<S224>/Unit Delay1'
   */
  rtb_Add_gj = ((rtb_rx_kl - Code_Gen_Model_DW.UnitDelay1_DSTATE_f) *
                Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_f;

  /* Product: '<S217>/Product' incorporates:
   *  Constant: '<S217>/Constant3'
   */
  rtb_Subtract1_f = rtb_Add_gj * Drive_Motor_Control_D;

  /* Sum: '<S223>/Diff' incorporates:
   *  UnitDelay: '<S223>/UD'
   *
   * Block description for '<S223>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S223>/UD':
   *
   *  Store in Global RAM
   */
  u0 = rtb_Subtract1_f - Code_Gen_Model_DW.UD_DSTATE_l;

  /* Saturate: '<S217>/Saturation' */
  if (u0 > Drive_Motor_Control_D_UL) {
    u0 = Drive_Motor_Control_D_UL;
  } else if (u0 < Drive_Motor_Control_D_LL) {
    u0 = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S217>/Add' incorporates:
   *  Gain: '<S217>/Gain1'
   *  Saturate: '<S217>/Saturation'
   */
  rtb_rx_ht = ((Drive_Motor_Control_P * rtb_rx_kl) + rtb_FeedForward_a) + u0;

  /* Sum: '<S217>/Subtract' incorporates:
   *  Constant: '<S217>/Constant'
   */
  rtb_thetay_a = 1.0 - rtb_rx_ht;

  /* Sum: '<S217>/Sum2' incorporates:
   *  Gain: '<S217>/Gain2'
   *  UnitDelay: '<S217>/Unit Delay'
   */
  rtb_FeedForward_a = (Drive_Motor_Control_I * rtb_rx_kl) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_gp;

  /* Switch: '<S225>/Switch2' incorporates:
   *  Constant: '<S217>/Constant'
   *  RelationalOperator: '<S225>/LowerRelop1'
   *  Sum: '<S217>/Subtract'
   */
  if (!(rtb_FeedForward_a > (1.0 - rtb_rx_ht))) {
    /* Sum: '<S217>/Subtract1' incorporates:
     *  Constant: '<S217>/Constant1'
     */
    rtb_thetay_a = -1.0 - rtb_rx_ht;

    /* Switch: '<S225>/Switch' incorporates:
     *  Constant: '<S217>/Constant1'
     *  RelationalOperator: '<S225>/UpperRelop'
     *  Sum: '<S217>/Subtract1'
     */
    if (!(rtb_FeedForward_a < (-1.0 - rtb_rx_ht))) {
      rtb_thetay_a = rtb_FeedForward_a;
    }

    /* End of Switch: '<S225>/Switch' */
  }

  /* End of Switch: '<S225>/Switch2' */

  /* Saturate: '<S217>/Saturation1' */
  if (rtb_thetay_a > Drive_Motor_Control_I_UL) {
    rtb_FeedForward_a = Drive_Motor_Control_I_UL;
  } else if (rtb_thetay_a < Drive_Motor_Control_I_LL) {
    rtb_FeedForward_a = Drive_Motor_Control_I_LL;
  } else {
    rtb_FeedForward_a = rtb_thetay_a;
  }

  /* End of Saturate: '<S217>/Saturation1' */

  /* Sum: '<S217>/Add1' */
  u0 = rtb_rx_ht + rtb_FeedForward_a;

  /* Saturate: '<S217>/Saturation2' */
  if (u0 > 1.0) {
    /* Outport: '<Root>/BackLeft_Drive_DutyCycle' */
    Code_Gen_Model_Y.BackLeft_Drive_DutyCycle = 1.0;
  } else if (u0 < -1.0) {
    /* Outport: '<Root>/BackLeft_Drive_DutyCycle' */
    Code_Gen_Model_Y.BackLeft_Drive_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/BackLeft_Drive_DutyCycle' */
    Code_Gen_Model_Y.BackLeft_Drive_DutyCycle = u0;
  }

  /* End of Saturate: '<S217>/Saturation2' */

  /* Switch: '<S314>/Switch' */
  if (!rtb_FixPtRelationalOperator_ea) {
    /* Switch: '<S314>/Switch' incorporates:
     *  Fcn: '<S315>/x->theta'
     */
    Code_Gen_Model_B.BR_Desired_Module_Angle = rt_atan2d_snf(rtb_Add2_k_idx_1,
      rtb_Add2_k_idx_0);
  }

  /* End of Switch: '<S314>/Switch' */

  /* Trigonometry: '<S250>/Cos4' incorporates:
   *  Switch: '<S239>/Angle_Switch'
   *  Trigonometry: '<S249>/Cos4'
   */
  rtb_Subtract_e = cos(Code_Gen_Model_B.BR_Desired_Module_Angle);

  /* Sum: '<S168>/Add1' incorporates:
   *  Constant: '<S168>/Constant3'
   *  Constant: '<S168>/Constant4'
   *  Gain: '<S16>/Revolutions to Radians3'
   *  Inport: '<Root>/BackRight_Steer_Rev'
   *  Inport: '<Root>/BackRight_Turn_Offset'
   *  Math: '<S168>/Math Function'
   *  Sum: '<S168>/Add2'
   *  Sum: '<S16>/Add3'
   */
  Code_Gen_Model_B.BR_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.BackRight_Steer_Rev -
       Code_Gen_Model_U.BackRight_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Trigonometry: '<S250>/Sin5' incorporates:
   *  UnaryMinus: '<S248>/Unary Minus'
   */
  rtb_rx_ht = sin(-Code_Gen_Model_B.BR_Steer_Module_Angle);

  /* Trigonometry: '<S250>/Sin4' incorporates:
   *  Switch: '<S239>/Angle_Switch'
   *  Trigonometry: '<S249>/Sin4'
   */
  rtb_Product_d = sin(Code_Gen_Model_B.BR_Desired_Module_Angle);

  /* Trigonometry: '<S250>/Cos5' incorporates:
   *  UnaryMinus: '<S248>/Unary Minus'
   */
  rtb_rx_kl = cos(-Code_Gen_Model_B.BR_Steer_Module_Angle);

  /* Sum: '<S250>/Subtract1' incorporates:
   *  Product: '<S250>/Product2'
   *  Product: '<S250>/Product3'
   *  Trigonometry: '<S250>/Cos4'
   *  Trigonometry: '<S250>/Sin4'
   */
  rtb_thetay_a = (rtb_Subtract_e * rtb_rx_ht) + (rtb_Product_d * rtb_rx_kl);

  /* Sum: '<S250>/Subtract' incorporates:
   *  Product: '<S250>/Product'
   *  Product: '<S250>/Product1'
   *  Trigonometry: '<S250>/Cos4'
   *  Trigonometry: '<S250>/Sin4'
   */
  rtb_rx_ht = (rtb_Subtract_e * rtb_rx_kl) - (rtb_Product_d * rtb_rx_ht);

  /* Math: '<S250>/Hypot' */
  rtb_rx_kl = rt_hypotd_snf(rtb_rx_ht, rtb_thetay_a);

  /* Switch: '<S250>/Switch' incorporates:
   *  Constant: '<S250>/Constant'
   *  Constant: '<S250>/Constant1'
   *  Constant: '<S251>/Constant'
   *  Product: '<S250>/Divide'
   *  Product: '<S250>/Divide1'
   *  RelationalOperator: '<S251>/Compare'
   *  Switch: '<S250>/Switch1'
   */
  if (rtb_rx_kl > 1.0E-6) {
    rtb_thetay_a /= rtb_rx_kl;
    rtb_rx_kl = rtb_rx_ht / rtb_rx_kl;
  } else {
    rtb_thetay_a = 0.0;
    rtb_rx_kl = 1.0;
  }

  /* End of Switch: '<S250>/Switch' */

  /* RelationalOperator: '<S247>/Compare' incorporates:
   *  Abs: '<S239>/Abs'
   *  Constant: '<S247>/Constant'
   *  Trigonometry: '<S250>/Atan1'
   */
  rtb_FixPtRelationalOperator_ea = (fabs(rt_atan2d_snf(rtb_thetay_a, rtb_rx_kl))
    > 1.5707963267948966);

  /* Switch: '<S239>/Angle_Switch' incorporates:
   *  Trigonometry: '<S249>/Atan1'
   */
  if (rtb_FixPtRelationalOperator_ea) {
    /* Sum: '<S249>/Subtract1' incorporates:
     *  Product: '<S249>/Product2'
     *  Product: '<S249>/Product3'
     */
    rtb_thetay_a = (rtb_Subtract_e * Code_Gen_Model_ConstB.Sin5_c) +
      (rtb_Product_d * Code_Gen_Model_ConstB.Cos5_b);

    /* Sum: '<S249>/Subtract' incorporates:
     *  Product: '<S249>/Product'
     *  Product: '<S249>/Product1'
     */
    rtb_Subtract_e = (rtb_Subtract_e * Code_Gen_Model_ConstB.Cos5_b) -
      (rtb_Product_d * Code_Gen_Model_ConstB.Sin5_c);

    /* Math: '<S249>/Hypot' */
    rtb_rx_ht = rt_hypotd_snf(rtb_Subtract_e, rtb_thetay_a);

    /* Switch: '<S249>/Switch1' incorporates:
     *  Constant: '<S249>/Constant'
     *  Constant: '<S249>/Constant1'
     *  Constant: '<S252>/Constant'
     *  Product: '<S249>/Divide'
     *  Product: '<S249>/Divide1'
     *  RelationalOperator: '<S252>/Compare'
     *  Switch: '<S249>/Switch'
     */
    if (rtb_rx_ht > 1.0E-6) {
      rtb_Subtract_e /= rtb_rx_ht;
      rtb_thetay_a /= rtb_rx_ht;
    } else {
      rtb_Subtract_e = 1.0;
      rtb_thetay_a = 0.0;
    }

    /* End of Switch: '<S249>/Switch1' */
    rtb_thetay_a = rt_atan2d_snf(rtb_thetay_a, rtb_Subtract_e);
  } else {
    rtb_thetay_a = Code_Gen_Model_B.BR_Desired_Module_Angle;
  }

  /* Sum: '<S241>/Sum' incorporates:
   *  Sum: '<S240>/Add'
   */
  rtb_Product_j4 = rtb_thetay_a - Code_Gen_Model_B.BR_Steer_Module_Angle;

  /* Sum: '<S254>/Add1' incorporates:
   *  Constant: '<S254>/Constant3'
   *  Constant: '<S254>/Constant4'
   *  Math: '<S254>/Math Function'
   *  Sum: '<S241>/Sum'
   *  Sum: '<S254>/Add2'
   */
  rtb_rx_kl = rt_modd_snf(rtb_Product_j4 + 3.1415926535897931,
    6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S256>/Sum1' incorporates:
   *  Constant: '<S241>/Constant2'
   *  Product: '<S256>/Product'
   *  Sum: '<S256>/Sum'
   *  UnitDelay: '<S256>/Unit Delay1'
   */
  rtb_Subtract_e = ((rtb_rx_kl - Code_Gen_Model_DW.UnitDelay1_DSTATE_iw) *
                    Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_iw;

  /* Product: '<S241>/Product' incorporates:
   *  Constant: '<S241>/Constant3'
   */
  rtb_Product_d = rtb_Subtract_e * Steering_Motor_Control_D;

  /* Sum: '<S255>/Diff' incorporates:
   *  UnitDelay: '<S255>/UD'
   *
   * Block description for '<S255>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S255>/UD':
   *
   *  Store in Global RAM
   */
  u0 = rtb_Product_d - Code_Gen_Model_DW.UD_DSTATE_ll;

  /* Saturate: '<S241>/Saturation' */
  if (u0 > Steering_Motor_Control_D_UL) {
    u0 = Steering_Motor_Control_D_UL;
  } else if (u0 < Steering_Motor_Control_D_LL) {
    u0 = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S241>/Add' incorporates:
   *  Gain: '<S241>/Gain1'
   *  Saturate: '<S241>/Saturation'
   */
  rtb_Add_du = (Steering_Motor_Control_P * rtb_rx_kl) + u0;

  /* Sum: '<S241>/Subtract' incorporates:
   *  Constant: '<S241>/Constant'
   */
  rtb_rx_ht = 1.0 - rtb_Add_du;

  /* Sum: '<S241>/Sum2' incorporates:
   *  Gain: '<S241>/Gain2'
   *  UnitDelay: '<S241>/Unit Delay'
   */
  rtb_rx_kl = (Steering_Motor_Control_I * rtb_rx_kl) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_l;

  /* Switch: '<S257>/Switch2' incorporates:
   *  Constant: '<S241>/Constant'
   *  RelationalOperator: '<S257>/LowerRelop1'
   *  Sum: '<S241>/Subtract'
   */
  if (!(rtb_rx_kl > (1.0 - rtb_Add_du))) {
    /* Sum: '<S241>/Subtract1' incorporates:
     *  Constant: '<S241>/Constant1'
     */
    rtb_rx_ht = -1.0 - rtb_Add_du;

    /* Switch: '<S257>/Switch' incorporates:
     *  Constant: '<S241>/Constant1'
     *  RelationalOperator: '<S257>/UpperRelop'
     *  Sum: '<S241>/Subtract1'
     */
    if (!(rtb_rx_kl < (-1.0 - rtb_Add_du))) {
      rtb_rx_ht = rtb_rx_kl;
    }

    /* End of Switch: '<S257>/Switch' */
  }

  /* End of Switch: '<S257>/Switch2' */

  /* Saturate: '<S241>/Saturation1' */
  if (rtb_rx_ht > Steering_Motor_Control_I_UL) {
    rtb_rx_ht = Steering_Motor_Control_I_UL;
  } else if (rtb_rx_ht < Steering_Motor_Control_I_LL) {
    rtb_rx_ht = Steering_Motor_Control_I_LL;
  }

  /* End of Saturate: '<S241>/Saturation1' */

  /* Sum: '<S241>/Add1' */
  u0 = rtb_Add_du + rtb_rx_ht;

  /* Saturate: '<S241>/Saturation2' */
  if (u0 > 1.0) {
    /* Outport: '<Root>/BackRight_Steer_DutyCycle' */
    Code_Gen_Model_Y.BackRight_Steer_DutyCycle = 1.0;
  } else if (u0 < -1.0) {
    /* Outport: '<Root>/BackRight_Steer_DutyCycle' */
    Code_Gen_Model_Y.BackRight_Steer_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/BackRight_Steer_DutyCycle' */
    Code_Gen_Model_Y.BackRight_Steer_DutyCycle = u0;
  }

  /* End of Saturate: '<S241>/Saturation2' */

  /* Product: '<S294>/Product3' */
  Code_Gen_Model_B.BR_Desired_Wheel_Speed =
    Code_Gen_Model_B.BR_Desired_Wheel_Speed_in * rtb_Init;

  /* Switch: '<S239>/Speed_Switch' incorporates:
   *  UnaryMinus: '<S239>/Unary Minus'
   */
  if (rtb_FixPtRelationalOperator_ea) {
    u0 = -Code_Gen_Model_B.BR_Desired_Wheel_Speed;
  } else {
    u0 = Code_Gen_Model_B.BR_Desired_Wheel_Speed;
  }

  /* Product: '<S242>/Product2' incorporates:
   *  Constant: '<S242>/Constant'
   *  Switch: '<S239>/Speed_Switch'
   */
  rtb_rx_kl = u0 * 1150.4247703785388;

  /* Signum: '<S237>/Sign' */
  if (rtIsNaN(rtb_rx_kl)) {
    u0 = (rtNaN);
  } else if (rtb_rx_kl < 0.0) {
    u0 = -1.0;
  } else {
    u0 = (rtb_rx_kl > 0.0);
  }

  /* Signum: '<S237>/Sign1' incorporates:
   *  Inport: '<Root>/BackRight_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.BackRight_Drive_Motor_Speed)) {
    rtb_Add_du = (rtNaN);
  } else if (Code_Gen_Model_U.BackRight_Drive_Motor_Speed < 0.0) {
    rtb_Add_du = -1.0;
  } else {
    rtb_Add_du = (Code_Gen_Model_U.BackRight_Drive_Motor_Speed > 0.0);
  }

  /* Product: '<S172>/Product' incorporates:
   *  Abs: '<S237>/Abs'
   *  Abs: '<S240>/Abs'
   *  Constant: '<S243>/Constant'
   *  Constant: '<S253>/Constant3'
   *  Constant: '<S253>/Constant4'
   *  Inport: '<Root>/BackRight_Drive_Motor_Speed'
   *  Logic: '<S237>/OR'
   *  Lookup_n-D: '<S240>/1-D Lookup Table'
   *  Math: '<S253>/Math Function'
   *  RelationalOperator: '<S237>/Equal1'
   *  RelationalOperator: '<S243>/Compare'
   *  Signum: '<S237>/Sign'
   *  Signum: '<S237>/Sign1'
   *  Sum: '<S253>/Add1'
   *  Sum: '<S253>/Add2'
   */
  rtb_rx_kl = (((real_T)((u0 == rtb_Add_du) || (fabs
    (Code_Gen_Model_U.BackRight_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_rx_kl) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_Product_j4 + 1.5707963267948966, 3.1415926535897931) -
          1.5707963267948966), Code_Gen_Model_ConstP.pooled23,
     Code_Gen_Model_ConstP.pooled22, 1U);

  /* Gain: '<S238>/Gain' */
  rtb_Init = Drive_Motor_Control_FF * rtb_rx_kl;

  /* Sum: '<S238>/Sum' incorporates:
   *  Inport: '<Root>/BackRight_Drive_Motor_Speed'
   */
  rtb_rx_kl -= Code_Gen_Model_U.BackRight_Drive_Motor_Speed;

  /* Sum: '<S245>/Sum1' incorporates:
   *  Constant: '<S238>/Constant2'
   *  Product: '<S245>/Product'
   *  Sum: '<S245>/Sum'
   *  UnitDelay: '<S245>/Unit Delay1'
   */
  rtb_Add_du = ((rtb_rx_kl - Code_Gen_Model_DW.UnitDelay1_DSTATE_k) *
                Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_k;

  /* Product: '<S238>/Product' incorporates:
   *  Constant: '<S238>/Constant3'
   */
  rtb_Product_j4 = rtb_Add_du * Drive_Motor_Control_D;

  /* Sum: '<S244>/Diff' incorporates:
   *  UnitDelay: '<S244>/UD'
   *
   * Block description for '<S244>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S244>/UD':
   *
   *  Store in Global RAM
   */
  u0 = rtb_Product_j4 - Code_Gen_Model_DW.UD_DSTATE_c;

  /* Saturate: '<S238>/Saturation' */
  if (u0 > Drive_Motor_Control_D_UL) {
    u0 = Drive_Motor_Control_D_UL;
  } else if (u0 < Drive_Motor_Control_D_LL) {
    u0 = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S238>/Add' incorporates:
   *  Gain: '<S238>/Gain1'
   *  Saturate: '<S238>/Saturation'
   */
  rtb_Init = ((Drive_Motor_Control_P * rtb_rx_kl) + rtb_Init) + u0;

  /* Sum: '<S238>/Subtract' incorporates:
   *  Constant: '<S238>/Constant'
   */
  rtb_thetay_a = 1.0 - rtb_Init;

  /* Sum: '<S238>/Sum2' incorporates:
   *  Gain: '<S238>/Gain2'
   *  UnitDelay: '<S238>/Unit Delay'
   */
  rtb_rx_kl = (Drive_Motor_Control_I * rtb_rx_kl) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_a;

  /* Switch: '<S246>/Switch2' incorporates:
   *  Constant: '<S238>/Constant'
   *  RelationalOperator: '<S246>/LowerRelop1'
   *  Sum: '<S238>/Subtract'
   */
  if (!(rtb_rx_kl > (1.0 - rtb_Init))) {
    /* Sum: '<S238>/Subtract1' incorporates:
     *  Constant: '<S238>/Constant1'
     */
    rtb_thetay_a = -1.0 - rtb_Init;

    /* Switch: '<S246>/Switch' incorporates:
     *  Constant: '<S238>/Constant1'
     *  RelationalOperator: '<S246>/UpperRelop'
     *  Sum: '<S238>/Subtract1'
     */
    if (!(rtb_rx_kl < (-1.0 - rtb_Init))) {
      rtb_thetay_a = rtb_rx_kl;
    }

    /* End of Switch: '<S246>/Switch' */
  }

  /* End of Switch: '<S246>/Switch2' */

  /* Saturate: '<S238>/Saturation1' */
  if (rtb_thetay_a > Drive_Motor_Control_I_UL) {
    rtb_rx_kl = Drive_Motor_Control_I_UL;
  } else if (rtb_thetay_a < Drive_Motor_Control_I_LL) {
    rtb_rx_kl = Drive_Motor_Control_I_LL;
  } else {
    rtb_rx_kl = rtb_thetay_a;
  }

  /* End of Saturate: '<S238>/Saturation1' */

  /* Sum: '<S238>/Add1' */
  u0 = rtb_Init + rtb_rx_kl;

  /* Saturate: '<S238>/Saturation2' */
  if (u0 > 1.0) {
    /* Outport: '<Root>/BackRight_Drive_DutyCycle' */
    Code_Gen_Model_Y.BackRight_Drive_DutyCycle = 1.0;
  } else if (u0 < -1.0) {
    /* Outport: '<Root>/BackRight_Drive_DutyCycle' */
    Code_Gen_Model_Y.BackRight_Drive_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/BackRight_Drive_DutyCycle' */
    Code_Gen_Model_Y.BackRight_Drive_DutyCycle = u0;
  }

  /* End of Saturate: '<S238>/Saturation2' */

  /* Outport: '<Root>/Enable_Wheels' */
  Code_Gen_Model_Y.Enable_Wheels = rtb_rx;

  /* Outport: '<Root>/Reset_Wheel_Offsets' */
  Code_Gen_Model_Y.Reset_Wheel_Offsets = rtb_thetay;

  /* Outport: '<Root>/Disable_Wheels' */
  Code_Gen_Model_Y.Disable_Wheels = rtb_rx_i;

  /* Outport: '<Root>/Swerve_Motors_Disabled' */
  Code_Gen_Model_Y.Swerve_Motors_Disabled = rtb_Swerve_Motors_Disabled;

  /* Sum: '<S20>/Sum' incorporates:
   *  Gain: '<S7>/Gain'
   *  Inport: '<Root>/Elevator_Motor_Rev'
   */
  rtb_thetay = rtb_Switch2_a - (Elevator_MotorRev_to_Inch *
    Code_Gen_Model_U.Elevator_Motor_Rev);

  /* Gain: '<S20>/Gain1' */
  rtb_rx_i = Elevator_Gain_Prop * rtb_thetay;

  /* RelationalOperator: '<S3>/Compare' incorporates:
   *  Constant: '<S3>/Constant'
   *  Inport: '<Root>/Elevator_Limit_Switch_Bottom'
   */
  rtb_Is_Absolute_Translation_g = (Code_Gen_Model_U.Elevator_Limit_Switch_Bottom
    != 0.0);

  /* Logic: '<S6>/OR' incorporates:
   *  Constant: '<S4>/Constant'
   *  Inport: '<Root>/Elevator_Limit_Switch_Top'
   *  RelationalOperator: '<S4>/Compare'
   */
  rtb_FixPtRelationalOperator = !(Code_Gen_Model_U.Elevator_Limit_Switch_Top !=
    0.0);

  /* Logic: '<S6>/NOT' incorporates:
   *  Logic: '<S6>/OR'
   */
  rtb_Is_Absolute_Steering = (rtb_FixPtRelationalOperator &&
    (!rtb_Is_Absolute_Translation_g));

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
      rtb_rx = Elevator_Int_IC;
    } else {
      /* Sum: '<S20>/Sum2' incorporates:
       *  Gain: '<S20>/Gain2'
       *  UnitDelay: '<S20>/Unit Delay'
       */
      rtb_thetay = (Elevator_Gain_Int * rtb_thetay) +
        Code_Gen_Model_DW.UnitDelay_DSTATE_oo;

      /* Sum: '<S20>/Subtract' incorporates:
       *  Constant: '<S20>/Constant'
       */
      rtb_rx = Elevator_Total_UL - rtb_rx_i;

      /* Switch: '<S23>/Switch2' incorporates:
       *  RelationalOperator: '<S23>/LowerRelop1'
       */
      if (!(rtb_thetay > rtb_rx)) {
        /* Sum: '<S20>/Subtract1' incorporates:
         *  Constant: '<S20>/Constant1'
         */
        rtb_rx = Elevator_Total_LL - rtb_rx_i;

        /* Switch: '<S23>/Switch' incorporates:
         *  RelationalOperator: '<S23>/UpperRelop'
         */
        if (!(rtb_thetay < rtb_rx)) {
          rtb_rx = rtb_thetay;
        }

        /* End of Switch: '<S23>/Switch' */
      }

      /* End of Switch: '<S23>/Switch2' */

      /* Saturate: '<S20>/Saturation1' */
      if (rtb_rx > Elevator_Int_UL) {
        rtb_rx = Elevator_Int_UL;
      } else if (rtb_rx < Elevator_Int_LL) {
        rtb_rx = Elevator_Int_LL;
      }

      /* End of Saturate: '<S20>/Saturation1' */
    }

    /* End of Switch: '<S20>/Switch1' */
  } else {
    rtb_rx = 0.0;
  }

  /* End of Switch: '<S20>/Switch' */

  /* Switch: '<S6>/Switch2' */
  if (rtb_Compare_m3) {
    /* Sum: '<S20>/Add1' */
    rtb_rx_i += rtb_rx;

    /* Saturate: '<S20>/Saturation2' */
    if (rtb_rx_i > Elevator_Total_UL) {
      rtb_rx_i = Elevator_Total_UL;
    } else if (rtb_rx_i < Elevator_Total_LL) {
      rtb_rx_i = Elevator_Total_LL;
    }

    /* End of Saturate: '<S20>/Saturation2' */

    /* Switch: '<S21>/Switch2' incorporates:
     *  RelationalOperator: '<S21>/LowerRelop1'
     *  Switch: '<S6>/Switch'
     */
    if (rtb_rx_i > ((real_T)rtb_FixPtRelationalOperator)) {
      /* Outport: '<Root>/Elevator_DutyCycle' */
      Code_Gen_Model_Y.Elevator_DutyCycle = rtb_FixPtRelationalOperator;
    } else {
      if (rtb_Is_Absolute_Translation_g) {
        /* Switch: '<S6>/Switch' incorporates:
         *  Constant: '<S6>/Constant3'
         */
        rtb_thetay = 0.0;
      } else {
        /* Switch: '<S6>/Switch' incorporates:
         *  Constant: '<S6>/Constant4'
         */
        rtb_thetay = -1.0;
      }

      /* Switch: '<S21>/Switch' incorporates:
       *  RelationalOperator: '<S21>/UpperRelop'
       */
      if (rtb_rx_i < rtb_thetay) {
        /* Outport: '<Root>/Elevator_DutyCycle' */
        Code_Gen_Model_Y.Elevator_DutyCycle = rtb_thetay;
      } else {
        /* Outport: '<Root>/Elevator_DutyCycle' */
        Code_Gen_Model_Y.Elevator_DutyCycle = rtb_rx_i;
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
  rtb_rx_i = sin(Code_Gen_Model_B.Gyro_Angle_Field_rad);

  /* SignalConversion generated from: '<S13>/Rotation matrix from local to global' incorporates:
   *  Trigonometry: '<S13>/Trigonometric Function'
   */
  rtb_Add2_k_idx_0 = cos(Code_Gen_Model_B.Gyro_Angle_Field_rad);
  rtb_Add2_k_idx_1 = rtb_rx_i;

  /* SignalConversion generated from: '<S13>/Rotation matrix from local to global' incorporates:
   *  UnaryMinus: '<S13>/Unary Minus'
   */
  rtb_Rotationmatrixfromlocalto_0 = -rtb_rx_i;

  /* Sum: '<S92>/Diff' incorporates:
   *  UnitDelay: '<S92>/UD'
   *
   * Block description for '<S92>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S92>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Switch2_a = Code_Gen_Model_B.Gyro_Angle_Field_rad -
    Code_Gen_Model_DW.UD_DSTATE_d;

  /* Sum: '<S13>/Subtract2' incorporates:
   *  Constant: '<S13>/Constant3'
   *  Gain: '<S13>/Gain7'
   *  Math: '<S13>/Square'
   */
  rtb_rx_i = 1.0 - ((rtb_Switch2_a * rtb_Switch2_a) * 0.16666666666666666);

  /* Gain: '<S13>/Gain6' */
  rtb_Switch2_a *= 0.5;

  /* SignalConversion generated from: '<S13>/POSE exponential matrix for improved accuracy while rotating' */
  rtb_POSEexponentialmatrixfori_0 = rtb_Switch2_a;

  /* SignalConversion generated from: '<S13>/POSE exponential matrix for improved accuracy while rotating' incorporates:
   *  UnaryMinus: '<S13>/Unary Minus2'
   */
  rtb_POSEexponentialmatrixfori_1 = -rtb_Switch2_a;

  /* Product: '<S13>/Product' incorporates:
   *  Constant: '<S13>/Constant1'
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Rev'
   *  Sum: '<S93>/Diff'
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
  rtb_Switch2_a = (Code_Gen_Model_U.FrontLeft_Drive_Motor_Rev -
                   Code_Gen_Model_DW.UD_DSTATE_j) * 0.049599071116336282;

  /* Product: '<S13>/Product1' incorporates:
   *  Constant: '<S13>/Constant1'
   *  Inport: '<Root>/FrontRight_Drive_Motor_Rev'
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
  rtb_thetay = (Code_Gen_Model_U.FrontRight_Drive_Motor_Rev -
                Code_Gen_Model_DW.UD_DSTATE_m) * 0.049599071116336282;

  /* Product: '<S13>/Product2' incorporates:
   *  Constant: '<S13>/Constant1'
   *  Inport: '<Root>/BackLeft_Drive_Motor_Rev'
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
  rtb_thetay_a = (Code_Gen_Model_U.BackLeft_Drive_Motor_Rev -
                  Code_Gen_Model_DW.UD_DSTATE_ic) * 0.049599071116336282;

  /* Product: '<S13>/Product3' incorporates:
   *  Constant: '<S13>/Constant1'
   *  Inport: '<Root>/BackRight_Drive_Motor_Rev'
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
  rtb_Init = (Code_Gen_Model_U.BackRight_Drive_Motor_Rev -
              Code_Gen_Model_DW.UD_DSTATE_ce) * 0.049599071116336282;

  /* SignalConversion generated from: '<S13>/Product7' incorporates:
   *  Fcn: '<S100>/r->x'
   *  Fcn: '<S100>/theta->y'
   *  Fcn: '<S97>/r->x'
   *  Fcn: '<S97>/theta->y'
   *  Fcn: '<S98>/r->x'
   *  Fcn: '<S98>/theta->y'
   *  Fcn: '<S99>/r->x'
   *  Fcn: '<S99>/theta->y'
   */
  rtb_Switch2_k[0] = rtb_Switch2_a * cos(Code_Gen_Model_B.FL_Steer_Module_Angle);
  rtb_Switch2_k[1] = rtb_Switch2_a * sin(Code_Gen_Model_B.FL_Steer_Module_Angle);
  rtb_Switch2_k[2] = rtb_thetay * cos(Code_Gen_Model_B.FR_Steer_Module_Angle);
  rtb_Switch2_k[3] = rtb_thetay * sin(Code_Gen_Model_B.FR_Steer_Module_Angle);
  rtb_Switch2_k[4] = rtb_thetay_a * cos(Code_Gen_Model_B.BL_Steer_Module_Angle);
  rtb_Switch2_k[5] = rtb_thetay_a * sin(Code_Gen_Model_B.BL_Steer_Module_Angle);
  rtb_Switch2_k[6] = rtb_Init * cos(Code_Gen_Model_B.BR_Steer_Module_Angle);
  rtb_Switch2_k[7] = rtb_Init * sin(Code_Gen_Model_B.BR_Steer_Module_Angle);

  /* Product: '<S13>/Product7' incorporates:
   *  Constant: '<S13>/Constant4'
   */
  for (rtb_Num_Segments = 0; rtb_Num_Segments < 2; rtb_Num_Segments++) {
    u0 = 0.0;
    tmp = 0;
    for (i = 0; i < 8; i++) {
      u0 += Code_Gen_Model_ConstP.Constant4_Value[tmp + rtb_Num_Segments] *
        rtb_Switch2_k[i];
      tmp += 2;
    }

    rtb_Akxhatkk1[rtb_Num_Segments] = u0;
  }

  /* End of Product: '<S13>/Product7' */

  /* Product: '<S13>/Product6' incorporates:
   *  Concatenate: '<S13>/POSE exponential matrix for improved accuracy while rotating'
   *  SignalConversion generated from: '<S13>/POSE exponential matrix for improved accuracy while rotating'
   */
  rtb_thetay = (rtb_rx_i * rtb_Akxhatkk1[0]) + (rtb_POSEexponentialmatrixfori_1 *
    rtb_Akxhatkk1[1]);
  rtb_rx_i = (rtb_POSEexponentialmatrixfori_0 * rtb_Akxhatkk1[0]) + (rtb_rx_i *
    rtb_Akxhatkk1[1]);

  /* Product: '<S13>/Product6' incorporates:
   *  Concatenate: '<S13>/Rotation matrix from local to global'
   */
  Code_Gen_Model_B.Product6[0] = (rtb_Add2_k_idx_0 * rtb_thetay) +
    (rtb_Rotationmatrixfromlocalto_0 * rtb_rx_i);
  Code_Gen_Model_B.Product6[1] = (rtb_Add2_k_idx_1 * rtb_thetay) +
    (rtb_Add2_k_idx_0 * rtb_rx_i);

  /* Outputs for Enabled SubSystem: '<S58>/MeasurementUpdate' incorporates:
   *  EnablePort: '<S89>/Enable'
   */
  if (rtb_AND) {
    Code_Gen_Model_DW.MeasurementUpdate_MODE = true;

    /* Product: '<S89>/D[k]*u[k]' incorporates:
     *  Constant: '<S38>/D'
     */
    rtb_rx_i = (0.0 * Code_Gen_Model_B.Product6[0]) + (0.0 *
      Code_Gen_Model_B.Product6[1]);

    /* Sum: '<S89>/Sum' incorporates:
     *  Constant: '<S38>/C'
     *  Delay: '<S38>/MemoryX'
     *  Product: '<S89>/C[k]*xhat[k|k-1]'
     *  Product: '<S89>/D[k]*u[k]'
     *  Sum: '<S89>/Add1'
     */
    rtb_Reshapey_idx_0 -= ((0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[1]) +
      Code_Gen_Model_DW.MemoryX_DSTATE[0]) + rtb_rx_i;
    rtb_Reshapey_idx_1 -= ((0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[0]) +
      Code_Gen_Model_DW.MemoryX_DSTATE[1]) + rtb_rx_i;

    /* Product: '<S89>/Product3' incorporates:
     *  Constant: '<S39>/KalmanGainL'
     */
    Code_Gen_Model_B.Product3[0] = (0.0951249219725039 * rtb_Reshapey_idx_0) + (
      -2.0601714451538746E-17 * rtb_Reshapey_idx_1);
    Code_Gen_Model_B.Product3[1] = (1.304610855474728E-16 * rtb_Reshapey_idx_0)
      + (0.095124921972504 * rtb_Reshapey_idx_1);
  } else if (Code_Gen_Model_DW.MeasurementUpdate_MODE) {
    /* Disable for Product: '<S89>/Product3' incorporates:
     *  Outport: '<S89>/L*(y[k]-yhat[k|k-1])'
     */
    Code_Gen_Model_B.Product3[0] = 0.0;
    Code_Gen_Model_B.Product3[1] = 0.0;
    Code_Gen_Model_DW.MeasurementUpdate_MODE = false;
  }

  /* End of Outputs for SubSystem: '<S58>/MeasurementUpdate' */

  /* RelationalOperator: '<S102>/Compare' incorporates:
   *  Constant: '<S101>/Constant'
   *  Constant: '<S102>/Constant'
   */
  rtb_Compare_m3 = (Odometry_X_Y_TEAR != 0.0);

  /* Gain: '<S101>/meters to feet' */
  Code_Gen_Model_B.Odometry_X_global_est_ft = 3.28084 *
    Code_Gen_Model_B.Odom_Position_X;

  /* Switch: '<S101>/Switch' incorporates:
   *  UnitDelay: '<S101>/Unit Delay'
   */
  if (rtb_Compare_m3) {
    rtb_rx_i = Code_Gen_Model_B.Odometry_X_global_est_ft;
  } else {
    rtb_rx_i = Code_Gen_Model_DW.UnitDelay_DSTATE_c;
  }

  /* End of Switch: '<S101>/Switch' */

  /* Sum: '<S101>/Subtract' */
  Code_Gen_Model_B.Odometry_X_global_TEAR_ft =
    Code_Gen_Model_B.Odometry_X_global_est_ft - rtb_rx_i;

  /* Gain: '<S101>/meters to feet1' */
  Code_Gen_Model_B.Odometry_Y_global_est_ft = 3.28084 *
    Code_Gen_Model_B.Odom_Position_Y;

  /* Switch: '<S101>/Switch1' incorporates:
   *  UnitDelay: '<S101>/Unit Delay1'
   */
  if (rtb_Compare_m3) {
    rtb_thetay = Code_Gen_Model_B.Odometry_Y_global_est_ft;
  } else {
    rtb_thetay = Code_Gen_Model_DW.UnitDelay1_DSTATE_d;
  }

  /* End of Switch: '<S101>/Switch1' */

  /* Sum: '<S101>/Subtract1' */
  Code_Gen_Model_B.Odometry_Y_global_TEAR_ft =
    Code_Gen_Model_B.Odometry_Y_global_est_ft - rtb_thetay;

  /* DataTypeConversion: '<S14>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/GameState'
   */
  u0 = floor(Code_Gen_Model_U.GameState);
  if ((rtIsNaN(u0)) || (rtIsInf(u0))) {
    u0 = 0.0;
  } else {
    u0 = fmod(u0, 256.0);
  }

  rtb_GameState = (uint8_T)((u0 < 0.0) ? ((int32_T)((uint8_T)(-((int8_T)
    ((uint8_T)(-u0)))))) : ((int32_T)((uint8_T)u0)));

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

  /* Update for UnitDelay: '<S35>/Delay Input1' incorporates:
   *  Inport: '<Root>/Joystick_Left_B11'
   *
   * Block description for '<S35>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE = Code_Gen_Model_U.Joystick_Left_B11;

  /* Update for UnitDelay: '<S36>/Delay Input1' incorporates:
   *  Inport: '<Root>/Joystick_Left_B12'
   *
   * Block description for '<S36>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_e = Code_Gen_Model_U.Joystick_Left_B12;

  /* Update for UnitDelay: '<S37>/Delay Input1' incorporates:
   *  Inport: '<Root>/Joystick_Left_B13'
   *
   * Block description for '<S37>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_n = Code_Gen_Model_U.Joystick_Left_B13;
  for (rtb_Num_Segments = 0; rtb_Num_Segments < 5; rtb_Num_Segments++) {
    /* Update for S-Function (sfix_udelay): '<S11>/Tapped Delay' incorporates:
     *  Bias: '<S132>/Bias'
     *  Merge: '<S106>/Merge1'
     *  S-Function (sfix_udelay): '<S11>/Tapped Delay1'
     */
    Code_Gen_Model_DW.TappedDelay_X[rtb_Num_Segments] =
      Code_Gen_Model_DW.TappedDelay_X[rtb_Num_Segments + 1];

    /* Update for S-Function (sfix_udelay): '<S11>/Tapped Delay1' incorporates:
     *  Bias: '<S132>/Bias'
     *  Merge: '<S106>/Merge1'
     *  S-Function (sfix_udelay): '<S11>/Tapped Delay'
     */
    Code_Gen_Model_DW.TappedDelay1_X[rtb_Num_Segments] =
      Code_Gen_Model_DW.TappedDelay1_X[rtb_Num_Segments + 1];
  }

  /* Update for S-Function (sfix_udelay): '<S11>/Tapped Delay' */
  Code_Gen_Model_DW.TappedDelay_X[5] = Code_Gen_Model_B.Product6[0];

  /* Update for S-Function (sfix_udelay): '<S11>/Tapped Delay1' */
  Code_Gen_Model_DW.TappedDelay1_X[5] = Code_Gen_Model_B.Product6[1];

  /* Update for Delay: '<S38>/MemoryX' */
  Code_Gen_Model_DW.icLoad = false;

  /* Product: '<S58>/A[k]*xhat[k|k-1]' incorporates:
   *  Constant: '<S38>/A'
   *  Delay: '<S38>/MemoryX'
   */
  rtb_Reshapey_idx_0 = (0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[1]) +
    Code_Gen_Model_DW.MemoryX_DSTATE[0];
  rtb_Reshapey_idx_1 = (0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[0]) +
    Code_Gen_Model_DW.MemoryX_DSTATE[1];

  /* Update for Delay: '<S38>/MemoryX' incorporates:
   *  Constant: '<S38>/B'
   *  Product: '<S58>/A[k]*xhat[k|k-1]'
   *  Product: '<S58>/B[k]*u[k]'
   *  Sum: '<S58>/Add'
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

  /* Update for UnitDelay: '<S25>/Delay Input1' incorporates:
   *  Constant: '<S8>/Constant3'
   *
   * Block description for '<S25>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_p = Gyro_Calibration_Reset_Flag;

  /* Update for UnitDelay: '<S8>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE = rtb_Switch1;

  /* Update for UnitDelay: '<S269>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S269>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE = 0U;

  /* Update for UnitDelay: '<S291>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_i = rtb_Merge1;

  /* Update for UnitDelay: '<S290>/UD'
   *
   * Block description for '<S290>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE = rtb_Switch1_p2;

  /* Update for UnitDelay: '<S288>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_m = rtb_Switch2;

  /* Update for UnitDelay: '<S271>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_d = rtb_Switch4;

  /* Update for UnitDelay: '<S286>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S286>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_p = 0U;

  /* Update for UnitDelay: '<S286>/FixPt Unit Delay1' */
  Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_e = rtb_Switch4;

  /* Update for UnitDelay: '<S270>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_g = rtb_Sum_jt;

  /* Update for UnitDelay: '<S279>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S279>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_c = 0U;

  /* Update for UnitDelay: '<S279>/FixPt Unit Delay1' */
  Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_p = rtb_Sum_jt;

  /* Update for UnitDelay: '<S193>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_b = rtb_Switch_ms;

  /* Update for UnitDelay: '<S192>/UD'
   *
   * Block description for '<S192>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_b = rtb_Product2_e;

  /* Update for UnitDelay: '<S178>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_e = rtb_rx_l;

  /* Update for UnitDelay: '<S182>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_a = rtb_Sin4;

  /* Update for UnitDelay: '<S181>/UD'
   *
   * Block description for '<S181>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_o = rtb_Subtract1;

  /* Update for UnitDelay: '<S175>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_f = rtb_FeedForward;

  /* Update for UnitDelay: '<S214>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_n = rtb_Add_oh;

  /* Update for UnitDelay: '<S213>/UD'
   *
   * Block description for '<S213>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_i = rtb_Subtract1_of;

  /* Update for UnitDelay: '<S199>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_dt = rtb_Hypot_bl;

  /* Update for UnitDelay: '<S203>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_b1 = rtb_Add_i;

  /* Update for UnitDelay: '<S202>/UD'
   *
   * Block description for '<S202>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_e = rtb_Subtract1_a;

  /* Update for UnitDelay: '<S196>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_em = rtb_FeedForward_n;

  /* Update for UnitDelay: '<S235>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_nw = rtb_Add_o2;

  /* Update for UnitDelay: '<S234>/UD'
   *
   * Block description for '<S234>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_k = rtb_Subtract1_do;

  /* Update for UnitDelay: '<S220>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_k = rtb_Hypot_d;

  /* Update for UnitDelay: '<S224>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_f = rtb_Add_gj;

  /* Update for UnitDelay: '<S223>/UD'
   *
   * Block description for '<S223>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_l = rtb_Subtract1_f;

  /* Update for UnitDelay: '<S217>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_gp = rtb_FeedForward_a;

  /* Update for UnitDelay: '<S256>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_iw = rtb_Subtract_e;

  /* Update for UnitDelay: '<S255>/UD'
   *
   * Block description for '<S255>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_ll = rtb_Product_d;

  /* Update for UnitDelay: '<S241>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_l = rtb_rx_ht;

  /* Update for UnitDelay: '<S245>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_k = rtb_Add_du;

  /* Update for UnitDelay: '<S244>/UD'
   *
   * Block description for '<S244>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_c = rtb_Product_j4;

  /* Update for UnitDelay: '<S238>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_a = rtb_rx_kl;

  /* Update for UnitDelay: '<S22>/Delay Input1'
   *
   * Block description for '<S22>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_np = rtb_Is_Absolute_Steering;

  /* Update for UnitDelay: '<S20>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_oo = rtb_rx;

  /* Update for UnitDelay: '<S92>/UD'
   *
   * Block description for '<S92>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_d = Code_Gen_Model_B.Gyro_Angle_Field_rad;

  /* Update for UnitDelay: '<S93>/UD' incorporates:
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Rev'
   *
   * Block description for '<S93>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_j = Code_Gen_Model_U.FrontLeft_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S94>/UD' incorporates:
   *  Inport: '<Root>/FrontRight_Drive_Motor_Rev'
   *
   * Block description for '<S94>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_m = Code_Gen_Model_U.FrontRight_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S95>/UD' incorporates:
   *  Inport: '<Root>/BackLeft_Drive_Motor_Rev'
   *
   * Block description for '<S95>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_ic = Code_Gen_Model_U.BackLeft_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S96>/UD' incorporates:
   *  Inport: '<Root>/BackRight_Drive_Motor_Rev'
   *
   * Block description for '<S96>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_ce = Code_Gen_Model_U.BackRight_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S101>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_c = rtb_rx_i;

  /* Update for UnitDelay: '<S101>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_d = rtb_thetay;
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

    /* InitializeConditions for Delay: '<S38>/MemoryX' */
    Code_Gen_Model_DW.icLoad = true;

    /* InitializeConditions for DiscreteIntegrator: '<S13>/Accumulator2' */
    Code_Gen_Model_DW.Accumulator2_DSTATE = Constant;
    Code_Gen_Model_DW.Accumulator2_PrevResetState = 2;

    /* InitializeConditions for DiscreteIntegrator: '<S13>/Accumulator' */
    Code_Gen_Model_DW.Accumulator_DSTATE = Constant1;
    Code_Gen_Model_DW.Accumulator_PrevResetState = 2;

    /* InitializeConditions for UnitDelay: '<S8>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE = Gyro_Calibration_Reset_Degree;

    /* InitializeConditions for UnitDelay: '<S269>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE = 1U;

    /* InitializeConditions for UnitDelay: '<S286>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_p = 1U;

    /* InitializeConditions for UnitDelay: '<S279>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_c = 1U;

    /* SystemInitialize for IfAction SubSystem: '<S1>/Teleop' */
    /* InitializeConditions for UnitDelay: '<S339>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_a = 1U;

    /* InitializeConditions for UnitDelay: '<S350>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_h = 1U;

    /* End of SystemInitialize for SubSystem: '<S1>/Teleop' */

    /* SystemInitialize for IfAction SubSystem: '<S15>/Spline Path Following Enabled' */
    /* Start for If: '<S110>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem_h = -1;

    /* InitializeConditions for UnitDelay: '<S106>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_gh = 2.0;

    /* SystemInitialize for IfAction SubSystem: '<S110>/Robot_Index_Is_Valid' */
    /* Start for If: '<S113>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem_o = -1;

    /* SystemInitialize for IfAction SubSystem: '<S113>/Circle_Check_Valid' */
    /* Start for If: '<S115>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;

    /* End of SystemInitialize for SubSystem: '<S113>/Circle_Check_Valid' */
    /* End of SystemInitialize for SubSystem: '<S110>/Robot_Index_Is_Valid' */
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
