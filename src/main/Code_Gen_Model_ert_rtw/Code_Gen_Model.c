/*
 * Sponsored License - for use in support of a program or activity
 * sponsored by MathWorks.  Not for government, commercial or other
 * non-sponsored organizational use.
 *
 * File: Code_Gen_Model.c
 *
 * Code generated for Simulink model 'Code_Gen_Model'.
 *
 * Model version                  : 2.253
 * Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
 * C/C++ source code generated on : Wed Feb 12 22:52:09 2025
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

/* Named constants for Chart: '<S17>/Chart' */
#define Code_Gen_Mod_IN_NO_ACTIVE_CHILD ((uint8_T)0U)
#define Code_Gen_Model_IN_Disabled     ((uint8_T)1U)
#define Code_Gen_Model_IN_Not_Disabled ((uint8_T)2U)

/* Named constants for Chart: '<S335>/Reefscape_Chart' */
#define Code_Ge_IN_Coral_Pickup_Prepare ((uint8_T)3U)
#define Code_Ge_IN_Coral_Score_Position ((uint8_T)5U)
#define Code_Gen_Mode_IN_Algae_Push_Out ((uint8_T)3U)
#define Code_Gen_Model_IN_Algae_Hold   ((uint8_T)1U)
#define Code_Gen_Model_IN_Algae_Pull_In ((uint8_T)2U)
#define Code_Gen_Model_IN_Coral_Eject  ((uint8_T)1U)
#define Code_Gen_Model_IN_Eject        ((uint8_T)1U)
#define Code_Gen_Model_IN_Off          ((uint8_T)4U)
#define Code_Gen_Model_IN_Stop         ((uint8_T)2U)
#define Code_Gen__IN_Coral_Pickup_Lower ((uint8_T)2U)
#define Code_Gen__IN_Coral_Pickup_Raise ((uint8_T)4U)
#define Code_Gen__IN_Eleator_Height_Top ((uint8_T)6U)
#define Code__IN_Elevator_Height_Bottom ((uint8_T)7U)

/* Exported block parameters */
real_T AT_Target_Tag_11_Field_Angle = 2.0944;/* Variable: AT_Target_Tag_11_Field_Angle
                                              * Referenced by: '<S333>/Constant12'
                                              */
real_T AT_Target_Tag_11_X = 12.5143;   /* Variable: AT_Target_Tag_11_X
                                        * Referenced by: '<S333>/Constant4'
                                        */
real_T AT_Target_Tag_11_Y = 2.6574;    /* Variable: AT_Target_Tag_11_Y
                                        * Referenced by: '<S333>/Constant26'
                                        */
real_T AT_Target_Tag_12_Field_Angle = -2.0944;/* Variable: AT_Target_Tag_12_Field_Angle
                                               * Referenced by: '<S333>/Constant11'
                                               */
real_T AT_Target_Tag_12_X = 12.5143;   /* Variable: AT_Target_Tag_12_X
                                        * Referenced by: '<S333>/Constant17'
                                        */
real_T AT_Target_Tag_12_Y = 5.5542;    /* Variable: AT_Target_Tag_12_Y
                                        * Referenced by: '<S333>/Constant3'
                                        */
real_T AT_Target_Tag_13_Field_Angle = 0.0;/* Variable: AT_Target_Tag_13_Field_Angle
                                           * Referenced by: '<S333>/Constant10'
                                           */
real_T AT_Target_Tag_13_X = 10.001;    /* Variable: AT_Target_Tag_13_X
                                        * Referenced by: '<S333>/Constant18'
                                        */
real_T AT_Target_Tag_13_Y = 4.1051;    /* Variable: AT_Target_Tag_13_Y
                                        * Referenced by: '<S333>/Constant21'
                                        */
real_T AT_Target_Tag_14_Field_Angle = 0.0;/* Variable: AT_Target_Tag_14_Field_Angle
                                           * Referenced by: '<S333>/Constant8'
                                           */
real_T AT_Target_Tag_14_X = 6.54;      /* Variable: AT_Target_Tag_14_X
                                        * Referenced by: '<S333>/Constant19'
                                        */
real_T AT_Target_Tag_14_Y = 4.1051;    /* Variable: AT_Target_Tag_14_Y
                                        * Referenced by: '<S333>/Constant23'
                                        */
real_T AT_Target_Tag_15_Field_Angle = 2.0944;/* Variable: AT_Target_Tag_15_Field_Angle
                                              * Referenced by: '<S333>/Constant7'
                                              */
real_T AT_Target_Tag_15_X = 4.0317;    /* Variable: AT_Target_Tag_15_X
                                        * Referenced by: '<S333>/Constant20'
                                        */
real_T AT_Target_Tag_15_Y = 5.5542;    /* Variable: AT_Target_Tag_15_Y
                                        * Referenced by: '<S333>/Constant24'
                                        */
real_T AT_Target_Tag_16_Field_Angle = 4.1888;/* Variable: AT_Target_Tag_16_Field_Angle
                                              * Referenced by: '<S333>/Constant6'
                                              */
real_T AT_Target_Tag_16_X = 4.0317;    /* Variable: AT_Target_Tag_16_X
                                        * Referenced by: '<S333>/Constant22'
                                        */
real_T AT_Target_Tag_16_Y = 2.6574;    /* Variable: AT_Target_Tag_16_Y
                                        * Referenced by: '<S333>/Constant25'
                                        */
real_T AT_Target_Tag_5_Field_Angle = 1.5708;/* Variable: AT_Target_Tag_5_Field_Angle
                                             * Referenced by: '<S333>/Constant14'
                                             */
real_T AT_Target_Tag_5_X = 14.7008;    /* Variable: AT_Target_Tag_5_X
                                        * Referenced by: '<S333>/Constant9'
                                        */
real_T AT_Target_Tag_5_Y = 7.2898;     /* Variable: AT_Target_Tag_5_Y
                                        * Referenced by: '<S333>/Constant28'
                                        */
real_T AT_Target_Tag_6_Field_Angle = 4.7124;/* Variable: AT_Target_Tag_6_Field_Angle
                                             * Referenced by: '<S333>/Constant13'
                                             */
real_T AT_Target_Tag_6_X = 1.8415;     /* Variable: AT_Target_Tag_6_X
                                        * Referenced by: '<S333>/Constant5'
                                        */
real_T AT_Target_Tag_6_Y = 7.2898;     /* Variable: AT_Target_Tag_6_Y
                                        * Referenced by: '<S333>/Constant27'
                                        */
real_T AT_XY_Control_Gain = 1.5;       /* Variable: AT_XY_Control_Gain
                                        * Referenced by: '<S337>/Gain2'
                                        */
real_T Algae_Eject_Time = 1.0;         /* Variable: Algae_Eject_Time
                                        * Referenced by: '<S335>/Reefscape_Chart'
                                        */
real_T Algae_Hold_DC = 0.005;          /* Variable: Algae_Hold_DC
                                        * Referenced by: '<S335>/Reefscape_Chart'
                                        */
real_T Algae_Pull_In_DC = 1.0;         /* Variable: Algae_Pull_In_DC
                                        * Referenced by: '<S335>/Reefscape_Chart'
                                        */
real_T Algae_Push_Out_DC = -0.3;       /* Variable: Algae_Push_Out_DC
                                        * Referenced by: '<S335>/Reefscape_Chart'
                                        */
real_T Boost_Trigger_Decreasing_Limit = -0.28;
                                     /* Variable: Boost_Trigger_Decreasing_Limit
                                      * Referenced by: '<S350>/Constant1'
                                      */
real_T Boost_Trigger_High_Speed = 5.0; /* Variable: Boost_Trigger_High_Speed
                                        * Referenced by:
                                        *   '<S346>/Constant'
                                        *   '<S346>/Saturation'
                                        */
real_T Boost_Trigger_Increasing_Limit = 3.5;
                                     /* Variable: Boost_Trigger_Increasing_Limit
                                      * Referenced by: '<S350>/Constant3'
                                      */
real_T Boost_Trigger_Low_Speed = 1.5;  /* Variable: Boost_Trigger_Low_Speed
                                        * Referenced by: '<S346>/Constant1'
                                        */
real_T Coral_Arm_Angle_Error_Threshold = 1.0;
                                    /* Variable: Coral_Arm_Angle_Error_Threshold
                                     * Referenced by: '<S335>/Reefscape_Chart'
                                     */
real_T Coral_Arm_Angle_L1 = -65.0;     /* Variable: Coral_Arm_Angle_L1
                                        * Referenced by: '<S335>/Reefscape_Chart'
                                        */
real_T Coral_Arm_Angle_L2 = 42.0;      /* Variable: Coral_Arm_Angle_L2
                                        * Referenced by: '<S335>/Reefscape_Chart'
                                        */
real_T Coral_Arm_Angle_L3 = 42.0;      /* Variable: Coral_Arm_Angle_L3
                                        * Referenced by: '<S335>/Reefscape_Chart'
                                        */
real_T Coral_Arm_Angle_L4 = 45.0;      /* Variable: Coral_Arm_Angle_L4
                                        * Referenced by: '<S335>/Reefscape_Chart'
                                        */
real_T Coral_Arm_Gain_Int = 0.01;      /* Variable: Coral_Arm_Gain_Int
                                        * Referenced by: '<S23>/Gain2'
                                        */
real_T Coral_Arm_Gain_Prop = 0.1;      /* Variable: Coral_Arm_Gain_Prop
                                        * Referenced by: '<S23>/Gain1'
                                        */
real_T Coral_Arm_Int_IC = 0.0;         /* Variable: Coral_Arm_Int_IC
                                        * Referenced by: '<S23>/Constant3'
                                        */
real_T Coral_Arm_Int_LL = -0.1;        /* Variable: Coral_Arm_Int_LL
                                        * Referenced by: '<S23>/Saturation1'
                                        */
real_T Coral_Arm_Int_UL = 0.1;         /* Variable: Coral_Arm_Int_UL
                                        * Referenced by: '<S23>/Saturation1'
                                        */
real_T Coral_Arm_Manual_Gain = 0.0;    /* Variable: Coral_Arm_Manual_Gain
                                        * Referenced by: '<S335>/Reefscape_Chart'
                                        */
real_T Coral_Arm_Total_LL = -1.0;      /* Variable: Coral_Arm_Total_LL
                                        * Referenced by:
                                        *   '<S23>/Constant1'
                                        *   '<S23>/Saturation2'
                                        */
real_T Coral_Arm_Total_UL = 1.0;       /* Variable: Coral_Arm_Total_UL
                                        * Referenced by:
                                        *   '<S23>/Constant'
                                        *   '<S23>/Saturation2'
                                        */
real_T Coral_Detect_Distance = 100.0;  /* Variable: Coral_Detect_Distance
                                        * Referenced by: '<S335>/Reefscape_Chart'
                                        */
real_T Coral_Eject_Time = 1.0;         /* Variable: Coral_Eject_Time
                                        * Referenced by: '<S335>/Reefscape_Chart'
                                        */
real_T Coral_Motor_DC_Eject = -0.1;    /* Variable: Coral_Motor_DC_Eject
                                        * Referenced by: '<S335>/Reefscape_Chart'
                                        */
real_T Coral_Motor_DC_Hold = 0.01;     /* Variable: Coral_Motor_DC_Hold
                                        * Referenced by: '<S335>/Reefscape_Chart'
                                        */
real_T Coral_Motor_DC_Pickup = 0.1;    /* Variable: Coral_Motor_DC_Pickup
                                        * Referenced by: '<S335>/Reefscape_Chart'
                                        */
real_T Distance_FL_y = 0.18732;        /* Variable: Distance_FL_y
                                        * Referenced by: '<S273>/Constant4'
                                        */
real_T Drive_Motor_Control_D = 0.0001; /* Variable: Drive_Motor_Control_D
                                        * Referenced by:
                                        *   '<S189>/Constant3'
                                        *   '<S210>/Constant3'
                                        *   '<S231>/Constant3'
                                        *   '<S252>/Constant3'
                                        */
real_T Drive_Motor_Control_D_FilterCoeff = 0.22223;
                                  /* Variable: Drive_Motor_Control_D_FilterCoeff
                                   * Referenced by:
                                   *   '<S189>/Constant2'
                                   *   '<S210>/Constant2'
                                   *   '<S231>/Constant2'
                                   *   '<S252>/Constant2'
                                   */
real_T Drive_Motor_Control_D_LL = -0.2;/* Variable: Drive_Motor_Control_D_LL
                                        * Referenced by:
                                        *   '<S189>/Saturation'
                                        *   '<S210>/Saturation'
                                        *   '<S231>/Saturation'
                                        *   '<S252>/Saturation'
                                        */
real_T Drive_Motor_Control_D_UL = 0.2; /* Variable: Drive_Motor_Control_D_UL
                                        * Referenced by:
                                        *   '<S189>/Saturation'
                                        *   '<S210>/Saturation'
                                        *   '<S231>/Saturation'
                                        *   '<S252>/Saturation'
                                        */
real_T Drive_Motor_Control_FF = 0.00016129;/* Variable: Drive_Motor_Control_FF
                                            * Referenced by:
                                            *   '<S189>/Gain'
                                            *   '<S210>/Gain'
                                            *   '<S231>/Gain'
                                            *   '<S252>/Gain'
                                            */
real_T Drive_Motor_Control_I = 0.0;    /* Variable: Drive_Motor_Control_I
                                        * Referenced by:
                                        *   '<S189>/Gain2'
                                        *   '<S210>/Gain2'
                                        *   '<S231>/Gain2'
                                        *   '<S252>/Gain2'
                                        */
real_T Drive_Motor_Control_I_LL = 0.0; /* Variable: Drive_Motor_Control_I_LL
                                        * Referenced by:
                                        *   '<S189>/Saturation1'
                                        *   '<S210>/Saturation1'
                                        *   '<S231>/Saturation1'
                                        *   '<S252>/Saturation1'
                                        */
real_T Drive_Motor_Control_I_UL = 0.0; /* Variable: Drive_Motor_Control_I_UL
                                        * Referenced by:
                                        *   '<S189>/Saturation1'
                                        *   '<S210>/Saturation1'
                                        *   '<S231>/Saturation1'
                                        *   '<S252>/Saturation1'
                                        */
real_T Drive_Motor_Control_P = 5.0E-6; /* Variable: Drive_Motor_Control_P
                                        * Referenced by:
                                        *   '<S189>/Gain1'
                                        *   '<S210>/Gain1'
                                        *   '<S231>/Gain1'
                                        *   '<S252>/Gain1'
                                        */
real_T Drive_Motor_Control_Sign_Change_Deadband = 7000.0;
                           /* Variable: Drive_Motor_Control_Sign_Change_Deadband
                            * Referenced by:
                            *   '<S194>/Constant'
                            *   '<S215>/Constant'
                            *   '<S236>/Constant'
                            *   '<S257>/Constant'
                            */
real_T Elevator_Error_Bottom_Disable = 3.0;
                                      /* Variable: Elevator_Error_Bottom_Disable
                                       * Referenced by: '<S26>/Constant'
                                       */
real_T Elevator_Gain_Int = 0.02;       /* Variable: Elevator_Gain_Int
                                        * Referenced by: '<S28>/Gain2'
                                        */
real_T Elevator_Gain_Prop = 0.3;       /* Variable: Elevator_Gain_Prop
                                        * Referenced by: '<S28>/Gain1'
                                        */
real_T Elevator_Height_Bottom = 0.0;   /* Variable: Elevator_Height_Bottom
                                        * Referenced by: '<S335>/Reefscape_Chart'
                                        */
real_T Elevator_Height_Error_Threshold = 1.0;
                                    /* Variable: Elevator_Height_Error_Threshold
                                     * Referenced by: '<S335>/Reefscape_Chart'
                                     */
real_T Elevator_Height_L1 = 13.0;      /* Variable: Elevator_Height_L1
                                        * Referenced by: '<S335>/Reefscape_Chart'
                                        */
real_T Elevator_Height_L2 = 5.25;      /* Variable: Elevator_Height_L2
                                        * Referenced by: '<S335>/Reefscape_Chart'
                                        */
real_T Elevator_Height_L3 = 13.125;    /* Variable: Elevator_Height_L3
                                        * Referenced by: '<S335>/Reefscape_Chart'
                                        */
real_T Elevator_Height_L4 = 26.125;    /* Variable: Elevator_Height_L4
                                        * Referenced by: '<S335>/Reefscape_Chart'
                                        */
real_T Elevator_Height_Lower = 5.0;    /* Variable: Elevator_Height_Lower
                                        * Referenced by: '<S335>/Reefscape_Chart'
                                        */
real_T Elevator_Height_Manual_Gain = 0.0;/* Variable: Elevator_Height_Manual_Gain
                                          * Referenced by: '<S335>/Reefscape_Chart'
                                          */
real_T Elevator_Height_Prepare = 7.0;  /* Variable: Elevator_Height_Prepare
                                        * Referenced by: '<S335>/Reefscape_Chart'
                                        */
real_T Elevator_Height_Raise = 7.0;    /* Variable: Elevator_Height_Raise
                                        * Referenced by: '<S335>/Reefscape_Chart'
                                        */
real_T Elevator_Height_Top = 28.0;     /* Variable: Elevator_Height_Top
                                        * Referenced by: '<S335>/Reefscape_Chart'
                                        */
real_T Elevator_Hold_at_Top_DC = 0.01; /* Variable: Elevator_Hold_at_Top_DC
                                        * Referenced by: '<S9>/Constant1'
                                        */
real_T Elevator_Int_IC = 0.0;          /* Variable: Elevator_Int_IC
                                        * Referenced by: '<S28>/Constant3'
                                        */
real_T Elevator_Int_LL = -0.1;         /* Variable: Elevator_Int_LL
                                        * Referenced by: '<S28>/Saturation1'
                                        */
real_T Elevator_Int_UL = 0.1;          /* Variable: Elevator_Int_UL
                                        * Referenced by: '<S28>/Saturation1'
                                        */
real_T Elevator_MotorRev_to_Inch = 0.27646;/* Variable: Elevator_MotorRev_to_Inch
                                            * Referenced by: '<S10>/Gain1'
                                            */
real_T Elevator_Total_LL = -0.4;       /* Variable: Elevator_Total_LL
                                        * Referenced by:
                                        *   '<S28>/Constant1'
                                        *   '<S28>/Saturation2'
                                        */
real_T Elevator_Total_UL = 1.0;        /* Variable: Elevator_Total_UL
                                        * Referenced by:
                                        *   '<S28>/Constant'
                                        *   '<S28>/Saturation2'
                                        */
real_T Gyro_Calibration_Reset_Degree = 0.0;
                                      /* Variable: Gyro_Calibration_Reset_Degree
                                       * Referenced by:
                                       *   '<S11>/Constant2'
                                       *   '<S11>/Unit Delay1'
                                       */
real_T Gyro_Calibration_Reset_Flag = 0.0;/* Variable: Gyro_Calibration_Reset_Flag
                                          * Referenced by: '<S11>/Constant3'
                                          */
real_T KF_Enable = 1.0;                /* Variable: KF_Enable
                                        * Referenced by:
                                        *   '<S14>/Constant1'
                                        *   '<S14>/Constant2'
                                        */
real_T KF_Vision_Ambiguity_Thresh = 0.1;/* Variable: KF_Vision_Ambiguity_Thresh
                                         * Referenced by: '<S14>/Constant'
                                         */
real_T Odometry_IC_X = 0.0;            /* Variable: Odometry_IC_X
                                        * Referenced by: '<S1>/Constant'
                                        */
real_T Odometry_IC_Y = 0.0;            /* Variable: Odometry_IC_Y
                                        * Referenced by: '<S1>/Constant1'
                                        */
real_T Odometry_Reset_IC = 0.0;        /* Variable: Odometry_Reset_IC
                                        * Referenced by: '<S16>/Constant'
                                        */
real_T Odometry_X_Y_TEAR = 0.0;        /* Variable: Odometry_X_Y_TEAR
                                        * Referenced by: '<S115>/Constant'
                                        */
real_T Spline_Last_Pose_Distance_to_Velocity_Gain = 2.0;
                         /* Variable: Spline_Last_Pose_Distance_to_Velocity_Gain
                          * Referenced by: '<S174>/Constant2'
                          */
real_T Spline_Max_Centripital_Acceleration = 10.0;
                                /* Variable: Spline_Max_Centripital_Acceleration
                                 * Referenced by: '<S174>/Constant1'
                                 */
real_T Spline_Pose_Num_Before_End_Reduce_Speed = 1.0;
                            /* Variable: Spline_Pose_Num_Before_End_Reduce_Speed
                             * Referenced by: '<S121>/Constant'
                             */
real_T Spline_Stop_Radius = 0.1;       /* Variable: Spline_Stop_Radius
                                        * Referenced by: '<S134>/Constant'
                                        */
real_T Spline_Velocity_Multiplier_TEST = 1.0;
                                    /* Variable: Spline_Velocity_Multiplier_TEST
                                     * Referenced by: '<S174>/Constant3'
                                     */
real_T Steering_Absolute_Cmd_Approach_Zero_Error_Thresh = 0.2;
                   /* Variable: Steering_Absolute_Cmd_Approach_Zero_Error_Thresh
                    * Referenced by: '<S285>/Constant5'
                    */
real_T Steering_Absolute_Cmd_Approach_Zero_Final_Thresh = 0.01;
                   /* Variable: Steering_Absolute_Cmd_Approach_Zero_Final_Thresh
                    * Referenced by: '<S285>/Constant6'
                    */
real_T Steering_Absolute_Cmd_NonZero_Error_Thresh = 0.2;
                         /* Variable: Steering_Absolute_Cmd_NonZero_Error_Thresh
                          * Referenced by: '<S285>/Constant9'
                          */
real_T Steering_Absolute_Cmd_NonZero_Final_Scale_Factor = 0.1;
                   /* Variable: Steering_Absolute_Cmd_NonZero_Final_Scale_Factor
                    * Referenced by: '<S285>/Constant10'
                    */
real_T Steering_Absolute_Cmd_Rate_Limit_Dec = -1.0;
                               /* Variable: Steering_Absolute_Cmd_Rate_Limit_Dec
                                * Referenced by: '<S285>/Constant1'
                                */
real_T Steering_Absolute_Cmd_Rate_Limit_Inc = 1.0;
                               /* Variable: Steering_Absolute_Cmd_Rate_Limit_Inc
                                * Referenced by: '<S285>/Constant3'
                                */
real_T Steering_Heading_Control_D = 0.0;/* Variable: Steering_Heading_Control_D
                                         * Referenced by: '<S302>/Constant3'
                                         */
real_T Steering_Heading_Control_D_FilterCoeff = 0.22223;
                             /* Variable: Steering_Heading_Control_D_FilterCoeff
                              * Referenced by: '<S302>/Constant2'
                              */
real_T Steering_Heading_Control_D_LL = 0.0;
                                      /* Variable: Steering_Heading_Control_D_LL
                                       * Referenced by: '<S302>/Saturation'
                                       */
real_T Steering_Heading_Control_D_UL = 0.0;
                                      /* Variable: Steering_Heading_Control_D_UL
                                       * Referenced by: '<S302>/Saturation'
                                       */
real_T Steering_Heading_Control_Deadzone = 0.1;
                                  /* Variable: Steering_Heading_Control_Deadzone
                                   * Referenced by: '<S301>/Constant'
                                   */
real_T Steering_Heading_Control_I = 0.0;/* Variable: Steering_Heading_Control_I
                                         * Referenced by: '<S302>/Gain2'
                                         */
real_T Steering_Heading_Control_I_LL = -0.1;
                                      /* Variable: Steering_Heading_Control_I_LL
                                       * Referenced by: '<S302>/Saturation1'
                                       */
real_T Steering_Heading_Control_I_UL = 0.1;
                                      /* Variable: Steering_Heading_Control_I_UL
                                       * Referenced by: '<S302>/Saturation1'
                                       */
real_T Steering_Heading_Control_P = 2.5;/* Variable: Steering_Heading_Control_P
                                         * Referenced by: '<S302>/Gain1'
                                         */
real_T Steering_Heading_Control_Total_LL = -2.5;
                                  /* Variable: Steering_Heading_Control_Total_LL
                                   * Referenced by:
                                   *   '<S302>/Constant1'
                                   *   '<S302>/Saturation2'
                                   */
real_T Steering_Heading_Control_Total_UL = 2.5;
                                  /* Variable: Steering_Heading_Control_Total_UL
                                   * Referenced by:
                                   *   '<S302>/Constant'
                                   *   '<S302>/Saturation2'
                                   */
real_T Steering_Motor_Control_D = 0.5; /* Variable: Steering_Motor_Control_D
                                        * Referenced by:
                                        *   '<S192>/Constant3'
                                        *   '<S213>/Constant3'
                                        *   '<S234>/Constant3'
                                        *   '<S255>/Constant3'
                                        */
real_T Steering_Motor_Control_D_FilterCoeff = 0.22223;
                               /* Variable: Steering_Motor_Control_D_FilterCoeff
                                * Referenced by:
                                *   '<S192>/Constant2'
                                *   '<S213>/Constant2'
                                *   '<S234>/Constant2'
                                *   '<S255>/Constant2'
                                */
real_T Steering_Motor_Control_D_LL = -0.2;/* Variable: Steering_Motor_Control_D_LL
                                           * Referenced by:
                                           *   '<S192>/Saturation'
                                           *   '<S213>/Saturation'
                                           *   '<S234>/Saturation'
                                           *   '<S255>/Saturation'
                                           */
real_T Steering_Motor_Control_D_UL = 0.2;/* Variable: Steering_Motor_Control_D_UL
                                          * Referenced by:
                                          *   '<S192>/Saturation'
                                          *   '<S213>/Saturation'
                                          *   '<S234>/Saturation'
                                          *   '<S255>/Saturation'
                                          */
real_T Steering_Motor_Control_I = 0.005;/* Variable: Steering_Motor_Control_I
                                         * Referenced by:
                                         *   '<S192>/Gain2'
                                         *   '<S213>/Gain2'
                                         *   '<S234>/Gain2'
                                         *   '<S255>/Gain2'
                                         */
real_T Steering_Motor_Control_I_LL = -0.005;/* Variable: Steering_Motor_Control_I_LL
                                             * Referenced by:
                                             *   '<S192>/Saturation1'
                                             *   '<S213>/Saturation1'
                                             *   '<S234>/Saturation1'
                                             *   '<S255>/Saturation1'
                                             */
real_T Steering_Motor_Control_I_UL = 0.005;/* Variable: Steering_Motor_Control_I_UL
                                            * Referenced by:
                                            *   '<S192>/Saturation1'
                                            *   '<S213>/Saturation1'
                                            *   '<S234>/Saturation1'
                                            *   '<S255>/Saturation1'
                                            */
real_T Steering_Motor_Control_P = 0.15;/* Variable: Steering_Motor_Control_P
                                        * Referenced by:
                                        *   '<S192>/Gain1'
                                        *   '<S213>/Gain1'
                                        *   '<S234>/Gain1'
                                        *   '<S255>/Gain1'
                                        */
real_T Steering_Relative_Cmd_Approach_Zero_Error_Thresh = 0.2;
                   /* Variable: Steering_Relative_Cmd_Approach_Zero_Error_Thresh
                    * Referenced by: '<S284>/Constant5'
                    */
real_T Steering_Relative_Cmd_Approach_Zero_Final_Thresh = 0.01;
                   /* Variable: Steering_Relative_Cmd_Approach_Zero_Final_Thresh
                    * Referenced by: '<S284>/Constant6'
                    */
real_T Steering_Relative_Cmd_NonZero_Error_Thresh = 0.2;
                         /* Variable: Steering_Relative_Cmd_NonZero_Error_Thresh
                          * Referenced by: '<S284>/Constant9'
                          */
real_T Steering_Relative_Cmd_NonZero_Final_Scale_Factor = 1.0;
                   /* Variable: Steering_Relative_Cmd_NonZero_Final_Scale_Factor
                    * Referenced by: '<S284>/Constant10'
                    */
real_T Steering_Relative_Cmd_Rate_Limit_Dec = -10.0;
                               /* Variable: Steering_Relative_Cmd_Rate_Limit_Dec
                                * Referenced by: '<S284>/Constant1'
                                */
real_T Steering_Relative_Cmd_Rate_Limit_Inc = 10.0;
                               /* Variable: Steering_Relative_Cmd_Rate_Limit_Inc
                                * Referenced by: '<S284>/Constant3'
                                */
real_T Steering_Relative_Gain = 5.0;   /* Variable: Steering_Relative_Gain
                                        * Referenced by: '<S336>/Constant'
                                        */
real_T Steering_Twist_Gain = -0.5;     /* Variable: Steering_Twist_Gain
                                        * Referenced by: '<S336>/Constant1'
                                        */
real_T TEST_Swerve_Mode_Override_Flag = 0.0;
                                     /* Variable: TEST_Swerve_Mode_Override_Flag
                                      * Referenced by: '<S21>/Constant5'
                                      */
real_T TEST_Swerve_Mode_Steering = 0.0;/* Variable: TEST_Swerve_Mode_Steering
                                        * Referenced by: '<S21>/Constant8'
                                        */
real_T TEST_Swerve_Mode_Translation = 0.0;/* Variable: TEST_Swerve_Mode_Translation
                                           * Referenced by: '<S21>/Constant7'
                                           */
real_T Translation_Speed_Approach_Zero_Error_Thresh = 0.2;
                       /* Variable: Translation_Speed_Approach_Zero_Error_Thresh
                        * Referenced by: '<S272>/Constant5'
                        */
real_T Translation_Speed_Approach_Zero_Final_Thresh = 0.01;
                       /* Variable: Translation_Speed_Approach_Zero_Final_Thresh
                        * Referenced by: '<S272>/Constant6'
                        */
real_T Translation_Speed_NonZero_Error_Thresh = 0.15;
                             /* Variable: Translation_Speed_NonZero_Error_Thresh
                              * Referenced by: '<S272>/Constant9'
                              */
real_T Translation_Speed_NonZero_Final_Scale_Factor = 0.05;
                       /* Variable: Translation_Speed_NonZero_Final_Scale_Factor
                        * Referenced by: '<S272>/Constant10'
                        */
real_T Translation_Speed_Rate_Limit_Dec = -4.0;
                                   /* Variable: Translation_Speed_Rate_Limit_Dec
                                    * Referenced by: '<S272>/Constant1'
                                    */
real_T Translation_Speed_Rate_Limit_Inc = 4.0;
                                   /* Variable: Translation_Speed_Rate_Limit_Inc
                                    * Referenced by: '<S272>/Constant3'
                                    */
real_T Translation_Twist_Gain = 0.5;   /* Variable: Translation_Twist_Gain
                                        * Referenced by: '<S337>/Gain'
                                        */
real_T Twist_Deadzone_neg = -0.01;     /* Variable: Twist_Deadzone_neg
                                        * Referenced by:
                                        *   '<S336>/Dead Zone'
                                        *   '<S337>/Dead Zone'
                                        */
real_T Twist_Deadzone_pos = 0.01;      /* Variable: Twist_Deadzone_pos
                                        * Referenced by:
                                        *   '<S336>/Dead Zone'
                                        *   '<S337>/Dead Zone'
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

/* Function for Chart: '<S335>/Reefscape_Chart' */
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
  real_T rtb_thetay_n[8];
  real_T rtb_Akxhatkk1[2];
  real_T rtb_Minus_n[2];
  real_T rtb_Add2_k_idx_0;
  real_T rtb_Add2_k_idx_1;
  real_T rtb_Add_du;
  real_T rtb_Add_gj;
  real_T rtb_Add_i;
  real_T rtb_Add_o2;
  real_T rtb_Add_oh;
  real_T rtb_Add_ov;
  real_T rtb_FeedForward;
  real_T rtb_FeedForward_a;
  real_T rtb_FeedForward_n;
  real_T rtb_Hypot_bl;
  real_T rtb_Hypot_d;
  real_T rtb_Merge1;
  real_T rtb_POSEexponentialmatrixfori_0;
  real_T rtb_Product2_f;
  real_T rtb_Product2_l;
  real_T rtb_Product_d;
  real_T rtb_Reshapey_idx_0;
  real_T rtb_Reshapey_idx_1;
  real_T rtb_Sin4;
  real_T rtb_Subtract1;
  real_T rtb_Subtract1_a;
  real_T rtb_Subtract1_do;
  real_T rtb_Subtract1_f;
  real_T rtb_Subtract1_of;
  real_T rtb_Subtract_e;
  real_T rtb_Sum_jt;
  real_T rtb_Switch1;
  real_T rtb_Switch1_h;
  real_T rtb_Switch1_hk;
  real_T rtb_Switch2;
  real_T rtb_Switch2_k;
  real_T rtb_Switch4;
  real_T rtb_Switch_jh;
  real_T rtb_rx;
  real_T rtb_rx_d;
  real_T rtb_rx_j;
  real_T rtb_rx_k;
  real_T rtb_rx_o;
  real_T rtb_thetay;
  real_T rtb_thetay_f;
  real_T rtb_thetay_g;
  real_T rtb_thetay_m;
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
  boolean_T rtb_AT_Tag_16_Active;
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

  /* RelationalOperator: '<S49>/FixPt Relational Operator' incorporates:
   *  Inport: '<Root>/Joystick_Left_B11'
   *  UnitDelay: '<S49>/Delay Input1'
   *
   * Block description for '<S49>/Delay Input1':
   *
   *  Store in Global RAM
   */
  rtb_FixPtRelationalOperator = (Code_Gen_Model_U.Joystick_Left_B11 >
    Code_Gen_Model_DW.DelayInput1_DSTATE);

  /* RelationalOperator: '<S51>/FixPt Relational Operator' incorporates:
   *  Inport: '<Root>/Joystick_Left_B13'
   *  UnitDelay: '<S51>/Delay Input1'
   *
   * Block description for '<S51>/Delay Input1':
   *
   *  Store in Global RAM
   */
  rtb_FixPtRelationalOperator_ea = (Code_Gen_Model_U.Joystick_Left_B13 >
    Code_Gen_Model_DW.DelayInput1_DSTATE_n);

  /* SignalConversion: '<S12>/Signal Copy1' incorporates:
   *  Inport: '<Root>/Joystick_Left_X'
   */
  Code_Gen_Model_B.Drive_Joystick_X = Code_Gen_Model_U.Joystick_Left_X;

  /* SignalConversion: '<S12>/Signal Copy2' incorporates:
   *  Inport: '<Root>/Joystick_Left_Y'
   */
  Code_Gen_Model_B.Drive_Joystick_Y = Code_Gen_Model_U.Joystick_Left_Y;

  /* SignalConversion: '<S12>/Signal Copy3' incorporates:
   *  Inport: '<Root>/Joystick_Left_Z'
   */
  Code_Gen_Model_B.Drive_Joystick_Z = Code_Gen_Model_U.Joystick_Left_Z;

  /* RelationalOperator: '<S41>/Compare' incorporates:
   *  Constant: '<S41>/Constant'
   *  Inport: '<Root>/Joystick_Left_POV'
   */
  Code_Gen_Model_B.Drive_Joystick_Z_Mode = (Code_Gen_Model_U.Joystick_Left_POV
    != -1.0);

  /* SignalConversion: '<S12>/Signal Copy5' incorporates:
   *  Inport: '<Root>/Joystick_Right_Y'
   */
  Code_Gen_Model_B.Steer_Joystick_Y = Code_Gen_Model_U.Joystick_Right_Y;

  /* SignalConversion: '<S12>/Signal Copy6' incorporates:
   *  Inport: '<Root>/Joystick_Right_Z'
   */
  Code_Gen_Model_B.Steer_Joystick_Z = Code_Gen_Model_U.Joystick_Right_Z;

  /* RelationalOperator: '<S48>/Compare' incorporates:
   *  Constant: '<S48>/Constant'
   *  Inport: '<Root>/Joystick_Left_B1'
   */
  Code_Gen_Model_B.Is_Boosting = (Code_Gen_Model_U.Joystick_Left_B1 != 0.0);

  /* RelationalOperator: '<S46>/Compare' incorporates:
   *  Constant: '<S46>/Constant'
   *  Inport: '<Root>/Joystick_Left_B3'
   */
  Code_Gen_Model_B.Align_Amp = (Code_Gen_Model_U.Joystick_Left_B3 != 0.0);

  /* RelationalOperator: '<S45>/Compare' incorporates:
   *  Constant: '<S45>/Constant'
   *  Inport: '<Root>/Joystick_Left_B4'
   */
  Code_Gen_Model_B.Align_Speaker = (Code_Gen_Model_U.Joystick_Left_B4 != 0.0);

  /* RelationalOperator: '<S44>/Compare' incorporates:
   *  Constant: '<S44>/Constant'
   *  Inport: '<Root>/Joystick_Right_B2'
   */
  Code_Gen_Model_B.Face_Toward_Driver = (Code_Gen_Model_U.Joystick_Right_B2 !=
    0.0);

  /* RelationalOperator: '<S42>/Compare' incorporates:
   *  Constant: '<S42>/Constant'
   *  Inport: '<Root>/Joystick_Right_B4'
   */
  Code_Gen_Model_B.Face_Right_Driver = (Code_Gen_Model_U.Joystick_Right_B4 !=
    0.0);

  /* RelationalOperator: '<S43>/Compare' incorporates:
   *  Constant: '<S43>/Constant'
   *  Inport: '<Root>/Joystick_Right_B3'
   */
  Code_Gen_Model_B.Face_Left_Driver = (Code_Gen_Model_U.Joystick_Right_B3 != 0.0);

  /* RelationalOperator: '<S40>/Compare' incorporates:
   *  Constant: '<S40>/Constant'
   *  Inport: '<Root>/Joystick_Right_POV'
   */
  Code_Gen_Model_B.Face_Away_Driver = (Code_Gen_Model_U.Joystick_Right_POV !=
    -1.0);

  /* Reshape: '<S52>/Reshapey' incorporates:
   *  Inport: '<Root>/Photon_Est_Pose_X'
   *  Inport: '<Root>/Photon_Est_Pose_Y'
   *  S-Function (sfix_udelay): '<S14>/Tapped Delay'
   *  S-Function (sfix_udelay): '<S14>/Tapped Delay1'
   *  Sum: '<S14>/Add'
   *  Sum: '<S14>/Add1'
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

  /* Delay: '<S52>/MemoryX' incorporates:
   *  Constant: '<S52>/X0'
   */
  if (Code_Gen_Model_DW.icLoad) {
    Code_Gen_Model_DW.MemoryX_DSTATE[0] = 0.0;
    Code_Gen_Model_DW.MemoryX_DSTATE[1] = 0.0;
  }

  /* Logic: '<S14>/AND' incorporates:
   *  Constant: '<S14>/Constant'
   *  Constant: '<S14>/Constant1'
   *  Inport: '<Root>/Photon_Est_Pose_Ambiguity'
   *  RelationalOperator: '<S14>/Relational Operator'
   */
  rtb_AND = ((Code_Gen_Model_U.Photon_Est_Pose_Ambiguity <=
              KF_Vision_Ambiguity_Thresh) && (KF_Enable != 0.0));

  /* Outputs for Enabled SubSystem: '<S79>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S105>/Enable'
   */
  if (rtb_AND) {
    Code_Gen_Model_DW.EnabledSubsystem_MODE = true;

    /* Sum: '<S105>/Add1' incorporates:
     *  Constant: '<S52>/C'
     *  Delay: '<S52>/MemoryX'
     *  Product: '<S105>/Product'
     */
    rtb_Switch1 = rtb_Reshapey_idx_0 - ((0.0 * Code_Gen_Model_DW.MemoryX_DSTATE
      [1]) + Code_Gen_Model_DW.MemoryX_DSTATE[0]);
    rtb_Switch1_hk = rtb_Reshapey_idx_1 - ((0.0 *
      Code_Gen_Model_DW.MemoryX_DSTATE[0]) + Code_Gen_Model_DW.MemoryX_DSTATE[1]);

    /* Product: '<S105>/Product2' incorporates:
     *  Constant: '<S53>/KalmanGainM'
     */
    Code_Gen_Model_B.Product2[0] = (0.09512492197250387 * rtb_Switch1) +
      (5.9896845167210271E-17 * rtb_Switch1_hk);
    Code_Gen_Model_B.Product2[1] = (5.9896845167210271E-17 * rtb_Switch1) +
      (0.095124921972503981 * rtb_Switch1_hk);
  } else if (Code_Gen_Model_DW.EnabledSubsystem_MODE) {
    /* Disable for Product: '<S105>/Product2' incorporates:
     *  Outport: '<S105>/deltax'
     */
    Code_Gen_Model_B.Product2[0] = 0.0;
    Code_Gen_Model_B.Product2[1] = 0.0;
    Code_Gen_Model_DW.EnabledSubsystem_MODE = false;
  }

  /* End of Outputs for SubSystem: '<S79>/Enabled Subsystem' */

  /* Sum: '<S79>/Add' incorporates:
   *  Delay: '<S52>/MemoryX'
   */
  rtb_Akxhatkk1[0] = Code_Gen_Model_B.Product2[0] +
    Code_Gen_Model_DW.MemoryX_DSTATE[0];
  rtb_Akxhatkk1[1] = Code_Gen_Model_B.Product2[1] +
    Code_Gen_Model_DW.MemoryX_DSTATE[1];

  /* DiscreteIntegrator: '<S16>/Accumulator2' incorporates:
   *  Constant: '<S16>/Constant'
   *  Constant: '<S1>/Constant'
   */
  if ((Odometry_Reset_IC > 0.0) &&
      (Code_Gen_Model_DW.Accumulator2_PrevResetState <= 0)) {
    Code_Gen_Model_DW.Accumulator2_DSTATE = Odometry_IC_X;
  }

  /* DiscreteIntegrator: '<S16>/Accumulator2' */
  Code_Gen_Model_B.Odom_Position_X = Code_Gen_Model_DW.Accumulator2_DSTATE;

  /* Switch: '<S14>/Switch' incorporates:
   *  Constant: '<S14>/Constant2'
   */
  if (KF_Enable != 0.0) {
    /* Switch: '<S14>/Switch' */
    Code_Gen_Model_B.KF_Position_X = rtb_Akxhatkk1[0];
  } else {
    /* Switch: '<S14>/Switch' */
    Code_Gen_Model_B.KF_Position_X = Code_Gen_Model_B.Odom_Position_X;
  }

  /* End of Switch: '<S14>/Switch' */

  /* DiscreteIntegrator: '<S16>/Accumulator' incorporates:
   *  Constant: '<S16>/Constant'
   *  Constant: '<S1>/Constant1'
   */
  if ((Odometry_Reset_IC > 0.0) && (Code_Gen_Model_DW.Accumulator_PrevResetState
       <= 0)) {
    Code_Gen_Model_DW.Accumulator_DSTATE = Odometry_IC_Y;
  }

  /* DiscreteIntegrator: '<S16>/Accumulator' */
  Code_Gen_Model_B.Odom_Position_Y = Code_Gen_Model_DW.Accumulator_DSTATE;

  /* Switch: '<S14>/Switch1' incorporates:
   *  Constant: '<S14>/Constant2'
   */
  if (KF_Enable != 0.0) {
    /* Switch: '<S14>/Switch1' */
    Code_Gen_Model_B.KF_Position_Y = rtb_Akxhatkk1[1];
  } else {
    /* Switch: '<S14>/Switch1' */
    Code_Gen_Model_B.KF_Position_Y = Code_Gen_Model_B.Odom_Position_Y;
  }

  /* End of Switch: '<S14>/Switch1' */

  /* Switch: '<S11>/Switch1' incorporates:
   *  Constant: '<S11>/Constant2'
   *  Constant: '<S11>/Constant3'
   *  Inport: '<Root>/Gyro_Angle'
   *  RelationalOperator: '<S34>/FixPt Relational Operator'
   *  Sum: '<S11>/Sum'
   *  UnitDelay: '<S11>/Unit Delay1'
   *  UnitDelay: '<S34>/Delay Input1'
   *
   * Block description for '<S34>/Delay Input1':
   *
   *  Store in Global RAM
   */
  if (Gyro_Calibration_Reset_Flag > Code_Gen_Model_DW.DelayInput1_DSTATE_p) {
    rtb_Switch1 = Gyro_Calibration_Reset_Degree - Code_Gen_Model_U.Gyro_Angle;
  } else {
    rtb_Switch1 = Code_Gen_Model_DW.UnitDelay1_DSTATE;
  }

  /* End of Switch: '<S11>/Switch1' */

  /* Sum: '<S11>/Subtract1' incorporates:
   *  Inport: '<Root>/Gyro_Angle'
   */
  Code_Gen_Model_B.Gyro_Angle_Calibrated_deg = Code_Gen_Model_U.Gyro_Angle +
    rtb_Switch1;

  /* Gain: '<S33>/Gain1' */
  Code_Gen_Model_B.Gyro_Angle_rad = 0.017453292519943295 *
    Code_Gen_Model_B.Gyro_Angle_Calibrated_deg;

  /* RelationalOperator: '<S36>/Compare' incorporates:
   *  Constant: '<S36>/Constant'
   *  Inport: '<Root>/Gamepad_POV'
   */
  rtb_Compare_a = (Code_Gen_Model_U.Gamepad_POV != -1.0);

  /* Logic: '<S12>/Logical Operator' incorporates:
   *  Constant: '<S35>/Constant'
   *  Constant: '<S37>/Constant'
   *  Inport: '<Root>/Gamepad_POV'
   *  Logic: '<S12>/Logical Operator1'
   *  RelationalOperator: '<S35>/Compare'
   *  RelationalOperator: '<S37>/Compare'
   */
  rtb_Gamepad_POV_Up = (rtb_Compare_a && ((Code_Gen_Model_U.Gamepad_POV <= 45.0)
    || (Code_Gen_Model_U.Gamepad_POV >= 315.0)));

  /* Logic: '<S12>/Logical Operator2' incorporates:
   *  Constant: '<S38>/Constant'
   *  Constant: '<S39>/Constant'
   *  Inport: '<Root>/Gamepad_POV'
   *  Logic: '<S12>/Logical Operator3'
   *  RelationalOperator: '<S38>/Compare'
   *  RelationalOperator: '<S39>/Compare'
   */
  rtb_Compare_a = (rtb_Compare_a && ((Code_Gen_Model_U.Gamepad_POV >= 135.0) &&
    (Code_Gen_Model_U.Gamepad_POV <= 225.0)));

  /* RelationalOperator: '<S3>/Compare' incorporates:
   *  Constant: '<S3>/Constant'
   *  Inport: '<Root>/Elevator_Limit_Switch_Bottom'
   */
  rtb_Compare_m = (Code_Gen_Model_U.Elevator_Limit_Switch_Bottom != 0.0);

  /* Gain: '<S10>/Gain1' incorporates:
   *  Inport: '<Root>/Elevator_Motor_Rev'
   */
  Code_Gen_Model_B.Elevator_Height_Measured_Raw = Elevator_MotorRev_to_Inch *
    Code_Gen_Model_U.Elevator_Motor_Rev;

  /* Switch: '<S10>/Switch1' incorporates:
   *  RelationalOperator: '<S32>/FixPt Relational Operator'
   *  UnitDelay: '<S10>/Unit Delay1'
   *  UnitDelay: '<S32>/Delay Input1'
   *
   * Block description for '<S32>/Delay Input1':
   *
   *  Store in Global RAM
   */
  if (((int32_T)rtb_Compare_m) < ((int32_T)
       Code_Gen_Model_DW.DelayInput1_DSTATE_l)) {
    rtb_Switch1_hk = Code_Gen_Model_B.Elevator_Height_Measured_Raw;
  } else {
    rtb_Switch1_hk = Code_Gen_Model_DW.UnitDelay1_DSTATE_j;
  }

  /* End of Switch: '<S10>/Switch1' */

  /* Sum: '<S10>/Subtract' */
  Code_Gen_Model_B.Elevator_Height_Offset =
    Code_Gen_Model_B.Elevator_Height_Measured_Raw - rtb_Switch1_hk;

  /* Switch: '<S10>/Switch' */
  if (rtb_Compare_m) {
    /* Switch: '<S10>/Switch' incorporates:
     *  Constant: '<S10>/Constant'
     */
    Code_Gen_Model_B.Elevator_Height_Measured = 0.0;
  } else {
    /* Switch: '<S10>/Switch' */
    Code_Gen_Model_B.Elevator_Height_Measured =
      Code_Gen_Model_B.Elevator_Height_Offset;
  }

  /* End of Switch: '<S10>/Switch' */

  /* Bias: '<S1>/Add Constant' incorporates:
   *  Inport: '<Root>/Coral_Arm_Angle_Measured_Raw'
   */
  Code_Gen_Model_B.Coral_Arm_Angle_Measured =
    Code_Gen_Model_U.Coral_Arm_Angle_Measured_Raw - 180.0;

  /* SwitchCase: '<S1>/Switch Case' incorporates:
   *  Inport: '<Root>/GameState'
   */
  rtPrevAction = Code_Gen_Model_DW.SwitchCase_ActiveSubsystem;
  rtb_Add_ov = trunc(Code_Gen_Model_U.GameState);
  if ((rtIsNaN(rtb_Add_ov)) || (rtIsInf(rtb_Add_ov))) {
    rtb_Add_ov = 0.0;
  } else {
    rtb_Add_ov = fmod(rtb_Add_ov, 4.294967296E+9);
  }

  switch ((rtb_Add_ov < 0.0) ? (-((int32_T)((uint32_T)(-rtb_Add_ov)))) :
          ((int32_T)((uint32_T)rtb_Add_ov))) {
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
     *  ActionPort: '<S8>/Action Port'
     */
    /* Merge: '<S15>/Merge1' incorporates:
     *  Constant: '<S8>/Constant1'
     *  SignalConversion generated from: '<S8>/Steering_Abs_Cmd'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd = 0.0;

    /* Merge: '<S15>/Merge2' incorporates:
     *  Constant: '<S8>/Constant2'
     *  SignalConversion generated from: '<S8>/Steering_Rel_Cmd'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd = 0.0;

    /* Merge: '<S15>/Merge3' incorporates:
     *  Constant: '<S8>/Constant3'
     *  SignalConversion generated from: '<S8>/Translation_Angle'
     */
    Code_Gen_Model_B.Translation_Angle = 0.0;

    /* Merge: '<S15>/Merge4' incorporates:
     *  Constant: '<S8>/Constant4'
     *  SignalConversion generated from: '<S8>/Translation_Speed'
     */
    Code_Gen_Model_B.Translation_Speed = 0.0;

    /* SignalConversion generated from: '<S8>/Is_Absolute_Translation' incorporates:
     *  Constant: '<S8>/Constant5'
     */
    rtb_Is_Absolute_Translation_g = true;

    /* SignalConversion generated from: '<S8>/Is_Absolute_Steering' incorporates:
     *  Constant: '<S8>/Constant6'
     */
    rtb_Is_Absolute_Steering = true;

    /* Merge: '<S15>/Merge7' incorporates:
     *  Constant: '<S8>/Constant7'
     *  SignalConversion generated from: '<S8>/Spline_Enable'
     */
    Code_Gen_Model_B.Spline_Enable = false;

    /* Merge: '<S15>/Merge9' incorporates:
     *  Constant: '<S8>/Constant9'
     *  SignalConversion generated from: '<S8>/Spline_Num_Poses'
     */
    Code_Gen_Model_B.Spline_Num_Poses = 10.0;

    /* Merge: '<S15>/Merge10' incorporates:
     *  Constant: '<S8>/Constant10'
     *  SignalConversion generated from: '<S8>/Test_Mode'
     */
    Code_Gen_Model_B.Test_Mode = false;

    /* SignalConversion generated from: '<S8>/Enable_Wheels' incorporates:
     *  Constant: '<S8>/Constant18'
     */
    rtb_rx = 0.0;

    /* SignalConversion generated from: '<S8>/Reset_Wheel_Offsets' incorporates:
     *  Constant: '<S8>/Constant13'
     */
    rtb_thetay = 0.0;

    /* SignalConversion generated from: '<S8>/Disable_Wheels' incorporates:
     *  Constant: '<S8>/Constant14'
     */
    rtb_rx_j = 0.0;

    /* SignalConversion generated from: '<S8>/Swerve_Motors_Disabled' incorporates:
     *  Constant: '<S8>/Constant12'
     */
    rtb_Swerve_Motors_Disabled = false;

    /* Merge: '<S15>/Merge12' incorporates:
     *  Constant: '<S8>/Constant15'
     *  SignalConversion generated from: '<S8>/Reefscape_Motors_Enable'
     */
    Code_Gen_Model_B.Reefscape_Motors_Enable = false;

    /* Merge: '<S15>/Merge11' incorporates:
     *  Constant: '<S8>/Constant11'
     *  SignalConversion generated from: '<S8>/Elevator_Height_Desired'
     */
    Code_Gen_Model_B.Elevator_Height_Desired = 0.0;

    /* Merge: '<S15>/Merge13' incorporates:
     *  Constant: '<S8>/Constant16'
     *  SignalConversion generated from: '<S8>/Coral_Arm_Angle_Desired'
     */
    Code_Gen_Model_B.Coral_Arm_Angle_Desired = -90.0;

    /* SignalConversion generated from: '<S8>/Coral_Wheel_DutyCycle' incorporates:
     *  Constant: '<S8>/Constant17'
     */
    rtb_thetay_f = 0.0;

    /* SignalConversion generated from: '<S8>/Algae_Wheel_Outside_DutyCycle' incorporates:
     *  Constant: '<S8>/Constant19'
     */
    rtb_rx_d = 0.0;

    /* SignalConversion generated from: '<S8>/Algae_Wheel_Inside_DutyCycle' incorporates:
     *  Constant: '<S8>/Constant20'
     */
    rtb_thetay_g = 0.0;

    /* End of Outputs for SubSystem: '<S1>/Disabled' */
    break;

   case 1:
    /* Outputs for IfAction SubSystem: '<S1>/Autonomous' incorporates:
     *  ActionPort: '<S2>/Action Port'
     */
    /* Merge: '<S15>/Merge1' incorporates:
     *  Constant: '<S2>/Constant10'
     *  SignalConversion generated from: '<S2>/Steering_Abs_Cmd'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd = 0.0;

    /* Merge: '<S15>/Merge2' incorporates:
     *  Constant: '<S2>/Constant2'
     *  SignalConversion generated from: '<S2>/Steering_Rel_Cmd'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd = 0.0;

    /* Merge: '<S15>/Merge3' incorporates:
     *  Constant: '<S2>/Constant7'
     *  SignalConversion generated from: '<S2>/Translation_Angle'
     */
    Code_Gen_Model_B.Translation_Angle = 0.0;

    /* Merge: '<S15>/Merge4' incorporates:
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

    /* Merge: '<S15>/Merge7' incorporates:
     *  Constant: '<S2>/Constant6'
     *  SignalConversion generated from: '<S2>/Spline_Enable'
     */
    Code_Gen_Model_B.Spline_Enable = false;

    /* Merge: '<S15>/Merge9' incorporates:
     *  Constant: '<S2>/Constant16'
     *  SignalConversion generated from: '<S2>/Spline_Num_Poses'
     */
    Code_Gen_Model_B.Spline_Num_Poses = 10.0;

    /* Merge: '<S15>/Merge10' incorporates:
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
    rtb_rx_j = 0.0;

    /* SignalConversion generated from: '<S2>/Swerve_Motors_Disabled' incorporates:
     *  Constant: '<S2>/Constant4'
     */
    rtb_Swerve_Motors_Disabled = false;

    /* Merge: '<S15>/Merge12' incorporates:
     *  Constant: '<S2>/Constant12'
     *  SignalConversion generated from: '<S2>/Reefscape_Motors_Enable'
     */
    Code_Gen_Model_B.Reefscape_Motors_Enable = false;

    /* Merge: '<S15>/Merge11' incorporates:
     *  Constant: '<S2>/Constant11'
     *  SignalConversion generated from: '<S2>/Elevator_Height_Desired'
     */
    Code_Gen_Model_B.Elevator_Height_Desired = 0.0;

    /* Merge: '<S15>/Merge13' incorporates:
     *  Constant: '<S2>/Constant17'
     *  SignalConversion generated from: '<S2>/Coral_Arm_Angle_Desired'
     */
    Code_Gen_Model_B.Coral_Arm_Angle_Desired = -90.0;

    /* SignalConversion generated from: '<S2>/Coral_Wheel_DutyCycle' incorporates:
     *  Constant: '<S2>/Constant18'
     */
    rtb_thetay_f = 0.0;

    /* SignalConversion generated from: '<S2>/Algae_Wheel_Outside_DutyCycle' incorporates:
     *  Constant: '<S2>/Constant19'
     */
    rtb_rx_d = 0.0;

    /* SignalConversion generated from: '<S2>/Algae_Wheel_Inside_DutyCycle' incorporates:
     *  Constant: '<S2>/Constant20'
     */
    rtb_thetay_g = 0.0;

    /* End of Outputs for SubSystem: '<S1>/Autonomous' */
    break;

   case 2:
    /* Outputs for IfAction SubSystem: '<S1>/Teleop' incorporates:
     *  ActionPort: '<S21>/Action Port'
     */
    /* Logic: '<S333>/Logical Operator3' incorporates:
     *  Inport: '<Root>/IsBlueAlliance'
     */
    rtb_Swerve_Motors_Disabled = ((Code_Gen_Model_B.Align_Amp) &&
      (Code_Gen_Model_U.IsBlueAlliance != 0.0));

    /* Logic: '<S333>/Logical Operator2' incorporates:
     *  Inport: '<Root>/IsBlueAlliance'
     *  Logic: '<S333>/Logical Operator10'
     */
    rtb_AT_Tag_5_Active = ((Code_Gen_Model_B.Align_Amp) &&
      (!(Code_Gen_Model_U.IsBlueAlliance != 0.0)));

    /* Switch: '<S333>/Switch15' incorporates:
     *  Switch: '<S333>/Switch16'
     *  Switch: '<S333>/Switch23'
     *  Switch: '<S333>/Switch24'
     */
    if (rtb_AT_Tag_5_Active) {
      /* Switch: '<S333>/Switch15' incorporates:
       *  Constant: '<S333>/Constant9'
       *  Sum: '<S333>/Add17'
       */
      Code_Gen_Model_B.AT_Error_X = AT_Target_Tag_5_X -
        Code_Gen_Model_B.KF_Position_X;

      /* Switch: '<S333>/Switch23' incorporates:
       *  Constant: '<S333>/Constant28'
       *  Sum: '<S333>/Add23'
       */
      Code_Gen_Model_B.AT_Error_Y = AT_Target_Tag_5_Y -
        Code_Gen_Model_B.KF_Position_Y;
    } else if (rtb_Swerve_Motors_Disabled) {
      /* Switch: '<S333>/Switch15' incorporates:
       *  Constant: '<S333>/Constant5'
       *  Sum: '<S333>/Add16'
       *  Switch: '<S333>/Switch16'
       */
      Code_Gen_Model_B.AT_Error_X = AT_Target_Tag_6_X -
        Code_Gen_Model_B.KF_Position_X;

      /* Switch: '<S333>/Switch23' incorporates:
       *  Constant: '<S333>/Constant27'
       *  Sum: '<S333>/Add22'
       *  Switch: '<S333>/Switch24'
       */
      Code_Gen_Model_B.AT_Error_Y = AT_Target_Tag_6_Y -
        Code_Gen_Model_B.KF_Position_Y;
    } else {
      /* Switch: '<S333>/Switch15' incorporates:
       *  Constant: '<S333>/Constant1'
       *  Switch: '<S333>/Switch1'
       *  Switch: '<S333>/Switch12'
       *  Switch: '<S333>/Switch13'
       *  Switch: '<S333>/Switch14'
       *  Switch: '<S333>/Switch16'
       *  Switch: '<S333>/Switch17'
       *  Switch: '<S333>/Switch18'
       */
      Code_Gen_Model_B.AT_Error_X = 0.0;

      /* Switch: '<S333>/Switch23' incorporates:
       *  Constant: '<S333>/Constant2'
       *  Switch: '<S333>/Switch19'
       *  Switch: '<S333>/Switch20'
       *  Switch: '<S333>/Switch21'
       *  Switch: '<S333>/Switch22'
       *  Switch: '<S333>/Switch24'
       *  Switch: '<S333>/Switch25'
       *  Switch: '<S333>/Switch26'
       */
      Code_Gen_Model_B.AT_Error_Y = 0.0;
    }

    /* End of Switch: '<S333>/Switch15' */

    /* Switch: '<S349>/Switch1' incorporates:
     *  Constant: '<S354>/Constant'
     *  Constant: '<S355>/Constant'
     *  Logic: '<S349>/AND'
     *  RelationalOperator: '<S354>/Compare'
     *  RelationalOperator: '<S355>/Compare'
     *  Switch: '<S349>/Switch2'
     *  UnitDelay: '<S349>/Unit Delay'
     *  UnitDelay: '<S349>/Unit Delay1'
     */
    if ((Code_Gen_Model_B.Drive_Joystick_X == 0.0) &&
        (Code_Gen_Model_B.Drive_Joystick_Y == 0.0)) {
      rtb_Switch1_h = Code_Gen_Model_DW.UnitDelay1_DSTATE_l;
      rtb_Switch2 = Code_Gen_Model_DW.UnitDelay_DSTATE_p;
    } else {
      rtb_Switch1_h = Code_Gen_Model_B.Drive_Joystick_Y;
      rtb_Switch2 = Code_Gen_Model_B.Drive_Joystick_X;
    }

    /* End of Switch: '<S349>/Switch1' */

    /* Lookup_n-D: '<S337>/Modulation_Drv' incorporates:
     *  Math: '<S337>/Magnitude'
     */
    rtb_thetay_f = look1_binlcpw(rt_hypotd_snf(Code_Gen_Model_B.Drive_Joystick_X,
      Code_Gen_Model_B.Drive_Joystick_Y),
      Code_Gen_Model_ConstP.Modulation_Drv_bp01Data,
      Code_Gen_Model_ConstP.Modulation_Drv_tableData, 20U);

    /* RelationalOperator: '<S347>/Compare' incorporates:
     *  Constant: '<S347>/Constant'
     */
    rtb_Compare_at = (rtb_thetay_f == 0.0);

    /* DeadZone: '<S337>/Dead Zone' */
    if (Code_Gen_Model_B.Drive_Joystick_Z > Twist_Deadzone_pos) {
      rtb_rx_d = Code_Gen_Model_B.Drive_Joystick_Z - Twist_Deadzone_pos;
    } else if (Code_Gen_Model_B.Drive_Joystick_Z >= Twist_Deadzone_neg) {
      rtb_rx_d = 0.0;
    } else {
      rtb_rx_d = Code_Gen_Model_B.Drive_Joystick_Z - Twist_Deadzone_neg;
    }

    /* End of DeadZone: '<S337>/Dead Zone' */

    /* Logic: '<S337>/Logical Operator' incorporates:
     *  Constant: '<S348>/Constant'
     *  RelationalOperator: '<S348>/Compare'
     */
    rtb_Relative_Translation_Flag = ((rtb_rx_d != 0.0) && rtb_Compare_at);

    /* Switch: '<S337>/Switch1' incorporates:
     *  Switch: '<S337>/Switch4'
     */
    if (rtb_Relative_Translation_Flag) {
      /* Switch: '<S337>/Switch5' */
      if (Code_Gen_Model_B.Drive_Joystick_Z_Mode) {
        /* Merge: '<S15>/Merge3' incorporates:
         *  Constant: '<S337>/Constant3'
         */
        Code_Gen_Model_B.Translation_Angle = -1.5707963267948966;
      } else {
        /* Merge: '<S15>/Merge3' incorporates:
         *  Constant: '<S337>/Constant4'
         */
        Code_Gen_Model_B.Translation_Angle = 0.0;
      }

      /* End of Switch: '<S337>/Switch5' */
    } else if (rtb_Compare_at) {
      /* Switch: '<S337>/Switch6' incorporates:
       *  Constant: '<S337>/Constant'
       *  Constant: '<S337>/Constant1'
       *  Inport: '<Root>/IsBlueAlliance'
       *  Switch: '<S337>/Switch4'
       */
      if (Code_Gen_Model_U.IsBlueAlliance != 0.0) {
        rtb_Add_ov = 0.0;
      } else {
        rtb_Add_ov = 3.1415926535897931;
      }

      /* Merge: '<S15>/Merge3' incorporates:
       *  Sum: '<S337>/Add1'
       *  Switch: '<S337>/Switch4'
       *  Switch: '<S337>/Switch6'
       *  Trigonometry: '<S337>/Atan1'
       */
      Code_Gen_Model_B.Translation_Angle = rt_atan2d_snf
        (Code_Gen_Model_B.AT_Error_Y, Code_Gen_Model_B.AT_Error_X) + rtb_Add_ov;
    } else {
      /* Merge: '<S15>/Merge3' incorporates:
       *  Switch: '<S337>/Switch4'
       *  Trigonometry: '<S337>/Atan2'
       */
      Code_Gen_Model_B.Translation_Angle = rt_atan2d_snf(rtb_Switch1_h,
        rtb_Switch2);
    }

    /* End of Switch: '<S337>/Switch1' */

    /* Switch: '<S21>/Switch' incorporates:
     *  Constant: '<S21>/Constant5'
     *  Constant: '<S21>/Constant7'
     *  DataTypeConversion: '<S21>/Data Type Conversion'
     *  Switch: '<S337>/Switch3'
     */
    if (TEST_Swerve_Mode_Override_Flag != 0.0) {
      rtb_Is_Absolute_Translation_g = (TEST_Swerve_Mode_Translation != 0.0);
    } else {
      rtb_Is_Absolute_Translation_g = !rtb_Relative_Translation_Flag;
    }

    /* End of Switch: '<S21>/Switch' */

    /* DeadZone: '<S336>/Dead Zone' */
    if (Code_Gen_Model_B.Steer_Joystick_Z > Twist_Deadzone_pos) {
      rtb_Add_ov = Code_Gen_Model_B.Steer_Joystick_Z - Twist_Deadzone_pos;
    } else if (Code_Gen_Model_B.Steer_Joystick_Z >= Twist_Deadzone_neg) {
      rtb_Add_ov = 0.0;
    } else {
      rtb_Add_ov = Code_Gen_Model_B.Steer_Joystick_Z - Twist_Deadzone_neg;
    }

    /* Sum: '<S336>/Add' incorporates:
     *  Constant: '<S336>/Constant'
     *  Constant: '<S336>/Constant1'
     *  DeadZone: '<S336>/Dead Zone'
     *  Lookup_n-D: '<S336>/Modulation_Str_Y_Rel'
     *  Product: '<S336>/Product'
     *  Product: '<S336>/Product1'
     *  SignalConversion: '<S12>/Signal Copy5'
     */
    rtb_thetay_g = (look1_binlcpw(Code_Gen_Model_B.Steer_Joystick_Y,
      Code_Gen_Model_ConstP.Modulation_Str_Y_Rel_bp01Data,
      Code_Gen_Model_ConstP.Modulation_Str_Y_Rel_tableData, 20U) *
                    Steering_Relative_Gain) + (rtb_Add_ov * Steering_Twist_Gain);

    /* RelationalOperator: '<S338>/Compare' incorporates:
     *  Constant: '<S338>/Constant'
     */
    rtb_FixPtRelationalOperator = (rtb_thetay_g == 0.0);

    /* Switch: '<S21>/Switch1' incorporates:
     *  Constant: '<S21>/Constant5'
     *  Constant: '<S21>/Constant8'
     *  DataTypeConversion: '<S21>/Data Type Conversion1'
     */
    if (TEST_Swerve_Mode_Override_Flag != 0.0) {
      rtb_Is_Absolute_Steering = (TEST_Swerve_Mode_Steering != 0.0);
    } else {
      rtb_Is_Absolute_Steering = rtb_FixPtRelationalOperator;
    }

    /* End of Switch: '<S21>/Switch1' */

    /* Logic: '<S333>/Logical Operator11' */
    rtb_FixPtRelationalOperator_ea = ((Code_Gen_Model_B.Align_Amp) ||
      (Code_Gen_Model_B.Align_Speaker));

    /* RelationalOperator: '<S343>/FixPt Relational Operator' incorporates:
     *  UnitDelay: '<S343>/Delay Input1'
     *
     * Block description for '<S343>/Delay Input1':
     *
     *  Store in Global RAM
     */
    rtb_FixPtRelationalOperator_f = (((int32_T)rtb_FixPtRelationalOperator_ea) >
      ((int32_T)Code_Gen_Model_DW.DelayInput1_DSTATE_f));

    /* Logic: '<S336>/AND2' incorporates:
     *  RelationalOperator: '<S339>/FixPt Relational Operator'
     *  RelationalOperator: '<S340>/FixPt Relational Operator'
     *  RelationalOperator: '<S341>/FixPt Relational Operator'
     *  RelationalOperator: '<S342>/FixPt Relational Operator'
     *  UnitDelay: '<S339>/Delay Input1'
     *  UnitDelay: '<S340>/Delay Input1'
     *  UnitDelay: '<S341>/Delay Input1'
     *  UnitDelay: '<S342>/Delay Input1'
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
     *
     * Block description for '<S342>/Delay Input1':
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

    /* Logic: '<S336>/AND1' incorporates:
     *  Logic: '<S336>/AND3'
     *  Logic: '<S336>/AND7'
     *  UnitDelay: '<S336>/Unit Delay2'
     */
    rtb_AND1 = ((rtb_FixPtRelationalOperator && (!rtb_FixPtRelationalOperator_f))
                && (rtb_AND2 || (Code_Gen_Model_DW.UnitDelay2_DSTATE)));

    /* Logic: '<S336>/AND4' incorporates:
     *  Logic: '<S336>/AND5'
     *  Logic: '<S336>/AND8'
     *  UnitDelay: '<S336>/Unit Delay4'
     */
    rtb_FixPtRelationalOperator_f = ((rtb_FixPtRelationalOperator && (!rtb_AND2))
      && (rtb_FixPtRelationalOperator_f || (Code_Gen_Model_DW.UnitDelay4_DSTATE)));

    /* Logic: '<S336>/AND6' */
    Code_Gen_Model_B.Steering_Abs_Angle_Active = (rtb_AND1 ||
      rtb_FixPtRelationalOperator_f);

    /* Switch: '<S336>/Switch8' incorporates:
     *  Constant: '<S345>/Constant'
     *  Logic: '<S336>/AND9'
     *  RelationalOperator: '<S344>/FixPt Relational Operator'
     *  RelationalOperator: '<S345>/Compare'
     *  UnitDelay: '<S17>/Unit Delay'
     *  UnitDelay: '<S344>/Delay Input1'
     *
     * Block description for '<S344>/Delay Input1':
     *
     *  Store in Global RAM
     */
    if (((Code_Gen_Model_B.Steering_Abs_Angle_Active) || (((int32_T)
           rtb_FixPtRelationalOperator) > ((int32_T)
           Code_Gen_Model_DW.DelayInput1_DSTATE_jp))) ||
        (Code_Gen_Model_B.Active_GameState != 2)) {
      /* Switch: '<S336>/Switch8' */
      Code_Gen_Model_B.Steering_Abs_Gyro_Latch = Code_Gen_Model_B.Gyro_Angle_rad;
    }

    /* End of Switch: '<S336>/Switch8' */

    /* Switch: '<S336>/Switch2' */
    if (Code_Gen_Model_B.Steering_Abs_Angle_Active) {
      /* Switch: '<S336>/Switch2' incorporates:
       *  Constant: '<S336>/Constant2'
       */
      Code_Gen_Model_B.Steering_Abs_Gyro = 0.0;
    } else {
      /* Switch: '<S336>/Switch2' */
      Code_Gen_Model_B.Steering_Abs_Gyro =
        Code_Gen_Model_B.Steering_Abs_Gyro_Latch;
    }

    /* End of Switch: '<S336>/Switch2' */

    /* Logic: '<S333>/Logical Operator' incorporates:
     *  Logic: '<S333>/Logical Operator1'
     *  Logic: '<S333>/Logical Operator13'
     *  UnitDelay: '<S333>/Unit Delay'
     */
    Code_Gen_Model_B.previous_call_was_for_speaker =
      ((!Code_Gen_Model_B.Align_Amp) && ((Code_Gen_Model_B.Align_Speaker) ||
        (Code_Gen_Model_B.previous_call_was_for_speaker)));

    /* Switch: '<S333>/Switch2' incorporates:
     *  Switch: '<S333>/Switch4'
     *  Switch: '<S333>/Switch5'
     */
    if (Code_Gen_Model_B.previous_call_was_for_speaker) {
      /* Switch: '<S333>/Switch2' incorporates:
       *  Constant: '<S21>/Constant'
       */
      Code_Gen_Model_B.AT_Target_Angle = 0.0;
    } else if (rtb_AT_Tag_5_Active) {
      /* Switch: '<S333>/Switch2' incorporates:
       *  Constant: '<S333>/Constant14'
       *  Switch: '<S333>/Switch4'
       */
      Code_Gen_Model_B.AT_Target_Angle = AT_Target_Tag_5_Field_Angle;
    } else if (rtb_Swerve_Motors_Disabled) {
      /* Switch: '<S333>/Switch2' incorporates:
       *  Constant: '<S333>/Constant13'
       *  Switch: '<S333>/Switch4'
       *  Switch: '<S333>/Switch5'
       */
      Code_Gen_Model_B.AT_Target_Angle = AT_Target_Tag_6_Field_Angle;
    }

    /* End of Switch: '<S333>/Switch2' */

    /* Switch: '<S336>/Switch4' incorporates:
     *  Constant: '<S336>/Constant5'
     *  Switch: '<S336>/Switch1'
     *  Switch: '<S336>/Switch5'
     *  Switch: '<S336>/Switch6'
     *  Switch: '<S336>/Switch7'
     */
    if (Code_Gen_Model_B.Face_Away_Driver) {
      rtb_Switch4 = 0.0;
    } else if (Code_Gen_Model_B.Face_Left_Driver) {
      /* Switch: '<S336>/Switch5' incorporates:
       *  Constant: '<S336>/Constant6'
       */
      rtb_Switch4 = 1.5707963267948966;
    } else if (Code_Gen_Model_B.Face_Toward_Driver) {
      /* Switch: '<S336>/Switch6' incorporates:
       *  Constant: '<S336>/Constant7'
       *  Switch: '<S336>/Switch5'
       */
      rtb_Switch4 = 3.1415926535897931;
    } else if (Code_Gen_Model_B.Face_Right_Driver) {
      /* Switch: '<S336>/Switch7' incorporates:
       *  Constant: '<S336>/Constant8'
       *  Switch: '<S336>/Switch5'
       *  Switch: '<S336>/Switch6'
       */
      rtb_Switch4 = 4.71238898038469;
    } else if (rtb_FixPtRelationalOperator_f) {
      /* Switch: '<S336>/Switch1' incorporates:
       *  Switch: '<S336>/Switch5'
       *  Switch: '<S336>/Switch6'
       *  Switch: '<S336>/Switch7'
       */
      rtb_Switch4 = Code_Gen_Model_B.AT_Target_Angle;
    } else {
      /* Switch: '<S336>/Switch6' incorporates:
       *  Switch: '<S336>/Switch5'
       *  Switch: '<S336>/Switch7'
       *  UnitDelay: '<S336>/Unit Delay1'
       */
      rtb_Switch4 = Code_Gen_Model_DW.UnitDelay1_DSTATE_j2;
    }

    /* End of Switch: '<S336>/Switch4' */

    /* Switch: '<S336>/Switch3' */
    if (Code_Gen_Model_B.Steering_Abs_Angle_Active) {
      /* Switch: '<S336>/Switch3' */
      Code_Gen_Model_B.Steering_Abs_Angle = rtb_Switch4;
    } else {
      /* Switch: '<S336>/Switch3' incorporates:
       *  Constant: '<S336>/Constant3'
       */
      Code_Gen_Model_B.Steering_Abs_Angle = 0.0;
    }

    /* End of Switch: '<S336>/Switch3' */

    /* Merge: '<S15>/Merge1' incorporates:
     *  Sum: '<S336>/Add1'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd = Code_Gen_Model_B.Steering_Abs_Angle +
      Code_Gen_Model_B.Steering_Abs_Gyro;

    /* Merge: '<S15>/Merge2' incorporates:
     *  SignalConversion: '<S336>/Signal Copy'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd = rtb_thetay_g;

    /* Switch: '<S346>/Switch1' incorporates:
     *  Constant: '<S346>/Constant'
     *  Constant: '<S346>/Constant1'
     */
    if (Code_Gen_Model_B.Is_Boosting) {
      rtb_rx = Boost_Trigger_High_Speed;
    } else {
      rtb_rx = Boost_Trigger_Low_Speed;
    }

    /* End of Switch: '<S346>/Switch1' */

    /* Switch: '<S353>/Init' incorporates:
     *  UnitDelay: '<S353>/FixPt Unit Delay1'
     *  UnitDelay: '<S353>/FixPt Unit Delay2'
     */
    if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_a != 0) {
      rtb_thetay_g = rtb_rx;
    } else {
      rtb_thetay_g = Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_f;
    }

    /* End of Switch: '<S353>/Init' */

    /* Sum: '<S351>/Sum1' */
    rtb_rx -= rtb_thetay_g;

    /* Switch: '<S352>/Switch2' incorporates:
     *  Constant: '<S350>/Constant1'
     *  Constant: '<S350>/Constant3'
     *  RelationalOperator: '<S352>/LowerRelop1'
     *  RelationalOperator: '<S352>/UpperRelop'
     *  Switch: '<S352>/Switch'
     */
    if (rtb_rx > Boost_Trigger_Increasing_Limit) {
      rtb_rx = Boost_Trigger_Increasing_Limit;
    } else if (rtb_rx < Boost_Trigger_Decreasing_Limit) {
      /* Switch: '<S352>/Switch' incorporates:
       *  Constant: '<S350>/Constant1'
       */
      rtb_rx = Boost_Trigger_Decreasing_Limit;
    }

    /* End of Switch: '<S352>/Switch2' */

    /* Sum: '<S351>/Sum' */
    rtb_Sum_jt = rtb_rx + rtb_thetay_g;

    /* Switch: '<S337>/Switch' incorporates:
     *  Switch: '<S337>/Switch2'
     */
    if (rtb_Relative_Translation_Flag) {
      /* Merge: '<S15>/Merge4' incorporates:
       *  Gain: '<S337>/Gain'
       */
      Code_Gen_Model_B.Translation_Speed = Translation_Twist_Gain * rtb_rx_d;
    } else if (rtb_Compare_at) {
      /* Merge: '<S15>/Merge4' incorporates:
       *  Gain: '<S337>/Gain2'
       *  Math: '<S337>/Magnitude1'
       *  Switch: '<S337>/Switch2'
       */
      Code_Gen_Model_B.Translation_Speed = AT_XY_Control_Gain * rt_hypotd_snf
        (Code_Gen_Model_B.AT_Error_X, Code_Gen_Model_B.AT_Error_Y);
    } else {
      /* Product: '<S346>/Product' incorporates:
       *  Switch: '<S337>/Switch2'
       */
      rtb_Add_ov = rtb_thetay_f * rtb_Sum_jt;

      /* Saturate: '<S346>/Saturation' incorporates:
       *  Switch: '<S337>/Switch2'
       */
      if (rtb_Add_ov > Boost_Trigger_High_Speed) {
        /* Merge: '<S15>/Merge4' */
        Code_Gen_Model_B.Translation_Speed = Boost_Trigger_High_Speed;
      } else if (rtb_Add_ov < (-Boost_Trigger_High_Speed)) {
        /* Merge: '<S15>/Merge4' */
        Code_Gen_Model_B.Translation_Speed = -Boost_Trigger_High_Speed;
      } else {
        /* Merge: '<S15>/Merge4' */
        Code_Gen_Model_B.Translation_Speed = rtb_Add_ov;
      }

      /* End of Saturate: '<S346>/Saturation' */
    }

    /* End of Switch: '<S337>/Switch' */

    /* Merge: '<S15>/Merge7' incorporates:
     *  Constant: '<S21>/Constant3'
     *  SignalConversion generated from: '<S21>/Spline_Enable'
     */
    Code_Gen_Model_B.Spline_Enable = false;

    /* Merge: '<S15>/Merge9' incorporates:
     *  Constant: '<S21>/Constant9'
     *  SignalConversion generated from: '<S21>/Spline_Num_Poses'
     */
    Code_Gen_Model_B.Spline_Num_Poses = 10.0;

    /* Merge: '<S15>/Merge10' incorporates:
     *  Constant: '<S21>/Constant1'
     *  SignalConversion generated from: '<S21>/Test_Mode'
     */
    Code_Gen_Model_B.Test_Mode = false;

    /* SignalConversion generated from: '<S21>/Enable_Wheels' incorporates:
     *  Constant: '<S21>/Constant6'
     */
    rtb_rx = 0.0;

    /* SignalConversion generated from: '<S21>/Reset_Wheel_Offsets' incorporates:
     *  Constant: '<S21>/Constant13'
     */
    rtb_thetay = 0.0;

    /* SignalConversion generated from: '<S21>/Disable_Wheels' incorporates:
     *  Constant: '<S21>/Constant14'
     */
    rtb_rx_j = 0.0;

    /* SignalConversion generated from: '<S21>/Swerve_Motors_Disabled' incorporates:
     *  Constant: '<S21>/Constant2'
     */
    rtb_Swerve_Motors_Disabled = false;

    /* Merge: '<S15>/Merge12' incorporates:
     *  Constant: '<S335>/Constant5'
     *  SignalConversion generated from: '<S21>/Reefscape_Motors_Enable'
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

    /* RelationalOperator: '<S365>/FixPt Relational Operator' incorporates:
     *  Inport: '<Root>/Gamepad_RT'
     *  UnitDelay: '<S365>/Delay Input1'
     *
     * Block description for '<S365>/Delay Input1':
     *
     *  Store in Global RAM
     */
    rtb_AT_Tag_16_Active = (Code_Gen_Model_U.Gamepad_RT >
      Code_Gen_Model_DW.DelayInput1_DSTATE_j);

    /* Chart: '<S335>/Reefscape_Chart' incorporates:
     *  Constant: '<S5>/Constant'
     *  Constant: '<S6>/Constant'
     *  Inport: '<Root>/Algae_Limit_Switch'
     *  Inport: '<Root>/Coral_Limit_Switch'
     *  Inport: '<Root>/Coral_TOF_Distance'
     *  Inport: '<Root>/Gamepad_LT'
     *  Inport: '<Root>/Gamepad_RB'
     *  RelationalOperator: '<S361>/FixPt Relational Operator'
     *  RelationalOperator: '<S362>/FixPt Relational Operator'
     *  RelationalOperator: '<S363>/FixPt Relational Operator'
     *  RelationalOperator: '<S364>/FixPt Relational Operator'
     *  RelationalOperator: '<S5>/Compare'
     *  RelationalOperator: '<S6>/Compare'
     *  UnitDelay: '<S361>/Delay Input1'
     *  UnitDelay: '<S362>/Delay Input1'
     *  UnitDelay: '<S363>/Delay Input1'
     *  UnitDelay: '<S364>/Delay Input1'
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
     *
     * Block description for '<S364>/Delay Input1':
     *
     *  Store in Global RAM
     */
    if (Code_Gen_Model_DW.is_active_c4_Code_Gen_Model == 0U) {
      Code_Gen_Model_DW.is_active_c4_Code_Gen_Model = 1U;
      Code_Gen_Model_DW.is_Coral = Code_Ge_IN_Coral_Pickup_Prepare;
      Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Prepare;
      Code_Gen_Model_B.Coral_Wheel_DC = Coral_Motor_DC_Pickup;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = -90.0;
      Code_Gen_Model_DW.is_Algae = Code_Gen_Model_IN_Off;

      /* SignalConversion generated from: '<S21>/Algae_Wheel_Outside_DutyCycle' */
      rtb_rx_d = 0.0;

      /* SignalConversion generated from: '<S21>/Algae_Wheel_Inside_DutyCycle' */
      rtb_thetay_g = 0.0;
    } else {
      switch (Code_Gen_Model_DW.is_Coral) {
       case Code_Gen_Model_IN_Coral_Eject:
        if (rtb_AT_Tag_15_Active) {
          Code_Gen_Model_DW.is_Coral_Eject = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
          Code_Gen_Model_DW.is_Coral = Code_Ge_IN_Coral_Pickup_Prepare;
          Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Prepare;
          Code_Gen_Model_B.Coral_Wheel_DC = Coral_Motor_DC_Pickup;
          Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = -90.0;
        } else if (((int32_T)rtb_Compare_a) > ((int32_T)
                    Code_Gen_Model_DW.DelayInput1_DSTATE_fx)) {
          Code_Gen_Model_DW.is_Coral_Eject = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
          Code_Gen_Model_DW.is_Coral = Code__IN_Elevator_Height_Bottom;
          Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Bottom;
          Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
          Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = 80.0;
        } else if (((int32_T)rtb_Gamepad_POV_Up) > ((int32_T)
                    Code_Gen_Model_DW.DelayInput1_DSTATE_oy)) {
          Code_Gen_Model_DW.is_Coral_Eject = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
          Code_Gen_Model_DW.is_Coral = Code_Gen__IN_Eleator_Height_Top;
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
          Code_Gen_Model_DW.is_Coral = Code_Gen__IN_Coral_Pickup_Raise;
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
          Code_Gen_Model_DW.is_Coral = Code_Gen__IN_Coral_Pickup_Lower;
          Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Lower;
        }
        break;

       case Code_Gen__IN_Coral_Pickup_Raise:
        Code_Gen_Model_B.Coral_Wheel_DC = Coral_Motor_DC_Hold;
        if ((fabs(Code_Gen_Model_B.Elevator_Height_Desired_m -
                  Code_Gen_Model_B.Elevator_Height_Measured) <=
             Elevator_Height_Error_Threshold) && (((rtb_AT_Tag_5_Active ||
               rtb_Relative_Translation_Flag) || rtb_Compare_at) || rtb_AND2)) {
          Code_Gen_Model_DW.is_Coral = Code_Ge_IN_Coral_Score_Position;
          enter_internal_Coral_Score_Posi(&rtb_AT_Tag_5_Active, &rtb_Compare_at,
            &rtb_Relative_Translation_Flag, &rtb_AND2);
        }
        break;

       case Code_Ge_IN_Coral_Score_Position:
        if (((rtb_AT_Tag_5_Active || rtb_Relative_Translation_Flag) ||
             rtb_Compare_at) || rtb_AND2) {
          Code_Gen_Model_DW.is_Coral = Code_Ge_IN_Coral_Score_Position;
          enter_internal_Coral_Score_Posi(&rtb_AT_Tag_5_Active, &rtb_Compare_at,
            &rtb_Relative_Translation_Flag, &rtb_AND2);
        } else if (Code_Gen_Model_U.Gamepad_RB >
                   Code_Gen_Model_DW.DelayInput1_DSTATE_pd) {
          Code_Gen_Model_DW.is_Coral = Code_Gen_Model_IN_Coral_Eject;
          Code_Gen_Model_DW.is_Coral_Eject = Code_Gen_Model_IN_Eject;
          Code_Gen_Model_B.Coral_Wheel_DC = Coral_Motor_DC_Eject;
          Code_Gen_Model_DW.timer = 0.0;
        }
        break;

       case Code_Gen__IN_Eleator_Height_Top:
        Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
        if (rtb_AT_Tag_15_Active) {
          Code_Gen_Model_DW.is_Coral = Code_Ge_IN_Coral_Pickup_Prepare;
          Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Prepare;
          Code_Gen_Model_B.Coral_Wheel_DC = Coral_Motor_DC_Pickup;
          Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = -90.0;
        }
        break;

       default:
        /* case IN_Elevator_Height_Bottom: */
        Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
        if (rtb_AT_Tag_15_Active) {
          Code_Gen_Model_DW.is_Coral = Code_Ge_IN_Coral_Pickup_Prepare;
          Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Prepare;
          Code_Gen_Model_B.Coral_Wheel_DC = Coral_Motor_DC_Pickup;
          Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = -90.0;
        }
        break;
      }

      switch (Code_Gen_Model_DW.is_Algae) {
       case Code_Gen_Model_IN_Algae_Hold:
        /* SignalConversion generated from: '<S21>/Algae_Wheel_Outside_DutyCycle' */
        rtb_rx_d = Algae_Hold_DC;

        /* SignalConversion generated from: '<S21>/Algae_Wheel_Inside_DutyCycle' */
        rtb_thetay_g = Algae_Hold_DC;
        if (rtb_AT_Tag_16_Active) {
          Code_Gen_Model_DW.is_Algae = Code_Gen_Mode_IN_Algae_Push_Out;

          /* SignalConversion generated from: '<S21>/Algae_Wheel_Outside_DutyCycle' */
          rtb_rx_d = Algae_Push_Out_DC;

          /* SignalConversion generated from: '<S21>/Algae_Wheel_Inside_DutyCycle' */
          rtb_thetay_g = Algae_Push_Out_DC;
          Code_Gen_Model_DW.timer = 0.0;
        }
        break;

       case Code_Gen_Model_IN_Algae_Pull_In:
        /* SignalConversion generated from: '<S21>/Algae_Wheel_Outside_DutyCycle' */
        rtb_rx_d = Algae_Pull_In_DC;

        /* SignalConversion generated from: '<S21>/Algae_Wheel_Inside_DutyCycle' */
        rtb_thetay_g = Algae_Pull_In_DC;
        if (Code_Gen_Model_U.Algae_Limit_Switch != 0.0) {
          Code_Gen_Model_DW.is_Algae = Code_Gen_Model_IN_Algae_Hold;

          /* SignalConversion generated from: '<S21>/Algae_Wheel_Outside_DutyCycle' */
          rtb_rx_d = Algae_Hold_DC;

          /* SignalConversion generated from: '<S21>/Algae_Wheel_Inside_DutyCycle' */
          rtb_thetay_g = Algae_Hold_DC;
        } else if (rtb_AT_Tag_16_Active) {
          Code_Gen_Model_DW.is_Algae = Code_Gen_Model_IN_Off;

          /* SignalConversion generated from: '<S21>/Algae_Wheel_Outside_DutyCycle' */
          rtb_rx_d = 0.0;

          /* SignalConversion generated from: '<S21>/Algae_Wheel_Inside_DutyCycle' */
          rtb_thetay_g = 0.0;
        }
        break;

       case Code_Gen_Mode_IN_Algae_Push_Out:
        /* SignalConversion generated from: '<S21>/Algae_Wheel_Outside_DutyCycle' */
        rtb_rx_d = Algae_Push_Out_DC;

        /* SignalConversion generated from: '<S21>/Algae_Wheel_Inside_DutyCycle' */
        rtb_thetay_g = Algae_Push_Out_DC;
        if (Code_Gen_Model_DW.timer >= Algae_Eject_Time) {
          Code_Gen_Model_DW.is_Algae = Code_Gen_Model_IN_Off;

          /* SignalConversion generated from: '<S21>/Algae_Wheel_Outside_DutyCycle' */
          rtb_rx_d = 0.0;

          /* SignalConversion generated from: '<S21>/Algae_Wheel_Inside_DutyCycle' */
          rtb_thetay_g = 0.0;
        } else {
          Code_Gen_Model_DW.timer += 0.02;
        }
        break;

       default:
        /* SignalConversion generated from: '<S21>/Algae_Wheel_Outside_DutyCycle' */
        /* case IN_Off: */
        rtb_rx_d = 0.0;

        /* SignalConversion generated from: '<S21>/Algae_Wheel_Inside_DutyCycle' */
        rtb_thetay_g = 0.0;
        if (Code_Gen_Model_U.Gamepad_LT > Code_Gen_Model_DW.DelayInput1_DSTATE_o)
        {
          Code_Gen_Model_DW.is_Algae = Code_Gen_Model_IN_Algae_Pull_In;

          /* SignalConversion generated from: '<S21>/Algae_Wheel_Outside_DutyCycle' */
          rtb_rx_d = Algae_Pull_In_DC;

          /* SignalConversion generated from: '<S21>/Algae_Wheel_Inside_DutyCycle' */
          rtb_thetay_g = Algae_Pull_In_DC;
        }
        break;
      }
    }

    /* End of Chart: '<S335>/Reefscape_Chart' */

    /* Merge: '<S15>/Merge13' incorporates:
     *  SignalConversion generated from: '<S21>/Coral_Arm_Angle_Desired'
     */
    Code_Gen_Model_B.Coral_Arm_Angle_Desired =
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_o;

    /* SignalConversion generated from: '<S21>/Coral_Wheel_DutyCycle' */
    rtb_thetay_f = Code_Gen_Model_B.Coral_Wheel_DC;

    /* Merge: '<S15>/Merge11' incorporates:
     *  SignalConversion generated from: '<S21>/Elevator_Height_Desired'
     */
    Code_Gen_Model_B.Elevator_Height_Desired =
      Code_Gen_Model_B.Elevator_Height_Desired_m;

    /* Update for UnitDelay: '<S349>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_l = rtb_Switch1_h;

    /* Update for UnitDelay: '<S349>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_p = rtb_Switch2;

    /* Update for UnitDelay: '<S344>/Delay Input1'
     *
     * Block description for '<S344>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_jp = rtb_FixPtRelationalOperator;

    /* Update for UnitDelay: '<S343>/Delay Input1'
     *
     * Block description for '<S343>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_f = rtb_FixPtRelationalOperator_ea;

    /* Update for UnitDelay: '<S339>/Delay Input1'
     *
     * Block description for '<S339>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_m = Code_Gen_Model_B.Face_Away_Driver;

    /* Update for UnitDelay: '<S340>/Delay Input1'
     *
     * Block description for '<S340>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_k = Code_Gen_Model_B.Face_Left_Driver;

    /* Update for UnitDelay: '<S341>/Delay Input1'
     *
     * Block description for '<S341>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_g = Code_Gen_Model_B.Face_Toward_Driver;

    /* Update for UnitDelay: '<S342>/Delay Input1'
     *
     * Block description for '<S342>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_g2 = Code_Gen_Model_B.Face_Right_Driver;

    /* Update for UnitDelay: '<S336>/Unit Delay2' */
    Code_Gen_Model_DW.UnitDelay2_DSTATE = rtb_AND1;

    /* Update for UnitDelay: '<S336>/Unit Delay4' */
    Code_Gen_Model_DW.UnitDelay4_DSTATE = rtb_FixPtRelationalOperator_f;

    /* Update for UnitDelay: '<S336>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_j2 = rtb_Switch4;

    /* Update for UnitDelay: '<S353>/FixPt Unit Delay2' incorporates:
     *  Constant: '<S353>/FixPt Constant'
     */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_a = 0U;

    /* Update for UnitDelay: '<S353>/FixPt Unit Delay1' */
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

    /* Update for UnitDelay: '<S364>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_LT'
     *
     * Block description for '<S364>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_o = Code_Gen_Model_U.Gamepad_LT;

    /* Update for UnitDelay: '<S365>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_RT'
     *
     * Block description for '<S365>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_j = Code_Gen_Model_U.Gamepad_RT;

    /* Update for UnitDelay: '<S362>/Delay Input1'
     *
     * Block description for '<S362>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_oy = rtb_Gamepad_POV_Up;

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
     *  ActionPort: '<S22>/Action Port'
     */
    /* InitializeConditions for SwitchCase: '<S1>/Switch Case' incorporates:
     *  UnitDelay: '<S22>/Unit Delay'
     */
    Code_Gen_Model_DW.UnitDelay_DSTATE_ir = ((rtAction == rtPrevAction) &&
      (Code_Gen_Model_DW.UnitDelay_DSTATE_ir));

    /* End of InitializeConditions for SubSystem: '<S1>/Test' */

    /* Outputs for IfAction SubSystem: '<S1>/Test' incorporates:
     *  ActionPort: '<S22>/Action Port'
     */
    /* Merge: '<S15>/Merge1' incorporates:
     *  Constant: '<S22>/Constant1'
     *  SignalConversion generated from: '<S22>/Steering_Abs_Cmd'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd = 0.0;

    /* Merge: '<S15>/Merge2' incorporates:
     *  Constant: '<S22>/Constant2'
     *  SignalConversion generated from: '<S22>/Steering_Rel_Cmd'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd = 0.0;

    /* Merge: '<S15>/Merge3' incorporates:
     *  Constant: '<S22>/Constant3'
     *  SignalConversion generated from: '<S22>/Translation_Angle'
     */
    Code_Gen_Model_B.Translation_Angle = 0.0;

    /* Merge: '<S15>/Merge4' incorporates:
     *  Constant: '<S22>/Constant4'
     *  SignalConversion generated from: '<S22>/Translation_Speed'
     */
    Code_Gen_Model_B.Translation_Speed = 0.0;

    /* SignalConversion generated from: '<S22>/Is_Absolute_Translation' incorporates:
     *  Constant: '<S22>/Constant5'
     */
    rtb_Is_Absolute_Translation_g = false;

    /* SignalConversion generated from: '<S22>/Is_Absolute_Steering' incorporates:
     *  Constant: '<S22>/Constant6'
     */
    rtb_Is_Absolute_Steering = false;

    /* Merge: '<S15>/Merge7' incorporates:
     *  Constant: '<S22>/Constant7'
     *  SignalConversion generated from: '<S22>/Spline_Enable'
     */
    Code_Gen_Model_B.Spline_Enable = false;

    /* Merge: '<S15>/Merge9' incorporates:
     *  Constant: '<S22>/Constant9'
     *  SignalConversion generated from: '<S22>/Spline_Num_Poses'
     */
    Code_Gen_Model_B.Spline_Num_Poses = 10.0;

    /* Merge: '<S15>/Merge10' incorporates:
     *  Constant: '<S22>/Constant12'
     *  SignalConversion generated from: '<S22>/Test_Mode'
     */
    Code_Gen_Model_B.Test_Mode = true;

    /* Switch: '<S22>/Switch' incorporates:
     *  Constant: '<S22>/Constant14'
     *  Switch: '<S22>/Switch1'
     *  UnitDelay: '<S22>/Unit Delay'
     */
    if (rtb_FixPtRelationalOperator_ea) {
      rtb_Swerve_Motors_Disabled = true;
    } else if (rtb_FixPtRelationalOperator) {
      /* Switch: '<S22>/Switch1' incorporates:
       *  Constant: '<S22>/Constant13'
       */
      rtb_Swerve_Motors_Disabled = false;
    } else {
      rtb_Swerve_Motors_Disabled = Code_Gen_Model_DW.UnitDelay_DSTATE_ir;
    }

    /* End of Switch: '<S22>/Switch' */

    /* Merge: '<S15>/Merge12' incorporates:
     *  Constant: '<S22>/Constant11'
     *  SignalConversion generated from: '<S22>/Reefscape_Motors_Enable'
     */
    Code_Gen_Model_B.Reefscape_Motors_Enable = false;

    /* Merge: '<S15>/Merge11' incorporates:
     *  Constant: '<S22>/Constant10'
     *  SignalConversion generated from: '<S22>/Elevator_Height_Desired'
     */
    Code_Gen_Model_B.Elevator_Height_Desired = 0.0;

    /* Merge: '<S15>/Merge13' incorporates:
     *  Constant: '<S22>/Constant15'
     *  SignalConversion generated from: '<S22>/Coral_Arm_Angle_Desired'
     */
    Code_Gen_Model_B.Coral_Arm_Angle_Desired = -90.0;

    /* SignalConversion generated from: '<S22>/Coral_Wheel_DutyCycle' incorporates:
     *  Constant: '<S22>/Constant16'
     */
    rtb_thetay_f = 0.0;

    /* SignalConversion generated from: '<S22>/Algae_Wheel_Outside_DutyCycle' incorporates:
     *  Constant: '<S22>/Constant17'
     */
    rtb_rx_d = 0.0;

    /* SignalConversion generated from: '<S22>/Algae_Wheel_Inside_DutyCycle' incorporates:
     *  Constant: '<S22>/Constant18'
     */
    rtb_thetay_g = 0.0;

    /* DataTypeConversion: '<S22>/Cast To Boolean1' */
    rtb_rx = rtb_FixPtRelationalOperator;

    /* DataTypeConversion: '<S22>/Cast To Boolean3' */
    rtb_rx_j = rtb_FixPtRelationalOperator_ea;

    /* DataTypeConversion: '<S22>/Cast To Boolean2' incorporates:
     *  Inport: '<Root>/Joystick_Left_B12'
     *  RelationalOperator: '<S50>/FixPt Relational Operator'
     *  UnitDelay: '<S50>/Delay Input1'
     *
     * Block description for '<S50>/Delay Input1':
     *
     *  Store in Global RAM
     */
    rtb_thetay = (Code_Gen_Model_U.Joystick_Left_B12 >
                  Code_Gen_Model_DW.DelayInput1_DSTATE_e);

    /* Update for UnitDelay: '<S22>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_ir = rtb_Swerve_Motors_Disabled;

    /* End of Outputs for SubSystem: '<S1>/Test' */
    break;
  }

  /* End of SwitchCase: '<S1>/Switch Case' */

  /* Switch: '<S11>/Switch' incorporates:
   *  Constant: '<S11>/Constant'
   *  Constant: '<S11>/Constant1'
   *  Inport: '<Root>/IsBlueAlliance'
   */
  if (Code_Gen_Model_U.IsBlueAlliance != 0.0) {
    rtb_Add_ov = 0.0;
  } else {
    rtb_Add_ov = 3.1415926535897931;
  }

  /* Sum: '<S11>/Add' incorporates:
   *  Switch: '<S11>/Switch'
   */
  Code_Gen_Model_B.Gyro_Angle_Field_rad = Code_Gen_Model_B.Gyro_Angle_rad +
    rtb_Add_ov;

  /* If: '<S18>/If' incorporates:
   *  Constant: '<S118>/Constant'
   *  Merge: '<S18>/Merge'
   *  Merge: '<S18>/Merge1'
   *  Merge: '<S18>/Merge2'
   *  Merge: '<S18>/Merge3'
   *  Merge: '<S18>/Merge4'
   *  Merge: '<S18>/Merge5'
   *  Merge: '<S18>/Merge7'
   *  Merge: '<S18>/Merge8'
   *  SignalConversion generated from: '<S118>/Robot_Reached_Destination'
   */
  rtPrevAction = Code_Gen_Model_DW.If_ActiveSubsystem;
  Code_Gen_Model_DW.If_ActiveSubsystem = 1;
  if ((rtPrevAction != 1) && (rtPrevAction == 0)) {
    /* Disable for If: '<S124>/If' */
    if (Code_Gen_Model_DW.If_ActiveSubsystem_h == 0) {
      /* Disable for If: '<S127>/If' */
      if (Code_Gen_Model_DW.If_ActiveSubsystem_o == 0) {
        /* Disable for If: '<S129>/If' */
        Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;
      }

      Code_Gen_Model_DW.If_ActiveSubsystem_o = -1;

      /* End of Disable for If: '<S127>/If' */
    }

    Code_Gen_Model_DW.If_ActiveSubsystem_h = -1;

    /* End of Disable for If: '<S124>/If' */
  }

  /* Outputs for IfAction SubSystem: '<S18>/Pass Through' incorporates:
   *  ActionPort: '<S118>/Action Port'
   */
  Code_Gen_Model_B.Robot_Reached_Destination = true;
  Code_Gen_Model_B.Steering_Abs_Cmd_SPF = Code_Gen_Model_B.Steering_Abs_Cmd;
  Code_Gen_Model_B.Steering_Rel_Cmd_SPF = Code_Gen_Model_B.Steering_Rel_Cmd;
  Code_Gen_Model_B.Translation_Speed_SPF = Code_Gen_Model_B.Translation_Speed;
  Code_Gen_Model_B.Translation_Angle_SPF = Code_Gen_Model_B.Translation_Angle;
  Code_Gen_Model_B.Is_Absolute_Translation_SPF = rtb_Is_Absolute_Translation_g;
  Code_Gen_Model_B.Is_Absolute_Steering_SPF = rtb_Is_Absolute_Steering;
  Code_Gen_Model_B.Gyro_Angle_SPF = Code_Gen_Model_B.Gyro_Angle_rad;

  /* End of If: '<S18>/If' */
  /* End of Outputs for SubSystem: '<S18>/Pass Through' */

  /* UnitDelay: '<S272>/Unit Delay' */
  rtb_Merge1 = Code_Gen_Model_B.Translation_Speed_RL;

  /* Signum: '<S272>/Sign2' */
  if (rtIsNaN(rtb_Merge1)) {
    rtb_Add_ov = (rtNaN);
  } else if (rtb_Merge1 < 0.0) {
    rtb_Add_ov = -1.0;
  } else {
    rtb_Add_ov = (rtb_Merge1 > 0.0);
  }

  /* Signum: '<S272>/Sign1' */
  if (rtIsNaN(Code_Gen_Model_B.Translation_Speed_SPF)) {
    rtb_Add_du = (rtNaN);
  } else if (Code_Gen_Model_B.Translation_Speed_SPF < 0.0) {
    rtb_Add_du = -1.0;
  } else {
    rtb_Add_du = (Code_Gen_Model_B.Translation_Speed_SPF > 0.0);
  }

  /* Product: '<S272>/Product1' incorporates:
   *  Signum: '<S272>/Sign1'
   *  Signum: '<S272>/Sign2'
   */
  rtb_Add_ov *= rtb_Add_du;
  if (rtIsNaN(rtb_Add_ov)) {
    rtb_Num_Segments = 0;
  } else {
    rtb_Num_Segments = (int32_T)fmod(rtb_Add_ov, 256.0);
  }

  /* Switch: '<S272>/Switch' incorporates:
   *  Constant: '<S272>/Constant'
   *  Constant: '<S277>/Constant'
   *  Constant: '<S278>/Constant'
   *  Logic: '<S272>/or'
   *  Product: '<S272>/Product1'
   *  RelationalOperator: '<S277>/Compare'
   *  RelationalOperator: '<S278>/Compare'
   */
  if ((rtb_Merge1 == 0.0) || (((rtb_Num_Segments < 0) ? ((int32_T)((int8_T)
          (-((int8_T)((uint8_T)(-((real_T)rtb_Num_Segments))))))) :
        rtb_Num_Segments) > 0)) {
    rtb_rx_o = Code_Gen_Model_B.Translation_Speed_SPF;
  } else {
    rtb_rx_o = 0.0;
  }

  /* End of Switch: '<S272>/Switch' */

  /* RelationalOperator: '<S279>/Compare' incorporates:
   *  Constant: '<S279>/Constant'
   */
  rtb_Gamepad_POV_Up = (rtb_rx_o == 0.0);

  /* RelationalOperator: '<S280>/Compare' incorporates:
   *  Constant: '<S280>/Constant'
   */
  rtb_Compare_a = (rtb_rx_o > 0.0);

  /* Abs: '<S272>/Abs' incorporates:
   *  Sum: '<S272>/Subtract'
   */
  rtb_Merge1 = fabs(rtb_Merge1 - Code_Gen_Model_B.Translation_Speed_SPF);

  /* Switch: '<S272>/Switch5' incorporates:
   *  Constant: '<S272>/Constant1'
   *  Switch: '<S272>/Switch1'
   *  UnaryMinus: '<S272>/Unary Minus'
   */
  if (rtb_Gamepad_POV_Up) {
    /* SignalConversion generated from: '<S272>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S272>/Constant4'
     *  Constant: '<S272>/Constant6'
     */
    rtb_Akxhatkk1[0] = Translation_Speed_Approach_Zero_Final_Thresh;
    rtb_Akxhatkk1[1] = 1.0;

    /* SignalConversion generated from: '<S272>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S272>/Constant2'
     *  Constant: '<S272>/Constant5'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Translation_Speed_Approach_Zero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S272>/Lookup Table Dynamic' */
    /* Dynamic Look-Up Table Block: '<S272>/Lookup Table Dynamic'
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
    rtb_Add_ov = -Translation_Speed_Rate_Limit_Dec;
  } else {
    /* SignalConversion generated from: '<S272>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S272>/Constant10'
     *  Constant: '<S272>/Constant8'
     */
    rtb_Akxhatkk1[0] = Translation_Speed_NonZero_Final_Scale_Factor;
    rtb_Akxhatkk1[1] = 1.0;

    /* SignalConversion generated from: '<S272>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S272>/Constant7'
     *  Constant: '<S272>/Constant9'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Translation_Speed_NonZero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S272>/Lookup Table Dynamic1' */
    /* Dynamic Look-Up Table Block: '<S272>/Lookup Table Dynamic1'
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

    /* Switch: '<S272>/Switch3' incorporates:
     *  Constant: '<S272>/Constant1'
     *  Constant: '<S272>/Constant3'
     *  UnaryMinus: '<S272>/Unary Minus'
     */
    if (rtb_Compare_a) {
      rtb_Add_ov = Translation_Speed_Rate_Limit_Inc;
    } else {
      rtb_Add_ov = -Translation_Speed_Rate_Limit_Dec;
    }

    /* End of Switch: '<S272>/Switch3' */
  }

  /* End of Switch: '<S272>/Switch5' */

  /* Product: '<S272>/Product' incorporates:
   *  Switch: '<S272>/Switch1'
   */
  rtb_Switch2 = rtb_Add_ov * rtb_Switch1_h;

  /* Switch: '<S283>/Init' incorporates:
   *  UnitDelay: '<S283>/FixPt Unit Delay1'
   *  UnitDelay: '<S283>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE != 0) {
    rtb_Merge1 = rtb_rx_o;
  } else {
    rtb_Merge1 = Code_Gen_Model_B.Translation_Speed_RL;
  }

  /* End of Switch: '<S283>/Init' */

  /* Sum: '<S281>/Sum1' */
  rtb_Switch4 = rtb_rx_o - rtb_Merge1;

  /* Switch: '<S282>/Switch2' incorporates:
   *  RelationalOperator: '<S282>/LowerRelop1'
   */
  if (!(rtb_Switch4 > rtb_Switch2)) {
    /* Switch: '<S272>/Switch2' incorporates:
     *  Constant: '<S272>/Constant1'
     *  Constant: '<S272>/Constant3'
     *  Switch: '<S272>/Switch4'
     *  UnaryMinus: '<S272>/Unary Minus1'
     */
    if (rtb_Gamepad_POV_Up) {
      rtb_Add_ov = Translation_Speed_Rate_Limit_Dec;
    } else if (rtb_Compare_a) {
      /* Switch: '<S272>/Switch4' incorporates:
       *  Constant: '<S272>/Constant1'
       */
      rtb_Add_ov = Translation_Speed_Rate_Limit_Dec;
    } else {
      rtb_Add_ov = -Translation_Speed_Rate_Limit_Inc;
    }

    /* Product: '<S272>/Product2' incorporates:
     *  Switch: '<S272>/Switch2'
     */
    rtb_Switch2 = rtb_Add_ov * rtb_Switch1_h;

    /* Switch: '<S282>/Switch' incorporates:
     *  RelationalOperator: '<S282>/UpperRelop'
     */
    if (!(rtb_Switch4 < rtb_Switch2)) {
      rtb_Switch2 = rtb_Switch4;
    }

    /* End of Switch: '<S282>/Switch' */
  }

  /* End of Switch: '<S282>/Switch2' */

  /* Sum: '<S281>/Sum' */
  Code_Gen_Model_B.Translation_Speed_RL = rtb_Switch2 + rtb_Merge1;

  /* Switch: '<S275>/Switch' */
  if (Code_Gen_Model_B.Is_Absolute_Translation_SPF) {
    /* Switch: '<S275>/Switch' incorporates:
     *  Constant: '<S307>/Constant3'
     *  Constant: '<S307>/Constant4'
     *  Math: '<S307>/Math Function'
     *  Sum: '<S275>/Subtract'
     *  Sum: '<S307>/Add1'
     *  Sum: '<S307>/Add2'
     */
    Code_Gen_Model_B.Translation_Steering_Cmd = rt_modd_snf
      ((Code_Gen_Model_B.Translation_Angle_SPF - Code_Gen_Model_B.Gyro_Angle_SPF)
       + 3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;
  } else {
    /* Switch: '<S275>/Switch' */
    Code_Gen_Model_B.Translation_Steering_Cmd =
      Code_Gen_Model_B.Translation_Angle_SPF;
  }

  /* End of Switch: '<S275>/Switch' */

  /* Sum: '<S303>/Add1' incorporates:
   *  Constant: '<S303>/Constant3'
   *  Constant: '<S303>/Constant4'
   *  Math: '<S303>/Math Function'
   *  Sum: '<S302>/Sum'
   *  Sum: '<S303>/Add2'
   */
  rtb_Switch2 = rt_modd_snf((Code_Gen_Model_B.Steering_Abs_Cmd_SPF -
    Code_Gen_Model_B.Gyro_Angle_SPF) + 3.1415926535897931, 6.2831853071795862) -
    3.1415926535897931;

  /* Sum: '<S305>/Sum1' incorporates:
   *  Constant: '<S302>/Constant2'
   *  Product: '<S305>/Product'
   *  Sum: '<S305>/Sum'
   *  UnitDelay: '<S305>/Unit Delay1'
   */
  rtb_Merge1 = ((rtb_Switch2 - Code_Gen_Model_DW.UnitDelay1_DSTATE_i) *
                Steering_Heading_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_i;

  /* Product: '<S302>/Product' incorporates:
   *  Constant: '<S302>/Constant3'
   */
  rtb_Switch1_h = rtb_Merge1 * Steering_Heading_Control_D;

  /* Sum: '<S304>/Diff' incorporates:
   *  UnitDelay: '<S304>/UD'
   *
   * Block description for '<S304>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S304>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Add_ov = rtb_Switch1_h - Code_Gen_Model_DW.UD_DSTATE;

  /* Saturate: '<S302>/Saturation' */
  if (rtb_Add_ov > Steering_Heading_Control_D_UL) {
    rtb_Add_ov = Steering_Heading_Control_D_UL;
  } else if (rtb_Add_ov < Steering_Heading_Control_D_LL) {
    rtb_Add_ov = Steering_Heading_Control_D_LL;
  }

  /* Sum: '<S302>/Add' incorporates:
   *  Gain: '<S302>/Gain1'
   *  Saturate: '<S302>/Saturation'
   */
  rtb_Switch4 = (Steering_Heading_Control_P * rtb_Switch2) + rtb_Add_ov;

  /* Sum: '<S302>/Subtract' incorporates:
   *  Constant: '<S302>/Constant'
   */
  rtb_Sin4 = Steering_Heading_Control_Total_UL - rtb_Switch4;

  /* Sum: '<S302>/Sum2' incorporates:
   *  Gain: '<S302>/Gain2'
   *  UnitDelay: '<S302>/Unit Delay'
   */
  rtb_Switch2 = (Steering_Heading_Control_I * rtb_Switch2) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_m;

  /* Switch: '<S306>/Switch2' incorporates:
   *  RelationalOperator: '<S306>/LowerRelop1'
   */
  if (!(rtb_Switch2 > rtb_Sin4)) {
    /* Sum: '<S302>/Subtract1' incorporates:
     *  Constant: '<S302>/Constant1'
     */
    rtb_Sum_jt = Steering_Heading_Control_Total_LL - rtb_Switch4;

    /* Switch: '<S306>/Switch' incorporates:
     *  RelationalOperator: '<S306>/UpperRelop'
     */
    if (rtb_Switch2 < rtb_Sum_jt) {
      rtb_Sin4 = rtb_Sum_jt;
    } else {
      rtb_Sin4 = rtb_Switch2;
    }

    /* End of Switch: '<S306>/Switch' */
  }

  /* End of Switch: '<S306>/Switch2' */

  /* Saturate: '<S302>/Saturation1' */
  if (rtb_Sin4 > Steering_Heading_Control_I_UL) {
    rtb_Switch2 = Steering_Heading_Control_I_UL;
  } else if (rtb_Sin4 < Steering_Heading_Control_I_LL) {
    rtb_Switch2 = Steering_Heading_Control_I_LL;
  } else {
    rtb_Switch2 = rtb_Sin4;
  }

  /* End of Saturate: '<S302>/Saturation1' */

  /* Sum: '<S302>/Add1' */
  rtb_Add_ov = rtb_Switch4 + rtb_Switch2;

  /* Saturate: '<S302>/Saturation2' */
  if (rtb_Add_ov > Steering_Heading_Control_Total_UL) {
    /* Saturate: '<S302>/Saturation2' */
    Code_Gen_Model_B.Steering_Localized_PID = Steering_Heading_Control_Total_UL;
  } else if (rtb_Add_ov < Steering_Heading_Control_Total_LL) {
    /* Saturate: '<S302>/Saturation2' */
    Code_Gen_Model_B.Steering_Localized_PID = Steering_Heading_Control_Total_LL;
  } else {
    /* Saturate: '<S302>/Saturation2' */
    Code_Gen_Model_B.Steering_Localized_PID = rtb_Add_ov;
  }

  /* End of Saturate: '<S302>/Saturation2' */

  /* Switch: '<S286>/Switch' incorporates:
   *  Abs: '<S286>/Abs'
   *  Constant: '<S286>/Constant'
   *  Constant: '<S301>/Constant'
   *  RelationalOperator: '<S301>/Compare'
   */
  if (fabs(Code_Gen_Model_B.Steering_Localized_PID) >
      Steering_Heading_Control_Deadzone) {
    rtb_Sin4 = Code_Gen_Model_B.Steering_Localized_PID;
  } else {
    rtb_Sin4 = 0.0;
  }

  /* End of Switch: '<S286>/Switch' */

  /* Signum: '<S285>/Sign2' incorporates:
   *  UnitDelay: '<S285>/Unit Delay'
   */
  if (rtIsNaN(Code_Gen_Model_DW.UnitDelay_DSTATE_d)) {
    rtb_Add_ov = (rtNaN);
  } else if (Code_Gen_Model_DW.UnitDelay_DSTATE_d < 0.0) {
    rtb_Add_ov = -1.0;
  } else {
    rtb_Add_ov = (Code_Gen_Model_DW.UnitDelay_DSTATE_d > 0.0);
  }

  /* Signum: '<S285>/Sign1' */
  if (rtIsNaN(rtb_Sin4)) {
    rtb_Add_du = (rtNaN);
  } else if (rtb_Sin4 < 0.0) {
    rtb_Add_du = -1.0;
  } else {
    rtb_Add_du = (rtb_Sin4 > 0.0);
  }

  /* Product: '<S285>/Product1' incorporates:
   *  Signum: '<S285>/Sign1'
   *  Signum: '<S285>/Sign2'
   */
  rtb_Add_ov *= rtb_Add_du;
  if (rtIsNaN(rtb_Add_ov)) {
    rtb_Num_Segments = 0;
  } else {
    rtb_Num_Segments = (int32_T)fmod(rtb_Add_ov, 256.0);
  }

  /* Switch: '<S285>/Switch' incorporates:
   *  Constant: '<S285>/Constant'
   *  Constant: '<S294>/Constant'
   *  Constant: '<S295>/Constant'
   *  Logic: '<S285>/or'
   *  Product: '<S285>/Product1'
   *  RelationalOperator: '<S294>/Compare'
   *  RelationalOperator: '<S295>/Compare'
   *  UnitDelay: '<S285>/Unit Delay'
   */
  if ((Code_Gen_Model_DW.UnitDelay_DSTATE_d == 0.0) || (((rtb_Num_Segments < 0) ?
        ((int32_T)((int8_T)(-((int8_T)((uint8_T)(-((real_T)rtb_Num_Segments)))))))
        : rtb_Num_Segments) > 0)) {
    rtb_Switch_jh = rtb_Sin4;
  } else {
    rtb_Switch_jh = 0.0;
  }

  /* End of Switch: '<S285>/Switch' */

  /* RelationalOperator: '<S296>/Compare' incorporates:
   *  Constant: '<S296>/Constant'
   */
  rtb_Gamepad_POV_Up = (rtb_Switch_jh == 0.0);

  /* RelationalOperator: '<S297>/Compare' incorporates:
   *  Constant: '<S297>/Constant'
   */
  rtb_Compare_a = (rtb_Switch_jh > 0.0);

  /* Abs: '<S285>/Abs' incorporates:
   *  Sum: '<S285>/Subtract'
   *  UnitDelay: '<S285>/Unit Delay'
   */
  rtb_Switch4 = fabs(Code_Gen_Model_DW.UnitDelay_DSTATE_d - rtb_Sin4);

  /* Switch: '<S285>/Switch5' incorporates:
   *  Constant: '<S285>/Constant1'
   *  Switch: '<S285>/Switch1'
   *  UnaryMinus: '<S285>/Unary Minus'
   */
  if (rtb_Gamepad_POV_Up) {
    /* SignalConversion generated from: '<S285>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S285>/Constant4'
     *  Constant: '<S285>/Constant6'
     */
    rtb_Akxhatkk1[0] = Steering_Absolute_Cmd_Approach_Zero_Final_Thresh;
    rtb_Akxhatkk1[1] = 1.0;

    /* SignalConversion generated from: '<S285>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S285>/Constant2'
     *  Constant: '<S285>/Constant5'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Steering_Absolute_Cmd_Approach_Zero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S285>/Lookup Table Dynamic' */
    /* Dynamic Look-Up Table Block: '<S285>/Lookup Table Dynamic'
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
    rtb_Add_ov = -Steering_Absolute_Cmd_Rate_Limit_Dec;
  } else {
    /* SignalConversion generated from: '<S285>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S285>/Constant10'
     *  Constant: '<S285>/Constant8'
     */
    rtb_Akxhatkk1[0] = Steering_Absolute_Cmd_NonZero_Final_Scale_Factor;
    rtb_Akxhatkk1[1] = 1.0;

    /* SignalConversion generated from: '<S285>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S285>/Constant7'
     *  Constant: '<S285>/Constant9'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Steering_Absolute_Cmd_NonZero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S285>/Lookup Table Dynamic1' */
    /* Dynamic Look-Up Table Block: '<S285>/Lookup Table Dynamic1'
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

    /* Switch: '<S285>/Switch3' incorporates:
     *  Constant: '<S285>/Constant1'
     *  Constant: '<S285>/Constant3'
     *  UnaryMinus: '<S285>/Unary Minus'
     */
    if (rtb_Compare_a) {
      rtb_Add_ov = Steering_Absolute_Cmd_Rate_Limit_Inc;
    } else {
      rtb_Add_ov = -Steering_Absolute_Cmd_Rate_Limit_Dec;
    }

    /* End of Switch: '<S285>/Switch3' */
  }

  /* End of Switch: '<S285>/Switch5' */

  /* Product: '<S285>/Product' incorporates:
   *  Switch: '<S285>/Switch1'
   */
  rtb_Switch2_k = rtb_Add_ov * rtb_Switch4;

  /* Switch: '<S300>/Init' incorporates:
   *  UnitDelay: '<S300>/FixPt Unit Delay1'
   *  UnitDelay: '<S300>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_p != 0) {
    rtb_Sin4 = rtb_Switch_jh;
  } else {
    rtb_Sin4 = Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_e;
  }

  /* End of Switch: '<S300>/Init' */

  /* Sum: '<S298>/Sum1' */
  rtb_Sum_jt = rtb_Switch_jh - rtb_Sin4;

  /* Switch: '<S299>/Switch2' incorporates:
   *  RelationalOperator: '<S299>/LowerRelop1'
   */
  if (!(rtb_Sum_jt > rtb_Switch2_k)) {
    /* Switch: '<S285>/Switch2' incorporates:
     *  Constant: '<S285>/Constant1'
     *  Constant: '<S285>/Constant3'
     *  Switch: '<S285>/Switch4'
     *  UnaryMinus: '<S285>/Unary Minus1'
     */
    if (rtb_Gamepad_POV_Up) {
      rtb_Add_ov = Steering_Absolute_Cmd_Rate_Limit_Dec;
    } else if (rtb_Compare_a) {
      /* Switch: '<S285>/Switch4' incorporates:
       *  Constant: '<S285>/Constant1'
       */
      rtb_Add_ov = Steering_Absolute_Cmd_Rate_Limit_Dec;
    } else {
      rtb_Add_ov = -Steering_Absolute_Cmd_Rate_Limit_Inc;
    }

    /* Product: '<S285>/Product2' incorporates:
     *  Switch: '<S285>/Switch2'
     */
    rtb_Product2_l = rtb_Add_ov * rtb_Switch4;

    /* Switch: '<S299>/Switch' incorporates:
     *  RelationalOperator: '<S299>/UpperRelop'
     */
    if (rtb_Sum_jt < rtb_Product2_l) {
      rtb_Switch2_k = rtb_Product2_l;
    } else {
      rtb_Switch2_k = rtb_Sum_jt;
    }

    /* End of Switch: '<S299>/Switch' */
  }

  /* End of Switch: '<S299>/Switch2' */

  /* Sum: '<S298>/Sum' */
  rtb_Switch4 = rtb_Switch2_k + rtb_Sin4;

  /* Signum: '<S284>/Sign2' incorporates:
   *  UnitDelay: '<S284>/Unit Delay'
   */
  if (rtIsNaN(Code_Gen_Model_DW.UnitDelay_DSTATE_g)) {
    rtb_Add_ov = (rtNaN);
  } else if (Code_Gen_Model_DW.UnitDelay_DSTATE_g < 0.0) {
    rtb_Add_ov = -1.0;
  } else {
    rtb_Add_ov = (Code_Gen_Model_DW.UnitDelay_DSTATE_g > 0.0);
  }

  /* Signum: '<S284>/Sign1' */
  if (rtIsNaN(Code_Gen_Model_B.Steering_Rel_Cmd_SPF)) {
    rtb_Add_du = (rtNaN);
  } else if (Code_Gen_Model_B.Steering_Rel_Cmd_SPF < 0.0) {
    rtb_Add_du = -1.0;
  } else {
    rtb_Add_du = (Code_Gen_Model_B.Steering_Rel_Cmd_SPF > 0.0);
  }

  /* Product: '<S284>/Product1' incorporates:
   *  Signum: '<S284>/Sign1'
   *  Signum: '<S284>/Sign2'
   */
  rtb_Add_ov *= rtb_Add_du;
  if (rtIsNaN(rtb_Add_ov)) {
    rtb_Num_Segments = 0;
  } else {
    rtb_Num_Segments = (int32_T)fmod(rtb_Add_ov, 256.0);
  }

  /* Switch: '<S284>/Switch' incorporates:
   *  Constant: '<S284>/Constant'
   *  Constant: '<S287>/Constant'
   *  Constant: '<S288>/Constant'
   *  Logic: '<S284>/or'
   *  Product: '<S284>/Product1'
   *  RelationalOperator: '<S287>/Compare'
   *  RelationalOperator: '<S288>/Compare'
   *  UnitDelay: '<S284>/Unit Delay'
   */
  if ((Code_Gen_Model_DW.UnitDelay_DSTATE_g == 0.0) || (((rtb_Num_Segments < 0) ?
        ((int32_T)((int8_T)(-((int8_T)((uint8_T)(-((real_T)rtb_Num_Segments)))))))
        : rtb_Num_Segments) > 0)) {
    rtb_Switch2_k = Code_Gen_Model_B.Steering_Rel_Cmd_SPF;
  } else {
    rtb_Switch2_k = 0.0;
  }

  /* End of Switch: '<S284>/Switch' */

  /* RelationalOperator: '<S289>/Compare' incorporates:
   *  Constant: '<S289>/Constant'
   */
  rtb_Gamepad_POV_Up = (rtb_Switch2_k == 0.0);

  /* RelationalOperator: '<S290>/Compare' incorporates:
   *  Constant: '<S290>/Constant'
   */
  rtb_Compare_a = (rtb_Switch2_k > 0.0);

  /* Abs: '<S284>/Abs' incorporates:
   *  Sum: '<S284>/Subtract'
   *  UnitDelay: '<S284>/Unit Delay'
   */
  rtb_Sum_jt = fabs(Code_Gen_Model_DW.UnitDelay_DSTATE_g -
                    Code_Gen_Model_B.Steering_Rel_Cmd_SPF);

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
    rtb_Akxhatkk1[0] = Steering_Relative_Cmd_Approach_Zero_Final_Thresh;
    rtb_Akxhatkk1[1] = 1.0;

    /* SignalConversion generated from: '<S284>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S284>/Constant2'
     *  Constant: '<S284>/Constant5'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Steering_Relative_Cmd_Approach_Zero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S284>/Lookup Table Dynamic' */
    /* Dynamic Look-Up Table Block: '<S284>/Lookup Table Dynamic'
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
    rtb_Add_ov = -Steering_Relative_Cmd_Rate_Limit_Dec;
  } else {
    /* SignalConversion generated from: '<S284>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S284>/Constant10'
     *  Constant: '<S284>/Constant8'
     */
    rtb_Akxhatkk1[0] = Steering_Relative_Cmd_NonZero_Final_Scale_Factor;
    rtb_Akxhatkk1[1] = 1.0;

    /* SignalConversion generated from: '<S284>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S284>/Constant7'
     *  Constant: '<S284>/Constant9'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Steering_Relative_Cmd_NonZero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S284>/Lookup Table Dynamic1' */
    /* Dynamic Look-Up Table Block: '<S284>/Lookup Table Dynamic1'
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

    /* Switch: '<S284>/Switch3' incorporates:
     *  Constant: '<S284>/Constant1'
     *  Constant: '<S284>/Constant3'
     *  UnaryMinus: '<S284>/Unary Minus'
     */
    if (rtb_Compare_a) {
      rtb_Add_ov = Steering_Relative_Cmd_Rate_Limit_Inc;
    } else {
      rtb_Add_ov = -Steering_Relative_Cmd_Rate_Limit_Dec;
    }

    /* End of Switch: '<S284>/Switch3' */
  }

  /* End of Switch: '<S284>/Switch5' */

  /* Product: '<S284>/Product' incorporates:
   *  Switch: '<S284>/Switch1'
   */
  rtb_Sin4 = rtb_Add_ov * rtb_Sum_jt;

  /* Switch: '<S293>/Init' incorporates:
   *  UnitDelay: '<S293>/FixPt Unit Delay1'
   *  UnitDelay: '<S293>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_c != 0) {
    rtb_Switch_jh = rtb_Switch2_k;
  } else {
    rtb_Switch_jh = Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_p;
  }

  /* End of Switch: '<S293>/Init' */

  /* Sum: '<S291>/Sum1' */
  rtb_Product2_l = rtb_Switch2_k - rtb_Switch_jh;

  /* Switch: '<S292>/Switch2' incorporates:
   *  RelationalOperator: '<S292>/LowerRelop1'
   */
  if (!(rtb_Product2_l > rtb_Sin4)) {
    /* Switch: '<S284>/Switch2' incorporates:
     *  Constant: '<S284>/Constant1'
     *  Constant: '<S284>/Constant3'
     *  Switch: '<S284>/Switch4'
     *  UnaryMinus: '<S284>/Unary Minus1'
     */
    if (rtb_Gamepad_POV_Up) {
      rtb_Add_ov = Steering_Relative_Cmd_Rate_Limit_Dec;
    } else if (rtb_Compare_a) {
      /* Switch: '<S284>/Switch4' incorporates:
       *  Constant: '<S284>/Constant1'
       */
      rtb_Add_ov = Steering_Relative_Cmd_Rate_Limit_Dec;
    } else {
      rtb_Add_ov = -Steering_Relative_Cmd_Rate_Limit_Inc;
    }

    /* Product: '<S284>/Product2' incorporates:
     *  Switch: '<S284>/Switch2'
     */
    rtb_Product2_f = rtb_Add_ov * rtb_Sum_jt;

    /* Switch: '<S292>/Switch' incorporates:
     *  RelationalOperator: '<S292>/UpperRelop'
     */
    if (rtb_Product2_l < rtb_Product2_f) {
      rtb_Sin4 = rtb_Product2_f;
    } else {
      rtb_Sin4 = rtb_Product2_l;
    }

    /* End of Switch: '<S292>/Switch' */
  }

  /* End of Switch: '<S292>/Switch2' */

  /* Sum: '<S291>/Sum' */
  rtb_Sum_jt = rtb_Sin4 + rtb_Switch_jh;

  /* Switch: '<S274>/Switch' */
  if (Code_Gen_Model_B.Is_Absolute_Steering_SPF) {
    /* Switch: '<S274>/Switch' */
    Code_Gen_Model_B.Steering_Localized_Cmd = rtb_Switch4;
  } else {
    /* Switch: '<S274>/Switch' */
    Code_Gen_Model_B.Steering_Localized_Cmd = rtb_Sum_jt;
  }

  /* End of Switch: '<S274>/Switch' */

  /* Outputs for Atomic SubSystem: '<S187>/Initialize Function' */
  /* Sum: '<S273>/Add' incorporates:
   *  Constant: '<S273>/Constant'
   *  Constant: '<S273>/Constant4'
   *  Constant: '<S273>/Constant5'
   *  Trigonometry: '<S273>/Atan2'
   */
  rtb_Product2_l = rt_atan2d_snf(Distance_FL_y, 0.187325) + 1.5707963267948966;

  /* End of Outputs for SubSystem: '<S187>/Initialize Function' */

  /* Fcn: '<S315>/r->x' incorporates:
   *  Fcn: '<S320>/r->x'
   *  Fcn: '<S325>/r->x'
   *  Fcn: '<S330>/r->x'
   */
  rtb_FeedForward = Code_Gen_Model_B.Translation_Speed_RL * cos
    (Code_Gen_Model_B.Translation_Steering_Cmd);

  /* Sum: '<S309>/Add' incorporates:
   *  Fcn: '<S315>/r->x'
   *  Fcn: '<S316>/r->x'
   */
  rtb_Akxhatkk1[0] = (Code_Gen_Model_B.Steering_Localized_Cmd * cos
                      (rtb_Product2_l)) + rtb_FeedForward;

  /* Fcn: '<S315>/theta->y' incorporates:
   *  Fcn: '<S320>/theta->y'
   *  Fcn: '<S325>/theta->y'
   *  Fcn: '<S330>/theta->y'
   */
  rtb_Add_oh = Code_Gen_Model_B.Translation_Speed_RL * sin
    (Code_Gen_Model_B.Translation_Steering_Cmd);

  /* Sum: '<S309>/Add' incorporates:
   *  Fcn: '<S315>/theta->y'
   *  Fcn: '<S316>/theta->y'
   */
  rtb_Akxhatkk1[1] = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                      (rtb_Product2_l)) + rtb_Add_oh;

  /* Fcn: '<S314>/x->r' */
  rtb_Switch_jh = rt_hypotd_snf(rtb_Akxhatkk1[0], rtb_Akxhatkk1[1]);

  /* RelationalOperator: '<S317>/Compare' incorporates:
   *  Constant: '<S317>/Constant'
   */
  rtb_Compare_a = (rtb_Switch_jh == 0.0);

  /* Switch: '<S313>/Switch' */
  if (!rtb_Compare_a) {
    /* Switch: '<S313>/Switch' incorporates:
     *  Fcn: '<S314>/x->theta'
     */
    Code_Gen_Model_B.FL_Desired_Module_Angle = rt_atan2d_snf(rtb_Akxhatkk1[1],
      rtb_Akxhatkk1[0]);
  }

  /* End of Switch: '<S313>/Switch' */

  /* Trigonometry: '<S201>/Cos4' incorporates:
   *  Switch: '<S190>/Angle_Switch'
   *  Trigonometry: '<S200>/Cos4'
   */
  rtb_Product2_l = cos(Code_Gen_Model_B.FL_Desired_Module_Angle);

  /* Sum: '<S179>/Add1' incorporates:
   *  Constant: '<S179>/Constant3'
   *  Constant: '<S179>/Constant4'
   *  Gain: '<S19>/Revolutions to Radians'
   *  Inport: '<Root>/FrontLeft_Steer_Rev'
   *  Inport: '<Root>/FrontLeft_Turn_Offset'
   *  Math: '<S179>/Math Function'
   *  Sum: '<S179>/Add2'
   *  Sum: '<S19>/Add'
   */
  Code_Gen_Model_B.FL_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.FrontLeft_Steer_Rev -
       Code_Gen_Model_U.FrontLeft_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Trigonometry: '<S201>/Sin5' incorporates:
   *  UnaryMinus: '<S199>/Unary Minus'
   */
  rtb_rx_o = sin(-Code_Gen_Model_B.FL_Steer_Module_Angle);

  /* Trigonometry: '<S201>/Sin4' incorporates:
   *  Switch: '<S190>/Angle_Switch'
   *  Trigonometry: '<S200>/Sin4'
   */
  rtb_Product2_f = sin(Code_Gen_Model_B.FL_Desired_Module_Angle);

  /* Trigonometry: '<S201>/Cos5' incorporates:
   *  UnaryMinus: '<S199>/Unary Minus'
   */
  rtb_Sin4 = cos(-Code_Gen_Model_B.FL_Steer_Module_Angle);

  /* Sum: '<S201>/Subtract1' incorporates:
   *  Product: '<S201>/Product2'
   *  Product: '<S201>/Product3'
   *  Trigonometry: '<S201>/Cos4'
   *  Trigonometry: '<S201>/Sin4'
   */
  rtb_Subtract1 = (rtb_Product2_l * rtb_rx_o) + (rtb_Product2_f * rtb_Sin4);

  /* Sum: '<S201>/Subtract' incorporates:
   *  Product: '<S201>/Product'
   *  Product: '<S201>/Product1'
   *  Trigonometry: '<S201>/Cos4'
   *  Trigonometry: '<S201>/Sin4'
   */
  rtb_rx_o = (rtb_Product2_l * rtb_Sin4) - (rtb_Product2_f * rtb_rx_o);

  /* Math: '<S201>/Hypot' */
  rtb_Sin4 = rt_hypotd_snf(rtb_rx_o, rtb_Subtract1);

  /* Switch: '<S201>/Switch' incorporates:
   *  Constant: '<S201>/Constant'
   *  Constant: '<S201>/Constant1'
   *  Constant: '<S202>/Constant'
   *  Product: '<S201>/Divide'
   *  Product: '<S201>/Divide1'
   *  RelationalOperator: '<S202>/Compare'
   *  Switch: '<S201>/Switch1'
   */
  if (rtb_Sin4 > 1.0E-6) {
    rtb_Switch2_k = rtb_Subtract1 / rtb_Sin4;
    rtb_Sin4 = rtb_rx_o / rtb_Sin4;
  } else {
    rtb_Switch2_k = 0.0;
    rtb_Sin4 = 1.0;
  }

  /* End of Switch: '<S201>/Switch' */

  /* RelationalOperator: '<S198>/Compare' incorporates:
   *  Abs: '<S190>/Abs'
   *  Constant: '<S198>/Constant'
   *  Trigonometry: '<S201>/Atan1'
   */
  rtb_Gamepad_POV_Up = (fabs(rt_atan2d_snf(rtb_Switch2_k, rtb_Sin4)) >
                        1.5707963267948966);

  /* Switch: '<S190>/Angle_Switch' incorporates:
   *  Trigonometry: '<S200>/Atan1'
   */
  if (rtb_Gamepad_POV_Up) {
    /* Sum: '<S200>/Subtract1' incorporates:
     *  Product: '<S200>/Product2'
     *  Product: '<S200>/Product3'
     */
    rtb_rx_o = (rtb_Product2_l * Code_Gen_Model_ConstB.Sin5) + (rtb_Product2_f *
      Code_Gen_Model_ConstB.Cos5);

    /* Sum: '<S200>/Subtract' incorporates:
     *  Product: '<S200>/Product'
     *  Product: '<S200>/Product1'
     */
    rtb_Product2_f = (rtb_Product2_l * Code_Gen_Model_ConstB.Cos5) -
      (rtb_Product2_f * Code_Gen_Model_ConstB.Sin5);

    /* Math: '<S200>/Hypot' */
    rtb_Product2_l = rt_hypotd_snf(rtb_Product2_f, rtb_rx_o);

    /* Switch: '<S200>/Switch1' incorporates:
     *  Constant: '<S200>/Constant'
     *  Constant: '<S200>/Constant1'
     *  Constant: '<S203>/Constant'
     *  Product: '<S200>/Divide'
     *  Product: '<S200>/Divide1'
     *  RelationalOperator: '<S203>/Compare'
     *  Switch: '<S200>/Switch'
     */
    if (rtb_Product2_l > 1.0E-6) {
      rtb_Product2_f /= rtb_Product2_l;
      rtb_Product2_l = rtb_rx_o / rtb_Product2_l;
    } else {
      rtb_Product2_f = 1.0;
      rtb_Product2_l = 0.0;
    }

    /* End of Switch: '<S200>/Switch1' */
    rtb_Switch2_k = rt_atan2d_snf(rtb_Product2_l, rtb_Product2_f);
  } else {
    rtb_Switch2_k = Code_Gen_Model_B.FL_Desired_Module_Angle;
  }

  /* Sum: '<S192>/Sum' incorporates:
   *  Sum: '<S191>/Add'
   */
  rtb_Switch2_k -= Code_Gen_Model_B.FL_Steer_Module_Angle;

  /* Sum: '<S205>/Add1' incorporates:
   *  Constant: '<S205>/Constant3'
   *  Constant: '<S205>/Constant4'
   *  Math: '<S205>/Math Function'
   *  Sum: '<S192>/Sum'
   *  Sum: '<S205>/Add2'
   */
  rtb_Sin4 = rt_modd_snf(rtb_Switch2_k + 3.1415926535897931, 6.2831853071795862)
    - 3.1415926535897931;

  /* Sum: '<S207>/Sum1' incorporates:
   *  Constant: '<S192>/Constant2'
   *  Product: '<S207>/Product'
   *  Sum: '<S207>/Sum'
   *  UnitDelay: '<S207>/Unit Delay1'
   */
  rtb_Product2_l = ((rtb_Sin4 - Code_Gen_Model_DW.UnitDelay1_DSTATE_b) *
                    Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_b;

  /* Product: '<S192>/Product' incorporates:
   *  Constant: '<S192>/Constant3'
   */
  rtb_Product2_f = rtb_Product2_l * Steering_Motor_Control_D;

  /* Sum: '<S206>/Diff' incorporates:
   *  UnitDelay: '<S206>/UD'
   *
   * Block description for '<S206>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S206>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Add_ov = rtb_Product2_f - Code_Gen_Model_DW.UD_DSTATE_b;

  /* Saturate: '<S192>/Saturation' */
  if (rtb_Add_ov > Steering_Motor_Control_D_UL) {
    rtb_Add_ov = Steering_Motor_Control_D_UL;
  } else if (rtb_Add_ov < Steering_Motor_Control_D_LL) {
    rtb_Add_ov = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S192>/Add' incorporates:
   *  Gain: '<S192>/Gain1'
   *  Saturate: '<S192>/Saturation'
   */
  rtb_Subtract1 = (Steering_Motor_Control_P * rtb_Sin4) + rtb_Add_ov;

  /* Sum: '<S192>/Subtract' incorporates:
   *  Constant: '<S192>/Constant'
   */
  rtb_rx_o = 1.0 - rtb_Subtract1;

  /* Sum: '<S192>/Sum2' incorporates:
   *  Gain: '<S192>/Gain2'
   *  UnitDelay: '<S192>/Unit Delay'
   */
  rtb_Sin4 = (Steering_Motor_Control_I * rtb_Sin4) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_e;

  /* Switch: '<S208>/Switch2' incorporates:
   *  Constant: '<S192>/Constant'
   *  RelationalOperator: '<S208>/LowerRelop1'
   *  Sum: '<S192>/Subtract'
   */
  if (!(rtb_Sin4 > (1.0 - rtb_Subtract1))) {
    /* Sum: '<S192>/Subtract1' incorporates:
     *  Constant: '<S192>/Constant1'
     */
    rtb_rx_o = -1.0 - rtb_Subtract1;

    /* Switch: '<S208>/Switch' incorporates:
     *  Constant: '<S192>/Constant1'
     *  RelationalOperator: '<S208>/UpperRelop'
     *  Sum: '<S192>/Subtract1'
     */
    if (!(rtb_Sin4 < (-1.0 - rtb_Subtract1))) {
      rtb_rx_o = rtb_Sin4;
    }

    /* End of Switch: '<S208>/Switch' */
  }

  /* End of Switch: '<S208>/Switch2' */

  /* Saturate: '<S192>/Saturation1' */
  if (rtb_rx_o > Steering_Motor_Control_I_UL) {
    rtb_rx_o = Steering_Motor_Control_I_UL;
  } else if (rtb_rx_o < Steering_Motor_Control_I_LL) {
    rtb_rx_o = Steering_Motor_Control_I_LL;
  }

  /* End of Saturate: '<S192>/Saturation1' */

  /* Sum: '<S192>/Add1' */
  rtb_Add_ov = rtb_Subtract1 + rtb_rx_o;

  /* Saturate: '<S192>/Saturation2' */
  if (rtb_Add_ov > 1.0) {
    /* Outport: '<Root>/FrontLeft_Steer_DutyCycle' */
    Code_Gen_Model_Y.FrontLeft_Steer_DutyCycle = 1.0;
  } else if (rtb_Add_ov < -1.0) {
    /* Outport: '<Root>/FrontLeft_Steer_DutyCycle' */
    Code_Gen_Model_Y.FrontLeft_Steer_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/FrontLeft_Steer_DutyCycle' */
    Code_Gen_Model_Y.FrontLeft_Steer_DutyCycle = rtb_Add_ov;
  }

  /* End of Saturate: '<S192>/Saturation2' */

  /* Switch: '<S313>/Switch1' */
  if (rtb_Compare_a) {
    /* Switch: '<S313>/Switch1' incorporates:
     *  Constant: '<S313>/Constant'
     */
    Code_Gen_Model_B.FL_Desired_Wheel_Speed_in = 1.0E-15;
  } else {
    /* Switch: '<S313>/Switch1' */
    Code_Gen_Model_B.FL_Desired_Wheel_Speed_in = rtb_Switch_jh;
  }

  /* End of Switch: '<S313>/Switch1' */

  /* Sum: '<S310>/Add' incorporates:
   *  Fcn: '<S321>/r->x'
   *  Fcn: '<S321>/theta->y'
   */
  rtb_Akxhatkk1[0] = (Code_Gen_Model_B.Steering_Localized_Cmd * cos
                      (Code_Gen_Model_ConstB.FR_Tangent_Angle)) +
    rtb_FeedForward;
  rtb_Akxhatkk1[1] = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                      (Code_Gen_Model_ConstB.FR_Tangent_Angle)) + rtb_Add_oh;

  /* Fcn: '<S319>/x->r' */
  rtb_Sin4 = rt_hypotd_snf(rtb_Akxhatkk1[0], rtb_Akxhatkk1[1]);

  /* RelationalOperator: '<S322>/Compare' incorporates:
   *  Constant: '<S322>/Constant'
   */
  rtb_Compare_a = (rtb_Sin4 == 0.0);

  /* Switch: '<S318>/Switch1' */
  if (rtb_Compare_a) {
    /* Switch: '<S318>/Switch1' incorporates:
     *  Constant: '<S318>/Constant'
     */
    Code_Gen_Model_B.FR_Desired_Wheel_Speed_in = 1.0E-15;
  } else {
    /* Switch: '<S318>/Switch1' */
    Code_Gen_Model_B.FR_Desired_Wheel_Speed_in = rtb_Sin4;
  }

  /* End of Switch: '<S318>/Switch1' */

  /* Sum: '<S311>/Add' incorporates:
   *  Fcn: '<S326>/r->x'
   *  Fcn: '<S326>/theta->y'
   */
  rtb_Minus_n[0] = (Code_Gen_Model_B.Steering_Localized_Cmd * cos
                    (Code_Gen_Model_ConstB.BL_Tangent_Angle)) + rtb_FeedForward;
  rtb_Minus_n[1] = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                    (Code_Gen_Model_ConstB.BL_Tangent_Angle)) + rtb_Add_oh;

  /* Fcn: '<S324>/x->r' */
  rtb_rx_k = rt_hypotd_snf(rtb_Minus_n[0], rtb_Minus_n[1]);

  /* RelationalOperator: '<S327>/Compare' incorporates:
   *  Constant: '<S327>/Constant'
   */
  rtb_Is_Absolute_Translation_g = (rtb_rx_k == 0.0);

  /* Switch: '<S323>/Switch1' */
  if (rtb_Is_Absolute_Translation_g) {
    /* Switch: '<S323>/Switch1' incorporates:
     *  Constant: '<S323>/Constant'
     */
    Code_Gen_Model_B.BL_Desired_Wheel_Speed_in = 1.0E-15;
  } else {
    /* Switch: '<S323>/Switch1' */
    Code_Gen_Model_B.BL_Desired_Wheel_Speed_in = rtb_rx_k;
  }

  /* End of Switch: '<S323>/Switch1' */

  /* Sum: '<S312>/Add' incorporates:
   *  Fcn: '<S331>/r->x'
   *  Fcn: '<S331>/theta->y'
   */
  rtb_Add2_k_idx_0 = (Code_Gen_Model_B.Steering_Localized_Cmd * cos
                      (Code_Gen_Model_ConstB.BR_Tangent_Angle)) +
    rtb_FeedForward;
  rtb_Add2_k_idx_1 = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                      (Code_Gen_Model_ConstB.BR_Tangent_Angle)) + rtb_Add_oh;

  /* Fcn: '<S329>/x->r' */
  rtb_thetay_m = rt_hypotd_snf(rtb_Add2_k_idx_0, rtb_Add2_k_idx_1);

  /* RelationalOperator: '<S332>/Compare' incorporates:
   *  Constant: '<S332>/Constant'
   */
  rtb_Is_Absolute_Steering = (rtb_thetay_m == 0.0);

  /* Switch: '<S328>/Switch1' */
  if (rtb_Is_Absolute_Steering) {
    /* Switch: '<S328>/Switch1' incorporates:
     *  Constant: '<S328>/Constant'
     */
    Code_Gen_Model_B.BR_Desired_Wheel_Speed_in = 1.0E-15;
  } else {
    /* Switch: '<S328>/Switch1' */
    Code_Gen_Model_B.BR_Desired_Wheel_Speed_in = rtb_thetay_m;
  }

  /* End of Switch: '<S328>/Switch1' */

  /* Product: '<S308>/Divide' incorporates:
   *  Abs: '<S308>/Abs'
   *  Abs: '<S308>/Abs1'
   *  Abs: '<S308>/Abs2'
   *  Abs: '<S308>/Abs3'
   *  Constant: '<S308>/Constant'
   *  MinMax: '<S308>/Max'
   */
  rtb_Switch_jh = 5.389313721017964 / fmax(fmax(fmax(fmax(5.389313721017964,
    Code_Gen_Model_B.FL_Desired_Wheel_Speed_in),
    Code_Gen_Model_B.FR_Desired_Wheel_Speed_in),
    Code_Gen_Model_B.BL_Desired_Wheel_Speed_in),
    Code_Gen_Model_B.BR_Desired_Wheel_Speed_in);

  /* Product: '<S308>/Product' */
  Code_Gen_Model_B.FL_Desired_Wheel_Speed =
    Code_Gen_Model_B.FL_Desired_Wheel_Speed_in * rtb_Switch_jh;

  /* Switch: '<S190>/Speed_Switch' incorporates:
   *  UnaryMinus: '<S190>/Unary Minus'
   */
  if (rtb_Gamepad_POV_Up) {
    rtb_Add_ov = -Code_Gen_Model_B.FL_Desired_Wheel_Speed;
  } else {
    rtb_Add_ov = Code_Gen_Model_B.FL_Desired_Wheel_Speed;
  }

  /* Product: '<S193>/Product2' incorporates:
   *  Constant: '<S193>/Constant'
   *  Switch: '<S190>/Speed_Switch'
   */
  rtb_thetay_m = rtb_Add_ov * 1150.4247703785388;

  /* Signum: '<S188>/Sign' */
  if (rtIsNaN(rtb_thetay_m)) {
    rtb_Add_ov = (rtNaN);
  } else if (rtb_thetay_m < 0.0) {
    rtb_Add_ov = -1.0;
  } else {
    rtb_Add_ov = (rtb_thetay_m > 0.0);
  }

  /* Signum: '<S188>/Sign1' incorporates:
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed)) {
    rtb_Add_du = (rtNaN);
  } else if (Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed < 0.0) {
    rtb_Add_du = -1.0;
  } else {
    rtb_Add_du = (Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed > 0.0);
  }

  /* Product: '<S183>/Product' incorporates:
   *  Abs: '<S188>/Abs'
   *  Abs: '<S191>/Abs'
   *  Constant: '<S194>/Constant'
   *  Constant: '<S204>/Constant3'
   *  Constant: '<S204>/Constant4'
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Speed'
   *  Logic: '<S188>/OR'
   *  Lookup_n-D: '<S191>/1-D Lookup Table'
   *  Math: '<S204>/Math Function'
   *  RelationalOperator: '<S188>/Equal1'
   *  RelationalOperator: '<S194>/Compare'
   *  Signum: '<S188>/Sign'
   *  Signum: '<S188>/Sign1'
   *  Sum: '<S204>/Add1'
   *  Sum: '<S204>/Add2'
   */
  rtb_thetay_m = (((real_T)((rtb_Add_ov == rtb_Add_du) || (fabs
    (Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_thetay_m) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_Switch2_k + 1.5707963267948966, 3.1415926535897931) -
          1.5707963267948966), Code_Gen_Model_ConstP.pooled24,
     Code_Gen_Model_ConstP.pooled23, 1U);

  /* Gain: '<S189>/Gain' */
  rtb_FeedForward = Drive_Motor_Control_FF * rtb_thetay_m;

  /* Sum: '<S189>/Sum' incorporates:
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Speed'
   */
  rtb_thetay_m -= Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed;

  /* Sum: '<S196>/Sum1' incorporates:
   *  Constant: '<S189>/Constant2'
   *  Product: '<S196>/Product'
   *  Sum: '<S196>/Sum'
   *  UnitDelay: '<S196>/Unit Delay1'
   */
  rtb_Sin4 = ((rtb_thetay_m - Code_Gen_Model_DW.UnitDelay1_DSTATE_a) *
              Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_a;

  /* Product: '<S189>/Product' incorporates:
   *  Constant: '<S189>/Constant3'
   */
  rtb_Subtract1 = rtb_Sin4 * Drive_Motor_Control_D;

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
  rtb_Add_ov = rtb_Subtract1 - Code_Gen_Model_DW.UD_DSTATE_o;

  /* Saturate: '<S189>/Saturation' */
  if (rtb_Add_ov > Drive_Motor_Control_D_UL) {
    rtb_Add_ov = Drive_Motor_Control_D_UL;
  } else if (rtb_Add_ov < Drive_Motor_Control_D_LL) {
    rtb_Add_ov = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S189>/Add' incorporates:
   *  Gain: '<S189>/Gain1'
   *  Saturate: '<S189>/Saturation'
   */
  rtb_Add_oh = ((Drive_Motor_Control_P * rtb_thetay_m) + rtb_FeedForward) +
    rtb_Add_ov;

  /* Sum: '<S189>/Subtract' incorporates:
   *  Constant: '<S189>/Constant'
   */
  rtb_rx_k = 1.0 - rtb_Add_oh;

  /* Sum: '<S189>/Sum2' incorporates:
   *  Gain: '<S189>/Gain2'
   *  UnitDelay: '<S189>/Unit Delay'
   */
  rtb_FeedForward = (Drive_Motor_Control_I * rtb_thetay_m) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_f;

  /* Switch: '<S197>/Switch2' incorporates:
   *  Constant: '<S189>/Constant'
   *  RelationalOperator: '<S197>/LowerRelop1'
   *  Sum: '<S189>/Subtract'
   */
  if (!(rtb_FeedForward > (1.0 - rtb_Add_oh))) {
    /* Switch: '<S197>/Switch' incorporates:
     *  Constant: '<S189>/Constant1'
     *  RelationalOperator: '<S197>/UpperRelop'
     *  Sum: '<S189>/Subtract1'
     */
    if (rtb_FeedForward < (-1.0 - rtb_Add_oh)) {
      rtb_rx_k = -1.0 - rtb_Add_oh;
    } else {
      rtb_rx_k = rtb_FeedForward;
    }

    /* End of Switch: '<S197>/Switch' */
  }

  /* End of Switch: '<S197>/Switch2' */

  /* Saturate: '<S189>/Saturation1' */
  if (rtb_rx_k > Drive_Motor_Control_I_UL) {
    rtb_FeedForward = Drive_Motor_Control_I_UL;
  } else if (rtb_rx_k < Drive_Motor_Control_I_LL) {
    rtb_FeedForward = Drive_Motor_Control_I_LL;
  } else {
    rtb_FeedForward = rtb_rx_k;
  }

  /* End of Saturate: '<S189>/Saturation1' */

  /* Sum: '<S189>/Add1' */
  rtb_Add_ov = rtb_Add_oh + rtb_FeedForward;

  /* Saturate: '<S189>/Saturation2' */
  if (rtb_Add_ov > 1.0) {
    /* Outport: '<Root>/FrontLeft_Drive_DutyCycle' */
    Code_Gen_Model_Y.FrontLeft_Drive_DutyCycle = 1.0;
  } else if (rtb_Add_ov < -1.0) {
    /* Outport: '<Root>/FrontLeft_Drive_DutyCycle' */
    Code_Gen_Model_Y.FrontLeft_Drive_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/FrontLeft_Drive_DutyCycle' */
    Code_Gen_Model_Y.FrontLeft_Drive_DutyCycle = rtb_Add_ov;
  }

  /* End of Saturate: '<S189>/Saturation2' */

  /* Switch: '<S318>/Switch' */
  if (!rtb_Compare_a) {
    /* Switch: '<S318>/Switch' incorporates:
     *  Fcn: '<S319>/x->theta'
     */
    Code_Gen_Model_B.FR_Desired_Module_Angle = rt_atan2d_snf(rtb_Akxhatkk1[1],
      rtb_Akxhatkk1[0]);
  }

  /* End of Switch: '<S318>/Switch' */

  /* Trigonometry: '<S222>/Cos4' incorporates:
   *  Switch: '<S211>/Angle_Switch'
   *  Trigonometry: '<S221>/Cos4'
   */
  rtb_Subtract_e = cos(Code_Gen_Model_B.FR_Desired_Module_Angle);

  /* Sum: '<S180>/Add1' incorporates:
   *  Constant: '<S180>/Constant3'
   *  Constant: '<S180>/Constant4'
   *  Gain: '<S19>/Revolutions to Radians1'
   *  Inport: '<Root>/FrontRight_Steer_Rev'
   *  Inport: '<Root>/FrontRight_Turn_Offset'
   *  Math: '<S180>/Math Function'
   *  Sum: '<S180>/Add2'
   *  Sum: '<S19>/Add1'
   */
  Code_Gen_Model_B.FR_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.FrontRight_Steer_Rev -
       Code_Gen_Model_U.FrontRight_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Trigonometry: '<S222>/Sin5' incorporates:
   *  UnaryMinus: '<S220>/Unary Minus'
   */
  rtb_Switch2_k = sin(-Code_Gen_Model_B.FR_Steer_Module_Angle);

  /* Trigonometry: '<S222>/Sin4' incorporates:
   *  Switch: '<S211>/Angle_Switch'
   *  Trigonometry: '<S221>/Sin4'
   */
  rtb_Product_d = sin(Code_Gen_Model_B.FR_Desired_Module_Angle);

  /* Trigonometry: '<S222>/Cos5' incorporates:
   *  UnaryMinus: '<S220>/Unary Minus'
   */
  rtb_rx_k = cos(-Code_Gen_Model_B.FR_Steer_Module_Angle);

  /* Sum: '<S222>/Subtract1' incorporates:
   *  Product: '<S222>/Product2'
   *  Product: '<S222>/Product3'
   *  Trigonometry: '<S222>/Cos4'
   *  Trigonometry: '<S222>/Sin4'
   */
  rtb_Add_oh = (rtb_Subtract_e * rtb_Switch2_k) + (rtb_Product_d * rtb_rx_k);

  /* Sum: '<S222>/Subtract' incorporates:
   *  Product: '<S222>/Product'
   *  Product: '<S222>/Product1'
   *  Trigonometry: '<S222>/Cos4'
   *  Trigonometry: '<S222>/Sin4'
   */
  rtb_Subtract1_of = (rtb_Subtract_e * rtb_rx_k) - (rtb_Product_d *
    rtb_Switch2_k);

  /* Math: '<S222>/Hypot' */
  rtb_Hypot_bl = rt_hypotd_snf(rtb_Subtract1_of, rtb_Add_oh);

  /* Switch: '<S222>/Switch' incorporates:
   *  Constant: '<S222>/Constant'
   *  Constant: '<S222>/Constant1'
   *  Constant: '<S223>/Constant'
   *  Product: '<S222>/Divide'
   *  Product: '<S222>/Divide1'
   *  RelationalOperator: '<S223>/Compare'
   *  Switch: '<S222>/Switch1'
   */
  if (rtb_Hypot_bl > 1.0E-6) {
    rtb_thetay_m = rtb_Add_oh / rtb_Hypot_bl;
    rtb_rx_k = rtb_Subtract1_of / rtb_Hypot_bl;
  } else {
    rtb_thetay_m = 0.0;
    rtb_rx_k = 1.0;
  }

  /* End of Switch: '<S222>/Switch' */

  /* RelationalOperator: '<S219>/Compare' incorporates:
   *  Abs: '<S211>/Abs'
   *  Constant: '<S219>/Constant'
   *  Trigonometry: '<S222>/Atan1'
   */
  rtb_Gamepad_POV_Up = (fabs(rt_atan2d_snf(rtb_thetay_m, rtb_rx_k)) >
                        1.5707963267948966);

  /* Switch: '<S211>/Angle_Switch' incorporates:
   *  Trigonometry: '<S221>/Atan1'
   */
  if (rtb_Gamepad_POV_Up) {
    /* Sum: '<S221>/Subtract1' incorporates:
     *  Product: '<S221>/Product2'
     *  Product: '<S221>/Product3'
     */
    rtb_Add_oh = (rtb_Subtract_e * Code_Gen_Model_ConstB.Sin5_m) +
      (rtb_Product_d * Code_Gen_Model_ConstB.Cos5_g);

    /* Sum: '<S221>/Subtract' incorporates:
     *  Product: '<S221>/Product'
     *  Product: '<S221>/Product1'
     */
    rtb_Hypot_bl = (rtb_Subtract_e * Code_Gen_Model_ConstB.Cos5_g) -
      (rtb_Product_d * Code_Gen_Model_ConstB.Sin5_m);

    /* Math: '<S221>/Hypot' */
    rtb_Subtract1_of = rt_hypotd_snf(rtb_Hypot_bl, rtb_Add_oh);

    /* Switch: '<S221>/Switch1' incorporates:
     *  Constant: '<S221>/Constant'
     *  Constant: '<S221>/Constant1'
     *  Constant: '<S224>/Constant'
     *  Product: '<S221>/Divide'
     *  Product: '<S221>/Divide1'
     *  RelationalOperator: '<S224>/Compare'
     *  Switch: '<S221>/Switch'
     */
    if (rtb_Subtract1_of > 1.0E-6) {
      rtb_Hypot_bl /= rtb_Subtract1_of;
      rtb_Add_oh /= rtb_Subtract1_of;
    } else {
      rtb_Hypot_bl = 1.0;
      rtb_Add_oh = 0.0;
    }

    /* End of Switch: '<S221>/Switch1' */
    rtb_thetay_m = rt_atan2d_snf(rtb_Add_oh, rtb_Hypot_bl);
  } else {
    rtb_thetay_m = Code_Gen_Model_B.FR_Desired_Module_Angle;
  }

  /* Sum: '<S213>/Sum' incorporates:
   *  Sum: '<S212>/Add'
   */
  rtb_thetay_m -= Code_Gen_Model_B.FR_Steer_Module_Angle;

  /* Sum: '<S226>/Add1' incorporates:
   *  Constant: '<S226>/Constant3'
   *  Constant: '<S226>/Constant4'
   *  Math: '<S226>/Math Function'
   *  Sum: '<S213>/Sum'
   *  Sum: '<S226>/Add2'
   */
  rtb_rx_k = rt_modd_snf(rtb_thetay_m + 3.1415926535897931, 6.2831853071795862)
    - 3.1415926535897931;

  /* Sum: '<S228>/Sum1' incorporates:
   *  Constant: '<S213>/Constant2'
   *  Product: '<S228>/Product'
   *  Sum: '<S228>/Sum'
   *  UnitDelay: '<S228>/Unit Delay1'
   */
  rtb_Add_oh = ((rtb_rx_k - Code_Gen_Model_DW.UnitDelay1_DSTATE_n) *
                Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_n;

  /* Product: '<S213>/Product' incorporates:
   *  Constant: '<S213>/Constant3'
   */
  rtb_Subtract1_of = rtb_Add_oh * Steering_Motor_Control_D;

  /* Sum: '<S227>/Diff' incorporates:
   *  UnitDelay: '<S227>/UD'
   *
   * Block description for '<S227>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S227>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Add_ov = rtb_Subtract1_of - Code_Gen_Model_DW.UD_DSTATE_i;

  /* Saturate: '<S213>/Saturation' */
  if (rtb_Add_ov > Steering_Motor_Control_D_UL) {
    rtb_Add_ov = Steering_Motor_Control_D_UL;
  } else if (rtb_Add_ov < Steering_Motor_Control_D_LL) {
    rtb_Add_ov = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S213>/Add' incorporates:
   *  Gain: '<S213>/Gain1'
   *  Saturate: '<S213>/Saturation'
   */
  rtb_Add_i = (Steering_Motor_Control_P * rtb_rx_k) + rtb_Add_ov;

  /* Sum: '<S213>/Subtract' incorporates:
   *  Constant: '<S213>/Constant'
   */
  rtb_Switch2_k = 1.0 - rtb_Add_i;

  /* Sum: '<S213>/Sum2' incorporates:
   *  Gain: '<S213>/Gain2'
   *  UnitDelay: '<S213>/Unit Delay'
   */
  rtb_Hypot_bl = (Steering_Motor_Control_I * rtb_rx_k) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_dt;

  /* Switch: '<S229>/Switch2' incorporates:
   *  Constant: '<S213>/Constant'
   *  RelationalOperator: '<S229>/LowerRelop1'
   *  Sum: '<S213>/Subtract'
   */
  if (!(rtb_Hypot_bl > (1.0 - rtb_Add_i))) {
    /* Switch: '<S229>/Switch' incorporates:
     *  Constant: '<S213>/Constant1'
     *  RelationalOperator: '<S229>/UpperRelop'
     *  Sum: '<S213>/Subtract1'
     */
    if (rtb_Hypot_bl < (-1.0 - rtb_Add_i)) {
      rtb_Switch2_k = -1.0 - rtb_Add_i;
    } else {
      rtb_Switch2_k = rtb_Hypot_bl;
    }

    /* End of Switch: '<S229>/Switch' */
  }

  /* End of Switch: '<S229>/Switch2' */

  /* Saturate: '<S213>/Saturation1' */
  if (rtb_Switch2_k > Steering_Motor_Control_I_UL) {
    rtb_Hypot_bl = Steering_Motor_Control_I_UL;
  } else if (rtb_Switch2_k < Steering_Motor_Control_I_LL) {
    rtb_Hypot_bl = Steering_Motor_Control_I_LL;
  } else {
    rtb_Hypot_bl = rtb_Switch2_k;
  }

  /* End of Saturate: '<S213>/Saturation1' */

  /* Sum: '<S213>/Add1' */
  rtb_Add_ov = rtb_Add_i + rtb_Hypot_bl;

  /* Saturate: '<S213>/Saturation2' */
  if (rtb_Add_ov > 1.0) {
    /* Outport: '<Root>/FrontRight_Steer_DutyCycle' */
    Code_Gen_Model_Y.FrontRight_Steer_DutyCycle = 1.0;
  } else if (rtb_Add_ov < -1.0) {
    /* Outport: '<Root>/FrontRight_Steer_DutyCycle' */
    Code_Gen_Model_Y.FrontRight_Steer_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/FrontRight_Steer_DutyCycle' */
    Code_Gen_Model_Y.FrontRight_Steer_DutyCycle = rtb_Add_ov;
  }

  /* End of Saturate: '<S213>/Saturation2' */

  /* Product: '<S308>/Product1' */
  Code_Gen_Model_B.FR_Desired_Wheel_Speed =
    Code_Gen_Model_B.FR_Desired_Wheel_Speed_in * rtb_Switch_jh;

  /* Switch: '<S211>/Speed_Switch' incorporates:
   *  UnaryMinus: '<S211>/Unary Minus'
   */
  if (rtb_Gamepad_POV_Up) {
    rtb_Add_ov = -Code_Gen_Model_B.FR_Desired_Wheel_Speed;
  } else {
    rtb_Add_ov = Code_Gen_Model_B.FR_Desired_Wheel_Speed;
  }

  /* Product: '<S214>/Product2' incorporates:
   *  Constant: '<S214>/Constant'
   *  Switch: '<S211>/Speed_Switch'
   */
  rtb_rx_k = rtb_Add_ov * 1150.4247703785388;

  /* Signum: '<S209>/Sign' */
  if (rtIsNaN(rtb_rx_k)) {
    rtb_Add_ov = (rtNaN);
  } else if (rtb_rx_k < 0.0) {
    rtb_Add_ov = -1.0;
  } else {
    rtb_Add_ov = (rtb_rx_k > 0.0);
  }

  /* Signum: '<S209>/Sign1' incorporates:
   *  Inport: '<Root>/FrontRight_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.FrontRight_Drive_Motor_Speed)) {
    rtb_Add_du = (rtNaN);
  } else if (Code_Gen_Model_U.FrontRight_Drive_Motor_Speed < 0.0) {
    rtb_Add_du = -1.0;
  } else {
    rtb_Add_du = (Code_Gen_Model_U.FrontRight_Drive_Motor_Speed > 0.0);
  }

  /* Product: '<S184>/Product' incorporates:
   *  Abs: '<S209>/Abs'
   *  Abs: '<S212>/Abs'
   *  Constant: '<S215>/Constant'
   *  Constant: '<S225>/Constant3'
   *  Constant: '<S225>/Constant4'
   *  Inport: '<Root>/FrontRight_Drive_Motor_Speed'
   *  Logic: '<S209>/OR'
   *  Lookup_n-D: '<S212>/1-D Lookup Table'
   *  Math: '<S225>/Math Function'
   *  RelationalOperator: '<S209>/Equal1'
   *  RelationalOperator: '<S215>/Compare'
   *  Signum: '<S209>/Sign'
   *  Signum: '<S209>/Sign1'
   *  Sum: '<S225>/Add1'
   *  Sum: '<S225>/Add2'
   */
  rtb_rx_k = (((real_T)((rtb_Add_ov == rtb_Add_du) || (fabs
    (Code_Gen_Model_U.FrontRight_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_rx_k) * look1_binlcpw(fabs
    (rt_modd_snf(rtb_thetay_m + 1.5707963267948966, 3.1415926535897931) -
     1.5707963267948966), Code_Gen_Model_ConstP.pooled24,
    Code_Gen_Model_ConstP.pooled23, 1U);

  /* Gain: '<S210>/Gain' */
  rtb_FeedForward_n = Drive_Motor_Control_FF * rtb_rx_k;

  /* Sum: '<S210>/Sum' incorporates:
   *  Inport: '<Root>/FrontRight_Drive_Motor_Speed'
   */
  rtb_rx_k -= Code_Gen_Model_U.FrontRight_Drive_Motor_Speed;

  /* Sum: '<S217>/Sum1' incorporates:
   *  Constant: '<S210>/Constant2'
   *  Product: '<S217>/Product'
   *  Sum: '<S217>/Sum'
   *  UnitDelay: '<S217>/Unit Delay1'
   */
  rtb_Add_i = ((rtb_rx_k - Code_Gen_Model_DW.UnitDelay1_DSTATE_b1) *
               Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_b1;

  /* Product: '<S210>/Product' incorporates:
   *  Constant: '<S210>/Constant3'
   */
  rtb_Subtract1_a = rtb_Add_i * Drive_Motor_Control_D;

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
  rtb_Add_ov = rtb_Subtract1_a - Code_Gen_Model_DW.UD_DSTATE_e;

  /* Saturate: '<S210>/Saturation' */
  if (rtb_Add_ov > Drive_Motor_Control_D_UL) {
    rtb_Add_ov = Drive_Motor_Control_D_UL;
  } else if (rtb_Add_ov < Drive_Motor_Control_D_LL) {
    rtb_Add_ov = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S210>/Add' incorporates:
   *  Gain: '<S210>/Gain1'
   *  Saturate: '<S210>/Saturation'
   */
  rtb_Add_o2 = ((Drive_Motor_Control_P * rtb_rx_k) + rtb_FeedForward_n) +
    rtb_Add_ov;

  /* Sum: '<S210>/Subtract' incorporates:
   *  Constant: '<S210>/Constant'
   */
  rtb_thetay_m = 1.0 - rtb_Add_o2;

  /* Sum: '<S210>/Sum2' incorporates:
   *  Gain: '<S210>/Gain2'
   *  UnitDelay: '<S210>/Unit Delay'
   */
  rtb_FeedForward_n = (Drive_Motor_Control_I * rtb_rx_k) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_em;

  /* Switch: '<S218>/Switch2' incorporates:
   *  Constant: '<S210>/Constant'
   *  RelationalOperator: '<S218>/LowerRelop1'
   *  Sum: '<S210>/Subtract'
   */
  if (!(rtb_FeedForward_n > (1.0 - rtb_Add_o2))) {
    /* Switch: '<S218>/Switch' incorporates:
     *  Constant: '<S210>/Constant1'
     *  RelationalOperator: '<S218>/UpperRelop'
     *  Sum: '<S210>/Subtract1'
     */
    if (rtb_FeedForward_n < (-1.0 - rtb_Add_o2)) {
      rtb_thetay_m = -1.0 - rtb_Add_o2;
    } else {
      rtb_thetay_m = rtb_FeedForward_n;
    }

    /* End of Switch: '<S218>/Switch' */
  }

  /* End of Switch: '<S218>/Switch2' */

  /* Saturate: '<S210>/Saturation1' */
  if (rtb_thetay_m > Drive_Motor_Control_I_UL) {
    rtb_FeedForward_n = Drive_Motor_Control_I_UL;
  } else if (rtb_thetay_m < Drive_Motor_Control_I_LL) {
    rtb_FeedForward_n = Drive_Motor_Control_I_LL;
  } else {
    rtb_FeedForward_n = rtb_thetay_m;
  }

  /* End of Saturate: '<S210>/Saturation1' */

  /* Sum: '<S210>/Add1' */
  rtb_Add_ov = rtb_Add_o2 + rtb_FeedForward_n;

  /* Saturate: '<S210>/Saturation2' */
  if (rtb_Add_ov > 1.0) {
    /* Outport: '<Root>/FrontRight_Drive_DutyCycle' */
    Code_Gen_Model_Y.FrontRight_Drive_DutyCycle = 1.0;
  } else if (rtb_Add_ov < -1.0) {
    /* Outport: '<Root>/FrontRight_Drive_DutyCycle' */
    Code_Gen_Model_Y.FrontRight_Drive_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/FrontRight_Drive_DutyCycle' */
    Code_Gen_Model_Y.FrontRight_Drive_DutyCycle = rtb_Add_ov;
  }

  /* End of Saturate: '<S210>/Saturation2' */

  /* Switch: '<S323>/Switch' */
  if (!rtb_Is_Absolute_Translation_g) {
    /* Switch: '<S323>/Switch' incorporates:
     *  Fcn: '<S324>/x->theta'
     */
    Code_Gen_Model_B.BL_Desired_Module_Angle = rt_atan2d_snf(rtb_Minus_n[1],
      rtb_Minus_n[0]);
  }

  /* End of Switch: '<S323>/Switch' */

  /* Trigonometry: '<S243>/Cos4' incorporates:
   *  Switch: '<S232>/Angle_Switch'
   *  Trigonometry: '<S242>/Cos4'
   */
  rtb_Subtract_e = cos(Code_Gen_Model_B.BL_Desired_Module_Angle);

  /* Sum: '<S181>/Add1' incorporates:
   *  Constant: '<S181>/Constant3'
   *  Constant: '<S181>/Constant4'
   *  Gain: '<S19>/Revolutions to Radians2'
   *  Inport: '<Root>/BackLeft_Steer_Rev'
   *  Inport: '<Root>/BackLeft_Turn_Offset'
   *  Math: '<S181>/Math Function'
   *  Sum: '<S181>/Add2'
   *  Sum: '<S19>/Add2'
   */
  Code_Gen_Model_B.BL_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.BackLeft_Steer_Rev -
       Code_Gen_Model_U.BackLeft_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Trigonometry: '<S243>/Sin5' incorporates:
   *  UnaryMinus: '<S241>/Unary Minus'
   */
  rtb_Switch2_k = sin(-Code_Gen_Model_B.BL_Steer_Module_Angle);

  /* Trigonometry: '<S243>/Sin4' incorporates:
   *  Switch: '<S232>/Angle_Switch'
   *  Trigonometry: '<S242>/Sin4'
   */
  rtb_Product_d = sin(Code_Gen_Model_B.BL_Desired_Module_Angle);

  /* Trigonometry: '<S243>/Cos5' incorporates:
   *  UnaryMinus: '<S241>/Unary Minus'
   */
  rtb_rx_k = cos(-Code_Gen_Model_B.BL_Steer_Module_Angle);

  /* Sum: '<S243>/Subtract1' incorporates:
   *  Product: '<S243>/Product2'
   *  Product: '<S243>/Product3'
   *  Trigonometry: '<S243>/Cos4'
   *  Trigonometry: '<S243>/Sin4'
   */
  rtb_Add_o2 = (rtb_Subtract_e * rtb_Switch2_k) + (rtb_Product_d * rtb_rx_k);

  /* Sum: '<S243>/Subtract' incorporates:
   *  Product: '<S243>/Product'
   *  Product: '<S243>/Product1'
   *  Trigonometry: '<S243>/Cos4'
   *  Trigonometry: '<S243>/Sin4'
   */
  rtb_Subtract1_do = (rtb_Subtract_e * rtb_rx_k) - (rtb_Product_d *
    rtb_Switch2_k);

  /* Math: '<S243>/Hypot' */
  rtb_Hypot_d = rt_hypotd_snf(rtb_Subtract1_do, rtb_Add_o2);

  /* Switch: '<S243>/Switch' incorporates:
   *  Constant: '<S243>/Constant'
   *  Constant: '<S243>/Constant1'
   *  Constant: '<S244>/Constant'
   *  Product: '<S243>/Divide'
   *  Product: '<S243>/Divide1'
   *  RelationalOperator: '<S244>/Compare'
   *  Switch: '<S243>/Switch1'
   */
  if (rtb_Hypot_d > 1.0E-6) {
    rtb_thetay_m = rtb_Add_o2 / rtb_Hypot_d;
    rtb_rx_k = rtb_Subtract1_do / rtb_Hypot_d;
  } else {
    rtb_thetay_m = 0.0;
    rtb_rx_k = 1.0;
  }

  /* End of Switch: '<S243>/Switch' */

  /* RelationalOperator: '<S240>/Compare' incorporates:
   *  Abs: '<S232>/Abs'
   *  Constant: '<S240>/Constant'
   *  Trigonometry: '<S243>/Atan1'
   */
  rtb_Is_Absolute_Translation_g = (fabs(rt_atan2d_snf(rtb_thetay_m, rtb_rx_k)) >
    1.5707963267948966);

  /* Switch: '<S232>/Angle_Switch' incorporates:
   *  Trigonometry: '<S242>/Atan1'
   */
  if (rtb_Is_Absolute_Translation_g) {
    /* Sum: '<S242>/Subtract1' incorporates:
     *  Product: '<S242>/Product2'
     *  Product: '<S242>/Product3'
     */
    rtb_Add_o2 = (rtb_Subtract_e * Code_Gen_Model_ConstB.Sin5_e) +
      (rtb_Product_d * Code_Gen_Model_ConstB.Cos5_i);

    /* Sum: '<S242>/Subtract' incorporates:
     *  Product: '<S242>/Product'
     *  Product: '<S242>/Product1'
     */
    rtb_Hypot_d = (rtb_Subtract_e * Code_Gen_Model_ConstB.Cos5_i) -
      (rtb_Product_d * Code_Gen_Model_ConstB.Sin5_e);

    /* Math: '<S242>/Hypot' */
    rtb_Subtract1_do = rt_hypotd_snf(rtb_Hypot_d, rtb_Add_o2);

    /* Switch: '<S242>/Switch1' incorporates:
     *  Constant: '<S242>/Constant'
     *  Constant: '<S242>/Constant1'
     *  Constant: '<S245>/Constant'
     *  Product: '<S242>/Divide'
     *  Product: '<S242>/Divide1'
     *  RelationalOperator: '<S245>/Compare'
     *  Switch: '<S242>/Switch'
     */
    if (rtb_Subtract1_do > 1.0E-6) {
      rtb_Hypot_d /= rtb_Subtract1_do;
      rtb_Add_o2 /= rtb_Subtract1_do;
    } else {
      rtb_Hypot_d = 1.0;
      rtb_Add_o2 = 0.0;
    }

    /* End of Switch: '<S242>/Switch1' */
    rtb_thetay_m = rt_atan2d_snf(rtb_Add_o2, rtb_Hypot_d);
  } else {
    rtb_thetay_m = Code_Gen_Model_B.BL_Desired_Module_Angle;
  }

  /* Sum: '<S234>/Sum' incorporates:
   *  Sum: '<S233>/Add'
   */
  rtb_thetay_m -= Code_Gen_Model_B.BL_Steer_Module_Angle;

  /* Sum: '<S247>/Add1' incorporates:
   *  Constant: '<S247>/Constant3'
   *  Constant: '<S247>/Constant4'
   *  Math: '<S247>/Math Function'
   *  Sum: '<S234>/Sum'
   *  Sum: '<S247>/Add2'
   */
  rtb_rx_k = rt_modd_snf(rtb_thetay_m + 3.1415926535897931, 6.2831853071795862)
    - 3.1415926535897931;

  /* Sum: '<S249>/Sum1' incorporates:
   *  Constant: '<S234>/Constant2'
   *  Product: '<S249>/Product'
   *  Sum: '<S249>/Sum'
   *  UnitDelay: '<S249>/Unit Delay1'
   */
  rtb_Add_o2 = ((rtb_rx_k - Code_Gen_Model_DW.UnitDelay1_DSTATE_nw) *
                Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_nw;

  /* Product: '<S234>/Product' incorporates:
   *  Constant: '<S234>/Constant3'
   */
  rtb_Subtract1_do = rtb_Add_o2 * Steering_Motor_Control_D;

  /* Sum: '<S248>/Diff' incorporates:
   *  UnitDelay: '<S248>/UD'
   *
   * Block description for '<S248>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S248>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Add_ov = rtb_Subtract1_do - Code_Gen_Model_DW.UD_DSTATE_k;

  /* Saturate: '<S234>/Saturation' */
  if (rtb_Add_ov > Steering_Motor_Control_D_UL) {
    rtb_Add_ov = Steering_Motor_Control_D_UL;
  } else if (rtb_Add_ov < Steering_Motor_Control_D_LL) {
    rtb_Add_ov = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S234>/Add' incorporates:
   *  Gain: '<S234>/Gain1'
   *  Saturate: '<S234>/Saturation'
   */
  rtb_Add_gj = (Steering_Motor_Control_P * rtb_rx_k) + rtb_Add_ov;

  /* Sum: '<S234>/Subtract' incorporates:
   *  Constant: '<S234>/Constant'
   */
  rtb_Switch2_k = 1.0 - rtb_Add_gj;

  /* Sum: '<S234>/Sum2' incorporates:
   *  Gain: '<S234>/Gain2'
   *  UnitDelay: '<S234>/Unit Delay'
   */
  rtb_Hypot_d = (Steering_Motor_Control_I * rtb_rx_k) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_k;

  /* Switch: '<S250>/Switch2' incorporates:
   *  Constant: '<S234>/Constant'
   *  RelationalOperator: '<S250>/LowerRelop1'
   *  Sum: '<S234>/Subtract'
   */
  if (!(rtb_Hypot_d > (1.0 - rtb_Add_gj))) {
    /* Switch: '<S250>/Switch' incorporates:
     *  Constant: '<S234>/Constant1'
     *  RelationalOperator: '<S250>/UpperRelop'
     *  Sum: '<S234>/Subtract1'
     */
    if (rtb_Hypot_d < (-1.0 - rtb_Add_gj)) {
      rtb_Switch2_k = -1.0 - rtb_Add_gj;
    } else {
      rtb_Switch2_k = rtb_Hypot_d;
    }

    /* End of Switch: '<S250>/Switch' */
  }

  /* End of Switch: '<S250>/Switch2' */

  /* Saturate: '<S234>/Saturation1' */
  if (rtb_Switch2_k > Steering_Motor_Control_I_UL) {
    rtb_Hypot_d = Steering_Motor_Control_I_UL;
  } else if (rtb_Switch2_k < Steering_Motor_Control_I_LL) {
    rtb_Hypot_d = Steering_Motor_Control_I_LL;
  } else {
    rtb_Hypot_d = rtb_Switch2_k;
  }

  /* End of Saturate: '<S234>/Saturation1' */

  /* Sum: '<S234>/Add1' */
  rtb_Add_ov = rtb_Add_gj + rtb_Hypot_d;

  /* Saturate: '<S234>/Saturation2' */
  if (rtb_Add_ov > 1.0) {
    /* Outport: '<Root>/BackLeft_Steer_DutyCycle' */
    Code_Gen_Model_Y.BackLeft_Steer_DutyCycle = 1.0;
  } else if (rtb_Add_ov < -1.0) {
    /* Outport: '<Root>/BackLeft_Steer_DutyCycle' */
    Code_Gen_Model_Y.BackLeft_Steer_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/BackLeft_Steer_DutyCycle' */
    Code_Gen_Model_Y.BackLeft_Steer_DutyCycle = rtb_Add_ov;
  }

  /* End of Saturate: '<S234>/Saturation2' */

  /* Product: '<S308>/Product2' */
  Code_Gen_Model_B.BL_Desired_Wheel_Speed =
    Code_Gen_Model_B.BL_Desired_Wheel_Speed_in * rtb_Switch_jh;

  /* Switch: '<S232>/Speed_Switch' incorporates:
   *  UnaryMinus: '<S232>/Unary Minus'
   */
  if (rtb_Is_Absolute_Translation_g) {
    rtb_Add_ov = -Code_Gen_Model_B.BL_Desired_Wheel_Speed;
  } else {
    rtb_Add_ov = Code_Gen_Model_B.BL_Desired_Wheel_Speed;
  }

  /* Product: '<S235>/Product2' incorporates:
   *  Constant: '<S235>/Constant'
   *  Switch: '<S232>/Speed_Switch'
   */
  rtb_rx_k = rtb_Add_ov * 1150.4247703785388;

  /* Signum: '<S230>/Sign' */
  if (rtIsNaN(rtb_rx_k)) {
    rtb_Add_ov = (rtNaN);
  } else if (rtb_rx_k < 0.0) {
    rtb_Add_ov = -1.0;
  } else {
    rtb_Add_ov = (rtb_rx_k > 0.0);
  }

  /* Signum: '<S230>/Sign1' incorporates:
   *  Inport: '<Root>/BackLeft_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.BackLeft_Drive_Motor_Speed)) {
    rtb_Add_du = (rtNaN);
  } else if (Code_Gen_Model_U.BackLeft_Drive_Motor_Speed < 0.0) {
    rtb_Add_du = -1.0;
  } else {
    rtb_Add_du = (Code_Gen_Model_U.BackLeft_Drive_Motor_Speed > 0.0);
  }

  /* Product: '<S185>/Product' incorporates:
   *  Abs: '<S230>/Abs'
   *  Abs: '<S233>/Abs'
   *  Constant: '<S236>/Constant'
   *  Constant: '<S246>/Constant3'
   *  Constant: '<S246>/Constant4'
   *  Inport: '<Root>/BackLeft_Drive_Motor_Speed'
   *  Logic: '<S230>/OR'
   *  Lookup_n-D: '<S233>/1-D Lookup Table'
   *  Math: '<S246>/Math Function'
   *  RelationalOperator: '<S230>/Equal1'
   *  RelationalOperator: '<S236>/Compare'
   *  Signum: '<S230>/Sign'
   *  Signum: '<S230>/Sign1'
   *  Sum: '<S246>/Add1'
   *  Sum: '<S246>/Add2'
   */
  rtb_rx_k = (((real_T)((rtb_Add_ov == rtb_Add_du) || (fabs
    (Code_Gen_Model_U.BackLeft_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_rx_k) * look1_binlcpw(fabs
    (rt_modd_snf(rtb_thetay_m + 1.5707963267948966, 3.1415926535897931) -
     1.5707963267948966), Code_Gen_Model_ConstP.pooled24,
    Code_Gen_Model_ConstP.pooled23, 1U);

  /* Gain: '<S231>/Gain' */
  rtb_FeedForward_a = Drive_Motor_Control_FF * rtb_rx_k;

  /* Sum: '<S231>/Sum' incorporates:
   *  Inport: '<Root>/BackLeft_Drive_Motor_Speed'
   */
  rtb_rx_k -= Code_Gen_Model_U.BackLeft_Drive_Motor_Speed;

  /* Sum: '<S238>/Sum1' incorporates:
   *  Constant: '<S231>/Constant2'
   *  Product: '<S238>/Product'
   *  Sum: '<S238>/Sum'
   *  UnitDelay: '<S238>/Unit Delay1'
   */
  rtb_Add_gj = ((rtb_rx_k - Code_Gen_Model_DW.UnitDelay1_DSTATE_f) *
                Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_f;

  /* Product: '<S231>/Product' incorporates:
   *  Constant: '<S231>/Constant3'
   */
  rtb_Subtract1_f = rtb_Add_gj * Drive_Motor_Control_D;

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
  rtb_Add_ov = rtb_Subtract1_f - Code_Gen_Model_DW.UD_DSTATE_l;

  /* Saturate: '<S231>/Saturation' */
  if (rtb_Add_ov > Drive_Motor_Control_D_UL) {
    rtb_Add_ov = Drive_Motor_Control_D_UL;
  } else if (rtb_Add_ov < Drive_Motor_Control_D_LL) {
    rtb_Add_ov = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S231>/Add' incorporates:
   *  Gain: '<S231>/Gain1'
   *  Saturate: '<S231>/Saturation'
   */
  rtb_Switch2_k = ((Drive_Motor_Control_P * rtb_rx_k) + rtb_FeedForward_a) +
    rtb_Add_ov;

  /* Sum: '<S231>/Subtract' incorporates:
   *  Constant: '<S231>/Constant'
   */
  rtb_thetay_m = 1.0 - rtb_Switch2_k;

  /* Sum: '<S231>/Sum2' incorporates:
   *  Gain: '<S231>/Gain2'
   *  UnitDelay: '<S231>/Unit Delay'
   */
  rtb_FeedForward_a = (Drive_Motor_Control_I * rtb_rx_k) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_gp;

  /* Switch: '<S239>/Switch2' incorporates:
   *  Constant: '<S231>/Constant'
   *  RelationalOperator: '<S239>/LowerRelop1'
   *  Sum: '<S231>/Subtract'
   */
  if (!(rtb_FeedForward_a > (1.0 - rtb_Switch2_k))) {
    /* Sum: '<S231>/Subtract1' incorporates:
     *  Constant: '<S231>/Constant1'
     */
    rtb_thetay_m = -1.0 - rtb_Switch2_k;

    /* Switch: '<S239>/Switch' incorporates:
     *  Constant: '<S231>/Constant1'
     *  RelationalOperator: '<S239>/UpperRelop'
     *  Sum: '<S231>/Subtract1'
     */
    if (!(rtb_FeedForward_a < (-1.0 - rtb_Switch2_k))) {
      rtb_thetay_m = rtb_FeedForward_a;
    }

    /* End of Switch: '<S239>/Switch' */
  }

  /* End of Switch: '<S239>/Switch2' */

  /* Saturate: '<S231>/Saturation1' */
  if (rtb_thetay_m > Drive_Motor_Control_I_UL) {
    rtb_FeedForward_a = Drive_Motor_Control_I_UL;
  } else if (rtb_thetay_m < Drive_Motor_Control_I_LL) {
    rtb_FeedForward_a = Drive_Motor_Control_I_LL;
  } else {
    rtb_FeedForward_a = rtb_thetay_m;
  }

  /* End of Saturate: '<S231>/Saturation1' */

  /* Sum: '<S231>/Add1' */
  rtb_Add_ov = rtb_Switch2_k + rtb_FeedForward_a;

  /* Saturate: '<S231>/Saturation2' */
  if (rtb_Add_ov > 1.0) {
    /* Outport: '<Root>/BackLeft_Drive_DutyCycle' */
    Code_Gen_Model_Y.BackLeft_Drive_DutyCycle = 1.0;
  } else if (rtb_Add_ov < -1.0) {
    /* Outport: '<Root>/BackLeft_Drive_DutyCycle' */
    Code_Gen_Model_Y.BackLeft_Drive_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/BackLeft_Drive_DutyCycle' */
    Code_Gen_Model_Y.BackLeft_Drive_DutyCycle = rtb_Add_ov;
  }

  /* End of Saturate: '<S231>/Saturation2' */

  /* Switch: '<S328>/Switch' */
  if (!rtb_Is_Absolute_Steering) {
    /* Switch: '<S328>/Switch' incorporates:
     *  Fcn: '<S329>/x->theta'
     */
    Code_Gen_Model_B.BR_Desired_Module_Angle = rt_atan2d_snf(rtb_Add2_k_idx_1,
      rtb_Add2_k_idx_0);
  }

  /* End of Switch: '<S328>/Switch' */

  /* Trigonometry: '<S264>/Cos4' incorporates:
   *  Switch: '<S253>/Angle_Switch'
   *  Trigonometry: '<S263>/Cos4'
   */
  rtb_Subtract_e = cos(Code_Gen_Model_B.BR_Desired_Module_Angle);

  /* Sum: '<S182>/Add1' incorporates:
   *  Constant: '<S182>/Constant3'
   *  Constant: '<S182>/Constant4'
   *  Gain: '<S19>/Revolutions to Radians3'
   *  Inport: '<Root>/BackRight_Steer_Rev'
   *  Inport: '<Root>/BackRight_Turn_Offset'
   *  Math: '<S182>/Math Function'
   *  Sum: '<S182>/Add2'
   *  Sum: '<S19>/Add3'
   */
  Code_Gen_Model_B.BR_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.BackRight_Steer_Rev -
       Code_Gen_Model_U.BackRight_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Trigonometry: '<S264>/Sin5' incorporates:
   *  UnaryMinus: '<S262>/Unary Minus'
   */
  rtb_Switch2_k = sin(-Code_Gen_Model_B.BR_Steer_Module_Angle);

  /* Trigonometry: '<S264>/Sin4' incorporates:
   *  Switch: '<S253>/Angle_Switch'
   *  Trigonometry: '<S263>/Sin4'
   */
  rtb_Product_d = sin(Code_Gen_Model_B.BR_Desired_Module_Angle);

  /* Trigonometry: '<S264>/Cos5' incorporates:
   *  UnaryMinus: '<S262>/Unary Minus'
   */
  rtb_rx_k = cos(-Code_Gen_Model_B.BR_Steer_Module_Angle);

  /* Sum: '<S264>/Subtract1' incorporates:
   *  Product: '<S264>/Product2'
   *  Product: '<S264>/Product3'
   *  Trigonometry: '<S264>/Cos4'
   *  Trigonometry: '<S264>/Sin4'
   */
  rtb_thetay_m = (rtb_Subtract_e * rtb_Switch2_k) + (rtb_Product_d * rtb_rx_k);

  /* Sum: '<S264>/Subtract' incorporates:
   *  Product: '<S264>/Product'
   *  Product: '<S264>/Product1'
   *  Trigonometry: '<S264>/Cos4'
   *  Trigonometry: '<S264>/Sin4'
   */
  rtb_Switch2_k = (rtb_Subtract_e * rtb_rx_k) - (rtb_Product_d * rtb_Switch2_k);

  /* Math: '<S264>/Hypot' */
  rtb_rx_k = rt_hypotd_snf(rtb_Switch2_k, rtb_thetay_m);

  /* Switch: '<S264>/Switch' incorporates:
   *  Constant: '<S264>/Constant'
   *  Constant: '<S264>/Constant1'
   *  Constant: '<S265>/Constant'
   *  Product: '<S264>/Divide'
   *  Product: '<S264>/Divide1'
   *  RelationalOperator: '<S265>/Compare'
   *  Switch: '<S264>/Switch1'
   */
  if (rtb_rx_k > 1.0E-6) {
    rtb_thetay_m /= rtb_rx_k;
    rtb_rx_k = rtb_Switch2_k / rtb_rx_k;
  } else {
    rtb_thetay_m = 0.0;
    rtb_rx_k = 1.0;
  }

  /* End of Switch: '<S264>/Switch' */

  /* RelationalOperator: '<S261>/Compare' incorporates:
   *  Abs: '<S253>/Abs'
   *  Constant: '<S261>/Constant'
   *  Trigonometry: '<S264>/Atan1'
   */
  rtb_Is_Absolute_Steering = (fabs(rt_atan2d_snf(rtb_thetay_m, rtb_rx_k)) >
    1.5707963267948966);

  /* Switch: '<S253>/Angle_Switch' incorporates:
   *  Trigonometry: '<S263>/Atan1'
   */
  if (rtb_Is_Absolute_Steering) {
    /* Sum: '<S263>/Subtract1' incorporates:
     *  Product: '<S263>/Product2'
     *  Product: '<S263>/Product3'
     */
    rtb_thetay_m = (rtb_Subtract_e * Code_Gen_Model_ConstB.Sin5_c) +
      (rtb_Product_d * Code_Gen_Model_ConstB.Cos5_b);

    /* Sum: '<S263>/Subtract' incorporates:
     *  Product: '<S263>/Product'
     *  Product: '<S263>/Product1'
     */
    rtb_Subtract_e = (rtb_Subtract_e * Code_Gen_Model_ConstB.Cos5_b) -
      (rtb_Product_d * Code_Gen_Model_ConstB.Sin5_c);

    /* Math: '<S263>/Hypot' */
    rtb_Switch2_k = rt_hypotd_snf(rtb_Subtract_e, rtb_thetay_m);

    /* Switch: '<S263>/Switch1' incorporates:
     *  Constant: '<S263>/Constant'
     *  Constant: '<S263>/Constant1'
     *  Constant: '<S266>/Constant'
     *  Product: '<S263>/Divide'
     *  Product: '<S263>/Divide1'
     *  RelationalOperator: '<S266>/Compare'
     *  Switch: '<S263>/Switch'
     */
    if (rtb_Switch2_k > 1.0E-6) {
      rtb_Subtract_e /= rtb_Switch2_k;
      rtb_thetay_m /= rtb_Switch2_k;
    } else {
      rtb_Subtract_e = 1.0;
      rtb_thetay_m = 0.0;
    }

    /* End of Switch: '<S263>/Switch1' */
    rtb_thetay_m = rt_atan2d_snf(rtb_thetay_m, rtb_Subtract_e);
  } else {
    rtb_thetay_m = Code_Gen_Model_B.BR_Desired_Module_Angle;
  }

  /* Sum: '<S255>/Sum' incorporates:
   *  Sum: '<S254>/Add'
   */
  rtb_thetay_m -= Code_Gen_Model_B.BR_Steer_Module_Angle;

  /* Sum: '<S268>/Add1' incorporates:
   *  Constant: '<S268>/Constant3'
   *  Constant: '<S268>/Constant4'
   *  Math: '<S268>/Math Function'
   *  Sum: '<S255>/Sum'
   *  Sum: '<S268>/Add2'
   */
  rtb_rx_k = rt_modd_snf(rtb_thetay_m + 3.1415926535897931, 6.2831853071795862)
    - 3.1415926535897931;

  /* Sum: '<S270>/Sum1' incorporates:
   *  Constant: '<S255>/Constant2'
   *  Product: '<S270>/Product'
   *  Sum: '<S270>/Sum'
   *  UnitDelay: '<S270>/Unit Delay1'
   */
  rtb_Subtract_e = ((rtb_rx_k - Code_Gen_Model_DW.UnitDelay1_DSTATE_iw) *
                    Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_iw;

  /* Product: '<S255>/Product' incorporates:
   *  Constant: '<S255>/Constant3'
   */
  rtb_Product_d = rtb_Subtract_e * Steering_Motor_Control_D;

  /* Sum: '<S269>/Diff' incorporates:
   *  UnitDelay: '<S269>/UD'
   *
   * Block description for '<S269>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S269>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Add_ov = rtb_Product_d - Code_Gen_Model_DW.UD_DSTATE_ll;

  /* Saturate: '<S255>/Saturation' */
  if (rtb_Add_ov > Steering_Motor_Control_D_UL) {
    rtb_Add_ov = Steering_Motor_Control_D_UL;
  } else if (rtb_Add_ov < Steering_Motor_Control_D_LL) {
    rtb_Add_ov = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S255>/Add' incorporates:
   *  Gain: '<S255>/Gain1'
   *  Saturate: '<S255>/Saturation'
   */
  rtb_Add_du = (Steering_Motor_Control_P * rtb_rx_k) + rtb_Add_ov;

  /* Sum: '<S255>/Subtract' incorporates:
   *  Constant: '<S255>/Constant'
   */
  rtb_Switch2_k = 1.0 - rtb_Add_du;

  /* Sum: '<S255>/Sum2' incorporates:
   *  Gain: '<S255>/Gain2'
   *  UnitDelay: '<S255>/Unit Delay'
   */
  rtb_rx_k = (Steering_Motor_Control_I * rtb_rx_k) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_l;

  /* Switch: '<S271>/Switch2' incorporates:
   *  Constant: '<S255>/Constant'
   *  RelationalOperator: '<S271>/LowerRelop1'
   *  Sum: '<S255>/Subtract'
   */
  if (!(rtb_rx_k > (1.0 - rtb_Add_du))) {
    /* Sum: '<S255>/Subtract1' incorporates:
     *  Constant: '<S255>/Constant1'
     */
    rtb_Switch2_k = -1.0 - rtb_Add_du;

    /* Switch: '<S271>/Switch' incorporates:
     *  Constant: '<S255>/Constant1'
     *  RelationalOperator: '<S271>/UpperRelop'
     *  Sum: '<S255>/Subtract1'
     */
    if (!(rtb_rx_k < (-1.0 - rtb_Add_du))) {
      rtb_Switch2_k = rtb_rx_k;
    }

    /* End of Switch: '<S271>/Switch' */
  }

  /* End of Switch: '<S271>/Switch2' */

  /* Saturate: '<S255>/Saturation1' */
  if (rtb_Switch2_k > Steering_Motor_Control_I_UL) {
    rtb_Switch2_k = Steering_Motor_Control_I_UL;
  } else if (rtb_Switch2_k < Steering_Motor_Control_I_LL) {
    rtb_Switch2_k = Steering_Motor_Control_I_LL;
  }

  /* End of Saturate: '<S255>/Saturation1' */

  /* Sum: '<S255>/Add1' */
  rtb_Add_ov = rtb_Add_du + rtb_Switch2_k;

  /* Saturate: '<S255>/Saturation2' */
  if (rtb_Add_ov > 1.0) {
    /* Outport: '<Root>/BackRight_Steer_DutyCycle' */
    Code_Gen_Model_Y.BackRight_Steer_DutyCycle = 1.0;
  } else if (rtb_Add_ov < -1.0) {
    /* Outport: '<Root>/BackRight_Steer_DutyCycle' */
    Code_Gen_Model_Y.BackRight_Steer_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/BackRight_Steer_DutyCycle' */
    Code_Gen_Model_Y.BackRight_Steer_DutyCycle = rtb_Add_ov;
  }

  /* End of Saturate: '<S255>/Saturation2' */

  /* Product: '<S308>/Product3' */
  Code_Gen_Model_B.BR_Desired_Wheel_Speed =
    Code_Gen_Model_B.BR_Desired_Wheel_Speed_in * rtb_Switch_jh;

  /* Switch: '<S253>/Speed_Switch' incorporates:
   *  UnaryMinus: '<S253>/Unary Minus'
   */
  if (rtb_Is_Absolute_Steering) {
    rtb_Add_ov = -Code_Gen_Model_B.BR_Desired_Wheel_Speed;
  } else {
    rtb_Add_ov = Code_Gen_Model_B.BR_Desired_Wheel_Speed;
  }

  /* Product: '<S256>/Product2' incorporates:
   *  Constant: '<S256>/Constant'
   *  Switch: '<S253>/Speed_Switch'
   */
  rtb_rx_k = rtb_Add_ov * 1150.4247703785388;

  /* Signum: '<S251>/Sign' */
  if (rtIsNaN(rtb_rx_k)) {
    rtb_Add_ov = (rtNaN);
  } else if (rtb_rx_k < 0.0) {
    rtb_Add_ov = -1.0;
  } else {
    rtb_Add_ov = (rtb_rx_k > 0.0);
  }

  /* Signum: '<S251>/Sign1' incorporates:
   *  Inport: '<Root>/BackRight_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.BackRight_Drive_Motor_Speed)) {
    rtb_Add_du = (rtNaN);
  } else if (Code_Gen_Model_U.BackRight_Drive_Motor_Speed < 0.0) {
    rtb_Add_du = -1.0;
  } else {
    rtb_Add_du = (Code_Gen_Model_U.BackRight_Drive_Motor_Speed > 0.0);
  }

  /* Product: '<S186>/Product' incorporates:
   *  Abs: '<S251>/Abs'
   *  Abs: '<S254>/Abs'
   *  Constant: '<S257>/Constant'
   *  Constant: '<S267>/Constant3'
   *  Constant: '<S267>/Constant4'
   *  Inport: '<Root>/BackRight_Drive_Motor_Speed'
   *  Logic: '<S251>/OR'
   *  Lookup_n-D: '<S254>/1-D Lookup Table'
   *  Math: '<S267>/Math Function'
   *  RelationalOperator: '<S251>/Equal1'
   *  RelationalOperator: '<S257>/Compare'
   *  Signum: '<S251>/Sign'
   *  Signum: '<S251>/Sign1'
   *  Sum: '<S267>/Add1'
   *  Sum: '<S267>/Add2'
   */
  rtb_rx_k = (((real_T)((rtb_Add_ov == rtb_Add_du) || (fabs
    (Code_Gen_Model_U.BackRight_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_rx_k) * look1_binlcpw(fabs
    (rt_modd_snf(rtb_thetay_m + 1.5707963267948966, 3.1415926535897931) -
     1.5707963267948966), Code_Gen_Model_ConstP.pooled24,
    Code_Gen_Model_ConstP.pooled23, 1U);

  /* Gain: '<S252>/Gain' */
  rtb_thetay_m = Drive_Motor_Control_FF * rtb_rx_k;

  /* Sum: '<S252>/Sum' incorporates:
   *  Inport: '<Root>/BackRight_Drive_Motor_Speed'
   */
  rtb_rx_k -= Code_Gen_Model_U.BackRight_Drive_Motor_Speed;

  /* Sum: '<S259>/Sum1' incorporates:
   *  Constant: '<S252>/Constant2'
   *  Product: '<S259>/Product'
   *  Sum: '<S259>/Sum'
   *  UnitDelay: '<S259>/Unit Delay1'
   */
  rtb_Switch_jh = ((rtb_rx_k - Code_Gen_Model_DW.UnitDelay1_DSTATE_k) *
                   Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_k;

  /* Product: '<S252>/Product' incorporates:
   *  Constant: '<S252>/Constant3'
   */
  rtb_Add_du = rtb_Switch_jh * Drive_Motor_Control_D;

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
  rtb_Add_ov = rtb_Add_du - Code_Gen_Model_DW.UD_DSTATE_c;

  /* Saturate: '<S252>/Saturation' */
  if (rtb_Add_ov > Drive_Motor_Control_D_UL) {
    rtb_Add_ov = Drive_Motor_Control_D_UL;
  } else if (rtb_Add_ov < Drive_Motor_Control_D_LL) {
    rtb_Add_ov = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S252>/Add' incorporates:
   *  Gain: '<S252>/Gain1'
   *  Saturate: '<S252>/Saturation'
   */
  rtb_Add_ov += (Drive_Motor_Control_P * rtb_rx_k) + rtb_thetay_m;

  /* Sum: '<S252>/Subtract' incorporates:
   *  Constant: '<S252>/Constant'
   */
  rtb_thetay_m = 1.0 - rtb_Add_ov;

  /* Sum: '<S252>/Sum2' incorporates:
   *  Gain: '<S252>/Gain2'
   *  UnitDelay: '<S252>/Unit Delay'
   */
  rtb_rx_k = (Drive_Motor_Control_I * rtb_rx_k) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_a;

  /* Switch: '<S260>/Switch2' incorporates:
   *  Constant: '<S252>/Constant'
   *  RelationalOperator: '<S260>/LowerRelop1'
   *  Sum: '<S252>/Subtract'
   */
  if (!(rtb_rx_k > (1.0 - rtb_Add_ov))) {
    /* Sum: '<S252>/Subtract1' incorporates:
     *  Constant: '<S252>/Constant1'
     */
    rtb_thetay_m = -1.0 - rtb_Add_ov;

    /* Switch: '<S260>/Switch' incorporates:
     *  Constant: '<S252>/Constant1'
     *  RelationalOperator: '<S260>/UpperRelop'
     *  Sum: '<S252>/Subtract1'
     */
    if (!(rtb_rx_k < (-1.0 - rtb_Add_ov))) {
      rtb_thetay_m = rtb_rx_k;
    }

    /* End of Switch: '<S260>/Switch' */
  }

  /* End of Switch: '<S260>/Switch2' */

  /* Saturate: '<S252>/Saturation1' */
  if (rtb_thetay_m > Drive_Motor_Control_I_UL) {
    rtb_rx_k = Drive_Motor_Control_I_UL;
  } else if (rtb_thetay_m < Drive_Motor_Control_I_LL) {
    rtb_rx_k = Drive_Motor_Control_I_LL;
  } else {
    rtb_rx_k = rtb_thetay_m;
  }

  /* End of Saturate: '<S252>/Saturation1' */

  /* Sum: '<S252>/Add1' */
  rtb_Add_ov += rtb_rx_k;

  /* Saturate: '<S252>/Saturation2' */
  if (rtb_Add_ov > 1.0) {
    /* Outport: '<Root>/BackRight_Drive_DutyCycle' */
    Code_Gen_Model_Y.BackRight_Drive_DutyCycle = 1.0;
  } else if (rtb_Add_ov < -1.0) {
    /* Outport: '<Root>/BackRight_Drive_DutyCycle' */
    Code_Gen_Model_Y.BackRight_Drive_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/BackRight_Drive_DutyCycle' */
    Code_Gen_Model_Y.BackRight_Drive_DutyCycle = rtb_Add_ov;
  }

  /* End of Saturate: '<S252>/Saturation2' */

  /* Outport: '<Root>/Enable_Wheels' */
  Code_Gen_Model_Y.Enable_Wheels = rtb_rx;

  /* Outport: '<Root>/Reset_Wheel_Offsets' */
  Code_Gen_Model_Y.Reset_Wheel_Offsets = rtb_thetay;

  /* Outport: '<Root>/Disable_Wheels' */
  Code_Gen_Model_Y.Disable_Wheels = rtb_rx_j;

  /* Outport: '<Root>/Swerve_Motors_Disabled' */
  Code_Gen_Model_Y.Swerve_Motors_Disabled = rtb_Swerve_Motors_Disabled;

  /* RelationalOperator: '<S4>/Compare' incorporates:
   *  Constant: '<S4>/Constant'
   *  Inport: '<Root>/Elevator_Limit_Switch_Top'
   */
  rtb_Gamepad_POV_Up = (Code_Gen_Model_U.Elevator_Limit_Switch_Top != 0.0);

  /* Sum: '<S9>/Subtract' */
  Code_Gen_Model_B.Elevator_Error = Code_Gen_Model_B.Elevator_Height_Desired -
    Code_Gen_Model_B.Elevator_Height_Measured;

  /* Gain: '<S28>/Gain1' */
  Code_Gen_Model_B.Elevator_Proportional = Elevator_Gain_Prop *
    Code_Gen_Model_B.Elevator_Error;

  /* Logic: '<S9>/Logical Operator2' incorporates:
   *  Abs: '<S9>/Abs'
   *  Constant: '<S26>/Constant'
   *  Constant: '<S27>/Constant'
   *  Logic: '<S9>/Logical Operator1'
   *  Logic: '<S9>/NOT1'
   *  Logic: '<S9>/NOT2'
   *  RelationalOperator: '<S26>/Compare'
   *  RelationalOperator: '<S27>/Compare'
   */
  rtb_Swerve_Motors_Disabled = ((((!(Code_Gen_Model_B.Elevator_Height_Desired ==
    0.0)) || (!(fabs(Code_Gen_Model_B.Elevator_Error) <=
                Elevator_Error_Bottom_Disable))) || rtb_Compare_m) &&
    (Code_Gen_Model_B.Reefscape_Motors_Enable));

  /* Logic: '<S9>/Logical Operator' incorporates:
   *  Logic: '<S9>/NOT'
   *  Logic: '<S9>/OR'
   */
  rtb_Compare_a = (rtb_Swerve_Motors_Disabled && ((!rtb_Gamepad_POV_Up) &&
    (!rtb_Compare_m)));

  /* Switch: '<S28>/Switch' */
  if (rtb_Compare_a) {
    /* Switch: '<S28>/Switch1' incorporates:
     *  UnitDelay: '<S30>/Delay Input1'
     *
     * Block description for '<S30>/Delay Input1':
     *
     *  Store in Global RAM
     */
    if (!Code_Gen_Model_DW.DelayInput1_DSTATE_jq) {
      /* Switch: '<S28>/Switch' incorporates:
       *  Constant: '<S28>/Constant3'
       */
      Code_Gen_Model_B.Elevator_Integral = Elevator_Int_IC;
    } else {
      /* Sum: '<S28>/Sum2' incorporates:
       *  Gain: '<S28>/Gain2'
       *  UnitDelay: '<S28>/Unit Delay'
       */
      rtb_rx = (Elevator_Gain_Int * Code_Gen_Model_B.Elevator_Error) +
        Code_Gen_Model_B.Elevator_Integral;

      /* Sum: '<S28>/Subtract' incorporates:
       *  Constant: '<S28>/Constant'
       */
      rtb_rx_j = Elevator_Total_UL - Code_Gen_Model_B.Elevator_Proportional;

      /* Switch: '<S31>/Switch2' incorporates:
       *  RelationalOperator: '<S31>/LowerRelop1'
       */
      if (!(rtb_rx > rtb_rx_j)) {
        /* Sum: '<S28>/Subtract1' incorporates:
         *  Constant: '<S28>/Constant1'
         */
        rtb_rx_j = Elevator_Total_LL - Code_Gen_Model_B.Elevator_Proportional;

        /* Switch: '<S31>/Switch' incorporates:
         *  RelationalOperator: '<S31>/UpperRelop'
         */
        if (!(rtb_rx < rtb_rx_j)) {
          rtb_rx_j = rtb_rx;
        }

        /* End of Switch: '<S31>/Switch' */
      }

      /* End of Switch: '<S31>/Switch2' */

      /* Saturate: '<S28>/Saturation1' */
      if (rtb_rx_j > Elevator_Int_UL) {
        /* Switch: '<S28>/Switch' */
        Code_Gen_Model_B.Elevator_Integral = Elevator_Int_UL;
      } else if (rtb_rx_j < Elevator_Int_LL) {
        /* Switch: '<S28>/Switch' */
        Code_Gen_Model_B.Elevator_Integral = Elevator_Int_LL;
      } else {
        /* Switch: '<S28>/Switch' */
        Code_Gen_Model_B.Elevator_Integral = rtb_rx_j;
      }

      /* End of Saturate: '<S28>/Saturation1' */
    }

    /* End of Switch: '<S28>/Switch1' */
  } else {
    /* Switch: '<S28>/Switch' incorporates:
     *  Constant: '<S28>/Constant2'
     */
    Code_Gen_Model_B.Elevator_Integral = 0.0;
  }

  /* End of Switch: '<S28>/Switch' */

  /* Switch: '<S9>/Switch2' */
  if (rtb_Swerve_Motors_Disabled) {
    /* Sum: '<S28>/Add1' */
    rtb_rx = Code_Gen_Model_B.Elevator_Proportional +
      Code_Gen_Model_B.Elevator_Integral;

    /* Saturate: '<S28>/Saturation2' */
    if (rtb_rx > Elevator_Total_UL) {
      rtb_rx = Elevator_Total_UL;
    } else if (rtb_rx < Elevator_Total_LL) {
      rtb_rx = Elevator_Total_LL;
    }

    /* End of Saturate: '<S28>/Saturation2' */

    /* Switch: '<S9>/Switch1' incorporates:
     *  Constant: '<S9>/Constant1'
     *  Constant: '<S9>/Constant2'
     */
    if (rtb_Gamepad_POV_Up) {
      rtb_rx_j = Elevator_Hold_at_Top_DC;
    } else {
      rtb_rx_j = 1.0;
    }

    /* End of Switch: '<S9>/Switch1' */

    /* Switch: '<S29>/Switch2' incorporates:
     *  RelationalOperator: '<S29>/LowerRelop1'
     *  Switch: '<S9>/Switch'
     */
    if (rtb_rx > rtb_rx_j) {
      /* Outport: '<Root>/Elevator_DutyCycle' */
      Code_Gen_Model_Y.Elevator_DutyCycle = rtb_rx_j;
    } else {
      if (rtb_Compare_m) {
        /* Switch: '<S9>/Switch' incorporates:
         *  Constant: '<S9>/Constant3'
         */
        rtb_rx_j = 0.0;
      } else {
        /* Switch: '<S9>/Switch' incorporates:
         *  Constant: '<S9>/Constant4'
         */
        rtb_rx_j = -1.0;
      }

      /* Switch: '<S29>/Switch' incorporates:
       *  RelationalOperator: '<S29>/UpperRelop'
       */
      if (rtb_rx < rtb_rx_j) {
        /* Outport: '<Root>/Elevator_DutyCycle' */
        Code_Gen_Model_Y.Elevator_DutyCycle = rtb_rx_j;
      } else {
        /* Outport: '<Root>/Elevator_DutyCycle' */
        Code_Gen_Model_Y.Elevator_DutyCycle = rtb_rx;
      }

      /* End of Switch: '<S29>/Switch' */
    }

    /* End of Switch: '<S29>/Switch2' */
  } else {
    /* Outport: '<Root>/Elevator_DutyCycle' incorporates:
     *  Constant: '<S9>/Constant5'
     */
    Code_Gen_Model_Y.Elevator_DutyCycle = 0.0;
  }

  /* End of Switch: '<S9>/Switch2' */

  /* Sum: '<S7>/Subtract' */
  Code_Gen_Model_B.Coral_ArmAngle_Error =
    Code_Gen_Model_B.Coral_Arm_Angle_Desired -
    Code_Gen_Model_B.Coral_Arm_Angle_Measured;

  /* Gain: '<S23>/Gain1' */
  Code_Gen_Model_B.Elevator_Proportional_a = Coral_Arm_Gain_Prop *
    Code_Gen_Model_B.Coral_ArmAngle_Error;

  /* Switch: '<S23>/Switch' */
  if (Code_Gen_Model_B.Reefscape_Motors_Enable) {
    /* Switch: '<S23>/Switch1' incorporates:
     *  UnitDelay: '<S24>/Delay Input1'
     *
     * Block description for '<S24>/Delay Input1':
     *
     *  Store in Global RAM
     */
    if (!Code_Gen_Model_DW.DelayInput1_DSTATE_en) {
      /* Switch: '<S23>/Switch' incorporates:
       *  Constant: '<S23>/Constant3'
       */
      Code_Gen_Model_B.Elevator_Integral_j = Coral_Arm_Int_IC;
    } else {
      /* Sum: '<S23>/Sum2' incorporates:
       *  Gain: '<S23>/Gain2'
       *  UnitDelay: '<S23>/Unit Delay'
       */
      rtb_rx = (Coral_Arm_Gain_Int * Code_Gen_Model_B.Coral_ArmAngle_Error) +
        Code_Gen_Model_B.Elevator_Integral_j;

      /* Sum: '<S23>/Subtract' incorporates:
       *  Constant: '<S23>/Constant'
       */
      rtb_rx_j = Coral_Arm_Total_UL - Code_Gen_Model_B.Elevator_Proportional_a;

      /* Switch: '<S25>/Switch2' incorporates:
       *  RelationalOperator: '<S25>/LowerRelop1'
       */
      if (!(rtb_rx > rtb_rx_j)) {
        /* Sum: '<S23>/Subtract1' incorporates:
         *  Constant: '<S23>/Constant1'
         */
        rtb_rx_j = Coral_Arm_Total_LL - Code_Gen_Model_B.Elevator_Proportional_a;

        /* Switch: '<S25>/Switch' incorporates:
         *  RelationalOperator: '<S25>/UpperRelop'
         */
        if (!(rtb_rx < rtb_rx_j)) {
          rtb_rx_j = rtb_rx;
        }

        /* End of Switch: '<S25>/Switch' */
      }

      /* End of Switch: '<S25>/Switch2' */

      /* Saturate: '<S23>/Saturation1' */
      if (rtb_rx_j > Coral_Arm_Int_UL) {
        /* Switch: '<S23>/Switch' */
        Code_Gen_Model_B.Elevator_Integral_j = Coral_Arm_Int_UL;
      } else if (rtb_rx_j < Coral_Arm_Int_LL) {
        /* Switch: '<S23>/Switch' */
        Code_Gen_Model_B.Elevator_Integral_j = Coral_Arm_Int_LL;
      } else {
        /* Switch: '<S23>/Switch' */
        Code_Gen_Model_B.Elevator_Integral_j = rtb_rx_j;
      }

      /* End of Saturate: '<S23>/Saturation1' */
    }

    /* End of Switch: '<S23>/Switch1' */

    /* Sum: '<S23>/Add1' incorporates:
     *  Switch: '<S7>/Switch2'
     */
    rtb_Add_ov = Code_Gen_Model_B.Elevator_Proportional_a +
      Code_Gen_Model_B.Elevator_Integral_j;

    /* Saturate: '<S23>/Saturation2' incorporates:
     *  Switch: '<S7>/Switch2'
     */
    if (rtb_Add_ov > Coral_Arm_Total_UL) {
      /* Outport: '<Root>/Coral_Arm_DutyCycle' */
      Code_Gen_Model_Y.Coral_Arm_DutyCycle = Coral_Arm_Total_UL;
    } else if (rtb_Add_ov < Coral_Arm_Total_LL) {
      /* Outport: '<Root>/Coral_Arm_DutyCycle' */
      Code_Gen_Model_Y.Coral_Arm_DutyCycle = Coral_Arm_Total_LL;
    } else {
      /* Outport: '<Root>/Coral_Arm_DutyCycle' */
      Code_Gen_Model_Y.Coral_Arm_DutyCycle = rtb_Add_ov;
    }

    /* End of Saturate: '<S23>/Saturation2' */
  } else {
    /* Switch: '<S23>/Switch' incorporates:
     *  Constant: '<S23>/Constant2'
     */
    Code_Gen_Model_B.Elevator_Integral_j = 0.0;

    /* Outport: '<Root>/Coral_Arm_DutyCycle' incorporates:
     *  Constant: '<S7>/Constant5'
     *  Switch: '<S7>/Switch2'
     */
    Code_Gen_Model_Y.Coral_Arm_DutyCycle = 0.0;
  }

  /* End of Switch: '<S23>/Switch' */

  /* Outport: '<Root>/Coral_Wheel_DutyCycle' */
  Code_Gen_Model_Y.Coral_Wheel_DutyCycle = rtb_thetay_f;

  /* Outport: '<Root>/Algae_Wheel_Outside_DutyCycle' */
  Code_Gen_Model_Y.Algae_Wheel_Outside_DutyCycle = rtb_rx_d;

  /* Outport: '<Root>/Algae_Wheel_Inside_DutyCycle' */
  Code_Gen_Model_Y.Algae_Wheel_Inside_DutyCycle = rtb_thetay_g;

  /* SignalConversion: '<S12>/Signal Copy4' incorporates:
   *  Inport: '<Root>/Joystick_Right_X'
   */
  Code_Gen_Model_B.Steer_Joystick_X = Code_Gen_Model_U.Joystick_Right_X;

  /* Trigonometry: '<S16>/Trigonometric Function1' */
  rtb_rx_d = sin(Code_Gen_Model_B.Gyro_Angle_Field_rad);

  /* SignalConversion generated from: '<S16>/Rotation matrix from local to global' incorporates:
   *  Trigonometry: '<S16>/Trigonometric Function'
   */
  rtb_Add2_k_idx_0 = cos(Code_Gen_Model_B.Gyro_Angle_Field_rad);
  rtb_rx = rtb_rx_d;

  /* SignalConversion generated from: '<S16>/Rotation matrix from local to global' incorporates:
   *  UnaryMinus: '<S16>/Unary Minus'
   */
  rtb_rx_j = -rtb_rx_d;

  /* Sum: '<S106>/Diff' incorporates:
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
  rtb_thetay_g = Code_Gen_Model_B.Gyro_Angle_Field_rad -
    Code_Gen_Model_DW.UD_DSTATE_d;

  /* Sum: '<S16>/Subtract2' incorporates:
   *  Constant: '<S16>/Constant3'
   *  Gain: '<S16>/Gain7'
   *  Math: '<S16>/Square'
   */
  rtb_rx_d = 1.0 - ((rtb_thetay_g * rtb_thetay_g) * 0.16666666666666666);

  /* Gain: '<S16>/Gain6' */
  rtb_thetay_g *= 0.5;

  /* SignalConversion generated from: '<S16>/POSE exponential matrix for improved accuracy while rotating' */
  rtb_Add2_k_idx_1 = rtb_thetay_g;

  /* SignalConversion generated from: '<S16>/POSE exponential matrix for improved accuracy while rotating' incorporates:
   *  UnaryMinus: '<S16>/Unary Minus2'
   */
  rtb_POSEexponentialmatrixfori_0 = -rtb_thetay_g;

  /* Product: '<S16>/Product' incorporates:
   *  Constant: '<S16>/Constant1'
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Rev'
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
  rtb_thetay_g = (Code_Gen_Model_U.FrontLeft_Drive_Motor_Rev -
                  Code_Gen_Model_DW.UD_DSTATE_j) * 0.049599071116336282;

  /* Product: '<S16>/Product1' incorporates:
   *  Constant: '<S16>/Constant1'
   *  Inport: '<Root>/FrontRight_Drive_Motor_Rev'
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
  rtb_thetay_f = (Code_Gen_Model_U.FrontRight_Drive_Motor_Rev -
                  Code_Gen_Model_DW.UD_DSTATE_m) * 0.049599071116336282;

  /* Product: '<S16>/Product2' incorporates:
   *  Constant: '<S16>/Constant1'
   *  Inport: '<Root>/BackLeft_Drive_Motor_Rev'
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
  rtb_thetay = (Code_Gen_Model_U.BackLeft_Drive_Motor_Rev -
                Code_Gen_Model_DW.UD_DSTATE_ic) * 0.049599071116336282;

  /* Product: '<S16>/Product3' incorporates:
   *  Constant: '<S16>/Constant1'
   *  Inport: '<Root>/BackRight_Drive_Motor_Rev'
   *  Sum: '<S110>/Diff'
   *  UnitDelay: '<S110>/UD'
   *
   * Block description for '<S110>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S110>/UD':
   *
   *  Store in Global RAM
   */
  rtb_thetay_m = (Code_Gen_Model_U.BackRight_Drive_Motor_Rev -
                  Code_Gen_Model_DW.UD_DSTATE_ce) * 0.049599071116336282;

  /* SignalConversion generated from: '<S16>/Product7' incorporates:
   *  Fcn: '<S111>/r->x'
   *  Fcn: '<S111>/theta->y'
   *  Fcn: '<S112>/r->x'
   *  Fcn: '<S112>/theta->y'
   *  Fcn: '<S113>/r->x'
   *  Fcn: '<S113>/theta->y'
   *  Fcn: '<S114>/r->x'
   *  Fcn: '<S114>/theta->y'
   */
  rtb_thetay_n[0] = rtb_thetay_g * cos(Code_Gen_Model_B.FL_Steer_Module_Angle);
  rtb_thetay_n[1] = rtb_thetay_g * sin(Code_Gen_Model_B.FL_Steer_Module_Angle);
  rtb_thetay_n[2] = rtb_thetay_f * cos(Code_Gen_Model_B.FR_Steer_Module_Angle);
  rtb_thetay_n[3] = rtb_thetay_f * sin(Code_Gen_Model_B.FR_Steer_Module_Angle);
  rtb_thetay_n[4] = rtb_thetay * cos(Code_Gen_Model_B.BL_Steer_Module_Angle);
  rtb_thetay_n[5] = rtb_thetay * sin(Code_Gen_Model_B.BL_Steer_Module_Angle);
  rtb_thetay_n[6] = rtb_thetay_m * cos(Code_Gen_Model_B.BR_Steer_Module_Angle);
  rtb_thetay_n[7] = rtb_thetay_m * sin(Code_Gen_Model_B.BR_Steer_Module_Angle);

  /* Product: '<S16>/Product7' incorporates:
   *  Constant: '<S16>/Constant4'
   */
  for (rtb_Num_Segments = 0; rtb_Num_Segments < 2; rtb_Num_Segments++) {
    rtb_Add_ov = 0.0;
    tmp = 0;
    for (i = 0; i < 8; i++) {
      rtb_Add_ov += Code_Gen_Model_ConstP.Constant4_Value[tmp + rtb_Num_Segments]
        * rtb_thetay_n[i];
      tmp += 2;
    }

    rtb_Akxhatkk1[rtb_Num_Segments] = rtb_Add_ov;
  }

  /* End of Product: '<S16>/Product7' */

  /* Product: '<S16>/Product6' incorporates:
   *  Concatenate: '<S16>/POSE exponential matrix for improved accuracy while rotating'
   *  SignalConversion generated from: '<S16>/POSE exponential matrix for improved accuracy while rotating'
   */
  rtb_thetay_f = (rtb_rx_d * rtb_Akxhatkk1[0]) +
    (rtb_POSEexponentialmatrixfori_0 * rtb_Akxhatkk1[1]);
  rtb_rx_d = (rtb_Add2_k_idx_1 * rtb_Akxhatkk1[0]) + (rtb_rx_d * rtb_Akxhatkk1[1]);

  /* Product: '<S16>/Product6' incorporates:
   *  Concatenate: '<S16>/Rotation matrix from local to global'
   */
  Code_Gen_Model_B.Product6[0] = (rtb_Add2_k_idx_0 * rtb_thetay_f) + (rtb_rx_j *
    rtb_rx_d);
  Code_Gen_Model_B.Product6[1] = (rtb_rx * rtb_thetay_f) + (rtb_Add2_k_idx_0 *
    rtb_rx_d);

  /* Outputs for Enabled SubSystem: '<S72>/MeasurementUpdate' incorporates:
   *  EnablePort: '<S103>/Enable'
   */
  if (rtb_AND) {
    Code_Gen_Model_DW.MeasurementUpdate_MODE = true;

    /* Product: '<S103>/D[k]*u[k]' incorporates:
     *  Constant: '<S52>/D'
     */
    rtb_rx_d = (0.0 * Code_Gen_Model_B.Product6[0]) + (0.0 *
      Code_Gen_Model_B.Product6[1]);

    /* Sum: '<S103>/Sum' incorporates:
     *  Constant: '<S52>/C'
     *  Delay: '<S52>/MemoryX'
     *  Product: '<S103>/C[k]*xhat[k|k-1]'
     *  Product: '<S103>/D[k]*u[k]'
     *  Sum: '<S103>/Add1'
     */
    rtb_Reshapey_idx_0 -= ((0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[1]) +
      Code_Gen_Model_DW.MemoryX_DSTATE[0]) + rtb_rx_d;
    rtb_Reshapey_idx_1 -= ((0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[0]) +
      Code_Gen_Model_DW.MemoryX_DSTATE[1]) + rtb_rx_d;

    /* Product: '<S103>/Product3' incorporates:
     *  Constant: '<S53>/KalmanGainL'
     */
    Code_Gen_Model_B.Product3[0] = (0.0951249219725039 * rtb_Reshapey_idx_0) + (
      -2.0601714451538746E-17 * rtb_Reshapey_idx_1);
    Code_Gen_Model_B.Product3[1] = (1.304610855474728E-16 * rtb_Reshapey_idx_0)
      + (0.095124921972504 * rtb_Reshapey_idx_1);
  } else if (Code_Gen_Model_DW.MeasurementUpdate_MODE) {
    /* Disable for Product: '<S103>/Product3' incorporates:
     *  Outport: '<S103>/L*(y[k]-yhat[k|k-1])'
     */
    Code_Gen_Model_B.Product3[0] = 0.0;
    Code_Gen_Model_B.Product3[1] = 0.0;
    Code_Gen_Model_DW.MeasurementUpdate_MODE = false;
  }

  /* End of Outputs for SubSystem: '<S72>/MeasurementUpdate' */

  /* RelationalOperator: '<S116>/Compare' incorporates:
   *  Constant: '<S115>/Constant'
   *  Constant: '<S116>/Constant'
   */
  rtb_Swerve_Motors_Disabled = (Odometry_X_Y_TEAR != 0.0);

  /* Gain: '<S115>/meters to feet' */
  Code_Gen_Model_B.Odometry_X_global_est_ft = 3.28084 *
    Code_Gen_Model_B.Odom_Position_X;

  /* Switch: '<S115>/Switch' incorporates:
   *  UnitDelay: '<S115>/Unit Delay'
   */
  if (rtb_Swerve_Motors_Disabled) {
    rtb_thetay_f = Code_Gen_Model_B.Odometry_X_global_est_ft;
  } else {
    rtb_thetay_f = Code_Gen_Model_DW.UnitDelay_DSTATE_c;
  }

  /* End of Switch: '<S115>/Switch' */

  /* Sum: '<S115>/Subtract' */
  Code_Gen_Model_B.Odometry_X_global_TEAR_ft =
    Code_Gen_Model_B.Odometry_X_global_est_ft - rtb_thetay_f;

  /* Gain: '<S115>/meters to feet1' */
  Code_Gen_Model_B.Odometry_Y_global_est_ft = 3.28084 *
    Code_Gen_Model_B.Odom_Position_Y;

  /* Switch: '<S115>/Switch1' incorporates:
   *  UnitDelay: '<S115>/Unit Delay1'
   */
  if (rtb_Swerve_Motors_Disabled) {
    rtb_rx_d = Code_Gen_Model_B.Odometry_Y_global_est_ft;
  } else {
    rtb_rx_d = Code_Gen_Model_DW.UnitDelay1_DSTATE_d;
  }

  /* End of Switch: '<S115>/Switch1' */

  /* Sum: '<S115>/Subtract1' */
  Code_Gen_Model_B.Odometry_Y_global_TEAR_ft =
    Code_Gen_Model_B.Odometry_Y_global_est_ft - rtb_rx_d;

  /* DataTypeConversion: '<S17>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/GameState'
   */
  rtb_Add_ov = floor(Code_Gen_Model_U.GameState);
  if ((rtIsNaN(rtb_Add_ov)) || (rtIsInf(rtb_Add_ov))) {
    rtb_Add_ov = 0.0;
  } else {
    rtb_Add_ov = fmod(rtb_Add_ov, 256.0);
  }

  rtb_GameState = (uint8_T)((rtb_Add_ov < 0.0) ? ((int32_T)((uint8_T)(-((int8_T)
    ((uint8_T)(-rtb_Add_ov)))))) : ((int32_T)((uint8_T)rtb_Add_ov)));

  /* End of DataTypeConversion: '<S17>/Data Type Conversion' */

  /* Chart: '<S17>/Chart' */
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

  /* End of Chart: '<S17>/Chart' */

  /* Update for UnitDelay: '<S49>/Delay Input1' incorporates:
   *  Inport: '<Root>/Joystick_Left_B11'
   *
   * Block description for '<S49>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE = Code_Gen_Model_U.Joystick_Left_B11;

  /* Update for UnitDelay: '<S50>/Delay Input1' incorporates:
   *  Inport: '<Root>/Joystick_Left_B12'
   *
   * Block description for '<S50>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_e = Code_Gen_Model_U.Joystick_Left_B12;

  /* Update for UnitDelay: '<S51>/Delay Input1' incorporates:
   *  Inport: '<Root>/Joystick_Left_B13'
   *
   * Block description for '<S51>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_n = Code_Gen_Model_U.Joystick_Left_B13;
  for (rtb_Num_Segments = 0; rtb_Num_Segments < 5; rtb_Num_Segments++) {
    /* Update for S-Function (sfix_udelay): '<S14>/Tapped Delay' incorporates:
     *  Bias: '<S146>/Bias'
     *  Merge: '<S120>/Merge1'
     *  S-Function (sfix_udelay): '<S14>/Tapped Delay1'
     */
    Code_Gen_Model_DW.TappedDelay_X[rtb_Num_Segments] =
      Code_Gen_Model_DW.TappedDelay_X[rtb_Num_Segments + 1];

    /* Update for S-Function (sfix_udelay): '<S14>/Tapped Delay1' incorporates:
     *  Bias: '<S146>/Bias'
     *  Merge: '<S120>/Merge1'
     *  S-Function (sfix_udelay): '<S14>/Tapped Delay'
     */
    Code_Gen_Model_DW.TappedDelay1_X[rtb_Num_Segments] =
      Code_Gen_Model_DW.TappedDelay1_X[rtb_Num_Segments + 1];
  }

  /* Update for S-Function (sfix_udelay): '<S14>/Tapped Delay' */
  Code_Gen_Model_DW.TappedDelay_X[5] = Code_Gen_Model_B.Product6[0];

  /* Update for S-Function (sfix_udelay): '<S14>/Tapped Delay1' */
  Code_Gen_Model_DW.TappedDelay1_X[5] = Code_Gen_Model_B.Product6[1];

  /* Update for Delay: '<S52>/MemoryX' */
  Code_Gen_Model_DW.icLoad = false;

  /* Product: '<S72>/A[k]*xhat[k|k-1]' incorporates:
   *  Constant: '<S52>/A'
   *  Delay: '<S52>/MemoryX'
   */
  rtb_Reshapey_idx_0 = (0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[1]) +
    Code_Gen_Model_DW.MemoryX_DSTATE[0];
  rtb_Reshapey_idx_1 = (0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[0]) +
    Code_Gen_Model_DW.MemoryX_DSTATE[1];

  /* Update for Delay: '<S52>/MemoryX' incorporates:
   *  Constant: '<S52>/B'
   *  Product: '<S72>/A[k]*xhat[k|k-1]'
   *  Product: '<S72>/B[k]*u[k]'
   *  Sum: '<S72>/Add'
   */
  Code_Gen_Model_DW.MemoryX_DSTATE[0] = (((0.0 * Code_Gen_Model_B.Product6[1]) +
    Code_Gen_Model_B.Product6[0]) + rtb_Reshapey_idx_0) +
    Code_Gen_Model_B.Product3[0];
  Code_Gen_Model_DW.MemoryX_DSTATE[1] = (((0.0 * Code_Gen_Model_B.Product6[0]) +
    Code_Gen_Model_B.Product6[1]) + rtb_Reshapey_idx_1) +
    Code_Gen_Model_B.Product3[1];

  /* Update for DiscreteIntegrator: '<S16>/Accumulator2' incorporates:
   *  Constant: '<S16>/Constant'
   *  DiscreteIntegrator: '<S16>/Accumulator'
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

  /* End of Update for DiscreteIntegrator: '<S16>/Accumulator2' */

  /* Update for DiscreteIntegrator: '<S16>/Accumulator' */
  Code_Gen_Model_DW.Accumulator_DSTATE += Code_Gen_Model_B.Product6[1];

  /* Update for UnitDelay: '<S34>/Delay Input1' incorporates:
   *  Constant: '<S11>/Constant3'
   *
   * Block description for '<S34>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_p = Gyro_Calibration_Reset_Flag;

  /* Update for UnitDelay: '<S11>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE = rtb_Switch1;

  /* Update for UnitDelay: '<S32>/Delay Input1'
   *
   * Block description for '<S32>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_l = rtb_Compare_m;

  /* Update for UnitDelay: '<S10>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_j = rtb_Switch1_hk;

  /* Update for UnitDelay: '<S283>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S283>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE = 0U;

  /* Update for UnitDelay: '<S305>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_i = rtb_Merge1;

  /* Update for UnitDelay: '<S304>/UD'
   *
   * Block description for '<S304>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE = rtb_Switch1_h;

  /* Update for UnitDelay: '<S302>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_m = rtb_Switch2;

  /* Update for UnitDelay: '<S285>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_d = rtb_Switch4;

  /* Update for UnitDelay: '<S300>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S300>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_p = 0U;

  /* Update for UnitDelay: '<S300>/FixPt Unit Delay1' */
  Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_e = rtb_Switch4;

  /* Update for UnitDelay: '<S284>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_g = rtb_Sum_jt;

  /* Update for UnitDelay: '<S293>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S293>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_c = 0U;

  /* Update for UnitDelay: '<S293>/FixPt Unit Delay1' */
  Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_p = rtb_Sum_jt;

  /* Update for UnitDelay: '<S207>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_b = rtb_Product2_l;

  /* Update for UnitDelay: '<S206>/UD'
   *
   * Block description for '<S206>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_b = rtb_Product2_f;

  /* Update for UnitDelay: '<S192>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_e = rtb_rx_o;

  /* Update for UnitDelay: '<S196>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_a = rtb_Sin4;

  /* Update for UnitDelay: '<S195>/UD'
   *
   * Block description for '<S195>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_o = rtb_Subtract1;

  /* Update for UnitDelay: '<S189>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_f = rtb_FeedForward;

  /* Update for UnitDelay: '<S228>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_n = rtb_Add_oh;

  /* Update for UnitDelay: '<S227>/UD'
   *
   * Block description for '<S227>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_i = rtb_Subtract1_of;

  /* Update for UnitDelay: '<S213>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_dt = rtb_Hypot_bl;

  /* Update for UnitDelay: '<S217>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_b1 = rtb_Add_i;

  /* Update for UnitDelay: '<S216>/UD'
   *
   * Block description for '<S216>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_e = rtb_Subtract1_a;

  /* Update for UnitDelay: '<S210>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_em = rtb_FeedForward_n;

  /* Update for UnitDelay: '<S249>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_nw = rtb_Add_o2;

  /* Update for UnitDelay: '<S248>/UD'
   *
   * Block description for '<S248>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_k = rtb_Subtract1_do;

  /* Update for UnitDelay: '<S234>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_k = rtb_Hypot_d;

  /* Update for UnitDelay: '<S238>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_f = rtb_Add_gj;

  /* Update for UnitDelay: '<S237>/UD'
   *
   * Block description for '<S237>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_l = rtb_Subtract1_f;

  /* Update for UnitDelay: '<S231>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_gp = rtb_FeedForward_a;

  /* Update for UnitDelay: '<S270>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_iw = rtb_Subtract_e;

  /* Update for UnitDelay: '<S269>/UD'
   *
   * Block description for '<S269>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_ll = rtb_Product_d;

  /* Update for UnitDelay: '<S255>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_l = rtb_Switch2_k;

  /* Update for UnitDelay: '<S259>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_k = rtb_Switch_jh;

  /* Update for UnitDelay: '<S258>/UD'
   *
   * Block description for '<S258>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_c = rtb_Add_du;

  /* Update for UnitDelay: '<S252>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_a = rtb_rx_k;

  /* Update for UnitDelay: '<S30>/Delay Input1'
   *
   * Block description for '<S30>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_jq = rtb_Compare_a;

  /* Update for UnitDelay: '<S24>/Delay Input1'
   *
   * Block description for '<S24>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_en =
    Code_Gen_Model_B.Reefscape_Motors_Enable;

  /* Update for UnitDelay: '<S106>/UD'
   *
   * Block description for '<S106>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_d = Code_Gen_Model_B.Gyro_Angle_Field_rad;

  /* Update for UnitDelay: '<S107>/UD' incorporates:
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Rev'
   *
   * Block description for '<S107>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_j = Code_Gen_Model_U.FrontLeft_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S108>/UD' incorporates:
   *  Inport: '<Root>/FrontRight_Drive_Motor_Rev'
   *
   * Block description for '<S108>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_m = Code_Gen_Model_U.FrontRight_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S109>/UD' incorporates:
   *  Inport: '<Root>/BackLeft_Drive_Motor_Rev'
   *
   * Block description for '<S109>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_ic = Code_Gen_Model_U.BackLeft_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S110>/UD' incorporates:
   *  Inport: '<Root>/BackRight_Drive_Motor_Rev'
   *
   * Block description for '<S110>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_ce = Code_Gen_Model_U.BackRight_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S115>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_c = rtb_thetay_f;

  /* Update for UnitDelay: '<S115>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_d = rtb_rx_d;
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

    /* Start for If: '<S18>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem = -1;

    /* InitializeConditions for Delay: '<S52>/MemoryX' */
    Code_Gen_Model_DW.icLoad = true;

    /* InitializeConditions for DiscreteIntegrator: '<S16>/Accumulator2' */
    Code_Gen_Model_DW.Accumulator2_DSTATE = Constant;
    Code_Gen_Model_DW.Accumulator2_PrevResetState = 2;

    /* InitializeConditions for DiscreteIntegrator: '<S16>/Accumulator' */
    Code_Gen_Model_DW.Accumulator_DSTATE = Constant1;
    Code_Gen_Model_DW.Accumulator_PrevResetState = 2;

    /* InitializeConditions for UnitDelay: '<S11>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE = Gyro_Calibration_Reset_Degree;

    /* InitializeConditions for UnitDelay: '<S283>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE = 1U;

    /* InitializeConditions for UnitDelay: '<S300>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_p = 1U;

    /* InitializeConditions for UnitDelay: '<S293>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_c = 1U;

    /* SystemInitialize for IfAction SubSystem: '<S1>/Teleop' */
    /* InitializeConditions for UnitDelay: '<S353>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_a = 1U;

    /* End of SystemInitialize for SubSystem: '<S1>/Teleop' */

    /* SystemInitialize for IfAction SubSystem: '<S18>/Spline Path Following Enabled' */
    /* Start for If: '<S124>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem_h = -1;

    /* InitializeConditions for UnitDelay: '<S120>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_gh = 2.0;

    /* SystemInitialize for IfAction SubSystem: '<S124>/Robot_Index_Is_Valid' */
    /* Start for If: '<S127>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem_o = -1;

    /* SystemInitialize for IfAction SubSystem: '<S127>/Circle_Check_Valid' */
    /* Start for If: '<S129>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;

    /* End of SystemInitialize for SubSystem: '<S127>/Circle_Check_Valid' */
    /* End of SystemInitialize for SubSystem: '<S124>/Robot_Index_Is_Valid' */
    /* End of SystemInitialize for SubSystem: '<S18>/Spline Path Following Enabled' */
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
