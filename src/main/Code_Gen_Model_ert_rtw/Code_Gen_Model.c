/*
 * Sponsored License - for use in support of a program or activity
 * sponsored by MathWorks.  Not for government, commercial or other
 * non-sponsored organizational use.
 *
 * File: Code_Gen_Model.c
 *
 * Code generated for Simulink model 'Code_Gen_Model'.
 *
 * Model version                  : 2.292
 * Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
 * C/C++ source code generated on : Sat Mar  1 18:18:00 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM 7
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Code_Gen_Model.h"
#include "rtwtypes.h"
#include "Code_Gen_Model_private.h"
#include <math.h>
#include "rt_nonfinite.h"
#include <float.h>
#include "rt_defines.h"

/* Named constants for Chart: '<S17>/Chart' */
#define Code_Gen_Mod_IN_NO_ACTIVE_CHILD ((uint8_T)0U)
#define Code_Gen_Model_IN_Disabled     ((uint8_T)1U)
#define Code_Gen_Model_IN_Not_Disabled ((uint8_T)2U)

/* Named constants for Chart: '<S358>/Reefscape_Chart' */
#define C_IN_Elevator_Height_Bottom_pre ((uint8_T)8U)
#define Code_Ge_IN_Coral_Pickup_Prepare ((uint8_T)3U)
#define Code_Ge_IN_Coral_Score_Position ((uint8_T)6U)
#define Code_Gen_IN_Elevator_Height_Top ((uint8_T)9U)
#define Code_Gen_M_IN_Algae_Pickup_High ((uint8_T)1U)
#define Code_Gen_M_IN_Manual_Adjustment ((uint8_T)5U)
#define Code_Gen_Mo_IN_Algae_Pickup_Low ((uint8_T)2U)
#define Code_Gen_Mode_IN_Algae_Push_Out ((uint8_T)3U)
#define Code_Gen_Model_IN_Algae_Hold   ((uint8_T)1U)
#define Code_Gen_Model_IN_Algae_Pull_In ((uint8_T)2U)
#define Code_Gen_Model_IN_Algae_Score  ((uint8_T)3U)
#define Code_Gen_Model_IN_Coral_Eject  ((uint8_T)4U)
#define Code_Gen_Model_IN_Coral_Pickup ((uint8_T)5U)
#define Code_Gen_Model_IN_Eject        ((uint8_T)1U)
#define Code_Gen_Model_IN_L1           ((uint8_T)1U)
#define Code_Gen_Model_IN_L2           ((uint8_T)2U)
#define Code_Gen_Model_IN_L3           ((uint8_T)3U)
#define Code_Gen_Model_IN_L4           ((uint8_T)4U)
#define Code_Gen_Model_IN_Level_1      ((uint8_T)1U)
#define Code_Gen_Model_IN_Level_2      ((uint8_T)2U)
#define Code_Gen_Model_IN_Level_3      ((uint8_T)3U)
#define Code_Gen_Model_IN_Level_4      ((uint8_T)4U)
#define Code_Gen_Model_IN_None         ((uint8_T)5U)
#define Code_Gen_Model_IN_Off          ((uint8_T)4U)
#define Code_Gen_Model_IN_Start_Angle  ((uint8_T)10U)
#define Code_Gen_Model_IN_Stop         ((uint8_T)2U)
#define Code_Gen__IN_Coral_Pickup_Lower ((uint8_T)1U)
#define Code_Gen__IN_Coral_Pickup_Raise ((uint8_T)4U)
#define Code_IN_Coral_Pickup_Lower_Wait ((uint8_T)2U)
#define Code__IN_Elevator_Height_Bottom ((uint8_T)7U)

/* Exported block parameters */
real_T AT_Reef_Target_Left_Y = 0.0;    /* Variable: AT_Reef_Target_Left_Y
                                        * Referenced by: '<S356>/Constant1'
                                        */
real_T AT_Reef_Target_Right_Y = 0.3302;/* Variable: AT_Reef_Target_Right_Y
                                        * Referenced by: '<S356>/Constant2'
                                        */
real_T AT_Reef_Target_X = 0.6096;      /* Variable: AT_Reef_Target_X
                                        * Referenced by: '<S356>/Constant'
                                        */
real_T AT_XY_Control_Gain = 1.5;       /* Variable: AT_XY_Control_Gain
                                        * Referenced by: '<S363>/Gain2'
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
                                      * Referenced by: '<S376>/Constant1'
                                      */
real_T Boost_Trigger_High_Speed = 5.0; /* Variable: Boost_Trigger_High_Speed
                                        * Referenced by:
                                        *   '<S372>/Constant'
                                        *   '<S372>/Saturation'
                                        */
real_T Boost_Trigger_Increasing_Limit = 3.5;
                                     /* Variable: Boost_Trigger_Increasing_Limit
                                      * Referenced by: '<S376>/Constant3'
                                      */
real_T Boost_Trigger_Low_Speed = 1.5;  /* Variable: Boost_Trigger_Low_Speed
                                        * Referenced by: '<S372>/Constant1'
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
                                       * Referenced by: '<S25>/Constant'
                                       */
real_T Coral_Arm_Angle_Start = -15.0;  /* Variable: Coral_Arm_Angle_Start
                                        * Referenced by: '<S358>/Reefscape_Chart'
                                        */
real_T Coral_Arm_Angle_Start_Thresh = -75.0;/* Variable: Coral_Arm_Angle_Start_Thresh
                                             * Referenced by: '<S358>/Reefscape_Chart'
                                             */
real_T Coral_Arm_Angle_Up = 85.0;      /* Variable: Coral_Arm_Angle_Up
                                        * Referenced by: '<S358>/Reefscape_Chart'
                                        */
real_T Coral_Arm_DC_Inc_RL = 0.066667; /* Variable: Coral_Arm_DC_Inc_RL
                                        * Referenced by: '<S26>/Constant3'
                                        */
real_T Coral_Arm_Gain_Int = 0.001;     /* Variable: Coral_Arm_Gain_Int
                                        * Referenced by: '<S27>/Gain2'
                                        */
real_T Coral_Arm_Gain_Prop = 0.01;     /* Variable: Coral_Arm_Gain_Prop
                                        * Referenced by: '<S27>/Gain1'
                                        */
real_T Coral_Arm_Int_IC = 0.0;         /* Variable: Coral_Arm_Int_IC
                                        * Referenced by: '<S27>/Constant3'
                                        */
real_T Coral_Arm_Int_LL = -0.05;       /* Variable: Coral_Arm_Int_LL
                                        * Referenced by: '<S27>/Saturation1'
                                        */
real_T Coral_Arm_Int_UL = 0.05;        /* Variable: Coral_Arm_Int_UL
                                        * Referenced by: '<S27>/Saturation1'
                                        */
real_T Coral_Arm_Manual_Gain = 0.4;    /* Variable: Coral_Arm_Manual_Gain
                                        * Referenced by: '<S358>/Reefscape_Chart'
                                        */
real_T Coral_Arm_Neg90_DC = -0.03;     /* Variable: Coral_Arm_Neg90_DC
                                        * Referenced by: '<S7>/Constant2'
                                        */
real_T Coral_Detect_Distance = 60.0;   /* Variable: Coral_Detect_Distance
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
real_T Elevator_Bottom_DC = -0.04;     /* Variable: Elevator_Bottom_DC
                                        * Referenced by: '<S9>/Constant7'
                                        */
real_T Elevator_DC_Inc_RL = 0.066667;  /* Variable: Elevator_DC_Inc_RL
                                        * Referenced by: '<S42>/Constant3'
                                        */
real_T Elevator_Error_Bottom_Disable = 3.0;
                                      /* Variable: Elevator_Error_Bottom_Disable
                                       * Referenced by: '<S39>/Constant'
                                       */
real_T Elevator_Error_Increase = 0.0;  /* Variable: Elevator_Error_Increase
                                        * Referenced by: '<S9>/Constant6'
                                        */
real_T Elevator_Gain_Int = 0.02;       /* Variable: Elevator_Gain_Int
                                        * Referenced by: '<S43>/Gain2'
                                        */
real_T Elevator_Gain_Prop = 0.3;       /* Variable: Elevator_Gain_Prop
                                        * Referenced by: '<S43>/Gain1'
                                        */
real_T Elevator_Height_Algae_High = 19.0;/* Variable: Elevator_Height_Algae_High
                                          * Referenced by: '<S358>/Reefscape_Chart'
                                          */
real_T Elevator_Height_Algae_Low = 11.0;/* Variable: Elevator_Height_Algae_Low
                                         * Referenced by: '<S358>/Reefscape_Chart'
                                         */
real_T Elevator_Height_Algae_Score = 2.5;/* Variable: Elevator_Height_Algae_Score
                                          * Referenced by: '<S358>/Reefscape_Chart'
                                          */
real_T Elevator_Height_Bottom = 0.0;   /* Variable: Elevator_Height_Bottom
                                        * Referenced by: '<S358>/Reefscape_Chart'
                                        */
real_T Elevator_Height_Coral_Arm_Low_Thresh = 8.5;
                               /* Variable: Elevator_Height_Coral_Arm_Low_Thresh
                                * Referenced by: '<S24>/Constant'
                                */
real_T Elevator_Height_Error_Threshold = 1.0;
                                    /* Variable: Elevator_Height_Error_Threshold
                                     * Referenced by:
                                     *   '<S40>/Constant'
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
                                        * Referenced by: '<S43>/Constant3'
                                        */
real_T Elevator_Int_LL = -0.1;         /* Variable: Elevator_Int_LL
                                        * Referenced by: '<S43>/Saturation1'
                                        */
real_T Elevator_Int_UL = 0.1;          /* Variable: Elevator_Int_UL
                                        * Referenced by: '<S43>/Saturation1'
                                        */
real_T Elevator_LowerPickup_Time = 0.5;/* Variable: Elevator_LowerPickup_Time
                                        * Referenced by: '<S358>/Reefscape_Chart'
                                        */
real_T Elevator_MotorRev_to_Inch = 0.27646;/* Variable: Elevator_MotorRev_to_Inch
                                            * Referenced by: '<S10>/Gain1'
                                            */
real_T Elevator_Total_LL = -0.25;      /* Variable: Elevator_Total_LL
                                        * Referenced by:
                                        *   '<S43>/Constant1'
                                        *   '<S43>/Saturation2'
                                        */
real_T Elevator_Total_UL = 1.0;        /* Variable: Elevator_Total_UL
                                        * Referenced by:
                                        *   '<S43>/Constant'
                                        *   '<S43>/Saturation2'
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
real_T Limelight_Tag_Angle_Offset = 0.0;/* Variable: Limelight_Tag_Angle_Offset
                                         * Referenced by: '<S20>/Constant2'
                                         */
real_T Limelight_Tag_X_Offset = 0.0;   /* Variable: Limelight_Tag_X_Offset
                                        * Referenced by: '<S20>/Constant'
                                        */
real_T Limelight_Tag_Y_Offset = 0.0;   /* Variable: Limelight_Tag_Y_Offset
                                        * Referenced by: '<S20>/Constant1'
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
real_T Steering_AT_Error_Angle_Gain = 0.1;/* Variable: Steering_AT_Error_Angle_Gain
                                           * Referenced by: '<S362>/Constant4'
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
                                        * Referenced by: '<S362>/Constant'
                                        */
real_T Steering_Twist_Gain = -0.5;     /* Variable: Steering_Twist_Gain
                                        * Referenced by: '<S362>/Constant1'
                                        */
real_T TEST_Swerve_Mode_Override_Flag = 0.0;
                                     /* Variable: TEST_Swerve_Mode_Override_Flag
                                      * Referenced by: '<S22>/Constant5'
                                      */
real_T TEST_Swerve_Mode_Steering = 0.0;/* Variable: TEST_Swerve_Mode_Steering
                                        * Referenced by: '<S22>/Constant8'
                                        */
real_T TEST_Swerve_Mode_Translation = 0.0;/* Variable: TEST_Swerve_Mode_Translation
                                           * Referenced by: '<S22>/Constant7'
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
                                        * Referenced by: '<S363>/Gain'
                                        */
real_T Twist_Deadzone_neg = -0.01;     /* Variable: Twist_Deadzone_neg
                                        * Referenced by:
                                        *   '<S362>/Dead Zone'
                                        *   '<S363>/Dead Zone'
                                        */
real_T Twist_Deadzone_pos = 0.01;      /* Variable: Twist_Deadzone_pos
                                        * Referenced by:
                                        *   '<S362>/Dead Zone'
                                        *   '<S363>/Dead Zone'
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
static void Code_Gen_Model_Coral_Eject(const boolean_T *Compare_f, const
  boolean_T *FixPtRelationalOperator_ne, const boolean_T
  *FixPtRelationalOperator_j, const boolean_T *FixPtRelationalOperator_i);
static void Code_exit_internal_Coral_Pickup(void);
static void Code_Gen_Model_Set_Level(void);
static void Code_Gen_Model_Coral_Pickup(const boolean_T *Compare, const
  boolean_T *Compare_f, const boolean_T *FixPtRelationalOperator_ne, const
  boolean_T *FixPtRelationalOperator_j, const boolean_T
  *FixPtRelationalOperator_i);
static void Code_Gen_M_Coral_Score_Position(const boolean_T *Compare, const
  boolean_T *FixPtRelationalOperator_l);
static void Code_Gen_Elevator_Height_Bottom(const boolean_T *Compare_f, const
  boolean_T *FixPtRelationalOperator_ne, const boolean_T
  *FixPtRelationalOperator_j, const boolean_T *FixPtRelationalOperator_i);
static void Code_Elevator_Height_Bottom_pre(const boolean_T *Compare_f, const
  boolean_T *FixPtRelationalOperator_ne, const boolean_T
  *FixPtRelationalOperator_j, const boolean_T *FixPtRelationalOperator_i);
static void Co_Elevator_CoralArm_CoralWheel(const boolean_T *Compare, const
  boolean_T *Compare_f, const boolean_T *FixPtRelationalOperator_ne, const
  boolean_T *FixPtRelationalOperator_j, const boolean_T
  *FixPtRelationalOperator_l, const boolean_T *FixPtRelationalOperator_i);

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
  if ((Code_Gen_Model_DW.Set_L1) || (Code_Gen_Model_B.FixPtRelationalOperator))
  {
    Code_Gen_Model_DW.is_Coral_Score_Position = Code_Gen_Model_IN_Level_1;
    Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_L1;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = Coral_Arm_Angle_L1;
  } else if ((Code_Gen_Model_DW.Set_L2) ||
             (Code_Gen_Model_B.FixPtRelationalOperator_k)) {
    Code_Gen_Model_DW.is_Coral_Score_Position = Code_Gen_Model_IN_Level_2;
    Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_L2;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = Coral_Arm_Angle_L2;
  } else if ((Code_Gen_Model_DW.Set_L3) ||
             (Code_Gen_Model_B.FixPtRelationalOperator_n)) {
    Code_Gen_Model_DW.is_Coral_Score_Position = Code_Gen_Model_IN_Level_3;
    Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_L3;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = Coral_Arm_Angle_L3;
  } else if ((Code_Gen_Model_DW.Set_L4) ||
             (Code_Gen_Model_B.FixPtRelationalOperator_d)) {
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
static void Code_Gen_Model_Coral_Eject(const boolean_T *Compare_f, const
  boolean_T *FixPtRelationalOperator_ne, const boolean_T
  *FixPtRelationalOperator_j, const boolean_T *FixPtRelationalOperator_i)
{
  boolean_T tmp;
  tmp = !(*Compare_f);
  if ((*FixPtRelationalOperator_ne) && tmp) {
    Code_Gen_Model_DW.is_Coral_Eject = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_Model_IN_Coral_Pickup;
    Code_Gen_Model_DW.is_Actions = Code_Ge_IN_Coral_Pickup_Prepare;
    Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Prepare;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = -90.0;
    Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
    Code_Gen_Model_DW.is_Set_Level = Code_Gen_Model_IN_None;
    Code_Gen_Model_DW.Set_L1 = false;
    Code_Gen_Model_DW.Set_L2 = false;
    Code_Gen_Model_DW.Set_L3 = false;
    Code_Gen_Model_DW.Set_L4 = false;
  } else if (*FixPtRelationalOperator_j) {
    if (Code_Gen_Model_B.Coral_Arm_Angle_Measured >=
        Coral_Arm_Angle_Start_Thresh) {
      Code_Gen_Model_DW.is_Coral_Eject = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        Code__IN_Elevator_Height_Bottom;
      Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Bottom;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = Coral_Arm_Angle_Up;
      Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
    } else {
      Code_Gen_Model_DW.is_Coral_Eject = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        C_IN_Elevator_Height_Bottom_pre;
      Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Prepare;
      Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
    }
  } else if ((*FixPtRelationalOperator_i) && tmp) {
    Code_Gen_Model_DW.is_Coral_Eject = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_IN_Elevator_Height_Top;
    Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Top;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = -80.0;
    Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_m) {
    Code_Gen_Model_DW.is_Coral_Eject = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_Model_IN_Algae_Score;
    Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Algae_Score;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = Coral_Arm_Angle_Up;
    Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_ji) {
    Code_Gen_Model_DW.is_Coral_Eject = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_Mo_IN_Algae_Pickup_Low;
    Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Algae_Low;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = Coral_Arm_Angle_Up;
    Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_ml) {
    Code_Gen_Model_DW.is_Coral_Eject = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_M_IN_Algae_Pickup_High;
    Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Algae_High;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = Coral_Arm_Angle_Up;
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
}

/* Function for Chart: '<S358>/Reefscape_Chart' */
static void Code_exit_internal_Coral_Pickup(void)
{
  Code_Gen_Model_DW.is_Set_Level = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
  if (Code_Gen_Model_DW.is_Actions == Code_IN_Coral_Pickup_Lower_Wait) {
    Code_Gen_Model_B.Coral_Pickup_Lower_Wait_State = false;
    Code_Gen_Model_DW.is_Actions = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
  } else {
    Code_Gen_Model_DW.is_Actions = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
  }
}

/* Function for Chart: '<S358>/Reefscape_Chart' */
static void Code_Gen_Model_Set_Level(void)
{
  switch (Code_Gen_Model_DW.is_Set_Level) {
   case Code_Gen_Model_IN_L1:
    if (((Code_Gen_Model_B.FixPtRelationalOperator_k) ||
         (Code_Gen_Model_B.FixPtRelationalOperator_n)) ||
        (Code_Gen_Model_B.FixPtRelationalOperator_d)) {
      if (Code_Gen_Model_B.FixPtRelationalOperator) {
        Code_Gen_Model_DW.is_Set_Level = Code_Gen_Model_IN_L1;
        Code_Gen_Model_DW.Set_L1 = true;
        Code_Gen_Model_DW.Set_L2 = false;
        Code_Gen_Model_DW.Set_L3 = false;
        Code_Gen_Model_DW.Set_L4 = false;
      } else if (Code_Gen_Model_B.FixPtRelationalOperator_k) {
        Code_Gen_Model_DW.is_Set_Level = Code_Gen_Model_IN_L2;
        Code_Gen_Model_DW.Set_L1 = false;
        Code_Gen_Model_DW.Set_L2 = true;
        Code_Gen_Model_DW.Set_L3 = false;
        Code_Gen_Model_DW.Set_L4 = false;
      } else if (Code_Gen_Model_B.FixPtRelationalOperator_n) {
        Code_Gen_Model_DW.is_Set_Level = Code_Gen_Model_IN_L3;
        Code_Gen_Model_DW.Set_L1 = false;
        Code_Gen_Model_DW.Set_L2 = false;
        Code_Gen_Model_DW.Set_L3 = true;
        Code_Gen_Model_DW.Set_L4 = false;
      } else if (Code_Gen_Model_B.FixPtRelationalOperator_d) {
        Code_Gen_Model_DW.is_Set_Level = Code_Gen_Model_IN_L4;
        Code_Gen_Model_DW.Set_L1 = false;
        Code_Gen_Model_DW.Set_L2 = false;
        Code_Gen_Model_DW.Set_L3 = false;
        Code_Gen_Model_DW.Set_L4 = true;
      }
    }
    break;

   case Code_Gen_Model_IN_L2:
    if (((Code_Gen_Model_B.FixPtRelationalOperator) ||
         (Code_Gen_Model_B.FixPtRelationalOperator_n)) ||
        (Code_Gen_Model_B.FixPtRelationalOperator_d)) {
      if (Code_Gen_Model_B.FixPtRelationalOperator) {
        Code_Gen_Model_DW.is_Set_Level = Code_Gen_Model_IN_L1;
        Code_Gen_Model_DW.Set_L1 = true;
        Code_Gen_Model_DW.Set_L2 = false;
        Code_Gen_Model_DW.Set_L3 = false;
        Code_Gen_Model_DW.Set_L4 = false;
      } else if (Code_Gen_Model_B.FixPtRelationalOperator_k) {
        Code_Gen_Model_DW.is_Set_Level = Code_Gen_Model_IN_L2;
        Code_Gen_Model_DW.Set_L1 = false;
        Code_Gen_Model_DW.Set_L2 = true;
        Code_Gen_Model_DW.Set_L3 = false;
        Code_Gen_Model_DW.Set_L4 = false;
      } else if (Code_Gen_Model_B.FixPtRelationalOperator_n) {
        Code_Gen_Model_DW.is_Set_Level = Code_Gen_Model_IN_L3;
        Code_Gen_Model_DW.Set_L1 = false;
        Code_Gen_Model_DW.Set_L2 = false;
        Code_Gen_Model_DW.Set_L3 = true;
        Code_Gen_Model_DW.Set_L4 = false;
      } else if (Code_Gen_Model_B.FixPtRelationalOperator_d) {
        Code_Gen_Model_DW.is_Set_Level = Code_Gen_Model_IN_L4;
        Code_Gen_Model_DW.Set_L1 = false;
        Code_Gen_Model_DW.Set_L2 = false;
        Code_Gen_Model_DW.Set_L3 = false;
        Code_Gen_Model_DW.Set_L4 = true;
      }
    }
    break;

   case Code_Gen_Model_IN_L3:
    if (((Code_Gen_Model_B.FixPtRelationalOperator) ||
         (Code_Gen_Model_B.FixPtRelationalOperator_k)) ||
        (Code_Gen_Model_B.FixPtRelationalOperator_d)) {
      if (Code_Gen_Model_B.FixPtRelationalOperator) {
        Code_Gen_Model_DW.is_Set_Level = Code_Gen_Model_IN_L1;
        Code_Gen_Model_DW.Set_L1 = true;
        Code_Gen_Model_DW.Set_L2 = false;
        Code_Gen_Model_DW.Set_L3 = false;
        Code_Gen_Model_DW.Set_L4 = false;
      } else if (Code_Gen_Model_B.FixPtRelationalOperator_k) {
        Code_Gen_Model_DW.is_Set_Level = Code_Gen_Model_IN_L2;
        Code_Gen_Model_DW.Set_L1 = false;
        Code_Gen_Model_DW.Set_L2 = true;
        Code_Gen_Model_DW.Set_L3 = false;
        Code_Gen_Model_DW.Set_L4 = false;
      } else if (Code_Gen_Model_B.FixPtRelationalOperator_n) {
        Code_Gen_Model_DW.is_Set_Level = Code_Gen_Model_IN_L3;
        Code_Gen_Model_DW.Set_L1 = false;
        Code_Gen_Model_DW.Set_L2 = false;
        Code_Gen_Model_DW.Set_L3 = true;
        Code_Gen_Model_DW.Set_L4 = false;
      } else if (Code_Gen_Model_B.FixPtRelationalOperator_d) {
        Code_Gen_Model_DW.is_Set_Level = Code_Gen_Model_IN_L4;
        Code_Gen_Model_DW.Set_L1 = false;
        Code_Gen_Model_DW.Set_L2 = false;
        Code_Gen_Model_DW.Set_L3 = false;
        Code_Gen_Model_DW.Set_L4 = true;
      }
    }
    break;

   case Code_Gen_Model_IN_L4:
    if (((Code_Gen_Model_B.FixPtRelationalOperator) ||
         (Code_Gen_Model_B.FixPtRelationalOperator_k)) ||
        (Code_Gen_Model_B.FixPtRelationalOperator_n)) {
      if (Code_Gen_Model_B.FixPtRelationalOperator) {
        Code_Gen_Model_DW.is_Set_Level = Code_Gen_Model_IN_L1;
        Code_Gen_Model_DW.Set_L1 = true;
        Code_Gen_Model_DW.Set_L2 = false;
        Code_Gen_Model_DW.Set_L3 = false;
        Code_Gen_Model_DW.Set_L4 = false;
      } else if (Code_Gen_Model_B.FixPtRelationalOperator_k) {
        Code_Gen_Model_DW.is_Set_Level = Code_Gen_Model_IN_L2;
        Code_Gen_Model_DW.Set_L1 = false;
        Code_Gen_Model_DW.Set_L2 = true;
        Code_Gen_Model_DW.Set_L3 = false;
        Code_Gen_Model_DW.Set_L4 = false;
      } else if (Code_Gen_Model_B.FixPtRelationalOperator_n) {
        Code_Gen_Model_DW.is_Set_Level = Code_Gen_Model_IN_L3;
        Code_Gen_Model_DW.Set_L1 = false;
        Code_Gen_Model_DW.Set_L2 = false;
        Code_Gen_Model_DW.Set_L3 = true;
        Code_Gen_Model_DW.Set_L4 = false;
      } else if (Code_Gen_Model_B.FixPtRelationalOperator_d) {
        Code_Gen_Model_DW.is_Set_Level = Code_Gen_Model_IN_L4;
        Code_Gen_Model_DW.Set_L1 = false;
        Code_Gen_Model_DW.Set_L2 = false;
        Code_Gen_Model_DW.Set_L3 = false;
        Code_Gen_Model_DW.Set_L4 = true;
      }
    }
    break;

   default:
    /* case IN_None: */
    if (Code_Gen_Model_B.FixPtRelationalOperator) {
      Code_Gen_Model_DW.is_Set_Level = Code_Gen_Model_IN_L1;
      Code_Gen_Model_DW.Set_L1 = true;
      Code_Gen_Model_DW.Set_L2 = false;
      Code_Gen_Model_DW.Set_L3 = false;
      Code_Gen_Model_DW.Set_L4 = false;
    } else if (Code_Gen_Model_B.FixPtRelationalOperator_k) {
      Code_Gen_Model_DW.is_Set_Level = Code_Gen_Model_IN_L2;
      Code_Gen_Model_DW.Set_L1 = false;
      Code_Gen_Model_DW.Set_L2 = true;
      Code_Gen_Model_DW.Set_L3 = false;
      Code_Gen_Model_DW.Set_L4 = false;
    } else if (Code_Gen_Model_B.FixPtRelationalOperator_n) {
      Code_Gen_Model_DW.is_Set_Level = Code_Gen_Model_IN_L3;
      Code_Gen_Model_DW.Set_L1 = false;
      Code_Gen_Model_DW.Set_L2 = false;
      Code_Gen_Model_DW.Set_L3 = true;
      Code_Gen_Model_DW.Set_L4 = false;
    } else if (Code_Gen_Model_B.FixPtRelationalOperator_d) {
      Code_Gen_Model_DW.is_Set_Level = Code_Gen_Model_IN_L4;
      Code_Gen_Model_DW.Set_L1 = false;
      Code_Gen_Model_DW.Set_L2 = false;
      Code_Gen_Model_DW.Set_L3 = false;
      Code_Gen_Model_DW.Set_L4 = true;
    }
    break;
  }
}

/* Function for Chart: '<S358>/Reefscape_Chart' */
static void Code_Gen_Model_Coral_Pickup(const boolean_T *Compare, const
  boolean_T *Compare_f, const boolean_T *FixPtRelationalOperator_ne, const
  boolean_T *FixPtRelationalOperator_j, const boolean_T
  *FixPtRelationalOperator_i)
{
  boolean_T tmp;
  tmp = !(*Compare_f);
  if ((*FixPtRelationalOperator_ne) && tmp) {
    Code_exit_internal_Coral_Pickup();
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_Model_IN_Coral_Pickup;
    Code_Gen_Model_DW.is_Actions = Code_Ge_IN_Coral_Pickup_Prepare;
    Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Prepare;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = -90.0;
    Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
    Code_Gen_Model_DW.is_Set_Level = Code_Gen_Model_IN_None;
    Code_Gen_Model_DW.Set_L1 = false;
    Code_Gen_Model_DW.Set_L2 = false;
    Code_Gen_Model_DW.Set_L3 = false;
    Code_Gen_Model_DW.Set_L4 = false;
  } else if (*FixPtRelationalOperator_j) {
    if (Code_Gen_Model_B.Coral_Arm_Angle_Measured >=
        Coral_Arm_Angle_Start_Thresh) {
      Code_exit_internal_Coral_Pickup();
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        Code__IN_Elevator_Height_Bottom;
      Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Bottom;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = Coral_Arm_Angle_Up;
      Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
    } else {
      Code_exit_internal_Coral_Pickup();
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        C_IN_Elevator_Height_Bottom_pre;
      Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Prepare;
      Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
    }
  } else if ((*FixPtRelationalOperator_i) && tmp) {
    Code_exit_internal_Coral_Pickup();
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_IN_Elevator_Height_Top;
    Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Top;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = -80.0;
    Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_m) {
    Code_exit_internal_Coral_Pickup();
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_Model_IN_Algae_Score;
    Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Algae_Score;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = Coral_Arm_Angle_Up;
    Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_ji) {
    Code_exit_internal_Coral_Pickup();
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_Mo_IN_Algae_Pickup_Low;
    Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Algae_Low;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = Coral_Arm_Angle_Up;
    Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_ml) {
    Code_exit_internal_Coral_Pickup();
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_M_IN_Algae_Pickup_High;
    Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Algae_High;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = Coral_Arm_Angle_Up;
    Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
  } else {
    switch (Code_Gen_Model_DW.is_Actions) {
     case Code_Gen__IN_Coral_Pickup_Lower:
      Code_Gen_Model_B.Coral_Wheel_DC = Coral_Motor_DC_Pickup;
      if (*Compare) {
        Code_Gen_Model_DW.is_Actions = Code_IN_Coral_Pickup_Lower_Wait;
        Code_Gen_Model_B.Coral_Pickup_Lower_Wait_State = true;
        Code_Gen_Model_B.Coral_Wheel_DC = Coral_Motor_DC_Hold;
        Code_Gen_Model_B.Elevator_LowerPickup_Reset = false;
        Code_Gen_Model_DW.timer = 0.0;
      }
      break;

     case Code_IN_Coral_Pickup_Lower_Wait:
      Code_Gen_Model_B.Coral_Wheel_DC = Coral_Motor_DC_Hold;
      if ((Code_Gen_Model_DW.timer >= Elevator_LowerPickup_Time) &&
          ((((Code_Gen_Model_DW.Set_L1) || (Code_Gen_Model_DW.Set_L2)) ||
            (Code_Gen_Model_DW.Set_L3)) || (Code_Gen_Model_DW.Set_L4))) {
        Code_Gen_Model_B.Elevator_LowerPickup_Reset = true;
        Code_Gen_Model_B.Coral_Pickup_Lower_Wait_State = false;
        Code_Gen_Model_DW.is_Actions = Code_Gen__IN_Coral_Pickup_Raise;
        Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Raise;
      } else {
        Code_Gen_Model_DW.timer += 0.02;
      }
      break;

     case Code_Ge_IN_Coral_Pickup_Prepare:
      Code_Gen_Model_B.Coral_Wheel_DC = 0.0;

      /* Inport: '<Root>/Coral_TOF_Distance' */
      if ((fabs(Code_Gen_Model_B.Elevator_Height_Desired_m -
                Code_Gen_Model_B.Elevator_Height_Measured) <=
           Elevator_Height_Error_Threshold) && ((fabs
            (Code_Gen_Model_B.Coral_Arm_Angle_Desired_o -
             Code_Gen_Model_B.Coral_Arm_Angle_Measured) <=
            Coral_Arm_Angle_Error_Threshold) &&
           (Code_Gen_Model_U.Coral_TOF_Distance < Coral_Detect_Distance))) {
        Code_Gen_Model_DW.is_Actions = Code_Gen__IN_Coral_Pickup_Lower;
        Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Lower;
        Code_Gen_Model_B.Coral_Wheel_DC = Coral_Motor_DC_Pickup;
      }

      /* End of Inport: '<Root>/Coral_TOF_Distance' */
      break;

     default:
      /* case IN_Coral_Pickup_Raise: */
      if ((fabs(Code_Gen_Model_B.Elevator_Height_Desired_m -
                Code_Gen_Model_B.Elevator_Height_Measured) <=
           Elevator_Height_Error_Threshold) && ((((Code_Gen_Model_DW.Set_L1) ||
             (Code_Gen_Model_DW.Set_L2)) || (Code_Gen_Model_DW.Set_L3)) ||
           (Code_Gen_Model_DW.Set_L4))) {
        Code_exit_internal_Coral_Pickup();
        Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
          Code_Gen_Model_IN_Start_Angle;
        Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = Coral_Arm_Angle_Start;
      }
      break;
    }

    if (Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel ==
        Code_Gen_Model_IN_Coral_Pickup) {
      Code_Gen_Model_Set_Level();
    }
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
    Code_Gen_Model_DW.Set_L1 = false;
    Code_Gen_Model_DW.Set_L2 = false;
    Code_Gen_Model_DW.Set_L3 = false;
    Code_Gen_Model_DW.Set_L4 = false;
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Ge_IN_Coral_Score_Position;
    enter_internal_Coral_Score_Posi();
  } else if (*FixPtRelationalOperator_l) {
    Code_Gen_Model_DW.is_Coral_Score_Position = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_Model_IN_Coral_Eject;
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
        Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
          Code_Gen_Model_IN_Coral_Eject;
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
static void Code_Gen_Elevator_Height_Bottom(const boolean_T *Compare_f, const
  boolean_T *FixPtRelationalOperator_ne, const boolean_T
  *FixPtRelationalOperator_j, const boolean_T *FixPtRelationalOperator_i)
{
  boolean_T tmp;
  Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
  tmp = !(*Compare_f);
  if ((*FixPtRelationalOperator_ne) && tmp) {
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_Model_IN_Coral_Pickup;
    Code_Gen_Model_DW.is_Actions = Code_Ge_IN_Coral_Pickup_Prepare;
    Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Prepare;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = -90.0;
    Code_Gen_Model_DW.is_Set_Level = Code_Gen_Model_IN_None;
    Code_Gen_Model_DW.Set_L1 = false;
    Code_Gen_Model_DW.Set_L2 = false;
    Code_Gen_Model_DW.Set_L3 = false;
    Code_Gen_Model_DW.Set_L4 = false;
  } else if (*FixPtRelationalOperator_j) {
    if (Code_Gen_Model_B.Coral_Arm_Angle_Measured >=
        Coral_Arm_Angle_Start_Thresh) {
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        Code__IN_Elevator_Height_Bottom;
      Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Bottom;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = Coral_Arm_Angle_Up;
    } else {
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        C_IN_Elevator_Height_Bottom_pre;
      Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Prepare;
    }
  } else if ((*FixPtRelationalOperator_i) && tmp) {
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_IN_Elevator_Height_Top;
    Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Top;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = -80.0;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_m) {
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_Model_IN_Algae_Score;
    Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Algae_Score;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = Coral_Arm_Angle_Up;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_ji) {
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_Mo_IN_Algae_Pickup_Low;
    Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Algae_Low;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = Coral_Arm_Angle_Up;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_ml) {
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_M_IN_Algae_Pickup_High;
    Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Algae_High;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = Coral_Arm_Angle_Up;
  }
}

/* Function for Chart: '<S358>/Reefscape_Chart' */
static void Code_Elevator_Height_Bottom_pre(const boolean_T *Compare_f, const
  boolean_T *FixPtRelationalOperator_ne, const boolean_T
  *FixPtRelationalOperator_j, const boolean_T *FixPtRelationalOperator_i)
{
  boolean_T guard1;
  Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
  guard1 = false;
  if (Code_Gen_Model_B.Elevator_Height_Measured >
      (Code_Gen_Model_B.Elevator_Height_Desired_m -
       Elevator_Height_Error_Threshold)) {
    guard1 = true;
  } else {
    boolean_T tmp;
    tmp = !(*Compare_f);
    if ((*FixPtRelationalOperator_ne) && tmp) {
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        Code_Gen_Model_IN_Coral_Pickup;
      Code_Gen_Model_DW.is_Actions = Code_Ge_IN_Coral_Pickup_Prepare;
      Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Prepare;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = -90.0;
      Code_Gen_Model_DW.is_Set_Level = Code_Gen_Model_IN_None;
      Code_Gen_Model_DW.Set_L1 = false;
      Code_Gen_Model_DW.Set_L2 = false;
      Code_Gen_Model_DW.Set_L3 = false;
      Code_Gen_Model_DW.Set_L4 = false;
    } else if (*FixPtRelationalOperator_j) {
      if (Code_Gen_Model_B.Coral_Arm_Angle_Measured >=
          Coral_Arm_Angle_Start_Thresh) {
        guard1 = true;
      } else {
        Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
          C_IN_Elevator_Height_Bottom_pre;
        Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Prepare;
      }
    } else if ((*FixPtRelationalOperator_i) && tmp) {
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        Code_Gen_IN_Elevator_Height_Top;
      Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Top;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = -80.0;
    } else if (Code_Gen_Model_B.FixPtRelationalOperator_m) {
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        Code_Gen_Model_IN_Algae_Score;
      Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Algae_Score;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = Coral_Arm_Angle_Up;
    } else if (Code_Gen_Model_B.FixPtRelationalOperator_ji) {
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        Code_Gen_Mo_IN_Algae_Pickup_Low;
      Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Algae_Low;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = Coral_Arm_Angle_Up;
    } else if (Code_Gen_Model_B.FixPtRelationalOperator_ml) {
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        Code_Gen_M_IN_Algae_Pickup_High;
      Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Algae_High;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = Coral_Arm_Angle_Up;
    }
  }

  if (guard1) {
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code__IN_Elevator_Height_Bottom;
    Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Bottom;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = Coral_Arm_Angle_Up;
  }
}

/* Function for Chart: '<S358>/Reefscape_Chart' */
static void Co_Elevator_CoralArm_CoralWheel(const boolean_T *Compare, const
  boolean_T *Compare_f, const boolean_T *FixPtRelationalOperator_ne, const
  boolean_T *FixPtRelationalOperator_j, const boolean_T
  *FixPtRelationalOperator_l, const boolean_T *FixPtRelationalOperator_i)
{
  boolean_T tmp;
  switch (Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel) {
   case Code_Gen_M_IN_Algae_Pickup_High:
    Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
    tmp = !(*Compare_f);
    if ((*FixPtRelationalOperator_ne) && tmp) {
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        Code_Gen_Model_IN_Coral_Pickup;
      Code_Gen_Model_DW.is_Actions = Code_Ge_IN_Coral_Pickup_Prepare;
      Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Prepare;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = -90.0;
      Code_Gen_Model_DW.is_Set_Level = Code_Gen_Model_IN_None;
      Code_Gen_Model_DW.Set_L1 = false;
      Code_Gen_Model_DW.Set_L2 = false;
      Code_Gen_Model_DW.Set_L3 = false;
      Code_Gen_Model_DW.Set_L4 = false;
    } else if (*FixPtRelationalOperator_j) {
      if (Code_Gen_Model_B.Coral_Arm_Angle_Measured >=
          Coral_Arm_Angle_Start_Thresh) {
        Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
          Code__IN_Elevator_Height_Bottom;
        Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Bottom;
        Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = Coral_Arm_Angle_Up;
      } else {
        Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
          C_IN_Elevator_Height_Bottom_pre;
        Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Prepare;
      }
    } else if ((*FixPtRelationalOperator_i) && tmp) {
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        Code_Gen_IN_Elevator_Height_Top;
      Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Top;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = -80.0;
    } else if (Code_Gen_Model_B.FixPtRelationalOperator_m) {
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        Code_Gen_Model_IN_Algae_Score;
      Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Algae_Score;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = Coral_Arm_Angle_Up;
    } else if (Code_Gen_Model_B.FixPtRelationalOperator_ji) {
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        Code_Gen_Mo_IN_Algae_Pickup_Low;
      Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Algae_Low;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = Coral_Arm_Angle_Up;
    } else if (Code_Gen_Model_B.FixPtRelationalOperator_ml) {
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        Code_Gen_M_IN_Algae_Pickup_High;
      Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Algae_High;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = Coral_Arm_Angle_Up;
    }
    break;

   case Code_Gen_Mo_IN_Algae_Pickup_Low:
    Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
    tmp = !(*Compare_f);
    if ((*FixPtRelationalOperator_ne) && tmp) {
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        Code_Gen_Model_IN_Coral_Pickup;
      Code_Gen_Model_DW.is_Actions = Code_Ge_IN_Coral_Pickup_Prepare;
      Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Prepare;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = -90.0;
      Code_Gen_Model_DW.is_Set_Level = Code_Gen_Model_IN_None;
      Code_Gen_Model_DW.Set_L1 = false;
      Code_Gen_Model_DW.Set_L2 = false;
      Code_Gen_Model_DW.Set_L3 = false;
      Code_Gen_Model_DW.Set_L4 = false;
    } else if (*FixPtRelationalOperator_j) {
      if (Code_Gen_Model_B.Coral_Arm_Angle_Measured >=
          Coral_Arm_Angle_Start_Thresh) {
        Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
          Code__IN_Elevator_Height_Bottom;
        Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Bottom;
        Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = Coral_Arm_Angle_Up;
      } else {
        Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
          C_IN_Elevator_Height_Bottom_pre;
        Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Prepare;
      }
    } else if ((*FixPtRelationalOperator_i) && tmp) {
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        Code_Gen_IN_Elevator_Height_Top;
      Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Top;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = -80.0;
    } else if (Code_Gen_Model_B.FixPtRelationalOperator_m) {
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        Code_Gen_Model_IN_Algae_Score;
      Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Algae_Score;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = Coral_Arm_Angle_Up;
    } else if (Code_Gen_Model_B.FixPtRelationalOperator_ji) {
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        Code_Gen_Mo_IN_Algae_Pickup_Low;
      Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Algae_Low;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = Coral_Arm_Angle_Up;
    } else if (Code_Gen_Model_B.FixPtRelationalOperator_ml) {
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        Code_Gen_M_IN_Algae_Pickup_High;
      Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Algae_High;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = Coral_Arm_Angle_Up;
    }
    break;

   case Code_Gen_Model_IN_Algae_Score:
    Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
    tmp = !(*Compare_f);
    if ((*FixPtRelationalOperator_ne) && tmp) {
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        Code_Gen_Model_IN_Coral_Pickup;
      Code_Gen_Model_DW.is_Actions = Code_Ge_IN_Coral_Pickup_Prepare;
      Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Prepare;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = -90.0;
      Code_Gen_Model_DW.is_Set_Level = Code_Gen_Model_IN_None;
      Code_Gen_Model_DW.Set_L1 = false;
      Code_Gen_Model_DW.Set_L2 = false;
      Code_Gen_Model_DW.Set_L3 = false;
      Code_Gen_Model_DW.Set_L4 = false;
    } else if (*FixPtRelationalOperator_j) {
      if (Code_Gen_Model_B.Coral_Arm_Angle_Measured >=
          Coral_Arm_Angle_Start_Thresh) {
        Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
          Code__IN_Elevator_Height_Bottom;
        Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Bottom;
        Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = Coral_Arm_Angle_Up;
      } else {
        Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
          C_IN_Elevator_Height_Bottom_pre;
        Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Prepare;
      }
    } else if ((*FixPtRelationalOperator_i) && tmp) {
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        Code_Gen_IN_Elevator_Height_Top;
      Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Top;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = -80.0;
    } else if (Code_Gen_Model_B.FixPtRelationalOperator_m) {
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        Code_Gen_Model_IN_Algae_Score;
      Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Algae_Score;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = Coral_Arm_Angle_Up;
    } else if (Code_Gen_Model_B.FixPtRelationalOperator_ji) {
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        Code_Gen_Mo_IN_Algae_Pickup_Low;
      Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Algae_Low;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = Coral_Arm_Angle_Up;
    } else if (Code_Gen_Model_B.FixPtRelationalOperator_ml) {
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        Code_Gen_M_IN_Algae_Pickup_High;
      Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Algae_High;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = Coral_Arm_Angle_Up;
    }
    break;

   case Code_Gen_Model_IN_Coral_Eject:
    Code_Gen_Model_Coral_Eject(Compare_f, FixPtRelationalOperator_ne,
      FixPtRelationalOperator_j, FixPtRelationalOperator_i);
    break;

   case Code_Gen_Model_IN_Coral_Pickup:
    Code_Gen_Model_Coral_Pickup(Compare, Compare_f, FixPtRelationalOperator_ne,
      FixPtRelationalOperator_j, FixPtRelationalOperator_i);
    break;

   case Code_Ge_IN_Coral_Score_Position:
    Code_Gen_M_Coral_Score_Position(Compare, FixPtRelationalOperator_l);
    break;

   case Code__IN_Elevator_Height_Bottom:
    Code_Gen_Elevator_Height_Bottom(Compare_f, FixPtRelationalOperator_ne,
      FixPtRelationalOperator_j, FixPtRelationalOperator_i);
    break;

   case C_IN_Elevator_Height_Bottom_pre:
    Code_Elevator_Height_Bottom_pre(Compare_f, FixPtRelationalOperator_ne,
      FixPtRelationalOperator_j, FixPtRelationalOperator_i);
    break;

   case Code_Gen_IN_Elevator_Height_Top:
    Code_Gen_Elevator_Height_Bottom(Compare_f, FixPtRelationalOperator_ne,
      FixPtRelationalOperator_j, FixPtRelationalOperator_i);
    break;

   default:
    /* case IN_Start_Angle: */
    if (Code_Gen_Model_B.Coral_Arm_Angle_Measured > Coral_Arm_Angle_Start_Thresh)
    {
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        Code_Ge_IN_Coral_Score_Position;
      enter_internal_Coral_Score_Posi();
    }
    break;
  }
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
  real_T rtb_TmpSignalConversionAtProduc[8];
  real_T rtb_Minus_n[2];
  real_T rtb_Reshapey[2];
  real_T tmp[2];
  real_T rtb_Abs_n2;
  real_T rtb_Add2_k_idx_0;
  real_T rtb_Add2_k_idx_1;
  real_T rtb_Add_at;
  real_T rtb_Add_cc;
  real_T rtb_Add_ia;
  real_T rtb_Add_jk;
  real_T rtb_Add_l;
  real_T rtb_Add_os;
  real_T rtb_Algae_Wheel_Inside_DutyCycl;
  real_T rtb_Algae_Wheel_Outside_DutyCyc;
  real_T rtb_Coral_Wheel_DutyCycle;
  real_T rtb_Disable_Wheels;
  real_T rtb_Enable_Wheels;
  real_T rtb_Hypot_g5;
  real_T rtb_Init;
  real_T rtb_Integral_ei;
  real_T rtb_Integral_h;
  real_T rtb_Merge1;
  real_T rtb_Minus_k_idx_1;
  real_T rtb_Product_lf;
  real_T rtb_Subtract1_ak;
  real_T rtb_Subtract1_b;
  real_T rtb_Subtract1_ie;
  real_T rtb_Subtract1_l2j;
  real_T rtb_Subtract1_lg;
  real_T rtb_Subtract_jj;
  real_T rtb_Subtract_pa;
  real_T rtb_Sum1_p;
  real_T rtb_Sum2_fc;
  real_T rtb_Sum2_m;
  real_T rtb_Switch1;
  real_T rtb_Switch1_m;
  real_T rtb_Switch2;
  real_T rtb_Switch2_ab;
  real_T rtb_Switch2_g;
  real_T rtb_Switch2_ji;
  real_T rtb_Switch2_l;
  real_T rtb_Switch4;
  real_T rtb_Switch5_a;
  real_T rtb_uDLookupTable_d;
  real_T rtb_uDLookupTable_f;
  int32_T i;
  int32_T i_0;
  int32_T rtb_Reset_Wheel_Offsets;
  int32_T tmp_0;
  int8_T rtAction;
  int8_T rtPrevAction;
  uint8_T rtb_GameState;
  boolean_T Compare;
  boolean_T Compare_f;
  boolean_T FixPtRelationalOperator_i;
  boolean_T FixPtRelationalOperator_j;
  boolean_T FixPtRelationalOperator_l;
  boolean_T rtb_AND1;
  boolean_T rtb_AND4;
  boolean_T rtb_Compare;
  boolean_T rtb_Compare_oq;
  boolean_T rtb_Compare_pd;
  boolean_T rtb_Is_Absolute_Steering;
  boolean_T rtb_Is_Absolute_Translation_g;
  boolean_T rtb_Relative_Translation_Flag;
  boolean_T rtb_Swerve_Motors_Disabled;
  boolean_T rtb_Uk1_ew;
  boolean_T rtb_UnitDelay_l;

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
  rtb_Switch2_ji = (Code_Gen_Model_U.FrontLeft_Drive_Motor_Rev -
                    Code_Gen_Model_DW.UD_DSTATE) * 0.049599071116336282;

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
  rtb_uDLookupTable_d = (Code_Gen_Model_U.FrontRight_Drive_Motor_Rev -
    Code_Gen_Model_DW.UD_DSTATE_m) * 0.049599071116336282;

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
  rtb_Init = (Code_Gen_Model_U.BackLeft_Drive_Motor_Rev -
              Code_Gen_Model_DW.UD_DSTATE_i) * 0.049599071116336282;

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
  rtb_Subtract1_ak = (Code_Gen_Model_U.BackRight_Drive_Motor_Rev -
                      Code_Gen_Model_DW.UD_DSTATE_c) * 0.049599071116336282;

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
  rtb_TmpSignalConversionAtProduc[0] = rtb_Switch2_ji * cos
    (Code_Gen_Model_B.FL_Steer_Module_Angle);
  rtb_TmpSignalConversionAtProduc[1] = rtb_Switch2_ji * sin
    (Code_Gen_Model_B.FL_Steer_Module_Angle);
  rtb_TmpSignalConversionAtProduc[2] = rtb_uDLookupTable_d * cos
    (Code_Gen_Model_B.FR_Steer_Module_Angle);
  rtb_TmpSignalConversionAtProduc[3] = rtb_uDLookupTable_d * sin
    (Code_Gen_Model_B.FR_Steer_Module_Angle);
  rtb_TmpSignalConversionAtProduc[4] = rtb_Init * cos
    (Code_Gen_Model_B.BL_Steer_Module_Angle);
  rtb_TmpSignalConversionAtProduc[5] = rtb_Init * sin
    (Code_Gen_Model_B.BL_Steer_Module_Angle);
  rtb_TmpSignalConversionAtProduc[6] = rtb_Subtract1_ak * cos
    (Code_Gen_Model_B.BR_Steer_Module_Angle);
  rtb_TmpSignalConversionAtProduc[7] = rtb_Subtract1_ak * sin
    (Code_Gen_Model_B.BR_Steer_Module_Angle);

  /* RelationalOperator: '<S72>/FixPt Relational Operator' incorporates:
   *  Inport: '<Root>/Joystick_Left_B11'
   *  UnitDelay: '<S72>/Delay Input1'
   *
   * Block description for '<S72>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_B.Button_Enable_Wheels = (Code_Gen_Model_U.Joystick_Left_B11 >
    Code_Gen_Model_DW.DelayInput1_DSTATE);

  /* RelationalOperator: '<S73>/FixPt Relational Operator' incorporates:
   *  Inport: '<Root>/Joystick_Left_B12'
   *  UnitDelay: '<S73>/Delay Input1'
   *
   * Block description for '<S73>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_B.Button_Reset_Wheel_Offsets =
    (Code_Gen_Model_U.Joystick_Left_B12 > Code_Gen_Model_DW.DelayInput1_DSTATE_e);

  /* RelationalOperator: '<S74>/FixPt Relational Operator' incorporates:
   *  Inport: '<Root>/Joystick_Left_B13'
   *  UnitDelay: '<S74>/Delay Input1'
   *
   * Block description for '<S74>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_B.Button_Disable_Wheels = (Code_Gen_Model_U.Joystick_Left_B13 >
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
  Code_Gen_Model_B.Align_Left = (Code_Gen_Model_U.Joystick_Left_B3 != 0.0);

  /* RelationalOperator: '<S68>/Compare' incorporates:
   *  Constant: '<S68>/Constant'
   *  Inport: '<Root>/Joystick_Left_B4'
   */
  Code_Gen_Model_B.Align_Right = (Code_Gen_Model_U.Joystick_Left_B4 != 0.0);

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

  /* Sum: '<S20>/Add' incorporates:
   *  Constant: '<S20>/Constant'
   *  Inport: '<Root>/Limelight_Tag_x'
   */
  Code_Gen_Model_B.Limelight_Tag_Corrected_X = Code_Gen_Model_U.Limelight_Tag_x
    + Limelight_Tag_X_Offset;

  /* Sum: '<S20>/Add1' incorporates:
   *  Constant: '<S20>/Constant1'
   *  Inport: '<Root>/Limelight_Tag_y'
   */
  Code_Gen_Model_B.Limelight_Tag_Corrected_Y = Code_Gen_Model_U.Limelight_Tag_y
    + Limelight_Tag_Y_Offset;

  /* Sum: '<S20>/Add2' incorporates:
   *  Constant: '<S20>/Constant2'
   *  Inport: '<Root>/Limelight_Tag_angle'
   */
  Code_Gen_Model_B.Limelight_Tag_Corrected_Angle =
    Code_Gen_Model_U.Limelight_Tag_angle + Limelight_Tag_Angle_Offset;

  /* Switch: '<S11>/Switch1' incorporates:
   *  Constant: '<S11>/Constant2'
   *  Constant: '<S11>/Constant3'
   *  Inport: '<Root>/Gyro_Angle'
   *  RelationalOperator: '<S58>/FixPt Relational Operator'
   *  Sum: '<S11>/Sum'
   *  UnitDelay: '<S11>/Unit Delay1'
   *  UnitDelay: '<S58>/Delay Input1'
   *
   * Block description for '<S58>/Delay Input1':
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

  /* Gain: '<S57>/Gain1' */
  Code_Gen_Model_B.Gyro_Angle_rad = 0.017453292519943295 *
    Code_Gen_Model_B.Gyro_Angle_Calibrated_deg;

  /* RelationalOperator: '<S59>/Compare' incorporates:
   *  Constant: '<S59>/Constant'
   *  Inport: '<Root>/Gamepad_POV'
   */
  Code_Gen_Model_B.Gamepad_POV_Up = (Code_Gen_Model_U.Gamepad_POV == 0.0);

  /* RelationalOperator: '<S60>/Compare' incorporates:
   *  Constant: '<S60>/Constant'
   *  Inport: '<Root>/Gamepad_POV'
   */
  Code_Gen_Model_B.Gamepad_POV_Down = (Code_Gen_Model_U.Gamepad_POV == 180.0);

  /* RelationalOperator: '<S62>/Compare' incorporates:
   *  Constant: '<S62>/Constant'
   *  Inport: '<Root>/Gamepad_POV'
   */
  Code_Gen_Model_B.Gamepad_POV_Left = (Code_Gen_Model_U.Gamepad_POV == 270.0);

  /* RelationalOperator: '<S61>/Compare' incorporates:
   *  Constant: '<S61>/Constant'
   *  Inport: '<Root>/Gamepad_POV'
   */
  Code_Gen_Model_B.Gamepad_POV_Right = (Code_Gen_Model_U.Gamepad_POV == 90.0);

  /* RelationalOperator: '<S3>/Compare' incorporates:
   *  Constant: '<S3>/Constant'
   *  Inport: '<Root>/Elevator_Limit_Switch_Bottom'
   */
  rtb_Compare = (Code_Gen_Model_U.Elevator_Limit_Switch_Bottom != 0.0);

  /* RelationalOperator: '<S4>/Compare' incorporates:
   *  Constant: '<S4>/Constant'
   *  Inport: '<Root>/Elevator_Limit_Switch_Top'
   */
  rtb_Compare_pd = (Code_Gen_Model_U.Elevator_Limit_Switch_Top != 0.0);

  /* Gain: '<S10>/Gain1' incorporates:
   *  Inport: '<Root>/Elevator_Motor_Rev'
   */
  Code_Gen_Model_B.Elevator_Height_Measured_Raw = Elevator_MotorRev_to_Inch *
    Code_Gen_Model_U.Elevator_Motor_Rev;

  /* UnitDelay: '<S1>/Unit Delay' */
  rtb_UnitDelay_l = Code_Gen_Model_DW.UnitDelay_DSTATE_mph;

  /* Switch: '<S10>/Switch1' incorporates:
   *  RelationalOperator: '<S54>/FixPt Relational Operator'
   *  RelationalOperator: '<S55>/FixPt Relational Operator'
   *  RelationalOperator: '<S56>/FixPt Relational Operator'
   *  Switch: '<S10>/Switch2'
   *  Switch: '<S10>/Switch3'
   *  UnitDelay: '<S1>/Unit Delay'
   *  UnitDelay: '<S54>/Delay Input1'
   *  UnitDelay: '<S55>/Delay Input1'
   *  UnitDelay: '<S56>/Delay Input1'
   *
   * Block description for '<S54>/Delay Input1':
   *
   *  Store in Global RAM
   *
   * Block description for '<S55>/Delay Input1':
   *
   *  Store in Global RAM
   *
   * Block description for '<S56>/Delay Input1':
   *
   *  Store in Global RAM
   */
  if (((int32_T)rtb_Compare) < ((int32_T)Code_Gen_Model_DW.DelayInput1_DSTATE_b))
  {
    /* Switch: '<S10>/Switch1' */
    Code_Gen_Model_B.Elevator_Height_Offset =
      Code_Gen_Model_B.Elevator_Height_Measured_Raw;
  } else if (((int32_T)rtb_Compare_pd) < ((int32_T)
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
  if (rtb_Compare || rtb_Compare_pd) {
    /* Switch: '<S10>/Switch4' */
    if (rtb_Compare) {
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

  /* RelationalOperator: '<S6>/Compare' incorporates:
   *  Constant: '<S6>/Constant'
   *  Inport: '<Root>/Algae_Limit_Switch'
   */
  Compare_f = (Code_Gen_Model_U.Algae_Limit_Switch != 0.0);

  /* SwitchCase: '<S1>/Switch Case' incorporates:
   *  Inport: '<Root>/GameState'
   */
  rtPrevAction = Code_Gen_Model_DW.SwitchCase_ActiveSubsystem;
  rtb_Minus_k_idx_1 = trunc(Code_Gen_Model_U.GameState);
  if ((rtIsNaN(rtb_Minus_k_idx_1)) || (rtIsInf(rtb_Minus_k_idx_1))) {
    rtb_Minus_k_idx_1 = 0.0;
  } else {
    rtb_Minus_k_idx_1 = fmod(rtb_Minus_k_idx_1, 4.294967296E+9);
  }

  switch ((rtb_Minus_k_idx_1 < 0.0) ? (-((int32_T)((uint32_T)(-rtb_Minus_k_idx_1))))
          : ((int32_T)((uint32_T)rtb_Minus_k_idx_1))) {
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
    rtb_Enable_Wheels = 0.0;

    /* SignalConversion generated from: '<S8>/Reset_Wheel_Offsets' incorporates:
     *  Constant: '<S8>/Constant13'
     */
    rtb_Reset_Wheel_Offsets = 0;

    /* SignalConversion generated from: '<S8>/Disable_Wheels' incorporates:
     *  Constant: '<S8>/Constant14'
     */
    rtb_Disable_Wheels = 0.0;

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
    rtb_Coral_Wheel_DutyCycle = 0.0;

    /* SignalConversion generated from: '<S8>/Algae_Wheel_Outside_DutyCycle' incorporates:
     *  Constant: '<S8>/Constant19'
     */
    rtb_Algae_Wheel_Outside_DutyCyc = 0.0;

    /* SignalConversion generated from: '<S8>/Algae_Wheel_Inside_DutyCycle' incorporates:
     *  Constant: '<S8>/Constant20'
     */
    rtb_Algae_Wheel_Inside_DutyCycl = 0.0;

    /* Merge: '<S15>/Merge21' incorporates:
     *  Constant: '<S8>/Constant21'
     *  SignalConversion generated from: '<S8>/Elevator_LowerPickup_Reset'
     */
    Code_Gen_Model_B.Elevator_LowerPickup_Reset_tp = false;

    /* SignalConversion generated from: '<S8>/Coral_Pickup_Lower_Wait_State' incorporates:
     *  Constant: '<S8>/Constant22'
     */
    Compare = false;

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
    rtb_Enable_Wheels = 0.0;

    /* SignalConversion generated from: '<S2>/Reset_Wheel_Offsets' incorporates:
     *  Constant: '<S2>/Constant13'
     */
    rtb_Reset_Wheel_Offsets = 0;

    /* SignalConversion generated from: '<S2>/Disable_Wheels' incorporates:
     *  Constant: '<S2>/Constant14'
     */
    rtb_Disable_Wheels = 0.0;

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
    rtb_Coral_Wheel_DutyCycle = 0.0;

    /* SignalConversion generated from: '<S2>/Algae_Wheel_Outside_DutyCycle' incorporates:
     *  Constant: '<S2>/Constant19'
     */
    rtb_Algae_Wheel_Outside_DutyCyc = 0.0;

    /* SignalConversion generated from: '<S2>/Algae_Wheel_Inside_DutyCycle' incorporates:
     *  Constant: '<S2>/Constant20'
     */
    rtb_Algae_Wheel_Inside_DutyCycl = 0.0;

    /* Merge: '<S15>/Merge21' incorporates:
     *  Constant: '<S2>/Constant21'
     *  SignalConversion generated from: '<S2>/Elevator_LowerPickup_Reset'
     */
    Code_Gen_Model_B.Elevator_LowerPickup_Reset_tp = false;

    /* SignalConversion generated from: '<S2>/Coral_Pickup_Lower_Wait_State' incorporates:
     *  Constant: '<S2>/Constant22'
     */
    Compare = false;

    /* End of Outputs for SubSystem: '<S1>/Autonomous' */
    break;

   case 2:
    if (rtAction != rtPrevAction) {
      /* InitializeConditions for IfAction SubSystem: '<S1>/Teleop' incorporates:
       *  ActionPort: '<S22>/Action Port'
       */
      /* InitializeConditions for SwitchCase: '<S1>/Switch Case' incorporates:
       *  UnitDelay: '<S362>/Unit Delay1'
       *  UnitDelay: '<S362>/Unit Delay2'
       *  UnitDelay: '<S362>/Unit Delay3'
       *  UnitDelay: '<S362>/Unit Delay4'
       *  UnitDelay: '<S365>/Delay Input1'
       *  UnitDelay: '<S366>/Delay Input1'
       *  UnitDelay: '<S367>/Delay Input1'
       *  UnitDelay: '<S368>/Delay Input1'
       *  UnitDelay: '<S369>/Delay Input1'
       *  UnitDelay: '<S370>/Delay Input1'
       *  UnitDelay: '<S375>/Unit Delay'
       *  UnitDelay: '<S375>/Unit Delay1'
       *  UnitDelay: '<S379>/FixPt Unit Delay1'
       *  UnitDelay: '<S379>/FixPt Unit Delay2'
       *  UnitDelay: '<S382>/Delay Input1'
       *  UnitDelay: '<S383>/Delay Input1'
       *  UnitDelay: '<S384>/Delay Input1'
       *  UnitDelay: '<S385>/Delay Input1'
       *  UnitDelay: '<S386>/Delay Input1'
       *  UnitDelay: '<S387>/Delay Input1'
       *  UnitDelay: '<S388>/Delay Input1'
       *  UnitDelay: '<S389>/Delay Input1'
       *  UnitDelay: '<S390>/Delay Input1'
       *  UnitDelay: '<S391>/Delay Input1'
       *  UnitDelay: '<S392>/Delay Input1'
       *  UnitDelay: '<S393>/Delay Input1'
       *  UnitDelay: '<S394>/Delay Input1'
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
       * Block description for '<S368>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S369>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S370>/Delay Input1':
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
       *
       * Block description for '<S389>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S390>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S391>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S392>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S393>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S394>/Delay Input1':
       *
       *  Store in Global RAM
       */
      Code_Gen_Model_DW.DelayInput1_DSTATE_jp = false;
      Code_Gen_Model_DW.DelayInput1_DSTATE_f = 0.0;
      Code_Gen_Model_DW.DelayInput1_DSTATE_m = false;
      Code_Gen_Model_DW.DelayInput1_DSTATE_k = false;
      Code_Gen_Model_DW.DelayInput1_DSTATE_g = false;
      Code_Gen_Model_DW.DelayInput1_DSTATE_g2 = false;
      Code_Gen_Model_DW.UnitDelay2_DSTATE = false;
      Code_Gen_Model_DW.UnitDelay4_DSTATE = false;
      Code_Gen_Model_DW.UnitDelay3_DSTATE = 0.0;
      Code_Gen_Model_DW.UnitDelay1_DSTATE_j = 0.0;
      Code_Gen_Model_DW.UnitDelay1_DSTATE_l = 0.0;
      Code_Gen_Model_DW.UnitDelay_DSTATE_p = 0.0;
      Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_a = 1U;
      Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_f = 0.0;
      Code_Gen_Model_DW.DelayInput1_DSTATE_c = 0.0;
      Code_Gen_Model_DW.DelayInput1_DSTATE_nr = 0.0;
      Code_Gen_Model_DW.DelayInput1_DSTATE_ez = 0.0;
      Code_Gen_Model_DW.DelayInput1_DSTATE_nh = 0.0;
      Code_Gen_Model_DW.DelayInput1_DSTATE_i = 0.0;
      Code_Gen_Model_DW.DelayInput1_DSTATE_cp = 0.0;
      Code_Gen_Model_DW.DelayInput1_DSTATE_pd = 0.0;
      Code_Gen_Model_DW.DelayInput1_DSTATE_o = 0.0;
      Code_Gen_Model_DW.DelayInput1_DSTATE_j = 0.0;
      Code_Gen_Model_DW.DelayInput1_DSTATE_oy = false;
      Code_Gen_Model_DW.DelayInput1_DSTATE_fx = false;
      Code_Gen_Model_DW.DelayInput1_DSTATE_o5 = false;
      Code_Gen_Model_DW.DelayInput1_DSTATE_a = false;

      /* End of InitializeConditions for SubSystem: '<S1>/Teleop' */

      /* SystemReset for IfAction SubSystem: '<S1>/Teleop' incorporates:
       *  ActionPort: '<S22>/Action Port'
       */
      /* SystemReset for SwitchCase: '<S1>/Switch Case' incorporates:
       *  Chart: '<S358>/Reefscape_Chart'
       */
      Code_Gen_Model_DW.is_active_c4_Code_Gen_Model = 0U;
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Coral_Eject = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Actions = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Set_Level = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Coral_Score_Position =
        Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Algae_Wheels = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_B.Elevator_Height_Desired_m = 0.0;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = 0.0;
      Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
      Code_Gen_Model_DW.timer = 0.0;
      Code_Gen_Model_B.Elevator_LowerPickup_Reset = false;
      Code_Gen_Model_DW.Set_L1 = false;
      Code_Gen_Model_DW.Set_L2 = false;
      Code_Gen_Model_DW.Set_L3 = false;
      Code_Gen_Model_DW.Set_L4 = false;
      Code_Gen_Model_B.Coral_Pickup_Lower_Wait_State = false;

      /* End of SystemReset for SubSystem: '<S1>/Teleop' */
    }

    /* Outputs for IfAction SubSystem: '<S1>/Teleop' incorporates:
     *  ActionPort: '<S22>/Action Port'
     */
    /* Logic: '<S356>/Logical Operator' incorporates:
     *  Constant: '<S359>/Constant'
     *  Constant: '<S360>/Constant'
     *  Constant: '<S361>/Constant'
     *  RelationalOperator: '<S359>/Compare'
     *  RelationalOperator: '<S360>/Compare'
     *  RelationalOperator: '<S361>/Compare'
     */
    rtb_Swerve_Motors_Disabled = (((Code_Gen_Model_B.Limelight_Tag_Corrected_X
      != 0.0) && (Code_Gen_Model_B.Limelight_Tag_Corrected_Y != 0.0)) &&
      (Code_Gen_Model_B.Limelight_Tag_Corrected_Angle != 0.0));

    /* Logic: '<S356>/Logical Operator3' incorporates:
     *  Logic: '<S356>/Logical Operator1'
     *  Logic: '<S356>/Logical Operator2'
     */
    Code_Gen_Model_B.AT_Target_Enable = ((rtb_Swerve_Motors_Disabled &&
      (Code_Gen_Model_B.Align_Left)) || (rtb_Swerve_Motors_Disabled &&
      (Code_Gen_Model_B.Align_Right)));

    /* UnaryMinus: '<S356>/Unary Minus' */
    Code_Gen_Model_B.AT_Error_Angle =
      -Code_Gen_Model_B.Limelight_Tag_Corrected_Angle;

    /* DeadZone: '<S362>/Dead Zone' */
    if (Code_Gen_Model_B.Steer_Joystick_Z > Twist_Deadzone_pos) {
      rtb_Minus_k_idx_1 = Code_Gen_Model_B.Steer_Joystick_Z - Twist_Deadzone_pos;
    } else if (Code_Gen_Model_B.Steer_Joystick_Z >= Twist_Deadzone_neg) {
      rtb_Minus_k_idx_1 = 0.0;
    } else {
      rtb_Minus_k_idx_1 = Code_Gen_Model_B.Steer_Joystick_Z - Twist_Deadzone_neg;
    }

    /* Switch: '<S362>/Switch' incorporates:
     *  Constant: '<S362>/Constant4'
     *  Constant: '<S362>/Constant9'
     *  Product: '<S362>/Product2'
     */
    if (Code_Gen_Model_B.AT_Target_Enable) {
      rtb_Switch2_g = Code_Gen_Model_B.AT_Error_Angle *
        Steering_AT_Error_Angle_Gain;
    } else {
      rtb_Switch2_g = 0.0;
    }

    /* Sum: '<S362>/Add' incorporates:
     *  Constant: '<S362>/Constant'
     *  Constant: '<S362>/Constant1'
     *  DeadZone: '<S362>/Dead Zone'
     *  Lookup_n-D: '<S362>/Modulation_Str_Y_Rel'
     *  Product: '<S362>/Product'
     *  Product: '<S362>/Product1'
     *  SignalConversion: '<S12>/Signal Copy5'
     *  Switch: '<S362>/Switch'
     */
    rtb_Coral_Wheel_DutyCycle = ((look1_binlcpw
      (Code_Gen_Model_B.Steer_Joystick_Y,
       Code_Gen_Model_ConstP.Modulation_Str_Y_Rel_bp01Data,
       Code_Gen_Model_ConstP.Modulation_Str_Y_Rel_tableData, 20U) *
      Steering_Relative_Gain) + (rtb_Minus_k_idx_1 * Steering_Twist_Gain)) +
      rtb_Switch2_g;

    /* RelationalOperator: '<S364>/Compare' incorporates:
     *  Constant: '<S364>/Constant'
     */
    rtb_Compare_oq = (rtb_Coral_Wheel_DutyCycle == 0.0);

    /* RelationalOperator: '<S369>/FixPt Relational Operator' incorporates:
     *  Constant: '<S362>/AT_Target_Enable_placeholder'
     *  UnitDelay: '<S369>/Delay Input1'
     *
     * Block description for '<S369>/Delay Input1':
     *
     *  Store in Global RAM
     */
    rtb_Swerve_Motors_Disabled = (Code_Gen_Model_DW.DelayInput1_DSTATE_f < 0.0);

    /* Logic: '<S362>/AND2' incorporates:
     *  RelationalOperator: '<S365>/FixPt Relational Operator'
     *  RelationalOperator: '<S366>/FixPt Relational Operator'
     *  RelationalOperator: '<S367>/FixPt Relational Operator'
     *  RelationalOperator: '<S368>/FixPt Relational Operator'
     *  UnitDelay: '<S365>/Delay Input1'
     *  UnitDelay: '<S366>/Delay Input1'
     *  UnitDelay: '<S367>/Delay Input1'
     *  UnitDelay: '<S368>/Delay Input1'
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
     * Block description for '<S368>/Delay Input1':
     *
     *  Store in Global RAM
     */
    rtb_Is_Absolute_Translation_g = ((((((int32_T)
      Code_Gen_Model_B.Face_Away_Driver) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_m)) || (((int32_T)
      Code_Gen_Model_B.Face_Left_Driver) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_k))) || (((int32_T)
      Code_Gen_Model_B.Face_Toward_Driver) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_g))) || (((int32_T)
      Code_Gen_Model_B.Face_Right_Driver) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_g2)));

    /* Logic: '<S362>/AND1' incorporates:
     *  Logic: '<S362>/AND3'
     *  Logic: '<S362>/AND7'
     *  UnitDelay: '<S362>/Unit Delay2'
     */
    rtb_AND1 = ((rtb_Compare_oq && (!rtb_Swerve_Motors_Disabled)) &&
                (rtb_Is_Absolute_Translation_g ||
                 (Code_Gen_Model_DW.UnitDelay2_DSTATE)));

    /* Logic: '<S362>/AND4' incorporates:
     *  Logic: '<S362>/AND5'
     *  Logic: '<S362>/AND8'
     *  UnitDelay: '<S362>/Unit Delay4'
     */
    rtb_AND4 = ((rtb_Compare_oq && (!rtb_Is_Absolute_Translation_g)) &&
                (rtb_Swerve_Motors_Disabled ||
                 (Code_Gen_Model_DW.UnitDelay4_DSTATE)));

    /* Logic: '<S362>/AND6' */
    Code_Gen_Model_B.Steering_Abs_Angle_Active = (rtb_AND1 || rtb_AND4);

    /* Switch: '<S362>/Switch8' incorporates:
     *  Constant: '<S371>/Constant'
     *  Logic: '<S362>/AND9'
     *  RelationalOperator: '<S370>/FixPt Relational Operator'
     *  RelationalOperator: '<S371>/Compare'
     *  UnitDelay: '<S17>/Unit Delay'
     *  UnitDelay: '<S370>/Delay Input1'
     *
     * Block description for '<S370>/Delay Input1':
     *
     *  Store in Global RAM
     */
    if (((Code_Gen_Model_B.Steering_Abs_Angle_Active) || (((int32_T)
           rtb_Compare_oq) > ((int32_T)Code_Gen_Model_DW.DelayInput1_DSTATE_jp)))
        || (Code_Gen_Model_B.Active_GameState != 2)) {
      /* Switch: '<S362>/Switch8' */
      Code_Gen_Model_B.Steering_Abs_Gyro_Latch = Code_Gen_Model_B.Gyro_Angle_rad;
    } else {
      /* Switch: '<S362>/Switch8' incorporates:
       *  UnitDelay: '<S362>/Unit Delay3'
       */
      Code_Gen_Model_B.Steering_Abs_Gyro_Latch =
        Code_Gen_Model_DW.UnitDelay3_DSTATE;
    }

    /* End of Switch: '<S362>/Switch8' */

    /* Switch: '<S362>/Switch4' incorporates:
     *  Constant: '<S362>/Constant5'
     *  Switch: '<S362>/Switch5'
     *  Switch: '<S362>/Switch6'
     *  Switch: '<S362>/Switch7'
     */
    if (Code_Gen_Model_B.Face_Away_Driver) {
      rtb_Switch4 = 0.0;
    } else if (Code_Gen_Model_B.Face_Left_Driver) {
      /* Switch: '<S362>/Switch5' incorporates:
       *  Constant: '<S362>/Constant6'
       */
      rtb_Switch4 = 1.5707963267948966;
    } else if (Code_Gen_Model_B.Face_Toward_Driver) {
      /* Switch: '<S362>/Switch6' incorporates:
       *  Constant: '<S362>/Constant7'
       *  Switch: '<S362>/Switch5'
       */
      rtb_Switch4 = 3.1415926535897931;
    } else if (Code_Gen_Model_B.Face_Right_Driver) {
      /* Switch: '<S362>/Switch7' incorporates:
       *  Constant: '<S362>/Constant8'
       *  Switch: '<S362>/Switch5'
       *  Switch: '<S362>/Switch6'
       */
      rtb_Switch4 = 4.71238898038469;
    } else {
      /* Switch: '<S362>/Switch6' incorporates:
       *  Switch: '<S362>/Switch5'
       *  UnitDelay: '<S362>/Unit Delay1'
       */
      rtb_Switch4 = Code_Gen_Model_DW.UnitDelay1_DSTATE_j;
    }

    /* End of Switch: '<S362>/Switch4' */

    /* Switch: '<S362>/Switch2' incorporates:
     *  Switch: '<S362>/Switch3'
     */
    if (Code_Gen_Model_B.Steering_Abs_Angle_Active) {
      /* Switch: '<S362>/Switch2' incorporates:
       *  Constant: '<S362>/Constant2'
       */
      Code_Gen_Model_B.Steering_Abs_Gyro = 0.0;

      /* Switch: '<S362>/Switch3' */
      Code_Gen_Model_B.Steering_Abs_Angle = rtb_Switch4;
    } else {
      /* Switch: '<S362>/Switch2' */
      Code_Gen_Model_B.Steering_Abs_Gyro =
        Code_Gen_Model_B.Steering_Abs_Gyro_Latch;

      /* Switch: '<S362>/Switch3' incorporates:
       *  Constant: '<S362>/Constant3'
       */
      Code_Gen_Model_B.Steering_Abs_Angle = 0.0;
    }

    /* End of Switch: '<S362>/Switch2' */

    /* Merge: '<S15>/Merge1' incorporates:
     *  Sum: '<S362>/Add1'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd = Code_Gen_Model_B.Steering_Abs_Angle +
      Code_Gen_Model_B.Steering_Abs_Gyro;

    /* Switch: '<S22>/Switch1' incorporates:
     *  Constant: '<S22>/Constant5'
     *  Constant: '<S22>/Constant8'
     *  DataTypeConversion: '<S22>/Data Type Conversion1'
     */
    if (TEST_Swerve_Mode_Override_Flag != 0.0) {
      rtb_Is_Absolute_Steering = (TEST_Swerve_Mode_Steering != 0.0);
    } else {
      rtb_Is_Absolute_Steering = rtb_Compare_oq;
    }

    /* End of Switch: '<S22>/Switch1' */

    /* Lookup_n-D: '<S363>/Modulation_Drv' incorporates:
     *  Math: '<S363>/Magnitude'
     */
    rtb_Algae_Wheel_Outside_DutyCyc = look1_binlcpw(rt_hypotd_snf
      (Code_Gen_Model_B.Drive_Joystick_X, Code_Gen_Model_B.Drive_Joystick_Y),
      Code_Gen_Model_ConstP.Modulation_Drv_bp01Data,
      Code_Gen_Model_ConstP.Modulation_Drv_tableData, 20U);

    /* RelationalOperator: '<S373>/Compare' incorporates:
     *  Constant: '<S373>/Constant'
     */
    rtb_Swerve_Motors_Disabled = (rtb_Algae_Wheel_Outside_DutyCyc == 0.0);

    /* DeadZone: '<S363>/Dead Zone' */
    if (Code_Gen_Model_B.Drive_Joystick_Z > Twist_Deadzone_pos) {
      rtb_Algae_Wheel_Inside_DutyCycl = Code_Gen_Model_B.Drive_Joystick_Z -
        Twist_Deadzone_pos;
    } else if (Code_Gen_Model_B.Drive_Joystick_Z >= Twist_Deadzone_neg) {
      rtb_Algae_Wheel_Inside_DutyCycl = 0.0;
    } else {
      rtb_Algae_Wheel_Inside_DutyCycl = Code_Gen_Model_B.Drive_Joystick_Z -
        Twist_Deadzone_neg;
    }

    /* End of DeadZone: '<S363>/Dead Zone' */

    /* Logic: '<S363>/Logical Operator' incorporates:
     *  Constant: '<S374>/Constant'
     *  RelationalOperator: '<S374>/Compare'
     */
    rtb_Relative_Translation_Flag = ((rtb_Algae_Wheel_Inside_DutyCycl != 0.0) &&
      rtb_Swerve_Motors_Disabled);

    /* Switch: '<S22>/Switch' incorporates:
     *  Constant: '<S22>/Constant5'
     *  Constant: '<S22>/Constant7'
     *  DataTypeConversion: '<S22>/Data Type Conversion'
     *  Switch: '<S363>/Switch3'
     */
    if (TEST_Swerve_Mode_Override_Flag != 0.0) {
      rtb_Is_Absolute_Translation_g = (TEST_Swerve_Mode_Translation != 0.0);
    } else {
      rtb_Is_Absolute_Translation_g = !rtb_Relative_Translation_Flag;
    }

    /* End of Switch: '<S22>/Switch' */

    /* Switch: '<S356>/Switch' incorporates:
     *  Constant: '<S356>/Constant1'
     *  Constant: '<S356>/Constant3'
     *  Switch: '<S356>/Switch1'
     */
    if (Code_Gen_Model_B.Align_Left) {
      rtb_Minus_k_idx_1 = AT_Reef_Target_Left_Y;
    } else if (Code_Gen_Model_B.Align_Right) {
      /* Switch: '<S356>/Switch1' incorporates:
       *  Constant: '<S356>/Constant2'
       */
      rtb_Minus_k_idx_1 = AT_Reef_Target_Right_Y;
    } else {
      rtb_Minus_k_idx_1 = 0.0;
    }

    /* Sum: '<S356>/Subtract1' incorporates:
     *  Switch: '<S356>/Switch'
     */
    Code_Gen_Model_B.AT_Error_Y = rtb_Minus_k_idx_1 -
      Code_Gen_Model_B.Limelight_Tag_Corrected_Y;

    /* Sum: '<S356>/Subtract' incorporates:
     *  Constant: '<S356>/Constant'
     */
    Code_Gen_Model_B.Subtract = AT_Reef_Target_X -
      Code_Gen_Model_B.Limelight_Tag_Corrected_X;

    /* UnaryMinus: '<S356>/Unary Minus1' */
    Code_Gen_Model_B.AT_Error_X = -Code_Gen_Model_B.Subtract;

    /* Switch: '<S375>/Switch1' incorporates:
     *  Constant: '<S380>/Constant'
     *  Constant: '<S381>/Constant'
     *  Logic: '<S375>/AND'
     *  RelationalOperator: '<S380>/Compare'
     *  RelationalOperator: '<S381>/Compare'
     *  Switch: '<S375>/Switch2'
     *  UnitDelay: '<S375>/Unit Delay'
     *  UnitDelay: '<S375>/Unit Delay1'
     */
    if ((Code_Gen_Model_B.Drive_Joystick_X == 0.0) &&
        (Code_Gen_Model_B.Drive_Joystick_Y == 0.0)) {
      rtb_Switch1_m = Code_Gen_Model_DW.UnitDelay1_DSTATE_l;
      rtb_Switch2 = Code_Gen_Model_DW.UnitDelay_DSTATE_p;
    } else {
      rtb_Switch1_m = Code_Gen_Model_B.Drive_Joystick_Y;
      rtb_Switch2 = Code_Gen_Model_B.Drive_Joystick_X;
    }

    /* End of Switch: '<S375>/Switch1' */

    /* Switch: '<S363>/Switch1' incorporates:
     *  Switch: '<S363>/Switch4'
     */
    if (rtb_Relative_Translation_Flag) {
      /* Switch: '<S363>/Switch5' */
      if (Code_Gen_Model_B.Drive_Joystick_Z_Mode) {
        /* Merge: '<S15>/Merge3' incorporates:
         *  Constant: '<S363>/Constant3'
         */
        Code_Gen_Model_B.Translation_Angle = -1.5707963267948966;
      } else {
        /* Merge: '<S15>/Merge3' incorporates:
         *  Constant: '<S363>/Constant4'
         */
        Code_Gen_Model_B.Translation_Angle = 0.0;
      }

      /* End of Switch: '<S363>/Switch5' */
    } else if (rtb_Swerve_Motors_Disabled) {
      /* Switch: '<S363>/Switch6' incorporates:
       *  Constant: '<S363>/Constant'
       *  Constant: '<S363>/Constant1'
       *  Inport: '<Root>/IsBlueAlliance'
       *  Switch: '<S363>/Switch4'
       */
      if (Code_Gen_Model_U.IsBlueAlliance != 0.0) {
        rtb_Minus_k_idx_1 = 0.0;
      } else {
        rtb_Minus_k_idx_1 = 3.1415926535897931;
      }

      /* Merge: '<S15>/Merge3' incorporates:
       *  Sum: '<S363>/Add1'
       *  Switch: '<S363>/Switch4'
       *  Switch: '<S363>/Switch6'
       *  Trigonometry: '<S363>/Atan1'
       */
      Code_Gen_Model_B.Translation_Angle = rt_atan2d_snf
        (Code_Gen_Model_B.AT_Error_Y, Code_Gen_Model_B.AT_Error_X) +
        rtb_Minus_k_idx_1;
    } else {
      /* Merge: '<S15>/Merge3' incorporates:
       *  Switch: '<S363>/Switch4'
       *  Trigonometry: '<S363>/Atan2'
       */
      Code_Gen_Model_B.Translation_Angle = rt_atan2d_snf(rtb_Switch1_m,
        rtb_Switch2);
    }

    /* End of Switch: '<S363>/Switch1' */

    /* Switch: '<S372>/Switch1' incorporates:
     *  Constant: '<S372>/Constant'
     *  Constant: '<S372>/Constant1'
     */
    if (Code_Gen_Model_B.Is_Boosting) {
      rtb_Disable_Wheels = Boost_Trigger_High_Speed;
    } else {
      rtb_Disable_Wheels = Boost_Trigger_Low_Speed;
    }

    /* End of Switch: '<S372>/Switch1' */

    /* Switch: '<S379>/Init' incorporates:
     *  UnitDelay: '<S379>/FixPt Unit Delay1'
     *  UnitDelay: '<S379>/FixPt Unit Delay2'
     */
    if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_a != 0) {
      rtb_Enable_Wheels = rtb_Disable_Wheels;
    } else {
      rtb_Enable_Wheels = Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_f;
    }

    /* End of Switch: '<S379>/Init' */

    /* Sum: '<S377>/Sum1' */
    rtb_Disable_Wheels -= rtb_Enable_Wheels;

    /* Switch: '<S378>/Switch2' incorporates:
     *  Constant: '<S376>/Constant1'
     *  Constant: '<S376>/Constant3'
     *  RelationalOperator: '<S378>/LowerRelop1'
     *  RelationalOperator: '<S378>/UpperRelop'
     *  Switch: '<S378>/Switch'
     */
    if (rtb_Disable_Wheels > Boost_Trigger_Increasing_Limit) {
      rtb_Disable_Wheels = Boost_Trigger_Increasing_Limit;
    } else if (rtb_Disable_Wheels < Boost_Trigger_Decreasing_Limit) {
      /* Switch: '<S378>/Switch' incorporates:
       *  Constant: '<S376>/Constant1'
       */
      rtb_Disable_Wheels = Boost_Trigger_Decreasing_Limit;
    }

    /* End of Switch: '<S378>/Switch2' */

    /* Sum: '<S377>/Sum' */
    rtb_Switch2_ji = rtb_Disable_Wheels + rtb_Enable_Wheels;

    /* Switch: '<S363>/Switch' incorporates:
     *  Logic: '<S363>/Logical Operator1'
     *  Switch: '<S363>/Switch2'
     */
    if (rtb_Relative_Translation_Flag) {
      /* Merge: '<S15>/Merge4' incorporates:
       *  Gain: '<S363>/Gain'
       */
      Code_Gen_Model_B.Translation_Speed = Translation_Twist_Gain *
        rtb_Algae_Wheel_Inside_DutyCycl;
    } else if (rtb_Swerve_Motors_Disabled && (Code_Gen_Model_B.AT_Target_Enable))
    {
      /* Merge: '<S15>/Merge4' incorporates:
       *  Gain: '<S363>/Gain2'
       *  Math: '<S363>/Magnitude1'
       *  Switch: '<S363>/Switch2'
       */
      Code_Gen_Model_B.Translation_Speed = AT_XY_Control_Gain * rt_hypotd_snf
        (Code_Gen_Model_B.AT_Error_X, Code_Gen_Model_B.AT_Error_Y);
    } else {
      /* Product: '<S372>/Product' incorporates:
       *  Switch: '<S363>/Switch2'
       */
      rtb_Minus_k_idx_1 = rtb_Algae_Wheel_Outside_DutyCyc * rtb_Switch2_ji;

      /* Saturate: '<S372>/Saturation' incorporates:
       *  Switch: '<S363>/Switch2'
       */
      if (rtb_Minus_k_idx_1 > Boost_Trigger_High_Speed) {
        /* Merge: '<S15>/Merge4' */
        Code_Gen_Model_B.Translation_Speed = Boost_Trigger_High_Speed;
      } else if (rtb_Minus_k_idx_1 < (-Boost_Trigger_High_Speed)) {
        /* Merge: '<S15>/Merge4' */
        Code_Gen_Model_B.Translation_Speed = -Boost_Trigger_High_Speed;
      } else {
        /* Merge: '<S15>/Merge4' */
        Code_Gen_Model_B.Translation_Speed = rtb_Minus_k_idx_1;
      }

      /* End of Saturate: '<S372>/Saturation' */
    }

    /* End of Switch: '<S363>/Switch' */

    /* Merge: '<S15>/Merge2' incorporates:
     *  SignalConversion: '<S362>/Signal Copy'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd = rtb_Coral_Wheel_DutyCycle;

    /* Merge: '<S15>/Merge7' incorporates:
     *  Constant: '<S22>/Constant3'
     *  SignalConversion generated from: '<S22>/Spline_Enable'
     */
    Code_Gen_Model_B.Spline_Enable = false;

    /* Merge: '<S15>/Merge9' incorporates:
     *  Constant: '<S22>/Constant9'
     *  SignalConversion generated from: '<S22>/Spline_Num_Poses'
     */
    Code_Gen_Model_B.Spline_Num_Poses = 10.0;

    /* Merge: '<S15>/Merge10' incorporates:
     *  Constant: '<S22>/Constant1'
     *  SignalConversion generated from: '<S22>/Test_Mode'
     */
    Code_Gen_Model_B.Test_Mode = false;

    /* SignalConversion generated from: '<S22>/Enable_Wheels' incorporates:
     *  Constant: '<S22>/Constant6'
     */
    rtb_Enable_Wheels = 0.0;

    /* SignalConversion generated from: '<S22>/Reset_Wheel_Offsets' incorporates:
     *  Constant: '<S22>/Constant13'
     */
    rtb_Reset_Wheel_Offsets = 0;

    /* SignalConversion generated from: '<S22>/Disable_Wheels' incorporates:
     *  Constant: '<S22>/Constant14'
     */
    rtb_Disable_Wheels = 0.0;

    /* SignalConversion generated from: '<S22>/Swerve_Motors_Disabled' incorporates:
     *  Constant: '<S22>/Constant2'
     */
    rtb_Swerve_Motors_Disabled = false;

    /* Merge: '<S15>/Merge12' incorporates:
     *  Constant: '<S358>/Constant5'
     *  SignalConversion generated from: '<S22>/Reefscape_Motors_Enable'
     */
    Code_Gen_Model_B.Reefscape_Motors_Enable = true;

    /* RelationalOperator: '<S382>/FixPt Relational Operator' incorporates:
     *  Inport: '<Root>/Gamepad_B1_A'
     *  UnitDelay: '<S382>/Delay Input1'
     *
     * Block description for '<S382>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_B.FixPtRelationalOperator = (Code_Gen_Model_U.Gamepad_B1_A >
      Code_Gen_Model_DW.DelayInput1_DSTATE_c);

    /* RelationalOperator: '<S383>/FixPt Relational Operator' incorporates:
     *  Inport: '<Root>/Gamepad_B2_B'
     *  UnitDelay: '<S383>/Delay Input1'
     *
     * Block description for '<S383>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_B.FixPtRelationalOperator_n = (Code_Gen_Model_U.Gamepad_B2_B >
      Code_Gen_Model_DW.DelayInput1_DSTATE_nr);

    /* RelationalOperator: '<S387>/FixPt Relational Operator' incorporates:
     *  Inport: '<Root>/Gamepad_B3_X'
     *  UnitDelay: '<S387>/Delay Input1'
     *
     * Block description for '<S387>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_B.FixPtRelationalOperator_k = (Code_Gen_Model_U.Gamepad_B3_X >
      Code_Gen_Model_DW.DelayInput1_DSTATE_ez);

    /* RelationalOperator: '<S388>/FixPt Relational Operator' incorporates:
     *  Inport: '<Root>/Gamepad_B4_Y'
     *  UnitDelay: '<S388>/Delay Input1'
     *
     * Block description for '<S388>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_B.FixPtRelationalOperator_d = (Code_Gen_Model_U.Gamepad_B4_Y >
      Code_Gen_Model_DW.DelayInput1_DSTATE_nh);

    /* RelationalOperator: '<S389>/FixPt Relational Operator' incorporates:
     *  Inport: '<Root>/Gamepad_Start'
     *  UnitDelay: '<S389>/Delay Input1'
     *
     * Block description for '<S389>/Delay Input1':
     *
     *  Store in Global RAM
     */
    rtb_Relative_Translation_Flag = (Code_Gen_Model_U.Gamepad_Start >
      Code_Gen_Model_DW.DelayInput1_DSTATE_i);

    /* RelationalOperator: '<S384>/FixPt Relational Operator' incorporates:
     *  Inport: '<Root>/Gamepad_Back'
     *  UnitDelay: '<S384>/Delay Input1'
     *
     * Block description for '<S384>/Delay Input1':
     *
     *  Store in Global RAM
     */
    FixPtRelationalOperator_j = (Code_Gen_Model_U.Gamepad_Back >
      Code_Gen_Model_DW.DelayInput1_DSTATE_cp);

    /* RelationalOperator: '<S390>/FixPt Relational Operator' incorporates:
     *  Inport: '<Root>/Gamepad_RB'
     *  UnitDelay: '<S390>/Delay Input1'
     *
     * Block description for '<S390>/Delay Input1':
     *
     *  Store in Global RAM
     */
    FixPtRelationalOperator_l = (Code_Gen_Model_U.Gamepad_RB >
      Code_Gen_Model_DW.DelayInput1_DSTATE_pd);

    /* RelationalOperator: '<S394>/FixPt Relational Operator' incorporates:
     *  Inport: '<Root>/Gamepad_RT'
     *  UnitDelay: '<S394>/Delay Input1'
     *
     * Block description for '<S394>/Delay Input1':
     *
     *  Store in Global RAM
     */
    rtb_Uk1_ew = (Code_Gen_Model_U.Gamepad_RT >
                  Code_Gen_Model_DW.DelayInput1_DSTATE_j);

    /* RelationalOperator: '<S391>/FixPt Relational Operator' incorporates:
     *  UnitDelay: '<S391>/Delay Input1'
     *
     * Block description for '<S391>/Delay Input1':
     *
     *  Store in Global RAM
     */
    FixPtRelationalOperator_i = (((int32_T)Code_Gen_Model_B.Gamepad_POV_Up) >
      ((int32_T)Code_Gen_Model_DW.DelayInput1_DSTATE_oy));

    /* RelationalOperator: '<S392>/FixPt Relational Operator' incorporates:
     *  UnitDelay: '<S392>/Delay Input1'
     *
     * Block description for '<S392>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_B.FixPtRelationalOperator_m = (((int32_T)
      Code_Gen_Model_B.Gamepad_POV_Down) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_fx));

    /* RelationalOperator: '<S385>/FixPt Relational Operator' incorporates:
     *  UnitDelay: '<S385>/Delay Input1'
     *
     * Block description for '<S385>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_B.FixPtRelationalOperator_ji = (((int32_T)
      Code_Gen_Model_B.Gamepad_POV_Left) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_o5));

    /* RelationalOperator: '<S386>/FixPt Relational Operator' incorporates:
     *  UnitDelay: '<S386>/Delay Input1'
     *
     * Block description for '<S386>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_B.FixPtRelationalOperator_ml = (((int32_T)
      Code_Gen_Model_B.Gamepad_POV_Right) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_a));

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
     *  Inport: '<Root>/Gamepad_LT'
     *  RelationalOperator: '<S393>/FixPt Relational Operator'
     *  UnitDelay: '<S393>/Delay Input1'
     *
     * Block description for '<S393>/Delay Input1':
     *
     *  Store in Global RAM
     */
    if (Code_Gen_Model_DW.is_active_c4_Code_Gen_Model == 0U) {
      Code_Gen_Model_DW.is_active_c4_Code_Gen_Model = 1U;
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        Code__IN_Elevator_Height_Bottom;
      Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Bottom;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = Coral_Arm_Angle_Up;
      Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
      Code_Gen_Model_DW.is_Algae_Wheels = Code_Gen_Model_IN_Off;

      /* SignalConversion generated from: '<S22>/Algae_Wheel_Outside_DutyCycle' */
      rtb_Algae_Wheel_Outside_DutyCyc = 0.0;

      /* SignalConversion generated from: '<S22>/Algae_Wheel_Inside_DutyCycle' */
      rtb_Algae_Wheel_Inside_DutyCycl = 0.0;
    } else {
      Co_Elevator_CoralArm_CoralWheel(&Compare, &Compare_f,
        &rtb_Relative_Translation_Flag, &FixPtRelationalOperator_j,
        &FixPtRelationalOperator_l, &FixPtRelationalOperator_i);
      switch (Code_Gen_Model_DW.is_Algae_Wheels) {
       case Code_Gen_Model_IN_Algae_Hold:
        /* SignalConversion generated from: '<S22>/Algae_Wheel_Outside_DutyCycle' */
        rtb_Algae_Wheel_Outside_DutyCyc = Algae_Hold_DC;

        /* SignalConversion generated from: '<S22>/Algae_Wheel_Inside_DutyCycle' */
        rtb_Algae_Wheel_Inside_DutyCycl = Algae_Hold_DC;
        if (rtb_Uk1_ew) {
          Code_Gen_Model_DW.is_Algae_Wheels = Code_Gen_Mode_IN_Algae_Push_Out;

          /* SignalConversion generated from: '<S22>/Algae_Wheel_Outside_DutyCycle' */
          rtb_Algae_Wheel_Outside_DutyCyc = Algae_Push_Out_DC;

          /* SignalConversion generated from: '<S22>/Algae_Wheel_Inside_DutyCycle' */
          rtb_Algae_Wheel_Inside_DutyCycl = Algae_Push_Out_DC;
          Code_Gen_Model_DW.timer = 0.0;
        }
        break;

       case Code_Gen_Model_IN_Algae_Pull_In:
        /* SignalConversion generated from: '<S22>/Algae_Wheel_Outside_DutyCycle' */
        rtb_Algae_Wheel_Outside_DutyCyc = Algae_Pull_In_DC;

        /* SignalConversion generated from: '<S22>/Algae_Wheel_Inside_DutyCycle' */
        rtb_Algae_Wheel_Inside_DutyCycl = Algae_Pull_In_DC;
        if (Compare_f) {
          Code_Gen_Model_DW.is_Algae_Wheels = Code_Gen_Model_IN_Algae_Hold;

          /* SignalConversion generated from: '<S22>/Algae_Wheel_Outside_DutyCycle' */
          rtb_Algae_Wheel_Outside_DutyCyc = Algae_Hold_DC;

          /* SignalConversion generated from: '<S22>/Algae_Wheel_Inside_DutyCycle' */
          rtb_Algae_Wheel_Inside_DutyCycl = Algae_Hold_DC;
        } else if (rtb_Uk1_ew) {
          Code_Gen_Model_DW.is_Algae_Wheels = Code_Gen_Model_IN_Off;

          /* SignalConversion generated from: '<S22>/Algae_Wheel_Outside_DutyCycle' */
          rtb_Algae_Wheel_Outside_DutyCyc = 0.0;

          /* SignalConversion generated from: '<S22>/Algae_Wheel_Inside_DutyCycle' */
          rtb_Algae_Wheel_Inside_DutyCycl = 0.0;
        }
        break;

       case Code_Gen_Mode_IN_Algae_Push_Out:
        /* SignalConversion generated from: '<S22>/Algae_Wheel_Outside_DutyCycle' */
        rtb_Algae_Wheel_Outside_DutyCyc = Algae_Push_Out_DC;

        /* SignalConversion generated from: '<S22>/Algae_Wheel_Inside_DutyCycle' */
        rtb_Algae_Wheel_Inside_DutyCycl = Algae_Push_Out_DC;
        if (Code_Gen_Model_DW.timer >= Algae_Eject_Time) {
          Code_Gen_Model_DW.is_Algae_Wheels = Code_Gen_Model_IN_Off;

          /* SignalConversion generated from: '<S22>/Algae_Wheel_Outside_DutyCycle' */
          rtb_Algae_Wheel_Outside_DutyCyc = 0.0;

          /* SignalConversion generated from: '<S22>/Algae_Wheel_Inside_DutyCycle' */
          rtb_Algae_Wheel_Inside_DutyCycl = 0.0;
        } else {
          Code_Gen_Model_DW.timer += 0.02;
        }
        break;

       default:
        /* SignalConversion generated from: '<S22>/Algae_Wheel_Outside_DutyCycle' */
        /* case IN_Off: */
        rtb_Algae_Wheel_Outside_DutyCyc = 0.0;

        /* SignalConversion generated from: '<S22>/Algae_Wheel_Inside_DutyCycle' */
        rtb_Algae_Wheel_Inside_DutyCycl = 0.0;
        if (Code_Gen_Model_U.Gamepad_LT > Code_Gen_Model_DW.DelayInput1_DSTATE_o)
        {
          Code_Gen_Model_DW.is_Algae_Wheels = Code_Gen_Model_IN_Algae_Pull_In;

          /* SignalConversion generated from: '<S22>/Algae_Wheel_Outside_DutyCycle' */
          rtb_Algae_Wheel_Outside_DutyCyc = Algae_Pull_In_DC;

          /* SignalConversion generated from: '<S22>/Algae_Wheel_Inside_DutyCycle' */
          rtb_Algae_Wheel_Inside_DutyCycl = Algae_Pull_In_DC;
        }
        break;
      }
    }

    /* End of Chart: '<S358>/Reefscape_Chart' */

    /* Merge: '<S15>/Merge13' incorporates:
     *  SignalConversion generated from: '<S22>/Coral_Arm_Angle_Desired'
     */
    Code_Gen_Model_B.Coral_Arm_Angle_Desired =
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_o;

    /* SignalConversion generated from: '<S22>/Coral_Pickup_Lower_Wait_State' */
    Compare = Code_Gen_Model_B.Coral_Pickup_Lower_Wait_State;

    /* SignalConversion generated from: '<S22>/Coral_Wheel_DutyCycle' */
    rtb_Coral_Wheel_DutyCycle = Code_Gen_Model_B.Coral_Wheel_DC;

    /* Merge: '<S15>/Merge11' incorporates:
     *  SignalConversion generated from: '<S22>/Elevator_Height_Desired'
     */
    Code_Gen_Model_B.Elevator_Height_Desired =
      Code_Gen_Model_B.Elevator_Height_Desired_m;

    /* Merge: '<S15>/Merge21' incorporates:
     *  SignalConversion generated from: '<S22>/Elevator_LowerPickup_Reset'
     */
    Code_Gen_Model_B.Elevator_LowerPickup_Reset_tp =
      Code_Gen_Model_B.Elevator_LowerPickup_Reset;

    /* Update for UnitDelay: '<S370>/Delay Input1'
     *
     * Block description for '<S370>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_jp = rtb_Compare_oq;

    /* Update for UnitDelay: '<S369>/Delay Input1' incorporates:
     *  Constant: '<S362>/AT_Target_Enable_placeholder'
     *
     * Block description for '<S369>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_f = 0.0;

    /* Update for UnitDelay: '<S365>/Delay Input1'
     *
     * Block description for '<S365>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_m = Code_Gen_Model_B.Face_Away_Driver;

    /* Update for UnitDelay: '<S366>/Delay Input1'
     *
     * Block description for '<S366>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_k = Code_Gen_Model_B.Face_Left_Driver;

    /* Update for UnitDelay: '<S367>/Delay Input1'
     *
     * Block description for '<S367>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_g = Code_Gen_Model_B.Face_Toward_Driver;

    /* Update for UnitDelay: '<S368>/Delay Input1'
     *
     * Block description for '<S368>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_g2 = Code_Gen_Model_B.Face_Right_Driver;

    /* Update for UnitDelay: '<S362>/Unit Delay2' */
    Code_Gen_Model_DW.UnitDelay2_DSTATE = rtb_AND1;

    /* Update for UnitDelay: '<S362>/Unit Delay4' */
    Code_Gen_Model_DW.UnitDelay4_DSTATE = rtb_AND4;

    /* Update for UnitDelay: '<S362>/Unit Delay3' */
    Code_Gen_Model_DW.UnitDelay3_DSTATE =
      Code_Gen_Model_B.Steering_Abs_Gyro_Latch;

    /* Update for UnitDelay: '<S362>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_j = rtb_Switch4;

    /* Update for UnitDelay: '<S375>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_l = rtb_Switch1_m;

    /* Update for UnitDelay: '<S375>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_p = rtb_Switch2;

    /* Update for UnitDelay: '<S379>/FixPt Unit Delay2' incorporates:
     *  Constant: '<S379>/FixPt Constant'
     */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_a = 0U;

    /* Update for UnitDelay: '<S379>/FixPt Unit Delay1' */
    Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_f = rtb_Switch2_ji;

    /* Update for UnitDelay: '<S382>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_B1_A'
     *
     * Block description for '<S382>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_c = Code_Gen_Model_U.Gamepad_B1_A;

    /* Update for UnitDelay: '<S383>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_B2_B'
     *
     * Block description for '<S383>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_nr = Code_Gen_Model_U.Gamepad_B2_B;

    /* Update for UnitDelay: '<S387>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_B3_X'
     *
     * Block description for '<S387>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_ez = Code_Gen_Model_U.Gamepad_B3_X;

    /* Update for UnitDelay: '<S388>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_B4_Y'
     *
     * Block description for '<S388>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_nh = Code_Gen_Model_U.Gamepad_B4_Y;

    /* Update for UnitDelay: '<S389>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_Start'
     *
     * Block description for '<S389>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_i = Code_Gen_Model_U.Gamepad_Start;

    /* Update for UnitDelay: '<S384>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_Back'
     *
     * Block description for '<S384>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_cp = Code_Gen_Model_U.Gamepad_Back;

    /* Update for UnitDelay: '<S390>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_RB'
     *
     * Block description for '<S390>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_pd = Code_Gen_Model_U.Gamepad_RB;

    /* Update for UnitDelay: '<S393>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_LT'
     *
     * Block description for '<S393>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_o = Code_Gen_Model_U.Gamepad_LT;

    /* Update for UnitDelay: '<S394>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_RT'
     *
     * Block description for '<S394>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_j = Code_Gen_Model_U.Gamepad_RT;

    /* Update for UnitDelay: '<S391>/Delay Input1'
     *
     * Block description for '<S391>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_oy = Code_Gen_Model_B.Gamepad_POV_Up;

    /* Update for UnitDelay: '<S392>/Delay Input1'
     *
     * Block description for '<S392>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_fx = Code_Gen_Model_B.Gamepad_POV_Down;

    /* Update for UnitDelay: '<S385>/Delay Input1'
     *
     * Block description for '<S385>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_o5 = Code_Gen_Model_B.Gamepad_POV_Left;

    /* Update for UnitDelay: '<S386>/Delay Input1'
     *
     * Block description for '<S386>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_a = Code_Gen_Model_B.Gamepad_POV_Right;

    /* End of Outputs for SubSystem: '<S1>/Teleop' */
    break;

   default:
    /* InitializeConditions for IfAction SubSystem: '<S1>/Test' incorporates:
     *  ActionPort: '<S23>/Action Port'
     */
    /* InitializeConditions for SwitchCase: '<S1>/Switch Case' incorporates:
     *  UnitDelay: '<S23>/Unit Delay'
     */
    Code_Gen_Model_DW.UnitDelay_DSTATE_ir = ((rtAction == rtPrevAction) &&
      (Code_Gen_Model_DW.UnitDelay_DSTATE_ir));

    /* End of InitializeConditions for SubSystem: '<S1>/Test' */

    /* Outputs for IfAction SubSystem: '<S1>/Test' incorporates:
     *  ActionPort: '<S23>/Action Port'
     */
    /* Merge: '<S15>/Merge1' incorporates:
     *  Constant: '<S23>/Constant1'
     *  SignalConversion generated from: '<S23>/Steering_Abs_Cmd'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd = 0.0;

    /* Merge: '<S15>/Merge2' incorporates:
     *  Constant: '<S23>/Constant2'
     *  SignalConversion generated from: '<S23>/Steering_Rel_Cmd'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd = 0.0;

    /* Merge: '<S15>/Merge3' incorporates:
     *  Constant: '<S23>/Constant3'
     *  SignalConversion generated from: '<S23>/Translation_Angle'
     */
    Code_Gen_Model_B.Translation_Angle = 0.0;

    /* Merge: '<S15>/Merge4' incorporates:
     *  Constant: '<S23>/Constant4'
     *  SignalConversion generated from: '<S23>/Translation_Speed'
     */
    Code_Gen_Model_B.Translation_Speed = 0.0;

    /* SignalConversion generated from: '<S23>/Is_Absolute_Translation' incorporates:
     *  Constant: '<S23>/Constant5'
     */
    rtb_Is_Absolute_Translation_g = false;

    /* SignalConversion generated from: '<S23>/Is_Absolute_Steering' incorporates:
     *  Constant: '<S23>/Constant6'
     */
    rtb_Is_Absolute_Steering = false;

    /* Merge: '<S15>/Merge7' incorporates:
     *  Constant: '<S23>/Constant7'
     *  SignalConversion generated from: '<S23>/Spline_Enable'
     */
    Code_Gen_Model_B.Spline_Enable = false;

    /* Merge: '<S15>/Merge9' incorporates:
     *  Constant: '<S23>/Constant9'
     *  SignalConversion generated from: '<S23>/Spline_Num_Poses'
     */
    Code_Gen_Model_B.Spline_Num_Poses = 10.0;

    /* Merge: '<S15>/Merge10' incorporates:
     *  Constant: '<S23>/Constant12'
     *  SignalConversion generated from: '<S23>/Test_Mode'
     */
    Code_Gen_Model_B.Test_Mode = true;

    /* Switch: '<S23>/Switch' incorporates:
     *  Constant: '<S23>/Constant14'
     *  Switch: '<S23>/Switch1'
     *  UnitDelay: '<S23>/Unit Delay'
     */
    if (Code_Gen_Model_B.Button_Disable_Wheels) {
      rtb_Swerve_Motors_Disabled = true;
    } else if (Code_Gen_Model_B.Button_Enable_Wheels) {
      /* Switch: '<S23>/Switch1' incorporates:
       *  Constant: '<S23>/Constant13'
       */
      rtb_Swerve_Motors_Disabled = false;
    } else {
      rtb_Swerve_Motors_Disabled = Code_Gen_Model_DW.UnitDelay_DSTATE_ir;
    }

    /* End of Switch: '<S23>/Switch' */

    /* Merge: '<S15>/Merge12' incorporates:
     *  Constant: '<S23>/Constant11'
     *  SignalConversion generated from: '<S23>/Reefscape_Motors_Enable'
     */
    Code_Gen_Model_B.Reefscape_Motors_Enable = false;

    /* Merge: '<S15>/Merge11' incorporates:
     *  Constant: '<S23>/Constant10'
     *  SignalConversion generated from: '<S23>/Elevator_Height_Desired'
     */
    Code_Gen_Model_B.Elevator_Height_Desired = 0.0;

    /* Merge: '<S15>/Merge13' incorporates:
     *  Constant: '<S23>/Constant15'
     *  SignalConversion generated from: '<S23>/Coral_Arm_Angle_Desired'
     */
    Code_Gen_Model_B.Coral_Arm_Angle_Desired = -90.0;

    /* SignalConversion generated from: '<S23>/Coral_Wheel_DutyCycle' incorporates:
     *  Constant: '<S23>/Constant16'
     */
    rtb_Coral_Wheel_DutyCycle = 0.0;

    /* SignalConversion generated from: '<S23>/Algae_Wheel_Outside_DutyCycle' incorporates:
     *  Constant: '<S23>/Constant17'
     */
    rtb_Algae_Wheel_Outside_DutyCyc = 0.0;

    /* SignalConversion generated from: '<S23>/Algae_Wheel_Inside_DutyCycle' incorporates:
     *  Constant: '<S23>/Constant18'
     */
    rtb_Algae_Wheel_Inside_DutyCycl = 0.0;

    /* Merge: '<S15>/Merge21' incorporates:
     *  Constant: '<S23>/Constant19'
     *  SignalConversion generated from: '<S23>/Elevator_LowerPickup_Reset'
     */
    Code_Gen_Model_B.Elevator_LowerPickup_Reset_tp = false;

    /* SignalConversion generated from: '<S23>/Coral_Pickup_Lower_Wait_State' incorporates:
     *  Constant: '<S23>/Constant20'
     */
    Compare = false;

    /* DataTypeConversion: '<S23>/Cast To Boolean1' */
    rtb_Enable_Wheels = Code_Gen_Model_B.Button_Enable_Wheels;

    /* DataTypeConversion: '<S23>/Cast To Boolean3' */
    rtb_Disable_Wheels = Code_Gen_Model_B.Button_Disable_Wheels;

    /* DataTypeConversion: '<S23>/Cast To Boolean2' */
    rtb_Reset_Wheel_Offsets = Code_Gen_Model_B.Button_Reset_Wheel_Offsets;

    /* Update for UnitDelay: '<S23>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_ir = rtb_Swerve_Motors_Disabled;

    /* End of Outputs for SubSystem: '<S1>/Test' */
    break;
  }

  /* End of SwitchCase: '<S1>/Switch Case' */

  /* Reshape: '<S75>/Reshapey' incorporates:
   *  Inport: '<Root>/Limelight_Est_Pose_X'
   *  Inport: '<Root>/Limelight_Est_Pose_Y'
   *  S-Function (sfix_udelay): '<S14>/Tapped Delay'
   *  S-Function (sfix_udelay): '<S14>/Tapped Delay1'
   *  Sum: '<S14>/Add'
   *  Sum: '<S14>/Add1'
   */
  rtb_Reshapey[0] = (Code_Gen_Model_U.Limelight_Est_Pose_X +
                     Code_Gen_Model_DW.TappedDelay_X[0]) +
    Code_Gen_Model_DW.TappedDelay_X[1];
  rtb_Reshapey[1] = (Code_Gen_Model_U.Limelight_Est_Pose_Y +
                     Code_Gen_Model_DW.TappedDelay1_X[0]) +
    Code_Gen_Model_DW.TappedDelay1_X[1];

  /* Delay: '<S75>/MemoryX' incorporates:
   *  Constant: '<S75>/X0'
   */
  if (Code_Gen_Model_DW.icLoad) {
    Code_Gen_Model_DW.MemoryX_DSTATE[0] = 0.0;
    Code_Gen_Model_DW.MemoryX_DSTATE[1] = 0.0;
  }

  /* Switch: '<S11>/Switch' incorporates:
   *  Constant: '<S11>/Constant'
   *  Constant: '<S11>/Constant1'
   *  Inport: '<Root>/IsBlueAlliance'
   */
  if (Code_Gen_Model_U.IsBlueAlliance != 0.0) {
    rtb_Switch4 = 0.0;
  } else {
    rtb_Switch4 = 3.1415926535897931;
  }

  /* End of Switch: '<S11>/Switch' */

  /* Sum: '<S11>/Add' */
  Code_Gen_Model_B.Gyro_Angle_Field_rad = Code_Gen_Model_B.Gyro_Angle_rad +
    rtb_Switch4;

  /* Trigonometry: '<S16>/Trigonometric Function1' */
  rtb_Switch2_l = sin(Code_Gen_Model_B.Gyro_Angle_Field_rad);

  /* SignalConversion generated from: '<S16>/Rotation matrix from local to global' incorporates:
   *  Trigonometry: '<S16>/Trigonometric Function'
   */
  rtb_Switch1_m = cos(Code_Gen_Model_B.Gyro_Angle_Field_rad);
  rtb_Switch2_ji = rtb_Switch2_l;

  /* SignalConversion generated from: '<S16>/Rotation matrix from local to global' incorporates:
   *  UnaryMinus: '<S16>/Unary Minus'
   */
  rtb_uDLookupTable_d = -rtb_Switch2_l;

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
  rtb_Subtract1_ak = Code_Gen_Model_B.Gyro_Angle_Field_rad -
    Code_Gen_Model_DW.UD_DSTATE_d;

  /* Sum: '<S16>/Subtract2' incorporates:
   *  Constant: '<S16>/Constant3'
   *  Gain: '<S16>/Gain7'
   *  Math: '<S16>/Square'
   */
  rtb_Switch2_l = 1.0 - ((rtb_Subtract1_ak * rtb_Subtract1_ak) *
    0.16666666666666666);

  /* Gain: '<S16>/Gain6' */
  rtb_Subtract1_ak *= 0.5;

  /* Product: '<S16>/Product7' incorporates:
   *  Constant: '<S16>/Constant4'
   */
  for (i = 0; i < 2; i++) {
    rtb_Minus_k_idx_1 = 0.0;
    tmp_0 = 0;
    for (i_0 = 0; i_0 < 8; i_0++) {
      rtb_Minus_k_idx_1 += Code_Gen_Model_ConstP.Constant4_Value[tmp_0 + i] *
        rtb_TmpSignalConversionAtProduc[i_0];
      tmp_0 += 2;
    }

    tmp[i] = rtb_Minus_k_idx_1;
  }

  /* End of Product: '<S16>/Product7' */

  /* Product: '<S16>/Product6' incorporates:
   *  SignalConversion generated from: '<S16>/POSE exponential matrix for improved accuracy while rotating'
   *  UnaryMinus: '<S16>/Unary Minus2'
   */
  rtb_Switch2 = (rtb_Switch2_l * tmp[0]) + ((-rtb_Subtract1_ak) * tmp[1]);
  rtb_Subtract1_ak = (rtb_Subtract1_ak * tmp[0]) + (rtb_Switch2_l * tmp[1]);

  /* Product: '<S16>/Product6' incorporates:
   *  Concatenate: '<S16>/Rotation matrix from local to global'
   */
  Code_Gen_Model_B.Product6[0] = (rtb_Switch1_m * rtb_Switch2) +
    (rtb_uDLookupTable_d * rtb_Subtract1_ak);
  Code_Gen_Model_B.Product6[1] = (rtb_Switch2_ji * rtb_Switch2) + (rtb_Switch1_m
    * rtb_Subtract1_ak);

  /* Outputs for Enabled SubSystem: '<S102>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S128>/Enable'
   */
  /* Outputs for Enabled SubSystem: '<S95>/MeasurementUpdate' incorporates:
   *  EnablePort: '<S126>/Enable'
   */
  /* Logic: '<S14>/AND' incorporates:
   *  Constant: '<S14>/Constant'
   *  Constant: '<S14>/Constant1'
   *  Inport: '<Root>/Num_Tags_Detected'
   *  RelationalOperator: '<S14>/Relational Operator'
   */
  if ((Code_Gen_Model_U.Num_Tags_Detected > 0.0) && (KF_Enable != 0.0)) {
    Code_Gen_Model_DW.MeasurementUpdate_MODE = true;

    /* Product: '<S126>/C[k]*xhat[k|k-1]' incorporates:
     *  Constant: '<S75>/C'
     *  Delay: '<S75>/MemoryX'
     *  Product: '<S128>/Product'
     */
    rtb_Switch2_l = (0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[1]) +
      Code_Gen_Model_DW.MemoryX_DSTATE[0];
    rtb_Minus_n[0] = rtb_Switch2_l;

    /* Sum: '<S126>/Sum' incorporates:
     *  Constant: '<S75>/D'
     *  Product: '<S126>/C[k]*xhat[k|k-1]'
     *  Product: '<S126>/D[k]*u[k]'
     *  Sum: '<S126>/Add1'
     */
    rtb_Switch2_ji = (0.0 * Code_Gen_Model_B.Product6[0]) + (0.0 *
      Code_Gen_Model_B.Product6[1]);
    rtb_Subtract1_ak = rtb_Reshapey[0] - (rtb_Switch2_ji + rtb_Switch2_l);

    /* Product: '<S126>/C[k]*xhat[k|k-1]' incorporates:
     *  Constant: '<S75>/C'
     *  Delay: '<S75>/MemoryX'
     *  Product: '<S128>/Product'
     */
    rtb_Switch2_l = (0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[0]) +
      Code_Gen_Model_DW.MemoryX_DSTATE[1];
    rtb_Minus_n[1] = rtb_Switch2_l;

    /* Sum: '<S126>/Sum' incorporates:
     *  Constant: '<S75>/D'
     *  Product: '<S126>/C[k]*xhat[k|k-1]'
     *  Product: '<S126>/D[k]*u[k]'
     *  Sum: '<S126>/Add1'
     */
    rtb_Switch2_l = rtb_Reshapey[1] - (rtb_Switch2_ji + rtb_Switch2_l);
    Code_Gen_Model_DW.EnabledSubsystem_MODE = true;

    /* Product: '<S126>/Product3' incorporates:
     *  Constant: '<S76>/KalmanGainL'
     */
    Code_Gen_Model_B.Product3[0] = (0.0951249219725039 * rtb_Subtract1_ak) +
      (-2.0601714451538746E-17 * rtb_Switch2_l);

    /* Sum: '<S128>/Add1' incorporates:
     *  Product: '<S128>/Product'
     */
    rtb_Switch2_ji = rtb_Reshapey[0] - rtb_Minus_n[0];

    /* Product: '<S126>/Product3' incorporates:
     *  Constant: '<S76>/KalmanGainL'
     */
    Code_Gen_Model_B.Product3[1] = (1.304610855474728E-16 * rtb_Subtract1_ak) +
      (0.095124921972504 * rtb_Switch2_l);

    /* Sum: '<S128>/Add1' incorporates:
     *  Product: '<S128>/Product'
     */
    rtb_Switch2_l = rtb_Reshapey[1] - rtb_Minus_n[1];

    /* Product: '<S128>/Product2' incorporates:
     *  Constant: '<S76>/KalmanGainM'
     */
    Code_Gen_Model_B.Product2[0] = (0.09512492197250387 * rtb_Switch2_ji) +
      (5.9896845167210271E-17 * rtb_Switch2_l);
    Code_Gen_Model_B.Product2[1] = (5.9896845167210271E-17 * rtb_Switch2_ji) +
      (0.095124921972503981 * rtb_Switch2_l);
  } else {
    if (Code_Gen_Model_DW.MeasurementUpdate_MODE) {
      /* Disable for Product: '<S126>/Product3' incorporates:
       *  Outport: '<S126>/L*(y[k]-yhat[k|k-1])'
       */
      Code_Gen_Model_B.Product3[0] = 0.0;
      Code_Gen_Model_B.Product3[1] = 0.0;
      Code_Gen_Model_DW.MeasurementUpdate_MODE = false;
    }

    if (Code_Gen_Model_DW.EnabledSubsystem_MODE) {
      /* Disable for Product: '<S128>/Product2' incorporates:
       *  Outport: '<S128>/deltax'
       */
      Code_Gen_Model_B.Product2[0] = 0.0;
      Code_Gen_Model_B.Product2[1] = 0.0;
      Code_Gen_Model_DW.EnabledSubsystem_MODE = false;
    }
  }

  /* End of Logic: '<S14>/AND' */
  /* End of Outputs for SubSystem: '<S95>/MeasurementUpdate' */
  /* End of Outputs for SubSystem: '<S102>/Enabled Subsystem' */

  /* Sum: '<S102>/Add' incorporates:
   *  Delay: '<S75>/MemoryX'
   */
  rtb_Reshapey[0] = Code_Gen_Model_B.Product2[0] +
    Code_Gen_Model_DW.MemoryX_DSTATE[0];
  rtb_Reshapey[1] = Code_Gen_Model_B.Product2[1] +
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
    Code_Gen_Model_B.KF_Position_X = rtb_Reshapey[0];
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
    Code_Gen_Model_B.KF_Position_Y = rtb_Reshapey[1];
  } else {
    /* Switch: '<S14>/Switch1' */
    Code_Gen_Model_B.KF_Position_Y = Code_Gen_Model_B.Odom_Position_Y;
  }

  /* End of Switch: '<S14>/Switch1' */

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

  /* Signum: '<S295>/Sign2' incorporates:
   *  UnitDelay: '<S295>/Unit Delay'
   */
  if (rtIsNaN(Code_Gen_Model_B.Translation_Speed_RL)) {
    rtb_Minus_k_idx_1 = (rtNaN);
  } else if (Code_Gen_Model_B.Translation_Speed_RL < 0.0) {
    rtb_Minus_k_idx_1 = -1.0;
  } else {
    rtb_Minus_k_idx_1 = (Code_Gen_Model_B.Translation_Speed_RL > 0.0);
  }

  /* Signum: '<S295>/Sign1' */
  if (rtIsNaN(Code_Gen_Model_B.Translation_Speed_SPF)) {
    rtb_Switch2_g = (rtNaN);
  } else if (Code_Gen_Model_B.Translation_Speed_SPF < 0.0) {
    rtb_Switch2_g = -1.0;
  } else {
    rtb_Switch2_g = (Code_Gen_Model_B.Translation_Speed_SPF > 0.0);
  }

  /* Product: '<S295>/Product1' incorporates:
   *  Signum: '<S295>/Sign1'
   *  Signum: '<S295>/Sign2'
   */
  rtb_Minus_k_idx_1 *= rtb_Switch2_g;
  if (rtIsNaN(rtb_Minus_k_idx_1)) {
    i = 0;
  } else {
    i = (int32_T)fmod(rtb_Minus_k_idx_1, 256.0);
  }

  /* Switch: '<S295>/Switch' incorporates:
   *  Constant: '<S295>/Constant'
   *  Constant: '<S300>/Constant'
   *  Constant: '<S301>/Constant'
   *  Logic: '<S295>/or'
   *  Product: '<S295>/Product1'
   *  RelationalOperator: '<S300>/Compare'
   *  RelationalOperator: '<S301>/Compare'
   *  UnitDelay: '<S295>/Unit Delay'
   */
  if ((Code_Gen_Model_B.Translation_Speed_RL == 0.0) || (((i < 0) ? ((int32_T)
         ((int8_T)(-((int8_T)((uint8_T)(-((real_T)i))))))) : i) > 0)) {
    rtb_Switch2_l = Code_Gen_Model_B.Translation_Speed_SPF;
  } else {
    rtb_Switch2_l = 0.0;
  }

  /* End of Switch: '<S295>/Switch' */

  /* Switch: '<S306>/Init' incorporates:
   *  UnitDelay: '<S306>/FixPt Unit Delay1'
   *  UnitDelay: '<S306>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE != 0) {
    rtb_Init = rtb_Switch2_l;
  } else {
    rtb_Init = Code_Gen_Model_B.Translation_Speed_RL;
  }

  /* End of Switch: '<S306>/Init' */

  /* RelationalOperator: '<S302>/Compare' incorporates:
   *  Constant: '<S302>/Constant'
   */
  rtb_Compare_oq = (rtb_Switch2_l == 0.0);

  /* RelationalOperator: '<S303>/Compare' incorporates:
   *  Constant: '<S303>/Constant'
   */
  rtb_AND1 = (rtb_Switch2_l > 0.0);

  /* Abs: '<S295>/Abs' incorporates:
   *  Sum: '<S295>/Subtract'
   *  UnitDelay: '<S295>/Unit Delay'
   */
  rtb_Merge1 = fabs(Code_Gen_Model_B.Translation_Speed_RL -
                    Code_Gen_Model_B.Translation_Speed_SPF);

  /* Switch: '<S295>/Switch5' incorporates:
   *  Constant: '<S295>/Constant1'
   *  Switch: '<S295>/Switch1'
   *  UnaryMinus: '<S295>/Unary Minus'
   */
  if (rtb_Compare_oq) {
    /* SignalConversion generated from: '<S295>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S295>/Constant4'
     *  Constant: '<S295>/Constant6'
     */
    rtb_Reshapey[0] = Translation_Speed_Approach_Zero_Final_Thresh;
    rtb_Reshapey[1] = 1.0;

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
    LookUp_real_T_real_T( &(rtb_LookupTableDynamic_j), &rtb_Reshapey[0],
                         rtb_Merge1, &rtb_Minus_n[0], 1U);
    rtb_Merge1 = rtb_LookupTableDynamic_j;
    rtb_Minus_k_idx_1 = -Translation_Speed_Rate_Limit_Dec;
  } else {
    /* SignalConversion generated from: '<S295>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S295>/Constant10'
     *  Constant: '<S295>/Constant8'
     */
    rtb_Reshapey[0] = Translation_Speed_NonZero_Final_Scale_Factor;
    rtb_Reshapey[1] = 1.0;

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
    LookUp_real_T_real_T( &(rtb_LookupTableDynamic1_i), &rtb_Reshapey[0],
                         rtb_Merge1, &rtb_Minus_n[0], 1U);
    rtb_Merge1 = rtb_LookupTableDynamic1_i;

    /* Switch: '<S295>/Switch3' incorporates:
     *  Constant: '<S295>/Constant1'
     *  Constant: '<S295>/Constant3'
     *  UnaryMinus: '<S295>/Unary Minus'
     */
    if (rtb_AND1) {
      rtb_Minus_k_idx_1 = Translation_Speed_Rate_Limit_Inc;
    } else {
      rtb_Minus_k_idx_1 = -Translation_Speed_Rate_Limit_Dec;
    }

    /* End of Switch: '<S295>/Switch3' */
  }

  /* End of Switch: '<S295>/Switch5' */

  /* Product: '<S295>/Product' incorporates:
   *  Switch: '<S295>/Switch1'
   */
  rtb_uDLookupTable_f = rtb_Minus_k_idx_1 * rtb_Merge1;

  /* Sum: '<S304>/Sum1' */
  rtb_Switch1_m = rtb_Switch2_l - rtb_Init;

  /* Switch: '<S305>/Switch2' incorporates:
   *  RelationalOperator: '<S305>/LowerRelop1'
   */
  if (!(rtb_Switch1_m > rtb_uDLookupTable_f)) {
    /* Switch: '<S295>/Switch2' incorporates:
     *  Constant: '<S295>/Constant1'
     *  Constant: '<S295>/Constant3'
     *  Switch: '<S295>/Switch4'
     *  UnaryMinus: '<S295>/Unary Minus1'
     */
    if (rtb_Compare_oq) {
      rtb_Minus_k_idx_1 = Translation_Speed_Rate_Limit_Dec;
    } else if (rtb_AND1) {
      /* Switch: '<S295>/Switch4' incorporates:
       *  Constant: '<S295>/Constant1'
       */
      rtb_Minus_k_idx_1 = Translation_Speed_Rate_Limit_Dec;
    } else {
      rtb_Minus_k_idx_1 = -Translation_Speed_Rate_Limit_Inc;
    }

    /* Product: '<S295>/Product2' incorporates:
     *  Switch: '<S295>/Switch2'
     */
    rtb_Switch2 = rtb_Minus_k_idx_1 * rtb_Merge1;

    /* Switch: '<S305>/Switch' incorporates:
     *  RelationalOperator: '<S305>/UpperRelop'
     */
    if (rtb_Switch1_m < rtb_Switch2) {
      rtb_uDLookupTable_f = rtb_Switch2;
    } else {
      rtb_uDLookupTable_f = rtb_Switch1_m;
    }

    /* End of Switch: '<S305>/Switch' */
  }

  /* End of Switch: '<S305>/Switch2' */

  /* Sum: '<S304>/Sum' */
  Code_Gen_Model_B.Translation_Speed_RL = rtb_uDLookupTable_f + rtb_Init;

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
  rtb_Init = rt_modd_snf((Code_Gen_Model_B.Steering_Abs_Cmd_SPF -
    Code_Gen_Model_B.Gyro_Angle_SPF) + 3.1415926535897931, 6.2831853071795862) -
    3.1415926535897931;

  /* Sum: '<S328>/Sum1' incorporates:
   *  Constant: '<S325>/Constant2'
   *  Product: '<S328>/Product'
   *  Sum: '<S328>/Sum'
   *  UnitDelay: '<S328>/Unit Delay1'
   */
  rtb_Merge1 = ((rtb_Init - Code_Gen_Model_DW.UnitDelay1_DSTATE_i) *
                Steering_Heading_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_i;

  /* Product: '<S325>/Product' incorporates:
   *  Constant: '<S325>/Constant3'
   */
  rtb_Switch1_m = rtb_Merge1 * Steering_Heading_Control_D;

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
  rtb_Minus_k_idx_1 = rtb_Switch1_m - Code_Gen_Model_DW.UD_DSTATE_a;

  /* Saturate: '<S325>/Saturation' */
  if (rtb_Minus_k_idx_1 > Steering_Heading_Control_D_UL) {
    rtb_Minus_k_idx_1 = Steering_Heading_Control_D_UL;
  } else if (rtb_Minus_k_idx_1 < Steering_Heading_Control_D_LL) {
    rtb_Minus_k_idx_1 = Steering_Heading_Control_D_LL;
  }

  /* Sum: '<S325>/Add' incorporates:
   *  Gain: '<S325>/Gain1'
   *  Saturate: '<S325>/Saturation'
   */
  rtb_Switch2_ji = (Steering_Heading_Control_P * rtb_Init) + rtb_Minus_k_idx_1;

  /* Sum: '<S325>/Subtract' incorporates:
   *  Constant: '<S325>/Constant'
   */
  rtb_uDLookupTable_f = Steering_Heading_Control_Total_UL - rtb_Switch2_ji;

  /* Sum: '<S325>/Sum2' incorporates:
   *  Gain: '<S325>/Gain2'
   *  UnitDelay: '<S325>/Unit Delay'
   */
  rtb_Switch2 = (Steering_Heading_Control_I * rtb_Init) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_m;

  /* Switch: '<S329>/Switch2' incorporates:
   *  RelationalOperator: '<S329>/LowerRelop1'
   */
  if (!(rtb_Switch2 > rtb_uDLookupTable_f)) {
    /* Sum: '<S325>/Subtract1' incorporates:
     *  Constant: '<S325>/Constant1'
     */
    rtb_uDLookupTable_d = Steering_Heading_Control_Total_LL - rtb_Switch2_ji;

    /* Switch: '<S329>/Switch' incorporates:
     *  RelationalOperator: '<S329>/UpperRelop'
     */
    if (rtb_Switch2 < rtb_uDLookupTable_d) {
      rtb_uDLookupTable_f = rtb_uDLookupTable_d;
    } else {
      rtb_uDLookupTable_f = rtb_Switch2;
    }

    /* End of Switch: '<S329>/Switch' */
  }

  /* End of Switch: '<S329>/Switch2' */

  /* Saturate: '<S325>/Saturation1' */
  if (rtb_uDLookupTable_f > Steering_Heading_Control_I_UL) {
    rtb_Switch2 = Steering_Heading_Control_I_UL;
  } else if (rtb_uDLookupTable_f < Steering_Heading_Control_I_LL) {
    rtb_Switch2 = Steering_Heading_Control_I_LL;
  } else {
    rtb_Switch2 = rtb_uDLookupTable_f;
  }

  /* End of Saturate: '<S325>/Saturation1' */

  /* Sum: '<S325>/Add1' */
  rtb_Minus_k_idx_1 = rtb_Switch2_ji + rtb_Switch2;

  /* Saturate: '<S325>/Saturation2' */
  if (rtb_Minus_k_idx_1 > Steering_Heading_Control_Total_UL) {
    /* Saturate: '<S325>/Saturation2' */
    Code_Gen_Model_B.Steering_Localized_PID = Steering_Heading_Control_Total_UL;
  } else if (rtb_Minus_k_idx_1 < Steering_Heading_Control_Total_LL) {
    /* Saturate: '<S325>/Saturation2' */
    Code_Gen_Model_B.Steering_Localized_PID = Steering_Heading_Control_Total_LL;
  } else {
    /* Saturate: '<S325>/Saturation2' */
    Code_Gen_Model_B.Steering_Localized_PID = rtb_Minus_k_idx_1;
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
    rtb_Init = Code_Gen_Model_B.Steering_Localized_PID;
  } else {
    rtb_Init = 0.0;
  }

  /* End of Switch: '<S309>/Switch' */

  /* Signum: '<S308>/Sign2' incorporates:
   *  UnitDelay: '<S308>/Unit Delay'
   */
  if (rtIsNaN(Code_Gen_Model_DW.UnitDelay_DSTATE_d)) {
    rtb_Minus_k_idx_1 = (rtNaN);
  } else if (Code_Gen_Model_DW.UnitDelay_DSTATE_d < 0.0) {
    rtb_Minus_k_idx_1 = -1.0;
  } else {
    rtb_Minus_k_idx_1 = (Code_Gen_Model_DW.UnitDelay_DSTATE_d > 0.0);
  }

  /* Signum: '<S308>/Sign1' */
  if (rtIsNaN(rtb_Init)) {
    rtb_Switch2_g = (rtNaN);
  } else if (rtb_Init < 0.0) {
    rtb_Switch2_g = -1.0;
  } else {
    rtb_Switch2_g = (rtb_Init > 0.0);
  }

  /* Product: '<S308>/Product1' incorporates:
   *  Signum: '<S308>/Sign1'
   *  Signum: '<S308>/Sign2'
   */
  rtb_Minus_k_idx_1 *= rtb_Switch2_g;
  if (rtIsNaN(rtb_Minus_k_idx_1)) {
    i = 0;
  } else {
    i = (int32_T)fmod(rtb_Minus_k_idx_1, 256.0);
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
  if ((Code_Gen_Model_DW.UnitDelay_DSTATE_d == 0.0) || (((i < 0) ? ((int32_T)
         ((int8_T)(-((int8_T)((uint8_T)(-((real_T)i))))))) : i) > 0)) {
    rtb_uDLookupTable_d = rtb_Init;
  } else {
    rtb_uDLookupTable_d = 0.0;
  }

  /* End of Switch: '<S308>/Switch' */

  /* Switch: '<S323>/Init' incorporates:
   *  UnitDelay: '<S323>/FixPt Unit Delay1'
   *  UnitDelay: '<S323>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_p != 0) {
    rtb_Switch2_ab = rtb_uDLookupTable_d;
  } else {
    rtb_Switch2_ab = Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_e;
  }

  /* End of Switch: '<S323>/Init' */

  /* RelationalOperator: '<S319>/Compare' incorporates:
   *  Constant: '<S319>/Constant'
   */
  rtb_Compare_oq = (rtb_uDLookupTable_d == 0.0);

  /* RelationalOperator: '<S320>/Compare' incorporates:
   *  Constant: '<S320>/Constant'
   */
  rtb_AND1 = (rtb_uDLookupTable_d > 0.0);

  /* Abs: '<S308>/Abs' incorporates:
   *  Sum: '<S308>/Subtract'
   *  UnitDelay: '<S308>/Unit Delay'
   */
  rtb_Abs_n2 = fabs(Code_Gen_Model_DW.UnitDelay_DSTATE_d - rtb_Init);

  /* Switch: '<S308>/Switch5' incorporates:
   *  Constant: '<S308>/Constant1'
   *  Switch: '<S308>/Switch1'
   *  UnaryMinus: '<S308>/Unary Minus'
   */
  if (rtb_Compare_oq) {
    /* SignalConversion generated from: '<S308>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S308>/Constant4'
     *  Constant: '<S308>/Constant6'
     */
    rtb_Reshapey[0] = Steering_Absolute_Cmd_Approach_Zero_Final_Thresh;
    rtb_Reshapey[1] = 1.0;

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
    LookUp_real_T_real_T( &(rtb_LookupTableDynamic), &rtb_Reshapey[0],
                         rtb_Abs_n2, &rtb_Minus_n[0], 1U);
    rtb_Abs_n2 = rtb_LookupTableDynamic;
    rtb_Minus_k_idx_1 = -Steering_Absolute_Cmd_Rate_Limit_Dec;
  } else {
    /* SignalConversion generated from: '<S308>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S308>/Constant10'
     *  Constant: '<S308>/Constant8'
     */
    rtb_Reshapey[0] = Steering_Absolute_Cmd_NonZero_Final_Scale_Factor;
    rtb_Reshapey[1] = 1.0;

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
    LookUp_real_T_real_T( &(rtb_LookupTableDynamic1), &rtb_Reshapey[0],
                         rtb_Abs_n2, &rtb_Minus_n[0], 1U);
    rtb_Abs_n2 = rtb_LookupTableDynamic1;

    /* Switch: '<S308>/Switch3' incorporates:
     *  Constant: '<S308>/Constant1'
     *  Constant: '<S308>/Constant3'
     *  UnaryMinus: '<S308>/Unary Minus'
     */
    if (rtb_AND1) {
      rtb_Minus_k_idx_1 = Steering_Absolute_Cmd_Rate_Limit_Inc;
    } else {
      rtb_Minus_k_idx_1 = -Steering_Absolute_Cmd_Rate_Limit_Dec;
    }

    /* End of Switch: '<S308>/Switch3' */
  }

  /* End of Switch: '<S308>/Switch5' */

  /* Product: '<S308>/Product' incorporates:
   *  Switch: '<S308>/Switch1'
   */
  rtb_Switch2_ji = rtb_Minus_k_idx_1 * rtb_Abs_n2;

  /* Sum: '<S321>/Sum1' */
  rtb_uDLookupTable_d -= rtb_Switch2_ab;

  /* Switch: '<S322>/Switch2' incorporates:
   *  RelationalOperator: '<S322>/LowerRelop1'
   */
  if (!(rtb_uDLookupTable_d > rtb_Switch2_ji)) {
    /* Switch: '<S308>/Switch2' incorporates:
     *  Constant: '<S308>/Constant1'
     *  Constant: '<S308>/Constant3'
     *  Switch: '<S308>/Switch4'
     *  UnaryMinus: '<S308>/Unary Minus1'
     */
    if (rtb_Compare_oq) {
      rtb_Minus_k_idx_1 = Steering_Absolute_Cmd_Rate_Limit_Dec;
    } else if (rtb_AND1) {
      /* Switch: '<S308>/Switch4' incorporates:
       *  Constant: '<S308>/Constant1'
       */
      rtb_Minus_k_idx_1 = Steering_Absolute_Cmd_Rate_Limit_Dec;
    } else {
      rtb_Minus_k_idx_1 = -Steering_Absolute_Cmd_Rate_Limit_Inc;
    }

    /* Product: '<S308>/Product2' incorporates:
     *  Switch: '<S308>/Switch2'
     */
    rtb_Switch2_ji = rtb_Minus_k_idx_1 * rtb_Abs_n2;

    /* Switch: '<S322>/Switch' incorporates:
     *  RelationalOperator: '<S322>/UpperRelop'
     */
    if (!(rtb_uDLookupTable_d < rtb_Switch2_ji)) {
      rtb_Switch2_ji = rtb_uDLookupTable_d;
    }

    /* End of Switch: '<S322>/Switch' */
  }

  /* End of Switch: '<S322>/Switch2' */

  /* Sum: '<S321>/Sum' */
  rtb_Switch2_ji += rtb_Switch2_ab;

  /* Signum: '<S307>/Sign2' incorporates:
   *  UnitDelay: '<S307>/Unit Delay'
   */
  if (rtIsNaN(Code_Gen_Model_DW.UnitDelay_DSTATE_g)) {
    rtb_Minus_k_idx_1 = (rtNaN);
  } else if (Code_Gen_Model_DW.UnitDelay_DSTATE_g < 0.0) {
    rtb_Minus_k_idx_1 = -1.0;
  } else {
    rtb_Minus_k_idx_1 = (Code_Gen_Model_DW.UnitDelay_DSTATE_g > 0.0);
  }

  /* Signum: '<S307>/Sign1' */
  if (rtIsNaN(Code_Gen_Model_B.Steering_Rel_Cmd_SPF)) {
    rtb_Switch2_g = (rtNaN);
  } else if (Code_Gen_Model_B.Steering_Rel_Cmd_SPF < 0.0) {
    rtb_Switch2_g = -1.0;
  } else {
    rtb_Switch2_g = (Code_Gen_Model_B.Steering_Rel_Cmd_SPF > 0.0);
  }

  /* Product: '<S307>/Product1' incorporates:
   *  Signum: '<S307>/Sign1'
   *  Signum: '<S307>/Sign2'
   */
  rtb_Minus_k_idx_1 *= rtb_Switch2_g;
  if (rtIsNaN(rtb_Minus_k_idx_1)) {
    i = 0;
  } else {
    i = (int32_T)fmod(rtb_Minus_k_idx_1, 256.0);
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
  if ((Code_Gen_Model_DW.UnitDelay_DSTATE_g == 0.0) || (((i < 0) ? ((int32_T)
         ((int8_T)(-((int8_T)((uint8_T)(-((real_T)i))))))) : i) > 0)) {
    rtb_uDLookupTable_f = Code_Gen_Model_B.Steering_Rel_Cmd_SPF;
  } else {
    rtb_uDLookupTable_f = 0.0;
  }

  /* End of Switch: '<S307>/Switch' */

  /* Switch: '<S316>/Init' incorporates:
   *  UnitDelay: '<S316>/FixPt Unit Delay1'
   *  UnitDelay: '<S316>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_c != 0) {
    rtb_uDLookupTable_d = rtb_uDLookupTable_f;
  } else {
    rtb_uDLookupTable_d = Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_p;
  }

  /* End of Switch: '<S316>/Init' */

  /* RelationalOperator: '<S312>/Compare' incorporates:
   *  Constant: '<S312>/Constant'
   */
  rtb_Compare_oq = (rtb_uDLookupTable_f == 0.0);

  /* RelationalOperator: '<S313>/Compare' incorporates:
   *  Constant: '<S313>/Constant'
   */
  rtb_AND1 = (rtb_uDLookupTable_f > 0.0);

  /* Abs: '<S307>/Abs' incorporates:
   *  Sum: '<S307>/Subtract'
   *  UnitDelay: '<S307>/Unit Delay'
   */
  rtb_Abs_n2 = fabs(Code_Gen_Model_DW.UnitDelay_DSTATE_g -
                    Code_Gen_Model_B.Steering_Rel_Cmd_SPF);

  /* Switch: '<S307>/Switch5' incorporates:
   *  Constant: '<S307>/Constant1'
   *  Switch: '<S307>/Switch1'
   *  UnaryMinus: '<S307>/Unary Minus'
   */
  if (rtb_Compare_oq) {
    /* SignalConversion generated from: '<S307>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S307>/Constant4'
     *  Constant: '<S307>/Constant6'
     */
    rtb_Reshapey[0] = Steering_Relative_Cmd_Approach_Zero_Final_Thresh;
    rtb_Reshapey[1] = 1.0;

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
    LookUp_real_T_real_T( &(rtb_LookupTableDynamic_p), &rtb_Reshapey[0],
                         rtb_Abs_n2, &rtb_Minus_n[0], 1U);
    rtb_Abs_n2 = rtb_LookupTableDynamic_p;
    rtb_Minus_k_idx_1 = -Steering_Relative_Cmd_Rate_Limit_Dec;
  } else {
    /* SignalConversion generated from: '<S307>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S307>/Constant10'
     *  Constant: '<S307>/Constant8'
     */
    rtb_Reshapey[0] = Steering_Relative_Cmd_NonZero_Final_Scale_Factor;
    rtb_Reshapey[1] = 1.0;

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
    LookUp_real_T_real_T( &(rtb_LookupTableDynamic1_g), &rtb_Reshapey[0],
                         rtb_Abs_n2, &rtb_Minus_n[0], 1U);
    rtb_Abs_n2 = rtb_LookupTableDynamic1_g;

    /* Switch: '<S307>/Switch3' incorporates:
     *  Constant: '<S307>/Constant1'
     *  Constant: '<S307>/Constant3'
     *  UnaryMinus: '<S307>/Unary Minus'
     */
    if (rtb_AND1) {
      rtb_Minus_k_idx_1 = Steering_Relative_Cmd_Rate_Limit_Inc;
    } else {
      rtb_Minus_k_idx_1 = -Steering_Relative_Cmd_Rate_Limit_Dec;
    }

    /* End of Switch: '<S307>/Switch3' */
  }

  /* End of Switch: '<S307>/Switch5' */

  /* Product: '<S307>/Product' incorporates:
   *  Switch: '<S307>/Switch1'
   */
  rtb_Switch2_ab = rtb_Minus_k_idx_1 * rtb_Abs_n2;

  /* Sum: '<S314>/Sum1' */
  rtb_Sum1_p = rtb_uDLookupTable_f - rtb_uDLookupTable_d;

  /* Switch: '<S315>/Switch2' incorporates:
   *  RelationalOperator: '<S315>/LowerRelop1'
   */
  if (!(rtb_Sum1_p > rtb_Switch2_ab)) {
    /* Switch: '<S307>/Switch2' incorporates:
     *  Constant: '<S307>/Constant1'
     *  Constant: '<S307>/Constant3'
     *  Switch: '<S307>/Switch4'
     *  UnaryMinus: '<S307>/Unary Minus1'
     */
    if (rtb_Compare_oq) {
      rtb_Minus_k_idx_1 = Steering_Relative_Cmd_Rate_Limit_Dec;
    } else if (rtb_AND1) {
      /* Switch: '<S307>/Switch4' incorporates:
       *  Constant: '<S307>/Constant1'
       */
      rtb_Minus_k_idx_1 = Steering_Relative_Cmd_Rate_Limit_Dec;
    } else {
      rtb_Minus_k_idx_1 = -Steering_Relative_Cmd_Rate_Limit_Inc;
    }

    /* Product: '<S307>/Product2' incorporates:
     *  Switch: '<S307>/Switch2'
     */
    rtb_Switch2_ab = rtb_Minus_k_idx_1 * rtb_Abs_n2;

    /* Switch: '<S315>/Switch' incorporates:
     *  RelationalOperator: '<S315>/UpperRelop'
     */
    if (!(rtb_Sum1_p < rtb_Switch2_ab)) {
      rtb_Switch2_ab = rtb_Sum1_p;
    }

    /* End of Switch: '<S315>/Switch' */
  }

  /* End of Switch: '<S315>/Switch2' */

  /* Sum: '<S314>/Sum' */
  rtb_uDLookupTable_d += rtb_Switch2_ab;

  /* Switch: '<S297>/Switch' */
  if (Code_Gen_Model_B.Is_Absolute_Steering_SPF) {
    /* Switch: '<S297>/Switch' */
    Code_Gen_Model_B.Steering_Localized_Cmd = rtb_Switch2_ji;
  } else {
    /* Switch: '<S297>/Switch' */
    Code_Gen_Model_B.Steering_Localized_Cmd = rtb_uDLookupTable_d;
  }

  /* End of Switch: '<S297>/Switch' */

  /* Outputs for Atomic SubSystem: '<S210>/Initialize Function' */
  /* Sum: '<S296>/Add' incorporates:
   *  Constant: '<S296>/Constant'
   *  Constant: '<S296>/Constant4'
   *  Constant: '<S296>/Constant5'
   *  Trigonometry: '<S296>/Atan2'
   */
  rtb_Switch2_ab = rt_atan2d_snf(Distance_FL_y, 0.187325) + 1.5707963267948966;

  /* End of Outputs for SubSystem: '<S210>/Initialize Function' */

  /* Fcn: '<S338>/r->x' incorporates:
   *  Fcn: '<S343>/r->x'
   *  Fcn: '<S348>/r->x'
   *  Fcn: '<S353>/r->x'
   */
  rtb_Switch2_l = Code_Gen_Model_B.Translation_Speed_RL * cos
    (Code_Gen_Model_B.Translation_Steering_Cmd);

  /* Sum: '<S332>/Add' incorporates:
   *  Fcn: '<S338>/r->x'
   *  Fcn: '<S339>/r->x'
   */
  rtb_Reshapey[0] = (Code_Gen_Model_B.Steering_Localized_Cmd * cos
                     (rtb_Switch2_ab)) + rtb_Switch2_l;

  /* Fcn: '<S338>/theta->y' incorporates:
   *  Fcn: '<S343>/theta->y'
   *  Fcn: '<S348>/theta->y'
   *  Fcn: '<S353>/theta->y'
   */
  rtb_Subtract1_ak = Code_Gen_Model_B.Translation_Speed_RL * sin
    (Code_Gen_Model_B.Translation_Steering_Cmd);

  /* Sum: '<S332>/Add' incorporates:
   *  Fcn: '<S338>/theta->y'
   *  Fcn: '<S339>/theta->y'
   */
  rtb_Reshapey[1] = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                     (rtb_Switch2_ab)) + rtb_Subtract1_ak;

  /* Sum: '<S333>/Add' incorporates:
   *  Fcn: '<S344>/r->x'
   *  Fcn: '<S344>/theta->y'
   */
  rtb_Minus_n[0] = (Code_Gen_Model_B.Steering_Localized_Cmd * cos
                    (Code_Gen_Model_ConstB.FR_Tangent_Angle)) + rtb_Switch2_l;
  rtb_Minus_n[1] = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                    (Code_Gen_Model_ConstB.FR_Tangent_Angle)) + rtb_Subtract1_ak;

  /* Sum: '<S334>/Add' incorporates:
   *  Fcn: '<S349>/r->x'
   *  Fcn: '<S349>/theta->y'
   */
  rtb_Add2_k_idx_0 = (Code_Gen_Model_B.Steering_Localized_Cmd * cos
                      (Code_Gen_Model_ConstB.BL_Tangent_Angle)) + rtb_Switch2_l;
  rtb_Add2_k_idx_1 = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                      (Code_Gen_Model_ConstB.BL_Tangent_Angle)) +
    rtb_Subtract1_ak;

  /* Sum: '<S335>/Add' incorporates:
   *  Fcn: '<S354>/r->x'
   *  Fcn: '<S354>/theta->y'
   */
  rtb_Switch2_ab = (Code_Gen_Model_B.Steering_Localized_Cmd * cos
                    (Code_Gen_Model_ConstB.BR_Tangent_Angle)) + rtb_Switch2_l;
  rtb_Minus_k_idx_1 = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                       (Code_Gen_Model_ConstB.BR_Tangent_Angle)) +
    rtb_Subtract1_ak;

  /* Fcn: '<S352>/x->r' */
  rtb_Subtract1_ak = rt_hypotd_snf(rtb_Switch2_ab, rtb_Minus_k_idx_1);

  /* RelationalOperator: '<S355>/Compare' incorporates:
   *  Constant: '<S355>/Constant'
   */
  rtb_Compare_oq = (rtb_Subtract1_ak == 0.0);

  /* Switch: '<S351>/Switch1' */
  if (rtb_Compare_oq) {
    /* Switch: '<S351>/Switch1' incorporates:
     *  Constant: '<S351>/Constant'
     */
    Code_Gen_Model_B.BR_Desired_Wheel_Speed_in = 1.0E-15;
  } else {
    /* Switch: '<S351>/Switch1' */
    Code_Gen_Model_B.BR_Desired_Wheel_Speed_in = rtb_Subtract1_ak;
  }

  /* End of Switch: '<S351>/Switch1' */

  /* Fcn: '<S337>/x->r' */
  rtb_Subtract1_ak = rt_hypotd_snf(rtb_Reshapey[0], rtb_Reshapey[1]);

  /* RelationalOperator: '<S340>/Compare' incorporates:
   *  Constant: '<S340>/Constant'
   */
  rtb_AND1 = (rtb_Subtract1_ak == 0.0);

  /* Switch: '<S336>/Switch1' */
  if (rtb_AND1) {
    /* Switch: '<S336>/Switch1' incorporates:
     *  Constant: '<S336>/Constant'
     */
    Code_Gen_Model_B.FL_Desired_Wheel_Speed_in = 1.0E-15;
  } else {
    /* Switch: '<S336>/Switch1' */
    Code_Gen_Model_B.FL_Desired_Wheel_Speed_in = rtb_Subtract1_ak;
  }

  /* End of Switch: '<S336>/Switch1' */

  /* Fcn: '<S342>/x->r' */
  rtb_Switch2_l = rt_hypotd_snf(rtb_Minus_n[0], rtb_Minus_n[1]);

  /* RelationalOperator: '<S345>/Compare' incorporates:
   *  Constant: '<S345>/Constant'
   */
  Compare_f = (rtb_Switch2_l == 0.0);

  /* Switch: '<S341>/Switch1' */
  if (Compare_f) {
    /* Switch: '<S341>/Switch1' incorporates:
     *  Constant: '<S341>/Constant'
     */
    Code_Gen_Model_B.FR_Desired_Wheel_Speed_in = 1.0E-15;
  } else {
    /* Switch: '<S341>/Switch1' */
    Code_Gen_Model_B.FR_Desired_Wheel_Speed_in = rtb_Switch2_l;
  }

  /* End of Switch: '<S341>/Switch1' */

  /* Fcn: '<S347>/x->r' */
  rtb_Init = rt_hypotd_snf(rtb_Add2_k_idx_0, rtb_Add2_k_idx_1);

  /* RelationalOperator: '<S350>/Compare' incorporates:
   *  Constant: '<S350>/Constant'
   */
  rtb_Is_Absolute_Translation_g = (rtb_Init == 0.0);

  /* Switch: '<S346>/Switch1' */
  if (rtb_Is_Absolute_Translation_g) {
    /* Switch: '<S346>/Switch1' incorporates:
     *  Constant: '<S346>/Constant'
     */
    Code_Gen_Model_B.BL_Desired_Wheel_Speed_in = 1.0E-15;
  } else {
    /* Switch: '<S346>/Switch1' */
    Code_Gen_Model_B.BL_Desired_Wheel_Speed_in = rtb_Init;
  }

  /* End of Switch: '<S346>/Switch1' */

  /* Product: '<S331>/Divide' incorporates:
   *  Abs: '<S331>/Abs'
   *  Abs: '<S331>/Abs1'
   *  Abs: '<S331>/Abs2'
   *  Abs: '<S331>/Abs3'
   *  Constant: '<S331>/Constant'
   *  MinMax: '<S331>/Max'
   */
  rtb_Subtract1_ak = 5.389313721017964 / fmax(fmax(fmax(fmax(5.389313721017964,
    Code_Gen_Model_B.FL_Desired_Wheel_Speed_in),
    Code_Gen_Model_B.FR_Desired_Wheel_Speed_in),
    Code_Gen_Model_B.BL_Desired_Wheel_Speed_in),
    Code_Gen_Model_B.BR_Desired_Wheel_Speed_in);

  /* Product: '<S331>/Product3' */
  Code_Gen_Model_B.BR_Desired_Wheel_Speed =
    Code_Gen_Model_B.BR_Desired_Wheel_Speed_in * rtb_Subtract1_ak;

  /* Switch: '<S351>/Switch' */
  if (!rtb_Compare_oq) {
    /* Switch: '<S351>/Switch' incorporates:
     *  Fcn: '<S352>/x->theta'
     */
    Code_Gen_Model_B.BR_Desired_Module_Angle = rt_atan2d_snf(rtb_Minus_k_idx_1,
      rtb_Switch2_ab);
  }

  /* End of Switch: '<S351>/Switch' */

  /* Trigonometry: '<S287>/Cos4' incorporates:
   *  Switch: '<S276>/Angle_Switch'
   *  Trigonometry: '<S286>/Cos4'
   */
  rtb_Add_cc = cos(Code_Gen_Model_B.BR_Desired_Module_Angle);

  /* Trigonometry: '<S287>/Sin5' incorporates:
   *  UnaryMinus: '<S285>/Unary Minus'
   */
  rtb_uDLookupTable_f = sin(-Code_Gen_Model_B.BR_Steer_Module_Angle);

  /* Trigonometry: '<S287>/Sin4' incorporates:
   *  Switch: '<S276>/Angle_Switch'
   *  Trigonometry: '<S286>/Sin4'
   */
  rtb_Subtract_jj = sin(Code_Gen_Model_B.BR_Desired_Module_Angle);

  /* Trigonometry: '<S287>/Cos5' incorporates:
   *  UnaryMinus: '<S285>/Unary Minus'
   */
  rtb_Init = cos(-Code_Gen_Model_B.BR_Steer_Module_Angle);

  /* Sum: '<S287>/Subtract1' incorporates:
   *  Product: '<S287>/Product2'
   *  Product: '<S287>/Product3'
   *  Trigonometry: '<S287>/Cos4'
   *  Trigonometry: '<S287>/Sin4'
   */
  rtb_Switch2_ab = (rtb_Add_cc * rtb_uDLookupTable_f) + (rtb_Subtract_jj *
    rtb_Init);

  /* Sum: '<S287>/Subtract' incorporates:
   *  Product: '<S287>/Product'
   *  Product: '<S287>/Product1'
   *  Trigonometry: '<S287>/Cos4'
   *  Trigonometry: '<S287>/Sin4'
   */
  rtb_Abs_n2 = (rtb_Add_cc * rtb_Init) - (rtb_Subtract_jj * rtb_uDLookupTable_f);

  /* Math: '<S287>/Hypot' */
  rtb_Sum1_p = rt_hypotd_snf(rtb_Abs_n2, rtb_Switch2_ab);

  /* Switch: '<S287>/Switch' incorporates:
   *  Constant: '<S287>/Constant'
   *  Constant: '<S287>/Constant1'
   *  Constant: '<S288>/Constant'
   *  Product: '<S287>/Divide'
   *  Product: '<S287>/Divide1'
   *  RelationalOperator: '<S288>/Compare'
   *  Switch: '<S287>/Switch1'
   */
  if (rtb_Sum1_p > 1.0E-6) {
    rtb_Switch2_l = rtb_Switch2_ab / rtb_Sum1_p;
    rtb_Init = rtb_Abs_n2 / rtb_Sum1_p;
  } else {
    rtb_Switch2_l = 0.0;
    rtb_Init = 1.0;
  }

  /* End of Switch: '<S287>/Switch' */

  /* Switch: '<S276>/Speed_Switch' incorporates:
   *  Abs: '<S276>/Abs'
   *  Constant: '<S284>/Constant'
   *  RelationalOperator: '<S284>/Compare'
   *  Switch: '<S276>/Angle_Switch'
   *  Trigonometry: '<S286>/Atan1'
   *  Trigonometry: '<S287>/Atan1'
   *  UnaryMinus: '<S276>/Unary Minus'
   */
  if (fabs(rt_atan2d_snf(rtb_Switch2_l, rtb_Init)) > 1.5707963267948966) {
    rtb_Minus_k_idx_1 = -Code_Gen_Model_B.BR_Desired_Wheel_Speed;

    /* Sum: '<S286>/Subtract1' incorporates:
     *  Product: '<S286>/Product2'
     *  Product: '<S286>/Product3'
     *  UnaryMinus: '<S276>/Unary Minus'
     */
    rtb_Switch2_ab = (rtb_Add_cc * Code_Gen_Model_ConstB.Sin5_c) +
      (rtb_Subtract_jj * Code_Gen_Model_ConstB.Cos5_b);

    /* Sum: '<S286>/Subtract' incorporates:
     *  Product: '<S286>/Product'
     *  Product: '<S286>/Product1'
     */
    rtb_Sum1_p = (rtb_Add_cc * Code_Gen_Model_ConstB.Cos5_b) - (rtb_Subtract_jj *
      Code_Gen_Model_ConstB.Sin5_c);

    /* Math: '<S286>/Hypot' */
    rtb_Abs_n2 = rt_hypotd_snf(rtb_Sum1_p, rtb_Switch2_ab);

    /* Switch: '<S286>/Switch1' incorporates:
     *  Constant: '<S286>/Constant'
     *  Constant: '<S286>/Constant1'
     *  Constant: '<S289>/Constant'
     *  Product: '<S286>/Divide'
     *  Product: '<S286>/Divide1'
     *  RelationalOperator: '<S289>/Compare'
     *  Switch: '<S286>/Switch'
     */
    if (rtb_Abs_n2 > 1.0E-6) {
      rtb_Sum1_p /= rtb_Abs_n2;
      rtb_Switch2_ab /= rtb_Abs_n2;
    } else {
      rtb_Sum1_p = 1.0;
      rtb_Switch2_ab = 0.0;
    }

    /* End of Switch: '<S286>/Switch1' */
    rtb_uDLookupTable_f = rt_atan2d_snf(rtb_Switch2_ab, rtb_Sum1_p);
  } else {
    rtb_Minus_k_idx_1 = Code_Gen_Model_B.BR_Desired_Wheel_Speed;
    rtb_uDLookupTable_f = Code_Gen_Model_B.BR_Desired_Module_Angle;
  }

  /* Product: '<S279>/Product2' incorporates:
   *  Constant: '<S279>/Constant'
   *  Switch: '<S276>/Speed_Switch'
   */
  rtb_Switch2_l = rtb_Minus_k_idx_1 * 1150.4247703785388;

  /* Signum: '<S274>/Sign' */
  if (rtIsNaN(rtb_Switch2_l)) {
    rtb_Minus_k_idx_1 = (rtNaN);
  } else if (rtb_Switch2_l < 0.0) {
    rtb_Minus_k_idx_1 = -1.0;
  } else {
    rtb_Minus_k_idx_1 = (rtb_Switch2_l > 0.0);
  }

  /* Signum: '<S274>/Sign1' incorporates:
   *  Inport: '<Root>/BackRight_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.BackRight_Drive_Motor_Speed)) {
    rtb_Switch2_g = (rtNaN);
  } else if (Code_Gen_Model_U.BackRight_Drive_Motor_Speed < 0.0) {
    rtb_Switch2_g = -1.0;
  } else {
    rtb_Switch2_g = (Code_Gen_Model_U.BackRight_Drive_Motor_Speed > 0.0);
  }

  /* Sum: '<S277>/Add' incorporates:
   *  Sum: '<S278>/Sum'
   */
  rtb_uDLookupTable_f -= Code_Gen_Model_B.BR_Steer_Module_Angle;

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
   *  Sum: '<S277>/Add'
   *  Sum: '<S290>/Add1'
   *  Sum: '<S290>/Add2'
   */
  rtb_Switch2_l = (((real_T)((rtb_Minus_k_idx_1 == rtb_Switch2_g) || (fabs
    (Code_Gen_Model_U.BackRight_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_Switch2_l) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_uDLookupTable_f + 1.5707963267948966,
                      3.1415926535897931) - 1.5707963267948966),
     Code_Gen_Model_ConstP.pooled28, Code_Gen_Model_ConstP.pooled27, 1U);

  /* Gain: '<S275>/Gain' */
  rtb_Sum1_p = Drive_Motor_Control_FF * rtb_Switch2_l;

  /* Sum: '<S275>/Sum' incorporates:
   *  Inport: '<Root>/BackRight_Drive_Motor_Speed'
   */
  rtb_Switch2_l -= Code_Gen_Model_U.BackRight_Drive_Motor_Speed;

  /* Sum: '<S282>/Sum1' incorporates:
   *  Constant: '<S275>/Constant2'
   *  Product: '<S282>/Product'
   *  Sum: '<S282>/Sum'
   *  UnitDelay: '<S282>/Unit Delay1'
   */
  rtb_Switch2_ab = ((rtb_Switch2_l - Code_Gen_Model_DW.UnitDelay1_DSTATE_kw) *
                    Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_kw;

  /* Product: '<S275>/Product' incorporates:
   *  Constant: '<S275>/Constant3'
   */
  rtb_Abs_n2 = rtb_Switch2_ab * Drive_Motor_Control_D;

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
  rtb_Minus_k_idx_1 = rtb_Abs_n2 - Code_Gen_Model_DW.UD_DSTATE_cs;

  /* Saturate: '<S275>/Saturation' */
  if (rtb_Minus_k_idx_1 > Drive_Motor_Control_D_UL) {
    rtb_Minus_k_idx_1 = Drive_Motor_Control_D_UL;
  } else if (rtb_Minus_k_idx_1 < Drive_Motor_Control_D_LL) {
    rtb_Minus_k_idx_1 = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S275>/Add' incorporates:
   *  Gain: '<S275>/Gain1'
   *  Saturate: '<S275>/Saturation'
   */
  rtb_Add_jk = ((Drive_Motor_Control_P * rtb_Switch2_l) + rtb_Sum1_p) +
    rtb_Minus_k_idx_1;

  /* Sum: '<S275>/Subtract' incorporates:
   *  Constant: '<S275>/Constant'
   */
  rtb_Init = 1.0 - rtb_Add_jk;

  /* Sum: '<S275>/Sum2' incorporates:
   *  Gain: '<S275>/Gain2'
   *  UnitDelay: '<S275>/Unit Delay'
   */
  rtb_Sum1_p = (Drive_Motor_Control_I * rtb_Switch2_l) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_a;

  /* Switch: '<S283>/Switch2' incorporates:
   *  RelationalOperator: '<S283>/LowerRelop1'
   */
  if (!(rtb_Sum1_p > rtb_Init)) {
    /* Switch: '<S283>/Switch' incorporates:
     *  Constant: '<S275>/Constant1'
     *  RelationalOperator: '<S283>/UpperRelop'
     *  Sum: '<S275>/Subtract1'
     */
    if (rtb_Sum1_p < (-1.0 - rtb_Add_jk)) {
      rtb_Init = -1.0 - rtb_Add_jk;
    } else {
      rtb_Init = rtb_Sum1_p;
    }

    /* End of Switch: '<S283>/Switch' */
  }

  /* End of Switch: '<S283>/Switch2' */

  /* Saturate: '<S275>/Saturation1' */
  if (rtb_Init > Drive_Motor_Control_I_UL) {
    rtb_Sum1_p = Drive_Motor_Control_I_UL;
  } else if (rtb_Init < Drive_Motor_Control_I_LL) {
    rtb_Sum1_p = Drive_Motor_Control_I_LL;
  } else {
    rtb_Sum1_p = rtb_Init;
  }

  /* End of Saturate: '<S275>/Saturation1' */

  /* Sum: '<S275>/Add1' */
  rtb_Minus_k_idx_1 = rtb_Add_jk + rtb_Sum1_p;

  /* Saturate: '<S275>/Saturation2' */
  if (rtb_Minus_k_idx_1 > 1.0) {
    /* Outport: '<Root>/BackRight_Drive_DutyCycle' */
    Code_Gen_Model_Y.BackRight_Drive_DutyCycle = 1.0;
  } else if (rtb_Minus_k_idx_1 < -1.0) {
    /* Outport: '<Root>/BackRight_Drive_DutyCycle' */
    Code_Gen_Model_Y.BackRight_Drive_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/BackRight_Drive_DutyCycle' */
    Code_Gen_Model_Y.BackRight_Drive_DutyCycle = rtb_Minus_k_idx_1;
  }

  /* End of Saturate: '<S275>/Saturation2' */

  /* Sum: '<S291>/Add1' incorporates:
   *  Constant: '<S291>/Constant3'
   *  Constant: '<S291>/Constant4'
   *  Math: '<S291>/Math Function'
   *  Sum: '<S291>/Add2'
   */
  rtb_Switch2_l = rt_modd_snf(rtb_uDLookupTable_f + 3.1415926535897931,
    6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S293>/Sum1' incorporates:
   *  Constant: '<S278>/Constant2'
   *  Product: '<S293>/Product'
   *  Sum: '<S293>/Sum'
   *  UnitDelay: '<S293>/Unit Delay1'
   */
  rtb_Add_jk = ((rtb_Switch2_l - Code_Gen_Model_DW.UnitDelay1_DSTATE_iw) *
                Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_iw;

  /* Product: '<S278>/Product' incorporates:
   *  Constant: '<S278>/Constant3'
   */
  rtb_Subtract1_lg = rtb_Add_jk * Steering_Motor_Control_D;

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
  rtb_Minus_k_idx_1 = rtb_Subtract1_lg - Code_Gen_Model_DW.UD_DSTATE_l;

  /* Saturate: '<S278>/Saturation' */
  if (rtb_Minus_k_idx_1 > Steering_Motor_Control_D_UL) {
    rtb_Minus_k_idx_1 = Steering_Motor_Control_D_UL;
  } else if (rtb_Minus_k_idx_1 < Steering_Motor_Control_D_LL) {
    rtb_Minus_k_idx_1 = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S278>/Add' incorporates:
   *  Gain: '<S278>/Gain1'
   *  Saturate: '<S278>/Saturation'
   */
  rtb_Add_os = (Steering_Motor_Control_P * rtb_Switch2_l) + rtb_Minus_k_idx_1;

  /* Sum: '<S278>/Subtract' incorporates:
   *  Constant: '<S278>/Constant'
   */
  rtb_Init = 1.0 - rtb_Add_os;

  /* Sum: '<S278>/Sum2' incorporates:
   *  Gain: '<S278>/Gain2'
   *  UnitDelay: '<S278>/Unit Delay'
   */
  rtb_Sum2_fc = (Steering_Motor_Control_I * rtb_Switch2_l) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_l;

  /* Switch: '<S294>/Switch2' incorporates:
   *  RelationalOperator: '<S294>/LowerRelop1'
   */
  if (!(rtb_Sum2_fc > rtb_Init)) {
    /* Switch: '<S294>/Switch' incorporates:
     *  Constant: '<S278>/Constant1'
     *  RelationalOperator: '<S294>/UpperRelop'
     *  Sum: '<S278>/Subtract1'
     */
    if (rtb_Sum2_fc < (-1.0 - rtb_Add_os)) {
      rtb_Init = -1.0 - rtb_Add_os;
    } else {
      rtb_Init = rtb_Sum2_fc;
    }

    /* End of Switch: '<S294>/Switch' */
  }

  /* End of Switch: '<S294>/Switch2' */

  /* Saturate: '<S278>/Saturation1' */
  if (rtb_Init > Steering_Motor_Control_I_UL) {
    rtb_Sum2_fc = Steering_Motor_Control_I_UL;
  } else if (rtb_Init < Steering_Motor_Control_I_LL) {
    rtb_Sum2_fc = Steering_Motor_Control_I_LL;
  } else {
    rtb_Sum2_fc = rtb_Init;
  }

  /* End of Saturate: '<S278>/Saturation1' */

  /* Sum: '<S278>/Add1' */
  rtb_Minus_k_idx_1 = rtb_Add_os + rtb_Sum2_fc;

  /* Saturate: '<S278>/Saturation2' */
  if (rtb_Minus_k_idx_1 > 1.0) {
    /* Outport: '<Root>/BackRight_Steer_DutyCycle' */
    Code_Gen_Model_Y.BackRight_Steer_DutyCycle = 1.0;
  } else if (rtb_Minus_k_idx_1 < -1.0) {
    /* Outport: '<Root>/BackRight_Steer_DutyCycle' */
    Code_Gen_Model_Y.BackRight_Steer_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/BackRight_Steer_DutyCycle' */
    Code_Gen_Model_Y.BackRight_Steer_DutyCycle = rtb_Minus_k_idx_1;
  }

  /* End of Saturate: '<S278>/Saturation2' */

  /* Product: '<S331>/Product' */
  Code_Gen_Model_B.FL_Desired_Wheel_Speed =
    Code_Gen_Model_B.FL_Desired_Wheel_Speed_in * rtb_Subtract1_ak;

  /* Switch: '<S336>/Switch' */
  if (!rtb_AND1) {
    /* Switch: '<S336>/Switch' incorporates:
     *  Fcn: '<S337>/x->theta'
     */
    Code_Gen_Model_B.FL_Desired_Module_Angle = rt_atan2d_snf(rtb_Reshapey[1],
      rtb_Reshapey[0]);
  }

  /* End of Switch: '<S336>/Switch' */

  /* Trigonometry: '<S224>/Cos4' incorporates:
   *  Switch: '<S213>/Angle_Switch'
   *  Trigonometry: '<S223>/Cos4'
   */
  rtb_Add_cc = cos(Code_Gen_Model_B.FL_Desired_Module_Angle);

  /* Trigonometry: '<S224>/Sin5' incorporates:
   *  UnaryMinus: '<S222>/Unary Minus'
   */
  rtb_uDLookupTable_f = sin(-Code_Gen_Model_B.FL_Steer_Module_Angle);

  /* Trigonometry: '<S224>/Sin4' incorporates:
   *  Switch: '<S213>/Angle_Switch'
   *  Trigonometry: '<S223>/Sin4'
   */
  rtb_Subtract_jj = sin(Code_Gen_Model_B.FL_Desired_Module_Angle);

  /* Trigonometry: '<S224>/Cos5' incorporates:
   *  UnaryMinus: '<S222>/Unary Minus'
   */
  rtb_Init = cos(-Code_Gen_Model_B.FL_Steer_Module_Angle);

  /* Sum: '<S224>/Subtract1' incorporates:
   *  Product: '<S224>/Product2'
   *  Product: '<S224>/Product3'
   *  Trigonometry: '<S224>/Cos4'
   *  Trigonometry: '<S224>/Sin4'
   */
  rtb_Add_os = (rtb_Add_cc * rtb_uDLookupTable_f) + (rtb_Subtract_jj * rtb_Init);

  /* Sum: '<S224>/Subtract' incorporates:
   *  Product: '<S224>/Product'
   *  Product: '<S224>/Product1'
   *  Trigonometry: '<S224>/Cos4'
   *  Trigonometry: '<S224>/Sin4'
   */
  rtb_Subtract1_b = (rtb_Add_cc * rtb_Init) - (rtb_Subtract_jj *
    rtb_uDLookupTable_f);

  /* Math: '<S224>/Hypot' */
  rtb_Hypot_g5 = rt_hypotd_snf(rtb_Subtract1_b, rtb_Add_os);

  /* Switch: '<S224>/Switch' incorporates:
   *  Constant: '<S224>/Constant'
   *  Constant: '<S224>/Constant1'
   *  Constant: '<S225>/Constant'
   *  Product: '<S224>/Divide'
   *  Product: '<S224>/Divide1'
   *  RelationalOperator: '<S225>/Compare'
   *  Switch: '<S224>/Switch1'
   */
  if (rtb_Hypot_g5 > 1.0E-6) {
    rtb_Switch2_l = rtb_Add_os / rtb_Hypot_g5;
    rtb_Init = rtb_Subtract1_b / rtb_Hypot_g5;
  } else {
    rtb_Switch2_l = 0.0;
    rtb_Init = 1.0;
  }

  /* End of Switch: '<S224>/Switch' */

  /* Switch: '<S213>/Speed_Switch' incorporates:
   *  Abs: '<S213>/Abs'
   *  Constant: '<S221>/Constant'
   *  RelationalOperator: '<S221>/Compare'
   *  Switch: '<S213>/Angle_Switch'
   *  Trigonometry: '<S223>/Atan1'
   *  Trigonometry: '<S224>/Atan1'
   *  UnaryMinus: '<S213>/Unary Minus'
   */
  if (fabs(rt_atan2d_snf(rtb_Switch2_l, rtb_Init)) > 1.5707963267948966) {
    rtb_Minus_k_idx_1 = -Code_Gen_Model_B.FL_Desired_Wheel_Speed;

    /* Sum: '<S223>/Subtract1' incorporates:
     *  Product: '<S223>/Product2'
     *  Product: '<S223>/Product3'
     *  UnaryMinus: '<S213>/Unary Minus'
     */
    rtb_Add_os = (rtb_Add_cc * Code_Gen_Model_ConstB.Sin5) + (rtb_Subtract_jj *
      Code_Gen_Model_ConstB.Cos5);

    /* Sum: '<S223>/Subtract' incorporates:
     *  Product: '<S223>/Product'
     *  Product: '<S223>/Product1'
     */
    rtb_Hypot_g5 = (rtb_Add_cc * Code_Gen_Model_ConstB.Cos5) - (rtb_Subtract_jj *
      Code_Gen_Model_ConstB.Sin5);

    /* Math: '<S223>/Hypot' */
    rtb_Subtract1_b = rt_hypotd_snf(rtb_Hypot_g5, rtb_Add_os);

    /* Switch: '<S223>/Switch1' incorporates:
     *  Constant: '<S223>/Constant'
     *  Constant: '<S223>/Constant1'
     *  Constant: '<S226>/Constant'
     *  Product: '<S223>/Divide'
     *  Product: '<S223>/Divide1'
     *  RelationalOperator: '<S226>/Compare'
     *  Switch: '<S223>/Switch'
     */
    if (rtb_Subtract1_b > 1.0E-6) {
      rtb_Hypot_g5 /= rtb_Subtract1_b;
      rtb_Add_os /= rtb_Subtract1_b;
    } else {
      rtb_Hypot_g5 = 1.0;
      rtb_Add_os = 0.0;
    }

    /* End of Switch: '<S223>/Switch1' */
    rtb_uDLookupTable_f = rt_atan2d_snf(rtb_Add_os, rtb_Hypot_g5);
  } else {
    rtb_Minus_k_idx_1 = Code_Gen_Model_B.FL_Desired_Wheel_Speed;
    rtb_uDLookupTable_f = Code_Gen_Model_B.FL_Desired_Module_Angle;
  }

  /* Product: '<S216>/Product2' incorporates:
   *  Constant: '<S216>/Constant'
   *  Switch: '<S213>/Speed_Switch'
   */
  rtb_Switch2_l = rtb_Minus_k_idx_1 * 1150.4247703785388;

  /* Signum: '<S211>/Sign' */
  if (rtIsNaN(rtb_Switch2_l)) {
    rtb_Minus_k_idx_1 = (rtNaN);
  } else if (rtb_Switch2_l < 0.0) {
    rtb_Minus_k_idx_1 = -1.0;
  } else {
    rtb_Minus_k_idx_1 = (rtb_Switch2_l > 0.0);
  }

  /* Signum: '<S211>/Sign1' incorporates:
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed)) {
    rtb_Switch2_g = (rtNaN);
  } else if (Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed < 0.0) {
    rtb_Switch2_g = -1.0;
  } else {
    rtb_Switch2_g = (Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed > 0.0);
  }

  /* Sum: '<S214>/Add' incorporates:
   *  Sum: '<S215>/Sum'
   */
  rtb_uDLookupTable_f -= Code_Gen_Model_B.FL_Steer_Module_Angle;

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
   *  Sum: '<S214>/Add'
   *  Sum: '<S227>/Add1'
   *  Sum: '<S227>/Add2'
   */
  rtb_Switch2_l = (((real_T)((rtb_Minus_k_idx_1 == rtb_Switch2_g) || (fabs
    (Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_Switch2_l) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_uDLookupTable_f + 1.5707963267948966,
                      3.1415926535897931) - 1.5707963267948966),
     Code_Gen_Model_ConstP.pooled28, Code_Gen_Model_ConstP.pooled27, 1U);

  /* Gain: '<S212>/Gain' */
  rtb_Hypot_g5 = Drive_Motor_Control_FF * rtb_Switch2_l;

  /* Sum: '<S212>/Sum' incorporates:
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Speed'
   */
  rtb_Switch2_l -= Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed;

  /* Sum: '<S219>/Sum1' incorporates:
   *  Constant: '<S212>/Constant2'
   *  Product: '<S219>/Product'
   *  Sum: '<S219>/Sum'
   *  UnitDelay: '<S219>/Unit Delay1'
   */
  rtb_Add_os = ((rtb_Switch2_l - Code_Gen_Model_DW.UnitDelay1_DSTATE_a) *
                Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_a;

  /* Product: '<S212>/Product' incorporates:
   *  Constant: '<S212>/Constant3'
   */
  rtb_Subtract1_b = rtb_Add_os * Drive_Motor_Control_D;

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
  rtb_Minus_k_idx_1 = rtb_Subtract1_b - Code_Gen_Model_DW.UD_DSTATE_o;

  /* Saturate: '<S212>/Saturation' */
  if (rtb_Minus_k_idx_1 > Drive_Motor_Control_D_UL) {
    rtb_Minus_k_idx_1 = Drive_Motor_Control_D_UL;
  } else if (rtb_Minus_k_idx_1 < Drive_Motor_Control_D_LL) {
    rtb_Minus_k_idx_1 = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S212>/Add' incorporates:
   *  Gain: '<S212>/Gain1'
   *  Saturate: '<S212>/Saturation'
   */
  rtb_Add_ia = ((Drive_Motor_Control_P * rtb_Switch2_l) + rtb_Hypot_g5) +
    rtb_Minus_k_idx_1;

  /* Sum: '<S212>/Subtract' incorporates:
   *  Constant: '<S212>/Constant'
   */
  rtb_Init = 1.0 - rtb_Add_ia;

  /* Sum: '<S212>/Sum2' incorporates:
   *  Gain: '<S212>/Gain2'
   *  UnitDelay: '<S212>/Unit Delay'
   */
  rtb_Hypot_g5 = (Drive_Motor_Control_I * rtb_Switch2_l) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_f;

  /* Switch: '<S220>/Switch2' incorporates:
   *  RelationalOperator: '<S220>/LowerRelop1'
   */
  if (!(rtb_Hypot_g5 > rtb_Init)) {
    /* Switch: '<S220>/Switch' incorporates:
     *  Constant: '<S212>/Constant1'
     *  RelationalOperator: '<S220>/UpperRelop'
     *  Sum: '<S212>/Subtract1'
     */
    if (rtb_Hypot_g5 < (-1.0 - rtb_Add_ia)) {
      rtb_Init = -1.0 - rtb_Add_ia;
    } else {
      rtb_Init = rtb_Hypot_g5;
    }

    /* End of Switch: '<S220>/Switch' */
  }

  /* End of Switch: '<S220>/Switch2' */

  /* Saturate: '<S212>/Saturation1' */
  if (rtb_Init > Drive_Motor_Control_I_UL) {
    rtb_Hypot_g5 = Drive_Motor_Control_I_UL;
  } else if (rtb_Init < Drive_Motor_Control_I_LL) {
    rtb_Hypot_g5 = Drive_Motor_Control_I_LL;
  } else {
    rtb_Hypot_g5 = rtb_Init;
  }

  /* End of Saturate: '<S212>/Saturation1' */

  /* Sum: '<S212>/Add1' */
  rtb_Minus_k_idx_1 = rtb_Add_ia + rtb_Hypot_g5;

  /* Saturate: '<S212>/Saturation2' */
  if (rtb_Minus_k_idx_1 > 1.0) {
    /* Outport: '<Root>/FrontLeft_Drive_DutyCycle' */
    Code_Gen_Model_Y.FrontLeft_Drive_DutyCycle = 1.0;
  } else if (rtb_Minus_k_idx_1 < -1.0) {
    /* Outport: '<Root>/FrontLeft_Drive_DutyCycle' */
    Code_Gen_Model_Y.FrontLeft_Drive_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/FrontLeft_Drive_DutyCycle' */
    Code_Gen_Model_Y.FrontLeft_Drive_DutyCycle = rtb_Minus_k_idx_1;
  }

  /* End of Saturate: '<S212>/Saturation2' */

  /* Sum: '<S228>/Add1' incorporates:
   *  Constant: '<S228>/Constant3'
   *  Constant: '<S228>/Constant4'
   *  Math: '<S228>/Math Function'
   *  Sum: '<S228>/Add2'
   */
  rtb_Switch2_l = rt_modd_snf(rtb_uDLookupTable_f + 3.1415926535897931,
    6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S230>/Sum1' incorporates:
   *  Constant: '<S215>/Constant2'
   *  Product: '<S230>/Product'
   *  Sum: '<S230>/Sum'
   *  UnitDelay: '<S230>/Unit Delay1'
   */
  rtb_Add_ia = ((rtb_Switch2_l - Code_Gen_Model_DW.UnitDelay1_DSTATE_b) *
                Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_b;

  /* Product: '<S215>/Product' incorporates:
   *  Constant: '<S215>/Constant3'
   */
  rtb_Subtract1_ie = rtb_Add_ia * Steering_Motor_Control_D;

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
  rtb_Minus_k_idx_1 = rtb_Subtract1_ie - Code_Gen_Model_DW.UD_DSTATE_b;

  /* Saturate: '<S215>/Saturation' */
  if (rtb_Minus_k_idx_1 > Steering_Motor_Control_D_UL) {
    rtb_Minus_k_idx_1 = Steering_Motor_Control_D_UL;
  } else if (rtb_Minus_k_idx_1 < Steering_Motor_Control_D_LL) {
    rtb_Minus_k_idx_1 = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S215>/Add' incorporates:
   *  Gain: '<S215>/Gain1'
   *  Saturate: '<S215>/Saturation'
   */
  rtb_Add_cc = (Steering_Motor_Control_P * rtb_Switch2_l) + rtb_Minus_k_idx_1;

  /* Sum: '<S215>/Subtract' incorporates:
   *  Constant: '<S215>/Constant'
   */
  rtb_Init = 1.0 - rtb_Add_cc;

  /* Sum: '<S215>/Sum2' incorporates:
   *  Gain: '<S215>/Gain2'
   *  UnitDelay: '<S215>/Unit Delay'
   */
  rtb_Sum2_m = (Steering_Motor_Control_I * rtb_Switch2_l) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_e;

  /* Switch: '<S231>/Switch2' incorporates:
   *  RelationalOperator: '<S231>/LowerRelop1'
   */
  if (!(rtb_Sum2_m > rtb_Init)) {
    /* Switch: '<S231>/Switch' incorporates:
     *  Constant: '<S215>/Constant1'
     *  RelationalOperator: '<S231>/UpperRelop'
     *  Sum: '<S215>/Subtract1'
     */
    if (rtb_Sum2_m < (-1.0 - rtb_Add_cc)) {
      rtb_Init = -1.0 - rtb_Add_cc;
    } else {
      rtb_Init = rtb_Sum2_m;
    }

    /* End of Switch: '<S231>/Switch' */
  }

  /* End of Switch: '<S231>/Switch2' */

  /* Saturate: '<S215>/Saturation1' */
  if (rtb_Init > Steering_Motor_Control_I_UL) {
    rtb_Sum2_m = Steering_Motor_Control_I_UL;
  } else if (rtb_Init < Steering_Motor_Control_I_LL) {
    rtb_Sum2_m = Steering_Motor_Control_I_LL;
  } else {
    rtb_Sum2_m = rtb_Init;
  }

  /* End of Saturate: '<S215>/Saturation1' */

  /* Sum: '<S215>/Add1' */
  rtb_Minus_k_idx_1 = rtb_Add_cc + rtb_Sum2_m;

  /* Saturate: '<S215>/Saturation2' */
  if (rtb_Minus_k_idx_1 > 1.0) {
    /* Outport: '<Root>/FrontLeft_Steer_DutyCycle' */
    Code_Gen_Model_Y.FrontLeft_Steer_DutyCycle = 1.0;
  } else if (rtb_Minus_k_idx_1 < -1.0) {
    /* Outport: '<Root>/FrontLeft_Steer_DutyCycle' */
    Code_Gen_Model_Y.FrontLeft_Steer_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/FrontLeft_Steer_DutyCycle' */
    Code_Gen_Model_Y.FrontLeft_Steer_DutyCycle = rtb_Minus_k_idx_1;
  }

  /* End of Saturate: '<S215>/Saturation2' */

  /* Product: '<S331>/Product1' */
  Code_Gen_Model_B.FR_Desired_Wheel_Speed =
    Code_Gen_Model_B.FR_Desired_Wheel_Speed_in * rtb_Subtract1_ak;

  /* Switch: '<S341>/Switch' */
  if (!Compare_f) {
    /* Switch: '<S341>/Switch' incorporates:
     *  Fcn: '<S342>/x->theta'
     */
    Code_Gen_Model_B.FR_Desired_Module_Angle = rt_atan2d_snf(rtb_Minus_n[1],
      rtb_Minus_n[0]);
  }

  /* End of Switch: '<S341>/Switch' */

  /* Trigonometry: '<S245>/Cos4' incorporates:
   *  Switch: '<S234>/Angle_Switch'
   *  Trigonometry: '<S244>/Cos4'
   */
  rtb_Add_cc = cos(Code_Gen_Model_B.FR_Desired_Module_Angle);

  /* Trigonometry: '<S245>/Sin5' incorporates:
   *  UnaryMinus: '<S243>/Unary Minus'
   */
  rtb_uDLookupTable_f = sin(-Code_Gen_Model_B.FR_Steer_Module_Angle);

  /* Trigonometry: '<S245>/Sin4' incorporates:
   *  Switch: '<S234>/Angle_Switch'
   *  Trigonometry: '<S244>/Sin4'
   */
  rtb_Subtract_jj = sin(Code_Gen_Model_B.FR_Desired_Module_Angle);

  /* Trigonometry: '<S245>/Cos5' incorporates:
   *  UnaryMinus: '<S243>/Unary Minus'
   */
  rtb_Init = cos(-Code_Gen_Model_B.FR_Steer_Module_Angle);

  /* Sum: '<S245>/Subtract1' incorporates:
   *  Product: '<S245>/Product2'
   *  Product: '<S245>/Product3'
   *  Trigonometry: '<S245>/Cos4'
   *  Trigonometry: '<S245>/Sin4'
   */
  rtb_Switch2_l = (rtb_Add_cc * rtb_uDLookupTable_f) + (rtb_Subtract_jj *
    rtb_Init);

  /* Sum: '<S245>/Subtract' incorporates:
   *  Product: '<S245>/Product'
   *  Product: '<S245>/Product1'
   *  Trigonometry: '<S245>/Cos4'
   *  Trigonometry: '<S245>/Sin4'
   */
  rtb_Subtract_pa = (rtb_Add_cc * rtb_Init) - (rtb_Subtract_jj *
    rtb_uDLookupTable_f);

  /* Math: '<S245>/Hypot' */
  rtb_uDLookupTable_f = rt_hypotd_snf(rtb_Subtract_pa, rtb_Switch2_l);

  /* Switch: '<S245>/Switch' incorporates:
   *  Constant: '<S245>/Constant'
   *  Constant: '<S245>/Constant1'
   *  Constant: '<S246>/Constant'
   *  Product: '<S245>/Divide'
   *  Product: '<S245>/Divide1'
   *  RelationalOperator: '<S246>/Compare'
   *  Switch: '<S245>/Switch1'
   */
  if (rtb_uDLookupTable_f > 1.0E-6) {
    rtb_Switch2_l /= rtb_uDLookupTable_f;
    rtb_Init = rtb_Subtract_pa / rtb_uDLookupTable_f;
  } else {
    rtb_Switch2_l = 0.0;
    rtb_Init = 1.0;
  }

  /* End of Switch: '<S245>/Switch' */

  /* Switch: '<S234>/Speed_Switch' incorporates:
   *  Abs: '<S234>/Abs'
   *  Constant: '<S242>/Constant'
   *  RelationalOperator: '<S242>/Compare'
   *  Switch: '<S234>/Angle_Switch'
   *  Trigonometry: '<S244>/Atan1'
   *  Trigonometry: '<S245>/Atan1'
   *  UnaryMinus: '<S234>/Unary Minus'
   */
  if (fabs(rt_atan2d_snf(rtb_Switch2_l, rtb_Init)) > 1.5707963267948966) {
    rtb_Minus_k_idx_1 = -Code_Gen_Model_B.FR_Desired_Wheel_Speed;

    /* Sum: '<S244>/Subtract1' incorporates:
     *  Product: '<S244>/Product2'
     *  Product: '<S244>/Product3'
     *  UnaryMinus: '<S234>/Unary Minus'
     */
    rtb_Subtract_pa = (rtb_Add_cc * Code_Gen_Model_ConstB.Sin5_m) +
      (rtb_Subtract_jj * Code_Gen_Model_ConstB.Cos5_g);

    /* Sum: '<S244>/Subtract' incorporates:
     *  Product: '<S244>/Product'
     *  Product: '<S244>/Product1'
     */
    rtb_Subtract_jj = (rtb_Add_cc * Code_Gen_Model_ConstB.Cos5_g) -
      (rtb_Subtract_jj * Code_Gen_Model_ConstB.Sin5_m);

    /* Math: '<S244>/Hypot' */
    rtb_Add_cc = rt_hypotd_snf(rtb_Subtract_jj, rtb_Subtract_pa);

    /* Switch: '<S244>/Switch1' incorporates:
     *  Constant: '<S244>/Constant'
     *  Constant: '<S244>/Constant1'
     *  Constant: '<S247>/Constant'
     *  Product: '<S244>/Divide'
     *  Product: '<S244>/Divide1'
     *  RelationalOperator: '<S247>/Compare'
     *  Switch: '<S244>/Switch'
     */
    if (rtb_Add_cc > 1.0E-6) {
      rtb_Subtract_jj /= rtb_Add_cc;
      rtb_Add_cc = rtb_Subtract_pa / rtb_Add_cc;
    } else {
      rtb_Subtract_jj = 1.0;
      rtb_Add_cc = 0.0;
    }

    /* End of Switch: '<S244>/Switch1' */
    rtb_uDLookupTable_f = rt_atan2d_snf(rtb_Add_cc, rtb_Subtract_jj);
  } else {
    rtb_Minus_k_idx_1 = Code_Gen_Model_B.FR_Desired_Wheel_Speed;
    rtb_uDLookupTable_f = Code_Gen_Model_B.FR_Desired_Module_Angle;
  }

  /* Product: '<S237>/Product2' incorporates:
   *  Constant: '<S237>/Constant'
   *  Switch: '<S234>/Speed_Switch'
   */
  rtb_Switch2_l = rtb_Minus_k_idx_1 * 1150.4247703785388;

  /* Signum: '<S232>/Sign' */
  if (rtIsNaN(rtb_Switch2_l)) {
    rtb_Minus_k_idx_1 = (rtNaN);
  } else if (rtb_Switch2_l < 0.0) {
    rtb_Minus_k_idx_1 = -1.0;
  } else {
    rtb_Minus_k_idx_1 = (rtb_Switch2_l > 0.0);
  }

  /* Signum: '<S232>/Sign1' incorporates:
   *  Inport: '<Root>/FrontRight_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.FrontRight_Drive_Motor_Speed)) {
    rtb_Switch2_g = (rtNaN);
  } else if (Code_Gen_Model_U.FrontRight_Drive_Motor_Speed < 0.0) {
    rtb_Switch2_g = -1.0;
  } else {
    rtb_Switch2_g = (Code_Gen_Model_U.FrontRight_Drive_Motor_Speed > 0.0);
  }

  /* Sum: '<S235>/Add' incorporates:
   *  Sum: '<S236>/Sum'
   */
  rtb_uDLookupTable_f -= Code_Gen_Model_B.FR_Steer_Module_Angle;

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
   *  Sum: '<S235>/Add'
   *  Sum: '<S248>/Add1'
   *  Sum: '<S248>/Add2'
   */
  rtb_Switch2_l = (((real_T)((rtb_Minus_k_idx_1 == rtb_Switch2_g) || (fabs
    (Code_Gen_Model_U.FrontRight_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_Switch2_l) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_uDLookupTable_f + 1.5707963267948966,
                      3.1415926535897931) - 1.5707963267948966),
     Code_Gen_Model_ConstP.pooled28, Code_Gen_Model_ConstP.pooled27, 1U);

  /* Gain: '<S233>/Gain' */
  rtb_Subtract_pa = Drive_Motor_Control_FF * rtb_Switch2_l;

  /* Sum: '<S233>/Sum' incorporates:
   *  Inport: '<Root>/FrontRight_Drive_Motor_Speed'
   */
  rtb_Switch2_l -= Code_Gen_Model_U.FrontRight_Drive_Motor_Speed;

  /* Sum: '<S240>/Sum1' incorporates:
   *  Constant: '<S233>/Constant2'
   *  Product: '<S240>/Product'
   *  Sum: '<S240>/Sum'
   *  UnitDelay: '<S240>/Unit Delay1'
   */
  rtb_Add_cc = ((rtb_Switch2_l - Code_Gen_Model_DW.UnitDelay1_DSTATE_b1) *
                Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_b1;

  /* Product: '<S233>/Product' incorporates:
   *  Constant: '<S233>/Constant3'
   */
  rtb_Subtract_jj = rtb_Add_cc * Drive_Motor_Control_D;

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
  rtb_Minus_k_idx_1 = rtb_Subtract_jj - Code_Gen_Model_DW.UD_DSTATE_e;

  /* Saturate: '<S233>/Saturation' */
  if (rtb_Minus_k_idx_1 > Drive_Motor_Control_D_UL) {
    rtb_Minus_k_idx_1 = Drive_Motor_Control_D_UL;
  } else if (rtb_Minus_k_idx_1 < Drive_Motor_Control_D_LL) {
    rtb_Minus_k_idx_1 = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S233>/Add' incorporates:
   *  Gain: '<S233>/Gain1'
   *  Saturate: '<S233>/Saturation'
   */
  rtb_Add_l = ((Drive_Motor_Control_P * rtb_Switch2_l) + rtb_Subtract_pa) +
    rtb_Minus_k_idx_1;

  /* Sum: '<S233>/Subtract' incorporates:
   *  Constant: '<S233>/Constant'
   */
  rtb_Init = 1.0 - rtb_Add_l;

  /* Sum: '<S233>/Sum2' incorporates:
   *  Gain: '<S233>/Gain2'
   *  UnitDelay: '<S233>/Unit Delay'
   */
  rtb_Switch2_l = (Drive_Motor_Control_I * rtb_Switch2_l) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_em;

  /* Switch: '<S241>/Switch2' incorporates:
   *  RelationalOperator: '<S241>/LowerRelop1'
   */
  if (!(rtb_Switch2_l > rtb_Init)) {
    /* Switch: '<S241>/Switch' incorporates:
     *  Constant: '<S233>/Constant1'
     *  RelationalOperator: '<S241>/UpperRelop'
     *  Sum: '<S233>/Subtract1'
     */
    if (rtb_Switch2_l < (-1.0 - rtb_Add_l)) {
      rtb_Init = -1.0 - rtb_Add_l;
    } else {
      rtb_Init = rtb_Switch2_l;
    }

    /* End of Switch: '<S241>/Switch' */
  }

  /* End of Switch: '<S241>/Switch2' */

  /* Saturate: '<S233>/Saturation1' */
  if (rtb_Init > Drive_Motor_Control_I_UL) {
    rtb_Subtract_pa = Drive_Motor_Control_I_UL;
  } else if (rtb_Init < Drive_Motor_Control_I_LL) {
    rtb_Subtract_pa = Drive_Motor_Control_I_LL;
  } else {
    rtb_Subtract_pa = rtb_Init;
  }

  /* End of Saturate: '<S233>/Saturation1' */

  /* Sum: '<S233>/Add1' */
  rtb_Minus_k_idx_1 = rtb_Add_l + rtb_Subtract_pa;

  /* Saturate: '<S233>/Saturation2' */
  if (rtb_Minus_k_idx_1 > 1.0) {
    /* Outport: '<Root>/FrontRight_Drive_DutyCycle' */
    Code_Gen_Model_Y.FrontRight_Drive_DutyCycle = 1.0;
  } else if (rtb_Minus_k_idx_1 < -1.0) {
    /* Outport: '<Root>/FrontRight_Drive_DutyCycle' */
    Code_Gen_Model_Y.FrontRight_Drive_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/FrontRight_Drive_DutyCycle' */
    Code_Gen_Model_Y.FrontRight_Drive_DutyCycle = rtb_Minus_k_idx_1;
  }

  /* End of Saturate: '<S233>/Saturation2' */

  /* Sum: '<S249>/Add1' incorporates:
   *  Constant: '<S249>/Constant3'
   *  Constant: '<S249>/Constant4'
   *  Math: '<S249>/Math Function'
   *  Sum: '<S249>/Add2'
   */
  rtb_Switch2_l = rt_modd_snf(rtb_uDLookupTable_f + 3.1415926535897931,
    6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S251>/Sum1' incorporates:
   *  Constant: '<S236>/Constant2'
   *  Product: '<S251>/Product'
   *  Sum: '<S251>/Sum'
   *  UnitDelay: '<S251>/Unit Delay1'
   */
  rtb_uDLookupTable_f = ((rtb_Switch2_l - Code_Gen_Model_DW.UnitDelay1_DSTATE_n)
    * Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_n;

  /* Product: '<S236>/Product' incorporates:
   *  Constant: '<S236>/Constant3'
   */
  rtb_Add_l = rtb_uDLookupTable_f * Steering_Motor_Control_D;

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
  rtb_Minus_k_idx_1 = rtb_Add_l - Code_Gen_Model_DW.UD_DSTATE_i1;

  /* Saturate: '<S236>/Saturation' */
  if (rtb_Minus_k_idx_1 > Steering_Motor_Control_D_UL) {
    rtb_Minus_k_idx_1 = Steering_Motor_Control_D_UL;
  } else if (rtb_Minus_k_idx_1 < Steering_Motor_Control_D_LL) {
    rtb_Minus_k_idx_1 = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S236>/Add' incorporates:
   *  Gain: '<S236>/Gain1'
   *  Saturate: '<S236>/Saturation'
   */
  rtb_Add_at = (Steering_Motor_Control_P * rtb_Switch2_l) + rtb_Minus_k_idx_1;

  /* Sum: '<S236>/Subtract' incorporates:
   *  Constant: '<S236>/Constant'
   */
  rtb_Init = 1.0 - rtb_Add_at;

  /* Sum: '<S236>/Sum2' incorporates:
   *  Gain: '<S236>/Gain2'
   *  UnitDelay: '<S236>/Unit Delay'
   */
  rtb_Switch2_l = (Steering_Motor_Control_I * rtb_Switch2_l) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_dt;

  /* Switch: '<S252>/Switch2' incorporates:
   *  RelationalOperator: '<S252>/LowerRelop1'
   */
  if (!(rtb_Switch2_l > rtb_Init)) {
    /* Switch: '<S252>/Switch' incorporates:
     *  Constant: '<S236>/Constant1'
     *  RelationalOperator: '<S252>/UpperRelop'
     *  Sum: '<S236>/Subtract1'
     */
    if (rtb_Switch2_l < (-1.0 - rtb_Add_at)) {
      rtb_Init = -1.0 - rtb_Add_at;
    } else {
      rtb_Init = rtb_Switch2_l;
    }

    /* End of Switch: '<S252>/Switch' */
  }

  /* End of Switch: '<S252>/Switch2' */

  /* Saturate: '<S236>/Saturation1' */
  if (rtb_Init > Steering_Motor_Control_I_UL) {
    rtb_Subtract1_l2j = Steering_Motor_Control_I_UL;
  } else if (rtb_Init < Steering_Motor_Control_I_LL) {
    rtb_Subtract1_l2j = Steering_Motor_Control_I_LL;
  } else {
    rtb_Subtract1_l2j = rtb_Init;
  }

  /* End of Saturate: '<S236>/Saturation1' */

  /* Sum: '<S236>/Add1' */
  rtb_Minus_k_idx_1 = rtb_Add_at + rtb_Subtract1_l2j;

  /* Saturate: '<S236>/Saturation2' */
  if (rtb_Minus_k_idx_1 > 1.0) {
    /* Outport: '<Root>/FrontRight_Steer_DutyCycle' */
    Code_Gen_Model_Y.FrontRight_Steer_DutyCycle = 1.0;
  } else if (rtb_Minus_k_idx_1 < -1.0) {
    /* Outport: '<Root>/FrontRight_Steer_DutyCycle' */
    Code_Gen_Model_Y.FrontRight_Steer_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/FrontRight_Steer_DutyCycle' */
    Code_Gen_Model_Y.FrontRight_Steer_DutyCycle = rtb_Minus_k_idx_1;
  }

  /* End of Saturate: '<S236>/Saturation2' */

  /* Product: '<S331>/Product2' */
  Code_Gen_Model_B.BL_Desired_Wheel_Speed =
    Code_Gen_Model_B.BL_Desired_Wheel_Speed_in * rtb_Subtract1_ak;

  /* Switch: '<S346>/Switch' */
  if (!rtb_Is_Absolute_Translation_g) {
    /* Switch: '<S346>/Switch' incorporates:
     *  Fcn: '<S347>/x->theta'
     */
    Code_Gen_Model_B.BL_Desired_Module_Angle = rt_atan2d_snf(rtb_Add2_k_idx_1,
      rtb_Add2_k_idx_0);
  }

  /* End of Switch: '<S346>/Switch' */

  /* Trigonometry: '<S266>/Cos4' incorporates:
   *  Switch: '<S255>/Angle_Switch'
   *  Trigonometry: '<S265>/Cos4'
   */
  rtb_Add_at = cos(Code_Gen_Model_B.BL_Desired_Module_Angle);

  /* Trigonometry: '<S266>/Sin5' incorporates:
   *  UnaryMinus: '<S264>/Unary Minus'
   */
  rtb_Init = sin(-Code_Gen_Model_B.BL_Steer_Module_Angle);

  /* Trigonometry: '<S266>/Sin4' incorporates:
   *  Switch: '<S255>/Angle_Switch'
   *  Trigonometry: '<S265>/Sin4'
   */
  rtb_Add2_k_idx_0 = sin(Code_Gen_Model_B.BL_Desired_Module_Angle);

  /* Trigonometry: '<S266>/Cos5' incorporates:
   *  UnaryMinus: '<S264>/Unary Minus'
   */
  rtb_Switch2_l = cos(-Code_Gen_Model_B.BL_Steer_Module_Angle);

  /* Sum: '<S266>/Subtract1' incorporates:
   *  Product: '<S266>/Product2'
   *  Product: '<S266>/Product3'
   *  Trigonometry: '<S266>/Cos4'
   *  Trigonometry: '<S266>/Sin4'
   */
  rtb_Subtract1_ak = (rtb_Add_at * rtb_Init) + (rtb_Add2_k_idx_0 * rtb_Switch2_l);

  /* Sum: '<S266>/Subtract' incorporates:
   *  Product: '<S266>/Product'
   *  Product: '<S266>/Product1'
   *  Trigonometry: '<S266>/Cos4'
   *  Trigonometry: '<S266>/Sin4'
   */
  rtb_Switch2_l = (rtb_Add_at * rtb_Switch2_l) - (rtb_Add2_k_idx_0 * rtb_Init);

  /* Math: '<S266>/Hypot' */
  rtb_Init = rt_hypotd_snf(rtb_Switch2_l, rtb_Subtract1_ak);

  /* Switch: '<S266>/Switch' incorporates:
   *  Constant: '<S266>/Constant'
   *  Constant: '<S266>/Constant1'
   *  Constant: '<S267>/Constant'
   *  Product: '<S266>/Divide'
   *  Product: '<S266>/Divide1'
   *  RelationalOperator: '<S267>/Compare'
   *  Switch: '<S266>/Switch1'
   */
  if (rtb_Init > 1.0E-6) {
    rtb_Subtract1_ak /= rtb_Init;
    rtb_Switch2_l /= rtb_Init;
  } else {
    rtb_Subtract1_ak = 0.0;
    rtb_Switch2_l = 1.0;
  }

  /* End of Switch: '<S266>/Switch' */

  /* Switch: '<S255>/Speed_Switch' incorporates:
   *  Abs: '<S255>/Abs'
   *  Constant: '<S263>/Constant'
   *  RelationalOperator: '<S263>/Compare'
   *  Switch: '<S255>/Angle_Switch'
   *  Trigonometry: '<S265>/Atan1'
   *  Trigonometry: '<S266>/Atan1'
   *  UnaryMinus: '<S255>/Unary Minus'
   */
  if (fabs(rt_atan2d_snf(rtb_Subtract1_ak, rtb_Switch2_l)) > 1.5707963267948966)
  {
    rtb_Minus_k_idx_1 = -Code_Gen_Model_B.BL_Desired_Wheel_Speed;

    /* Sum: '<S265>/Subtract1' incorporates:
     *  Product: '<S265>/Product2'
     *  Product: '<S265>/Product3'
     *  UnaryMinus: '<S255>/Unary Minus'
     */
    rtb_Switch2_l = (rtb_Add_at * Code_Gen_Model_ConstB.Sin5_e) +
      (rtb_Add2_k_idx_0 * Code_Gen_Model_ConstB.Cos5_i);

    /* Sum: '<S265>/Subtract' incorporates:
     *  Product: '<S265>/Product'
     *  Product: '<S265>/Product1'
     */
    rtb_Add_at = (rtb_Add_at * Code_Gen_Model_ConstB.Cos5_i) - (rtb_Add2_k_idx_0
      * Code_Gen_Model_ConstB.Sin5_e);

    /* Math: '<S265>/Hypot' */
    rtb_Init = rt_hypotd_snf(rtb_Add_at, rtb_Switch2_l);

    /* Switch: '<S265>/Switch1' incorporates:
     *  Constant: '<S265>/Constant'
     *  Constant: '<S265>/Constant1'
     *  Constant: '<S268>/Constant'
     *  Product: '<S265>/Divide'
     *  Product: '<S265>/Divide1'
     *  RelationalOperator: '<S268>/Compare'
     *  Switch: '<S265>/Switch'
     */
    if (rtb_Init > 1.0E-6) {
      rtb_Add_at /= rtb_Init;
      rtb_Switch2_l /= rtb_Init;
    } else {
      rtb_Add_at = 1.0;
      rtb_Switch2_l = 0.0;
    }

    /* End of Switch: '<S265>/Switch1' */
    rtb_Init = rt_atan2d_snf(rtb_Switch2_l, rtb_Add_at);
  } else {
    rtb_Minus_k_idx_1 = Code_Gen_Model_B.BL_Desired_Wheel_Speed;
    rtb_Init = Code_Gen_Model_B.BL_Desired_Module_Angle;
  }

  /* Product: '<S258>/Product2' incorporates:
   *  Constant: '<S258>/Constant'
   *  Switch: '<S255>/Speed_Switch'
   */
  rtb_Subtract1_ak = rtb_Minus_k_idx_1 * 1150.4247703785388;

  /* Signum: '<S253>/Sign' */
  if (rtIsNaN(rtb_Subtract1_ak)) {
    rtb_Minus_k_idx_1 = (rtNaN);
  } else if (rtb_Subtract1_ak < 0.0) {
    rtb_Minus_k_idx_1 = -1.0;
  } else {
    rtb_Minus_k_idx_1 = (rtb_Subtract1_ak > 0.0);
  }

  /* Signum: '<S253>/Sign1' incorporates:
   *  Inport: '<Root>/BackLeft_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.BackLeft_Drive_Motor_Speed)) {
    rtb_Switch2_g = (rtNaN);
  } else if (Code_Gen_Model_U.BackLeft_Drive_Motor_Speed < 0.0) {
    rtb_Switch2_g = -1.0;
  } else {
    rtb_Switch2_g = (Code_Gen_Model_U.BackLeft_Drive_Motor_Speed > 0.0);
  }

  /* Sum: '<S256>/Add' incorporates:
   *  Sum: '<S257>/Sum'
   */
  rtb_Init -= Code_Gen_Model_B.BL_Steer_Module_Angle;

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
   *  Sum: '<S256>/Add'
   *  Sum: '<S269>/Add1'
   *  Sum: '<S269>/Add2'
   */
  rtb_Subtract1_ak = (((real_T)((rtb_Minus_k_idx_1 == rtb_Switch2_g) || (fabs
    (Code_Gen_Model_U.BackLeft_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_Subtract1_ak) *
    look1_binlcpw(fabs(rt_modd_snf(rtb_Init + 1.5707963267948966,
    3.1415926535897931) - 1.5707963267948966), Code_Gen_Model_ConstP.pooled28,
                  Code_Gen_Model_ConstP.pooled27, 1U);

  /* Gain: '<S254>/Gain' */
  rtb_Switch2_l = Drive_Motor_Control_FF * rtb_Subtract1_ak;

  /* Sum: '<S254>/Sum' incorporates:
   *  Inport: '<Root>/BackLeft_Drive_Motor_Speed'
   */
  rtb_Subtract1_ak -= Code_Gen_Model_U.BackLeft_Drive_Motor_Speed;

  /* Sum: '<S261>/Sum1' incorporates:
   *  Constant: '<S254>/Constant2'
   *  Product: '<S261>/Product'
   *  Sum: '<S261>/Sum'
   *  UnitDelay: '<S261>/Unit Delay1'
   */
  rtb_Add_at = ((rtb_Subtract1_ak - Code_Gen_Model_DW.UnitDelay1_DSTATE_f) *
                Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_f;

  /* Product: '<S254>/Product' incorporates:
   *  Constant: '<S254>/Constant3'
   */
  rtb_Add2_k_idx_0 = rtb_Add_at * Drive_Motor_Control_D;

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
  rtb_Minus_k_idx_1 = rtb_Add2_k_idx_0 - Code_Gen_Model_DW.UD_DSTATE_lh;

  /* Saturate: '<S254>/Saturation' */
  if (rtb_Minus_k_idx_1 > Drive_Motor_Control_D_UL) {
    rtb_Minus_k_idx_1 = Drive_Motor_Control_D_UL;
  } else if (rtb_Minus_k_idx_1 < Drive_Motor_Control_D_LL) {
    rtb_Minus_k_idx_1 = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S254>/Add' incorporates:
   *  Gain: '<S254>/Gain1'
   *  Saturate: '<S254>/Saturation'
   */
  rtb_Add2_k_idx_1 = ((Drive_Motor_Control_P * rtb_Subtract1_ak) + rtb_Switch2_l)
    + rtb_Minus_k_idx_1;

  /* Sum: '<S254>/Subtract' incorporates:
   *  Constant: '<S254>/Constant'
   */
  rtb_Switch2_l = 1.0 - rtb_Add2_k_idx_1;

  /* Sum: '<S254>/Sum2' incorporates:
   *  Gain: '<S254>/Gain2'
   *  UnitDelay: '<S254>/Unit Delay'
   */
  rtb_Subtract1_ak = (Drive_Motor_Control_I * rtb_Subtract1_ak) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_gp;

  /* Switch: '<S262>/Switch2' incorporates:
   *  Constant: '<S254>/Constant'
   *  RelationalOperator: '<S262>/LowerRelop1'
   *  Sum: '<S254>/Subtract'
   */
  if (!(rtb_Subtract1_ak > (1.0 - rtb_Add2_k_idx_1))) {
    /* Sum: '<S254>/Subtract1' incorporates:
     *  Constant: '<S254>/Constant1'
     */
    rtb_Switch2_l = -1.0 - rtb_Add2_k_idx_1;

    /* Switch: '<S262>/Switch' incorporates:
     *  Constant: '<S254>/Constant1'
     *  RelationalOperator: '<S262>/UpperRelop'
     *  Sum: '<S254>/Subtract1'
     */
    if (!(rtb_Subtract1_ak < (-1.0 - rtb_Add2_k_idx_1))) {
      rtb_Switch2_l = rtb_Subtract1_ak;
    }

    /* End of Switch: '<S262>/Switch' */
  }

  /* End of Switch: '<S262>/Switch2' */

  /* Saturate: '<S254>/Saturation1' */
  if (rtb_Switch2_l > Drive_Motor_Control_I_UL) {
    rtb_Integral_h = Drive_Motor_Control_I_UL;
  } else if (rtb_Switch2_l < Drive_Motor_Control_I_LL) {
    rtb_Integral_h = Drive_Motor_Control_I_LL;
  } else {
    rtb_Integral_h = rtb_Switch2_l;
  }

  /* End of Saturate: '<S254>/Saturation1' */

  /* Sum: '<S254>/Add1' */
  rtb_Minus_k_idx_1 = rtb_Add2_k_idx_1 + rtb_Integral_h;

  /* Saturate: '<S254>/Saturation2' */
  if (rtb_Minus_k_idx_1 > 1.0) {
    /* Outport: '<Root>/BackLeft_Drive_DutyCycle' */
    Code_Gen_Model_Y.BackLeft_Drive_DutyCycle = 1.0;
  } else if (rtb_Minus_k_idx_1 < -1.0) {
    /* Outport: '<Root>/BackLeft_Drive_DutyCycle' */
    Code_Gen_Model_Y.BackLeft_Drive_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/BackLeft_Drive_DutyCycle' */
    Code_Gen_Model_Y.BackLeft_Drive_DutyCycle = rtb_Minus_k_idx_1;
  }

  /* End of Saturate: '<S254>/Saturation2' */

  /* Sum: '<S270>/Add1' incorporates:
   *  Constant: '<S270>/Constant3'
   *  Constant: '<S270>/Constant4'
   *  Math: '<S270>/Math Function'
   *  Sum: '<S270>/Add2'
   */
  rtb_Subtract1_ak = rt_modd_snf(rtb_Init + 3.1415926535897931,
    6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S272>/Sum1' incorporates:
   *  Constant: '<S257>/Constant2'
   *  Product: '<S272>/Product'
   *  Sum: '<S272>/Sum'
   *  UnitDelay: '<S272>/Unit Delay1'
   */
  rtb_Add2_k_idx_1 = ((rtb_Subtract1_ak - Code_Gen_Model_DW.UnitDelay1_DSTATE_nw)
                      * Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_nw;

  /* Product: '<S257>/Product' incorporates:
   *  Constant: '<S257>/Constant3'
   */
  rtb_Product_lf = rtb_Add2_k_idx_1 * Steering_Motor_Control_D;

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
  rtb_Minus_k_idx_1 = rtb_Product_lf - Code_Gen_Model_DW.UD_DSTATE_k;

  /* Saturate: '<S257>/Saturation' */
  if (rtb_Minus_k_idx_1 > Steering_Motor_Control_D_UL) {
    rtb_Minus_k_idx_1 = Steering_Motor_Control_D_UL;
  } else if (rtb_Minus_k_idx_1 < Steering_Motor_Control_D_LL) {
    rtb_Minus_k_idx_1 = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S257>/Add' incorporates:
   *  Gain: '<S257>/Gain1'
   *  Saturate: '<S257>/Saturation'
   */
  rtb_Init = (Steering_Motor_Control_P * rtb_Subtract1_ak) + rtb_Minus_k_idx_1;

  /* Sum: '<S257>/Subtract' incorporates:
   *  Constant: '<S257>/Constant'
   */
  rtb_Switch2_l = 1.0 - rtb_Init;

  /* Sum: '<S257>/Sum2' incorporates:
   *  Gain: '<S257>/Gain2'
   *  UnitDelay: '<S257>/Unit Delay'
   */
  rtb_Subtract1_ak = (Steering_Motor_Control_I * rtb_Subtract1_ak) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_k;

  /* Switch: '<S273>/Switch2' incorporates:
   *  Constant: '<S257>/Constant'
   *  RelationalOperator: '<S273>/LowerRelop1'
   *  Sum: '<S257>/Subtract'
   */
  if (!(rtb_Subtract1_ak > (1.0 - rtb_Init))) {
    /* Sum: '<S257>/Subtract1' incorporates:
     *  Constant: '<S257>/Constant1'
     */
    rtb_Switch2_l = -1.0 - rtb_Init;

    /* Switch: '<S273>/Switch' incorporates:
     *  Constant: '<S257>/Constant1'
     *  RelationalOperator: '<S273>/UpperRelop'
     *  Sum: '<S257>/Subtract1'
     */
    if (!(rtb_Subtract1_ak < (-1.0 - rtb_Init))) {
      rtb_Switch2_l = rtb_Subtract1_ak;
    }

    /* End of Switch: '<S273>/Switch' */
  }

  /* End of Switch: '<S273>/Switch2' */

  /* Saturate: '<S257>/Saturation1' */
  if (rtb_Switch2_l > Steering_Motor_Control_I_UL) {
    rtb_Integral_ei = Steering_Motor_Control_I_UL;
  } else if (rtb_Switch2_l < Steering_Motor_Control_I_LL) {
    rtb_Integral_ei = Steering_Motor_Control_I_LL;
  } else {
    rtb_Integral_ei = rtb_Switch2_l;
  }

  /* End of Saturate: '<S257>/Saturation1' */

  /* Sum: '<S257>/Add1' */
  rtb_Minus_k_idx_1 = rtb_Init + rtb_Integral_ei;

  /* Saturate: '<S257>/Saturation2' */
  if (rtb_Minus_k_idx_1 > 1.0) {
    /* Outport: '<Root>/BackLeft_Steer_DutyCycle' */
    Code_Gen_Model_Y.BackLeft_Steer_DutyCycle = 1.0;
  } else if (rtb_Minus_k_idx_1 < -1.0) {
    /* Outport: '<Root>/BackLeft_Steer_DutyCycle' */
    Code_Gen_Model_Y.BackLeft_Steer_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/BackLeft_Steer_DutyCycle' */
    Code_Gen_Model_Y.BackLeft_Steer_DutyCycle = rtb_Minus_k_idx_1;
  }

  /* End of Saturate: '<S257>/Saturation2' */

  /* MinMax: '<S9>/Max' incorporates:
   *  Bias: '<S1>/Add Constant'
   *  Lookup_n-D: '<S9>/Range of Motion Protection Limit'
   *  Lookup_n-D: '<S9>/Range of Motion Protection Limit1'
   *  Merge: '<S15>/Merge13'
   */
  rtb_Subtract1_ak = fmax(fmax(Code_Gen_Model_B.Elevator_Height_Desired,
    look1_binlcpw(Code_Gen_Model_B.Coral_Arm_Angle_Desired,
                  Code_Gen_Model_ConstP.pooled30, Code_Gen_Model_ConstP.pooled29,
                  95U)), look1_binlcpw(Code_Gen_Model_B.Coral_Arm_Angle_Measured,
    Code_Gen_Model_ConstP.pooled30, Code_Gen_Model_ConstP.pooled29, 95U));

  /* Switch: '<S9>/Switch3' incorporates:
   *  Abs: '<S9>/Abs1'
   *  Constant: '<S40>/Constant'
   *  Constant: '<S9>/Constant'
   *  Constant: '<S9>/Constant6'
   *  Logic: '<S9>/AND'
   *  RelationalOperator: '<S40>/Compare'
   *  RelationalOperator: '<S9>/Relational Operator'
   *  UnitDelay: '<S9>/Unit Delay'
   */
  if ((Code_Gen_Model_B.Elevator_Height_Desired < rtb_Subtract1_ak) && (fabs
       (Code_Gen_Model_B.Elevator_Error) <= Elevator_Height_Error_Threshold)) {
    rtb_Minus_k_idx_1 = Elevator_Error_Increase;
  } else {
    rtb_Minus_k_idx_1 = 0.0;
  }

  /* Sum: '<S9>/Add' incorporates:
   *  Sum: '<S9>/Subtract'
   *  Switch: '<S9>/Switch3'
   */
  Code_Gen_Model_B.Elevator_Error = (rtb_Subtract1_ak -
    Code_Gen_Model_B.Elevator_Height_Measured) + rtb_Minus_k_idx_1;

  /* Logic: '<S9>/Logical Operator3' incorporates:
   *  Abs: '<S9>/Abs'
   *  Constant: '<S39>/Constant'
   *  Constant: '<S41>/Constant'
   *  Logic: '<S9>/Logical Operator1'
   *  RelationalOperator: '<S39>/Compare'
   *  RelationalOperator: '<S41>/Compare'
   */
  Compare = (Compare || ((Code_Gen_Model_B.Elevator_Height_Desired == 0.0) &&
              (fabs(Code_Gen_Model_B.Elevator_Error) <=
               Elevator_Error_Bottom_Disable)));

  /* Gain: '<S43>/Gain1' */
  Code_Gen_Model_B.Elevator_Proportional = Elevator_Gain_Prop *
    Code_Gen_Model_B.Elevator_Error;

  /* Logic: '<S9>/Logical Operator' incorporates:
   *  Logic: '<S9>/Logical Operator2'
   *  Logic: '<S9>/NOT'
   *  Logic: '<S9>/NOT2'
   *  Logic: '<S9>/OR'
   */
  rtb_Compare_oq = (((!Compare) && (Code_Gen_Model_B.Reefscape_Motors_Enable)) &&
                    ((!rtb_Compare_pd) && (!rtb_Compare)));

  /* Switch: '<S43>/Switch' */
  if (rtb_Compare_oq) {
    /* Switch: '<S43>/Switch1' incorporates:
     *  UnitDelay: '<S52>/Delay Input1'
     *
     * Block description for '<S52>/Delay Input1':
     *
     *  Store in Global RAM
     */
    if (!Code_Gen_Model_DW.DelayInput1_DSTATE_be) {
      /* Switch: '<S43>/Switch' incorporates:
       *  Constant: '<S43>/Constant3'
       */
      Code_Gen_Model_B.Elevator_Integral = Elevator_Int_IC;
    } else {
      /* Sum: '<S43>/Sum2' incorporates:
       *  Gain: '<S43>/Gain2'
       *  UnitDelay: '<S43>/Unit Delay'
       */
      rtb_Subtract1_ak = (Elevator_Gain_Int * Code_Gen_Model_B.Elevator_Error) +
        Code_Gen_Model_B.Elevator_Integral;

      /* Sum: '<S43>/Subtract' incorporates:
       *  Constant: '<S43>/Constant'
       */
      rtb_Switch2_l = Elevator_Total_UL - Code_Gen_Model_B.Elevator_Proportional;

      /* Switch: '<S53>/Switch2' incorporates:
       *  RelationalOperator: '<S53>/LowerRelop1'
       */
      if (!(rtb_Subtract1_ak > rtb_Switch2_l)) {
        /* Sum: '<S43>/Subtract1' incorporates:
         *  Constant: '<S43>/Constant1'
         */
        rtb_Switch2_l = Elevator_Total_LL -
          Code_Gen_Model_B.Elevator_Proportional;

        /* Switch: '<S53>/Switch' incorporates:
         *  RelationalOperator: '<S53>/UpperRelop'
         */
        if (!(rtb_Subtract1_ak < rtb_Switch2_l)) {
          rtb_Switch2_l = rtb_Subtract1_ak;
        }

        /* End of Switch: '<S53>/Switch' */
      }

      /* End of Switch: '<S53>/Switch2' */

      /* Saturate: '<S43>/Saturation1' */
      if (rtb_Switch2_l > Elevator_Int_UL) {
        /* Switch: '<S43>/Switch' */
        Code_Gen_Model_B.Elevator_Integral = Elevator_Int_UL;
      } else if (rtb_Switch2_l < Elevator_Int_LL) {
        /* Switch: '<S43>/Switch' */
        Code_Gen_Model_B.Elevator_Integral = Elevator_Int_LL;
      } else {
        /* Switch: '<S43>/Switch' */
        Code_Gen_Model_B.Elevator_Integral = rtb_Switch2_l;
      }

      /* End of Saturate: '<S43>/Saturation1' */
    }

    /* End of Switch: '<S43>/Switch1' */
  } else {
    /* Switch: '<S43>/Switch' incorporates:
     *  Constant: '<S43>/Constant2'
     */
    Code_Gen_Model_B.Elevator_Integral = 0.0;
  }

  /* End of Switch: '<S43>/Switch' */

  /* Switch: '<S9>/Switch2' incorporates:
   *  Constant: '<S9>/Constant5'
   */
  if (Code_Gen_Model_B.Reefscape_Motors_Enable) {
    /* Switch: '<S9>/Switch4' incorporates:
     *  Constant: '<S9>/Constant7'
     */
    if (Compare) {
      rtb_Subtract1_ak = Elevator_Bottom_DC;
    } else {
      /* Sum: '<S43>/Add1' */
      rtb_Switch2_l = Code_Gen_Model_B.Elevator_Proportional +
        Code_Gen_Model_B.Elevator_Integral;

      /* Saturate: '<S43>/Saturation2' */
      if (rtb_Switch2_l > Elevator_Total_UL) {
        rtb_Switch2_l = Elevator_Total_UL;
      } else if (rtb_Switch2_l < Elevator_Total_LL) {
        rtb_Switch2_l = Elevator_Total_LL;
      }

      /* End of Saturate: '<S43>/Saturation2' */

      /* Switch: '<S9>/Switch1' incorporates:
       *  Constant: '<S9>/Constant1'
       *  Constant: '<S9>/Constant2'
       */
      if (rtb_Compare_pd) {
        rtb_Subtract1_ak = Elevator_Hold_at_Top_DC;
      } else {
        rtb_Subtract1_ak = 1.0;
      }

      /* End of Switch: '<S9>/Switch1' */

      /* Switch: '<S44>/Switch2' incorporates:
       *  RelationalOperator: '<S44>/LowerRelop1'
       */
      if (!(rtb_Switch2_l > rtb_Subtract1_ak)) {
        /* Switch: '<S9>/Switch' incorporates:
         *  Constant: '<S9>/Constant3'
         *  Constant: '<S9>/Constant4'
         */
        if (rtb_Compare) {
          rtb_Subtract1_ak = 0.0;
        } else {
          rtb_Subtract1_ak = -1.0;
        }

        /* End of Switch: '<S9>/Switch' */

        /* Switch: '<S44>/Switch' incorporates:
         *  RelationalOperator: '<S44>/UpperRelop'
         */
        if (!(rtb_Switch2_l < rtb_Subtract1_ak)) {
          rtb_Subtract1_ak = rtb_Switch2_l;
        }

        /* End of Switch: '<S44>/Switch' */
      }

      /* End of Switch: '<S44>/Switch2' */
    }

    /* End of Switch: '<S9>/Switch4' */
  } else {
    rtb_Subtract1_ak = 0.0;
  }

  /* End of Switch: '<S9>/Switch2' */

  /* UnitDelay: '<S42>/Unit Delay' */
  rtb_Switch2_l = Code_Gen_Model_DW.UnitDelay_DSTATE_mh;

  /* Abs: '<S42>/Abs' incorporates:
   *  Sum: '<S42>/Subtract'
   */
  rtb_Init = fabs(rtb_Switch2_l - rtb_Subtract1_ak);

  /* Signum: '<S42>/Sign2' */
  if (rtIsNaN(rtb_Switch2_l)) {
    rtb_Minus_k_idx_1 = (rtNaN);
  } else if (rtb_Switch2_l < 0.0) {
    rtb_Minus_k_idx_1 = -1.0;
  } else {
    rtb_Minus_k_idx_1 = (rtb_Switch2_l > 0.0);
  }

  /* Signum: '<S42>/Sign1' */
  if (rtIsNaN(rtb_Subtract1_ak)) {
    rtb_Switch2_g = (rtNaN);
  } else if (rtb_Subtract1_ak < 0.0) {
    rtb_Switch2_g = -1.0;
  } else {
    rtb_Switch2_g = (rtb_Subtract1_ak > 0.0);
  }

  /* Product: '<S42>/Product1' incorporates:
   *  Signum: '<S42>/Sign1'
   *  Signum: '<S42>/Sign2'
   */
  rtb_Minus_k_idx_1 *= rtb_Switch2_g;
  if (rtIsNaN(rtb_Minus_k_idx_1)) {
    i = 0;
  } else {
    i = (int32_T)fmod(rtb_Minus_k_idx_1, 256.0);
  }

  /* Switch: '<S42>/Switch' incorporates:
   *  Constant: '<S42>/Constant'
   *  Constant: '<S45>/Constant'
   *  Constant: '<S46>/Constant'
   *  Logic: '<S42>/or'
   *  Product: '<S42>/Product1'
   *  RelationalOperator: '<S45>/Compare'
   *  RelationalOperator: '<S46>/Compare'
   */
  if ((!(rtb_Switch2_l == 0.0)) && (((i < 0) ? ((int32_T)((int8_T)(-((int8_T)
            ((uint8_T)(-((real_T)i))))))) : i) <= 0)) {
    rtb_Subtract1_ak = 0.0;
  }

  /* End of Switch: '<S42>/Switch' */

  /* RelationalOperator: '<S47>/Compare' incorporates:
   *  Constant: '<S47>/Constant'
   */
  Compare = (rtb_Subtract1_ak == 0.0);

  /* Switch: '<S42>/Switch5' */
  if (Compare) {
    /* SignalConversion generated from: '<S42>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S42>/Constant4'
     *  Constant: '<S42>/Constant6'
     */
    rtb_Reshapey[0] = 1.0;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S42>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S42>/Constant2'
     *  Constant: '<S42>/Constant5'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = 0.01;

    /* S-Function (sfix_look1_dyn): '<S42>/Lookup Table Dynamic' */
    /* Dynamic Look-Up Table Block: '<S42>/Lookup Table Dynamic'
     * Input0  Data Type:  Floating Point real_T
     * Input1  Data Type:  Floating Point real_T
     * Input2  Data Type:  Floating Point real_T
     * Output0 Data Type:  Floating Point real_T
     * Lookup Method: Linear_Endpoint
     *
     */
    LookUp_real_T_real_T( &(rtb_LookupTableDynamic_jw), &rtb_Reshapey[0],
                         rtb_Init, &rtb_Minus_n[0], 1U);
    rtb_Switch5_a = rtb_LookupTableDynamic_jw;
  } else {
    /* SignalConversion generated from: '<S42>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S42>/Constant10'
     *  Constant: '<S42>/Constant8'
     */
    rtb_Reshapey[0] = 1.0;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S42>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S42>/Constant7'
     *  Constant: '<S42>/Constant9'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = 0.01;

    /* S-Function (sfix_look1_dyn): '<S42>/Lookup Table Dynamic1' */
    /* Dynamic Look-Up Table Block: '<S42>/Lookup Table Dynamic1'
     * Input0  Data Type:  Floating Point real_T
     * Input1  Data Type:  Floating Point real_T
     * Input2  Data Type:  Floating Point real_T
     * Output0 Data Type:  Floating Point real_T
     * Lookup Method: Linear_Endpoint
     *
     */
    LookUp_real_T_real_T( &(rtb_LookupTableDynamic1_b), &rtb_Reshapey[0],
                         rtb_Init, &rtb_Minus_n[0], 1U);
    rtb_Switch5_a = rtb_LookupTableDynamic1_b;
  }

  /* End of Switch: '<S42>/Switch5' */

  /* RelationalOperator: '<S48>/Compare' incorporates:
   *  Constant: '<S48>/Constant'
   */
  rtb_AND1 = (rtb_Subtract1_ak > 0.0);

  /* Switch: '<S42>/Switch1' incorporates:
   *  Switch: '<S42>/Switch3'
   */
  if (Compare) {
    rtb_Minus_k_idx_1 = Code_Gen_Model_ConstB.UnaryMinus_m;
  } else if (rtb_AND1) {
    /* Switch: '<S42>/Switch3' incorporates:
     *  Constant: '<S42>/Constant3'
     */
    rtb_Minus_k_idx_1 = Elevator_DC_Inc_RL;
  } else {
    rtb_Minus_k_idx_1 = Code_Gen_Model_ConstB.UnaryMinus_m;
  }

  /* Product: '<S42>/Product' incorporates:
   *  Switch: '<S42>/Switch1'
   */
  rtb_Switch2_l = rtb_Minus_k_idx_1 * rtb_Switch5_a;

  /* Switch: '<S51>/Init' incorporates:
   *  UnitDelay: '<S51>/FixPt Unit Delay1'
   *  UnitDelay: '<S51>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_o != 0) {
    rtb_Init = rtb_Subtract1_ak;
  } else {
    rtb_Init = Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_l;
  }

  /* End of Switch: '<S51>/Init' */

  /* Sum: '<S49>/Sum1' */
  rtb_Subtract1_ak -= rtb_Init;

  /* Switch: '<S50>/Switch2' incorporates:
   *  RelationalOperator: '<S50>/LowerRelop1'
   */
  if (!(rtb_Subtract1_ak > rtb_Switch2_l)) {
    /* Switch: '<S42>/Switch2' incorporates:
     *  Constant: '<S42>/Constant1'
     *  Constant: '<S42>/Constant3'
     *  Switch: '<S42>/Switch4'
     *  UnaryMinus: '<S42>/Unary Minus1'
     */
    if (Compare) {
      rtb_Minus_k_idx_1 = -1.0;
    } else if (rtb_AND1) {
      /* Switch: '<S42>/Switch4' incorporates:
       *  Constant: '<S42>/Constant1'
       */
      rtb_Minus_k_idx_1 = -1.0;
    } else {
      rtb_Minus_k_idx_1 = -Elevator_DC_Inc_RL;
    }

    /* Product: '<S42>/Product2' incorporates:
     *  Switch: '<S42>/Switch2'
     */
    rtb_Switch2_l = rtb_Minus_k_idx_1 * rtb_Switch5_a;

    /* Switch: '<S50>/Switch' incorporates:
     *  RelationalOperator: '<S50>/UpperRelop'
     */
    if (!(rtb_Subtract1_ak < rtb_Switch2_l)) {
      rtb_Switch2_l = rtb_Subtract1_ak;
    }

    /* End of Switch: '<S50>/Switch' */
  }

  /* End of Switch: '<S50>/Switch2' */

  /* Sum: '<S49>/Sum' */
  rtb_Switch5_a = rtb_Switch2_l + rtb_Init;

  /* Outport: '<Root>/Elevator_DutyCycle' */
  Code_Gen_Model_Y.Elevator_DutyCycle = rtb_Switch5_a;

  /* Logic: '<S7>/Logical Operator' incorporates:
   *  Constant: '<S24>/Constant'
   *  Constant: '<S25>/Constant'
   *  RelationalOperator: '<S24>/Compare'
   *  RelationalOperator: '<S25>/Compare'
   */
  Compare = ((Code_Gen_Model_B.Elevator_Height_Measured <
              Elevator_Height_Coral_Arm_Low_Thresh) &&
             (Code_Gen_Model_B.Coral_Arm_Angle_Measured <
              Coral_Arm_Angle_Neg_Threshold));

  /* Lookup_n-D: '<S7>/1-D Lookup Table' incorporates:
   *  Bias: '<S1>/Add Constant'
   */
  rtb_Switch2_l = look1_binlcpw(Code_Gen_Model_B.Coral_Arm_Angle_Measured,
    Code_Gen_Model_ConstP.uDLookupTable_bp01Data,
    Code_Gen_Model_ConstP.uDLookupTable_tableData, 2U);

  /* Switch: '<S28>/Switch2' incorporates:
   *  Constant: '<S7>/Constant'
   *  RelationalOperator: '<S28>/LowerRelop1'
   */
  if (Code_Gen_Model_B.Coral_Arm_Angle_Desired > 90.0) {
    rtb_Subtract1_ak = 90.0;
  } else {
    /* Lookup_n-D: '<S7>/Range of Motion Protection Limit' incorporates:
     *  Switch: '<S10>/Switch'
     */
    rtb_Subtract1_ak = look1_binlcpw(Code_Gen_Model_B.Elevator_Height_Measured,
      Code_Gen_Model_ConstP.RangeofMotionProtectionLimit_bp,
      Code_Gen_Model_ConstP.RangeofMotionProtectionLimit_ta, 74U);

    /* Switch: '<S28>/Switch' incorporates:
     *  RelationalOperator: '<S28>/UpperRelop'
     */
    if (!(Code_Gen_Model_B.Coral_Arm_Angle_Desired < rtb_Subtract1_ak)) {
      rtb_Subtract1_ak = Code_Gen_Model_B.Coral_Arm_Angle_Desired;
    }

    /* End of Switch: '<S28>/Switch' */
  }

  /* End of Switch: '<S28>/Switch2' */

  /* Sum: '<S7>/Subtract' */
  Code_Gen_Model_B.Coral_ArmAngle_Error = rtb_Subtract1_ak -
    Code_Gen_Model_B.Coral_Arm_Angle_Measured;

  /* Gain: '<S27>/Gain1' */
  Code_Gen_Model_B.Elevator_Proportional_l = Coral_Arm_Gain_Prop *
    Code_Gen_Model_B.Coral_ArmAngle_Error;

  /* Logic: '<S7>/Logical Operator2' incorporates:
   *  Logic: '<S7>/Logical Operator1'
   */
  rtb_AND1 = ((!Compare) && (Code_Gen_Model_B.Reefscape_Motors_Enable));

  /* Lookup_n-D: '<S7>/1-D Lookup Table1' incorporates:
   *  Bias: '<S1>/Add Constant'
   */
  rtb_Subtract1_ak = look1_binlcpw(Code_Gen_Model_B.Coral_Arm_Angle_Measured,
    Code_Gen_Model_ConstP.uDLookupTable1_bp01Data,
    Code_Gen_Model_ConstP.uDLookupTable1_tableData, 1U);

  /* Switch: '<S27>/Switch' */
  if (rtb_AND1) {
    /* Switch: '<S27>/Switch1' incorporates:
     *  UnitDelay: '<S36>/Delay Input1'
     *
     * Block description for '<S36>/Delay Input1':
     *
     *  Store in Global RAM
     */
    if (!Code_Gen_Model_DW.DelayInput1_DSTATE_op) {
      /* Switch: '<S27>/Switch' incorporates:
       *  Constant: '<S27>/Constant3'
       */
      Code_Gen_Model_B.Elevator_Integral_o = Coral_Arm_Int_IC;
    } else {
      /* Sum: '<S27>/Sum2' incorporates:
       *  Gain: '<S27>/Gain2'
       *  UnitDelay: '<S27>/Unit Delay'
       */
      rtb_Init = (Coral_Arm_Gain_Int * Code_Gen_Model_B.Coral_ArmAngle_Error) +
        Code_Gen_Model_B.Elevator_Integral_o;

      /* Sum: '<S27>/Subtract' */
      rtb_Switch2_g = rtb_Switch2_l - Code_Gen_Model_B.Elevator_Proportional_l;

      /* Switch: '<S37>/Switch2' incorporates:
       *  RelationalOperator: '<S37>/LowerRelop1'
       */
      if (!(rtb_Init > rtb_Switch2_g)) {
        /* Sum: '<S27>/Subtract1' */
        rtb_Switch2_g = rtb_Subtract1_ak -
          Code_Gen_Model_B.Elevator_Proportional_l;

        /* Switch: '<S37>/Switch' incorporates:
         *  RelationalOperator: '<S37>/UpperRelop'
         */
        if (!(rtb_Init < rtb_Switch2_g)) {
          rtb_Switch2_g = rtb_Init;
        }

        /* End of Switch: '<S37>/Switch' */
      }

      /* End of Switch: '<S37>/Switch2' */

      /* Saturate: '<S27>/Saturation1' */
      if (rtb_Switch2_g > Coral_Arm_Int_UL) {
        /* Switch: '<S27>/Switch' */
        Code_Gen_Model_B.Elevator_Integral_o = Coral_Arm_Int_UL;
      } else if (rtb_Switch2_g < Coral_Arm_Int_LL) {
        /* Switch: '<S27>/Switch' */
        Code_Gen_Model_B.Elevator_Integral_o = Coral_Arm_Int_LL;
      } else {
        /* Switch: '<S27>/Switch' */
        Code_Gen_Model_B.Elevator_Integral_o = rtb_Switch2_g;
      }

      /* End of Saturate: '<S27>/Saturation1' */
    }

    /* End of Switch: '<S27>/Switch1' */
  } else {
    /* Switch: '<S27>/Switch' incorporates:
     *  Constant: '<S27>/Constant2'
     */
    Code_Gen_Model_B.Elevator_Integral_o = 0.0;
  }

  /* End of Switch: '<S27>/Switch' */

  /* Switch: '<S7>/Switch2' incorporates:
   *  Constant: '<S7>/Constant5'
   */
  if (Code_Gen_Model_B.Reefscape_Motors_Enable) {
    /* Switch: '<S7>/Switch1' incorporates:
     *  Constant: '<S7>/Constant2'
     */
    if (Compare) {
      rtb_Subtract1_ak = Coral_Arm_Neg90_DC;
    } else {
      /* Sum: '<S27>/Add1' */
      rtb_Init = Code_Gen_Model_B.Elevator_Proportional_l +
        Code_Gen_Model_B.Elevator_Integral_o;

      /* Switch: '<S38>/Switch2' incorporates:
       *  RelationalOperator: '<S38>/LowerRelop1'
       *  RelationalOperator: '<S38>/UpperRelop'
       *  Switch: '<S38>/Switch'
       */
      if (rtb_Init > rtb_Switch2_l) {
        rtb_Subtract1_ak = rtb_Switch2_l;
      } else if (!(rtb_Init < rtb_Subtract1_ak)) {
        rtb_Subtract1_ak = rtb_Init;
      }

      /* End of Switch: '<S38>/Switch2' */
    }

    /* End of Switch: '<S7>/Switch1' */
  } else {
    rtb_Subtract1_ak = 0.0;
  }

  /* End of Switch: '<S7>/Switch2' */

  /* UnitDelay: '<S26>/Unit Delay' */
  rtb_Switch2_l = Code_Gen_Model_DW.UnitDelay_DSTATE_oz;

  /* Abs: '<S26>/Abs' incorporates:
   *  Sum: '<S26>/Subtract'
   */
  rtb_Init = fabs(rtb_Switch2_l - rtb_Subtract1_ak);

  /* Signum: '<S26>/Sign2' */
  if (rtIsNaN(rtb_Switch2_l)) {
    rtb_Minus_k_idx_1 = (rtNaN);
  } else if (rtb_Switch2_l < 0.0) {
    rtb_Minus_k_idx_1 = -1.0;
  } else {
    rtb_Minus_k_idx_1 = (rtb_Switch2_l > 0.0);
  }

  /* Signum: '<S26>/Sign1' */
  if (rtIsNaN(rtb_Subtract1_ak)) {
    rtb_Switch2_g = (rtNaN);
  } else if (rtb_Subtract1_ak < 0.0) {
    rtb_Switch2_g = -1.0;
  } else {
    rtb_Switch2_g = (rtb_Subtract1_ak > 0.0);
  }

  /* Product: '<S26>/Product1' incorporates:
   *  Signum: '<S26>/Sign1'
   *  Signum: '<S26>/Sign2'
   */
  rtb_Minus_k_idx_1 *= rtb_Switch2_g;
  if (rtIsNaN(rtb_Minus_k_idx_1)) {
    i = 0;
  } else {
    i = (int32_T)fmod(rtb_Minus_k_idx_1, 256.0);
  }

  /* Switch: '<S26>/Switch' incorporates:
   *  Constant: '<S26>/Constant'
   *  Constant: '<S29>/Constant'
   *  Constant: '<S30>/Constant'
   *  Logic: '<S26>/or'
   *  Product: '<S26>/Product1'
   *  RelationalOperator: '<S29>/Compare'
   *  RelationalOperator: '<S30>/Compare'
   */
  if ((!(rtb_Switch2_l == 0.0)) && (((i < 0) ? ((int32_T)((int8_T)(-((int8_T)
            ((uint8_T)(-((real_T)i))))))) : i) <= 0)) {
    rtb_Subtract1_ak = 0.0;
  }

  /* End of Switch: '<S26>/Switch' */

  /* RelationalOperator: '<S31>/Compare' incorporates:
   *  Constant: '<S31>/Constant'
   */
  Compare = (rtb_Subtract1_ak == 0.0);

  /* Switch: '<S26>/Switch5' */
  if (Compare) {
    /* SignalConversion generated from: '<S26>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S26>/Constant4'
     *  Constant: '<S26>/Constant6'
     */
    rtb_Reshapey[0] = 1.0;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S26>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S26>/Constant2'
     *  Constant: '<S26>/Constant5'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = 0.01;

    /* S-Function (sfix_look1_dyn): '<S26>/Lookup Table Dynamic' */
    /* Dynamic Look-Up Table Block: '<S26>/Lookup Table Dynamic'
     * Input0  Data Type:  Floating Point real_T
     * Input1  Data Type:  Floating Point real_T
     * Input2  Data Type:  Floating Point real_T
     * Output0 Data Type:  Floating Point real_T
     * Lookup Method: Linear_Endpoint
     *
     */
    LookUp_real_T_real_T( &(rtb_LookupTableDynamic_n), &rtb_Reshapey[0],
                         rtb_Init, &rtb_Minus_n[0], 1U);
    rtb_Switch2_g = rtb_LookupTableDynamic_n;
  } else {
    /* SignalConversion generated from: '<S26>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S26>/Constant10'
     *  Constant: '<S26>/Constant8'
     */
    rtb_Reshapey[0] = 1.0;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S26>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S26>/Constant7'
     *  Constant: '<S26>/Constant9'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = 0.01;

    /* S-Function (sfix_look1_dyn): '<S26>/Lookup Table Dynamic1' */
    /* Dynamic Look-Up Table Block: '<S26>/Lookup Table Dynamic1'
     * Input0  Data Type:  Floating Point real_T
     * Input1  Data Type:  Floating Point real_T
     * Input2  Data Type:  Floating Point real_T
     * Output0 Data Type:  Floating Point real_T
     * Lookup Method: Linear_Endpoint
     *
     */
    LookUp_real_T_real_T( &(rtb_LookupTableDynamic1_a), &rtb_Reshapey[0],
                         rtb_Init, &rtb_Minus_n[0], 1U);
    rtb_Switch2_g = rtb_LookupTableDynamic1_a;
  }

  /* End of Switch: '<S26>/Switch5' */

  /* RelationalOperator: '<S32>/Compare' incorporates:
   *  Constant: '<S32>/Constant'
   */
  Compare_f = (rtb_Subtract1_ak > 0.0);

  /* Switch: '<S26>/Switch1' incorporates:
   *  Switch: '<S26>/Switch3'
   */
  if (Compare) {
    rtb_Minus_k_idx_1 = Code_Gen_Model_ConstB.UnaryMinus;
  } else if (Compare_f) {
    /* Switch: '<S26>/Switch3' incorporates:
     *  Constant: '<S26>/Constant3'
     */
    rtb_Minus_k_idx_1 = Coral_Arm_DC_Inc_RL;
  } else {
    rtb_Minus_k_idx_1 = Code_Gen_Model_ConstB.UnaryMinus;
  }

  /* Product: '<S26>/Product' incorporates:
   *  Switch: '<S26>/Switch1'
   */
  rtb_Switch2_l = rtb_Minus_k_idx_1 * rtb_Switch2_g;

  /* Switch: '<S35>/Init' incorporates:
   *  UnitDelay: '<S35>/FixPt Unit Delay1'
   *  UnitDelay: '<S35>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_j != 0) {
    rtb_Init = rtb_Subtract1_ak;
  } else {
    rtb_Init = Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_pc;
  }

  /* End of Switch: '<S35>/Init' */

  /* Sum: '<S33>/Sum1' */
  rtb_Subtract1_ak -= rtb_Init;

  /* Switch: '<S34>/Switch2' incorporates:
   *  RelationalOperator: '<S34>/LowerRelop1'
   */
  if (!(rtb_Subtract1_ak > rtb_Switch2_l)) {
    /* Switch: '<S26>/Switch2' incorporates:
     *  Constant: '<S26>/Constant1'
     *  Constant: '<S26>/Constant3'
     *  Switch: '<S26>/Switch4'
     *  UnaryMinus: '<S26>/Unary Minus1'
     */
    if (Compare) {
      rtb_Minus_k_idx_1 = -1.0;
    } else if (Compare_f) {
      /* Switch: '<S26>/Switch4' incorporates:
       *  Constant: '<S26>/Constant1'
       */
      rtb_Minus_k_idx_1 = -1.0;
    } else {
      rtb_Minus_k_idx_1 = -Coral_Arm_DC_Inc_RL;
    }

    /* Product: '<S26>/Product2' incorporates:
     *  Switch: '<S26>/Switch2'
     */
    rtb_Switch2_l = rtb_Minus_k_idx_1 * rtb_Switch2_g;

    /* Switch: '<S34>/Switch' incorporates:
     *  RelationalOperator: '<S34>/UpperRelop'
     */
    if (!(rtb_Subtract1_ak < rtb_Switch2_l)) {
      rtb_Switch2_l = rtb_Subtract1_ak;
    }

    /* End of Switch: '<S34>/Switch' */
  }

  /* End of Switch: '<S34>/Switch2' */

  /* Sum: '<S33>/Sum' */
  rtb_Subtract1_ak = rtb_Switch2_l + rtb_Init;

  /* Outport: '<Root>/Coral_Arm_DutyCycle' */
  Code_Gen_Model_Y.Coral_Arm_DutyCycle = rtb_Subtract1_ak;

  /* Gain: '<S138>/meters to feet1' */
  Code_Gen_Model_B.Odometry_Y_global_est_ft = 3.28084 *
    Code_Gen_Model_B.Odom_Position_Y;

  /* RelationalOperator: '<S139>/Compare' incorporates:
   *  Constant: '<S138>/Constant'
   *  Constant: '<S139>/Constant'
   */
  Compare = (Odometry_X_Y_TEAR != 0.0);

  /* Switch: '<S138>/Switch1' incorporates:
   *  UnitDelay: '<S138>/Unit Delay1'
   */
  if (Compare) {
    rtb_Switch2_l = Code_Gen_Model_B.Odometry_Y_global_est_ft;
  } else {
    rtb_Switch2_l = Code_Gen_Model_DW.UnitDelay1_DSTATE_d;
  }

  /* End of Switch: '<S138>/Switch1' */

  /* Sum: '<S138>/Subtract1' */
  Code_Gen_Model_B.Odometry_Y_global_TEAR_ft =
    Code_Gen_Model_B.Odometry_Y_global_est_ft - rtb_Switch2_l;

  /* Gain: '<S138>/meters to feet' */
  Code_Gen_Model_B.Odometry_X_global_est_ft = 3.28084 *
    Code_Gen_Model_B.Odom_Position_X;

  /* Switch: '<S138>/Switch' incorporates:
   *  UnitDelay: '<S138>/Unit Delay'
   */
  if (Compare) {
    rtb_Init = Code_Gen_Model_B.Odometry_X_global_est_ft;
  } else {
    rtb_Init = Code_Gen_Model_DW.UnitDelay_DSTATE_c;
  }

  /* End of Switch: '<S138>/Switch' */

  /* Sum: '<S138>/Subtract' */
  Code_Gen_Model_B.Odometry_X_global_TEAR_ft =
    Code_Gen_Model_B.Odometry_X_global_est_ft - rtb_Init;

  /* Outport: '<Root>/Gyro_Angle_Offset_Total' incorporates:
   *  Gain: '<S11>/Gain'
   *  Sum: '<S11>/Add1'
   */
  Code_Gen_Model_Y.Gyro_Angle_Offset_Total = (rtb_Switch4 + rtb_Switch1) *
    57.295779513082323;

  /* Outport: '<Root>/Enable_Wheels' */
  Code_Gen_Model_Y.Enable_Wheels = rtb_Enable_Wheels;

  /* Outport: '<Root>/Reset_Wheel_Offsets' */
  Code_Gen_Model_Y.Reset_Wheel_Offsets = rtb_Reset_Wheel_Offsets;

  /* Outport: '<Root>/Disable_Wheels' */
  Code_Gen_Model_Y.Disable_Wheels = rtb_Disable_Wheels;

  /* Outport: '<Root>/Swerve_Motors_Disabled' */
  Code_Gen_Model_Y.Swerve_Motors_Disabled = rtb_Swerve_Motors_Disabled;

  /* Outport: '<Root>/Coral_Wheel_DutyCycle' */
  Code_Gen_Model_Y.Coral_Wheel_DutyCycle = rtb_Coral_Wheel_DutyCycle;

  /* Outport: '<Root>/Algae_Wheel_Outside_DutyCycle' */
  Code_Gen_Model_Y.Algae_Wheel_Outside_DutyCycle =
    rtb_Algae_Wheel_Outside_DutyCyc;

  /* Outport: '<Root>/Algae_Wheel_Inside_DutyCycle' */
  Code_Gen_Model_Y.Algae_Wheel_Inside_DutyCycle =
    rtb_Algae_Wheel_Inside_DutyCycl;

  /* RelationalOperator: '<S70>/Compare' incorporates:
   *  Constant: '<S70>/Constant'
   *  Inport: '<Root>/Joystick_Left_B2'
   */
  Code_Gen_Model_B.Align_Processor = (Code_Gen_Model_U.Joystick_Left_B2 != 0.0);

  /* SignalConversion: '<S12>/Signal Copy4' incorporates:
   *  Inport: '<Root>/Joystick_Right_X'
   */
  Code_Gen_Model_B.Steer_Joystick_X = Code_Gen_Model_U.Joystick_Right_X;

  /* DataTypeConversion: '<S17>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/GameState'
   */
  rtb_Minus_k_idx_1 = floor(Code_Gen_Model_U.GameState);
  if ((rtIsNaN(rtb_Minus_k_idx_1)) || (rtIsInf(rtb_Minus_k_idx_1))) {
    rtb_Minus_k_idx_1 = 0.0;
  } else {
    rtb_Minus_k_idx_1 = fmod(rtb_Minus_k_idx_1, 256.0);
  }

  rtb_GameState = (uint8_T)((rtb_Minus_k_idx_1 < 0.0) ? ((int32_T)((uint8_T)
    (-((int8_T)((uint8_T)(-rtb_Minus_k_idx_1)))))) : ((int32_T)((uint8_T)
    rtb_Minus_k_idx_1)));

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

  /* Update for UnitDelay: '<S130>/UD' incorporates:
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Rev'
   *
   * Block description for '<S130>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE = Code_Gen_Model_U.FrontLeft_Drive_Motor_Rev;

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
  Code_Gen_Model_DW.UD_DSTATE_i = Code_Gen_Model_U.BackLeft_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S133>/UD' incorporates:
   *  Inport: '<Root>/BackRight_Drive_Motor_Rev'
   *
   * Block description for '<S133>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_c = Code_Gen_Model_U.BackRight_Drive_Motor_Rev;

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

  /* Update for UnitDelay: '<S58>/Delay Input1' incorporates:
   *  Constant: '<S11>/Constant3'
   *
   * Block description for '<S58>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_p = Gyro_Calibration_Reset_Flag;

  /* Update for UnitDelay: '<S11>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE = rtb_Switch1;

  /* Update for UnitDelay: '<S54>/Delay Input1'
   *
   * Block description for '<S54>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_b = rtb_Compare;

  /* Update for UnitDelay: '<S55>/Delay Input1'
   *
   * Block description for '<S55>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_o1 = rtb_Compare_pd;

  /* Update for UnitDelay: '<S1>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_mph =
    Code_Gen_Model_B.Elevator_LowerPickup_Reset_tp;

  /* Update for UnitDelay: '<S56>/Delay Input1'
   *
   * Block description for '<S56>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_po = rtb_UnitDelay_l;

  /* Update for S-Function (sfix_udelay): '<S14>/Tapped Delay' */
  Code_Gen_Model_DW.TappedDelay_X[0] = Code_Gen_Model_DW.TappedDelay_X[1];
  Code_Gen_Model_DW.TappedDelay_X[1] = Code_Gen_Model_B.Product6[0];

  /* Update for S-Function (sfix_udelay): '<S14>/Tapped Delay1' */
  Code_Gen_Model_DW.TappedDelay1_X[0] = Code_Gen_Model_DW.TappedDelay1_X[1];
  Code_Gen_Model_DW.TappedDelay1_X[1] = Code_Gen_Model_B.Product6[1];

  /* Update for Delay: '<S75>/MemoryX' */
  Code_Gen_Model_DW.icLoad = false;

  /* Product: '<S95>/A[k]*xhat[k|k-1]' incorporates:
   *  Constant: '<S75>/A'
   *  Delay: '<S75>/MemoryX'
   */
  rtb_Switch1 = (0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[1]) +
    Code_Gen_Model_DW.MemoryX_DSTATE[0];
  rtb_Coral_Wheel_DutyCycle = (0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[0]) +
    Code_Gen_Model_DW.MemoryX_DSTATE[1];

  /* Update for Delay: '<S75>/MemoryX' incorporates:
   *  Constant: '<S75>/B'
   *  Product: '<S95>/A[k]*xhat[k|k-1]'
   *  Product: '<S95>/B[k]*u[k]'
   *  Sum: '<S95>/Add'
   */
  Code_Gen_Model_DW.MemoryX_DSTATE[0] = (((0.0 * Code_Gen_Model_B.Product6[1]) +
    Code_Gen_Model_B.Product6[0]) + rtb_Switch1) + Code_Gen_Model_B.Product3[0];
  Code_Gen_Model_DW.MemoryX_DSTATE[1] = (((0.0 * Code_Gen_Model_B.Product6[0]) +
    Code_Gen_Model_B.Product6[1]) + rtb_Coral_Wheel_DutyCycle) +
    Code_Gen_Model_B.Product3[1];

  /* Update for UnitDelay: '<S129>/UD'
   *
   * Block description for '<S129>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_d = Code_Gen_Model_B.Gyro_Angle_Field_rad;

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
  Code_Gen_Model_DW.UD_DSTATE_a = rtb_Switch1_m;

  /* Update for UnitDelay: '<S325>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_m = rtb_Switch2;

  /* Update for UnitDelay: '<S308>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_d = rtb_Switch2_ji;

  /* Update for UnitDelay: '<S323>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S323>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_p = 0U;

  /* Update for UnitDelay: '<S323>/FixPt Unit Delay1' */
  Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_e = rtb_Switch2_ji;

  /* Update for UnitDelay: '<S307>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_g = rtb_uDLookupTable_d;

  /* Update for UnitDelay: '<S316>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S316>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_c = 0U;

  /* Update for UnitDelay: '<S316>/FixPt Unit Delay1' */
  Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_p = rtb_uDLookupTable_d;

  /* Update for UnitDelay: '<S282>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_kw = rtb_Switch2_ab;

  /* Update for UnitDelay: '<S281>/UD'
   *
   * Block description for '<S281>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_cs = rtb_Abs_n2;

  /* Update for UnitDelay: '<S275>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_a = rtb_Sum1_p;

  /* Update for UnitDelay: '<S293>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_iw = rtb_Add_jk;

  /* Update for UnitDelay: '<S292>/UD'
   *
   * Block description for '<S292>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_l = rtb_Subtract1_lg;

  /* Update for UnitDelay: '<S278>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_l = rtb_Sum2_fc;

  /* Update for UnitDelay: '<S219>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_a = rtb_Add_os;

  /* Update for UnitDelay: '<S218>/UD'
   *
   * Block description for '<S218>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_o = rtb_Subtract1_b;

  /* Update for UnitDelay: '<S212>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_f = rtb_Hypot_g5;

  /* Update for UnitDelay: '<S230>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_b = rtb_Add_ia;

  /* Update for UnitDelay: '<S229>/UD'
   *
   * Block description for '<S229>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_b = rtb_Subtract1_ie;

  /* Update for UnitDelay: '<S215>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_e = rtb_Sum2_m;

  /* Update for UnitDelay: '<S240>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_b1 = rtb_Add_cc;

  /* Update for UnitDelay: '<S239>/UD'
   *
   * Block description for '<S239>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_e = rtb_Subtract_jj;

  /* Update for UnitDelay: '<S233>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_em = rtb_Subtract_pa;

  /* Update for UnitDelay: '<S251>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_n = rtb_uDLookupTable_f;

  /* Update for UnitDelay: '<S250>/UD'
   *
   * Block description for '<S250>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_i1 = rtb_Add_l;

  /* Update for UnitDelay: '<S236>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_dt = rtb_Subtract1_l2j;

  /* Update for UnitDelay: '<S261>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_f = rtb_Add_at;

  /* Update for UnitDelay: '<S260>/UD'
   *
   * Block description for '<S260>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_lh = rtb_Add2_k_idx_0;

  /* Update for UnitDelay: '<S254>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_gp = rtb_Integral_h;

  /* Update for UnitDelay: '<S272>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_nw = rtb_Add2_k_idx_1;

  /* Update for UnitDelay: '<S271>/UD'
   *
   * Block description for '<S271>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_k = rtb_Product_lf;

  /* Update for UnitDelay: '<S257>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_k = rtb_Integral_ei;

  /* Update for UnitDelay: '<S52>/Delay Input1'
   *
   * Block description for '<S52>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_be = rtb_Compare_oq;

  /* Update for UnitDelay: '<S42>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_mh = rtb_Switch5_a;

  /* Update for UnitDelay: '<S51>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S51>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_o = 0U;

  /* Update for UnitDelay: '<S51>/FixPt Unit Delay1' */
  Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_l = rtb_Switch5_a;

  /* Update for UnitDelay: '<S36>/Delay Input1'
   *
   * Block description for '<S36>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_op = rtb_AND1;

  /* Update for UnitDelay: '<S26>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_oz = rtb_Subtract1_ak;

  /* Update for UnitDelay: '<S35>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S35>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_j = 0U;

  /* Update for UnitDelay: '<S35>/FixPt Unit Delay1' */
  Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_pc = rtb_Subtract1_ak;

  /* Update for UnitDelay: '<S138>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_d = rtb_Switch2_l;

  /* Update for UnitDelay: '<S138>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_c = rtb_Init;
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

    /* Start for SwitchCase: '<S1>/Switch Case' */
    Code_Gen_Model_DW.SwitchCase_ActiveSubsystem = -1;

    /* Start for Constant: '<S1>/Constant' */
    Constant = Odometry_IC_X;

    /* Start for Constant: '<S1>/Constant1' */
    Constant1 = Odometry_IC_Y;

    /* Start for If: '<S18>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem = -1;

    /* InitializeConditions for UnitDelay: '<S11>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE = Gyro_Calibration_Reset_Degree;

    /* InitializeConditions for Delay: '<S75>/MemoryX' */
    Code_Gen_Model_DW.icLoad = true;

    /* InitializeConditions for DiscreteIntegrator: '<S16>/Accumulator2' */
    Code_Gen_Model_DW.Accumulator2_DSTATE = Constant;
    Code_Gen_Model_DW.Accumulator2_PrevResetState = 2;

    /* InitializeConditions for DiscreteIntegrator: '<S16>/Accumulator' */
    Code_Gen_Model_DW.Accumulator_DSTATE = Constant1;
    Code_Gen_Model_DW.Accumulator_PrevResetState = 2;

    /* InitializeConditions for UnitDelay: '<S306>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE = 1U;

    /* InitializeConditions for UnitDelay: '<S323>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_p = 1U;

    /* InitializeConditions for UnitDelay: '<S316>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_c = 1U;

    /* InitializeConditions for UnitDelay: '<S51>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_o = 1U;

    /* InitializeConditions for UnitDelay: '<S35>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_j = 1U;

    /* SystemInitialize for IfAction SubSystem: '<S1>/Teleop' */
    /* InitializeConditions for UnitDelay: '<S379>/FixPt Unit Delay2' */
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
