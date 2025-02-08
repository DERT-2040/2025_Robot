/*
 * Sponsored License - for use in support of a program or activity
 * sponsored by MathWorks.  Not for government, commercial or other
 * non-sponsored organizational use.
 *
 * File: Code_Gen_Model.c
 *
 * Code generated for Simulink model 'Code_Gen_Model'.
 *
 * Model version                  : 2.241
 * Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
 * C/C++ source code generated on : Sat Feb  8 17:05:55 2025
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

/* Named constants for Chart: '<S16>/Chart' */
#define Code_Gen_Mod_IN_NO_ACTIVE_CHILD ((uint8_T)0U)
#define Code_Gen_Model_IN_Disabled     ((uint8_T)1U)
#define Code_Gen_Model_IN_Not_Disabled ((uint8_T)2U)

/* Named constants for Chart: '<S334>/Coral_Chart' */
#define Code_Ge_IN_Coral_Pickup_Prepare ((uint8_T)3U)
#define Code_Ge_IN_Coral_Score_Position ((uint8_T)5U)
#define Code_Gen_Model_IN_Coral_Eject  ((uint8_T)1U)
#define Code_Gen_Model_IN_Eject        ((uint8_T)1U)
#define Code_Gen_Model_IN_Stop         ((uint8_T)2U)
#define Code_Gen__IN_Coral_Pickup_Lower ((uint8_T)2U)
#define Code_Gen__IN_Coral_Pickup_Raise ((uint8_T)4U)
#define Code_Gen__IN_Eleator_Height_Top ((uint8_T)6U)
#define Code__IN_Elevator_Height_Bottom ((uint8_T)7U)

/* Exported block parameters */
real_T AT_Target_Tag_11_Field_Angle = 2.0944;/* Variable: AT_Target_Tag_11_Field_Angle
                                              * Referenced by: '<S332>/Constant12'
                                              */
real_T AT_Target_Tag_11_X = 12.5143;   /* Variable: AT_Target_Tag_11_X
                                        * Referenced by: '<S332>/Constant4'
                                        */
real_T AT_Target_Tag_11_Y = 2.6574;    /* Variable: AT_Target_Tag_11_Y
                                        * Referenced by: '<S332>/Constant26'
                                        */
real_T AT_Target_Tag_12_Field_Angle = -2.0944;/* Variable: AT_Target_Tag_12_Field_Angle
                                               * Referenced by: '<S332>/Constant11'
                                               */
real_T AT_Target_Tag_12_X = 12.5143;   /* Variable: AT_Target_Tag_12_X
                                        * Referenced by: '<S332>/Constant17'
                                        */
real_T AT_Target_Tag_12_Y = 5.5542;    /* Variable: AT_Target_Tag_12_Y
                                        * Referenced by: '<S332>/Constant3'
                                        */
real_T AT_Target_Tag_13_Field_Angle = 0.0;/* Variable: AT_Target_Tag_13_Field_Angle
                                           * Referenced by: '<S332>/Constant10'
                                           */
real_T AT_Target_Tag_13_X = 10.001;    /* Variable: AT_Target_Tag_13_X
                                        * Referenced by: '<S332>/Constant18'
                                        */
real_T AT_Target_Tag_13_Y = 4.1051;    /* Variable: AT_Target_Tag_13_Y
                                        * Referenced by: '<S332>/Constant21'
                                        */
real_T AT_Target_Tag_14_Field_Angle = 0.0;/* Variable: AT_Target_Tag_14_Field_Angle
                                           * Referenced by: '<S332>/Constant8'
                                           */
real_T AT_Target_Tag_14_X = 6.54;      /* Variable: AT_Target_Tag_14_X
                                        * Referenced by: '<S332>/Constant19'
                                        */
real_T AT_Target_Tag_14_Y = 4.1051;    /* Variable: AT_Target_Tag_14_Y
                                        * Referenced by: '<S332>/Constant23'
                                        */
real_T AT_Target_Tag_15_Field_Angle = 2.0944;/* Variable: AT_Target_Tag_15_Field_Angle
                                              * Referenced by: '<S332>/Constant7'
                                              */
real_T AT_Target_Tag_15_X = 4.0317;    /* Variable: AT_Target_Tag_15_X
                                        * Referenced by: '<S332>/Constant20'
                                        */
real_T AT_Target_Tag_15_Y = 5.5542;    /* Variable: AT_Target_Tag_15_Y
                                        * Referenced by: '<S332>/Constant24'
                                        */
real_T AT_Target_Tag_16_Field_Angle = 4.1888;/* Variable: AT_Target_Tag_16_Field_Angle
                                              * Referenced by: '<S332>/Constant6'
                                              */
real_T AT_Target_Tag_16_X = 4.0317;    /* Variable: AT_Target_Tag_16_X
                                        * Referenced by: '<S332>/Constant22'
                                        */
real_T AT_Target_Tag_16_Y = 2.6574;    /* Variable: AT_Target_Tag_16_Y
                                        * Referenced by: '<S332>/Constant25'
                                        */
real_T AT_Target_Tag_5_Field_Angle = 1.5708;/* Variable: AT_Target_Tag_5_Field_Angle
                                             * Referenced by: '<S332>/Constant14'
                                             */
real_T AT_Target_Tag_5_X = 14.7008;    /* Variable: AT_Target_Tag_5_X
                                        * Referenced by: '<S332>/Constant9'
                                        */
real_T AT_Target_Tag_5_Y = 7.2898;     /* Variable: AT_Target_Tag_5_Y
                                        * Referenced by: '<S332>/Constant28'
                                        */
real_T AT_Target_Tag_6_Field_Angle = 4.7124;/* Variable: AT_Target_Tag_6_Field_Angle
                                             * Referenced by: '<S332>/Constant13'
                                             */
real_T AT_Target_Tag_6_X = 1.8415;     /* Variable: AT_Target_Tag_6_X
                                        * Referenced by: '<S332>/Constant5'
                                        */
real_T AT_Target_Tag_6_Y = 7.2898;     /* Variable: AT_Target_Tag_6_Y
                                        * Referenced by: '<S332>/Constant27'
                                        */
real_T AT_XY_Control_Gain = 1.5;       /* Variable: AT_XY_Control_Gain
                                        * Referenced by: '<S336>/Gain2'
                                        */
real_T Boost_Trigger_Decreasing_Limit = -0.28;
                                     /* Variable: Boost_Trigger_Decreasing_Limit
                                      * Referenced by: '<S349>/Constant1'
                                      */
real_T Boost_Trigger_High_Speed = 5.0; /* Variable: Boost_Trigger_High_Speed
                                        * Referenced by:
                                        *   '<S345>/Constant'
                                        *   '<S345>/Saturation'
                                        */
real_T Boost_Trigger_Increasing_Limit = 3.5;
                                     /* Variable: Boost_Trigger_Increasing_Limit
                                      * Referenced by: '<S349>/Constant3'
                                      */
real_T Boost_Trigger_Low_Speed = 1.5;  /* Variable: Boost_Trigger_Low_Speed
                                        * Referenced by: '<S345>/Constant1'
                                        */
real_T Coral_Arm_Angle_Error_Threshold = 1.0;
                                    /* Variable: Coral_Arm_Angle_Error_Threshold
                                     * Referenced by: '<S334>/Coral_Chart'
                                     */
real_T Coral_Arm_Angle_L1 = -65.0;     /* Variable: Coral_Arm_Angle_L1
                                        * Referenced by: '<S334>/Coral_Chart'
                                        */
real_T Coral_Arm_Angle_L2 = 42.0;      /* Variable: Coral_Arm_Angle_L2
                                        * Referenced by: '<S334>/Coral_Chart'
                                        */
real_T Coral_Arm_Angle_L3 = 42.0;      /* Variable: Coral_Arm_Angle_L3
                                        * Referenced by: '<S334>/Coral_Chart'
                                        */
real_T Coral_Arm_Angle_L4 = 45.0;      /* Variable: Coral_Arm_Angle_L4
                                        * Referenced by: '<S334>/Coral_Chart'
                                        */
real_T Coral_Arm_Gain_Int = 0.01;      /* Variable: Coral_Arm_Gain_Int
                                        * Referenced by: '<S22>/Gain2'
                                        */
real_T Coral_Arm_Gain_Prop = 0.1;      /* Variable: Coral_Arm_Gain_Prop
                                        * Referenced by: '<S22>/Gain1'
                                        */
real_T Coral_Arm_Int_IC = 0.0;         /* Variable: Coral_Arm_Int_IC
                                        * Referenced by: '<S22>/Constant3'
                                        */
real_T Coral_Arm_Int_LL = -0.1;        /* Variable: Coral_Arm_Int_LL
                                        * Referenced by: '<S22>/Saturation1'
                                        */
real_T Coral_Arm_Int_UL = 0.1;         /* Variable: Coral_Arm_Int_UL
                                        * Referenced by: '<S22>/Saturation1'
                                        */
real_T Coral_Arm_Manual_Gain = 0.0;    /* Variable: Coral_Arm_Manual_Gain
                                        * Referenced by: '<S334>/Coral_Chart'
                                        */
real_T Coral_Arm_Total_LL = -1.0;      /* Variable: Coral_Arm_Total_LL
                                        * Referenced by:
                                        *   '<S22>/Constant1'
                                        *   '<S22>/Saturation2'
                                        */
real_T Coral_Arm_Total_UL = 1.0;       /* Variable: Coral_Arm_Total_UL
                                        * Referenced by:
                                        *   '<S22>/Constant'
                                        *   '<S22>/Saturation2'
                                        */
real_T Coral_Detect_Distance = 100.0;  /* Variable: Coral_Detect_Distance
                                        * Referenced by: '<S334>/Coral_Chart'
                                        */
real_T Coral_Eject_Time = 1.0;         /* Variable: Coral_Eject_Time
                                        * Referenced by: '<S334>/Coral_Chart'
                                        */
real_T Coral_Motor_DC_Eject = -0.1;    /* Variable: Coral_Motor_DC_Eject
                                        * Referenced by: '<S334>/Coral_Chart'
                                        */
real_T Coral_Motor_DC_Hold = 0.01;     /* Variable: Coral_Motor_DC_Hold
                                        * Referenced by: '<S334>/Coral_Chart'
                                        */
real_T Coral_Motor_DC_Pickup = 0.1;    /* Variable: Coral_Motor_DC_Pickup
                                        * Referenced by: '<S334>/Coral_Chart'
                                        */
real_T Distance_FL_y = 0.18732;        /* Variable: Distance_FL_y
                                        * Referenced by: '<S272>/Constant4'
                                        */
real_T Drive_Motor_Control_D = 0.0001; /* Variable: Drive_Motor_Control_D
                                        * Referenced by:
                                        *   '<S188>/Constant3'
                                        *   '<S209>/Constant3'
                                        *   '<S230>/Constant3'
                                        *   '<S251>/Constant3'
                                        */
real_T Drive_Motor_Control_D_FilterCoeff = 0.22223;
                                  /* Variable: Drive_Motor_Control_D_FilterCoeff
                                   * Referenced by:
                                   *   '<S188>/Constant2'
                                   *   '<S209>/Constant2'
                                   *   '<S230>/Constant2'
                                   *   '<S251>/Constant2'
                                   */
real_T Drive_Motor_Control_D_LL = -0.2;/* Variable: Drive_Motor_Control_D_LL
                                        * Referenced by:
                                        *   '<S188>/Saturation'
                                        *   '<S209>/Saturation'
                                        *   '<S230>/Saturation'
                                        *   '<S251>/Saturation'
                                        */
real_T Drive_Motor_Control_D_UL = 0.2; /* Variable: Drive_Motor_Control_D_UL
                                        * Referenced by:
                                        *   '<S188>/Saturation'
                                        *   '<S209>/Saturation'
                                        *   '<S230>/Saturation'
                                        *   '<S251>/Saturation'
                                        */
real_T Drive_Motor_Control_FF = 0.00016129;/* Variable: Drive_Motor_Control_FF
                                            * Referenced by:
                                            *   '<S188>/Gain'
                                            *   '<S209>/Gain'
                                            *   '<S230>/Gain'
                                            *   '<S251>/Gain'
                                            */
real_T Drive_Motor_Control_I = 0.0;    /* Variable: Drive_Motor_Control_I
                                        * Referenced by:
                                        *   '<S188>/Gain2'
                                        *   '<S209>/Gain2'
                                        *   '<S230>/Gain2'
                                        *   '<S251>/Gain2'
                                        */
real_T Drive_Motor_Control_I_LL = 0.0; /* Variable: Drive_Motor_Control_I_LL
                                        * Referenced by:
                                        *   '<S188>/Saturation1'
                                        *   '<S209>/Saturation1'
                                        *   '<S230>/Saturation1'
                                        *   '<S251>/Saturation1'
                                        */
real_T Drive_Motor_Control_I_UL = 0.0; /* Variable: Drive_Motor_Control_I_UL
                                        * Referenced by:
                                        *   '<S188>/Saturation1'
                                        *   '<S209>/Saturation1'
                                        *   '<S230>/Saturation1'
                                        *   '<S251>/Saturation1'
                                        */
real_T Drive_Motor_Control_P = 5.0E-6; /* Variable: Drive_Motor_Control_P
                                        * Referenced by:
                                        *   '<S188>/Gain1'
                                        *   '<S209>/Gain1'
                                        *   '<S230>/Gain1'
                                        *   '<S251>/Gain1'
                                        */
real_T Drive_Motor_Control_Sign_Change_Deadband = 7000.0;
                           /* Variable: Drive_Motor_Control_Sign_Change_Deadband
                            * Referenced by:
                            *   '<S193>/Constant'
                            *   '<S214>/Constant'
                            *   '<S235>/Constant'
                            *   '<S256>/Constant'
                            */
real_T Elevator_Error_Bottom_Disable = 3.0;
                                      /* Variable: Elevator_Error_Bottom_Disable
                                       * Referenced by: '<S25>/Constant'
                                       */
real_T Elevator_Gain_Int = 0.02;       /* Variable: Elevator_Gain_Int
                                        * Referenced by: '<S27>/Gain2'
                                        */
real_T Elevator_Gain_Prop = 0.3;       /* Variable: Elevator_Gain_Prop
                                        * Referenced by: '<S27>/Gain1'
                                        */
real_T Elevator_Height_Bottom = 0.0;   /* Variable: Elevator_Height_Bottom
                                        * Referenced by: '<S334>/Coral_Chart'
                                        */
real_T Elevator_Height_Error_Threshold = 1.0;
                                    /* Variable: Elevator_Height_Error_Threshold
                                     * Referenced by: '<S334>/Coral_Chart'
                                     */
real_T Elevator_Height_L1 = 13.0;      /* Variable: Elevator_Height_L1
                                        * Referenced by: '<S334>/Coral_Chart'
                                        */
real_T Elevator_Height_L2 = 5.25;      /* Variable: Elevator_Height_L2
                                        * Referenced by: '<S334>/Coral_Chart'
                                        */
real_T Elevator_Height_L3 = 13.125;    /* Variable: Elevator_Height_L3
                                        * Referenced by: '<S334>/Coral_Chart'
                                        */
real_T Elevator_Height_L4 = 26.125;    /* Variable: Elevator_Height_L4
                                        * Referenced by: '<S334>/Coral_Chart'
                                        */
real_T Elevator_Height_Lower = 5.0;    /* Variable: Elevator_Height_Lower
                                        * Referenced by: '<S334>/Coral_Chart'
                                        */
real_T Elevator_Height_Manual_Gain = 0.0;/* Variable: Elevator_Height_Manual_Gain
                                          * Referenced by: '<S334>/Coral_Chart'
                                          */
real_T Elevator_Height_Prepare = 7.0;  /* Variable: Elevator_Height_Prepare
                                        * Referenced by: '<S334>/Coral_Chart'
                                        */
real_T Elevator_Height_Raise = 7.0;    /* Variable: Elevator_Height_Raise
                                        * Referenced by: '<S334>/Coral_Chart'
                                        */
real_T Elevator_Height_Top = 28.0;     /* Variable: Elevator_Height_Top
                                        * Referenced by: '<S334>/Coral_Chart'
                                        */
real_T Elevator_Hold_at_Top_DC = 0.01; /* Variable: Elevator_Hold_at_Top_DC
                                        * Referenced by: '<S8>/Constant1'
                                        */
real_T Elevator_Int_IC = 0.0;          /* Variable: Elevator_Int_IC
                                        * Referenced by: '<S27>/Constant3'
                                        */
real_T Elevator_Int_LL = -0.1;         /* Variable: Elevator_Int_LL
                                        * Referenced by: '<S27>/Saturation1'
                                        */
real_T Elevator_Int_UL = 0.1;          /* Variable: Elevator_Int_UL
                                        * Referenced by: '<S27>/Saturation1'
                                        */
real_T Elevator_MotorRev_to_Inch = 0.27646;/* Variable: Elevator_MotorRev_to_Inch
                                            * Referenced by: '<S9>/Gain1'
                                            */
real_T Elevator_Total_LL = -0.4;       /* Variable: Elevator_Total_LL
                                        * Referenced by:
                                        *   '<S27>/Constant1'
                                        *   '<S27>/Saturation2'
                                        */
real_T Elevator_Total_UL = 1.0;        /* Variable: Elevator_Total_UL
                                        * Referenced by:
                                        *   '<S27>/Constant'
                                        *   '<S27>/Saturation2'
                                        */
real_T Gyro_Calibration_Reset_Degree = 0.0;
                                      /* Variable: Gyro_Calibration_Reset_Degree
                                       * Referenced by:
                                       *   '<S10>/Constant2'
                                       *   '<S10>/Unit Delay1'
                                       */
real_T Gyro_Calibration_Reset_Flag = 0.0;/* Variable: Gyro_Calibration_Reset_Flag
                                          * Referenced by: '<S10>/Constant3'
                                          */
real_T KF_Enable = 1.0;                /* Variable: KF_Enable
                                        * Referenced by:
                                        *   '<S13>/Constant1'
                                        *   '<S13>/Constant2'
                                        */
real_T KF_Vision_Ambiguity_Thresh = 0.1;/* Variable: KF_Vision_Ambiguity_Thresh
                                         * Referenced by: '<S13>/Constant'
                                         */
real_T Odometry_IC_X = 0.0;            /* Variable: Odometry_IC_X
                                        * Referenced by: '<S1>/Constant'
                                        */
real_T Odometry_IC_Y = 0.0;            /* Variable: Odometry_IC_Y
                                        * Referenced by: '<S1>/Constant1'
                                        */
real_T Odometry_Reset_IC = 0.0;        /* Variable: Odometry_Reset_IC
                                        * Referenced by: '<S15>/Constant'
                                        */
real_T Odometry_X_Y_TEAR = 0.0;        /* Variable: Odometry_X_Y_TEAR
                                        * Referenced by: '<S114>/Constant'
                                        */
real_T Spline_Last_Pose_Distance_to_Velocity_Gain = 2.0;
                         /* Variable: Spline_Last_Pose_Distance_to_Velocity_Gain
                          * Referenced by: '<S173>/Constant2'
                          */
real_T Spline_Max_Centripital_Acceleration = 10.0;
                                /* Variable: Spline_Max_Centripital_Acceleration
                                 * Referenced by: '<S173>/Constant1'
                                 */
real_T Spline_Pose_Num_Before_End_Reduce_Speed = 1.0;
                            /* Variable: Spline_Pose_Num_Before_End_Reduce_Speed
                             * Referenced by: '<S120>/Constant'
                             */
real_T Spline_Stop_Radius = 0.1;       /* Variable: Spline_Stop_Radius
                                        * Referenced by: '<S133>/Constant'
                                        */
real_T Spline_Velocity_Multiplier_TEST = 1.0;
                                    /* Variable: Spline_Velocity_Multiplier_TEST
                                     * Referenced by: '<S173>/Constant3'
                                     */
real_T Steering_Absolute_Cmd_Approach_Zero_Error_Thresh = 0.2;
                   /* Variable: Steering_Absolute_Cmd_Approach_Zero_Error_Thresh
                    * Referenced by: '<S284>/Constant5'
                    */
real_T Steering_Absolute_Cmd_Approach_Zero_Final_Thresh = 0.01;
                   /* Variable: Steering_Absolute_Cmd_Approach_Zero_Final_Thresh
                    * Referenced by: '<S284>/Constant6'
                    */
real_T Steering_Absolute_Cmd_NonZero_Error_Thresh = 0.2;
                         /* Variable: Steering_Absolute_Cmd_NonZero_Error_Thresh
                          * Referenced by: '<S284>/Constant9'
                          */
real_T Steering_Absolute_Cmd_NonZero_Final_Scale_Factor = 0.1;
                   /* Variable: Steering_Absolute_Cmd_NonZero_Final_Scale_Factor
                    * Referenced by: '<S284>/Constant10'
                    */
real_T Steering_Absolute_Cmd_Rate_Limit_Dec = -1.0;
                               /* Variable: Steering_Absolute_Cmd_Rate_Limit_Dec
                                * Referenced by: '<S284>/Constant1'
                                */
real_T Steering_Absolute_Cmd_Rate_Limit_Inc = 1.0;
                               /* Variable: Steering_Absolute_Cmd_Rate_Limit_Inc
                                * Referenced by: '<S284>/Constant3'
                                */
real_T Steering_Heading_Control_D = 0.0;/* Variable: Steering_Heading_Control_D
                                         * Referenced by: '<S301>/Constant3'
                                         */
real_T Steering_Heading_Control_D_FilterCoeff = 0.22223;
                             /* Variable: Steering_Heading_Control_D_FilterCoeff
                              * Referenced by: '<S301>/Constant2'
                              */
real_T Steering_Heading_Control_D_LL = 0.0;
                                      /* Variable: Steering_Heading_Control_D_LL
                                       * Referenced by: '<S301>/Saturation'
                                       */
real_T Steering_Heading_Control_D_UL = 0.0;
                                      /* Variable: Steering_Heading_Control_D_UL
                                       * Referenced by: '<S301>/Saturation'
                                       */
real_T Steering_Heading_Control_Deadzone = 0.1;
                                  /* Variable: Steering_Heading_Control_Deadzone
                                   * Referenced by: '<S300>/Constant'
                                   */
real_T Steering_Heading_Control_I = 0.0;/* Variable: Steering_Heading_Control_I
                                         * Referenced by: '<S301>/Gain2'
                                         */
real_T Steering_Heading_Control_I_LL = -0.1;
                                      /* Variable: Steering_Heading_Control_I_LL
                                       * Referenced by: '<S301>/Saturation1'
                                       */
real_T Steering_Heading_Control_I_UL = 0.1;
                                      /* Variable: Steering_Heading_Control_I_UL
                                       * Referenced by: '<S301>/Saturation1'
                                       */
real_T Steering_Heading_Control_P = 2.5;/* Variable: Steering_Heading_Control_P
                                         * Referenced by: '<S301>/Gain1'
                                         */
real_T Steering_Heading_Control_Total_LL = -2.5;
                                  /* Variable: Steering_Heading_Control_Total_LL
                                   * Referenced by:
                                   *   '<S301>/Constant1'
                                   *   '<S301>/Saturation2'
                                   */
real_T Steering_Heading_Control_Total_UL = 2.5;
                                  /* Variable: Steering_Heading_Control_Total_UL
                                   * Referenced by:
                                   *   '<S301>/Constant'
                                   *   '<S301>/Saturation2'
                                   */
real_T Steering_Motor_Control_D = 0.5; /* Variable: Steering_Motor_Control_D
                                        * Referenced by:
                                        *   '<S191>/Constant3'
                                        *   '<S212>/Constant3'
                                        *   '<S233>/Constant3'
                                        *   '<S254>/Constant3'
                                        */
real_T Steering_Motor_Control_D_FilterCoeff = 0.22223;
                               /* Variable: Steering_Motor_Control_D_FilterCoeff
                                * Referenced by:
                                *   '<S191>/Constant2'
                                *   '<S212>/Constant2'
                                *   '<S233>/Constant2'
                                *   '<S254>/Constant2'
                                */
real_T Steering_Motor_Control_D_LL = -0.2;/* Variable: Steering_Motor_Control_D_LL
                                           * Referenced by:
                                           *   '<S191>/Saturation'
                                           *   '<S212>/Saturation'
                                           *   '<S233>/Saturation'
                                           *   '<S254>/Saturation'
                                           */
real_T Steering_Motor_Control_D_UL = 0.2;/* Variable: Steering_Motor_Control_D_UL
                                          * Referenced by:
                                          *   '<S191>/Saturation'
                                          *   '<S212>/Saturation'
                                          *   '<S233>/Saturation'
                                          *   '<S254>/Saturation'
                                          */
real_T Steering_Motor_Control_I = 0.005;/* Variable: Steering_Motor_Control_I
                                         * Referenced by:
                                         *   '<S191>/Gain2'
                                         *   '<S212>/Gain2'
                                         *   '<S233>/Gain2'
                                         *   '<S254>/Gain2'
                                         */
real_T Steering_Motor_Control_I_LL = -0.005;/* Variable: Steering_Motor_Control_I_LL
                                             * Referenced by:
                                             *   '<S191>/Saturation1'
                                             *   '<S212>/Saturation1'
                                             *   '<S233>/Saturation1'
                                             *   '<S254>/Saturation1'
                                             */
real_T Steering_Motor_Control_I_UL = 0.005;/* Variable: Steering_Motor_Control_I_UL
                                            * Referenced by:
                                            *   '<S191>/Saturation1'
                                            *   '<S212>/Saturation1'
                                            *   '<S233>/Saturation1'
                                            *   '<S254>/Saturation1'
                                            */
real_T Steering_Motor_Control_P = 0.15;/* Variable: Steering_Motor_Control_P
                                        * Referenced by:
                                        *   '<S191>/Gain1'
                                        *   '<S212>/Gain1'
                                        *   '<S233>/Gain1'
                                        *   '<S254>/Gain1'
                                        */
real_T Steering_Relative_Cmd_Approach_Zero_Error_Thresh = 0.2;
                   /* Variable: Steering_Relative_Cmd_Approach_Zero_Error_Thresh
                    * Referenced by: '<S283>/Constant5'
                    */
real_T Steering_Relative_Cmd_Approach_Zero_Final_Thresh = 0.01;
                   /* Variable: Steering_Relative_Cmd_Approach_Zero_Final_Thresh
                    * Referenced by: '<S283>/Constant6'
                    */
real_T Steering_Relative_Cmd_NonZero_Error_Thresh = 0.2;
                         /* Variable: Steering_Relative_Cmd_NonZero_Error_Thresh
                          * Referenced by: '<S283>/Constant9'
                          */
real_T Steering_Relative_Cmd_NonZero_Final_Scale_Factor = 1.0;
                   /* Variable: Steering_Relative_Cmd_NonZero_Final_Scale_Factor
                    * Referenced by: '<S283>/Constant10'
                    */
real_T Steering_Relative_Cmd_Rate_Limit_Dec = -10.0;
                               /* Variable: Steering_Relative_Cmd_Rate_Limit_Dec
                                * Referenced by: '<S283>/Constant1'
                                */
real_T Steering_Relative_Cmd_Rate_Limit_Inc = 10.0;
                               /* Variable: Steering_Relative_Cmd_Rate_Limit_Inc
                                * Referenced by: '<S283>/Constant3'
                                */
real_T Steering_Relative_Gain = 5.0;   /* Variable: Steering_Relative_Gain
                                        * Referenced by: '<S335>/Constant'
                                        */
real_T Steering_Twist_Gain = -0.5;     /* Variable: Steering_Twist_Gain
                                        * Referenced by: '<S335>/Constant1'
                                        */
real_T TEST_Swerve_Mode_Override_Flag = 0.0;
                                     /* Variable: TEST_Swerve_Mode_Override_Flag
                                      * Referenced by: '<S20>/Constant5'
                                      */
real_T TEST_Swerve_Mode_Steering = 0.0;/* Variable: TEST_Swerve_Mode_Steering
                                        * Referenced by: '<S20>/Constant8'
                                        */
real_T TEST_Swerve_Mode_Translation = 0.0;/* Variable: TEST_Swerve_Mode_Translation
                                           * Referenced by: '<S20>/Constant7'
                                           */
real_T Translation_Speed_Approach_Zero_Error_Thresh = 0.2;
                       /* Variable: Translation_Speed_Approach_Zero_Error_Thresh
                        * Referenced by: '<S271>/Constant5'
                        */
real_T Translation_Speed_Approach_Zero_Final_Thresh = 0.01;
                       /* Variable: Translation_Speed_Approach_Zero_Final_Thresh
                        * Referenced by: '<S271>/Constant6'
                        */
real_T Translation_Speed_NonZero_Error_Thresh = 0.15;
                             /* Variable: Translation_Speed_NonZero_Error_Thresh
                              * Referenced by: '<S271>/Constant9'
                              */
real_T Translation_Speed_NonZero_Final_Scale_Factor = 0.05;
                       /* Variable: Translation_Speed_NonZero_Final_Scale_Factor
                        * Referenced by: '<S271>/Constant10'
                        */
real_T Translation_Speed_Rate_Limit_Dec = -4.0;
                                   /* Variable: Translation_Speed_Rate_Limit_Dec
                                    * Referenced by: '<S271>/Constant1'
                                    */
real_T Translation_Speed_Rate_Limit_Inc = 4.0;
                                   /* Variable: Translation_Speed_Rate_Limit_Inc
                                    * Referenced by: '<S271>/Constant3'
                                    */
real_T Translation_Twist_Gain = 0.5;   /* Variable: Translation_Twist_Gain
                                        * Referenced by: '<S336>/Gain'
                                        */
real_T Twist_Deadzone_neg = -0.01;     /* Variable: Twist_Deadzone_neg
                                        * Referenced by:
                                        *   '<S335>/Dead Zone'
                                        *   '<S336>/Dead Zone'
                                        */
real_T Twist_Deadzone_pos = 0.01;      /* Variable: Twist_Deadzone_pos
                                        * Referenced by:
                                        *   '<S335>/Dead Zone'
                                        *   '<S336>/Dead Zone'
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

/* Forward declaration for local functions */
static void enter_internal_Coral_Score_Posi(const boolean_T
  *FixPtRelationalOperator, const boolean_T *FixPtRelationalOperator_n, const
  boolean_T *FixPtRelationalOperator_k, const boolean_T
  *FixPtRelationalOperator_d);

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

/* Function for Chart: '<S334>/Coral_Chart' */
static void enter_internal_Coral_Score_Posi(const boolean_T
  *FixPtRelationalOperator, const boolean_T *FixPtRelationalOperator_n, const
  boolean_T *FixPtRelationalOperator_k, const boolean_T
  *FixPtRelationalOperator_d)
{
  if (*FixPtRelationalOperator) {
    Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_L1;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = Coral_Arm_Angle_L1;
  } else if (*FixPtRelationalOperator_k) {
    Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_L2;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = Coral_Arm_Angle_L2;
  } else if (*FixPtRelationalOperator_n) {
    Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_L3;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = Coral_Arm_Angle_L3;
  } else if (*FixPtRelationalOperator_d) {
    Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_L4;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = Coral_Arm_Angle_L4;
  } else {
    /* Inport: '<Root>/Gamepad_Stick_Right_Y' */
    Code_Gen_Model_B.Elevator_Height_Desired_m +=
      Code_Gen_Model_U.Gamepad_Stick_Right_Y * Elevator_Height_Manual_Gain;

    /* Inport: '<Root>/Gamepad_Stick_Left_Y' */
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_o +=
      Code_Gen_Model_U.Gamepad_Stick_Left_Y * Coral_Arm_Manual_Gain;
  }
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
  real_T rtb_Merge1;
  real_T rtb_POSEexponentialmatrixfori_0;
  real_T rtb_POSEexponentialmatrixfori_1;
  real_T rtb_Product2_e;
  real_T rtb_Product_d;
  real_T rtb_Product_j4;
  real_T rtb_Reshapey_idx_0;
  real_T rtb_Reshapey_idx_1;
  real_T rtb_Sin4;
  real_T rtb_Subtract1;
  real_T rtb_Subtract1_a;
  real_T rtb_Subtract1_do;
  real_T rtb_Subtract1_f;
  real_T rtb_Subtract1_of;
  real_T rtb_Subtract_e;
  real_T rtb_Sum1_p;
  real_T rtb_Sum_jt;
  real_T rtb_Switch1;
  real_T rtb_Switch1_h;
  real_T rtb_Switch1_hk;
  real_T rtb_Switch2;
  real_T rtb_Switch4;
  real_T rtb_rx;
  real_T rtb_rx_ht;
  real_T rtb_rx_i;
  real_T rtb_rx_kl;
  real_T rtb_rx_l;
  real_T rtb_thetay;
  real_T rtb_thetay_i;
  real_T rtb_thetay_l;
  real_T rtb_thetay_n;
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
  boolean_T rtb_AT_Tag_15_Active;
  boolean_T rtb_AT_Tag_5_Active;
  boolean_T rtb_Compare_a;
  boolean_T rtb_Compare_at;
  boolean_T rtb_Compare_m;
  boolean_T rtb_FixPtRelationalOperator;
  boolean_T rtb_FixPtRelationalOperator_ea;
  boolean_T rtb_FixPtRelationalOperator_f;
  boolean_T rtb_Gamepad_POV_Up;
  boolean_T rtb_Is_Absolute_Steering;
  boolean_T rtb_Is_Absolute_Translation_g;
  boolean_T rtb_Relative_Translation_Flag;
  boolean_T rtb_Swerve_Motors_Disabled;

  /* RelationalOperator: '<S48>/FixPt Relational Operator' incorporates:
   *  Inport: '<Root>/Joystick_Left_B11'
   *  UnitDelay: '<S48>/Delay Input1'
   *
   * Block description for '<S48>/Delay Input1':
   *
   *  Store in Global RAM
   */
  rtb_FixPtRelationalOperator = (Code_Gen_Model_U.Joystick_Left_B11 >
    Code_Gen_Model_DW.DelayInput1_DSTATE);

  /* RelationalOperator: '<S50>/FixPt Relational Operator' incorporates:
   *  Inport: '<Root>/Joystick_Left_B13'
   *  UnitDelay: '<S50>/Delay Input1'
   *
   * Block description for '<S50>/Delay Input1':
   *
   *  Store in Global RAM
   */
  rtb_FixPtRelationalOperator_ea = (Code_Gen_Model_U.Joystick_Left_B13 >
    Code_Gen_Model_DW.DelayInput1_DSTATE_n);

  /* SignalConversion: '<S11>/Signal Copy1' incorporates:
   *  Inport: '<Root>/Joystick_Left_X'
   */
  Code_Gen_Model_B.Drive_Joystick_X = Code_Gen_Model_U.Joystick_Left_X;

  /* SignalConversion: '<S11>/Signal Copy2' incorporates:
   *  Inport: '<Root>/Joystick_Left_Y'
   */
  Code_Gen_Model_B.Drive_Joystick_Y = Code_Gen_Model_U.Joystick_Left_Y;

  /* SignalConversion: '<S11>/Signal Copy3' incorporates:
   *  Inport: '<Root>/Joystick_Left_Z'
   */
  Code_Gen_Model_B.Drive_Joystick_Z = Code_Gen_Model_U.Joystick_Left_Z;

  /* RelationalOperator: '<S40>/Compare' incorporates:
   *  Constant: '<S40>/Constant'
   *  Inport: '<Root>/Joystick_Left_POV'
   */
  Code_Gen_Model_B.Drive_Joystick_Z_Mode = (Code_Gen_Model_U.Joystick_Left_POV
    != -1.0);

  /* SignalConversion: '<S11>/Signal Copy5' incorporates:
   *  Inport: '<Root>/Joystick_Right_Y'
   */
  Code_Gen_Model_B.Steer_Joystick_Y = Code_Gen_Model_U.Joystick_Right_Y;

  /* SignalConversion: '<S11>/Signal Copy6' incorporates:
   *  Inport: '<Root>/Joystick_Right_Z'
   */
  Code_Gen_Model_B.Steer_Joystick_Z = Code_Gen_Model_U.Joystick_Right_Z;

  /* RelationalOperator: '<S47>/Compare' incorporates:
   *  Constant: '<S47>/Constant'
   *  Inport: '<Root>/Joystick_Left_B1'
   */
  Code_Gen_Model_B.Is_Boosting = (Code_Gen_Model_U.Joystick_Left_B1 != 0.0);

  /* RelationalOperator: '<S45>/Compare' incorporates:
   *  Constant: '<S45>/Constant'
   *  Inport: '<Root>/Joystick_Left_B3'
   */
  Code_Gen_Model_B.Align_Amp = (Code_Gen_Model_U.Joystick_Left_B3 != 0.0);

  /* RelationalOperator: '<S44>/Compare' incorporates:
   *  Constant: '<S44>/Constant'
   *  Inport: '<Root>/Joystick_Left_B4'
   */
  Code_Gen_Model_B.Align_Speaker = (Code_Gen_Model_U.Joystick_Left_B4 != 0.0);

  /* RelationalOperator: '<S43>/Compare' incorporates:
   *  Constant: '<S43>/Constant'
   *  Inport: '<Root>/Joystick_Right_B2'
   */
  Code_Gen_Model_B.Face_Toward_Driver = (Code_Gen_Model_U.Joystick_Right_B2 !=
    0.0);

  /* RelationalOperator: '<S41>/Compare' incorporates:
   *  Constant: '<S41>/Constant'
   *  Inport: '<Root>/Joystick_Right_B4'
   */
  Code_Gen_Model_B.Face_Right_Driver = (Code_Gen_Model_U.Joystick_Right_B4 !=
    0.0);

  /* RelationalOperator: '<S42>/Compare' incorporates:
   *  Constant: '<S42>/Constant'
   *  Inport: '<Root>/Joystick_Right_B3'
   */
  Code_Gen_Model_B.Face_Left_Driver = (Code_Gen_Model_U.Joystick_Right_B3 != 0.0);

  /* RelationalOperator: '<S39>/Compare' incorporates:
   *  Constant: '<S39>/Constant'
   *  Inport: '<Root>/Joystick_Right_POV'
   */
  Code_Gen_Model_B.Face_Away_Driver = (Code_Gen_Model_U.Joystick_Right_POV !=
    -1.0);

  /* Reshape: '<S51>/Reshapey' incorporates:
   *  Inport: '<Root>/Photon_Est_Pose_X'
   *  Inport: '<Root>/Photon_Est_Pose_Y'
   *  S-Function (sfix_udelay): '<S13>/Tapped Delay'
   *  S-Function (sfix_udelay): '<S13>/Tapped Delay1'
   *  Sum: '<S13>/Add'
   *  Sum: '<S13>/Add1'
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

  /* Delay: '<S51>/MemoryX' incorporates:
   *  Constant: '<S51>/X0'
   */
  if (Code_Gen_Model_DW.icLoad) {
    Code_Gen_Model_DW.MemoryX_DSTATE[0] = 0.0;
    Code_Gen_Model_DW.MemoryX_DSTATE[1] = 0.0;
  }

  /* Logic: '<S13>/AND' incorporates:
   *  Constant: '<S13>/Constant'
   *  Constant: '<S13>/Constant1'
   *  Inport: '<Root>/Photon_Est_Pose_Ambiguity'
   *  RelationalOperator: '<S13>/Relational Operator'
   */
  rtb_AND = ((Code_Gen_Model_U.Photon_Est_Pose_Ambiguity <=
              KF_Vision_Ambiguity_Thresh) && (KF_Enable != 0.0));

  /* Outputs for Enabled SubSystem: '<S78>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S104>/Enable'
   */
  if (rtb_AND) {
    Code_Gen_Model_DW.EnabledSubsystem_MODE = true;

    /* Sum: '<S104>/Add1' incorporates:
     *  Constant: '<S51>/C'
     *  Delay: '<S51>/MemoryX'
     *  Product: '<S104>/Product'
     */
    rtb_Switch1 = rtb_Reshapey_idx_0 - ((0.0 * Code_Gen_Model_DW.MemoryX_DSTATE
      [1]) + Code_Gen_Model_DW.MemoryX_DSTATE[0]);
    rtb_Switch1_hk = rtb_Reshapey_idx_1 - ((0.0 *
      Code_Gen_Model_DW.MemoryX_DSTATE[0]) + Code_Gen_Model_DW.MemoryX_DSTATE[1]);

    /* Product: '<S104>/Product2' incorporates:
     *  Constant: '<S52>/KalmanGainM'
     */
    Code_Gen_Model_B.Product2[0] = (0.09512492197250387 * rtb_Switch1) +
      (5.9896845167210271E-17 * rtb_Switch1_hk);
    Code_Gen_Model_B.Product2[1] = (5.9896845167210271E-17 * rtb_Switch1) +
      (0.095124921972503981 * rtb_Switch1_hk);
  } else if (Code_Gen_Model_DW.EnabledSubsystem_MODE) {
    /* Disable for Product: '<S104>/Product2' incorporates:
     *  Outport: '<S104>/deltax'
     */
    Code_Gen_Model_B.Product2[0] = 0.0;
    Code_Gen_Model_B.Product2[1] = 0.0;
    Code_Gen_Model_DW.EnabledSubsystem_MODE = false;
  }

  /* End of Outputs for SubSystem: '<S78>/Enabled Subsystem' */

  /* Sum: '<S78>/Add' incorporates:
   *  Delay: '<S51>/MemoryX'
   */
  rtb_Akxhatkk1[0] = Code_Gen_Model_B.Product2[0] +
    Code_Gen_Model_DW.MemoryX_DSTATE[0];
  rtb_Akxhatkk1[1] = Code_Gen_Model_B.Product2[1] +
    Code_Gen_Model_DW.MemoryX_DSTATE[1];

  /* DiscreteIntegrator: '<S15>/Accumulator2' incorporates:
   *  Constant: '<S15>/Constant'
   *  Constant: '<S1>/Constant'
   */
  if ((Odometry_Reset_IC > 0.0) &&
      (Code_Gen_Model_DW.Accumulator2_PrevResetState <= 0)) {
    Code_Gen_Model_DW.Accumulator2_DSTATE = Odometry_IC_X;
  }

  /* DiscreteIntegrator: '<S15>/Accumulator2' */
  Code_Gen_Model_B.Odom_Position_X = Code_Gen_Model_DW.Accumulator2_DSTATE;

  /* Switch: '<S13>/Switch' incorporates:
   *  Constant: '<S13>/Constant2'
   */
  if (KF_Enable != 0.0) {
    /* Switch: '<S13>/Switch' */
    Code_Gen_Model_B.KF_Position_X = rtb_Akxhatkk1[0];
  } else {
    /* Switch: '<S13>/Switch' */
    Code_Gen_Model_B.KF_Position_X = Code_Gen_Model_B.Odom_Position_X;
  }

  /* End of Switch: '<S13>/Switch' */

  /* DiscreteIntegrator: '<S15>/Accumulator' incorporates:
   *  Constant: '<S15>/Constant'
   *  Constant: '<S1>/Constant1'
   */
  if ((Odometry_Reset_IC > 0.0) && (Code_Gen_Model_DW.Accumulator_PrevResetState
       <= 0)) {
    Code_Gen_Model_DW.Accumulator_DSTATE = Odometry_IC_Y;
  }

  /* DiscreteIntegrator: '<S15>/Accumulator' */
  Code_Gen_Model_B.Odom_Position_Y = Code_Gen_Model_DW.Accumulator_DSTATE;

  /* Switch: '<S13>/Switch1' incorporates:
   *  Constant: '<S13>/Constant2'
   */
  if (KF_Enable != 0.0) {
    /* Switch: '<S13>/Switch1' */
    Code_Gen_Model_B.KF_Position_Y = rtb_Akxhatkk1[1];
  } else {
    /* Switch: '<S13>/Switch1' */
    Code_Gen_Model_B.KF_Position_Y = Code_Gen_Model_B.Odom_Position_Y;
  }

  /* End of Switch: '<S13>/Switch1' */

  /* Switch: '<S10>/Switch1' incorporates:
   *  Constant: '<S10>/Constant2'
   *  Constant: '<S10>/Constant3'
   *  Inport: '<Root>/Gyro_Angle'
   *  RelationalOperator: '<S33>/FixPt Relational Operator'
   *  Sum: '<S10>/Sum'
   *  UnitDelay: '<S10>/Unit Delay1'
   *  UnitDelay: '<S33>/Delay Input1'
   *
   * Block description for '<S33>/Delay Input1':
   *
   *  Store in Global RAM
   */
  if (Gyro_Calibration_Reset_Flag > Code_Gen_Model_DW.DelayInput1_DSTATE_p) {
    rtb_Switch1 = Gyro_Calibration_Reset_Degree - Code_Gen_Model_U.Gyro_Angle;
  } else {
    rtb_Switch1 = Code_Gen_Model_DW.UnitDelay1_DSTATE;
  }

  /* End of Switch: '<S10>/Switch1' */

  /* Sum: '<S10>/Subtract1' incorporates:
   *  Inport: '<Root>/Gyro_Angle'
   */
  Code_Gen_Model_B.Gyro_Angle_Calibrated_deg = Code_Gen_Model_U.Gyro_Angle +
    rtb_Switch1;

  /* Gain: '<S32>/Gain1' */
  Code_Gen_Model_B.Gyro_Angle_rad = 0.017453292519943295 *
    Code_Gen_Model_B.Gyro_Angle_Calibrated_deg;

  /* RelationalOperator: '<S35>/Compare' incorporates:
   *  Constant: '<S35>/Constant'
   *  Inport: '<Root>/Gamepad_POV'
   */
  rtb_Compare_a = (Code_Gen_Model_U.Gamepad_POV != -1.0);

  /* Logic: '<S11>/Logical Operator' incorporates:
   *  Constant: '<S34>/Constant'
   *  Constant: '<S36>/Constant'
   *  Inport: '<Root>/Gamepad_POV'
   *  Logic: '<S11>/Logical Operator1'
   *  RelationalOperator: '<S34>/Compare'
   *  RelationalOperator: '<S36>/Compare'
   */
  rtb_Gamepad_POV_Up = (rtb_Compare_a && ((Code_Gen_Model_U.Gamepad_POV <= 45.0)
    || (Code_Gen_Model_U.Gamepad_POV >= 315.0)));

  /* Logic: '<S11>/Logical Operator2' incorporates:
   *  Constant: '<S37>/Constant'
   *  Constant: '<S38>/Constant'
   *  Inport: '<Root>/Gamepad_POV'
   *  Logic: '<S11>/Logical Operator3'
   *  RelationalOperator: '<S37>/Compare'
   *  RelationalOperator: '<S38>/Compare'
   */
  rtb_Compare_a = (rtb_Compare_a && ((Code_Gen_Model_U.Gamepad_POV >= 135.0) &&
    (Code_Gen_Model_U.Gamepad_POV <= 225.0)));

  /* RelationalOperator: '<S3>/Compare' incorporates:
   *  Constant: '<S3>/Constant'
   *  Inport: '<Root>/Elevator_Limit_Switch_Bottom'
   */
  rtb_Compare_m = (Code_Gen_Model_U.Elevator_Limit_Switch_Bottom != 0.0);

  /* Gain: '<S9>/Gain1' incorporates:
   *  Inport: '<Root>/Elevator_Motor_Rev'
   */
  Code_Gen_Model_B.Elevator_Height_Measured_Raw = Elevator_MotorRev_to_Inch *
    Code_Gen_Model_U.Elevator_Motor_Rev;

  /* Switch: '<S9>/Switch1' incorporates:
   *  RelationalOperator: '<S31>/FixPt Relational Operator'
   *  UnitDelay: '<S31>/Delay Input1'
   *  UnitDelay: '<S9>/Unit Delay1'
   *
   * Block description for '<S31>/Delay Input1':
   *
   *  Store in Global RAM
   */
  if (((int32_T)rtb_Compare_m) < ((int32_T)
       Code_Gen_Model_DW.DelayInput1_DSTATE_l)) {
    rtb_Switch1_hk = Code_Gen_Model_B.Elevator_Height_Measured_Raw;
  } else {
    rtb_Switch1_hk = Code_Gen_Model_DW.UnitDelay1_DSTATE_j;
  }

  /* End of Switch: '<S9>/Switch1' */

  /* Sum: '<S9>/Subtract' */
  Code_Gen_Model_B.Elevator_Height_Offset =
    Code_Gen_Model_B.Elevator_Height_Measured_Raw - rtb_Switch1_hk;

  /* Switch: '<S9>/Switch' */
  if (rtb_Compare_m) {
    /* Switch: '<S9>/Switch' incorporates:
     *  Constant: '<S9>/Constant'
     */
    Code_Gen_Model_B.Elevator_Height_Measured = 0.0;
  } else {
    /* Switch: '<S9>/Switch' */
    Code_Gen_Model_B.Elevator_Height_Measured =
      Code_Gen_Model_B.Elevator_Height_Offset;
  }

  /* End of Switch: '<S9>/Switch' */

  /* Bias: '<S1>/Add Constant' incorporates:
   *  Inport: '<Root>/Coral_Arm_Angle_Measured_Raw'
   */
  Code_Gen_Model_B.Coral_Arm_Angle_Measured =
    Code_Gen_Model_U.Coral_Arm_Angle_Measured_Raw - 180.0;

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
     *  ActionPort: '<S7>/Action Port'
     */
    /* Merge: '<S14>/Merge1' incorporates:
     *  Constant: '<S7>/Constant1'
     *  SignalConversion generated from: '<S7>/Steering_Abs_Cmd'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd = 0.0;

    /* Merge: '<S14>/Merge2' incorporates:
     *  Constant: '<S7>/Constant2'
     *  SignalConversion generated from: '<S7>/Steering_Rel_Cmd'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd = 0.0;

    /* Merge: '<S14>/Merge3' incorporates:
     *  Constant: '<S7>/Constant3'
     *  SignalConversion generated from: '<S7>/Translation_Angle'
     */
    Code_Gen_Model_B.Translation_Angle = 0.0;

    /* Merge: '<S14>/Merge4' incorporates:
     *  Constant: '<S7>/Constant4'
     *  SignalConversion generated from: '<S7>/Translation_Speed'
     */
    Code_Gen_Model_B.Translation_Speed = 0.0;

    /* SignalConversion generated from: '<S7>/Is_Absolute_Translation' incorporates:
     *  Constant: '<S7>/Constant5'
     */
    rtb_Is_Absolute_Translation_g = true;

    /* SignalConversion generated from: '<S7>/Is_Absolute_Steering' incorporates:
     *  Constant: '<S7>/Constant6'
     */
    rtb_Is_Absolute_Steering = true;

    /* Merge: '<S14>/Merge7' incorporates:
     *  Constant: '<S7>/Constant7'
     *  SignalConversion generated from: '<S7>/Spline_Enable'
     */
    Code_Gen_Model_B.Spline_Enable = false;

    /* Merge: '<S14>/Merge9' incorporates:
     *  Constant: '<S7>/Constant9'
     *  SignalConversion generated from: '<S7>/Spline_Num_Poses'
     */
    Code_Gen_Model_B.Spline_Num_Poses = 10.0;

    /* Merge: '<S14>/Merge10' incorporates:
     *  Constant: '<S7>/Constant10'
     *  SignalConversion generated from: '<S7>/Test_Mode'
     */
    Code_Gen_Model_B.Test_Mode = false;

    /* SignalConversion generated from: '<S7>/Enable_Wheels' incorporates:
     *  Constant: '<S7>/Constant18'
     */
    rtb_rx = 0.0;

    /* SignalConversion generated from: '<S7>/Reset_Wheel_Offsets' incorporates:
     *  Constant: '<S7>/Constant13'
     */
    rtb_thetay = 0.0;

    /* SignalConversion generated from: '<S7>/Disable_Wheels' incorporates:
     *  Constant: '<S7>/Constant14'
     */
    rtb_rx_i = 0.0;

    /* SignalConversion generated from: '<S7>/Swerve_Motors_Disabled' incorporates:
     *  Constant: '<S7>/Constant12'
     */
    rtb_Swerve_Motors_Disabled = false;

    /* Merge: '<S14>/Merge12' incorporates:
     *  Constant: '<S7>/Constant15'
     *  SignalConversion generated from: '<S7>/Reefscape_Motors_Enable'
     */
    Code_Gen_Model_B.Reefscape_Motors_Enable = false;

    /* Merge: '<S14>/Merge11' incorporates:
     *  Constant: '<S7>/Constant11'
     *  SignalConversion generated from: '<S7>/Elevator_Height_Desired'
     */
    Code_Gen_Model_B.Elevator_Height_Desired = 0.0;

    /* Merge: '<S14>/Merge13' incorporates:
     *  Constant: '<S7>/Constant16'
     *  SignalConversion generated from: '<S7>/Coral_Arm_Angle_Desired'
     */
    Code_Gen_Model_B.Coral_Arm_Angle_Desired = -90.0;

    /* SignalConversion generated from: '<S7>/Coral_Wheel_DutyCycle' incorporates:
     *  Constant: '<S7>/Constant17'
     */
    rtb_thetay_n = 0.0;

    /* End of Outputs for SubSystem: '<S1>/Disabled' */
    break;

   case 1:
    /* Outputs for IfAction SubSystem: '<S1>/Autonomous' incorporates:
     *  ActionPort: '<S2>/Action Port'
     */
    /* Merge: '<S14>/Merge1' incorporates:
     *  Constant: '<S2>/Constant10'
     *  SignalConversion generated from: '<S2>/Steering_Abs_Cmd'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd = 0.0;

    /* Merge: '<S14>/Merge2' incorporates:
     *  Constant: '<S2>/Constant2'
     *  SignalConversion generated from: '<S2>/Steering_Rel_Cmd'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd = 0.0;

    /* Merge: '<S14>/Merge3' incorporates:
     *  Constant: '<S2>/Constant7'
     *  SignalConversion generated from: '<S2>/Translation_Angle'
     */
    Code_Gen_Model_B.Translation_Angle = 0.0;

    /* Merge: '<S14>/Merge4' incorporates:
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

    /* Merge: '<S14>/Merge7' incorporates:
     *  Constant: '<S2>/Constant6'
     *  SignalConversion generated from: '<S2>/Spline_Enable'
     */
    Code_Gen_Model_B.Spline_Enable = false;

    /* Merge: '<S14>/Merge9' incorporates:
     *  Constant: '<S2>/Constant16'
     *  SignalConversion generated from: '<S2>/Spline_Num_Poses'
     */
    Code_Gen_Model_B.Spline_Num_Poses = 10.0;

    /* Merge: '<S14>/Merge10' incorporates:
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

    /* Merge: '<S14>/Merge12' incorporates:
     *  Constant: '<S2>/Constant12'
     *  SignalConversion generated from: '<S2>/Reefscape_Motors_Enable'
     */
    Code_Gen_Model_B.Reefscape_Motors_Enable = false;

    /* Merge: '<S14>/Merge11' incorporates:
     *  Constant: '<S2>/Constant11'
     *  SignalConversion generated from: '<S2>/Elevator_Height_Desired'
     */
    Code_Gen_Model_B.Elevator_Height_Desired = 0.0;

    /* Merge: '<S14>/Merge13' incorporates:
     *  Constant: '<S2>/Constant17'
     *  SignalConversion generated from: '<S2>/Coral_Arm_Angle_Desired'
     */
    Code_Gen_Model_B.Coral_Arm_Angle_Desired = -90.0;

    /* SignalConversion generated from: '<S2>/Coral_Wheel_DutyCycle' incorporates:
     *  Constant: '<S2>/Constant18'
     */
    rtb_thetay_n = 0.0;

    /* End of Outputs for SubSystem: '<S1>/Autonomous' */
    break;

   case 2:
    /* Outputs for IfAction SubSystem: '<S1>/Teleop' incorporates:
     *  ActionPort: '<S20>/Action Port'
     */
    /* Logic: '<S332>/Logical Operator3' incorporates:
     *  Inport: '<Root>/IsBlueAlliance'
     */
    rtb_Swerve_Motors_Disabled = ((Code_Gen_Model_B.Align_Amp) &&
      (Code_Gen_Model_U.IsBlueAlliance != 0.0));

    /* Logic: '<S332>/Logical Operator2' incorporates:
     *  Inport: '<Root>/IsBlueAlliance'
     *  Logic: '<S332>/Logical Operator10'
     */
    rtb_AT_Tag_5_Active = ((Code_Gen_Model_B.Align_Amp) &&
      (!(Code_Gen_Model_U.IsBlueAlliance != 0.0)));

    /* Switch: '<S332>/Switch15' incorporates:
     *  Switch: '<S332>/Switch16'
     *  Switch: '<S332>/Switch23'
     *  Switch: '<S332>/Switch24'
     */
    if (rtb_AT_Tag_5_Active) {
      /* Switch: '<S332>/Switch15' incorporates:
       *  Constant: '<S332>/Constant9'
       *  Sum: '<S332>/Add17'
       */
      Code_Gen_Model_B.AT_Error_X = AT_Target_Tag_5_X -
        Code_Gen_Model_B.KF_Position_X;

      /* Switch: '<S332>/Switch23' incorporates:
       *  Constant: '<S332>/Constant28'
       *  Sum: '<S332>/Add23'
       */
      Code_Gen_Model_B.AT_Error_Y = AT_Target_Tag_5_Y -
        Code_Gen_Model_B.KF_Position_Y;
    } else if (rtb_Swerve_Motors_Disabled) {
      /* Switch: '<S332>/Switch15' incorporates:
       *  Constant: '<S332>/Constant5'
       *  Sum: '<S332>/Add16'
       *  Switch: '<S332>/Switch16'
       */
      Code_Gen_Model_B.AT_Error_X = AT_Target_Tag_6_X -
        Code_Gen_Model_B.KF_Position_X;

      /* Switch: '<S332>/Switch23' incorporates:
       *  Constant: '<S332>/Constant27'
       *  Sum: '<S332>/Add22'
       *  Switch: '<S332>/Switch24'
       */
      Code_Gen_Model_B.AT_Error_Y = AT_Target_Tag_6_Y -
        Code_Gen_Model_B.KF_Position_Y;
    } else {
      /* Switch: '<S332>/Switch15' incorporates:
       *  Constant: '<S332>/Constant1'
       *  Switch: '<S332>/Switch1'
       *  Switch: '<S332>/Switch12'
       *  Switch: '<S332>/Switch13'
       *  Switch: '<S332>/Switch14'
       *  Switch: '<S332>/Switch16'
       *  Switch: '<S332>/Switch17'
       *  Switch: '<S332>/Switch18'
       */
      Code_Gen_Model_B.AT_Error_X = 0.0;

      /* Switch: '<S332>/Switch23' incorporates:
       *  Constant: '<S332>/Constant2'
       *  Switch: '<S332>/Switch19'
       *  Switch: '<S332>/Switch20'
       *  Switch: '<S332>/Switch21'
       *  Switch: '<S332>/Switch22'
       *  Switch: '<S332>/Switch24'
       *  Switch: '<S332>/Switch25'
       *  Switch: '<S332>/Switch26'
       */
      Code_Gen_Model_B.AT_Error_Y = 0.0;
    }

    /* End of Switch: '<S332>/Switch15' */

    /* Switch: '<S348>/Switch1' incorporates:
     *  Constant: '<S353>/Constant'
     *  Constant: '<S354>/Constant'
     *  Logic: '<S348>/AND'
     *  RelationalOperator: '<S353>/Compare'
     *  RelationalOperator: '<S354>/Compare'
     *  Switch: '<S348>/Switch2'
     *  UnitDelay: '<S348>/Unit Delay'
     *  UnitDelay: '<S348>/Unit Delay1'
     */
    if ((Code_Gen_Model_B.Drive_Joystick_X == 0.0) &&
        (Code_Gen_Model_B.Drive_Joystick_Y == 0.0)) {
      rtb_Switch1_h = Code_Gen_Model_DW.UnitDelay1_DSTATE_l;
      rtb_Switch2 = Code_Gen_Model_DW.UnitDelay_DSTATE_p;
    } else {
      rtb_Switch1_h = Code_Gen_Model_B.Drive_Joystick_Y;
      rtb_Switch2 = Code_Gen_Model_B.Drive_Joystick_X;
    }

    /* End of Switch: '<S348>/Switch1' */

    /* Lookup_n-D: '<S336>/Modulation_Drv' incorporates:
     *  Math: '<S336>/Magnitude'
     */
    rtb_thetay_n = look1_binlcpw(rt_hypotd_snf(Code_Gen_Model_B.Drive_Joystick_X,
      Code_Gen_Model_B.Drive_Joystick_Y),
      Code_Gen_Model_ConstP.Modulation_Drv_bp01Data,
      Code_Gen_Model_ConstP.Modulation_Drv_tableData, 20U);

    /* RelationalOperator: '<S346>/Compare' incorporates:
     *  Constant: '<S346>/Constant'
     */
    rtb_Compare_at = (rtb_thetay_n == 0.0);

    /* DeadZone: '<S336>/Dead Zone' */
    if (Code_Gen_Model_B.Drive_Joystick_Z > Twist_Deadzone_pos) {
      rtb_rx = Code_Gen_Model_B.Drive_Joystick_Z - Twist_Deadzone_pos;
    } else if (Code_Gen_Model_B.Drive_Joystick_Z >= Twist_Deadzone_neg) {
      rtb_rx = 0.0;
    } else {
      rtb_rx = Code_Gen_Model_B.Drive_Joystick_Z - Twist_Deadzone_neg;
    }

    /* End of DeadZone: '<S336>/Dead Zone' */

    /* Logic: '<S336>/Logical Operator' incorporates:
     *  Constant: '<S347>/Constant'
     *  RelationalOperator: '<S347>/Compare'
     */
    rtb_Relative_Translation_Flag = ((rtb_rx != 0.0) && rtb_Compare_at);

    /* Switch: '<S336>/Switch1' incorporates:
     *  Switch: '<S336>/Switch4'
     */
    if (rtb_Relative_Translation_Flag) {
      /* Switch: '<S336>/Switch5' */
      if (Code_Gen_Model_B.Drive_Joystick_Z_Mode) {
        /* Merge: '<S14>/Merge3' incorporates:
         *  Constant: '<S336>/Constant3'
         */
        Code_Gen_Model_B.Translation_Angle = -1.5707963267948966;
      } else {
        /* Merge: '<S14>/Merge3' incorporates:
         *  Constant: '<S336>/Constant4'
         */
        Code_Gen_Model_B.Translation_Angle = 0.0;
      }

      /* End of Switch: '<S336>/Switch5' */
    } else if (rtb_Compare_at) {
      /* Switch: '<S336>/Switch6' incorporates:
       *  Constant: '<S336>/Constant'
       *  Constant: '<S336>/Constant1'
       *  Inport: '<Root>/IsBlueAlliance'
       *  Switch: '<S336>/Switch4'
       */
      if (Code_Gen_Model_U.IsBlueAlliance != 0.0) {
        u0 = 0.0;
      } else {
        u0 = 3.1415926535897931;
      }

      /* Merge: '<S14>/Merge3' incorporates:
       *  Sum: '<S336>/Add1'
       *  Switch: '<S336>/Switch4'
       *  Switch: '<S336>/Switch6'
       *  Trigonometry: '<S336>/Atan1'
       */
      Code_Gen_Model_B.Translation_Angle = rt_atan2d_snf
        (Code_Gen_Model_B.AT_Error_Y, Code_Gen_Model_B.AT_Error_X) + u0;
    } else {
      /* Merge: '<S14>/Merge3' incorporates:
       *  Switch: '<S336>/Switch4'
       *  Trigonometry: '<S336>/Atan2'
       */
      Code_Gen_Model_B.Translation_Angle = rt_atan2d_snf(rtb_Switch1_h,
        rtb_Switch2);
    }

    /* End of Switch: '<S336>/Switch1' */

    /* Switch: '<S20>/Switch' incorporates:
     *  Constant: '<S20>/Constant5'
     *  Constant: '<S20>/Constant7'
     *  DataTypeConversion: '<S20>/Data Type Conversion'
     *  Switch: '<S336>/Switch3'
     */
    if (TEST_Swerve_Mode_Override_Flag != 0.0) {
      rtb_Is_Absolute_Translation_g = (TEST_Swerve_Mode_Translation != 0.0);
    } else {
      rtb_Is_Absolute_Translation_g = !rtb_Relative_Translation_Flag;
    }

    /* End of Switch: '<S20>/Switch' */

    /* DeadZone: '<S335>/Dead Zone' */
    if (Code_Gen_Model_B.Steer_Joystick_Z > Twist_Deadzone_pos) {
      u0 = Code_Gen_Model_B.Steer_Joystick_Z - Twist_Deadzone_pos;
    } else if (Code_Gen_Model_B.Steer_Joystick_Z >= Twist_Deadzone_neg) {
      u0 = 0.0;
    } else {
      u0 = Code_Gen_Model_B.Steer_Joystick_Z - Twist_Deadzone_neg;
    }

    /* Sum: '<S335>/Add' incorporates:
     *  Constant: '<S335>/Constant'
     *  Constant: '<S335>/Constant1'
     *  DeadZone: '<S335>/Dead Zone'
     *  Lookup_n-D: '<S335>/Modulation_Str_Y_Rel'
     *  Product: '<S335>/Product'
     *  Product: '<S335>/Product1'
     *  SignalConversion: '<S11>/Signal Copy5'
     */
    rtb_rx_i = (look1_binlcpw(Code_Gen_Model_B.Steer_Joystick_Y,
      Code_Gen_Model_ConstP.Modulation_Str_Y_Rel_bp01Data,
      Code_Gen_Model_ConstP.Modulation_Str_Y_Rel_tableData, 20U) *
                Steering_Relative_Gain) + (u0 * Steering_Twist_Gain);

    /* RelationalOperator: '<S337>/Compare' incorporates:
     *  Constant: '<S337>/Constant'
     */
    rtb_FixPtRelationalOperator = (rtb_rx_i == 0.0);

    /* Switch: '<S20>/Switch1' incorporates:
     *  Constant: '<S20>/Constant5'
     *  Constant: '<S20>/Constant8'
     *  DataTypeConversion: '<S20>/Data Type Conversion1'
     */
    if (TEST_Swerve_Mode_Override_Flag != 0.0) {
      rtb_Is_Absolute_Steering = (TEST_Swerve_Mode_Steering != 0.0);
    } else {
      rtb_Is_Absolute_Steering = rtb_FixPtRelationalOperator;
    }

    /* End of Switch: '<S20>/Switch1' */

    /* Logic: '<S332>/Logical Operator11' */
    rtb_FixPtRelationalOperator_ea = ((Code_Gen_Model_B.Align_Amp) ||
      (Code_Gen_Model_B.Align_Speaker));

    /* RelationalOperator: '<S342>/FixPt Relational Operator' incorporates:
     *  UnitDelay: '<S342>/Delay Input1'
     *
     * Block description for '<S342>/Delay Input1':
     *
     *  Store in Global RAM
     */
    rtb_FixPtRelationalOperator_f = (((int32_T)rtb_FixPtRelationalOperator_ea) >
      ((int32_T)Code_Gen_Model_DW.DelayInput1_DSTATE_f));

    /* Logic: '<S335>/AND2' incorporates:
     *  RelationalOperator: '<S338>/FixPt Relational Operator'
     *  RelationalOperator: '<S339>/FixPt Relational Operator'
     *  RelationalOperator: '<S340>/FixPt Relational Operator'
     *  RelationalOperator: '<S341>/FixPt Relational Operator'
     *  UnitDelay: '<S338>/Delay Input1'
     *  UnitDelay: '<S339>/Delay Input1'
     *  UnitDelay: '<S340>/Delay Input1'
     *  UnitDelay: '<S341>/Delay Input1'
     *
     * Block description for '<S338>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S339>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S340>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S341>/Delay Input1':
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

    /* Logic: '<S335>/AND1' incorporates:
     *  Logic: '<S335>/AND3'
     *  Logic: '<S335>/AND7'
     *  UnitDelay: '<S335>/Unit Delay2'
     */
    rtb_AND1 = ((rtb_FixPtRelationalOperator && (!rtb_FixPtRelationalOperator_f))
                && (rtb_AND2 || (Code_Gen_Model_DW.UnitDelay2_DSTATE)));

    /* Logic: '<S335>/AND4' incorporates:
     *  Logic: '<S335>/AND5'
     *  Logic: '<S335>/AND8'
     *  UnitDelay: '<S335>/Unit Delay4'
     */
    rtb_FixPtRelationalOperator_f = ((rtb_FixPtRelationalOperator && (!rtb_AND2))
      && (rtb_FixPtRelationalOperator_f || (Code_Gen_Model_DW.UnitDelay4_DSTATE)));

    /* Logic: '<S335>/AND6' */
    Code_Gen_Model_B.Steering_Abs_Angle_Active = (rtb_AND1 ||
      rtb_FixPtRelationalOperator_f);

    /* Switch: '<S335>/Switch8' incorporates:
     *  Constant: '<S344>/Constant'
     *  Logic: '<S335>/AND9'
     *  RelationalOperator: '<S343>/FixPt Relational Operator'
     *  RelationalOperator: '<S344>/Compare'
     *  UnitDelay: '<S16>/Unit Delay'
     *  UnitDelay: '<S343>/Delay Input1'
     *
     * Block description for '<S343>/Delay Input1':
     *
     *  Store in Global RAM
     */
    if (((Code_Gen_Model_B.Steering_Abs_Angle_Active) || (((int32_T)
           rtb_FixPtRelationalOperator) > ((int32_T)
           Code_Gen_Model_DW.DelayInput1_DSTATE_jp))) ||
        (Code_Gen_Model_B.Active_GameState != 2)) {
      /* Switch: '<S335>/Switch8' */
      Code_Gen_Model_B.Steering_Abs_Gyro_Latch = Code_Gen_Model_B.Gyro_Angle_rad;
    }

    /* End of Switch: '<S335>/Switch8' */

    /* Switch: '<S335>/Switch2' */
    if (Code_Gen_Model_B.Steering_Abs_Angle_Active) {
      /* Switch: '<S335>/Switch2' incorporates:
       *  Constant: '<S335>/Constant2'
       */
      Code_Gen_Model_B.Steering_Abs_Gyro = 0.0;
    } else {
      /* Switch: '<S335>/Switch2' */
      Code_Gen_Model_B.Steering_Abs_Gyro =
        Code_Gen_Model_B.Steering_Abs_Gyro_Latch;
    }

    /* End of Switch: '<S335>/Switch2' */

    /* Logic: '<S332>/Logical Operator' incorporates:
     *  Logic: '<S332>/Logical Operator1'
     *  Logic: '<S332>/Logical Operator13'
     *  UnitDelay: '<S332>/Unit Delay'
     */
    Code_Gen_Model_B.previous_call_was_for_speaker =
      ((!Code_Gen_Model_B.Align_Amp) && ((Code_Gen_Model_B.Align_Speaker) ||
        (Code_Gen_Model_B.previous_call_was_for_speaker)));

    /* Switch: '<S332>/Switch2' incorporates:
     *  Switch: '<S332>/Switch4'
     *  Switch: '<S332>/Switch5'
     */
    if (Code_Gen_Model_B.previous_call_was_for_speaker) {
      /* Switch: '<S332>/Switch2' incorporates:
       *  Constant: '<S20>/Constant'
       */
      Code_Gen_Model_B.AT_Target_Angle = 0.0;
    } else if (rtb_AT_Tag_5_Active) {
      /* Switch: '<S332>/Switch2' incorporates:
       *  Constant: '<S332>/Constant14'
       *  Switch: '<S332>/Switch4'
       */
      Code_Gen_Model_B.AT_Target_Angle = AT_Target_Tag_5_Field_Angle;
    } else if (rtb_Swerve_Motors_Disabled) {
      /* Switch: '<S332>/Switch2' incorporates:
       *  Constant: '<S332>/Constant13'
       *  Switch: '<S332>/Switch4'
       *  Switch: '<S332>/Switch5'
       */
      Code_Gen_Model_B.AT_Target_Angle = AT_Target_Tag_6_Field_Angle;
    }

    /* End of Switch: '<S332>/Switch2' */

    /* Switch: '<S335>/Switch4' incorporates:
     *  Constant: '<S335>/Constant5'
     *  Switch: '<S335>/Switch1'
     *  Switch: '<S335>/Switch5'
     *  Switch: '<S335>/Switch6'
     *  Switch: '<S335>/Switch7'
     */
    if (Code_Gen_Model_B.Face_Away_Driver) {
      rtb_Switch4 = 0.0;
    } else if (Code_Gen_Model_B.Face_Left_Driver) {
      /* Switch: '<S335>/Switch5' incorporates:
       *  Constant: '<S335>/Constant6'
       */
      rtb_Switch4 = 1.5707963267948966;
    } else if (Code_Gen_Model_B.Face_Toward_Driver) {
      /* Switch: '<S335>/Switch6' incorporates:
       *  Constant: '<S335>/Constant7'
       *  Switch: '<S335>/Switch5'
       */
      rtb_Switch4 = 3.1415926535897931;
    } else if (Code_Gen_Model_B.Face_Right_Driver) {
      /* Switch: '<S335>/Switch7' incorporates:
       *  Constant: '<S335>/Constant8'
       *  Switch: '<S335>/Switch5'
       *  Switch: '<S335>/Switch6'
       */
      rtb_Switch4 = 4.71238898038469;
    } else if (rtb_FixPtRelationalOperator_f) {
      /* Switch: '<S335>/Switch1' incorporates:
       *  Switch: '<S335>/Switch5'
       *  Switch: '<S335>/Switch6'
       *  Switch: '<S335>/Switch7'
       */
      rtb_Switch4 = Code_Gen_Model_B.AT_Target_Angle;
    } else {
      /* Switch: '<S335>/Switch6' incorporates:
       *  Switch: '<S335>/Switch5'
       *  Switch: '<S335>/Switch7'
       *  UnitDelay: '<S335>/Unit Delay1'
       */
      rtb_Switch4 = Code_Gen_Model_DW.UnitDelay1_DSTATE_j2;
    }

    /* End of Switch: '<S335>/Switch4' */

    /* Switch: '<S335>/Switch3' */
    if (Code_Gen_Model_B.Steering_Abs_Angle_Active) {
      /* Switch: '<S335>/Switch3' */
      Code_Gen_Model_B.Steering_Abs_Angle = rtb_Switch4;
    } else {
      /* Switch: '<S335>/Switch3' incorporates:
       *  Constant: '<S335>/Constant3'
       */
      Code_Gen_Model_B.Steering_Abs_Angle = 0.0;
    }

    /* End of Switch: '<S335>/Switch3' */

    /* Merge: '<S14>/Merge1' incorporates:
     *  Sum: '<S335>/Add1'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd = Code_Gen_Model_B.Steering_Abs_Angle +
      Code_Gen_Model_B.Steering_Abs_Gyro;

    /* Merge: '<S14>/Merge2' incorporates:
     *  SignalConversion: '<S335>/Signal Copy'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd = rtb_rx_i;

    /* Switch: '<S345>/Switch1' incorporates:
     *  Constant: '<S345>/Constant'
     *  Constant: '<S345>/Constant1'
     */
    if (Code_Gen_Model_B.Is_Boosting) {
      rtb_thetay = Boost_Trigger_High_Speed;
    } else {
      rtb_thetay = Boost_Trigger_Low_Speed;
    }

    /* End of Switch: '<S345>/Switch1' */

    /* Switch: '<S352>/Init' incorporates:
     *  UnitDelay: '<S352>/FixPt Unit Delay1'
     *  UnitDelay: '<S352>/FixPt Unit Delay2'
     */
    if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_a != 0) {
      rtb_rx_i = rtb_thetay;
    } else {
      rtb_rx_i = Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_f;
    }

    /* End of Switch: '<S352>/Init' */

    /* Sum: '<S350>/Sum1' */
    rtb_thetay -= rtb_rx_i;

    /* Switch: '<S351>/Switch2' incorporates:
     *  Constant: '<S349>/Constant1'
     *  Constant: '<S349>/Constant3'
     *  RelationalOperator: '<S351>/LowerRelop1'
     *  RelationalOperator: '<S351>/UpperRelop'
     *  Switch: '<S351>/Switch'
     */
    if (rtb_thetay > Boost_Trigger_Increasing_Limit) {
      rtb_thetay = Boost_Trigger_Increasing_Limit;
    } else if (rtb_thetay < Boost_Trigger_Decreasing_Limit) {
      /* Switch: '<S351>/Switch' incorporates:
       *  Constant: '<S349>/Constant1'
       */
      rtb_thetay = Boost_Trigger_Decreasing_Limit;
    }

    /* End of Switch: '<S351>/Switch2' */

    /* Sum: '<S350>/Sum' */
    rtb_Sum_jt = rtb_thetay + rtb_rx_i;

    /* Switch: '<S336>/Switch' incorporates:
     *  Switch: '<S336>/Switch2'
     */
    if (rtb_Relative_Translation_Flag) {
      /* Merge: '<S14>/Merge4' incorporates:
       *  Gain: '<S336>/Gain'
       */
      Code_Gen_Model_B.Translation_Speed = Translation_Twist_Gain * rtb_rx;
    } else if (rtb_Compare_at) {
      /* Merge: '<S14>/Merge4' incorporates:
       *  Gain: '<S336>/Gain2'
       *  Math: '<S336>/Magnitude1'
       *  Switch: '<S336>/Switch2'
       */
      Code_Gen_Model_B.Translation_Speed = AT_XY_Control_Gain * rt_hypotd_snf
        (Code_Gen_Model_B.AT_Error_X, Code_Gen_Model_B.AT_Error_Y);
    } else {
      /* Product: '<S345>/Product' incorporates:
       *  Switch: '<S336>/Switch2'
       */
      u0 = rtb_thetay_n * rtb_Sum_jt;

      /* Saturate: '<S345>/Saturation' incorporates:
       *  Switch: '<S336>/Switch2'
       */
      if (u0 > Boost_Trigger_High_Speed) {
        /* Merge: '<S14>/Merge4' */
        Code_Gen_Model_B.Translation_Speed = Boost_Trigger_High_Speed;
      } else if (u0 < (-Boost_Trigger_High_Speed)) {
        /* Merge: '<S14>/Merge4' */
        Code_Gen_Model_B.Translation_Speed = -Boost_Trigger_High_Speed;
      } else {
        /* Merge: '<S14>/Merge4' */
        Code_Gen_Model_B.Translation_Speed = u0;
      }

      /* End of Saturate: '<S345>/Saturation' */
    }

    /* End of Switch: '<S336>/Switch' */

    /* Merge: '<S14>/Merge7' incorporates:
     *  Constant: '<S20>/Constant3'
     *  SignalConversion generated from: '<S20>/Spline_Enable'
     */
    Code_Gen_Model_B.Spline_Enable = false;

    /* Merge: '<S14>/Merge9' incorporates:
     *  Constant: '<S20>/Constant9'
     *  SignalConversion generated from: '<S20>/Spline_Num_Poses'
     */
    Code_Gen_Model_B.Spline_Num_Poses = 10.0;

    /* Merge: '<S14>/Merge10' incorporates:
     *  Constant: '<S20>/Constant1'
     *  SignalConversion generated from: '<S20>/Test_Mode'
     */
    Code_Gen_Model_B.Test_Mode = false;

    /* SignalConversion generated from: '<S20>/Enable_Wheels' incorporates:
     *  Constant: '<S20>/Constant6'
     */
    rtb_rx = 0.0;

    /* SignalConversion generated from: '<S20>/Reset_Wheel_Offsets' incorporates:
     *  Constant: '<S20>/Constant13'
     */
    rtb_thetay = 0.0;

    /* SignalConversion generated from: '<S20>/Disable_Wheels' incorporates:
     *  Constant: '<S20>/Constant14'
     */
    rtb_rx_i = 0.0;

    /* SignalConversion generated from: '<S20>/Swerve_Motors_Disabled' incorporates:
     *  Constant: '<S20>/Constant2'
     */
    rtb_Swerve_Motors_Disabled = false;

    /* Merge: '<S14>/Merge12' incorporates:
     *  Constant: '<S334>/Constant5'
     *  SignalConversion generated from: '<S20>/Reefscape_Motors_Enable'
     */
    Code_Gen_Model_B.Reefscape_Motors_Enable = true;

    /* RelationalOperator: '<S356>/FixPt Relational Operator' incorporates:
     *  Inport: '<Root>/Gamepad_B1_A'
     *  UnitDelay: '<S356>/Delay Input1'
     *
     * Block description for '<S356>/Delay Input1':
     *
     *  Store in Global RAM
     */
    rtb_AT_Tag_5_Active = (Code_Gen_Model_U.Gamepad_B1_A >
      Code_Gen_Model_DW.DelayInput1_DSTATE_c);

    /* RelationalOperator: '<S357>/FixPt Relational Operator' incorporates:
     *  Inport: '<Root>/Gamepad_B2_B'
     *  UnitDelay: '<S357>/Delay Input1'
     *
     * Block description for '<S357>/Delay Input1':
     *
     *  Store in Global RAM
     */
    rtb_Compare_at = (Code_Gen_Model_U.Gamepad_B2_B >
                      Code_Gen_Model_DW.DelayInput1_DSTATE_nr);

    /* RelationalOperator: '<S358>/FixPt Relational Operator' incorporates:
     *  Inport: '<Root>/Gamepad_B3_X'
     *  UnitDelay: '<S358>/Delay Input1'
     *
     * Block description for '<S358>/Delay Input1':
     *
     *  Store in Global RAM
     */
    rtb_Relative_Translation_Flag = (Code_Gen_Model_U.Gamepad_B3_X >
      Code_Gen_Model_DW.DelayInput1_DSTATE_ez);

    /* RelationalOperator: '<S359>/FixPt Relational Operator' incorporates:
     *  Inport: '<Root>/Gamepad_B4_Y'
     *  UnitDelay: '<S359>/Delay Input1'
     *
     * Block description for '<S359>/Delay Input1':
     *
     *  Store in Global RAM
     */
    rtb_AND2 = (Code_Gen_Model_U.Gamepad_B4_Y >
                Code_Gen_Model_DW.DelayInput1_DSTATE_nh);

    /* RelationalOperator: '<S360>/FixPt Relational Operator' incorporates:
     *  Inport: '<Root>/Gamepad_Start'
     *  UnitDelay: '<S360>/Delay Input1'
     *
     * Block description for '<S360>/Delay Input1':
     *
     *  Store in Global RAM
     */
    rtb_AT_Tag_15_Active = (Code_Gen_Model_U.Gamepad_Start >
      Code_Gen_Model_DW.DelayInput1_DSTATE_i);

    /* Chart: '<S334>/Coral_Chart' incorporates:
     *  Constant: '<S5>/Constant'
     *  Inport: '<Root>/Coral_Limit_Switch'
     *  Inport: '<Root>/Coral_TOF_Distance'
     *  Inport: '<Root>/Gamepad_RB'
     *  RelationalOperator: '<S361>/FixPt Relational Operator'
     *  RelationalOperator: '<S362>/FixPt Relational Operator'
     *  RelationalOperator: '<S363>/FixPt Relational Operator'
     *  RelationalOperator: '<S5>/Compare'
     *  UnitDelay: '<S361>/Delay Input1'
     *  UnitDelay: '<S362>/Delay Input1'
     *  UnitDelay: '<S363>/Delay Input1'
     *
     * Block description for '<S361>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S362>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S363>/Delay Input1':
     *
     *  Store in Global RAM
     */
    if (Code_Gen_Model_DW.is_active_c4_Code_Gen_Model == 0U) {
      Code_Gen_Model_DW.is_active_c4_Code_Gen_Model = 1U;
      Code_Gen_Model_DW.is_c4_Code_Gen_Model = Code_Ge_IN_Coral_Pickup_Prepare;
      Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Prepare;
      Code_Gen_Model_B.Coral_Wheel_DC = Coral_Motor_DC_Pickup;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = -90.0;
    } else {
      switch (Code_Gen_Model_DW.is_c4_Code_Gen_Model) {
       case Code_Gen_Model_IN_Coral_Eject:
        if (rtb_AT_Tag_15_Active) {
          Code_Gen_Model_DW.is_Coral_Eject = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
          Code_Gen_Model_DW.is_c4_Code_Gen_Model =
            Code_Ge_IN_Coral_Pickup_Prepare;
          Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Prepare;
          Code_Gen_Model_B.Coral_Wheel_DC = Coral_Motor_DC_Pickup;
          Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = -90.0;
        } else if (((int32_T)rtb_Compare_a) > ((int32_T)
                    Code_Gen_Model_DW.DelayInput1_DSTATE_fx)) {
          Code_Gen_Model_DW.is_Coral_Eject = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
          Code_Gen_Model_DW.is_c4_Code_Gen_Model =
            Code__IN_Elevator_Height_Bottom;
          Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Bottom;
          Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
          Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = 80.0;
        } else if (((int32_T)rtb_Gamepad_POV_Up) > ((int32_T)
                    Code_Gen_Model_DW.DelayInput1_DSTATE_o)) {
          Code_Gen_Model_DW.is_Coral_Eject = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
          Code_Gen_Model_DW.is_c4_Code_Gen_Model =
            Code_Gen__IN_Eleator_Height_Top;
          Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Top;
          Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = -80.0;
          Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
        } else if (Code_Gen_Model_DW.is_Coral_Eject == Code_Gen_Model_IN_Eject)
        {
          Code_Gen_Model_B.Coral_Wheel_DC = Coral_Motor_DC_Eject;
          if (Code_Gen_Model_DW.timer >= Coral_Eject_Time) {
            Code_Gen_Model_DW.is_Coral_Eject = Code_Gen_Model_IN_Stop;
            Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
          } else {
            Code_Gen_Model_DW.timer += 0.02;
          }
        } else {
          /* case IN_Stop: */
          Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
        }
        break;

       case Code_Gen__IN_Coral_Pickup_Lower:
        if (Code_Gen_Model_U.Coral_Limit_Switch != 0.0) {
          Code_Gen_Model_DW.is_c4_Code_Gen_Model =
            Code_Gen__IN_Coral_Pickup_Raise;
          Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Raise;
          Code_Gen_Model_B.Coral_Wheel_DC = Coral_Motor_DC_Hold;
        }
        break;

       case Code_Ge_IN_Coral_Pickup_Prepare:
        Code_Gen_Model_B.Coral_Wheel_DC = Coral_Motor_DC_Pickup;
        if ((fabs(Code_Gen_Model_B.Elevator_Height_Desired_m -
                  Code_Gen_Model_B.Elevator_Height_Measured) <=
             Elevator_Height_Error_Threshold) && ((fabs
              (Code_Gen_Model_B.Coral_Arm_Angle_Desired_o -
               Code_Gen_Model_B.Coral_Arm_Angle_Measured) <=
              Coral_Arm_Angle_Error_Threshold) &&
             (Code_Gen_Model_U.Coral_TOF_Distance < Coral_Detect_Distance))) {
          Code_Gen_Model_DW.is_c4_Code_Gen_Model =
            Code_Gen__IN_Coral_Pickup_Lower;
          Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Lower;
        }
        break;

       case Code_Gen__IN_Coral_Pickup_Raise:
        Code_Gen_Model_B.Coral_Wheel_DC = Coral_Motor_DC_Hold;
        if ((fabs(Code_Gen_Model_B.Elevator_Height_Desired_m -
                  Code_Gen_Model_B.Elevator_Height_Measured) <=
             Elevator_Height_Error_Threshold) && (((rtb_AT_Tag_5_Active ||
               rtb_Relative_Translation_Flag) || rtb_Compare_at) || rtb_AND2)) {
          Code_Gen_Model_DW.is_c4_Code_Gen_Model =
            Code_Ge_IN_Coral_Score_Position;
          enter_internal_Coral_Score_Posi(&rtb_AT_Tag_5_Active, &rtb_Compare_at,
            &rtb_Relative_Translation_Flag, &rtb_AND2);
        }
        break;

       case Code_Ge_IN_Coral_Score_Position:
        if (((rtb_AT_Tag_5_Active || rtb_Relative_Translation_Flag) ||
             rtb_Compare_at) || rtb_AND2) {
          Code_Gen_Model_DW.is_c4_Code_Gen_Model =
            Code_Ge_IN_Coral_Score_Position;
          enter_internal_Coral_Score_Posi(&rtb_AT_Tag_5_Active, &rtb_Compare_at,
            &rtb_Relative_Translation_Flag, &rtb_AND2);
        } else if (Code_Gen_Model_U.Gamepad_RB >
                   Code_Gen_Model_DW.DelayInput1_DSTATE_pd) {
          Code_Gen_Model_DW.is_c4_Code_Gen_Model = Code_Gen_Model_IN_Coral_Eject;
          Code_Gen_Model_DW.is_Coral_Eject = Code_Gen_Model_IN_Eject;
          Code_Gen_Model_B.Coral_Wheel_DC = Coral_Motor_DC_Eject;
          Code_Gen_Model_DW.timer = 0.0;
        }
        break;

       case Code_Gen__IN_Eleator_Height_Top:
        Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
        if (rtb_AT_Tag_15_Active) {
          Code_Gen_Model_DW.is_c4_Code_Gen_Model =
            Code_Ge_IN_Coral_Pickup_Prepare;
          Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Prepare;
          Code_Gen_Model_B.Coral_Wheel_DC = Coral_Motor_DC_Pickup;
          Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = -90.0;
        }
        break;

       default:
        /* case IN_Elevator_Height_Bottom: */
        Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
        if (rtb_AT_Tag_15_Active) {
          Code_Gen_Model_DW.is_c4_Code_Gen_Model =
            Code_Ge_IN_Coral_Pickup_Prepare;
          Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Prepare;
          Code_Gen_Model_B.Coral_Wheel_DC = Coral_Motor_DC_Pickup;
          Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = -90.0;
        }
        break;
      }
    }

    /* End of Chart: '<S334>/Coral_Chart' */

    /* Merge: '<S14>/Merge13' incorporates:
     *  SignalConversion generated from: '<S20>/Coral_Arm_Angle_Desired'
     */
    Code_Gen_Model_B.Coral_Arm_Angle_Desired =
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_o;

    /* SignalConversion generated from: '<S20>/Coral_Wheel_DutyCycle' */
    rtb_thetay_n = Code_Gen_Model_B.Coral_Wheel_DC;

    /* Merge: '<S14>/Merge11' incorporates:
     *  SignalConversion generated from: '<S20>/Elevator_Height_Desired'
     */
    Code_Gen_Model_B.Elevator_Height_Desired =
      Code_Gen_Model_B.Elevator_Height_Desired_m;

    /* Update for UnitDelay: '<S348>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_l = rtb_Switch1_h;

    /* Update for UnitDelay: '<S348>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_p = rtb_Switch2;

    /* Update for UnitDelay: '<S343>/Delay Input1'
     *
     * Block description for '<S343>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_jp = rtb_FixPtRelationalOperator;

    /* Update for UnitDelay: '<S342>/Delay Input1'
     *
     * Block description for '<S342>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_f = rtb_FixPtRelationalOperator_ea;

    /* Update for UnitDelay: '<S338>/Delay Input1'
     *
     * Block description for '<S338>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_m = Code_Gen_Model_B.Face_Away_Driver;

    /* Update for UnitDelay: '<S339>/Delay Input1'
     *
     * Block description for '<S339>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_k = Code_Gen_Model_B.Face_Left_Driver;

    /* Update for UnitDelay: '<S340>/Delay Input1'
     *
     * Block description for '<S340>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_g = Code_Gen_Model_B.Face_Toward_Driver;

    /* Update for UnitDelay: '<S341>/Delay Input1'
     *
     * Block description for '<S341>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_g2 = Code_Gen_Model_B.Face_Right_Driver;

    /* Update for UnitDelay: '<S335>/Unit Delay2' */
    Code_Gen_Model_DW.UnitDelay2_DSTATE = rtb_AND1;

    /* Update for UnitDelay: '<S335>/Unit Delay4' */
    Code_Gen_Model_DW.UnitDelay4_DSTATE = rtb_FixPtRelationalOperator_f;

    /* Update for UnitDelay: '<S335>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_j2 = rtb_Switch4;

    /* Update for UnitDelay: '<S352>/FixPt Unit Delay2' incorporates:
     *  Constant: '<S352>/FixPt Constant'
     */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_a = 0U;

    /* Update for UnitDelay: '<S352>/FixPt Unit Delay1' */
    Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_f = rtb_Sum_jt;

    /* Update for UnitDelay: '<S356>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_B1_A'
     *
     * Block description for '<S356>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_c = Code_Gen_Model_U.Gamepad_B1_A;

    /* Update for UnitDelay: '<S357>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_B2_B'
     *
     * Block description for '<S357>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_nr = Code_Gen_Model_U.Gamepad_B2_B;

    /* Update for UnitDelay: '<S358>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_B3_X'
     *
     * Block description for '<S358>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_ez = Code_Gen_Model_U.Gamepad_B3_X;

    /* Update for UnitDelay: '<S359>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_B4_Y'
     *
     * Block description for '<S359>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_nh = Code_Gen_Model_U.Gamepad_B4_Y;

    /* Update for UnitDelay: '<S360>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_Start'
     *
     * Block description for '<S360>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_i = Code_Gen_Model_U.Gamepad_Start;

    /* Update for UnitDelay: '<S361>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_RB'
     *
     * Block description for '<S361>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_pd = Code_Gen_Model_U.Gamepad_RB;

    /* Update for UnitDelay: '<S362>/Delay Input1'
     *
     * Block description for '<S362>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_o = rtb_Gamepad_POV_Up;

    /* Update for UnitDelay: '<S363>/Delay Input1'
     *
     * Block description for '<S363>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_fx = rtb_Compare_a;

    /* End of Outputs for SubSystem: '<S1>/Teleop' */
    break;

   default:
    /* InitializeConditions for IfAction SubSystem: '<S1>/Test' incorporates:
     *  ActionPort: '<S21>/Action Port'
     */
    /* InitializeConditions for SwitchCase: '<S1>/Switch Case' incorporates:
     *  UnitDelay: '<S21>/Unit Delay'
     */
    Code_Gen_Model_DW.UnitDelay_DSTATE_ir = ((rtAction == rtPrevAction) &&
      (Code_Gen_Model_DW.UnitDelay_DSTATE_ir));

    /* End of InitializeConditions for SubSystem: '<S1>/Test' */

    /* Outputs for IfAction SubSystem: '<S1>/Test' incorporates:
     *  ActionPort: '<S21>/Action Port'
     */
    /* Merge: '<S14>/Merge1' incorporates:
     *  Constant: '<S21>/Constant1'
     *  SignalConversion generated from: '<S21>/Steering_Abs_Cmd'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd = 0.0;

    /* Merge: '<S14>/Merge2' incorporates:
     *  Constant: '<S21>/Constant2'
     *  SignalConversion generated from: '<S21>/Steering_Rel_Cmd'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd = 0.0;

    /* Merge: '<S14>/Merge3' incorporates:
     *  Constant: '<S21>/Constant3'
     *  SignalConversion generated from: '<S21>/Translation_Angle'
     */
    Code_Gen_Model_B.Translation_Angle = 0.0;

    /* Merge: '<S14>/Merge4' incorporates:
     *  Constant: '<S21>/Constant4'
     *  SignalConversion generated from: '<S21>/Translation_Speed'
     */
    Code_Gen_Model_B.Translation_Speed = 0.0;

    /* SignalConversion generated from: '<S21>/Is_Absolute_Translation' incorporates:
     *  Constant: '<S21>/Constant5'
     */
    rtb_Is_Absolute_Translation_g = false;

    /* SignalConversion generated from: '<S21>/Is_Absolute_Steering' incorporates:
     *  Constant: '<S21>/Constant6'
     */
    rtb_Is_Absolute_Steering = false;

    /* Merge: '<S14>/Merge7' incorporates:
     *  Constant: '<S21>/Constant7'
     *  SignalConversion generated from: '<S21>/Spline_Enable'
     */
    Code_Gen_Model_B.Spline_Enable = false;

    /* Merge: '<S14>/Merge9' incorporates:
     *  Constant: '<S21>/Constant9'
     *  SignalConversion generated from: '<S21>/Spline_Num_Poses'
     */
    Code_Gen_Model_B.Spline_Num_Poses = 10.0;

    /* Merge: '<S14>/Merge10' incorporates:
     *  Constant: '<S21>/Constant12'
     *  SignalConversion generated from: '<S21>/Test_Mode'
     */
    Code_Gen_Model_B.Test_Mode = true;

    /* Switch: '<S21>/Switch' incorporates:
     *  Constant: '<S21>/Constant14'
     *  Switch: '<S21>/Switch1'
     *  UnitDelay: '<S21>/Unit Delay'
     */
    if (rtb_FixPtRelationalOperator_ea) {
      rtb_Swerve_Motors_Disabled = true;
    } else if (rtb_FixPtRelationalOperator) {
      /* Switch: '<S21>/Switch1' incorporates:
       *  Constant: '<S21>/Constant13'
       */
      rtb_Swerve_Motors_Disabled = false;
    } else {
      rtb_Swerve_Motors_Disabled = Code_Gen_Model_DW.UnitDelay_DSTATE_ir;
    }

    /* End of Switch: '<S21>/Switch' */

    /* Merge: '<S14>/Merge12' incorporates:
     *  Constant: '<S21>/Constant11'
     *  SignalConversion generated from: '<S21>/Reefscape_Motors_Enable'
     */
    Code_Gen_Model_B.Reefscape_Motors_Enable = false;

    /* Merge: '<S14>/Merge11' incorporates:
     *  Constant: '<S21>/Constant10'
     *  SignalConversion generated from: '<S21>/Elevator_Height_Desired'
     */
    Code_Gen_Model_B.Elevator_Height_Desired = 0.0;

    /* Merge: '<S14>/Merge13' incorporates:
     *  Constant: '<S21>/Constant15'
     *  SignalConversion generated from: '<S21>/Coral_Arm_Angle_Desired'
     */
    Code_Gen_Model_B.Coral_Arm_Angle_Desired = -90.0;

    /* SignalConversion generated from: '<S21>/Coral_Wheel_DutyCycle' incorporates:
     *  Constant: '<S21>/Constant16'
     */
    rtb_thetay_n = 0.0;

    /* DataTypeConversion: '<S21>/Cast To Boolean1' */
    rtb_rx = rtb_FixPtRelationalOperator;

    /* DataTypeConversion: '<S21>/Cast To Boolean3' */
    rtb_rx_i = rtb_FixPtRelationalOperator_ea;

    /* DataTypeConversion: '<S21>/Cast To Boolean2' incorporates:
     *  Inport: '<Root>/Joystick_Left_B12'
     *  RelationalOperator: '<S49>/FixPt Relational Operator'
     *  UnitDelay: '<S49>/Delay Input1'
     *
     * Block description for '<S49>/Delay Input1':
     *
     *  Store in Global RAM
     */
    rtb_thetay = (Code_Gen_Model_U.Joystick_Left_B12 >
                  Code_Gen_Model_DW.DelayInput1_DSTATE_e);

    /* Update for UnitDelay: '<S21>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_ir = rtb_Swerve_Motors_Disabled;

    /* End of Outputs for SubSystem: '<S1>/Test' */
    break;
  }

  /* End of SwitchCase: '<S1>/Switch Case' */

  /* Switch: '<S10>/Switch' incorporates:
   *  Constant: '<S10>/Constant'
   *  Constant: '<S10>/Constant1'
   *  Inport: '<Root>/IsBlueAlliance'
   */
  if (Code_Gen_Model_U.IsBlueAlliance != 0.0) {
    u0 = 0.0;
  } else {
    u0 = 3.1415926535897931;
  }

  /* Sum: '<S10>/Add' incorporates:
   *  Switch: '<S10>/Switch'
   */
  Code_Gen_Model_B.Gyro_Angle_Field_rad = Code_Gen_Model_B.Gyro_Angle_rad + u0;

  /* If: '<S17>/If' incorporates:
   *  Constant: '<S117>/Constant'
   *  Merge: '<S17>/Merge'
   *  Merge: '<S17>/Merge1'
   *  Merge: '<S17>/Merge2'
   *  Merge: '<S17>/Merge3'
   *  Merge: '<S17>/Merge4'
   *  Merge: '<S17>/Merge5'
   *  Merge: '<S17>/Merge7'
   *  Merge: '<S17>/Merge8'
   *  SignalConversion generated from: '<S117>/Robot_Reached_Destination'
   */
  rtPrevAction = Code_Gen_Model_DW.If_ActiveSubsystem;
  Code_Gen_Model_DW.If_ActiveSubsystem = 1;
  if ((rtPrevAction != 1) && (rtPrevAction == 0)) {
    /* Disable for If: '<S123>/If' */
    if (Code_Gen_Model_DW.If_ActiveSubsystem_h == 0) {
      /* Disable for If: '<S126>/If' */
      if (Code_Gen_Model_DW.If_ActiveSubsystem_o == 0) {
        /* Disable for If: '<S128>/If' */
        Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;
      }

      Code_Gen_Model_DW.If_ActiveSubsystem_o = -1;

      /* End of Disable for If: '<S126>/If' */
    }

    Code_Gen_Model_DW.If_ActiveSubsystem_h = -1;

    /* End of Disable for If: '<S123>/If' */
  }

  /* Outputs for IfAction SubSystem: '<S17>/Pass Through' incorporates:
   *  ActionPort: '<S117>/Action Port'
   */
  Code_Gen_Model_B.Robot_Reached_Destination = true;
  Code_Gen_Model_B.Steering_Abs_Cmd_SPF = Code_Gen_Model_B.Steering_Abs_Cmd;
  Code_Gen_Model_B.Steering_Rel_Cmd_SPF = Code_Gen_Model_B.Steering_Rel_Cmd;
  Code_Gen_Model_B.Translation_Speed_SPF = Code_Gen_Model_B.Translation_Speed;
  Code_Gen_Model_B.Translation_Angle_SPF = Code_Gen_Model_B.Translation_Angle;
  Code_Gen_Model_B.Is_Absolute_Translation_SPF = rtb_Is_Absolute_Translation_g;
  Code_Gen_Model_B.Is_Absolute_Steering_SPF = rtb_Is_Absolute_Steering;
  Code_Gen_Model_B.Gyro_Angle_SPF = Code_Gen_Model_B.Gyro_Angle_rad;

  /* End of If: '<S17>/If' */
  /* End of Outputs for SubSystem: '<S17>/Pass Through' */

  /* UnitDelay: '<S271>/Unit Delay' */
  rtb_Merge1 = Code_Gen_Model_B.Translation_Speed_RL;

  /* Signum: '<S271>/Sign2' */
  if (rtIsNaN(rtb_Merge1)) {
    u0 = (rtNaN);
  } else if (rtb_Merge1 < 0.0) {
    u0 = -1.0;
  } else {
    u0 = (rtb_Merge1 > 0.0);
  }

  /* Signum: '<S271>/Sign1' */
  if (rtIsNaN(Code_Gen_Model_B.Translation_Speed_SPF)) {
    rtb_Add_du = (rtNaN);
  } else if (Code_Gen_Model_B.Translation_Speed_SPF < 0.0) {
    rtb_Add_du = -1.0;
  } else {
    rtb_Add_du = (Code_Gen_Model_B.Translation_Speed_SPF > 0.0);
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
   *  Constant: '<S276>/Constant'
   *  Constant: '<S277>/Constant'
   *  Logic: '<S271>/or'
   *  Product: '<S271>/Product1'
   *  RelationalOperator: '<S276>/Compare'
   *  RelationalOperator: '<S277>/Compare'
   */
  if ((rtb_Merge1 == 0.0) || (((rtb_Num_Segments < 0) ? ((int32_T)((int8_T)
          (-((int8_T)((uint8_T)(-((real_T)rtb_Num_Segments))))))) :
        rtb_Num_Segments) > 0)) {
    rtb_rx_l = Code_Gen_Model_B.Translation_Speed_SPF;
  } else {
    rtb_rx_l = 0.0;
  }

  /* End of Switch: '<S271>/Switch' */

  /* RelationalOperator: '<S278>/Compare' incorporates:
   *  Constant: '<S278>/Constant'
   */
  rtb_Gamepad_POV_Up = (rtb_rx_l == 0.0);

  /* RelationalOperator: '<S279>/Compare' incorporates:
   *  Constant: '<S279>/Constant'
   */
  rtb_Compare_a = (rtb_rx_l > 0.0);

  /* Abs: '<S271>/Abs' incorporates:
   *  Sum: '<S271>/Subtract'
   */
  rtb_Merge1 = fabs(rtb_Merge1 - Code_Gen_Model_B.Translation_Speed_SPF);

  /* Switch: '<S271>/Switch5' incorporates:
   *  Constant: '<S271>/Constant1'
   *  Switch: '<S271>/Switch1'
   *  UnaryMinus: '<S271>/Unary Minus'
   */
  if (rtb_Gamepad_POV_Up) {
    /* SignalConversion generated from: '<S271>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S271>/Constant4'
     *  Constant: '<S271>/Constant6'
     */
    rtb_Akxhatkk1[0] = Translation_Speed_Approach_Zero_Final_Thresh;
    rtb_Akxhatkk1[1] = 1.0;

    /* SignalConversion generated from: '<S271>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S271>/Constant2'
     *  Constant: '<S271>/Constant5'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Translation_Speed_Approach_Zero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S271>/Lookup Table Dynamic' */
    /* Dynamic Look-Up Table Block: '<S271>/Lookup Table Dynamic'
     * Input0  Data Type:  Floating Point real_T
     * Input1  Data Type:  Floating Point real_T
     * Input2  Data Type:  Floating Point real_T
     * Output0 Data Type:  Floating Point real_T
     * Lookup Method: Linear_Endpoint
     *
     */
    LookUp_real_T_real_T( &(rtb_LookupTableDynamic_j), &rtb_Akxhatkk1[0],
                         rtb_Merge1, &rtb_Minus_n[0], 1U);
    rtb_Switch1_h = rtb_LookupTableDynamic_j;
    u0 = -Translation_Speed_Rate_Limit_Dec;
  } else {
    /* SignalConversion generated from: '<S271>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S271>/Constant10'
     *  Constant: '<S271>/Constant8'
     */
    rtb_Akxhatkk1[0] = Translation_Speed_NonZero_Final_Scale_Factor;
    rtb_Akxhatkk1[1] = 1.0;

    /* SignalConversion generated from: '<S271>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S271>/Constant7'
     *  Constant: '<S271>/Constant9'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Translation_Speed_NonZero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S271>/Lookup Table Dynamic1' */
    /* Dynamic Look-Up Table Block: '<S271>/Lookup Table Dynamic1'
     * Input0  Data Type:  Floating Point real_T
     * Input1  Data Type:  Floating Point real_T
     * Input2  Data Type:  Floating Point real_T
     * Output0 Data Type:  Floating Point real_T
     * Lookup Method: Linear_Endpoint
     *
     */
    LookUp_real_T_real_T( &(rtb_LookupTableDynamic1_i), &rtb_Akxhatkk1[0],
                         rtb_Merge1, &rtb_Minus_n[0], 1U);
    rtb_Switch1_h = rtb_LookupTableDynamic1_i;

    /* Switch: '<S271>/Switch3' incorporates:
     *  Constant: '<S271>/Constant1'
     *  Constant: '<S271>/Constant3'
     *  UnaryMinus: '<S271>/Unary Minus'
     */
    if (rtb_Compare_a) {
      u0 = Translation_Speed_Rate_Limit_Inc;
    } else {
      u0 = -Translation_Speed_Rate_Limit_Dec;
    }

    /* End of Switch: '<S271>/Switch3' */
  }

  /* End of Switch: '<S271>/Switch5' */

  /* Product: '<S271>/Product' incorporates:
   *  Switch: '<S271>/Switch1'
   */
  rtb_Switch2 = u0 * rtb_Switch1_h;

  /* Switch: '<S282>/Init' incorporates:
   *  UnitDelay: '<S282>/FixPt Unit Delay1'
   *  UnitDelay: '<S282>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE != 0) {
    rtb_Merge1 = rtb_rx_l;
  } else {
    rtb_Merge1 = Code_Gen_Model_B.Translation_Speed_RL;
  }

  /* End of Switch: '<S282>/Init' */

  /* Sum: '<S280>/Sum1' */
  rtb_Switch4 = rtb_rx_l - rtb_Merge1;

  /* Switch: '<S281>/Switch2' incorporates:
   *  RelationalOperator: '<S281>/LowerRelop1'
   */
  if (!(rtb_Switch4 > rtb_Switch2)) {
    /* Switch: '<S271>/Switch2' incorporates:
     *  Constant: '<S271>/Constant1'
     *  Constant: '<S271>/Constant3'
     *  Switch: '<S271>/Switch4'
     *  UnaryMinus: '<S271>/Unary Minus1'
     */
    if (rtb_Gamepad_POV_Up) {
      u0 = Translation_Speed_Rate_Limit_Dec;
    } else if (rtb_Compare_a) {
      /* Switch: '<S271>/Switch4' incorporates:
       *  Constant: '<S271>/Constant1'
       */
      u0 = Translation_Speed_Rate_Limit_Dec;
    } else {
      u0 = -Translation_Speed_Rate_Limit_Inc;
    }

    /* Product: '<S271>/Product2' incorporates:
     *  Switch: '<S271>/Switch2'
     */
    rtb_Switch2 = u0 * rtb_Switch1_h;

    /* Switch: '<S281>/Switch' incorporates:
     *  RelationalOperator: '<S281>/UpperRelop'
     */
    if (!(rtb_Switch4 < rtb_Switch2)) {
      rtb_Switch2 = rtb_Switch4;
    }

    /* End of Switch: '<S281>/Switch' */
  }

  /* End of Switch: '<S281>/Switch2' */

  /* Sum: '<S280>/Sum' */
  Code_Gen_Model_B.Translation_Speed_RL = rtb_Switch2 + rtb_Merge1;

  /* Switch: '<S274>/Switch' */
  if (Code_Gen_Model_B.Is_Absolute_Translation_SPF) {
    /* Switch: '<S274>/Switch' incorporates:
     *  Constant: '<S306>/Constant3'
     *  Constant: '<S306>/Constant4'
     *  Math: '<S306>/Math Function'
     *  Sum: '<S274>/Subtract'
     *  Sum: '<S306>/Add1'
     *  Sum: '<S306>/Add2'
     */
    Code_Gen_Model_B.Translation_Steering_Cmd = rt_modd_snf
      ((Code_Gen_Model_B.Translation_Angle_SPF - Code_Gen_Model_B.Gyro_Angle_SPF)
       + 3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;
  } else {
    /* Switch: '<S274>/Switch' */
    Code_Gen_Model_B.Translation_Steering_Cmd =
      Code_Gen_Model_B.Translation_Angle_SPF;
  }

  /* End of Switch: '<S274>/Switch' */

  /* Sum: '<S302>/Add1' incorporates:
   *  Constant: '<S302>/Constant3'
   *  Constant: '<S302>/Constant4'
   *  Math: '<S302>/Math Function'
   *  Sum: '<S301>/Sum'
   *  Sum: '<S302>/Add2'
   */
  rtb_Switch2 = rt_modd_snf((Code_Gen_Model_B.Steering_Abs_Cmd_SPF -
    Code_Gen_Model_B.Gyro_Angle_SPF) + 3.1415926535897931, 6.2831853071795862) -
    3.1415926535897931;

  /* Sum: '<S304>/Sum1' incorporates:
   *  Constant: '<S301>/Constant2'
   *  Product: '<S304>/Product'
   *  Sum: '<S304>/Sum'
   *  UnitDelay: '<S304>/Unit Delay1'
   */
  rtb_Merge1 = ((rtb_Switch2 - Code_Gen_Model_DW.UnitDelay1_DSTATE_i) *
                Steering_Heading_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_i;

  /* Product: '<S301>/Product' incorporates:
   *  Constant: '<S301>/Constant3'
   */
  rtb_Switch1_h = rtb_Merge1 * Steering_Heading_Control_D;

  /* Sum: '<S303>/Diff' incorporates:
   *  UnitDelay: '<S303>/UD'
   *
   * Block description for '<S303>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S303>/UD':
   *
   *  Store in Global RAM
   */
  u0 = rtb_Switch1_h - Code_Gen_Model_DW.UD_DSTATE;

  /* Saturate: '<S301>/Saturation' */
  if (u0 > Steering_Heading_Control_D_UL) {
    u0 = Steering_Heading_Control_D_UL;
  } else if (u0 < Steering_Heading_Control_D_LL) {
    u0 = Steering_Heading_Control_D_LL;
  }

  /* Sum: '<S301>/Add' incorporates:
   *  Gain: '<S301>/Gain1'
   *  Saturate: '<S301>/Saturation'
   */
  rtb_Switch4 = (Steering_Heading_Control_P * rtb_Switch2) + u0;

  /* Sum: '<S301>/Subtract' incorporates:
   *  Constant: '<S301>/Constant'
   */
  rtb_Sin4 = Steering_Heading_Control_Total_UL - rtb_Switch4;

  /* Sum: '<S301>/Sum2' incorporates:
   *  Gain: '<S301>/Gain2'
   *  UnitDelay: '<S301>/Unit Delay'
   */
  rtb_Switch2 = (Steering_Heading_Control_I * rtb_Switch2) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_m;

  /* Switch: '<S305>/Switch2' incorporates:
   *  RelationalOperator: '<S305>/LowerRelop1'
   */
  if (!(rtb_Switch2 > rtb_Sin4)) {
    /* Sum: '<S301>/Subtract1' incorporates:
     *  Constant: '<S301>/Constant1'
     */
    rtb_Sum_jt = Steering_Heading_Control_Total_LL - rtb_Switch4;

    /* Switch: '<S305>/Switch' incorporates:
     *  RelationalOperator: '<S305>/UpperRelop'
     */
    if (rtb_Switch2 < rtb_Sum_jt) {
      rtb_Sin4 = rtb_Sum_jt;
    } else {
      rtb_Sin4 = rtb_Switch2;
    }

    /* End of Switch: '<S305>/Switch' */
  }

  /* End of Switch: '<S305>/Switch2' */

  /* Saturate: '<S301>/Saturation1' */
  if (rtb_Sin4 > Steering_Heading_Control_I_UL) {
    rtb_Switch2 = Steering_Heading_Control_I_UL;
  } else if (rtb_Sin4 < Steering_Heading_Control_I_LL) {
    rtb_Switch2 = Steering_Heading_Control_I_LL;
  } else {
    rtb_Switch2 = rtb_Sin4;
  }

  /* End of Saturate: '<S301>/Saturation1' */

  /* Sum: '<S301>/Add1' */
  u0 = rtb_Switch4 + rtb_Switch2;

  /* Saturate: '<S301>/Saturation2' */
  if (u0 > Steering_Heading_Control_Total_UL) {
    /* Saturate: '<S301>/Saturation2' */
    Code_Gen_Model_B.Steering_Localized_PID = Steering_Heading_Control_Total_UL;
  } else if (u0 < Steering_Heading_Control_Total_LL) {
    /* Saturate: '<S301>/Saturation2' */
    Code_Gen_Model_B.Steering_Localized_PID = Steering_Heading_Control_Total_LL;
  } else {
    /* Saturate: '<S301>/Saturation2' */
    Code_Gen_Model_B.Steering_Localized_PID = u0;
  }

  /* End of Saturate: '<S301>/Saturation2' */

  /* Switch: '<S285>/Switch' incorporates:
   *  Abs: '<S285>/Abs'
   *  Constant: '<S285>/Constant'
   *  Constant: '<S300>/Constant'
   *  RelationalOperator: '<S300>/Compare'
   */
  if (fabs(Code_Gen_Model_B.Steering_Localized_PID) >
      Steering_Heading_Control_Deadzone) {
    rtb_Sin4 = Code_Gen_Model_B.Steering_Localized_PID;
  } else {
    rtb_Sin4 = 0.0;
  }

  /* End of Switch: '<S285>/Switch' */

  /* Signum: '<S284>/Sign2' incorporates:
   *  UnitDelay: '<S284>/Unit Delay'
   */
  if (rtIsNaN(Code_Gen_Model_DW.UnitDelay_DSTATE_d)) {
    u0 = (rtNaN);
  } else if (Code_Gen_Model_DW.UnitDelay_DSTATE_d < 0.0) {
    u0 = -1.0;
  } else {
    u0 = (Code_Gen_Model_DW.UnitDelay_DSTATE_d > 0.0);
  }

  /* Signum: '<S284>/Sign1' */
  if (rtIsNaN(rtb_Sin4)) {
    rtb_Add_du = (rtNaN);
  } else if (rtb_Sin4 < 0.0) {
    rtb_Add_du = -1.0;
  } else {
    rtb_Add_du = (rtb_Sin4 > 0.0);
  }

  /* Product: '<S284>/Product1' incorporates:
   *  Signum: '<S284>/Sign1'
   *  Signum: '<S284>/Sign2'
   */
  u0 *= rtb_Add_du;
  if (rtIsNaN(u0)) {
    rtb_Num_Segments = 0;
  } else {
    rtb_Num_Segments = (int32_T)fmod(u0, 256.0);
  }

  /* Switch: '<S284>/Switch' incorporates:
   *  Constant: '<S284>/Constant'
   *  Constant: '<S293>/Constant'
   *  Constant: '<S294>/Constant'
   *  Logic: '<S284>/or'
   *  Product: '<S284>/Product1'
   *  RelationalOperator: '<S293>/Compare'
   *  RelationalOperator: '<S294>/Compare'
   *  UnitDelay: '<S284>/Unit Delay'
   */
  if ((Code_Gen_Model_DW.UnitDelay_DSTATE_d == 0.0) || (((rtb_Num_Segments < 0) ?
        ((int32_T)((int8_T)(-((int8_T)((uint8_T)(-((real_T)rtb_Num_Segments)))))))
        : rtb_Num_Segments) > 0)) {
    rtb_thetay_i = rtb_Sin4;
  } else {
    rtb_thetay_i = 0.0;
  }

  /* End of Switch: '<S284>/Switch' */

  /* RelationalOperator: '<S295>/Compare' incorporates:
   *  Constant: '<S295>/Constant'
   */
  rtb_Gamepad_POV_Up = (rtb_thetay_i == 0.0);

  /* RelationalOperator: '<S296>/Compare' incorporates:
   *  Constant: '<S296>/Constant'
   */
  rtb_Compare_a = (rtb_thetay_i > 0.0);

  /* Abs: '<S284>/Abs' incorporates:
   *  Sum: '<S284>/Subtract'
   *  UnitDelay: '<S284>/Unit Delay'
   */
  rtb_Switch4 = fabs(Code_Gen_Model_DW.UnitDelay_DSTATE_d - rtb_Sin4);

  /* Switch: '<S284>/Switch5' incorporates:
   *  Constant: '<S284>/Constant1'
   *  Switch: '<S284>/Switch1'
   *  UnaryMinus: '<S284>/Unary Minus'
   */
  if (rtb_Gamepad_POV_Up) {
    /* SignalConversion generated from: '<S284>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S284>/Constant4'
     *  Constant: '<S284>/Constant6'
     */
    rtb_Akxhatkk1[0] = Steering_Absolute_Cmd_Approach_Zero_Final_Thresh;
    rtb_Akxhatkk1[1] = 1.0;

    /* SignalConversion generated from: '<S284>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S284>/Constant2'
     *  Constant: '<S284>/Constant5'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Steering_Absolute_Cmd_Approach_Zero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S284>/Lookup Table Dynamic' */
    /* Dynamic Look-Up Table Block: '<S284>/Lookup Table Dynamic'
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
    /* SignalConversion generated from: '<S284>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S284>/Constant10'
     *  Constant: '<S284>/Constant8'
     */
    rtb_Akxhatkk1[0] = Steering_Absolute_Cmd_NonZero_Final_Scale_Factor;
    rtb_Akxhatkk1[1] = 1.0;

    /* SignalConversion generated from: '<S284>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S284>/Constant7'
     *  Constant: '<S284>/Constant9'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Steering_Absolute_Cmd_NonZero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S284>/Lookup Table Dynamic1' */
    /* Dynamic Look-Up Table Block: '<S284>/Lookup Table Dynamic1'
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

    /* Switch: '<S284>/Switch3' incorporates:
     *  Constant: '<S284>/Constant1'
     *  Constant: '<S284>/Constant3'
     *  UnaryMinus: '<S284>/Unary Minus'
     */
    if (rtb_Compare_a) {
      u0 = Steering_Absolute_Cmd_Rate_Limit_Inc;
    } else {
      u0 = -Steering_Absolute_Cmd_Rate_Limit_Dec;
    }

    /* End of Switch: '<S284>/Switch3' */
  }

  /* End of Switch: '<S284>/Switch5' */

  /* Product: '<S284>/Product' incorporates:
   *  Switch: '<S284>/Switch1'
   */
  rtb_rx_ht = u0 * rtb_Switch4;

  /* Switch: '<S299>/Init' incorporates:
   *  UnitDelay: '<S299>/FixPt Unit Delay1'
   *  UnitDelay: '<S299>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_p != 0) {
    rtb_Sin4 = rtb_thetay_i;
  } else {
    rtb_Sin4 = Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_e;
  }

  /* End of Switch: '<S299>/Init' */

  /* Sum: '<S297>/Sum1' */
  rtb_Sum_jt = rtb_thetay_i - rtb_Sin4;

  /* Switch: '<S298>/Switch2' incorporates:
   *  RelationalOperator: '<S298>/LowerRelop1'
   */
  if (!(rtb_Sum_jt > rtb_rx_ht)) {
    /* Switch: '<S284>/Switch2' incorporates:
     *  Constant: '<S284>/Constant1'
     *  Constant: '<S284>/Constant3'
     *  Switch: '<S284>/Switch4'
     *  UnaryMinus: '<S284>/Unary Minus1'
     */
    if (rtb_Gamepad_POV_Up) {
      u0 = Steering_Absolute_Cmd_Rate_Limit_Dec;
    } else if (rtb_Compare_a) {
      /* Switch: '<S284>/Switch4' incorporates:
       *  Constant: '<S284>/Constant1'
       */
      u0 = Steering_Absolute_Cmd_Rate_Limit_Dec;
    } else {
      u0 = -Steering_Absolute_Cmd_Rate_Limit_Inc;
    }

    /* Product: '<S284>/Product2' incorporates:
     *  Switch: '<S284>/Switch2'
     */
    rtb_thetay_i = u0 * rtb_Switch4;

    /* Switch: '<S298>/Switch' incorporates:
     *  RelationalOperator: '<S298>/UpperRelop'
     */
    if (rtb_Sum_jt < rtb_thetay_i) {
      rtb_rx_ht = rtb_thetay_i;
    } else {
      rtb_rx_ht = rtb_Sum_jt;
    }

    /* End of Switch: '<S298>/Switch' */
  }

  /* End of Switch: '<S298>/Switch2' */

  /* Sum: '<S297>/Sum' */
  rtb_Switch4 = rtb_rx_ht + rtb_Sin4;

  /* Signum: '<S283>/Sign2' incorporates:
   *  UnitDelay: '<S283>/Unit Delay'
   */
  if (rtIsNaN(Code_Gen_Model_DW.UnitDelay_DSTATE_g)) {
    u0 = (rtNaN);
  } else if (Code_Gen_Model_DW.UnitDelay_DSTATE_g < 0.0) {
    u0 = -1.0;
  } else {
    u0 = (Code_Gen_Model_DW.UnitDelay_DSTATE_g > 0.0);
  }

  /* Signum: '<S283>/Sign1' */
  if (rtIsNaN(Code_Gen_Model_B.Steering_Rel_Cmd_SPF)) {
    rtb_Add_du = (rtNaN);
  } else if (Code_Gen_Model_B.Steering_Rel_Cmd_SPF < 0.0) {
    rtb_Add_du = -1.0;
  } else {
    rtb_Add_du = (Code_Gen_Model_B.Steering_Rel_Cmd_SPF > 0.0);
  }

  /* Product: '<S283>/Product1' incorporates:
   *  Signum: '<S283>/Sign1'
   *  Signum: '<S283>/Sign2'
   */
  u0 *= rtb_Add_du;
  if (rtIsNaN(u0)) {
    rtb_Num_Segments = 0;
  } else {
    rtb_Num_Segments = (int32_T)fmod(u0, 256.0);
  }

  /* Switch: '<S283>/Switch' incorporates:
   *  Constant: '<S283>/Constant'
   *  Constant: '<S286>/Constant'
   *  Constant: '<S287>/Constant'
   *  Logic: '<S283>/or'
   *  Product: '<S283>/Product1'
   *  RelationalOperator: '<S286>/Compare'
   *  RelationalOperator: '<S287>/Compare'
   *  UnitDelay: '<S283>/Unit Delay'
   */
  if ((Code_Gen_Model_DW.UnitDelay_DSTATE_g == 0.0) || (((rtb_Num_Segments < 0) ?
        ((int32_T)((int8_T)(-((int8_T)((uint8_T)(-((real_T)rtb_Num_Segments)))))))
        : rtb_Num_Segments) > 0)) {
    rtb_rx_ht = Code_Gen_Model_B.Steering_Rel_Cmd_SPF;
  } else {
    rtb_rx_ht = 0.0;
  }

  /* End of Switch: '<S283>/Switch' */

  /* RelationalOperator: '<S288>/Compare' incorporates:
   *  Constant: '<S288>/Constant'
   */
  rtb_Gamepad_POV_Up = (rtb_rx_ht == 0.0);

  /* RelationalOperator: '<S289>/Compare' incorporates:
   *  Constant: '<S289>/Constant'
   */
  rtb_Compare_a = (rtb_rx_ht > 0.0);

  /* Abs: '<S283>/Abs' incorporates:
   *  Sum: '<S283>/Subtract'
   *  UnitDelay: '<S283>/Unit Delay'
   */
  rtb_Sum_jt = fabs(Code_Gen_Model_DW.UnitDelay_DSTATE_g -
                    Code_Gen_Model_B.Steering_Rel_Cmd_SPF);

  /* Switch: '<S283>/Switch5' incorporates:
   *  Constant: '<S283>/Constant1'
   *  Switch: '<S283>/Switch1'
   *  UnaryMinus: '<S283>/Unary Minus'
   */
  if (rtb_Gamepad_POV_Up) {
    /* SignalConversion generated from: '<S283>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S283>/Constant4'
     *  Constant: '<S283>/Constant6'
     */
    rtb_Akxhatkk1[0] = Steering_Relative_Cmd_Approach_Zero_Final_Thresh;
    rtb_Akxhatkk1[1] = 1.0;

    /* SignalConversion generated from: '<S283>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S283>/Constant2'
     *  Constant: '<S283>/Constant5'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Steering_Relative_Cmd_Approach_Zero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S283>/Lookup Table Dynamic' */
    /* Dynamic Look-Up Table Block: '<S283>/Lookup Table Dynamic'
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
    /* SignalConversion generated from: '<S283>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S283>/Constant10'
     *  Constant: '<S283>/Constant8'
     */
    rtb_Akxhatkk1[0] = Steering_Relative_Cmd_NonZero_Final_Scale_Factor;
    rtb_Akxhatkk1[1] = 1.0;

    /* SignalConversion generated from: '<S283>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S283>/Constant7'
     *  Constant: '<S283>/Constant9'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Steering_Relative_Cmd_NonZero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S283>/Lookup Table Dynamic1' */
    /* Dynamic Look-Up Table Block: '<S283>/Lookup Table Dynamic1'
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

    /* Switch: '<S283>/Switch3' incorporates:
     *  Constant: '<S283>/Constant1'
     *  Constant: '<S283>/Constant3'
     *  UnaryMinus: '<S283>/Unary Minus'
     */
    if (rtb_Compare_a) {
      u0 = Steering_Relative_Cmd_Rate_Limit_Inc;
    } else {
      u0 = -Steering_Relative_Cmd_Rate_Limit_Dec;
    }

    /* End of Switch: '<S283>/Switch3' */
  }

  /* End of Switch: '<S283>/Switch5' */

  /* Product: '<S283>/Product' incorporates:
   *  Switch: '<S283>/Switch1'
   */
  rtb_Sin4 = u0 * rtb_Sum_jt;

  /* Switch: '<S292>/Init' incorporates:
   *  UnitDelay: '<S292>/FixPt Unit Delay1'
   *  UnitDelay: '<S292>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_c != 0) {
    rtb_thetay_i = rtb_rx_ht;
  } else {
    rtb_thetay_i = Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_p;
  }

  /* End of Switch: '<S292>/Init' */

  /* Sum: '<S290>/Sum1' */
  rtb_Sum1_p = rtb_rx_ht - rtb_thetay_i;

  /* Switch: '<S291>/Switch2' incorporates:
   *  RelationalOperator: '<S291>/LowerRelop1'
   */
  if (!(rtb_Sum1_p > rtb_Sin4)) {
    /* Switch: '<S283>/Switch2' incorporates:
     *  Constant: '<S283>/Constant1'
     *  Constant: '<S283>/Constant3'
     *  Switch: '<S283>/Switch4'
     *  UnaryMinus: '<S283>/Unary Minus1'
     */
    if (rtb_Gamepad_POV_Up) {
      u0 = Steering_Relative_Cmd_Rate_Limit_Dec;
    } else if (rtb_Compare_a) {
      /* Switch: '<S283>/Switch4' incorporates:
       *  Constant: '<S283>/Constant1'
       */
      u0 = Steering_Relative_Cmd_Rate_Limit_Dec;
    } else {
      u0 = -Steering_Relative_Cmd_Rate_Limit_Inc;
    }

    /* Product: '<S283>/Product2' incorporates:
     *  Switch: '<S283>/Switch2'
     */
    rtb_Product2_e = u0 * rtb_Sum_jt;

    /* Switch: '<S291>/Switch' incorporates:
     *  RelationalOperator: '<S291>/UpperRelop'
     */
    if (rtb_Sum1_p < rtb_Product2_e) {
      rtb_Sin4 = rtb_Product2_e;
    } else {
      rtb_Sin4 = rtb_Sum1_p;
    }

    /* End of Switch: '<S291>/Switch' */
  }

  /* End of Switch: '<S291>/Switch2' */

  /* Sum: '<S290>/Sum' */
  rtb_Sum_jt = rtb_Sin4 + rtb_thetay_i;

  /* Switch: '<S273>/Switch' */
  if (Code_Gen_Model_B.Is_Absolute_Steering_SPF) {
    /* Switch: '<S273>/Switch' */
    Code_Gen_Model_B.Steering_Localized_Cmd = rtb_Switch4;
  } else {
    /* Switch: '<S273>/Switch' */
    Code_Gen_Model_B.Steering_Localized_Cmd = rtb_Sum_jt;
  }

  /* End of Switch: '<S273>/Switch' */

  /* Outputs for Atomic SubSystem: '<S186>/Initialize Function' */
  /* Sum: '<S272>/Add' incorporates:
   *  Constant: '<S272>/Constant'
   *  Constant: '<S272>/Constant4'
   *  Constant: '<S272>/Constant5'
   *  Trigonometry: '<S272>/Atan2'
   */
  rtb_thetay_i = rt_atan2d_snf(Distance_FL_y, 0.187325) + 1.5707963267948966;

  /* End of Outputs for SubSystem: '<S186>/Initialize Function' */

  /* Fcn: '<S314>/r->x' incorporates:
   *  Fcn: '<S319>/r->x'
   *  Fcn: '<S324>/r->x'
   *  Fcn: '<S329>/r->x'
   */
  rtb_FeedForward = Code_Gen_Model_B.Translation_Speed_RL * cos
    (Code_Gen_Model_B.Translation_Steering_Cmd);

  /* Sum: '<S308>/Add' incorporates:
   *  Fcn: '<S314>/r->x'
   *  Fcn: '<S315>/r->x'
   */
  rtb_Akxhatkk1[0] = (Code_Gen_Model_B.Steering_Localized_Cmd * cos(rtb_thetay_i))
    + rtb_FeedForward;

  /* Fcn: '<S314>/theta->y' incorporates:
   *  Fcn: '<S319>/theta->y'
   *  Fcn: '<S324>/theta->y'
   *  Fcn: '<S329>/theta->y'
   */
  rtb_Add_oh = Code_Gen_Model_B.Translation_Speed_RL * sin
    (Code_Gen_Model_B.Translation_Steering_Cmd);

  /* Sum: '<S308>/Add' incorporates:
   *  Fcn: '<S314>/theta->y'
   *  Fcn: '<S315>/theta->y'
   */
  rtb_Akxhatkk1[1] = (Code_Gen_Model_B.Steering_Localized_Cmd * sin(rtb_thetay_i))
    + rtb_Add_oh;

  /* Fcn: '<S313>/x->r' */
  rtb_thetay_i = rt_hypotd_snf(rtb_Akxhatkk1[0], rtb_Akxhatkk1[1]);

  /* RelationalOperator: '<S316>/Compare' incorporates:
   *  Constant: '<S316>/Constant'
   */
  rtb_Compare_a = (rtb_thetay_i == 0.0);

  /* Switch: '<S312>/Switch' */
  if (!rtb_Compare_a) {
    /* Switch: '<S312>/Switch' incorporates:
     *  Fcn: '<S313>/x->theta'
     */
    Code_Gen_Model_B.FL_Desired_Module_Angle = rt_atan2d_snf(rtb_Akxhatkk1[1],
      rtb_Akxhatkk1[0]);
  }

  /* End of Switch: '<S312>/Switch' */

  /* Trigonometry: '<S200>/Cos4' incorporates:
   *  Switch: '<S189>/Angle_Switch'
   *  Trigonometry: '<S199>/Cos4'
   */
  rtb_Sum1_p = cos(Code_Gen_Model_B.FL_Desired_Module_Angle);

  /* Sum: '<S178>/Add1' incorporates:
   *  Constant: '<S178>/Constant3'
   *  Constant: '<S178>/Constant4'
   *  Gain: '<S18>/Revolutions to Radians'
   *  Inport: '<Root>/FrontLeft_Steer_Rev'
   *  Inport: '<Root>/FrontLeft_Turn_Offset'
   *  Math: '<S178>/Math Function'
   *  Sum: '<S178>/Add2'
   *  Sum: '<S18>/Add'
   */
  Code_Gen_Model_B.FL_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.FrontLeft_Steer_Rev -
       Code_Gen_Model_U.FrontLeft_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Trigonometry: '<S200>/Sin5' incorporates:
   *  UnaryMinus: '<S198>/Unary Minus'
   */
  rtb_rx_l = sin(-Code_Gen_Model_B.FL_Steer_Module_Angle);

  /* Trigonometry: '<S200>/Sin4' incorporates:
   *  Switch: '<S189>/Angle_Switch'
   *  Trigonometry: '<S199>/Sin4'
   */
  rtb_Product2_e = sin(Code_Gen_Model_B.FL_Desired_Module_Angle);

  /* Trigonometry: '<S200>/Cos5' incorporates:
   *  UnaryMinus: '<S198>/Unary Minus'
   */
  rtb_Sin4 = cos(-Code_Gen_Model_B.FL_Steer_Module_Angle);

  /* Sum: '<S200>/Subtract1' incorporates:
   *  Product: '<S200>/Product2'
   *  Product: '<S200>/Product3'
   *  Trigonometry: '<S200>/Cos4'
   *  Trigonometry: '<S200>/Sin4'
   */
  rtb_Subtract1 = (rtb_Sum1_p * rtb_rx_l) + (rtb_Product2_e * rtb_Sin4);

  /* Sum: '<S200>/Subtract' incorporates:
   *  Product: '<S200>/Product'
   *  Product: '<S200>/Product1'
   *  Trigonometry: '<S200>/Cos4'
   *  Trigonometry: '<S200>/Sin4'
   */
  rtb_rx_l = (rtb_Sum1_p * rtb_Sin4) - (rtb_Product2_e * rtb_rx_l);

  /* Math: '<S200>/Hypot' */
  rtb_Sin4 = rt_hypotd_snf(rtb_rx_l, rtb_Subtract1);

  /* Switch: '<S200>/Switch' incorporates:
   *  Constant: '<S200>/Constant'
   *  Constant: '<S200>/Constant1'
   *  Constant: '<S201>/Constant'
   *  Product: '<S200>/Divide'
   *  Product: '<S200>/Divide1'
   *  RelationalOperator: '<S201>/Compare'
   *  Switch: '<S200>/Switch1'
   */
  if (rtb_Sin4 > 1.0E-6) {
    rtb_rx_ht = rtb_Subtract1 / rtb_Sin4;
    rtb_Sin4 = rtb_rx_l / rtb_Sin4;
  } else {
    rtb_rx_ht = 0.0;
    rtb_Sin4 = 1.0;
  }

  /* End of Switch: '<S200>/Switch' */

  /* RelationalOperator: '<S197>/Compare' incorporates:
   *  Abs: '<S189>/Abs'
   *  Constant: '<S197>/Constant'
   *  Trigonometry: '<S200>/Atan1'
   */
  rtb_Gamepad_POV_Up = (fabs(rt_atan2d_snf(rtb_rx_ht, rtb_Sin4)) >
                        1.5707963267948966);

  /* Switch: '<S189>/Angle_Switch' incorporates:
   *  Trigonometry: '<S199>/Atan1'
   */
  if (rtb_Gamepad_POV_Up) {
    /* Sum: '<S199>/Subtract1' incorporates:
     *  Product: '<S199>/Product2'
     *  Product: '<S199>/Product3'
     */
    rtb_rx_l = (rtb_Sum1_p * Code_Gen_Model_ConstB.Sin5) + (rtb_Product2_e *
      Code_Gen_Model_ConstB.Cos5);

    /* Sum: '<S199>/Subtract' incorporates:
     *  Product: '<S199>/Product'
     *  Product: '<S199>/Product1'
     */
    rtb_Product2_e = (rtb_Sum1_p * Code_Gen_Model_ConstB.Cos5) - (rtb_Product2_e
      * Code_Gen_Model_ConstB.Sin5);

    /* Math: '<S199>/Hypot' */
    rtb_Sum1_p = rt_hypotd_snf(rtb_Product2_e, rtb_rx_l);

    /* Switch: '<S199>/Switch1' incorporates:
     *  Constant: '<S199>/Constant'
     *  Constant: '<S199>/Constant1'
     *  Constant: '<S202>/Constant'
     *  Product: '<S199>/Divide'
     *  Product: '<S199>/Divide1'
     *  RelationalOperator: '<S202>/Compare'
     *  Switch: '<S199>/Switch'
     */
    if (rtb_Sum1_p > 1.0E-6) {
      rtb_Product2_e /= rtb_Sum1_p;
      rtb_Sum1_p = rtb_rx_l / rtb_Sum1_p;
    } else {
      rtb_Product2_e = 1.0;
      rtb_Sum1_p = 0.0;
    }

    /* End of Switch: '<S199>/Switch1' */
    rtb_rx_ht = rt_atan2d_snf(rtb_Sum1_p, rtb_Product2_e);
  } else {
    rtb_rx_ht = Code_Gen_Model_B.FL_Desired_Module_Angle;
  }

  /* Sum: '<S191>/Sum' incorporates:
   *  Sum: '<S190>/Add'
   */
  rtb_rx_ht -= Code_Gen_Model_B.FL_Steer_Module_Angle;

  /* Sum: '<S204>/Add1' incorporates:
   *  Constant: '<S204>/Constant3'
   *  Constant: '<S204>/Constant4'
   *  Math: '<S204>/Math Function'
   *  Sum: '<S191>/Sum'
   *  Sum: '<S204>/Add2'
   */
  rtb_Sin4 = rt_modd_snf(rtb_rx_ht + 3.1415926535897931, 6.2831853071795862) -
    3.1415926535897931;

  /* Sum: '<S206>/Sum1' incorporates:
   *  Constant: '<S191>/Constant2'
   *  Product: '<S206>/Product'
   *  Sum: '<S206>/Sum'
   *  UnitDelay: '<S206>/Unit Delay1'
   */
  rtb_Sum1_p = ((rtb_Sin4 - Code_Gen_Model_DW.UnitDelay1_DSTATE_b) *
                Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_b;

  /* Product: '<S191>/Product' incorporates:
   *  Constant: '<S191>/Constant3'
   */
  rtb_Product2_e = rtb_Sum1_p * Steering_Motor_Control_D;

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
  u0 = rtb_Product2_e - Code_Gen_Model_DW.UD_DSTATE_b;

  /* Saturate: '<S191>/Saturation' */
  if (u0 > Steering_Motor_Control_D_UL) {
    u0 = Steering_Motor_Control_D_UL;
  } else if (u0 < Steering_Motor_Control_D_LL) {
    u0 = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S191>/Add' incorporates:
   *  Gain: '<S191>/Gain1'
   *  Saturate: '<S191>/Saturation'
   */
  rtb_Subtract1 = (Steering_Motor_Control_P * rtb_Sin4) + u0;

  /* Sum: '<S191>/Subtract' incorporates:
   *  Constant: '<S191>/Constant'
   */
  rtb_rx_l = 1.0 - rtb_Subtract1;

  /* Sum: '<S191>/Sum2' incorporates:
   *  Gain: '<S191>/Gain2'
   *  UnitDelay: '<S191>/Unit Delay'
   */
  rtb_Sin4 = (Steering_Motor_Control_I * rtb_Sin4) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_e;

  /* Switch: '<S207>/Switch2' incorporates:
   *  Constant: '<S191>/Constant'
   *  RelationalOperator: '<S207>/LowerRelop1'
   *  Sum: '<S191>/Subtract'
   */
  if (!(rtb_Sin4 > (1.0 - rtb_Subtract1))) {
    /* Sum: '<S191>/Subtract1' incorporates:
     *  Constant: '<S191>/Constant1'
     */
    rtb_rx_l = -1.0 - rtb_Subtract1;

    /* Switch: '<S207>/Switch' incorporates:
     *  Constant: '<S191>/Constant1'
     *  RelationalOperator: '<S207>/UpperRelop'
     *  Sum: '<S191>/Subtract1'
     */
    if (!(rtb_Sin4 < (-1.0 - rtb_Subtract1))) {
      rtb_rx_l = rtb_Sin4;
    }

    /* End of Switch: '<S207>/Switch' */
  }

  /* End of Switch: '<S207>/Switch2' */

  /* Saturate: '<S191>/Saturation1' */
  if (rtb_rx_l > Steering_Motor_Control_I_UL) {
    rtb_rx_l = Steering_Motor_Control_I_UL;
  } else if (rtb_rx_l < Steering_Motor_Control_I_LL) {
    rtb_rx_l = Steering_Motor_Control_I_LL;
  }

  /* End of Saturate: '<S191>/Saturation1' */

  /* Sum: '<S191>/Add1' */
  u0 = rtb_Subtract1 + rtb_rx_l;

  /* Saturate: '<S191>/Saturation2' */
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

  /* End of Saturate: '<S191>/Saturation2' */

  /* Switch: '<S312>/Switch1' */
  if (rtb_Compare_a) {
    /* Switch: '<S312>/Switch1' incorporates:
     *  Constant: '<S312>/Constant'
     */
    Code_Gen_Model_B.FL_Desired_Wheel_Speed_in = 1.0E-15;
  } else {
    /* Switch: '<S312>/Switch1' */
    Code_Gen_Model_B.FL_Desired_Wheel_Speed_in = rtb_thetay_i;
  }

  /* End of Switch: '<S312>/Switch1' */

  /* Sum: '<S309>/Add' incorporates:
   *  Fcn: '<S320>/r->x'
   *  Fcn: '<S320>/theta->y'
   */
  rtb_Akxhatkk1[0] = (Code_Gen_Model_B.Steering_Localized_Cmd * cos
                      (Code_Gen_Model_ConstB.FR_Tangent_Angle)) +
    rtb_FeedForward;
  rtb_Akxhatkk1[1] = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                      (Code_Gen_Model_ConstB.FR_Tangent_Angle)) + rtb_Add_oh;

  /* Fcn: '<S318>/x->r' */
  rtb_Sin4 = rt_hypotd_snf(rtb_Akxhatkk1[0], rtb_Akxhatkk1[1]);

  /* RelationalOperator: '<S321>/Compare' incorporates:
   *  Constant: '<S321>/Constant'
   */
  rtb_Compare_a = (rtb_Sin4 == 0.0);

  /* Switch: '<S317>/Switch1' */
  if (rtb_Compare_a) {
    /* Switch: '<S317>/Switch1' incorporates:
     *  Constant: '<S317>/Constant'
     */
    Code_Gen_Model_B.FR_Desired_Wheel_Speed_in = 1.0E-15;
  } else {
    /* Switch: '<S317>/Switch1' */
    Code_Gen_Model_B.FR_Desired_Wheel_Speed_in = rtb_Sin4;
  }

  /* End of Switch: '<S317>/Switch1' */

  /* Sum: '<S310>/Add' incorporates:
   *  Fcn: '<S325>/r->x'
   *  Fcn: '<S325>/theta->y'
   */
  rtb_Minus_n[0] = (Code_Gen_Model_B.Steering_Localized_Cmd * cos
                    (Code_Gen_Model_ConstB.BL_Tangent_Angle)) + rtb_FeedForward;
  rtb_Minus_n[1] = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                    (Code_Gen_Model_ConstB.BL_Tangent_Angle)) + rtb_Add_oh;

  /* Fcn: '<S323>/x->r' */
  rtb_rx_kl = rt_hypotd_snf(rtb_Minus_n[0], rtb_Minus_n[1]);

  /* RelationalOperator: '<S326>/Compare' incorporates:
   *  Constant: '<S326>/Constant'
   */
  rtb_Is_Absolute_Translation_g = (rtb_rx_kl == 0.0);

  /* Switch: '<S322>/Switch1' */
  if (rtb_Is_Absolute_Translation_g) {
    /* Switch: '<S322>/Switch1' incorporates:
     *  Constant: '<S322>/Constant'
     */
    Code_Gen_Model_B.BL_Desired_Wheel_Speed_in = 1.0E-15;
  } else {
    /* Switch: '<S322>/Switch1' */
    Code_Gen_Model_B.BL_Desired_Wheel_Speed_in = rtb_rx_kl;
  }

  /* End of Switch: '<S322>/Switch1' */

  /* Sum: '<S311>/Add' incorporates:
   *  Fcn: '<S330>/r->x'
   *  Fcn: '<S330>/theta->y'
   */
  rtb_Add2_k_idx_0 = (Code_Gen_Model_B.Steering_Localized_Cmd * cos
                      (Code_Gen_Model_ConstB.BR_Tangent_Angle)) +
    rtb_FeedForward;
  rtb_Add2_k_idx_1 = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                      (Code_Gen_Model_ConstB.BR_Tangent_Angle)) + rtb_Add_oh;

  /* Fcn: '<S328>/x->r' */
  rtb_thetay_l = rt_hypotd_snf(rtb_Add2_k_idx_0, rtb_Add2_k_idx_1);

  /* RelationalOperator: '<S331>/Compare' incorporates:
   *  Constant: '<S331>/Constant'
   */
  rtb_Is_Absolute_Steering = (rtb_thetay_l == 0.0);

  /* Switch: '<S327>/Switch1' */
  if (rtb_Is_Absolute_Steering) {
    /* Switch: '<S327>/Switch1' incorporates:
     *  Constant: '<S327>/Constant'
     */
    Code_Gen_Model_B.BR_Desired_Wheel_Speed_in = 1.0E-15;
  } else {
    /* Switch: '<S327>/Switch1' */
    Code_Gen_Model_B.BR_Desired_Wheel_Speed_in = rtb_thetay_l;
  }

  /* End of Switch: '<S327>/Switch1' */

  /* Product: '<S307>/Divide' incorporates:
   *  Abs: '<S307>/Abs'
   *  Abs: '<S307>/Abs1'
   *  Abs: '<S307>/Abs2'
   *  Abs: '<S307>/Abs3'
   *  Constant: '<S307>/Constant'
   *  MinMax: '<S307>/Max'
   */
  rtb_thetay_i = 5.389313721017964 / fmax(fmax(fmax(fmax(5.389313721017964,
    Code_Gen_Model_B.FL_Desired_Wheel_Speed_in),
    Code_Gen_Model_B.FR_Desired_Wheel_Speed_in),
    Code_Gen_Model_B.BL_Desired_Wheel_Speed_in),
    Code_Gen_Model_B.BR_Desired_Wheel_Speed_in);

  /* Product: '<S307>/Product' */
  Code_Gen_Model_B.FL_Desired_Wheel_Speed =
    Code_Gen_Model_B.FL_Desired_Wheel_Speed_in * rtb_thetay_i;

  /* Switch: '<S189>/Speed_Switch' incorporates:
   *  UnaryMinus: '<S189>/Unary Minus'
   */
  if (rtb_Gamepad_POV_Up) {
    u0 = -Code_Gen_Model_B.FL_Desired_Wheel_Speed;
  } else {
    u0 = Code_Gen_Model_B.FL_Desired_Wheel_Speed;
  }

  /* Product: '<S192>/Product2' incorporates:
   *  Constant: '<S192>/Constant'
   *  Switch: '<S189>/Speed_Switch'
   */
  rtb_thetay_l = u0 * 1150.4247703785388;

  /* Signum: '<S187>/Sign' */
  if (rtIsNaN(rtb_thetay_l)) {
    u0 = (rtNaN);
  } else if (rtb_thetay_l < 0.0) {
    u0 = -1.0;
  } else {
    u0 = (rtb_thetay_l > 0.0);
  }

  /* Signum: '<S187>/Sign1' incorporates:
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed)) {
    rtb_Add_du = (rtNaN);
  } else if (Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed < 0.0) {
    rtb_Add_du = -1.0;
  } else {
    rtb_Add_du = (Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed > 0.0);
  }

  /* Product: '<S182>/Product' incorporates:
   *  Abs: '<S187>/Abs'
   *  Abs: '<S190>/Abs'
   *  Constant: '<S193>/Constant'
   *  Constant: '<S203>/Constant3'
   *  Constant: '<S203>/Constant4'
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Speed'
   *  Logic: '<S187>/OR'
   *  Lookup_n-D: '<S190>/1-D Lookup Table'
   *  Math: '<S203>/Math Function'
   *  RelationalOperator: '<S187>/Equal1'
   *  RelationalOperator: '<S193>/Compare'
   *  Signum: '<S187>/Sign'
   *  Signum: '<S187>/Sign1'
   *  Sum: '<S203>/Add1'
   *  Sum: '<S203>/Add2'
   */
  rtb_thetay_l = (((real_T)((u0 == rtb_Add_du) || (fabs
    (Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_thetay_l) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_rx_ht + 1.5707963267948966, 3.1415926535897931) -
          1.5707963267948966), Code_Gen_Model_ConstP.pooled24,
     Code_Gen_Model_ConstP.pooled23, 1U);

  /* Gain: '<S188>/Gain' */
  rtb_FeedForward = Drive_Motor_Control_FF * rtb_thetay_l;

  /* Sum: '<S188>/Sum' incorporates:
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Speed'
   */
  rtb_thetay_l -= Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed;

  /* Sum: '<S195>/Sum1' incorporates:
   *  Constant: '<S188>/Constant2'
   *  Product: '<S195>/Product'
   *  Sum: '<S195>/Sum'
   *  UnitDelay: '<S195>/Unit Delay1'
   */
  rtb_Sin4 = ((rtb_thetay_l - Code_Gen_Model_DW.UnitDelay1_DSTATE_a) *
              Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_a;

  /* Product: '<S188>/Product' incorporates:
   *  Constant: '<S188>/Constant3'
   */
  rtb_Subtract1 = rtb_Sin4 * Drive_Motor_Control_D;

  /* Sum: '<S194>/Diff' incorporates:
   *  UnitDelay: '<S194>/UD'
   *
   * Block description for '<S194>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S194>/UD':
   *
   *  Store in Global RAM
   */
  u0 = rtb_Subtract1 - Code_Gen_Model_DW.UD_DSTATE_o;

  /* Saturate: '<S188>/Saturation' */
  if (u0 > Drive_Motor_Control_D_UL) {
    u0 = Drive_Motor_Control_D_UL;
  } else if (u0 < Drive_Motor_Control_D_LL) {
    u0 = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S188>/Add' incorporates:
   *  Gain: '<S188>/Gain1'
   *  Saturate: '<S188>/Saturation'
   */
  rtb_Add_oh = ((Drive_Motor_Control_P * rtb_thetay_l) + rtb_FeedForward) + u0;

  /* Sum: '<S188>/Subtract' incorporates:
   *  Constant: '<S188>/Constant'
   */
  rtb_rx_kl = 1.0 - rtb_Add_oh;

  /* Sum: '<S188>/Sum2' incorporates:
   *  Gain: '<S188>/Gain2'
   *  UnitDelay: '<S188>/Unit Delay'
   */
  rtb_FeedForward = (Drive_Motor_Control_I * rtb_thetay_l) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_f;

  /* Switch: '<S196>/Switch2' incorporates:
   *  Constant: '<S188>/Constant'
   *  RelationalOperator: '<S196>/LowerRelop1'
   *  Sum: '<S188>/Subtract'
   */
  if (!(rtb_FeedForward > (1.0 - rtb_Add_oh))) {
    /* Switch: '<S196>/Switch' incorporates:
     *  Constant: '<S188>/Constant1'
     *  RelationalOperator: '<S196>/UpperRelop'
     *  Sum: '<S188>/Subtract1'
     */
    if (rtb_FeedForward < (-1.0 - rtb_Add_oh)) {
      rtb_rx_kl = -1.0 - rtb_Add_oh;
    } else {
      rtb_rx_kl = rtb_FeedForward;
    }

    /* End of Switch: '<S196>/Switch' */
  }

  /* End of Switch: '<S196>/Switch2' */

  /* Saturate: '<S188>/Saturation1' */
  if (rtb_rx_kl > Drive_Motor_Control_I_UL) {
    rtb_FeedForward = Drive_Motor_Control_I_UL;
  } else if (rtb_rx_kl < Drive_Motor_Control_I_LL) {
    rtb_FeedForward = Drive_Motor_Control_I_LL;
  } else {
    rtb_FeedForward = rtb_rx_kl;
  }

  /* End of Saturate: '<S188>/Saturation1' */

  /* Sum: '<S188>/Add1' */
  u0 = rtb_Add_oh + rtb_FeedForward;

  /* Saturate: '<S188>/Saturation2' */
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

  /* End of Saturate: '<S188>/Saturation2' */

  /* Switch: '<S317>/Switch' */
  if (!rtb_Compare_a) {
    /* Switch: '<S317>/Switch' incorporates:
     *  Fcn: '<S318>/x->theta'
     */
    Code_Gen_Model_B.FR_Desired_Module_Angle = rt_atan2d_snf(rtb_Akxhatkk1[1],
      rtb_Akxhatkk1[0]);
  }

  /* End of Switch: '<S317>/Switch' */

  /* Trigonometry: '<S221>/Cos4' incorporates:
   *  Switch: '<S210>/Angle_Switch'
   *  Trigonometry: '<S220>/Cos4'
   */
  rtb_Subtract_e = cos(Code_Gen_Model_B.FR_Desired_Module_Angle);

  /* Sum: '<S179>/Add1' incorporates:
   *  Constant: '<S179>/Constant3'
   *  Constant: '<S179>/Constant4'
   *  Gain: '<S18>/Revolutions to Radians1'
   *  Inport: '<Root>/FrontRight_Steer_Rev'
   *  Inport: '<Root>/FrontRight_Turn_Offset'
   *  Math: '<S179>/Math Function'
   *  Sum: '<S179>/Add2'
   *  Sum: '<S18>/Add1'
   */
  Code_Gen_Model_B.FR_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.FrontRight_Steer_Rev -
       Code_Gen_Model_U.FrontRight_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Trigonometry: '<S221>/Sin5' incorporates:
   *  UnaryMinus: '<S219>/Unary Minus'
   */
  rtb_rx_ht = sin(-Code_Gen_Model_B.FR_Steer_Module_Angle);

  /* Trigonometry: '<S221>/Sin4' incorporates:
   *  Switch: '<S210>/Angle_Switch'
   *  Trigonometry: '<S220>/Sin4'
   */
  rtb_Product_d = sin(Code_Gen_Model_B.FR_Desired_Module_Angle);

  /* Trigonometry: '<S221>/Cos5' incorporates:
   *  UnaryMinus: '<S219>/Unary Minus'
   */
  rtb_rx_kl = cos(-Code_Gen_Model_B.FR_Steer_Module_Angle);

  /* Sum: '<S221>/Subtract1' incorporates:
   *  Product: '<S221>/Product2'
   *  Product: '<S221>/Product3'
   *  Trigonometry: '<S221>/Cos4'
   *  Trigonometry: '<S221>/Sin4'
   */
  rtb_Add_oh = (rtb_Subtract_e * rtb_rx_ht) + (rtb_Product_d * rtb_rx_kl);

  /* Sum: '<S221>/Subtract' incorporates:
   *  Product: '<S221>/Product'
   *  Product: '<S221>/Product1'
   *  Trigonometry: '<S221>/Cos4'
   *  Trigonometry: '<S221>/Sin4'
   */
  rtb_Subtract1_of = (rtb_Subtract_e * rtb_rx_kl) - (rtb_Product_d * rtb_rx_ht);

  /* Math: '<S221>/Hypot' */
  rtb_Hypot_bl = rt_hypotd_snf(rtb_Subtract1_of, rtb_Add_oh);

  /* Switch: '<S221>/Switch' incorporates:
   *  Constant: '<S221>/Constant'
   *  Constant: '<S221>/Constant1'
   *  Constant: '<S222>/Constant'
   *  Product: '<S221>/Divide'
   *  Product: '<S221>/Divide1'
   *  RelationalOperator: '<S222>/Compare'
   *  Switch: '<S221>/Switch1'
   */
  if (rtb_Hypot_bl > 1.0E-6) {
    rtb_thetay_l = rtb_Add_oh / rtb_Hypot_bl;
    rtb_rx_kl = rtb_Subtract1_of / rtb_Hypot_bl;
  } else {
    rtb_thetay_l = 0.0;
    rtb_rx_kl = 1.0;
  }

  /* End of Switch: '<S221>/Switch' */

  /* RelationalOperator: '<S218>/Compare' incorporates:
   *  Abs: '<S210>/Abs'
   *  Constant: '<S218>/Constant'
   *  Trigonometry: '<S221>/Atan1'
   */
  rtb_Gamepad_POV_Up = (fabs(rt_atan2d_snf(rtb_thetay_l, rtb_rx_kl)) >
                        1.5707963267948966);

  /* Switch: '<S210>/Angle_Switch' incorporates:
   *  Trigonometry: '<S220>/Atan1'
   */
  if (rtb_Gamepad_POV_Up) {
    /* Sum: '<S220>/Subtract1' incorporates:
     *  Product: '<S220>/Product2'
     *  Product: '<S220>/Product3'
     */
    rtb_Add_oh = (rtb_Subtract_e * Code_Gen_Model_ConstB.Sin5_m) +
      (rtb_Product_d * Code_Gen_Model_ConstB.Cos5_g);

    /* Sum: '<S220>/Subtract' incorporates:
     *  Product: '<S220>/Product'
     *  Product: '<S220>/Product1'
     */
    rtb_Hypot_bl = (rtb_Subtract_e * Code_Gen_Model_ConstB.Cos5_g) -
      (rtb_Product_d * Code_Gen_Model_ConstB.Sin5_m);

    /* Math: '<S220>/Hypot' */
    rtb_Subtract1_of = rt_hypotd_snf(rtb_Hypot_bl, rtb_Add_oh);

    /* Switch: '<S220>/Switch1' incorporates:
     *  Constant: '<S220>/Constant'
     *  Constant: '<S220>/Constant1'
     *  Constant: '<S223>/Constant'
     *  Product: '<S220>/Divide'
     *  Product: '<S220>/Divide1'
     *  RelationalOperator: '<S223>/Compare'
     *  Switch: '<S220>/Switch'
     */
    if (rtb_Subtract1_of > 1.0E-6) {
      rtb_Hypot_bl /= rtb_Subtract1_of;
      rtb_Add_oh /= rtb_Subtract1_of;
    } else {
      rtb_Hypot_bl = 1.0;
      rtb_Add_oh = 0.0;
    }

    /* End of Switch: '<S220>/Switch1' */
    rtb_thetay_l = rt_atan2d_snf(rtb_Add_oh, rtb_Hypot_bl);
  } else {
    rtb_thetay_l = Code_Gen_Model_B.FR_Desired_Module_Angle;
  }

  /* Sum: '<S212>/Sum' incorporates:
   *  Sum: '<S211>/Add'
   */
  rtb_Product_j4 = rtb_thetay_l - Code_Gen_Model_B.FR_Steer_Module_Angle;

  /* Sum: '<S225>/Add1' incorporates:
   *  Constant: '<S225>/Constant3'
   *  Constant: '<S225>/Constant4'
   *  Math: '<S225>/Math Function'
   *  Sum: '<S212>/Sum'
   *  Sum: '<S225>/Add2'
   */
  rtb_rx_kl = rt_modd_snf(rtb_Product_j4 + 3.1415926535897931,
    6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S227>/Sum1' incorporates:
   *  Constant: '<S212>/Constant2'
   *  Product: '<S227>/Product'
   *  Sum: '<S227>/Sum'
   *  UnitDelay: '<S227>/Unit Delay1'
   */
  rtb_Add_oh = ((rtb_rx_kl - Code_Gen_Model_DW.UnitDelay1_DSTATE_n) *
                Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_n;

  /* Product: '<S212>/Product' incorporates:
   *  Constant: '<S212>/Constant3'
   */
  rtb_Subtract1_of = rtb_Add_oh * Steering_Motor_Control_D;

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
  u0 = rtb_Subtract1_of - Code_Gen_Model_DW.UD_DSTATE_i;

  /* Saturate: '<S212>/Saturation' */
  if (u0 > Steering_Motor_Control_D_UL) {
    u0 = Steering_Motor_Control_D_UL;
  } else if (u0 < Steering_Motor_Control_D_LL) {
    u0 = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S212>/Add' incorporates:
   *  Gain: '<S212>/Gain1'
   *  Saturate: '<S212>/Saturation'
   */
  rtb_Add_i = (Steering_Motor_Control_P * rtb_rx_kl) + u0;

  /* Sum: '<S212>/Subtract' incorporates:
   *  Constant: '<S212>/Constant'
   */
  rtb_rx_ht = 1.0 - rtb_Add_i;

  /* Sum: '<S212>/Sum2' incorporates:
   *  Gain: '<S212>/Gain2'
   *  UnitDelay: '<S212>/Unit Delay'
   */
  rtb_Hypot_bl = (Steering_Motor_Control_I * rtb_rx_kl) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_dt;

  /* Switch: '<S228>/Switch2' incorporates:
   *  Constant: '<S212>/Constant'
   *  RelationalOperator: '<S228>/LowerRelop1'
   *  Sum: '<S212>/Subtract'
   */
  if (!(rtb_Hypot_bl > (1.0 - rtb_Add_i))) {
    /* Switch: '<S228>/Switch' incorporates:
     *  Constant: '<S212>/Constant1'
     *  RelationalOperator: '<S228>/UpperRelop'
     *  Sum: '<S212>/Subtract1'
     */
    if (rtb_Hypot_bl < (-1.0 - rtb_Add_i)) {
      rtb_rx_ht = -1.0 - rtb_Add_i;
    } else {
      rtb_rx_ht = rtb_Hypot_bl;
    }

    /* End of Switch: '<S228>/Switch' */
  }

  /* End of Switch: '<S228>/Switch2' */

  /* Saturate: '<S212>/Saturation1' */
  if (rtb_rx_ht > Steering_Motor_Control_I_UL) {
    rtb_Hypot_bl = Steering_Motor_Control_I_UL;
  } else if (rtb_rx_ht < Steering_Motor_Control_I_LL) {
    rtb_Hypot_bl = Steering_Motor_Control_I_LL;
  } else {
    rtb_Hypot_bl = rtb_rx_ht;
  }

  /* End of Saturate: '<S212>/Saturation1' */

  /* Sum: '<S212>/Add1' */
  u0 = rtb_Add_i + rtb_Hypot_bl;

  /* Saturate: '<S212>/Saturation2' */
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

  /* End of Saturate: '<S212>/Saturation2' */

  /* Product: '<S307>/Product1' */
  Code_Gen_Model_B.FR_Desired_Wheel_Speed =
    Code_Gen_Model_B.FR_Desired_Wheel_Speed_in * rtb_thetay_i;

  /* Switch: '<S210>/Speed_Switch' incorporates:
   *  UnaryMinus: '<S210>/Unary Minus'
   */
  if (rtb_Gamepad_POV_Up) {
    u0 = -Code_Gen_Model_B.FR_Desired_Wheel_Speed;
  } else {
    u0 = Code_Gen_Model_B.FR_Desired_Wheel_Speed;
  }

  /* Product: '<S213>/Product2' incorporates:
   *  Constant: '<S213>/Constant'
   *  Switch: '<S210>/Speed_Switch'
   */
  rtb_rx_kl = u0 * 1150.4247703785388;

  /* Signum: '<S208>/Sign' */
  if (rtIsNaN(rtb_rx_kl)) {
    u0 = (rtNaN);
  } else if (rtb_rx_kl < 0.0) {
    u0 = -1.0;
  } else {
    u0 = (rtb_rx_kl > 0.0);
  }

  /* Signum: '<S208>/Sign1' incorporates:
   *  Inport: '<Root>/FrontRight_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.FrontRight_Drive_Motor_Speed)) {
    rtb_Add_du = (rtNaN);
  } else if (Code_Gen_Model_U.FrontRight_Drive_Motor_Speed < 0.0) {
    rtb_Add_du = -1.0;
  } else {
    rtb_Add_du = (Code_Gen_Model_U.FrontRight_Drive_Motor_Speed > 0.0);
  }

  /* Product: '<S183>/Product' incorporates:
   *  Abs: '<S208>/Abs'
   *  Abs: '<S211>/Abs'
   *  Constant: '<S214>/Constant'
   *  Constant: '<S224>/Constant3'
   *  Constant: '<S224>/Constant4'
   *  Inport: '<Root>/FrontRight_Drive_Motor_Speed'
   *  Logic: '<S208>/OR'
   *  Lookup_n-D: '<S211>/1-D Lookup Table'
   *  Math: '<S224>/Math Function'
   *  RelationalOperator: '<S208>/Equal1'
   *  RelationalOperator: '<S214>/Compare'
   *  Signum: '<S208>/Sign'
   *  Signum: '<S208>/Sign1'
   *  Sum: '<S224>/Add1'
   *  Sum: '<S224>/Add2'
   */
  rtb_rx_kl = (((real_T)((u0 == rtb_Add_du) || (fabs
    (Code_Gen_Model_U.FrontRight_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_rx_kl) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_Product_j4 + 1.5707963267948966, 3.1415926535897931) -
          1.5707963267948966), Code_Gen_Model_ConstP.pooled24,
     Code_Gen_Model_ConstP.pooled23, 1U);

  /* Gain: '<S209>/Gain' */
  rtb_FeedForward_n = Drive_Motor_Control_FF * rtb_rx_kl;

  /* Sum: '<S209>/Sum' incorporates:
   *  Inport: '<Root>/FrontRight_Drive_Motor_Speed'
   */
  rtb_rx_kl -= Code_Gen_Model_U.FrontRight_Drive_Motor_Speed;

  /* Sum: '<S216>/Sum1' incorporates:
   *  Constant: '<S209>/Constant2'
   *  Product: '<S216>/Product'
   *  Sum: '<S216>/Sum'
   *  UnitDelay: '<S216>/Unit Delay1'
   */
  rtb_Add_i = ((rtb_rx_kl - Code_Gen_Model_DW.UnitDelay1_DSTATE_b1) *
               Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_b1;

  /* Product: '<S209>/Product' incorporates:
   *  Constant: '<S209>/Constant3'
   */
  rtb_Subtract1_a = rtb_Add_i * Drive_Motor_Control_D;

  /* Sum: '<S215>/Diff' incorporates:
   *  UnitDelay: '<S215>/UD'
   *
   * Block description for '<S215>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S215>/UD':
   *
   *  Store in Global RAM
   */
  u0 = rtb_Subtract1_a - Code_Gen_Model_DW.UD_DSTATE_e;

  /* Saturate: '<S209>/Saturation' */
  if (u0 > Drive_Motor_Control_D_UL) {
    u0 = Drive_Motor_Control_D_UL;
  } else if (u0 < Drive_Motor_Control_D_LL) {
    u0 = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S209>/Add' incorporates:
   *  Gain: '<S209>/Gain1'
   *  Saturate: '<S209>/Saturation'
   */
  rtb_Add_o2 = ((Drive_Motor_Control_P * rtb_rx_kl) + rtb_FeedForward_n) + u0;

  /* Sum: '<S209>/Subtract' incorporates:
   *  Constant: '<S209>/Constant'
   */
  rtb_thetay_l = 1.0 - rtb_Add_o2;

  /* Sum: '<S209>/Sum2' incorporates:
   *  Gain: '<S209>/Gain2'
   *  UnitDelay: '<S209>/Unit Delay'
   */
  rtb_FeedForward_n = (Drive_Motor_Control_I * rtb_rx_kl) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_em;

  /* Switch: '<S217>/Switch2' incorporates:
   *  Constant: '<S209>/Constant'
   *  RelationalOperator: '<S217>/LowerRelop1'
   *  Sum: '<S209>/Subtract'
   */
  if (!(rtb_FeedForward_n > (1.0 - rtb_Add_o2))) {
    /* Switch: '<S217>/Switch' incorporates:
     *  Constant: '<S209>/Constant1'
     *  RelationalOperator: '<S217>/UpperRelop'
     *  Sum: '<S209>/Subtract1'
     */
    if (rtb_FeedForward_n < (-1.0 - rtb_Add_o2)) {
      rtb_thetay_l = -1.0 - rtb_Add_o2;
    } else {
      rtb_thetay_l = rtb_FeedForward_n;
    }

    /* End of Switch: '<S217>/Switch' */
  }

  /* End of Switch: '<S217>/Switch2' */

  /* Saturate: '<S209>/Saturation1' */
  if (rtb_thetay_l > Drive_Motor_Control_I_UL) {
    rtb_FeedForward_n = Drive_Motor_Control_I_UL;
  } else if (rtb_thetay_l < Drive_Motor_Control_I_LL) {
    rtb_FeedForward_n = Drive_Motor_Control_I_LL;
  } else {
    rtb_FeedForward_n = rtb_thetay_l;
  }

  /* End of Saturate: '<S209>/Saturation1' */

  /* Sum: '<S209>/Add1' */
  u0 = rtb_Add_o2 + rtb_FeedForward_n;

  /* Saturate: '<S209>/Saturation2' */
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

  /* End of Saturate: '<S209>/Saturation2' */

  /* Switch: '<S322>/Switch' */
  if (!rtb_Is_Absolute_Translation_g) {
    /* Switch: '<S322>/Switch' incorporates:
     *  Fcn: '<S323>/x->theta'
     */
    Code_Gen_Model_B.BL_Desired_Module_Angle = rt_atan2d_snf(rtb_Minus_n[1],
      rtb_Minus_n[0]);
  }

  /* End of Switch: '<S322>/Switch' */

  /* Trigonometry: '<S242>/Cos4' incorporates:
   *  Switch: '<S231>/Angle_Switch'
   *  Trigonometry: '<S241>/Cos4'
   */
  rtb_Subtract_e = cos(Code_Gen_Model_B.BL_Desired_Module_Angle);

  /* Sum: '<S180>/Add1' incorporates:
   *  Constant: '<S180>/Constant3'
   *  Constant: '<S180>/Constant4'
   *  Gain: '<S18>/Revolutions to Radians2'
   *  Inport: '<Root>/BackLeft_Steer_Rev'
   *  Inport: '<Root>/BackLeft_Turn_Offset'
   *  Math: '<S180>/Math Function'
   *  Sum: '<S180>/Add2'
   *  Sum: '<S18>/Add2'
   */
  Code_Gen_Model_B.BL_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.BackLeft_Steer_Rev -
       Code_Gen_Model_U.BackLeft_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Trigonometry: '<S242>/Sin5' incorporates:
   *  UnaryMinus: '<S240>/Unary Minus'
   */
  rtb_rx_ht = sin(-Code_Gen_Model_B.BL_Steer_Module_Angle);

  /* Trigonometry: '<S242>/Sin4' incorporates:
   *  Switch: '<S231>/Angle_Switch'
   *  Trigonometry: '<S241>/Sin4'
   */
  rtb_Product_d = sin(Code_Gen_Model_B.BL_Desired_Module_Angle);

  /* Trigonometry: '<S242>/Cos5' incorporates:
   *  UnaryMinus: '<S240>/Unary Minus'
   */
  rtb_rx_kl = cos(-Code_Gen_Model_B.BL_Steer_Module_Angle);

  /* Sum: '<S242>/Subtract1' incorporates:
   *  Product: '<S242>/Product2'
   *  Product: '<S242>/Product3'
   *  Trigonometry: '<S242>/Cos4'
   *  Trigonometry: '<S242>/Sin4'
   */
  rtb_Add_o2 = (rtb_Subtract_e * rtb_rx_ht) + (rtb_Product_d * rtb_rx_kl);

  /* Sum: '<S242>/Subtract' incorporates:
   *  Product: '<S242>/Product'
   *  Product: '<S242>/Product1'
   *  Trigonometry: '<S242>/Cos4'
   *  Trigonometry: '<S242>/Sin4'
   */
  rtb_Subtract1_do = (rtb_Subtract_e * rtb_rx_kl) - (rtb_Product_d * rtb_rx_ht);

  /* Math: '<S242>/Hypot' */
  rtb_Hypot_d = rt_hypotd_snf(rtb_Subtract1_do, rtb_Add_o2);

  /* Switch: '<S242>/Switch' incorporates:
   *  Constant: '<S242>/Constant'
   *  Constant: '<S242>/Constant1'
   *  Constant: '<S243>/Constant'
   *  Product: '<S242>/Divide'
   *  Product: '<S242>/Divide1'
   *  RelationalOperator: '<S243>/Compare'
   *  Switch: '<S242>/Switch1'
   */
  if (rtb_Hypot_d > 1.0E-6) {
    rtb_thetay_l = rtb_Add_o2 / rtb_Hypot_d;
    rtb_rx_kl = rtb_Subtract1_do / rtb_Hypot_d;
  } else {
    rtb_thetay_l = 0.0;
    rtb_rx_kl = 1.0;
  }

  /* End of Switch: '<S242>/Switch' */

  /* RelationalOperator: '<S239>/Compare' incorporates:
   *  Abs: '<S231>/Abs'
   *  Constant: '<S239>/Constant'
   *  Trigonometry: '<S242>/Atan1'
   */
  rtb_Is_Absolute_Translation_g = (fabs(rt_atan2d_snf(rtb_thetay_l, rtb_rx_kl)) >
    1.5707963267948966);

  /* Switch: '<S231>/Angle_Switch' incorporates:
   *  Trigonometry: '<S241>/Atan1'
   */
  if (rtb_Is_Absolute_Translation_g) {
    /* Sum: '<S241>/Subtract1' incorporates:
     *  Product: '<S241>/Product2'
     *  Product: '<S241>/Product3'
     */
    rtb_Add_o2 = (rtb_Subtract_e * Code_Gen_Model_ConstB.Sin5_e) +
      (rtb_Product_d * Code_Gen_Model_ConstB.Cos5_i);

    /* Sum: '<S241>/Subtract' incorporates:
     *  Product: '<S241>/Product'
     *  Product: '<S241>/Product1'
     */
    rtb_Hypot_d = (rtb_Subtract_e * Code_Gen_Model_ConstB.Cos5_i) -
      (rtb_Product_d * Code_Gen_Model_ConstB.Sin5_e);

    /* Math: '<S241>/Hypot' */
    rtb_Subtract1_do = rt_hypotd_snf(rtb_Hypot_d, rtb_Add_o2);

    /* Switch: '<S241>/Switch1' incorporates:
     *  Constant: '<S241>/Constant'
     *  Constant: '<S241>/Constant1'
     *  Constant: '<S244>/Constant'
     *  Product: '<S241>/Divide'
     *  Product: '<S241>/Divide1'
     *  RelationalOperator: '<S244>/Compare'
     *  Switch: '<S241>/Switch'
     */
    if (rtb_Subtract1_do > 1.0E-6) {
      rtb_Hypot_d /= rtb_Subtract1_do;
      rtb_Add_o2 /= rtb_Subtract1_do;
    } else {
      rtb_Hypot_d = 1.0;
      rtb_Add_o2 = 0.0;
    }

    /* End of Switch: '<S241>/Switch1' */
    rtb_thetay_l = rt_atan2d_snf(rtb_Add_o2, rtb_Hypot_d);
  } else {
    rtb_thetay_l = Code_Gen_Model_B.BL_Desired_Module_Angle;
  }

  /* Sum: '<S233>/Sum' incorporates:
   *  Sum: '<S232>/Add'
   */
  rtb_Product_j4 = rtb_thetay_l - Code_Gen_Model_B.BL_Steer_Module_Angle;

  /* Sum: '<S246>/Add1' incorporates:
   *  Constant: '<S246>/Constant3'
   *  Constant: '<S246>/Constant4'
   *  Math: '<S246>/Math Function'
   *  Sum: '<S233>/Sum'
   *  Sum: '<S246>/Add2'
   */
  rtb_rx_kl = rt_modd_snf(rtb_Product_j4 + 3.1415926535897931,
    6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S248>/Sum1' incorporates:
   *  Constant: '<S233>/Constant2'
   *  Product: '<S248>/Product'
   *  Sum: '<S248>/Sum'
   *  UnitDelay: '<S248>/Unit Delay1'
   */
  rtb_Add_o2 = ((rtb_rx_kl - Code_Gen_Model_DW.UnitDelay1_DSTATE_nw) *
                Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_nw;

  /* Product: '<S233>/Product' incorporates:
   *  Constant: '<S233>/Constant3'
   */
  rtb_Subtract1_do = rtb_Add_o2 * Steering_Motor_Control_D;

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
  u0 = rtb_Subtract1_do - Code_Gen_Model_DW.UD_DSTATE_k;

  /* Saturate: '<S233>/Saturation' */
  if (u0 > Steering_Motor_Control_D_UL) {
    u0 = Steering_Motor_Control_D_UL;
  } else if (u0 < Steering_Motor_Control_D_LL) {
    u0 = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S233>/Add' incorporates:
   *  Gain: '<S233>/Gain1'
   *  Saturate: '<S233>/Saturation'
   */
  rtb_Add_gj = (Steering_Motor_Control_P * rtb_rx_kl) + u0;

  /* Sum: '<S233>/Subtract' incorporates:
   *  Constant: '<S233>/Constant'
   */
  rtb_rx_ht = 1.0 - rtb_Add_gj;

  /* Sum: '<S233>/Sum2' incorporates:
   *  Gain: '<S233>/Gain2'
   *  UnitDelay: '<S233>/Unit Delay'
   */
  rtb_Hypot_d = (Steering_Motor_Control_I * rtb_rx_kl) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_k;

  /* Switch: '<S249>/Switch2' incorporates:
   *  Constant: '<S233>/Constant'
   *  RelationalOperator: '<S249>/LowerRelop1'
   *  Sum: '<S233>/Subtract'
   */
  if (!(rtb_Hypot_d > (1.0 - rtb_Add_gj))) {
    /* Switch: '<S249>/Switch' incorporates:
     *  Constant: '<S233>/Constant1'
     *  RelationalOperator: '<S249>/UpperRelop'
     *  Sum: '<S233>/Subtract1'
     */
    if (rtb_Hypot_d < (-1.0 - rtb_Add_gj)) {
      rtb_rx_ht = -1.0 - rtb_Add_gj;
    } else {
      rtb_rx_ht = rtb_Hypot_d;
    }

    /* End of Switch: '<S249>/Switch' */
  }

  /* End of Switch: '<S249>/Switch2' */

  /* Saturate: '<S233>/Saturation1' */
  if (rtb_rx_ht > Steering_Motor_Control_I_UL) {
    rtb_Hypot_d = Steering_Motor_Control_I_UL;
  } else if (rtb_rx_ht < Steering_Motor_Control_I_LL) {
    rtb_Hypot_d = Steering_Motor_Control_I_LL;
  } else {
    rtb_Hypot_d = rtb_rx_ht;
  }

  /* End of Saturate: '<S233>/Saturation1' */

  /* Sum: '<S233>/Add1' */
  u0 = rtb_Add_gj + rtb_Hypot_d;

  /* Saturate: '<S233>/Saturation2' */
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

  /* End of Saturate: '<S233>/Saturation2' */

  /* Product: '<S307>/Product2' */
  Code_Gen_Model_B.BL_Desired_Wheel_Speed =
    Code_Gen_Model_B.BL_Desired_Wheel_Speed_in * rtb_thetay_i;

  /* Switch: '<S231>/Speed_Switch' incorporates:
   *  UnaryMinus: '<S231>/Unary Minus'
   */
  if (rtb_Is_Absolute_Translation_g) {
    u0 = -Code_Gen_Model_B.BL_Desired_Wheel_Speed;
  } else {
    u0 = Code_Gen_Model_B.BL_Desired_Wheel_Speed;
  }

  /* Product: '<S234>/Product2' incorporates:
   *  Constant: '<S234>/Constant'
   *  Switch: '<S231>/Speed_Switch'
   */
  rtb_rx_kl = u0 * 1150.4247703785388;

  /* Signum: '<S229>/Sign' */
  if (rtIsNaN(rtb_rx_kl)) {
    u0 = (rtNaN);
  } else if (rtb_rx_kl < 0.0) {
    u0 = -1.0;
  } else {
    u0 = (rtb_rx_kl > 0.0);
  }

  /* Signum: '<S229>/Sign1' incorporates:
   *  Inport: '<Root>/BackLeft_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.BackLeft_Drive_Motor_Speed)) {
    rtb_Add_du = (rtNaN);
  } else if (Code_Gen_Model_U.BackLeft_Drive_Motor_Speed < 0.0) {
    rtb_Add_du = -1.0;
  } else {
    rtb_Add_du = (Code_Gen_Model_U.BackLeft_Drive_Motor_Speed > 0.0);
  }

  /* Product: '<S184>/Product' incorporates:
   *  Abs: '<S229>/Abs'
   *  Abs: '<S232>/Abs'
   *  Constant: '<S235>/Constant'
   *  Constant: '<S245>/Constant3'
   *  Constant: '<S245>/Constant4'
   *  Inport: '<Root>/BackLeft_Drive_Motor_Speed'
   *  Logic: '<S229>/OR'
   *  Lookup_n-D: '<S232>/1-D Lookup Table'
   *  Math: '<S245>/Math Function'
   *  RelationalOperator: '<S229>/Equal1'
   *  RelationalOperator: '<S235>/Compare'
   *  Signum: '<S229>/Sign'
   *  Signum: '<S229>/Sign1'
   *  Sum: '<S245>/Add1'
   *  Sum: '<S245>/Add2'
   */
  rtb_rx_kl = (((real_T)((u0 == rtb_Add_du) || (fabs
    (Code_Gen_Model_U.BackLeft_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_rx_kl) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_Product_j4 + 1.5707963267948966, 3.1415926535897931) -
          1.5707963267948966), Code_Gen_Model_ConstP.pooled24,
     Code_Gen_Model_ConstP.pooled23, 1U);

  /* Gain: '<S230>/Gain' */
  rtb_FeedForward_a = Drive_Motor_Control_FF * rtb_rx_kl;

  /* Sum: '<S230>/Sum' incorporates:
   *  Inport: '<Root>/BackLeft_Drive_Motor_Speed'
   */
  rtb_rx_kl -= Code_Gen_Model_U.BackLeft_Drive_Motor_Speed;

  /* Sum: '<S237>/Sum1' incorporates:
   *  Constant: '<S230>/Constant2'
   *  Product: '<S237>/Product'
   *  Sum: '<S237>/Sum'
   *  UnitDelay: '<S237>/Unit Delay1'
   */
  rtb_Add_gj = ((rtb_rx_kl - Code_Gen_Model_DW.UnitDelay1_DSTATE_f) *
                Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_f;

  /* Product: '<S230>/Product' incorporates:
   *  Constant: '<S230>/Constant3'
   */
  rtb_Subtract1_f = rtb_Add_gj * Drive_Motor_Control_D;

  /* Sum: '<S236>/Diff' incorporates:
   *  UnitDelay: '<S236>/UD'
   *
   * Block description for '<S236>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S236>/UD':
   *
   *  Store in Global RAM
   */
  u0 = rtb_Subtract1_f - Code_Gen_Model_DW.UD_DSTATE_l;

  /* Saturate: '<S230>/Saturation' */
  if (u0 > Drive_Motor_Control_D_UL) {
    u0 = Drive_Motor_Control_D_UL;
  } else if (u0 < Drive_Motor_Control_D_LL) {
    u0 = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S230>/Add' incorporates:
   *  Gain: '<S230>/Gain1'
   *  Saturate: '<S230>/Saturation'
   */
  rtb_rx_ht = ((Drive_Motor_Control_P * rtb_rx_kl) + rtb_FeedForward_a) + u0;

  /* Sum: '<S230>/Subtract' incorporates:
   *  Constant: '<S230>/Constant'
   */
  rtb_thetay_l = 1.0 - rtb_rx_ht;

  /* Sum: '<S230>/Sum2' incorporates:
   *  Gain: '<S230>/Gain2'
   *  UnitDelay: '<S230>/Unit Delay'
   */
  rtb_FeedForward_a = (Drive_Motor_Control_I * rtb_rx_kl) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_gp;

  /* Switch: '<S238>/Switch2' incorporates:
   *  Constant: '<S230>/Constant'
   *  RelationalOperator: '<S238>/LowerRelop1'
   *  Sum: '<S230>/Subtract'
   */
  if (!(rtb_FeedForward_a > (1.0 - rtb_rx_ht))) {
    /* Sum: '<S230>/Subtract1' incorporates:
     *  Constant: '<S230>/Constant1'
     */
    rtb_thetay_l = -1.0 - rtb_rx_ht;

    /* Switch: '<S238>/Switch' incorporates:
     *  Constant: '<S230>/Constant1'
     *  RelationalOperator: '<S238>/UpperRelop'
     *  Sum: '<S230>/Subtract1'
     */
    if (!(rtb_FeedForward_a < (-1.0 - rtb_rx_ht))) {
      rtb_thetay_l = rtb_FeedForward_a;
    }

    /* End of Switch: '<S238>/Switch' */
  }

  /* End of Switch: '<S238>/Switch2' */

  /* Saturate: '<S230>/Saturation1' */
  if (rtb_thetay_l > Drive_Motor_Control_I_UL) {
    rtb_FeedForward_a = Drive_Motor_Control_I_UL;
  } else if (rtb_thetay_l < Drive_Motor_Control_I_LL) {
    rtb_FeedForward_a = Drive_Motor_Control_I_LL;
  } else {
    rtb_FeedForward_a = rtb_thetay_l;
  }

  /* End of Saturate: '<S230>/Saturation1' */

  /* Sum: '<S230>/Add1' */
  u0 = rtb_rx_ht + rtb_FeedForward_a;

  /* Saturate: '<S230>/Saturation2' */
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

  /* End of Saturate: '<S230>/Saturation2' */

  /* Switch: '<S327>/Switch' */
  if (!rtb_Is_Absolute_Steering) {
    /* Switch: '<S327>/Switch' incorporates:
     *  Fcn: '<S328>/x->theta'
     */
    Code_Gen_Model_B.BR_Desired_Module_Angle = rt_atan2d_snf(rtb_Add2_k_idx_1,
      rtb_Add2_k_idx_0);
  }

  /* End of Switch: '<S327>/Switch' */

  /* Trigonometry: '<S263>/Cos4' incorporates:
   *  Switch: '<S252>/Angle_Switch'
   *  Trigonometry: '<S262>/Cos4'
   */
  rtb_Subtract_e = cos(Code_Gen_Model_B.BR_Desired_Module_Angle);

  /* Sum: '<S181>/Add1' incorporates:
   *  Constant: '<S181>/Constant3'
   *  Constant: '<S181>/Constant4'
   *  Gain: '<S18>/Revolutions to Radians3'
   *  Inport: '<Root>/BackRight_Steer_Rev'
   *  Inport: '<Root>/BackRight_Turn_Offset'
   *  Math: '<S181>/Math Function'
   *  Sum: '<S181>/Add2'
   *  Sum: '<S18>/Add3'
   */
  Code_Gen_Model_B.BR_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.BackRight_Steer_Rev -
       Code_Gen_Model_U.BackRight_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Trigonometry: '<S263>/Sin5' incorporates:
   *  UnaryMinus: '<S261>/Unary Minus'
   */
  rtb_rx_ht = sin(-Code_Gen_Model_B.BR_Steer_Module_Angle);

  /* Trigonometry: '<S263>/Sin4' incorporates:
   *  Switch: '<S252>/Angle_Switch'
   *  Trigonometry: '<S262>/Sin4'
   */
  rtb_Product_d = sin(Code_Gen_Model_B.BR_Desired_Module_Angle);

  /* Trigonometry: '<S263>/Cos5' incorporates:
   *  UnaryMinus: '<S261>/Unary Minus'
   */
  rtb_rx_kl = cos(-Code_Gen_Model_B.BR_Steer_Module_Angle);

  /* Sum: '<S263>/Subtract1' incorporates:
   *  Product: '<S263>/Product2'
   *  Product: '<S263>/Product3'
   *  Trigonometry: '<S263>/Cos4'
   *  Trigonometry: '<S263>/Sin4'
   */
  rtb_thetay_l = (rtb_Subtract_e * rtb_rx_ht) + (rtb_Product_d * rtb_rx_kl);

  /* Sum: '<S263>/Subtract' incorporates:
   *  Product: '<S263>/Product'
   *  Product: '<S263>/Product1'
   *  Trigonometry: '<S263>/Cos4'
   *  Trigonometry: '<S263>/Sin4'
   */
  rtb_rx_ht = (rtb_Subtract_e * rtb_rx_kl) - (rtb_Product_d * rtb_rx_ht);

  /* Math: '<S263>/Hypot' */
  rtb_rx_kl = rt_hypotd_snf(rtb_rx_ht, rtb_thetay_l);

  /* Switch: '<S263>/Switch' incorporates:
   *  Constant: '<S263>/Constant'
   *  Constant: '<S263>/Constant1'
   *  Constant: '<S264>/Constant'
   *  Product: '<S263>/Divide'
   *  Product: '<S263>/Divide1'
   *  RelationalOperator: '<S264>/Compare'
   *  Switch: '<S263>/Switch1'
   */
  if (rtb_rx_kl > 1.0E-6) {
    rtb_thetay_l /= rtb_rx_kl;
    rtb_rx_kl = rtb_rx_ht / rtb_rx_kl;
  } else {
    rtb_thetay_l = 0.0;
    rtb_rx_kl = 1.0;
  }

  /* End of Switch: '<S263>/Switch' */

  /* RelationalOperator: '<S260>/Compare' incorporates:
   *  Abs: '<S252>/Abs'
   *  Constant: '<S260>/Constant'
   *  Trigonometry: '<S263>/Atan1'
   */
  rtb_Is_Absolute_Steering = (fabs(rt_atan2d_snf(rtb_thetay_l, rtb_rx_kl)) >
    1.5707963267948966);

  /* Switch: '<S252>/Angle_Switch' incorporates:
   *  Trigonometry: '<S262>/Atan1'
   */
  if (rtb_Is_Absolute_Steering) {
    /* Sum: '<S262>/Subtract1' incorporates:
     *  Product: '<S262>/Product2'
     *  Product: '<S262>/Product3'
     */
    rtb_thetay_l = (rtb_Subtract_e * Code_Gen_Model_ConstB.Sin5_c) +
      (rtb_Product_d * Code_Gen_Model_ConstB.Cos5_b);

    /* Sum: '<S262>/Subtract' incorporates:
     *  Product: '<S262>/Product'
     *  Product: '<S262>/Product1'
     */
    rtb_Subtract_e = (rtb_Subtract_e * Code_Gen_Model_ConstB.Cos5_b) -
      (rtb_Product_d * Code_Gen_Model_ConstB.Sin5_c);

    /* Math: '<S262>/Hypot' */
    rtb_rx_ht = rt_hypotd_snf(rtb_Subtract_e, rtb_thetay_l);

    /* Switch: '<S262>/Switch1' incorporates:
     *  Constant: '<S262>/Constant'
     *  Constant: '<S262>/Constant1'
     *  Constant: '<S265>/Constant'
     *  Product: '<S262>/Divide'
     *  Product: '<S262>/Divide1'
     *  RelationalOperator: '<S265>/Compare'
     *  Switch: '<S262>/Switch'
     */
    if (rtb_rx_ht > 1.0E-6) {
      rtb_Subtract_e /= rtb_rx_ht;
      rtb_thetay_l /= rtb_rx_ht;
    } else {
      rtb_Subtract_e = 1.0;
      rtb_thetay_l = 0.0;
    }

    /* End of Switch: '<S262>/Switch1' */
    rtb_thetay_l = rt_atan2d_snf(rtb_thetay_l, rtb_Subtract_e);
  } else {
    rtb_thetay_l = Code_Gen_Model_B.BR_Desired_Module_Angle;
  }

  /* Sum: '<S254>/Sum' incorporates:
   *  Sum: '<S253>/Add'
   */
  rtb_Product_j4 = rtb_thetay_l - Code_Gen_Model_B.BR_Steer_Module_Angle;

  /* Sum: '<S267>/Add1' incorporates:
   *  Constant: '<S267>/Constant3'
   *  Constant: '<S267>/Constant4'
   *  Math: '<S267>/Math Function'
   *  Sum: '<S254>/Sum'
   *  Sum: '<S267>/Add2'
   */
  rtb_rx_kl = rt_modd_snf(rtb_Product_j4 + 3.1415926535897931,
    6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S269>/Sum1' incorporates:
   *  Constant: '<S254>/Constant2'
   *  Product: '<S269>/Product'
   *  Sum: '<S269>/Sum'
   *  UnitDelay: '<S269>/Unit Delay1'
   */
  rtb_Subtract_e = ((rtb_rx_kl - Code_Gen_Model_DW.UnitDelay1_DSTATE_iw) *
                    Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_iw;

  /* Product: '<S254>/Product' incorporates:
   *  Constant: '<S254>/Constant3'
   */
  rtb_Product_d = rtb_Subtract_e * Steering_Motor_Control_D;

  /* Sum: '<S268>/Diff' incorporates:
   *  UnitDelay: '<S268>/UD'
   *
   * Block description for '<S268>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S268>/UD':
   *
   *  Store in Global RAM
   */
  u0 = rtb_Product_d - Code_Gen_Model_DW.UD_DSTATE_ll;

  /* Saturate: '<S254>/Saturation' */
  if (u0 > Steering_Motor_Control_D_UL) {
    u0 = Steering_Motor_Control_D_UL;
  } else if (u0 < Steering_Motor_Control_D_LL) {
    u0 = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S254>/Add' incorporates:
   *  Gain: '<S254>/Gain1'
   *  Saturate: '<S254>/Saturation'
   */
  rtb_Add_du = (Steering_Motor_Control_P * rtb_rx_kl) + u0;

  /* Sum: '<S254>/Subtract' incorporates:
   *  Constant: '<S254>/Constant'
   */
  rtb_rx_ht = 1.0 - rtb_Add_du;

  /* Sum: '<S254>/Sum2' incorporates:
   *  Gain: '<S254>/Gain2'
   *  UnitDelay: '<S254>/Unit Delay'
   */
  rtb_rx_kl = (Steering_Motor_Control_I * rtb_rx_kl) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_l;

  /* Switch: '<S270>/Switch2' incorporates:
   *  Constant: '<S254>/Constant'
   *  RelationalOperator: '<S270>/LowerRelop1'
   *  Sum: '<S254>/Subtract'
   */
  if (!(rtb_rx_kl > (1.0 - rtb_Add_du))) {
    /* Sum: '<S254>/Subtract1' incorporates:
     *  Constant: '<S254>/Constant1'
     */
    rtb_rx_ht = -1.0 - rtb_Add_du;

    /* Switch: '<S270>/Switch' incorporates:
     *  Constant: '<S254>/Constant1'
     *  RelationalOperator: '<S270>/UpperRelop'
     *  Sum: '<S254>/Subtract1'
     */
    if (!(rtb_rx_kl < (-1.0 - rtb_Add_du))) {
      rtb_rx_ht = rtb_rx_kl;
    }

    /* End of Switch: '<S270>/Switch' */
  }

  /* End of Switch: '<S270>/Switch2' */

  /* Saturate: '<S254>/Saturation1' */
  if (rtb_rx_ht > Steering_Motor_Control_I_UL) {
    rtb_rx_ht = Steering_Motor_Control_I_UL;
  } else if (rtb_rx_ht < Steering_Motor_Control_I_LL) {
    rtb_rx_ht = Steering_Motor_Control_I_LL;
  }

  /* End of Saturate: '<S254>/Saturation1' */

  /* Sum: '<S254>/Add1' */
  u0 = rtb_Add_du + rtb_rx_ht;

  /* Saturate: '<S254>/Saturation2' */
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

  /* End of Saturate: '<S254>/Saturation2' */

  /* Product: '<S307>/Product3' */
  Code_Gen_Model_B.BR_Desired_Wheel_Speed =
    Code_Gen_Model_B.BR_Desired_Wheel_Speed_in * rtb_thetay_i;

  /* Switch: '<S252>/Speed_Switch' incorporates:
   *  UnaryMinus: '<S252>/Unary Minus'
   */
  if (rtb_Is_Absolute_Steering) {
    u0 = -Code_Gen_Model_B.BR_Desired_Wheel_Speed;
  } else {
    u0 = Code_Gen_Model_B.BR_Desired_Wheel_Speed;
  }

  /* Product: '<S255>/Product2' incorporates:
   *  Constant: '<S255>/Constant'
   *  Switch: '<S252>/Speed_Switch'
   */
  rtb_rx_kl = u0 * 1150.4247703785388;

  /* Signum: '<S250>/Sign' */
  if (rtIsNaN(rtb_rx_kl)) {
    u0 = (rtNaN);
  } else if (rtb_rx_kl < 0.0) {
    u0 = -1.0;
  } else {
    u0 = (rtb_rx_kl > 0.0);
  }

  /* Signum: '<S250>/Sign1' incorporates:
   *  Inport: '<Root>/BackRight_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.BackRight_Drive_Motor_Speed)) {
    rtb_Add_du = (rtNaN);
  } else if (Code_Gen_Model_U.BackRight_Drive_Motor_Speed < 0.0) {
    rtb_Add_du = -1.0;
  } else {
    rtb_Add_du = (Code_Gen_Model_U.BackRight_Drive_Motor_Speed > 0.0);
  }

  /* Product: '<S185>/Product' incorporates:
   *  Abs: '<S250>/Abs'
   *  Abs: '<S253>/Abs'
   *  Constant: '<S256>/Constant'
   *  Constant: '<S266>/Constant3'
   *  Constant: '<S266>/Constant4'
   *  Inport: '<Root>/BackRight_Drive_Motor_Speed'
   *  Logic: '<S250>/OR'
   *  Lookup_n-D: '<S253>/1-D Lookup Table'
   *  Math: '<S266>/Math Function'
   *  RelationalOperator: '<S250>/Equal1'
   *  RelationalOperator: '<S256>/Compare'
   *  Signum: '<S250>/Sign'
   *  Signum: '<S250>/Sign1'
   *  Sum: '<S266>/Add1'
   *  Sum: '<S266>/Add2'
   */
  rtb_rx_kl = (((real_T)((u0 == rtb_Add_du) || (fabs
    (Code_Gen_Model_U.BackRight_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_rx_kl) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_Product_j4 + 1.5707963267948966, 3.1415926535897931) -
          1.5707963267948966), Code_Gen_Model_ConstP.pooled24,
     Code_Gen_Model_ConstP.pooled23, 1U);

  /* Gain: '<S251>/Gain' */
  rtb_thetay_i = Drive_Motor_Control_FF * rtb_rx_kl;

  /* Sum: '<S251>/Sum' incorporates:
   *  Inport: '<Root>/BackRight_Drive_Motor_Speed'
   */
  rtb_rx_kl -= Code_Gen_Model_U.BackRight_Drive_Motor_Speed;

  /* Sum: '<S258>/Sum1' incorporates:
   *  Constant: '<S251>/Constant2'
   *  Product: '<S258>/Product'
   *  Sum: '<S258>/Sum'
   *  UnitDelay: '<S258>/Unit Delay1'
   */
  rtb_Add_du = ((rtb_rx_kl - Code_Gen_Model_DW.UnitDelay1_DSTATE_k) *
                Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_k;

  /* Product: '<S251>/Product' incorporates:
   *  Constant: '<S251>/Constant3'
   */
  rtb_Product_j4 = rtb_Add_du * Drive_Motor_Control_D;

  /* Sum: '<S257>/Diff' incorporates:
   *  UnitDelay: '<S257>/UD'
   *
   * Block description for '<S257>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S257>/UD':
   *
   *  Store in Global RAM
   */
  u0 = rtb_Product_j4 - Code_Gen_Model_DW.UD_DSTATE_c;

  /* Saturate: '<S251>/Saturation' */
  if (u0 > Drive_Motor_Control_D_UL) {
    u0 = Drive_Motor_Control_D_UL;
  } else if (u0 < Drive_Motor_Control_D_LL) {
    u0 = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S251>/Add' incorporates:
   *  Gain: '<S251>/Gain1'
   *  Saturate: '<S251>/Saturation'
   */
  rtb_thetay_i = ((Drive_Motor_Control_P * rtb_rx_kl) + rtb_thetay_i) + u0;

  /* Sum: '<S251>/Subtract' incorporates:
   *  Constant: '<S251>/Constant'
   */
  rtb_thetay_l = 1.0 - rtb_thetay_i;

  /* Sum: '<S251>/Sum2' incorporates:
   *  Gain: '<S251>/Gain2'
   *  UnitDelay: '<S251>/Unit Delay'
   */
  rtb_rx_kl = (Drive_Motor_Control_I * rtb_rx_kl) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_a;

  /* Switch: '<S259>/Switch2' incorporates:
   *  Constant: '<S251>/Constant'
   *  RelationalOperator: '<S259>/LowerRelop1'
   *  Sum: '<S251>/Subtract'
   */
  if (!(rtb_rx_kl > (1.0 - rtb_thetay_i))) {
    /* Sum: '<S251>/Subtract1' incorporates:
     *  Constant: '<S251>/Constant1'
     */
    rtb_thetay_l = -1.0 - rtb_thetay_i;

    /* Switch: '<S259>/Switch' incorporates:
     *  Constant: '<S251>/Constant1'
     *  RelationalOperator: '<S259>/UpperRelop'
     *  Sum: '<S251>/Subtract1'
     */
    if (!(rtb_rx_kl < (-1.0 - rtb_thetay_i))) {
      rtb_thetay_l = rtb_rx_kl;
    }

    /* End of Switch: '<S259>/Switch' */
  }

  /* End of Switch: '<S259>/Switch2' */

  /* Saturate: '<S251>/Saturation1' */
  if (rtb_thetay_l > Drive_Motor_Control_I_UL) {
    rtb_rx_kl = Drive_Motor_Control_I_UL;
  } else if (rtb_thetay_l < Drive_Motor_Control_I_LL) {
    rtb_rx_kl = Drive_Motor_Control_I_LL;
  } else {
    rtb_rx_kl = rtb_thetay_l;
  }

  /* End of Saturate: '<S251>/Saturation1' */

  /* Sum: '<S251>/Add1' */
  u0 = rtb_thetay_i + rtb_rx_kl;

  /* Saturate: '<S251>/Saturation2' */
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

  /* End of Saturate: '<S251>/Saturation2' */

  /* Outport: '<Root>/Enable_Wheels' */
  Code_Gen_Model_Y.Enable_Wheels = rtb_rx;

  /* Outport: '<Root>/Reset_Wheel_Offsets' */
  Code_Gen_Model_Y.Reset_Wheel_Offsets = rtb_thetay;

  /* Outport: '<Root>/Disable_Wheels' */
  Code_Gen_Model_Y.Disable_Wheels = rtb_rx_i;

  /* Outport: '<Root>/Swerve_Motors_Disabled' */
  Code_Gen_Model_Y.Swerve_Motors_Disabled = rtb_Swerve_Motors_Disabled;

  /* RelationalOperator: '<S4>/Compare' incorporates:
   *  Constant: '<S4>/Constant'
   *  Inport: '<Root>/Elevator_Limit_Switch_Top'
   */
  rtb_Gamepad_POV_Up = (Code_Gen_Model_U.Elevator_Limit_Switch_Top != 0.0);

  /* Sum: '<S8>/Subtract' */
  Code_Gen_Model_B.Elevator_Error = Code_Gen_Model_B.Elevator_Height_Desired -
    Code_Gen_Model_B.Elevator_Height_Measured;

  /* Gain: '<S27>/Gain1' */
  Code_Gen_Model_B.Elevator_Proportional = Elevator_Gain_Prop *
    Code_Gen_Model_B.Elevator_Error;

  /* Logic: '<S8>/Logical Operator2' incorporates:
   *  Abs: '<S8>/Abs'
   *  Constant: '<S25>/Constant'
   *  Constant: '<S26>/Constant'
   *  Logic: '<S8>/Logical Operator1'
   *  Logic: '<S8>/NOT1'
   *  Logic: '<S8>/NOT2'
   *  RelationalOperator: '<S25>/Compare'
   *  RelationalOperator: '<S26>/Compare'
   */
  rtb_Swerve_Motors_Disabled = ((((!(Code_Gen_Model_B.Elevator_Height_Desired ==
    0.0)) || (!(fabs(Code_Gen_Model_B.Elevator_Error) <=
                Elevator_Error_Bottom_Disable))) || rtb_Compare_m) &&
    (Code_Gen_Model_B.Reefscape_Motors_Enable));

  /* Logic: '<S8>/Logical Operator' incorporates:
   *  Logic: '<S8>/NOT'
   *  Logic: '<S8>/OR'
   */
  rtb_Compare_a = (rtb_Swerve_Motors_Disabled && ((!rtb_Gamepad_POV_Up) &&
    (!rtb_Compare_m)));

  /* Switch: '<S27>/Switch' */
  if (rtb_Compare_a) {
    /* Switch: '<S27>/Switch1' incorporates:
     *  UnitDelay: '<S29>/Delay Input1'
     *
     * Block description for '<S29>/Delay Input1':
     *
     *  Store in Global RAM
     */
    if (!Code_Gen_Model_DW.DelayInput1_DSTATE_j) {
      /* Switch: '<S27>/Switch' incorporates:
       *  Constant: '<S27>/Constant3'
       */
      Code_Gen_Model_B.Elevator_Integral = Elevator_Int_IC;
    } else {
      /* Sum: '<S27>/Sum2' incorporates:
       *  Gain: '<S27>/Gain2'
       *  UnitDelay: '<S27>/Unit Delay'
       */
      rtb_rx = (Elevator_Gain_Int * Code_Gen_Model_B.Elevator_Error) +
        Code_Gen_Model_B.Elevator_Integral;

      /* Sum: '<S27>/Subtract' incorporates:
       *  Constant: '<S27>/Constant'
       */
      rtb_rx_i = Elevator_Total_UL - Code_Gen_Model_B.Elevator_Proportional;

      /* Switch: '<S30>/Switch2' incorporates:
       *  RelationalOperator: '<S30>/LowerRelop1'
       */
      if (!(rtb_rx > rtb_rx_i)) {
        /* Sum: '<S27>/Subtract1' incorporates:
         *  Constant: '<S27>/Constant1'
         */
        rtb_rx_i = Elevator_Total_LL - Code_Gen_Model_B.Elevator_Proportional;

        /* Switch: '<S30>/Switch' incorporates:
         *  RelationalOperator: '<S30>/UpperRelop'
         */
        if (!(rtb_rx < rtb_rx_i)) {
          rtb_rx_i = rtb_rx;
        }

        /* End of Switch: '<S30>/Switch' */
      }

      /* End of Switch: '<S30>/Switch2' */

      /* Saturate: '<S27>/Saturation1' */
      if (rtb_rx_i > Elevator_Int_UL) {
        /* Switch: '<S27>/Switch' */
        Code_Gen_Model_B.Elevator_Integral = Elevator_Int_UL;
      } else if (rtb_rx_i < Elevator_Int_LL) {
        /* Switch: '<S27>/Switch' */
        Code_Gen_Model_B.Elevator_Integral = Elevator_Int_LL;
      } else {
        /* Switch: '<S27>/Switch' */
        Code_Gen_Model_B.Elevator_Integral = rtb_rx_i;
      }

      /* End of Saturate: '<S27>/Saturation1' */
    }

    /* End of Switch: '<S27>/Switch1' */
  } else {
    /* Switch: '<S27>/Switch' incorporates:
     *  Constant: '<S27>/Constant2'
     */
    Code_Gen_Model_B.Elevator_Integral = 0.0;
  }

  /* End of Switch: '<S27>/Switch' */

  /* Switch: '<S8>/Switch2' */
  if (rtb_Swerve_Motors_Disabled) {
    /* Sum: '<S27>/Add1' */
    rtb_rx = Code_Gen_Model_B.Elevator_Proportional +
      Code_Gen_Model_B.Elevator_Integral;

    /* Saturate: '<S27>/Saturation2' */
    if (rtb_rx > Elevator_Total_UL) {
      rtb_rx = Elevator_Total_UL;
    } else if (rtb_rx < Elevator_Total_LL) {
      rtb_rx = Elevator_Total_LL;
    }

    /* End of Saturate: '<S27>/Saturation2' */

    /* Switch: '<S8>/Switch1' incorporates:
     *  Constant: '<S8>/Constant1'
     *  Constant: '<S8>/Constant2'
     */
    if (rtb_Gamepad_POV_Up) {
      rtb_rx_i = Elevator_Hold_at_Top_DC;
    } else {
      rtb_rx_i = 1.0;
    }

    /* End of Switch: '<S8>/Switch1' */

    /* Switch: '<S28>/Switch2' incorporates:
     *  RelationalOperator: '<S28>/LowerRelop1'
     *  Switch: '<S8>/Switch'
     */
    if (rtb_rx > rtb_rx_i) {
      /* Outport: '<Root>/Elevator_DutyCycle' */
      Code_Gen_Model_Y.Elevator_DutyCycle = rtb_rx_i;
    } else {
      if (rtb_Compare_m) {
        /* Switch: '<S8>/Switch' incorporates:
         *  Constant: '<S8>/Constant3'
         */
        rtb_rx_i = 0.0;
      } else {
        /* Switch: '<S8>/Switch' incorporates:
         *  Constant: '<S8>/Constant4'
         */
        rtb_rx_i = -1.0;
      }

      /* Switch: '<S28>/Switch' incorporates:
       *  RelationalOperator: '<S28>/UpperRelop'
       */
      if (rtb_rx < rtb_rx_i) {
        /* Outport: '<Root>/Elevator_DutyCycle' */
        Code_Gen_Model_Y.Elevator_DutyCycle = rtb_rx_i;
      } else {
        /* Outport: '<Root>/Elevator_DutyCycle' */
        Code_Gen_Model_Y.Elevator_DutyCycle = rtb_rx;
      }

      /* End of Switch: '<S28>/Switch' */
    }

    /* End of Switch: '<S28>/Switch2' */
  } else {
    /* Outport: '<Root>/Elevator_DutyCycle' incorporates:
     *  Constant: '<S8>/Constant5'
     */
    Code_Gen_Model_Y.Elevator_DutyCycle = 0.0;
  }

  /* End of Switch: '<S8>/Switch2' */

  /* Sum: '<S6>/Subtract' */
  Code_Gen_Model_B.Coral_ArmAngle_Error =
    Code_Gen_Model_B.Coral_Arm_Angle_Desired -
    Code_Gen_Model_B.Coral_Arm_Angle_Measured;

  /* Gain: '<S22>/Gain1' */
  Code_Gen_Model_B.Elevator_Proportional_a = Coral_Arm_Gain_Prop *
    Code_Gen_Model_B.Coral_ArmAngle_Error;

  /* Switch: '<S22>/Switch' */
  if (Code_Gen_Model_B.Reefscape_Motors_Enable) {
    /* Switch: '<S22>/Switch1' incorporates:
     *  UnitDelay: '<S23>/Delay Input1'
     *
     * Block description for '<S23>/Delay Input1':
     *
     *  Store in Global RAM
     */
    if (!Code_Gen_Model_DW.DelayInput1_DSTATE_en) {
      /* Switch: '<S22>/Switch' incorporates:
       *  Constant: '<S22>/Constant3'
       */
      Code_Gen_Model_B.Elevator_Integral_j = Coral_Arm_Int_IC;
    } else {
      /* Sum: '<S22>/Sum2' incorporates:
       *  Gain: '<S22>/Gain2'
       *  UnitDelay: '<S22>/Unit Delay'
       */
      rtb_rx = (Coral_Arm_Gain_Int * Code_Gen_Model_B.Coral_ArmAngle_Error) +
        Code_Gen_Model_B.Elevator_Integral_j;

      /* Sum: '<S22>/Subtract' incorporates:
       *  Constant: '<S22>/Constant'
       */
      rtb_rx_i = Coral_Arm_Total_UL - Code_Gen_Model_B.Elevator_Proportional_a;

      /* Switch: '<S24>/Switch2' incorporates:
       *  RelationalOperator: '<S24>/LowerRelop1'
       */
      if (!(rtb_rx > rtb_rx_i)) {
        /* Sum: '<S22>/Subtract1' incorporates:
         *  Constant: '<S22>/Constant1'
         */
        rtb_rx_i = Coral_Arm_Total_LL - Code_Gen_Model_B.Elevator_Proportional_a;

        /* Switch: '<S24>/Switch' incorporates:
         *  RelationalOperator: '<S24>/UpperRelop'
         */
        if (!(rtb_rx < rtb_rx_i)) {
          rtb_rx_i = rtb_rx;
        }

        /* End of Switch: '<S24>/Switch' */
      }

      /* End of Switch: '<S24>/Switch2' */

      /* Saturate: '<S22>/Saturation1' */
      if (rtb_rx_i > Coral_Arm_Int_UL) {
        /* Switch: '<S22>/Switch' */
        Code_Gen_Model_B.Elevator_Integral_j = Coral_Arm_Int_UL;
      } else if (rtb_rx_i < Coral_Arm_Int_LL) {
        /* Switch: '<S22>/Switch' */
        Code_Gen_Model_B.Elevator_Integral_j = Coral_Arm_Int_LL;
      } else {
        /* Switch: '<S22>/Switch' */
        Code_Gen_Model_B.Elevator_Integral_j = rtb_rx_i;
      }

      /* End of Saturate: '<S22>/Saturation1' */
    }

    /* End of Switch: '<S22>/Switch1' */

    /* Sum: '<S22>/Add1' incorporates:
     *  Switch: '<S6>/Switch2'
     */
    u0 = Code_Gen_Model_B.Elevator_Proportional_a +
      Code_Gen_Model_B.Elevator_Integral_j;

    /* Saturate: '<S22>/Saturation2' incorporates:
     *  Switch: '<S6>/Switch2'
     */
    if (u0 > Coral_Arm_Total_UL) {
      /* Outport: '<Root>/Coral_Arm_DutyCycle' */
      Code_Gen_Model_Y.Coral_Arm_DutyCycle = Coral_Arm_Total_UL;
    } else if (u0 < Coral_Arm_Total_LL) {
      /* Outport: '<Root>/Coral_Arm_DutyCycle' */
      Code_Gen_Model_Y.Coral_Arm_DutyCycle = Coral_Arm_Total_LL;
    } else {
      /* Outport: '<Root>/Coral_Arm_DutyCycle' */
      Code_Gen_Model_Y.Coral_Arm_DutyCycle = u0;
    }

    /* End of Saturate: '<S22>/Saturation2' */
  } else {
    /* Switch: '<S22>/Switch' incorporates:
     *  Constant: '<S22>/Constant2'
     */
    Code_Gen_Model_B.Elevator_Integral_j = 0.0;

    /* Outport: '<Root>/Coral_Arm_DutyCycle' incorporates:
     *  Constant: '<S6>/Constant5'
     *  Switch: '<S6>/Switch2'
     */
    Code_Gen_Model_Y.Coral_Arm_DutyCycle = 0.0;
  }

  /* End of Switch: '<S22>/Switch' */

  /* Outport: '<Root>/Coral_Wheel_DutyCycle' */
  Code_Gen_Model_Y.Coral_Wheel_DutyCycle = rtb_thetay_n;

  /* SignalConversion: '<S11>/Signal Copy4' incorporates:
   *  Inport: '<Root>/Joystick_Right_X'
   */
  Code_Gen_Model_B.Steer_Joystick_X = Code_Gen_Model_U.Joystick_Right_X;

  /* Trigonometry: '<S15>/Trigonometric Function1' */
  rtb_rx_i = sin(Code_Gen_Model_B.Gyro_Angle_Field_rad);

  /* SignalConversion generated from: '<S15>/Rotation matrix from local to global' incorporates:
   *  Trigonometry: '<S15>/Trigonometric Function'
   */
  rtb_Add2_k_idx_0 = cos(Code_Gen_Model_B.Gyro_Angle_Field_rad);
  rtb_rx = rtb_rx_i;

  /* SignalConversion generated from: '<S15>/Rotation matrix from local to global' incorporates:
   *  UnaryMinus: '<S15>/Unary Minus'
   */
  rtb_Add2_k_idx_1 = -rtb_rx_i;

  /* Sum: '<S105>/Diff' incorporates:
   *  UnitDelay: '<S105>/UD'
   *
   * Block description for '<S105>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S105>/UD':
   *
   *  Store in Global RAM
   */
  rtb_thetay_n = Code_Gen_Model_B.Gyro_Angle_Field_rad -
    Code_Gen_Model_DW.UD_DSTATE_d;

  /* Sum: '<S15>/Subtract2' incorporates:
   *  Constant: '<S15>/Constant3'
   *  Gain: '<S15>/Gain7'
   *  Math: '<S15>/Square'
   */
  rtb_rx_i = 1.0 - ((rtb_thetay_n * rtb_thetay_n) * 0.16666666666666666);

  /* Gain: '<S15>/Gain6' */
  rtb_thetay_n *= 0.5;

  /* SignalConversion generated from: '<S15>/POSE exponential matrix for improved accuracy while rotating' */
  rtb_POSEexponentialmatrixfori_0 = rtb_thetay_n;

  /* SignalConversion generated from: '<S15>/POSE exponential matrix for improved accuracy while rotating' incorporates:
   *  UnaryMinus: '<S15>/Unary Minus2'
   */
  rtb_POSEexponentialmatrixfori_1 = -rtb_thetay_n;

  /* Product: '<S15>/Product' incorporates:
   *  Constant: '<S15>/Constant1'
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Rev'
   *  Sum: '<S106>/Diff'
   *  UnitDelay: '<S106>/UD'
   *
   * Block description for '<S106>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S106>/UD':
   *
   *  Store in Global RAM
   */
  rtb_thetay_n = (Code_Gen_Model_U.FrontLeft_Drive_Motor_Rev -
                  Code_Gen_Model_DW.UD_DSTATE_j) * 0.049599071116336282;

  /* Product: '<S15>/Product1' incorporates:
   *  Constant: '<S15>/Constant1'
   *  Inport: '<Root>/FrontRight_Drive_Motor_Rev'
   *  Sum: '<S107>/Diff'
   *  UnitDelay: '<S107>/UD'
   *
   * Block description for '<S107>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S107>/UD':
   *
   *  Store in Global RAM
   */
  rtb_thetay = (Code_Gen_Model_U.FrontRight_Drive_Motor_Rev -
                Code_Gen_Model_DW.UD_DSTATE_m) * 0.049599071116336282;

  /* Product: '<S15>/Product2' incorporates:
   *  Constant: '<S15>/Constant1'
   *  Inport: '<Root>/BackLeft_Drive_Motor_Rev'
   *  Sum: '<S108>/Diff'
   *  UnitDelay: '<S108>/UD'
   *
   * Block description for '<S108>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S108>/UD':
   *
   *  Store in Global RAM
   */
  rtb_thetay_l = (Code_Gen_Model_U.BackLeft_Drive_Motor_Rev -
                  Code_Gen_Model_DW.UD_DSTATE_ic) * 0.049599071116336282;

  /* Product: '<S15>/Product3' incorporates:
   *  Constant: '<S15>/Constant1'
   *  Inport: '<Root>/BackRight_Drive_Motor_Rev'
   *  Sum: '<S109>/Diff'
   *  UnitDelay: '<S109>/UD'
   *
   * Block description for '<S109>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S109>/UD':
   *
   *  Store in Global RAM
   */
  rtb_thetay_i = (Code_Gen_Model_U.BackRight_Drive_Motor_Rev -
                  Code_Gen_Model_DW.UD_DSTATE_ce) * 0.049599071116336282;

  /* SignalConversion generated from: '<S15>/Product7' incorporates:
   *  Fcn: '<S110>/r->x'
   *  Fcn: '<S110>/theta->y'
   *  Fcn: '<S111>/r->x'
   *  Fcn: '<S111>/theta->y'
   *  Fcn: '<S112>/r->x'
   *  Fcn: '<S112>/theta->y'
   *  Fcn: '<S113>/r->x'
   *  Fcn: '<S113>/theta->y'
   */
  rtb_thetay_n_0[0] = rtb_thetay_n * cos(Code_Gen_Model_B.FL_Steer_Module_Angle);
  rtb_thetay_n_0[1] = rtb_thetay_n * sin(Code_Gen_Model_B.FL_Steer_Module_Angle);
  rtb_thetay_n_0[2] = rtb_thetay * cos(Code_Gen_Model_B.FR_Steer_Module_Angle);
  rtb_thetay_n_0[3] = rtb_thetay * sin(Code_Gen_Model_B.FR_Steer_Module_Angle);
  rtb_thetay_n_0[4] = rtb_thetay_l * cos(Code_Gen_Model_B.BL_Steer_Module_Angle);
  rtb_thetay_n_0[5] = rtb_thetay_l * sin(Code_Gen_Model_B.BL_Steer_Module_Angle);
  rtb_thetay_n_0[6] = rtb_thetay_i * cos(Code_Gen_Model_B.BR_Steer_Module_Angle);
  rtb_thetay_n_0[7] = rtb_thetay_i * sin(Code_Gen_Model_B.BR_Steer_Module_Angle);

  /* Product: '<S15>/Product7' incorporates:
   *  Constant: '<S15>/Constant4'
   */
  for (rtb_Num_Segments = 0; rtb_Num_Segments < 2; rtb_Num_Segments++) {
    u0 = 0.0;
    tmp = 0;
    for (i = 0; i < 8; i++) {
      u0 += Code_Gen_Model_ConstP.Constant4_Value[tmp + rtb_Num_Segments] *
        rtb_thetay_n_0[i];
      tmp += 2;
    }

    rtb_Akxhatkk1[rtb_Num_Segments] = u0;
  }

  /* End of Product: '<S15>/Product7' */

  /* Product: '<S15>/Product6' incorporates:
   *  Concatenate: '<S15>/POSE exponential matrix for improved accuracy while rotating'
   *  SignalConversion generated from: '<S15>/POSE exponential matrix for improved accuracy while rotating'
   */
  rtb_thetay_n = (rtb_rx_i * rtb_Akxhatkk1[0]) +
    (rtb_POSEexponentialmatrixfori_1 * rtb_Akxhatkk1[1]);
  rtb_rx_i = (rtb_POSEexponentialmatrixfori_0 * rtb_Akxhatkk1[0]) + (rtb_rx_i *
    rtb_Akxhatkk1[1]);

  /* Product: '<S15>/Product6' incorporates:
   *  Concatenate: '<S15>/Rotation matrix from local to global'
   */
  Code_Gen_Model_B.Product6[0] = (rtb_Add2_k_idx_0 * rtb_thetay_n) +
    (rtb_Add2_k_idx_1 * rtb_rx_i);
  Code_Gen_Model_B.Product6[1] = (rtb_rx * rtb_thetay_n) + (rtb_Add2_k_idx_0 *
    rtb_rx_i);

  /* Outputs for Enabled SubSystem: '<S71>/MeasurementUpdate' incorporates:
   *  EnablePort: '<S102>/Enable'
   */
  if (rtb_AND) {
    Code_Gen_Model_DW.MeasurementUpdate_MODE = true;

    /* Product: '<S102>/D[k]*u[k]' incorporates:
     *  Constant: '<S51>/D'
     */
    rtb_thetay_n = (0.0 * Code_Gen_Model_B.Product6[0]) + (0.0 *
      Code_Gen_Model_B.Product6[1]);

    /* Sum: '<S102>/Sum' incorporates:
     *  Constant: '<S51>/C'
     *  Delay: '<S51>/MemoryX'
     *  Product: '<S102>/C[k]*xhat[k|k-1]'
     *  Product: '<S102>/D[k]*u[k]'
     *  Sum: '<S102>/Add1'
     */
    rtb_Reshapey_idx_0 -= ((0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[1]) +
      Code_Gen_Model_DW.MemoryX_DSTATE[0]) + rtb_thetay_n;
    rtb_Reshapey_idx_1 -= ((0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[0]) +
      Code_Gen_Model_DW.MemoryX_DSTATE[1]) + rtb_thetay_n;

    /* Product: '<S102>/Product3' incorporates:
     *  Constant: '<S52>/KalmanGainL'
     */
    Code_Gen_Model_B.Product3[0] = (0.0951249219725039 * rtb_Reshapey_idx_0) + (
      -2.0601714451538746E-17 * rtb_Reshapey_idx_1);
    Code_Gen_Model_B.Product3[1] = (1.304610855474728E-16 * rtb_Reshapey_idx_0)
      + (0.095124921972504 * rtb_Reshapey_idx_1);
  } else if (Code_Gen_Model_DW.MeasurementUpdate_MODE) {
    /* Disable for Product: '<S102>/Product3' incorporates:
     *  Outport: '<S102>/L*(y[k]-yhat[k|k-1])'
     */
    Code_Gen_Model_B.Product3[0] = 0.0;
    Code_Gen_Model_B.Product3[1] = 0.0;
    Code_Gen_Model_DW.MeasurementUpdate_MODE = false;
  }

  /* End of Outputs for SubSystem: '<S71>/MeasurementUpdate' */

  /* RelationalOperator: '<S115>/Compare' incorporates:
   *  Constant: '<S114>/Constant'
   *  Constant: '<S115>/Constant'
   */
  rtb_Swerve_Motors_Disabled = (Odometry_X_Y_TEAR != 0.0);

  /* Gain: '<S114>/meters to feet' */
  Code_Gen_Model_B.Odometry_X_global_est_ft = 3.28084 *
    Code_Gen_Model_B.Odom_Position_X;

  /* Switch: '<S114>/Switch' incorporates:
   *  UnitDelay: '<S114>/Unit Delay'
   */
  if (rtb_Swerve_Motors_Disabled) {
    rtb_thetay_n = Code_Gen_Model_B.Odometry_X_global_est_ft;
  } else {
    rtb_thetay_n = Code_Gen_Model_DW.UnitDelay_DSTATE_c;
  }

  /* End of Switch: '<S114>/Switch' */

  /* Sum: '<S114>/Subtract' */
  Code_Gen_Model_B.Odometry_X_global_TEAR_ft =
    Code_Gen_Model_B.Odometry_X_global_est_ft - rtb_thetay_n;

  /* Gain: '<S114>/meters to feet1' */
  Code_Gen_Model_B.Odometry_Y_global_est_ft = 3.28084 *
    Code_Gen_Model_B.Odom_Position_Y;

  /* Switch: '<S114>/Switch1' incorporates:
   *  UnitDelay: '<S114>/Unit Delay1'
   */
  if (rtb_Swerve_Motors_Disabled) {
    rtb_rx = Code_Gen_Model_B.Odometry_Y_global_est_ft;
  } else {
    rtb_rx = Code_Gen_Model_DW.UnitDelay1_DSTATE_d;
  }

  /* End of Switch: '<S114>/Switch1' */

  /* Sum: '<S114>/Subtract1' */
  Code_Gen_Model_B.Odometry_Y_global_TEAR_ft =
    Code_Gen_Model_B.Odometry_Y_global_est_ft - rtb_rx;

  /* DataTypeConversion: '<S16>/Data Type Conversion' incorporates:
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

  /* End of DataTypeConversion: '<S16>/Data Type Conversion' */

  /* Chart: '<S16>/Chart' */
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

  /* End of Chart: '<S16>/Chart' */

  /* Update for UnitDelay: '<S48>/Delay Input1' incorporates:
   *  Inport: '<Root>/Joystick_Left_B11'
   *
   * Block description for '<S48>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE = Code_Gen_Model_U.Joystick_Left_B11;

  /* Update for UnitDelay: '<S49>/Delay Input1' incorporates:
   *  Inport: '<Root>/Joystick_Left_B12'
   *
   * Block description for '<S49>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_e = Code_Gen_Model_U.Joystick_Left_B12;

  /* Update for UnitDelay: '<S50>/Delay Input1' incorporates:
   *  Inport: '<Root>/Joystick_Left_B13'
   *
   * Block description for '<S50>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_n = Code_Gen_Model_U.Joystick_Left_B13;
  for (rtb_Num_Segments = 0; rtb_Num_Segments < 5; rtb_Num_Segments++) {
    /* Update for S-Function (sfix_udelay): '<S13>/Tapped Delay' incorporates:
     *  Bias: '<S145>/Bias'
     *  Merge: '<S119>/Merge1'
     *  S-Function (sfix_udelay): '<S13>/Tapped Delay1'
     */
    Code_Gen_Model_DW.TappedDelay_X[rtb_Num_Segments] =
      Code_Gen_Model_DW.TappedDelay_X[rtb_Num_Segments + 1];

    /* Update for S-Function (sfix_udelay): '<S13>/Tapped Delay1' incorporates:
     *  Bias: '<S145>/Bias'
     *  Merge: '<S119>/Merge1'
     *  S-Function (sfix_udelay): '<S13>/Tapped Delay'
     */
    Code_Gen_Model_DW.TappedDelay1_X[rtb_Num_Segments] =
      Code_Gen_Model_DW.TappedDelay1_X[rtb_Num_Segments + 1];
  }

  /* Update for S-Function (sfix_udelay): '<S13>/Tapped Delay' */
  Code_Gen_Model_DW.TappedDelay_X[5] = Code_Gen_Model_B.Product6[0];

  /* Update for S-Function (sfix_udelay): '<S13>/Tapped Delay1' */
  Code_Gen_Model_DW.TappedDelay1_X[5] = Code_Gen_Model_B.Product6[1];

  /* Update for Delay: '<S51>/MemoryX' */
  Code_Gen_Model_DW.icLoad = false;

  /* Product: '<S71>/A[k]*xhat[k|k-1]' incorporates:
   *  Constant: '<S51>/A'
   *  Delay: '<S51>/MemoryX'
   */
  rtb_Reshapey_idx_0 = (0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[1]) +
    Code_Gen_Model_DW.MemoryX_DSTATE[0];
  rtb_Reshapey_idx_1 = (0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[0]) +
    Code_Gen_Model_DW.MemoryX_DSTATE[1];

  /* Update for Delay: '<S51>/MemoryX' incorporates:
   *  Constant: '<S51>/B'
   *  Product: '<S71>/A[k]*xhat[k|k-1]'
   *  Product: '<S71>/B[k]*u[k]'
   *  Sum: '<S71>/Add'
   */
  Code_Gen_Model_DW.MemoryX_DSTATE[0] = (((0.0 * Code_Gen_Model_B.Product6[1]) +
    Code_Gen_Model_B.Product6[0]) + rtb_Reshapey_idx_0) +
    Code_Gen_Model_B.Product3[0];
  Code_Gen_Model_DW.MemoryX_DSTATE[1] = (((0.0 * Code_Gen_Model_B.Product6[0]) +
    Code_Gen_Model_B.Product6[1]) + rtb_Reshapey_idx_1) +
    Code_Gen_Model_B.Product3[1];

  /* Update for DiscreteIntegrator: '<S15>/Accumulator2' incorporates:
   *  Constant: '<S15>/Constant'
   *  DiscreteIntegrator: '<S15>/Accumulator'
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

  /* End of Update for DiscreteIntegrator: '<S15>/Accumulator2' */

  /* Update for DiscreteIntegrator: '<S15>/Accumulator' */
  Code_Gen_Model_DW.Accumulator_DSTATE += Code_Gen_Model_B.Product6[1];

  /* Update for UnitDelay: '<S33>/Delay Input1' incorporates:
   *  Constant: '<S10>/Constant3'
   *
   * Block description for '<S33>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_p = Gyro_Calibration_Reset_Flag;

  /* Update for UnitDelay: '<S10>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE = rtb_Switch1;

  /* Update for UnitDelay: '<S31>/Delay Input1'
   *
   * Block description for '<S31>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_l = rtb_Compare_m;

  /* Update for UnitDelay: '<S9>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_j = rtb_Switch1_hk;

  /* Update for UnitDelay: '<S282>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S282>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE = 0U;

  /* Update for UnitDelay: '<S304>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_i = rtb_Merge1;

  /* Update for UnitDelay: '<S303>/UD'
   *
   * Block description for '<S303>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE = rtb_Switch1_h;

  /* Update for UnitDelay: '<S301>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_m = rtb_Switch2;

  /* Update for UnitDelay: '<S284>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_d = rtb_Switch4;

  /* Update for UnitDelay: '<S299>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S299>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_p = 0U;

  /* Update for UnitDelay: '<S299>/FixPt Unit Delay1' */
  Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_e = rtb_Switch4;

  /* Update for UnitDelay: '<S283>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_g = rtb_Sum_jt;

  /* Update for UnitDelay: '<S292>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S292>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_c = 0U;

  /* Update for UnitDelay: '<S292>/FixPt Unit Delay1' */
  Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_p = rtb_Sum_jt;

  /* Update for UnitDelay: '<S206>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_b = rtb_Sum1_p;

  /* Update for UnitDelay: '<S205>/UD'
   *
   * Block description for '<S205>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_b = rtb_Product2_e;

  /* Update for UnitDelay: '<S191>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_e = rtb_rx_l;

  /* Update for UnitDelay: '<S195>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_a = rtb_Sin4;

  /* Update for UnitDelay: '<S194>/UD'
   *
   * Block description for '<S194>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_o = rtb_Subtract1;

  /* Update for UnitDelay: '<S188>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_f = rtb_FeedForward;

  /* Update for UnitDelay: '<S227>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_n = rtb_Add_oh;

  /* Update for UnitDelay: '<S226>/UD'
   *
   * Block description for '<S226>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_i = rtb_Subtract1_of;

  /* Update for UnitDelay: '<S212>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_dt = rtb_Hypot_bl;

  /* Update for UnitDelay: '<S216>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_b1 = rtb_Add_i;

  /* Update for UnitDelay: '<S215>/UD'
   *
   * Block description for '<S215>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_e = rtb_Subtract1_a;

  /* Update for UnitDelay: '<S209>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_em = rtb_FeedForward_n;

  /* Update for UnitDelay: '<S248>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_nw = rtb_Add_o2;

  /* Update for UnitDelay: '<S247>/UD'
   *
   * Block description for '<S247>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_k = rtb_Subtract1_do;

  /* Update for UnitDelay: '<S233>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_k = rtb_Hypot_d;

  /* Update for UnitDelay: '<S237>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_f = rtb_Add_gj;

  /* Update for UnitDelay: '<S236>/UD'
   *
   * Block description for '<S236>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_l = rtb_Subtract1_f;

  /* Update for UnitDelay: '<S230>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_gp = rtb_FeedForward_a;

  /* Update for UnitDelay: '<S269>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_iw = rtb_Subtract_e;

  /* Update for UnitDelay: '<S268>/UD'
   *
   * Block description for '<S268>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_ll = rtb_Product_d;

  /* Update for UnitDelay: '<S254>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_l = rtb_rx_ht;

  /* Update for UnitDelay: '<S258>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_k = rtb_Add_du;

  /* Update for UnitDelay: '<S257>/UD'
   *
   * Block description for '<S257>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_c = rtb_Product_j4;

  /* Update for UnitDelay: '<S251>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_a = rtb_rx_kl;

  /* Update for UnitDelay: '<S29>/Delay Input1'
   *
   * Block description for '<S29>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_j = rtb_Compare_a;

  /* Update for UnitDelay: '<S23>/Delay Input1'
   *
   * Block description for '<S23>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_en =
    Code_Gen_Model_B.Reefscape_Motors_Enable;

  /* Update for UnitDelay: '<S105>/UD'
   *
   * Block description for '<S105>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_d = Code_Gen_Model_B.Gyro_Angle_Field_rad;

  /* Update for UnitDelay: '<S106>/UD' incorporates:
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Rev'
   *
   * Block description for '<S106>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_j = Code_Gen_Model_U.FrontLeft_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S107>/UD' incorporates:
   *  Inport: '<Root>/FrontRight_Drive_Motor_Rev'
   *
   * Block description for '<S107>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_m = Code_Gen_Model_U.FrontRight_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S108>/UD' incorporates:
   *  Inport: '<Root>/BackLeft_Drive_Motor_Rev'
   *
   * Block description for '<S108>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_ic = Code_Gen_Model_U.BackLeft_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S109>/UD' incorporates:
   *  Inport: '<Root>/BackRight_Drive_Motor_Rev'
   *
   * Block description for '<S109>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_ce = Code_Gen_Model_U.BackRight_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S114>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_c = rtb_thetay_n;

  /* Update for UnitDelay: '<S114>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_d = rtb_rx;
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

    /* Start for If: '<S17>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem = -1;

    /* InitializeConditions for Delay: '<S51>/MemoryX' */
    Code_Gen_Model_DW.icLoad = true;

    /* InitializeConditions for DiscreteIntegrator: '<S15>/Accumulator2' */
    Code_Gen_Model_DW.Accumulator2_DSTATE = Constant;
    Code_Gen_Model_DW.Accumulator2_PrevResetState = 2;

    /* InitializeConditions for DiscreteIntegrator: '<S15>/Accumulator' */
    Code_Gen_Model_DW.Accumulator_DSTATE = Constant1;
    Code_Gen_Model_DW.Accumulator_PrevResetState = 2;

    /* InitializeConditions for UnitDelay: '<S10>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE = Gyro_Calibration_Reset_Degree;

    /* InitializeConditions for UnitDelay: '<S282>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE = 1U;

    /* InitializeConditions for UnitDelay: '<S299>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_p = 1U;

    /* InitializeConditions for UnitDelay: '<S292>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_c = 1U;

    /* SystemInitialize for IfAction SubSystem: '<S1>/Teleop' */
    /* InitializeConditions for UnitDelay: '<S352>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_a = 1U;

    /* End of SystemInitialize for SubSystem: '<S1>/Teleop' */

    /* SystemInitialize for IfAction SubSystem: '<S17>/Spline Path Following Enabled' */
    /* Start for If: '<S123>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem_h = -1;

    /* InitializeConditions for UnitDelay: '<S119>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_gh = 2.0;

    /* SystemInitialize for IfAction SubSystem: '<S123>/Robot_Index_Is_Valid' */
    /* Start for If: '<S126>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem_o = -1;

    /* SystemInitialize for IfAction SubSystem: '<S126>/Circle_Check_Valid' */
    /* Start for If: '<S128>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;

    /* End of SystemInitialize for SubSystem: '<S126>/Circle_Check_Valid' */
    /* End of SystemInitialize for SubSystem: '<S123>/Robot_Index_Is_Valid' */
    /* End of SystemInitialize for SubSystem: '<S17>/Spline Path Following Enabled' */
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
