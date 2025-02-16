/*
 * Sponsored License - for use in support of a program or activity
 * sponsored by MathWorks.  Not for government, commercial or other
 * non-sponsored organizational use.
 *
 * File: Code_Gen_Model.c
 *
 * Code generated for Simulink model 'Code_Gen_Model'.
 *
 * Model version                  : 2.273
 * Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
 * C/C++ source code generated on : Sat Feb 15 22:33:01 2025
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

/* Named constants for Chart: '<S358>/Reefscape_Chart' */
#define C_IN_Elevator_Height_Bottom_pre ((uint8_T)9U)
#define Code_Ge_IN_Coral_Pickup_Prepare ((uint8_T)4U)
#define Code_Ge_IN_Coral_Score_Position ((uint8_T)6U)
#define Code_Gen_M_IN_Manual_Adjustment ((uint8_T)6U)
#define Code_Gen_Mode_IN_Algae_Push_Out ((uint8_T)3U)
#define Code_Gen_Model_IN_Algae_Hold   ((uint8_T)1U)
#define Code_Gen_Model_IN_Algae_Pull_In ((uint8_T)2U)
#define Code_Gen_Model_IN_Coral_Eject  ((uint8_T)1U)
#define Code_Gen_Model_IN_Eject        ((uint8_T)1U)
#define Code_Gen_Model_IN_Level_1      ((uint8_T)1U)
#define Code_Gen_Model_IN_Level_2      ((uint8_T)2U)
#define Code_Gen_Model_IN_Level_2_pre  ((uint8_T)3U)
#define Code_Gen_Model_IN_Level_3      ((uint8_T)4U)
#define Code_Gen_Model_IN_Level_4      ((uint8_T)5U)
#define Code_Gen_Model_IN_Off          ((uint8_T)4U)
#define Code_Gen_Model_IN_Stop         ((uint8_T)2U)
#define Code_Gen__IN_Coral_Pickup_Lower ((uint8_T)2U)
#define Code_Gen__IN_Coral_Pickup_Raise ((uint8_T)5U)
#define Code_Gen__IN_Eleator_Height_Top ((uint8_T)7U)
#define Code_IN_Coral_Pickup_Lower_Wait ((uint8_T)3U)
#define Code__IN_Elevator_Height_Bottom ((uint8_T)8U)

/* Exported block parameters */
real_T AT_Target_Tag_11_Field_Angle = 2.0944;/* Variable: AT_Target_Tag_11_Field_Angle
                                              * Referenced by: '<S356>/Constant12'
                                              */
real_T AT_Target_Tag_11_X = 12.5143;   /* Variable: AT_Target_Tag_11_X
                                        * Referenced by: '<S356>/Constant4'
                                        */
real_T AT_Target_Tag_11_Y = 2.6574;    /* Variable: AT_Target_Tag_11_Y
                                        * Referenced by: '<S356>/Constant26'
                                        */
real_T AT_Target_Tag_12_Field_Angle = -2.0944;/* Variable: AT_Target_Tag_12_Field_Angle
                                               * Referenced by: '<S356>/Constant11'
                                               */
real_T AT_Target_Tag_12_X = 12.5143;   /* Variable: AT_Target_Tag_12_X
                                        * Referenced by: '<S356>/Constant17'
                                        */
real_T AT_Target_Tag_12_Y = 5.5542;    /* Variable: AT_Target_Tag_12_Y
                                        * Referenced by: '<S356>/Constant3'
                                        */
real_T AT_Target_Tag_13_Field_Angle = 0.0;/* Variable: AT_Target_Tag_13_Field_Angle
                                           * Referenced by: '<S356>/Constant10'
                                           */
real_T AT_Target_Tag_13_X = 10.001;    /* Variable: AT_Target_Tag_13_X
                                        * Referenced by: '<S356>/Constant18'
                                        */
real_T AT_Target_Tag_13_Y = 4.1051;    /* Variable: AT_Target_Tag_13_Y
                                        * Referenced by: '<S356>/Constant21'
                                        */
real_T AT_Target_Tag_14_Field_Angle = 0.0;/* Variable: AT_Target_Tag_14_Field_Angle
                                           * Referenced by: '<S356>/Constant8'
                                           */
real_T AT_Target_Tag_14_X = 6.54;      /* Variable: AT_Target_Tag_14_X
                                        * Referenced by: '<S356>/Constant19'
                                        */
real_T AT_Target_Tag_14_Y = 4.1051;    /* Variable: AT_Target_Tag_14_Y
                                        * Referenced by: '<S356>/Constant23'
                                        */
real_T AT_Target_Tag_15_Field_Angle = 2.0944;/* Variable: AT_Target_Tag_15_Field_Angle
                                              * Referenced by: '<S356>/Constant7'
                                              */
real_T AT_Target_Tag_15_X = 4.0317;    /* Variable: AT_Target_Tag_15_X
                                        * Referenced by: '<S356>/Constant20'
                                        */
real_T AT_Target_Tag_15_Y = 5.5542;    /* Variable: AT_Target_Tag_15_Y
                                        * Referenced by: '<S356>/Constant24'
                                        */
real_T AT_Target_Tag_16_Field_Angle = 4.1888;/* Variable: AT_Target_Tag_16_Field_Angle
                                              * Referenced by: '<S356>/Constant6'
                                              */
real_T AT_Target_Tag_16_X = 4.0317;    /* Variable: AT_Target_Tag_16_X
                                        * Referenced by: '<S356>/Constant22'
                                        */
real_T AT_Target_Tag_16_Y = 2.6574;    /* Variable: AT_Target_Tag_16_Y
                                        * Referenced by: '<S356>/Constant25'
                                        */
real_T AT_Target_Tag_5_Field_Angle = 1.5708;/* Variable: AT_Target_Tag_5_Field_Angle
                                             * Referenced by: '<S356>/Constant14'
                                             */
real_T AT_Target_Tag_5_X = 14.7008;    /* Variable: AT_Target_Tag_5_X
                                        * Referenced by: '<S356>/Constant9'
                                        */
real_T AT_Target_Tag_5_Y = 7.2898;     /* Variable: AT_Target_Tag_5_Y
                                        * Referenced by: '<S356>/Constant28'
                                        */
real_T AT_Target_Tag_6_Field_Angle = 4.7124;/* Variable: AT_Target_Tag_6_Field_Angle
                                             * Referenced by: '<S356>/Constant13'
                                             */
real_T AT_Target_Tag_6_X = 1.8415;     /* Variable: AT_Target_Tag_6_X
                                        * Referenced by: '<S356>/Constant5'
                                        */
real_T AT_Target_Tag_6_Y = 7.2898;     /* Variable: AT_Target_Tag_6_Y
                                        * Referenced by: '<S356>/Constant27'
                                        */
real_T AT_XY_Control_Gain = 1.5;       /* Variable: AT_XY_Control_Gain
                                        * Referenced by: '<S360>/Gain2'
                                        */
real_T Algae_Eject_Time = 1.0;         /* Variable: Algae_Eject_Time
                                        * Referenced by: '<S358>/Reefscape_Chart'
                                        */
real_T Algae_Hold_DC = 0.005;          /* Variable: Algae_Hold_DC
                                        * Referenced by: '<S358>/Reefscape_Chart'
                                        */
real_T Algae_Pull_In_DC = 1.0;         /* Variable: Algae_Pull_In_DC
                                        * Referenced by: '<S358>/Reefscape_Chart'
                                        */
real_T Algae_Push_Out_DC = -0.3;       /* Variable: Algae_Push_Out_DC
                                        * Referenced by: '<S358>/Reefscape_Chart'
                                        */
real_T Boost_Trigger_Decreasing_Limit = -0.28;
                                     /* Variable: Boost_Trigger_Decreasing_Limit
                                      * Referenced by: '<S373>/Constant1'
                                      */
real_T Boost_Trigger_High_Speed = 5.0; /* Variable: Boost_Trigger_High_Speed
                                        * Referenced by:
                                        *   '<S369>/Constant'
                                        *   '<S369>/Saturation'
                                        */
real_T Boost_Trigger_Increasing_Limit = 3.5;
                                     /* Variable: Boost_Trigger_Increasing_Limit
                                      * Referenced by: '<S373>/Constant3'
                                      */
real_T Boost_Trigger_Low_Speed = 1.5;  /* Variable: Boost_Trigger_Low_Speed
                                        * Referenced by: '<S369>/Constant1'
                                        */
real_T Coral_Arm_Angle_Error_Threshold = 3.0;
                                    /* Variable: Coral_Arm_Angle_Error_Threshold
                                     * Referenced by: '<S358>/Reefscape_Chart'
                                     */
real_T Coral_Arm_Angle_L1 = -15.0;     /* Variable: Coral_Arm_Angle_L1
                                        * Referenced by: '<S358>/Reefscape_Chart'
                                        */
real_T Coral_Arm_Angle_L2 = 50.0;      /* Variable: Coral_Arm_Angle_L2
                                        * Referenced by: '<S358>/Reefscape_Chart'
                                        */
real_T Coral_Arm_Angle_L3 = 50.0;      /* Variable: Coral_Arm_Angle_L3
                                        * Referenced by: '<S358>/Reefscape_Chart'
                                        */
real_T Coral_Arm_Angle_L4 = 50.0;      /* Variable: Coral_Arm_Angle_L4
                                        * Referenced by: '<S358>/Reefscape_Chart'
                                        */
real_T Coral_Arm_Angle_Neg_Threshold = -88.0;
                                      /* Variable: Coral_Arm_Angle_Neg_Threshold
                                       * Referenced by: '<S24>/Constant'
                                       */
real_T Coral_Arm_DC_Inc_RL = 0.066667; /* Variable: Coral_Arm_DC_Inc_RL
                                        * Referenced by: '<S25>/Constant3'
                                        */
real_T Coral_Arm_Elevator_Height_Low_Thresh = 8.5;
                               /* Variable: Coral_Arm_Elevator_Height_Low_Thresh
                                * Referenced by: '<S23>/Constant'
                                */
real_T Coral_Arm_Gain_Int = 0.001;     /* Variable: Coral_Arm_Gain_Int
                                        * Referenced by: '<S26>/Gain2'
                                        */
real_T Coral_Arm_Gain_Prop = 0.01;     /* Variable: Coral_Arm_Gain_Prop
                                        * Referenced by: '<S26>/Gain1'
                                        */
real_T Coral_Arm_Int_IC = 0.0;         /* Variable: Coral_Arm_Int_IC
                                        * Referenced by: '<S26>/Constant3'
                                        */
real_T Coral_Arm_Int_LL = -0.05;       /* Variable: Coral_Arm_Int_LL
                                        * Referenced by: '<S26>/Saturation1'
                                        */
real_T Coral_Arm_Int_UL = 0.05;        /* Variable: Coral_Arm_Int_UL
                                        * Referenced by: '<S26>/Saturation1'
                                        */
real_T Coral_Arm_Manual_Gain = 0.4;    /* Variable: Coral_Arm_Manual_Gain
                                        * Referenced by: '<S358>/Reefscape_Chart'
                                        */
real_T Coral_Arm_Neg90_DC = -0.03;     /* Variable: Coral_Arm_Neg90_DC
                                        * Referenced by: '<S7>/Constant2'
                                        */
real_T Coral_Detect_Distance = 70.0;   /* Variable: Coral_Detect_Distance
                                        * Referenced by: '<S358>/Reefscape_Chart'
                                        */
real_T Coral_Eject_Time = 0.5;         /* Variable: Coral_Eject_Time
                                        * Referenced by: '<S358>/Reefscape_Chart'
                                        */
real_T Coral_Motor_DC_Eject = -0.65;   /* Variable: Coral_Motor_DC_Eject
                                        * Referenced by: '<S358>/Reefscape_Chart'
                                        */
real_T Coral_Motor_DC_Hold = 0.01;     /* Variable: Coral_Motor_DC_Hold
                                        * Referenced by: '<S358>/Reefscape_Chart'
                                        */
real_T Coral_Motor_DC_Pickup = 0.1;    /* Variable: Coral_Motor_DC_Pickup
                                        * Referenced by: '<S358>/Reefscape_Chart'
                                        */
real_T Distance_FL_y = 0.18732;        /* Variable: Distance_FL_y
                                        * Referenced by: '<S296>/Constant4'
                                        */
real_T Drive_Motor_Control_D = 0.0001; /* Variable: Drive_Motor_Control_D
                                        * Referenced by:
                                        *   '<S212>/Constant3'
                                        *   '<S233>/Constant3'
                                        *   '<S254>/Constant3'
                                        *   '<S275>/Constant3'
                                        */
real_T Drive_Motor_Control_D_FilterCoeff = 0.22223;
                                  /* Variable: Drive_Motor_Control_D_FilterCoeff
                                   * Referenced by:
                                   *   '<S212>/Constant2'
                                   *   '<S233>/Constant2'
                                   *   '<S254>/Constant2'
                                   *   '<S275>/Constant2'
                                   */
real_T Drive_Motor_Control_D_LL = -0.2;/* Variable: Drive_Motor_Control_D_LL
                                        * Referenced by:
                                        *   '<S212>/Saturation'
                                        *   '<S233>/Saturation'
                                        *   '<S254>/Saturation'
                                        *   '<S275>/Saturation'
                                        */
real_T Drive_Motor_Control_D_UL = 0.2; /* Variable: Drive_Motor_Control_D_UL
                                        * Referenced by:
                                        *   '<S212>/Saturation'
                                        *   '<S233>/Saturation'
                                        *   '<S254>/Saturation'
                                        *   '<S275>/Saturation'
                                        */
real_T Drive_Motor_Control_FF = 0.00016129;/* Variable: Drive_Motor_Control_FF
                                            * Referenced by:
                                            *   '<S212>/Gain'
                                            *   '<S233>/Gain'
                                            *   '<S254>/Gain'
                                            *   '<S275>/Gain'
                                            */
real_T Drive_Motor_Control_I = 0.0;    /* Variable: Drive_Motor_Control_I
                                        * Referenced by:
                                        *   '<S212>/Gain2'
                                        *   '<S233>/Gain2'
                                        *   '<S254>/Gain2'
                                        *   '<S275>/Gain2'
                                        */
real_T Drive_Motor_Control_I_LL = 0.0; /* Variable: Drive_Motor_Control_I_LL
                                        * Referenced by:
                                        *   '<S212>/Saturation1'
                                        *   '<S233>/Saturation1'
                                        *   '<S254>/Saturation1'
                                        *   '<S275>/Saturation1'
                                        */
real_T Drive_Motor_Control_I_UL = 0.0; /* Variable: Drive_Motor_Control_I_UL
                                        * Referenced by:
                                        *   '<S212>/Saturation1'
                                        *   '<S233>/Saturation1'
                                        *   '<S254>/Saturation1'
                                        *   '<S275>/Saturation1'
                                        */
real_T Drive_Motor_Control_P = 5.0E-6; /* Variable: Drive_Motor_Control_P
                                        * Referenced by:
                                        *   '<S212>/Gain1'
                                        *   '<S233>/Gain1'
                                        *   '<S254>/Gain1'
                                        *   '<S275>/Gain1'
                                        */
real_T Drive_Motor_Control_Sign_Change_Deadband = 7000.0;
                           /* Variable: Drive_Motor_Control_Sign_Change_Deadband
                            * Referenced by:
                            *   '<S217>/Constant'
                            *   '<S238>/Constant'
                            *   '<S259>/Constant'
                            *   '<S280>/Constant'
                            */
real_T Elevator_DC_Inc_RL = 0.066667;  /* Variable: Elevator_DC_Inc_RL
                                        * Referenced by: '<S41>/Constant3'
                                        */
real_T Elevator_Error_Bottom_Disable = 3.0;
                                      /* Variable: Elevator_Error_Bottom_Disable
                                       * Referenced by: '<S38>/Constant'
                                       */
real_T Elevator_Error_Increase = 0.0;  /* Variable: Elevator_Error_Increase
                                        * Referenced by: '<S9>/Constant6'
                                        */
real_T Elevator_Gain_Int = 0.02;       /* Variable: Elevator_Gain_Int
                                        * Referenced by: '<S42>/Gain2'
                                        */
real_T Elevator_Gain_Prop = 0.3;       /* Variable: Elevator_Gain_Prop
                                        * Referenced by: '<S42>/Gain1'
                                        */
real_T Elevator_Height_Bottom = 0.0;   /* Variable: Elevator_Height_Bottom
                                        * Referenced by: '<S358>/Reefscape_Chart'
                                        */
real_T Elevator_Height_Error_Threshold = 1.0;
                                    /* Variable: Elevator_Height_Error_Threshold
                                     * Referenced by:
                                     *   '<S39>/Constant'
                                     *   '<S358>/Reefscape_Chart'
                                     */
real_T Elevator_Height_L1 = 11.0;      /* Variable: Elevator_Height_L1
                                        * Referenced by: '<S358>/Reefscape_Chart'
                                        */
real_T Elevator_Height_L2 = 7.25;      /* Variable: Elevator_Height_L2
                                        * Referenced by: '<S358>/Reefscape_Chart'
                                        */
real_T Elevator_Height_L3 = 15.125;    /* Variable: Elevator_Height_L3
                                        * Referenced by: '<S358>/Reefscape_Chart'
                                        */
real_T Elevator_Height_L4 = 26.125;    /* Variable: Elevator_Height_L4
                                        * Referenced by: '<S358>/Reefscape_Chart'
                                        */
real_T Elevator_Height_Lower = 6.0;    /* Variable: Elevator_Height_Lower
                                        * Referenced by: '<S358>/Reefscape_Chart'
                                        */
real_T Elevator_Height_Manual_Gain = 0.1;/* Variable: Elevator_Height_Manual_Gain
                                          * Referenced by: '<S358>/Reefscape_Chart'
                                          */
real_T Elevator_Height_PickupLower_Reset = 6.8;
                                  /* Variable: Elevator_Height_PickupLower_Reset
                                   * Referenced by: '<S10>/Constant2'
                                   */
real_T Elevator_Height_Prepare = 12.0; /* Variable: Elevator_Height_Prepare
                                        * Referenced by: '<S358>/Reefscape_Chart'
                                        */
real_T Elevator_Height_Raise = 9.0;    /* Variable: Elevator_Height_Raise
                                        * Referenced by: '<S358>/Reefscape_Chart'
                                        */
real_T Elevator_Height_Top = 28.0;     /* Variable: Elevator_Height_Top
                                        * Referenced by: '<S358>/Reefscape_Chart'
                                        */
real_T Elevator_Height_Top_Reset = 28.125;/* Variable: Elevator_Height_Top_Reset
                                           * Referenced by:
                                           *   '<S10>/Constant1'
                                           *   '<S10>/Constant3'
                                           */
real_T Elevator_Hold_at_Top_DC = 0.1;  /* Variable: Elevator_Hold_at_Top_DC
                                        * Referenced by: '<S9>/Constant1'
                                        */
real_T Elevator_Int_IC = 0.0;          /* Variable: Elevator_Int_IC
                                        * Referenced by: '<S42>/Constant3'
                                        */
real_T Elevator_Int_LL = -0.1;         /* Variable: Elevator_Int_LL
                                        * Referenced by: '<S42>/Saturation1'
                                        */
real_T Elevator_Int_UL = 0.1;          /* Variable: Elevator_Int_UL
                                        * Referenced by: '<S42>/Saturation1'
                                        */
real_T Elevator_LowerPickup_Time = 0.5;/* Variable: Elevator_LowerPickup_Time
                                        * Referenced by: '<S358>/Reefscape_Chart'
                                        */
real_T Elevator_MotorRev_to_Inch = -0.27646;/* Variable: Elevator_MotorRev_to_Inch
                                             * Referenced by: '<S10>/Gain1'
                                             */
real_T Elevator_Total_LL = -0.25;      /* Variable: Elevator_Total_LL
                                        * Referenced by:
                                        *   '<S42>/Constant1'
                                        *   '<S42>/Saturation2'
                                        */
real_T Elevator_Total_UL = 1.0;        /* Variable: Elevator_Total_UL
                                        * Referenced by:
                                        *   '<S42>/Constant'
                                        *   '<S42>/Saturation2'
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
                                        * Referenced by: '<S138>/Constant'
                                        */
real_T Spline_Last_Pose_Distance_to_Velocity_Gain = 2.0;
                         /* Variable: Spline_Last_Pose_Distance_to_Velocity_Gain
                          * Referenced by: '<S197>/Constant2'
                          */
real_T Spline_Max_Centripital_Acceleration = 10.0;
                                /* Variable: Spline_Max_Centripital_Acceleration
                                 * Referenced by: '<S197>/Constant1'
                                 */
real_T Spline_Pose_Num_Before_End_Reduce_Speed = 1.0;
                            /* Variable: Spline_Pose_Num_Before_End_Reduce_Speed
                             * Referenced by: '<S144>/Constant'
                             */
real_T Spline_Stop_Radius = 0.1;       /* Variable: Spline_Stop_Radius
                                        * Referenced by: '<S157>/Constant'
                                        */
real_T Spline_Velocity_Multiplier_TEST = 1.0;
                                    /* Variable: Spline_Velocity_Multiplier_TEST
                                     * Referenced by: '<S197>/Constant3'
                                     */
real_T Steering_Absolute_Cmd_Approach_Zero_Error_Thresh = 0.2;
                   /* Variable: Steering_Absolute_Cmd_Approach_Zero_Error_Thresh
                    * Referenced by: '<S308>/Constant5'
                    */
real_T Steering_Absolute_Cmd_Approach_Zero_Final_Thresh = 0.01;
                   /* Variable: Steering_Absolute_Cmd_Approach_Zero_Final_Thresh
                    * Referenced by: '<S308>/Constant6'
                    */
real_T Steering_Absolute_Cmd_NonZero_Error_Thresh = 0.2;
                         /* Variable: Steering_Absolute_Cmd_NonZero_Error_Thresh
                          * Referenced by: '<S308>/Constant9'
                          */
real_T Steering_Absolute_Cmd_NonZero_Final_Scale_Factor = 0.1;
                   /* Variable: Steering_Absolute_Cmd_NonZero_Final_Scale_Factor
                    * Referenced by: '<S308>/Constant10'
                    */
real_T Steering_Absolute_Cmd_Rate_Limit_Dec = -1.0;
                               /* Variable: Steering_Absolute_Cmd_Rate_Limit_Dec
                                * Referenced by: '<S308>/Constant1'
                                */
real_T Steering_Absolute_Cmd_Rate_Limit_Inc = 1.0;
                               /* Variable: Steering_Absolute_Cmd_Rate_Limit_Inc
                                * Referenced by: '<S308>/Constant3'
                                */
real_T Steering_Heading_Control_D = 0.0;/* Variable: Steering_Heading_Control_D
                                         * Referenced by: '<S325>/Constant3'
                                         */
real_T Steering_Heading_Control_D_FilterCoeff = 0.22223;
                             /* Variable: Steering_Heading_Control_D_FilterCoeff
                              * Referenced by: '<S325>/Constant2'
                              */
real_T Steering_Heading_Control_D_LL = 0.0;
                                      /* Variable: Steering_Heading_Control_D_LL
                                       * Referenced by: '<S325>/Saturation'
                                       */
real_T Steering_Heading_Control_D_UL = 0.0;
                                      /* Variable: Steering_Heading_Control_D_UL
                                       * Referenced by: '<S325>/Saturation'
                                       */
real_T Steering_Heading_Control_Deadzone = 0.1;
                                  /* Variable: Steering_Heading_Control_Deadzone
                                   * Referenced by: '<S324>/Constant'
                                   */
real_T Steering_Heading_Control_I = 0.0;/* Variable: Steering_Heading_Control_I
                                         * Referenced by: '<S325>/Gain2'
                                         */
real_T Steering_Heading_Control_I_LL = -0.1;
                                      /* Variable: Steering_Heading_Control_I_LL
                                       * Referenced by: '<S325>/Saturation1'
                                       */
real_T Steering_Heading_Control_I_UL = 0.1;
                                      /* Variable: Steering_Heading_Control_I_UL
                                       * Referenced by: '<S325>/Saturation1'
                                       */
real_T Steering_Heading_Control_P = 2.5;/* Variable: Steering_Heading_Control_P
                                         * Referenced by: '<S325>/Gain1'
                                         */
real_T Steering_Heading_Control_Total_LL = -2.5;
                                  /* Variable: Steering_Heading_Control_Total_LL
                                   * Referenced by:
                                   *   '<S325>/Constant1'
                                   *   '<S325>/Saturation2'
                                   */
real_T Steering_Heading_Control_Total_UL = 2.5;
                                  /* Variable: Steering_Heading_Control_Total_UL
                                   * Referenced by:
                                   *   '<S325>/Constant'
                                   *   '<S325>/Saturation2'
                                   */
real_T Steering_Motor_Control_D = 0.5; /* Variable: Steering_Motor_Control_D
                                        * Referenced by:
                                        *   '<S215>/Constant3'
                                        *   '<S236>/Constant3'
                                        *   '<S257>/Constant3'
                                        *   '<S278>/Constant3'
                                        */
real_T Steering_Motor_Control_D_FilterCoeff = 0.22223;
                               /* Variable: Steering_Motor_Control_D_FilterCoeff
                                * Referenced by:
                                *   '<S215>/Constant2'
                                *   '<S236>/Constant2'
                                *   '<S257>/Constant2'
                                *   '<S278>/Constant2'
                                */
real_T Steering_Motor_Control_D_LL = -0.2;/* Variable: Steering_Motor_Control_D_LL
                                           * Referenced by:
                                           *   '<S215>/Saturation'
                                           *   '<S236>/Saturation'
                                           *   '<S257>/Saturation'
                                           *   '<S278>/Saturation'
                                           */
real_T Steering_Motor_Control_D_UL = 0.2;/* Variable: Steering_Motor_Control_D_UL
                                          * Referenced by:
                                          *   '<S215>/Saturation'
                                          *   '<S236>/Saturation'
                                          *   '<S257>/Saturation'
                                          *   '<S278>/Saturation'
                                          */
real_T Steering_Motor_Control_I = 0.005;/* Variable: Steering_Motor_Control_I
                                         * Referenced by:
                                         *   '<S215>/Gain2'
                                         *   '<S236>/Gain2'
                                         *   '<S257>/Gain2'
                                         *   '<S278>/Gain2'
                                         */
real_T Steering_Motor_Control_I_LL = -0.005;/* Variable: Steering_Motor_Control_I_LL
                                             * Referenced by:
                                             *   '<S215>/Saturation1'
                                             *   '<S236>/Saturation1'
                                             *   '<S257>/Saturation1'
                                             *   '<S278>/Saturation1'
                                             */
real_T Steering_Motor_Control_I_UL = 0.005;/* Variable: Steering_Motor_Control_I_UL
                                            * Referenced by:
                                            *   '<S215>/Saturation1'
                                            *   '<S236>/Saturation1'
                                            *   '<S257>/Saturation1'
                                            *   '<S278>/Saturation1'
                                            */
real_T Steering_Motor_Control_P = 0.15;/* Variable: Steering_Motor_Control_P
                                        * Referenced by:
                                        *   '<S215>/Gain1'
                                        *   '<S236>/Gain1'
                                        *   '<S257>/Gain1'
                                        *   '<S278>/Gain1'
                                        */
real_T Steering_Relative_Cmd_Approach_Zero_Error_Thresh = 0.2;
                   /* Variable: Steering_Relative_Cmd_Approach_Zero_Error_Thresh
                    * Referenced by: '<S307>/Constant5'
                    */
real_T Steering_Relative_Cmd_Approach_Zero_Final_Thresh = 0.01;
                   /* Variable: Steering_Relative_Cmd_Approach_Zero_Final_Thresh
                    * Referenced by: '<S307>/Constant6'
                    */
real_T Steering_Relative_Cmd_NonZero_Error_Thresh = 0.2;
                         /* Variable: Steering_Relative_Cmd_NonZero_Error_Thresh
                          * Referenced by: '<S307>/Constant9'
                          */
real_T Steering_Relative_Cmd_NonZero_Final_Scale_Factor = 1.0;
                   /* Variable: Steering_Relative_Cmd_NonZero_Final_Scale_Factor
                    * Referenced by: '<S307>/Constant10'
                    */
real_T Steering_Relative_Cmd_Rate_Limit_Dec = -10.0;
                               /* Variable: Steering_Relative_Cmd_Rate_Limit_Dec
                                * Referenced by: '<S307>/Constant1'
                                */
real_T Steering_Relative_Cmd_Rate_Limit_Inc = 10.0;
                               /* Variable: Steering_Relative_Cmd_Rate_Limit_Inc
                                * Referenced by: '<S307>/Constant3'
                                */
real_T Steering_Relative_Gain = 5.0;   /* Variable: Steering_Relative_Gain
                                        * Referenced by: '<S359>/Constant'
                                        */
real_T Steering_Twist_Gain = -0.5;     /* Variable: Steering_Twist_Gain
                                        * Referenced by: '<S359>/Constant1'
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
                        * Referenced by: '<S295>/Constant5'
                        */
real_T Translation_Speed_Approach_Zero_Final_Thresh = 0.01;
                       /* Variable: Translation_Speed_Approach_Zero_Final_Thresh
                        * Referenced by: '<S295>/Constant6'
                        */
real_T Translation_Speed_NonZero_Error_Thresh = 0.15;
                             /* Variable: Translation_Speed_NonZero_Error_Thresh
                              * Referenced by: '<S295>/Constant9'
                              */
real_T Translation_Speed_NonZero_Final_Scale_Factor = 0.05;
                       /* Variable: Translation_Speed_NonZero_Final_Scale_Factor
                        * Referenced by: '<S295>/Constant10'
                        */
real_T Translation_Speed_Rate_Limit_Dec = -4.0;
                                   /* Variable: Translation_Speed_Rate_Limit_Dec
                                    * Referenced by: '<S295>/Constant1'
                                    */
real_T Translation_Speed_Rate_Limit_Inc = 4.0;
                                   /* Variable: Translation_Speed_Rate_Limit_Inc
                                    * Referenced by: '<S295>/Constant3'
                                    */
real_T Translation_Twist_Gain = 0.5;   /* Variable: Translation_Twist_Gain
                                        * Referenced by: '<S360>/Gain'
                                        */
real_T Twist_Deadzone_neg = -0.01;     /* Variable: Twist_Deadzone_neg
                                        * Referenced by:
                                        *   '<S359>/Dead Zone'
                                        *   '<S360>/Dead Zone'
                                        */
real_T Twist_Deadzone_pos = 0.01;      /* Variable: Twist_Deadzone_pos
                                        * Referenced by:
                                        *   '<S359>/Dead Zone'
                                        *   '<S360>/Dead Zone'
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
static void enter_internal_Coral_Score_Posi(void);
static void Code_Gen_M_Coral_Score_Position(const boolean_T *Compare, const
  boolean_T *FixPtRelationalOperator_l);
static void Code_Gen_Model_Coral(const boolean_T *Compare, const boolean_T
  *FixPtRelationalOperator_ne, const boolean_T *FixPtRelationalOperator_l, const
  boolean_T *FixPtRelationalOperator_i, const boolean_T
  *FixPtRelationalOperator_m);

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

/* Function for Chart: '<S358>/Reefscape_Chart' */
static void enter_internal_Coral_Score_Posi(void)
{
  if (Code_Gen_Model_B.FixPtRelationalOperator) {
    Code_Gen_Model_DW.is_Coral_Score_Position = Code_Gen_Model_IN_Level_1;
    Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_L1;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = Coral_Arm_Angle_L1;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_k) {
    Code_Gen_Model_DW.is_Coral_Score_Position = Code_Gen_Model_IN_Level_2_pre;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = -45.0;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_n) {
    Code_Gen_Model_DW.is_Coral_Score_Position = Code_Gen_Model_IN_Level_3;
    Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_L3;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = Coral_Arm_Angle_L3;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_d) {
    Code_Gen_Model_DW.is_Coral_Score_Position = Code_Gen_Model_IN_Level_4;
    Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_L4;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = Coral_Arm_Angle_L4;
  } else {
    Code_Gen_Model_DW.is_Coral_Score_Position = Code_Gen_M_IN_Manual_Adjustment;
    Code_Gen_Model_B.Elevator_Height_Desired_m += Code_Gen_Model_B.DeadZone1 *
      Elevator_Height_Manual_Gain;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_o += Code_Gen_Model_B.DeadZone *
      Coral_Arm_Manual_Gain;
  }
}

/* Function for Chart: '<S358>/Reefscape_Chart' */
static void Code_Gen_M_Coral_Score_Position(const boolean_T *Compare, const
  boolean_T *FixPtRelationalOperator_l)
{
  if ((((Code_Gen_Model_B.FixPtRelationalOperator) ||
        (Code_Gen_Model_B.FixPtRelationalOperator_k)) ||
       (Code_Gen_Model_B.FixPtRelationalOperator_n)) ||
      (Code_Gen_Model_B.FixPtRelationalOperator_d)) {
    Code_Gen_Model_DW.is_Coral = Code_Ge_IN_Coral_Score_Position;
    enter_internal_Coral_Score_Posi();
  } else if (*FixPtRelationalOperator_l) {
    Code_Gen_Model_DW.is_Coral_Score_Position = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_DW.is_Coral = Code_Gen_Model_IN_Coral_Eject;
    Code_Gen_Model_DW.is_Coral_Eject = Code_Gen_Model_IN_Eject;
    Code_Gen_Model_B.Coral_Wheel_DC = Coral_Motor_DC_Eject;
    Code_Gen_Model_DW.timer = 0.0;
  } else {
    switch (Code_Gen_Model_DW.is_Coral_Score_Position) {
     case Code_Gen_Model_IN_Level_1:
      if ((Code_Gen_Model_B.DeadZone1 != 0.0) || (Code_Gen_Model_B.DeadZone !=
           0.0)) {
        Code_Gen_Model_DW.is_Coral_Score_Position =
          Code_Gen_M_IN_Manual_Adjustment;
        Code_Gen_Model_B.Elevator_Height_Desired_m += Code_Gen_Model_B.DeadZone1
          * Elevator_Height_Manual_Gain;
        Code_Gen_Model_B.Coral_Arm_Angle_Desired_o += Code_Gen_Model_B.DeadZone *
          Coral_Arm_Manual_Gain;
      }
      break;

     case Code_Gen_Model_IN_Level_2:
      if ((Code_Gen_Model_B.DeadZone1 != 0.0) || (Code_Gen_Model_B.DeadZone !=
           0.0)) {
        Code_Gen_Model_DW.is_Coral_Score_Position =
          Code_Gen_M_IN_Manual_Adjustment;
        Code_Gen_Model_B.Elevator_Height_Desired_m += Code_Gen_Model_B.DeadZone1
          * Elevator_Height_Manual_Gain;
        Code_Gen_Model_B.Coral_Arm_Angle_Desired_o += Code_Gen_Model_B.DeadZone *
          Coral_Arm_Manual_Gain;
      }
      break;

     case Code_Gen_Model_IN_Level_2_pre:
      if (fabs(Code_Gen_Model_B.Coral_Arm_Angle_Desired_o -
               Code_Gen_Model_B.Coral_Arm_Angle_Measured) <=
          Coral_Arm_Angle_Error_Threshold) {
        Code_Gen_Model_DW.is_Coral_Score_Position = Code_Gen_Model_IN_Level_2;
        Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_L2;
        Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = Coral_Arm_Angle_L2;
      }
      break;

     case Code_Gen_Model_IN_Level_3:
      if ((Code_Gen_Model_B.DeadZone1 != 0.0) || (Code_Gen_Model_B.DeadZone !=
           0.0)) {
        Code_Gen_Model_DW.is_Coral_Score_Position =
          Code_Gen_M_IN_Manual_Adjustment;
        Code_Gen_Model_B.Elevator_Height_Desired_m += Code_Gen_Model_B.DeadZone1
          * Elevator_Height_Manual_Gain;
        Code_Gen_Model_B.Coral_Arm_Angle_Desired_o += Code_Gen_Model_B.DeadZone *
          Coral_Arm_Manual_Gain;
      }
      break;

     case Code_Gen_Model_IN_Level_4:
      if ((Code_Gen_Model_B.DeadZone1 != 0.0) || (Code_Gen_Model_B.DeadZone !=
           0.0)) {
        Code_Gen_Model_DW.is_Coral_Score_Position =
          Code_Gen_M_IN_Manual_Adjustment;
        Code_Gen_Model_B.Elevator_Height_Desired_m += Code_Gen_Model_B.DeadZone1
          * Elevator_Height_Manual_Gain;
        Code_Gen_Model_B.Coral_Arm_Angle_Desired_o += Code_Gen_Model_B.DeadZone *
          Coral_Arm_Manual_Gain;
      }
      break;

     default:
      /* case IN_Manual_Adjustment: */
      if (!(*Compare)) {
        Code_Gen_Model_DW.is_Coral_Score_Position =
          Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
        Code_Gen_Model_DW.is_Coral = Code_Gen_Model_IN_Coral_Eject;
        Code_Gen_Model_DW.is_Coral_Eject = Code_Gen_Model_IN_Eject;
        Code_Gen_Model_B.Coral_Wheel_DC = Coral_Motor_DC_Eject;
        Code_Gen_Model_DW.timer = 0.0;
      } else {
        Code_Gen_Model_B.Elevator_Height_Desired_m += Code_Gen_Model_B.DeadZone1
          * Elevator_Height_Manual_Gain;
        Code_Gen_Model_B.Coral_Arm_Angle_Desired_o += Code_Gen_Model_B.DeadZone *
          Coral_Arm_Manual_Gain;
      }
      break;
    }
  }
}

/* Function for Chart: '<S358>/Reefscape_Chart' */
static void Code_Gen_Model_Coral(const boolean_T *Compare, const boolean_T
  *FixPtRelationalOperator_ne, const boolean_T *FixPtRelationalOperator_l, const
  boolean_T *FixPtRelationalOperator_i, const boolean_T
  *FixPtRelationalOperator_m)
{
  switch (Code_Gen_Model_DW.is_Coral) {
   case Code_Gen_Model_IN_Coral_Eject:
    if (*FixPtRelationalOperator_ne) {
      Code_Gen_Model_DW.is_Coral_Eject = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Coral = Code_Ge_IN_Coral_Pickup_Prepare;
      Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Prepare;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = -90.0;
      Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
    } else if (*FixPtRelationalOperator_m) {
      Code_Gen_Model_DW.is_Coral_Eject = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Coral = C_IN_Elevator_Height_Bottom_pre;
      Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Prepare;
      Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
    } else if (*FixPtRelationalOperator_i) {
      Code_Gen_Model_DW.is_Coral_Eject = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Coral = Code_Gen__IN_Eleator_Height_Top;
      Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Top;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = -80.0;
      Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
    } else if (Code_Gen_Model_DW.is_Coral_Eject == Code_Gen_Model_IN_Eject) {
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
    Code_Gen_Model_B.Coral_Wheel_DC = Coral_Motor_DC_Pickup;
    if (*Compare) {
      Code_Gen_Model_DW.is_Coral = Code_IN_Coral_Pickup_Lower_Wait;
      Code_Gen_Model_B.Coral_Wheel_DC = Coral_Motor_DC_Hold;
      Code_Gen_Model_DW.timer = 0.0;
      Code_Gen_Model_B.Elevator_LowerPickup_Reset = false;
    } else if (*FixPtRelationalOperator_ne) {
      Code_Gen_Model_DW.is_Coral = Code_Ge_IN_Coral_Pickup_Prepare;
      Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Prepare;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = -90.0;
      Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
    } else if (*FixPtRelationalOperator_m) {
      Code_Gen_Model_DW.is_Coral = C_IN_Elevator_Height_Bottom_pre;
      Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Prepare;
      Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
    } else if (*FixPtRelationalOperator_i) {
      Code_Gen_Model_DW.is_Coral = Code_Gen__IN_Eleator_Height_Top;
      Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Top;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = -80.0;
      Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
    }
    break;

   case Code_IN_Coral_Pickup_Lower_Wait:
    Code_Gen_Model_B.Coral_Wheel_DC = Coral_Motor_DC_Hold;
    if (Code_Gen_Model_DW.timer >= Elevator_LowerPickup_Time) {
      Code_Gen_Model_B.Elevator_LowerPickup_Reset = true;
      Code_Gen_Model_DW.is_Coral = Code_Gen__IN_Coral_Pickup_Raise;
      Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Raise;
    } else if (*FixPtRelationalOperator_ne) {
      Code_Gen_Model_DW.is_Coral = Code_Ge_IN_Coral_Pickup_Prepare;
      Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Prepare;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = -90.0;
      Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
    } else if (*FixPtRelationalOperator_m) {
      Code_Gen_Model_DW.is_Coral = C_IN_Elevator_Height_Bottom_pre;
      Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Prepare;
      Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
    } else if (*FixPtRelationalOperator_i) {
      Code_Gen_Model_DW.is_Coral = Code_Gen__IN_Eleator_Height_Top;
      Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Top;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = -80.0;
      Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
    } else {
      Code_Gen_Model_DW.timer += 0.02;
    }
    break;

   case Code_Ge_IN_Coral_Pickup_Prepare:
    Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
    if (*FixPtRelationalOperator_ne) {
      Code_Gen_Model_DW.is_Coral = Code_Ge_IN_Coral_Pickup_Prepare;
      Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Prepare;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = -90.0;
    } else if (*FixPtRelationalOperator_m) {
      Code_Gen_Model_DW.is_Coral = C_IN_Elevator_Height_Bottom_pre;
      Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Prepare;
    } else if (*FixPtRelationalOperator_i) {
      Code_Gen_Model_DW.is_Coral = Code_Gen__IN_Eleator_Height_Top;
      Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Top;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = -80.0;
    } else if ((fabs(Code_Gen_Model_B.Elevator_Height_Desired_m -
                     Code_Gen_Model_B.Elevator_Height_Measured) <=
                Elevator_Height_Error_Threshold) && ((fabs
                 (Code_Gen_Model_B.Coral_Arm_Angle_Desired_o -
                  Code_Gen_Model_B.Coral_Arm_Angle_Measured) <=
                 Coral_Arm_Angle_Error_Threshold) &&
                (Code_Gen_Model_U.Coral_TOF_Distance < Coral_Detect_Distance)))
    {
      Code_Gen_Model_DW.is_Coral = Code_Gen__IN_Coral_Pickup_Lower;
      Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Lower;
      Code_Gen_Model_B.Coral_Wheel_DC = Coral_Motor_DC_Pickup;
    }
    break;

   case Code_Gen__IN_Coral_Pickup_Raise:
    if ((fabs(Code_Gen_Model_B.Elevator_Height_Desired_m -
              Code_Gen_Model_B.Elevator_Height_Measured) <=
         Elevator_Height_Error_Threshold) &&
        ((((Code_Gen_Model_B.FixPtRelationalOperator) ||
           (Code_Gen_Model_B.FixPtRelationalOperator_k)) ||
          (Code_Gen_Model_B.FixPtRelationalOperator_n)) ||
         (Code_Gen_Model_B.FixPtRelationalOperator_d))) {
      Code_Gen_Model_DW.is_Coral = Code_Ge_IN_Coral_Score_Position;
      enter_internal_Coral_Score_Posi();
    } else if (*FixPtRelationalOperator_ne) {
      Code_Gen_Model_DW.is_Coral = Code_Ge_IN_Coral_Pickup_Prepare;
      Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Prepare;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = -90.0;
      Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
    } else if (*FixPtRelationalOperator_m) {
      Code_Gen_Model_DW.is_Coral = C_IN_Elevator_Height_Bottom_pre;
      Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Prepare;
      Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
    } else if (*FixPtRelationalOperator_i) {
      Code_Gen_Model_DW.is_Coral = Code_Gen__IN_Eleator_Height_Top;
      Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Top;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = -80.0;
      Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
    }
    break;

   case Code_Ge_IN_Coral_Score_Position:
    Code_Gen_M_Coral_Score_Position(Compare, FixPtRelationalOperator_l);
    break;

   case Code_Gen__IN_Eleator_Height_Top:
    Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
    if (*FixPtRelationalOperator_ne) {
      Code_Gen_Model_DW.is_Coral = Code_Ge_IN_Coral_Pickup_Prepare;
      Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Prepare;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = -90.0;
    } else if (*FixPtRelationalOperator_m) {
      Code_Gen_Model_DW.is_Coral = C_IN_Elevator_Height_Bottom_pre;
      Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Prepare;
    } else if (*FixPtRelationalOperator_i) {
      Code_Gen_Model_DW.is_Coral = Code_Gen__IN_Eleator_Height_Top;
      Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Top;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = -80.0;
    }
    break;

   case Code__IN_Elevator_Height_Bottom:
    Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
    if (*FixPtRelationalOperator_ne) {
      Code_Gen_Model_DW.is_Coral = Code_Ge_IN_Coral_Pickup_Prepare;
      Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Prepare;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = -90.0;
    } else if (*FixPtRelationalOperator_m) {
      Code_Gen_Model_DW.is_Coral = C_IN_Elevator_Height_Bottom_pre;
      Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Prepare;
    } else if (*FixPtRelationalOperator_i) {
      Code_Gen_Model_DW.is_Coral = Code_Gen__IN_Eleator_Height_Top;
      Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Top;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = -80.0;
    }
    break;

   default:
    /* case IN_Elevator_Height_Bottom_pre: */
    Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
    if (Code_Gen_Model_B.Elevator_Height_Measured >
        (Code_Gen_Model_B.Elevator_Height_Desired_m -
         Elevator_Height_Error_Threshold)) {
      Code_Gen_Model_DW.is_Coral = Code__IN_Elevator_Height_Bottom;
      Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Bottom;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = 80.0;
    } else if (*FixPtRelationalOperator_ne) {
      Code_Gen_Model_DW.is_Coral = Code_Ge_IN_Coral_Pickup_Prepare;
      Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Prepare;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = -90.0;
    } else if (*FixPtRelationalOperator_m) {
      Code_Gen_Model_DW.is_Coral = C_IN_Elevator_Height_Bottom_pre;
      Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Prepare;
    } else if (*FixPtRelationalOperator_i) {
      Code_Gen_Model_DW.is_Coral = Code_Gen__IN_Eleator_Height_Top;
      Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Top;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = -80.0;
    }
    break;
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
  real_T rtb_LookupTableDynamic1_b;
  real_T rtb_LookupTableDynamic_jw;
  real_T rtb_LookupTableDynamic1_a;
  real_T rtb_LookupTableDynamic_n;
  real_T rtb_thetay_n_0[8];
  real_T rtb_Akxhatkk1[2];
  real_T rtb_Minus_n[2];
  real_T rtb_Add2_k_idx_0;
  real_T rtb_Add2_k_idx_1;
  real_T rtb_Add_gd;
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
  real_T rtb_POSEexponentialmatrixfori_1;
  real_T rtb_Product2_e2;
  real_T rtb_Product2_i;
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
  real_T rtb_Switch2_k;
  real_T rtb_Switch4;
  real_T rtb_Switch_jh;
  real_T rtb_Uk1_iw;
  real_T rtb_rx;
  real_T rtb_rx_c;
  real_T rtb_rx_g;
  real_T rtb_rx_kh;
  real_T rtb_thetay;
  real_T rtb_thetay_a;
  real_T rtb_thetay_i;
  real_T rtb_thetay_n;
  real_T tmp;
  int32_T i;
  int32_T rtb_Num_Segments;
  int32_T tmp_0;
  int8_T rtAction;
  int8_T rtPrevAction;
  uint8_T rtb_GameState;
  boolean_T Compare;
  boolean_T FixPtRelationalOperator_m;
  boolean_T rtb_AND;
  boolean_T rtb_AND1;
  boolean_T rtb_AND2;
  boolean_T rtb_AT_Tag_5_Active;
  boolean_T rtb_Compare_a;
  boolean_T rtb_Compare_c4;
  boolean_T rtb_Compare_ht;
  boolean_T rtb_Compare_m;
  boolean_T rtb_FixPtRelationalOperator;
  boolean_T rtb_FixPtRelationalOperator_ea;
  boolean_T rtb_FixPtRelationalOperator_fl;
  boolean_T rtb_Gamepad_POV_Up;
  boolean_T rtb_Is_Absolute_Steering;
  boolean_T rtb_Is_Absolute_Translation_g;
  boolean_T rtb_Relative_Translation_Flag;
  boolean_T rtb_Swerve_Motors_Disabled;
  boolean_T rtb_UnitDelay_l;

  /* RelationalOperator: '<S72>/FixPt Relational Operator' incorporates:
   *  Inport: '<Root>/Joystick_Left_B11'
   *  UnitDelay: '<S72>/Delay Input1'
   *
   * Block description for '<S72>/Delay Input1':
   *
   *  Store in Global RAM
   */
  rtb_FixPtRelationalOperator = (Code_Gen_Model_U.Joystick_Left_B11 >
    Code_Gen_Model_DW.DelayInput1_DSTATE);

  /* RelationalOperator: '<S74>/FixPt Relational Operator' incorporates:
   *  Inport: '<Root>/Joystick_Left_B13'
   *  UnitDelay: '<S74>/Delay Input1'
   *
   * Block description for '<S74>/Delay Input1':
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

  /* RelationalOperator: '<S64>/Compare' incorporates:
   *  Constant: '<S64>/Constant'
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

  /* RelationalOperator: '<S71>/Compare' incorporates:
   *  Constant: '<S71>/Constant'
   *  Inport: '<Root>/Joystick_Left_B1'
   */
  Code_Gen_Model_B.Is_Boosting = (Code_Gen_Model_U.Joystick_Left_B1 != 0.0);

  /* RelationalOperator: '<S69>/Compare' incorporates:
   *  Constant: '<S69>/Constant'
   *  Inport: '<Root>/Joystick_Left_B3'
   */
  Code_Gen_Model_B.Align_Amp = (Code_Gen_Model_U.Joystick_Left_B3 != 0.0);

  /* RelationalOperator: '<S68>/Compare' incorporates:
   *  Constant: '<S68>/Constant'
   *  Inport: '<Root>/Joystick_Left_B4'
   */
  Code_Gen_Model_B.Align_Speaker = (Code_Gen_Model_U.Joystick_Left_B4 != 0.0);

  /* RelationalOperator: '<S67>/Compare' incorporates:
   *  Constant: '<S67>/Constant'
   *  Inport: '<Root>/Joystick_Right_B2'
   */
  Code_Gen_Model_B.Face_Toward_Driver = (Code_Gen_Model_U.Joystick_Right_B2 !=
    0.0);

  /* RelationalOperator: '<S65>/Compare' incorporates:
   *  Constant: '<S65>/Constant'
   *  Inport: '<Root>/Joystick_Right_B4'
   */
  Code_Gen_Model_B.Face_Right_Driver = (Code_Gen_Model_U.Joystick_Right_B4 !=
    0.0);

  /* RelationalOperator: '<S66>/Compare' incorporates:
   *  Constant: '<S66>/Constant'
   *  Inport: '<Root>/Joystick_Right_B3'
   */
  Code_Gen_Model_B.Face_Left_Driver = (Code_Gen_Model_U.Joystick_Right_B3 != 0.0);

  /* RelationalOperator: '<S63>/Compare' incorporates:
   *  Constant: '<S63>/Constant'
   *  Inport: '<Root>/Joystick_Right_POV'
   */
  Code_Gen_Model_B.Face_Away_Driver = (Code_Gen_Model_U.Joystick_Right_POV !=
    -1.0);

  /* Reshape: '<S75>/Reshapey' incorporates:
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

  /* Delay: '<S75>/MemoryX' incorporates:
   *  Constant: '<S75>/X0'
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

  /* Outputs for Enabled SubSystem: '<S102>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S128>/Enable'
   */
  if (rtb_AND) {
    Code_Gen_Model_DW.EnabledSubsystem_MODE = true;

    /* Sum: '<S128>/Add1' incorporates:
     *  Constant: '<S75>/C'
     *  Delay: '<S75>/MemoryX'
     *  Product: '<S128>/Product'
     */
    rtb_Switch1 = rtb_Reshapey_idx_0 - ((0.0 * Code_Gen_Model_DW.MemoryX_DSTATE
      [1]) + Code_Gen_Model_DW.MemoryX_DSTATE[0]);
    rtb_Uk1_iw = rtb_Reshapey_idx_1 - ((0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[0])
      + Code_Gen_Model_DW.MemoryX_DSTATE[1]);

    /* Product: '<S128>/Product2' incorporates:
     *  Constant: '<S76>/KalmanGainM'
     */
    Code_Gen_Model_B.Product2[0] = (0.09512492197250387 * rtb_Switch1) +
      (5.9896845167210271E-17 * rtb_Uk1_iw);
    Code_Gen_Model_B.Product2[1] = (5.9896845167210271E-17 * rtb_Switch1) +
      (0.095124921972503981 * rtb_Uk1_iw);
  } else if (Code_Gen_Model_DW.EnabledSubsystem_MODE) {
    /* Disable for Product: '<S128>/Product2' incorporates:
     *  Outport: '<S128>/deltax'
     */
    Code_Gen_Model_B.Product2[0] = 0.0;
    Code_Gen_Model_B.Product2[1] = 0.0;
    Code_Gen_Model_DW.EnabledSubsystem_MODE = false;
  }

  /* End of Outputs for SubSystem: '<S102>/Enabled Subsystem' */

  /* Sum: '<S102>/Add' incorporates:
   *  Delay: '<S75>/MemoryX'
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
   *  RelationalOperator: '<S57>/FixPt Relational Operator'
   *  Sum: '<S11>/Sum'
   *  UnitDelay: '<S11>/Unit Delay1'
   *  UnitDelay: '<S57>/Delay Input1'
   *
   * Block description for '<S57>/Delay Input1':
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

  /* Gain: '<S56>/Gain1' */
  Code_Gen_Model_B.Gyro_Angle_rad = 0.017453292519943295 *
    Code_Gen_Model_B.Gyro_Angle_Calibrated_deg;

  /* RelationalOperator: '<S59>/Compare' incorporates:
   *  Constant: '<S59>/Constant'
   *  Inport: '<Root>/Gamepad_POV'
   */
  rtb_Compare_a = (Code_Gen_Model_U.Gamepad_POV != -1.0);

  /* Logic: '<S12>/Logical Operator' incorporates:
   *  Constant: '<S58>/Constant'
   *  Constant: '<S60>/Constant'
   *  Inport: '<Root>/Gamepad_POV'
   *  Logic: '<S12>/Logical Operator1'
   *  RelationalOperator: '<S58>/Compare'
   *  RelationalOperator: '<S60>/Compare'
   */
  rtb_Gamepad_POV_Up = (rtb_Compare_a && ((Code_Gen_Model_U.Gamepad_POV <= 45.0)
    || (Code_Gen_Model_U.Gamepad_POV >= 315.0)));

  /* Logic: '<S12>/Logical Operator2' incorporates:
   *  Constant: '<S61>/Constant'
   *  Constant: '<S62>/Constant'
   *  Inport: '<Root>/Gamepad_POV'
   *  Logic: '<S12>/Logical Operator3'
   *  RelationalOperator: '<S61>/Compare'
   *  RelationalOperator: '<S62>/Compare'
   */
  rtb_Compare_a = (rtb_Compare_a && ((Code_Gen_Model_U.Gamepad_POV >= 135.0) &&
    (Code_Gen_Model_U.Gamepad_POV <= 225.0)));

  /* RelationalOperator: '<S3>/Compare' incorporates:
   *  Constant: '<S3>/Constant'
   *  Inport: '<Root>/Elevator_Limit_Switch_Bottom'
   */
  rtb_Compare_m = (Code_Gen_Model_U.Elevator_Limit_Switch_Bottom != 0.0);

  /* RelationalOperator: '<S4>/Compare' incorporates:
   *  Constant: '<S4>/Constant'
   *  Inport: '<Root>/Elevator_Limit_Switch_Top'
   */
  rtb_Compare_ht = (Code_Gen_Model_U.Elevator_Limit_Switch_Top != 0.0);

  /* Gain: '<S10>/Gain1' incorporates:
   *  Inport: '<Root>/Elevator_Motor_Rev'
   */
  Code_Gen_Model_B.Elevator_Height_Measured_Raw = Elevator_MotorRev_to_Inch *
    Code_Gen_Model_U.Elevator_Motor_Rev;

  /* UnitDelay: '<S1>/Unit Delay' */
  rtb_UnitDelay_l = Code_Gen_Model_DW.UnitDelay_DSTATE_mph;

  /* Switch: '<S10>/Switch1' incorporates:
   *  RelationalOperator: '<S53>/FixPt Relational Operator'
   *  RelationalOperator: '<S54>/FixPt Relational Operator'
   *  RelationalOperator: '<S55>/FixPt Relational Operator'
   *  Switch: '<S10>/Switch2'
   *  Switch: '<S10>/Switch3'
   *  UnitDelay: '<S1>/Unit Delay'
   *  UnitDelay: '<S53>/Delay Input1'
   *  UnitDelay: '<S54>/Delay Input1'
   *  UnitDelay: '<S55>/Delay Input1'
   *
   * Block description for '<S53>/Delay Input1':
   *
   *  Store in Global RAM
   *
   * Block description for '<S54>/Delay Input1':
   *
   *  Store in Global RAM
   *
   * Block description for '<S55>/Delay Input1':
   *
   *  Store in Global RAM
   */
  if (((int32_T)rtb_Compare_m) < ((int32_T)
       Code_Gen_Model_DW.DelayInput1_DSTATE_b)) {
    /* Switch: '<S10>/Switch1' */
    Code_Gen_Model_B.Elevator_Height_Offset =
      Code_Gen_Model_B.Elevator_Height_Measured_Raw;
  } else if (((int32_T)rtb_Compare_ht) < ((int32_T)
              Code_Gen_Model_DW.DelayInput1_DSTATE_o1)) {
    /* Switch: '<S10>/Switch1' incorporates:
     *  Constant: '<S10>/Constant1'
     *  Sum: '<S10>/Subtract1'
     *  Switch: '<S10>/Switch2'
     */
    Code_Gen_Model_B.Elevator_Height_Offset =
      Code_Gen_Model_B.Elevator_Height_Measured_Raw - Elevator_Height_Top_Reset;
  } else if (((int32_T)Code_Gen_Model_DW.UnitDelay_DSTATE_mph) > ((int32_T)
              Code_Gen_Model_DW.DelayInput1_DSTATE_po)) {
    /* Switch: '<S10>/Switch1' incorporates:
     *  Constant: '<S10>/Constant2'
     *  Sum: '<S10>/Subtract2'
     *  Switch: '<S10>/Switch2'
     *  Switch: '<S10>/Switch3'
     */
    Code_Gen_Model_B.Elevator_Height_Offset =
      Code_Gen_Model_B.Elevator_Height_Measured_Raw -
      Elevator_Height_PickupLower_Reset;
  }

  /* End of Switch: '<S10>/Switch1' */

  /* Switch: '<S10>/Switch' incorporates:
   *  Logic: '<S10>/Logical Operator'
   */
  if (rtb_Compare_m || rtb_Compare_ht) {
    /* Switch: '<S10>/Switch4' */
    if (rtb_Compare_m) {
      /* Switch: '<S10>/Switch' incorporates:
       *  Constant: '<S10>/Constant'
       */
      Code_Gen_Model_B.Elevator_Height_Measured = 0.0;
    } else {
      /* Switch: '<S10>/Switch' incorporates:
       *  Constant: '<S10>/Constant3'
       */
      Code_Gen_Model_B.Elevator_Height_Measured = Elevator_Height_Top_Reset;
    }

    /* End of Switch: '<S10>/Switch4' */
  } else {
    /* Switch: '<S10>/Switch' incorporates:
     *  Sum: '<S10>/Subtract'
     */
    Code_Gen_Model_B.Elevator_Height_Measured =
      Code_Gen_Model_B.Elevator_Height_Measured_Raw -
      Code_Gen_Model_B.Elevator_Height_Offset;
  }

  /* End of Switch: '<S10>/Switch' */

  /* Bias: '<S1>/Add Constant' incorporates:
   *  Inport: '<Root>/Coral_Arm_Angle_Measured_Raw'
   */
  Code_Gen_Model_B.Coral_Arm_Angle_Measured =
    Code_Gen_Model_U.Coral_Arm_Angle_Measured_Raw - 180.0;

  /* RelationalOperator: '<S5>/Compare' incorporates:
   *  Constant: '<S5>/Constant'
   *  Inport: '<Root>/Coral_Limit_Switch'
   */
  Compare = (Code_Gen_Model_U.Coral_Limit_Switch != 0.0);

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
    rtb_rx_g = 0.0;

    /* SignalConversion generated from: '<S8>/Reset_Wheel_Offsets' incorporates:
     *  Constant: '<S8>/Constant13'
     */
    rtb_thetay_a = 0.0;

    /* SignalConversion generated from: '<S8>/Disable_Wheels' incorporates:
     *  Constant: '<S8>/Constant14'
     */
    rtb_Uk1_iw = 0.0;

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
    rtb_thetay = 0.0;

    /* SignalConversion generated from: '<S8>/Algae_Wheel_Outside_DutyCycle' incorporates:
     *  Constant: '<S8>/Constant19'
     */
    rtb_rx = 0.0;

    /* SignalConversion generated from: '<S8>/Algae_Wheel_Inside_DutyCycle' incorporates:
     *  Constant: '<S8>/Constant20'
     */
    rtb_thetay_n = 0.0;

    /* Merge: '<S15>/Merge21' incorporates:
     *  Constant: '<S8>/Constant21'
     *  SignalConversion generated from: '<S8>/Elevator_LowerPickup_Reset'
     */
    Code_Gen_Model_B.Elevator_LowerPickup_Reset_tp = false;

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
    rtb_rx_g = 0.0;

    /* SignalConversion generated from: '<S2>/Reset_Wheel_Offsets' incorporates:
     *  Constant: '<S2>/Constant13'
     */
    rtb_thetay_a = 0.0;

    /* SignalConversion generated from: '<S2>/Disable_Wheels' incorporates:
     *  Constant: '<S2>/Constant14'
     */
    rtb_Uk1_iw = 0.0;

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
    rtb_thetay = 0.0;

    /* SignalConversion generated from: '<S2>/Algae_Wheel_Outside_DutyCycle' incorporates:
     *  Constant: '<S2>/Constant19'
     */
    rtb_rx = 0.0;

    /* SignalConversion generated from: '<S2>/Algae_Wheel_Inside_DutyCycle' incorporates:
     *  Constant: '<S2>/Constant20'
     */
    rtb_thetay_n = 0.0;

    /* Merge: '<S15>/Merge21' incorporates:
     *  Constant: '<S2>/Constant21'
     *  SignalConversion generated from: '<S2>/Elevator_LowerPickup_Reset'
     */
    Code_Gen_Model_B.Elevator_LowerPickup_Reset_tp = false;

    /* End of Outputs for SubSystem: '<S1>/Autonomous' */
    break;

   case 2:
    if (rtAction != rtPrevAction) {
      /* InitializeConditions for IfAction SubSystem: '<S1>/Teleop' incorporates:
       *  ActionPort: '<S21>/Action Port'
       */
      /* InitializeConditions for SwitchCase: '<S1>/Switch Case' incorporates:
       *  UnitDelay: '<S356>/Unit Delay'
       *  UnitDelay: '<S356>/Unit Delay1'
       *  UnitDelay: '<S359>/Unit Delay1'
       *  UnitDelay: '<S359>/Unit Delay2'
       *  UnitDelay: '<S359>/Unit Delay3'
       *  UnitDelay: '<S359>/Unit Delay4'
       *  UnitDelay: '<S362>/Delay Input1'
       *  UnitDelay: '<S363>/Delay Input1'
       *  UnitDelay: '<S364>/Delay Input1'
       *  UnitDelay: '<S365>/Delay Input1'
       *  UnitDelay: '<S366>/Delay Input1'
       *  UnitDelay: '<S367>/Delay Input1'
       *  UnitDelay: '<S372>/Unit Delay'
       *  UnitDelay: '<S372>/Unit Delay1'
       *  UnitDelay: '<S376>/FixPt Unit Delay1'
       *  UnitDelay: '<S376>/FixPt Unit Delay2'
       *  UnitDelay: '<S379>/Delay Input1'
       *  UnitDelay: '<S380>/Delay Input1'
       *  UnitDelay: '<S381>/Delay Input1'
       *  UnitDelay: '<S382>/Delay Input1'
       *  UnitDelay: '<S383>/Delay Input1'
       *  UnitDelay: '<S384>/Delay Input1'
       *  UnitDelay: '<S385>/Delay Input1'
       *  UnitDelay: '<S386>/Delay Input1'
       *  UnitDelay: '<S387>/Delay Input1'
       *  UnitDelay: '<S388>/Delay Input1'
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
       *
       * Block description for '<S365>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S366>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S367>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S379>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S380>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S381>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S382>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S383>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S384>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S385>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S386>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S387>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S388>/Delay Input1':
       *
       *  Store in Global RAM
       */
      Code_Gen_Model_DW.UnitDelay1_DSTATE_l = 0.0;
      Code_Gen_Model_DW.UnitDelay_DSTATE_p = 0.0;
      Code_Gen_Model_DW.DelayInput1_DSTATE_jp = false;
      Code_Gen_Model_DW.DelayInput1_DSTATE_f = false;
      Code_Gen_Model_DW.DelayInput1_DSTATE_m = false;
      Code_Gen_Model_DW.DelayInput1_DSTATE_k = false;
      Code_Gen_Model_DW.DelayInput1_DSTATE_g = false;
      Code_Gen_Model_DW.DelayInput1_DSTATE_g2 = false;
      Code_Gen_Model_DW.UnitDelay2_DSTATE = false;
      Code_Gen_Model_DW.UnitDelay4_DSTATE = false;
      Code_Gen_Model_DW.UnitDelay3_DSTATE = 0.0;
      Code_Gen_Model_DW.UnitDelay_DSTATE_ho = false;
      Code_Gen_Model_DW.UnitDelay1_DSTATE_e = 0.0;
      Code_Gen_Model_DW.UnitDelay1_DSTATE_j = 0.0;
      Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_a = 1U;
      Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_f = 0.0;
      Code_Gen_Model_DW.DelayInput1_DSTATE_c = 0.0;
      Code_Gen_Model_DW.DelayInput1_DSTATE_nr = 0.0;
      Code_Gen_Model_DW.DelayInput1_DSTATE_ez = 0.0;
      Code_Gen_Model_DW.DelayInput1_DSTATE_nh = 0.0;
      Code_Gen_Model_DW.DelayInput1_DSTATE_i = 0.0;
      Code_Gen_Model_DW.DelayInput1_DSTATE_pd = 0.0;
      Code_Gen_Model_DW.DelayInput1_DSTATE_o = 0.0;
      Code_Gen_Model_DW.DelayInput1_DSTATE_j = 0.0;
      Code_Gen_Model_DW.DelayInput1_DSTATE_oy = false;
      Code_Gen_Model_DW.DelayInput1_DSTATE_fx = false;

      /* End of InitializeConditions for SubSystem: '<S1>/Teleop' */

      /* SystemReset for IfAction SubSystem: '<S1>/Teleop' incorporates:
       *  ActionPort: '<S21>/Action Port'
       */
      /* SystemReset for SwitchCase: '<S1>/Switch Case' incorporates:
       *  Chart: '<S358>/Reefscape_Chart'
       */
      Code_Gen_Model_DW.is_active_c4_Code_Gen_Model = 0U;
      Code_Gen_Model_DW.is_Coral = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Coral_Eject = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Coral_Score_Position =
        Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Algae = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_B.Elevator_Height_Desired_m = 0.0;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = 0.0;
      Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
      Code_Gen_Model_DW.timer = 0.0;
      Code_Gen_Model_B.Elevator_LowerPickup_Reset = false;

      /* End of SystemReset for SubSystem: '<S1>/Teleop' */
    }

    /* Outputs for IfAction SubSystem: '<S1>/Teleop' incorporates:
     *  ActionPort: '<S21>/Action Port'
     */
    /* Logic: '<S356>/Logical Operator3' incorporates:
     *  Inport: '<Root>/IsBlueAlliance'
     */
    rtb_Swerve_Motors_Disabled = ((Code_Gen_Model_B.Align_Amp) &&
      (Code_Gen_Model_U.IsBlueAlliance != 0.0));

    /* Logic: '<S356>/Logical Operator2' incorporates:
     *  Inport: '<Root>/IsBlueAlliance'
     *  Logic: '<S356>/Logical Operator10'
     */
    rtb_AT_Tag_5_Active = ((Code_Gen_Model_B.Align_Amp) &&
      (!(Code_Gen_Model_U.IsBlueAlliance != 0.0)));

    /* Switch: '<S356>/Switch15' incorporates:
     *  Switch: '<S356>/Switch16'
     *  Switch: '<S356>/Switch23'
     *  Switch: '<S356>/Switch24'
     */
    if (rtb_AT_Tag_5_Active) {
      /* Switch: '<S356>/Switch15' incorporates:
       *  Constant: '<S356>/Constant9'
       *  Sum: '<S356>/Add17'
       */
      Code_Gen_Model_B.AT_Error_X = AT_Target_Tag_5_X -
        Code_Gen_Model_B.KF_Position_X;

      /* Switch: '<S356>/Switch23' incorporates:
       *  Constant: '<S356>/Constant28'
       *  Sum: '<S356>/Add23'
       */
      Code_Gen_Model_B.AT_Error_Y = AT_Target_Tag_5_Y -
        Code_Gen_Model_B.KF_Position_Y;
    } else if (rtb_Swerve_Motors_Disabled) {
      /* Switch: '<S356>/Switch15' incorporates:
       *  Constant: '<S356>/Constant5'
       *  Sum: '<S356>/Add16'
       *  Switch: '<S356>/Switch16'
       */
      Code_Gen_Model_B.AT_Error_X = AT_Target_Tag_6_X -
        Code_Gen_Model_B.KF_Position_X;

      /* Switch: '<S356>/Switch23' incorporates:
       *  Constant: '<S356>/Constant27'
       *  Sum: '<S356>/Add22'
       *  Switch: '<S356>/Switch24'
       */
      Code_Gen_Model_B.AT_Error_Y = AT_Target_Tag_6_Y -
        Code_Gen_Model_B.KF_Position_Y;
    } else {
      /* Switch: '<S356>/Switch15' incorporates:
       *  Constant: '<S356>/Constant1'
       *  Switch: '<S356>/Switch1'
       *  Switch: '<S356>/Switch12'
       *  Switch: '<S356>/Switch13'
       *  Switch: '<S356>/Switch14'
       *  Switch: '<S356>/Switch16'
       *  Switch: '<S356>/Switch17'
       *  Switch: '<S356>/Switch18'
       */
      Code_Gen_Model_B.AT_Error_X = 0.0;

      /* Switch: '<S356>/Switch23' incorporates:
       *  Constant: '<S356>/Constant2'
       *  Switch: '<S356>/Switch19'
       *  Switch: '<S356>/Switch20'
       *  Switch: '<S356>/Switch21'
       *  Switch: '<S356>/Switch22'
       *  Switch: '<S356>/Switch24'
       *  Switch: '<S356>/Switch25'
       *  Switch: '<S356>/Switch26'
       */
      Code_Gen_Model_B.AT_Error_Y = 0.0;
    }

    /* End of Switch: '<S356>/Switch15' */

    /* Switch: '<S372>/Switch1' incorporates:
     *  Constant: '<S377>/Constant'
     *  Constant: '<S378>/Constant'
     *  Logic: '<S372>/AND'
     *  RelationalOperator: '<S377>/Compare'
     *  RelationalOperator: '<S378>/Compare'
     *  Switch: '<S372>/Switch2'
     *  UnitDelay: '<S372>/Unit Delay'
     *  UnitDelay: '<S372>/Unit Delay1'
     */
    if ((Code_Gen_Model_B.Drive_Joystick_X == 0.0) &&
        (Code_Gen_Model_B.Drive_Joystick_Y == 0.0)) {
      rtb_Switch1_p2 = Code_Gen_Model_DW.UnitDelay1_DSTATE_l;
      rtb_Switch2 = Code_Gen_Model_DW.UnitDelay_DSTATE_p;
    } else {
      rtb_Switch1_p2 = Code_Gen_Model_B.Drive_Joystick_Y;
      rtb_Switch2 = Code_Gen_Model_B.Drive_Joystick_X;
    }

    /* End of Switch: '<S372>/Switch1' */

    /* Lookup_n-D: '<S360>/Modulation_Drv' incorporates:
     *  Math: '<S360>/Magnitude'
     */
    rtb_thetay = look1_binlcpw(rt_hypotd_snf(Code_Gen_Model_B.Drive_Joystick_X,
      Code_Gen_Model_B.Drive_Joystick_Y),
      Code_Gen_Model_ConstP.Modulation_Drv_bp01Data,
      Code_Gen_Model_ConstP.Modulation_Drv_tableData, 20U);

    /* RelationalOperator: '<S370>/Compare' incorporates:
     *  Constant: '<S370>/Constant'
     */
    rtb_Compare_c4 = (rtb_thetay == 0.0);

    /* DeadZone: '<S360>/Dead Zone' */
    if (Code_Gen_Model_B.Drive_Joystick_Z > Twist_Deadzone_pos) {
      rtb_rx = Code_Gen_Model_B.Drive_Joystick_Z - Twist_Deadzone_pos;
    } else if (Code_Gen_Model_B.Drive_Joystick_Z >= Twist_Deadzone_neg) {
      rtb_rx = 0.0;
    } else {
      rtb_rx = Code_Gen_Model_B.Drive_Joystick_Z - Twist_Deadzone_neg;
    }

    /* End of DeadZone: '<S360>/Dead Zone' */

    /* Logic: '<S360>/Logical Operator' incorporates:
     *  Constant: '<S371>/Constant'
     *  RelationalOperator: '<S371>/Compare'
     */
    rtb_Relative_Translation_Flag = ((rtb_rx != 0.0) && rtb_Compare_c4);

    /* Switch: '<S360>/Switch1' incorporates:
     *  Switch: '<S360>/Switch4'
     */
    if (rtb_Relative_Translation_Flag) {
      /* Switch: '<S360>/Switch5' */
      if (Code_Gen_Model_B.Drive_Joystick_Z_Mode) {
        /* Merge: '<S15>/Merge3' incorporates:
         *  Constant: '<S360>/Constant3'
         */
        Code_Gen_Model_B.Translation_Angle = -1.5707963267948966;
      } else {
        /* Merge: '<S15>/Merge3' incorporates:
         *  Constant: '<S360>/Constant4'
         */
        Code_Gen_Model_B.Translation_Angle = 0.0;
      }

      /* End of Switch: '<S360>/Switch5' */
    } else if (rtb_Compare_c4) {
      /* Switch: '<S360>/Switch6' incorporates:
       *  Constant: '<S360>/Constant'
       *  Constant: '<S360>/Constant1'
       *  Inport: '<Root>/IsBlueAlliance'
       *  Switch: '<S360>/Switch4'
       */
      if (Code_Gen_Model_U.IsBlueAlliance != 0.0) {
        tmp = 0.0;
      } else {
        tmp = 3.1415926535897931;
      }

      /* Merge: '<S15>/Merge3' incorporates:
       *  Sum: '<S360>/Add1'
       *  Switch: '<S360>/Switch4'
       *  Switch: '<S360>/Switch6'
       *  Trigonometry: '<S360>/Atan1'
       */
      Code_Gen_Model_B.Translation_Angle = rt_atan2d_snf
        (Code_Gen_Model_B.AT_Error_Y, Code_Gen_Model_B.AT_Error_X) + tmp;
    } else {
      /* Merge: '<S15>/Merge3' incorporates:
       *  Switch: '<S360>/Switch4'
       *  Trigonometry: '<S360>/Atan2'
       */
      Code_Gen_Model_B.Translation_Angle = rt_atan2d_snf(rtb_Switch1_p2,
        rtb_Switch2);
    }

    /* End of Switch: '<S360>/Switch1' */

    /* Switch: '<S21>/Switch' incorporates:
     *  Constant: '<S21>/Constant5'
     *  Constant: '<S21>/Constant7'
     *  DataTypeConversion: '<S21>/Data Type Conversion'
     *  Switch: '<S360>/Switch3'
     */
    if (TEST_Swerve_Mode_Override_Flag != 0.0) {
      rtb_Is_Absolute_Translation_g = (TEST_Swerve_Mode_Translation != 0.0);
    } else {
      rtb_Is_Absolute_Translation_g = !rtb_Relative_Translation_Flag;
    }

    /* End of Switch: '<S21>/Switch' */

    /* DeadZone: '<S359>/Dead Zone' */
    if (Code_Gen_Model_B.Steer_Joystick_Z > Twist_Deadzone_pos) {
      tmp = Code_Gen_Model_B.Steer_Joystick_Z - Twist_Deadzone_pos;
    } else if (Code_Gen_Model_B.Steer_Joystick_Z >= Twist_Deadzone_neg) {
      tmp = 0.0;
    } else {
      tmp = Code_Gen_Model_B.Steer_Joystick_Z - Twist_Deadzone_neg;
    }

    /* Sum: '<S359>/Add' incorporates:
     *  Constant: '<S359>/Constant'
     *  Constant: '<S359>/Constant1'
     *  DeadZone: '<S359>/Dead Zone'
     *  Lookup_n-D: '<S359>/Modulation_Str_Y_Rel'
     *  Product: '<S359>/Product'
     *  Product: '<S359>/Product1'
     *  SignalConversion: '<S12>/Signal Copy5'
     */
    rtb_thetay_n = (look1_binlcpw(Code_Gen_Model_B.Steer_Joystick_Y,
      Code_Gen_Model_ConstP.Modulation_Str_Y_Rel_bp01Data,
      Code_Gen_Model_ConstP.Modulation_Str_Y_Rel_tableData, 20U) *
                    Steering_Relative_Gain) + (tmp * Steering_Twist_Gain);

    /* RelationalOperator: '<S361>/Compare' incorporates:
     *  Constant: '<S361>/Constant'
     */
    rtb_FixPtRelationalOperator = (rtb_thetay_n == 0.0);

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

    /* Logic: '<S356>/Logical Operator11' */
    rtb_FixPtRelationalOperator_ea = ((Code_Gen_Model_B.Align_Amp) ||
      (Code_Gen_Model_B.Align_Speaker));

    /* RelationalOperator: '<S366>/FixPt Relational Operator' incorporates:
     *  UnitDelay: '<S366>/Delay Input1'
     *
     * Block description for '<S366>/Delay Input1':
     *
     *  Store in Global RAM
     */
    rtb_FixPtRelationalOperator_fl = (((int32_T)rtb_FixPtRelationalOperator_ea) >
      ((int32_T)Code_Gen_Model_DW.DelayInput1_DSTATE_f));

    /* Logic: '<S359>/AND2' incorporates:
     *  RelationalOperator: '<S362>/FixPt Relational Operator'
     *  RelationalOperator: '<S363>/FixPt Relational Operator'
     *  RelationalOperator: '<S364>/FixPt Relational Operator'
     *  RelationalOperator: '<S365>/FixPt Relational Operator'
     *  UnitDelay: '<S362>/Delay Input1'
     *  UnitDelay: '<S363>/Delay Input1'
     *  UnitDelay: '<S364>/Delay Input1'
     *  UnitDelay: '<S365>/Delay Input1'
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
     *
     * Block description for '<S365>/Delay Input1':
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

    /* Logic: '<S359>/AND1' incorporates:
     *  Logic: '<S359>/AND3'
     *  Logic: '<S359>/AND7'
     *  UnitDelay: '<S359>/Unit Delay2'
     */
    rtb_AND1 = ((rtb_FixPtRelationalOperator && (!rtb_FixPtRelationalOperator_fl))
                && (rtb_AND2 || (Code_Gen_Model_DW.UnitDelay2_DSTATE)));

    /* Logic: '<S359>/AND4' incorporates:
     *  Logic: '<S359>/AND5'
     *  Logic: '<S359>/AND8'
     *  UnitDelay: '<S359>/Unit Delay4'
     */
    rtb_FixPtRelationalOperator_fl = ((rtb_FixPtRelationalOperator && (!rtb_AND2))
      && (rtb_FixPtRelationalOperator_fl || (Code_Gen_Model_DW.UnitDelay4_DSTATE)));

    /* Logic: '<S359>/AND6' */
    Code_Gen_Model_B.Steering_Abs_Angle_Active = (rtb_AND1 ||
      rtb_FixPtRelationalOperator_fl);

    /* Switch: '<S359>/Switch8' incorporates:
     *  Constant: '<S368>/Constant'
     *  Logic: '<S359>/AND9'
     *  RelationalOperator: '<S367>/FixPt Relational Operator'
     *  RelationalOperator: '<S368>/Compare'
     *  UnitDelay: '<S17>/Unit Delay'
     *  UnitDelay: '<S367>/Delay Input1'
     *
     * Block description for '<S367>/Delay Input1':
     *
     *  Store in Global RAM
     */
    if (((Code_Gen_Model_B.Steering_Abs_Angle_Active) || (((int32_T)
           rtb_FixPtRelationalOperator) > ((int32_T)
           Code_Gen_Model_DW.DelayInput1_DSTATE_jp))) ||
        (Code_Gen_Model_B.Active_GameState != 2)) {
      /* Switch: '<S359>/Switch8' */
      Code_Gen_Model_B.Steering_Abs_Gyro_Latch = Code_Gen_Model_B.Gyro_Angle_rad;
    } else {
      /* Switch: '<S359>/Switch8' incorporates:
       *  UnitDelay: '<S359>/Unit Delay3'
       */
      Code_Gen_Model_B.Steering_Abs_Gyro_Latch =
        Code_Gen_Model_DW.UnitDelay3_DSTATE;
    }

    /* End of Switch: '<S359>/Switch8' */

    /* Switch: '<S359>/Switch2' */
    if (Code_Gen_Model_B.Steering_Abs_Angle_Active) {
      /* Switch: '<S359>/Switch2' incorporates:
       *  Constant: '<S359>/Constant2'
       */
      Code_Gen_Model_B.Steering_Abs_Gyro = 0.0;
    } else {
      /* Switch: '<S359>/Switch2' */
      Code_Gen_Model_B.Steering_Abs_Gyro =
        Code_Gen_Model_B.Steering_Abs_Gyro_Latch;
    }

    /* End of Switch: '<S359>/Switch2' */

    /* Logic: '<S356>/Logical Operator' incorporates:
     *  Logic: '<S356>/Logical Operator1'
     *  Logic: '<S356>/Logical Operator13'
     *  UnitDelay: '<S356>/Unit Delay'
     */
    Code_Gen_Model_B.previous_call_was_for_speaker =
      ((!Code_Gen_Model_B.Align_Amp) && ((Code_Gen_Model_B.Align_Speaker) ||
        (Code_Gen_Model_DW.UnitDelay_DSTATE_ho)));

    /* Switch: '<S356>/Switch2' incorporates:
     *  Switch: '<S356>/Switch4'
     *  Switch: '<S356>/Switch5'
     */
    if (Code_Gen_Model_B.previous_call_was_for_speaker) {
      /* Switch: '<S356>/Switch2' incorporates:
       *  Constant: '<S21>/Constant'
       */
      Code_Gen_Model_B.AT_Target_Angle = 0.0;
    } else if (rtb_AT_Tag_5_Active) {
      /* Switch: '<S356>/Switch4' incorporates:
       *  Constant: '<S356>/Constant14'
       *  Switch: '<S356>/Switch2'
       */
      Code_Gen_Model_B.AT_Target_Angle = AT_Target_Tag_5_Field_Angle;
    } else if (rtb_Swerve_Motors_Disabled) {
      /* Switch: '<S356>/Switch5' incorporates:
       *  Constant: '<S356>/Constant13'
       *  Switch: '<S356>/Switch2'
       *  Switch: '<S356>/Switch4'
       */
      Code_Gen_Model_B.AT_Target_Angle = AT_Target_Tag_6_Field_Angle;
    } else {
      /* Switch: '<S356>/Switch2' incorporates:
       *  Switch: '<S356>/Switch10'
       *  Switch: '<S356>/Switch4'
       *  Switch: '<S356>/Switch5'
       *  Switch: '<S356>/Switch6'
       *  Switch: '<S356>/Switch7'
       *  Switch: '<S356>/Switch8'
       *  Switch: '<S356>/Switch9'
       *  UnitDelay: '<S356>/Unit Delay1'
       */
      Code_Gen_Model_B.AT_Target_Angle = Code_Gen_Model_DW.UnitDelay1_DSTATE_e;
    }

    /* End of Switch: '<S356>/Switch2' */

    /* Switch: '<S359>/Switch4' incorporates:
     *  Constant: '<S359>/Constant5'
     *  Switch: '<S359>/Switch1'
     *  Switch: '<S359>/Switch5'
     *  Switch: '<S359>/Switch6'
     *  Switch: '<S359>/Switch7'
     */
    if (Code_Gen_Model_B.Face_Away_Driver) {
      rtb_Switch4 = 0.0;
    } else if (Code_Gen_Model_B.Face_Left_Driver) {
      /* Switch: '<S359>/Switch5' incorporates:
       *  Constant: '<S359>/Constant6'
       */
      rtb_Switch4 = 1.5707963267948966;
    } else if (Code_Gen_Model_B.Face_Toward_Driver) {
      /* Switch: '<S359>/Switch6' incorporates:
       *  Constant: '<S359>/Constant7'
       *  Switch: '<S359>/Switch5'
       */
      rtb_Switch4 = 3.1415926535897931;
    } else if (Code_Gen_Model_B.Face_Right_Driver) {
      /* Switch: '<S359>/Switch7' incorporates:
       *  Constant: '<S359>/Constant8'
       *  Switch: '<S359>/Switch5'
       *  Switch: '<S359>/Switch6'
       */
      rtb_Switch4 = 4.71238898038469;
    } else if (rtb_FixPtRelationalOperator_fl) {
      /* Switch: '<S359>/Switch1' incorporates:
       *  Switch: '<S359>/Switch5'
       *  Switch: '<S359>/Switch6'
       *  Switch: '<S359>/Switch7'
       */
      rtb_Switch4 = Code_Gen_Model_B.AT_Target_Angle;
    } else {
      /* Switch: '<S359>/Switch6' incorporates:
       *  Switch: '<S359>/Switch5'
       *  Switch: '<S359>/Switch7'
       *  UnitDelay: '<S359>/Unit Delay1'
       */
      rtb_Switch4 = Code_Gen_Model_DW.UnitDelay1_DSTATE_j;
    }

    /* End of Switch: '<S359>/Switch4' */

    /* Switch: '<S359>/Switch3' */
    if (Code_Gen_Model_B.Steering_Abs_Angle_Active) {
      /* Switch: '<S359>/Switch3' */
      Code_Gen_Model_B.Steering_Abs_Angle = rtb_Switch4;
    } else {
      /* Switch: '<S359>/Switch3' incorporates:
       *  Constant: '<S359>/Constant3'
       */
      Code_Gen_Model_B.Steering_Abs_Angle = 0.0;
    }

    /* End of Switch: '<S359>/Switch3' */

    /* Merge: '<S15>/Merge1' incorporates:
     *  Sum: '<S359>/Add1'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd = Code_Gen_Model_B.Steering_Abs_Angle +
      Code_Gen_Model_B.Steering_Abs_Gyro;

    /* Merge: '<S15>/Merge2' incorporates:
     *  SignalConversion: '<S359>/Signal Copy'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd = rtb_thetay_n;

    /* Switch: '<S369>/Switch1' incorporates:
     *  Constant: '<S369>/Constant'
     *  Constant: '<S369>/Constant1'
     */
    if (Code_Gen_Model_B.Is_Boosting) {
      rtb_Uk1_iw = Boost_Trigger_High_Speed;
    } else {
      rtb_Uk1_iw = Boost_Trigger_Low_Speed;
    }

    /* End of Switch: '<S369>/Switch1' */

    /* Switch: '<S376>/Init' incorporates:
     *  UnitDelay: '<S376>/FixPt Unit Delay1'
     *  UnitDelay: '<S376>/FixPt Unit Delay2'
     */
    if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_a != 0) {
      rtb_thetay_n = rtb_Uk1_iw;
    } else {
      rtb_thetay_n = Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_f;
    }

    /* End of Switch: '<S376>/Init' */

    /* Sum: '<S374>/Sum1' */
    rtb_Uk1_iw -= rtb_thetay_n;

    /* Switch: '<S375>/Switch2' incorporates:
     *  Constant: '<S373>/Constant1'
     *  Constant: '<S373>/Constant3'
     *  RelationalOperator: '<S375>/LowerRelop1'
     *  RelationalOperator: '<S375>/UpperRelop'
     *  Switch: '<S375>/Switch'
     */
    if (rtb_Uk1_iw > Boost_Trigger_Increasing_Limit) {
      rtb_Uk1_iw = Boost_Trigger_Increasing_Limit;
    } else if (rtb_Uk1_iw < Boost_Trigger_Decreasing_Limit) {
      /* Switch: '<S375>/Switch' incorporates:
       *  Constant: '<S373>/Constant1'
       */
      rtb_Uk1_iw = Boost_Trigger_Decreasing_Limit;
    }

    /* End of Switch: '<S375>/Switch2' */

    /* Sum: '<S374>/Sum' */
    rtb_Sum_jt = rtb_Uk1_iw + rtb_thetay_n;

    /* Switch: '<S360>/Switch' incorporates:
     *  Switch: '<S360>/Switch2'
     */
    if (rtb_Relative_Translation_Flag) {
      /* Merge: '<S15>/Merge4' incorporates:
       *  Gain: '<S360>/Gain'
       */
      Code_Gen_Model_B.Translation_Speed = Translation_Twist_Gain * rtb_rx;
    } else if (rtb_Compare_c4) {
      /* Merge: '<S15>/Merge4' incorporates:
       *  Gain: '<S360>/Gain2'
       *  Math: '<S360>/Magnitude1'
       *  Switch: '<S360>/Switch2'
       */
      Code_Gen_Model_B.Translation_Speed = AT_XY_Control_Gain * rt_hypotd_snf
        (Code_Gen_Model_B.AT_Error_X, Code_Gen_Model_B.AT_Error_Y);
    } else {
      /* Product: '<S369>/Product' incorporates:
       *  Switch: '<S360>/Switch2'
       */
      rtb_Add_ov = rtb_thetay * rtb_Sum_jt;

      /* Saturate: '<S369>/Saturation' incorporates:
       *  Switch: '<S360>/Switch2'
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

      /* End of Saturate: '<S369>/Saturation' */
    }

    /* End of Switch: '<S360>/Switch' */

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
    rtb_rx_g = 0.0;

    /* SignalConversion generated from: '<S21>/Reset_Wheel_Offsets' incorporates:
     *  Constant: '<S21>/Constant13'
     */
    rtb_thetay_a = 0.0;

    /* SignalConversion generated from: '<S21>/Disable_Wheels' incorporates:
     *  Constant: '<S21>/Constant14'
     */
    rtb_Uk1_iw = 0.0;

    /* SignalConversion generated from: '<S21>/Swerve_Motors_Disabled' incorporates:
     *  Constant: '<S21>/Constant2'
     */
    rtb_Swerve_Motors_Disabled = false;

    /* Merge: '<S15>/Merge12' incorporates:
     *  Constant: '<S358>/Constant5'
     *  SignalConversion generated from: '<S21>/Reefscape_Motors_Enable'
     */
    Code_Gen_Model_B.Reefscape_Motors_Enable = true;

    /* RelationalOperator: '<S379>/FixPt Relational Operator' incorporates:
     *  Inport: '<Root>/Gamepad_B1_A'
     *  UnitDelay: '<S379>/Delay Input1'
     *
     * Block description for '<S379>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_B.FixPtRelationalOperator = (Code_Gen_Model_U.Gamepad_B1_A >
      Code_Gen_Model_DW.DelayInput1_DSTATE_c);

    /* RelationalOperator: '<S380>/FixPt Relational Operator' incorporates:
     *  Inport: '<Root>/Gamepad_B2_B'
     *  UnitDelay: '<S380>/Delay Input1'
     *
     * Block description for '<S380>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_B.FixPtRelationalOperator_n = (Code_Gen_Model_U.Gamepad_B2_B >
      Code_Gen_Model_DW.DelayInput1_DSTATE_nr);

    /* RelationalOperator: '<S381>/FixPt Relational Operator' incorporates:
     *  Inport: '<Root>/Gamepad_B3_X'
     *  UnitDelay: '<S381>/Delay Input1'
     *
     * Block description for '<S381>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_B.FixPtRelationalOperator_k = (Code_Gen_Model_U.Gamepad_B3_X >
      Code_Gen_Model_DW.DelayInput1_DSTATE_ez);

    /* RelationalOperator: '<S382>/FixPt Relational Operator' incorporates:
     *  Inport: '<Root>/Gamepad_B4_Y'
     *  UnitDelay: '<S382>/Delay Input1'
     *
     * Block description for '<S382>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_B.FixPtRelationalOperator_d = (Code_Gen_Model_U.Gamepad_B4_Y >
      Code_Gen_Model_DW.DelayInput1_DSTATE_nh);

    /* RelationalOperator: '<S383>/FixPt Relational Operator' incorporates:
     *  Inport: '<Root>/Gamepad_Start'
     *  UnitDelay: '<S383>/Delay Input1'
     *
     * Block description for '<S383>/Delay Input1':
     *
     *  Store in Global RAM
     */
    rtb_AT_Tag_5_Active = (Code_Gen_Model_U.Gamepad_Start >
      Code_Gen_Model_DW.DelayInput1_DSTATE_i);

    /* RelationalOperator: '<S384>/FixPt Relational Operator' incorporates:
     *  Inport: '<Root>/Gamepad_RB'
     *  UnitDelay: '<S384>/Delay Input1'
     *
     * Block description for '<S384>/Delay Input1':
     *
     *  Store in Global RAM
     */
    rtb_Compare_c4 = (Code_Gen_Model_U.Gamepad_RB >
                      Code_Gen_Model_DW.DelayInput1_DSTATE_pd);

    /* RelationalOperator: '<S388>/FixPt Relational Operator' incorporates:
     *  Inport: '<Root>/Gamepad_RT'
     *  UnitDelay: '<S388>/Delay Input1'
     *
     * Block description for '<S388>/Delay Input1':
     *
     *  Store in Global RAM
     */
    rtb_Relative_Translation_Flag = (Code_Gen_Model_U.Gamepad_RT >
      Code_Gen_Model_DW.DelayInput1_DSTATE_j);

    /* RelationalOperator: '<S385>/FixPt Relational Operator' incorporates:
     *  UnitDelay: '<S385>/Delay Input1'
     *
     * Block description for '<S385>/Delay Input1':
     *
     *  Store in Global RAM
     */
    rtb_AND2 = (((int32_T)rtb_Gamepad_POV_Up) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_oy));

    /* RelationalOperator: '<S386>/FixPt Relational Operator' incorporates:
     *  UnitDelay: '<S386>/Delay Input1'
     *
     * Block description for '<S386>/Delay Input1':
     *
     *  Store in Global RAM
     */
    FixPtRelationalOperator_m = (((int32_T)rtb_Compare_a) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_fx));

    /* DeadZone: '<S358>/Dead Zone' incorporates:
     *  Inport: '<Root>/Gamepad_Stick_Left_Y'
     */
    if (Code_Gen_Model_U.Gamepad_Stick_Left_Y > 0.1) {
      /* DeadZone: '<S358>/Dead Zone' */
      Code_Gen_Model_B.DeadZone = Code_Gen_Model_U.Gamepad_Stick_Left_Y - 0.1;
    } else if (Code_Gen_Model_U.Gamepad_Stick_Left_Y >= -0.1) {
      /* DeadZone: '<S358>/Dead Zone' */
      Code_Gen_Model_B.DeadZone = 0.0;
    } else {
      /* DeadZone: '<S358>/Dead Zone' */
      Code_Gen_Model_B.DeadZone = Code_Gen_Model_U.Gamepad_Stick_Left_Y - -0.1;
    }

    /* End of DeadZone: '<S358>/Dead Zone' */

    /* DeadZone: '<S358>/Dead Zone1' incorporates:
     *  Inport: '<Root>/Gamepad_Stick_Right_Y'
     */
    if (Code_Gen_Model_U.Gamepad_Stick_Right_Y > 0.1) {
      /* DeadZone: '<S358>/Dead Zone1' */
      Code_Gen_Model_B.DeadZone1 = Code_Gen_Model_U.Gamepad_Stick_Right_Y - 0.1;
    } else if (Code_Gen_Model_U.Gamepad_Stick_Right_Y >= -0.1) {
      /* DeadZone: '<S358>/Dead Zone1' */
      Code_Gen_Model_B.DeadZone1 = 0.0;
    } else {
      /* DeadZone: '<S358>/Dead Zone1' */
      Code_Gen_Model_B.DeadZone1 = Code_Gen_Model_U.Gamepad_Stick_Right_Y - -0.1;
    }

    /* End of DeadZone: '<S358>/Dead Zone1' */

    /* Chart: '<S358>/Reefscape_Chart' incorporates:
     *  Constant: '<S6>/Constant'
     *  Inport: '<Root>/Algae_Limit_Switch'
     *  Inport: '<Root>/Gamepad_LT'
     *  RelationalOperator: '<S387>/FixPt Relational Operator'
     *  RelationalOperator: '<S6>/Compare'
     *  UnitDelay: '<S387>/Delay Input1'
     *
     * Block description for '<S387>/Delay Input1':
     *
     *  Store in Global RAM
     */
    if (Code_Gen_Model_DW.is_active_c4_Code_Gen_Model == 0U) {
      Code_Gen_Model_DW.is_active_c4_Code_Gen_Model = 1U;
      Code_Gen_Model_DW.is_Coral = Code__IN_Elevator_Height_Bottom;
      Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Bottom;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = 80.0;
      Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
      Code_Gen_Model_DW.is_Algae = Code_Gen_Model_IN_Off;

      /* SignalConversion generated from: '<S21>/Algae_Wheel_Outside_DutyCycle' */
      rtb_rx = 0.0;

      /* SignalConversion generated from: '<S21>/Algae_Wheel_Inside_DutyCycle' */
      rtb_thetay_n = 0.0;
    } else {
      Code_Gen_Model_Coral(&Compare, &rtb_AT_Tag_5_Active, &rtb_Compare_c4,
                           &rtb_AND2, &FixPtRelationalOperator_m);
      switch (Code_Gen_Model_DW.is_Algae) {
       case Code_Gen_Model_IN_Algae_Hold:
        /* SignalConversion generated from: '<S21>/Algae_Wheel_Outside_DutyCycle' */
        rtb_rx = Algae_Hold_DC;

        /* SignalConversion generated from: '<S21>/Algae_Wheel_Inside_DutyCycle' */
        rtb_thetay_n = Algae_Hold_DC;
        if (rtb_Relative_Translation_Flag) {
          Code_Gen_Model_DW.is_Algae = Code_Gen_Mode_IN_Algae_Push_Out;

          /* SignalConversion generated from: '<S21>/Algae_Wheel_Outside_DutyCycle' */
          rtb_rx = Algae_Push_Out_DC;

          /* SignalConversion generated from: '<S21>/Algae_Wheel_Inside_DutyCycle' */
          rtb_thetay_n = Algae_Push_Out_DC;
          Code_Gen_Model_DW.timer = 0.0;
        }
        break;

       case Code_Gen_Model_IN_Algae_Pull_In:
        /* SignalConversion generated from: '<S21>/Algae_Wheel_Outside_DutyCycle' */
        rtb_rx = Algae_Pull_In_DC;

        /* SignalConversion generated from: '<S21>/Algae_Wheel_Inside_DutyCycle' */
        rtb_thetay_n = Algae_Pull_In_DC;
        if (Code_Gen_Model_U.Algae_Limit_Switch != 0.0) {
          Code_Gen_Model_DW.is_Algae = Code_Gen_Model_IN_Algae_Hold;

          /* SignalConversion generated from: '<S21>/Algae_Wheel_Outside_DutyCycle' */
          rtb_rx = Algae_Hold_DC;

          /* SignalConversion generated from: '<S21>/Algae_Wheel_Inside_DutyCycle' */
          rtb_thetay_n = Algae_Hold_DC;
        } else if (rtb_Relative_Translation_Flag) {
          Code_Gen_Model_DW.is_Algae = Code_Gen_Model_IN_Off;

          /* SignalConversion generated from: '<S21>/Algae_Wheel_Outside_DutyCycle' */
          rtb_rx = 0.0;

          /* SignalConversion generated from: '<S21>/Algae_Wheel_Inside_DutyCycle' */
          rtb_thetay_n = 0.0;
        }
        break;

       case Code_Gen_Mode_IN_Algae_Push_Out:
        /* SignalConversion generated from: '<S21>/Algae_Wheel_Outside_DutyCycle' */
        rtb_rx = Algae_Push_Out_DC;

        /* SignalConversion generated from: '<S21>/Algae_Wheel_Inside_DutyCycle' */
        rtb_thetay_n = Algae_Push_Out_DC;
        if (Code_Gen_Model_DW.timer >= Algae_Eject_Time) {
          Code_Gen_Model_DW.is_Algae = Code_Gen_Model_IN_Off;

          /* SignalConversion generated from: '<S21>/Algae_Wheel_Outside_DutyCycle' */
          rtb_rx = 0.0;

          /* SignalConversion generated from: '<S21>/Algae_Wheel_Inside_DutyCycle' */
          rtb_thetay_n = 0.0;
        } else {
          Code_Gen_Model_DW.timer += 0.02;
        }
        break;

       default:
        /* SignalConversion generated from: '<S21>/Algae_Wheel_Outside_DutyCycle' */
        /* case IN_Off: */
        rtb_rx = 0.0;

        /* SignalConversion generated from: '<S21>/Algae_Wheel_Inside_DutyCycle' */
        rtb_thetay_n = 0.0;
        if (Code_Gen_Model_U.Gamepad_LT > Code_Gen_Model_DW.DelayInput1_DSTATE_o)
        {
          Code_Gen_Model_DW.is_Algae = Code_Gen_Model_IN_Algae_Pull_In;

          /* SignalConversion generated from: '<S21>/Algae_Wheel_Outside_DutyCycle' */
          rtb_rx = Algae_Pull_In_DC;

          /* SignalConversion generated from: '<S21>/Algae_Wheel_Inside_DutyCycle' */
          rtb_thetay_n = Algae_Pull_In_DC;
        }
        break;
      }
    }

    /* End of Chart: '<S358>/Reefscape_Chart' */

    /* Merge: '<S15>/Merge13' incorporates:
     *  SignalConversion generated from: '<S21>/Coral_Arm_Angle_Desired'
     */
    Code_Gen_Model_B.Coral_Arm_Angle_Desired =
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_o;

    /* SignalConversion generated from: '<S21>/Coral_Wheel_DutyCycle' */
    rtb_thetay = Code_Gen_Model_B.Coral_Wheel_DC;

    /* Merge: '<S15>/Merge11' incorporates:
     *  SignalConversion generated from: '<S21>/Elevator_Height_Desired'
     */
    Code_Gen_Model_B.Elevator_Height_Desired =
      Code_Gen_Model_B.Elevator_Height_Desired_m;

    /* Merge: '<S15>/Merge21' incorporates:
     *  SignalConversion generated from: '<S21>/Elevator_LowerPickup_Reset'
     */
    Code_Gen_Model_B.Elevator_LowerPickup_Reset_tp =
      Code_Gen_Model_B.Elevator_LowerPickup_Reset;

    /* Update for UnitDelay: '<S372>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_l = rtb_Switch1_p2;

    /* Update for UnitDelay: '<S372>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_p = rtb_Switch2;

    /* Update for UnitDelay: '<S367>/Delay Input1'
     *
     * Block description for '<S367>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_jp = rtb_FixPtRelationalOperator;

    /* Update for UnitDelay: '<S366>/Delay Input1'
     *
     * Block description for '<S366>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_f = rtb_FixPtRelationalOperator_ea;

    /* Update for UnitDelay: '<S362>/Delay Input1'
     *
     * Block description for '<S362>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_m = Code_Gen_Model_B.Face_Away_Driver;

    /* Update for UnitDelay: '<S363>/Delay Input1'
     *
     * Block description for '<S363>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_k = Code_Gen_Model_B.Face_Left_Driver;

    /* Update for UnitDelay: '<S364>/Delay Input1'
     *
     * Block description for '<S364>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_g = Code_Gen_Model_B.Face_Toward_Driver;

    /* Update for UnitDelay: '<S365>/Delay Input1'
     *
     * Block description for '<S365>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_g2 = Code_Gen_Model_B.Face_Right_Driver;

    /* Update for UnitDelay: '<S359>/Unit Delay2' */
    Code_Gen_Model_DW.UnitDelay2_DSTATE = rtb_AND1;

    /* Update for UnitDelay: '<S359>/Unit Delay4' */
    Code_Gen_Model_DW.UnitDelay4_DSTATE = rtb_FixPtRelationalOperator_fl;

    /* Update for UnitDelay: '<S359>/Unit Delay3' */
    Code_Gen_Model_DW.UnitDelay3_DSTATE =
      Code_Gen_Model_B.Steering_Abs_Gyro_Latch;

    /* Update for UnitDelay: '<S356>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_ho =
      Code_Gen_Model_B.previous_call_was_for_speaker;

    /* Update for UnitDelay: '<S356>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_e = Code_Gen_Model_B.AT_Target_Angle;

    /* Update for UnitDelay: '<S359>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_j = rtb_Switch4;

    /* Update for UnitDelay: '<S376>/FixPt Unit Delay2' incorporates:
     *  Constant: '<S376>/FixPt Constant'
     */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_a = 0U;

    /* Update for UnitDelay: '<S376>/FixPt Unit Delay1' */
    Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_f = rtb_Sum_jt;

    /* Update for UnitDelay: '<S379>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_B1_A'
     *
     * Block description for '<S379>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_c = Code_Gen_Model_U.Gamepad_B1_A;

    /* Update for UnitDelay: '<S380>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_B2_B'
     *
     * Block description for '<S380>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_nr = Code_Gen_Model_U.Gamepad_B2_B;

    /* Update for UnitDelay: '<S381>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_B3_X'
     *
     * Block description for '<S381>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_ez = Code_Gen_Model_U.Gamepad_B3_X;

    /* Update for UnitDelay: '<S382>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_B4_Y'
     *
     * Block description for '<S382>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_nh = Code_Gen_Model_U.Gamepad_B4_Y;

    /* Update for UnitDelay: '<S383>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_Start'
     *
     * Block description for '<S383>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_i = Code_Gen_Model_U.Gamepad_Start;

    /* Update for UnitDelay: '<S384>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_RB'
     *
     * Block description for '<S384>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_pd = Code_Gen_Model_U.Gamepad_RB;

    /* Update for UnitDelay: '<S387>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_LT'
     *
     * Block description for '<S387>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_o = Code_Gen_Model_U.Gamepad_LT;

    /* Update for UnitDelay: '<S388>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_RT'
     *
     * Block description for '<S388>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_j = Code_Gen_Model_U.Gamepad_RT;

    /* Update for UnitDelay: '<S385>/Delay Input1'
     *
     * Block description for '<S385>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_oy = rtb_Gamepad_POV_Up;

    /* Update for UnitDelay: '<S386>/Delay Input1'
     *
     * Block description for '<S386>/Delay Input1':
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
    rtb_thetay = 0.0;

    /* SignalConversion generated from: '<S22>/Algae_Wheel_Outside_DutyCycle' incorporates:
     *  Constant: '<S22>/Constant17'
     */
    rtb_rx = 0.0;

    /* SignalConversion generated from: '<S22>/Algae_Wheel_Inside_DutyCycle' incorporates:
     *  Constant: '<S22>/Constant18'
     */
    rtb_thetay_n = 0.0;

    /* Merge: '<S15>/Merge21' incorporates:
     *  Constant: '<S22>/Constant19'
     *  SignalConversion generated from: '<S22>/Elevator_LowerPickup_Reset'
     */
    Code_Gen_Model_B.Elevator_LowerPickup_Reset_tp = false;

    /* DataTypeConversion: '<S22>/Cast To Boolean1' */
    rtb_rx_g = rtb_FixPtRelationalOperator;

    /* DataTypeConversion: '<S22>/Cast To Boolean3' */
    rtb_Uk1_iw = rtb_FixPtRelationalOperator_ea;

    /* DataTypeConversion: '<S22>/Cast To Boolean2' incorporates:
     *  Inport: '<Root>/Joystick_Left_B12'
     *  RelationalOperator: '<S73>/FixPt Relational Operator'
     *  UnitDelay: '<S73>/Delay Input1'
     *
     * Block description for '<S73>/Delay Input1':
     *
     *  Store in Global RAM
     */
    rtb_thetay_a = (Code_Gen_Model_U.Joystick_Left_B12 >
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
    tmp = 0.0;
  } else {
    tmp = 3.1415926535897931;
  }

  /* Sum: '<S11>/Add' incorporates:
   *  Switch: '<S11>/Switch'
   */
  Code_Gen_Model_B.Gyro_Angle_Field_rad = Code_Gen_Model_B.Gyro_Angle_rad + tmp;

  /* If: '<S18>/If' incorporates:
   *  Constant: '<S141>/Constant'
   *  Merge: '<S18>/Merge'
   *  Merge: '<S18>/Merge1'
   *  Merge: '<S18>/Merge2'
   *  Merge: '<S18>/Merge3'
   *  Merge: '<S18>/Merge4'
   *  Merge: '<S18>/Merge5'
   *  Merge: '<S18>/Merge7'
   *  Merge: '<S18>/Merge8'
   *  SignalConversion generated from: '<S141>/Robot_Reached_Destination'
   */
  rtPrevAction = Code_Gen_Model_DW.If_ActiveSubsystem;
  Code_Gen_Model_DW.If_ActiveSubsystem = 1;
  if ((rtPrevAction != 1) && (rtPrevAction == 0)) {
    /* Disable for If: '<S147>/If' */
    if (Code_Gen_Model_DW.If_ActiveSubsystem_h == 0) {
      /* Disable for If: '<S150>/If' */
      if (Code_Gen_Model_DW.If_ActiveSubsystem_o == 0) {
        /* Disable for If: '<S152>/If' */
        Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;
      }

      Code_Gen_Model_DW.If_ActiveSubsystem_o = -1;

      /* End of Disable for If: '<S150>/If' */
    }

    Code_Gen_Model_DW.If_ActiveSubsystem_h = -1;

    /* End of Disable for If: '<S147>/If' */
  }

  /* Outputs for IfAction SubSystem: '<S18>/Pass Through' incorporates:
   *  ActionPort: '<S141>/Action Port'
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

  /* UnitDelay: '<S295>/Unit Delay' */
  rtb_Merge1 = Code_Gen_Model_B.Translation_Speed_RL;

  /* Signum: '<S295>/Sign2' */
  if (rtIsNaN(rtb_Merge1)) {
    tmp = (rtNaN);
  } else if (rtb_Merge1 < 0.0) {
    tmp = -1.0;
  } else {
    tmp = (rtb_Merge1 > 0.0);
  }

  /* Signum: '<S295>/Sign1' */
  if (rtIsNaN(Code_Gen_Model_B.Translation_Speed_SPF)) {
    rtb_Rotationmatrixfromlocalto_0 = (rtNaN);
  } else if (Code_Gen_Model_B.Translation_Speed_SPF < 0.0) {
    rtb_Rotationmatrixfromlocalto_0 = -1.0;
  } else {
    rtb_Rotationmatrixfromlocalto_0 = (Code_Gen_Model_B.Translation_Speed_SPF >
      0.0);
  }

  /* Product: '<S295>/Product1' incorporates:
   *  Signum: '<S295>/Sign1'
   *  Signum: '<S295>/Sign2'
   */
  tmp *= rtb_Rotationmatrixfromlocalto_0;
  if (rtIsNaN(tmp)) {
    rtb_Num_Segments = 0;
  } else {
    rtb_Num_Segments = (int32_T)fmod(tmp, 256.0);
  }

  /* Switch: '<S295>/Switch' incorporates:
   *  Constant: '<S295>/Constant'
   *  Constant: '<S300>/Constant'
   *  Constant: '<S301>/Constant'
   *  Logic: '<S295>/or'
   *  Product: '<S295>/Product1'
   *  RelationalOperator: '<S300>/Compare'
   *  RelationalOperator: '<S301>/Compare'
   */
  if ((rtb_Merge1 == 0.0) || (((rtb_Num_Segments < 0) ? ((int32_T)((int8_T)
          (-((int8_T)((uint8_T)(-((real_T)rtb_Num_Segments))))))) :
        rtb_Num_Segments) > 0)) {
    rtb_rx_c = Code_Gen_Model_B.Translation_Speed_SPF;
  } else {
    rtb_rx_c = 0.0;
  }

  /* End of Switch: '<S295>/Switch' */

  /* RelationalOperator: '<S302>/Compare' incorporates:
   *  Constant: '<S302>/Constant'
   */
  rtb_Gamepad_POV_Up = (rtb_rx_c == 0.0);

  /* RelationalOperator: '<S303>/Compare' incorporates:
   *  Constant: '<S303>/Constant'
   */
  rtb_Compare_a = (rtb_rx_c > 0.0);

  /* Abs: '<S295>/Abs' incorporates:
   *  Sum: '<S295>/Subtract'
   */
  rtb_Merge1 = fabs(rtb_Merge1 - Code_Gen_Model_B.Translation_Speed_SPF);

  /* Switch: '<S295>/Switch5' incorporates:
   *  Constant: '<S295>/Constant1'
   *  Switch: '<S295>/Switch1'
   *  UnaryMinus: '<S295>/Unary Minus'
   */
  if (rtb_Gamepad_POV_Up) {
    /* SignalConversion generated from: '<S295>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S295>/Constant4'
     *  Constant: '<S295>/Constant6'
     */
    rtb_Akxhatkk1[0] = Translation_Speed_Approach_Zero_Final_Thresh;
    rtb_Akxhatkk1[1] = 1.0;

    /* SignalConversion generated from: '<S295>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S295>/Constant2'
     *  Constant: '<S295>/Constant5'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Translation_Speed_Approach_Zero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S295>/Lookup Table Dynamic' */
    /* Dynamic Look-Up Table Block: '<S295>/Lookup Table Dynamic'
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
    /* SignalConversion generated from: '<S295>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S295>/Constant10'
     *  Constant: '<S295>/Constant8'
     */
    rtb_Akxhatkk1[0] = Translation_Speed_NonZero_Final_Scale_Factor;
    rtb_Akxhatkk1[1] = 1.0;

    /* SignalConversion generated from: '<S295>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S295>/Constant7'
     *  Constant: '<S295>/Constant9'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Translation_Speed_NonZero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S295>/Lookup Table Dynamic1' */
    /* Dynamic Look-Up Table Block: '<S295>/Lookup Table Dynamic1'
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

    /* Switch: '<S295>/Switch3' incorporates:
     *  Constant: '<S295>/Constant1'
     *  Constant: '<S295>/Constant3'
     *  UnaryMinus: '<S295>/Unary Minus'
     */
    if (rtb_Compare_a) {
      tmp = Translation_Speed_Rate_Limit_Inc;
    } else {
      tmp = -Translation_Speed_Rate_Limit_Dec;
    }

    /* End of Switch: '<S295>/Switch3' */
  }

  /* End of Switch: '<S295>/Switch5' */

  /* Product: '<S295>/Product' incorporates:
   *  Switch: '<S295>/Switch1'
   */
  rtb_Switch2 = tmp * rtb_Switch1_p2;

  /* Switch: '<S306>/Init' incorporates:
   *  UnitDelay: '<S306>/FixPt Unit Delay1'
   *  UnitDelay: '<S306>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE != 0) {
    rtb_Merge1 = rtb_rx_c;
  } else {
    rtb_Merge1 = Code_Gen_Model_B.Translation_Speed_RL;
  }

  /* End of Switch: '<S306>/Init' */

  /* Sum: '<S304>/Sum1' */
  rtb_Switch4 = rtb_rx_c - rtb_Merge1;

  /* Switch: '<S305>/Switch2' incorporates:
   *  RelationalOperator: '<S305>/LowerRelop1'
   */
  if (!(rtb_Switch4 > rtb_Switch2)) {
    /* Switch: '<S295>/Switch2' incorporates:
     *  Constant: '<S295>/Constant1'
     *  Constant: '<S295>/Constant3'
     *  Switch: '<S295>/Switch4'
     *  UnaryMinus: '<S295>/Unary Minus1'
     */
    if (rtb_Gamepad_POV_Up) {
      tmp = Translation_Speed_Rate_Limit_Dec;
    } else if (rtb_Compare_a) {
      /* Switch: '<S295>/Switch4' incorporates:
       *  Constant: '<S295>/Constant1'
       */
      tmp = Translation_Speed_Rate_Limit_Dec;
    } else {
      tmp = -Translation_Speed_Rate_Limit_Inc;
    }

    /* Product: '<S295>/Product2' incorporates:
     *  Switch: '<S295>/Switch2'
     */
    rtb_Switch2 = tmp * rtb_Switch1_p2;

    /* Switch: '<S305>/Switch' incorporates:
     *  RelationalOperator: '<S305>/UpperRelop'
     */
    if (!(rtb_Switch4 < rtb_Switch2)) {
      rtb_Switch2 = rtb_Switch4;
    }

    /* End of Switch: '<S305>/Switch' */
  }

  /* End of Switch: '<S305>/Switch2' */

  /* Sum: '<S304>/Sum' */
  Code_Gen_Model_B.Translation_Speed_RL = rtb_Switch2 + rtb_Merge1;

  /* Switch: '<S298>/Switch' */
  if (Code_Gen_Model_B.Is_Absolute_Translation_SPF) {
    /* Switch: '<S298>/Switch' incorporates:
     *  Constant: '<S330>/Constant3'
     *  Constant: '<S330>/Constant4'
     *  Math: '<S330>/Math Function'
     *  Sum: '<S298>/Subtract'
     *  Sum: '<S330>/Add1'
     *  Sum: '<S330>/Add2'
     */
    Code_Gen_Model_B.Translation_Steering_Cmd = rt_modd_snf
      ((Code_Gen_Model_B.Translation_Angle_SPF - Code_Gen_Model_B.Gyro_Angle_SPF)
       + 3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;
  } else {
    /* Switch: '<S298>/Switch' */
    Code_Gen_Model_B.Translation_Steering_Cmd =
      Code_Gen_Model_B.Translation_Angle_SPF;
  }

  /* End of Switch: '<S298>/Switch' */

  /* Sum: '<S326>/Add1' incorporates:
   *  Constant: '<S326>/Constant3'
   *  Constant: '<S326>/Constant4'
   *  Math: '<S326>/Math Function'
   *  Sum: '<S325>/Sum'
   *  Sum: '<S326>/Add2'
   */
  rtb_Switch2 = rt_modd_snf((Code_Gen_Model_B.Steering_Abs_Cmd_SPF -
    Code_Gen_Model_B.Gyro_Angle_SPF) + 3.1415926535897931, 6.2831853071795862) -
    3.1415926535897931;

  /* Sum: '<S328>/Sum1' incorporates:
   *  Constant: '<S325>/Constant2'
   *  Product: '<S328>/Product'
   *  Sum: '<S328>/Sum'
   *  UnitDelay: '<S328>/Unit Delay1'
   */
  rtb_Merge1 = ((rtb_Switch2 - Code_Gen_Model_DW.UnitDelay1_DSTATE_i) *
                Steering_Heading_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_i;

  /* Product: '<S325>/Product' incorporates:
   *  Constant: '<S325>/Constant3'
   */
  rtb_Switch1_p2 = rtb_Merge1 * Steering_Heading_Control_D;

  /* Sum: '<S327>/Diff' incorporates:
   *  UnitDelay: '<S327>/UD'
   *
   * Block description for '<S327>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S327>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Add_ov = rtb_Switch1_p2 - Code_Gen_Model_DW.UD_DSTATE;

  /* Saturate: '<S325>/Saturation' */
  if (rtb_Add_ov > Steering_Heading_Control_D_UL) {
    rtb_Add_ov = Steering_Heading_Control_D_UL;
  } else if (rtb_Add_ov < Steering_Heading_Control_D_LL) {
    rtb_Add_ov = Steering_Heading_Control_D_LL;
  }

  /* Sum: '<S325>/Add' incorporates:
   *  Gain: '<S325>/Gain1'
   *  Saturate: '<S325>/Saturation'
   */
  rtb_Switch4 = (Steering_Heading_Control_P * rtb_Switch2) + rtb_Add_ov;

  /* Sum: '<S325>/Subtract' incorporates:
   *  Constant: '<S325>/Constant'
   */
  rtb_Sin4 = Steering_Heading_Control_Total_UL - rtb_Switch4;

  /* Sum: '<S325>/Sum2' incorporates:
   *  Gain: '<S325>/Gain2'
   *  UnitDelay: '<S325>/Unit Delay'
   */
  rtb_Switch2 = (Steering_Heading_Control_I * rtb_Switch2) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_m;

  /* Switch: '<S329>/Switch2' incorporates:
   *  RelationalOperator: '<S329>/LowerRelop1'
   */
  if (!(rtb_Switch2 > rtb_Sin4)) {
    /* Sum: '<S325>/Subtract1' incorporates:
     *  Constant: '<S325>/Constant1'
     */
    rtb_Sum_jt = Steering_Heading_Control_Total_LL - rtb_Switch4;

    /* Switch: '<S329>/Switch' incorporates:
     *  RelationalOperator: '<S329>/UpperRelop'
     */
    if (rtb_Switch2 < rtb_Sum_jt) {
      rtb_Sin4 = rtb_Sum_jt;
    } else {
      rtb_Sin4 = rtb_Switch2;
    }

    /* End of Switch: '<S329>/Switch' */
  }

  /* End of Switch: '<S329>/Switch2' */

  /* Saturate: '<S325>/Saturation1' */
  if (rtb_Sin4 > Steering_Heading_Control_I_UL) {
    rtb_Switch2 = Steering_Heading_Control_I_UL;
  } else if (rtb_Sin4 < Steering_Heading_Control_I_LL) {
    rtb_Switch2 = Steering_Heading_Control_I_LL;
  } else {
    rtb_Switch2 = rtb_Sin4;
  }

  /* End of Saturate: '<S325>/Saturation1' */

  /* Sum: '<S325>/Add1' */
  rtb_Add_ov = rtb_Switch4 + rtb_Switch2;

  /* Saturate: '<S325>/Saturation2' */
  if (rtb_Add_ov > Steering_Heading_Control_Total_UL) {
    /* Saturate: '<S325>/Saturation2' */
    Code_Gen_Model_B.Steering_Localized_PID = Steering_Heading_Control_Total_UL;
  } else if (rtb_Add_ov < Steering_Heading_Control_Total_LL) {
    /* Saturate: '<S325>/Saturation2' */
    Code_Gen_Model_B.Steering_Localized_PID = Steering_Heading_Control_Total_LL;
  } else {
    /* Saturate: '<S325>/Saturation2' */
    Code_Gen_Model_B.Steering_Localized_PID = rtb_Add_ov;
  }

  /* End of Saturate: '<S325>/Saturation2' */

  /* Switch: '<S309>/Switch' incorporates:
   *  Abs: '<S309>/Abs'
   *  Constant: '<S309>/Constant'
   *  Constant: '<S324>/Constant'
   *  RelationalOperator: '<S324>/Compare'
   */
  if (fabs(Code_Gen_Model_B.Steering_Localized_PID) >
      Steering_Heading_Control_Deadzone) {
    rtb_Sin4 = Code_Gen_Model_B.Steering_Localized_PID;
  } else {
    rtb_Sin4 = 0.0;
  }

  /* End of Switch: '<S309>/Switch' */

  /* Signum: '<S308>/Sign2' incorporates:
   *  UnitDelay: '<S308>/Unit Delay'
   */
  if (rtIsNaN(Code_Gen_Model_DW.UnitDelay_DSTATE_d)) {
    tmp = (rtNaN);
  } else if (Code_Gen_Model_DW.UnitDelay_DSTATE_d < 0.0) {
    tmp = -1.0;
  } else {
    tmp = (Code_Gen_Model_DW.UnitDelay_DSTATE_d > 0.0);
  }

  /* Signum: '<S308>/Sign1' */
  if (rtIsNaN(rtb_Sin4)) {
    rtb_Rotationmatrixfromlocalto_0 = (rtNaN);
  } else if (rtb_Sin4 < 0.0) {
    rtb_Rotationmatrixfromlocalto_0 = -1.0;
  } else {
    rtb_Rotationmatrixfromlocalto_0 = (rtb_Sin4 > 0.0);
  }

  /* Product: '<S308>/Product1' incorporates:
   *  Signum: '<S308>/Sign1'
   *  Signum: '<S308>/Sign2'
   */
  tmp *= rtb_Rotationmatrixfromlocalto_0;
  if (rtIsNaN(tmp)) {
    rtb_Num_Segments = 0;
  } else {
    rtb_Num_Segments = (int32_T)fmod(tmp, 256.0);
  }

  /* Switch: '<S308>/Switch' incorporates:
   *  Constant: '<S308>/Constant'
   *  Constant: '<S317>/Constant'
   *  Constant: '<S318>/Constant'
   *  Logic: '<S308>/or'
   *  Product: '<S308>/Product1'
   *  RelationalOperator: '<S317>/Compare'
   *  RelationalOperator: '<S318>/Compare'
   *  UnitDelay: '<S308>/Unit Delay'
   */
  if ((Code_Gen_Model_DW.UnitDelay_DSTATE_d == 0.0) || (((rtb_Num_Segments < 0) ?
        ((int32_T)((int8_T)(-((int8_T)((uint8_T)(-((real_T)rtb_Num_Segments)))))))
        : rtb_Num_Segments) > 0)) {
    rtb_Switch_jh = rtb_Sin4;
  } else {
    rtb_Switch_jh = 0.0;
  }

  /* End of Switch: '<S308>/Switch' */

  /* RelationalOperator: '<S319>/Compare' incorporates:
   *  Constant: '<S319>/Constant'
   */
  rtb_Gamepad_POV_Up = (rtb_Switch_jh == 0.0);

  /* RelationalOperator: '<S320>/Compare' incorporates:
   *  Constant: '<S320>/Constant'
   */
  rtb_Compare_a = (rtb_Switch_jh > 0.0);

  /* Abs: '<S308>/Abs' incorporates:
   *  Sum: '<S308>/Subtract'
   *  UnitDelay: '<S308>/Unit Delay'
   */
  rtb_Switch4 = fabs(Code_Gen_Model_DW.UnitDelay_DSTATE_d - rtb_Sin4);

  /* Switch: '<S308>/Switch5' incorporates:
   *  Constant: '<S308>/Constant1'
   *  Switch: '<S308>/Switch1'
   *  UnaryMinus: '<S308>/Unary Minus'
   */
  if (rtb_Gamepad_POV_Up) {
    /* SignalConversion generated from: '<S308>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S308>/Constant4'
     *  Constant: '<S308>/Constant6'
     */
    rtb_Akxhatkk1[0] = Steering_Absolute_Cmd_Approach_Zero_Final_Thresh;
    rtb_Akxhatkk1[1] = 1.0;

    /* SignalConversion generated from: '<S308>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S308>/Constant2'
     *  Constant: '<S308>/Constant5'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Steering_Absolute_Cmd_Approach_Zero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S308>/Lookup Table Dynamic' */
    /* Dynamic Look-Up Table Block: '<S308>/Lookup Table Dynamic'
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
    /* SignalConversion generated from: '<S308>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S308>/Constant10'
     *  Constant: '<S308>/Constant8'
     */
    rtb_Akxhatkk1[0] = Steering_Absolute_Cmd_NonZero_Final_Scale_Factor;
    rtb_Akxhatkk1[1] = 1.0;

    /* SignalConversion generated from: '<S308>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S308>/Constant7'
     *  Constant: '<S308>/Constant9'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Steering_Absolute_Cmd_NonZero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S308>/Lookup Table Dynamic1' */
    /* Dynamic Look-Up Table Block: '<S308>/Lookup Table Dynamic1'
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

    /* Switch: '<S308>/Switch3' incorporates:
     *  Constant: '<S308>/Constant1'
     *  Constant: '<S308>/Constant3'
     *  UnaryMinus: '<S308>/Unary Minus'
     */
    if (rtb_Compare_a) {
      tmp = Steering_Absolute_Cmd_Rate_Limit_Inc;
    } else {
      tmp = -Steering_Absolute_Cmd_Rate_Limit_Dec;
    }

    /* End of Switch: '<S308>/Switch3' */
  }

  /* End of Switch: '<S308>/Switch5' */

  /* Product: '<S308>/Product' incorporates:
   *  Switch: '<S308>/Switch1'
   */
  rtb_Switch2_k = tmp * rtb_Switch4;

  /* Switch: '<S323>/Init' incorporates:
   *  UnitDelay: '<S323>/FixPt Unit Delay1'
   *  UnitDelay: '<S323>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_p != 0) {
    rtb_Sin4 = rtb_Switch_jh;
  } else {
    rtb_Sin4 = Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_e;
  }

  /* End of Switch: '<S323>/Init' */

  /* Sum: '<S321>/Sum1' */
  rtb_Sum_jt = rtb_Switch_jh - rtb_Sin4;

  /* Switch: '<S322>/Switch2' incorporates:
   *  RelationalOperator: '<S322>/LowerRelop1'
   */
  if (!(rtb_Sum_jt > rtb_Switch2_k)) {
    /* Switch: '<S308>/Switch2' incorporates:
     *  Constant: '<S308>/Constant1'
     *  Constant: '<S308>/Constant3'
     *  Switch: '<S308>/Switch4'
     *  UnaryMinus: '<S308>/Unary Minus1'
     */
    if (rtb_Gamepad_POV_Up) {
      tmp = Steering_Absolute_Cmd_Rate_Limit_Dec;
    } else if (rtb_Compare_a) {
      /* Switch: '<S308>/Switch4' incorporates:
       *  Constant: '<S308>/Constant1'
       */
      tmp = Steering_Absolute_Cmd_Rate_Limit_Dec;
    } else {
      tmp = -Steering_Absolute_Cmd_Rate_Limit_Inc;
    }

    /* Product: '<S308>/Product2' incorporates:
     *  Switch: '<S308>/Switch2'
     */
    rtb_Product2_e2 = tmp * rtb_Switch4;

    /* Switch: '<S322>/Switch' incorporates:
     *  RelationalOperator: '<S322>/UpperRelop'
     */
    if (rtb_Sum_jt < rtb_Product2_e2) {
      rtb_Switch2_k = rtb_Product2_e2;
    } else {
      rtb_Switch2_k = rtb_Sum_jt;
    }

    /* End of Switch: '<S322>/Switch' */
  }

  /* End of Switch: '<S322>/Switch2' */

  /* Sum: '<S321>/Sum' */
  rtb_Switch4 = rtb_Switch2_k + rtb_Sin4;

  /* Signum: '<S307>/Sign2' incorporates:
   *  UnitDelay: '<S307>/Unit Delay'
   */
  if (rtIsNaN(Code_Gen_Model_DW.UnitDelay_DSTATE_g)) {
    tmp = (rtNaN);
  } else if (Code_Gen_Model_DW.UnitDelay_DSTATE_g < 0.0) {
    tmp = -1.0;
  } else {
    tmp = (Code_Gen_Model_DW.UnitDelay_DSTATE_g > 0.0);
  }

  /* Signum: '<S307>/Sign1' */
  if (rtIsNaN(Code_Gen_Model_B.Steering_Rel_Cmd_SPF)) {
    rtb_Rotationmatrixfromlocalto_0 = (rtNaN);
  } else if (Code_Gen_Model_B.Steering_Rel_Cmd_SPF < 0.0) {
    rtb_Rotationmatrixfromlocalto_0 = -1.0;
  } else {
    rtb_Rotationmatrixfromlocalto_0 = (Code_Gen_Model_B.Steering_Rel_Cmd_SPF >
      0.0);
  }

  /* Product: '<S307>/Product1' incorporates:
   *  Signum: '<S307>/Sign1'
   *  Signum: '<S307>/Sign2'
   */
  tmp *= rtb_Rotationmatrixfromlocalto_0;
  if (rtIsNaN(tmp)) {
    rtb_Num_Segments = 0;
  } else {
    rtb_Num_Segments = (int32_T)fmod(tmp, 256.0);
  }

  /* Switch: '<S307>/Switch' incorporates:
   *  Constant: '<S307>/Constant'
   *  Constant: '<S310>/Constant'
   *  Constant: '<S311>/Constant'
   *  Logic: '<S307>/or'
   *  Product: '<S307>/Product1'
   *  RelationalOperator: '<S310>/Compare'
   *  RelationalOperator: '<S311>/Compare'
   *  UnitDelay: '<S307>/Unit Delay'
   */
  if ((Code_Gen_Model_DW.UnitDelay_DSTATE_g == 0.0) || (((rtb_Num_Segments < 0) ?
        ((int32_T)((int8_T)(-((int8_T)((uint8_T)(-((real_T)rtb_Num_Segments)))))))
        : rtb_Num_Segments) > 0)) {
    rtb_Switch2_k = Code_Gen_Model_B.Steering_Rel_Cmd_SPF;
  } else {
    rtb_Switch2_k = 0.0;
  }

  /* End of Switch: '<S307>/Switch' */

  /* RelationalOperator: '<S312>/Compare' incorporates:
   *  Constant: '<S312>/Constant'
   */
  rtb_Gamepad_POV_Up = (rtb_Switch2_k == 0.0);

  /* RelationalOperator: '<S313>/Compare' incorporates:
   *  Constant: '<S313>/Constant'
   */
  rtb_Compare_a = (rtb_Switch2_k > 0.0);

  /* Abs: '<S307>/Abs' incorporates:
   *  Sum: '<S307>/Subtract'
   *  UnitDelay: '<S307>/Unit Delay'
   */
  rtb_Sum_jt = fabs(Code_Gen_Model_DW.UnitDelay_DSTATE_g -
                    Code_Gen_Model_B.Steering_Rel_Cmd_SPF);

  /* Switch: '<S307>/Switch5' incorporates:
   *  Constant: '<S307>/Constant1'
   *  Switch: '<S307>/Switch1'
   *  UnaryMinus: '<S307>/Unary Minus'
   */
  if (rtb_Gamepad_POV_Up) {
    /* SignalConversion generated from: '<S307>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S307>/Constant4'
     *  Constant: '<S307>/Constant6'
     */
    rtb_Akxhatkk1[0] = Steering_Relative_Cmd_Approach_Zero_Final_Thresh;
    rtb_Akxhatkk1[1] = 1.0;

    /* SignalConversion generated from: '<S307>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S307>/Constant2'
     *  Constant: '<S307>/Constant5'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Steering_Relative_Cmd_Approach_Zero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S307>/Lookup Table Dynamic' */
    /* Dynamic Look-Up Table Block: '<S307>/Lookup Table Dynamic'
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
    /* SignalConversion generated from: '<S307>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S307>/Constant10'
     *  Constant: '<S307>/Constant8'
     */
    rtb_Akxhatkk1[0] = Steering_Relative_Cmd_NonZero_Final_Scale_Factor;
    rtb_Akxhatkk1[1] = 1.0;

    /* SignalConversion generated from: '<S307>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S307>/Constant7'
     *  Constant: '<S307>/Constant9'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Steering_Relative_Cmd_NonZero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S307>/Lookup Table Dynamic1' */
    /* Dynamic Look-Up Table Block: '<S307>/Lookup Table Dynamic1'
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

    /* Switch: '<S307>/Switch3' incorporates:
     *  Constant: '<S307>/Constant1'
     *  Constant: '<S307>/Constant3'
     *  UnaryMinus: '<S307>/Unary Minus'
     */
    if (rtb_Compare_a) {
      tmp = Steering_Relative_Cmd_Rate_Limit_Inc;
    } else {
      tmp = -Steering_Relative_Cmd_Rate_Limit_Dec;
    }

    /* End of Switch: '<S307>/Switch3' */
  }

  /* End of Switch: '<S307>/Switch5' */

  /* Product: '<S307>/Product' incorporates:
   *  Switch: '<S307>/Switch1'
   */
  rtb_Sin4 = tmp * rtb_Sum_jt;

  /* Switch: '<S316>/Init' incorporates:
   *  UnitDelay: '<S316>/FixPt Unit Delay1'
   *  UnitDelay: '<S316>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_c != 0) {
    rtb_Switch_jh = rtb_Switch2_k;
  } else {
    rtb_Switch_jh = Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_p;
  }

  /* End of Switch: '<S316>/Init' */

  /* Sum: '<S314>/Sum1' */
  rtb_Product2_e2 = rtb_Switch2_k - rtb_Switch_jh;

  /* Switch: '<S315>/Switch2' incorporates:
   *  RelationalOperator: '<S315>/LowerRelop1'
   */
  if (!(rtb_Product2_e2 > rtb_Sin4)) {
    /* Switch: '<S307>/Switch2' incorporates:
     *  Constant: '<S307>/Constant1'
     *  Constant: '<S307>/Constant3'
     *  Switch: '<S307>/Switch4'
     *  UnaryMinus: '<S307>/Unary Minus1'
     */
    if (rtb_Gamepad_POV_Up) {
      tmp = Steering_Relative_Cmd_Rate_Limit_Dec;
    } else if (rtb_Compare_a) {
      /* Switch: '<S307>/Switch4' incorporates:
       *  Constant: '<S307>/Constant1'
       */
      tmp = Steering_Relative_Cmd_Rate_Limit_Dec;
    } else {
      tmp = -Steering_Relative_Cmd_Rate_Limit_Inc;
    }

    /* Product: '<S307>/Product2' incorporates:
     *  Switch: '<S307>/Switch2'
     */
    rtb_Product2_i = tmp * rtb_Sum_jt;

    /* Switch: '<S315>/Switch' incorporates:
     *  RelationalOperator: '<S315>/UpperRelop'
     */
    if (rtb_Product2_e2 < rtb_Product2_i) {
      rtb_Sin4 = rtb_Product2_i;
    } else {
      rtb_Sin4 = rtb_Product2_e2;
    }

    /* End of Switch: '<S315>/Switch' */
  }

  /* End of Switch: '<S315>/Switch2' */

  /* Sum: '<S314>/Sum' */
  rtb_Sum_jt = rtb_Sin4 + rtb_Switch_jh;

  /* Switch: '<S297>/Switch' */
  if (Code_Gen_Model_B.Is_Absolute_Steering_SPF) {
    /* Switch: '<S297>/Switch' */
    Code_Gen_Model_B.Steering_Localized_Cmd = rtb_Switch4;
  } else {
    /* Switch: '<S297>/Switch' */
    Code_Gen_Model_B.Steering_Localized_Cmd = rtb_Sum_jt;
  }

  /* End of Switch: '<S297>/Switch' */

  /* Outputs for Atomic SubSystem: '<S210>/Initialize Function' */
  /* Sum: '<S296>/Add' incorporates:
   *  Constant: '<S296>/Constant'
   *  Constant: '<S296>/Constant4'
   *  Constant: '<S296>/Constant5'
   *  Trigonometry: '<S296>/Atan2'
   */
  rtb_Product2_e2 = rt_atan2d_snf(Distance_FL_y, 0.187325) + 1.5707963267948966;

  /* End of Outputs for SubSystem: '<S210>/Initialize Function' */

  /* Fcn: '<S338>/r->x' incorporates:
   *  Fcn: '<S343>/r->x'
   *  Fcn: '<S348>/r->x'
   *  Fcn: '<S353>/r->x'
   */
  rtb_FeedForward = Code_Gen_Model_B.Translation_Speed_RL * cos
    (Code_Gen_Model_B.Translation_Steering_Cmd);

  /* Sum: '<S332>/Add' incorporates:
   *  Fcn: '<S338>/r->x'
   *  Fcn: '<S339>/r->x'
   */
  rtb_Akxhatkk1[0] = (Code_Gen_Model_B.Steering_Localized_Cmd * cos
                      (rtb_Product2_e2)) + rtb_FeedForward;

  /* Fcn: '<S338>/theta->y' incorporates:
   *  Fcn: '<S343>/theta->y'
   *  Fcn: '<S348>/theta->y'
   *  Fcn: '<S353>/theta->y'
   */
  rtb_Add_oh = Code_Gen_Model_B.Translation_Speed_RL * sin
    (Code_Gen_Model_B.Translation_Steering_Cmd);

  /* Sum: '<S332>/Add' incorporates:
   *  Fcn: '<S338>/theta->y'
   *  Fcn: '<S339>/theta->y'
   */
  rtb_Akxhatkk1[1] = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                      (rtb_Product2_e2)) + rtb_Add_oh;

  /* Fcn: '<S337>/x->r' */
  rtb_Switch_jh = rt_hypotd_snf(rtb_Akxhatkk1[0], rtb_Akxhatkk1[1]);

  /* RelationalOperator: '<S340>/Compare' incorporates:
   *  Constant: '<S340>/Constant'
   */
  rtb_Compare_a = (rtb_Switch_jh == 0.0);

  /* Switch: '<S336>/Switch' */
  if (!rtb_Compare_a) {
    /* Switch: '<S336>/Switch' incorporates:
     *  Fcn: '<S337>/x->theta'
     */
    Code_Gen_Model_B.FL_Desired_Module_Angle = rt_atan2d_snf(rtb_Akxhatkk1[1],
      rtb_Akxhatkk1[0]);
  }

  /* End of Switch: '<S336>/Switch' */

  /* Trigonometry: '<S224>/Cos4' incorporates:
   *  Switch: '<S213>/Angle_Switch'
   *  Trigonometry: '<S223>/Cos4'
   */
  rtb_Product2_e2 = cos(Code_Gen_Model_B.FL_Desired_Module_Angle);

  /* Sum: '<S202>/Add1' incorporates:
   *  Constant: '<S202>/Constant3'
   *  Constant: '<S202>/Constant4'
   *  Gain: '<S19>/Revolutions to Radians'
   *  Inport: '<Root>/FrontLeft_Steer_Rev'
   *  Inport: '<Root>/FrontLeft_Turn_Offset'
   *  Math: '<S202>/Math Function'
   *  Sum: '<S19>/Add'
   *  Sum: '<S202>/Add2'
   */
  Code_Gen_Model_B.FL_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.FrontLeft_Steer_Rev -
       Code_Gen_Model_U.FrontLeft_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Trigonometry: '<S224>/Sin5' incorporates:
   *  UnaryMinus: '<S222>/Unary Minus'
   */
  rtb_rx_c = sin(-Code_Gen_Model_B.FL_Steer_Module_Angle);

  /* Trigonometry: '<S224>/Sin4' incorporates:
   *  Switch: '<S213>/Angle_Switch'
   *  Trigonometry: '<S223>/Sin4'
   */
  rtb_Product2_i = sin(Code_Gen_Model_B.FL_Desired_Module_Angle);

  /* Trigonometry: '<S224>/Cos5' incorporates:
   *  UnaryMinus: '<S222>/Unary Minus'
   */
  rtb_Sin4 = cos(-Code_Gen_Model_B.FL_Steer_Module_Angle);

  /* Sum: '<S224>/Subtract1' incorporates:
   *  Product: '<S224>/Product2'
   *  Product: '<S224>/Product3'
   *  Trigonometry: '<S224>/Cos4'
   *  Trigonometry: '<S224>/Sin4'
   */
  rtb_Subtract1 = (rtb_Product2_e2 * rtb_rx_c) + (rtb_Product2_i * rtb_Sin4);

  /* Sum: '<S224>/Subtract' incorporates:
   *  Product: '<S224>/Product'
   *  Product: '<S224>/Product1'
   *  Trigonometry: '<S224>/Cos4'
   *  Trigonometry: '<S224>/Sin4'
   */
  rtb_rx_c = (rtb_Product2_e2 * rtb_Sin4) - (rtb_Product2_i * rtb_rx_c);

  /* Math: '<S224>/Hypot' */
  rtb_Sin4 = rt_hypotd_snf(rtb_rx_c, rtb_Subtract1);

  /* Switch: '<S224>/Switch' incorporates:
   *  Constant: '<S224>/Constant'
   *  Constant: '<S224>/Constant1'
   *  Constant: '<S225>/Constant'
   *  Product: '<S224>/Divide'
   *  Product: '<S224>/Divide1'
   *  RelationalOperator: '<S225>/Compare'
   *  Switch: '<S224>/Switch1'
   */
  if (rtb_Sin4 > 1.0E-6) {
    rtb_Switch2_k = rtb_Subtract1 / rtb_Sin4;
    rtb_Sin4 = rtb_rx_c / rtb_Sin4;
  } else {
    rtb_Switch2_k = 0.0;
    rtb_Sin4 = 1.0;
  }

  /* End of Switch: '<S224>/Switch' */

  /* RelationalOperator: '<S221>/Compare' incorporates:
   *  Abs: '<S213>/Abs'
   *  Constant: '<S221>/Constant'
   *  Trigonometry: '<S224>/Atan1'
   */
  rtb_Gamepad_POV_Up = (fabs(rt_atan2d_snf(rtb_Switch2_k, rtb_Sin4)) >
                        1.5707963267948966);

  /* Switch: '<S213>/Angle_Switch' incorporates:
   *  Trigonometry: '<S223>/Atan1'
   */
  if (rtb_Gamepad_POV_Up) {
    /* Sum: '<S223>/Subtract1' incorporates:
     *  Product: '<S223>/Product2'
     *  Product: '<S223>/Product3'
     */
    rtb_rx_c = (rtb_Product2_e2 * Code_Gen_Model_ConstB.Sin5) + (rtb_Product2_i *
      Code_Gen_Model_ConstB.Cos5);

    /* Sum: '<S223>/Subtract' incorporates:
     *  Product: '<S223>/Product'
     *  Product: '<S223>/Product1'
     */
    rtb_Product2_i = (rtb_Product2_e2 * Code_Gen_Model_ConstB.Cos5) -
      (rtb_Product2_i * Code_Gen_Model_ConstB.Sin5);

    /* Math: '<S223>/Hypot' */
    rtb_Product2_e2 = rt_hypotd_snf(rtb_Product2_i, rtb_rx_c);

    /* Switch: '<S223>/Switch1' incorporates:
     *  Constant: '<S223>/Constant'
     *  Constant: '<S223>/Constant1'
     *  Constant: '<S226>/Constant'
     *  Product: '<S223>/Divide'
     *  Product: '<S223>/Divide1'
     *  RelationalOperator: '<S226>/Compare'
     *  Switch: '<S223>/Switch'
     */
    if (rtb_Product2_e2 > 1.0E-6) {
      rtb_Product2_i /= rtb_Product2_e2;
      rtb_Product2_e2 = rtb_rx_c / rtb_Product2_e2;
    } else {
      rtb_Product2_i = 1.0;
      rtb_Product2_e2 = 0.0;
    }

    /* End of Switch: '<S223>/Switch1' */
    rtb_Switch2_k = rt_atan2d_snf(rtb_Product2_e2, rtb_Product2_i);
  } else {
    rtb_Switch2_k = Code_Gen_Model_B.FL_Desired_Module_Angle;
  }

  /* Sum: '<S215>/Sum' incorporates:
   *  Sum: '<S214>/Add'
   */
  rtb_Switch2_k -= Code_Gen_Model_B.FL_Steer_Module_Angle;

  /* Sum: '<S228>/Add1' incorporates:
   *  Constant: '<S228>/Constant3'
   *  Constant: '<S228>/Constant4'
   *  Math: '<S228>/Math Function'
   *  Sum: '<S215>/Sum'
   *  Sum: '<S228>/Add2'
   */
  rtb_Sin4 = rt_modd_snf(rtb_Switch2_k + 3.1415926535897931, 6.2831853071795862)
    - 3.1415926535897931;

  /* Sum: '<S230>/Sum1' incorporates:
   *  Constant: '<S215>/Constant2'
   *  Product: '<S230>/Product'
   *  Sum: '<S230>/Sum'
   *  UnitDelay: '<S230>/Unit Delay1'
   */
  rtb_Product2_e2 = ((rtb_Sin4 - Code_Gen_Model_DW.UnitDelay1_DSTATE_b) *
                     Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_b;

  /* Product: '<S215>/Product' incorporates:
   *  Constant: '<S215>/Constant3'
   */
  rtb_Product2_i = rtb_Product2_e2 * Steering_Motor_Control_D;

  /* Sum: '<S229>/Diff' incorporates:
   *  UnitDelay: '<S229>/UD'
   *
   * Block description for '<S229>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S229>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Add_ov = rtb_Product2_i - Code_Gen_Model_DW.UD_DSTATE_b;

  /* Saturate: '<S215>/Saturation' */
  if (rtb_Add_ov > Steering_Motor_Control_D_UL) {
    rtb_Add_ov = Steering_Motor_Control_D_UL;
  } else if (rtb_Add_ov < Steering_Motor_Control_D_LL) {
    rtb_Add_ov = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S215>/Add' incorporates:
   *  Gain: '<S215>/Gain1'
   *  Saturate: '<S215>/Saturation'
   */
  rtb_Subtract1 = (Steering_Motor_Control_P * rtb_Sin4) + rtb_Add_ov;

  /* Sum: '<S215>/Subtract' incorporates:
   *  Constant: '<S215>/Constant'
   */
  rtb_rx_c = 1.0 - rtb_Subtract1;

  /* Sum: '<S215>/Sum2' incorporates:
   *  Gain: '<S215>/Gain2'
   *  UnitDelay: '<S215>/Unit Delay'
   */
  rtb_Sin4 = (Steering_Motor_Control_I * rtb_Sin4) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_e;

  /* Switch: '<S231>/Switch2' incorporates:
   *  Constant: '<S215>/Constant'
   *  RelationalOperator: '<S231>/LowerRelop1'
   *  Sum: '<S215>/Subtract'
   */
  if (!(rtb_Sin4 > (1.0 - rtb_Subtract1))) {
    /* Sum: '<S215>/Subtract1' incorporates:
     *  Constant: '<S215>/Constant1'
     */
    rtb_rx_c = -1.0 - rtb_Subtract1;

    /* Switch: '<S231>/Switch' incorporates:
     *  Constant: '<S215>/Constant1'
     *  RelationalOperator: '<S231>/UpperRelop'
     *  Sum: '<S215>/Subtract1'
     */
    if (!(rtb_Sin4 < (-1.0 - rtb_Subtract1))) {
      rtb_rx_c = rtb_Sin4;
    }

    /* End of Switch: '<S231>/Switch' */
  }

  /* End of Switch: '<S231>/Switch2' */

  /* Saturate: '<S215>/Saturation1' */
  if (rtb_rx_c > Steering_Motor_Control_I_UL) {
    rtb_rx_c = Steering_Motor_Control_I_UL;
  } else if (rtb_rx_c < Steering_Motor_Control_I_LL) {
    rtb_rx_c = Steering_Motor_Control_I_LL;
  }

  /* End of Saturate: '<S215>/Saturation1' */

  /* Sum: '<S215>/Add1' */
  rtb_Add_ov = rtb_Subtract1 + rtb_rx_c;

  /* Saturate: '<S215>/Saturation2' */
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

  /* End of Saturate: '<S215>/Saturation2' */

  /* Switch: '<S336>/Switch1' */
  if (rtb_Compare_a) {
    /* Switch: '<S336>/Switch1' incorporates:
     *  Constant: '<S336>/Constant'
     */
    Code_Gen_Model_B.FL_Desired_Wheel_Speed_in = 1.0E-15;
  } else {
    /* Switch: '<S336>/Switch1' */
    Code_Gen_Model_B.FL_Desired_Wheel_Speed_in = rtb_Switch_jh;
  }

  /* End of Switch: '<S336>/Switch1' */

  /* Sum: '<S333>/Add' incorporates:
   *  Fcn: '<S344>/r->x'
   *  Fcn: '<S344>/theta->y'
   */
  rtb_Akxhatkk1[0] = (Code_Gen_Model_B.Steering_Localized_Cmd * cos
                      (Code_Gen_Model_ConstB.FR_Tangent_Angle)) +
    rtb_FeedForward;
  rtb_Akxhatkk1[1] = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                      (Code_Gen_Model_ConstB.FR_Tangent_Angle)) + rtb_Add_oh;

  /* Fcn: '<S342>/x->r' */
  rtb_Sin4 = rt_hypotd_snf(rtb_Akxhatkk1[0], rtb_Akxhatkk1[1]);

  /* RelationalOperator: '<S345>/Compare' incorporates:
   *  Constant: '<S345>/Constant'
   */
  rtb_Compare_a = (rtb_Sin4 == 0.0);

  /* Switch: '<S341>/Switch1' */
  if (rtb_Compare_a) {
    /* Switch: '<S341>/Switch1' incorporates:
     *  Constant: '<S341>/Constant'
     */
    Code_Gen_Model_B.FR_Desired_Wheel_Speed_in = 1.0E-15;
  } else {
    /* Switch: '<S341>/Switch1' */
    Code_Gen_Model_B.FR_Desired_Wheel_Speed_in = rtb_Sin4;
  }

  /* End of Switch: '<S341>/Switch1' */

  /* Sum: '<S334>/Add' incorporates:
   *  Fcn: '<S349>/r->x'
   *  Fcn: '<S349>/theta->y'
   */
  rtb_Minus_n[0] = (Code_Gen_Model_B.Steering_Localized_Cmd * cos
                    (Code_Gen_Model_ConstB.BL_Tangent_Angle)) + rtb_FeedForward;
  rtb_Minus_n[1] = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                    (Code_Gen_Model_ConstB.BL_Tangent_Angle)) + rtb_Add_oh;

  /* Fcn: '<S347>/x->r' */
  rtb_rx_kh = rt_hypotd_snf(rtb_Minus_n[0], rtb_Minus_n[1]);

  /* RelationalOperator: '<S350>/Compare' incorporates:
   *  Constant: '<S350>/Constant'
   */
  Compare = (rtb_rx_kh == 0.0);

  /* Switch: '<S346>/Switch1' */
  if (Compare) {
    /* Switch: '<S346>/Switch1' incorporates:
     *  Constant: '<S346>/Constant'
     */
    Code_Gen_Model_B.BL_Desired_Wheel_Speed_in = 1.0E-15;
  } else {
    /* Switch: '<S346>/Switch1' */
    Code_Gen_Model_B.BL_Desired_Wheel_Speed_in = rtb_rx_kh;
  }

  /* End of Switch: '<S346>/Switch1' */

  /* Sum: '<S335>/Add' incorporates:
   *  Fcn: '<S354>/r->x'
   *  Fcn: '<S354>/theta->y'
   */
  rtb_Add2_k_idx_0 = (Code_Gen_Model_B.Steering_Localized_Cmd * cos
                      (Code_Gen_Model_ConstB.BR_Tangent_Angle)) +
    rtb_FeedForward;
  rtb_Add2_k_idx_1 = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                      (Code_Gen_Model_ConstB.BR_Tangent_Angle)) + rtb_Add_oh;

  /* Fcn: '<S352>/x->r' */
  rtb_thetay_i = rt_hypotd_snf(rtb_Add2_k_idx_0, rtb_Add2_k_idx_1);

  /* RelationalOperator: '<S355>/Compare' incorporates:
   *  Constant: '<S355>/Constant'
   */
  rtb_Is_Absolute_Translation_g = (rtb_thetay_i == 0.0);

  /* Switch: '<S351>/Switch1' */
  if (rtb_Is_Absolute_Translation_g) {
    /* Switch: '<S351>/Switch1' incorporates:
     *  Constant: '<S351>/Constant'
     */
    Code_Gen_Model_B.BR_Desired_Wheel_Speed_in = 1.0E-15;
  } else {
    /* Switch: '<S351>/Switch1' */
    Code_Gen_Model_B.BR_Desired_Wheel_Speed_in = rtb_thetay_i;
  }

  /* End of Switch: '<S351>/Switch1' */

  /* Product: '<S331>/Divide' incorporates:
   *  Abs: '<S331>/Abs'
   *  Abs: '<S331>/Abs1'
   *  Abs: '<S331>/Abs2'
   *  Abs: '<S331>/Abs3'
   *  Constant: '<S331>/Constant'
   *  MinMax: '<S331>/Max'
   */
  rtb_Switch_jh = 5.389313721017964 / fmax(fmax(fmax(fmax(5.389313721017964,
    Code_Gen_Model_B.FL_Desired_Wheel_Speed_in),
    Code_Gen_Model_B.FR_Desired_Wheel_Speed_in),
    Code_Gen_Model_B.BL_Desired_Wheel_Speed_in),
    Code_Gen_Model_B.BR_Desired_Wheel_Speed_in);

  /* Product: '<S331>/Product' */
  Code_Gen_Model_B.FL_Desired_Wheel_Speed =
    Code_Gen_Model_B.FL_Desired_Wheel_Speed_in * rtb_Switch_jh;

  /* Switch: '<S213>/Speed_Switch' incorporates:
   *  UnaryMinus: '<S213>/Unary Minus'
   */
  if (rtb_Gamepad_POV_Up) {
    tmp = -Code_Gen_Model_B.FL_Desired_Wheel_Speed;
  } else {
    tmp = Code_Gen_Model_B.FL_Desired_Wheel_Speed;
  }

  /* Product: '<S216>/Product2' incorporates:
   *  Constant: '<S216>/Constant'
   *  Switch: '<S213>/Speed_Switch'
   */
  rtb_thetay_i = tmp * 1150.4247703785388;

  /* Signum: '<S211>/Sign' */
  if (rtIsNaN(rtb_thetay_i)) {
    tmp = (rtNaN);
  } else if (rtb_thetay_i < 0.0) {
    tmp = -1.0;
  } else {
    tmp = (rtb_thetay_i > 0.0);
  }

  /* Signum: '<S211>/Sign1' incorporates:
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed)) {
    rtb_Rotationmatrixfromlocalto_0 = (rtNaN);
  } else if (Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed < 0.0) {
    rtb_Rotationmatrixfromlocalto_0 = -1.0;
  } else {
    rtb_Rotationmatrixfromlocalto_0 =
      (Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed > 0.0);
  }

  /* Product: '<S206>/Product' incorporates:
   *  Abs: '<S211>/Abs'
   *  Abs: '<S214>/Abs'
   *  Constant: '<S217>/Constant'
   *  Constant: '<S227>/Constant3'
   *  Constant: '<S227>/Constant4'
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Speed'
   *  Logic: '<S211>/OR'
   *  Lookup_n-D: '<S214>/1-D Lookup Table'
   *  Math: '<S227>/Math Function'
   *  RelationalOperator: '<S211>/Equal1'
   *  RelationalOperator: '<S217>/Compare'
   *  Signum: '<S211>/Sign'
   *  Signum: '<S211>/Sign1'
   *  Sum: '<S227>/Add1'
   *  Sum: '<S227>/Add2'
   */
  rtb_thetay_i = (((real_T)((tmp == rtb_Rotationmatrixfromlocalto_0) || (fabs
    (Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_thetay_i) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_Switch2_k + 1.5707963267948966, 3.1415926535897931) -
          1.5707963267948966), Code_Gen_Model_ConstP.pooled27,
     Code_Gen_Model_ConstP.pooled26, 1U);

  /* Gain: '<S212>/Gain' */
  rtb_FeedForward = Drive_Motor_Control_FF * rtb_thetay_i;

  /* Sum: '<S212>/Sum' incorporates:
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Speed'
   */
  rtb_thetay_i -= Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed;

  /* Sum: '<S219>/Sum1' incorporates:
   *  Constant: '<S212>/Constant2'
   *  Product: '<S219>/Product'
   *  Sum: '<S219>/Sum'
   *  UnitDelay: '<S219>/Unit Delay1'
   */
  rtb_Sin4 = ((rtb_thetay_i - Code_Gen_Model_DW.UnitDelay1_DSTATE_a) *
              Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_a;

  /* Product: '<S212>/Product' incorporates:
   *  Constant: '<S212>/Constant3'
   */
  rtb_Subtract1 = rtb_Sin4 * Drive_Motor_Control_D;

  /* Sum: '<S218>/Diff' incorporates:
   *  UnitDelay: '<S218>/UD'
   *
   * Block description for '<S218>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S218>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Add_ov = rtb_Subtract1 - Code_Gen_Model_DW.UD_DSTATE_o;

  /* Saturate: '<S212>/Saturation' */
  if (rtb_Add_ov > Drive_Motor_Control_D_UL) {
    rtb_Add_ov = Drive_Motor_Control_D_UL;
  } else if (rtb_Add_ov < Drive_Motor_Control_D_LL) {
    rtb_Add_ov = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S212>/Add' incorporates:
   *  Gain: '<S212>/Gain1'
   *  Saturate: '<S212>/Saturation'
   */
  rtb_Add_oh = ((Drive_Motor_Control_P * rtb_thetay_i) + rtb_FeedForward) +
    rtb_Add_ov;

  /* Sum: '<S212>/Subtract' incorporates:
   *  Constant: '<S212>/Constant'
   */
  rtb_rx_kh = 1.0 - rtb_Add_oh;

  /* Sum: '<S212>/Sum2' incorporates:
   *  Gain: '<S212>/Gain2'
   *  UnitDelay: '<S212>/Unit Delay'
   */
  rtb_FeedForward = (Drive_Motor_Control_I * rtb_thetay_i) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_f;

  /* Switch: '<S220>/Switch2' incorporates:
   *  Constant: '<S212>/Constant'
   *  RelationalOperator: '<S220>/LowerRelop1'
   *  Sum: '<S212>/Subtract'
   */
  if (!(rtb_FeedForward > (1.0 - rtb_Add_oh))) {
    /* Switch: '<S220>/Switch' incorporates:
     *  Constant: '<S212>/Constant1'
     *  RelationalOperator: '<S220>/UpperRelop'
     *  Sum: '<S212>/Subtract1'
     */
    if (rtb_FeedForward < (-1.0 - rtb_Add_oh)) {
      rtb_rx_kh = -1.0 - rtb_Add_oh;
    } else {
      rtb_rx_kh = rtb_FeedForward;
    }

    /* End of Switch: '<S220>/Switch' */
  }

  /* End of Switch: '<S220>/Switch2' */

  /* Saturate: '<S212>/Saturation1' */
  if (rtb_rx_kh > Drive_Motor_Control_I_UL) {
    rtb_FeedForward = Drive_Motor_Control_I_UL;
  } else if (rtb_rx_kh < Drive_Motor_Control_I_LL) {
    rtb_FeedForward = Drive_Motor_Control_I_LL;
  } else {
    rtb_FeedForward = rtb_rx_kh;
  }

  /* End of Saturate: '<S212>/Saturation1' */

  /* Sum: '<S212>/Add1' */
  rtb_Add_ov = rtb_Add_oh + rtb_FeedForward;

  /* Saturate: '<S212>/Saturation2' */
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

  /* End of Saturate: '<S212>/Saturation2' */

  /* Switch: '<S341>/Switch' */
  if (!rtb_Compare_a) {
    /* Switch: '<S341>/Switch' incorporates:
     *  Fcn: '<S342>/x->theta'
     */
    Code_Gen_Model_B.FR_Desired_Module_Angle = rt_atan2d_snf(rtb_Akxhatkk1[1],
      rtb_Akxhatkk1[0]);
  }

  /* End of Switch: '<S341>/Switch' */

  /* Trigonometry: '<S245>/Cos4' incorporates:
   *  Switch: '<S234>/Angle_Switch'
   *  Trigonometry: '<S244>/Cos4'
   */
  rtb_Add_gd = cos(Code_Gen_Model_B.FR_Desired_Module_Angle);

  /* Sum: '<S203>/Add1' incorporates:
   *  Constant: '<S203>/Constant3'
   *  Constant: '<S203>/Constant4'
   *  Gain: '<S19>/Revolutions to Radians1'
   *  Inport: '<Root>/FrontRight_Steer_Rev'
   *  Inport: '<Root>/FrontRight_Turn_Offset'
   *  Math: '<S203>/Math Function'
   *  Sum: '<S19>/Add1'
   *  Sum: '<S203>/Add2'
   */
  Code_Gen_Model_B.FR_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.FrontRight_Steer_Rev -
       Code_Gen_Model_U.FrontRight_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Trigonometry: '<S245>/Sin5' incorporates:
   *  UnaryMinus: '<S243>/Unary Minus'
   */
  rtb_Switch2_k = sin(-Code_Gen_Model_B.FR_Steer_Module_Angle);

  /* Trigonometry: '<S245>/Sin4' incorporates:
   *  Switch: '<S234>/Angle_Switch'
   *  Trigonometry: '<S244>/Sin4'
   */
  rtb_Subtract_e = sin(Code_Gen_Model_B.FR_Desired_Module_Angle);

  /* Trigonometry: '<S245>/Cos5' incorporates:
   *  UnaryMinus: '<S243>/Unary Minus'
   */
  rtb_rx_kh = cos(-Code_Gen_Model_B.FR_Steer_Module_Angle);

  /* Sum: '<S245>/Subtract1' incorporates:
   *  Product: '<S245>/Product2'
   *  Product: '<S245>/Product3'
   *  Trigonometry: '<S245>/Cos4'
   *  Trigonometry: '<S245>/Sin4'
   */
  rtb_Add_oh = (rtb_Add_gd * rtb_Switch2_k) + (rtb_Subtract_e * rtb_rx_kh);

  /* Sum: '<S245>/Subtract' incorporates:
   *  Product: '<S245>/Product'
   *  Product: '<S245>/Product1'
   *  Trigonometry: '<S245>/Cos4'
   *  Trigonometry: '<S245>/Sin4'
   */
  rtb_Subtract1_of = (rtb_Add_gd * rtb_rx_kh) - (rtb_Subtract_e * rtb_Switch2_k);

  /* Math: '<S245>/Hypot' */
  rtb_Hypot_bl = rt_hypotd_snf(rtb_Subtract1_of, rtb_Add_oh);

  /* Switch: '<S245>/Switch' incorporates:
   *  Constant: '<S245>/Constant'
   *  Constant: '<S245>/Constant1'
   *  Constant: '<S246>/Constant'
   *  Product: '<S245>/Divide'
   *  Product: '<S245>/Divide1'
   *  RelationalOperator: '<S246>/Compare'
   *  Switch: '<S245>/Switch1'
   */
  if (rtb_Hypot_bl > 1.0E-6) {
    rtb_thetay_i = rtb_Add_oh / rtb_Hypot_bl;
    rtb_rx_kh = rtb_Subtract1_of / rtb_Hypot_bl;
  } else {
    rtb_thetay_i = 0.0;
    rtb_rx_kh = 1.0;
  }

  /* End of Switch: '<S245>/Switch' */

  /* RelationalOperator: '<S242>/Compare' incorporates:
   *  Abs: '<S234>/Abs'
   *  Constant: '<S242>/Constant'
   *  Trigonometry: '<S245>/Atan1'
   */
  rtb_Gamepad_POV_Up = (fabs(rt_atan2d_snf(rtb_thetay_i, rtb_rx_kh)) >
                        1.5707963267948966);

  /* Switch: '<S234>/Angle_Switch' incorporates:
   *  Trigonometry: '<S244>/Atan1'
   */
  if (rtb_Gamepad_POV_Up) {
    /* Sum: '<S244>/Subtract1' incorporates:
     *  Product: '<S244>/Product2'
     *  Product: '<S244>/Product3'
     */
    rtb_Add_oh = (rtb_Add_gd * Code_Gen_Model_ConstB.Sin5_m) + (rtb_Subtract_e *
      Code_Gen_Model_ConstB.Cos5_g);

    /* Sum: '<S244>/Subtract' incorporates:
     *  Product: '<S244>/Product'
     *  Product: '<S244>/Product1'
     */
    rtb_Hypot_bl = (rtb_Add_gd * Code_Gen_Model_ConstB.Cos5_g) - (rtb_Subtract_e
      * Code_Gen_Model_ConstB.Sin5_m);

    /* Math: '<S244>/Hypot' */
    rtb_Subtract1_of = rt_hypotd_snf(rtb_Hypot_bl, rtb_Add_oh);

    /* Switch: '<S244>/Switch1' incorporates:
     *  Constant: '<S244>/Constant'
     *  Constant: '<S244>/Constant1'
     *  Constant: '<S247>/Constant'
     *  Product: '<S244>/Divide'
     *  Product: '<S244>/Divide1'
     *  RelationalOperator: '<S247>/Compare'
     *  Switch: '<S244>/Switch'
     */
    if (rtb_Subtract1_of > 1.0E-6) {
      rtb_Hypot_bl /= rtb_Subtract1_of;
      rtb_Add_oh /= rtb_Subtract1_of;
    } else {
      rtb_Hypot_bl = 1.0;
      rtb_Add_oh = 0.0;
    }

    /* End of Switch: '<S244>/Switch1' */
    rtb_thetay_i = rt_atan2d_snf(rtb_Add_oh, rtb_Hypot_bl);
  } else {
    rtb_thetay_i = Code_Gen_Model_B.FR_Desired_Module_Angle;
  }

  /* Sum: '<S236>/Sum' incorporates:
   *  Sum: '<S235>/Add'
   */
  rtb_thetay_i -= Code_Gen_Model_B.FR_Steer_Module_Angle;

  /* Sum: '<S249>/Add1' incorporates:
   *  Constant: '<S249>/Constant3'
   *  Constant: '<S249>/Constant4'
   *  Math: '<S249>/Math Function'
   *  Sum: '<S236>/Sum'
   *  Sum: '<S249>/Add2'
   */
  rtb_rx_kh = rt_modd_snf(rtb_thetay_i + 3.1415926535897931, 6.2831853071795862)
    - 3.1415926535897931;

  /* Sum: '<S251>/Sum1' incorporates:
   *  Constant: '<S236>/Constant2'
   *  Product: '<S251>/Product'
   *  Sum: '<S251>/Sum'
   *  UnitDelay: '<S251>/Unit Delay1'
   */
  rtb_Add_oh = ((rtb_rx_kh - Code_Gen_Model_DW.UnitDelay1_DSTATE_n) *
                Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_n;

  /* Product: '<S236>/Product' incorporates:
   *  Constant: '<S236>/Constant3'
   */
  rtb_Subtract1_of = rtb_Add_oh * Steering_Motor_Control_D;

  /* Sum: '<S250>/Diff' incorporates:
   *  UnitDelay: '<S250>/UD'
   *
   * Block description for '<S250>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S250>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Add_ov = rtb_Subtract1_of - Code_Gen_Model_DW.UD_DSTATE_i;

  /* Saturate: '<S236>/Saturation' */
  if (rtb_Add_ov > Steering_Motor_Control_D_UL) {
    rtb_Add_ov = Steering_Motor_Control_D_UL;
  } else if (rtb_Add_ov < Steering_Motor_Control_D_LL) {
    rtb_Add_ov = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S236>/Add' incorporates:
   *  Gain: '<S236>/Gain1'
   *  Saturate: '<S236>/Saturation'
   */
  rtb_Add_i = (Steering_Motor_Control_P * rtb_rx_kh) + rtb_Add_ov;

  /* Sum: '<S236>/Subtract' incorporates:
   *  Constant: '<S236>/Constant'
   */
  rtb_Switch2_k = 1.0 - rtb_Add_i;

  /* Sum: '<S236>/Sum2' incorporates:
   *  Gain: '<S236>/Gain2'
   *  UnitDelay: '<S236>/Unit Delay'
   */
  rtb_Hypot_bl = (Steering_Motor_Control_I * rtb_rx_kh) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_dt;

  /* Switch: '<S252>/Switch2' incorporates:
   *  Constant: '<S236>/Constant'
   *  RelationalOperator: '<S252>/LowerRelop1'
   *  Sum: '<S236>/Subtract'
   */
  if (!(rtb_Hypot_bl > (1.0 - rtb_Add_i))) {
    /* Switch: '<S252>/Switch' incorporates:
     *  Constant: '<S236>/Constant1'
     *  RelationalOperator: '<S252>/UpperRelop'
     *  Sum: '<S236>/Subtract1'
     */
    if (rtb_Hypot_bl < (-1.0 - rtb_Add_i)) {
      rtb_Switch2_k = -1.0 - rtb_Add_i;
    } else {
      rtb_Switch2_k = rtb_Hypot_bl;
    }

    /* End of Switch: '<S252>/Switch' */
  }

  /* End of Switch: '<S252>/Switch2' */

  /* Saturate: '<S236>/Saturation1' */
  if (rtb_Switch2_k > Steering_Motor_Control_I_UL) {
    rtb_Hypot_bl = Steering_Motor_Control_I_UL;
  } else if (rtb_Switch2_k < Steering_Motor_Control_I_LL) {
    rtb_Hypot_bl = Steering_Motor_Control_I_LL;
  } else {
    rtb_Hypot_bl = rtb_Switch2_k;
  }

  /* End of Saturate: '<S236>/Saturation1' */

  /* Sum: '<S236>/Add1' */
  rtb_Add_ov = rtb_Add_i + rtb_Hypot_bl;

  /* Saturate: '<S236>/Saturation2' */
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

  /* End of Saturate: '<S236>/Saturation2' */

  /* Product: '<S331>/Product1' */
  Code_Gen_Model_B.FR_Desired_Wheel_Speed =
    Code_Gen_Model_B.FR_Desired_Wheel_Speed_in * rtb_Switch_jh;

  /* Switch: '<S234>/Speed_Switch' incorporates:
   *  UnaryMinus: '<S234>/Unary Minus'
   */
  if (rtb_Gamepad_POV_Up) {
    tmp = -Code_Gen_Model_B.FR_Desired_Wheel_Speed;
  } else {
    tmp = Code_Gen_Model_B.FR_Desired_Wheel_Speed;
  }

  /* Product: '<S237>/Product2' incorporates:
   *  Constant: '<S237>/Constant'
   *  Switch: '<S234>/Speed_Switch'
   */
  rtb_rx_kh = tmp * 1150.4247703785388;

  /* Signum: '<S232>/Sign' */
  if (rtIsNaN(rtb_rx_kh)) {
    tmp = (rtNaN);
  } else if (rtb_rx_kh < 0.0) {
    tmp = -1.0;
  } else {
    tmp = (rtb_rx_kh > 0.0);
  }

  /* Signum: '<S232>/Sign1' incorporates:
   *  Inport: '<Root>/FrontRight_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.FrontRight_Drive_Motor_Speed)) {
    rtb_Rotationmatrixfromlocalto_0 = (rtNaN);
  } else if (Code_Gen_Model_U.FrontRight_Drive_Motor_Speed < 0.0) {
    rtb_Rotationmatrixfromlocalto_0 = -1.0;
  } else {
    rtb_Rotationmatrixfromlocalto_0 =
      (Code_Gen_Model_U.FrontRight_Drive_Motor_Speed > 0.0);
  }

  /* Product: '<S207>/Product' incorporates:
   *  Abs: '<S232>/Abs'
   *  Abs: '<S235>/Abs'
   *  Constant: '<S238>/Constant'
   *  Constant: '<S248>/Constant3'
   *  Constant: '<S248>/Constant4'
   *  Inport: '<Root>/FrontRight_Drive_Motor_Speed'
   *  Logic: '<S232>/OR'
   *  Lookup_n-D: '<S235>/1-D Lookup Table'
   *  Math: '<S248>/Math Function'
   *  RelationalOperator: '<S232>/Equal1'
   *  RelationalOperator: '<S238>/Compare'
   *  Signum: '<S232>/Sign'
   *  Signum: '<S232>/Sign1'
   *  Sum: '<S248>/Add1'
   *  Sum: '<S248>/Add2'
   */
  rtb_rx_kh = (((real_T)((tmp == rtb_Rotationmatrixfromlocalto_0) || (fabs
    (Code_Gen_Model_U.FrontRight_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_rx_kh) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_thetay_i + 1.5707963267948966, 3.1415926535897931) -
          1.5707963267948966), Code_Gen_Model_ConstP.pooled27,
     Code_Gen_Model_ConstP.pooled26, 1U);

  /* Gain: '<S233>/Gain' */
  rtb_FeedForward_n = Drive_Motor_Control_FF * rtb_rx_kh;

  /* Sum: '<S233>/Sum' incorporates:
   *  Inport: '<Root>/FrontRight_Drive_Motor_Speed'
   */
  rtb_rx_kh -= Code_Gen_Model_U.FrontRight_Drive_Motor_Speed;

  /* Sum: '<S240>/Sum1' incorporates:
   *  Constant: '<S233>/Constant2'
   *  Product: '<S240>/Product'
   *  Sum: '<S240>/Sum'
   *  UnitDelay: '<S240>/Unit Delay1'
   */
  rtb_Add_i = ((rtb_rx_kh - Code_Gen_Model_DW.UnitDelay1_DSTATE_b1) *
               Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_b1;

  /* Product: '<S233>/Product' incorporates:
   *  Constant: '<S233>/Constant3'
   */
  rtb_Subtract1_a = rtb_Add_i * Drive_Motor_Control_D;

  /* Sum: '<S239>/Diff' incorporates:
   *  UnitDelay: '<S239>/UD'
   *
   * Block description for '<S239>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S239>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Add_ov = rtb_Subtract1_a - Code_Gen_Model_DW.UD_DSTATE_e;

  /* Saturate: '<S233>/Saturation' */
  if (rtb_Add_ov > Drive_Motor_Control_D_UL) {
    rtb_Add_ov = Drive_Motor_Control_D_UL;
  } else if (rtb_Add_ov < Drive_Motor_Control_D_LL) {
    rtb_Add_ov = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S233>/Add' incorporates:
   *  Gain: '<S233>/Gain1'
   *  Saturate: '<S233>/Saturation'
   */
  rtb_Add_o2 = ((Drive_Motor_Control_P * rtb_rx_kh) + rtb_FeedForward_n) +
    rtb_Add_ov;

  /* Sum: '<S233>/Subtract' incorporates:
   *  Constant: '<S233>/Constant'
   */
  rtb_thetay_i = 1.0 - rtb_Add_o2;

  /* Sum: '<S233>/Sum2' incorporates:
   *  Gain: '<S233>/Gain2'
   *  UnitDelay: '<S233>/Unit Delay'
   */
  rtb_FeedForward_n = (Drive_Motor_Control_I * rtb_rx_kh) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_em;

  /* Switch: '<S241>/Switch2' incorporates:
   *  Constant: '<S233>/Constant'
   *  RelationalOperator: '<S241>/LowerRelop1'
   *  Sum: '<S233>/Subtract'
   */
  if (!(rtb_FeedForward_n > (1.0 - rtb_Add_o2))) {
    /* Switch: '<S241>/Switch' incorporates:
     *  Constant: '<S233>/Constant1'
     *  RelationalOperator: '<S241>/UpperRelop'
     *  Sum: '<S233>/Subtract1'
     */
    if (rtb_FeedForward_n < (-1.0 - rtb_Add_o2)) {
      rtb_thetay_i = -1.0 - rtb_Add_o2;
    } else {
      rtb_thetay_i = rtb_FeedForward_n;
    }

    /* End of Switch: '<S241>/Switch' */
  }

  /* End of Switch: '<S241>/Switch2' */

  /* Saturate: '<S233>/Saturation1' */
  if (rtb_thetay_i > Drive_Motor_Control_I_UL) {
    rtb_FeedForward_n = Drive_Motor_Control_I_UL;
  } else if (rtb_thetay_i < Drive_Motor_Control_I_LL) {
    rtb_FeedForward_n = Drive_Motor_Control_I_LL;
  } else {
    rtb_FeedForward_n = rtb_thetay_i;
  }

  /* End of Saturate: '<S233>/Saturation1' */

  /* Sum: '<S233>/Add1' */
  rtb_Add_ov = rtb_Add_o2 + rtb_FeedForward_n;

  /* Saturate: '<S233>/Saturation2' */
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

  /* End of Saturate: '<S233>/Saturation2' */

  /* Switch: '<S346>/Switch' */
  if (!Compare) {
    /* Switch: '<S346>/Switch' incorporates:
     *  Fcn: '<S347>/x->theta'
     */
    Code_Gen_Model_B.BL_Desired_Module_Angle = rt_atan2d_snf(rtb_Minus_n[1],
      rtb_Minus_n[0]);
  }

  /* End of Switch: '<S346>/Switch' */

  /* Trigonometry: '<S266>/Cos4' incorporates:
   *  Switch: '<S255>/Angle_Switch'
   *  Trigonometry: '<S265>/Cos4'
   */
  rtb_Add_gd = cos(Code_Gen_Model_B.BL_Desired_Module_Angle);

  /* Sum: '<S204>/Add1' incorporates:
   *  Constant: '<S204>/Constant3'
   *  Constant: '<S204>/Constant4'
   *  Gain: '<S19>/Revolutions to Radians2'
   *  Inport: '<Root>/BackLeft_Steer_Rev'
   *  Inport: '<Root>/BackLeft_Turn_Offset'
   *  Math: '<S204>/Math Function'
   *  Sum: '<S19>/Add2'
   *  Sum: '<S204>/Add2'
   */
  Code_Gen_Model_B.BL_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.BackLeft_Steer_Rev -
       Code_Gen_Model_U.BackLeft_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Trigonometry: '<S266>/Sin5' incorporates:
   *  UnaryMinus: '<S264>/Unary Minus'
   */
  rtb_Switch2_k = sin(-Code_Gen_Model_B.BL_Steer_Module_Angle);

  /* Trigonometry: '<S266>/Sin4' incorporates:
   *  Switch: '<S255>/Angle_Switch'
   *  Trigonometry: '<S265>/Sin4'
   */
  rtb_Subtract_e = sin(Code_Gen_Model_B.BL_Desired_Module_Angle);

  /* Trigonometry: '<S266>/Cos5' incorporates:
   *  UnaryMinus: '<S264>/Unary Minus'
   */
  rtb_rx_kh = cos(-Code_Gen_Model_B.BL_Steer_Module_Angle);

  /* Sum: '<S266>/Subtract1' incorporates:
   *  Product: '<S266>/Product2'
   *  Product: '<S266>/Product3'
   *  Trigonometry: '<S266>/Cos4'
   *  Trigonometry: '<S266>/Sin4'
   */
  rtb_Add_o2 = (rtb_Add_gd * rtb_Switch2_k) + (rtb_Subtract_e * rtb_rx_kh);

  /* Sum: '<S266>/Subtract' incorporates:
   *  Product: '<S266>/Product'
   *  Product: '<S266>/Product1'
   *  Trigonometry: '<S266>/Cos4'
   *  Trigonometry: '<S266>/Sin4'
   */
  rtb_Subtract1_do = (rtb_Add_gd * rtb_rx_kh) - (rtb_Subtract_e * rtb_Switch2_k);

  /* Math: '<S266>/Hypot' */
  rtb_Hypot_d = rt_hypotd_snf(rtb_Subtract1_do, rtb_Add_o2);

  /* Switch: '<S266>/Switch' incorporates:
   *  Constant: '<S266>/Constant'
   *  Constant: '<S266>/Constant1'
   *  Constant: '<S267>/Constant'
   *  Product: '<S266>/Divide'
   *  Product: '<S266>/Divide1'
   *  RelationalOperator: '<S267>/Compare'
   *  Switch: '<S266>/Switch1'
   */
  if (rtb_Hypot_d > 1.0E-6) {
    rtb_thetay_i = rtb_Add_o2 / rtb_Hypot_d;
    rtb_rx_kh = rtb_Subtract1_do / rtb_Hypot_d;
  } else {
    rtb_thetay_i = 0.0;
    rtb_rx_kh = 1.0;
  }

  /* End of Switch: '<S266>/Switch' */

  /* RelationalOperator: '<S263>/Compare' incorporates:
   *  Abs: '<S255>/Abs'
   *  Constant: '<S263>/Constant'
   *  Trigonometry: '<S266>/Atan1'
   */
  Compare = (fabs(rt_atan2d_snf(rtb_thetay_i, rtb_rx_kh)) > 1.5707963267948966);

  /* Switch: '<S255>/Angle_Switch' incorporates:
   *  Trigonometry: '<S265>/Atan1'
   */
  if (Compare) {
    /* Sum: '<S265>/Subtract1' incorporates:
     *  Product: '<S265>/Product2'
     *  Product: '<S265>/Product3'
     */
    rtb_Add_o2 = (rtb_Add_gd * Code_Gen_Model_ConstB.Sin5_e) + (rtb_Subtract_e *
      Code_Gen_Model_ConstB.Cos5_i);

    /* Sum: '<S265>/Subtract' incorporates:
     *  Product: '<S265>/Product'
     *  Product: '<S265>/Product1'
     */
    rtb_Hypot_d = (rtb_Add_gd * Code_Gen_Model_ConstB.Cos5_i) - (rtb_Subtract_e *
      Code_Gen_Model_ConstB.Sin5_e);

    /* Math: '<S265>/Hypot' */
    rtb_Subtract1_do = rt_hypotd_snf(rtb_Hypot_d, rtb_Add_o2);

    /* Switch: '<S265>/Switch1' incorporates:
     *  Constant: '<S265>/Constant'
     *  Constant: '<S265>/Constant1'
     *  Constant: '<S268>/Constant'
     *  Product: '<S265>/Divide'
     *  Product: '<S265>/Divide1'
     *  RelationalOperator: '<S268>/Compare'
     *  Switch: '<S265>/Switch'
     */
    if (rtb_Subtract1_do > 1.0E-6) {
      rtb_Hypot_d /= rtb_Subtract1_do;
      rtb_Add_o2 /= rtb_Subtract1_do;
    } else {
      rtb_Hypot_d = 1.0;
      rtb_Add_o2 = 0.0;
    }

    /* End of Switch: '<S265>/Switch1' */
    rtb_thetay_i = rt_atan2d_snf(rtb_Add_o2, rtb_Hypot_d);
  } else {
    rtb_thetay_i = Code_Gen_Model_B.BL_Desired_Module_Angle;
  }

  /* Sum: '<S257>/Sum' incorporates:
   *  Sum: '<S256>/Add'
   */
  rtb_thetay_i -= Code_Gen_Model_B.BL_Steer_Module_Angle;

  /* Sum: '<S270>/Add1' incorporates:
   *  Constant: '<S270>/Constant3'
   *  Constant: '<S270>/Constant4'
   *  Math: '<S270>/Math Function'
   *  Sum: '<S257>/Sum'
   *  Sum: '<S270>/Add2'
   */
  rtb_rx_kh = rt_modd_snf(rtb_thetay_i + 3.1415926535897931, 6.2831853071795862)
    - 3.1415926535897931;

  /* Sum: '<S272>/Sum1' incorporates:
   *  Constant: '<S257>/Constant2'
   *  Product: '<S272>/Product'
   *  Sum: '<S272>/Sum'
   *  UnitDelay: '<S272>/Unit Delay1'
   */
  rtb_Add_o2 = ((rtb_rx_kh - Code_Gen_Model_DW.UnitDelay1_DSTATE_nw) *
                Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_nw;

  /* Product: '<S257>/Product' incorporates:
   *  Constant: '<S257>/Constant3'
   */
  rtb_Subtract1_do = rtb_Add_o2 * Steering_Motor_Control_D;

  /* Sum: '<S271>/Diff' incorporates:
   *  UnitDelay: '<S271>/UD'
   *
   * Block description for '<S271>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S271>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Add_ov = rtb_Subtract1_do - Code_Gen_Model_DW.UD_DSTATE_k;

  /* Saturate: '<S257>/Saturation' */
  if (rtb_Add_ov > Steering_Motor_Control_D_UL) {
    rtb_Add_ov = Steering_Motor_Control_D_UL;
  } else if (rtb_Add_ov < Steering_Motor_Control_D_LL) {
    rtb_Add_ov = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S257>/Add' incorporates:
   *  Gain: '<S257>/Gain1'
   *  Saturate: '<S257>/Saturation'
   */
  rtb_Add_gj = (Steering_Motor_Control_P * rtb_rx_kh) + rtb_Add_ov;

  /* Sum: '<S257>/Subtract' incorporates:
   *  Constant: '<S257>/Constant'
   */
  rtb_Switch2_k = 1.0 - rtb_Add_gj;

  /* Sum: '<S257>/Sum2' incorporates:
   *  Gain: '<S257>/Gain2'
   *  UnitDelay: '<S257>/Unit Delay'
   */
  rtb_Hypot_d = (Steering_Motor_Control_I * rtb_rx_kh) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_k;

  /* Switch: '<S273>/Switch2' incorporates:
   *  Constant: '<S257>/Constant'
   *  RelationalOperator: '<S273>/LowerRelop1'
   *  Sum: '<S257>/Subtract'
   */
  if (!(rtb_Hypot_d > (1.0 - rtb_Add_gj))) {
    /* Switch: '<S273>/Switch' incorporates:
     *  Constant: '<S257>/Constant1'
     *  RelationalOperator: '<S273>/UpperRelop'
     *  Sum: '<S257>/Subtract1'
     */
    if (rtb_Hypot_d < (-1.0 - rtb_Add_gj)) {
      rtb_Switch2_k = -1.0 - rtb_Add_gj;
    } else {
      rtb_Switch2_k = rtb_Hypot_d;
    }

    /* End of Switch: '<S273>/Switch' */
  }

  /* End of Switch: '<S273>/Switch2' */

  /* Saturate: '<S257>/Saturation1' */
  if (rtb_Switch2_k > Steering_Motor_Control_I_UL) {
    rtb_Hypot_d = Steering_Motor_Control_I_UL;
  } else if (rtb_Switch2_k < Steering_Motor_Control_I_LL) {
    rtb_Hypot_d = Steering_Motor_Control_I_LL;
  } else {
    rtb_Hypot_d = rtb_Switch2_k;
  }

  /* End of Saturate: '<S257>/Saturation1' */

  /* Sum: '<S257>/Add1' */
  rtb_Add_ov = rtb_Add_gj + rtb_Hypot_d;

  /* Saturate: '<S257>/Saturation2' */
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

  /* End of Saturate: '<S257>/Saturation2' */

  /* Product: '<S331>/Product2' */
  Code_Gen_Model_B.BL_Desired_Wheel_Speed =
    Code_Gen_Model_B.BL_Desired_Wheel_Speed_in * rtb_Switch_jh;

  /* Switch: '<S255>/Speed_Switch' incorporates:
   *  UnaryMinus: '<S255>/Unary Minus'
   */
  if (Compare) {
    tmp = -Code_Gen_Model_B.BL_Desired_Wheel_Speed;
  } else {
    tmp = Code_Gen_Model_B.BL_Desired_Wheel_Speed;
  }

  /* Product: '<S258>/Product2' incorporates:
   *  Constant: '<S258>/Constant'
   *  Switch: '<S255>/Speed_Switch'
   */
  rtb_rx_kh = tmp * 1150.4247703785388;

  /* Signum: '<S253>/Sign' */
  if (rtIsNaN(rtb_rx_kh)) {
    tmp = (rtNaN);
  } else if (rtb_rx_kh < 0.0) {
    tmp = -1.0;
  } else {
    tmp = (rtb_rx_kh > 0.0);
  }

  /* Signum: '<S253>/Sign1' incorporates:
   *  Inport: '<Root>/BackLeft_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.BackLeft_Drive_Motor_Speed)) {
    rtb_Rotationmatrixfromlocalto_0 = (rtNaN);
  } else if (Code_Gen_Model_U.BackLeft_Drive_Motor_Speed < 0.0) {
    rtb_Rotationmatrixfromlocalto_0 = -1.0;
  } else {
    rtb_Rotationmatrixfromlocalto_0 =
      (Code_Gen_Model_U.BackLeft_Drive_Motor_Speed > 0.0);
  }

  /* Product: '<S208>/Product' incorporates:
   *  Abs: '<S253>/Abs'
   *  Abs: '<S256>/Abs'
   *  Constant: '<S259>/Constant'
   *  Constant: '<S269>/Constant3'
   *  Constant: '<S269>/Constant4'
   *  Inport: '<Root>/BackLeft_Drive_Motor_Speed'
   *  Logic: '<S253>/OR'
   *  Lookup_n-D: '<S256>/1-D Lookup Table'
   *  Math: '<S269>/Math Function'
   *  RelationalOperator: '<S253>/Equal1'
   *  RelationalOperator: '<S259>/Compare'
   *  Signum: '<S253>/Sign'
   *  Signum: '<S253>/Sign1'
   *  Sum: '<S269>/Add1'
   *  Sum: '<S269>/Add2'
   */
  rtb_rx_kh = (((real_T)((tmp == rtb_Rotationmatrixfromlocalto_0) || (fabs
    (Code_Gen_Model_U.BackLeft_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_rx_kh) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_thetay_i + 1.5707963267948966, 3.1415926535897931) -
          1.5707963267948966), Code_Gen_Model_ConstP.pooled27,
     Code_Gen_Model_ConstP.pooled26, 1U);

  /* Gain: '<S254>/Gain' */
  rtb_FeedForward_a = Drive_Motor_Control_FF * rtb_rx_kh;

  /* Sum: '<S254>/Sum' incorporates:
   *  Inport: '<Root>/BackLeft_Drive_Motor_Speed'
   */
  rtb_rx_kh -= Code_Gen_Model_U.BackLeft_Drive_Motor_Speed;

  /* Sum: '<S261>/Sum1' incorporates:
   *  Constant: '<S254>/Constant2'
   *  Product: '<S261>/Product'
   *  Sum: '<S261>/Sum'
   *  UnitDelay: '<S261>/Unit Delay1'
   */
  rtb_Add_gj = ((rtb_rx_kh - Code_Gen_Model_DW.UnitDelay1_DSTATE_f) *
                Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_f;

  /* Product: '<S254>/Product' incorporates:
   *  Constant: '<S254>/Constant3'
   */
  rtb_Subtract1_f = rtb_Add_gj * Drive_Motor_Control_D;

  /* Sum: '<S260>/Diff' incorporates:
   *  UnitDelay: '<S260>/UD'
   *
   * Block description for '<S260>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S260>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Add_ov = rtb_Subtract1_f - Code_Gen_Model_DW.UD_DSTATE_l;

  /* Saturate: '<S254>/Saturation' */
  if (rtb_Add_ov > Drive_Motor_Control_D_UL) {
    rtb_Add_ov = Drive_Motor_Control_D_UL;
  } else if (rtb_Add_ov < Drive_Motor_Control_D_LL) {
    rtb_Add_ov = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S254>/Add' incorporates:
   *  Gain: '<S254>/Gain1'
   *  Saturate: '<S254>/Saturation'
   */
  rtb_Add_gd = ((Drive_Motor_Control_P * rtb_rx_kh) + rtb_FeedForward_a) +
    rtb_Add_ov;

  /* Sum: '<S254>/Subtract' incorporates:
   *  Constant: '<S254>/Constant'
   */
  rtb_thetay_i = 1.0 - rtb_Add_gd;

  /* Sum: '<S254>/Sum2' incorporates:
   *  Gain: '<S254>/Gain2'
   *  UnitDelay: '<S254>/Unit Delay'
   */
  rtb_FeedForward_a = (Drive_Motor_Control_I * rtb_rx_kh) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_gp;

  /* Switch: '<S262>/Switch2' incorporates:
   *  Constant: '<S254>/Constant'
   *  RelationalOperator: '<S262>/LowerRelop1'
   *  Sum: '<S254>/Subtract'
   */
  if (!(rtb_FeedForward_a > (1.0 - rtb_Add_gd))) {
    /* Sum: '<S254>/Subtract1' incorporates:
     *  Constant: '<S254>/Constant1'
     */
    rtb_thetay_i = -1.0 - rtb_Add_gd;

    /* Switch: '<S262>/Switch' incorporates:
     *  Constant: '<S254>/Constant1'
     *  RelationalOperator: '<S262>/UpperRelop'
     *  Sum: '<S254>/Subtract1'
     */
    if (!(rtb_FeedForward_a < (-1.0 - rtb_Add_gd))) {
      rtb_thetay_i = rtb_FeedForward_a;
    }

    /* End of Switch: '<S262>/Switch' */
  }

  /* End of Switch: '<S262>/Switch2' */

  /* Saturate: '<S254>/Saturation1' */
  if (rtb_thetay_i > Drive_Motor_Control_I_UL) {
    rtb_FeedForward_a = Drive_Motor_Control_I_UL;
  } else if (rtb_thetay_i < Drive_Motor_Control_I_LL) {
    rtb_FeedForward_a = Drive_Motor_Control_I_LL;
  } else {
    rtb_FeedForward_a = rtb_thetay_i;
  }

  /* End of Saturate: '<S254>/Saturation1' */

  /* Sum: '<S254>/Add1' */
  rtb_Add_ov = rtb_Add_gd + rtb_FeedForward_a;

  /* Saturate: '<S254>/Saturation2' */
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

  /* End of Saturate: '<S254>/Saturation2' */

  /* Switch: '<S351>/Switch' */
  if (!rtb_Is_Absolute_Translation_g) {
    /* Switch: '<S351>/Switch' incorporates:
     *  Fcn: '<S352>/x->theta'
     */
    Code_Gen_Model_B.BR_Desired_Module_Angle = rt_atan2d_snf(rtb_Add2_k_idx_1,
      rtb_Add2_k_idx_0);
  }

  /* End of Switch: '<S351>/Switch' */

  /* Trigonometry: '<S287>/Cos4' incorporates:
   *  Switch: '<S276>/Angle_Switch'
   *  Trigonometry: '<S286>/Cos4'
   */
  rtb_Add_gd = cos(Code_Gen_Model_B.BR_Desired_Module_Angle);

  /* Sum: '<S205>/Add1' incorporates:
   *  Constant: '<S205>/Constant3'
   *  Constant: '<S205>/Constant4'
   *  Gain: '<S19>/Revolutions to Radians3'
   *  Inport: '<Root>/BackRight_Steer_Rev'
   *  Inport: '<Root>/BackRight_Turn_Offset'
   *  Math: '<S205>/Math Function'
   *  Sum: '<S19>/Add3'
   *  Sum: '<S205>/Add2'
   */
  Code_Gen_Model_B.BR_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.BackRight_Steer_Rev -
       Code_Gen_Model_U.BackRight_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Trigonometry: '<S287>/Sin5' incorporates:
   *  UnaryMinus: '<S285>/Unary Minus'
   */
  rtb_Switch2_k = sin(-Code_Gen_Model_B.BR_Steer_Module_Angle);

  /* Trigonometry: '<S287>/Sin4' incorporates:
   *  Switch: '<S276>/Angle_Switch'
   *  Trigonometry: '<S286>/Sin4'
   */
  rtb_Subtract_e = sin(Code_Gen_Model_B.BR_Desired_Module_Angle);

  /* Trigonometry: '<S287>/Cos5' incorporates:
   *  UnaryMinus: '<S285>/Unary Minus'
   */
  rtb_rx_kh = cos(-Code_Gen_Model_B.BR_Steer_Module_Angle);

  /* Sum: '<S287>/Subtract1' incorporates:
   *  Product: '<S287>/Product2'
   *  Product: '<S287>/Product3'
   *  Trigonometry: '<S287>/Cos4'
   *  Trigonometry: '<S287>/Sin4'
   */
  rtb_thetay_i = (rtb_Add_gd * rtb_Switch2_k) + (rtb_Subtract_e * rtb_rx_kh);

  /* Sum: '<S287>/Subtract' incorporates:
   *  Product: '<S287>/Product'
   *  Product: '<S287>/Product1'
   *  Trigonometry: '<S287>/Cos4'
   *  Trigonometry: '<S287>/Sin4'
   */
  rtb_Switch2_k = (rtb_Add_gd * rtb_rx_kh) - (rtb_Subtract_e * rtb_Switch2_k);

  /* Math: '<S287>/Hypot' */
  rtb_Add2_k_idx_0 = rt_hypotd_snf(rtb_Switch2_k, rtb_thetay_i);

  /* Switch: '<S287>/Switch' incorporates:
   *  Constant: '<S287>/Constant'
   *  Constant: '<S287>/Constant1'
   *  Constant: '<S288>/Constant'
   *  Product: '<S287>/Divide'
   *  Product: '<S287>/Divide1'
   *  RelationalOperator: '<S288>/Compare'
   *  Switch: '<S287>/Switch1'
   */
  if (rtb_Add2_k_idx_0 > 1.0E-6) {
    rtb_thetay_i /= rtb_Add2_k_idx_0;
    rtb_rx_kh = rtb_Switch2_k / rtb_Add2_k_idx_0;
  } else {
    rtb_thetay_i = 0.0;
    rtb_rx_kh = 1.0;
  }

  /* End of Switch: '<S287>/Switch' */

  /* RelationalOperator: '<S284>/Compare' incorporates:
   *  Abs: '<S276>/Abs'
   *  Constant: '<S284>/Constant'
   *  Trigonometry: '<S287>/Atan1'
   */
  rtb_Is_Absolute_Translation_g = (fabs(rt_atan2d_snf(rtb_thetay_i, rtb_rx_kh)) >
    1.5707963267948966);

  /* Switch: '<S276>/Angle_Switch' incorporates:
   *  Trigonometry: '<S286>/Atan1'
   */
  if (rtb_Is_Absolute_Translation_g) {
    /* Sum: '<S286>/Subtract1' incorporates:
     *  Product: '<S286>/Product2'
     *  Product: '<S286>/Product3'
     */
    rtb_thetay_i = (rtb_Add_gd * Code_Gen_Model_ConstB.Sin5_c) + (rtb_Subtract_e
      * Code_Gen_Model_ConstB.Cos5_b);

    /* Sum: '<S286>/Subtract' incorporates:
     *  Product: '<S286>/Product'
     *  Product: '<S286>/Product1'
     */
    rtb_Subtract_e = (rtb_Add_gd * Code_Gen_Model_ConstB.Cos5_b) -
      (rtb_Subtract_e * Code_Gen_Model_ConstB.Sin5_c);

    /* Math: '<S286>/Hypot' */
    rtb_Add_gd = rt_hypotd_snf(rtb_Subtract_e, rtb_thetay_i);

    /* Switch: '<S286>/Switch1' incorporates:
     *  Constant: '<S286>/Constant'
     *  Constant: '<S286>/Constant1'
     *  Constant: '<S289>/Constant'
     *  Product: '<S286>/Divide'
     *  Product: '<S286>/Divide1'
     *  RelationalOperator: '<S289>/Compare'
     *  Switch: '<S286>/Switch'
     */
    if (rtb_Add_gd > 1.0E-6) {
      rtb_Subtract_e /= rtb_Add_gd;
      rtb_thetay_i /= rtb_Add_gd;
    } else {
      rtb_Subtract_e = 1.0;
      rtb_thetay_i = 0.0;
    }

    /* End of Switch: '<S286>/Switch1' */
    rtb_thetay_i = rt_atan2d_snf(rtb_thetay_i, rtb_Subtract_e);
  } else {
    rtb_thetay_i = Code_Gen_Model_B.BR_Desired_Module_Angle;
  }

  /* Sum: '<S278>/Sum' incorporates:
   *  Sum: '<S277>/Add'
   */
  rtb_thetay_i -= Code_Gen_Model_B.BR_Steer_Module_Angle;

  /* Sum: '<S291>/Add1' incorporates:
   *  Constant: '<S291>/Constant3'
   *  Constant: '<S291>/Constant4'
   *  Math: '<S291>/Math Function'
   *  Sum: '<S278>/Sum'
   *  Sum: '<S291>/Add2'
   */
  rtb_rx_kh = rt_modd_snf(rtb_thetay_i + 3.1415926535897931, 6.2831853071795862)
    - 3.1415926535897931;

  /* Sum: '<S293>/Sum1' incorporates:
   *  Constant: '<S278>/Constant2'
   *  Product: '<S293>/Product'
   *  Sum: '<S293>/Sum'
   *  UnitDelay: '<S293>/Unit Delay1'
   */
  rtb_Add_gd = ((rtb_rx_kh - Code_Gen_Model_DW.UnitDelay1_DSTATE_iw) *
                Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_iw;

  /* Product: '<S278>/Product' incorporates:
   *  Constant: '<S278>/Constant3'
   */
  rtb_Subtract_e = rtb_Add_gd * Steering_Motor_Control_D;

  /* Sum: '<S292>/Diff' incorporates:
   *  UnitDelay: '<S292>/UD'
   *
   * Block description for '<S292>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S292>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Add_ov = rtb_Subtract_e - Code_Gen_Model_DW.UD_DSTATE_ll;

  /* Saturate: '<S278>/Saturation' */
  if (rtb_Add_ov > Steering_Motor_Control_D_UL) {
    rtb_Add_ov = Steering_Motor_Control_D_UL;
  } else if (rtb_Add_ov < Steering_Motor_Control_D_LL) {
    rtb_Add_ov = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S278>/Add' incorporates:
   *  Gain: '<S278>/Gain1'
   *  Saturate: '<S278>/Saturation'
   */
  rtb_Add2_k_idx_0 = (Steering_Motor_Control_P * rtb_rx_kh) + rtb_Add_ov;

  /* Sum: '<S278>/Subtract' incorporates:
   *  Constant: '<S278>/Constant'
   */
  rtb_Switch2_k = 1.0 - rtb_Add2_k_idx_0;

  /* Sum: '<S278>/Sum2' incorporates:
   *  Gain: '<S278>/Gain2'
   *  UnitDelay: '<S278>/Unit Delay'
   */
  rtb_rx_kh = (Steering_Motor_Control_I * rtb_rx_kh) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_l;

  /* Switch: '<S294>/Switch2' incorporates:
   *  Constant: '<S278>/Constant'
   *  RelationalOperator: '<S294>/LowerRelop1'
   *  Sum: '<S278>/Subtract'
   */
  if (!(rtb_rx_kh > (1.0 - rtb_Add2_k_idx_0))) {
    /* Sum: '<S278>/Subtract1' incorporates:
     *  Constant: '<S278>/Constant1'
     */
    rtb_Switch2_k = -1.0 - rtb_Add2_k_idx_0;

    /* Switch: '<S294>/Switch' incorporates:
     *  Constant: '<S278>/Constant1'
     *  RelationalOperator: '<S294>/UpperRelop'
     *  Sum: '<S278>/Subtract1'
     */
    if (!(rtb_rx_kh < (-1.0 - rtb_Add2_k_idx_0))) {
      rtb_Switch2_k = rtb_rx_kh;
    }

    /* End of Switch: '<S294>/Switch' */
  }

  /* End of Switch: '<S294>/Switch2' */

  /* Saturate: '<S278>/Saturation1' */
  if (rtb_Switch2_k > Steering_Motor_Control_I_UL) {
    rtb_Switch2_k = Steering_Motor_Control_I_UL;
  } else if (rtb_Switch2_k < Steering_Motor_Control_I_LL) {
    rtb_Switch2_k = Steering_Motor_Control_I_LL;
  }

  /* End of Saturate: '<S278>/Saturation1' */

  /* Sum: '<S278>/Add1' */
  rtb_Add_ov = rtb_Add2_k_idx_0 + rtb_Switch2_k;

  /* Saturate: '<S278>/Saturation2' */
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

  /* End of Saturate: '<S278>/Saturation2' */

  /* Product: '<S331>/Product3' */
  Code_Gen_Model_B.BR_Desired_Wheel_Speed =
    Code_Gen_Model_B.BR_Desired_Wheel_Speed_in * rtb_Switch_jh;

  /* Switch: '<S276>/Speed_Switch' incorporates:
   *  UnaryMinus: '<S276>/Unary Minus'
   */
  if (rtb_Is_Absolute_Translation_g) {
    tmp = -Code_Gen_Model_B.BR_Desired_Wheel_Speed;
  } else {
    tmp = Code_Gen_Model_B.BR_Desired_Wheel_Speed;
  }

  /* Product: '<S279>/Product2' incorporates:
   *  Constant: '<S279>/Constant'
   *  Switch: '<S276>/Speed_Switch'
   */
  rtb_rx_kh = tmp * 1150.4247703785388;

  /* Signum: '<S274>/Sign' */
  if (rtIsNaN(rtb_rx_kh)) {
    tmp = (rtNaN);
  } else if (rtb_rx_kh < 0.0) {
    tmp = -1.0;
  } else {
    tmp = (rtb_rx_kh > 0.0);
  }

  /* Signum: '<S274>/Sign1' incorporates:
   *  Inport: '<Root>/BackRight_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.BackRight_Drive_Motor_Speed)) {
    rtb_Rotationmatrixfromlocalto_0 = (rtNaN);
  } else if (Code_Gen_Model_U.BackRight_Drive_Motor_Speed < 0.0) {
    rtb_Rotationmatrixfromlocalto_0 = -1.0;
  } else {
    rtb_Rotationmatrixfromlocalto_0 =
      (Code_Gen_Model_U.BackRight_Drive_Motor_Speed > 0.0);
  }

  /* Product: '<S209>/Product' incorporates:
   *  Abs: '<S274>/Abs'
   *  Abs: '<S277>/Abs'
   *  Constant: '<S280>/Constant'
   *  Constant: '<S290>/Constant3'
   *  Constant: '<S290>/Constant4'
   *  Inport: '<Root>/BackRight_Drive_Motor_Speed'
   *  Logic: '<S274>/OR'
   *  Lookup_n-D: '<S277>/1-D Lookup Table'
   *  Math: '<S290>/Math Function'
   *  RelationalOperator: '<S274>/Equal1'
   *  RelationalOperator: '<S280>/Compare'
   *  Signum: '<S274>/Sign'
   *  Signum: '<S274>/Sign1'
   *  Sum: '<S290>/Add1'
   *  Sum: '<S290>/Add2'
   */
  rtb_rx_kh = (((real_T)((tmp == rtb_Rotationmatrixfromlocalto_0) || (fabs
    (Code_Gen_Model_U.BackRight_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_rx_kh) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_thetay_i + 1.5707963267948966, 3.1415926535897931) -
          1.5707963267948966), Code_Gen_Model_ConstP.pooled27,
     Code_Gen_Model_ConstP.pooled26, 1U);

  /* Gain: '<S275>/Gain' */
  rtb_thetay_i = Drive_Motor_Control_FF * rtb_rx_kh;

  /* Sum: '<S275>/Sum' incorporates:
   *  Inport: '<Root>/BackRight_Drive_Motor_Speed'
   */
  rtb_rx_kh -= Code_Gen_Model_U.BackRight_Drive_Motor_Speed;

  /* Sum: '<S282>/Sum1' incorporates:
   *  Constant: '<S275>/Constant2'
   *  Product: '<S282>/Product'
   *  Sum: '<S282>/Sum'
   *  UnitDelay: '<S282>/Unit Delay1'
   */
  rtb_Switch_jh = ((rtb_rx_kh - Code_Gen_Model_DW.UnitDelay1_DSTATE_kw) *
                   Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_kw;

  /* Product: '<S275>/Product' incorporates:
   *  Constant: '<S275>/Constant3'
   */
  rtb_Add2_k_idx_0 = rtb_Switch_jh * Drive_Motor_Control_D;

  /* Sum: '<S281>/Diff' incorporates:
   *  UnitDelay: '<S281>/UD'
   *
   * Block description for '<S281>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S281>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Add_ov = rtb_Add2_k_idx_0 - Code_Gen_Model_DW.UD_DSTATE_c;

  /* Saturate: '<S275>/Saturation' */
  if (rtb_Add_ov > Drive_Motor_Control_D_UL) {
    rtb_Add_ov = Drive_Motor_Control_D_UL;
  } else if (rtb_Add_ov < Drive_Motor_Control_D_LL) {
    rtb_Add_ov = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S275>/Add' incorporates:
   *  Gain: '<S275>/Gain1'
   *  Saturate: '<S275>/Saturation'
   */
  rtb_Add_ov += (Drive_Motor_Control_P * rtb_rx_kh) + rtb_thetay_i;

  /* Sum: '<S275>/Subtract' incorporates:
   *  Constant: '<S275>/Constant'
   */
  rtb_thetay_i = 1.0 - rtb_Add_ov;

  /* Sum: '<S275>/Sum2' incorporates:
   *  Gain: '<S275>/Gain2'
   *  UnitDelay: '<S275>/Unit Delay'
   */
  rtb_rx_kh = (Drive_Motor_Control_I * rtb_rx_kh) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_a;

  /* Switch: '<S283>/Switch2' incorporates:
   *  Constant: '<S275>/Constant'
   *  RelationalOperator: '<S283>/LowerRelop1'
   *  Sum: '<S275>/Subtract'
   */
  if (!(rtb_rx_kh > (1.0 - rtb_Add_ov))) {
    /* Sum: '<S275>/Subtract1' incorporates:
     *  Constant: '<S275>/Constant1'
     */
    rtb_thetay_i = -1.0 - rtb_Add_ov;

    /* Switch: '<S283>/Switch' incorporates:
     *  Constant: '<S275>/Constant1'
     *  RelationalOperator: '<S283>/UpperRelop'
     *  Sum: '<S275>/Subtract1'
     */
    if (!(rtb_rx_kh < (-1.0 - rtb_Add_ov))) {
      rtb_thetay_i = rtb_rx_kh;
    }

    /* End of Switch: '<S283>/Switch' */
  }

  /* End of Switch: '<S283>/Switch2' */

  /* Saturate: '<S275>/Saturation1' */
  if (rtb_thetay_i > Drive_Motor_Control_I_UL) {
    rtb_rx_kh = Drive_Motor_Control_I_UL;
  } else if (rtb_thetay_i < Drive_Motor_Control_I_LL) {
    rtb_rx_kh = Drive_Motor_Control_I_LL;
  } else {
    rtb_rx_kh = rtb_thetay_i;
  }

  /* End of Saturate: '<S275>/Saturation1' */

  /* Sum: '<S275>/Add1' */
  rtb_Add_ov += rtb_rx_kh;

  /* Saturate: '<S275>/Saturation2' */
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

  /* End of Saturate: '<S275>/Saturation2' */

  /* Outport: '<Root>/Enable_Wheels' */
  Code_Gen_Model_Y.Enable_Wheels = rtb_rx_g;

  /* Outport: '<Root>/Reset_Wheel_Offsets' */
  Code_Gen_Model_Y.Reset_Wheel_Offsets = rtb_thetay_a;

  /* Outport: '<Root>/Disable_Wheels' */
  Code_Gen_Model_Y.Disable_Wheels = rtb_Uk1_iw;

  /* Outport: '<Root>/Swerve_Motors_Disabled' */
  Code_Gen_Model_Y.Swerve_Motors_Disabled = rtb_Swerve_Motors_Disabled;

  /* MinMax: '<S9>/Max' incorporates:
   *  Bias: '<S1>/Add Constant'
   *  Lookup_n-D: '<S9>/Range of Motion Protection Limit'
   *  Lookup_n-D: '<S9>/Range of Motion Protection Limit1'
   *  Merge: '<S15>/Merge13'
   */
  rtb_Uk1_iw = fmax(fmax(Code_Gen_Model_B.Elevator_Height_Desired, look1_binlcpw
    (Code_Gen_Model_B.Coral_Arm_Angle_Desired, Code_Gen_Model_ConstP.pooled29,
     Code_Gen_Model_ConstP.pooled28, 95U)), look1_binlcpw
                    (Code_Gen_Model_B.Coral_Arm_Angle_Measured,
                     Code_Gen_Model_ConstP.pooled29,
                     Code_Gen_Model_ConstP.pooled28, 95U));

  /* Switch: '<S9>/Switch3' incorporates:
   *  Abs: '<S9>/Abs1'
   *  Constant: '<S39>/Constant'
   *  Constant: '<S9>/Constant'
   *  Constant: '<S9>/Constant6'
   *  Logic: '<S9>/AND'
   *  RelationalOperator: '<S39>/Compare'
   *  RelationalOperator: '<S9>/Relational Operator'
   *  UnitDelay: '<S9>/Unit Delay'
   */
  if ((Code_Gen_Model_B.Elevator_Height_Desired < rtb_Uk1_iw) && (fabs
       (Code_Gen_Model_B.Elevator_Error) <= Elevator_Height_Error_Threshold)) {
    tmp = Elevator_Error_Increase;
  } else {
    tmp = 0.0;
  }

  /* Sum: '<S9>/Add' incorporates:
   *  Sum: '<S9>/Subtract'
   *  Switch: '<S9>/Switch3'
   */
  Code_Gen_Model_B.Elevator_Error = (rtb_Uk1_iw -
    Code_Gen_Model_B.Elevator_Height_Measured) + tmp;

  /* Gain: '<S42>/Gain1' */
  Code_Gen_Model_B.Elevator_Proportional = Elevator_Gain_Prop *
    Code_Gen_Model_B.Elevator_Error;

  /* Logic: '<S9>/Logical Operator2' incorporates:
   *  Abs: '<S9>/Abs'
   *  Constant: '<S38>/Constant'
   *  Constant: '<S40>/Constant'
   *  Logic: '<S9>/Logical Operator1'
   *  Logic: '<S9>/NOT2'
   *  RelationalOperator: '<S38>/Compare'
   *  RelationalOperator: '<S40>/Compare'
   */
  rtb_Swerve_Motors_Disabled = (((!(Code_Gen_Model_B.Elevator_Height_Desired ==
    0.0)) || (!(fabs(Code_Gen_Model_B.Elevator_Error) <=
                Elevator_Error_Bottom_Disable))) &&
    (Code_Gen_Model_B.Reefscape_Motors_Enable));

  /* Logic: '<S9>/Logical Operator' incorporates:
   *  Logic: '<S9>/NOT'
   *  Logic: '<S9>/OR'
   */
  rtb_Gamepad_POV_Up = (rtb_Swerve_Motors_Disabled && ((!rtb_Compare_ht) &&
    (!rtb_Compare_m)));

  /* Switch: '<S42>/Switch' */
  if (rtb_Gamepad_POV_Up) {
    /* Switch: '<S42>/Switch1' incorporates:
     *  UnitDelay: '<S51>/Delay Input1'
     *
     * Block description for '<S51>/Delay Input1':
     *
     *  Store in Global RAM
     */
    if (!Code_Gen_Model_DW.DelayInput1_DSTATE_be) {
      /* Switch: '<S42>/Switch' incorporates:
       *  Constant: '<S42>/Constant3'
       */
      Code_Gen_Model_B.Elevator_Integral = Elevator_Int_IC;
    } else {
      /* Sum: '<S42>/Sum2' incorporates:
       *  Gain: '<S42>/Gain2'
       *  UnitDelay: '<S42>/Unit Delay'
       */
      rtb_Uk1_iw = (Elevator_Gain_Int * Code_Gen_Model_B.Elevator_Error) +
        Code_Gen_Model_B.Elevator_Integral;

      /* Sum: '<S42>/Subtract' incorporates:
       *  Constant: '<S42>/Constant'
       */
      rtb_rx_g = Elevator_Total_UL - Code_Gen_Model_B.Elevator_Proportional;

      /* Switch: '<S52>/Switch2' incorporates:
       *  RelationalOperator: '<S52>/LowerRelop1'
       */
      if (!(rtb_Uk1_iw > rtb_rx_g)) {
        /* Sum: '<S42>/Subtract1' incorporates:
         *  Constant: '<S42>/Constant1'
         */
        rtb_rx_g = Elevator_Total_LL - Code_Gen_Model_B.Elevator_Proportional;

        /* Switch: '<S52>/Switch' incorporates:
         *  RelationalOperator: '<S52>/UpperRelop'
         */
        if (!(rtb_Uk1_iw < rtb_rx_g)) {
          rtb_rx_g = rtb_Uk1_iw;
        }

        /* End of Switch: '<S52>/Switch' */
      }

      /* End of Switch: '<S52>/Switch2' */

      /* Saturate: '<S42>/Saturation1' */
      if (rtb_rx_g > Elevator_Int_UL) {
        /* Switch: '<S42>/Switch' */
        Code_Gen_Model_B.Elevator_Integral = Elevator_Int_UL;
      } else if (rtb_rx_g < Elevator_Int_LL) {
        /* Switch: '<S42>/Switch' */
        Code_Gen_Model_B.Elevator_Integral = Elevator_Int_LL;
      } else {
        /* Switch: '<S42>/Switch' */
        Code_Gen_Model_B.Elevator_Integral = rtb_rx_g;
      }

      /* End of Saturate: '<S42>/Saturation1' */
    }

    /* End of Switch: '<S42>/Switch1' */
  } else {
    /* Switch: '<S42>/Switch' incorporates:
     *  Constant: '<S42>/Constant2'
     */
    Code_Gen_Model_B.Elevator_Integral = 0.0;
  }

  /* End of Switch: '<S42>/Switch' */

  /* Switch: '<S9>/Switch2' incorporates:
   *  Constant: '<S9>/Constant5'
   */
  if (rtb_Swerve_Motors_Disabled) {
    /* Sum: '<S42>/Add1' */
    rtb_rx_g = Code_Gen_Model_B.Elevator_Proportional +
      Code_Gen_Model_B.Elevator_Integral;

    /* Saturate: '<S42>/Saturation2' */
    if (rtb_rx_g > Elevator_Total_UL) {
      rtb_rx_g = Elevator_Total_UL;
    } else if (rtb_rx_g < Elevator_Total_LL) {
      rtb_rx_g = Elevator_Total_LL;
    }

    /* End of Saturate: '<S42>/Saturation2' */

    /* Switch: '<S9>/Switch1' incorporates:
     *  Constant: '<S9>/Constant1'
     *  Constant: '<S9>/Constant2'
     */
    if (rtb_Compare_ht) {
      rtb_Uk1_iw = Elevator_Hold_at_Top_DC;
    } else {
      rtb_Uk1_iw = 1.0;
    }

    /* End of Switch: '<S9>/Switch1' */

    /* Switch: '<S43>/Switch2' incorporates:
     *  RelationalOperator: '<S43>/LowerRelop1'
     */
    if (!(rtb_rx_g > rtb_Uk1_iw)) {
      /* Switch: '<S9>/Switch' incorporates:
       *  Constant: '<S9>/Constant3'
       *  Constant: '<S9>/Constant4'
       */
      if (rtb_Compare_m) {
        rtb_Uk1_iw = 0.0;
      } else {
        rtb_Uk1_iw = -1.0;
      }

      /* End of Switch: '<S9>/Switch' */

      /* Switch: '<S43>/Switch' incorporates:
       *  RelationalOperator: '<S43>/UpperRelop'
       */
      if (!(rtb_rx_g < rtb_Uk1_iw)) {
        rtb_Uk1_iw = rtb_rx_g;
      }

      /* End of Switch: '<S43>/Switch' */
    }

    /* End of Switch: '<S43>/Switch2' */
  } else {
    rtb_Uk1_iw = 0.0;
  }

  /* End of Switch: '<S9>/Switch2' */

  /* Signum: '<S41>/Sign2' incorporates:
   *  UnitDelay: '<S41>/Unit Delay'
   */
  if (rtIsNaN(Code_Gen_Model_DW.UnitDelay_DSTATE_mh)) {
    tmp = (rtNaN);
  } else if (Code_Gen_Model_DW.UnitDelay_DSTATE_mh < 0.0) {
    tmp = -1.0;
  } else {
    tmp = (Code_Gen_Model_DW.UnitDelay_DSTATE_mh > 0.0);
  }

  /* Signum: '<S41>/Sign1' */
  if (rtIsNaN(rtb_Uk1_iw)) {
    rtb_Rotationmatrixfromlocalto_0 = (rtNaN);
  } else if (rtb_Uk1_iw < 0.0) {
    rtb_Rotationmatrixfromlocalto_0 = -1.0;
  } else {
    rtb_Rotationmatrixfromlocalto_0 = (rtb_Uk1_iw > 0.0);
  }

  /* Product: '<S41>/Product1' incorporates:
   *  Signum: '<S41>/Sign1'
   *  Signum: '<S41>/Sign2'
   */
  tmp *= rtb_Rotationmatrixfromlocalto_0;
  if (rtIsNaN(tmp)) {
    rtb_Num_Segments = 0;
  } else {
    rtb_Num_Segments = (int32_T)fmod(tmp, 256.0);
  }

  /* Switch: '<S41>/Switch' incorporates:
   *  Constant: '<S41>/Constant'
   *  Constant: '<S44>/Constant'
   *  Constant: '<S45>/Constant'
   *  Logic: '<S41>/or'
   *  Product: '<S41>/Product1'
   *  RelationalOperator: '<S44>/Compare'
   *  RelationalOperator: '<S45>/Compare'
   *  UnitDelay: '<S41>/Unit Delay'
   */
  if ((Code_Gen_Model_DW.UnitDelay_DSTATE_mh == 0.0) || (((rtb_Num_Segments < 0)
        ? ((int32_T)((int8_T)(-((int8_T)((uint8_T)(-((real_T)rtb_Num_Segments)))))))
        : rtb_Num_Segments) > 0)) {
    rtb_rx_g = rtb_Uk1_iw;
  } else {
    rtb_rx_g = 0.0;
  }

  /* End of Switch: '<S41>/Switch' */

  /* RelationalOperator: '<S46>/Compare' incorporates:
   *  Constant: '<S46>/Constant'
   */
  rtb_Swerve_Motors_Disabled = (rtb_rx_g == 0.0);

  /* RelationalOperator: '<S47>/Compare' incorporates:
   *  Constant: '<S47>/Constant'
   */
  rtb_Compare_a = (rtb_rx_g > 0.0);

  /* Abs: '<S41>/Abs' incorporates:
   *  Sum: '<S41>/Subtract'
   *  UnitDelay: '<S41>/Unit Delay'
   */
  rtb_Uk1_iw = fabs(Code_Gen_Model_DW.UnitDelay_DSTATE_mh - rtb_Uk1_iw);

  /* Switch: '<S41>/Switch5' incorporates:
   *  Switch: '<S41>/Switch1'
   */
  if (rtb_Swerve_Motors_Disabled) {
    /* SignalConversion generated from: '<S41>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S41>/Constant4'
     *  Constant: '<S41>/Constant6'
     */
    rtb_Akxhatkk1[0] = 1.0;
    rtb_Akxhatkk1[1] = 1.0;

    /* SignalConversion generated from: '<S41>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S41>/Constant2'
     *  Constant: '<S41>/Constant5'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = 0.01;

    /* S-Function (sfix_look1_dyn): '<S41>/Lookup Table Dynamic' */
    /* Dynamic Look-Up Table Block: '<S41>/Lookup Table Dynamic'
     * Input0  Data Type:  Floating Point real_T
     * Input1  Data Type:  Floating Point real_T
     * Input2  Data Type:  Floating Point real_T
     * Output0 Data Type:  Floating Point real_T
     * Lookup Method: Linear_Endpoint
     *
     */
    LookUp_real_T_real_T( &(rtb_LookupTableDynamic_jw), &rtb_Akxhatkk1[0],
                         rtb_Uk1_iw, &rtb_Minus_n[0], 1U);
    rtb_thetay_a = rtb_LookupTableDynamic_jw;
    tmp = Code_Gen_Model_ConstB.UnaryMinus_m;
  } else {
    /* SignalConversion generated from: '<S41>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S41>/Constant10'
     *  Constant: '<S41>/Constant8'
     */
    rtb_Akxhatkk1[0] = 1.0;
    rtb_Akxhatkk1[1] = 1.0;

    /* SignalConversion generated from: '<S41>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S41>/Constant7'
     *  Constant: '<S41>/Constant9'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = 0.01;

    /* S-Function (sfix_look1_dyn): '<S41>/Lookup Table Dynamic1' */
    /* Dynamic Look-Up Table Block: '<S41>/Lookup Table Dynamic1'
     * Input0  Data Type:  Floating Point real_T
     * Input1  Data Type:  Floating Point real_T
     * Input2  Data Type:  Floating Point real_T
     * Output0 Data Type:  Floating Point real_T
     * Lookup Method: Linear_Endpoint
     *
     */
    LookUp_real_T_real_T( &(rtb_LookupTableDynamic1_b), &rtb_Akxhatkk1[0],
                         rtb_Uk1_iw, &rtb_Minus_n[0], 1U);
    rtb_thetay_a = rtb_LookupTableDynamic1_b;

    /* Switch: '<S41>/Switch3' incorporates:
     *  Constant: '<S41>/Constant3'
     */
    if (rtb_Compare_a) {
      tmp = Elevator_DC_Inc_RL;
    } else {
      tmp = Code_Gen_Model_ConstB.UnaryMinus_m;
    }

    /* End of Switch: '<S41>/Switch3' */
  }

  /* End of Switch: '<S41>/Switch5' */

  /* Product: '<S41>/Product' incorporates:
   *  Switch: '<S41>/Switch1'
   */
  rtb_thetay_i = tmp * rtb_thetay_a;

  /* Switch: '<S50>/Init' incorporates:
   *  UnitDelay: '<S50>/FixPt Unit Delay1'
   *  UnitDelay: '<S50>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_o != 0) {
    rtb_Uk1_iw = rtb_rx_g;
  } else {
    rtb_Uk1_iw = Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_l;
  }

  /* End of Switch: '<S50>/Init' */

  /* Sum: '<S48>/Sum1' */
  rtb_rx_g -= rtb_Uk1_iw;

  /* Switch: '<S49>/Switch2' incorporates:
   *  RelationalOperator: '<S49>/LowerRelop1'
   */
  if (!(rtb_rx_g > rtb_thetay_i)) {
    /* Switch: '<S41>/Switch2' incorporates:
     *  Constant: '<S41>/Constant1'
     *  Constant: '<S41>/Constant3'
     *  Switch: '<S41>/Switch4'
     *  UnaryMinus: '<S41>/Unary Minus1'
     */
    if (rtb_Swerve_Motors_Disabled) {
      tmp = -1.0;
    } else if (rtb_Compare_a) {
      /* Switch: '<S41>/Switch4' incorporates:
       *  Constant: '<S41>/Constant1'
       */
      tmp = -1.0;
    } else {
      tmp = -Elevator_DC_Inc_RL;
    }

    /* Product: '<S41>/Product2' incorporates:
     *  Switch: '<S41>/Switch2'
     */
    rtb_thetay_i = tmp * rtb_thetay_a;

    /* Switch: '<S49>/Switch' incorporates:
     *  RelationalOperator: '<S49>/UpperRelop'
     */
    if (!(rtb_rx_g < rtb_thetay_i)) {
      rtb_thetay_i = rtb_rx_g;
    }

    /* End of Switch: '<S49>/Switch' */
  }

  /* End of Switch: '<S49>/Switch2' */

  /* Sum: '<S48>/Sum' */
  rtb_Add_ov = rtb_thetay_i + rtb_Uk1_iw;

  /* Outport: '<Root>/Elevator_DutyCycle' incorporates:
   *  UnaryMinus: '<S9>/Unary Minus'
   */
  Code_Gen_Model_Y.Elevator_DutyCycle = -rtb_Add_ov;

  /* Logic: '<S7>/Logical Operator' incorporates:
   *  Constant: '<S23>/Constant'
   *  Constant: '<S24>/Constant'
   *  RelationalOperator: '<S23>/Compare'
   *  RelationalOperator: '<S24>/Compare'
   */
  rtb_Swerve_Motors_Disabled = ((Code_Gen_Model_B.Elevator_Height_Measured <
    Coral_Arm_Elevator_Height_Low_Thresh) &&
    (Code_Gen_Model_B.Coral_Arm_Angle_Measured < Coral_Arm_Angle_Neg_Threshold));

  /* Lookup_n-D: '<S7>/1-D Lookup Table' incorporates:
   *  Bias: '<S1>/Add Constant'
   */
  rtb_rx_g = look1_binlcpw(Code_Gen_Model_B.Coral_Arm_Angle_Measured,
    Code_Gen_Model_ConstP.uDLookupTable_bp01Data,
    Code_Gen_Model_ConstP.uDLookupTable_tableData, 2U);

  /* Switch: '<S27>/Switch2' incorporates:
   *  Constant: '<S7>/Constant'
   *  RelationalOperator: '<S27>/LowerRelop1'
   */
  if (Code_Gen_Model_B.Coral_Arm_Angle_Desired > 90.0) {
    rtb_Uk1_iw = 90.0;
  } else {
    /* Lookup_n-D: '<S7>/Range of Motion Protection Limit' incorporates:
     *  Switch: '<S10>/Switch'
     */
    rtb_Uk1_iw = look1_binlcpw(Code_Gen_Model_B.Elevator_Height_Measured,
      Code_Gen_Model_ConstP.RangeofMotionProtectionLimit_bp,
      Code_Gen_Model_ConstP.RangeofMotionProtectionLimit_ta, 74U);

    /* Switch: '<S27>/Switch' incorporates:
     *  RelationalOperator: '<S27>/UpperRelop'
     */
    if (!(Code_Gen_Model_B.Coral_Arm_Angle_Desired < rtb_Uk1_iw)) {
      rtb_Uk1_iw = Code_Gen_Model_B.Coral_Arm_Angle_Desired;
    }

    /* End of Switch: '<S27>/Switch' */
  }

  /* End of Switch: '<S27>/Switch2' */

  /* Sum: '<S7>/Subtract' */
  Code_Gen_Model_B.Coral_ArmAngle_Error = rtb_Uk1_iw -
    Code_Gen_Model_B.Coral_Arm_Angle_Measured;

  /* Gain: '<S26>/Gain1' */
  Code_Gen_Model_B.Elevator_Proportional_l = Coral_Arm_Gain_Prop *
    Code_Gen_Model_B.Coral_ArmAngle_Error;

  /* Logic: '<S7>/Logical Operator2' incorporates:
   *  Logic: '<S7>/Logical Operator1'
   */
  rtb_Compare_a = ((!rtb_Swerve_Motors_Disabled) &&
                   (Code_Gen_Model_B.Reefscape_Motors_Enable));

  /* Lookup_n-D: '<S7>/1-D Lookup Table1' incorporates:
   *  Bias: '<S1>/Add Constant'
   */
  rtb_Uk1_iw = look1_binlcpw(Code_Gen_Model_B.Coral_Arm_Angle_Measured,
    Code_Gen_Model_ConstP.uDLookupTable1_bp01Data,
    Code_Gen_Model_ConstP.uDLookupTable1_tableData, 1U);

  /* Switch: '<S26>/Switch' */
  if (rtb_Compare_a) {
    /* Switch: '<S26>/Switch1' incorporates:
     *  UnitDelay: '<S35>/Delay Input1'
     *
     * Block description for '<S35>/Delay Input1':
     *
     *  Store in Global RAM
     */
    if (!Code_Gen_Model_DW.DelayInput1_DSTATE_op) {
      /* Switch: '<S26>/Switch' incorporates:
       *  Constant: '<S26>/Constant3'
       */
      Code_Gen_Model_B.Elevator_Integral_o = Coral_Arm_Int_IC;
    } else {
      /* Sum: '<S26>/Sum2' incorporates:
       *  Gain: '<S26>/Gain2'
       *  UnitDelay: '<S26>/Unit Delay'
       */
      rtb_thetay_a = (Coral_Arm_Gain_Int * Code_Gen_Model_B.Coral_ArmAngle_Error)
        + Code_Gen_Model_B.Elevator_Integral_o;

      /* Sum: '<S26>/Subtract' */
      rtb_thetay_i = rtb_rx_g - Code_Gen_Model_B.Elevator_Proportional_l;

      /* Switch: '<S36>/Switch2' incorporates:
       *  RelationalOperator: '<S36>/LowerRelop1'
       */
      if (!(rtb_thetay_a > rtb_thetay_i)) {
        /* Sum: '<S26>/Subtract1' */
        rtb_thetay_i = rtb_Uk1_iw - Code_Gen_Model_B.Elevator_Proportional_l;

        /* Switch: '<S36>/Switch' incorporates:
         *  RelationalOperator: '<S36>/UpperRelop'
         */
        if (!(rtb_thetay_a < rtb_thetay_i)) {
          rtb_thetay_i = rtb_thetay_a;
        }

        /* End of Switch: '<S36>/Switch' */
      }

      /* End of Switch: '<S36>/Switch2' */

      /* Saturate: '<S26>/Saturation1' */
      if (rtb_thetay_i > Coral_Arm_Int_UL) {
        /* Switch: '<S26>/Switch' */
        Code_Gen_Model_B.Elevator_Integral_o = Coral_Arm_Int_UL;
      } else if (rtb_thetay_i < Coral_Arm_Int_LL) {
        /* Switch: '<S26>/Switch' */
        Code_Gen_Model_B.Elevator_Integral_o = Coral_Arm_Int_LL;
      } else {
        /* Switch: '<S26>/Switch' */
        Code_Gen_Model_B.Elevator_Integral_o = rtb_thetay_i;
      }

      /* End of Saturate: '<S26>/Saturation1' */
    }

    /* End of Switch: '<S26>/Switch1' */
  } else {
    /* Switch: '<S26>/Switch' incorporates:
     *  Constant: '<S26>/Constant2'
     */
    Code_Gen_Model_B.Elevator_Integral_o = 0.0;
  }

  /* End of Switch: '<S26>/Switch' */

  /* Switch: '<S7>/Switch2' incorporates:
   *  Constant: '<S7>/Constant5'
   */
  if (Code_Gen_Model_B.Reefscape_Motors_Enable) {
    /* Switch: '<S7>/Switch1' incorporates:
     *  Constant: '<S7>/Constant2'
     */
    if (rtb_Swerve_Motors_Disabled) {
      rtb_Uk1_iw = Coral_Arm_Neg90_DC;
    } else {
      /* Sum: '<S26>/Add1' */
      rtb_thetay_a = Code_Gen_Model_B.Elevator_Proportional_l +
        Code_Gen_Model_B.Elevator_Integral_o;

      /* Switch: '<S37>/Switch2' incorporates:
       *  RelationalOperator: '<S37>/LowerRelop1'
       *  RelationalOperator: '<S37>/UpperRelop'
       *  Switch: '<S37>/Switch'
       */
      if (rtb_thetay_a > rtb_rx_g) {
        rtb_Uk1_iw = rtb_rx_g;
      } else if (!(rtb_thetay_a < rtb_Uk1_iw)) {
        rtb_Uk1_iw = rtb_thetay_a;
      }

      /* End of Switch: '<S37>/Switch2' */
    }

    /* End of Switch: '<S7>/Switch1' */
  } else {
    rtb_Uk1_iw = 0.0;
  }

  /* End of Switch: '<S7>/Switch2' */

  /* Signum: '<S25>/Sign2' incorporates:
   *  UnitDelay: '<S25>/Unit Delay'
   */
  if (rtIsNaN(Code_Gen_Model_DW.UnitDelay_DSTATE_oz)) {
    tmp = (rtNaN);
  } else if (Code_Gen_Model_DW.UnitDelay_DSTATE_oz < 0.0) {
    tmp = -1.0;
  } else {
    tmp = (Code_Gen_Model_DW.UnitDelay_DSTATE_oz > 0.0);
  }

  /* Signum: '<S25>/Sign1' */
  if (rtIsNaN(rtb_Uk1_iw)) {
    rtb_Rotationmatrixfromlocalto_0 = (rtNaN);
  } else if (rtb_Uk1_iw < 0.0) {
    rtb_Rotationmatrixfromlocalto_0 = -1.0;
  } else {
    rtb_Rotationmatrixfromlocalto_0 = (rtb_Uk1_iw > 0.0);
  }

  /* Product: '<S25>/Product1' incorporates:
   *  Signum: '<S25>/Sign1'
   *  Signum: '<S25>/Sign2'
   */
  tmp *= rtb_Rotationmatrixfromlocalto_0;
  if (rtIsNaN(tmp)) {
    rtb_Num_Segments = 0;
  } else {
    rtb_Num_Segments = (int32_T)fmod(tmp, 256.0);
  }

  /* Switch: '<S25>/Switch' incorporates:
   *  Constant: '<S25>/Constant'
   *  Constant: '<S28>/Constant'
   *  Constant: '<S29>/Constant'
   *  Logic: '<S25>/or'
   *  Product: '<S25>/Product1'
   *  RelationalOperator: '<S28>/Compare'
   *  RelationalOperator: '<S29>/Compare'
   *  UnitDelay: '<S25>/Unit Delay'
   */
  if ((Code_Gen_Model_DW.UnitDelay_DSTATE_oz == 0.0) || (((rtb_Num_Segments < 0)
        ? ((int32_T)((int8_T)(-((int8_T)((uint8_T)(-((real_T)rtb_Num_Segments)))))))
        : rtb_Num_Segments) > 0)) {
    rtb_rx_g = rtb_Uk1_iw;
  } else {
    rtb_rx_g = 0.0;
  }

  /* End of Switch: '<S25>/Switch' */

  /* RelationalOperator: '<S30>/Compare' incorporates:
   *  Constant: '<S30>/Constant'
   */
  rtb_Swerve_Motors_Disabled = (rtb_rx_g == 0.0);

  /* RelationalOperator: '<S31>/Compare' incorporates:
   *  Constant: '<S31>/Constant'
   */
  Compare = (rtb_rx_g > 0.0);

  /* Abs: '<S25>/Abs' incorporates:
   *  Sum: '<S25>/Subtract'
   *  UnitDelay: '<S25>/Unit Delay'
   */
  rtb_Uk1_iw = fabs(Code_Gen_Model_DW.UnitDelay_DSTATE_oz - rtb_Uk1_iw);

  /* Switch: '<S25>/Switch5' incorporates:
   *  Switch: '<S25>/Switch1'
   */
  if (rtb_Swerve_Motors_Disabled) {
    /* SignalConversion generated from: '<S25>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S25>/Constant4'
     *  Constant: '<S25>/Constant6'
     */
    rtb_Akxhatkk1[0] = 1.0;
    rtb_Akxhatkk1[1] = 1.0;

    /* SignalConversion generated from: '<S25>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S25>/Constant2'
     *  Constant: '<S25>/Constant5'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = 0.01;

    /* S-Function (sfix_look1_dyn): '<S25>/Lookup Table Dynamic' */
    /* Dynamic Look-Up Table Block: '<S25>/Lookup Table Dynamic'
     * Input0  Data Type:  Floating Point real_T
     * Input1  Data Type:  Floating Point real_T
     * Input2  Data Type:  Floating Point real_T
     * Output0 Data Type:  Floating Point real_T
     * Lookup Method: Linear_Endpoint
     *
     */
    LookUp_real_T_real_T( &(rtb_LookupTableDynamic_n), &rtb_Akxhatkk1[0],
                         rtb_Uk1_iw, &rtb_Minus_n[0], 1U);
    rtb_thetay_a = rtb_LookupTableDynamic_n;
    tmp = Code_Gen_Model_ConstB.UnaryMinus;
  } else {
    /* SignalConversion generated from: '<S25>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S25>/Constant10'
     *  Constant: '<S25>/Constant8'
     */
    rtb_Akxhatkk1[0] = 1.0;
    rtb_Akxhatkk1[1] = 1.0;

    /* SignalConversion generated from: '<S25>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S25>/Constant7'
     *  Constant: '<S25>/Constant9'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = 0.01;

    /* S-Function (sfix_look1_dyn): '<S25>/Lookup Table Dynamic1' */
    /* Dynamic Look-Up Table Block: '<S25>/Lookup Table Dynamic1'
     * Input0  Data Type:  Floating Point real_T
     * Input1  Data Type:  Floating Point real_T
     * Input2  Data Type:  Floating Point real_T
     * Output0 Data Type:  Floating Point real_T
     * Lookup Method: Linear_Endpoint
     *
     */
    LookUp_real_T_real_T( &(rtb_LookupTableDynamic1_a), &rtb_Akxhatkk1[0],
                         rtb_Uk1_iw, &rtb_Minus_n[0], 1U);
    rtb_thetay_a = rtb_LookupTableDynamic1_a;

    /* Switch: '<S25>/Switch3' incorporates:
     *  Constant: '<S25>/Constant3'
     */
    if (Compare) {
      tmp = Coral_Arm_DC_Inc_RL;
    } else {
      tmp = Code_Gen_Model_ConstB.UnaryMinus;
    }

    /* End of Switch: '<S25>/Switch3' */
  }

  /* End of Switch: '<S25>/Switch5' */

  /* Product: '<S25>/Product' incorporates:
   *  Switch: '<S25>/Switch1'
   */
  rtb_thetay_i = tmp * rtb_thetay_a;

  /* Switch: '<S34>/Init' incorporates:
   *  UnitDelay: '<S34>/FixPt Unit Delay1'
   *  UnitDelay: '<S34>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_j != 0) {
    rtb_Uk1_iw = rtb_rx_g;
  } else {
    rtb_Uk1_iw = Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_pc;
  }

  /* End of Switch: '<S34>/Init' */

  /* Sum: '<S32>/Sum1' */
  rtb_rx_g -= rtb_Uk1_iw;

  /* Switch: '<S33>/Switch2' incorporates:
   *  RelationalOperator: '<S33>/LowerRelop1'
   */
  if (!(rtb_rx_g > rtb_thetay_i)) {
    /* Switch: '<S25>/Switch2' incorporates:
     *  Constant: '<S25>/Constant1'
     *  Constant: '<S25>/Constant3'
     *  Switch: '<S25>/Switch4'
     *  UnaryMinus: '<S25>/Unary Minus1'
     */
    if (rtb_Swerve_Motors_Disabled) {
      tmp = -1.0;
    } else if (Compare) {
      /* Switch: '<S25>/Switch4' incorporates:
       *  Constant: '<S25>/Constant1'
       */
      tmp = -1.0;
    } else {
      tmp = -Coral_Arm_DC_Inc_RL;
    }

    /* Product: '<S25>/Product2' incorporates:
     *  Switch: '<S25>/Switch2'
     */
    rtb_thetay_i = tmp * rtb_thetay_a;

    /* Switch: '<S33>/Switch' incorporates:
     *  RelationalOperator: '<S33>/UpperRelop'
     */
    if (!(rtb_rx_g < rtb_thetay_i)) {
      rtb_thetay_i = rtb_rx_g;
    }

    /* End of Switch: '<S33>/Switch' */
  }

  /* End of Switch: '<S33>/Switch2' */

  /* Sum: '<S32>/Sum' */
  rtb_Uk1_iw += rtb_thetay_i;

  /* Outport: '<Root>/Coral_Arm_DutyCycle' incorporates:
   *  UnaryMinus: '<S7>/Unary Minus'
   */
  Code_Gen_Model_Y.Coral_Arm_DutyCycle = -rtb_Uk1_iw;

  /* Outport: '<Root>/Coral_Wheel_DutyCycle' */
  Code_Gen_Model_Y.Coral_Wheel_DutyCycle = rtb_thetay;

  /* Outport: '<Root>/Algae_Wheel_Outside_DutyCycle' */
  Code_Gen_Model_Y.Algae_Wheel_Outside_DutyCycle = rtb_rx;

  /* Outport: '<Root>/Algae_Wheel_Inside_DutyCycle' */
  Code_Gen_Model_Y.Algae_Wheel_Inside_DutyCycle = rtb_thetay_n;

  /* SignalConversion: '<S12>/Signal Copy4' incorporates:
   *  Inport: '<Root>/Joystick_Right_X'
   */
  Code_Gen_Model_B.Steer_Joystick_X = Code_Gen_Model_U.Joystick_Right_X;

  /* Trigonometry: '<S16>/Trigonometric Function1' */
  rtb_rx = sin(Code_Gen_Model_B.Gyro_Angle_Field_rad);

  /* SignalConversion generated from: '<S16>/Rotation matrix from local to global' incorporates:
   *  Trigonometry: '<S16>/Trigonometric Function'
   */
  rtb_Add2_k_idx_1 = cos(Code_Gen_Model_B.Gyro_Angle_Field_rad);
  rtb_rx_g = rtb_rx;

  /* SignalConversion generated from: '<S16>/Rotation matrix from local to global' incorporates:
   *  UnaryMinus: '<S16>/Unary Minus'
   */
  rtb_Rotationmatrixfromlocalto_0 = -rtb_rx;

  /* Sum: '<S129>/Diff' incorporates:
   *  UnitDelay: '<S129>/UD'
   *
   * Block description for '<S129>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S129>/UD':
   *
   *  Store in Global RAM
   */
  rtb_thetay_n = Code_Gen_Model_B.Gyro_Angle_Field_rad -
    Code_Gen_Model_DW.UD_DSTATE_d;

  /* Sum: '<S16>/Subtract2' incorporates:
   *  Constant: '<S16>/Constant3'
   *  Gain: '<S16>/Gain7'
   *  Math: '<S16>/Square'
   */
  rtb_rx = 1.0 - ((rtb_thetay_n * rtb_thetay_n) * 0.16666666666666666);

  /* Gain: '<S16>/Gain6' */
  rtb_thetay_n *= 0.5;

  /* SignalConversion generated from: '<S16>/POSE exponential matrix for improved accuracy while rotating' */
  rtb_POSEexponentialmatrixfori_0 = rtb_thetay_n;

  /* SignalConversion generated from: '<S16>/POSE exponential matrix for improved accuracy while rotating' incorporates:
   *  UnaryMinus: '<S16>/Unary Minus2'
   */
  rtb_POSEexponentialmatrixfori_1 = -rtb_thetay_n;

  /* Product: '<S16>/Product' incorporates:
   *  Constant: '<S16>/Constant1'
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Rev'
   *  Sum: '<S130>/Diff'
   *  UnitDelay: '<S130>/UD'
   *
   * Block description for '<S130>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S130>/UD':
   *
   *  Store in Global RAM
   */
  rtb_thetay_n = (Code_Gen_Model_U.FrontLeft_Drive_Motor_Rev -
                  Code_Gen_Model_DW.UD_DSTATE_j) * 0.049599071116336282;

  /* Product: '<S16>/Product1' incorporates:
   *  Constant: '<S16>/Constant1'
   *  Inport: '<Root>/FrontRight_Drive_Motor_Rev'
   *  Sum: '<S131>/Diff'
   *  UnitDelay: '<S131>/UD'
   *
   * Block description for '<S131>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S131>/UD':
   *
   *  Store in Global RAM
   */
  rtb_thetay = (Code_Gen_Model_U.FrontRight_Drive_Motor_Rev -
                Code_Gen_Model_DW.UD_DSTATE_m) * 0.049599071116336282;

  /* Product: '<S16>/Product2' incorporates:
   *  Constant: '<S16>/Constant1'
   *  Inport: '<Root>/BackLeft_Drive_Motor_Rev'
   *  Sum: '<S132>/Diff'
   *  UnitDelay: '<S132>/UD'
   *
   * Block description for '<S132>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S132>/UD':
   *
   *  Store in Global RAM
   */
  rtb_thetay_a = (Code_Gen_Model_U.BackLeft_Drive_Motor_Rev -
                  Code_Gen_Model_DW.UD_DSTATE_ic) * 0.049599071116336282;

  /* Product: '<S16>/Product3' incorporates:
   *  Constant: '<S16>/Constant1'
   *  Inport: '<Root>/BackRight_Drive_Motor_Rev'
   *  Sum: '<S133>/Diff'
   *  UnitDelay: '<S133>/UD'
   *
   * Block description for '<S133>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S133>/UD':
   *
   *  Store in Global RAM
   */
  rtb_thetay_i = (Code_Gen_Model_U.BackRight_Drive_Motor_Rev -
                  Code_Gen_Model_DW.UD_DSTATE_ce) * 0.049599071116336282;

  /* SignalConversion generated from: '<S16>/Product7' incorporates:
   *  Fcn: '<S134>/r->x'
   *  Fcn: '<S134>/theta->y'
   *  Fcn: '<S135>/r->x'
   *  Fcn: '<S135>/theta->y'
   *  Fcn: '<S136>/r->x'
   *  Fcn: '<S136>/theta->y'
   *  Fcn: '<S137>/r->x'
   *  Fcn: '<S137>/theta->y'
   */
  rtb_thetay_n_0[0] = rtb_thetay_n * cos(Code_Gen_Model_B.FL_Steer_Module_Angle);
  rtb_thetay_n_0[1] = rtb_thetay_n * sin(Code_Gen_Model_B.FL_Steer_Module_Angle);
  rtb_thetay_n_0[2] = rtb_thetay * cos(Code_Gen_Model_B.FR_Steer_Module_Angle);
  rtb_thetay_n_0[3] = rtb_thetay * sin(Code_Gen_Model_B.FR_Steer_Module_Angle);
  rtb_thetay_n_0[4] = rtb_thetay_a * cos(Code_Gen_Model_B.BL_Steer_Module_Angle);
  rtb_thetay_n_0[5] = rtb_thetay_a * sin(Code_Gen_Model_B.BL_Steer_Module_Angle);
  rtb_thetay_n_0[6] = rtb_thetay_i * cos(Code_Gen_Model_B.BR_Steer_Module_Angle);
  rtb_thetay_n_0[7] = rtb_thetay_i * sin(Code_Gen_Model_B.BR_Steer_Module_Angle);

  /* Product: '<S16>/Product7' incorporates:
   *  Constant: '<S16>/Constant4'
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

  /* End of Product: '<S16>/Product7' */

  /* Product: '<S16>/Product6' incorporates:
   *  Concatenate: '<S16>/POSE exponential matrix for improved accuracy while rotating'
   *  SignalConversion generated from: '<S16>/POSE exponential matrix for improved accuracy while rotating'
   */
  rtb_thetay = (rtb_rx * rtb_Akxhatkk1[0]) + (rtb_POSEexponentialmatrixfori_1 *
    rtb_Akxhatkk1[1]);
  rtb_rx = (rtb_POSEexponentialmatrixfori_0 * rtb_Akxhatkk1[0]) + (rtb_rx *
    rtb_Akxhatkk1[1]);

  /* Product: '<S16>/Product6' incorporates:
   *  Concatenate: '<S16>/Rotation matrix from local to global'
   */
  Code_Gen_Model_B.Product6[0] = (rtb_Add2_k_idx_1 * rtb_thetay) +
    (rtb_Rotationmatrixfromlocalto_0 * rtb_rx);
  Code_Gen_Model_B.Product6[1] = (rtb_rx_g * rtb_thetay) + (rtb_Add2_k_idx_1 *
    rtb_rx);

  /* Outputs for Enabled SubSystem: '<S95>/MeasurementUpdate' incorporates:
   *  EnablePort: '<S126>/Enable'
   */
  if (rtb_AND) {
    Code_Gen_Model_DW.MeasurementUpdate_MODE = true;

    /* Product: '<S126>/D[k]*u[k]' incorporates:
     *  Constant: '<S75>/D'
     */
    rtb_rx = (0.0 * Code_Gen_Model_B.Product6[0]) + (0.0 *
      Code_Gen_Model_B.Product6[1]);

    /* Sum: '<S126>/Sum' incorporates:
     *  Constant: '<S75>/C'
     *  Delay: '<S75>/MemoryX'
     *  Product: '<S126>/C[k]*xhat[k|k-1]'
     *  Product: '<S126>/D[k]*u[k]'
     *  Sum: '<S126>/Add1'
     */
    rtb_Reshapey_idx_0 -= ((0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[1]) +
      Code_Gen_Model_DW.MemoryX_DSTATE[0]) + rtb_rx;
    rtb_Reshapey_idx_1 -= ((0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[0]) +
      Code_Gen_Model_DW.MemoryX_DSTATE[1]) + rtb_rx;

    /* Product: '<S126>/Product3' incorporates:
     *  Constant: '<S76>/KalmanGainL'
     */
    Code_Gen_Model_B.Product3[0] = (0.0951249219725039 * rtb_Reshapey_idx_0) + (
      -2.0601714451538746E-17 * rtb_Reshapey_idx_1);
    Code_Gen_Model_B.Product3[1] = (1.304610855474728E-16 * rtb_Reshapey_idx_0)
      + (0.095124921972504 * rtb_Reshapey_idx_1);
  } else if (Code_Gen_Model_DW.MeasurementUpdate_MODE) {
    /* Disable for Product: '<S126>/Product3' incorporates:
     *  Outport: '<S126>/L*(y[k]-yhat[k|k-1])'
     */
    Code_Gen_Model_B.Product3[0] = 0.0;
    Code_Gen_Model_B.Product3[1] = 0.0;
    Code_Gen_Model_DW.MeasurementUpdate_MODE = false;
  }

  /* End of Outputs for SubSystem: '<S95>/MeasurementUpdate' */

  /* RelationalOperator: '<S139>/Compare' incorporates:
   *  Constant: '<S138>/Constant'
   *  Constant: '<S139>/Constant'
   */
  rtb_Swerve_Motors_Disabled = (Odometry_X_Y_TEAR != 0.0);

  /* Gain: '<S138>/meters to feet' */
  Code_Gen_Model_B.Odometry_X_global_est_ft = 3.28084 *
    Code_Gen_Model_B.Odom_Position_X;

  /* Switch: '<S138>/Switch' incorporates:
   *  UnitDelay: '<S138>/Unit Delay'
   */
  if (rtb_Swerve_Motors_Disabled) {
    rtb_thetay = Code_Gen_Model_B.Odometry_X_global_est_ft;
  } else {
    rtb_thetay = Code_Gen_Model_DW.UnitDelay_DSTATE_c;
  }

  /* End of Switch: '<S138>/Switch' */

  /* Sum: '<S138>/Subtract' */
  Code_Gen_Model_B.Odometry_X_global_TEAR_ft =
    Code_Gen_Model_B.Odometry_X_global_est_ft - rtb_thetay;

  /* Gain: '<S138>/meters to feet1' */
  Code_Gen_Model_B.Odometry_Y_global_est_ft = 3.28084 *
    Code_Gen_Model_B.Odom_Position_Y;

  /* Switch: '<S138>/Switch1' incorporates:
   *  UnitDelay: '<S138>/Unit Delay1'
   */
  if (rtb_Swerve_Motors_Disabled) {
    rtb_rx = Code_Gen_Model_B.Odometry_Y_global_est_ft;
  } else {
    rtb_rx = Code_Gen_Model_DW.UnitDelay1_DSTATE_d;
  }

  /* End of Switch: '<S138>/Switch1' */

  /* Sum: '<S138>/Subtract1' */
  Code_Gen_Model_B.Odometry_Y_global_TEAR_ft =
    Code_Gen_Model_B.Odometry_Y_global_est_ft - rtb_rx;

  /* DataTypeConversion: '<S17>/Data Type Conversion' incorporates:
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

  /* Update for UnitDelay: '<S72>/Delay Input1' incorporates:
   *  Inport: '<Root>/Joystick_Left_B11'
   *
   * Block description for '<S72>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE = Code_Gen_Model_U.Joystick_Left_B11;

  /* Update for UnitDelay: '<S73>/Delay Input1' incorporates:
   *  Inport: '<Root>/Joystick_Left_B12'
   *
   * Block description for '<S73>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_e = Code_Gen_Model_U.Joystick_Left_B12;

  /* Update for UnitDelay: '<S74>/Delay Input1' incorporates:
   *  Inport: '<Root>/Joystick_Left_B13'
   *
   * Block description for '<S74>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_n = Code_Gen_Model_U.Joystick_Left_B13;
  for (rtb_Num_Segments = 0; rtb_Num_Segments < 5; rtb_Num_Segments++) {
    /* Update for S-Function (sfix_udelay): '<S14>/Tapped Delay' incorporates:
     *  Bias: '<S169>/Bias'
     *  Merge: '<S143>/Merge1'
     *  S-Function (sfix_udelay): '<S14>/Tapped Delay1'
     */
    Code_Gen_Model_DW.TappedDelay_X[rtb_Num_Segments] =
      Code_Gen_Model_DW.TappedDelay_X[rtb_Num_Segments + 1];

    /* Update for S-Function (sfix_udelay): '<S14>/Tapped Delay1' incorporates:
     *  Bias: '<S169>/Bias'
     *  Merge: '<S143>/Merge1'
     *  S-Function (sfix_udelay): '<S14>/Tapped Delay'
     */
    Code_Gen_Model_DW.TappedDelay1_X[rtb_Num_Segments] =
      Code_Gen_Model_DW.TappedDelay1_X[rtb_Num_Segments + 1];
  }

  /* Update for S-Function (sfix_udelay): '<S14>/Tapped Delay' */
  Code_Gen_Model_DW.TappedDelay_X[5] = Code_Gen_Model_B.Product6[0];

  /* Update for S-Function (sfix_udelay): '<S14>/Tapped Delay1' */
  Code_Gen_Model_DW.TappedDelay1_X[5] = Code_Gen_Model_B.Product6[1];

  /* Update for Delay: '<S75>/MemoryX' */
  Code_Gen_Model_DW.icLoad = false;

  /* Product: '<S95>/A[k]*xhat[k|k-1]' incorporates:
   *  Constant: '<S75>/A'
   *  Delay: '<S75>/MemoryX'
   */
  rtb_Reshapey_idx_0 = (0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[1]) +
    Code_Gen_Model_DW.MemoryX_DSTATE[0];
  rtb_Reshapey_idx_1 = (0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[0]) +
    Code_Gen_Model_DW.MemoryX_DSTATE[1];

  /* Update for Delay: '<S75>/MemoryX' incorporates:
   *  Constant: '<S75>/B'
   *  Product: '<S95>/A[k]*xhat[k|k-1]'
   *  Product: '<S95>/B[k]*u[k]'
   *  Sum: '<S95>/Add'
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

  /* Update for UnitDelay: '<S57>/Delay Input1' incorporates:
   *  Constant: '<S11>/Constant3'
   *
   * Block description for '<S57>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_p = Gyro_Calibration_Reset_Flag;

  /* Update for UnitDelay: '<S11>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE = rtb_Switch1;

  /* Update for UnitDelay: '<S53>/Delay Input1'
   *
   * Block description for '<S53>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_b = rtb_Compare_m;

  /* Update for UnitDelay: '<S54>/Delay Input1'
   *
   * Block description for '<S54>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_o1 = rtb_Compare_ht;

  /* Update for UnitDelay: '<S1>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_mph =
    Code_Gen_Model_B.Elevator_LowerPickup_Reset_tp;

  /* Update for UnitDelay: '<S55>/Delay Input1'
   *
   * Block description for '<S55>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_po = rtb_UnitDelay_l;

  /* Update for UnitDelay: '<S306>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S306>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE = 0U;

  /* Update for UnitDelay: '<S328>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_i = rtb_Merge1;

  /* Update for UnitDelay: '<S327>/UD'
   *
   * Block description for '<S327>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE = rtb_Switch1_p2;

  /* Update for UnitDelay: '<S325>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_m = rtb_Switch2;

  /* Update for UnitDelay: '<S308>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_d = rtb_Switch4;

  /* Update for UnitDelay: '<S323>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S323>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_p = 0U;

  /* Update for UnitDelay: '<S323>/FixPt Unit Delay1' */
  Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_e = rtb_Switch4;

  /* Update for UnitDelay: '<S307>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_g = rtb_Sum_jt;

  /* Update for UnitDelay: '<S316>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S316>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_c = 0U;

  /* Update for UnitDelay: '<S316>/FixPt Unit Delay1' */
  Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_p = rtb_Sum_jt;

  /* Update for UnitDelay: '<S230>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_b = rtb_Product2_e2;

  /* Update for UnitDelay: '<S229>/UD'
   *
   * Block description for '<S229>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_b = rtb_Product2_i;

  /* Update for UnitDelay: '<S215>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_e = rtb_rx_c;

  /* Update for UnitDelay: '<S219>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_a = rtb_Sin4;

  /* Update for UnitDelay: '<S218>/UD'
   *
   * Block description for '<S218>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_o = rtb_Subtract1;

  /* Update for UnitDelay: '<S212>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_f = rtb_FeedForward;

  /* Update for UnitDelay: '<S251>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_n = rtb_Add_oh;

  /* Update for UnitDelay: '<S250>/UD'
   *
   * Block description for '<S250>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_i = rtb_Subtract1_of;

  /* Update for UnitDelay: '<S236>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_dt = rtb_Hypot_bl;

  /* Update for UnitDelay: '<S240>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_b1 = rtb_Add_i;

  /* Update for UnitDelay: '<S239>/UD'
   *
   * Block description for '<S239>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_e = rtb_Subtract1_a;

  /* Update for UnitDelay: '<S233>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_em = rtb_FeedForward_n;

  /* Update for UnitDelay: '<S272>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_nw = rtb_Add_o2;

  /* Update for UnitDelay: '<S271>/UD'
   *
   * Block description for '<S271>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_k = rtb_Subtract1_do;

  /* Update for UnitDelay: '<S257>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_k = rtb_Hypot_d;

  /* Update for UnitDelay: '<S261>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_f = rtb_Add_gj;

  /* Update for UnitDelay: '<S260>/UD'
   *
   * Block description for '<S260>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_l = rtb_Subtract1_f;

  /* Update for UnitDelay: '<S254>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_gp = rtb_FeedForward_a;

  /* Update for UnitDelay: '<S293>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_iw = rtb_Add_gd;

  /* Update for UnitDelay: '<S292>/UD'
   *
   * Block description for '<S292>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_ll = rtb_Subtract_e;

  /* Update for UnitDelay: '<S278>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_l = rtb_Switch2_k;

  /* Update for UnitDelay: '<S282>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_kw = rtb_Switch_jh;

  /* Update for UnitDelay: '<S281>/UD'
   *
   * Block description for '<S281>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_c = rtb_Add2_k_idx_0;

  /* Update for UnitDelay: '<S275>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_a = rtb_rx_kh;

  /* Update for UnitDelay: '<S51>/Delay Input1'
   *
   * Block description for '<S51>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_be = rtb_Gamepad_POV_Up;

  /* Update for UnitDelay: '<S41>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_mh = rtb_Add_ov;

  /* Update for UnitDelay: '<S50>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S50>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_o = 0U;

  /* Update for UnitDelay: '<S50>/FixPt Unit Delay1' */
  Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_l = rtb_Add_ov;

  /* Update for UnitDelay: '<S35>/Delay Input1'
   *
   * Block description for '<S35>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_op = rtb_Compare_a;

  /* Update for UnitDelay: '<S25>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_oz = rtb_Uk1_iw;

  /* Update for UnitDelay: '<S34>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S34>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_j = 0U;

  /* Update for UnitDelay: '<S34>/FixPt Unit Delay1' */
  Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_pc = rtb_Uk1_iw;

  /* Update for UnitDelay: '<S129>/UD'
   *
   * Block description for '<S129>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_d = Code_Gen_Model_B.Gyro_Angle_Field_rad;

  /* Update for UnitDelay: '<S130>/UD' incorporates:
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Rev'
   *
   * Block description for '<S130>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_j = Code_Gen_Model_U.FrontLeft_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S131>/UD' incorporates:
   *  Inport: '<Root>/FrontRight_Drive_Motor_Rev'
   *
   * Block description for '<S131>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_m = Code_Gen_Model_U.FrontRight_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S132>/UD' incorporates:
   *  Inport: '<Root>/BackLeft_Drive_Motor_Rev'
   *
   * Block description for '<S132>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_ic = Code_Gen_Model_U.BackLeft_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S133>/UD' incorporates:
   *  Inport: '<Root>/BackRight_Drive_Motor_Rev'
   *
   * Block description for '<S133>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_ce = Code_Gen_Model_U.BackRight_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S138>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_c = rtb_thetay;

  /* Update for UnitDelay: '<S138>/Unit Delay1' */
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

    /* Start for If: '<S18>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem = -1;

    /* InitializeConditions for Delay: '<S75>/MemoryX' */
    Code_Gen_Model_DW.icLoad = true;

    /* InitializeConditions for DiscreteIntegrator: '<S16>/Accumulator2' */
    Code_Gen_Model_DW.Accumulator2_DSTATE = Constant;
    Code_Gen_Model_DW.Accumulator2_PrevResetState = 2;

    /* InitializeConditions for DiscreteIntegrator: '<S16>/Accumulator' */
    Code_Gen_Model_DW.Accumulator_DSTATE = Constant1;
    Code_Gen_Model_DW.Accumulator_PrevResetState = 2;

    /* InitializeConditions for UnitDelay: '<S11>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE = Gyro_Calibration_Reset_Degree;

    /* InitializeConditions for UnitDelay: '<S306>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE = 1U;

    /* InitializeConditions for UnitDelay: '<S323>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_p = 1U;

    /* InitializeConditions for UnitDelay: '<S316>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_c = 1U;

    /* InitializeConditions for UnitDelay: '<S50>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_o = 1U;

    /* InitializeConditions for UnitDelay: '<S34>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_j = 1U;

    /* SystemInitialize for IfAction SubSystem: '<S1>/Teleop' */
    /* InitializeConditions for UnitDelay: '<S376>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_a = 1U;

    /* End of SystemInitialize for SubSystem: '<S1>/Teleop' */

    /* SystemInitialize for IfAction SubSystem: '<S18>/Spline Path Following Enabled' */
    /* Start for If: '<S147>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem_h = -1;

    /* InitializeConditions for UnitDelay: '<S143>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_gh = 2.0;

    /* SystemInitialize for IfAction SubSystem: '<S147>/Robot_Index_Is_Valid' */
    /* Start for If: '<S150>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem_o = -1;

    /* SystemInitialize for IfAction SubSystem: '<S150>/Circle_Check_Valid' */
    /* Start for If: '<S152>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;

    /* End of SystemInitialize for SubSystem: '<S150>/Circle_Check_Valid' */
    /* End of SystemInitialize for SubSystem: '<S147>/Robot_Index_Is_Valid' */
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
