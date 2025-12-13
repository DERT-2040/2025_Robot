/*
 * Sponsored License - for use in support of a program or activity
 * sponsored by MathWorks.  Not for government, commercial or other
 * non-sponsored organizational use.
 *
 * File: Code_Gen_Model.c
 *
 * Code generated for Simulink model 'Code_Gen_Model'.
 *
 * Model version                  : 5.0
 * Simulink Coder version         : 25.1 (R2025a) 21-Nov-2024
 * C/C++ source code generated on : Sat Dec 13 00:01:20 2025
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
#include <string.h>
#include <float.h>
#include "rt_defines.h"

/* Named constants for Chart: '<S10>/Debounce' */
#define Code_Gen_Mod_IN_NO_ACTIVE_CHILD ((uint8_T)0U)
#define Code_Gen_Model_IN_False        ((uint8_T)1U)
#define Code_Gen_Model_IN_Timer_False  ((uint8_T)2U)
#define Code_Gen_Model_IN_Timer_True   ((uint8_T)3U)
#define Code_Gen_Model_IN_True         ((uint8_T)4U)

/* Named constants for Chart: '<S24>/Chart' */
#define Code_Gen_Model_IN_Disabled     ((uint8_T)1U)
#define Code_Gen_Model_IN_Not_Disabled ((uint8_T)2U)

/* Named constants for Chart: '<S33>/Reefscape_Chart' */
#define C_IN_Elevator_Height_Bottom_pre ((uint8_T)7U)
#define Code_G_IN_Auto_Lower_Elevator_l ((uint8_T)2U)
#define Code_Ge_IN_Coral_Pickup_Prepare ((uint8_T)3U)
#define Code_Ge_IN_Coral_Score_Position ((uint8_T)2U)
#define Code_Gen_IN_Auto_Lower_Elevator ((uint8_T)1U)
#define Code_Gen_IN_Manual_Adjustment_m ((uint8_T)5U)
#define Code_Gen_M_IN_Algae_Pickup_High ((uint8_T)1U)
#define Code_Gen_M_IN_Manual_Adjustment ((uint8_T)2U)
#define Code_Gen_Mo_IN_Algae_Pickup_Low ((uint8_T)2U)
#define Code_Gen_Mod_IN_Coral_Motor_Off ((uint8_T)2U)
#define Code_Gen_Mode_IN_Algae_Push_Out ((uint8_T)3U)
#define Code_Gen_Mode_IN_Auto_Lower_Arm ((uint8_T)1U)
#define Code_Gen_Mode_IN_End_Game_Climb ((uint8_T)8U)
#define Code_Gen_Mode_IN_Level_4_Teleop ((uint8_T)5U)
#define Code_Gen_Model_IN_Algae_Hold   ((uint8_T)1U)
#define Code_Gen_Model_IN_Algae_Pull_In ((uint8_T)2U)
#define Code_Gen_Model_IN_Algae_Score  ((uint8_T)3U)
#define Code_Gen_Model_IN_Coral        ((uint8_T)4U)
#define Code_Gen_Model_IN_Coral_Eject  ((uint8_T)1U)
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
#define Code_Gen_Model_IN_Level_4_Auto ((uint8_T)4U)
#define Code_Gen_Model_IN_Level_4_Timer ((uint8_T)6U)
#define Code_Gen_Model_IN_None         ((uint8_T)5U)
#define Code_Gen_Model_IN_Off          ((uint8_T)4U)
#define Code_Gen_Model_IN_Off_Target   ((uint8_T)1U)
#define Code_Gen_Model_IN_On_Target    ((uint8_T)2U)
#define Code_Gen_Model_IN_Start        ((uint8_T)9U)
#define Code_Gen_Model_IN_Start_Angle  ((uint8_T)10U)
#define Code_Gen_Model_IN_Stop         ((uint8_T)7U)
#define Code_Gen__IN_Coral_Pickup_Lower ((uint8_T)1U)
#define Code_Gen__IN_Coral_Pickup_Raise ((uint8_T)4U)
#define Code_IN_Coral_Pickup_Lower_Wait ((uint8_T)2U)
#define Code__IN_Elevator_Height_Bottom ((uint8_T)6U)

/* Named constants for Chart: '<S30>/Reefscape_Auto_Steps' */
#define C_IN_Path_to_Coral_Station_1_v3 ((uint8_T)5U)
#define Code_Gen_IN_Back_Up_from_Reef_1 ((uint8_T)2U)
#define Code_Gen_IN_Back_Up_from_Reef_2 ((uint8_T)3U)
#define Code_Gen_M_IN_Lower_for_Scoring ((uint8_T)7U)
#define Code_Gen_M_IN_Path_to_Processor ((uint8_T)8U)
#define Code_Gen_M_IN_Path_to_Reef_2_v2 ((uint8_T)8U)
#define Code_Gen_Mod_IN_Score_at_Reef_1 ((uint8_T)9U)
#define Code_Gen_Mod_IN_Score_at_Reef_2 ((uint8_T)10U)
#define Code_Gen_Mod_IN_Wait_for_Teleop ((uint8_T)12U)
#define Code_Gen_Mode_IN_Left_and_Right ((uint8_T)2U)
#define Code_Gen_Mode_IN_Path_to_Reef_1 ((uint8_T)6U)
#define Code_Gen_Mode_IN_Path_to_Reef_2 ((uint8_T)7U)
#define Code_Gen_Model_IN_Back         ((uint8_T)1U)
#define Code_Gen_Model_IN_Center       ((uint8_T)1U)
#define Code_Gen_Model_IN_Drive        ((uint8_T)1U)
#define Code_Gen_Model_IN_End_early    ((uint8_T)6U)
#define Code_Gen_Model_IN_L1_b         ((uint8_T)2U)
#define Code_Gen_Model_IN_Path_to_Reef ((uint8_T)9U)
#define Code_Gen_Model_IN_Raise_to_L2  ((uint8_T)2U)
#define Code_Gen_Model_IN_Raise_to_L4  ((uint8_T)2U)
#define Code_Gen_Model_IN_Raise_to_L4_l ((uint8_T)1U)
#define Code_Gen_Model_IN_Score_at_Reef ((uint8_T)11U)
#define Code_Gen_Model_IN_Set_L4       ((uint8_T)1U)
#define Code_Gen_Model_IN_Start_b      ((uint8_T)3U)
#define Code_Gen_Model_IN_Stay_at_L2   ((uint8_T)2U)
#define Code_Gen_Model_IN_Timer_to_L4  ((uint8_T)2U)
#define Code_Gen__IN_Score_at_Processor ((uint8_T)10U)
#define Code_IN_Adjust_Height_for_Algae ((uint8_T)1U)
#define Code_IN_Path_to_Coral_Station_1 ((uint8_T)4U)
#define Code_IN_Wait_at_Coral_Station_1 ((uint8_T)11U)
#define IN_Back_Up_from_Reef_Coral_Scor ((uint8_T)2U)
#define IN_Drive_Backward_from_Collect_ ((uint8_T)3U)
#define IN_Drive_Backward_from_Processo ((uint8_T)4U)
#define IN_Drive_Forward_and_Collect_Al ((uint8_T)5U)

/* Exported block parameters */
real_T AT_Integral_Enable_Error_Angle = 5.0;
                                     /* Variable: AT_Integral_Enable_Error_Angle
                                      * Referenced by:
                                      *   '<S432>/Constant'
                                      *   '<S38>/Constant'
                                      */
real_T AT_Integral_Enable_Error_XY = 2.0;/* Variable: AT_Integral_Enable_Error_XY
                                          * Referenced by:
                                          *   '<S439>/Constant'
                                          *   '<S440>/Constant'
                                          *   '<S45>/Constant'
                                          *   '<S46>/Constant'
                                          */
real_T AT_Max_Error_Angle = 1.0;       /* Variable: AT_Max_Error_Angle
                                        * Referenced by:
                                        *   '<S438>/Constant'
                                        *   '<S44>/Constant'
                                        */
real_T AT_Max_Error_XY = 0.75;         /* Variable: AT_Max_Error_XY
                                        * Referenced by:
                                        *   '<S436>/Constant'
                                        *   '<S437>/Constant'
                                        *   '<S42>/Constant'
                                        *   '<S43>/Constant'
                                        */
real_T AT_On_Target_Time = 0.25;       /* Variable: AT_On_Target_Time
                                        * Referenced by:
                                        *   '<S428>/Reefscape_Chart'
                                        *   '<S33>/Reefscape_Chart'
                                        */
real_T AT_Reef_Target_Algae_X = 18.0;  /* Variable: AT_Reef_Target_Algae_X
                                        * Referenced by:
                                        *   '<S426>/Constant7'
                                        *   '<S31>/Constant7'
                                        */
real_T AT_Reef_Target_Algae_Y = 2.5;   /* Variable: AT_Reef_Target_Algae_Y
                                        * Referenced by:
                                        *   '<S426>/Constant6'
                                        *   '<S31>/Constant6'
                                        */
real_T AT_Reef_Target_Center_Y = -4.5; /* Variable: AT_Reef_Target_Center_Y
                                        * Referenced by:
                                        *   '<S426>/Constant3'
                                        *   '<S31>/Constant3'
                                        */
real_T AT_Reef_Target_L1_X = 25.75;    /* Variable: AT_Reef_Target_L1_X
                                        * Referenced by:
                                        *   '<S426>/Constant4'
                                        *   '<S31>/Constant4'
                                        */
real_T AT_Reef_Target_L2_L3_X = 24.25; /* Variable: AT_Reef_Target_L2_L3_X
                                        * Referenced by:
                                        *   '<S426>/Constant'
                                        *   '<S31>/Constant'
                                        */
real_T AT_Reef_Target_L4_X = 26.75;    /* Variable: AT_Reef_Target_L4_X
                                        * Referenced by:
                                        *   '<S426>/Constant5'
                                        *   '<S31>/Constant5'
                                        */
real_T AT_Reef_Target_Left_Y = 3.5;    /* Variable: AT_Reef_Target_Left_Y
                                        * Referenced by:
                                        *   '<S426>/Constant1'
                                        *   '<S31>/Constant1'
                                        */
real_T AT_Reef_Target_Right_Y = -9.5;  /* Variable: AT_Reef_Target_Right_Y
                                        * Referenced by: '<S426>/Constant2'
                                        */
real_T AT_Steering_Error_Angle_Gain_P = 0.1;
                                     /* Variable: AT_Steering_Error_Angle_Gain_P
                                      * Referenced by:
                                      *   '<S35>/Constant4'
                                      *   '<S448>/Constant4'
                                      */
real_T AT_Steering_Speed_Max = 0.4;    /* Variable: AT_Steering_Speed_Max
                                        * Referenced by:
                                        *   '<S35>/Constant10'
                                        *   '<S448>/Constant10'
                                        */
real_T AT_Translation_Control_Gain_Field = 10.0;
                                  /* Variable: AT_Translation_Control_Gain_Field
                                   * Referenced by: '<S449>/Gain2'
                                   */
real_T AT_Translation_Control_Gain_Relative = 0.07;
                               /* Variable: AT_Translation_Control_Gain_Relative
                                * Referenced by:
                                *   '<S35>/Gain1'
                                *   '<S449>/Gain1'
                                */
real_T AT_Translation_Speed_Max_Field = 5.0;
                                     /* Variable: AT_Translation_Speed_Max_Field
                                      * Referenced by: '<S449>/Constant5'
                                      */
real_T AT_Translation_Speed_Max_Relative = 0.75;
                                  /* Variable: AT_Translation_Speed_Max_Relative
                                   * Referenced by:
                                   *   '<S35>/Constant8'
                                   *   '<S449>/Constant8'
                                   */
real_T Actuator_DC = 0.5;              /* Variable: Actuator_DC
                                        * Referenced by: '<S15>/Constant6'
                                        */
real_T Actuator_Rev_Startup_Range = 10.0;/* Variable: Actuator_Rev_Startup_Range
                                          * Referenced by: '<S110>/Constant'
                                          */
real_T Actuator_Rev_Target = 80.0;     /* Variable: Actuator_Rev_Target
                                        * Referenced by: '<S111>/Constant'
                                        */
real_T Algae_Eject_Time = 1.0;         /* Variable: Algae_Eject_Time
                                        * Referenced by:
                                        *   '<S428>/Reefscape_Chart'
                                        *   '<S33>/Reefscape_Chart'
                                        */
real_T Algae_Hold_DC = 0.005;          /* Variable: Algae_Hold_DC
                                        * Referenced by:
                                        *   '<S428>/Reefscape_Chart'
                                        *   '<S33>/Reefscape_Chart'
                                        */
real_T Algae_Pull_In_DC = 1.0;         /* Variable: Algae_Pull_In_DC
                                        * Referenced by:
                                        *   '<S428>/Reefscape_Chart'
                                        *   '<S33>/Reefscape_Chart'
                                        */
real_T Algae_Push_Out_DC = -0.3;       /* Variable: Algae_Push_Out_DC
                                        * Referenced by:
                                        *   '<S428>/Reefscape_Chart'
                                        *   '<S33>/Reefscape_Chart'
                                        */
real_T Auto_Algae_Height_Time = 0.5;   /* Variable: Auto_Algae_Height_Time
                                        * Referenced by: '<S30>/Reefscape_Auto_Steps'
                                        */
real_T Auto_Backup_Time_Processor = 1.0;/* Variable: Auto_Backup_Time_Processor
                                         * Referenced by: '<S30>/Reefscape_Auto_Steps'
                                         */
real_T Auto_Backup_Time_Reef = 0.25;   /* Variable: Auto_Backup_Time_Reef
                                        * Referenced by: '<S30>/Reefscape_Auto_Steps'
                                        */
real_T Auto_Path1_Delay_to_L2_Time = 0.5;/* Variable: Auto_Path1_Delay_to_L2_Time
                                          * Referenced by: '<S30>/Reefscape_Auto_Steps'
                                          */
real_T Auto_Path1_Delay_to_L4_Time = 0.25;/* Variable: Auto_Path1_Delay_to_L4_Time
                                           * Referenced by: '<S30>/Reefscape_Auto_Steps'
                                           */
real_T Auto_Path2_Delay_to_L4_Time = 0.0;/* Variable: Auto_Path2_Delay_to_L4_Time
                                          * Referenced by: '<S30>/Reefscape_Auto_Steps'
                                          */
real_T Auto_Speed_Algae = 0.5;         /* Variable: Auto_Speed_Algae
                                        * Referenced by: '<S30>/Reefscape_Auto_Steps'
                                        */
real_T Auto_Speed_Coral = 1.0;         /* Variable: Auto_Speed_Coral
                                        * Referenced by: '<S30>/Reefscape_Auto_Steps'
                                        */
real_T Auto_Speed_Processor = 0.5;     /* Variable: Auto_Speed_Processor
                                        * Referenced by: '<S30>/Reefscape_Auto_Steps'
                                        */
real_T Auto_Speed_Reef = 1.0;          /* Variable: Auto_Speed_Reef
                                        * Referenced by: '<S30>/Reefscape_Auto_Steps'
                                        */
real_T Auto_Starting_Position = 2.0;   /* Variable: Auto_Starting_Position
                                        * Referenced by:
                                        *   '<S16>/Constant2'
                                        *   '<S30>/Constant1'
                                        */
real_T Boost_Trigger_Decreasing_Limit = -0.28;
                                     /* Variable: Boost_Trigger_Decreasing_Limit
                                      * Referenced by: '<S463>/Constant1'
                                      */
real_T Boost_Trigger_High_Speed = 5.0; /* Variable: Boost_Trigger_High_Speed
                                        * Referenced by:
                                        *   '<S459>/Constant'
                                        *   '<S459>/Saturation'
                                        */
real_T Boost_Trigger_Increasing_Limit = 3.5;
                                     /* Variable: Boost_Trigger_Increasing_Limit
                                      * Referenced by: '<S463>/Constant3'
                                      */
real_T Boost_Trigger_Low_Speed = 1.5;  /* Variable: Boost_Trigger_Low_Speed
                                        * Referenced by: '<S459>/Constant1'
                                        */
real_T Coral_Arm_Angle_Coral_Score_Lower_Rate = -2.0;
                             /* Variable: Coral_Arm_Angle_Coral_Score_Lower_Rate
                              * Referenced by:
                              *   '<S428>/Reefscape_Chart'
                              *   '<S33>/Reefscape_Chart'
                              */
real_T Coral_Arm_Angle_Error_Threshold = 3.0;
                                    /* Variable: Coral_Arm_Angle_Error_Threshold
                                     * Referenced by:
                                     *   '<S428>/Reefscape_Chart'
                                     *   '<S33>/Reefscape_Chart'
                                     */
real_T Coral_Arm_Angle_L1 = -15.0;     /* Variable: Coral_Arm_Angle_L1
                                        * Referenced by:
                                        *   '<S428>/Reefscape_Chart'
                                        *   '<S33>/Reefscape_Chart'
                                        */
real_T Coral_Arm_Angle_L2 = 50.0;      /* Variable: Coral_Arm_Angle_L2
                                        * Referenced by:
                                        *   '<S428>/Reefscape_Chart'
                                        *   '<S33>/Reefscape_Chart'
                                        */
real_T Coral_Arm_Angle_L3 = 50.0;      /* Variable: Coral_Arm_Angle_L3
                                        * Referenced by:
                                        *   '<S428>/Reefscape_Chart'
                                        *   '<S33>/Reefscape_Chart'
                                        */
real_T Coral_Arm_Angle_L4 = 57.0;      /* Variable: Coral_Arm_Angle_L4
                                        * Referenced by:
                                        *   '<S428>/Reefscape_Chart'
                                        *   '<S33>/Reefscape_Chart'
                                        */
real_T Coral_Arm_Angle_L4_Eject_Auto = 25.0;
                                      /* Variable: Coral_Arm_Angle_L4_Eject_Auto
                                       * Referenced by:
                                       *   '<S428>/Reefscape_Chart'
                                       *   '<S33>/Reefscape_Chart'
                                       */
real_T Coral_Arm_Angle_L4_Eject_Teleop = 40.0;
                                    /* Variable: Coral_Arm_Angle_L4_Eject_Teleop
                                     * Referenced by:
                                     *   '<S428>/Reefscape_Chart'
                                     *   '<S33>/Reefscape_Chart'
                                     */
real_T Coral_Arm_Angle_Neg_Threshold = -86.0;
                                      /* Variable: Coral_Arm_Angle_Neg_Threshold
                                       * Referenced by: '<S73>/Constant'
                                       */
real_T Coral_Arm_Angle_Pos_Threshold = 80.0;
                                      /* Variable: Coral_Arm_Angle_Pos_Threshold
                                       * Referenced by:
                                       *   '<S74>/Constant'
                                       *   '<S75>/Constant'
                                       */
real_T Coral_Arm_Angle_Start = -15.0;  /* Variable: Coral_Arm_Angle_Start
                                        * Referenced by:
                                        *   '<S428>/Reefscape_Chart'
                                        *   '<S33>/Reefscape_Chart'
                                        */
real_T Coral_Arm_Angle_Start_Thresh = -75.0;/* Variable: Coral_Arm_Angle_Start_Thresh
                                             * Referenced by:
                                             *   '<S428>/Reefscape_Chart'
                                             *   '<S33>/Reefscape_Chart'
                                             */
real_T Coral_Arm_Angle_Up = 85.0;      /* Variable: Coral_Arm_Angle_Up
                                        * Referenced by:
                                        *   '<S428>/Reefscape_Chart'
                                        *   '<S33>/Reefscape_Chart'
                                        */
real_T Coral_Arm_DC_Inc_RL = 0.033333; /* Variable: Coral_Arm_DC_Inc_RL
                                        * Referenced by: '<S76>/Constant3'
                                        */
real_T Coral_Arm_Gain_Int = 0.0005;    /* Variable: Coral_Arm_Gain_Int
                                        * Referenced by: '<S77>/Gain2'
                                        */
real_T Coral_Arm_Gain_Prop = 0.005;    /* Variable: Coral_Arm_Gain_Prop
                                        * Referenced by: '<S77>/Gain1'
                                        */
real_T Coral_Arm_Int_IC = 0.0;         /* Variable: Coral_Arm_Int_IC
                                        * Referenced by: '<S77>/Constant3'
                                        */
real_T Coral_Arm_Int_LL = -0.025;      /* Variable: Coral_Arm_Int_LL
                                        * Referenced by: '<S77>/Saturation1'
                                        */
real_T Coral_Arm_Int_UL = 0.025;       /* Variable: Coral_Arm_Int_UL
                                        * Referenced by: '<S77>/Saturation1'
                                        */
real_T Coral_Arm_Manual_Gain = 1.0;    /* Variable: Coral_Arm_Manual_Gain
                                        * Referenced by:
                                        *   '<S428>/Reefscape_Chart'
                                        *   '<S33>/Reefscape_Chart'
                                        */
real_T Coral_Arm_Neg90_DC = -0.03;     /* Variable: Coral_Arm_Neg90_DC
                                        * Referenced by: '<S9>/Constant2'
                                        */
real_T Coral_Arm_Pos90_DC = 0.03;      /* Variable: Coral_Arm_Pos90_DC
                                        * Referenced by: '<S9>/Constant1'
                                        */
real_T Coral_Detect_Distance = 150.0;  /* Variable: Coral_Detect_Distance
                                        * Referenced by:
                                        *   '<S30>/Reefscape_Auto_Steps'
                                        *   '<S428>/Reefscape_Chart'
                                        *   '<S33>/Reefscape_Chart'
                                        */
real_T Coral_Eject_Time = 0.5;         /* Variable: Coral_Eject_Time
                                        * Referenced by:
                                        *   '<S428>/Reefscape_Chart'
                                        *   '<S33>/Reefscape_Chart'
                                        */
real_T Coral_Motor_DC_Eject = -0.4;    /* Variable: Coral_Motor_DC_Eject
                                        * Referenced by:
                                        *   '<S428>/Reefscape_Chart'
                                        *   '<S33>/Reefscape_Chart'
                                        */
real_T Coral_Motor_DC_Hold = 0.01;     /* Variable: Coral_Motor_DC_Hold
                                        * Referenced by:
                                        *   '<S428>/Reefscape_Chart'
                                        *   '<S33>/Reefscape_Chart'
                                        */
real_T Coral_Motor_DC_Pickup = 0.1;    /* Variable: Coral_Motor_DC_Pickup
                                        * Referenced by:
                                        *   '<S428>/Reefscape_Chart'
                                        *   '<S33>/Reefscape_Chart'
                                        */
real_T Drive_Engage_Hook_Angle = 3.1416;/* Variable: Drive_Engage_Hook_Angle
                                         * Referenced by: '<S449>/Constant9'
                                         */
real_T Drive_Engage_Hook_Speed = 0.3;  /* Variable: Drive_Engage_Hook_Speed
                                        * Referenced by: '<S449>/Constant7'
                                        */
real_T Drive_Motor_Control_D = 0.0001; /* Variable: Drive_Motor_Control_D
                                        * Referenced by:
                                        *   '<S282>/Constant3'
                                        *   '<S303>/Constant3'
                                        *   '<S324>/Constant3'
                                        *   '<S345>/Constant3'
                                        */
real_T Drive_Motor_Control_D_FilterCoeff = 0.22223;
                                  /* Variable: Drive_Motor_Control_D_FilterCoeff
                                   * Referenced by:
                                   *   '<S282>/Constant2'
                                   *   '<S303>/Constant2'
                                   *   '<S324>/Constant2'
                                   *   '<S345>/Constant2'
                                   */
real_T Drive_Motor_Control_D_LL = -0.2;/* Variable: Drive_Motor_Control_D_LL
                                        * Referenced by:
                                        *   '<S282>/Saturation'
                                        *   '<S303>/Saturation'
                                        *   '<S324>/Saturation'
                                        *   '<S345>/Saturation'
                                        */
real_T Drive_Motor_Control_D_UL = 0.2; /* Variable: Drive_Motor_Control_D_UL
                                        * Referenced by:
                                        *   '<S282>/Saturation'
                                        *   '<S303>/Saturation'
                                        *   '<S324>/Saturation'
                                        *   '<S345>/Saturation'
                                        */
real_T Drive_Motor_Control_FF = 0.00016129;/* Variable: Drive_Motor_Control_FF
                                            * Referenced by:
                                            *   '<S282>/Gain'
                                            *   '<S303>/Gain'
                                            *   '<S324>/Gain'
                                            *   '<S345>/Gain'
                                            */
real_T Drive_Motor_Control_I = 1.0E-6; /* Variable: Drive_Motor_Control_I
                                        * Referenced by:
                                        *   '<S282>/Gain2'
                                        *   '<S303>/Gain2'
                                        *   '<S324>/Gain2'
                                        *   '<S345>/Gain2'
                                        */
real_T Drive_Motor_Control_I_LL = -0.03;/* Variable: Drive_Motor_Control_I_LL
                                         * Referenced by:
                                         *   '<S282>/Saturation1'
                                         *   '<S303>/Saturation1'
                                         *   '<S324>/Saturation1'
                                         *   '<S345>/Saturation1'
                                         */
real_T Drive_Motor_Control_I_UL = 0.03;/* Variable: Drive_Motor_Control_I_UL
                                        * Referenced by:
                                        *   '<S282>/Saturation1'
                                        *   '<S303>/Saturation1'
                                        *   '<S324>/Saturation1'
                                        *   '<S345>/Saturation1'
                                        */
real_T Drive_Motor_Control_P = 5.0E-6; /* Variable: Drive_Motor_Control_P
                                        * Referenced by:
                                        *   '<S282>/Gain1'
                                        *   '<S303>/Gain1'
                                        *   '<S324>/Gain1'
                                        *   '<S345>/Gain1'
                                        */
real_T Drive_Motor_Control_Sign_Change_Deadband = 7000.0;
                           /* Variable: Drive_Motor_Control_Sign_Change_Deadband
                            * Referenced by:
                            *   '<S287>/Constant'
                            *   '<S308>/Constant'
                            *   '<S329>/Constant'
                            *   '<S350>/Constant'
                            */
real_T Elevator_Bottom_DC = -0.1;      /* Variable: Elevator_Bottom_DC
                                        * Referenced by: '<S13>/Constant7'
                                        */
real_T Elevator_DC_Inc_RL = 0.066667;  /* Variable: Elevator_DC_Inc_RL
                                        * Referenced by: '<S94>/Constant3'
                                        */
real_T Elevator_Error_Bottom_Disable = 1.0;
                                      /* Variable: Elevator_Error_Bottom_Disable
                                       * Referenced by: '<S91>/Constant'
                                       */
real_T Elevator_Error_Increase = 0.0;  /* Variable: Elevator_Error_Increase
                                        * Referenced by: '<S13>/Constant6'
                                        */
real_T Elevator_Gain_Int = 0.02;       /* Variable: Elevator_Gain_Int
                                        * Referenced by: '<S95>/Gain2'
                                        */
real_T Elevator_Gain_Prop = 0.3;       /* Variable: Elevator_Gain_Prop
                                        * Referenced by: '<S95>/Gain1'
                                        */
real_T Elevator_Height_Algae_High = 20.3;/* Variable: Elevator_Height_Algae_High
                                          * Referenced by:
                                          *   '<S428>/Reefscape_Chart'
                                          *   '<S33>/Reefscape_Chart'
                                          */
real_T Elevator_Height_Algae_Low = 12.3;/* Variable: Elevator_Height_Algae_Low
                                         * Referenced by:
                                         *   '<S428>/Reefscape_Chart'
                                         *   '<S33>/Reefscape_Chart'
                                         */
real_T Elevator_Height_Algae_Score = 3.3;/* Variable: Elevator_Height_Algae_Score
                                          * Referenced by:
                                          *   '<S428>/Reefscape_Chart'
                                          *   '<S33>/Reefscape_Chart'
                                          */
real_T Elevator_Height_Bottom = 0.0;   /* Variable: Elevator_Height_Bottom
                                        * Referenced by:
                                        *   '<S428>/Reefscape_Chart'
                                        *   '<S33>/Reefscape_Chart'
                                        */
real_T Elevator_Height_Bottom_Pre = 13.8;/* Variable: Elevator_Height_Bottom_Pre
                                          * Referenced by:
                                          *   '<S428>/Reefscape_Chart'
                                          *   '<S33>/Reefscape_Chart'
                                          */
real_T Elevator_Height_Coral_Arm_Low_Thresh = 8.5;
                               /* Variable: Elevator_Height_Coral_Arm_Low_Thresh
                                * Referenced by: '<S72>/Constant'
                                */
real_T Elevator_Height_Coral_Score_Lower_Rate = -0.2;
                             /* Variable: Elevator_Height_Coral_Score_Lower_Rate
                              * Referenced by:
                              *   '<S428>/Reefscape_Chart'
                              *   '<S33>/Reefscape_Chart'
                              */
real_T Elevator_Height_End_Game = 14.8;/* Variable: Elevator_Height_End_Game
                                        * Referenced by:
                                        *   '<S15>/Constant5'
                                        *   '<S428>/Reefscape_Chart'
                                        *   '<S33>/Reefscape_Chart'
                                        */
real_T Elevator_Height_Error_Threshold = 1.0;
                                    /* Variable: Elevator_Height_Error_Threshold
                                     * Referenced by:
                                     *   '<S92>/Constant'
                                     *   '<S428>/Reefscape_Chart'
                                     *   '<S33>/Reefscape_Chart'
                                     */
real_T Elevator_Height_L1 = 11.8;      /* Variable: Elevator_Height_L1
                                        * Referenced by:
                                        *   '<S428>/Reefscape_Chart'
                                        *   '<S33>/Reefscape_Chart'
                                        */
real_T Elevator_Height_L2 = 7.05;      /* Variable: Elevator_Height_L2
                                        * Referenced by:
                                        *   '<S428>/Reefscape_Chart'
                                        *   '<S33>/Reefscape_Chart'
                                        */
real_T Elevator_Height_L2_Eject = 1.05;/* Variable: Elevator_Height_L2_Eject
                                        * Referenced by:
                                        *   '<S428>/Reefscape_Chart'
                                        *   '<S33>/Reefscape_Chart'
                                        */
real_T Elevator_Height_L3 = 15.05;     /* Variable: Elevator_Height_L3
                                        * Referenced by:
                                        *   '<S428>/Reefscape_Chart'
                                        *   '<S33>/Reefscape_Chart'
                                        */
real_T Elevator_Height_L3_Eject = 9.05;/* Variable: Elevator_Height_L3_Eject
                                        * Referenced by:
                                        *   '<S428>/Reefscape_Chart'
                                        *   '<S33>/Reefscape_Chart'
                                        */
real_T Elevator_Height_L4 = 26.7;      /* Variable: Elevator_Height_L4
                                        * Referenced by:
                                        *   '<S428>/Reefscape_Chart'
                                        *   '<S33>/Reefscape_Chart'
                                        */
real_T Elevator_Height_Lower = 7.3;    /* Variable: Elevator_Height_Lower
                                        * Referenced by:
                                        *   '<S428>/Reefscape_Chart'
                                        *   '<S33>/Reefscape_Chart'
                                        */
real_T Elevator_Height_Manual_Gain = 0.1;/* Variable: Elevator_Height_Manual_Gain
                                          * Referenced by:
                                          *   '<S428>/Reefscape_Chart'
                                          *   '<S33>/Reefscape_Chart'
                                          */
real_T Elevator_Height_PickupLower_Reset = 7.675;
                                  /* Variable: Elevator_Height_PickupLower_Reset
                                   * Referenced by: '<S14>/Constant2'
                                   */
real_T Elevator_Height_Prepare = 10.8; /* Variable: Elevator_Height_Prepare
                                        * Referenced by:
                                        *   '<S428>/Reefscape_Chart'
                                        *   '<S33>/Reefscape_Chart'
                                        */
real_T Elevator_Height_Raise = 9.4;    /* Variable: Elevator_Height_Raise
                                        * Referenced by:
                                        *   '<S428>/Reefscape_Chart'
                                        *   '<S33>/Reefscape_Chart'
                                        */
real_T Elevator_Height_Top_Reset = 30.0;/* Variable: Elevator_Height_Top_Reset
                                         * Referenced by:
                                         *   '<S14>/Constant1'
                                         *   '<S14>/Constant3'
                                         */
real_T Elevator_Hold_at_Top_DC = 0.1;  /* Variable: Elevator_Hold_at_Top_DC
                                        * Referenced by: '<S13>/Constant1'
                                        */
real_T Elevator_Int_IC = 0.0;          /* Variable: Elevator_Int_IC
                                        * Referenced by: '<S95>/Constant3'
                                        */
real_T Elevator_Int_LL = -0.1;         /* Variable: Elevator_Int_LL
                                        * Referenced by: '<S95>/Saturation1'
                                        */
real_T Elevator_Int_UL = 0.1;          /* Variable: Elevator_Int_UL
                                        * Referenced by: '<S95>/Saturation1'
                                        */
real_T Elevator_Limit_Switch_Debounce_F2T = 0.5;
                                 /* Variable: Elevator_Limit_Switch_Debounce_F2T
                                  * Referenced by:
                                  *   '<S10>/Constant1'
                                  *   '<S11>/Constant1'
                                  */
real_T Elevator_Limit_Switch_Debounce_T2F = 0.0;
                                 /* Variable: Elevator_Limit_Switch_Debounce_T2F
                                  * Referenced by:
                                  *   '<S10>/Constant2'
                                  *   '<S11>/Constant2'
                                  */
real_T Elevator_LowerPickup_Time = 0.0;/* Variable: Elevator_LowerPickup_Time
                                        * Referenced by:
                                        *   '<S428>/Reefscape_Chart'
                                        *   '<S33>/Reefscape_Chart'
                                        */
real_T Elevator_MotorRev_to_Inch = 0.27646;/* Variable: Elevator_MotorRev_to_Inch
                                            * Referenced by: '<S14>/Gain1'
                                            */
real_T Elevator_Total_LL = -0.5;       /* Variable: Elevator_Total_LL
                                        * Referenced by:
                                        *   '<S13>/Constant8'
                                        *   '<S95>/Constant1'
                                        *   '<S95>/Saturation2'
                                        */
real_T Elevator_Total_UL = 1.0;        /* Variable: Elevator_Total_UL
                                        * Referenced by:
                                        *   '<S95>/Constant'
                                        *   '<S95>/Saturation2'
                                        */
real_T Gyro_Calibration_Auto_Center = 180.0;/* Variable: Gyro_Calibration_Auto_Center
                                             * Referenced by: '<S16>/Constant5'
                                             */
real_T Gyro_Calibration_Auto_Left = 210.0;/* Variable: Gyro_Calibration_Auto_Left
                                           * Referenced by: '<S16>/Constant4'
                                           */
real_T Gyro_Calibration_Auto_Right = 125.0;/* Variable: Gyro_Calibration_Auto_Right
                                            * Referenced by: '<S16>/Constant6'
                                            */
real_T Gyro_Calibration_Default = 180.0;/* Variable: Gyro_Calibration_Default
                                         * Referenced by:
                                         *   '<S16>/Constant7'
                                         *   '<S16>/Unit Delay1'
                                         */
real_T Gyro_Calibration_Reset_Flag = 0.0;/* Variable: Gyro_Calibration_Reset_Flag
                                          * Referenced by: '<S16>/Constant3'
                                          */
real_T KF_Enable = 1.0;                /* Variable: KF_Enable
                                        * Referenced by:
                                        *   '<S19>/Constant1'
                                        *   '<S19>/Constant2'
                                        */
real_T L4_Switch_Time = 0.1;           /* Variable: L4_Switch_Time
                                        * Referenced by:
                                        *   '<S428>/Reefscape_Chart'
                                        *   '<S33>/Reefscape_Chart'
                                        */
real_T Limelight_Tag_Angle_Offset = 0.0;/* Variable: Limelight_Tag_Angle_Offset
                                         * Referenced by: '<S20>/Constant2'
                                         */
real_T Limelight_Tag_X_Offset = -0.28; /* Variable: Limelight_Tag_X_Offset
                                        * Referenced by: '<S20>/Constant'
                                        */
real_T Limelight_Tag_Y_Offset = -0.28; /* Variable: Limelight_Tag_Y_Offset
                                        * Referenced by: '<S20>/Constant1'
                                        */
real_T MatchTime_Skip_Coral_Pickup = 7.0;/* Variable: MatchTime_Skip_Coral_Pickup
                                          * Referenced by: '<S30>/Reefscape_Auto_Steps'
                                          */
real_T MatchTime_Skip_Second_L4 = 3.4; /* Variable: MatchTime_Skip_Second_L4
                                        * Referenced by: '<S30>/Reefscape_Auto_Steps'
                                        */
real_T Odometry_IC_X = 0.0;            /* Variable: Odometry_IC_X
                                        * Referenced by: '<S2>/Constant'
                                        */
real_T Odometry_IC_Y = 0.0;            /* Variable: Odometry_IC_Y
                                        * Referenced by: '<S2>/Constant1'
                                        */
real_T Odometry_Reset_IC = 0.0;        /* Variable: Odometry_Reset_IC
                                        * Referenced by:
                                        *   '<S22>/Constant'
                                        *   '<S23>/Constant'
                                        */
real_T Odometry_X_Y_TEAR = 0.0;        /* Variable: Odometry_X_Y_TEAR
                                        * Referenced by:
                                        *   '<S197>/Constant'
                                        *   '<S208>/Constant'
                                        */
real_T Spline_Last_Pose_Distance_to_Velocity_Gain = 2.0;
                         /* Variable: Spline_Last_Pose_Distance_to_Velocity_Gain
                          * Referenced by: '<S267>/Constant2'
                          */
real_T Spline_Max_Centripital_Acceleration = 10.0;
                                /* Variable: Spline_Max_Centripital_Acceleration
                                 * Referenced by: '<S267>/Constant1'
                                 */
real_T Spline_Pose_Num_Before_End_Reduce_Speed = 1.0;
                            /* Variable: Spline_Pose_Num_Before_End_Reduce_Speed
                             * Referenced by: '<S214>/Constant'
                             */
real_T Spline_Stop_Radius = 0.1;       /* Variable: Spline_Stop_Radius
                                        * Referenced by: '<S227>/Constant'
                                        */
real_T Spline_Velocity_Multiplier_TEST = 1.0;
                                    /* Variable: Spline_Velocity_Multiplier_TEST
                                     * Referenced by: '<S267>/Constant3'
                                     */
real_T Steering_Absolute_Cmd_Approach_Zero_Error_Thresh = 0.2;
                   /* Variable: Steering_Absolute_Cmd_Approach_Zero_Error_Thresh
                    * Referenced by: '<S378>/Constant5'
                    */
real_T Steering_Absolute_Cmd_Approach_Zero_Final_Thresh = 0.01;
                   /* Variable: Steering_Absolute_Cmd_Approach_Zero_Final_Thresh
                    * Referenced by: '<S378>/Constant6'
                    */
real_T Steering_Absolute_Cmd_NonZero_Error_Thresh = 0.2;
                         /* Variable: Steering_Absolute_Cmd_NonZero_Error_Thresh
                          * Referenced by: '<S378>/Constant9'
                          */
real_T Steering_Absolute_Cmd_NonZero_Final_Scale_Factor = 0.1;
                   /* Variable: Steering_Absolute_Cmd_NonZero_Final_Scale_Factor
                    * Referenced by: '<S378>/Constant10'
                    */
real_T Steering_Absolute_Cmd_Rate_Limit_Dec = -1.0;
                               /* Variable: Steering_Absolute_Cmd_Rate_Limit_Dec
                                * Referenced by: '<S378>/Constant1'
                                */
real_T Steering_Absolute_Cmd_Rate_Limit_Inc = 1.0;
                               /* Variable: Steering_Absolute_Cmd_Rate_Limit_Inc
                                * Referenced by: '<S378>/Constant3'
                                */
real_T Steering_Heading_Control_D = 0.0;/* Variable: Steering_Heading_Control_D
                                         * Referenced by: '<S395>/Constant3'
                                         */
real_T Steering_Heading_Control_D_FilterCoeff = 0.22223;
                             /* Variable: Steering_Heading_Control_D_FilterCoeff
                              * Referenced by: '<S395>/Constant2'
                              */
real_T Steering_Heading_Control_D_LL = 0.0;
                                      /* Variable: Steering_Heading_Control_D_LL
                                       * Referenced by: '<S395>/Saturation'
                                       */
real_T Steering_Heading_Control_D_UL = 0.0;
                                      /* Variable: Steering_Heading_Control_D_UL
                                       * Referenced by: '<S395>/Saturation'
                                       */
real_T Steering_Heading_Control_Deadzone = 0.1;
                                  /* Variable: Steering_Heading_Control_Deadzone
                                   * Referenced by: '<S394>/Constant'
                                   */
real_T Steering_Heading_Control_I = 0.0;/* Variable: Steering_Heading_Control_I
                                         * Referenced by: '<S395>/Gain2'
                                         */
real_T Steering_Heading_Control_I_LL = -0.1;
                                      /* Variable: Steering_Heading_Control_I_LL
                                       * Referenced by: '<S395>/Saturation1'
                                       */
real_T Steering_Heading_Control_I_UL = 0.1;
                                      /* Variable: Steering_Heading_Control_I_UL
                                       * Referenced by: '<S395>/Saturation1'
                                       */
real_T Steering_Heading_Control_P = 2.5;/* Variable: Steering_Heading_Control_P
                                         * Referenced by: '<S395>/Gain1'
                                         */
real_T Steering_Heading_Control_Total_LL = -2.5;
                                  /* Variable: Steering_Heading_Control_Total_LL
                                   * Referenced by:
                                   *   '<S395>/Constant1'
                                   *   '<S395>/Saturation2'
                                   */
real_T Steering_Heading_Control_Total_UL = 2.5;
                                  /* Variable: Steering_Heading_Control_Total_UL
                                   * Referenced by:
                                   *   '<S395>/Constant'
                                   *   '<S395>/Saturation2'
                                   */
real_T Steering_Motor_Control_D = 0.5; /* Variable: Steering_Motor_Control_D
                                        * Referenced by:
                                        *   '<S285>/Constant3'
                                        *   '<S306>/Constant3'
                                        *   '<S327>/Constant3'
                                        *   '<S348>/Constant3'
                                        */
real_T Steering_Motor_Control_D_FilterCoeff = 0.22223;
                               /* Variable: Steering_Motor_Control_D_FilterCoeff
                                * Referenced by:
                                *   '<S285>/Constant2'
                                *   '<S306>/Constant2'
                                *   '<S327>/Constant2'
                                *   '<S348>/Constant2'
                                */
real_T Steering_Motor_Control_D_LL = -0.2;/* Variable: Steering_Motor_Control_D_LL
                                           * Referenced by:
                                           *   '<S285>/Saturation'
                                           *   '<S306>/Saturation'
                                           *   '<S327>/Saturation'
                                           *   '<S348>/Saturation'
                                           */
real_T Steering_Motor_Control_D_UL = 0.2;/* Variable: Steering_Motor_Control_D_UL
                                          * Referenced by:
                                          *   '<S285>/Saturation'
                                          *   '<S306>/Saturation'
                                          *   '<S327>/Saturation'
                                          *   '<S348>/Saturation'
                                          */
real_T Steering_Motor_Control_I = 0.005;/* Variable: Steering_Motor_Control_I
                                         * Referenced by:
                                         *   '<S285>/Gain2'
                                         *   '<S306>/Gain2'
                                         *   '<S327>/Gain2'
                                         *   '<S348>/Gain2'
                                         */
real_T Steering_Motor_Control_I_LL = -0.005;/* Variable: Steering_Motor_Control_I_LL
                                             * Referenced by:
                                             *   '<S285>/Saturation1'
                                             *   '<S306>/Saturation1'
                                             *   '<S327>/Saturation1'
                                             *   '<S348>/Saturation1'
                                             */
real_T Steering_Motor_Control_I_UL = 0.005;/* Variable: Steering_Motor_Control_I_UL
                                            * Referenced by:
                                            *   '<S285>/Saturation1'
                                            *   '<S306>/Saturation1'
                                            *   '<S327>/Saturation1'
                                            *   '<S348>/Saturation1'
                                            */
real_T Steering_Motor_Control_P = 0.15;/* Variable: Steering_Motor_Control_P
                                        * Referenced by:
                                        *   '<S285>/Gain1'
                                        *   '<S306>/Gain1'
                                        *   '<S327>/Gain1'
                                        *   '<S348>/Gain1'
                                        */
real_T Steering_Relative_Cmd_Approach_Zero_Error_Thresh = 0.2;
                   /* Variable: Steering_Relative_Cmd_Approach_Zero_Error_Thresh
                    * Referenced by: '<S377>/Constant5'
                    */
real_T Steering_Relative_Cmd_Approach_Zero_Final_Thresh = 0.01;
                   /* Variable: Steering_Relative_Cmd_Approach_Zero_Final_Thresh
                    * Referenced by: '<S377>/Constant6'
                    */
real_T Steering_Relative_Cmd_NonZero_Error_Thresh = 0.2;
                         /* Variable: Steering_Relative_Cmd_NonZero_Error_Thresh
                          * Referenced by: '<S377>/Constant9'
                          */
real_T Steering_Relative_Cmd_NonZero_Final_Scale_Factor = 1.0;
                   /* Variable: Steering_Relative_Cmd_NonZero_Final_Scale_Factor
                    * Referenced by: '<S377>/Constant10'
                    */
real_T Steering_Relative_Cmd_Rate_Limit_Dec = -10.0;
                               /* Variable: Steering_Relative_Cmd_Rate_Limit_Dec
                                * Referenced by: '<S377>/Constant1'
                                */
real_T Steering_Relative_Cmd_Rate_Limit_Inc = 10.0;
                               /* Variable: Steering_Relative_Cmd_Rate_Limit_Inc
                                * Referenced by: '<S377>/Constant3'
                                */
real_T Steering_Relative_Gain = 5.0;   /* Variable: Steering_Relative_Gain
                                        * Referenced by: '<S448>/Constant'
                                        */
real_T Steering_Twist_Gain = -0.5;     /* Variable: Steering_Twist_Gain
                                        * Referenced by: '<S448>/Constant1'
                                        */
real_T TEST_CANdle_Flag = 0.0;         /* Variable: TEST_CANdle_Flag
                                        * Referenced by: '<S4>/Constant2'
                                        */
real_T TEST_CANdle_LED_ID = 0.0;       /* Variable: TEST_CANdle_LED_ID
                                        * Referenced by: '<S4>/Constant3'
                                        */
real_T TEST_Swerve_Mode_Override_Flag = 0.0;
                                     /* Variable: TEST_Swerve_Mode_Override_Flag
                                      * Referenced by: '<S429>/Constant5'
                                      */
real_T TEST_Swerve_Mode_Steering = 0.0;/* Variable: TEST_Swerve_Mode_Steering
                                        * Referenced by: '<S429>/Constant8'
                                        */
real_T TEST_Swerve_Mode_Translation = 0.0;/* Variable: TEST_Swerve_Mode_Translation
                                           * Referenced by: '<S429>/Constant7'
                                           */
real_T Translation_Speed_Approach_Zero_Error_Thresh = 0.2;
                       /* Variable: Translation_Speed_Approach_Zero_Error_Thresh
                        * Referenced by: '<S365>/Constant5'
                        */
real_T Translation_Speed_Approach_Zero_Final_Thresh = 0.01;
                       /* Variable: Translation_Speed_Approach_Zero_Final_Thresh
                        * Referenced by: '<S365>/Constant6'
                        */
real_T Translation_Speed_NonZero_Error_Thresh = 0.15;
                             /* Variable: Translation_Speed_NonZero_Error_Thresh
                              * Referenced by: '<S365>/Constant9'
                              */
real_T Translation_Speed_NonZero_Final_Scale_Factor = 0.05;
                       /* Variable: Translation_Speed_NonZero_Final_Scale_Factor
                        * Referenced by: '<S365>/Constant10'
                        */
real_T Translation_Speed_Rate_Limit_Dec = -4.0;
                                   /* Variable: Translation_Speed_Rate_Limit_Dec
                                    * Referenced by: '<S365>/Constant1'
                                    */
real_T Translation_Speed_Rate_Limit_Inc = 4.0;
                                   /* Variable: Translation_Speed_Rate_Limit_Inc
                                    * Referenced by: '<S365>/Constant3'
                                    */
real_T Translation_Twist_Gain = -0.5;  /* Variable: Translation_Twist_Gain
                                        * Referenced by: '<S449>/Gain'
                                        */
real_T Twist_Deadzone_neg = -0.01;     /* Variable: Twist_Deadzone_neg
                                        * Referenced by:
                                        *   '<S448>/Dead Zone'
                                        *   '<S449>/Dead Zone'
                                        */
real_T Twist_Deadzone_pos = 0.01;      /* Variable: Twist_Deadzone_pos
                                        * Referenced by:
                                        *   '<S448>/Dead Zone'
                                        *   '<S449>/Dead Zone'
                                        */
real_T Winch_Hold_DC = 0.05;           /* Variable: Winch_Hold_DC
                                        * Referenced by: '<S15>/Constant2'
                                        */
real_T Winch_Rev_Target = 30.0;        /* Variable: Winch_Rev_Target
                                        * Referenced by: '<S109>/Constant'
                                        */
real_T Winch_Spool_DC = 1.0;           /* Variable: Winch_Spool_DC
                                        * Referenced by: '<S15>/Constant1'
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
static void Code_Gen_Model_Path_to_Reef_1(const boolean_T
  *Robot_Reached_Destination, const uint8_T *MultiportSwitch);
static void Code_Gen_Model_Left_and_Right(const boolean_T
  *Robot_Reached_Destination, const uint8_T *MultiportSwitch, const uint8_T
  *Switch6, const uint8_T *MultiportSwitch1, const uint8_T *Switch14, const
  boolean_T *UnitDelay1);
static void Code_Gen_Model_Center(const boolean_T *Compare_f, const boolean_T
  *Robot_Reached_Destination, const uint8_T *MultiportSwitch, const uint8_T
  *MultiportSwitch1, const boolean_T *UnitDelay1);
static void enter_internal_Coral_Score_Posi(void);
static void Code_Gen_Mode_Algae_Pickup_High(const boolean_T *Compare_f, const
  boolean_T *FixPtRelationalOperator_oi, const boolean_T
  *FixPtRelationalOperator_p, const boolean_T *FixPtRelationalOperator_af, const
  boolean_T *FixPtRelationalOperator_oe, const boolean_T
  *FixPtRelationalOperator_e);
static void Code_Gen_Model_Algae_Pickup_Low(const boolean_T *Compare_f, const
  boolean_T *FixPtRelationalOperator_oi, const boolean_T
  *FixPtRelationalOperator_p, const boolean_T *FixPtRelationalOperator_af, const
  boolean_T *FixPtRelationalOperator_oe, const boolean_T
  *FixPtRelationalOperator_e);
static void Code_Gen_Model_Algae_Score(const boolean_T *Compare_f, const
  boolean_T *FixPtRelationalOperator_oi, const boolean_T
  *FixPtRelationalOperator_p, const boolean_T *FixPtRelationalOperator_af, const
  boolean_T *FixPtRelationalOperator_oe, const boolean_T
  *FixPtRelationalOperator_e);
static void Code_Gen_Mode_Manual_Adjustment(void);
static void Code_Gen_Model_Level_2(void);
static void Code_Gen_Model_Level_3_m(void);
static void Code_Gen_Model_Level_4(void);
static void Code_enter_internal_Coral_Eject(void);
static void Code_Gen_Model_Level_3(void);
static void Code_Gen_Model_Level_4_Teleop(void);
static void Code__exit_internal_Coral_Eject(void);
static void Code_Gen_Model_Coral_Eject(const boolean_T *Compare_f, const
  boolean_T *FixPtRelationalOperator_oi, const boolean_T
  *FixPtRelationalOperator_p, const boolean_T *FixPtRelationalOperator_af, const
  boolean_T *FixPtRelationalOperator_oe, const boolean_T
  *FixPtRelationalOperator_e);
static void Code_Gen_Model_Coral(const boolean_T *Compare_f, const boolean_T
  *FixPtRelationalOperator_oi, const boolean_T *FixPtRelationalOperator_p, const
  boolean_T *FixPtRelationalOperator_af, const boolean_T
  *FixPtRelationalOperator_oe, const boolean_T *FixPtRelationalOperator_e);
static void Code_exit_internal_Coral_Pickup(void);
static void Code_Gen_Model_L4(void);
static void Code_Gen_Model_Set_Level(void);
static void Code_Gen_Model_Coral_Pickup(const boolean_T *Compare_f, const
  boolean_T *FixPtRelationalOperator_oi, const boolean_T
  *FixPtRelationalOperator_p, const boolean_T *FixPtRelationalOperator_af, const
  boolean_T *FixPtRelationalOperator_oe, const boolean_T
  *FixPtRelationalOperator_e);
static void Code_Gen_Elevator_Height_Bottom(const boolean_T *Compare_f, const
  boolean_T *FixPtRelationalOperator_oi, const boolean_T
  *FixPtRelationalOperator_p, const boolean_T *FixPtRelationalOperator_af, const
  boolean_T *FixPtRelationalOperator_oe, const boolean_T
  *FixPtRelationalOperator_e);
static void Code_Elevator_Height_Bottom_pre(const boolean_T *Compare_f, const
  boolean_T *FixPtRelationalOperator_oi, const boolean_T
  *FixPtRelationalOperator_p, const boolean_T *FixPtRelationalOperator_af, const
  boolean_T *FixPtRelationalOperator_oe, const boolean_T
  *FixPtRelationalOperator_e);
static void Code_Gen_Model_End_Game_Climb(const boolean_T *Compare_f, const
  boolean_T *FixPtRelationalOperator_oi, const boolean_T
  *FixPtRelationalOperator_p, const boolean_T *FixPtRelationalOperator_af, const
  boolean_T *FixPtRelationalOperator_oe, const boolean_T
  *FixPtRelationalOperator_e);
static void Code_Gen_Model_L4_e(void);
static void Code_Gen_Model_Set_Level_d(void);
static void enter_internal_Coral_Score_Po_k(void);
static void Code_Gen_Mo_Algae_Pickup_High_m(const boolean_T *Compare_f, const
  boolean_T *FixPtRelationalOperator_ne, const boolean_T
  *FixPtRelationalOperator_j, const boolean_T *FixPtRelationalOperator_i, const
  boolean_T *FixPtRelationalOperator_m, const boolean_T
  *FixPtRelationalOperator_ji);
static void Code_Gen_Mod_Algae_Pickup_Low_a(const boolean_T *Compare_f, const
  boolean_T *FixPtRelationalOperator_ne, const boolean_T
  *FixPtRelationalOperator_j, const boolean_T *FixPtRelationalOperator_i, const
  boolean_T *FixPtRelationalOperator_m, const boolean_T
  *FixPtRelationalOperator_ji);
static void Code_Gen_Model_Algae_Score_n(const boolean_T *Compare_f, const
  boolean_T *FixPtRelationalOperator_ne, const boolean_T
  *FixPtRelationalOperator_j, const boolean_T *FixPtRelationalOperator_i, const
  boolean_T *FixPtRelationalOperator_m, const boolean_T
  *FixPtRelationalOperator_ji);
static void Code_Gen_Mo_Manual_Adjustment_j(void);
static void Code_Gen_Model_Level_2_d(void);
static void Code_Gen_Model_Level_3_ek(void);
static void Code_Gen_Model_Level_4_p(void);
static void Co_enter_internal_Coral_Eject_n(void);
static void Code_Gen_Model_Level_3_e(void);
static void Code_Gen_Model_Level_4_Teleop_m(void);
static void Cod_exit_internal_Coral_Eject_p(void);
static void Code_Gen_Model_Coral_Eject_l(const boolean_T *Compare_f, const
  boolean_T *FixPtRelationalOperator_ne, const boolean_T
  *FixPtRelationalOperator_j, const boolean_T *FixPtRelationalOperator_i, const
  boolean_T *FixPtRelationalOperator_m, const boolean_T
  *FixPtRelationalOperator_ji);
static void Code_Gen_Model_Coral_e(const boolean_T *Compare_f, const boolean_T
  *FixPtRelationalOperator_ne, const boolean_T *FixPtRelationalOperator_j, const
  boolean_T *FixPtRelationalOperator_i, const boolean_T
  *FixPtRelationalOperator_m, const boolean_T *FixPtRelationalOperator_ji);
static void Co_exit_internal_Coral_Pickup_o(void);
static void Code_Gen_Model_L4_m(void);
static void Code_Gen_Model_Set_Level_du(void);
static void Code_Gen_Model_Coral_Pickup_e(const boolean_T *Compare_f, const
  boolean_T *FixPtRelationalOperator_ne, const boolean_T
  *FixPtRelationalOperator_j, const boolean_T *FixPtRelationalOperator_i, const
  boolean_T *FixPtRelationalOperator_m, const boolean_T
  *FixPtRelationalOperator_ji);
static void Code_G_Elevator_Height_Bottom_j(const boolean_T *Compare_f, const
  boolean_T *FixPtRelationalOperator_ne, const boolean_T
  *FixPtRelationalOperator_j, const boolean_T *FixPtRelationalOperator_i, const
  boolean_T *FixPtRelationalOperator_m, const boolean_T
  *FixPtRelationalOperator_ji);
static void Co_Elevator_Height_Bottom_pre_k(const boolean_T *Compare_f, const
  boolean_T *FixPtRelationalOperator_ne, const boolean_T
  *FixPtRelationalOperator_j, const boolean_T *FixPtRelationalOperator_i, const
  boolean_T *FixPtRelationalOperator_m, const boolean_T
  *FixPtRelationalOperator_ji);
static void Code_Gen_Model_End_Game_Climb_g(const boolean_T *Compare_f, const
  boolean_T *FixPtRelationalOperator_ne, const boolean_T
  *FixPtRelationalOperator_j, const boolean_T *FixPtRelationalOperator_i, const
  boolean_T *FixPtRelationalOperator_m, const boolean_T
  *FixPtRelationalOperator_ji);
static void Code_Gen_Model_L4_m0(void);
static void Code_Gen_Model_Set_Level_duc(void);

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

uint32_T plook_u32u8_evencka(uint8_T u, uint8_T bp0, uint8_T bpSpace, uint32_T
  maxIndex)
{
  uint32_T bpIndex;

  /* Prelookup - Index only
     Index Search method: 'even'
     Extrapolation method: 'Clip'
     Use previous index: 'off'
     Use last breakpoint for index at or above upper limit: 'on'
     Remove protection against out-of-range input in generated code: 'off'
   */
  if (u <= bp0) {
    bpIndex = 0U;
  } else {
    uint8_T fbpIndex;
    fbpIndex = (uint8_T)(((uint32_T)((uint8_T)(((uint32_T)u) - bp0))) / bpSpace);
    if (fbpIndex < maxIndex) {
      bpIndex = fbpIndex;
    } else {
      bpIndex = maxIndex;
    }
  }

  return bpIndex;
}

/* Output and update for atomic system: '<Root>/High Frequency Block' */
void High_Frequency_Model_Step(void)
{
  /* Outport: '<Root>/CANdle_LED_ID' incorporates:
   *  Gain: '<S1>/Gain'
   *  Inport: '<Root>/GameState'
   */
  Code_Gen_Model_Y.CANdle_LED_ID = 2.0 * Code_Gen_Model_U.GameState;
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

/* Function for Chart: '<S30>/Reefscape_Auto_Steps' */
static void Code_Gen_Model_Path_to_Reef_1(const boolean_T
  *Robot_Reached_Destination, const uint8_T *MultiportSwitch)
{
  Code_Gen_Model_B.Auto_Step_ID = 1U;
  Code_Gen_Model_B.Translation_Speed_l = 0.0;
  Code_Gen_Model_B.Translation_Angle_g = 0.0;
  switch (Code_Gen_Model_DW.is_Path_to_Reef_1) {
   case Code_Gen_Model_IN_Drive:
    Code_Gen_Model_B.Path_Enable = true;
    if (*Robot_Reached_Destination) {
      if (Code_Gen_Model_DW.is_Drive == Code_Gen_Model_IN_Raise_to_L4_l) {
        Code_Gen_Model_B.Gamepad_B4_Y_out = false;
        Code_Gen_Model_DW.is_Drive = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      } else {
        Code_Gen_Model_DW.is_Drive = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      }

      Code_Gen_Model_DW.is_Path_to_Reef_1 = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Left_and_Right = Code_Gen_Mod_IN_Score_at_Reef_1;
      Code_Gen_Model_B.Auto_Step_ID = 2U;
      Code_Gen_Model_B.Path_Enable = false;
      Code_Gen_Model_B.Align_Left_p = true;
    } else {
      switch (Code_Gen_Model_DW.is_Drive) {
       case Code_Gen_Model_IN_Raise_to_L4_l:
        break;

       default:
        /* case IN_Stay_at_L2: */
        if (Code_Gen_Model_DW.timer_k >= Auto_Path1_Delay_to_L4_Time) {
          Code_Gen_Model_DW.is_Drive = Code_Gen_Model_IN_Raise_to_L4_l;
          Code_Gen_Model_B.Gamepad_B4_Y_out = true;
        } else {
          Code_Gen_Model_DW.timer_k += 0.02;
        }
        break;
      }
    }
    break;

   case Code_Gen_Model_IN_Raise_to_L2:
    Code_Gen_Model_B.Path_Enable = false;
    if (Code_Gen_Model_DW.timer_k >= Auto_Path1_Delay_to_L2_Time) {
      Code_Gen_Model_B.Gamepad_B3_X_out = false;
      Code_Gen_Model_DW.is_Path_to_Reef_1 = Code_Gen_Model_IN_Drive;
      Code_Gen_Model_B.Path_Enable = true;
      Code_Gen_Model_B.Path_ID = *MultiportSwitch;
      Code_Gen_Model_DW.is_Drive = Code_Gen_Model_IN_Stay_at_L2;
      Code_Gen_Model_DW.timer_k = 0.0;
    } else {
      Code_Gen_Model_DW.timer_k += 0.02;
    }
    break;

   default:
    /* case IN_Start: */
    Code_Gen_Model_B.Path_Enable = false;
    if (Code_Gen_Model_DW.timer_k >= 0.04) {
      Code_Gen_Model_DW.is_Path_to_Reef_1 = Code_Gen_Model_IN_Raise_to_L2;
      Code_Gen_Model_B.Gamepad_B3_X_out = true;
      Code_Gen_Model_DW.timer_k = 0.0;
    } else {
      Code_Gen_Model_DW.timer_k += 0.02;
    }
    break;
  }
}

/* Function for Chart: '<S30>/Reefscape_Auto_Steps' */
static void Code_Gen_Model_Left_and_Right(const boolean_T
  *Robot_Reached_Destination, const uint8_T *MultiportSwitch, const uint8_T
  *Switch6, const uint8_T *MultiportSwitch1, const uint8_T *Switch14, const
  boolean_T *UnitDelay1)
{
  switch (Code_Gen_Model_DW.is_Left_and_Right) {
   case Code_Gen_Model_IN_Back:
    Code_Gen_Model_B.Gamepad_Back_out = false;
    Code_Gen_Model_DW.is_Left_and_Right = Code_Gen_Mod_IN_Wait_for_Teleop;
    Code_Gen_Model_B.Auto_Step_ID = 9U;
    Code_Gen_Model_B.Path_Enable = false;
    Code_Gen_Model_B.Translation_Speed_l = 0.0;
    Code_Gen_Model_B.Translation_Angle_g = 0.0;
    break;

   case Code_Gen_IN_Back_Up_from_Reef_1:
    Code_Gen_Model_B.Auto_Step_ID = 3U;
    Code_Gen_Model_B.Path_Enable = false;
    Code_Gen_Model_B.Translation_Speed_l = Auto_Speed_Reef;
    Code_Gen_Model_B.Translation_Angle_g = 3.1415926535897931;
    if (Code_Gen_Model_DW.timer_k >= Auto_Backup_Time_Reef) {
      /* Inport: '<Root>/MatchTime' */
      if (Code_Gen_Model_U.MatchTime <= MatchTime_Skip_Coral_Pickup) {
        Code_Gen_Model_DW.is_Left_and_Right = C_IN_Path_to_Coral_Station_1_v3;
        Code_Gen_Model_B.Auto_Step_ID = 20U;
        Code_Gen_Model_B.Path_Enable = true;
        Code_Gen_Model_B.Path_ID = *Switch14;
        Code_Gen_Model_B.Translation_Speed_l = 0.0;
        Code_Gen_Model_B.Translation_Angle_g = 0.0;
        Code_Gen_Model_B.Gamepad_Back_out = true;
      } else {
        Code_Gen_Model_DW.is_Left_and_Right = Code_IN_Path_to_Coral_Station_1;
        Code_Gen_Model_B.Auto_Step_ID = 4U;
        Code_Gen_Model_B.Path_Enable = true;
        Code_Gen_Model_B.Path_ID = *MultiportSwitch1;
        Code_Gen_Model_B.Translation_Speed_l = 0.0;
        Code_Gen_Model_B.Translation_Angle_g = 0.0;
        Code_Gen_Model_B.Gamepad_Start_out = true;
      }
    } else {
      Code_Gen_Model_DW.timer_k += 0.02;
    }
    break;

   case Code_Gen_IN_Back_Up_from_Reef_2:
    Code_Gen_Model_B.Auto_Step_ID = 8U;
    Code_Gen_Model_B.Path_Enable = false;
    Code_Gen_Model_B.Translation_Speed_l = Auto_Speed_Reef;
    Code_Gen_Model_B.Translation_Angle_g = 3.1415926535897931;
    if (Code_Gen_Model_DW.timer_k >= Auto_Backup_Time_Reef) {
      Code_Gen_Model_DW.is_Left_and_Right = Code_Gen_Model_IN_Back;
      Code_Gen_Model_B.Gamepad_Back_out = true;
    } else {
      Code_Gen_Model_DW.timer_k += 0.02;
    }
    break;

   case Code_IN_Path_to_Coral_Station_1:
    Code_Gen_Model_B.Auto_Step_ID = 4U;
    Code_Gen_Model_B.Path_Enable = true;
    Code_Gen_Model_B.Translation_Speed_l = 0.0;
    Code_Gen_Model_B.Translation_Angle_g = 0.0;
    if (*Robot_Reached_Destination) {
      Code_Gen_Model_B.Gamepad_Start_out = false;
      Code_Gen_Model_DW.is_Left_and_Right = Code_IN_Wait_at_Coral_Station_1;
      Code_Gen_Model_B.Auto_Step_ID = 5U;
      Code_Gen_Model_B.Path_Enable = false;
      Code_Gen_Model_B.Translation_Speed_l = Auto_Speed_Coral;
      Code_Gen_Model_B.Translation_Angle_g = 3.1415926535897931;
    }
    break;

   case C_IN_Path_to_Coral_Station_1_v3:
    Code_Gen_Model_B.Auto_Step_ID = 20U;
    Code_Gen_Model_B.Path_Enable = true;
    Code_Gen_Model_B.Translation_Speed_l = 0.0;
    Code_Gen_Model_B.Translation_Angle_g = 0.0;
    if (*Robot_Reached_Destination) {
      Code_Gen_Model_B.Gamepad_Back_out = false;
      Code_Gen_Model_DW.is_Left_and_Right = Code_Gen_Mod_IN_Wait_for_Teleop;
      Code_Gen_Model_B.Auto_Step_ID = 9U;
      Code_Gen_Model_B.Path_Enable = false;
    }
    break;

   case Code_Gen_Mode_IN_Path_to_Reef_1:
    Code_Gen_Model_Path_to_Reef_1(Robot_Reached_Destination, MultiportSwitch);
    break;

   case Code_Gen_Mode_IN_Path_to_Reef_2:
    Code_Gen_Model_B.Auto_Step_ID = 6U;
    Code_Gen_Model_B.Path_Enable = true;
    Code_Gen_Model_B.Translation_Speed_l = 0.0;
    Code_Gen_Model_B.Translation_Angle_g = 0.0;
    if (Code_Gen_Model_DW.is_Path_to_Reef_2 == Code_Gen_Model_IN_Set_L4) {
      if (*Robot_Reached_Destination) {
        Code_Gen_Model_B.Gamepad_B4_Y_out = false;
        Code_Gen_Model_DW.is_Path_to_Reef_2 = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
        Code_Gen_Model_DW.is_Left_and_Right = Code_Gen_Mod_IN_Score_at_Reef_2;
        Code_Gen_Model_B.Auto_Step_ID = 7U;
        Code_Gen_Model_B.Path_Enable = false;
        Code_Gen_Model_B.Align_Left_p = true;
      }

      /* case IN_Timer_to_L4: */
    } else if (Code_Gen_Model_DW.timer_k >= Auto_Path2_Delay_to_L4_Time) {
      Code_Gen_Model_DW.is_Path_to_Reef_2 = Code_Gen_Model_IN_Set_L4;
      Code_Gen_Model_B.Gamepad_B4_Y_out = true;
    } else {
      Code_Gen_Model_DW.timer_k += 0.02;
    }
    break;

   case Code_Gen_M_IN_Path_to_Reef_2_v2:
    Code_Gen_Model_B.Auto_Step_ID = 21U;
    Code_Gen_Model_B.Path_Enable = true;
    Code_Gen_Model_B.Translation_Speed_l = 0.0;
    Code_Gen_Model_B.Translation_Angle_g = 0.0;
    if (Code_Gen_Model_DW.is_Path_to_Reef_2_v2 == Code_Gen_Model_IN_Back) {
      if (*Robot_Reached_Destination) {
        Code_Gen_Model_B.Gamepad_Back_out = false;
        Code_Gen_Model_DW.is_Path_to_Reef_2_v2 = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
        Code_Gen_Model_DW.is_Left_and_Right = Code_Gen_Mod_IN_Wait_for_Teleop;
        Code_Gen_Model_B.Auto_Step_ID = 9U;
        Code_Gen_Model_B.Path_Enable = false;
      }

      /* case IN_L1: */
    } else if (Code_Gen_Model_B.UnitDelay2 >= 2.1) {
      Code_Gen_Model_B.Gamepad_B1_A_out = false;
      Code_Gen_Model_DW.is_Path_to_Reef_2_v2 = Code_Gen_Model_IN_Back;
      Code_Gen_Model_B.Gamepad_Back_out = true;
    }
    break;

   case Code_Gen_Mod_IN_Score_at_Reef_1:
    Code_Gen_Model_B.Auto_Step_ID = 2U;
    Code_Gen_Model_B.Path_Enable = false;
    Code_Gen_Model_B.Translation_Speed_l = 0.0;
    Code_Gen_Model_B.Translation_Angle_g = 0.0;
    if (*UnitDelay1) {
      Code_Gen_Model_B.Align_Left_p = false;
      Code_Gen_Model_DW.is_Left_and_Right = Code_Gen_IN_Back_Up_from_Reef_1;
      Code_Gen_Model_B.Auto_Step_ID = 3U;
      Code_Gen_Model_B.Translation_Speed_l = Auto_Speed_Reef;
      Code_Gen_Model_B.Translation_Angle_g = 3.1415926535897931;
      Code_Gen_Model_DW.timer_k = 0.0;
    }
    break;

   case Code_Gen_Mod_IN_Score_at_Reef_2:
    Code_Gen_Model_B.Auto_Step_ID = 7U;
    Code_Gen_Model_B.Path_Enable = false;
    Code_Gen_Model_B.Translation_Speed_l = 0.0;
    Code_Gen_Model_B.Translation_Angle_g = 0.0;
    if (*UnitDelay1) {
      Code_Gen_Model_B.Align_Left_p = false;
      Code_Gen_Model_DW.is_Left_and_Right = Code_Gen_IN_Back_Up_from_Reef_2;
      Code_Gen_Model_B.Auto_Step_ID = 8U;
      Code_Gen_Model_B.Translation_Speed_l = Auto_Speed_Reef;
      Code_Gen_Model_B.Translation_Angle_g = 3.1415926535897931;
      Code_Gen_Model_DW.timer_k = 0.0;
    }
    break;

   case Code_IN_Wait_at_Coral_Station_1:
    Code_Gen_Model_B.Auto_Step_ID = 5U;
    Code_Gen_Model_B.Path_Enable = false;
    Code_Gen_Model_B.Translation_Speed_l = Auto_Speed_Coral;
    Code_Gen_Model_B.Translation_Angle_g = 3.1415926535897931;

    /* Inport: '<Root>/Coral_TOF_Distance' */
    if (Code_Gen_Model_U.Coral_TOF_Distance < Coral_Detect_Distance) {
      /* Inport: '<Root>/MatchTime' */
      if (Code_Gen_Model_U.MatchTime <= MatchTime_Skip_Second_L4) {
        Code_Gen_Model_DW.is_Left_and_Right = Code_Gen_M_IN_Path_to_Reef_2_v2;
        Code_Gen_Model_B.Auto_Step_ID = 21U;
        Code_Gen_Model_B.Path_Enable = true;
        Code_Gen_Model_B.Path_ID = *Switch6;
        Code_Gen_Model_B.Translation_Speed_l = 0.0;
        Code_Gen_Model_B.Translation_Angle_g = 0.0;
        Code_Gen_Model_DW.is_Path_to_Reef_2_v2 = Code_Gen_Model_IN_L1_b;
        Code_Gen_Model_B.Gamepad_B1_A_out = true;
      } else {
        Code_Gen_Model_DW.is_Left_and_Right = Code_Gen_Mode_IN_Path_to_Reef_2;
        Code_Gen_Model_B.Auto_Step_ID = 6U;
        Code_Gen_Model_B.Path_Enable = true;
        Code_Gen_Model_B.Path_ID = *Switch6;
        Code_Gen_Model_B.Translation_Speed_l = 0.0;
        Code_Gen_Model_B.Translation_Angle_g = 0.0;
        Code_Gen_Model_DW.is_Path_to_Reef_2 = Code_Gen_Model_IN_Timer_to_L4;
        Code_Gen_Model_DW.timer_k = 0.0;
      }
    }

    /* End of Inport: '<Root>/Coral_TOF_Distance' */
    break;

   default:
    /* case IN_Wait_for_Teleop: */
    Code_Gen_Model_B.Auto_Step_ID = 9U;
    Code_Gen_Model_B.Path_Enable = false;
    Code_Gen_Model_B.Translation_Speed_l = 0.0;
    Code_Gen_Model_B.Translation_Angle_g = 0.0;
    break;
  }
}

/* Function for Chart: '<S30>/Reefscape_Auto_Steps' */
static void Code_Gen_Model_Center(const boolean_T *Compare_f, const boolean_T
  *Robot_Reached_Destination, const uint8_T *MultiportSwitch, const uint8_T
  *MultiportSwitch1, const boolean_T *UnitDelay1)
{
  switch (Code_Gen_Model_DW.is_Center) {
   case Code_IN_Adjust_Height_for_Algae:
    Code_Gen_Model_B.Auto_Step_ID = 104U;
    Code_Gen_Model_B.Path_Enable = false;
    Code_Gen_Model_B.Translation_Speed_l = 0.0;
    Code_Gen_Model_B.Translation_Angle_g = 0.0;
    if (Code_Gen_Model_DW.timer_k >= Auto_Algae_Height_Time) {
      Code_Gen_Model_B.Gamepad_POV_Left_p = false;
      Code_Gen_Model_DW.is_Center = IN_Drive_Forward_and_Collect_Al;
      Code_Gen_Model_B.Auto_Step_ID = 105U;
      Code_Gen_Model_B.Translation_Speed_l = Auto_Speed_Algae;
      Code_Gen_Model_B.Align_Center_j = true;
    } else {
      Code_Gen_Model_DW.timer_k += 0.02;
    }
    break;

   case IN_Back_Up_from_Reef_Coral_Scor:
    Code_Gen_Model_B.Auto_Step_ID = 103U;
    Code_Gen_Model_B.Path_Enable = false;
    Code_Gen_Model_B.Translation_Speed_l = Auto_Speed_Reef;
    Code_Gen_Model_B.Translation_Angle_g = 3.1415926535897931;
    if (Code_Gen_Model_DW.timer_k >= Auto_Backup_Time_Reef) {
      Code_Gen_Model_DW.is_Center = Code_IN_Adjust_Height_for_Algae;
      Code_Gen_Model_B.Auto_Step_ID = 104U;
      Code_Gen_Model_B.Translation_Speed_l = 0.0;
      Code_Gen_Model_B.Translation_Angle_g = 0.0;
      Code_Gen_Model_B.Gamepad_POV_Left_p = true;
      Code_Gen_Model_DW.timer_k = 0.0;
    } else {
      Code_Gen_Model_DW.timer_k += 0.02;
    }
    break;

   case IN_Drive_Backward_from_Collect_:
    Code_Gen_Model_B.Auto_Step_ID = 106U;
    Code_Gen_Model_B.Path_Enable = false;
    Code_Gen_Model_B.Translation_Speed_l = Auto_Speed_Reef;
    Code_Gen_Model_B.Translation_Angle_g = 3.1415926535897931;
    if (Code_Gen_Model_DW.timer_k >= Auto_Backup_Time_Reef) {
      Code_Gen_Model_DW.is_Center = Code_Gen_M_IN_Path_to_Processor;
      Code_Gen_Model_B.Auto_Step_ID = 107U;
      Code_Gen_Model_B.Path_Enable = true;
      Code_Gen_Model_B.Path_ID = *MultiportSwitch1;
    } else {
      Code_Gen_Model_DW.timer_k += 0.02;
    }
    break;

   case IN_Drive_Backward_from_Processo:
    Code_Gen_Model_B.Auto_Step_ID = 110U;
    Code_Gen_Model_B.Path_Enable = false;
    Code_Gen_Model_B.Translation_Speed_l = Auto_Speed_Processor;
    Code_Gen_Model_B.Translation_Angle_g = 3.1415926535897931;
    if (Code_Gen_Model_DW.timer_k >= Auto_Backup_Time_Processor) {
      Code_Gen_Model_B.Gamepad_Back_out = false;
      Code_Gen_Model_DW.is_Center = Code_Gen_Mod_IN_Wait_for_Teleop;
      Code_Gen_Model_B.Auto_Step_ID = 111U;
      Code_Gen_Model_B.Translation_Speed_l = 0.0;
      Code_Gen_Model_B.Translation_Angle_g = 0.0;
    } else {
      Code_Gen_Model_DW.timer_k += 0.02;
    }
    break;

   case IN_Drive_Forward_and_Collect_Al:
    Code_Gen_Model_B.Auto_Step_ID = 105U;
    Code_Gen_Model_B.Path_Enable = false;
    Code_Gen_Model_B.Translation_Speed_l = Auto_Speed_Algae;
    Code_Gen_Model_B.Translation_Angle_g = 0.0;
    if (*Compare_f) {
      Code_Gen_Model_B.Align_Center_j = false;
      Code_Gen_Model_DW.is_Center = IN_Drive_Backward_from_Collect_;
      Code_Gen_Model_B.Auto_Step_ID = 106U;
      Code_Gen_Model_B.Translation_Speed_l = Auto_Speed_Reef;
      Code_Gen_Model_B.Translation_Angle_g = 3.1415926535897931;
      Code_Gen_Model_DW.timer_k = 0.0;
    }
    break;

   case Code_Gen_Model_IN_End_early:
    Code_Gen_Model_B.Gamepad_Back_out = false;
    Code_Gen_Model_DW.is_Center = Code_Gen_Mod_IN_Wait_for_Teleop;
    Code_Gen_Model_B.Auto_Step_ID = 111U;
    Code_Gen_Model_B.Path_Enable = false;
    Code_Gen_Model_B.Translation_Speed_l = 0.0;
    Code_Gen_Model_B.Translation_Angle_g = 0.0;
    break;

   case Code_Gen_M_IN_Lower_for_Scoring:
    Code_Gen_Model_B.Auto_Step_ID = 108U;
    if (Code_Gen_Model_DW.timer_k >= Auto_Algae_Height_Time) {
      Code_Gen_Model_B.Gamepad_POV_Down_a = false;
      Code_Gen_Model_DW.is_Center = Code_Gen__IN_Score_at_Processor;
      Code_Gen_Model_B.Auto_Step_ID = 109U;
      Code_Gen_Model_B.Path_Enable = false;
      Code_Gen_Model_B.Translation_Speed_l = 0.0;
      Code_Gen_Model_B.Translation_Angle_g = 0.0;
      Code_Gen_Model_B.Gamepad_RT_out = true;
    } else {
      Code_Gen_Model_DW.timer_k += 0.02;
    }
    break;

   case Code_Gen_M_IN_Path_to_Processor:
    Code_Gen_Model_B.Auto_Step_ID = 107U;
    Code_Gen_Model_B.Path_Enable = true;
    if (*Robot_Reached_Destination) {
      Code_Gen_Model_DW.is_Center = Code_Gen_M_IN_Lower_for_Scoring;
      Code_Gen_Model_B.Auto_Step_ID = 108U;
      Code_Gen_Model_B.Gamepad_POV_Down_a = true;
      Code_Gen_Model_DW.timer_k = 0.0;
    }
    break;

   case Code_Gen_Model_IN_Path_to_Reef:
    Code_Gen_Model_B.Auto_Step_ID = 101U;
    Code_Gen_Model_B.Translation_Speed_l = 0.0;
    Code_Gen_Model_B.Translation_Angle_g = 0.0;
    switch (Code_Gen_Model_DW.is_Path_to_Reef) {
     case Code_Gen_Model_IN_Drive:
      Code_Gen_Model_B.Path_Enable = true;
      if (*Robot_Reached_Destination) {
        Code_Gen_Model_DW.is_Path_to_Reef = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
        Code_Gen_Model_DW.is_Center = Code_Gen_Model_IN_Score_at_Reef;
        Code_Gen_Model_B.Auto_Step_ID = 102U;
        Code_Gen_Model_B.Path_Enable = false;
        Code_Gen_Model_B.Align_Left_p = true;
      }
      break;

     case Code_Gen_Model_IN_Raise_to_L4:
      Code_Gen_Model_B.Path_Enable = false;
      if (Code_Gen_Model_DW.timer_k >= Auto_Path1_Delay_to_L4_Time) {
        Code_Gen_Model_B.Gamepad_B4_Y_out = false;
        Code_Gen_Model_DW.is_Path_to_Reef = Code_Gen_Model_IN_Drive;
        Code_Gen_Model_B.Path_Enable = true;
        Code_Gen_Model_B.Path_ID = *MultiportSwitch;
      } else {
        Code_Gen_Model_B.Gamepad_B4_Y_out = true;
        Code_Gen_Model_DW.timer_k += 0.02;
      }
      break;

     default:
      /* case IN_Start: */
      Code_Gen_Model_B.Path_Enable = false;
      if (Code_Gen_Model_DW.timer_k >= 0.04) {
        Code_Gen_Model_DW.is_Path_to_Reef = Code_Gen_Model_IN_Raise_to_L4;
        Code_Gen_Model_DW.timer_k = 0.0;
      } else {
        Code_Gen_Model_DW.timer_k += 0.02;
      }
      break;
    }
    break;

   case Code_Gen__IN_Score_at_Processor:
    Code_Gen_Model_B.Auto_Step_ID = 109U;
    Code_Gen_Model_B.Path_Enable = false;
    Code_Gen_Model_B.Translation_Speed_l = 0.0;
    Code_Gen_Model_B.Translation_Angle_g = 0.0;
    if (!(*Compare_f)) {
      Code_Gen_Model_B.Gamepad_RT_out = false;
      Code_Gen_Model_DW.is_Center = IN_Drive_Backward_from_Processo;
      Code_Gen_Model_B.Auto_Step_ID = 110U;
      Code_Gen_Model_B.Translation_Speed_l = Auto_Speed_Processor;
      Code_Gen_Model_B.Translation_Angle_g = 3.1415926535897931;
      Code_Gen_Model_DW.timer_k = 0.0;
      Code_Gen_Model_B.Gamepad_Back_out = true;
    }
    break;

   case Code_Gen_Model_IN_Score_at_Reef:
    Code_Gen_Model_B.Auto_Step_ID = 102U;
    Code_Gen_Model_B.Path_Enable = false;
    Code_Gen_Model_B.Translation_Speed_l = 0.0;
    Code_Gen_Model_B.Translation_Angle_g = 0.0;
    if (*UnitDelay1) {
      Code_Gen_Model_B.Align_Left_p = false;
      Code_Gen_Model_DW.is_Center = IN_Back_Up_from_Reef_Coral_Scor;
      Code_Gen_Model_B.Auto_Step_ID = 103U;
      Code_Gen_Model_B.Translation_Speed_l = Auto_Speed_Reef;
      Code_Gen_Model_B.Translation_Angle_g = 3.1415926535897931;
      Code_Gen_Model_DW.timer_k = 0.0;
    }
    break;

   default:
    /* case IN_Wait_for_Teleop: */
    Code_Gen_Model_B.Auto_Step_ID = 111U;
    Code_Gen_Model_B.Path_Enable = false;
    Code_Gen_Model_B.Translation_Speed_l = 0.0;
    Code_Gen_Model_B.Translation_Angle_g = 0.0;
    break;
  }
}

/* Function for Chart: '<S33>/Reefscape_Chart' */
static void enter_internal_Coral_Score_Posi(void)
{
  if ((Code_Gen_Model_DW.Set_L1_m) ||
      (Code_Gen_Model_B.FixPtRelationalOperator_nw)) {
    Code_Gen_Model_DW.is_Coral_Score_Position_e = Code_Gen_Model_IN_Level_1;
    Code_Gen_Model_B.State_ID_Auto = 2.1;
    Code_Gen_Model_B.Set_Coral_Level_l = 1U;
    Code_Gen_Model_B.Elevator_Height_Desired_n = Elevator_Height_L1;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_h = Coral_Arm_Angle_L1;
  } else if ((Code_Gen_Model_DW.Set_L2_n) ||
             (Code_Gen_Model_B.FixPtRelationalOperator_o)) {
    Code_Gen_Model_DW.is_Coral_Score_Position_e = Code_Gen_Model_IN_Level_2;
    Code_Gen_Model_B.State_ID_Auto = 2.2;
    Code_Gen_Model_B.Set_Coral_Level_l = 2U;
    Code_Gen_Model_B.Elevator_Height_Desired_n = Elevator_Height_L2;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_h = Coral_Arm_Angle_L2;
  } else if ((Code_Gen_Model_DW.Set_L3_f) ||
             (Code_Gen_Model_B.FixPtRelationalOperator_dd)) {
    Code_Gen_Model_DW.is_Coral_Score_Position_e = Code_Gen_Model_IN_Level_3;
    Code_Gen_Model_B.State_ID_Auto = 2.3;
    Code_Gen_Model_B.Set_Coral_Level_l = 3U;
    Code_Gen_Model_B.Elevator_Height_Desired_n = Elevator_Height_L3;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_h = Coral_Arm_Angle_L3;
  } else if ((Code_Gen_Model_DW.Set_L4_j) ||
             (Code_Gen_Model_B.FixPtRelationalOperator_a)) {
    Code_Gen_Model_DW.is_Coral_Score_Position_e = Code_Gen_Model_IN_Level_4;
    Code_Gen_Model_B.State_ID_Auto = 2.4;
    Code_Gen_Model_B.Set_Coral_Level_l = 4U;
    Code_Gen_Model_B.Elevator_Height_Desired_n = Elevator_Height_L4;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_h = Coral_Arm_Angle_L4;
  } else {
    Code_Gen_Model_DW.is_Coral_Score_Position_e =
      Code_Gen_IN_Manual_Adjustment_m;
    Code_Gen_Model_B.State_ID_Auto = 2.5;
    Code_Gen_Model_B.Elevator_Height_Desired_n +=
      Code_Gen_Model_ConstB.DeadZone1 * Elevator_Height_Manual_Gain;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_h += Code_Gen_Model_ConstB.DeadZone
      * Coral_Arm_Manual_Gain;
  }
}

/* Function for Chart: '<S33>/Reefscape_Chart' */
static void Code_Gen_Mode_Algae_Pickup_High(const boolean_T *Compare_f, const
  boolean_T *FixPtRelationalOperator_oi, const boolean_T
  *FixPtRelationalOperator_p, const boolean_T *FixPtRelationalOperator_af, const
  boolean_T *FixPtRelationalOperator_oe, const boolean_T
  *FixPtRelationalOperator_e)
{
  Code_Gen_Model_B.State_ID_Auto = 4.3;
  if ((*FixPtRelationalOperator_oi) && (!(*Compare_f))) {
    Code_Gen_Model_DW.is_Algae_Pickup_High_l = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_B.Set_Algae_Level_m = 0U;
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_i =
      Code_Gen_Model_IN_Coral_Pickup;
    Code_Gen_Model_DW.is_Actions_f = Code_Ge_IN_Coral_Pickup_Prepare;
    Code_Gen_Model_B.State_ID_Auto = 1.0;
    Code_Gen_Model_B.Elevator_Height_Desired_n = Elevator_Height_Prepare;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_h = -90.0;
    Code_Gen_Model_DW.is_Coral_Pickup_Prepare_k =
      Code_Gen_Mod_IN_Coral_Motor_Off;
    Code_Gen_Model_B.Coral_Wheel_DC_f = 0.0;
    Code_Gen_Model_DW.is_Set_Level_m3 = Code_Gen_Model_IN_None;
    Code_Gen_Model_DW.Set_L1_m = false;
    Code_Gen_Model_DW.Set_L2_n = false;
    Code_Gen_Model_DW.Set_L3_f = false;
    Code_Gen_Model_DW.Set_L4_j = false;
  } else if (*FixPtRelationalOperator_p) {
    if (Code_Gen_Model_B.Coral_Arm_Angle_Measured >=
        Coral_Arm_Angle_Start_Thresh) {
      Code_Gen_Model_DW.is_Algae_Pickup_High_l = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_B.Set_Algae_Level_m = 0U;
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_i =
        Code__IN_Elevator_Height_Bottom;
      Code_Gen_Model_B.State_ID_Auto = 0.2;
      Code_Gen_Model_B.Elevator_Height_Desired_n = Elevator_Height_Bottom;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_h = Coral_Arm_Angle_Up;
      Code_Gen_Model_DW.is_Elevator_Height_Bottom_h =
        Code_Gen_Mod_IN_Coral_Motor_Off;
      Code_Gen_Model_B.Coral_Wheel_DC_f = 0.0;
    } else {
      Code_Gen_Model_DW.is_Algae_Pickup_High_l = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_B.Set_Algae_Level_m = 0U;
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_i =
        C_IN_Elevator_Height_Bottom_pre;
      Code_Gen_Model_B.State_ID_Auto = 0.1;
      Code_Gen_Model_B.Elevator_Height_Desired_n = Elevator_Height_Bottom_Pre;
      Code_Gen_Model_DW.is_Elevator_Height_Bottom_pre_p =
        Code_Gen_Mod_IN_Coral_Motor_Off;
      Code_Gen_Model_B.Coral_Wheel_DC_f = 0.0;
    }
  } else if (*FixPtRelationalOperator_af) {
    Code_Gen_Model_DW.is_Algae_Pickup_High_l = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_B.Set_Algae_Level_m = 0U;
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_i =
      Code_Gen_Mode_IN_End_Game_Climb;
    Code_Gen_Model_B.State_ID_Auto = 4.4;
    Code_Gen_Model_B.Elevator_Height_Desired_n = Elevator_Height_End_Game;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_h = -90.0;
    Code_Gen_Model_DW.is_End_Game_Climb_k = Code_Gen_Mod_IN_Coral_Motor_Off;
    Code_Gen_Model_B.Coral_Wheel_DC_f = 0.0;
  } else if (*FixPtRelationalOperator_oe) {
    Code_Gen_Model_DW.is_Algae_Pickup_High_l = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_B.Set_Algae_Level_m = 0U;
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_i =
      Code_Gen_Model_IN_Algae_Score;
    Code_Gen_Model_B.State_ID_Auto = 4.1;
    Code_Gen_Model_B.Elevator_Height_Desired_n = Elevator_Height_Algae_Score;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_h = Coral_Arm_Angle_Up;
    Code_Gen_Model_DW.is_Algae_Score_f = Code_Gen_Mod_IN_Coral_Motor_Off;
    Code_Gen_Model_B.Coral_Wheel_DC_f = 0.0;
  } else if (*FixPtRelationalOperator_e) {
    Code_Gen_Model_DW.is_Algae_Pickup_High_l = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_i =
      Code_Gen_Mo_IN_Algae_Pickup_Low;
    Code_Gen_Model_B.State_ID_Auto = 4.2;
    Code_Gen_Model_B.Elevator_Height_Desired_n = Elevator_Height_Algae_Low;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_h = Coral_Arm_Angle_Up;
    Code_Gen_Model_B.Set_Algae_Level_m = 2U;
    Code_Gen_Model_DW.is_Algae_Pickup_Low_k = Code_Gen_Mod_IN_Coral_Motor_Off;
    Code_Gen_Model_B.Coral_Wheel_DC_f = 0.0;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_lp) {
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_i =
      Code_Gen_M_IN_Algae_Pickup_High;
    Code_Gen_Model_B.Elevator_Height_Desired_n = Elevator_Height_Algae_High;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_h = Coral_Arm_Angle_Up;
    Code_Gen_Model_B.Set_Algae_Level_m = 3U;
    Code_Gen_Model_DW.is_Algae_Pickup_High_l = Code_Gen_Mod_IN_Coral_Motor_Off;
    Code_Gen_Model_B.Coral_Wheel_DC_f = 0.0;
  } else {
    Code_Gen_Model_B.Elevator_Height_Desired_n +=
      Code_Gen_Model_ConstB.DeadZone1 * Elevator_Height_Manual_Gain;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_h += Code_Gen_Model_ConstB.DeadZone
      * Coral_Arm_Manual_Gain;
    if (Code_Gen_Model_DW.is_Algae_Pickup_High_l ==
        Code_Gen_Model_IN_Coral_Eject) {
      if (Code_Gen_Model_DW.timer_l >= Coral_Eject_Time) {
        Code_Gen_Model_DW.is_Algae_Pickup_High_l =
          Code_Gen_Mod_IN_Coral_Motor_Off;
        Code_Gen_Model_B.Coral_Wheel_DC_f = 0.0;
      } else {
        Code_Gen_Model_DW.timer_l += 0.02;
      }

      /* case IN_Coral_Motor_Off: */
    } else if (Code_Gen_Model_B.FixPtRelationalOperator_dp) {
      Code_Gen_Model_DW.is_Algae_Pickup_High_l = Code_Gen_Model_IN_Coral_Eject;
      Code_Gen_Model_B.Coral_Wheel_DC_f = Coral_Motor_DC_Eject;
      Code_Gen_Model_DW.timer_l = 0.0;
    }
  }
}

/* Function for Chart: '<S33>/Reefscape_Chart' */
static void Code_Gen_Model_Algae_Pickup_Low(const boolean_T *Compare_f, const
  boolean_T *FixPtRelationalOperator_oi, const boolean_T
  *FixPtRelationalOperator_p, const boolean_T *FixPtRelationalOperator_af, const
  boolean_T *FixPtRelationalOperator_oe, const boolean_T
  *FixPtRelationalOperator_e)
{
  Code_Gen_Model_B.State_ID_Auto = 4.2;
  if ((*FixPtRelationalOperator_oi) && (!(*Compare_f))) {
    Code_Gen_Model_DW.is_Algae_Pickup_Low_k = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_B.Set_Algae_Level_m = 0U;
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_i =
      Code_Gen_Model_IN_Coral_Pickup;
    Code_Gen_Model_DW.is_Actions_f = Code_Ge_IN_Coral_Pickup_Prepare;
    Code_Gen_Model_B.State_ID_Auto = 1.0;
    Code_Gen_Model_B.Elevator_Height_Desired_n = Elevator_Height_Prepare;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_h = -90.0;
    Code_Gen_Model_DW.is_Coral_Pickup_Prepare_k =
      Code_Gen_Mod_IN_Coral_Motor_Off;
    Code_Gen_Model_B.Coral_Wheel_DC_f = 0.0;
    Code_Gen_Model_DW.is_Set_Level_m3 = Code_Gen_Model_IN_None;
    Code_Gen_Model_DW.Set_L1_m = false;
    Code_Gen_Model_DW.Set_L2_n = false;
    Code_Gen_Model_DW.Set_L3_f = false;
    Code_Gen_Model_DW.Set_L4_j = false;
  } else if (*FixPtRelationalOperator_p) {
    if (Code_Gen_Model_B.Coral_Arm_Angle_Measured >=
        Coral_Arm_Angle_Start_Thresh) {
      Code_Gen_Model_DW.is_Algae_Pickup_Low_k = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_B.Set_Algae_Level_m = 0U;
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_i =
        Code__IN_Elevator_Height_Bottom;
      Code_Gen_Model_B.State_ID_Auto = 0.2;
      Code_Gen_Model_B.Elevator_Height_Desired_n = Elevator_Height_Bottom;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_h = Coral_Arm_Angle_Up;
      Code_Gen_Model_DW.is_Elevator_Height_Bottom_h =
        Code_Gen_Mod_IN_Coral_Motor_Off;
      Code_Gen_Model_B.Coral_Wheel_DC_f = 0.0;
    } else {
      Code_Gen_Model_DW.is_Algae_Pickup_Low_k = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_B.Set_Algae_Level_m = 0U;
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_i =
        C_IN_Elevator_Height_Bottom_pre;
      Code_Gen_Model_B.State_ID_Auto = 0.1;
      Code_Gen_Model_B.Elevator_Height_Desired_n = Elevator_Height_Bottom_Pre;
      Code_Gen_Model_DW.is_Elevator_Height_Bottom_pre_p =
        Code_Gen_Mod_IN_Coral_Motor_Off;
      Code_Gen_Model_B.Coral_Wheel_DC_f = 0.0;
    }
  } else if (*FixPtRelationalOperator_af) {
    Code_Gen_Model_DW.is_Algae_Pickup_Low_k = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_B.Set_Algae_Level_m = 0U;
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_i =
      Code_Gen_Mode_IN_End_Game_Climb;
    Code_Gen_Model_B.State_ID_Auto = 4.4;
    Code_Gen_Model_B.Elevator_Height_Desired_n = Elevator_Height_End_Game;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_h = -90.0;
    Code_Gen_Model_DW.is_End_Game_Climb_k = Code_Gen_Mod_IN_Coral_Motor_Off;
    Code_Gen_Model_B.Coral_Wheel_DC_f = 0.0;
  } else if (*FixPtRelationalOperator_oe) {
    Code_Gen_Model_DW.is_Algae_Pickup_Low_k = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_B.Set_Algae_Level_m = 0U;
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_i =
      Code_Gen_Model_IN_Algae_Score;
    Code_Gen_Model_B.State_ID_Auto = 4.1;
    Code_Gen_Model_B.Elevator_Height_Desired_n = Elevator_Height_Algae_Score;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_h = Coral_Arm_Angle_Up;
    Code_Gen_Model_DW.is_Algae_Score_f = Code_Gen_Mod_IN_Coral_Motor_Off;
    Code_Gen_Model_B.Coral_Wheel_DC_f = 0.0;
  } else if (*FixPtRelationalOperator_e) {
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_i =
      Code_Gen_Mo_IN_Algae_Pickup_Low;
    Code_Gen_Model_B.Elevator_Height_Desired_n = Elevator_Height_Algae_Low;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_h = Coral_Arm_Angle_Up;
    Code_Gen_Model_B.Set_Algae_Level_m = 2U;
    Code_Gen_Model_DW.is_Algae_Pickup_Low_k = Code_Gen_Mod_IN_Coral_Motor_Off;
    Code_Gen_Model_B.Coral_Wheel_DC_f = 0.0;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_lp) {
    Code_Gen_Model_DW.is_Algae_Pickup_Low_k = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_i =
      Code_Gen_M_IN_Algae_Pickup_High;
    Code_Gen_Model_B.State_ID_Auto = 4.3;
    Code_Gen_Model_B.Elevator_Height_Desired_n = Elevator_Height_Algae_High;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_h = Coral_Arm_Angle_Up;
    Code_Gen_Model_B.Set_Algae_Level_m = 3U;
    Code_Gen_Model_DW.is_Algae_Pickup_High_l = Code_Gen_Mod_IN_Coral_Motor_Off;
    Code_Gen_Model_B.Coral_Wheel_DC_f = 0.0;
  } else {
    Code_Gen_Model_B.Elevator_Height_Desired_n +=
      Code_Gen_Model_ConstB.DeadZone1 * Elevator_Height_Manual_Gain;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_h += Code_Gen_Model_ConstB.DeadZone
      * Coral_Arm_Manual_Gain;
    if (Code_Gen_Model_DW.is_Algae_Pickup_Low_k == Code_Gen_Model_IN_Coral_Eject)
    {
      if (Code_Gen_Model_DW.timer_l >= Coral_Eject_Time) {
        Code_Gen_Model_DW.is_Algae_Pickup_Low_k =
          Code_Gen_Mod_IN_Coral_Motor_Off;
        Code_Gen_Model_B.Coral_Wheel_DC_f = 0.0;
      } else {
        Code_Gen_Model_DW.timer_l += 0.02;
      }

      /* case IN_Coral_Motor_Off: */
    } else if (Code_Gen_Model_B.FixPtRelationalOperator_dp) {
      Code_Gen_Model_DW.is_Algae_Pickup_Low_k = Code_Gen_Model_IN_Coral_Eject;
      Code_Gen_Model_B.Coral_Wheel_DC_f = Coral_Motor_DC_Eject;
      Code_Gen_Model_DW.timer_l = 0.0;
    }
  }
}

/* Function for Chart: '<S33>/Reefscape_Chart' */
static void Code_Gen_Model_Algae_Score(const boolean_T *Compare_f, const
  boolean_T *FixPtRelationalOperator_oi, const boolean_T
  *FixPtRelationalOperator_p, const boolean_T *FixPtRelationalOperator_af, const
  boolean_T *FixPtRelationalOperator_oe, const boolean_T
  *FixPtRelationalOperator_e)
{
  Code_Gen_Model_B.State_ID_Auto = 4.1;
  if ((*FixPtRelationalOperator_oi) && (!(*Compare_f))) {
    Code_Gen_Model_DW.is_Algae_Score_f = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_i =
      Code_Gen_Model_IN_Coral_Pickup;
    Code_Gen_Model_DW.is_Actions_f = Code_Ge_IN_Coral_Pickup_Prepare;
    Code_Gen_Model_B.State_ID_Auto = 1.0;
    Code_Gen_Model_B.Elevator_Height_Desired_n = Elevator_Height_Prepare;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_h = -90.0;
    Code_Gen_Model_DW.is_Coral_Pickup_Prepare_k =
      Code_Gen_Mod_IN_Coral_Motor_Off;
    Code_Gen_Model_B.Coral_Wheel_DC_f = 0.0;
    Code_Gen_Model_DW.is_Set_Level_m3 = Code_Gen_Model_IN_None;
    Code_Gen_Model_DW.Set_L1_m = false;
    Code_Gen_Model_DW.Set_L2_n = false;
    Code_Gen_Model_DW.Set_L3_f = false;
    Code_Gen_Model_DW.Set_L4_j = false;
  } else if (*FixPtRelationalOperator_p) {
    if (Code_Gen_Model_B.Coral_Arm_Angle_Measured >=
        Coral_Arm_Angle_Start_Thresh) {
      Code_Gen_Model_DW.is_Algae_Score_f = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_i =
        Code__IN_Elevator_Height_Bottom;
      Code_Gen_Model_B.State_ID_Auto = 0.2;
      Code_Gen_Model_B.Elevator_Height_Desired_n = Elevator_Height_Bottom;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_h = Coral_Arm_Angle_Up;
      Code_Gen_Model_DW.is_Elevator_Height_Bottom_h =
        Code_Gen_Mod_IN_Coral_Motor_Off;
      Code_Gen_Model_B.Coral_Wheel_DC_f = 0.0;
    } else {
      Code_Gen_Model_DW.is_Algae_Score_f = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_i =
        C_IN_Elevator_Height_Bottom_pre;
      Code_Gen_Model_B.State_ID_Auto = 0.1;
      Code_Gen_Model_B.Elevator_Height_Desired_n = Elevator_Height_Bottom_Pre;
      Code_Gen_Model_DW.is_Elevator_Height_Bottom_pre_p =
        Code_Gen_Mod_IN_Coral_Motor_Off;
      Code_Gen_Model_B.Coral_Wheel_DC_f = 0.0;
    }
  } else if (*FixPtRelationalOperator_af) {
    Code_Gen_Model_DW.is_Algae_Score_f = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_i =
      Code_Gen_Mode_IN_End_Game_Climb;
    Code_Gen_Model_B.State_ID_Auto = 4.4;
    Code_Gen_Model_B.Elevator_Height_Desired_n = Elevator_Height_End_Game;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_h = -90.0;
    Code_Gen_Model_DW.is_End_Game_Climb_k = Code_Gen_Mod_IN_Coral_Motor_Off;
    Code_Gen_Model_B.Coral_Wheel_DC_f = 0.0;
  } else if (*FixPtRelationalOperator_oe) {
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_i =
      Code_Gen_Model_IN_Algae_Score;
    Code_Gen_Model_B.Elevator_Height_Desired_n = Elevator_Height_Algae_Score;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_h = Coral_Arm_Angle_Up;
    Code_Gen_Model_DW.is_Algae_Score_f = Code_Gen_Mod_IN_Coral_Motor_Off;
    Code_Gen_Model_B.Coral_Wheel_DC_f = 0.0;
  } else if (*FixPtRelationalOperator_e) {
    Code_Gen_Model_DW.is_Algae_Score_f = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_i =
      Code_Gen_Mo_IN_Algae_Pickup_Low;
    Code_Gen_Model_B.State_ID_Auto = 4.2;
    Code_Gen_Model_B.Elevator_Height_Desired_n = Elevator_Height_Algae_Low;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_h = Coral_Arm_Angle_Up;
    Code_Gen_Model_B.Set_Algae_Level_m = 2U;
    Code_Gen_Model_DW.is_Algae_Pickup_Low_k = Code_Gen_Mod_IN_Coral_Motor_Off;
    Code_Gen_Model_B.Coral_Wheel_DC_f = 0.0;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_lp) {
    Code_Gen_Model_DW.is_Algae_Score_f = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_i =
      Code_Gen_M_IN_Algae_Pickup_High;
    Code_Gen_Model_B.State_ID_Auto = 4.3;
    Code_Gen_Model_B.Elevator_Height_Desired_n = Elevator_Height_Algae_High;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_h = Coral_Arm_Angle_Up;
    Code_Gen_Model_B.Set_Algae_Level_m = 3U;
    Code_Gen_Model_DW.is_Algae_Pickup_High_l = Code_Gen_Mod_IN_Coral_Motor_Off;
    Code_Gen_Model_B.Coral_Wheel_DC_f = 0.0;
  } else {
    Code_Gen_Model_B.Elevator_Height_Desired_n +=
      Code_Gen_Model_ConstB.DeadZone1 * Elevator_Height_Manual_Gain;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_h += Code_Gen_Model_ConstB.DeadZone
      * Coral_Arm_Manual_Gain;
    if (Code_Gen_Model_DW.is_Algae_Score_f == Code_Gen_Model_IN_Coral_Eject) {
      if (Code_Gen_Model_DW.timer_l >= Coral_Eject_Time) {
        Code_Gen_Model_DW.is_Algae_Score_f = Code_Gen_Mod_IN_Coral_Motor_Off;
        Code_Gen_Model_B.Coral_Wheel_DC_f = 0.0;
      } else {
        Code_Gen_Model_DW.timer_l += 0.02;
      }

      /* case IN_Coral_Motor_Off: */
    } else if (Code_Gen_Model_B.FixPtRelationalOperator_dp) {
      Code_Gen_Model_DW.is_Algae_Score_f = Code_Gen_Model_IN_Coral_Eject;
      Code_Gen_Model_B.Coral_Wheel_DC_f = Coral_Motor_DC_Eject;
      Code_Gen_Model_DW.timer_l = 0.0;
    }
  }
}

/* Function for Chart: '<S33>/Reefscape_Chart' */
static void Code_Gen_Mode_Manual_Adjustment(void)
{
  Code_Gen_Model_B.State_ID_Auto = 2.5;
  if (!Code_Gen_Model_B.Compare) {
    Code_Gen_Model_DW.is_Coral_Score_Position_e =
      Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_DW.is_Coral_h = Code_Gen_Model_IN_Coral_Eject;
    Code_Gen_Model_DW.is_Coral_Eject_a = Code_Gen_Model_IN_Eject;
    Code_Gen_Model_B.State_ID_Auto = 3.7;
    Code_Gen_Model_B.Coral_Wheel_DC_f = Coral_Motor_DC_Eject;
    Code_Gen_Model_DW.timer_l = 0.0;
  } else {
    Code_Gen_Model_B.Elevator_Height_Desired_n +=
      Code_Gen_Model_ConstB.DeadZone1 * Elevator_Height_Manual_Gain;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_h += Code_Gen_Model_ConstB.DeadZone
      * Coral_Arm_Manual_Gain;
  }
}

/* Function for Chart: '<S33>/Reefscape_Chart' */
static void Code_Gen_Model_Level_2(void)
{
  Code_Gen_Model_B.State_ID_Auto = 2.2;
  if ((Code_Gen_Model_ConstB.DeadZone1 != 0.0) ||
      (Code_Gen_Model_ConstB.DeadZone != 0.0)) {
    Code_Gen_Model_DW.is_Coral_Score_Position_e =
      Code_Gen_IN_Manual_Adjustment_m;
    Code_Gen_Model_B.State_ID_Auto = 2.5;
    Code_Gen_Model_B.Elevator_Height_Desired_n +=
      Code_Gen_Model_ConstB.DeadZone1 * Elevator_Height_Manual_Gain;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_h += Code_Gen_Model_ConstB.DeadZone
      * Coral_Arm_Manual_Gain;
  }
}

/* Function for Chart: '<S33>/Reefscape_Chart' */
static void Code_Gen_Model_Level_3_m(void)
{
  Code_Gen_Model_B.State_ID_Auto = 2.3;
  if ((Code_Gen_Model_ConstB.DeadZone1 != 0.0) ||
      (Code_Gen_Model_ConstB.DeadZone != 0.0)) {
    Code_Gen_Model_DW.is_Coral_Score_Position_e =
      Code_Gen_IN_Manual_Adjustment_m;
    Code_Gen_Model_B.State_ID_Auto = 2.5;
    Code_Gen_Model_B.Elevator_Height_Desired_n +=
      Code_Gen_Model_ConstB.DeadZone1 * Elevator_Height_Manual_Gain;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_h += Code_Gen_Model_ConstB.DeadZone
      * Coral_Arm_Manual_Gain;
  }
}

/* Function for Chart: '<S33>/Reefscape_Chart' */
static void Code_Gen_Model_Level_4(void)
{
  Code_Gen_Model_B.State_ID_Auto = 2.4;
  if ((Code_Gen_Model_ConstB.DeadZone1 != 0.0) ||
      (Code_Gen_Model_ConstB.DeadZone != 0.0)) {
    Code_Gen_Model_DW.is_Coral_Score_Position_e =
      Code_Gen_IN_Manual_Adjustment_m;
    Code_Gen_Model_B.State_ID_Auto = 2.5;
    Code_Gen_Model_B.Elevator_Height_Desired_n +=
      Code_Gen_Model_ConstB.DeadZone1 * Elevator_Height_Manual_Gain;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_h += Code_Gen_Model_ConstB.DeadZone
      * Coral_Arm_Manual_Gain;
  }
}

/* Function for Chart: '<S33>/Reefscape_Chart' */
static void Code_enter_internal_Coral_Eject(void)
{
  switch (Code_Gen_Model_B.Set_Coral_Level_l) {
   case 2U:
    Code_Gen_Model_DW.is_Coral_Eject_a = Code_Gen_Model_IN_Level_2;
    Code_Gen_Model_B.State_ID_Auto = 3.2;
    Code_Gen_Model_DW.is_Level_2_h = Code_Gen_IN_Auto_Lower_Elevator;
    Code_Gen_Model_B.Elevator_Height_Desired_n +=
      Elevator_Height_Coral_Score_Lower_Rate;
    break;

   case 3U:
    Code_Gen_Model_DW.is_Coral_Eject_a = Code_Gen_Model_IN_Level_3;
    Code_Gen_Model_B.State_ID_Auto = 3.3;
    Code_Gen_Model_DW.is_Level_3_l = Code_Gen_IN_Auto_Lower_Elevator;
    Code_Gen_Model_B.Elevator_Height_Desired_n +=
      Elevator_Height_Coral_Score_Lower_Rate;
    break;

   default:
    if (Code_Gen_Model_B.Set_Coral_Level_l == 4) {
      Code_Gen_Model_DW.is_Coral_Eject_a = Code_Gen_Model_IN_Level_4_Auto;
      Code_Gen_Model_B.State_ID_Auto = 3.5;
      Code_Gen_Model_DW.is_Level_4_Auto_b = Code_Gen_Mode_IN_Auto_Lower_Arm;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_h +=
        Coral_Arm_Angle_Coral_Score_Lower_Rate;
    } else {
      Code_Gen_Model_DW.is_Coral_Eject_a = Code_Gen_Model_IN_Eject;
      Code_Gen_Model_B.State_ID_Auto = 3.7;
      Code_Gen_Model_B.Coral_Wheel_DC_f = Coral_Motor_DC_Eject;
      Code_Gen_Model_DW.timer_l = 0.0;
    }
    break;
  }
}

/* Function for Chart: '<S33>/Reefscape_Chart' */
static void Code_Gen_Model_Level_3(void)
{
  Code_Gen_Model_B.State_ID_Auto = 3.3;
  if ((!Code_Gen_Model_B.Compare) ||
      (Code_Gen_Model_B.FixPtRelationalOperator_dp)) {
    Code_Gen_Model_DW.is_Level_3_l = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_DW.is_Coral_Eject_a = Code_Gen_Model_IN_Eject;
    Code_Gen_Model_B.State_ID_Auto = 3.7;
    Code_Gen_Model_B.Coral_Wheel_DC_f = Coral_Motor_DC_Eject;
    Code_Gen_Model_DW.timer_l = 0.0;
  } else if (Code_Gen_Model_DW.is_Level_3_l == Code_Gen_IN_Auto_Lower_Elevator)
  {
    if (Code_Gen_Model_B.Elevator_Height_Measured <= Elevator_Height_L3_Eject) {
      Code_Gen_Model_DW.is_Level_3_l = Code_Gen_M_IN_Manual_Adjustment;
      Code_Gen_Model_B.Elevator_Height_Desired_n +=
        Code_Gen_Model_ConstB.DeadZone1 * Elevator_Height_Manual_Gain;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_h +=
        Code_Gen_Model_ConstB.DeadZone * Coral_Arm_Manual_Gain;
    } else {
      Code_Gen_Model_B.Elevator_Height_Desired_n +=
        Elevator_Height_Coral_Score_Lower_Rate;
    }

    /* case IN_Manual_Adjustment: */
  } else if (Code_Gen_Model_B.UnitDelay_b) {
    Code_Gen_Model_DW.is_Level_3_l = Code_Gen_IN_Auto_Lower_Elevator;
    Code_Gen_Model_B.Elevator_Height_Desired_n +=
      Elevator_Height_Coral_Score_Lower_Rate;
  } else {
    Code_Gen_Model_B.Elevator_Height_Desired_n +=
      Code_Gen_Model_ConstB.DeadZone1 * Elevator_Height_Manual_Gain;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_h += Code_Gen_Model_ConstB.DeadZone
      * Coral_Arm_Manual_Gain;
  }
}

/* Function for Chart: '<S33>/Reefscape_Chart' */
static void Code_Gen_Model_Level_4_Teleop(void)
{
  Code_Gen_Model_B.State_ID_Auto = 3.4;
  if (Code_Gen_Model_B.FixPtRelationalOperator_dp) {
    Code_Gen_Model_DW.is_Level_4_Teleop_m = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_DW.is_Coral_Eject_a = Code_Gen_Model_IN_Eject;
    Code_Gen_Model_B.State_ID_Auto = 3.7;
    Code_Gen_Model_B.Coral_Wheel_DC_f = Coral_Motor_DC_Eject;
    Code_Gen_Model_DW.timer_l = 0.0;
  } else if (!Code_Gen_Model_B.Compare) {
    Code_Gen_Model_DW.is_Level_4_Teleop_m = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_DW.is_Coral_Eject_a = Code_Gen_Model_IN_Level_4_Timer;
    Code_Gen_Model_B.State_ID_Auto = 3.6;
    Code_Gen_Model_B.Elevator_Height_Desired_n +=
      Elevator_Height_Coral_Score_Lower_Rate;
    Code_Gen_Model_DW.timer_l = 0.02;
  } else if (Code_Gen_Model_DW.is_Level_4_Teleop_m ==
             Code_Gen_Mode_IN_Auto_Lower_Arm) {
    if (Code_Gen_Model_B.Coral_Arm_Angle_Measured <
        Coral_Arm_Angle_L4_Eject_Teleop) {
      Code_Gen_Model_DW.is_Level_4_Teleop_m = Code_Gen_M_IN_Manual_Adjustment;
      Code_Gen_Model_B.Elevator_Height_Desired_n +=
        Code_Gen_Model_ConstB.DeadZone1 * Elevator_Height_Manual_Gain;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_h +=
        Code_Gen_Model_ConstB.DeadZone * Coral_Arm_Manual_Gain;
    } else {
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_h +=
        Coral_Arm_Angle_Coral_Score_Lower_Rate;
    }

    /* case IN_Manual_Adjustment: */
  } else if (Code_Gen_Model_B.UnitDelay_b) {
    Code_Gen_Model_DW.is_Level_4_Teleop_m = Code_Gen_Mode_IN_Auto_Lower_Arm;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_h +=
      Coral_Arm_Angle_Coral_Score_Lower_Rate;
  } else {
    Code_Gen_Model_B.Elevator_Height_Desired_n +=
      Code_Gen_Model_ConstB.DeadZone1 * Elevator_Height_Manual_Gain;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_h += Code_Gen_Model_ConstB.DeadZone
      * Coral_Arm_Manual_Gain;
  }
}

/* Function for Chart: '<S33>/Reefscape_Chart' */
static void Code__exit_internal_Coral_Eject(void)
{
  if (Code_Gen_Model_DW.is_Coral_Eject_a == Code_Gen_Model_IN_Stop) {
    Code_Gen_Model_B.Coral_Score_j = false;
    Code_Gen_Model_DW.is_Coral_Eject_a = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
  } else {
    Code_Gen_Model_DW.is_Level_2_h = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_DW.is_Level_3_l = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_DW.is_Level_4_Auto_b = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_DW.is_Level_4_Teleop_m = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_DW.is_Coral_Eject_a = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
  }
}

/* Function for Chart: '<S33>/Reefscape_Chart' */
static void Code_Gen_Model_Coral_Eject(const boolean_T *Compare_f, const
  boolean_T *FixPtRelationalOperator_oi, const boolean_T
  *FixPtRelationalOperator_p, const boolean_T *FixPtRelationalOperator_af, const
  boolean_T *FixPtRelationalOperator_oe, const boolean_T
  *FixPtRelationalOperator_e)
{
  if ((*FixPtRelationalOperator_oi) && (!(*Compare_f))) {
    Code__exit_internal_Coral_Eject();
    Code_Gen_Model_DW.is_Coral_h = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_B.Set_Coral_Level_l = 0U;
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_i =
      Code_Gen_Model_IN_Coral_Pickup;
    Code_Gen_Model_DW.is_Actions_f = Code_Ge_IN_Coral_Pickup_Prepare;
    Code_Gen_Model_B.State_ID_Auto = 1.0;
    Code_Gen_Model_B.Elevator_Height_Desired_n = Elevator_Height_Prepare;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_h = -90.0;
    Code_Gen_Model_DW.is_Coral_Pickup_Prepare_k =
      Code_Gen_Mod_IN_Coral_Motor_Off;
    Code_Gen_Model_B.Coral_Wheel_DC_f = 0.0;
    Code_Gen_Model_DW.is_Set_Level_m3 = Code_Gen_Model_IN_None;
    Code_Gen_Model_DW.Set_L1_m = false;
    Code_Gen_Model_DW.Set_L2_n = false;
    Code_Gen_Model_DW.Set_L3_f = false;
    Code_Gen_Model_DW.Set_L4_j = false;
  } else if (*FixPtRelationalOperator_p) {
    if (Code_Gen_Model_B.Coral_Arm_Angle_Measured >=
        Coral_Arm_Angle_Start_Thresh) {
      Code__exit_internal_Coral_Eject();
      Code_Gen_Model_DW.is_Coral_h = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_B.Set_Coral_Level_l = 0U;
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_i =
        Code__IN_Elevator_Height_Bottom;
      Code_Gen_Model_B.State_ID_Auto = 0.2;
      Code_Gen_Model_B.Elevator_Height_Desired_n = Elevator_Height_Bottom;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_h = Coral_Arm_Angle_Up;
      Code_Gen_Model_DW.is_Elevator_Height_Bottom_h =
        Code_Gen_Mod_IN_Coral_Motor_Off;
      Code_Gen_Model_B.Coral_Wheel_DC_f = 0.0;
    } else {
      Code__exit_internal_Coral_Eject();
      Code_Gen_Model_DW.is_Coral_h = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_B.Set_Coral_Level_l = 0U;
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_i =
        C_IN_Elevator_Height_Bottom_pre;
      Code_Gen_Model_B.State_ID_Auto = 0.1;
      Code_Gen_Model_B.Elevator_Height_Desired_n = Elevator_Height_Bottom_Pre;
      Code_Gen_Model_DW.is_Elevator_Height_Bottom_pre_p =
        Code_Gen_Mod_IN_Coral_Motor_Off;
      Code_Gen_Model_B.Coral_Wheel_DC_f = 0.0;
    }
  } else if (*FixPtRelationalOperator_af) {
    Code__exit_internal_Coral_Eject();
    Code_Gen_Model_DW.is_Coral_h = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_B.Set_Coral_Level_l = 0U;
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_i =
      Code_Gen_Mode_IN_End_Game_Climb;
    Code_Gen_Model_B.State_ID_Auto = 4.4;
    Code_Gen_Model_B.Elevator_Height_Desired_n = Elevator_Height_End_Game;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_h = -90.0;
    Code_Gen_Model_DW.is_End_Game_Climb_k = Code_Gen_Mod_IN_Coral_Motor_Off;
    Code_Gen_Model_B.Coral_Wheel_DC_f = 0.0;
  } else if (*FixPtRelationalOperator_oe) {
    Code__exit_internal_Coral_Eject();
    Code_Gen_Model_DW.is_Coral_h = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_B.Set_Coral_Level_l = 0U;
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_i =
      Code_Gen_Model_IN_Algae_Score;
    Code_Gen_Model_B.State_ID_Auto = 4.1;
    Code_Gen_Model_B.Elevator_Height_Desired_n = Elevator_Height_Algae_Score;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_h = Coral_Arm_Angle_Up;
    Code_Gen_Model_DW.is_Algae_Score_f = Code_Gen_Mod_IN_Coral_Motor_Off;
    Code_Gen_Model_B.Coral_Wheel_DC_f = 0.0;
  } else if (*FixPtRelationalOperator_e) {
    Code__exit_internal_Coral_Eject();
    Code_Gen_Model_DW.is_Coral_h = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_B.Set_Coral_Level_l = 0U;
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_i =
      Code_Gen_Mo_IN_Algae_Pickup_Low;
    Code_Gen_Model_B.State_ID_Auto = 4.2;
    Code_Gen_Model_B.Elevator_Height_Desired_n = Elevator_Height_Algae_Low;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_h = Coral_Arm_Angle_Up;
    Code_Gen_Model_B.Set_Algae_Level_m = 2U;
    Code_Gen_Model_DW.is_Algae_Pickup_Low_k = Code_Gen_Mod_IN_Coral_Motor_Off;
    Code_Gen_Model_B.Coral_Wheel_DC_f = 0.0;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_lp) {
    Code__exit_internal_Coral_Eject();
    Code_Gen_Model_DW.is_Coral_h = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_B.Set_Coral_Level_l = 0U;
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_i =
      Code_Gen_M_IN_Algae_Pickup_High;
    Code_Gen_Model_B.State_ID_Auto = 4.3;
    Code_Gen_Model_B.Elevator_Height_Desired_n = Elevator_Height_Algae_High;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_h = Coral_Arm_Angle_Up;
    Code_Gen_Model_B.Set_Algae_Level_m = 3U;
    Code_Gen_Model_DW.is_Algae_Pickup_High_l = Code_Gen_Mod_IN_Coral_Motor_Off;
    Code_Gen_Model_B.Coral_Wheel_DC_f = 0.0;
  } else {
    switch (Code_Gen_Model_DW.is_Coral_Eject_a) {
     case Code_Gen_Model_IN_Eject:
      Code_Gen_Model_B.State_ID_Auto = 3.7;
      if (Code_Gen_Model_DW.timer_l >= Coral_Eject_Time) {
        Code_Gen_Model_DW.is_Coral_Eject_a = Code_Gen_Model_IN_Stop;
        Code_Gen_Model_B.State_ID_Auto = 3.8;
        Code_Gen_Model_B.Coral_Wheel_DC_f = 0.0;
        Code_Gen_Model_B.Coral_Score_j = true;
      } else {
        Code_Gen_Model_DW.timer_l += 0.02;
      }
      break;

     case Code_Gen_Model_IN_Level_2:
      Code_Gen_Model_B.State_ID_Auto = 3.2;
      if ((!Code_Gen_Model_B.Compare) ||
          (Code_Gen_Model_B.FixPtRelationalOperator_dp)) {
        Code_Gen_Model_DW.is_Level_2_h = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
        Code_Gen_Model_DW.is_Coral_Eject_a = Code_Gen_Model_IN_Eject;
        Code_Gen_Model_B.State_ID_Auto = 3.7;
        Code_Gen_Model_B.Coral_Wheel_DC_f = Coral_Motor_DC_Eject;
        Code_Gen_Model_DW.timer_l = 0.0;
      } else if (Code_Gen_Model_DW.is_Level_2_h ==
                 Code_Gen_IN_Auto_Lower_Elevator) {
        if (Code_Gen_Model_B.Elevator_Height_Measured <=
            Elevator_Height_L2_Eject) {
          Code_Gen_Model_DW.is_Level_2_h = Code_Gen_M_IN_Manual_Adjustment;
          Code_Gen_Model_B.Elevator_Height_Desired_n +=
            Code_Gen_Model_ConstB.DeadZone1 * Elevator_Height_Manual_Gain;
          Code_Gen_Model_B.Coral_Arm_Angle_Desired_h +=
            Code_Gen_Model_ConstB.DeadZone * Coral_Arm_Manual_Gain;
        } else {
          Code_Gen_Model_B.Elevator_Height_Desired_n +=
            Elevator_Height_Coral_Score_Lower_Rate;
        }

        /* case IN_Manual_Adjustment: */
      } else if (Code_Gen_Model_B.UnitDelay_b) {
        Code_Gen_Model_DW.is_Level_2_h = Code_Gen_IN_Auto_Lower_Elevator;
        Code_Gen_Model_B.Elevator_Height_Desired_n +=
          Elevator_Height_Coral_Score_Lower_Rate;
      } else {
        Code_Gen_Model_B.Elevator_Height_Desired_n +=
          Code_Gen_Model_ConstB.DeadZone1 * Elevator_Height_Manual_Gain;
        Code_Gen_Model_B.Coral_Arm_Angle_Desired_h +=
          Code_Gen_Model_ConstB.DeadZone * Coral_Arm_Manual_Gain;
      }
      break;

     case Code_Gen_Model_IN_Level_3:
      Code_Gen_Model_Level_3();
      break;

     case Code_Gen_Model_IN_Level_4_Auto:
      Code_Gen_Model_B.State_ID_Auto = 3.5;
      if (!Code_Gen_Model_B.Compare) {
        Code_Gen_Model_DW.is_Level_4_Auto_b = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
        Code_Gen_Model_DW.is_Coral_Eject_a = Code_Gen_Model_IN_Level_4_Timer;
        Code_Gen_Model_B.State_ID_Auto = 3.6;
        Code_Gen_Model_B.Elevator_Height_Desired_n +=
          Elevator_Height_Coral_Score_Lower_Rate;
        Code_Gen_Model_DW.timer_l = 0.02;
      } else if (Code_Gen_Model_DW.is_Level_4_Auto_b ==
                 Code_Gen_Mode_IN_Auto_Lower_Arm) {
        if (Code_Gen_Model_B.Coral_Arm_Angle_Measured <
            Coral_Arm_Angle_L4_Eject_Auto) {
          Code_Gen_Model_DW.is_Level_4_Auto_b = Code_G_IN_Auto_Lower_Elevator_l;
          Code_Gen_Model_B.Elevator_Height_Desired_n +=
            Elevator_Height_Coral_Score_Lower_Rate;
        } else {
          Code_Gen_Model_B.Coral_Arm_Angle_Desired_h +=
            Coral_Arm_Angle_Coral_Score_Lower_Rate;
        }
      } else {
        /* case IN_Auto_Lower_Elevator: */
        Code_Gen_Model_B.Elevator_Height_Desired_n +=
          Elevator_Height_Coral_Score_Lower_Rate;
      }
      break;

     case Code_Gen_Mode_IN_Level_4_Teleop:
      Code_Gen_Model_Level_4_Teleop();
      break;

     case Code_Gen_Model_IN_Level_4_Timer:
      Code_Gen_Model_B.State_ID_Auto = 3.6;
      if (Code_Gen_Model_DW.timer_l >= L4_Switch_Time) {
        Code_Gen_Model_DW.is_Coral_Eject_a = Code_Gen_Model_IN_Eject;
        Code_Gen_Model_B.State_ID_Auto = 3.7;
        Code_Gen_Model_B.Coral_Wheel_DC_f = Coral_Motor_DC_Eject;
        Code_Gen_Model_DW.timer_l = 0.0;
      } else {
        Code_Gen_Model_B.Elevator_Height_Desired_n +=
          Elevator_Height_Coral_Score_Lower_Rate;
        Code_Gen_Model_DW.timer_l += 0.02;
      }
      break;

     default:
      /* case IN_Stop: */
      Code_Gen_Model_B.State_ID_Auto = 3.8;
      Code_Gen_Model_B.Elevator_Height_Desired_n +=
        Code_Gen_Model_ConstB.DeadZone1 * Elevator_Height_Manual_Gain;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_h +=
        Code_Gen_Model_ConstB.DeadZone * Coral_Arm_Manual_Gain;
      break;
    }
  }
}

/* Function for Chart: '<S33>/Reefscape_Chart' */
static void Code_Gen_Model_Coral(const boolean_T *Compare_f, const boolean_T
  *FixPtRelationalOperator_oi, const boolean_T *FixPtRelationalOperator_p, const
  boolean_T *FixPtRelationalOperator_af, const boolean_T
  *FixPtRelationalOperator_oe, const boolean_T *FixPtRelationalOperator_e)
{
  if (Code_Gen_Model_DW.is_Coral_h == Code_Gen_Model_IN_Coral_Eject) {
    Code_Gen_Model_Coral_Eject(Compare_f, FixPtRelationalOperator_oi,
      FixPtRelationalOperator_p, FixPtRelationalOperator_af,
      FixPtRelationalOperator_oe, FixPtRelationalOperator_e);

    /* case IN_Coral_Score_Position: */
  } else if ((((Code_Gen_Model_B.FixPtRelationalOperator_nw) ||
               (Code_Gen_Model_B.FixPtRelationalOperator_o)) ||
              (Code_Gen_Model_B.FixPtRelationalOperator_dd)) ||
             (Code_Gen_Model_B.FixPtRelationalOperator_a)) {
    Code_Gen_Model_DW.Set_L1_m = false;
    Code_Gen_Model_DW.Set_L2_n = false;
    Code_Gen_Model_DW.Set_L3_f = false;
    Code_Gen_Model_DW.Set_L4_j = false;
    Code_Gen_Model_DW.is_Coral_h = Code_Ge_IN_Coral_Score_Position;
    enter_internal_Coral_Score_Posi();
  } else if ((Code_Gen_Model_B.FixPtRelationalOperator_dp) ||
             (Code_Gen_Model_DW.timer_robot_target_d >= AT_On_Target_Time)) {
    Code_Gen_Model_DW.is_Coral_Score_Position_e =
      Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_DW.is_Coral_h = Code_Gen_Model_IN_Coral_Eject;
    Code_enter_internal_Coral_Eject();
  } else if ((*FixPtRelationalOperator_oi) && (!(*Compare_f))) {
    Code_Gen_Model_DW.is_Coral_Score_Position_e =
      Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_DW.is_Coral_h = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_B.Set_Coral_Level_l = 0U;
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_i =
      Code_Gen_Model_IN_Coral_Pickup;
    Code_Gen_Model_DW.is_Actions_f = Code_Ge_IN_Coral_Pickup_Prepare;
    Code_Gen_Model_B.State_ID_Auto = 1.0;
    Code_Gen_Model_B.Elevator_Height_Desired_n = Elevator_Height_Prepare;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_h = -90.0;
    Code_Gen_Model_DW.is_Coral_Pickup_Prepare_k =
      Code_Gen_Mod_IN_Coral_Motor_Off;
    Code_Gen_Model_B.Coral_Wheel_DC_f = 0.0;
    Code_Gen_Model_DW.is_Set_Level_m3 = Code_Gen_Model_IN_None;
    Code_Gen_Model_DW.Set_L1_m = false;
    Code_Gen_Model_DW.Set_L2_n = false;
    Code_Gen_Model_DW.Set_L3_f = false;
    Code_Gen_Model_DW.Set_L4_j = false;
  } else if (*FixPtRelationalOperator_p) {
    if (Code_Gen_Model_B.Coral_Arm_Angle_Measured >=
        Coral_Arm_Angle_Start_Thresh) {
      Code_Gen_Model_DW.is_Coral_Score_Position_e =
        Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Coral_h = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_B.Set_Coral_Level_l = 0U;
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_i =
        Code__IN_Elevator_Height_Bottom;
      Code_Gen_Model_B.State_ID_Auto = 0.2;
      Code_Gen_Model_B.Elevator_Height_Desired_n = Elevator_Height_Bottom;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_h = Coral_Arm_Angle_Up;
      Code_Gen_Model_DW.is_Elevator_Height_Bottom_h =
        Code_Gen_Mod_IN_Coral_Motor_Off;
      Code_Gen_Model_B.Coral_Wheel_DC_f = 0.0;
    } else {
      Code_Gen_Model_DW.is_Coral_Score_Position_e =
        Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Coral_h = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_B.Set_Coral_Level_l = 0U;
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_i =
        C_IN_Elevator_Height_Bottom_pre;
      Code_Gen_Model_B.State_ID_Auto = 0.1;
      Code_Gen_Model_B.Elevator_Height_Desired_n = Elevator_Height_Bottom_Pre;
      Code_Gen_Model_DW.is_Elevator_Height_Bottom_pre_p =
        Code_Gen_Mod_IN_Coral_Motor_Off;
      Code_Gen_Model_B.Coral_Wheel_DC_f = 0.0;
    }
  } else if (*FixPtRelationalOperator_af) {
    Code_Gen_Model_DW.is_Coral_Score_Position_e =
      Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_DW.is_Coral_h = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_B.Set_Coral_Level_l = 0U;
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_i =
      Code_Gen_Mode_IN_End_Game_Climb;
    Code_Gen_Model_B.State_ID_Auto = 4.4;
    Code_Gen_Model_B.Elevator_Height_Desired_n = Elevator_Height_End_Game;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_h = -90.0;
    Code_Gen_Model_DW.is_End_Game_Climb_k = Code_Gen_Mod_IN_Coral_Motor_Off;
    Code_Gen_Model_B.Coral_Wheel_DC_f = 0.0;
  } else if (*FixPtRelationalOperator_oe) {
    Code_Gen_Model_DW.is_Coral_Score_Position_e =
      Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_DW.is_Coral_h = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_B.Set_Coral_Level_l = 0U;
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_i =
      Code_Gen_Model_IN_Algae_Score;
    Code_Gen_Model_B.State_ID_Auto = 4.1;
    Code_Gen_Model_B.Elevator_Height_Desired_n = Elevator_Height_Algae_Score;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_h = Coral_Arm_Angle_Up;
    Code_Gen_Model_DW.is_Algae_Score_f = Code_Gen_Mod_IN_Coral_Motor_Off;
    Code_Gen_Model_B.Coral_Wheel_DC_f = 0.0;
  } else if (*FixPtRelationalOperator_e) {
    Code_Gen_Model_DW.is_Coral_Score_Position_e =
      Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_DW.is_Coral_h = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_B.Set_Coral_Level_l = 0U;
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_i =
      Code_Gen_Mo_IN_Algae_Pickup_Low;
    Code_Gen_Model_B.State_ID_Auto = 4.2;
    Code_Gen_Model_B.Elevator_Height_Desired_n = Elevator_Height_Algae_Low;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_h = Coral_Arm_Angle_Up;
    Code_Gen_Model_B.Set_Algae_Level_m = 2U;
    Code_Gen_Model_DW.is_Algae_Pickup_Low_k = Code_Gen_Mod_IN_Coral_Motor_Off;
    Code_Gen_Model_B.Coral_Wheel_DC_f = 0.0;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_lp) {
    Code_Gen_Model_DW.is_Coral_Score_Position_e =
      Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_DW.is_Coral_h = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_B.Set_Coral_Level_l = 0U;
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_i =
      Code_Gen_M_IN_Algae_Pickup_High;
    Code_Gen_Model_B.State_ID_Auto = 4.3;
    Code_Gen_Model_B.Elevator_Height_Desired_n = Elevator_Height_Algae_High;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_h = Coral_Arm_Angle_Up;
    Code_Gen_Model_B.Set_Algae_Level_m = 3U;
    Code_Gen_Model_DW.is_Algae_Pickup_High_l = Code_Gen_Mod_IN_Coral_Motor_Off;
    Code_Gen_Model_B.Coral_Wheel_DC_f = 0.0;
  } else {
    switch (Code_Gen_Model_DW.is_Coral_Score_Position_e) {
     case Code_Gen_Model_IN_Level_1:
      Code_Gen_Model_B.State_ID_Auto = 2.1;
      if ((Code_Gen_Model_ConstB.DeadZone1 != 0.0) ||
          (Code_Gen_Model_ConstB.DeadZone != 0.0)) {
        Code_Gen_Model_DW.is_Coral_Score_Position_e =
          Code_Gen_IN_Manual_Adjustment_m;
        Code_Gen_Model_B.State_ID_Auto = 2.5;
        Code_Gen_Model_B.Elevator_Height_Desired_n +=
          Code_Gen_Model_ConstB.DeadZone1 * Elevator_Height_Manual_Gain;
        Code_Gen_Model_B.Coral_Arm_Angle_Desired_h +=
          Code_Gen_Model_ConstB.DeadZone * Coral_Arm_Manual_Gain;
      }
      break;

     case Code_Gen_Model_IN_Level_2:
      Code_Gen_Model_Level_2();
      break;

     case Code_Gen_Model_IN_Level_3:
      Code_Gen_Model_Level_3_m();
      break;

     case Code_Gen_Model_IN_Level_4:
      Code_Gen_Model_Level_4();
      break;

     default:
      /* case IN_Manual_Adjustment: */
      Code_Gen_Mode_Manual_Adjustment();
      break;
    }
  }
}

/* Function for Chart: '<S33>/Reefscape_Chart' */
static void Code_exit_internal_Coral_Pickup(void)
{
  Code_Gen_Model_DW.is_Set_Level_m3 = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
  if (Code_Gen_Model_DW.is_Actions_f == Code_IN_Coral_Pickup_Lower_Wait) {
    Code_Gen_Model_B.Coral_Pickup_Lower_Wait_State_o = false;
    Code_Gen_Model_DW.is_Actions_f = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
  } else {
    Code_Gen_Model_DW.is_Coral_Pickup_Prepare_k =
      Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_DW.is_Actions_f = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
  }
}

/* Function for Chart: '<S33>/Reefscape_Chart' */
static void Code_Gen_Model_L4(void)
{
  if (((Code_Gen_Model_B.FixPtRelationalOperator_nw) ||
       (Code_Gen_Model_B.FixPtRelationalOperator_o)) ||
      (Code_Gen_Model_B.FixPtRelationalOperator_dd)) {
    if (Code_Gen_Model_B.FixPtRelationalOperator_nw) {
      Code_Gen_Model_DW.is_Set_Level_m3 = Code_Gen_Model_IN_L1;
      Code_Gen_Model_DW.Set_L1_m = true;
      Code_Gen_Model_DW.Set_L2_n = false;
      Code_Gen_Model_DW.Set_L3_f = false;
      Code_Gen_Model_DW.Set_L4_j = false;
    } else if (Code_Gen_Model_B.FixPtRelationalOperator_o) {
      Code_Gen_Model_DW.is_Set_Level_m3 = Code_Gen_Model_IN_L2;
      Code_Gen_Model_DW.Set_L1_m = false;
      Code_Gen_Model_DW.Set_L2_n = true;
      Code_Gen_Model_DW.Set_L3_f = false;
      Code_Gen_Model_DW.Set_L4_j = false;
    } else if (Code_Gen_Model_B.FixPtRelationalOperator_dd) {
      Code_Gen_Model_DW.is_Set_Level_m3 = Code_Gen_Model_IN_L3;
      Code_Gen_Model_DW.Set_L1_m = false;
      Code_Gen_Model_DW.Set_L2_n = false;
      Code_Gen_Model_DW.Set_L3_f = true;
      Code_Gen_Model_DW.Set_L4_j = false;
    } else if (Code_Gen_Model_B.FixPtRelationalOperator_a) {
      Code_Gen_Model_DW.is_Set_Level_m3 = Code_Gen_Model_IN_L4;
      Code_Gen_Model_DW.Set_L1_m = false;
      Code_Gen_Model_DW.Set_L2_n = false;
      Code_Gen_Model_DW.Set_L3_f = false;
      Code_Gen_Model_DW.Set_L4_j = true;
    }
  }
}

/* Function for Chart: '<S33>/Reefscape_Chart' */
static void Code_Gen_Model_Set_Level(void)
{
  switch (Code_Gen_Model_DW.is_Set_Level_m3) {
   case Code_Gen_Model_IN_L1:
    if (((Code_Gen_Model_B.FixPtRelationalOperator_o) ||
         (Code_Gen_Model_B.FixPtRelationalOperator_dd)) ||
        (Code_Gen_Model_B.FixPtRelationalOperator_a)) {
      if (Code_Gen_Model_B.FixPtRelationalOperator_nw) {
        Code_Gen_Model_DW.is_Set_Level_m3 = Code_Gen_Model_IN_L1;
        Code_Gen_Model_DW.Set_L1_m = true;
        Code_Gen_Model_DW.Set_L2_n = false;
        Code_Gen_Model_DW.Set_L3_f = false;
        Code_Gen_Model_DW.Set_L4_j = false;
      } else if (Code_Gen_Model_B.FixPtRelationalOperator_o) {
        Code_Gen_Model_DW.is_Set_Level_m3 = Code_Gen_Model_IN_L2;
        Code_Gen_Model_DW.Set_L1_m = false;
        Code_Gen_Model_DW.Set_L2_n = true;
        Code_Gen_Model_DW.Set_L3_f = false;
        Code_Gen_Model_DW.Set_L4_j = false;
      } else if (Code_Gen_Model_B.FixPtRelationalOperator_dd) {
        Code_Gen_Model_DW.is_Set_Level_m3 = Code_Gen_Model_IN_L3;
        Code_Gen_Model_DW.Set_L1_m = false;
        Code_Gen_Model_DW.Set_L2_n = false;
        Code_Gen_Model_DW.Set_L3_f = true;
        Code_Gen_Model_DW.Set_L4_j = false;
      } else if (Code_Gen_Model_B.FixPtRelationalOperator_a) {
        Code_Gen_Model_DW.is_Set_Level_m3 = Code_Gen_Model_IN_L4;
        Code_Gen_Model_DW.Set_L1_m = false;
        Code_Gen_Model_DW.Set_L2_n = false;
        Code_Gen_Model_DW.Set_L3_f = false;
        Code_Gen_Model_DW.Set_L4_j = true;
      }
    }
    break;

   case Code_Gen_Model_IN_L2:
    if (((Code_Gen_Model_B.FixPtRelationalOperator_nw) ||
         (Code_Gen_Model_B.FixPtRelationalOperator_dd)) ||
        (Code_Gen_Model_B.FixPtRelationalOperator_a)) {
      if (Code_Gen_Model_B.FixPtRelationalOperator_nw) {
        Code_Gen_Model_DW.is_Set_Level_m3 = Code_Gen_Model_IN_L1;
        Code_Gen_Model_DW.Set_L1_m = true;
        Code_Gen_Model_DW.Set_L2_n = false;
        Code_Gen_Model_DW.Set_L3_f = false;
        Code_Gen_Model_DW.Set_L4_j = false;
      } else if (Code_Gen_Model_B.FixPtRelationalOperator_o) {
        Code_Gen_Model_DW.is_Set_Level_m3 = Code_Gen_Model_IN_L2;
        Code_Gen_Model_DW.Set_L1_m = false;
        Code_Gen_Model_DW.Set_L2_n = true;
        Code_Gen_Model_DW.Set_L3_f = false;
        Code_Gen_Model_DW.Set_L4_j = false;
      } else if (Code_Gen_Model_B.FixPtRelationalOperator_dd) {
        Code_Gen_Model_DW.is_Set_Level_m3 = Code_Gen_Model_IN_L3;
        Code_Gen_Model_DW.Set_L1_m = false;
        Code_Gen_Model_DW.Set_L2_n = false;
        Code_Gen_Model_DW.Set_L3_f = true;
        Code_Gen_Model_DW.Set_L4_j = false;
      } else if (Code_Gen_Model_B.FixPtRelationalOperator_a) {
        Code_Gen_Model_DW.is_Set_Level_m3 = Code_Gen_Model_IN_L4;
        Code_Gen_Model_DW.Set_L1_m = false;
        Code_Gen_Model_DW.Set_L2_n = false;
        Code_Gen_Model_DW.Set_L3_f = false;
        Code_Gen_Model_DW.Set_L4_j = true;
      }
    }
    break;

   case Code_Gen_Model_IN_L3:
    if (((Code_Gen_Model_B.FixPtRelationalOperator_nw) ||
         (Code_Gen_Model_B.FixPtRelationalOperator_o)) ||
        (Code_Gen_Model_B.FixPtRelationalOperator_a)) {
      if (Code_Gen_Model_B.FixPtRelationalOperator_nw) {
        Code_Gen_Model_DW.is_Set_Level_m3 = Code_Gen_Model_IN_L1;
        Code_Gen_Model_DW.Set_L1_m = true;
        Code_Gen_Model_DW.Set_L2_n = false;
        Code_Gen_Model_DW.Set_L3_f = false;
        Code_Gen_Model_DW.Set_L4_j = false;
      } else if (Code_Gen_Model_B.FixPtRelationalOperator_o) {
        Code_Gen_Model_DW.is_Set_Level_m3 = Code_Gen_Model_IN_L2;
        Code_Gen_Model_DW.Set_L1_m = false;
        Code_Gen_Model_DW.Set_L2_n = true;
        Code_Gen_Model_DW.Set_L3_f = false;
        Code_Gen_Model_DW.Set_L4_j = false;
      } else if (Code_Gen_Model_B.FixPtRelationalOperator_dd) {
        Code_Gen_Model_DW.is_Set_Level_m3 = Code_Gen_Model_IN_L3;
        Code_Gen_Model_DW.Set_L1_m = false;
        Code_Gen_Model_DW.Set_L2_n = false;
        Code_Gen_Model_DW.Set_L3_f = true;
        Code_Gen_Model_DW.Set_L4_j = false;
      } else if (Code_Gen_Model_B.FixPtRelationalOperator_a) {
        Code_Gen_Model_DW.is_Set_Level_m3 = Code_Gen_Model_IN_L4;
        Code_Gen_Model_DW.Set_L1_m = false;
        Code_Gen_Model_DW.Set_L2_n = false;
        Code_Gen_Model_DW.Set_L3_f = false;
        Code_Gen_Model_DW.Set_L4_j = true;
      }
    }
    break;

   case Code_Gen_Model_IN_L4:
    Code_Gen_Model_L4();
    break;

   default:
    /* case IN_None: */
    if (Code_Gen_Model_B.FixPtRelationalOperator_nw) {
      Code_Gen_Model_DW.is_Set_Level_m3 = Code_Gen_Model_IN_L1;
      Code_Gen_Model_DW.Set_L1_m = true;
      Code_Gen_Model_DW.Set_L2_n = false;
      Code_Gen_Model_DW.Set_L3_f = false;
      Code_Gen_Model_DW.Set_L4_j = false;
    } else if (Code_Gen_Model_B.FixPtRelationalOperator_o) {
      Code_Gen_Model_DW.is_Set_Level_m3 = Code_Gen_Model_IN_L2;
      Code_Gen_Model_DW.Set_L1_m = false;
      Code_Gen_Model_DW.Set_L2_n = true;
      Code_Gen_Model_DW.Set_L3_f = false;
      Code_Gen_Model_DW.Set_L4_j = false;
    } else if (Code_Gen_Model_B.FixPtRelationalOperator_dd) {
      Code_Gen_Model_DW.is_Set_Level_m3 = Code_Gen_Model_IN_L3;
      Code_Gen_Model_DW.Set_L1_m = false;
      Code_Gen_Model_DW.Set_L2_n = false;
      Code_Gen_Model_DW.Set_L3_f = true;
      Code_Gen_Model_DW.Set_L4_j = false;
    } else if (Code_Gen_Model_B.FixPtRelationalOperator_a) {
      Code_Gen_Model_DW.is_Set_Level_m3 = Code_Gen_Model_IN_L4;
      Code_Gen_Model_DW.Set_L1_m = false;
      Code_Gen_Model_DW.Set_L2_n = false;
      Code_Gen_Model_DW.Set_L3_f = false;
      Code_Gen_Model_DW.Set_L4_j = true;
    }
    break;
  }
}

/* Function for Chart: '<S33>/Reefscape_Chart' */
static void Code_Gen_Model_Coral_Pickup(const boolean_T *Compare_f, const
  boolean_T *FixPtRelationalOperator_oi, const boolean_T
  *FixPtRelationalOperator_p, const boolean_T *FixPtRelationalOperator_af, const
  boolean_T *FixPtRelationalOperator_oe, const boolean_T
  *FixPtRelationalOperator_e)
{
  if ((*FixPtRelationalOperator_oi) && (!(*Compare_f))) {
    Code_exit_internal_Coral_Pickup();
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_i =
      Code_Gen_Model_IN_Coral_Pickup;
    Code_Gen_Model_DW.is_Actions_f = Code_Ge_IN_Coral_Pickup_Prepare;
    Code_Gen_Model_B.State_ID_Auto = 1.0;
    Code_Gen_Model_B.Elevator_Height_Desired_n = Elevator_Height_Prepare;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_h = -90.0;
    Code_Gen_Model_DW.is_Coral_Pickup_Prepare_k =
      Code_Gen_Mod_IN_Coral_Motor_Off;
    Code_Gen_Model_B.Coral_Wheel_DC_f = 0.0;
    Code_Gen_Model_DW.is_Set_Level_m3 = Code_Gen_Model_IN_None;
    Code_Gen_Model_DW.Set_L1_m = false;
    Code_Gen_Model_DW.Set_L2_n = false;
    Code_Gen_Model_DW.Set_L3_f = false;
    Code_Gen_Model_DW.Set_L4_j = false;
  } else if (*FixPtRelationalOperator_p) {
    if (Code_Gen_Model_B.Coral_Arm_Angle_Measured >=
        Coral_Arm_Angle_Start_Thresh) {
      Code_exit_internal_Coral_Pickup();
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_i =
        Code__IN_Elevator_Height_Bottom;
      Code_Gen_Model_B.State_ID_Auto = 0.2;
      Code_Gen_Model_B.Elevator_Height_Desired_n = Elevator_Height_Bottom;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_h = Coral_Arm_Angle_Up;
      Code_Gen_Model_DW.is_Elevator_Height_Bottom_h =
        Code_Gen_Mod_IN_Coral_Motor_Off;
      Code_Gen_Model_B.Coral_Wheel_DC_f = 0.0;
    } else {
      Code_exit_internal_Coral_Pickup();
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_i =
        C_IN_Elevator_Height_Bottom_pre;
      Code_Gen_Model_B.State_ID_Auto = 0.1;
      Code_Gen_Model_B.Elevator_Height_Desired_n = Elevator_Height_Bottom_Pre;
      Code_Gen_Model_DW.is_Elevator_Height_Bottom_pre_p =
        Code_Gen_Mod_IN_Coral_Motor_Off;
      Code_Gen_Model_B.Coral_Wheel_DC_f = 0.0;
    }
  } else if (*FixPtRelationalOperator_af) {
    Code_exit_internal_Coral_Pickup();
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_i =
      Code_Gen_Mode_IN_End_Game_Climb;
    Code_Gen_Model_B.State_ID_Auto = 4.4;
    Code_Gen_Model_B.Elevator_Height_Desired_n = Elevator_Height_End_Game;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_h = -90.0;
    Code_Gen_Model_DW.is_End_Game_Climb_k = Code_Gen_Mod_IN_Coral_Motor_Off;
    Code_Gen_Model_B.Coral_Wheel_DC_f = 0.0;
  } else if (*FixPtRelationalOperator_oe) {
    Code_exit_internal_Coral_Pickup();
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_i =
      Code_Gen_Model_IN_Algae_Score;
    Code_Gen_Model_B.State_ID_Auto = 4.1;
    Code_Gen_Model_B.Elevator_Height_Desired_n = Elevator_Height_Algae_Score;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_h = Coral_Arm_Angle_Up;
    Code_Gen_Model_DW.is_Algae_Score_f = Code_Gen_Mod_IN_Coral_Motor_Off;
    Code_Gen_Model_B.Coral_Wheel_DC_f = 0.0;
  } else if (*FixPtRelationalOperator_e) {
    Code_exit_internal_Coral_Pickup();
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_i =
      Code_Gen_Mo_IN_Algae_Pickup_Low;
    Code_Gen_Model_B.State_ID_Auto = 4.2;
    Code_Gen_Model_B.Elevator_Height_Desired_n = Elevator_Height_Algae_Low;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_h = Coral_Arm_Angle_Up;
    Code_Gen_Model_B.Set_Algae_Level_m = 2U;
    Code_Gen_Model_DW.is_Algae_Pickup_Low_k = Code_Gen_Mod_IN_Coral_Motor_Off;
    Code_Gen_Model_B.Coral_Wheel_DC_f = 0.0;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_lp) {
    Code_exit_internal_Coral_Pickup();
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_i =
      Code_Gen_M_IN_Algae_Pickup_High;
    Code_Gen_Model_B.State_ID_Auto = 4.3;
    Code_Gen_Model_B.Elevator_Height_Desired_n = Elevator_Height_Algae_High;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_h = Coral_Arm_Angle_Up;
    Code_Gen_Model_B.Set_Algae_Level_m = 3U;
    Code_Gen_Model_DW.is_Algae_Pickup_High_l = Code_Gen_Mod_IN_Coral_Motor_Off;
    Code_Gen_Model_B.Coral_Wheel_DC_f = 0.0;
  } else {
    switch (Code_Gen_Model_DW.is_Actions_f) {
     case Code_Gen__IN_Coral_Pickup_Lower:
      Code_Gen_Model_B.State_ID_Auto = 1.1;
      if (Code_Gen_Model_B.Compare) {
        Code_Gen_Model_DW.is_Actions_f = Code_IN_Coral_Pickup_Lower_Wait;
        Code_Gen_Model_B.State_ID_Auto = 1.2;
        Code_Gen_Model_B.Coral_Pickup_Lower_Wait_State_o = true;
        Code_Gen_Model_B.Coral_Wheel_DC_f = Coral_Motor_DC_Hold;
        Code_Gen_Model_B.Elevator_LowerPickup_Reset_i = false;
        Code_Gen_Model_DW.timer_l = 0.0;
      } else {
        Code_Gen_Model_B.Elevator_Height_Desired_n +=
          Code_Gen_Model_ConstB.DeadZone1 * Elevator_Height_Manual_Gain;
        Code_Gen_Model_B.Coral_Arm_Angle_Desired_h +=
          Code_Gen_Model_ConstB.DeadZone * Coral_Arm_Manual_Gain;
      }
      break;

     case Code_IN_Coral_Pickup_Lower_Wait:
      Code_Gen_Model_B.State_ID_Auto = 1.2;
      Code_Gen_Model_B.Elevator_LowerPickup_Reset_i = false;
      if ((Code_Gen_Model_DW.timer_l >= Elevator_LowerPickup_Time) &&
          ((((Code_Gen_Model_DW.Set_L1_m) || (Code_Gen_Model_DW.Set_L2_n)) ||
            (Code_Gen_Model_DW.Set_L3_f)) || (Code_Gen_Model_DW.Set_L4_j))) {
        Code_Gen_Model_B.Coral_Pickup_Lower_Wait_State_o = false;
        Code_Gen_Model_DW.is_Actions_f = Code_Gen__IN_Coral_Pickup_Raise;
        Code_Gen_Model_B.State_ID_Auto = 1.3;
        Code_Gen_Model_B.Elevator_Height_Desired_n = Elevator_Height_Raise;
      } else {
        Code_Gen_Model_DW.timer_l += 0.02;
        Code_Gen_Model_B.Elevator_Height_Desired_n +=
          Code_Gen_Model_ConstB.DeadZone1 * Elevator_Height_Manual_Gain;
        Code_Gen_Model_B.Coral_Arm_Angle_Desired_h +=
          Code_Gen_Model_ConstB.DeadZone * Coral_Arm_Manual_Gain;
      }
      break;

     case Code_Ge_IN_Coral_Pickup_Prepare:
      Code_Gen_Model_B.State_ID_Auto = 1.0;

      /* Inport: '<Root>/Coral_TOF_Distance' */
      if ((fabs(Code_Gen_Model_B.Elevator_Height_Desired_n -
                Code_Gen_Model_B.Elevator_Height_Measured) <=
           Elevator_Height_Error_Threshold) && ((fabs
            (Code_Gen_Model_B.Coral_Arm_Angle_Desired_h -
             Code_Gen_Model_B.Coral_Arm_Angle_Measured) <=
            Coral_Arm_Angle_Error_Threshold) &&
           (Code_Gen_Model_U.Coral_TOF_Distance < Coral_Detect_Distance))) {
        Code_Gen_Model_DW.is_Coral_Pickup_Prepare_k =
          Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
        Code_Gen_Model_DW.is_Actions_f = Code_Gen__IN_Coral_Pickup_Lower;
        Code_Gen_Model_B.State_ID_Auto = 1.1;
        Code_Gen_Model_B.Elevator_Height_Desired_n = Elevator_Height_Lower;
        Code_Gen_Model_B.Coral_Wheel_DC_f = Coral_Motor_DC_Pickup;
      } else {
        Code_Gen_Model_B.Elevator_Height_Desired_n +=
          Code_Gen_Model_ConstB.DeadZone1 * Elevator_Height_Manual_Gain;
        Code_Gen_Model_B.Coral_Arm_Angle_Desired_h +=
          Code_Gen_Model_ConstB.DeadZone * Coral_Arm_Manual_Gain;
        if (Code_Gen_Model_DW.is_Coral_Pickup_Prepare_k ==
            Code_Gen_Model_IN_Coral_Eject) {
          if (Code_Gen_Model_DW.timer_l >= Coral_Eject_Time) {
            Code_Gen_Model_DW.is_Coral_Pickup_Prepare_k =
              Code_Gen_Mod_IN_Coral_Motor_Off;
            Code_Gen_Model_B.Coral_Wheel_DC_f = 0.0;
          } else {
            Code_Gen_Model_DW.timer_l += 0.02;
          }

          /* case IN_Coral_Motor_Off: */
        } else if (Code_Gen_Model_B.FixPtRelationalOperator_dp) {
          Code_Gen_Model_DW.is_Coral_Pickup_Prepare_k =
            Code_Gen_Model_IN_Coral_Eject;
          Code_Gen_Model_B.Coral_Wheel_DC_f = Coral_Motor_DC_Eject;
          Code_Gen_Model_DW.timer_l = 0.0;
        }
      }

      /* End of Inport: '<Root>/Coral_TOF_Distance' */
      break;

     default:
      /* case IN_Coral_Pickup_Raise: */
      Code_Gen_Model_B.State_ID_Auto = 1.3;
      if ((fabs(Code_Gen_Model_B.Elevator_Height_Desired_n -
                Code_Gen_Model_B.Elevator_Height_Measured) <=
           Elevator_Height_Error_Threshold) && ((((Code_Gen_Model_DW.Set_L1_m) ||
             (Code_Gen_Model_DW.Set_L2_n)) || (Code_Gen_Model_DW.Set_L3_f)) ||
           (Code_Gen_Model_DW.Set_L4_j))) {
        Code_exit_internal_Coral_Pickup();
        Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_i =
          Code_Gen_Model_IN_Start_Angle;
        Code_Gen_Model_B.State_ID_Auto = 2.0;
        Code_Gen_Model_B.Coral_Arm_Angle_Desired_h = Coral_Arm_Angle_Start;
      } else {
        Code_Gen_Model_B.Elevator_Height_Desired_n +=
          Code_Gen_Model_ConstB.DeadZone1 * Elevator_Height_Manual_Gain;
        Code_Gen_Model_B.Coral_Arm_Angle_Desired_h +=
          Code_Gen_Model_ConstB.DeadZone * Coral_Arm_Manual_Gain;
      }
      break;
    }

    if (Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_i ==
        Code_Gen_Model_IN_Coral_Pickup) {
      Code_Gen_Model_Set_Level();
    }
  }
}

/* Function for Chart: '<S33>/Reefscape_Chart' */
static void Code_Gen_Elevator_Height_Bottom(const boolean_T *Compare_f, const
  boolean_T *FixPtRelationalOperator_oi, const boolean_T
  *FixPtRelationalOperator_p, const boolean_T *FixPtRelationalOperator_af, const
  boolean_T *FixPtRelationalOperator_oe, const boolean_T
  *FixPtRelationalOperator_e)
{
  Code_Gen_Model_B.State_ID_Auto = 0.2;
  if ((*FixPtRelationalOperator_oi) && (!(*Compare_f))) {
    Code_Gen_Model_DW.is_Elevator_Height_Bottom_h =
      Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_i =
      Code_Gen_Model_IN_Coral_Pickup;
    Code_Gen_Model_DW.is_Actions_f = Code_Ge_IN_Coral_Pickup_Prepare;
    Code_Gen_Model_B.State_ID_Auto = 1.0;
    Code_Gen_Model_B.Elevator_Height_Desired_n = Elevator_Height_Prepare;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_h = -90.0;
    Code_Gen_Model_DW.is_Coral_Pickup_Prepare_k =
      Code_Gen_Mod_IN_Coral_Motor_Off;
    Code_Gen_Model_B.Coral_Wheel_DC_f = 0.0;
    Code_Gen_Model_DW.is_Set_Level_m3 = Code_Gen_Model_IN_None;
    Code_Gen_Model_DW.Set_L1_m = false;
    Code_Gen_Model_DW.Set_L2_n = false;
    Code_Gen_Model_DW.Set_L3_f = false;
    Code_Gen_Model_DW.Set_L4_j = false;
  } else if (*FixPtRelationalOperator_p) {
    if (Code_Gen_Model_B.Coral_Arm_Angle_Measured >=
        Coral_Arm_Angle_Start_Thresh) {
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_i =
        Code__IN_Elevator_Height_Bottom;
      Code_Gen_Model_B.Elevator_Height_Desired_n = Elevator_Height_Bottom;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_h = Coral_Arm_Angle_Up;
      Code_Gen_Model_DW.is_Elevator_Height_Bottom_h =
        Code_Gen_Mod_IN_Coral_Motor_Off;
      Code_Gen_Model_B.Coral_Wheel_DC_f = 0.0;
    } else {
      Code_Gen_Model_DW.is_Elevator_Height_Bottom_h =
        Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_i =
        C_IN_Elevator_Height_Bottom_pre;
      Code_Gen_Model_B.State_ID_Auto = 0.1;
      Code_Gen_Model_B.Elevator_Height_Desired_n = Elevator_Height_Bottom_Pre;
      Code_Gen_Model_DW.is_Elevator_Height_Bottom_pre_p =
        Code_Gen_Mod_IN_Coral_Motor_Off;
      Code_Gen_Model_B.Coral_Wheel_DC_f = 0.0;
    }
  } else if (*FixPtRelationalOperator_af) {
    Code_Gen_Model_DW.is_Elevator_Height_Bottom_h =
      Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_i =
      Code_Gen_Mode_IN_End_Game_Climb;
    Code_Gen_Model_B.State_ID_Auto = 4.4;
    Code_Gen_Model_B.Elevator_Height_Desired_n = Elevator_Height_End_Game;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_h = -90.0;
    Code_Gen_Model_DW.is_End_Game_Climb_k = Code_Gen_Mod_IN_Coral_Motor_Off;
    Code_Gen_Model_B.Coral_Wheel_DC_f = 0.0;
  } else if (*FixPtRelationalOperator_oe) {
    Code_Gen_Model_DW.is_Elevator_Height_Bottom_h =
      Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_i =
      Code_Gen_Model_IN_Algae_Score;
    Code_Gen_Model_B.State_ID_Auto = 4.1;
    Code_Gen_Model_B.Elevator_Height_Desired_n = Elevator_Height_Algae_Score;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_h = Coral_Arm_Angle_Up;
    Code_Gen_Model_DW.is_Algae_Score_f = Code_Gen_Mod_IN_Coral_Motor_Off;
    Code_Gen_Model_B.Coral_Wheel_DC_f = 0.0;
  } else if (*FixPtRelationalOperator_e) {
    Code_Gen_Model_DW.is_Elevator_Height_Bottom_h =
      Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_i =
      Code_Gen_Mo_IN_Algae_Pickup_Low;
    Code_Gen_Model_B.State_ID_Auto = 4.2;
    Code_Gen_Model_B.Elevator_Height_Desired_n = Elevator_Height_Algae_Low;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_h = Coral_Arm_Angle_Up;
    Code_Gen_Model_B.Set_Algae_Level_m = 2U;
    Code_Gen_Model_DW.is_Algae_Pickup_Low_k = Code_Gen_Mod_IN_Coral_Motor_Off;
    Code_Gen_Model_B.Coral_Wheel_DC_f = 0.0;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_lp) {
    Code_Gen_Model_DW.is_Elevator_Height_Bottom_h =
      Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_i =
      Code_Gen_M_IN_Algae_Pickup_High;
    Code_Gen_Model_B.State_ID_Auto = 4.3;
    Code_Gen_Model_B.Elevator_Height_Desired_n = Elevator_Height_Algae_High;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_h = Coral_Arm_Angle_Up;
    Code_Gen_Model_B.Set_Algae_Level_m = 3U;
    Code_Gen_Model_DW.is_Algae_Pickup_High_l = Code_Gen_Mod_IN_Coral_Motor_Off;
    Code_Gen_Model_B.Coral_Wheel_DC_f = 0.0;
  } else {
    Code_Gen_Model_B.Elevator_Height_Desired_n +=
      Code_Gen_Model_ConstB.DeadZone1 * Elevator_Height_Manual_Gain;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_h += Code_Gen_Model_ConstB.DeadZone
      * Coral_Arm_Manual_Gain;
    if (Code_Gen_Model_DW.is_Elevator_Height_Bottom_h ==
        Code_Gen_Model_IN_Coral_Eject) {
      if (Code_Gen_Model_DW.timer_l >= Coral_Eject_Time) {
        Code_Gen_Model_DW.is_Elevator_Height_Bottom_h =
          Code_Gen_Mod_IN_Coral_Motor_Off;
        Code_Gen_Model_B.Coral_Wheel_DC_f = 0.0;
      } else {
        Code_Gen_Model_DW.timer_l += 0.02;
      }

      /* case IN_Coral_Motor_Off: */
    } else if (Code_Gen_Model_B.FixPtRelationalOperator_dp) {
      Code_Gen_Model_DW.is_Elevator_Height_Bottom_h =
        Code_Gen_Model_IN_Coral_Eject;
      Code_Gen_Model_B.Coral_Wheel_DC_f = Coral_Motor_DC_Eject;
      Code_Gen_Model_DW.timer_l = 0.0;
    }
  }
}

/* Function for Chart: '<S33>/Reefscape_Chart' */
static void Code_Elevator_Height_Bottom_pre(const boolean_T *Compare_f, const
  boolean_T *FixPtRelationalOperator_oi, const boolean_T
  *FixPtRelationalOperator_p, const boolean_T *FixPtRelationalOperator_af, const
  boolean_T *FixPtRelationalOperator_oe, const boolean_T
  *FixPtRelationalOperator_e)
{
  boolean_T guard1;
  Code_Gen_Model_B.State_ID_Auto = 0.1;
  guard1 = false;
  if (Code_Gen_Model_B.Elevator_Height_Measured >
      (Code_Gen_Model_B.Elevator_Height_Desired_n -
       Elevator_Height_Error_Threshold)) {
    guard1 = true;
  } else if ((*FixPtRelationalOperator_oi) && (!(*Compare_f))) {
    Code_Gen_Model_DW.is_Elevator_Height_Bottom_pre_p =
      Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_i =
      Code_Gen_Model_IN_Coral_Pickup;
    Code_Gen_Model_DW.is_Actions_f = Code_Ge_IN_Coral_Pickup_Prepare;
    Code_Gen_Model_B.State_ID_Auto = 1.0;
    Code_Gen_Model_B.Elevator_Height_Desired_n = Elevator_Height_Prepare;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_h = -90.0;
    Code_Gen_Model_DW.is_Coral_Pickup_Prepare_k =
      Code_Gen_Mod_IN_Coral_Motor_Off;
    Code_Gen_Model_B.Coral_Wheel_DC_f = 0.0;
    Code_Gen_Model_DW.is_Set_Level_m3 = Code_Gen_Model_IN_None;
    Code_Gen_Model_DW.Set_L1_m = false;
    Code_Gen_Model_DW.Set_L2_n = false;
    Code_Gen_Model_DW.Set_L3_f = false;
    Code_Gen_Model_DW.Set_L4_j = false;
  } else if (*FixPtRelationalOperator_p) {
    if (Code_Gen_Model_B.Coral_Arm_Angle_Measured >=
        Coral_Arm_Angle_Start_Thresh) {
      guard1 = true;
    } else {
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_i =
        C_IN_Elevator_Height_Bottom_pre;
      Code_Gen_Model_B.Elevator_Height_Desired_n = Elevator_Height_Bottom_Pre;
      Code_Gen_Model_DW.is_Elevator_Height_Bottom_pre_p =
        Code_Gen_Mod_IN_Coral_Motor_Off;
      Code_Gen_Model_B.Coral_Wheel_DC_f = 0.0;
    }
  } else if (*FixPtRelationalOperator_af) {
    Code_Gen_Model_DW.is_Elevator_Height_Bottom_pre_p =
      Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_i =
      Code_Gen_Mode_IN_End_Game_Climb;
    Code_Gen_Model_B.State_ID_Auto = 4.4;
    Code_Gen_Model_B.Elevator_Height_Desired_n = Elevator_Height_End_Game;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_h = -90.0;
    Code_Gen_Model_DW.is_End_Game_Climb_k = Code_Gen_Mod_IN_Coral_Motor_Off;
    Code_Gen_Model_B.Coral_Wheel_DC_f = 0.0;
  } else if (*FixPtRelationalOperator_oe) {
    Code_Gen_Model_DW.is_Elevator_Height_Bottom_pre_p =
      Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_i =
      Code_Gen_Model_IN_Algae_Score;
    Code_Gen_Model_B.State_ID_Auto = 4.1;
    Code_Gen_Model_B.Elevator_Height_Desired_n = Elevator_Height_Algae_Score;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_h = Coral_Arm_Angle_Up;
    Code_Gen_Model_DW.is_Algae_Score_f = Code_Gen_Mod_IN_Coral_Motor_Off;
    Code_Gen_Model_B.Coral_Wheel_DC_f = 0.0;
  } else if (*FixPtRelationalOperator_e) {
    Code_Gen_Model_DW.is_Elevator_Height_Bottom_pre_p =
      Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_i =
      Code_Gen_Mo_IN_Algae_Pickup_Low;
    Code_Gen_Model_B.State_ID_Auto = 4.2;
    Code_Gen_Model_B.Elevator_Height_Desired_n = Elevator_Height_Algae_Low;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_h = Coral_Arm_Angle_Up;
    Code_Gen_Model_B.Set_Algae_Level_m = 2U;
    Code_Gen_Model_DW.is_Algae_Pickup_Low_k = Code_Gen_Mod_IN_Coral_Motor_Off;
    Code_Gen_Model_B.Coral_Wheel_DC_f = 0.0;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_lp) {
    Code_Gen_Model_DW.is_Elevator_Height_Bottom_pre_p =
      Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_i =
      Code_Gen_M_IN_Algae_Pickup_High;
    Code_Gen_Model_B.State_ID_Auto = 4.3;
    Code_Gen_Model_B.Elevator_Height_Desired_n = Elevator_Height_Algae_High;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_h = Coral_Arm_Angle_Up;
    Code_Gen_Model_B.Set_Algae_Level_m = 3U;
    Code_Gen_Model_DW.is_Algae_Pickup_High_l = Code_Gen_Mod_IN_Coral_Motor_Off;
    Code_Gen_Model_B.Coral_Wheel_DC_f = 0.0;
  } else {
    Code_Gen_Model_B.Elevator_Height_Desired_n +=
      Code_Gen_Model_ConstB.DeadZone1 * Elevator_Height_Manual_Gain;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_h += Code_Gen_Model_ConstB.DeadZone
      * Coral_Arm_Manual_Gain;
    if (Code_Gen_Model_DW.is_Elevator_Height_Bottom_pre_p ==
        Code_Gen_Model_IN_Coral_Eject) {
      if (Code_Gen_Model_DW.timer_l >= Coral_Eject_Time) {
        Code_Gen_Model_DW.is_Elevator_Height_Bottom_pre_p =
          Code_Gen_Mod_IN_Coral_Motor_Off;
        Code_Gen_Model_B.Coral_Wheel_DC_f = 0.0;
      } else {
        Code_Gen_Model_DW.timer_l += 0.02;
      }

      /* case IN_Coral_Motor_Off: */
    } else if (Code_Gen_Model_B.FixPtRelationalOperator_dp) {
      Code_Gen_Model_DW.is_Elevator_Height_Bottom_pre_p =
        Code_Gen_Model_IN_Coral_Eject;
      Code_Gen_Model_B.Coral_Wheel_DC_f = Coral_Motor_DC_Eject;
      Code_Gen_Model_DW.timer_l = 0.0;
    }
  }

  if (guard1) {
    Code_Gen_Model_DW.is_Elevator_Height_Bottom_pre_p =
      Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_i =
      Code__IN_Elevator_Height_Bottom;
    Code_Gen_Model_B.State_ID_Auto = 0.2;
    Code_Gen_Model_B.Elevator_Height_Desired_n = Elevator_Height_Bottom;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_h = Coral_Arm_Angle_Up;
    Code_Gen_Model_DW.is_Elevator_Height_Bottom_h =
      Code_Gen_Mod_IN_Coral_Motor_Off;
    Code_Gen_Model_B.Coral_Wheel_DC_f = 0.0;
  }
}

/* Function for Chart: '<S33>/Reefscape_Chart' */
static void Code_Gen_Model_End_Game_Climb(const boolean_T *Compare_f, const
  boolean_T *FixPtRelationalOperator_oi, const boolean_T
  *FixPtRelationalOperator_p, const boolean_T *FixPtRelationalOperator_af, const
  boolean_T *FixPtRelationalOperator_oe, const boolean_T
  *FixPtRelationalOperator_e)
{
  Code_Gen_Model_B.State_ID_Auto = 4.4;
  if ((*FixPtRelationalOperator_oi) && (!(*Compare_f))) {
    Code_Gen_Model_DW.is_End_Game_Climb_k = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_i =
      Code_Gen_Model_IN_Coral_Pickup;
    Code_Gen_Model_DW.is_Actions_f = Code_Ge_IN_Coral_Pickup_Prepare;
    Code_Gen_Model_B.State_ID_Auto = 1.0;
    Code_Gen_Model_B.Elevator_Height_Desired_n = Elevator_Height_Prepare;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_h = -90.0;
    Code_Gen_Model_DW.is_Coral_Pickup_Prepare_k =
      Code_Gen_Mod_IN_Coral_Motor_Off;
    Code_Gen_Model_B.Coral_Wheel_DC_f = 0.0;
    Code_Gen_Model_DW.is_Set_Level_m3 = Code_Gen_Model_IN_None;
    Code_Gen_Model_DW.Set_L1_m = false;
    Code_Gen_Model_DW.Set_L2_n = false;
    Code_Gen_Model_DW.Set_L3_f = false;
    Code_Gen_Model_DW.Set_L4_j = false;
  } else if (*FixPtRelationalOperator_p) {
    if (Code_Gen_Model_B.Coral_Arm_Angle_Measured >=
        Coral_Arm_Angle_Start_Thresh) {
      Code_Gen_Model_DW.is_End_Game_Climb_k = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_i =
        Code__IN_Elevator_Height_Bottom;
      Code_Gen_Model_B.State_ID_Auto = 0.2;
      Code_Gen_Model_B.Elevator_Height_Desired_n = Elevator_Height_Bottom;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_h = Coral_Arm_Angle_Up;
      Code_Gen_Model_DW.is_Elevator_Height_Bottom_h =
        Code_Gen_Mod_IN_Coral_Motor_Off;
      Code_Gen_Model_B.Coral_Wheel_DC_f = 0.0;
    } else {
      Code_Gen_Model_DW.is_End_Game_Climb_k = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_i =
        C_IN_Elevator_Height_Bottom_pre;
      Code_Gen_Model_B.State_ID_Auto = 0.1;
      Code_Gen_Model_B.Elevator_Height_Desired_n = Elevator_Height_Bottom_Pre;
      Code_Gen_Model_DW.is_Elevator_Height_Bottom_pre_p =
        Code_Gen_Mod_IN_Coral_Motor_Off;
      Code_Gen_Model_B.Coral_Wheel_DC_f = 0.0;
    }
  } else if (*FixPtRelationalOperator_af) {
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_i =
      Code_Gen_Mode_IN_End_Game_Climb;
    Code_Gen_Model_B.Elevator_Height_Desired_n = Elevator_Height_End_Game;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_h = -90.0;
    Code_Gen_Model_DW.is_End_Game_Climb_k = Code_Gen_Mod_IN_Coral_Motor_Off;
    Code_Gen_Model_B.Coral_Wheel_DC_f = 0.0;
  } else if (*FixPtRelationalOperator_oe) {
    Code_Gen_Model_DW.is_End_Game_Climb_k = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_i =
      Code_Gen_Model_IN_Algae_Score;
    Code_Gen_Model_B.State_ID_Auto = 4.1;
    Code_Gen_Model_B.Elevator_Height_Desired_n = Elevator_Height_Algae_Score;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_h = Coral_Arm_Angle_Up;
    Code_Gen_Model_DW.is_Algae_Score_f = Code_Gen_Mod_IN_Coral_Motor_Off;
    Code_Gen_Model_B.Coral_Wheel_DC_f = 0.0;
  } else if (*FixPtRelationalOperator_e) {
    Code_Gen_Model_DW.is_End_Game_Climb_k = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_i =
      Code_Gen_Mo_IN_Algae_Pickup_Low;
    Code_Gen_Model_B.State_ID_Auto = 4.2;
    Code_Gen_Model_B.Elevator_Height_Desired_n = Elevator_Height_Algae_Low;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_h = Coral_Arm_Angle_Up;
    Code_Gen_Model_B.Set_Algae_Level_m = 2U;
    Code_Gen_Model_DW.is_Algae_Pickup_Low_k = Code_Gen_Mod_IN_Coral_Motor_Off;
    Code_Gen_Model_B.Coral_Wheel_DC_f = 0.0;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_lp) {
    Code_Gen_Model_DW.is_End_Game_Climb_k = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_i =
      Code_Gen_M_IN_Algae_Pickup_High;
    Code_Gen_Model_B.State_ID_Auto = 4.3;
    Code_Gen_Model_B.Elevator_Height_Desired_n = Elevator_Height_Algae_High;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_h = Coral_Arm_Angle_Up;
    Code_Gen_Model_B.Set_Algae_Level_m = 3U;
    Code_Gen_Model_DW.is_Algae_Pickup_High_l = Code_Gen_Mod_IN_Coral_Motor_Off;
    Code_Gen_Model_B.Coral_Wheel_DC_f = 0.0;
  } else {
    Code_Gen_Model_B.Elevator_Height_Desired_n +=
      Code_Gen_Model_ConstB.DeadZone1 * Elevator_Height_Manual_Gain;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_h += Code_Gen_Model_ConstB.DeadZone
      * Coral_Arm_Manual_Gain;
    if (Code_Gen_Model_DW.is_End_Game_Climb_k == Code_Gen_Model_IN_Coral_Eject)
    {
      if (Code_Gen_Model_DW.timer_l >= Coral_Eject_Time) {
        Code_Gen_Model_DW.is_End_Game_Climb_k = Code_Gen_Mod_IN_Coral_Motor_Off;
        Code_Gen_Model_B.Coral_Wheel_DC_f = 0.0;
      } else {
        Code_Gen_Model_DW.timer_l += 0.02;
      }

      /* case IN_Coral_Motor_Off: */
    } else if (Code_Gen_Model_B.FixPtRelationalOperator_dp) {
      Code_Gen_Model_DW.is_End_Game_Climb_k = Code_Gen_Model_IN_Coral_Eject;
      Code_Gen_Model_B.Coral_Wheel_DC_f = Coral_Motor_DC_Eject;
      Code_Gen_Model_DW.timer_l = 0.0;
    }
  }
}

/* Function for Chart: '<S33>/Reefscape_Chart' */
static void Code_Gen_Model_L4_e(void)
{
  if (((Code_Gen_Model_B.FixPtRelationalOperator_nw) ||
       (Code_Gen_Model_B.FixPtRelationalOperator_o)) ||
      (Code_Gen_Model_B.FixPtRelationalOperator_dd)) {
    if (Code_Gen_Model_B.FixPtRelationalOperator_nw) {
      Code_Gen_Model_DW.is_Set_Level_o = Code_Gen_Model_IN_L1;
      Code_Gen_Model_DW.Set_L1_m = true;
      Code_Gen_Model_DW.Set_L2_n = false;
      Code_Gen_Model_DW.Set_L3_f = false;
      Code_Gen_Model_DW.Set_L4_j = false;
    } else if (Code_Gen_Model_B.FixPtRelationalOperator_o) {
      Code_Gen_Model_DW.is_Set_Level_o = Code_Gen_Model_IN_L2;
      Code_Gen_Model_DW.Set_L1_m = false;
      Code_Gen_Model_DW.Set_L2_n = true;
      Code_Gen_Model_DW.Set_L3_f = false;
      Code_Gen_Model_DW.Set_L4_j = false;
    } else if (Code_Gen_Model_B.FixPtRelationalOperator_dd) {
      Code_Gen_Model_DW.is_Set_Level_o = Code_Gen_Model_IN_L3;
      Code_Gen_Model_DW.Set_L1_m = false;
      Code_Gen_Model_DW.Set_L2_n = false;
      Code_Gen_Model_DW.Set_L3_f = true;
      Code_Gen_Model_DW.Set_L4_j = false;
    } else if (Code_Gen_Model_B.FixPtRelationalOperator_a) {
      Code_Gen_Model_DW.is_Set_Level_o = Code_Gen_Model_IN_L4;
      Code_Gen_Model_DW.Set_L1_m = false;
      Code_Gen_Model_DW.Set_L2_n = false;
      Code_Gen_Model_DW.Set_L3_f = false;
      Code_Gen_Model_DW.Set_L4_j = true;
    }
  }
}

/* Function for Chart: '<S33>/Reefscape_Chart' */
static void Code_Gen_Model_Set_Level_d(void)
{
  switch (Code_Gen_Model_DW.is_Set_Level_o) {
   case Code_Gen_Model_IN_L1:
    if (((Code_Gen_Model_B.FixPtRelationalOperator_o) ||
         (Code_Gen_Model_B.FixPtRelationalOperator_dd)) ||
        (Code_Gen_Model_B.FixPtRelationalOperator_a)) {
      if (Code_Gen_Model_B.FixPtRelationalOperator_nw) {
        Code_Gen_Model_DW.is_Set_Level_o = Code_Gen_Model_IN_L1;
        Code_Gen_Model_DW.Set_L1_m = true;
        Code_Gen_Model_DW.Set_L2_n = false;
        Code_Gen_Model_DW.Set_L3_f = false;
        Code_Gen_Model_DW.Set_L4_j = false;
      } else if (Code_Gen_Model_B.FixPtRelationalOperator_o) {
        Code_Gen_Model_DW.is_Set_Level_o = Code_Gen_Model_IN_L2;
        Code_Gen_Model_DW.Set_L1_m = false;
        Code_Gen_Model_DW.Set_L2_n = true;
        Code_Gen_Model_DW.Set_L3_f = false;
        Code_Gen_Model_DW.Set_L4_j = false;
      } else if (Code_Gen_Model_B.FixPtRelationalOperator_dd) {
        Code_Gen_Model_DW.is_Set_Level_o = Code_Gen_Model_IN_L3;
        Code_Gen_Model_DW.Set_L1_m = false;
        Code_Gen_Model_DW.Set_L2_n = false;
        Code_Gen_Model_DW.Set_L3_f = true;
        Code_Gen_Model_DW.Set_L4_j = false;
      } else if (Code_Gen_Model_B.FixPtRelationalOperator_a) {
        Code_Gen_Model_DW.is_Set_Level_o = Code_Gen_Model_IN_L4;
        Code_Gen_Model_DW.Set_L1_m = false;
        Code_Gen_Model_DW.Set_L2_n = false;
        Code_Gen_Model_DW.Set_L3_f = false;
        Code_Gen_Model_DW.Set_L4_j = true;
      }
    }
    break;

   case Code_Gen_Model_IN_L2:
    if (((Code_Gen_Model_B.FixPtRelationalOperator_nw) ||
         (Code_Gen_Model_B.FixPtRelationalOperator_dd)) ||
        (Code_Gen_Model_B.FixPtRelationalOperator_a)) {
      if (Code_Gen_Model_B.FixPtRelationalOperator_nw) {
        Code_Gen_Model_DW.is_Set_Level_o = Code_Gen_Model_IN_L1;
        Code_Gen_Model_DW.Set_L1_m = true;
        Code_Gen_Model_DW.Set_L2_n = false;
        Code_Gen_Model_DW.Set_L3_f = false;
        Code_Gen_Model_DW.Set_L4_j = false;
      } else if (Code_Gen_Model_B.FixPtRelationalOperator_o) {
        Code_Gen_Model_DW.is_Set_Level_o = Code_Gen_Model_IN_L2;
        Code_Gen_Model_DW.Set_L1_m = false;
        Code_Gen_Model_DW.Set_L2_n = true;
        Code_Gen_Model_DW.Set_L3_f = false;
        Code_Gen_Model_DW.Set_L4_j = false;
      } else if (Code_Gen_Model_B.FixPtRelationalOperator_dd) {
        Code_Gen_Model_DW.is_Set_Level_o = Code_Gen_Model_IN_L3;
        Code_Gen_Model_DW.Set_L1_m = false;
        Code_Gen_Model_DW.Set_L2_n = false;
        Code_Gen_Model_DW.Set_L3_f = true;
        Code_Gen_Model_DW.Set_L4_j = false;
      } else if (Code_Gen_Model_B.FixPtRelationalOperator_a) {
        Code_Gen_Model_DW.is_Set_Level_o = Code_Gen_Model_IN_L4;
        Code_Gen_Model_DW.Set_L1_m = false;
        Code_Gen_Model_DW.Set_L2_n = false;
        Code_Gen_Model_DW.Set_L3_f = false;
        Code_Gen_Model_DW.Set_L4_j = true;
      }
    }
    break;

   case Code_Gen_Model_IN_L3:
    if (((Code_Gen_Model_B.FixPtRelationalOperator_nw) ||
         (Code_Gen_Model_B.FixPtRelationalOperator_o)) ||
        (Code_Gen_Model_B.FixPtRelationalOperator_a)) {
      if (Code_Gen_Model_B.FixPtRelationalOperator_nw) {
        Code_Gen_Model_DW.is_Set_Level_o = Code_Gen_Model_IN_L1;
        Code_Gen_Model_DW.Set_L1_m = true;
        Code_Gen_Model_DW.Set_L2_n = false;
        Code_Gen_Model_DW.Set_L3_f = false;
        Code_Gen_Model_DW.Set_L4_j = false;
      } else if (Code_Gen_Model_B.FixPtRelationalOperator_o) {
        Code_Gen_Model_DW.is_Set_Level_o = Code_Gen_Model_IN_L2;
        Code_Gen_Model_DW.Set_L1_m = false;
        Code_Gen_Model_DW.Set_L2_n = true;
        Code_Gen_Model_DW.Set_L3_f = false;
        Code_Gen_Model_DW.Set_L4_j = false;
      } else if (Code_Gen_Model_B.FixPtRelationalOperator_dd) {
        Code_Gen_Model_DW.is_Set_Level_o = Code_Gen_Model_IN_L3;
        Code_Gen_Model_DW.Set_L1_m = false;
        Code_Gen_Model_DW.Set_L2_n = false;
        Code_Gen_Model_DW.Set_L3_f = true;
        Code_Gen_Model_DW.Set_L4_j = false;
      } else if (Code_Gen_Model_B.FixPtRelationalOperator_a) {
        Code_Gen_Model_DW.is_Set_Level_o = Code_Gen_Model_IN_L4;
        Code_Gen_Model_DW.Set_L1_m = false;
        Code_Gen_Model_DW.Set_L2_n = false;
        Code_Gen_Model_DW.Set_L3_f = false;
        Code_Gen_Model_DW.Set_L4_j = true;
      }
    }
    break;

   case Code_Gen_Model_IN_L4:
    Code_Gen_Model_L4_e();
    break;

   default:
    /* case IN_None: */
    if (Code_Gen_Model_B.FixPtRelationalOperator_nw) {
      Code_Gen_Model_DW.is_Set_Level_o = Code_Gen_Model_IN_L1;
      Code_Gen_Model_DW.Set_L1_m = true;
      Code_Gen_Model_DW.Set_L2_n = false;
      Code_Gen_Model_DW.Set_L3_f = false;
      Code_Gen_Model_DW.Set_L4_j = false;
    } else if (Code_Gen_Model_B.FixPtRelationalOperator_o) {
      Code_Gen_Model_DW.is_Set_Level_o = Code_Gen_Model_IN_L2;
      Code_Gen_Model_DW.Set_L1_m = false;
      Code_Gen_Model_DW.Set_L2_n = true;
      Code_Gen_Model_DW.Set_L3_f = false;
      Code_Gen_Model_DW.Set_L4_j = false;
    } else if (Code_Gen_Model_B.FixPtRelationalOperator_dd) {
      Code_Gen_Model_DW.is_Set_Level_o = Code_Gen_Model_IN_L3;
      Code_Gen_Model_DW.Set_L1_m = false;
      Code_Gen_Model_DW.Set_L2_n = false;
      Code_Gen_Model_DW.Set_L3_f = true;
      Code_Gen_Model_DW.Set_L4_j = false;
    } else if (Code_Gen_Model_B.FixPtRelationalOperator_a) {
      Code_Gen_Model_DW.is_Set_Level_o = Code_Gen_Model_IN_L4;
      Code_Gen_Model_DW.Set_L1_m = false;
      Code_Gen_Model_DW.Set_L2_n = false;
      Code_Gen_Model_DW.Set_L3_f = false;
      Code_Gen_Model_DW.Set_L4_j = true;
    }
    break;
  }
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

/* Function for Chart: '<S428>/Reefscape_Chart' */
static void enter_internal_Coral_Score_Po_k(void)
{
  if ((Code_Gen_Model_DW.Set_L1) || (Code_Gen_Model_B.FixPtRelationalOperator))
  {
    Code_Gen_Model_DW.is_Coral_Score_Position = Code_Gen_Model_IN_Level_1;
    Code_Gen_Model_B.State_ID_Teleop = 2.1;
    Code_Gen_Model_B.Set_Coral_Level = 1U;
    Code_Gen_Model_B.Elevator_Height_Desired = Elevator_Height_L1;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired = Coral_Arm_Angle_L1;
  } else if ((Code_Gen_Model_DW.Set_L2) ||
             (Code_Gen_Model_B.FixPtRelationalOperator_k)) {
    Code_Gen_Model_DW.is_Coral_Score_Position = Code_Gen_Model_IN_Level_2;
    Code_Gen_Model_B.State_ID_Teleop = 2.2;
    Code_Gen_Model_B.Set_Coral_Level = 2U;
    Code_Gen_Model_B.Elevator_Height_Desired = Elevator_Height_L2;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired = Coral_Arm_Angle_L2;
  } else if ((Code_Gen_Model_DW.Set_L3) ||
             (Code_Gen_Model_B.FixPtRelationalOperator_n)) {
    Code_Gen_Model_DW.is_Coral_Score_Position = Code_Gen_Model_IN_Level_3;
    Code_Gen_Model_B.State_ID_Teleop = 2.3;
    Code_Gen_Model_B.Set_Coral_Level = 3U;
    Code_Gen_Model_B.Elevator_Height_Desired = Elevator_Height_L3;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired = Coral_Arm_Angle_L3;
  } else if ((Code_Gen_Model_DW.Set_L4) ||
             (Code_Gen_Model_B.FixPtRelationalOperator_d)) {
    Code_Gen_Model_DW.is_Coral_Score_Position = Code_Gen_Model_IN_Level_4;
    Code_Gen_Model_B.State_ID_Teleop = 2.4;
    Code_Gen_Model_B.Set_Coral_Level = 4U;
    Code_Gen_Model_B.Elevator_Height_Desired = Elevator_Height_L4;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired = Coral_Arm_Angle_L4;
  } else {
    Code_Gen_Model_DW.is_Coral_Score_Position = Code_Gen_IN_Manual_Adjustment_m;
    Code_Gen_Model_B.State_ID_Teleop = 2.5;
    Code_Gen_Model_B.Elevator_Height_Desired += Code_Gen_Model_B.DeadZone1 *
      Elevator_Height_Manual_Gain;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired += Code_Gen_Model_B.DeadZone *
      Coral_Arm_Manual_Gain;
  }
}

/* Function for Chart: '<S428>/Reefscape_Chart' */
static void Code_Gen_Mo_Algae_Pickup_High_m(const boolean_T *Compare_f, const
  boolean_T *FixPtRelationalOperator_ne, const boolean_T
  *FixPtRelationalOperator_j, const boolean_T *FixPtRelationalOperator_i, const
  boolean_T *FixPtRelationalOperator_m, const boolean_T
  *FixPtRelationalOperator_ji)
{
  Code_Gen_Model_B.State_ID_Teleop = 4.3;
  Code_Gen_Model_B.Desired_Pipeline_a = 2U;
  if ((*FixPtRelationalOperator_ne) && (!(*Compare_f))) {
    Code_Gen_Model_DW.is_Algae_Pickup_High = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_B.Set_Algae_Level = 0U;
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_Model_IN_Coral_Pickup;
    Code_Gen_Model_DW.is_Actions = Code_Ge_IN_Coral_Pickup_Prepare;
    Code_Gen_Model_B.State_ID_Teleop = 1.0;
    Code_Gen_Model_B.Elevator_Height_Desired = Elevator_Height_Prepare;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired = -90.0;
    Code_Gen_Model_B.Desired_Pipeline_a = 1U;
    Code_Gen_Model_DW.is_Coral_Pickup_Prepare = Code_Gen_Mod_IN_Coral_Motor_Off;
    Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
    Code_Gen_Model_DW.is_Set_Level = Code_Gen_Model_IN_None;
    Code_Gen_Model_DW.Set_L1 = false;
    Code_Gen_Model_DW.Set_L2 = false;
    Code_Gen_Model_DW.Set_L3 = false;
    Code_Gen_Model_DW.Set_L4 = false;
  } else if (*FixPtRelationalOperator_j) {
    if (Code_Gen_Model_B.Coral_Arm_Angle_Measured >=
        Coral_Arm_Angle_Start_Thresh) {
      Code_Gen_Model_DW.is_Algae_Pickup_High = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_B.Set_Algae_Level = 0U;
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        Code__IN_Elevator_Height_Bottom;
      Code_Gen_Model_B.State_ID_Teleop = 0.2;
      Code_Gen_Model_B.Elevator_Height_Desired = Elevator_Height_Bottom;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
      Code_Gen_Model_B.Desired_Pipeline_a = 0U;
      Code_Gen_Model_DW.is_Elevator_Height_Bottom =
        Code_Gen_Mod_IN_Coral_Motor_Off;
      Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
    } else {
      Code_Gen_Model_DW.is_Algae_Pickup_High = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_B.Set_Algae_Level = 0U;
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        C_IN_Elevator_Height_Bottom_pre;
      Code_Gen_Model_B.State_ID_Teleop = 0.1;
      Code_Gen_Model_B.Elevator_Height_Desired = Elevator_Height_Bottom_Pre;
      Code_Gen_Model_B.Desired_Pipeline_a = 0U;
      Code_Gen_Model_DW.is_Elevator_Height_Bottom_pre =
        Code_Gen_Mod_IN_Coral_Motor_Off;
      Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
    }
  } else if (*FixPtRelationalOperator_i) {
    Code_Gen_Model_DW.is_Algae_Pickup_High = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_B.Set_Algae_Level = 0U;
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_Mode_IN_End_Game_Climb;
    Code_Gen_Model_B.State_ID_Teleop = 4.4;
    Code_Gen_Model_B.Elevator_Height_Desired = Elevator_Height_End_Game;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired = -90.0;
    Code_Gen_Model_B.Desired_Pipeline_a = 0U;
    Code_Gen_Model_DW.is_End_Game_Climb = Code_Gen_Mod_IN_Coral_Motor_Off;
    Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
  } else if (*FixPtRelationalOperator_m) {
    Code_Gen_Model_DW.is_Algae_Pickup_High = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_B.Set_Algae_Level = 0U;
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_Model_IN_Algae_Score;
    Code_Gen_Model_B.State_ID_Teleop = 4.1;
    Code_Gen_Model_B.Elevator_Height_Desired = Elevator_Height_Algae_Score;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
    Code_Gen_Model_B.Desired_Pipeline_a = 0U;
    Code_Gen_Model_DW.is_Algae_Score = Code_Gen_Mod_IN_Coral_Motor_Off;
    Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
  } else if (*FixPtRelationalOperator_ji) {
    Code_Gen_Model_DW.is_Algae_Pickup_High = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_Mo_IN_Algae_Pickup_Low;
    Code_Gen_Model_B.State_ID_Teleop = 4.2;
    Code_Gen_Model_B.Elevator_Height_Desired = Elevator_Height_Algae_Low;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
    Code_Gen_Model_B.Set_Algae_Level = 2U;
    Code_Gen_Model_DW.is_Algae_Pickup_Low = Code_Gen_Mod_IN_Coral_Motor_Off;
    Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_ml) {
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_M_IN_Algae_Pickup_High;
    Code_Gen_Model_B.Elevator_Height_Desired = Elevator_Height_Algae_High;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
    Code_Gen_Model_B.Set_Algae_Level = 3U;
    Code_Gen_Model_DW.is_Algae_Pickup_High = Code_Gen_Mod_IN_Coral_Motor_Off;
    Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
  } else {
    Code_Gen_Model_B.Elevator_Height_Desired += Code_Gen_Model_B.DeadZone1 *
      Elevator_Height_Manual_Gain;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired += Code_Gen_Model_B.DeadZone *
      Coral_Arm_Manual_Gain;
    if (Code_Gen_Model_DW.is_Algae_Pickup_High == Code_Gen_Model_IN_Coral_Eject)
    {
      if (Code_Gen_Model_DW.timer >= Coral_Eject_Time) {
        Code_Gen_Model_DW.is_Algae_Pickup_High = Code_Gen_Mod_IN_Coral_Motor_Off;
        Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
      } else {
        Code_Gen_Model_DW.timer += 0.02;
      }

      /* case IN_Coral_Motor_Off: */
    } else if (Code_Gen_Model_B.FixPtRelationalOperator_l) {
      Code_Gen_Model_DW.is_Algae_Pickup_High = Code_Gen_Model_IN_Coral_Eject;
      Code_Gen_Model_B.Coral_Wheel_DC = Coral_Motor_DC_Eject;
      Code_Gen_Model_DW.timer = 0.0;
    }
  }
}

/* Function for Chart: '<S428>/Reefscape_Chart' */
static void Code_Gen_Mod_Algae_Pickup_Low_a(const boolean_T *Compare_f, const
  boolean_T *FixPtRelationalOperator_ne, const boolean_T
  *FixPtRelationalOperator_j, const boolean_T *FixPtRelationalOperator_i, const
  boolean_T *FixPtRelationalOperator_m, const boolean_T
  *FixPtRelationalOperator_ji)
{
  Code_Gen_Model_B.State_ID_Teleop = 4.2;
  Code_Gen_Model_B.Desired_Pipeline_a = 2U;
  if ((*FixPtRelationalOperator_ne) && (!(*Compare_f))) {
    Code_Gen_Model_DW.is_Algae_Pickup_Low = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_B.Set_Algae_Level = 0U;
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_Model_IN_Coral_Pickup;
    Code_Gen_Model_DW.is_Actions = Code_Ge_IN_Coral_Pickup_Prepare;
    Code_Gen_Model_B.State_ID_Teleop = 1.0;
    Code_Gen_Model_B.Elevator_Height_Desired = Elevator_Height_Prepare;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired = -90.0;
    Code_Gen_Model_B.Desired_Pipeline_a = 1U;
    Code_Gen_Model_DW.is_Coral_Pickup_Prepare = Code_Gen_Mod_IN_Coral_Motor_Off;
    Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
    Code_Gen_Model_DW.is_Set_Level = Code_Gen_Model_IN_None;
    Code_Gen_Model_DW.Set_L1 = false;
    Code_Gen_Model_DW.Set_L2 = false;
    Code_Gen_Model_DW.Set_L3 = false;
    Code_Gen_Model_DW.Set_L4 = false;
  } else if (*FixPtRelationalOperator_j) {
    if (Code_Gen_Model_B.Coral_Arm_Angle_Measured >=
        Coral_Arm_Angle_Start_Thresh) {
      Code_Gen_Model_DW.is_Algae_Pickup_Low = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_B.Set_Algae_Level = 0U;
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        Code__IN_Elevator_Height_Bottom;
      Code_Gen_Model_B.State_ID_Teleop = 0.2;
      Code_Gen_Model_B.Elevator_Height_Desired = Elevator_Height_Bottom;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
      Code_Gen_Model_B.Desired_Pipeline_a = 0U;
      Code_Gen_Model_DW.is_Elevator_Height_Bottom =
        Code_Gen_Mod_IN_Coral_Motor_Off;
      Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
    } else {
      Code_Gen_Model_DW.is_Algae_Pickup_Low = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_B.Set_Algae_Level = 0U;
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        C_IN_Elevator_Height_Bottom_pre;
      Code_Gen_Model_B.State_ID_Teleop = 0.1;
      Code_Gen_Model_B.Elevator_Height_Desired = Elevator_Height_Bottom_Pre;
      Code_Gen_Model_B.Desired_Pipeline_a = 0U;
      Code_Gen_Model_DW.is_Elevator_Height_Bottom_pre =
        Code_Gen_Mod_IN_Coral_Motor_Off;
      Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
    }
  } else if (*FixPtRelationalOperator_i) {
    Code_Gen_Model_DW.is_Algae_Pickup_Low = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_B.Set_Algae_Level = 0U;
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_Mode_IN_End_Game_Climb;
    Code_Gen_Model_B.State_ID_Teleop = 4.4;
    Code_Gen_Model_B.Elevator_Height_Desired = Elevator_Height_End_Game;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired = -90.0;
    Code_Gen_Model_B.Desired_Pipeline_a = 0U;
    Code_Gen_Model_DW.is_End_Game_Climb = Code_Gen_Mod_IN_Coral_Motor_Off;
    Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
  } else if (*FixPtRelationalOperator_m) {
    Code_Gen_Model_DW.is_Algae_Pickup_Low = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_B.Set_Algae_Level = 0U;
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_Model_IN_Algae_Score;
    Code_Gen_Model_B.State_ID_Teleop = 4.1;
    Code_Gen_Model_B.Elevator_Height_Desired = Elevator_Height_Algae_Score;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
    Code_Gen_Model_B.Desired_Pipeline_a = 0U;
    Code_Gen_Model_DW.is_Algae_Score = Code_Gen_Mod_IN_Coral_Motor_Off;
    Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
  } else if (*FixPtRelationalOperator_ji) {
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_Mo_IN_Algae_Pickup_Low;
    Code_Gen_Model_B.Elevator_Height_Desired = Elevator_Height_Algae_Low;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
    Code_Gen_Model_B.Set_Algae_Level = 2U;
    Code_Gen_Model_DW.is_Algae_Pickup_Low = Code_Gen_Mod_IN_Coral_Motor_Off;
    Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_ml) {
    Code_Gen_Model_DW.is_Algae_Pickup_Low = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_M_IN_Algae_Pickup_High;
    Code_Gen_Model_B.State_ID_Teleop = 4.3;
    Code_Gen_Model_B.Elevator_Height_Desired = Elevator_Height_Algae_High;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
    Code_Gen_Model_B.Set_Algae_Level = 3U;
    Code_Gen_Model_DW.is_Algae_Pickup_High = Code_Gen_Mod_IN_Coral_Motor_Off;
    Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
  } else {
    Code_Gen_Model_B.Elevator_Height_Desired += Code_Gen_Model_B.DeadZone1 *
      Elevator_Height_Manual_Gain;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired += Code_Gen_Model_B.DeadZone *
      Coral_Arm_Manual_Gain;
    if (Code_Gen_Model_DW.is_Algae_Pickup_Low == Code_Gen_Model_IN_Coral_Eject)
    {
      if (Code_Gen_Model_DW.timer >= Coral_Eject_Time) {
        Code_Gen_Model_DW.is_Algae_Pickup_Low = Code_Gen_Mod_IN_Coral_Motor_Off;
        Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
      } else {
        Code_Gen_Model_DW.timer += 0.02;
      }

      /* case IN_Coral_Motor_Off: */
    } else if (Code_Gen_Model_B.FixPtRelationalOperator_l) {
      Code_Gen_Model_DW.is_Algae_Pickup_Low = Code_Gen_Model_IN_Coral_Eject;
      Code_Gen_Model_B.Coral_Wheel_DC = Coral_Motor_DC_Eject;
      Code_Gen_Model_DW.timer = 0.0;
    }
  }
}

/* Function for Chart: '<S428>/Reefscape_Chart' */
static void Code_Gen_Model_Algae_Score_n(const boolean_T *Compare_f, const
  boolean_T *FixPtRelationalOperator_ne, const boolean_T
  *FixPtRelationalOperator_j, const boolean_T *FixPtRelationalOperator_i, const
  boolean_T *FixPtRelationalOperator_m, const boolean_T
  *FixPtRelationalOperator_ji)
{
  Code_Gen_Model_B.State_ID_Teleop = 4.1;
  Code_Gen_Model_B.Desired_Pipeline_a = 0U;
  if ((*FixPtRelationalOperator_ne) && (!(*Compare_f))) {
    Code_Gen_Model_DW.is_Algae_Score = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_Model_IN_Coral_Pickup;
    Code_Gen_Model_DW.is_Actions = Code_Ge_IN_Coral_Pickup_Prepare;
    Code_Gen_Model_B.State_ID_Teleop = 1.0;
    Code_Gen_Model_B.Elevator_Height_Desired = Elevator_Height_Prepare;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired = -90.0;
    Code_Gen_Model_B.Desired_Pipeline_a = 1U;
    Code_Gen_Model_DW.is_Coral_Pickup_Prepare = Code_Gen_Mod_IN_Coral_Motor_Off;
    Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
    Code_Gen_Model_DW.is_Set_Level = Code_Gen_Model_IN_None;
    Code_Gen_Model_DW.Set_L1 = false;
    Code_Gen_Model_DW.Set_L2 = false;
    Code_Gen_Model_DW.Set_L3 = false;
    Code_Gen_Model_DW.Set_L4 = false;
  } else if (*FixPtRelationalOperator_j) {
    if (Code_Gen_Model_B.Coral_Arm_Angle_Measured >=
        Coral_Arm_Angle_Start_Thresh) {
      Code_Gen_Model_DW.is_Algae_Score = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        Code__IN_Elevator_Height_Bottom;
      Code_Gen_Model_B.State_ID_Teleop = 0.2;
      Code_Gen_Model_B.Elevator_Height_Desired = Elevator_Height_Bottom;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
      Code_Gen_Model_DW.is_Elevator_Height_Bottom =
        Code_Gen_Mod_IN_Coral_Motor_Off;
      Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
    } else {
      Code_Gen_Model_DW.is_Algae_Score = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        C_IN_Elevator_Height_Bottom_pre;
      Code_Gen_Model_B.State_ID_Teleop = 0.1;
      Code_Gen_Model_B.Elevator_Height_Desired = Elevator_Height_Bottom_Pre;
      Code_Gen_Model_DW.is_Elevator_Height_Bottom_pre =
        Code_Gen_Mod_IN_Coral_Motor_Off;
      Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
    }
  } else if (*FixPtRelationalOperator_i) {
    Code_Gen_Model_DW.is_Algae_Score = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_Mode_IN_End_Game_Climb;
    Code_Gen_Model_B.State_ID_Teleop = 4.4;
    Code_Gen_Model_B.Elevator_Height_Desired = Elevator_Height_End_Game;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired = -90.0;
    Code_Gen_Model_DW.is_End_Game_Climb = Code_Gen_Mod_IN_Coral_Motor_Off;
    Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
  } else if (*FixPtRelationalOperator_m) {
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_Model_IN_Algae_Score;
    Code_Gen_Model_B.Elevator_Height_Desired = Elevator_Height_Algae_Score;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
    Code_Gen_Model_DW.is_Algae_Score = Code_Gen_Mod_IN_Coral_Motor_Off;
    Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
  } else if (*FixPtRelationalOperator_ji) {
    Code_Gen_Model_DW.is_Algae_Score = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_Mo_IN_Algae_Pickup_Low;
    Code_Gen_Model_B.State_ID_Teleop = 4.2;
    Code_Gen_Model_B.Elevator_Height_Desired = Elevator_Height_Algae_Low;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
    Code_Gen_Model_B.Set_Algae_Level = 2U;
    Code_Gen_Model_B.Desired_Pipeline_a = 2U;
    Code_Gen_Model_DW.is_Algae_Pickup_Low = Code_Gen_Mod_IN_Coral_Motor_Off;
    Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_ml) {
    Code_Gen_Model_DW.is_Algae_Score = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_M_IN_Algae_Pickup_High;
    Code_Gen_Model_B.State_ID_Teleop = 4.3;
    Code_Gen_Model_B.Elevator_Height_Desired = Elevator_Height_Algae_High;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
    Code_Gen_Model_B.Set_Algae_Level = 3U;
    Code_Gen_Model_B.Desired_Pipeline_a = 2U;
    Code_Gen_Model_DW.is_Algae_Pickup_High = Code_Gen_Mod_IN_Coral_Motor_Off;
    Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
  } else {
    Code_Gen_Model_B.Elevator_Height_Desired += Code_Gen_Model_B.DeadZone1 *
      Elevator_Height_Manual_Gain;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired += Code_Gen_Model_B.DeadZone *
      Coral_Arm_Manual_Gain;
    if (Code_Gen_Model_DW.is_Algae_Score == Code_Gen_Model_IN_Coral_Eject) {
      if (Code_Gen_Model_DW.timer >= Coral_Eject_Time) {
        Code_Gen_Model_DW.is_Algae_Score = Code_Gen_Mod_IN_Coral_Motor_Off;
        Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
      } else {
        Code_Gen_Model_DW.timer += 0.02;
      }

      /* case IN_Coral_Motor_Off: */
    } else if (Code_Gen_Model_B.FixPtRelationalOperator_l) {
      Code_Gen_Model_DW.is_Algae_Score = Code_Gen_Model_IN_Coral_Eject;
      Code_Gen_Model_B.Coral_Wheel_DC = Coral_Motor_DC_Eject;
      Code_Gen_Model_DW.timer = 0.0;
    }
  }
}

/* Function for Chart: '<S428>/Reefscape_Chart' */
static void Code_Gen_Mo_Manual_Adjustment_j(void)
{
  Code_Gen_Model_B.State_ID_Teleop = 2.5;
  if (!Code_Gen_Model_B.Compare) {
    Code_Gen_Model_DW.is_Coral_Score_Position = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_DW.is_Coral = Code_Gen_Model_IN_Coral_Eject;
    Code_Gen_Model_DW.is_Coral_Eject = Code_Gen_Model_IN_Eject;
    Code_Gen_Model_B.State_ID_Teleop = 3.7;
    Code_Gen_Model_B.Coral_Wheel_DC = Coral_Motor_DC_Eject;
    Code_Gen_Model_DW.timer = 0.0;
  } else {
    Code_Gen_Model_B.Elevator_Height_Desired += Code_Gen_Model_B.DeadZone1 *
      Elevator_Height_Manual_Gain;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired += Code_Gen_Model_B.DeadZone *
      Coral_Arm_Manual_Gain;
  }
}

/* Function for Chart: '<S428>/Reefscape_Chart' */
static void Code_Gen_Model_Level_2_d(void)
{
  Code_Gen_Model_B.State_ID_Teleop = 2.2;
  if ((Code_Gen_Model_B.DeadZone1 != 0.0) || (Code_Gen_Model_B.DeadZone != 0.0))
  {
    Code_Gen_Model_DW.is_Coral_Score_Position = Code_Gen_IN_Manual_Adjustment_m;
    Code_Gen_Model_B.State_ID_Teleop = 2.5;
    Code_Gen_Model_B.Elevator_Height_Desired += Code_Gen_Model_B.DeadZone1 *
      Elevator_Height_Manual_Gain;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired += Code_Gen_Model_B.DeadZone *
      Coral_Arm_Manual_Gain;
  }
}

/* Function for Chart: '<S428>/Reefscape_Chart' */
static void Code_Gen_Model_Level_3_ek(void)
{
  Code_Gen_Model_B.State_ID_Teleop = 2.3;
  if ((Code_Gen_Model_B.DeadZone1 != 0.0) || (Code_Gen_Model_B.DeadZone != 0.0))
  {
    Code_Gen_Model_DW.is_Coral_Score_Position = Code_Gen_IN_Manual_Adjustment_m;
    Code_Gen_Model_B.State_ID_Teleop = 2.5;
    Code_Gen_Model_B.Elevator_Height_Desired += Code_Gen_Model_B.DeadZone1 *
      Elevator_Height_Manual_Gain;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired += Code_Gen_Model_B.DeadZone *
      Coral_Arm_Manual_Gain;
  }
}

/* Function for Chart: '<S428>/Reefscape_Chart' */
static void Code_Gen_Model_Level_4_p(void)
{
  Code_Gen_Model_B.State_ID_Teleop = 2.4;
  if ((Code_Gen_Model_B.DeadZone1 != 0.0) || (Code_Gen_Model_B.DeadZone != 0.0))
  {
    Code_Gen_Model_DW.is_Coral_Score_Position = Code_Gen_IN_Manual_Adjustment_m;
    Code_Gen_Model_B.State_ID_Teleop = 2.5;
    Code_Gen_Model_B.Elevator_Height_Desired += Code_Gen_Model_B.DeadZone1 *
      Elevator_Height_Manual_Gain;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired += Code_Gen_Model_B.DeadZone *
      Coral_Arm_Manual_Gain;
  }
}

/* Function for Chart: '<S428>/Reefscape_Chart' */
static void Co_enter_internal_Coral_Eject_n(void)
{
  switch (Code_Gen_Model_B.Set_Coral_Level) {
   case 2U:
    Code_Gen_Model_DW.is_Coral_Eject = Code_Gen_Model_IN_Level_2;
    Code_Gen_Model_B.State_ID_Teleop = 3.2;
    Code_Gen_Model_DW.is_Level_2 = Code_Gen_IN_Auto_Lower_Elevator;
    Code_Gen_Model_B.Elevator_Height_Desired +=
      Elevator_Height_Coral_Score_Lower_Rate;
    break;

   case 3U:
    Code_Gen_Model_DW.is_Coral_Eject = Code_Gen_Model_IN_Level_3;
    Code_Gen_Model_B.State_ID_Teleop = 3.3;
    Code_Gen_Model_DW.is_Level_3 = Code_Gen_IN_Auto_Lower_Elevator;
    Code_Gen_Model_B.Elevator_Height_Desired +=
      Elevator_Height_Coral_Score_Lower_Rate;
    break;

   default:
    if (Code_Gen_Model_B.Set_Coral_Level == 4) {
      Code_Gen_Model_DW.is_Coral_Eject = Code_Gen_Mode_IN_Level_4_Teleop;
      Code_Gen_Model_B.State_ID_Teleop = 3.4;
      Code_Gen_Model_DW.is_Level_4_Teleop = Code_Gen_Mode_IN_Auto_Lower_Arm;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired +=
        Coral_Arm_Angle_Coral_Score_Lower_Rate;
    } else {
      Code_Gen_Model_DW.is_Coral_Eject = Code_Gen_Model_IN_Eject;
      Code_Gen_Model_B.State_ID_Teleop = 3.7;
      Code_Gen_Model_B.Coral_Wheel_DC = Coral_Motor_DC_Eject;
      Code_Gen_Model_DW.timer = 0.0;
    }
    break;
  }
}

/* Function for Chart: '<S428>/Reefscape_Chart' */
static void Code_Gen_Model_Level_3_e(void)
{
  Code_Gen_Model_B.State_ID_Teleop = 3.3;
  if ((!Code_Gen_Model_B.Compare) || (Code_Gen_Model_B.FixPtRelationalOperator_l))
  {
    Code_Gen_Model_DW.is_Level_3 = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_DW.is_Coral_Eject = Code_Gen_Model_IN_Eject;
    Code_Gen_Model_B.State_ID_Teleop = 3.7;
    Code_Gen_Model_B.Coral_Wheel_DC = Coral_Motor_DC_Eject;
    Code_Gen_Model_DW.timer = 0.0;
  } else if (Code_Gen_Model_DW.is_Level_3 == Code_Gen_IN_Auto_Lower_Elevator) {
    if (Code_Gen_Model_B.Elevator_Height_Measured <= Elevator_Height_L3_Eject) {
      Code_Gen_Model_DW.is_Level_3 = Code_Gen_M_IN_Manual_Adjustment;
      Code_Gen_Model_B.Elevator_Height_Desired += Code_Gen_Model_B.DeadZone1 *
        Elevator_Height_Manual_Gain;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired += Code_Gen_Model_B.DeadZone *
        Coral_Arm_Manual_Gain;
    } else {
      Code_Gen_Model_B.Elevator_Height_Desired +=
        Elevator_Height_Coral_Score_Lower_Rate;
    }

    /* case IN_Manual_Adjustment: */
  } else if (Code_Gen_Model_B.UnitDelay) {
    Code_Gen_Model_DW.is_Level_3 = Code_Gen_IN_Auto_Lower_Elevator;
    Code_Gen_Model_B.Elevator_Height_Desired +=
      Elevator_Height_Coral_Score_Lower_Rate;
  } else {
    Code_Gen_Model_B.Elevator_Height_Desired += Code_Gen_Model_B.DeadZone1 *
      Elevator_Height_Manual_Gain;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired += Code_Gen_Model_B.DeadZone *
      Coral_Arm_Manual_Gain;
  }
}

/* Function for Chart: '<S428>/Reefscape_Chart' */
static void Code_Gen_Model_Level_4_Teleop_m(void)
{
  Code_Gen_Model_B.State_ID_Teleop = 3.4;
  if (Code_Gen_Model_B.FixPtRelationalOperator_l) {
    Code_Gen_Model_DW.is_Level_4_Teleop = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_DW.is_Coral_Eject = Code_Gen_Model_IN_Eject;
    Code_Gen_Model_B.State_ID_Teleop = 3.7;
    Code_Gen_Model_B.Coral_Wheel_DC = Coral_Motor_DC_Eject;
    Code_Gen_Model_DW.timer = 0.0;
  } else if (!Code_Gen_Model_B.Compare) {
    Code_Gen_Model_DW.is_Level_4_Teleop = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_DW.is_Coral_Eject = Code_Gen_Model_IN_Level_4_Timer;
    Code_Gen_Model_B.State_ID_Teleop = 3.6;
    Code_Gen_Model_B.Elevator_Height_Desired +=
      Elevator_Height_Coral_Score_Lower_Rate;
    Code_Gen_Model_DW.timer = 0.02;
  } else if (Code_Gen_Model_DW.is_Level_4_Teleop ==
             Code_Gen_Mode_IN_Auto_Lower_Arm) {
    if (Code_Gen_Model_B.Coral_Arm_Angle_Measured <
        Coral_Arm_Angle_L4_Eject_Teleop) {
      Code_Gen_Model_DW.is_Level_4_Teleop = Code_Gen_M_IN_Manual_Adjustment;
      Code_Gen_Model_B.Elevator_Height_Desired += Code_Gen_Model_B.DeadZone1 *
        Elevator_Height_Manual_Gain;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired += Code_Gen_Model_B.DeadZone *
        Coral_Arm_Manual_Gain;
    } else {
      Code_Gen_Model_B.Coral_Arm_Angle_Desired +=
        Coral_Arm_Angle_Coral_Score_Lower_Rate;
    }

    /* case IN_Manual_Adjustment: */
  } else if (Code_Gen_Model_B.UnitDelay) {
    Code_Gen_Model_DW.is_Level_4_Teleop = Code_Gen_Mode_IN_Auto_Lower_Arm;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired +=
      Coral_Arm_Angle_Coral_Score_Lower_Rate;
  } else {
    Code_Gen_Model_B.Elevator_Height_Desired += Code_Gen_Model_B.DeadZone1 *
      Elevator_Height_Manual_Gain;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired += Code_Gen_Model_B.DeadZone *
      Coral_Arm_Manual_Gain;
  }
}

/* Function for Chart: '<S428>/Reefscape_Chart' */
static void Cod_exit_internal_Coral_Eject_p(void)
{
  if (Code_Gen_Model_DW.is_Coral_Eject == Code_Gen_Model_IN_Stop) {
    Code_Gen_Model_DW.is_Coral_Eject = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
  } else {
    Code_Gen_Model_DW.is_Level_2 = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_DW.is_Level_3 = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_DW.is_Level_4_Auto = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_DW.is_Level_4_Teleop = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_DW.is_Coral_Eject = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
  }
}

/* Function for Chart: '<S428>/Reefscape_Chart' */
static void Code_Gen_Model_Coral_Eject_l(const boolean_T *Compare_f, const
  boolean_T *FixPtRelationalOperator_ne, const boolean_T
  *FixPtRelationalOperator_j, const boolean_T *FixPtRelationalOperator_i, const
  boolean_T *FixPtRelationalOperator_m, const boolean_T
  *FixPtRelationalOperator_ji)
{
  if ((*FixPtRelationalOperator_ne) && (!(*Compare_f))) {
    Cod_exit_internal_Coral_Eject_p();
    Code_Gen_Model_DW.is_Coral = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_B.Set_Coral_Level = 0U;
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_Model_IN_Coral_Pickup;
    Code_Gen_Model_DW.is_Actions = Code_Ge_IN_Coral_Pickup_Prepare;
    Code_Gen_Model_B.State_ID_Teleop = 1.0;
    Code_Gen_Model_B.Elevator_Height_Desired = Elevator_Height_Prepare;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired = -90.0;
    Code_Gen_Model_B.Desired_Pipeline_a = 1U;
    Code_Gen_Model_DW.is_Coral_Pickup_Prepare = Code_Gen_Mod_IN_Coral_Motor_Off;
    Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
    Code_Gen_Model_DW.is_Set_Level = Code_Gen_Model_IN_None;
    Code_Gen_Model_DW.Set_L1 = false;
    Code_Gen_Model_DW.Set_L2 = false;
    Code_Gen_Model_DW.Set_L3 = false;
    Code_Gen_Model_DW.Set_L4 = false;
  } else if (*FixPtRelationalOperator_j) {
    if (Code_Gen_Model_B.Coral_Arm_Angle_Measured >=
        Coral_Arm_Angle_Start_Thresh) {
      Cod_exit_internal_Coral_Eject_p();
      Code_Gen_Model_DW.is_Coral = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_B.Set_Coral_Level = 0U;
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        Code__IN_Elevator_Height_Bottom;
      Code_Gen_Model_B.State_ID_Teleop = 0.2;
      Code_Gen_Model_B.Elevator_Height_Desired = Elevator_Height_Bottom;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
      Code_Gen_Model_B.Desired_Pipeline_a = 0U;
      Code_Gen_Model_DW.is_Elevator_Height_Bottom =
        Code_Gen_Mod_IN_Coral_Motor_Off;
      Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
    } else {
      Cod_exit_internal_Coral_Eject_p();
      Code_Gen_Model_DW.is_Coral = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_B.Set_Coral_Level = 0U;
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        C_IN_Elevator_Height_Bottom_pre;
      Code_Gen_Model_B.State_ID_Teleop = 0.1;
      Code_Gen_Model_B.Elevator_Height_Desired = Elevator_Height_Bottom_Pre;
      Code_Gen_Model_B.Desired_Pipeline_a = 0U;
      Code_Gen_Model_DW.is_Elevator_Height_Bottom_pre =
        Code_Gen_Mod_IN_Coral_Motor_Off;
      Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
    }
  } else if (*FixPtRelationalOperator_i) {
    Cod_exit_internal_Coral_Eject_p();
    Code_Gen_Model_DW.is_Coral = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_B.Set_Coral_Level = 0U;
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_Mode_IN_End_Game_Climb;
    Code_Gen_Model_B.State_ID_Teleop = 4.4;
    Code_Gen_Model_B.Elevator_Height_Desired = Elevator_Height_End_Game;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired = -90.0;
    Code_Gen_Model_B.Desired_Pipeline_a = 0U;
    Code_Gen_Model_DW.is_End_Game_Climb = Code_Gen_Mod_IN_Coral_Motor_Off;
    Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
  } else if (*FixPtRelationalOperator_m) {
    Cod_exit_internal_Coral_Eject_p();
    Code_Gen_Model_DW.is_Coral = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_B.Set_Coral_Level = 0U;
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_Model_IN_Algae_Score;
    Code_Gen_Model_B.State_ID_Teleop = 4.1;
    Code_Gen_Model_B.Elevator_Height_Desired = Elevator_Height_Algae_Score;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
    Code_Gen_Model_B.Desired_Pipeline_a = 0U;
    Code_Gen_Model_DW.is_Algae_Score = Code_Gen_Mod_IN_Coral_Motor_Off;
    Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
  } else if (*FixPtRelationalOperator_ji) {
    Cod_exit_internal_Coral_Eject_p();
    Code_Gen_Model_DW.is_Coral = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_B.Set_Coral_Level = 0U;
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_Mo_IN_Algae_Pickup_Low;
    Code_Gen_Model_B.State_ID_Teleop = 4.2;
    Code_Gen_Model_B.Elevator_Height_Desired = Elevator_Height_Algae_Low;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
    Code_Gen_Model_B.Set_Algae_Level = 2U;
    Code_Gen_Model_B.Desired_Pipeline_a = 2U;
    Code_Gen_Model_DW.is_Algae_Pickup_Low = Code_Gen_Mod_IN_Coral_Motor_Off;
    Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_ml) {
    Cod_exit_internal_Coral_Eject_p();
    Code_Gen_Model_DW.is_Coral = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_B.Set_Coral_Level = 0U;
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_M_IN_Algae_Pickup_High;
    Code_Gen_Model_B.State_ID_Teleop = 4.3;
    Code_Gen_Model_B.Elevator_Height_Desired = Elevator_Height_Algae_High;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
    Code_Gen_Model_B.Set_Algae_Level = 3U;
    Code_Gen_Model_B.Desired_Pipeline_a = 2U;
    Code_Gen_Model_DW.is_Algae_Pickup_High = Code_Gen_Mod_IN_Coral_Motor_Off;
    Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
  } else {
    switch (Code_Gen_Model_DW.is_Coral_Eject) {
     case Code_Gen_Model_IN_Eject:
      Code_Gen_Model_B.State_ID_Teleop = 3.7;
      if (Code_Gen_Model_DW.timer >= Coral_Eject_Time) {
        Code_Gen_Model_DW.is_Coral_Eject = Code_Gen_Model_IN_Stop;
        Code_Gen_Model_B.State_ID_Teleop = 3.8;
        Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
      } else {
        Code_Gen_Model_DW.timer += 0.02;
      }
      break;

     case Code_Gen_Model_IN_Level_2:
      Code_Gen_Model_B.State_ID_Teleop = 3.2;
      if ((!Code_Gen_Model_B.Compare) ||
          (Code_Gen_Model_B.FixPtRelationalOperator_l)) {
        Code_Gen_Model_DW.is_Level_2 = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
        Code_Gen_Model_DW.is_Coral_Eject = Code_Gen_Model_IN_Eject;
        Code_Gen_Model_B.State_ID_Teleop = 3.7;
        Code_Gen_Model_B.Coral_Wheel_DC = Coral_Motor_DC_Eject;
        Code_Gen_Model_DW.timer = 0.0;
      } else if (Code_Gen_Model_DW.is_Level_2 == Code_Gen_IN_Auto_Lower_Elevator)
      {
        if (Code_Gen_Model_B.Elevator_Height_Measured <=
            Elevator_Height_L2_Eject) {
          Code_Gen_Model_DW.is_Level_2 = Code_Gen_M_IN_Manual_Adjustment;
          Code_Gen_Model_B.Elevator_Height_Desired += Code_Gen_Model_B.DeadZone1
            * Elevator_Height_Manual_Gain;
          Code_Gen_Model_B.Coral_Arm_Angle_Desired += Code_Gen_Model_B.DeadZone *
            Coral_Arm_Manual_Gain;
        } else {
          Code_Gen_Model_B.Elevator_Height_Desired +=
            Elevator_Height_Coral_Score_Lower_Rate;
        }

        /* case IN_Manual_Adjustment: */
      } else if (Code_Gen_Model_B.UnitDelay) {
        Code_Gen_Model_DW.is_Level_2 = Code_Gen_IN_Auto_Lower_Elevator;
        Code_Gen_Model_B.Elevator_Height_Desired +=
          Elevator_Height_Coral_Score_Lower_Rate;
      } else {
        Code_Gen_Model_B.Elevator_Height_Desired += Code_Gen_Model_B.DeadZone1 *
          Elevator_Height_Manual_Gain;
        Code_Gen_Model_B.Coral_Arm_Angle_Desired += Code_Gen_Model_B.DeadZone *
          Coral_Arm_Manual_Gain;
      }
      break;

     case Code_Gen_Model_IN_Level_3:
      Code_Gen_Model_Level_3_e();
      break;

     case Code_Gen_Model_IN_Level_4_Auto:
      Code_Gen_Model_B.State_ID_Teleop = 3.5;
      if (!Code_Gen_Model_B.Compare) {
        Code_Gen_Model_DW.is_Level_4_Auto = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
        Code_Gen_Model_DW.is_Coral_Eject = Code_Gen_Model_IN_Level_4_Timer;
        Code_Gen_Model_B.State_ID_Teleop = 3.6;
        Code_Gen_Model_B.Elevator_Height_Desired +=
          Elevator_Height_Coral_Score_Lower_Rate;
        Code_Gen_Model_DW.timer = 0.02;
      } else if (Code_Gen_Model_DW.is_Level_4_Auto ==
                 Code_Gen_Mode_IN_Auto_Lower_Arm) {
        if (Code_Gen_Model_B.Coral_Arm_Angle_Measured <
            Coral_Arm_Angle_L4_Eject_Auto) {
          Code_Gen_Model_DW.is_Level_4_Auto = Code_G_IN_Auto_Lower_Elevator_l;
          Code_Gen_Model_B.Elevator_Height_Desired +=
            Elevator_Height_Coral_Score_Lower_Rate;
        } else {
          Code_Gen_Model_B.Coral_Arm_Angle_Desired +=
            Coral_Arm_Angle_Coral_Score_Lower_Rate;
        }
      } else {
        /* case IN_Auto_Lower_Elevator: */
        Code_Gen_Model_B.Elevator_Height_Desired +=
          Elevator_Height_Coral_Score_Lower_Rate;
      }
      break;

     case Code_Gen_Mode_IN_Level_4_Teleop:
      Code_Gen_Model_Level_4_Teleop_m();
      break;

     case Code_Gen_Model_IN_Level_4_Timer:
      Code_Gen_Model_B.State_ID_Teleop = 3.6;
      if (Code_Gen_Model_DW.timer >= L4_Switch_Time) {
        Code_Gen_Model_DW.is_Coral_Eject = Code_Gen_Model_IN_Eject;
        Code_Gen_Model_B.State_ID_Teleop = 3.7;
        Code_Gen_Model_B.Coral_Wheel_DC = Coral_Motor_DC_Eject;
        Code_Gen_Model_DW.timer = 0.0;
      } else {
        Code_Gen_Model_B.Elevator_Height_Desired +=
          Elevator_Height_Coral_Score_Lower_Rate;
        Code_Gen_Model_DW.timer += 0.02;
      }
      break;

     default:
      /* case IN_Stop: */
      Code_Gen_Model_B.State_ID_Teleop = 3.8;
      Code_Gen_Model_B.Elevator_Height_Desired += Code_Gen_Model_B.DeadZone1 *
        Elevator_Height_Manual_Gain;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired += Code_Gen_Model_B.DeadZone *
        Coral_Arm_Manual_Gain;
      break;
    }
  }
}

/* Function for Chart: '<S428>/Reefscape_Chart' */
static void Code_Gen_Model_Coral_e(const boolean_T *Compare_f, const boolean_T
  *FixPtRelationalOperator_ne, const boolean_T *FixPtRelationalOperator_j, const
  boolean_T *FixPtRelationalOperator_i, const boolean_T
  *FixPtRelationalOperator_m, const boolean_T *FixPtRelationalOperator_ji)
{
  if (Code_Gen_Model_DW.is_Coral == Code_Gen_Model_IN_Coral_Eject) {
    Code_Gen_Model_Coral_Eject_l(Compare_f, FixPtRelationalOperator_ne,
      FixPtRelationalOperator_j, FixPtRelationalOperator_i,
      FixPtRelationalOperator_m, FixPtRelationalOperator_ji);

    /* case IN_Coral_Score_Position: */
  } else if ((((Code_Gen_Model_B.FixPtRelationalOperator) ||
               (Code_Gen_Model_B.FixPtRelationalOperator_k)) ||
              (Code_Gen_Model_B.FixPtRelationalOperator_n)) ||
             (Code_Gen_Model_B.FixPtRelationalOperator_d)) {
    Code_Gen_Model_DW.Set_L1 = false;
    Code_Gen_Model_DW.Set_L2 = false;
    Code_Gen_Model_DW.Set_L3 = false;
    Code_Gen_Model_DW.Set_L4 = false;
    Code_Gen_Model_DW.is_Coral = Code_Ge_IN_Coral_Score_Position;
    enter_internal_Coral_Score_Po_k();
  } else if ((Code_Gen_Model_B.FixPtRelationalOperator_l) ||
             (Code_Gen_Model_DW.timer_robot_target >= AT_On_Target_Time)) {
    Code_Gen_Model_DW.is_Coral_Score_Position = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_DW.is_Coral = Code_Gen_Model_IN_Coral_Eject;
    Co_enter_internal_Coral_Eject_n();
  } else if ((*FixPtRelationalOperator_ne) && (!(*Compare_f))) {
    Code_Gen_Model_DW.is_Coral_Score_Position = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_DW.is_Coral = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_B.Set_Coral_Level = 0U;
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_Model_IN_Coral_Pickup;
    Code_Gen_Model_DW.is_Actions = Code_Ge_IN_Coral_Pickup_Prepare;
    Code_Gen_Model_B.State_ID_Teleop = 1.0;
    Code_Gen_Model_B.Elevator_Height_Desired = Elevator_Height_Prepare;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired = -90.0;
    Code_Gen_Model_B.Desired_Pipeline_a = 1U;
    Code_Gen_Model_DW.is_Coral_Pickup_Prepare = Code_Gen_Mod_IN_Coral_Motor_Off;
    Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
    Code_Gen_Model_DW.is_Set_Level = Code_Gen_Model_IN_None;
    Code_Gen_Model_DW.Set_L1 = false;
    Code_Gen_Model_DW.Set_L2 = false;
    Code_Gen_Model_DW.Set_L3 = false;
    Code_Gen_Model_DW.Set_L4 = false;
  } else if (*FixPtRelationalOperator_j) {
    if (Code_Gen_Model_B.Coral_Arm_Angle_Measured >=
        Coral_Arm_Angle_Start_Thresh) {
      Code_Gen_Model_DW.is_Coral_Score_Position =
        Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Coral = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_B.Set_Coral_Level = 0U;
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        Code__IN_Elevator_Height_Bottom;
      Code_Gen_Model_B.State_ID_Teleop = 0.2;
      Code_Gen_Model_B.Elevator_Height_Desired = Elevator_Height_Bottom;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
      Code_Gen_Model_B.Desired_Pipeline_a = 0U;
      Code_Gen_Model_DW.is_Elevator_Height_Bottom =
        Code_Gen_Mod_IN_Coral_Motor_Off;
      Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
    } else {
      Code_Gen_Model_DW.is_Coral_Score_Position =
        Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Coral = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_B.Set_Coral_Level = 0U;
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        C_IN_Elevator_Height_Bottom_pre;
      Code_Gen_Model_B.State_ID_Teleop = 0.1;
      Code_Gen_Model_B.Elevator_Height_Desired = Elevator_Height_Bottom_Pre;
      Code_Gen_Model_B.Desired_Pipeline_a = 0U;
      Code_Gen_Model_DW.is_Elevator_Height_Bottom_pre =
        Code_Gen_Mod_IN_Coral_Motor_Off;
      Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
    }
  } else if (*FixPtRelationalOperator_i) {
    Code_Gen_Model_DW.is_Coral_Score_Position = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_DW.is_Coral = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_B.Set_Coral_Level = 0U;
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_Mode_IN_End_Game_Climb;
    Code_Gen_Model_B.State_ID_Teleop = 4.4;
    Code_Gen_Model_B.Elevator_Height_Desired = Elevator_Height_End_Game;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired = -90.0;
    Code_Gen_Model_B.Desired_Pipeline_a = 0U;
    Code_Gen_Model_DW.is_End_Game_Climb = Code_Gen_Mod_IN_Coral_Motor_Off;
    Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
  } else if (*FixPtRelationalOperator_m) {
    Code_Gen_Model_DW.is_Coral_Score_Position = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_DW.is_Coral = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_B.Set_Coral_Level = 0U;
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_Model_IN_Algae_Score;
    Code_Gen_Model_B.State_ID_Teleop = 4.1;
    Code_Gen_Model_B.Elevator_Height_Desired = Elevator_Height_Algae_Score;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
    Code_Gen_Model_B.Desired_Pipeline_a = 0U;
    Code_Gen_Model_DW.is_Algae_Score = Code_Gen_Mod_IN_Coral_Motor_Off;
    Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
  } else if (*FixPtRelationalOperator_ji) {
    Code_Gen_Model_DW.is_Coral_Score_Position = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_DW.is_Coral = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_B.Set_Coral_Level = 0U;
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_Mo_IN_Algae_Pickup_Low;
    Code_Gen_Model_B.State_ID_Teleop = 4.2;
    Code_Gen_Model_B.Elevator_Height_Desired = Elevator_Height_Algae_Low;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
    Code_Gen_Model_B.Set_Algae_Level = 2U;
    Code_Gen_Model_B.Desired_Pipeline_a = 2U;
    Code_Gen_Model_DW.is_Algae_Pickup_Low = Code_Gen_Mod_IN_Coral_Motor_Off;
    Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_ml) {
    Code_Gen_Model_DW.is_Coral_Score_Position = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_DW.is_Coral = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_B.Set_Coral_Level = 0U;
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_M_IN_Algae_Pickup_High;
    Code_Gen_Model_B.State_ID_Teleop = 4.3;
    Code_Gen_Model_B.Elevator_Height_Desired = Elevator_Height_Algae_High;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
    Code_Gen_Model_B.Set_Algae_Level = 3U;
    Code_Gen_Model_B.Desired_Pipeline_a = 2U;
    Code_Gen_Model_DW.is_Algae_Pickup_High = Code_Gen_Mod_IN_Coral_Motor_Off;
    Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
  } else {
    switch (Code_Gen_Model_DW.is_Coral_Score_Position) {
     case Code_Gen_Model_IN_Level_1:
      Code_Gen_Model_B.State_ID_Teleop = 2.1;
      if ((Code_Gen_Model_B.DeadZone1 != 0.0) || (Code_Gen_Model_B.DeadZone !=
           0.0)) {
        Code_Gen_Model_DW.is_Coral_Score_Position =
          Code_Gen_IN_Manual_Adjustment_m;
        Code_Gen_Model_B.State_ID_Teleop = 2.5;
        Code_Gen_Model_B.Elevator_Height_Desired += Code_Gen_Model_B.DeadZone1 *
          Elevator_Height_Manual_Gain;
        Code_Gen_Model_B.Coral_Arm_Angle_Desired += Code_Gen_Model_B.DeadZone *
          Coral_Arm_Manual_Gain;
      }
      break;

     case Code_Gen_Model_IN_Level_2:
      Code_Gen_Model_Level_2_d();
      break;

     case Code_Gen_Model_IN_Level_3:
      Code_Gen_Model_Level_3_ek();
      break;

     case Code_Gen_Model_IN_Level_4:
      Code_Gen_Model_Level_4_p();
      break;

     default:
      /* case IN_Manual_Adjustment: */
      Code_Gen_Mo_Manual_Adjustment_j();
      break;
    }
  }
}

/* Function for Chart: '<S428>/Reefscape_Chart' */
static void Co_exit_internal_Coral_Pickup_o(void)
{
  Code_Gen_Model_DW.is_Set_Level = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
  if (Code_Gen_Model_DW.is_Actions == Code_IN_Coral_Pickup_Lower_Wait) {
    Code_Gen_Model_B.Coral_Pickup_Lower_Wait_State = false;
    Code_Gen_Model_DW.is_Actions = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
  } else {
    Code_Gen_Model_DW.is_Coral_Pickup_Prepare = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_DW.is_Actions = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
  }
}

/* Function for Chart: '<S428>/Reefscape_Chart' */
static void Code_Gen_Model_L4_m(void)
{
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
}

/* Function for Chart: '<S428>/Reefscape_Chart' */
static void Code_Gen_Model_Set_Level_du(void)
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
    Code_Gen_Model_L4_m();
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

/* Function for Chart: '<S428>/Reefscape_Chart' */
static void Code_Gen_Model_Coral_Pickup_e(const boolean_T *Compare_f, const
  boolean_T *FixPtRelationalOperator_ne, const boolean_T
  *FixPtRelationalOperator_j, const boolean_T *FixPtRelationalOperator_i, const
  boolean_T *FixPtRelationalOperator_m, const boolean_T
  *FixPtRelationalOperator_ji)
{
  if ((*FixPtRelationalOperator_ne) && (!(*Compare_f))) {
    Co_exit_internal_Coral_Pickup_o();
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_Model_IN_Coral_Pickup;
    Code_Gen_Model_DW.is_Actions = Code_Ge_IN_Coral_Pickup_Prepare;
    Code_Gen_Model_B.State_ID_Teleop = 1.0;
    Code_Gen_Model_B.Elevator_Height_Desired = Elevator_Height_Prepare;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired = -90.0;
    Code_Gen_Model_B.Desired_Pipeline_a = 1U;
    Code_Gen_Model_DW.is_Coral_Pickup_Prepare = Code_Gen_Mod_IN_Coral_Motor_Off;
    Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
    Code_Gen_Model_DW.is_Set_Level = Code_Gen_Model_IN_None;
    Code_Gen_Model_DW.Set_L1 = false;
    Code_Gen_Model_DW.Set_L2 = false;
    Code_Gen_Model_DW.Set_L3 = false;
    Code_Gen_Model_DW.Set_L4 = false;
  } else if (*FixPtRelationalOperator_j) {
    if (Code_Gen_Model_B.Coral_Arm_Angle_Measured >=
        Coral_Arm_Angle_Start_Thresh) {
      Co_exit_internal_Coral_Pickup_o();
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        Code__IN_Elevator_Height_Bottom;
      Code_Gen_Model_B.State_ID_Teleop = 0.2;
      Code_Gen_Model_B.Elevator_Height_Desired = Elevator_Height_Bottom;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
      Code_Gen_Model_B.Desired_Pipeline_a = 0U;
      Code_Gen_Model_DW.is_Elevator_Height_Bottom =
        Code_Gen_Mod_IN_Coral_Motor_Off;
      Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
    } else {
      Co_exit_internal_Coral_Pickup_o();
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        C_IN_Elevator_Height_Bottom_pre;
      Code_Gen_Model_B.State_ID_Teleop = 0.1;
      Code_Gen_Model_B.Elevator_Height_Desired = Elevator_Height_Bottom_Pre;
      Code_Gen_Model_B.Desired_Pipeline_a = 0U;
      Code_Gen_Model_DW.is_Elevator_Height_Bottom_pre =
        Code_Gen_Mod_IN_Coral_Motor_Off;
      Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
    }
  } else if (*FixPtRelationalOperator_i) {
    Co_exit_internal_Coral_Pickup_o();
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_Mode_IN_End_Game_Climb;
    Code_Gen_Model_B.State_ID_Teleop = 4.4;
    Code_Gen_Model_B.Elevator_Height_Desired = Elevator_Height_End_Game;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired = -90.0;
    Code_Gen_Model_B.Desired_Pipeline_a = 0U;
    Code_Gen_Model_DW.is_End_Game_Climb = Code_Gen_Mod_IN_Coral_Motor_Off;
    Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
  } else if (*FixPtRelationalOperator_m) {
    Co_exit_internal_Coral_Pickup_o();
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_Model_IN_Algae_Score;
    Code_Gen_Model_B.State_ID_Teleop = 4.1;
    Code_Gen_Model_B.Elevator_Height_Desired = Elevator_Height_Algae_Score;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
    Code_Gen_Model_B.Desired_Pipeline_a = 0U;
    Code_Gen_Model_DW.is_Algae_Score = Code_Gen_Mod_IN_Coral_Motor_Off;
    Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
  } else if (*FixPtRelationalOperator_ji) {
    Co_exit_internal_Coral_Pickup_o();
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_Mo_IN_Algae_Pickup_Low;
    Code_Gen_Model_B.State_ID_Teleop = 4.2;
    Code_Gen_Model_B.Elevator_Height_Desired = Elevator_Height_Algae_Low;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
    Code_Gen_Model_B.Set_Algae_Level = 2U;
    Code_Gen_Model_B.Desired_Pipeline_a = 2U;
    Code_Gen_Model_DW.is_Algae_Pickup_Low = Code_Gen_Mod_IN_Coral_Motor_Off;
    Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_ml) {
    Co_exit_internal_Coral_Pickup_o();
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_M_IN_Algae_Pickup_High;
    Code_Gen_Model_B.State_ID_Teleop = 4.3;
    Code_Gen_Model_B.Elevator_Height_Desired = Elevator_Height_Algae_High;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
    Code_Gen_Model_B.Set_Algae_Level = 3U;
    Code_Gen_Model_B.Desired_Pipeline_a = 2U;
    Code_Gen_Model_DW.is_Algae_Pickup_High = Code_Gen_Mod_IN_Coral_Motor_Off;
    Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
  } else {
    switch (Code_Gen_Model_DW.is_Actions) {
     case Code_Gen__IN_Coral_Pickup_Lower:
      Code_Gen_Model_B.State_ID_Teleop = 1.1;
      Code_Gen_Model_B.Desired_Pipeline_a = 0U;
      if (Code_Gen_Model_B.Compare) {
        Code_Gen_Model_DW.is_Actions = Code_IN_Coral_Pickup_Lower_Wait;
        Code_Gen_Model_B.State_ID_Teleop = 1.2;
        Code_Gen_Model_B.Coral_Pickup_Lower_Wait_State = true;
        Code_Gen_Model_B.Coral_Wheel_DC = Coral_Motor_DC_Hold;
        Code_Gen_Model_B.Elevator_LowerPickup_Reset = false;
        Code_Gen_Model_DW.timer = 0.0;
      } else {
        Code_Gen_Model_B.Elevator_Height_Desired += Code_Gen_Model_B.DeadZone1 *
          Elevator_Height_Manual_Gain;
        Code_Gen_Model_B.Coral_Arm_Angle_Desired += Code_Gen_Model_B.DeadZone *
          Coral_Arm_Manual_Gain;
      }
      break;

     case Code_IN_Coral_Pickup_Lower_Wait:
      Code_Gen_Model_B.State_ID_Teleop = 1.2;
      Code_Gen_Model_B.Elevator_LowerPickup_Reset = false;
      Code_Gen_Model_B.Desired_Pipeline_a = 0U;
      if ((Code_Gen_Model_DW.timer >= Elevator_LowerPickup_Time) &&
          ((((Code_Gen_Model_DW.Set_L1) || (Code_Gen_Model_DW.Set_L2)) ||
            (Code_Gen_Model_DW.Set_L3)) || (Code_Gen_Model_DW.Set_L4))) {
        Code_Gen_Model_B.Coral_Pickup_Lower_Wait_State = false;
        Code_Gen_Model_DW.is_Actions = Code_Gen__IN_Coral_Pickup_Raise;
        Code_Gen_Model_B.State_ID_Teleop = 1.3;
        Code_Gen_Model_B.Elevator_Height_Desired = Elevator_Height_Raise;
      } else {
        Code_Gen_Model_DW.timer += 0.02;
        Code_Gen_Model_B.Elevator_Height_Desired += Code_Gen_Model_B.DeadZone1 *
          Elevator_Height_Manual_Gain;
        Code_Gen_Model_B.Coral_Arm_Angle_Desired += Code_Gen_Model_B.DeadZone *
          Coral_Arm_Manual_Gain;
      }
      break;

     case Code_Ge_IN_Coral_Pickup_Prepare:
      Code_Gen_Model_B.State_ID_Teleop = 1.0;
      Code_Gen_Model_B.Desired_Pipeline_a = 1U;

      /* Inport: '<Root>/Coral_TOF_Distance' */
      if ((fabs(Code_Gen_Model_B.Elevator_Height_Desired -
                Code_Gen_Model_B.Elevator_Height_Measured) <=
           Elevator_Height_Error_Threshold) && ((fabs
            (Code_Gen_Model_B.Coral_Arm_Angle_Desired -
             Code_Gen_Model_B.Coral_Arm_Angle_Measured) <=
            Coral_Arm_Angle_Error_Threshold) &&
           (Code_Gen_Model_U.Coral_TOF_Distance < Coral_Detect_Distance))) {
        Code_Gen_Model_DW.is_Coral_Pickup_Prepare =
          Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
        Code_Gen_Model_DW.is_Actions = Code_Gen__IN_Coral_Pickup_Lower;
        Code_Gen_Model_B.State_ID_Teleop = 1.1;
        Code_Gen_Model_B.Elevator_Height_Desired = Elevator_Height_Lower;
        Code_Gen_Model_B.Coral_Wheel_DC = Coral_Motor_DC_Pickup;
        Code_Gen_Model_B.Desired_Pipeline_a = 0U;
      } else {
        Code_Gen_Model_B.Elevator_Height_Desired += Code_Gen_Model_B.DeadZone1 *
          Elevator_Height_Manual_Gain;
        Code_Gen_Model_B.Coral_Arm_Angle_Desired += Code_Gen_Model_B.DeadZone *
          Coral_Arm_Manual_Gain;
        if (Code_Gen_Model_DW.is_Coral_Pickup_Prepare ==
            Code_Gen_Model_IN_Coral_Eject) {
          if (Code_Gen_Model_DW.timer >= Coral_Eject_Time) {
            Code_Gen_Model_DW.is_Coral_Pickup_Prepare =
              Code_Gen_Mod_IN_Coral_Motor_Off;
            Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
          } else {
            Code_Gen_Model_DW.timer += 0.02;
          }

          /* case IN_Coral_Motor_Off: */
        } else if (Code_Gen_Model_B.FixPtRelationalOperator_l) {
          Code_Gen_Model_DW.is_Coral_Pickup_Prepare =
            Code_Gen_Model_IN_Coral_Eject;
          Code_Gen_Model_B.Coral_Wheel_DC = Coral_Motor_DC_Eject;
          Code_Gen_Model_DW.timer = 0.0;
        }
      }

      /* End of Inport: '<Root>/Coral_TOF_Distance' */
      break;

     default:
      /* case IN_Coral_Pickup_Raise: */
      Code_Gen_Model_B.State_ID_Teleop = 1.3;
      Code_Gen_Model_B.Desired_Pipeline_a = 0U;
      if ((fabs(Code_Gen_Model_B.Elevator_Height_Desired -
                Code_Gen_Model_B.Elevator_Height_Measured) <=
           Elevator_Height_Error_Threshold) && ((((Code_Gen_Model_DW.Set_L1) ||
             (Code_Gen_Model_DW.Set_L2)) || (Code_Gen_Model_DW.Set_L3)) ||
           (Code_Gen_Model_DW.Set_L4))) {
        Co_exit_internal_Coral_Pickup_o();
        Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
          Code_Gen_Model_IN_Start_Angle;
        Code_Gen_Model_B.State_ID_Teleop = 2.0;
        Code_Gen_Model_B.Coral_Arm_Angle_Desired = Coral_Arm_Angle_Start;
      } else {
        Code_Gen_Model_B.Elevator_Height_Desired += Code_Gen_Model_B.DeadZone1 *
          Elevator_Height_Manual_Gain;
        Code_Gen_Model_B.Coral_Arm_Angle_Desired += Code_Gen_Model_B.DeadZone *
          Coral_Arm_Manual_Gain;
      }
      break;
    }

    if (Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel ==
        Code_Gen_Model_IN_Coral_Pickup) {
      Code_Gen_Model_Set_Level_du();
    }
  }
}

/* Function for Chart: '<S428>/Reefscape_Chart' */
static void Code_G_Elevator_Height_Bottom_j(const boolean_T *Compare_f, const
  boolean_T *FixPtRelationalOperator_ne, const boolean_T
  *FixPtRelationalOperator_j, const boolean_T *FixPtRelationalOperator_i, const
  boolean_T *FixPtRelationalOperator_m, const boolean_T
  *FixPtRelationalOperator_ji)
{
  Code_Gen_Model_B.State_ID_Teleop = 0.2;
  Code_Gen_Model_B.Desired_Pipeline_a = 0U;
  if ((*FixPtRelationalOperator_ne) && (!(*Compare_f))) {
    Code_Gen_Model_DW.is_Elevator_Height_Bottom =
      Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_Model_IN_Coral_Pickup;
    Code_Gen_Model_DW.is_Actions = Code_Ge_IN_Coral_Pickup_Prepare;
    Code_Gen_Model_B.State_ID_Teleop = 1.0;
    Code_Gen_Model_B.Elevator_Height_Desired = Elevator_Height_Prepare;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired = -90.0;
    Code_Gen_Model_B.Desired_Pipeline_a = 1U;
    Code_Gen_Model_DW.is_Coral_Pickup_Prepare = Code_Gen_Mod_IN_Coral_Motor_Off;
    Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
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
      Code_Gen_Model_B.Elevator_Height_Desired = Elevator_Height_Bottom;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
      Code_Gen_Model_DW.is_Elevator_Height_Bottom =
        Code_Gen_Mod_IN_Coral_Motor_Off;
      Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
    } else {
      Code_Gen_Model_DW.is_Elevator_Height_Bottom =
        Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        C_IN_Elevator_Height_Bottom_pre;
      Code_Gen_Model_B.State_ID_Teleop = 0.1;
      Code_Gen_Model_B.Elevator_Height_Desired = Elevator_Height_Bottom_Pre;
      Code_Gen_Model_DW.is_Elevator_Height_Bottom_pre =
        Code_Gen_Mod_IN_Coral_Motor_Off;
      Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
    }
  } else if (*FixPtRelationalOperator_i) {
    Code_Gen_Model_DW.is_Elevator_Height_Bottom =
      Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_Mode_IN_End_Game_Climb;
    Code_Gen_Model_B.State_ID_Teleop = 4.4;
    Code_Gen_Model_B.Elevator_Height_Desired = Elevator_Height_End_Game;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired = -90.0;
    Code_Gen_Model_DW.is_End_Game_Climb = Code_Gen_Mod_IN_Coral_Motor_Off;
    Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
  } else if (*FixPtRelationalOperator_m) {
    Code_Gen_Model_DW.is_Elevator_Height_Bottom =
      Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_Model_IN_Algae_Score;
    Code_Gen_Model_B.State_ID_Teleop = 4.1;
    Code_Gen_Model_B.Elevator_Height_Desired = Elevator_Height_Algae_Score;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
    Code_Gen_Model_DW.is_Algae_Score = Code_Gen_Mod_IN_Coral_Motor_Off;
    Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
  } else if (*FixPtRelationalOperator_ji) {
    Code_Gen_Model_DW.is_Elevator_Height_Bottom =
      Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_Mo_IN_Algae_Pickup_Low;
    Code_Gen_Model_B.State_ID_Teleop = 4.2;
    Code_Gen_Model_B.Elevator_Height_Desired = Elevator_Height_Algae_Low;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
    Code_Gen_Model_B.Set_Algae_Level = 2U;
    Code_Gen_Model_B.Desired_Pipeline_a = 2U;
    Code_Gen_Model_DW.is_Algae_Pickup_Low = Code_Gen_Mod_IN_Coral_Motor_Off;
    Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_ml) {
    Code_Gen_Model_DW.is_Elevator_Height_Bottom =
      Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_M_IN_Algae_Pickup_High;
    Code_Gen_Model_B.State_ID_Teleop = 4.3;
    Code_Gen_Model_B.Elevator_Height_Desired = Elevator_Height_Algae_High;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
    Code_Gen_Model_B.Set_Algae_Level = 3U;
    Code_Gen_Model_B.Desired_Pipeline_a = 2U;
    Code_Gen_Model_DW.is_Algae_Pickup_High = Code_Gen_Mod_IN_Coral_Motor_Off;
    Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
  } else {
    Code_Gen_Model_B.Elevator_Height_Desired += Code_Gen_Model_B.DeadZone1 *
      Elevator_Height_Manual_Gain;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired += Code_Gen_Model_B.DeadZone *
      Coral_Arm_Manual_Gain;
    if (Code_Gen_Model_DW.is_Elevator_Height_Bottom ==
        Code_Gen_Model_IN_Coral_Eject) {
      if (Code_Gen_Model_DW.timer >= Coral_Eject_Time) {
        Code_Gen_Model_DW.is_Elevator_Height_Bottom =
          Code_Gen_Mod_IN_Coral_Motor_Off;
        Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
      } else {
        Code_Gen_Model_DW.timer += 0.02;
      }

      /* case IN_Coral_Motor_Off: */
    } else if (Code_Gen_Model_B.FixPtRelationalOperator_l) {
      Code_Gen_Model_DW.is_Elevator_Height_Bottom =
        Code_Gen_Model_IN_Coral_Eject;
      Code_Gen_Model_B.Coral_Wheel_DC = Coral_Motor_DC_Eject;
      Code_Gen_Model_DW.timer = 0.0;
    }
  }
}

/* Function for Chart: '<S428>/Reefscape_Chart' */
static void Co_Elevator_Height_Bottom_pre_k(const boolean_T *Compare_f, const
  boolean_T *FixPtRelationalOperator_ne, const boolean_T
  *FixPtRelationalOperator_j, const boolean_T *FixPtRelationalOperator_i, const
  boolean_T *FixPtRelationalOperator_m, const boolean_T
  *FixPtRelationalOperator_ji)
{
  boolean_T guard1;
  Code_Gen_Model_B.State_ID_Teleop = 0.1;
  Code_Gen_Model_B.Desired_Pipeline_a = 0U;
  guard1 = false;
  if (Code_Gen_Model_B.Elevator_Height_Measured >
      (Code_Gen_Model_B.Elevator_Height_Desired -
       Elevator_Height_Error_Threshold)) {
    guard1 = true;
  } else if ((*FixPtRelationalOperator_ne) && (!(*Compare_f))) {
    Code_Gen_Model_DW.is_Elevator_Height_Bottom_pre =
      Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_Model_IN_Coral_Pickup;
    Code_Gen_Model_DW.is_Actions = Code_Ge_IN_Coral_Pickup_Prepare;
    Code_Gen_Model_B.State_ID_Teleop = 1.0;
    Code_Gen_Model_B.Elevator_Height_Desired = Elevator_Height_Prepare;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired = -90.0;
    Code_Gen_Model_B.Desired_Pipeline_a = 1U;
    Code_Gen_Model_DW.is_Coral_Pickup_Prepare = Code_Gen_Mod_IN_Coral_Motor_Off;
    Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
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
      Code_Gen_Model_B.Elevator_Height_Desired = Elevator_Height_Bottom_Pre;
      Code_Gen_Model_DW.is_Elevator_Height_Bottom_pre =
        Code_Gen_Mod_IN_Coral_Motor_Off;
      Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
    }
  } else if (*FixPtRelationalOperator_i) {
    Code_Gen_Model_DW.is_Elevator_Height_Bottom_pre =
      Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_Mode_IN_End_Game_Climb;
    Code_Gen_Model_B.State_ID_Teleop = 4.4;
    Code_Gen_Model_B.Elevator_Height_Desired = Elevator_Height_End_Game;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired = -90.0;
    Code_Gen_Model_DW.is_End_Game_Climb = Code_Gen_Mod_IN_Coral_Motor_Off;
    Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
  } else if (*FixPtRelationalOperator_m) {
    Code_Gen_Model_DW.is_Elevator_Height_Bottom_pre =
      Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_Model_IN_Algae_Score;
    Code_Gen_Model_B.State_ID_Teleop = 4.1;
    Code_Gen_Model_B.Elevator_Height_Desired = Elevator_Height_Algae_Score;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
    Code_Gen_Model_DW.is_Algae_Score = Code_Gen_Mod_IN_Coral_Motor_Off;
    Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
  } else if (*FixPtRelationalOperator_ji) {
    Code_Gen_Model_DW.is_Elevator_Height_Bottom_pre =
      Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_Mo_IN_Algae_Pickup_Low;
    Code_Gen_Model_B.State_ID_Teleop = 4.2;
    Code_Gen_Model_B.Elevator_Height_Desired = Elevator_Height_Algae_Low;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
    Code_Gen_Model_B.Set_Algae_Level = 2U;
    Code_Gen_Model_B.Desired_Pipeline_a = 2U;
    Code_Gen_Model_DW.is_Algae_Pickup_Low = Code_Gen_Mod_IN_Coral_Motor_Off;
    Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_ml) {
    Code_Gen_Model_DW.is_Elevator_Height_Bottom_pre =
      Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_M_IN_Algae_Pickup_High;
    Code_Gen_Model_B.State_ID_Teleop = 4.3;
    Code_Gen_Model_B.Elevator_Height_Desired = Elevator_Height_Algae_High;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
    Code_Gen_Model_B.Set_Algae_Level = 3U;
    Code_Gen_Model_B.Desired_Pipeline_a = 2U;
    Code_Gen_Model_DW.is_Algae_Pickup_High = Code_Gen_Mod_IN_Coral_Motor_Off;
    Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
  } else {
    Code_Gen_Model_B.Elevator_Height_Desired += Code_Gen_Model_B.DeadZone1 *
      Elevator_Height_Manual_Gain;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired += Code_Gen_Model_B.DeadZone *
      Coral_Arm_Manual_Gain;
    if (Code_Gen_Model_DW.is_Elevator_Height_Bottom_pre ==
        Code_Gen_Model_IN_Coral_Eject) {
      if (Code_Gen_Model_DW.timer >= Coral_Eject_Time) {
        Code_Gen_Model_DW.is_Elevator_Height_Bottom_pre =
          Code_Gen_Mod_IN_Coral_Motor_Off;
        Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
      } else {
        Code_Gen_Model_DW.timer += 0.02;
      }

      /* case IN_Coral_Motor_Off: */
    } else if (Code_Gen_Model_B.FixPtRelationalOperator_l) {
      Code_Gen_Model_DW.is_Elevator_Height_Bottom_pre =
        Code_Gen_Model_IN_Coral_Eject;
      Code_Gen_Model_B.Coral_Wheel_DC = Coral_Motor_DC_Eject;
      Code_Gen_Model_DW.timer = 0.0;
    }
  }

  if (guard1) {
    Code_Gen_Model_DW.is_Elevator_Height_Bottom_pre =
      Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code__IN_Elevator_Height_Bottom;
    Code_Gen_Model_B.State_ID_Teleop = 0.2;
    Code_Gen_Model_B.Elevator_Height_Desired = Elevator_Height_Bottom;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
    Code_Gen_Model_DW.is_Elevator_Height_Bottom =
      Code_Gen_Mod_IN_Coral_Motor_Off;
    Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
  }
}

/* Function for Chart: '<S428>/Reefscape_Chart' */
static void Code_Gen_Model_End_Game_Climb_g(const boolean_T *Compare_f, const
  boolean_T *FixPtRelationalOperator_ne, const boolean_T
  *FixPtRelationalOperator_j, const boolean_T *FixPtRelationalOperator_i, const
  boolean_T *FixPtRelationalOperator_m, const boolean_T
  *FixPtRelationalOperator_ji)
{
  Code_Gen_Model_B.State_ID_Teleop = 4.4;
  Code_Gen_Model_B.Desired_Pipeline_a = 0U;
  if ((*FixPtRelationalOperator_ne) && (!(*Compare_f))) {
    Code_Gen_Model_DW.is_End_Game_Climb = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_Model_IN_Coral_Pickup;
    Code_Gen_Model_DW.is_Actions = Code_Ge_IN_Coral_Pickup_Prepare;
    Code_Gen_Model_B.State_ID_Teleop = 1.0;
    Code_Gen_Model_B.Elevator_Height_Desired = Elevator_Height_Prepare;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired = -90.0;
    Code_Gen_Model_B.Desired_Pipeline_a = 1U;
    Code_Gen_Model_DW.is_Coral_Pickup_Prepare = Code_Gen_Mod_IN_Coral_Motor_Off;
    Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
    Code_Gen_Model_DW.is_Set_Level = Code_Gen_Model_IN_None;
    Code_Gen_Model_DW.Set_L1 = false;
    Code_Gen_Model_DW.Set_L2 = false;
    Code_Gen_Model_DW.Set_L3 = false;
    Code_Gen_Model_DW.Set_L4 = false;
  } else if (*FixPtRelationalOperator_j) {
    if (Code_Gen_Model_B.Coral_Arm_Angle_Measured >=
        Coral_Arm_Angle_Start_Thresh) {
      Code_Gen_Model_DW.is_End_Game_Climb = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        Code__IN_Elevator_Height_Bottom;
      Code_Gen_Model_B.State_ID_Teleop = 0.2;
      Code_Gen_Model_B.Elevator_Height_Desired = Elevator_Height_Bottom;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
      Code_Gen_Model_DW.is_Elevator_Height_Bottom =
        Code_Gen_Mod_IN_Coral_Motor_Off;
      Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
    } else {
      Code_Gen_Model_DW.is_End_Game_Climb = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        C_IN_Elevator_Height_Bottom_pre;
      Code_Gen_Model_B.State_ID_Teleop = 0.1;
      Code_Gen_Model_B.Elevator_Height_Desired = Elevator_Height_Bottom_Pre;
      Code_Gen_Model_DW.is_Elevator_Height_Bottom_pre =
        Code_Gen_Mod_IN_Coral_Motor_Off;
      Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
    }
  } else if (*FixPtRelationalOperator_i) {
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_Mode_IN_End_Game_Climb;
    Code_Gen_Model_B.Elevator_Height_Desired = Elevator_Height_End_Game;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired = -90.0;
    Code_Gen_Model_DW.is_End_Game_Climb = Code_Gen_Mod_IN_Coral_Motor_Off;
    Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
  } else if (*FixPtRelationalOperator_m) {
    Code_Gen_Model_DW.is_End_Game_Climb = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_Model_IN_Algae_Score;
    Code_Gen_Model_B.State_ID_Teleop = 4.1;
    Code_Gen_Model_B.Elevator_Height_Desired = Elevator_Height_Algae_Score;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
    Code_Gen_Model_DW.is_Algae_Score = Code_Gen_Mod_IN_Coral_Motor_Off;
    Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
  } else if (*FixPtRelationalOperator_ji) {
    Code_Gen_Model_DW.is_End_Game_Climb = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_Mo_IN_Algae_Pickup_Low;
    Code_Gen_Model_B.State_ID_Teleop = 4.2;
    Code_Gen_Model_B.Elevator_Height_Desired = Elevator_Height_Algae_Low;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
    Code_Gen_Model_B.Set_Algae_Level = 2U;
    Code_Gen_Model_B.Desired_Pipeline_a = 2U;
    Code_Gen_Model_DW.is_Algae_Pickup_Low = Code_Gen_Mod_IN_Coral_Motor_Off;
    Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_ml) {
    Code_Gen_Model_DW.is_End_Game_Climb = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_M_IN_Algae_Pickup_High;
    Code_Gen_Model_B.State_ID_Teleop = 4.3;
    Code_Gen_Model_B.Elevator_Height_Desired = Elevator_Height_Algae_High;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
    Code_Gen_Model_B.Set_Algae_Level = 3U;
    Code_Gen_Model_B.Desired_Pipeline_a = 2U;
    Code_Gen_Model_DW.is_Algae_Pickup_High = Code_Gen_Mod_IN_Coral_Motor_Off;
    Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
  } else {
    Code_Gen_Model_B.Elevator_Height_Desired += Code_Gen_Model_B.DeadZone1 *
      Elevator_Height_Manual_Gain;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired += Code_Gen_Model_B.DeadZone *
      Coral_Arm_Manual_Gain;
    if (Code_Gen_Model_DW.is_End_Game_Climb == Code_Gen_Model_IN_Coral_Eject) {
      if (Code_Gen_Model_DW.timer >= Coral_Eject_Time) {
        Code_Gen_Model_DW.is_End_Game_Climb = Code_Gen_Mod_IN_Coral_Motor_Off;
        Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
      } else {
        Code_Gen_Model_DW.timer += 0.02;
      }

      /* case IN_Coral_Motor_Off: */
    } else if (Code_Gen_Model_B.FixPtRelationalOperator_l) {
      Code_Gen_Model_DW.is_End_Game_Climb = Code_Gen_Model_IN_Coral_Eject;
      Code_Gen_Model_B.Coral_Wheel_DC = Coral_Motor_DC_Eject;
      Code_Gen_Model_DW.timer = 0.0;
    }
  }
}

/* Function for Chart: '<S428>/Reefscape_Chart' */
static void Code_Gen_Model_L4_m0(void)
{
  if (((Code_Gen_Model_B.FixPtRelationalOperator) ||
       (Code_Gen_Model_B.FixPtRelationalOperator_k)) ||
      (Code_Gen_Model_B.FixPtRelationalOperator_n)) {
    if (Code_Gen_Model_B.FixPtRelationalOperator) {
      Code_Gen_Model_DW.is_Set_Level_m = Code_Gen_Model_IN_L1;
      Code_Gen_Model_DW.Set_L1 = true;
      Code_Gen_Model_DW.Set_L2 = false;
      Code_Gen_Model_DW.Set_L3 = false;
      Code_Gen_Model_DW.Set_L4 = false;
    } else if (Code_Gen_Model_B.FixPtRelationalOperator_k) {
      Code_Gen_Model_DW.is_Set_Level_m = Code_Gen_Model_IN_L2;
      Code_Gen_Model_DW.Set_L1 = false;
      Code_Gen_Model_DW.Set_L2 = true;
      Code_Gen_Model_DW.Set_L3 = false;
      Code_Gen_Model_DW.Set_L4 = false;
    } else if (Code_Gen_Model_B.FixPtRelationalOperator_n) {
      Code_Gen_Model_DW.is_Set_Level_m = Code_Gen_Model_IN_L3;
      Code_Gen_Model_DW.Set_L1 = false;
      Code_Gen_Model_DW.Set_L2 = false;
      Code_Gen_Model_DW.Set_L3 = true;
      Code_Gen_Model_DW.Set_L4 = false;
    } else if (Code_Gen_Model_B.FixPtRelationalOperator_d) {
      Code_Gen_Model_DW.is_Set_Level_m = Code_Gen_Model_IN_L4;
      Code_Gen_Model_DW.Set_L1 = false;
      Code_Gen_Model_DW.Set_L2 = false;
      Code_Gen_Model_DW.Set_L3 = false;
      Code_Gen_Model_DW.Set_L4 = true;
    }
  }
}

/* Function for Chart: '<S428>/Reefscape_Chart' */
static void Code_Gen_Model_Set_Level_duc(void)
{
  switch (Code_Gen_Model_DW.is_Set_Level_m) {
   case Code_Gen_Model_IN_L1:
    if (((Code_Gen_Model_B.FixPtRelationalOperator_k) ||
         (Code_Gen_Model_B.FixPtRelationalOperator_n)) ||
        (Code_Gen_Model_B.FixPtRelationalOperator_d)) {
      if (Code_Gen_Model_B.FixPtRelationalOperator) {
        Code_Gen_Model_DW.is_Set_Level_m = Code_Gen_Model_IN_L1;
        Code_Gen_Model_DW.Set_L1 = true;
        Code_Gen_Model_DW.Set_L2 = false;
        Code_Gen_Model_DW.Set_L3 = false;
        Code_Gen_Model_DW.Set_L4 = false;
      } else if (Code_Gen_Model_B.FixPtRelationalOperator_k) {
        Code_Gen_Model_DW.is_Set_Level_m = Code_Gen_Model_IN_L2;
        Code_Gen_Model_DW.Set_L1 = false;
        Code_Gen_Model_DW.Set_L2 = true;
        Code_Gen_Model_DW.Set_L3 = false;
        Code_Gen_Model_DW.Set_L4 = false;
      } else if (Code_Gen_Model_B.FixPtRelationalOperator_n) {
        Code_Gen_Model_DW.is_Set_Level_m = Code_Gen_Model_IN_L3;
        Code_Gen_Model_DW.Set_L1 = false;
        Code_Gen_Model_DW.Set_L2 = false;
        Code_Gen_Model_DW.Set_L3 = true;
        Code_Gen_Model_DW.Set_L4 = false;
      } else if (Code_Gen_Model_B.FixPtRelationalOperator_d) {
        Code_Gen_Model_DW.is_Set_Level_m = Code_Gen_Model_IN_L4;
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
        Code_Gen_Model_DW.is_Set_Level_m = Code_Gen_Model_IN_L1;
        Code_Gen_Model_DW.Set_L1 = true;
        Code_Gen_Model_DW.Set_L2 = false;
        Code_Gen_Model_DW.Set_L3 = false;
        Code_Gen_Model_DW.Set_L4 = false;
      } else if (Code_Gen_Model_B.FixPtRelationalOperator_k) {
        Code_Gen_Model_DW.is_Set_Level_m = Code_Gen_Model_IN_L2;
        Code_Gen_Model_DW.Set_L1 = false;
        Code_Gen_Model_DW.Set_L2 = true;
        Code_Gen_Model_DW.Set_L3 = false;
        Code_Gen_Model_DW.Set_L4 = false;
      } else if (Code_Gen_Model_B.FixPtRelationalOperator_n) {
        Code_Gen_Model_DW.is_Set_Level_m = Code_Gen_Model_IN_L3;
        Code_Gen_Model_DW.Set_L1 = false;
        Code_Gen_Model_DW.Set_L2 = false;
        Code_Gen_Model_DW.Set_L3 = true;
        Code_Gen_Model_DW.Set_L4 = false;
      } else if (Code_Gen_Model_B.FixPtRelationalOperator_d) {
        Code_Gen_Model_DW.is_Set_Level_m = Code_Gen_Model_IN_L4;
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
        Code_Gen_Model_DW.is_Set_Level_m = Code_Gen_Model_IN_L1;
        Code_Gen_Model_DW.Set_L1 = true;
        Code_Gen_Model_DW.Set_L2 = false;
        Code_Gen_Model_DW.Set_L3 = false;
        Code_Gen_Model_DW.Set_L4 = false;
      } else if (Code_Gen_Model_B.FixPtRelationalOperator_k) {
        Code_Gen_Model_DW.is_Set_Level_m = Code_Gen_Model_IN_L2;
        Code_Gen_Model_DW.Set_L1 = false;
        Code_Gen_Model_DW.Set_L2 = true;
        Code_Gen_Model_DW.Set_L3 = false;
        Code_Gen_Model_DW.Set_L4 = false;
      } else if (Code_Gen_Model_B.FixPtRelationalOperator_n) {
        Code_Gen_Model_DW.is_Set_Level_m = Code_Gen_Model_IN_L3;
        Code_Gen_Model_DW.Set_L1 = false;
        Code_Gen_Model_DW.Set_L2 = false;
        Code_Gen_Model_DW.Set_L3 = true;
        Code_Gen_Model_DW.Set_L4 = false;
      } else if (Code_Gen_Model_B.FixPtRelationalOperator_d) {
        Code_Gen_Model_DW.is_Set_Level_m = Code_Gen_Model_IN_L4;
        Code_Gen_Model_DW.Set_L1 = false;
        Code_Gen_Model_DW.Set_L2 = false;
        Code_Gen_Model_DW.Set_L3 = false;
        Code_Gen_Model_DW.Set_L4 = true;
      }
    }
    break;

   case Code_Gen_Model_IN_L4:
    Code_Gen_Model_L4_m0();
    break;

   default:
    /* case IN_None: */
    if (Code_Gen_Model_B.FixPtRelationalOperator) {
      Code_Gen_Model_DW.is_Set_Level_m = Code_Gen_Model_IN_L1;
      Code_Gen_Model_DW.Set_L1 = true;
      Code_Gen_Model_DW.Set_L2 = false;
      Code_Gen_Model_DW.Set_L3 = false;
      Code_Gen_Model_DW.Set_L4 = false;
    } else if (Code_Gen_Model_B.FixPtRelationalOperator_k) {
      Code_Gen_Model_DW.is_Set_Level_m = Code_Gen_Model_IN_L2;
      Code_Gen_Model_DW.Set_L1 = false;
      Code_Gen_Model_DW.Set_L2 = true;
      Code_Gen_Model_DW.Set_L3 = false;
      Code_Gen_Model_DW.Set_L4 = false;
    } else if (Code_Gen_Model_B.FixPtRelationalOperator_n) {
      Code_Gen_Model_DW.is_Set_Level_m = Code_Gen_Model_IN_L3;
      Code_Gen_Model_DW.Set_L1 = false;
      Code_Gen_Model_DW.Set_L2 = false;
      Code_Gen_Model_DW.Set_L3 = true;
      Code_Gen_Model_DW.Set_L4 = false;
    } else if (Code_Gen_Model_B.FixPtRelationalOperator_d) {
      Code_Gen_Model_DW.is_Set_Level_m = Code_Gen_Model_IN_L4;
      Code_Gen_Model_DW.Set_L1 = false;
      Code_Gen_Model_DW.Set_L2 = false;
      Code_Gen_Model_DW.Set_L3 = false;
      Code_Gen_Model_DW.Set_L4 = true;
    }
    break;
  }
}

real_T rt_powd_snf(real_T u0, real_T u1)
{
  real_T y;
  if ((rtIsNaN(u0)) || (rtIsNaN(u1))) {
    y = (rtNaN);
  } else {
    real_T tmp;
    real_T tmp_0;
    tmp = fabs(u0);
    tmp_0 = fabs(u1);
    if (rtIsInf(u1)) {
      if (tmp == 1.0) {
        y = 1.0;
      } else if (tmp > 1.0) {
        if (u1 > 0.0) {
          y = (rtInf);
        } else {
          y = 0.0;
        }
      } else if (u1 > 0.0) {
        y = 0.0;
      } else {
        y = (rtInf);
      }
    } else if (tmp_0 == 0.0) {
      y = 1.0;
    } else if (tmp_0 == 1.0) {
      if (u1 > 0.0) {
        y = u0;
      } else {
        y = 1.0 / u0;
      }
    } else if (u1 == 2.0) {
      y = u0 * u0;
    } else if ((u1 == 0.5) && (u0 >= 0.0)) {
      y = sqrt(u0);
    } else if ((u0 < 0.0) && (u1 > floor(u1))) {
      y = (rtNaN);
    } else {
      y = pow(u0, u1);
    }
  }

  return y;
}

/* System initialize for atomic system: '<Root>/RoboRio Controls' */
void Model_Step_Init(void)
{
  /* Start for SwitchCase: '<S2>/Switch Case' */
  Code_Gen_Model_DW.SwitchCase_ActiveSubsystem = -1;

  /* Start for If: '<S25>/If' */
  Code_Gen_Model_DW.If_ActiveSubsystem = -1;

  /* InitializeConditions for Delay: '<S134>/MemoryX' */
  Code_Gen_Model_DW.icLoad = true;

  /* InitializeConditions for UnitDelay: '<S16>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE = Gyro_Calibration_Default;

  /* InitializeConditions for DiscreteIntegrator: '<S22>/Accumulator2' incorporates:
   *  Constant: '<S2>/Constant'
   */
  Code_Gen_Model_DW.Accumulator2_DSTATE = Odometry_IC_X;
  Code_Gen_Model_DW.Accumulator2_PrevResetState = 2;

  /* InitializeConditions for DiscreteIntegrator: '<S22>/Accumulator' incorporates:
   *  Constant: '<S2>/Constant1'
   */
  Code_Gen_Model_DW.Accumulator_DSTATE = Odometry_IC_Y;
  Code_Gen_Model_DW.Accumulator_PrevResetState = 2;

  /* InitializeConditions for UnitDelay: '<S376>/FixPt Unit Delay2' */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE = 1U;

  /* InitializeConditions for UnitDelay: '<S393>/FixPt Unit Delay2' */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_p = 1U;

  /* InitializeConditions for UnitDelay: '<S386>/FixPt Unit Delay2' */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_c = 1U;

  /* InitializeConditions for UnitDelay: '<S103>/FixPt Unit Delay2' */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_o = 1U;

  /* InitializeConditions for UnitDelay: '<S85>/FixPt Unit Delay2' */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_j = 1U;

  /* InitializeConditions for DiscreteIntegrator: '<S23>/Accumulator2' */
  Code_Gen_Model_DW.Accumulator2_PrevResetState_c = 2;
  Code_Gen_Model_DW.Accumulator2_IC_LOADING = 1U;

  /* InitializeConditions for DiscreteIntegrator: '<S23>/Accumulator' */
  Code_Gen_Model_DW.Accumulator_PrevResetState_j = 2;
  Code_Gen_Model_DW.Accumulator_IC_LOADING = 1U;

  /* SystemInitialize for IfAction SubSystem: '<S2>/Teleop' */
  /* InitializeConditions for UnitDelay: '<S466>/FixPt Unit Delay2' */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_a = 1U;

  /* End of SystemInitialize for SubSystem: '<S2>/Teleop' */

  /* SystemInitialize for IfAction SubSystem: '<S25>/Spline Path Following Enabled' */
  /* Start for If: '<S217>/If' */
  Code_Gen_Model_DW.If_ActiveSubsystem_h = -1;

  /* InitializeConditions for UnitDelay: '<S213>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_gh = 2.0;

  /* SystemInitialize for IfAction SubSystem: '<S217>/Robot_Index_Is_Valid' */
  /* Start for If: '<S220>/If' */
  Code_Gen_Model_DW.If_ActiveSubsystem_o = -1;

  /* SystemInitialize for IfAction SubSystem: '<S220>/Circle_Check_Valid' */
  /* Start for If: '<S222>/If' */
  Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;

  /* End of SystemInitialize for SubSystem: '<S220>/Circle_Check_Valid' */
  /* End of SystemInitialize for SubSystem: '<S217>/Robot_Index_Is_Valid' */
  /* End of SystemInitialize for SubSystem: '<S25>/Spline Path Following Enabled' */
}

/* Output and update for atomic system: '<Root>/RoboRio Controls' */
void Model_Step(void)
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
  real_T rtb_MatrixConcatenate_o[450];
  real_T rtb_Position_and_Curvature[450];
  real_T distance_from_robot[150];
  real_T rtb_Assignment_d[150];
  real_T rtb_MatrixConcatenate_h[100];
  real_T rtb_Spline_Ref_Poses[40];
  real_T rtb_Assignment[24];
  real_T rtb_MatrixConcatenate_p[24];
  real_T rtb_Ref_Poses[20];
  real_T rtb_Selector5[20];
  real_T rtb_TmpSignalConversionAtProduc[8];
  real_T rtb_Add2_f[2];
  real_T rtb_Minus_n[2];
  real_T rtb_Reshapey[2];
  real_T rtb_Abs1;
  real_T rtb_Add_ju;
  real_T rtb_DeadZone;
  real_T rtb_Hypot;
  real_T rtb_Hypot_b;
  real_T rtb_Hypot_g5;
  real_T rtb_Integral_hv;
  real_T rtb_Integral_m;
  real_T rtb_Integral_p;
  real_T rtb_MatrixConcatenate_b_idx_0;
  real_T rtb_MatrixConcatenate_b_idx_1;
  real_T rtb_Merge1;
  real_T rtb_Minus_k_idx_0;
  real_T rtb_Minus_k_idx_1;
  real_T rtb_Product2_a;
  real_T rtb_Product_hi;
  real_T rtb_Product_il;
  real_T rtb_Product_nq;
  real_T rtb_Product_nr;
  real_T rtb_Rotationmatrixfromlocalto_0;
  real_T rtb_Rotationmatrixfromlocalto_1;
  real_T rtb_Rotationmatrixfromlocalto_2;
  real_T rtb_Rotationmatrixfromlocalto_3;
  real_T rtb_Subtract1_bh;
  real_T rtb_Subtract2_h;
  real_T rtb_Subtract_e;
  real_T rtb_Subtract_gy;
  real_T rtb_Subtract_oz;
  real_T rtb_Sum1_b;
  real_T rtb_Sum1_j;
  real_T rtb_Sum2_e;
  real_T rtb_Switch;
  real_T rtb_Switch1;
  real_T rtb_Switch1_e3;
  real_T rtb_Switch2_kn;
  real_T rtb_Switch2_n;
  real_T rtb_UnitDelay1_el;
  real_T rtb_rx;
  real_T rtb_rx_f;
  real_T rtb_rx_p;
  real_T rtb_thetay;
  real_T rtb_thetay_e;
  real_T rtb_uDLookupTable_l;
  real_T tmp;
  int32_T i;
  int32_T rtb_Bias1_p;
  int32_T rtb_Num_Segments;
  int32_T s239_iter;
  uint16_T s264_iter;
  int8_T rtAction;
  int8_T rtPrevAction;
  uint8_T MultiportSwitch;
  uint8_T MultiportSwitch1;
  uint8_T Switch14;
  uint8_T Switch6;
  boolean_T Compare_f;
  boolean_T FixPtRelationalOperator_e;
  boolean_T FixPtRelationalOperator_ji;
  boolean_T FixPtRelationalOperator_p;
  boolean_T Robot_Reached_Destination;
  boolean_T exitg1;
  boolean_T rtb_Compare;
  boolean_T rtb_Compare_ai;
  boolean_T rtb_Is_Absolute_Steering;
  boolean_T rtb_Is_Absolute_Translation_g;

  /* Product: '<S22>/Product' incorporates:
   *  Constant: '<S22>/Constant1'
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Rev'
   *  Sum: '<S189>/Diff'
   *  UnitDelay: '<S189>/UD'
   *
   * Block description for '<S189>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S189>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Subtract_e = (Code_Gen_Model_U.FrontLeft_Drive_Motor_Rev -
                    Code_Gen_Model_DW.UD_DSTATE) * 0.049546817471321378;

  /* Sum: '<S272>/Add1' incorporates:
   *  Constant: '<S272>/Constant3'
   *  Constant: '<S272>/Constant4'
   *  Gain: '<S26>/Revolutions to Radians'
   *  Inport: '<Root>/FrontLeft_Steer_Rev'
   *  Inport: '<Root>/FrontLeft_Turn_Offset'
   *  Math: '<S272>/Math Function'
   *  Sum: '<S26>/Add'
   *  Sum: '<S272>/Add2'
   */
  Code_Gen_Model_B.FL_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.FrontLeft_Steer_Rev -
       Code_Gen_Model_U.FrontLeft_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Product: '<S22>/Product1' incorporates:
   *  Constant: '<S22>/Constant1'
   *  Inport: '<Root>/FrontRight_Drive_Motor_Rev'
   *  Sum: '<S190>/Diff'
   *  UnitDelay: '<S190>/UD'
   *
   * Block description for '<S190>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S190>/UD':
   *
   *  Store in Global RAM
   */
  rtb_uDLookupTable_l = (Code_Gen_Model_U.FrontRight_Drive_Motor_Rev -
    Code_Gen_Model_DW.UD_DSTATE_m) * 0.049546817471321378;

  /* Sum: '<S273>/Add1' incorporates:
   *  Constant: '<S273>/Constant3'
   *  Constant: '<S273>/Constant4'
   *  Gain: '<S26>/Revolutions to Radians1'
   *  Inport: '<Root>/FrontRight_Steer_Rev'
   *  Inport: '<Root>/FrontRight_Turn_Offset'
   *  Math: '<S273>/Math Function'
   *  Sum: '<S26>/Add1'
   *  Sum: '<S273>/Add2'
   */
  Code_Gen_Model_B.FR_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.FrontRight_Steer_Rev -
       Code_Gen_Model_U.FrontRight_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Product: '<S22>/Product2' incorporates:
   *  Constant: '<S22>/Constant1'
   *  Inport: '<Root>/BackLeft_Drive_Motor_Rev'
   *  Sum: '<S191>/Diff'
   *  UnitDelay: '<S191>/UD'
   *
   * Block description for '<S191>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S191>/UD':
   *
   *  Store in Global RAM
   */
  rtb_rx = (Code_Gen_Model_U.BackLeft_Drive_Motor_Rev -
            Code_Gen_Model_DW.UD_DSTATE_i) * 0.049546817471321378;

  /* Sum: '<S274>/Add1' incorporates:
   *  Constant: '<S274>/Constant3'
   *  Constant: '<S274>/Constant4'
   *  Gain: '<S26>/Revolutions to Radians2'
   *  Inport: '<Root>/BackLeft_Steer_Rev'
   *  Inport: '<Root>/BackLeft_Turn_Offset'
   *  Math: '<S274>/Math Function'
   *  Sum: '<S26>/Add2'
   *  Sum: '<S274>/Add2'
   */
  Code_Gen_Model_B.BL_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.BackLeft_Steer_Rev -
       Code_Gen_Model_U.BackLeft_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Product: '<S22>/Product3' incorporates:
   *  Constant: '<S22>/Constant1'
   *  Inport: '<Root>/BackRight_Drive_Motor_Rev'
   *  Sum: '<S192>/Diff'
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
  rtb_rx_f = (Code_Gen_Model_U.BackRight_Drive_Motor_Rev -
              Code_Gen_Model_DW.UD_DSTATE_c) * 0.049546817471321378;

  /* Sum: '<S275>/Add1' incorporates:
   *  Constant: '<S275>/Constant3'
   *  Constant: '<S275>/Constant4'
   *  Gain: '<S26>/Revolutions to Radians3'
   *  Inport: '<Root>/BackRight_Steer_Rev'
   *  Inport: '<Root>/BackRight_Turn_Offset'
   *  Math: '<S275>/Math Function'
   *  Sum: '<S26>/Add3'
   *  Sum: '<S275>/Add2'
   */
  Code_Gen_Model_B.BR_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.BackRight_Steer_Rev -
       Code_Gen_Model_U.BackRight_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* SignalConversion generated from: '<S22>/Product7' incorporates:
   *  Fcn: '<S193>/r->x'
   *  Fcn: '<S193>/theta->y'
   *  Fcn: '<S194>/r->x'
   *  Fcn: '<S194>/theta->y'
   *  Fcn: '<S195>/r->x'
   *  Fcn: '<S195>/theta->y'
   *  Fcn: '<S196>/r->x'
   *  Fcn: '<S196>/theta->y'
   */
  rtb_TmpSignalConversionAtProduc[0] = rtb_Subtract_e * cos
    (Code_Gen_Model_B.FL_Steer_Module_Angle);
  rtb_TmpSignalConversionAtProduc[1] = rtb_Subtract_e * sin
    (Code_Gen_Model_B.FL_Steer_Module_Angle);
  rtb_TmpSignalConversionAtProduc[2] = rtb_uDLookupTable_l * cos
    (Code_Gen_Model_B.FR_Steer_Module_Angle);
  rtb_TmpSignalConversionAtProduc[3] = rtb_uDLookupTable_l * sin
    (Code_Gen_Model_B.FR_Steer_Module_Angle);
  rtb_TmpSignalConversionAtProduc[4] = rtb_rx * cos
    (Code_Gen_Model_B.BL_Steer_Module_Angle);
  rtb_TmpSignalConversionAtProduc[5] = rtb_rx * sin
    (Code_Gen_Model_B.BL_Steer_Module_Angle);
  rtb_TmpSignalConversionAtProduc[6] = rtb_rx_f * cos
    (Code_Gen_Model_B.BR_Steer_Module_Angle);
  rtb_TmpSignalConversionAtProduc[7] = rtb_rx_f * sin
    (Code_Gen_Model_B.BR_Steer_Module_Angle);

  /* Delay: '<S134>/MemoryX' incorporates:
   *  Constant: '<S134>/X0'
   */
  if (Code_Gen_Model_DW.icLoad) {
    Code_Gen_Model_DW.MemoryX_DSTATE[0] = 0.0;
    Code_Gen_Model_DW.MemoryX_DSTATE[1] = 0.0;
  }

  /* Switch: '<S16>/Switch1' incorporates:
   *  Constant: '<S16>/Constant3'
   *  Inport: '<Root>/Gyro_Angle'
   *  RelationalOperator: '<S114>/FixPt Relational Operator'
   *  Sum: '<S16>/Sum'
   *  UnitDelay: '<S114>/Delay Input1'
   *  UnitDelay: '<S16>/Unit Delay1'
   *
   * Block description for '<S114>/Delay Input1':
   *
   *  Store in Global RAM
   */
  if (Gyro_Calibration_Reset_Flag > Code_Gen_Model_DW.DelayInput1_DSTATE) {
    /* MultiPortSwitch: '<S16>/Multiport Switch' incorporates:
     *  Constant: '<S16>/Constant2'
     *  Constant: '<S16>/Constant4'
     *  Constant: '<S16>/Constant5'
     *  Constant: '<S16>/Constant6'
     *  Constant: '<S16>/Constant7'
     */
    switch ((int32_T)Auto_Starting_Position) {
     case 1:
      rtb_Switch1 = Gyro_Calibration_Auto_Left;
      break;

     case 2:
      rtb_Switch1 = Gyro_Calibration_Auto_Center;
      break;

     case 3:
      rtb_Switch1 = Gyro_Calibration_Auto_Right;
      break;

     default:
      rtb_Switch1 = Gyro_Calibration_Default;
      break;
    }

    /* End of MultiPortSwitch: '<S16>/Multiport Switch' */
    rtb_Switch1 -= Code_Gen_Model_U.Gyro_Angle;
  } else {
    rtb_Switch1 = Code_Gen_Model_DW.UnitDelay1_DSTATE;
  }

  /* End of Switch: '<S16>/Switch1' */

  /* Sum: '<S16>/Subtract1' incorporates:
   *  Inport: '<Root>/Gyro_Angle'
   */
  Code_Gen_Model_B.Gyro_Angle_Calibrated_deg = Code_Gen_Model_U.Gyro_Angle +
    rtb_Switch1;

  /* Gain: '<S113>/Gain1' */
  Code_Gen_Model_B.Gyro_Angle_rad = 0.017453292519943295 *
    Code_Gen_Model_B.Gyro_Angle_Calibrated_deg;

  /* Switch: '<S16>/Switch' incorporates:
   *  Constant: '<S16>/Constant'
   *  Constant: '<S16>/Constant1'
   *  Inport: '<Root>/IsBlueAlliance'
   */
  if (Code_Gen_Model_U.IsBlueAlliance != 0.0) {
    rtb_thetay = 0.0;
  } else {
    rtb_thetay = 3.1415926535897931;
  }

  /* End of Switch: '<S16>/Switch' */

  /* Sum: '<S16>/Add' */
  Code_Gen_Model_B.Gyro_Angle_Field_rad = Code_Gen_Model_B.Gyro_Angle_rad +
    rtb_thetay;

  /* Trigonometry: '<S22>/Trigonometric Function' */
  rtb_rx_f = cos(Code_Gen_Model_B.Gyro_Angle_Field_rad);

  /* Trigonometry: '<S22>/Trigonometric Function1' */
  rtb_Abs1 = sin(Code_Gen_Model_B.Gyro_Angle_Field_rad);

  /* SignalConversion generated from: '<S22>/Rotation matrix from local to global' */
  rtb_Rotationmatrixfromlocalto_3 = rtb_rx_f;
  rtb_Rotationmatrixfromlocalto_2 = rtb_Abs1;

  /* SignalConversion generated from: '<S22>/Rotation matrix from local to global' incorporates:
   *  UnaryMinus: '<S22>/Unary Minus'
   */
  rtb_Rotationmatrixfromlocalto_1 = -rtb_Abs1;
  rtb_Rotationmatrixfromlocalto_0 = rtb_rx_f;

  /* Sum: '<S188>/Diff' incorporates:
   *  UnitDelay: '<S188>/UD'
   *
   * Block description for '<S188>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S188>/UD':
   *
   *  Store in Global RAM
   */
  rtb_rx_f = Code_Gen_Model_B.Gyro_Angle_Field_rad -
    Code_Gen_Model_DW.UD_DSTATE_d;

  /* Sum: '<S22>/Subtract2' incorporates:
   *  Constant: '<S22>/Constant3'
   *  Gain: '<S22>/Gain7'
   *  Math: '<S22>/Square'
   */
  rtb_Abs1 = 1.0 - ((rtb_rx_f * rtb_rx_f) * 0.16666666666666666);

  /* Gain: '<S22>/Gain6' */
  rtb_rx_f *= 0.5;

  /* Product: '<S22>/Product7' incorporates:
   *  Constant: '<S22>/Constant4'
   */
  rtb_Switch2_kn = 0.0;
  rtb_Subtract_oz = 0.0;
  i = 0;
  for (rtb_Num_Segments = 0; rtb_Num_Segments < 8; rtb_Num_Segments++) {
    rtb_Minus_k_idx_0 = rtb_TmpSignalConversionAtProduc[rtb_Num_Segments];
    rtb_Switch2_kn += Code_Gen_Model_ConstP.pooled27[i] * rtb_Minus_k_idx_0;
    rtb_Subtract_oz += Code_Gen_Model_ConstP.pooled27[i + 1] * rtb_Minus_k_idx_0;
    i += 2;
  }

  /* End of Product: '<S22>/Product7' */

  /* Product: '<S22>/Product6' incorporates:
   *  Concatenate: '<S22>/Rotation matrix from local to global'
   *  SignalConversion generated from: '<S22>/POSE exponential matrix for improved accuracy while rotating'
   *  UnaryMinus: '<S22>/Unary Minus2'
   */
  rtb_rx = (rtb_Abs1 * rtb_Switch2_kn) + ((-rtb_rx_f) * rtb_Subtract_oz);
  rtb_rx_f = (rtb_rx_f * rtb_Switch2_kn) + (rtb_Abs1 * rtb_Subtract_oz);
  Code_Gen_Model_B.Product6[0] = rtb_Rotationmatrixfromlocalto_3 * rtb_rx;
  Code_Gen_Model_B.Product6[1] = rtb_Rotationmatrixfromlocalto_2 * rtb_rx;
  Code_Gen_Model_B.Product6[0] += rtb_Rotationmatrixfromlocalto_1 * rtb_rx_f;
  Code_Gen_Model_B.Product6[1] += rtb_Rotationmatrixfromlocalto_0 * rtb_rx_f;

  /* UnitDelay: '<S94>/Unit Delay' */
  rtb_rx_f = Code_Gen_Model_DW.UnitDelay_DSTATE;

  /* Bias: '<S2>/Add Constant' incorporates:
   *  Inport: '<Root>/Coral_Arm_Angle_Measured_Raw'
   */
  Code_Gen_Model_B.Coral_Arm_Angle_Measured =
    Code_Gen_Model_U.Coral_Arm_Angle_Measured_Raw - 180.0;

  /* RelationalOperator: '<S131>/FixPt Relational Operator' incorporates:
   *  Inport: '<Root>/Joystick_Left_B11'
   *  UnitDelay: '<S131>/Delay Input1'
   *
   * Block description for '<S131>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_B.Button_Enable_Wheels = (Code_Gen_Model_U.Joystick_Left_B11 >
    Code_Gen_Model_DW.DelayInput1_DSTATE_n);

  /* RelationalOperator: '<S132>/FixPt Relational Operator' incorporates:
   *  Inport: '<Root>/Joystick_Left_B12'
   *  UnitDelay: '<S132>/Delay Input1'
   *
   * Block description for '<S132>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_B.Button_Reset_Wheel_Offsets =
    (Code_Gen_Model_U.Joystick_Left_B12 > Code_Gen_Model_DW.DelayInput1_DSTATE_e);

  /* RelationalOperator: '<S133>/FixPt Relational Operator' incorporates:
   *  Inport: '<Root>/Joystick_Left_B13'
   *  UnitDelay: '<S133>/Delay Input1'
   *
   * Block description for '<S133>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_B.Button_Disable_Wheels = (Code_Gen_Model_U.Joystick_Left_B13 >
    Code_Gen_Model_DW.DelayInput1_DSTATE_nj);

  /* SignalConversion: '<S17>/Signal Copy1' incorporates:
   *  Inport: '<Root>/Joystick_Left_X'
   */
  Code_Gen_Model_B.Drive_Joystick_X = Code_Gen_Model_U.Joystick_Left_X;

  /* SignalConversion: '<S17>/Signal Copy2' incorporates:
   *  Inport: '<Root>/Joystick_Left_Y'
   */
  Code_Gen_Model_B.Drive_Joystick_Y = Code_Gen_Model_U.Joystick_Left_Y;

  /* SignalConversion: '<S17>/Signal Copy3' incorporates:
   *  Inport: '<Root>/Joystick_Left_Z'
   */
  Code_Gen_Model_B.Drive_Joystick_Z = Code_Gen_Model_U.Joystick_Left_Z;

  /* RelationalOperator: '<S122>/Compare' incorporates:
   *  Constant: '<S122>/Constant'
   *  Inport: '<Root>/Joystick_Left_POV'
   */
  Code_Gen_Model_B.Drive_Joystick_Z_Mode = (Code_Gen_Model_U.Joystick_Left_POV
    != -1.0);

  /* SignalConversion: '<S17>/Signal Copy5' incorporates:
   *  Inport: '<Root>/Joystick_Right_Y'
   */
  Code_Gen_Model_B.Steer_Joystick_Y = Code_Gen_Model_U.Joystick_Right_Y;

  /* SignalConversion: '<S17>/Signal Copy6' incorporates:
   *  Inport: '<Root>/Joystick_Right_Z'
   */
  Code_Gen_Model_B.Steer_Joystick_Z = Code_Gen_Model_U.Joystick_Right_Z;

  /* RelationalOperator: '<S128>/Compare' incorporates:
   *  Constant: '<S128>/Constant'
   *  Inport: '<Root>/Joystick_Left_B1'
   */
  Code_Gen_Model_B.Is_Boosting = (Code_Gen_Model_U.Joystick_Left_B1 != 0.0);

  /* RelationalOperator: '<S120>/Compare' incorporates:
   *  Constant: '<S120>/Constant'
   *  Inport: '<Root>/Joystick_Right_POV'
   */
  Code_Gen_Model_B.Face_Toward_Driver = (Code_Gen_Model_U.Joystick_Right_POV ==
    180.0);

  /* RelationalOperator: '<S121>/Compare' incorporates:
   *  Constant: '<S121>/Constant'
   *  Inport: '<Root>/Joystick_Right_POV'
   */
  Code_Gen_Model_B.Face_Right_Driver = (Code_Gen_Model_U.Joystick_Right_POV ==
    90.0);

  /* RelationalOperator: '<S123>/Compare' incorporates:
   *  Constant: '<S123>/Constant'
   *  Inport: '<Root>/Joystick_Right_POV'
   */
  Code_Gen_Model_B.Face_Left_Driver = (Code_Gen_Model_U.Joystick_Right_POV ==
    270.0);

  /* RelationalOperator: '<S116>/Compare' incorporates:
   *  Constant: '<S116>/Constant'
   *  Inport: '<Root>/Joystick_Right_POV'
   */
  Code_Gen_Model_B.Face_Away_Driver = (Code_Gen_Model_U.Joystick_Right_POV ==
    0.0);

  /* Sum: '<S20>/Add' incorporates:
   *  Constant: '<S20>/Constant'
   *  Gain: '<S20>/Convert meters to inches1'
   *  Inport: '<Root>/Limelight_Tag_X'
   */
  Code_Gen_Model_B.Limelight_Tag_Corrected_X = (39.37008 *
    Code_Gen_Model_U.Limelight_Tag_X) + Limelight_Tag_X_Offset;

  /* Sum: '<S20>/Add1' incorporates:
   *  Constant: '<S20>/Constant1'
   *  Gain: '<S20>/Convert meters to inches'
   *  Inport: '<Root>/Limelight_Tag_Y'
   */
  Code_Gen_Model_B.Limelight_Tag_Corrected_Y = (39.37008 *
    Code_Gen_Model_U.Limelight_Tag_Y) + Limelight_Tag_Y_Offset;

  /* Sum: '<S20>/Add2' incorporates:
   *  Constant: '<S20>/Constant2'
   *  Inport: '<Root>/Limelight_Tag_Angle'
   */
  Code_Gen_Model_B.Limelight_Tag_Corrected_Angle =
    Code_Gen_Model_U.Limelight_Tag_Angle + Limelight_Tag_Angle_Offset;

  /* RelationalOperator: '<S126>/Compare' incorporates:
   *  Constant: '<S126>/Constant'
   *  Inport: '<Root>/Joystick_Left_B3'
   */
  Code_Gen_Model_B.Align_Left = (Code_Gen_Model_U.Joystick_Left_B3 != 0.0);

  /* RelationalOperator: '<S125>/Compare' incorporates:
   *  Constant: '<S125>/Constant'
   *  Inport: '<Root>/Joystick_Left_B4'
   */
  Code_Gen_Model_B.Align_Right = (Code_Gen_Model_U.Joystick_Left_B4 != 0.0);

  /* RelationalOperator: '<S127>/Compare' incorporates:
   *  Constant: '<S127>/Constant'
   *  Inport: '<Root>/Joystick_Left_B2'
   */
  Code_Gen_Model_B.Align_Center = (Code_Gen_Model_U.Joystick_Left_B2 != 0.0);

  /* RelationalOperator: '<S124>/Compare' incorporates:
   *  Constant: '<S124>/Constant'
   *  Inport: '<Root>/Joystick_Left_B7'
   */
  Code_Gen_Model_B.Drive_Engage_Hook = (Code_Gen_Model_U.Joystick_Left_B7 != 0.0);

  /* RelationalOperator: '<S115>/Compare' incorporates:
   *  Constant: '<S115>/Constant'
   *  Inport: '<Root>/Gamepad_POV'
   */
  Code_Gen_Model_B.Gamepad_POV_Up = (Code_Gen_Model_U.Gamepad_POV == 0.0);

  /* RelationalOperator: '<S117>/Compare' incorporates:
   *  Constant: '<S117>/Constant'
   *  Inport: '<Root>/Gamepad_POV'
   */
  Code_Gen_Model_B.Gamepad_POV_Down = (Code_Gen_Model_U.Gamepad_POV == 180.0);

  /* RelationalOperator: '<S119>/Compare' incorporates:
   *  Constant: '<S119>/Constant'
   *  Inport: '<Root>/Gamepad_POV'
   */
  Code_Gen_Model_B.Gamepad_POV_Left = (Code_Gen_Model_U.Gamepad_POV == 270.0);

  /* RelationalOperator: '<S118>/Compare' incorporates:
   *  Constant: '<S118>/Constant'
   *  Inport: '<Root>/Gamepad_POV'
   */
  Code_Gen_Model_B.Gamepad_POV_Right = (Code_Gen_Model_U.Gamepad_POV == 90.0);

  /* RelationalOperator: '<S5>/Compare' incorporates:
   *  Constant: '<S5>/Constant'
   *  Inport: '<Root>/Elevator_Limit_Switch_Bottom'
   */
  rtb_Compare = (Code_Gen_Model_U.Elevator_Limit_Switch_Bottom != 0.0);

  /* Chart: '<S10>/Debounce' incorporates:
   *  Constant: '<S10>/Constant1'
   *  Constant: '<S10>/Constant2'
   */
  if (Code_Gen_Model_DW.is_active_c3_Controls_Compone_a == 0) {
    Code_Gen_Model_DW.is_active_c3_Controls_Compone_a = 1U;
    Code_Gen_Model_DW.is_c3_Controls_Components_lib_g = Code_Gen_Model_IN_True;
    Code_Gen_Model_B.Out_m = true;
  } else {
    switch (Code_Gen_Model_DW.is_c3_Controls_Components_lib_g) {
     case Code_Gen_Model_IN_False:
      Code_Gen_Model_B.Out_m = false;
      if (rtb_Compare) {
        Code_Gen_Model_DW.is_c3_Controls_Components_lib_g =
          Code_Gen_Model_IN_Timer_True;
        Code_Gen_Model_DW.timer_d = 0.02;
      }
      break;

     case Code_Gen_Model_IN_Timer_False:
      if (Code_Gen_Model_DW.timer_d >= Elevator_Limit_Switch_Debounce_T2F) {
        Code_Gen_Model_DW.is_c3_Controls_Components_lib_g =
          Code_Gen_Model_IN_False;
        Code_Gen_Model_B.Out_m = false;
      } else if (rtb_Compare) {
        Code_Gen_Model_DW.is_c3_Controls_Components_lib_g =
          Code_Gen_Model_IN_True;
        Code_Gen_Model_B.Out_m = true;
      } else {
        Code_Gen_Model_DW.timer_d += 0.02;
      }
      break;

     case Code_Gen_Model_IN_Timer_True:
      if (Code_Gen_Model_DW.timer_d >= Elevator_Limit_Switch_Debounce_F2T) {
        Code_Gen_Model_DW.is_c3_Controls_Components_lib_g =
          Code_Gen_Model_IN_True;
        Code_Gen_Model_B.Out_m = true;
      } else if (!rtb_Compare) {
        Code_Gen_Model_DW.is_c3_Controls_Components_lib_g =
          Code_Gen_Model_IN_False;
        Code_Gen_Model_B.Out_m = false;
      } else {
        Code_Gen_Model_DW.timer_d += 0.02;
      }
      break;

     default:
      /* case IN_True: */
      Code_Gen_Model_B.Out_m = true;
      if (!rtb_Compare) {
        Code_Gen_Model_DW.is_c3_Controls_Components_lib_g =
          Code_Gen_Model_IN_Timer_False;
        Code_Gen_Model_DW.timer_d = 0.02;
      }
      break;
    }
  }

  /* End of Chart: '<S10>/Debounce' */

  /* RelationalOperator: '<S6>/Compare' incorporates:
   *  Constant: '<S6>/Constant'
   *  Inport: '<Root>/Elevator_Limit_Switch_Top'
   */
  rtb_Compare = (Code_Gen_Model_U.Elevator_Limit_Switch_Top != 0.0);

  /* Chart: '<S11>/Debounce' incorporates:
   *  Constant: '<S11>/Constant1'
   *  Constant: '<S11>/Constant2'
   */
  if (Code_Gen_Model_DW.is_active_c3_Controls_Component == 0) {
    Code_Gen_Model_DW.is_active_c3_Controls_Component = 1U;
    Code_Gen_Model_DW.is_c3_Controls_Components_lib = Code_Gen_Model_IN_False;
    Code_Gen_Model_B.Out = false;
  } else {
    switch (Code_Gen_Model_DW.is_c3_Controls_Components_lib) {
     case Code_Gen_Model_IN_False:
      Code_Gen_Model_B.Out = false;
      if (rtb_Compare) {
        Code_Gen_Model_DW.is_c3_Controls_Components_lib =
          Code_Gen_Model_IN_Timer_True;
        Code_Gen_Model_DW.timer_m = 0.02;
      }
      break;

     case Code_Gen_Model_IN_Timer_False:
      if (Code_Gen_Model_DW.timer_m >= Elevator_Limit_Switch_Debounce_T2F) {
        Code_Gen_Model_DW.is_c3_Controls_Components_lib =
          Code_Gen_Model_IN_False;
        Code_Gen_Model_B.Out = false;
      } else if (rtb_Compare) {
        Code_Gen_Model_DW.is_c3_Controls_Components_lib = Code_Gen_Model_IN_True;
        Code_Gen_Model_B.Out = true;
      } else {
        Code_Gen_Model_DW.timer_m += 0.02;
      }
      break;

     case Code_Gen_Model_IN_Timer_True:
      if (Code_Gen_Model_DW.timer_m >= Elevator_Limit_Switch_Debounce_F2T) {
        Code_Gen_Model_DW.is_c3_Controls_Components_lib = Code_Gen_Model_IN_True;
        Code_Gen_Model_B.Out = true;
      } else if (!rtb_Compare) {
        Code_Gen_Model_DW.is_c3_Controls_Components_lib =
          Code_Gen_Model_IN_False;
        Code_Gen_Model_B.Out = false;
      } else {
        Code_Gen_Model_DW.timer_m += 0.02;
      }
      break;

     default:
      /* case IN_True: */
      Code_Gen_Model_B.Out = true;
      if (!rtb_Compare) {
        Code_Gen_Model_DW.is_c3_Controls_Components_lib =
          Code_Gen_Model_IN_Timer_False;
        Code_Gen_Model_DW.timer_m = 0.02;
      }
      break;
    }
  }

  /* End of Chart: '<S11>/Debounce' */

  /* Gain: '<S14>/Gain1' incorporates:
   *  Inport: '<Root>/Elevator_Motor_Rev'
   */
  Code_Gen_Model_B.Elevator_Height_Measured_Raw = Elevator_MotorRev_to_Inch *
    Code_Gen_Model_U.Elevator_Motor_Rev;

  /* UnitDelay: '<S2>/Unit Delay' */
  rtb_Compare = Code_Gen_Model_DW.UnitDelay_DSTATE_mp;

  /* Switch: '<S14>/Switch1' incorporates:
   *  RelationalOperator: '<S106>/FixPt Relational Operator'
   *  RelationalOperator: '<S107>/FixPt Relational Operator'
   *  RelationalOperator: '<S108>/FixPt Relational Operator'
   *  Switch: '<S14>/Switch2'
   *  Switch: '<S14>/Switch3'
   *  UnitDelay: '<S106>/Delay Input1'
   *  UnitDelay: '<S107>/Delay Input1'
   *  UnitDelay: '<S108>/Delay Input1'
   *  UnitDelay: '<S2>/Unit Delay'
   *
   * Block description for '<S106>/Delay Input1':
   *
   *  Store in Global RAM
   *
   * Block description for '<S107>/Delay Input1':
   *
   *  Store in Global RAM
   *
   * Block description for '<S108>/Delay Input1':
   *
   *  Store in Global RAM
   */
  if (((int32_T)Code_Gen_Model_B.Out_m) < ((int32_T)
       Code_Gen_Model_DW.DelayInput1_DSTATE_bd)) {
    /* Switch: '<S14>/Switch1' */
    Code_Gen_Model_B.Elevator_Height_Offset =
      Code_Gen_Model_B.Elevator_Height_Measured_Raw;
  } else if (((int32_T)Code_Gen_Model_B.Out) < ((int32_T)
              Code_Gen_Model_DW.DelayInput1_DSTATE_o1)) {
    /* Switch: '<S14>/Switch1' incorporates:
     *  Constant: '<S14>/Constant1'
     *  Sum: '<S14>/Subtract1'
     *  Switch: '<S14>/Switch2'
     */
    Code_Gen_Model_B.Elevator_Height_Offset =
      Code_Gen_Model_B.Elevator_Height_Measured_Raw - Elevator_Height_Top_Reset;
  } else if (((int32_T)Code_Gen_Model_DW.UnitDelay_DSTATE_mp) > ((int32_T)
              Code_Gen_Model_DW.DelayInput1_DSTATE_po)) {
    /* Switch: '<S14>/Switch1' incorporates:
     *  Constant: '<S14>/Constant2'
     *  Sum: '<S14>/Subtract2'
     *  Switch: '<S14>/Switch2'
     *  Switch: '<S14>/Switch3'
     */
    Code_Gen_Model_B.Elevator_Height_Offset =
      Code_Gen_Model_B.Elevator_Height_Measured_Raw -
      Elevator_Height_PickupLower_Reset;
  }

  /* End of Switch: '<S14>/Switch1' */

  /* Switch: '<S14>/Switch' incorporates:
   *  Logic: '<S14>/Logical Operator'
   */
  if ((Code_Gen_Model_B.Out_m) || (Code_Gen_Model_B.Out)) {
    /* Switch: '<S14>/Switch4' */
    if (Code_Gen_Model_B.Out_m) {
      /* Switch: '<S14>/Switch' incorporates:
       *  Constant: '<S14>/Constant'
       */
      Code_Gen_Model_B.Elevator_Height_Measured = 0.0;
    } else {
      /* Switch: '<S14>/Switch' incorporates:
       *  Constant: '<S14>/Constant3'
       */
      Code_Gen_Model_B.Elevator_Height_Measured = Elevator_Height_Top_Reset;
    }

    /* End of Switch: '<S14>/Switch4' */
  } else {
    /* Switch: '<S14>/Switch' incorporates:
     *  Sum: '<S14>/Subtract'
     */
    Code_Gen_Model_B.Elevator_Height_Measured =
      Code_Gen_Model_B.Elevator_Height_Measured_Raw -
      Code_Gen_Model_B.Elevator_Height_Offset;
  }

  /* End of Switch: '<S14>/Switch' */

  /* RelationalOperator: '<S7>/Compare' incorporates:
   *  Constant: '<S7>/Constant'
   *  Inport: '<Root>/Coral_Limit_Switch'
   */
  Code_Gen_Model_B.Compare = (Code_Gen_Model_U.Coral_Limit_Switch != 0.0);

  /* RelationalOperator: '<S8>/Compare' incorporates:
   *  Constant: '<S8>/Constant'
   *  Inport: '<Root>/Algae_Limit_Switch'
   */
  Compare_f = (Code_Gen_Model_U.Algae_Limit_Switch != 0.0);

  /* SwitchCase: '<S2>/Switch Case' incorporates:
   *  Outport: '<Root>/CANdle_LED_ID'
   */
  rtPrevAction = Code_Gen_Model_DW.SwitchCase_ActiveSubsystem;
  rtb_Minus_k_idx_0 = trunc(Code_Gen_Model_Y.CANdle_LED_ID);
  if ((rtIsNaN(rtb_Minus_k_idx_0)) || (rtIsInf(rtb_Minus_k_idx_0))) {
    rtb_Minus_k_idx_0 = 0.0;
  } else {
    rtb_Minus_k_idx_0 = fmod(rtb_Minus_k_idx_0, 4.294967296E+9);
  }

  switch ((rtb_Minus_k_idx_0 < 0.0) ? (-((int32_T)((uint32_T)(-rtb_Minus_k_idx_0))))
          : ((int32_T)((uint32_T)rtb_Minus_k_idx_0))) {
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
    /* Outputs for IfAction SubSystem: '<S2>/Disabled' incorporates:
     *  ActionPort: '<S12>/Action Port'
     */
    /* SignalConversion generated from: '<S12>/Spline_Ref_Poses' incorporates:
     *  Merge: '<S21>/Merge8'
     */
    memset(&rtb_Spline_Ref_Poses[0], 0, 40U * (sizeof(real_T)));

    /* Merge: '<S21>/Merge1' incorporates:
     *  Constant: '<S12>/Constant1'
     *  SignalConversion generated from: '<S12>/Steering_Abs_Cmd'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd = 0.0;

    /* Merge: '<S21>/Merge2' incorporates:
     *  Constant: '<S12>/Constant2'
     *  SignalConversion generated from: '<S12>/Steering_Rel_Cmd'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd = 0.0;

    /* Merge: '<S21>/Merge3' incorporates:
     *  Constant: '<S12>/Constant3'
     *  SignalConversion generated from: '<S12>/Translation_Angle'
     */
    Code_Gen_Model_B.Translation_Angle = 0.0;

    /* Merge: '<S21>/Merge4' incorporates:
     *  Constant: '<S12>/Constant4'
     *  SignalConversion generated from: '<S12>/Translation_Speed'
     */
    Code_Gen_Model_B.Translation_Speed = 0.0;

    /* SignalConversion generated from: '<S12>/Is_Absolute_Translation' incorporates:
     *  Constant: '<S12>/Constant5'
     */
    rtb_Is_Absolute_Translation_g = false;

    /* SignalConversion generated from: '<S12>/Is_Absolute_Steering' incorporates:
     *  Constant: '<S12>/Constant6'
     */
    rtb_Is_Absolute_Steering = false;

    /* Merge: '<S21>/Merge7' incorporates:
     *  Constant: '<S12>/Constant7'
     *  SignalConversion generated from: '<S12>/Spline_Enable'
     */
    Code_Gen_Model_B.Spline_Enable = false;

    /* Merge: '<S21>/Merge9' incorporates:
     *  Constant: '<S12>/Constant9'
     *  SignalConversion generated from: '<S12>/Spline_Num_Poses'
     */
    Code_Gen_Model_B.Spline_Num_Poses = 10.0;

    /* Merge: '<S21>/Merge10' incorporates:
     *  Constant: '<S12>/Constant10'
     *  SignalConversion generated from: '<S12>/Test_Mode'
     */
    Code_Gen_Model_B.Test_Mode = false;

    /* Merge: '<S21>/Merge14' incorporates:
     *  Constant: '<S12>/Constant18'
     *  SignalConversion generated from: '<S12>/Enable_Wheels'
     */
    Code_Gen_Model_B.Enable_Wheels = false;

    /* Merge: '<S21>/Merge15' incorporates:
     *  Constant: '<S12>/Constant13'
     *  SignalConversion generated from: '<S12>/Reset_Wheel_Offsets'
     */
    Code_Gen_Model_B.Reset_Wheel_Offsets = false;

    /* Merge: '<S21>/Merge16' incorporates:
     *  Constant: '<S12>/Constant14'
     *  SignalConversion generated from: '<S12>/Disable_Wheels'
     */
    Code_Gen_Model_B.Disable_Wheels = false;

    /* Merge: '<S21>/Merge19' incorporates:
     *  Constant: '<S12>/Constant12'
     *  SignalConversion generated from: '<S12>/Swerve_Motors_Disabled'
     */
    Code_Gen_Model_B.Swerve_Motors_Disabled = true;

    /* Merge: '<S21>/Merge12' incorporates:
     *  Constant: '<S12>/Constant15'
     *  SignalConversion generated from: '<S12>/Reefscape_Motors_Enable'
     */
    Code_Gen_Model_B.Reefscape_Motors_Enable_merge = false;

    /* Merge: '<S21>/Merge11' incorporates:
     *  Constant: '<S12>/Constant11'
     *  SignalConversion generated from: '<S12>/Elevator_Height_Desired'
     */
    Code_Gen_Model_B.Elevator_Height_Desired_merge = 0.0;

    /* Merge: '<S21>/Merge13' incorporates:
     *  Constant: '<S12>/Constant16'
     *  SignalConversion generated from: '<S12>/Coral_Arm_Angle_Desired'
     */
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_merge = -90.0;

    /* Merge: '<S21>/Merge17' incorporates:
     *  Constant: '<S12>/Constant17'
     *  SignalConversion generated from: '<S12>/Coral_Wheel_DutyCycle'
     */
    Code_Gen_Model_B.Coral_Wheel_DutyCycle_merge = 0.0;

    /* Merge: '<S21>/Merge18' incorporates:
     *  Constant: '<S12>/Constant19'
     *  SignalConversion generated from: '<S12>/Algae_Wheel_Outside_DutyCycle'
     */
    Code_Gen_Model_B.Algae_Wheel_Outside_DutyCycle_m = 0.0;

    /* Merge: '<S21>/Merge20' incorporates:
     *  Constant: '<S12>/Constant20'
     *  SignalConversion generated from: '<S12>/Algae_Wheel_Inside_DutyCycle'
     */
    Code_Gen_Model_B.Algae_Wheel_Inside_DutyCycle_me = 0.0;

    /* Merge: '<S21>/Merge21' incorporates:
     *  Constant: '<S12>/Constant21'
     *  SignalConversion generated from: '<S12>/Elevator_LowerPickup_Reset'
     */
    Code_Gen_Model_B.Elevator_LowerPickup_Reset_merg = false;

    /* SignalConversion generated from: '<S12>/Coral_Pickup_Lower_Wait_State' incorporates:
     *  Constant: '<S12>/Constant22'
     */
    rtb_Compare_ai = false;

    /* Merge: '<S21>/Merge23' incorporates:
     *  Constant: '<S12>/Constant23'
     *  SignalConversion generated from: '<S12>/Swerve_Drive_Integral_Enable'
     */
    Code_Gen_Model_B.Swerve_Drive_Integral_Enable = false;

    /* SignalConversion generated from: '<S12>/AT_On_Target' incorporates:
     *  Constant: '<S12>/Constant24'
     */
    Compare_f = false;

    /* Merge: '<S21>/Merge24' incorporates:
     *  Constant: '<S12>/Constant25'
     *  SignalConversion generated from: '<S12>/Desired_Pipeline'
     */
    Code_Gen_Model_B.Desired_Pipeline = 0U;

    /* End of Outputs for SubSystem: '<S2>/Disabled' */
    break;

   case 1:
    if (rtAction != rtPrevAction) {
      /* InitializeConditions for IfAction SubSystem: '<S2>/Autonomous' incorporates:
       *  ActionPort: '<S3>/Action Port'
       */
      /* InitializeConditions for SwitchCase: '<S2>/Switch Case' incorporates:
       *  UnitDelay: '<S30>/Unit Delay'
       *  UnitDelay: '<S30>/Unit Delay1'
       *  UnitDelay: '<S30>/Unit Delay2'
       *  UnitDelay: '<S31>/Unit Delay'
       *  UnitDelay: '<S31>/Unit Delay1'
       *  UnitDelay: '<S56>/Delay Input1'
       *  UnitDelay: '<S58>/Delay Input1'
       *  UnitDelay: '<S59>/Delay Input1'
       *  UnitDelay: '<S62>/Delay Input1'
       *  UnitDelay: '<S63>/Delay Input1'
       *  UnitDelay: '<S64>/Delay Input1'
       *  UnitDelay: '<S67>/Delay Input1'
       *  UnitDelay: '<S69>/Delay Input1'
       *
       * Block description for '<S56>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S58>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S59>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S62>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S63>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S64>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S67>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S69>/Delay Input1':
       *
       *  Store in Global RAM
       */
      Code_Gen_Model_DW.UnitDelay1_DSTATE_p = false;
      Code_Gen_Model_DW.UnitDelay2_DSTATE = 0.0;
      Code_Gen_Model_DW.DelayInput1_DSTATE_l = false;
      Code_Gen_Model_DW.DelayInput1_DSTATE_au = false;
      Code_Gen_Model_DW.DelayInput1_DSTATE_ne = false;
      Code_Gen_Model_DW.DelayInput1_DSTATE_ff = false;
      Code_Gen_Model_DW.DelayInput1_DSTATE_ev = false;
      Code_Gen_Model_DW.DelayInput1_DSTATE_b2 = false;
      Code_Gen_Model_DW.DelayInput1_DSTATE_b3 = false;
      Code_Gen_Model_DW.DelayInput1_DSTATE_ae = false;
      Code_Gen_Model_DW.UnitDelay_DSTATE_i3 = false;
      Code_Gen_Model_DW.UnitDelay1_DSTATE_ek = 0.0;
      Code_Gen_Model_DW.UnitDelay_DSTATE_bc = 0.0;

      /* End of InitializeConditions for SubSystem: '<S2>/Autonomous' */

      /* SystemReset for IfAction SubSystem: '<S2>/Autonomous' incorporates:
       *  ActionPort: '<S3>/Action Port'
       */
      /* SystemReset for SwitchCase: '<S2>/Switch Case' incorporates:
       *  Chart: '<S30>/Reefscape_Auto_Steps'
       *  Chart: '<S33>/Reefscape_Chart'
       */
      Code_Gen_Model_B.Align_Left_p = false;
      Code_Gen_Model_B.Align_Center_j = false;
      Code_Gen_Model_B.Gamepad_B4_Y_out = false;
      Code_Gen_Model_B.Gamepad_Start_out = false;
      Code_Gen_Model_B.Gamepad_Back_out = false;
      Code_Gen_Model_B.Gamepad_RT_out = false;
      Code_Gen_Model_B.Gamepad_POV_Down_a = false;
      Code_Gen_Model_B.Gamepad_POV_Left_p = false;
      Code_Gen_Model_B.Path_Enable = false;
      Code_Gen_Model_B.Path_ID = 0U;
      Code_Gen_Model_DW.timer_k = 0.0;
      Code_Gen_Model_B.Translation_Speed_l = 0.0;
      Code_Gen_Model_B.Translation_Angle_g = 0.0;
      Code_Gen_Model_B.Gamepad_B1_A_out = false;
      Code_Gen_Model_B.Gamepad_B3_X_out = false;
      Code_Gen_Model_DW.is_active_c6_Code_Gen_Model = 0U;
      Code_Gen_Model_DW.is_c6_Code_Gen_Model = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Center = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Path_to_Reef = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Left_and_Right = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Path_to_Reef_1 = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Drive = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Path_to_Reef_2 = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Path_to_Reef_2_v2 = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_B.Elevator_Height_Desired_n = 0.0;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_h = 0.0;
      Code_Gen_Model_B.Coral_Wheel_DC_f = 0.0;
      Code_Gen_Model_DW.timer_l = 0.0;
      Code_Gen_Model_B.Elevator_LowerPickup_Reset_i = false;
      Code_Gen_Model_DW.Set_L1_m = false;
      Code_Gen_Model_DW.Set_L2_n = false;
      Code_Gen_Model_DW.Set_L3_f = false;
      Code_Gen_Model_DW.Set_L4_j = false;
      Code_Gen_Model_B.Coral_Pickup_Lower_Wait_State_o = false;
      Code_Gen_Model_B.Set_Coral_Level_l = 0U;
      Code_Gen_Model_B.Set_Algae_Level_m = 0U;
      Code_Gen_Model_DW.timer_robot_target_d = 0.0;
      Code_Gen_Model_B.Coral_Score_j = false;
      Code_Gen_Model_DW.is_active_c5_Code_Gen_Model = 0U;
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_i =
        Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Algae_Pickup_High_l = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Algae_Pickup_Low_k = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Algae_Score_f = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Coral_h = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Coral_Eject_a = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Level_2_h = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Level_3_l = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Level_4_Auto_b = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Level_4_Teleop_m = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Coral_Score_Position_e =
        Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Actions_f = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Coral_Pickup_Prepare_k =
        Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Set_Level_m3 = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Elevator_Height_Bottom_h =
        Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Elevator_Height_Bottom_pre_p =
        Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_End_Game_Climb_k = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Set_Level_o = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Algae_Wheels_o = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_AT_On_Target_Timer_k =
        Code_Gen_Mod_IN_NO_ACTIVE_CHILD;

      /* End of SystemReset for SubSystem: '<S2>/Autonomous' */
    }

    /* Outputs for IfAction SubSystem: '<S2>/Autonomous' incorporates:
     *  ActionPort: '<S3>/Action Port'
     */
    /* MultiPortSwitch: '<S32>/Multiport Switch' incorporates:
     *  Constant: '<S30>/Constant1'
     */
    switch ((int32_T)Auto_Starting_Position) {
     case 1:
      /* Switch: '<S32>/Switch' incorporates:
       *  Inport: '<Root>/IsBlueAlliance'
       *  MultiPortSwitch: '<S32>/Multiport Switch1'
       *  Switch: '<S32>/Switch3'
       */
      if (Code_Gen_Model_U.IsBlueAlliance != 0.0) {
        /* MultiPortSwitch: '<S32>/Multiport Switch' incorporates:
         *  Constant: '<S32>/Constant3'
         */
        MultiportSwitch = 1U;

        /* MultiPortSwitch: '<S32>/Multiport Switch1' incorporates:
         *  Constant: '<S32>/Constant17'
         */
        MultiportSwitch1 = 2U;
      } else {
        /* MultiPortSwitch: '<S32>/Multiport Switch' incorporates:
         *  Constant: '<S32>/Constant4'
         */
        MultiportSwitch = 9U;

        /* MultiPortSwitch: '<S32>/Multiport Switch1' incorporates:
         *  Constant: '<S32>/Constant18'
         */
        MultiportSwitch1 = 10U;
      }

      /* End of Switch: '<S32>/Switch' */
      break;

     case 2:
      /* Switch: '<S32>/Switch1' incorporates:
       *  Inport: '<Root>/IsBlueAlliance'
       *  MultiPortSwitch: '<S32>/Multiport Switch1'
       *  Switch: '<S32>/Switch4'
       */
      if (Code_Gen_Model_U.IsBlueAlliance != 0.0) {
        /* MultiPortSwitch: '<S32>/Multiport Switch' incorporates:
         *  Constant: '<S32>/Constant6'
         */
        MultiportSwitch = 7U;

        /* MultiPortSwitch: '<S32>/Multiport Switch1' incorporates:
         *  Constant: '<S32>/Constant19'
         */
        MultiportSwitch1 = 8U;
      } else {
        /* MultiPortSwitch: '<S32>/Multiport Switch' incorporates:
         *  Constant: '<S32>/Constant11'
         */
        MultiportSwitch = 15U;

        /* MultiPortSwitch: '<S32>/Multiport Switch1' incorporates:
         *  Constant: '<S32>/Constant14'
         */
        MultiportSwitch1 = 16U;
      }

      /* End of Switch: '<S32>/Switch1' */
      break;

     default:
      /* Switch: '<S32>/Switch2' incorporates:
       *  Inport: '<Root>/IsBlueAlliance'
       *  MultiPortSwitch: '<S32>/Multiport Switch1'
       *  Switch: '<S32>/Switch5'
       */
      if (Code_Gen_Model_U.IsBlueAlliance != 0.0) {
        /* MultiPortSwitch: '<S32>/Multiport Switch' incorporates:
         *  Constant: '<S32>/Constant13'
         */
        MultiportSwitch = 4U;

        /* MultiPortSwitch: '<S32>/Multiport Switch1' incorporates:
         *  Constant: '<S32>/Constant16'
         */
        MultiportSwitch1 = 5U;
      } else {
        /* MultiPortSwitch: '<S32>/Multiport Switch' incorporates:
         *  Constant: '<S32>/Constant12'
         */
        MultiportSwitch = 12U;

        /* MultiPortSwitch: '<S32>/Multiport Switch1' incorporates:
         *  Constant: '<S32>/Constant15'
         */
        MultiportSwitch1 = 13U;
      }

      /* End of Switch: '<S32>/Switch2' */
      break;
    }

    /* End of MultiPortSwitch: '<S32>/Multiport Switch' */

    /* Switch: '<S32>/Switch6' incorporates:
     *  Constant: '<S30>/Constant1'
     *  Constant: '<S54>/Constant'
     *  Inport: '<Root>/IsBlueAlliance'
     *  RelationalOperator: '<S54>/Compare'
     *  Switch: '<S32>/Switch13'
     *  Switch: '<S32>/Switch14'
     *  Switch: '<S32>/Switch8'
     */
    if (Auto_Starting_Position <= 2.0) {
      /* Switch: '<S32>/Switch7' incorporates:
       *  Inport: '<Root>/IsBlueAlliance'
       *  Switch: '<S32>/Switch12'
       */
      if (Code_Gen_Model_U.IsBlueAlliance != 0.0) {
        /* Switch: '<S32>/Switch6' incorporates:
         *  Constant: '<S32>/Constant20'
         */
        Switch6 = 3U;

        /* Switch: '<S32>/Switch14' incorporates:
         *  Constant: '<S32>/Constant1'
         */
        Switch14 = 17U;
      } else {
        /* Switch: '<S32>/Switch6' incorporates:
         *  Constant: '<S32>/Constant21'
         */
        Switch6 = 11U;

        /* Switch: '<S32>/Switch14' incorporates:
         *  Constant: '<S32>/Constant2'
         */
        Switch14 = 19U;
      }

      /* End of Switch: '<S32>/Switch7' */
    } else if (Code_Gen_Model_U.IsBlueAlliance != 0.0) {
      /* Switch: '<S32>/Switch8' incorporates:
       *  Constant: '<S32>/Constant22'
       *  Switch: '<S32>/Switch6'
       */
      Switch6 = 6U;

      /* Switch: '<S32>/Switch13' incorporates:
       *  Constant: '<S32>/Constant5'
       *  Switch: '<S32>/Switch14'
       */
      Switch14 = 18U;
    } else {
      /* Switch: '<S32>/Switch6' incorporates:
       *  Constant: '<S32>/Constant23'
       *  Switch: '<S32>/Switch8'
       */
      Switch6 = 14U;

      /* Switch: '<S32>/Switch14' incorporates:
       *  Constant: '<S32>/Constant7'
       *  Switch: '<S32>/Switch13'
       */
      Switch14 = 20U;
    }

    /* End of Switch: '<S32>/Switch6' */

    /* UnitDelay: '<S30>/Unit Delay2' */
    Code_Gen_Model_B.UnitDelay2 = Code_Gen_Model_DW.UnitDelay2_DSTATE;

    /* Chart: '<S30>/Reefscape_Auto_Steps' incorporates:
     *  Constant: '<S30>/Constant1'
     *  UnitDelay: '<S18>/Unit Delay'
     *  UnitDelay: '<S30>/Unit Delay1'
     */
    if (Code_Gen_Model_DW.is_active_c6_Code_Gen_Model == 0) {
      Code_Gen_Model_DW.is_active_c6_Code_Gen_Model = 1U;
      if ((Auto_Starting_Position == 1.0) || (Auto_Starting_Position == 3.0)) {
        Code_Gen_Model_DW.is_c6_Code_Gen_Model = Code_Gen_Mode_IN_Left_and_Right;
        Code_Gen_Model_DW.is_Left_and_Right = Code_Gen_Mode_IN_Path_to_Reef_1;
        Code_Gen_Model_B.Auto_Step_ID = 1U;
        Code_Gen_Model_B.Translation_Speed_l = 0.0;
        Code_Gen_Model_B.Translation_Angle_g = 0.0;
        Code_Gen_Model_DW.is_Path_to_Reef_1 = Code_Gen_Model_IN_Start_b;
        Code_Gen_Model_B.Path_Enable = false;
        Code_Gen_Model_DW.timer_k = 0.0;
      } else {
        Code_Gen_Model_DW.is_c6_Code_Gen_Model = Code_Gen_Model_IN_Center;
        Code_Gen_Model_DW.is_Center = Code_Gen_Model_IN_Path_to_Reef;
        Code_Gen_Model_B.Auto_Step_ID = 101U;
        Code_Gen_Model_B.Translation_Speed_l = 0.0;
        Code_Gen_Model_B.Translation_Angle_g = 0.0;
        Code_Gen_Model_DW.is_Path_to_Reef = Code_Gen_Model_IN_Start_b;
        Code_Gen_Model_B.Path_Enable = false;
        Code_Gen_Model_DW.timer_k = 0.0;
      }
    } else if (Code_Gen_Model_DW.is_c6_Code_Gen_Model ==
               Code_Gen_Model_IN_Center) {
      Code_Gen_Model_Center(&Compare_f, &Code_Gen_Model_DW.UnitDelay_DSTATE_ll,
                            &MultiportSwitch, &MultiportSwitch1,
                            &Code_Gen_Model_DW.UnitDelay1_DSTATE_p);
    } else {
      /* case IN_Left_and_Right: */
      Code_Gen_Model_Left_and_Right(&Code_Gen_Model_DW.UnitDelay_DSTATE_ll,
        &MultiportSwitch, &Switch6, &MultiportSwitch1, &Switch14,
        &Code_Gen_Model_DW.UnitDelay1_DSTATE_p);
    }

    /* End of Chart: '<S30>/Reefscape_Auto_Steps' */

    /* Selector: '<S30>/Selector' incorporates:
     *  Constant: '<S30>/Constant'
     *  Merge: '<S21>/Merge8'
     */
    for (i = 0; i < 4; i++) {
      for (rtb_Num_Segments = 0; rtb_Num_Segments < 10; rtb_Num_Segments++) {
        s239_iter = (10 * i) + rtb_Num_Segments;
        rtb_Spline_Ref_Poses[s239_iter] =
          Code_Gen_Model_ConstP.Constant_Value_k[((Code_Gen_Model_B.Path_ID - 1)
          * 40) + s239_iter];
      }
    }

    /* End of Selector: '<S30>/Selector' */

    /* RelationalOperator: '<S56>/FixPt Relational Operator' incorporates:
     *  UnitDelay: '<S56>/Delay Input1'
     *
     * Block description for '<S56>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_B.FixPtRelationalOperator_nw = (((int32_T)
      Code_Gen_Model_B.Gamepad_B1_A_out) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_l));

    /* RelationalOperator: '<S57>/FixPt Relational Operator' */
    Code_Gen_Model_B.FixPtRelationalOperator_dd = false;

    /* RelationalOperator: '<S62>/FixPt Relational Operator' incorporates:
     *  UnitDelay: '<S62>/Delay Input1'
     *
     * Block description for '<S62>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_B.FixPtRelationalOperator_o = (((int32_T)
      Code_Gen_Model_B.Gamepad_B3_X_out) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_au));

    /* RelationalOperator: '<S63>/FixPt Relational Operator' incorporates:
     *  UnitDelay: '<S63>/Delay Input1'
     *
     * Block description for '<S63>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_B.FixPtRelationalOperator_a = (((int32_T)
      Code_Gen_Model_B.Gamepad_B4_Y_out) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_ne));

    /* RelationalOperator: '<S64>/FixPt Relational Operator' incorporates:
     *  UnitDelay: '<S64>/Delay Input1'
     *
     * Block description for '<S64>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Robot_Reached_Destination = (((int32_T)Code_Gen_Model_B.Gamepad_Start_out) >
      ((int32_T)Code_Gen_Model_DW.DelayInput1_DSTATE_ff));

    /* RelationalOperator: '<S58>/FixPt Relational Operator' incorporates:
     *  UnitDelay: '<S58>/Delay Input1'
     *
     * Block description for '<S58>/Delay Input1':
     *
     *  Store in Global RAM
     */
    FixPtRelationalOperator_p = (((int32_T)Code_Gen_Model_B.Gamepad_Back_out) >
      ((int32_T)Code_Gen_Model_DW.DelayInput1_DSTATE_ev));

    /* RelationalOperator: '<S65>/FixPt Relational Operator' */
    Code_Gen_Model_B.FixPtRelationalOperator_dp = false;

    /* Logic: '<S33>/Logical Operator' incorporates:
     *  RelationalOperator: '<S69>/FixPt Relational Operator'
     *  UnitDelay: '<S69>/Delay Input1'
     *
     * Block description for '<S69>/Delay Input1':
     *
     *  Store in Global RAM
     */
    rtb_Is_Absolute_Steering = (((int32_T)Code_Gen_Model_B.Gamepad_RT_out) >
      ((int32_T)Code_Gen_Model_DW.DelayInput1_DSTATE_b2));

    /* RelationalOperator: '<S66>/FixPt Relational Operator' */
    rtb_Is_Absolute_Translation_g = false;

    /* RelationalOperator: '<S67>/FixPt Relational Operator' incorporates:
     *  UnitDelay: '<S67>/Delay Input1'
     *
     * Block description for '<S67>/Delay Input1':
     *
     *  Store in Global RAM
     */
    rtb_Compare_ai = (((int32_T)Code_Gen_Model_B.Gamepad_POV_Down_a) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_b3));

    /* RelationalOperator: '<S59>/FixPt Relational Operator' incorporates:
     *  UnitDelay: '<S59>/Delay Input1'
     *
     * Block description for '<S59>/Delay Input1':
     *
     *  Store in Global RAM
     */
    FixPtRelationalOperator_e = (((int32_T)Code_Gen_Model_B.Gamepad_POV_Left_p) >
      ((int32_T)Code_Gen_Model_DW.DelayInput1_DSTATE_ae));

    /* RelationalOperator: '<S60>/FixPt Relational Operator' */
    Code_Gen_Model_B.FixPtRelationalOperator_lp = false;

    /* UnitDelay: '<S30>/Unit Delay' */
    Code_Gen_Model_B.UnitDelay_b = Code_Gen_Model_DW.UnitDelay_DSTATE_i3;

    /* Chart: '<S33>/Reefscape_Chart' */
    if (Code_Gen_Model_DW.is_active_c5_Code_Gen_Model == 0) {
      Code_Gen_Model_DW.is_active_c5_Code_Gen_Model = 1U;
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_i =
        Code_Gen_Model_IN_Start;
      Code_Gen_Model_B.State_ID_Auto = 0.0;
      Code_Gen_Model_B.Elevator_Height_Desired_n = Elevator_Height_Bottom;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_h = Coral_Arm_Angle_Up;
      Code_Gen_Model_B.Coral_Wheel_DC_f = 0.0;
      Code_Gen_Model_DW.is_Set_Level_o = Code_Gen_Model_IN_None;
      Code_Gen_Model_DW.Set_L1_m = false;
      Code_Gen_Model_DW.Set_L2_n = false;
      Code_Gen_Model_DW.Set_L3_f = false;
      Code_Gen_Model_DW.Set_L4_j = false;
      Code_Gen_Model_DW.is_Algae_Wheels_o = Code_Gen_Model_IN_Off;

      /* Merge: '<S21>/Merge18' */
      Code_Gen_Model_B.Algae_Wheel_Outside_DutyCycle_m = 0.0;

      /* Merge: '<S21>/Merge20' */
      Code_Gen_Model_B.Algae_Wheel_Inside_DutyCycle_me = 0.0;
      Code_Gen_Model_DW.is_AT_On_Target_Timer_k = Code_Gen_Model_IN_Off_Target;
      Code_Gen_Model_DW.timer_robot_target_d = 0.0;
    } else {
      switch (Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_i) {
       case Code_Gen_M_IN_Algae_Pickup_High:
        Code_Gen_Mode_Algae_Pickup_High(&Compare_f, &Robot_Reached_Destination,
          &FixPtRelationalOperator_p, &rtb_Is_Absolute_Translation_g,
          &rtb_Compare_ai, &FixPtRelationalOperator_e);
        break;

       case Code_Gen_Mo_IN_Algae_Pickup_Low:
        Code_Gen_Model_Algae_Pickup_Low(&Compare_f, &Robot_Reached_Destination,
          &FixPtRelationalOperator_p, &rtb_Is_Absolute_Translation_g,
          &rtb_Compare_ai, &FixPtRelationalOperator_e);
        break;

       case Code_Gen_Model_IN_Algae_Score:
        Code_Gen_Model_Algae_Score(&Compare_f, &Robot_Reached_Destination,
          &FixPtRelationalOperator_p, &rtb_Is_Absolute_Translation_g,
          &rtb_Compare_ai, &FixPtRelationalOperator_e);
        break;

       case Code_Gen_Model_IN_Coral:
        Code_Gen_Model_Coral(&Compare_f, &Robot_Reached_Destination,
                             &FixPtRelationalOperator_p,
                             &rtb_Is_Absolute_Translation_g, &rtb_Compare_ai,
                             &FixPtRelationalOperator_e);
        break;

       case Code_Gen_Model_IN_Coral_Pickup:
        Code_Gen_Model_Coral_Pickup(&Compare_f, &Robot_Reached_Destination,
          &FixPtRelationalOperator_p, &rtb_Is_Absolute_Translation_g,
          &rtb_Compare_ai, &FixPtRelationalOperator_e);
        break;

       case Code__IN_Elevator_Height_Bottom:
        Code_Gen_Elevator_Height_Bottom(&Compare_f, &Robot_Reached_Destination,
          &FixPtRelationalOperator_p, &rtb_Is_Absolute_Translation_g,
          &rtb_Compare_ai, &FixPtRelationalOperator_e);
        break;

       case C_IN_Elevator_Height_Bottom_pre:
        Code_Elevator_Height_Bottom_pre(&Compare_f, &Robot_Reached_Destination,
          &FixPtRelationalOperator_p, &rtb_Is_Absolute_Translation_g,
          &rtb_Compare_ai, &FixPtRelationalOperator_e);
        break;

       case Code_Gen_Mode_IN_End_Game_Climb:
        Code_Gen_Model_End_Game_Climb(&Compare_f, &Robot_Reached_Destination,
          &FixPtRelationalOperator_p, &rtb_Is_Absolute_Translation_g,
          &rtb_Compare_ai, &FixPtRelationalOperator_e);
        break;

       case Code_Gen_Model_IN_Start:
        Code_Gen_Model_B.State_ID_Auto = 0.0;
        if (((((Code_Gen_Model_B.Compare) && (Code_Gen_Model_DW.Set_L1_m)) ||
              (Code_Gen_Model_DW.Set_L2_n)) || (Code_Gen_Model_DW.Set_L3_f)) ||
            (Code_Gen_Model_DW.Set_L4_j)) {
          Code_Gen_Model_DW.is_Set_Level_o = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
          Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_i =
            Code_Gen_Model_IN_Coral;
          Code_Gen_Model_DW.is_Coral_h = Code_Ge_IN_Coral_Score_Position;
          enter_internal_Coral_Score_Posi();
        } else if (!Code_Gen_Model_B.Compare) {
          if (Compare_f) {
            Code_Gen_Model_DW.is_Set_Level_o = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
            Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_i =
              Code_Gen_Model_IN_Algae_Score;
            Code_Gen_Model_B.State_ID_Auto = 4.1;
            Code_Gen_Model_B.Elevator_Height_Desired_n =
              Elevator_Height_Algae_Score;
            Code_Gen_Model_B.Coral_Arm_Angle_Desired_h = Coral_Arm_Angle_Up;
            Code_Gen_Model_DW.is_Algae_Score_f = Code_Gen_Mod_IN_Coral_Motor_Off;
            Code_Gen_Model_B.Coral_Wheel_DC_f = 0.0;
          } else {
            Code_Gen_Model_DW.is_Set_Level_o = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
            Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_i =
              Code__IN_Elevator_Height_Bottom;
            Code_Gen_Model_B.State_ID_Auto = 0.2;
            Code_Gen_Model_B.Elevator_Height_Desired_n = Elevator_Height_Bottom;
            Code_Gen_Model_B.Coral_Arm_Angle_Desired_h = Coral_Arm_Angle_Up;
            Code_Gen_Model_DW.is_Elevator_Height_Bottom_h =
              Code_Gen_Mod_IN_Coral_Motor_Off;
            Code_Gen_Model_B.Coral_Wheel_DC_f = 0.0;
          }
        } else {
          Code_Gen_Model_Set_Level_d();
        }
        break;

       default:
        /* case IN_Start_Angle: */
        Code_Gen_Model_B.State_ID_Auto = 2.0;
        if (Code_Gen_Model_B.Coral_Arm_Angle_Measured >
            Coral_Arm_Angle_Start_Thresh) {
          Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_i =
            Code_Gen_Model_IN_Coral;
          Code_Gen_Model_DW.is_Coral_h = Code_Ge_IN_Coral_Score_Position;
          enter_internal_Coral_Score_Posi();
        }
        break;
      }

      switch (Code_Gen_Model_DW.is_Algae_Wheels_o) {
       case Code_Gen_Model_IN_Algae_Hold:
        /* Merge: '<S21>/Merge18' */
        Code_Gen_Model_B.Algae_Wheel_Outside_DutyCycle_m = Algae_Hold_DC;

        /* Merge: '<S21>/Merge20' */
        Code_Gen_Model_B.Algae_Wheel_Inside_DutyCycle_me = Algae_Hold_DC;
        if (rtb_Is_Absolute_Steering) {
          Code_Gen_Model_DW.is_Algae_Wheels_o = Code_Gen_Mode_IN_Algae_Push_Out;

          /* Merge: '<S21>/Merge18' */
          Code_Gen_Model_B.Algae_Wheel_Outside_DutyCycle_m = Algae_Push_Out_DC;

          /* Merge: '<S21>/Merge20' */
          Code_Gen_Model_B.Algae_Wheel_Inside_DutyCycle_me = Algae_Push_Out_DC;
          Code_Gen_Model_DW.timer_l = 0.0;
        }
        break;

       case Code_Gen_Model_IN_Algae_Pull_In:
        /* Merge: '<S21>/Merge18' */
        Code_Gen_Model_B.Algae_Wheel_Outside_DutyCycle_m = Algae_Pull_In_DC;

        /* Merge: '<S21>/Merge20' */
        Code_Gen_Model_B.Algae_Wheel_Inside_DutyCycle_me = Algae_Pull_In_DC;
        if (Compare_f) {
          Code_Gen_Model_DW.is_Algae_Wheels_o = Code_Gen_Model_IN_Algae_Hold;

          /* Merge: '<S21>/Merge18' */
          Code_Gen_Model_B.Algae_Wheel_Outside_DutyCycle_m = Algae_Hold_DC;

          /* Merge: '<S21>/Merge20' */
          Code_Gen_Model_B.Algae_Wheel_Inside_DutyCycle_me = Algae_Hold_DC;
        } else if (rtb_Is_Absolute_Steering) {
          Code_Gen_Model_DW.is_Algae_Wheels_o = Code_Gen_Mode_IN_Algae_Push_Out;

          /* Merge: '<S21>/Merge18' */
          Code_Gen_Model_B.Algae_Wheel_Outside_DutyCycle_m = Algae_Push_Out_DC;

          /* Merge: '<S21>/Merge20' */
          Code_Gen_Model_B.Algae_Wheel_Inside_DutyCycle_me = Algae_Push_Out_DC;
          Code_Gen_Model_DW.timer_l = 0.0;
        }
        break;

       case Code_Gen_Mode_IN_Algae_Push_Out:
        /* Merge: '<S21>/Merge18' */
        Code_Gen_Model_B.Algae_Wheel_Outside_DutyCycle_m = Algae_Push_Out_DC;

        /* Merge: '<S21>/Merge20' */
        Code_Gen_Model_B.Algae_Wheel_Inside_DutyCycle_me = Algae_Push_Out_DC;
        if (Code_Gen_Model_DW.timer_l >= Algae_Eject_Time) {
          Code_Gen_Model_DW.is_Algae_Wheels_o = Code_Gen_Model_IN_Off;

          /* Merge: '<S21>/Merge18' */
          Code_Gen_Model_B.Algae_Wheel_Outside_DutyCycle_m = 0.0;

          /* Merge: '<S21>/Merge20' */
          Code_Gen_Model_B.Algae_Wheel_Inside_DutyCycle_me = 0.0;
        } else if (FixPtRelationalOperator_e) {
          Code_Gen_Model_DW.is_Algae_Wheels_o = Code_Gen_Model_IN_Algae_Pull_In;

          /* Merge: '<S21>/Merge18' */
          Code_Gen_Model_B.Algae_Wheel_Outside_DutyCycle_m = Algae_Pull_In_DC;

          /* Merge: '<S21>/Merge20' */
          Code_Gen_Model_B.Algae_Wheel_Inside_DutyCycle_me = Algae_Pull_In_DC;
        } else {
          Code_Gen_Model_DW.timer_l += 0.02;
        }
        break;

       default:
        /* Merge: '<S21>/Merge18' */
        /* case IN_Off: */
        Code_Gen_Model_B.Algae_Wheel_Outside_DutyCycle_m = 0.0;

        /* Merge: '<S21>/Merge20' */
        Code_Gen_Model_B.Algae_Wheel_Inside_DutyCycle_me = 0.0;
        if (Compare_f) {
          Code_Gen_Model_DW.is_Algae_Wheels_o = Code_Gen_Model_IN_Algae_Hold;

          /* Merge: '<S21>/Merge18' */
          Code_Gen_Model_B.Algae_Wheel_Outside_DutyCycle_m = Algae_Hold_DC;

          /* Merge: '<S21>/Merge20' */
          Code_Gen_Model_B.Algae_Wheel_Inside_DutyCycle_me = Algae_Hold_DC;
        } else if (FixPtRelationalOperator_e) {
          Code_Gen_Model_DW.is_Algae_Wheels_o = Code_Gen_Model_IN_Algae_Pull_In;

          /* Merge: '<S21>/Merge18' */
          Code_Gen_Model_B.Algae_Wheel_Outside_DutyCycle_m = Algae_Pull_In_DC;

          /* Merge: '<S21>/Merge20' */
          Code_Gen_Model_B.Algae_Wheel_Inside_DutyCycle_me = Algae_Pull_In_DC;
        } else if (rtb_Is_Absolute_Steering) {
          Code_Gen_Model_DW.is_Algae_Wheels_o = Code_Gen_Mode_IN_Algae_Push_Out;

          /* Merge: '<S21>/Merge18' */
          Code_Gen_Model_B.Algae_Wheel_Outside_DutyCycle_m = Algae_Push_Out_DC;

          /* Merge: '<S21>/Merge20' */
          Code_Gen_Model_B.Algae_Wheel_Inside_DutyCycle_me = Algae_Push_Out_DC;
          Code_Gen_Model_DW.timer_l = 0.0;
        }
        break;
      }

      if (Code_Gen_Model_DW.is_AT_On_Target_Timer_k ==
          Code_Gen_Model_IN_Off_Target) {
        if (Code_Gen_Model_B.UnitDelay_b) {
          Code_Gen_Model_DW.is_AT_On_Target_Timer_k =
            Code_Gen_Model_IN_On_Target;
          Code_Gen_Model_DW.timer_robot_target_d = 0.02;
        }

        /* case IN_On_Target: */
      } else if (!Code_Gen_Model_B.UnitDelay_b) {
        Code_Gen_Model_DW.is_AT_On_Target_Timer_k = Code_Gen_Model_IN_Off_Target;
        Code_Gen_Model_DW.timer_robot_target_d = 0.0;
      } else {
        Code_Gen_Model_DW.timer_robot_target_d += 0.02;
      }
    }

    /* End of Chart: '<S33>/Reefscape_Chart' */

    /* Merge: '<S21>/Merge13' incorporates:
     *  SignalConversion generated from: '<S3>/Coral_Arm_Angle_Desired'
     */
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_merge =
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_h;

    /* SignalConversion generated from: '<S3>/Coral_Pickup_Lower_Wait_State' */
    rtb_Compare_ai = Code_Gen_Model_B.Coral_Pickup_Lower_Wait_State_o;

    /* Merge: '<S21>/Merge17' incorporates:
     *  SignalConversion generated from: '<S3>/Coral_Wheel_DutyCycle'
     */
    Code_Gen_Model_B.Coral_Wheel_DutyCycle_merge =
      Code_Gen_Model_B.Coral_Wheel_DC_f;

    /* Merge: '<S21>/Merge11' incorporates:
     *  SignalConversion generated from: '<S3>/Elevator_Height_Desired'
     */
    Code_Gen_Model_B.Elevator_Height_Desired_merge =
      Code_Gen_Model_B.Elevator_Height_Desired_n;

    /* Merge: '<S21>/Merge21' incorporates:
     *  SignalConversion generated from: '<S3>/Elevator_LowerPickup_Reset'
     */
    Code_Gen_Model_B.Elevator_LowerPickup_Reset_merg =
      Code_Gen_Model_B.Elevator_LowerPickup_Reset_i;

    /* Switch: '<S31>/Switch' incorporates:
     *  Constant: '<S31>/Constant1'
     *  Constant: '<S41>/Constant'
     *  Constant: '<S52>/Constant'
     *  Logic: '<S31>/AND'
     *  Logic: '<S31>/AND1'
     *  RelationalOperator: '<S41>/Compare'
     *  RelationalOperator: '<S52>/Compare'
     *  Switch: '<S31>/Switch4'
     *  Switch: '<S31>/Switch6'
     */
    if (Code_Gen_Model_B.Align_Left_p) {
      rtb_rx = AT_Reef_Target_Left_Y;
    } else if ((Code_Gen_Model_B.Align_Center_j) &&
               (Code_Gen_Model_B.Set_Coral_Level_l == 1)) {
      /* Switch: '<S31>/Switch4' incorporates:
       *  Constant: '<S31>/Constant3'
       */
      rtb_rx = AT_Reef_Target_Center_Y;
    } else if ((Code_Gen_Model_B.Align_Center_j) &&
               (Code_Gen_Model_B.Set_Algae_Level_m != 0)) {
      /* Switch: '<S31>/Switch6' incorporates:
       *  Constant: '<S31>/Constant6'
       *  Switch: '<S31>/Switch4'
       */
      rtb_rx = AT_Reef_Target_Algae_Y;
    } else {
      /* Switch: '<S31>/Switch4' incorporates:
       *  UnitDelay: '<S31>/Unit Delay1'
       */
      rtb_rx = Code_Gen_Model_DW.UnitDelay1_DSTATE_ek;
    }

    /* End of Switch: '<S31>/Switch' */

    /* Sum: '<S31>/Subtract1' */
    rtb_Abs1 = rtb_rx - Code_Gen_Model_B.Limelight_Tag_Corrected_Y;

    /* SignalConversion: '<S30>/Signal Copy6' */
    Code_Gen_Model_B.Auto_AT_Relative_Error_Y = rtb_Abs1;

    /* Switch: '<S31>/Switch2' incorporates:
     *  Constant: '<S31>/Constant4'
     *  Constant: '<S36>/Constant'
     *  Constant: '<S37>/Constant'
     *  Constant: '<S39>/Constant'
     *  Constant: '<S40>/Constant'
     *  Constant: '<S53>/Constant'
     *  Logic: '<S31>/AND2'
     *  Logic: '<S31>/AND3'
     *  Logic: '<S31>/Logical Operator5'
     *  Logic: '<S31>/Logical Operator6'
     *  Logic: '<S31>/OR'
     *  Logic: '<S31>/OR1'
     *  RelationalOperator: '<S36>/Compare'
     *  RelationalOperator: '<S37>/Compare'
     *  RelationalOperator: '<S39>/Compare'
     *  RelationalOperator: '<S40>/Compare'
     *  RelationalOperator: '<S53>/Compare'
     *  Switch: '<S31>/Switch3'
     *  Switch: '<S31>/Switch5'
     *  Switch: '<S31>/Switch7'
     */
    if ((Code_Gen_Model_B.Align_Center_j) && (Code_Gen_Model_B.Set_Coral_Level_l
         == 1)) {
      rtb_Switch2_kn = AT_Reef_Target_L1_X;
    } else if ((Code_Gen_Model_B.Align_Left_p) &&
               ((Code_Gen_Model_B.Set_Coral_Level_l == 2) ||
                (Code_Gen_Model_B.Set_Coral_Level_l == 3))) {
      /* Switch: '<S31>/Switch3' incorporates:
       *  Constant: '<S31>/Constant'
       */
      rtb_Switch2_kn = AT_Reef_Target_L2_L3_X;
    } else if ((Code_Gen_Model_B.Align_Left_p) &&
               (Code_Gen_Model_B.Set_Coral_Level_l == 4)) {
      /* Switch: '<S31>/Switch5' incorporates:
       *  Constant: '<S31>/Constant5'
       *  Switch: '<S31>/Switch3'
       */
      rtb_Switch2_kn = AT_Reef_Target_L4_X;
    } else if ((Code_Gen_Model_B.Align_Center_j) &&
               (Code_Gen_Model_B.Set_Algae_Level_m != 0)) {
      /* Switch: '<S31>/Switch7' incorporates:
       *  Constant: '<S31>/Constant7'
       *  Switch: '<S31>/Switch3'
       *  Switch: '<S31>/Switch5'
       */
      rtb_Switch2_kn = AT_Reef_Target_Algae_X;
    } else {
      /* Switch: '<S31>/Switch5' incorporates:
       *  Switch: '<S31>/Switch3'
       *  UnitDelay: '<S31>/Unit Delay'
       */
      rtb_Switch2_kn = Code_Gen_Model_DW.UnitDelay_DSTATE_bc;
    }

    /* End of Switch: '<S31>/Switch2' */

    /* Sum: '<S31>/Subtract' */
    rtb_Subtract_oz = rtb_Switch2_kn -
      Code_Gen_Model_B.Limelight_Tag_Corrected_X;

    /* SignalConversion: '<S30>/Signal Copy2' incorporates:
     *  UnaryMinus: '<S31>/Unary Minus1'
     */
    Code_Gen_Model_B.Auto_AT_Relative_Error_X = -rtb_Subtract_oz;

    /* Logic: '<S31>/Logical Operator1' incorporates:
     *  Constant: '<S47>/Constant'
     *  Constant: '<S48>/Constant'
     *  Constant: '<S49>/Constant'
     *  Constant: '<S50>/Constant'
     *  Constant: '<S51>/Constant'
     *  Logic: '<S31>/Logical Operator2'
     *  Logic: '<S31>/Logical Operator3'
     *  Logic: '<S31>/Logical Operator4'
     *  Logic: '<S31>/NOT'
     *  RelationalOperator: '<S47>/Compare'
     *  RelationalOperator: '<S48>/Compare'
     *  RelationalOperator: '<S49>/Compare'
     *  RelationalOperator: '<S50>/Compare'
     *  RelationalOperator: '<S51>/Compare'
     */
    Compare_f = (((((!(Code_Gen_Model_B.Limelight_Tag_Corrected_X == 0.0)) ||
                    (!(Code_Gen_Model_B.Limelight_Tag_Corrected_Y == 0.0))) || (
      !(Code_Gen_Model_B.Limelight_Tag_Corrected_Angle == 0.0))) &&
                  ((Code_Gen_Model_B.Set_Coral_Level_l != 0) ||
                   (Code_Gen_Model_B.Set_Algae_Level_m != 0))) &&
                 ((Code_Gen_Model_B.Align_Left_p) ||
                  (Code_Gen_Model_B.Align_Center_j)));

    /* SignalConversion: '<S30>/Signal Copy1' */
    Code_Gen_Model_B.Auto_AT_Relative_Enable = Compare_f;

    /* SignalConversion: '<S30>/Signal Copy7' incorporates:
     *  UnaryMinus: '<S31>/Unary Minus'
     */
    Code_Gen_Model_B.Auto_AT_Relative_Error_Angle =
      -Code_Gen_Model_B.Limelight_Tag_Corrected_Angle;

    /* Switch: '<S35>/Switch2' incorporates:
     *  Switch: '<S35>/Switch'
     *  Switch: '<S35>/Switch1'
     */
    if (Code_Gen_Model_B.Auto_AT_Relative_Enable) {
      /* Merge: '<S21>/Merge3' incorporates:
       *  Trigonometry: '<S35>/Atan3'
       */
      Code_Gen_Model_B.Translation_Angle = rt_atan2d_snf
        (Code_Gen_Model_B.Auto_AT_Relative_Error_Y,
         Code_Gen_Model_B.Auto_AT_Relative_Error_X);

      /* Product: '<S35>/Product2' incorporates:
       *  Constant: '<S35>/Constant4'
       */
      rtb_Product2_a = Code_Gen_Model_B.Auto_AT_Relative_Error_Angle *
        AT_Steering_Error_Angle_Gain_P;

      /* Switch: '<S71>/Switch2' incorporates:
       *  Constant: '<S35>/Constant10'
       *  RelationalOperator: '<S71>/LowerRelop1'
       *  RelationalOperator: '<S71>/UpperRelop'
       *  Switch: '<S71>/Switch'
       *  UnaryMinus: '<S35>/Unary Minus'
       */
      if (rtb_Product2_a > AT_Steering_Speed_Max) {
        /* Merge: '<S21>/Merge2' */
        Code_Gen_Model_B.Steering_Rel_Cmd = AT_Steering_Speed_Max;
      } else if (rtb_Product2_a < (-AT_Steering_Speed_Max)) {
        /* Switch: '<S71>/Switch' incorporates:
         *  Merge: '<S21>/Merge2'
         *  UnaryMinus: '<S35>/Unary Minus'
         */
        Code_Gen_Model_B.Steering_Rel_Cmd = -AT_Steering_Speed_Max;
      } else {
        /* Merge: '<S21>/Merge2' incorporates:
         *  Switch: '<S71>/Switch'
         */
        Code_Gen_Model_B.Steering_Rel_Cmd = rtb_Product2_a;
      }

      /* End of Switch: '<S71>/Switch2' */

      /* Merge: '<S21>/Merge4' incorporates:
       *  Constant: '<S35>/Constant8'
       *  Gain: '<S35>/Gain1'
       *  Math: '<S35>/Magnitude2'
       *  MinMax: '<S35>/Min1'
       */
      Code_Gen_Model_B.Translation_Speed = fmin
        (AT_Translation_Speed_Max_Relative, AT_Translation_Control_Gain_Relative
         * rt_hypotd_snf(Code_Gen_Model_B.Auto_AT_Relative_Error_X,
                         Code_Gen_Model_B.Auto_AT_Relative_Error_Y));
    } else {
      /* Merge: '<S21>/Merge3' */
      Code_Gen_Model_B.Translation_Angle = Code_Gen_Model_B.Translation_Angle_g;

      /* Merge: '<S21>/Merge2' incorporates:
       *  Constant: '<S35>/Constant2'
       */
      Code_Gen_Model_B.Steering_Rel_Cmd = 0.0;

      /* Merge: '<S21>/Merge4' */
      Code_Gen_Model_B.Translation_Speed = Code_Gen_Model_B.Translation_Speed_l;
    }

    /* End of Switch: '<S35>/Switch2' */

    /* Abs: '<S31>/Abs2' incorporates:
     *  UnaryMinus: '<S31>/Unary Minus'
     */
    rtb_Product2_a = fabs(-Code_Gen_Model_B.Limelight_Tag_Corrected_Angle);

    /* Abs: '<S31>/Abs' incorporates:
     *  UnaryMinus: '<S31>/Unary Minus1'
     */
    rtb_Subtract_oz = fabs(-rtb_Subtract_oz);

    /* Abs: '<S31>/Abs1' */
    rtb_Abs1 = fabs(rtb_Abs1);

    /* Merge: '<S21>/Merge23' incorporates:
     *  Constant: '<S38>/Constant'
     *  Constant: '<S45>/Constant'
     *  Constant: '<S46>/Constant'
     *  Logic: '<S31>/Logical Operator7'
     *  RelationalOperator: '<S38>/Compare'
     *  RelationalOperator: '<S45>/Compare'
     *  RelationalOperator: '<S46>/Compare'
     */
    Code_Gen_Model_B.Swerve_Drive_Integral_Enable = (((Compare_f &&
      (rtb_Subtract_oz <= AT_Integral_Enable_Error_XY)) && (rtb_Abs1 <=
      AT_Integral_Enable_Error_XY)) && (rtb_Product2_a <=
      AT_Integral_Enable_Error_Angle));

    /* SignalConversion: '<S30>/Signal Copy8' incorporates:
     *  Constant: '<S42>/Constant'
     *  Constant: '<S43>/Constant'
     *  Constant: '<S44>/Constant'
     *  Logic: '<S31>/Logical Operator'
     *  RelationalOperator: '<S42>/Compare'
     *  RelationalOperator: '<S43>/Compare'
     *  RelationalOperator: '<S44>/Compare'
     */
    Code_Gen_Model_B.Auto_AT_On_Target = (((Compare_f && (rtb_Subtract_oz <=
      AT_Max_Error_XY)) && (rtb_Abs1 <= AT_Max_Error_XY)) && (rtb_Product2_a <=
      AT_Max_Error_Angle));

    /* SignalConversion: '<S30>/Signal Copy9' */
    Compare_f = Code_Gen_Model_B.Auto_AT_On_Target;

    /* Merge: '<S21>/Merge9' incorporates:
     *  Lookup_n-D: '<S30>/1-D Lookup Table'
     */
    Code_Gen_Model_B.Spline_Num_Poses =
      Code_Gen_Model_ConstP.uDLookupTable_tableData[plook_u32u8_evencka
      (Code_Gen_Model_B.Path_ID, 1U, 1U, 19U)];

    /* Merge: '<S21>/Merge7' incorporates:
     *  SignalConversion: '<S30>/Signal Copy'
     */
    Code_Gen_Model_B.Spline_Enable = Code_Gen_Model_B.Path_Enable;

    /* Merge: '<S21>/Merge12' incorporates:
     *  Constant: '<S33>/Constant5'
     *  SignalConversion generated from: '<S3>/Reefscape_Motors_Enable'
     */
    Code_Gen_Model_B.Reefscape_Motors_Enable_merge = true;

    /* Merge: '<S21>/Merge1' incorporates:
     *  Constant: '<S35>/Constant1'
     *  SignalConversion generated from: '<S3>/Steering_Abs_Cmd'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd = 0.0;

    /* SignalConversion generated from: '<S3>/Is_Absolute_Translation' incorporates:
     *  Constant: '<S35>/Constant3'
     */
    rtb_Is_Absolute_Translation_g = false;

    /* SignalConversion generated from: '<S3>/Is_Absolute_Steering' incorporates:
     *  Constant: '<S35>/Constant5'
     */
    rtb_Is_Absolute_Steering = false;

    /* Merge: '<S21>/Merge10' incorporates:
     *  Constant: '<S3>/Constant3'
     *  SignalConversion generated from: '<S3>/Test_Mode'
     */
    Code_Gen_Model_B.Test_Mode = false;

    /* Merge: '<S21>/Merge14' incorporates:
     *  Constant: '<S3>/Constant1'
     *  SignalConversion generated from: '<S3>/Enable_Wheels'
     */
    Code_Gen_Model_B.Enable_Wheels = false;

    /* Merge: '<S21>/Merge15' incorporates:
     *  Constant: '<S3>/Constant13'
     *  SignalConversion generated from: '<S3>/Reset_Wheel_Offsets'
     */
    Code_Gen_Model_B.Reset_Wheel_Offsets = false;

    /* Merge: '<S21>/Merge16' incorporates:
     *  Constant: '<S3>/Constant14'
     *  SignalConversion generated from: '<S3>/Disable_Wheels'
     */
    Code_Gen_Model_B.Disable_Wheels = false;

    /* Merge: '<S21>/Merge19' incorporates:
     *  Constant: '<S3>/Constant4'
     *  SignalConversion generated from: '<S3>/Swerve_Motors_Disabled'
     */
    Code_Gen_Model_B.Swerve_Motors_Disabled = false;

    /* Merge: '<S21>/Merge24' incorporates:
     *  Constant: '<S3>/Constant'
     *  SignalConversion generated from: '<S3>/Desired_Pipeline'
     */
    Code_Gen_Model_B.Desired_Pipeline = 0U;

    /* Update for UnitDelay: '<S30>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_p = Code_Gen_Model_B.Coral_Score_j;

    /* Update for UnitDelay: '<S30>/Unit Delay2' */
    Code_Gen_Model_DW.UnitDelay2_DSTATE = Code_Gen_Model_B.State_ID_Auto;

    /* Update for UnitDelay: '<S56>/Delay Input1'
     *
     * Block description for '<S56>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_l = Code_Gen_Model_B.Gamepad_B1_A_out;

    /* Update for UnitDelay: '<S57>/Delay Input1' incorporates:
     *  Constant: '<S30>/Constant4'
     *
     * Block description for '<S57>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_bdz = false;

    /* Update for UnitDelay: '<S62>/Delay Input1'
     *
     * Block description for '<S62>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_au = Code_Gen_Model_B.Gamepad_B3_X_out;

    /* Update for UnitDelay: '<S63>/Delay Input1'
     *
     * Block description for '<S63>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_ne = Code_Gen_Model_B.Gamepad_B4_Y_out;

    /* Update for UnitDelay: '<S64>/Delay Input1'
     *
     * Block description for '<S64>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_ff = Code_Gen_Model_B.Gamepad_Start_out;

    /* Update for UnitDelay: '<S58>/Delay Input1'
     *
     * Block description for '<S58>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_ev = Code_Gen_Model_B.Gamepad_Back_out;

    /* Update for UnitDelay: '<S65>/Delay Input1' incorporates:
     *  Constant: '<S30>/Constant17'
     *
     * Block description for '<S65>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_o1g = false;

    /* Update for UnitDelay: '<S68>/Delay Input1' incorporates:
     *  Constant: '<S30>/Constant12'
     *
     * Block description for '<S68>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_os = false;

    /* Update for UnitDelay: '<S69>/Delay Input1'
     *
     * Block description for '<S69>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_b2 = Code_Gen_Model_B.Gamepad_RT_out;

    /* Update for UnitDelay: '<S61>/Delay Input1' incorporates:
     *  Constant: '<S30>/Constant13'
     *
     * Block description for '<S61>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_bm = false;

    /* Update for UnitDelay: '<S66>/Delay Input1' incorporates:
     *  Constant: '<S30>/Constant2'
     *
     * Block description for '<S66>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_d = false;

    /* Update for UnitDelay: '<S67>/Delay Input1'
     *
     * Block description for '<S67>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_b3 =
      Code_Gen_Model_B.Gamepad_POV_Down_a;

    /* Update for UnitDelay: '<S59>/Delay Input1'
     *
     * Block description for '<S59>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_ae =
      Code_Gen_Model_B.Gamepad_POV_Left_p;

    /* Update for UnitDelay: '<S60>/Delay Input1' incorporates:
     *  Constant: '<S30>/Constant14'
     *
     * Block description for '<S60>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_mu = false;

    /* Update for UnitDelay: '<S30>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_i3 = Code_Gen_Model_B.Auto_AT_On_Target;

    /* Update for UnitDelay: '<S31>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_ek = rtb_rx;

    /* Update for UnitDelay: '<S31>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_bc = rtb_Switch2_kn;

    /* End of Outputs for SubSystem: '<S2>/Autonomous' */
    break;

   case 2:
    if (rtAction != rtPrevAction) {
      /* InitializeConditions for IfAction SubSystem: '<S2>/Teleop' incorporates:
       *  ActionPort: '<S28>/Action Port'
       */
      /* InitializeConditions for SwitchCase: '<S2>/Switch Case' incorporates:
       *  UnitDelay: '<S28>/Unit Delay'
       *  UnitDelay: '<S426>/Unit Delay'
       *  UnitDelay: '<S426>/Unit Delay1'
       *  UnitDelay: '<S448>/Unit Delay1'
       *  UnitDelay: '<S448>/Unit Delay2'
       *  UnitDelay: '<S448>/Unit Delay3'
       *  UnitDelay: '<S448>/Unit Delay4'
       *  UnitDelay: '<S451>/Delay Input1'
       *  UnitDelay: '<S452>/Delay Input1'
       *  UnitDelay: '<S453>/Delay Input1'
       *  UnitDelay: '<S454>/Delay Input1'
       *  UnitDelay: '<S456>/Delay Input1'
       *  UnitDelay: '<S462>/Unit Delay'
       *  UnitDelay: '<S462>/Unit Delay1'
       *  UnitDelay: '<S466>/FixPt Unit Delay1'
       *  UnitDelay: '<S466>/FixPt Unit Delay2'
       *  UnitDelay: '<S469>/Delay Input1'
       *  UnitDelay: '<S470>/Delay Input1'
       *  UnitDelay: '<S471>/Delay Input1'
       *  UnitDelay: '<S472>/Delay Input1'
       *  UnitDelay: '<S473>/Delay Input1'
       *  UnitDelay: '<S474>/Delay Input1'
       *  UnitDelay: '<S475>/Delay Input1'
       *  UnitDelay: '<S476>/Delay Input1'
       *  UnitDelay: '<S477>/Delay Input1'
       *  UnitDelay: '<S478>/Delay Input1'
       *  UnitDelay: '<S479>/Delay Input1'
       *  UnitDelay: '<S480>/Delay Input1'
       *  UnitDelay: '<S481>/Delay Input1'
       *  UnitDelay: '<S482>/Delay Input1'
       *
       * Block description for '<S451>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S452>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S453>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S454>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S456>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S469>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S470>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S471>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S472>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S473>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S474>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S475>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S476>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S477>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S478>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S479>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S480>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S481>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S482>/Delay Input1':
       *
       *  Store in Global RAM
       */
      Code_Gen_Model_DW.DelayInput1_DSTATE_c = 0.0;
      Code_Gen_Model_DW.DelayInput1_DSTATE_nr = 0.0;
      Code_Gen_Model_DW.DelayInput1_DSTATE_ez = 0.0;
      Code_Gen_Model_DW.DelayInput1_DSTATE_nh = 0.0;
      Code_Gen_Model_DW.DelayInput1_DSTATE_i = 0.0;
      Code_Gen_Model_DW.DelayInput1_DSTATE_cp = 0.0;
      Code_Gen_Model_DW.DelayInput1_DSTATE_p = 0.0;
      Code_Gen_Model_DW.DelayInput1_DSTATE_o = 0.0;
      Code_Gen_Model_DW.DelayInput1_DSTATE_j = 0.0;
      Code_Gen_Model_DW.DelayInput1_DSTATE_b = 0.0;
      Code_Gen_Model_DW.DelayInput1_DSTATE_oy = false;
      Code_Gen_Model_DW.DelayInput1_DSTATE_f = false;
      Code_Gen_Model_DW.DelayInput1_DSTATE_o5 = false;
      Code_Gen_Model_DW.DelayInput1_DSTATE_a = false;
      Code_Gen_Model_DW.UnitDelay_DSTATE_ia = false;
      Code_Gen_Model_DW.UnitDelay1_DSTATE_nr = 0.0;
      Code_Gen_Model_DW.UnitDelay_DSTATE_kq = 0.0;
      Code_Gen_Model_DW.UnitDelay1_DSTATE_l = 0.0;
      Code_Gen_Model_DW.UnitDelay_DSTATE_p = 0.0;
      Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_a = 1U;
      Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_f = 0.0;
      Code_Gen_Model_DW.DelayInput1_DSTATE_jp = false;
      Code_Gen_Model_DW.DelayInput1_DSTATE_m = false;
      Code_Gen_Model_DW.DelayInput1_DSTATE_k = false;
      Code_Gen_Model_DW.DelayInput1_DSTATE_g = false;
      Code_Gen_Model_DW.DelayInput1_DSTATE_g2 = false;
      Code_Gen_Model_DW.UnitDelay2_DSTATE_l = false;
      Code_Gen_Model_DW.UnitDelay4_DSTATE = false;
      Code_Gen_Model_DW.UnitDelay3_DSTATE = 0.0;
      Code_Gen_Model_DW.UnitDelay1_DSTATE_j2 = 0.0;

      /* End of InitializeConditions for SubSystem: '<S2>/Teleop' */

      /* SystemReset for IfAction SubSystem: '<S2>/Teleop' incorporates:
       *  ActionPort: '<S28>/Action Port'
       */
      /* SystemReset for SwitchCase: '<S2>/Switch Case' incorporates:
       *  Chart: '<S428>/Reefscape_Chart'
       */
      Code_Gen_Model_B.Elevator_Height_Desired = 0.0;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired = 0.0;
      Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
      Code_Gen_Model_DW.timer = 0.0;
      Code_Gen_Model_B.Elevator_LowerPickup_Reset = false;
      Code_Gen_Model_DW.Set_L1 = false;
      Code_Gen_Model_DW.Set_L2 = false;
      Code_Gen_Model_DW.Set_L3 = false;
      Code_Gen_Model_DW.Set_L4 = false;
      Code_Gen_Model_B.Coral_Pickup_Lower_Wait_State = false;
      Code_Gen_Model_B.Set_Coral_Level = 0U;
      Code_Gen_Model_B.Set_Algae_Level = 0U;
      Code_Gen_Model_DW.timer_robot_target = 0.0;
      Code_Gen_Model_B.Desired_Pipeline_a = 0U;
      Code_Gen_Model_DW.is_active_c4_Code_Gen_Model = 0U;
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Algae_Pickup_High = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Algae_Pickup_Low = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Algae_Score = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Coral = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Coral_Eject = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Level_2 = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Level_3 = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Level_4_Auto = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Level_4_Teleop = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Coral_Score_Position =
        Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Actions = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Coral_Pickup_Prepare =
        Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Set_Level = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Elevator_Height_Bottom =
        Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Elevator_Height_Bottom_pre =
        Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_End_Game_Climb = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Set_Level_m = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Algae_Wheels = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_AT_On_Target_Timer = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;

      /* End of SystemReset for SubSystem: '<S2>/Teleop' */
    }

    /* Outputs for IfAction SubSystem: '<S2>/Teleop' incorporates:
     *  ActionPort: '<S28>/Action Port'
     */
    /* SignalConversion generated from: '<S28>/Spline_Ref_Poses' incorporates:
     *  Merge: '<S21>/Merge8'
     */
    memset(&rtb_Spline_Ref_Poses[0], 0, 40U * (sizeof(real_T)));

    /* RelationalOperator: '<S469>/FixPt Relational Operator' incorporates:
     *  Inport: '<Root>/Gamepad_B1_A'
     *  UnitDelay: '<S469>/Delay Input1'
     *
     * Block description for '<S469>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_B.FixPtRelationalOperator = (Code_Gen_Model_U.Gamepad_B1_A >
      Code_Gen_Model_DW.DelayInput1_DSTATE_c);

    /* RelationalOperator: '<S470>/FixPt Relational Operator' incorporates:
     *  Inport: '<Root>/Gamepad_B2_B'
     *  UnitDelay: '<S470>/Delay Input1'
     *
     * Block description for '<S470>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_B.FixPtRelationalOperator_n = (Code_Gen_Model_U.Gamepad_B2_B >
      Code_Gen_Model_DW.DelayInput1_DSTATE_nr);

    /* RelationalOperator: '<S475>/FixPt Relational Operator' incorporates:
     *  Inport: '<Root>/Gamepad_B3_X'
     *  UnitDelay: '<S475>/Delay Input1'
     *
     * Block description for '<S475>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_B.FixPtRelationalOperator_k = (Code_Gen_Model_U.Gamepad_B3_X >
      Code_Gen_Model_DW.DelayInput1_DSTATE_ez);

    /* RelationalOperator: '<S476>/FixPt Relational Operator' incorporates:
     *  Inport: '<Root>/Gamepad_B4_Y'
     *  UnitDelay: '<S476>/Delay Input1'
     *
     * Block description for '<S476>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_B.FixPtRelationalOperator_d = (Code_Gen_Model_U.Gamepad_B4_Y >
      Code_Gen_Model_DW.DelayInput1_DSTATE_nh);

    /* RelationalOperator: '<S477>/FixPt Relational Operator' incorporates:
     *  Inport: '<Root>/Gamepad_Start'
     *  UnitDelay: '<S477>/Delay Input1'
     *
     * Block description for '<S477>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Robot_Reached_Destination = (Code_Gen_Model_U.Gamepad_Start >
      Code_Gen_Model_DW.DelayInput1_DSTATE_i);

    /* RelationalOperator: '<S471>/FixPt Relational Operator' incorporates:
     *  Inport: '<Root>/Gamepad_Back'
     *  UnitDelay: '<S471>/Delay Input1'
     *
     * Block description for '<S471>/Delay Input1':
     *
     *  Store in Global RAM
     */
    FixPtRelationalOperator_p = (Code_Gen_Model_U.Gamepad_Back >
      Code_Gen_Model_DW.DelayInput1_DSTATE_cp);

    /* RelationalOperator: '<S478>/FixPt Relational Operator' incorporates:
     *  Inport: '<Root>/Gamepad_RB'
     *  UnitDelay: '<S478>/Delay Input1'
     *
     * Block description for '<S478>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_B.FixPtRelationalOperator_l = (Code_Gen_Model_U.Gamepad_RB >
      Code_Gen_Model_DW.DelayInput1_DSTATE_p);

    /* RelationalOperator: '<S481>/FixPt Relational Operator' incorporates:
     *  Inport: '<Root>/Gamepad_LT'
     *  UnitDelay: '<S481>/Delay Input1'
     *
     * Block description for '<S481>/Delay Input1':
     *
     *  Store in Global RAM
     */
    rtb_Is_Absolute_Translation_g = (Code_Gen_Model_U.Gamepad_LT >
      Code_Gen_Model_DW.DelayInput1_DSTATE_o);

    /* Logic: '<S428>/Logical Operator' incorporates:
     *  Inport: '<Root>/Gamepad_RT'
     *  Inport: '<Root>/Joystick_Right_B1'
     *  RelationalOperator: '<S474>/FixPt Relational Operator'
     *  RelationalOperator: '<S482>/FixPt Relational Operator'
     *  UnitDelay: '<S474>/Delay Input1'
     *  UnitDelay: '<S482>/Delay Input1'
     *
     * Block description for '<S474>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S482>/Delay Input1':
     *
     *  Store in Global RAM
     */
    rtb_Is_Absolute_Steering = ((Code_Gen_Model_U.Gamepad_RT >
      Code_Gen_Model_DW.DelayInput1_DSTATE_j) ||
      (Code_Gen_Model_U.Joystick_Right_B1 >
       Code_Gen_Model_DW.DelayInput1_DSTATE_b));

    /* RelationalOperator: '<S479>/FixPt Relational Operator' incorporates:
     *  UnitDelay: '<S479>/Delay Input1'
     *
     * Block description for '<S479>/Delay Input1':
     *
     *  Store in Global RAM
     */
    rtb_Compare_ai = (((int32_T)Code_Gen_Model_B.Gamepad_POV_Up) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_oy));

    /* RelationalOperator: '<S480>/FixPt Relational Operator' incorporates:
     *  UnitDelay: '<S480>/Delay Input1'
     *
     * Block description for '<S480>/Delay Input1':
     *
     *  Store in Global RAM
     */
    FixPtRelationalOperator_e = (((int32_T)Code_Gen_Model_B.Gamepad_POV_Down) >
      ((int32_T)Code_Gen_Model_DW.DelayInput1_DSTATE_f));

    /* RelationalOperator: '<S472>/FixPt Relational Operator' incorporates:
     *  UnitDelay: '<S472>/Delay Input1'
     *
     * Block description for '<S472>/Delay Input1':
     *
     *  Store in Global RAM
     */
    FixPtRelationalOperator_ji = (((int32_T)Code_Gen_Model_B.Gamepad_POV_Left) >
      ((int32_T)Code_Gen_Model_DW.DelayInput1_DSTATE_o5));

    /* RelationalOperator: '<S473>/FixPt Relational Operator' incorporates:
     *  UnitDelay: '<S473>/Delay Input1'
     *
     * Block description for '<S473>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_B.FixPtRelationalOperator_ml = (((int32_T)
      Code_Gen_Model_B.Gamepad_POV_Right) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_a));

    /* DeadZone: '<S428>/Dead Zone' incorporates:
     *  Inport: '<Root>/Gamepad_Stick_Left_Y'
     */
    if (Code_Gen_Model_U.Gamepad_Stick_Left_Y > 0.1) {
      /* DeadZone: '<S428>/Dead Zone' */
      Code_Gen_Model_B.DeadZone = Code_Gen_Model_U.Gamepad_Stick_Left_Y - 0.1;
    } else if (Code_Gen_Model_U.Gamepad_Stick_Left_Y >= -0.1) {
      /* DeadZone: '<S428>/Dead Zone' */
      Code_Gen_Model_B.DeadZone = 0.0;
    } else {
      /* DeadZone: '<S428>/Dead Zone' */
      Code_Gen_Model_B.DeadZone = Code_Gen_Model_U.Gamepad_Stick_Left_Y - -0.1;
    }

    /* End of DeadZone: '<S428>/Dead Zone' */

    /* DeadZone: '<S428>/Dead Zone1' incorporates:
     *  Inport: '<Root>/Gamepad_Stick_Right_Y'
     */
    if (Code_Gen_Model_U.Gamepad_Stick_Right_Y > 0.1) {
      /* DeadZone: '<S428>/Dead Zone1' */
      Code_Gen_Model_B.DeadZone1 = Code_Gen_Model_U.Gamepad_Stick_Right_Y - 0.1;
    } else if (Code_Gen_Model_U.Gamepad_Stick_Right_Y >= -0.1) {
      /* DeadZone: '<S428>/Dead Zone1' */
      Code_Gen_Model_B.DeadZone1 = 0.0;
    } else {
      /* DeadZone: '<S428>/Dead Zone1' */
      Code_Gen_Model_B.DeadZone1 = Code_Gen_Model_U.Gamepad_Stick_Right_Y - -0.1;
    }

    /* End of DeadZone: '<S428>/Dead Zone1' */

    /* UnitDelay: '<S28>/Unit Delay' */
    Code_Gen_Model_B.UnitDelay = Code_Gen_Model_DW.UnitDelay_DSTATE_ia;

    /* Chart: '<S428>/Reefscape_Chart' */
    if (Code_Gen_Model_DW.is_active_c4_Code_Gen_Model == 0) {
      Code_Gen_Model_DW.is_active_c4_Code_Gen_Model = 1U;
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        Code_Gen_Model_IN_Start;
      Code_Gen_Model_B.State_ID_Teleop = 0.0;
      Code_Gen_Model_B.Elevator_Height_Desired = Elevator_Height_Bottom;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
      Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
      Code_Gen_Model_B.Desired_Pipeline_a = 0U;
      Code_Gen_Model_DW.is_Set_Level_m = Code_Gen_Model_IN_None;
      Code_Gen_Model_DW.Set_L1 = false;
      Code_Gen_Model_DW.Set_L2 = false;
      Code_Gen_Model_DW.Set_L3 = false;
      Code_Gen_Model_DW.Set_L4 = false;
      Code_Gen_Model_DW.is_Algae_Wheels = Code_Gen_Model_IN_Off;

      /* Merge: '<S21>/Merge18' */
      Code_Gen_Model_B.Algae_Wheel_Outside_DutyCycle_m = 0.0;

      /* Merge: '<S21>/Merge20' */
      Code_Gen_Model_B.Algae_Wheel_Inside_DutyCycle_me = 0.0;
      Code_Gen_Model_DW.is_AT_On_Target_Timer = Code_Gen_Model_IN_Off_Target;
      Code_Gen_Model_DW.timer_robot_target = 0.0;
    } else {
      switch (Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel) {
       case Code_Gen_M_IN_Algae_Pickup_High:
        Code_Gen_Mo_Algae_Pickup_High_m(&Compare_f, &Robot_Reached_Destination,
          &FixPtRelationalOperator_p, &rtb_Compare_ai,
          &FixPtRelationalOperator_e, &FixPtRelationalOperator_ji);
        break;

       case Code_Gen_Mo_IN_Algae_Pickup_Low:
        Code_Gen_Mod_Algae_Pickup_Low_a(&Compare_f, &Robot_Reached_Destination,
          &FixPtRelationalOperator_p, &rtb_Compare_ai,
          &FixPtRelationalOperator_e, &FixPtRelationalOperator_ji);
        break;

       case Code_Gen_Model_IN_Algae_Score:
        Code_Gen_Model_Algae_Score_n(&Compare_f, &Robot_Reached_Destination,
          &FixPtRelationalOperator_p, &rtb_Compare_ai,
          &FixPtRelationalOperator_e, &FixPtRelationalOperator_ji);
        break;

       case Code_Gen_Model_IN_Coral:
        Code_Gen_Model_Coral_e(&Compare_f, &Robot_Reached_Destination,
          &FixPtRelationalOperator_p, &rtb_Compare_ai,
          &FixPtRelationalOperator_e, &FixPtRelationalOperator_ji);
        break;

       case Code_Gen_Model_IN_Coral_Pickup:
        Code_Gen_Model_Coral_Pickup_e(&Compare_f, &Robot_Reached_Destination,
          &FixPtRelationalOperator_p, &rtb_Compare_ai,
          &FixPtRelationalOperator_e, &FixPtRelationalOperator_ji);
        break;

       case Code__IN_Elevator_Height_Bottom:
        Code_G_Elevator_Height_Bottom_j(&Compare_f, &Robot_Reached_Destination,
          &FixPtRelationalOperator_p, &rtb_Compare_ai,
          &FixPtRelationalOperator_e, &FixPtRelationalOperator_ji);
        break;

       case C_IN_Elevator_Height_Bottom_pre:
        Co_Elevator_Height_Bottom_pre_k(&Compare_f, &Robot_Reached_Destination,
          &FixPtRelationalOperator_p, &rtb_Compare_ai,
          &FixPtRelationalOperator_e, &FixPtRelationalOperator_ji);
        break;

       case Code_Gen_Mode_IN_End_Game_Climb:
        Code_Gen_Model_End_Game_Climb_g(&Compare_f, &Robot_Reached_Destination,
          &FixPtRelationalOperator_p, &rtb_Compare_ai,
          &FixPtRelationalOperator_e, &FixPtRelationalOperator_ji);
        break;

       case Code_Gen_Model_IN_Start:
        Code_Gen_Model_B.State_ID_Teleop = 0.0;
        Code_Gen_Model_B.Desired_Pipeline_a = 0U;
        if (((((Code_Gen_Model_B.Compare) && (Code_Gen_Model_DW.Set_L1)) ||
              (Code_Gen_Model_DW.Set_L2)) || (Code_Gen_Model_DW.Set_L3)) ||
            (Code_Gen_Model_DW.Set_L4)) {
          Code_Gen_Model_DW.is_Set_Level_m = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
          Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
            Code_Gen_Model_IN_Coral;
          Code_Gen_Model_DW.is_Coral = Code_Ge_IN_Coral_Score_Position;
          enter_internal_Coral_Score_Po_k();
        } else if (!Code_Gen_Model_B.Compare) {
          if (Compare_f) {
            Code_Gen_Model_DW.is_Set_Level_m = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
            Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
              Code_Gen_Model_IN_Algae_Score;
            Code_Gen_Model_B.State_ID_Teleop = 4.1;
            Code_Gen_Model_B.Elevator_Height_Desired =
              Elevator_Height_Algae_Score;
            Code_Gen_Model_B.Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
            Code_Gen_Model_DW.is_Algae_Score = Code_Gen_Mod_IN_Coral_Motor_Off;
            Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
          } else {
            Code_Gen_Model_DW.is_Set_Level_m = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
            Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
              Code__IN_Elevator_Height_Bottom;
            Code_Gen_Model_B.State_ID_Teleop = 0.2;
            Code_Gen_Model_B.Elevator_Height_Desired = Elevator_Height_Bottom;
            Code_Gen_Model_B.Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
            Code_Gen_Model_DW.is_Elevator_Height_Bottom =
              Code_Gen_Mod_IN_Coral_Motor_Off;
            Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
          }
        } else {
          Code_Gen_Model_Set_Level_duc();
        }
        break;

       default:
        /* case IN_Start_Angle: */
        Code_Gen_Model_B.State_ID_Teleop = 2.0;
        if (Code_Gen_Model_B.Coral_Arm_Angle_Measured >
            Coral_Arm_Angle_Start_Thresh) {
          Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
            Code_Gen_Model_IN_Coral;
          Code_Gen_Model_DW.is_Coral = Code_Ge_IN_Coral_Score_Position;
          enter_internal_Coral_Score_Po_k();
        }
        break;
      }

      switch (Code_Gen_Model_DW.is_Algae_Wheels) {
       case Code_Gen_Model_IN_Algae_Hold:
        /* Merge: '<S21>/Merge18' */
        Code_Gen_Model_B.Algae_Wheel_Outside_DutyCycle_m = Algae_Hold_DC;

        /* Merge: '<S21>/Merge20' */
        Code_Gen_Model_B.Algae_Wheel_Inside_DutyCycle_me = Algae_Hold_DC;
        if (rtb_Is_Absolute_Steering) {
          Code_Gen_Model_DW.is_Algae_Wheels = Code_Gen_Mode_IN_Algae_Push_Out;

          /* Merge: '<S21>/Merge18' */
          Code_Gen_Model_B.Algae_Wheel_Outside_DutyCycle_m = Algae_Push_Out_DC;

          /* Merge: '<S21>/Merge20' */
          Code_Gen_Model_B.Algae_Wheel_Inside_DutyCycle_me = Algae_Push_Out_DC;
          Code_Gen_Model_DW.timer = 0.0;
        }
        break;

       case Code_Gen_Model_IN_Algae_Pull_In:
        /* Merge: '<S21>/Merge18' */
        Code_Gen_Model_B.Algae_Wheel_Outside_DutyCycle_m = Algae_Pull_In_DC;

        /* Merge: '<S21>/Merge20' */
        Code_Gen_Model_B.Algae_Wheel_Inside_DutyCycle_me = Algae_Pull_In_DC;
        if (Compare_f) {
          Code_Gen_Model_DW.is_Algae_Wheels = Code_Gen_Model_IN_Algae_Hold;

          /* Merge: '<S21>/Merge18' */
          Code_Gen_Model_B.Algae_Wheel_Outside_DutyCycle_m = Algae_Hold_DC;

          /* Merge: '<S21>/Merge20' */
          Code_Gen_Model_B.Algae_Wheel_Inside_DutyCycle_me = Algae_Hold_DC;
        } else if (rtb_Is_Absolute_Steering) {
          Code_Gen_Model_DW.is_Algae_Wheels = Code_Gen_Mode_IN_Algae_Push_Out;

          /* Merge: '<S21>/Merge18' */
          Code_Gen_Model_B.Algae_Wheel_Outside_DutyCycle_m = Algae_Push_Out_DC;

          /* Merge: '<S21>/Merge20' */
          Code_Gen_Model_B.Algae_Wheel_Inside_DutyCycle_me = Algae_Push_Out_DC;
          Code_Gen_Model_DW.timer = 0.0;
        }
        break;

       case Code_Gen_Mode_IN_Algae_Push_Out:
        /* Merge: '<S21>/Merge18' */
        Code_Gen_Model_B.Algae_Wheel_Outside_DutyCycle_m = Algae_Push_Out_DC;

        /* Merge: '<S21>/Merge20' */
        Code_Gen_Model_B.Algae_Wheel_Inside_DutyCycle_me = Algae_Push_Out_DC;
        if (Code_Gen_Model_DW.timer >= Algae_Eject_Time) {
          Code_Gen_Model_DW.is_Algae_Wheels = Code_Gen_Model_IN_Off;

          /* Merge: '<S21>/Merge18' */
          Code_Gen_Model_B.Algae_Wheel_Outside_DutyCycle_m = 0.0;

          /* Merge: '<S21>/Merge20' */
          Code_Gen_Model_B.Algae_Wheel_Inside_DutyCycle_me = 0.0;
        } else if ((rtb_Is_Absolute_Translation_g || FixPtRelationalOperator_ji)
                   || (Code_Gen_Model_B.FixPtRelationalOperator_ml)) {
          Code_Gen_Model_DW.is_Algae_Wheels = Code_Gen_Model_IN_Algae_Pull_In;

          /* Merge: '<S21>/Merge18' */
          Code_Gen_Model_B.Algae_Wheel_Outside_DutyCycle_m = Algae_Pull_In_DC;

          /* Merge: '<S21>/Merge20' */
          Code_Gen_Model_B.Algae_Wheel_Inside_DutyCycle_me = Algae_Pull_In_DC;
        } else {
          Code_Gen_Model_DW.timer += 0.02;
        }
        break;

       default:
        /* Merge: '<S21>/Merge18' */
        /* case IN_Off: */
        Code_Gen_Model_B.Algae_Wheel_Outside_DutyCycle_m = 0.0;

        /* Merge: '<S21>/Merge20' */
        Code_Gen_Model_B.Algae_Wheel_Inside_DutyCycle_me = 0.0;
        if (Compare_f) {
          Code_Gen_Model_DW.is_Algae_Wheels = Code_Gen_Model_IN_Algae_Hold;

          /* Merge: '<S21>/Merge18' */
          Code_Gen_Model_B.Algae_Wheel_Outside_DutyCycle_m = Algae_Hold_DC;

          /* Merge: '<S21>/Merge20' */
          Code_Gen_Model_B.Algae_Wheel_Inside_DutyCycle_me = Algae_Hold_DC;
        } else if ((rtb_Is_Absolute_Translation_g || FixPtRelationalOperator_ji)
                   || (Code_Gen_Model_B.FixPtRelationalOperator_ml)) {
          Code_Gen_Model_DW.is_Algae_Wheels = Code_Gen_Model_IN_Algae_Pull_In;

          /* Merge: '<S21>/Merge18' */
          Code_Gen_Model_B.Algae_Wheel_Outside_DutyCycle_m = Algae_Pull_In_DC;

          /* Merge: '<S21>/Merge20' */
          Code_Gen_Model_B.Algae_Wheel_Inside_DutyCycle_me = Algae_Pull_In_DC;
        } else if (rtb_Is_Absolute_Steering) {
          Code_Gen_Model_DW.is_Algae_Wheels = Code_Gen_Mode_IN_Algae_Push_Out;

          /* Merge: '<S21>/Merge18' */
          Code_Gen_Model_B.Algae_Wheel_Outside_DutyCycle_m = Algae_Push_Out_DC;

          /* Merge: '<S21>/Merge20' */
          Code_Gen_Model_B.Algae_Wheel_Inside_DutyCycle_me = Algae_Push_Out_DC;
          Code_Gen_Model_DW.timer = 0.0;
        }
        break;
      }

      if (Code_Gen_Model_DW.is_AT_On_Target_Timer ==
          Code_Gen_Model_IN_Off_Target) {
        if (Code_Gen_Model_B.UnitDelay) {
          Code_Gen_Model_DW.is_AT_On_Target_Timer = Code_Gen_Model_IN_On_Target;
          Code_Gen_Model_DW.timer_robot_target = 0.02;
        }

        /* case IN_On_Target: */
      } else if (!Code_Gen_Model_B.UnitDelay) {
        Code_Gen_Model_DW.is_AT_On_Target_Timer = Code_Gen_Model_IN_Off_Target;
        Code_Gen_Model_DW.timer_robot_target = 0.0;
      } else {
        Code_Gen_Model_DW.timer_robot_target += 0.02;
      }
    }

    /* End of Chart: '<S428>/Reefscape_Chart' */

    /* Switch: '<S426>/Switch' incorporates:
     *  Constant: '<S426>/Constant1'
     *  Constant: '<S435>/Constant'
     *  Constant: '<S446>/Constant'
     *  Logic: '<S426>/AND'
     *  Logic: '<S426>/AND1'
     *  RelationalOperator: '<S435>/Compare'
     *  RelationalOperator: '<S446>/Compare'
     *  Switch: '<S426>/Switch1'
     *  Switch: '<S426>/Switch4'
     *  Switch: '<S426>/Switch6'
     */
    if (Code_Gen_Model_B.Align_Left) {
      rtb_rx = AT_Reef_Target_Left_Y;
    } else if (Code_Gen_Model_B.Align_Right) {
      /* Switch: '<S426>/Switch1' incorporates:
       *  Constant: '<S426>/Constant2'
       */
      rtb_rx = AT_Reef_Target_Right_Y;
    } else if ((Code_Gen_Model_B.Align_Center) &&
               (Code_Gen_Model_B.Set_Coral_Level == 1)) {
      /* Switch: '<S426>/Switch4' incorporates:
       *  Constant: '<S426>/Constant3'
       *  Switch: '<S426>/Switch1'
       */
      rtb_rx = AT_Reef_Target_Center_Y;
    } else if ((Code_Gen_Model_B.Align_Center) &&
               (Code_Gen_Model_B.Set_Algae_Level != 0)) {
      /* Switch: '<S426>/Switch6' incorporates:
       *  Constant: '<S426>/Constant6'
       *  Switch: '<S426>/Switch1'
       *  Switch: '<S426>/Switch4'
       */
      rtb_rx = AT_Reef_Target_Algae_Y;
    } else {
      /* Switch: '<S426>/Switch4' incorporates:
       *  Switch: '<S426>/Switch1'
       *  UnitDelay: '<S426>/Unit Delay1'
       */
      rtb_rx = Code_Gen_Model_DW.UnitDelay1_DSTATE_nr;
    }

    /* End of Switch: '<S426>/Switch' */

    /* Sum: '<S426>/Subtract1' */
    rtb_Abs1 = rtb_rx - Code_Gen_Model_B.Limelight_Tag_Corrected_Y;

    /* SignalConversion: '<S28>/Signal Copy8' */
    Code_Gen_Model_B.AT_Relative_Error_Error_Y = rtb_Abs1;

    /* Switch: '<S426>/Switch2' incorporates:
     *  Constant: '<S426>/Constant4'
     *  Constant: '<S434>/Constant'
     *  Logic: '<S426>/AND2'
     *  RelationalOperator: '<S434>/Compare'
     */
    if ((Code_Gen_Model_B.Align_Center) && (Code_Gen_Model_B.Set_Coral_Level ==
         1)) {
      rtb_Switch2_kn = AT_Reef_Target_L1_X;
    } else {
      /* Logic: '<S426>/OR' */
      Compare_f = ((Code_Gen_Model_B.Align_Left) ||
                   (Code_Gen_Model_B.Align_Right));

      /* Switch: '<S426>/Switch3' incorporates:
       *  Constant: '<S426>/Constant'
       *  Constant: '<S430>/Constant'
       *  Constant: '<S431>/Constant'
       *  Constant: '<S433>/Constant'
       *  Constant: '<S447>/Constant'
       *  Logic: '<S426>/AND3'
       *  Logic: '<S426>/Logical Operator5'
       *  Logic: '<S426>/Logical Operator6'
       *  Logic: '<S426>/OR1'
       *  RelationalOperator: '<S430>/Compare'
       *  RelationalOperator: '<S431>/Compare'
       *  RelationalOperator: '<S433>/Compare'
       *  RelationalOperator: '<S447>/Compare'
       *  Switch: '<S426>/Switch5'
       *  Switch: '<S426>/Switch7'
       */
      if (Compare_f && ((Code_Gen_Model_B.Set_Coral_Level == 2) ||
                        (Code_Gen_Model_B.Set_Coral_Level == 3))) {
        rtb_Switch2_kn = AT_Reef_Target_L2_L3_X;
      } else if (Compare_f && (Code_Gen_Model_B.Set_Coral_Level == 4)) {
        /* Switch: '<S426>/Switch5' incorporates:
         *  Constant: '<S426>/Constant5'
         */
        rtb_Switch2_kn = AT_Reef_Target_L4_X;
      } else if ((Code_Gen_Model_B.Align_Center) &&
                 (Code_Gen_Model_B.Set_Algae_Level != 0)) {
        /* Switch: '<S426>/Switch7' incorporates:
         *  Constant: '<S426>/Constant7'
         *  Switch: '<S426>/Switch5'
         */
        rtb_Switch2_kn = AT_Reef_Target_Algae_X;
      } else {
        /* Switch: '<S426>/Switch5' incorporates:
         *  UnitDelay: '<S426>/Unit Delay'
         */
        rtb_Switch2_kn = Code_Gen_Model_DW.UnitDelay_DSTATE_kq;
      }

      /* End of Switch: '<S426>/Switch3' */
    }

    /* End of Switch: '<S426>/Switch2' */

    /* Sum: '<S426>/Subtract' */
    rtb_Rotationmatrixfromlocalto_1 = rtb_Switch2_kn -
      Code_Gen_Model_B.Limelight_Tag_Corrected_X;

    /* SignalConversion: '<S28>/Signal Copy7' incorporates:
     *  UnaryMinus: '<S426>/Unary Minus1'
     */
    Code_Gen_Model_B.AT_Relative_Error_Error_X =
      -rtb_Rotationmatrixfromlocalto_1;

    /* DeadZone: '<S449>/Dead Zone' */
    if (Code_Gen_Model_B.Drive_Joystick_Z > Twist_Deadzone_pos) {
      rtb_DeadZone = Code_Gen_Model_B.Drive_Joystick_Z - Twist_Deadzone_pos;
    } else if (Code_Gen_Model_B.Drive_Joystick_Z >= Twist_Deadzone_neg) {
      rtb_DeadZone = 0.0;
    } else {
      rtb_DeadZone = Code_Gen_Model_B.Drive_Joystick_Z - Twist_Deadzone_neg;
    }

    /* End of DeadZone: '<S449>/Dead Zone' */

    /* Lookup_n-D: '<S449>/Modulation_Drv' incorporates:
     *  Math: '<S449>/Magnitude'
     */
    rtb_Rotationmatrixfromlocalto_0 = look1_binlcpw(rt_hypotd_snf
      (Code_Gen_Model_B.Drive_Joystick_X, Code_Gen_Model_B.Drive_Joystick_Y),
      Code_Gen_Model_ConstP.Modulation_Drv_bp01Data,
      Code_Gen_Model_ConstP.Modulation_Drv_tableData, 20U);

    /* RelationalOperator: '<S460>/Compare' incorporates:
     *  Constant: '<S460>/Constant'
     */
    FixPtRelationalOperator_p = (rtb_Rotationmatrixfromlocalto_0 == 0.0);

    /* Logic: '<S449>/Logical Operator' incorporates:
     *  Constant: '<S461>/Constant'
     *  RelationalOperator: '<S461>/Compare'
     */
    rtb_Is_Absolute_Translation_g = ((rtb_DeadZone != 0.0) &&
      FixPtRelationalOperator_p);

    /* Logic: '<S426>/Logical Operator1' incorporates:
     *  Constant: '<S441>/Constant'
     *  Constant: '<S442>/Constant'
     *  Constant: '<S443>/Constant'
     *  Constant: '<S444>/Constant'
     *  Constant: '<S445>/Constant'
     *  Logic: '<S426>/Logical Operator2'
     *  Logic: '<S426>/Logical Operator3'
     *  Logic: '<S426>/Logical Operator4'
     *  Logic: '<S426>/NOT'
     *  RelationalOperator: '<S441>/Compare'
     *  RelationalOperator: '<S442>/Compare'
     *  RelationalOperator: '<S443>/Compare'
     *  RelationalOperator: '<S444>/Compare'
     *  RelationalOperator: '<S445>/Compare'
     */
    Compare_f = (((((!(Code_Gen_Model_B.Limelight_Tag_Corrected_X == 0.0)) ||
                    (!(Code_Gen_Model_B.Limelight_Tag_Corrected_Y == 0.0))) || (
      !(Code_Gen_Model_B.Limelight_Tag_Corrected_Angle == 0.0))) &&
                  ((Code_Gen_Model_B.Set_Coral_Level != 0) ||
                   (Code_Gen_Model_B.Set_Algae_Level != 0))) &&
                 (((Code_Gen_Model_B.Align_Left) ||
                   (Code_Gen_Model_B.Align_Right)) ||
                  (Code_Gen_Model_B.Align_Center)));

    /* SignalConversion: '<S28>/Signal Copy6' */
    Code_Gen_Model_B.AT_Relative_Error_Enable = Compare_f;

    /* Logic: '<S449>/Logical Operator1' */
    rtb_Is_Absolute_Steering = (((Code_Gen_Model_B.Drive_Engage_Hook) ||
      (Code_Gen_Model_B.AT_Relative_Error_Enable)) ||
      rtb_Is_Absolute_Translation_g);

    /* Switch: '<S462>/Switch1' incorporates:
     *  Constant: '<S467>/Constant'
     *  Constant: '<S468>/Constant'
     *  Logic: '<S462>/AND'
     *  RelationalOperator: '<S467>/Compare'
     *  RelationalOperator: '<S468>/Compare'
     *  Switch: '<S462>/Switch2'
     *  UnitDelay: '<S462>/Unit Delay'
     *  UnitDelay: '<S462>/Unit Delay1'
     */
    if ((Code_Gen_Model_B.Drive_Joystick_X == 0.0) &&
        (Code_Gen_Model_B.Drive_Joystick_Y == 0.0)) {
      rtb_Subtract_oz = Code_Gen_Model_DW.UnitDelay1_DSTATE_l;
      rtb_Product2_a = Code_Gen_Model_DW.UnitDelay_DSTATE_p;
    } else {
      rtb_Subtract_oz = Code_Gen_Model_B.Drive_Joystick_Y;
      rtb_Product2_a = Code_Gen_Model_B.Drive_Joystick_X;
    }

    /* End of Switch: '<S462>/Switch1' */

    /* Switch: '<S449>/Switch9' incorporates:
     *  Switch: '<S449>/Switch4'
     */
    if (rtb_Is_Absolute_Steering) {
      /* Switch: '<S449>/Switch3' incorporates:
       *  Switch: '<S449>/Switch1'
       */
      if (Code_Gen_Model_B.Drive_Engage_Hook) {
        /* Merge: '<S21>/Merge3' incorporates:
         *  Constant: '<S449>/Constant9'
         */
        Code_Gen_Model_B.Translation_Angle = Drive_Engage_Hook_Angle;
      } else if (rtb_Is_Absolute_Translation_g) {
        /* Signum: '<S449>/Sign' incorporates:
         *  Switch: '<S449>/Switch1'
         */
        if (rtIsNaN(rtb_DeadZone)) {
          rtb_Minus_k_idx_0 = (rtNaN);
        } else if (rtb_DeadZone < 0.0) {
          rtb_Minus_k_idx_0 = -1.0;
        } else {
          rtb_Minus_k_idx_0 = (rtb_DeadZone > 0.0);
        }

        /* Switch: '<S449>/Switch5' incorporates:
         *  Constant: '<S449>/Constant3'
         *  Constant: '<S449>/Constant4'
         *  Switch: '<S449>/Switch1'
         */
        if (Code_Gen_Model_B.Drive_Joystick_Z_Mode) {
          tmp = -1.5707963267948966;
        } else {
          tmp = 0.0;
        }

        /* Merge: '<S21>/Merge3' incorporates:
         *  Gain: '<S449>/Gain3'
         *  Signum: '<S449>/Sign'
         *  Sum: '<S449>/Add'
         *  Switch: '<S449>/Switch1'
         *  Switch: '<S449>/Switch5'
         */
        Code_Gen_Model_B.Translation_Angle = (3.1415926535897931 *
          rtb_Minus_k_idx_0) + tmp;
      } else {
        /* Merge: '<S21>/Merge3' incorporates:
         *  Switch: '<S449>/Switch1'
         *  Trigonometry: '<S449>/Atan3'
         */
        Code_Gen_Model_B.Translation_Angle = rt_atan2d_snf
          (Code_Gen_Model_B.AT_Relative_Error_Error_Y,
           Code_Gen_Model_B.AT_Relative_Error_Error_X);
      }

      /* End of Switch: '<S449>/Switch3' */
    } else if (FixPtRelationalOperator_p) {
      /* Switch: '<S449>/Switch6' incorporates:
       *  Inport: '<Root>/IsBlueAlliance'
       *  Switch: '<S449>/Switch4'
       */
      if (Code_Gen_Model_U.IsBlueAlliance != 0.0) {
        /* Merge: '<S21>/Merge3' incorporates:
         *  Constant: '<S449>/Constant'
         */
        Code_Gen_Model_B.Translation_Angle = 0.0;
      } else {
        /* Merge: '<S21>/Merge3' incorporates:
         *  Constant: '<S449>/Constant1'
         */
        Code_Gen_Model_B.Translation_Angle = 3.1415926535897931;
      }

      /* End of Switch: '<S449>/Switch6' */
    } else {
      /* Merge: '<S21>/Merge3' incorporates:
       *  Switch: '<S449>/Switch4'
       *  Trigonometry: '<S449>/Atan2'
       */
      Code_Gen_Model_B.Translation_Angle = rt_atan2d_snf(rtb_Subtract_oz,
        rtb_Product2_a);
    }

    /* End of Switch: '<S449>/Switch9' */

    /* Switch: '<S459>/Switch1' incorporates:
     *  Constant: '<S459>/Constant'
     *  Constant: '<S459>/Constant1'
     */
    if (Code_Gen_Model_B.Is_Boosting) {
      rtb_Rotationmatrixfromlocalto_2 = Boost_Trigger_High_Speed;
    } else {
      rtb_Rotationmatrixfromlocalto_2 = Boost_Trigger_Low_Speed;
    }

    /* End of Switch: '<S459>/Switch1' */

    /* Switch: '<S466>/Init' incorporates:
     *  UnitDelay: '<S466>/FixPt Unit Delay1'
     *  UnitDelay: '<S466>/FixPt Unit Delay2'
     */
    if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_a != 0) {
      rtb_Subtract_e = rtb_Rotationmatrixfromlocalto_2;
    } else {
      rtb_Subtract_e = Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_f;
    }

    /* End of Switch: '<S466>/Init' */

    /* Sum: '<S464>/Sum1' */
    rtb_Sum1_j = rtb_Rotationmatrixfromlocalto_2 - rtb_Subtract_e;

    /* Switch: '<S465>/Switch2' incorporates:
     *  Constant: '<S463>/Constant1'
     *  Constant: '<S463>/Constant3'
     *  RelationalOperator: '<S465>/LowerRelop1'
     *  RelationalOperator: '<S465>/UpperRelop'
     *  Switch: '<S465>/Switch'
     */
    if (rtb_Sum1_j > Boost_Trigger_Increasing_Limit) {
      rtb_Sum1_j = Boost_Trigger_Increasing_Limit;
    } else if (rtb_Sum1_j < Boost_Trigger_Decreasing_Limit) {
      /* Switch: '<S465>/Switch' incorporates:
       *  Constant: '<S463>/Constant1'
       */
      rtb_Sum1_j = Boost_Trigger_Decreasing_Limit;
    }

    /* Sum: '<S464>/Sum' incorporates:
     *  Switch: '<S465>/Switch2'
     */
    rtb_Sum1_j += rtb_Subtract_e;

    /* Switch: '<S449>/Switch8' incorporates:
     *  Switch: '<S449>/Switch2'
     */
    if (rtb_Is_Absolute_Steering) {
      /* Switch: '<S449>/Switch10' incorporates:
       *  Switch: '<S449>/Switch'
       */
      if (Code_Gen_Model_B.Drive_Engage_Hook) {
        /* Merge: '<S21>/Merge4' incorporates:
         *  Constant: '<S449>/Constant7'
         */
        Code_Gen_Model_B.Translation_Speed = Drive_Engage_Hook_Speed;
      } else if (rtb_Is_Absolute_Translation_g) {
        /* Switch: '<S449>/Switch' incorporates:
         *  Gain: '<S449>/Gain'
         *  Merge: '<S21>/Merge4'
         */
        Code_Gen_Model_B.Translation_Speed = Translation_Twist_Gain *
          rtb_DeadZone;
      } else {
        /* Merge: '<S21>/Merge4' incorporates:
         *  Constant: '<S449>/Constant8'
         *  Gain: '<S449>/Gain1'
         *  Math: '<S449>/Magnitude2'
         *  MinMax: '<S449>/Min1'
         *  Switch: '<S449>/Switch'
         */
        Code_Gen_Model_B.Translation_Speed = fmin
          (AT_Translation_Speed_Max_Relative,
           AT_Translation_Control_Gain_Relative * rt_hypotd_snf
           (Code_Gen_Model_B.AT_Relative_Error_Error_X,
            Code_Gen_Model_B.AT_Relative_Error_Error_Y));
      }

      /* End of Switch: '<S449>/Switch10' */
    } else if (FixPtRelationalOperator_p) {
      /* Merge: '<S21>/Merge4' incorporates:
       *  Constant: '<S28>/Constant7'
       *  Constant: '<S28>/Constant8'
       *  Constant: '<S449>/Constant5'
       *  Gain: '<S449>/Gain2'
       *  Math: '<S449>/Magnitude1'
       *  MinMax: '<S449>/Min'
       *  Switch: '<S449>/Switch2'
       */
      Code_Gen_Model_B.Translation_Speed = fmin(AT_Translation_Speed_Max_Field,
        AT_Translation_Control_Gain_Field * 0.0);
    } else {
      /* Product: '<S459>/Product' incorporates:
       *  Switch: '<S449>/Switch2'
       */
      rtb_Minus_k_idx_0 = rtb_Rotationmatrixfromlocalto_0 * rtb_Sum1_j;

      /* Saturate: '<S459>/Saturation' incorporates:
       *  Switch: '<S449>/Switch2'
       */
      if (rtb_Minus_k_idx_0 > Boost_Trigger_High_Speed) {
        /* Merge: '<S21>/Merge4' */
        Code_Gen_Model_B.Translation_Speed = Boost_Trigger_High_Speed;
      } else if (rtb_Minus_k_idx_0 < (-Boost_Trigger_High_Speed)) {
        /* Merge: '<S21>/Merge4' */
        Code_Gen_Model_B.Translation_Speed = -Boost_Trigger_High_Speed;
      } else {
        /* Merge: '<S21>/Merge4' */
        Code_Gen_Model_B.Translation_Speed = rtb_Minus_k_idx_0;
      }

      /* End of Saturate: '<S459>/Saturation' */
    }

    /* End of Switch: '<S449>/Switch8' */

    /* Switch: '<S429>/Switch' incorporates:
     *  Constant: '<S429>/Constant5'
     *  Constant: '<S429>/Constant7'
     *  DataTypeConversion: '<S429>/Data Type Conversion'
     *  Switch: '<S449>/Switch7'
     */
    if (TEST_Swerve_Mode_Override_Flag != 0.0) {
      rtb_Is_Absolute_Translation_g = (TEST_Swerve_Mode_Translation != 0.0);
    } else {
      rtb_Is_Absolute_Translation_g = !rtb_Is_Absolute_Steering;
    }

    /* End of Switch: '<S429>/Switch' */

    /* SignalConversion: '<S28>/Signal Copy9' incorporates:
     *  UnaryMinus: '<S426>/Unary Minus'
     */
    Code_Gen_Model_B.AT_Relative_Error_Angle =
      -Code_Gen_Model_B.Limelight_Tag_Corrected_Angle;

    /* Switch: '<S448>/Switch' incorporates:
     *  Constant: '<S448>/Constant9'
     */
    if (Code_Gen_Model_B.AT_Relative_Error_Enable) {
      /* Product: '<S448>/Product2' incorporates:
       *  Constant: '<S448>/Constant4'
       */
      rtb_Subtract_e = Code_Gen_Model_B.AT_Relative_Error_Angle *
        AT_Steering_Error_Angle_Gain_P;

      /* Switch: '<S458>/Switch2' incorporates:
       *  Constant: '<S448>/Constant10'
       *  RelationalOperator: '<S458>/LowerRelop1'
       *  RelationalOperator: '<S458>/UpperRelop'
       *  Switch: '<S458>/Switch'
       *  UnaryMinus: '<S448>/Unary Minus'
       */
      if (rtb_Subtract_e > AT_Steering_Speed_Max) {
        rtb_Rotationmatrixfromlocalto_2 = AT_Steering_Speed_Max;
      } else if (rtb_Subtract_e < (-AT_Steering_Speed_Max)) {
        /* Switch: '<S458>/Switch' incorporates:
         *  UnaryMinus: '<S448>/Unary Minus'
         */
        rtb_Rotationmatrixfromlocalto_2 = -AT_Steering_Speed_Max;
      } else {
        rtb_Rotationmatrixfromlocalto_2 = rtb_Subtract_e;
      }

      /* End of Switch: '<S458>/Switch2' */
    } else {
      rtb_Rotationmatrixfromlocalto_2 = 0.0;
    }

    /* End of Switch: '<S448>/Switch' */

    /* DeadZone: '<S448>/Dead Zone' */
    if (Code_Gen_Model_B.Steer_Joystick_Z > Twist_Deadzone_pos) {
      rtb_Minus_k_idx_0 = Code_Gen_Model_B.Steer_Joystick_Z - Twist_Deadzone_pos;
    } else if (Code_Gen_Model_B.Steer_Joystick_Z >= Twist_Deadzone_neg) {
      rtb_Minus_k_idx_0 = 0.0;
    } else {
      rtb_Minus_k_idx_0 = Code_Gen_Model_B.Steer_Joystick_Z - Twist_Deadzone_neg;
    }

    /* Sum: '<S448>/Add' incorporates:
     *  Constant: '<S448>/Constant'
     *  Constant: '<S448>/Constant1'
     *  DeadZone: '<S448>/Dead Zone'
     *  Lookup_n-D: '<S448>/Modulation_Str_Y_Rel'
     *  Product: '<S448>/Product'
     *  Product: '<S448>/Product1'
     *  SignalConversion: '<S17>/Signal Copy5'
     */
    rtb_Rotationmatrixfromlocalto_2 += (look1_binlcpw
      (Code_Gen_Model_B.Steer_Joystick_Y,
       Code_Gen_Model_ConstP.Modulation_Str_Y_Rel_bp01Data,
       Code_Gen_Model_ConstP.Modulation_Str_Y_Rel_tableData, 20U) *
      Steering_Relative_Gain) + (rtb_Minus_k_idx_0 * Steering_Twist_Gain);

    /* RelationalOperator: '<S450>/Compare' incorporates:
     *  Constant: '<S450>/Constant'
     */
    FixPtRelationalOperator_p = (rtb_Rotationmatrixfromlocalto_2 == 0.0);

    /* Switch: '<S429>/Switch1' incorporates:
     *  Constant: '<S429>/Constant5'
     *  Constant: '<S429>/Constant8'
     *  DataTypeConversion: '<S429>/Data Type Conversion1'
     */
    if (TEST_Swerve_Mode_Override_Flag != 0.0) {
      rtb_Is_Absolute_Steering = (TEST_Swerve_Mode_Steering != 0.0);
    } else {
      rtb_Is_Absolute_Steering = FixPtRelationalOperator_p;
    }

    /* End of Switch: '<S429>/Switch1' */

    /* Logic: '<S448>/AND2' incorporates:
     *  RelationalOperator: '<S451>/FixPt Relational Operator'
     *  RelationalOperator: '<S452>/FixPt Relational Operator'
     *  RelationalOperator: '<S453>/FixPt Relational Operator'
     *  RelationalOperator: '<S454>/FixPt Relational Operator'
     *  UnitDelay: '<S451>/Delay Input1'
     *  UnitDelay: '<S452>/Delay Input1'
     *  UnitDelay: '<S453>/Delay Input1'
     *  UnitDelay: '<S454>/Delay Input1'
     *
     * Block description for '<S451>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S452>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S453>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S454>/Delay Input1':
     *
     *  Store in Global RAM
     */
    rtb_Compare_ai = ((((((int32_T)Code_Gen_Model_B.Face_Away_Driver) >
                         ((int32_T)Code_Gen_Model_DW.DelayInput1_DSTATE_m)) ||
                        (((int32_T)Code_Gen_Model_B.Face_Left_Driver) >
                         ((int32_T)Code_Gen_Model_DW.DelayInput1_DSTATE_k))) ||
                       (((int32_T)Code_Gen_Model_B.Face_Toward_Driver) >
                        ((int32_T)Code_Gen_Model_DW.DelayInput1_DSTATE_g))) ||
                      (((int32_T)Code_Gen_Model_B.Face_Right_Driver) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_g2)));

    /* Logic: '<S448>/AND1' incorporates:
     *  Logic: '<S448>/AND3'
     *  UnitDelay: '<S448>/Unit Delay2'
     */
    FixPtRelationalOperator_e = (FixPtRelationalOperator_p && (rtb_Compare_ai ||
      (Code_Gen_Model_DW.UnitDelay2_DSTATE_l)));

    /* Logic: '<S448>/AND4' incorporates:
     *  Logic: '<S448>/AND8'
     *  UnitDelay: '<S448>/Unit Delay4'
     */
    Robot_Reached_Destination = ((FixPtRelationalOperator_p && (!rtb_Compare_ai))
      && (Code_Gen_Model_DW.UnitDelay4_DSTATE));

    /* Logic: '<S448>/AND6' */
    Code_Gen_Model_B.Steering_Abs_Angle_Active = (FixPtRelationalOperator_e ||
      Robot_Reached_Destination);

    /* Switch: '<S448>/Switch8' incorporates:
     *  Constant: '<S457>/Constant'
     *  Logic: '<S448>/AND9'
     *  RelationalOperator: '<S456>/FixPt Relational Operator'
     *  RelationalOperator: '<S457>/Compare'
     *  UnitDelay: '<S24>/Unit Delay'
     *  UnitDelay: '<S456>/Delay Input1'
     *
     * Block description for '<S456>/Delay Input1':
     *
     *  Store in Global RAM
     */
    if (((Code_Gen_Model_B.Steering_Abs_Angle_Active) || (((int32_T)
           FixPtRelationalOperator_p) > ((int32_T)
           Code_Gen_Model_DW.DelayInput1_DSTATE_jp))) ||
        (Code_Gen_Model_B.Active_GameState != 2)) {
      /* Switch: '<S448>/Switch8' */
      Code_Gen_Model_B.Steering_Abs_Gyro_Latch = Code_Gen_Model_B.Gyro_Angle_rad;
    } else {
      /* Switch: '<S448>/Switch8' incorporates:
       *  UnitDelay: '<S448>/Unit Delay3'
       */
      Code_Gen_Model_B.Steering_Abs_Gyro_Latch =
        Code_Gen_Model_DW.UnitDelay3_DSTATE;
    }

    /* End of Switch: '<S448>/Switch8' */

    /* Switch: '<S448>/Switch4' incorporates:
     *  Constant: '<S448>/Constant5'
     *  Switch: '<S448>/Switch1'
     *  Switch: '<S448>/Switch5'
     *  Switch: '<S448>/Switch6'
     *  Switch: '<S448>/Switch7'
     */
    if (Code_Gen_Model_B.Face_Away_Driver) {
      rtb_DeadZone = 0.0;
    } else if (Code_Gen_Model_B.Face_Left_Driver) {
      /* Switch: '<S448>/Switch5' incorporates:
       *  Constant: '<S448>/Constant6'
       */
      rtb_DeadZone = 1.5707963267948966;
    } else if (Code_Gen_Model_B.Face_Toward_Driver) {
      /* Switch: '<S448>/Switch6' incorporates:
       *  Constant: '<S448>/Constant7'
       *  Switch: '<S448>/Switch5'
       */
      rtb_DeadZone = 3.1415926535897931;
    } else if (Code_Gen_Model_B.Face_Right_Driver) {
      /* Switch: '<S448>/Switch7' incorporates:
       *  Constant: '<S448>/Constant8'
       *  Switch: '<S448>/Switch5'
       *  Switch: '<S448>/Switch6'
       */
      rtb_DeadZone = 4.71238898038469;
    } else if (Robot_Reached_Destination) {
      /* Switch: '<S448>/Switch1' incorporates:
       *  Constant: '<S28>/Constant10'
       *  Switch: '<S448>/Switch5'
       *  Switch: '<S448>/Switch6'
       *  Switch: '<S448>/Switch7'
       */
      rtb_DeadZone = 0.0;
    } else {
      /* Switch: '<S448>/Switch6' incorporates:
       *  Switch: '<S448>/Switch5'
       *  Switch: '<S448>/Switch7'
       *  UnitDelay: '<S448>/Unit Delay1'
       */
      rtb_DeadZone = Code_Gen_Model_DW.UnitDelay1_DSTATE_j2;
    }

    /* End of Switch: '<S448>/Switch4' */

    /* Switch: '<S448>/Switch2' incorporates:
     *  Switch: '<S448>/Switch3'
     */
    if (Code_Gen_Model_B.Steering_Abs_Angle_Active) {
      /* Switch: '<S448>/Switch2' incorporates:
       *  Constant: '<S448>/Constant2'
       */
      Code_Gen_Model_B.Steering_Abs_Gyro = 0.0;

      /* Switch: '<S448>/Switch3' */
      Code_Gen_Model_B.Steering_Abs_Angle = rtb_DeadZone;
    } else {
      /* Switch: '<S448>/Switch2' */
      Code_Gen_Model_B.Steering_Abs_Gyro =
        Code_Gen_Model_B.Steering_Abs_Gyro_Latch;

      /* Switch: '<S448>/Switch3' incorporates:
       *  Constant: '<S448>/Constant3'
       */
      Code_Gen_Model_B.Steering_Abs_Angle = 0.0;
    }

    /* End of Switch: '<S448>/Switch2' */

    /* Merge: '<S21>/Merge1' incorporates:
     *  Sum: '<S448>/Add1'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd = Code_Gen_Model_B.Steering_Abs_Angle +
      Code_Gen_Model_B.Steering_Abs_Gyro;

    /* Merge: '<S21>/Merge2' incorporates:
     *  SignalConversion: '<S448>/Signal Copy'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd = rtb_Rotationmatrixfromlocalto_2;

    /* Abs: '<S426>/Abs2' incorporates:
     *  UnaryMinus: '<S426>/Unary Minus'
     */
    rtb_Subtract_e = fabs(-Code_Gen_Model_B.Limelight_Tag_Corrected_Angle);

    /* Abs: '<S426>/Abs' incorporates:
     *  UnaryMinus: '<S426>/Unary Minus1'
     */
    rtb_Rotationmatrixfromlocalto_1 = fabs(-rtb_Rotationmatrixfromlocalto_1);

    /* Abs: '<S426>/Abs1' */
    rtb_Abs1 = fabs(rtb_Abs1);

    /* Merge: '<S21>/Merge23' incorporates:
     *  Constant: '<S432>/Constant'
     *  Constant: '<S439>/Constant'
     *  Constant: '<S440>/Constant'
     *  Logic: '<S426>/Logical Operator7'
     *  RelationalOperator: '<S432>/Compare'
     *  RelationalOperator: '<S439>/Compare'
     *  RelationalOperator: '<S440>/Compare'
     *  SignalConversion: '<S28>/Signal Copy'
     */
    Code_Gen_Model_B.Swerve_Drive_Integral_Enable = (((Compare_f &&
      (rtb_Rotationmatrixfromlocalto_1 <= AT_Integral_Enable_Error_XY)) &&
      (rtb_Abs1 <= AT_Integral_Enable_Error_XY)) && (rtb_Subtract_e <=
      AT_Integral_Enable_Error_Angle));

    /* SignalConversion: '<S28>/Signal Copy10' incorporates:
     *  Constant: '<S436>/Constant'
     *  Constant: '<S437>/Constant'
     *  Constant: '<S438>/Constant'
     *  Logic: '<S426>/Logical Operator'
     *  RelationalOperator: '<S436>/Compare'
     *  RelationalOperator: '<S437>/Compare'
     *  RelationalOperator: '<S438>/Compare'
     */
    Code_Gen_Model_B.Teleop_AT_On_Target = (((Compare_f &&
      (rtb_Rotationmatrixfromlocalto_1 <= AT_Max_Error_XY)) && (rtb_Abs1 <=
      AT_Max_Error_XY)) && (rtb_Subtract_e <= AT_Max_Error_Angle));

    /* SignalConversion: '<S28>/Signal Copy11' */
    Compare_f = Code_Gen_Model_B.Teleop_AT_On_Target;

    /* Merge: '<S21>/Merge13' incorporates:
     *  SignalConversion generated from: '<S28>/Coral_Arm_Angle_Desired'
     */
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_merge =
      Code_Gen_Model_B.Coral_Arm_Angle_Desired;

    /* SignalConversion generated from: '<S28>/Coral_Pickup_Lower_Wait_State' */
    rtb_Compare_ai = Code_Gen_Model_B.Coral_Pickup_Lower_Wait_State;

    /* Merge: '<S21>/Merge17' incorporates:
     *  SignalConversion generated from: '<S28>/Coral_Wheel_DutyCycle'
     */
    Code_Gen_Model_B.Coral_Wheel_DutyCycle_merge =
      Code_Gen_Model_B.Coral_Wheel_DC;

    /* Merge: '<S21>/Merge24' incorporates:
     *  SignalConversion generated from: '<S28>/Desired_Pipeline'
     */
    Code_Gen_Model_B.Desired_Pipeline = Code_Gen_Model_B.Desired_Pipeline_a;

    /* Merge: '<S21>/Merge11' incorporates:
     *  SignalConversion generated from: '<S28>/Elevator_Height_Desired'
     */
    Code_Gen_Model_B.Elevator_Height_Desired_merge =
      Code_Gen_Model_B.Elevator_Height_Desired;

    /* Merge: '<S21>/Merge21' incorporates:
     *  SignalConversion generated from: '<S28>/Elevator_LowerPickup_Reset'
     */
    Code_Gen_Model_B.Elevator_LowerPickup_Reset_merg =
      Code_Gen_Model_B.Elevator_LowerPickup_Reset;

    /* Merge: '<S21>/Merge12' incorporates:
     *  Constant: '<S428>/Constant5'
     *  SignalConversion generated from: '<S28>/Reefscape_Motors_Enable'
     */
    Code_Gen_Model_B.Reefscape_Motors_Enable_merge = true;

    /* Merge: '<S21>/Merge7' incorporates:
     *  Constant: '<S28>/Constant3'
     *  SignalConversion generated from: '<S28>/Spline_Enable'
     */
    Code_Gen_Model_B.Spline_Enable = false;

    /* Merge: '<S21>/Merge9' incorporates:
     *  Constant: '<S28>/Constant9'
     *  SignalConversion generated from: '<S28>/Spline_Num_Poses'
     */
    Code_Gen_Model_B.Spline_Num_Poses = 10.0;

    /* Merge: '<S21>/Merge10' incorporates:
     *  Constant: '<S28>/Constant1'
     *  SignalConversion generated from: '<S28>/Test_Mode'
     */
    Code_Gen_Model_B.Test_Mode = false;

    /* Merge: '<S21>/Merge14' incorporates:
     *  Constant: '<S28>/Constant6'
     *  SignalConversion generated from: '<S28>/Enable_Wheels'
     */
    Code_Gen_Model_B.Enable_Wheels = false;

    /* Merge: '<S21>/Merge15' incorporates:
     *  Constant: '<S28>/Constant13'
     *  SignalConversion generated from: '<S28>/Reset_Wheel_Offsets'
     */
    Code_Gen_Model_B.Reset_Wheel_Offsets = false;

    /* Merge: '<S21>/Merge16' incorporates:
     *  Constant: '<S28>/Constant14'
     *  SignalConversion generated from: '<S28>/Disable_Wheels'
     */
    Code_Gen_Model_B.Disable_Wheels = false;

    /* Merge: '<S21>/Merge19' incorporates:
     *  Constant: '<S28>/Constant2'
     *  SignalConversion generated from: '<S28>/Swerve_Motors_Disabled'
     */
    Code_Gen_Model_B.Swerve_Motors_Disabled = false;

    /* Update for UnitDelay: '<S469>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_B1_A'
     *
     * Block description for '<S469>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_c = Code_Gen_Model_U.Gamepad_B1_A;

    /* Update for UnitDelay: '<S470>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_B2_B'
     *
     * Block description for '<S470>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_nr = Code_Gen_Model_U.Gamepad_B2_B;

    /* Update for UnitDelay: '<S475>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_B3_X'
     *
     * Block description for '<S475>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_ez = Code_Gen_Model_U.Gamepad_B3_X;

    /* Update for UnitDelay: '<S476>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_B4_Y'
     *
     * Block description for '<S476>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_nh = Code_Gen_Model_U.Gamepad_B4_Y;

    /* Update for UnitDelay: '<S477>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_Start'
     *
     * Block description for '<S477>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_i = Code_Gen_Model_U.Gamepad_Start;

    /* Update for UnitDelay: '<S471>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_Back'
     *
     * Block description for '<S471>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_cp = Code_Gen_Model_U.Gamepad_Back;

    /* Update for UnitDelay: '<S478>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_RB'
     *
     * Block description for '<S478>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_p = Code_Gen_Model_U.Gamepad_RB;

    /* Update for UnitDelay: '<S481>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_LT'
     *
     * Block description for '<S481>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_o = Code_Gen_Model_U.Gamepad_LT;

    /* Update for UnitDelay: '<S482>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_RT'
     *
     * Block description for '<S482>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_j = Code_Gen_Model_U.Gamepad_RT;

    /* Update for UnitDelay: '<S474>/Delay Input1' incorporates:
     *  Inport: '<Root>/Joystick_Right_B1'
     *
     * Block description for '<S474>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_b = Code_Gen_Model_U.Joystick_Right_B1;

    /* Update for UnitDelay: '<S479>/Delay Input1'
     *
     * Block description for '<S479>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_oy = Code_Gen_Model_B.Gamepad_POV_Up;

    /* Update for UnitDelay: '<S480>/Delay Input1'
     *
     * Block description for '<S480>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_f = Code_Gen_Model_B.Gamepad_POV_Down;

    /* Update for UnitDelay: '<S472>/Delay Input1'
     *
     * Block description for '<S472>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_o5 = Code_Gen_Model_B.Gamepad_POV_Left;

    /* Update for UnitDelay: '<S473>/Delay Input1'
     *
     * Block description for '<S473>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_a = Code_Gen_Model_B.Gamepad_POV_Right;

    /* Update for UnitDelay: '<S28>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_ia = Code_Gen_Model_B.Teleop_AT_On_Target;

    /* Update for UnitDelay: '<S426>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_nr = rtb_rx;

    /* Update for UnitDelay: '<S426>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_kq = rtb_Switch2_kn;

    /* Update for UnitDelay: '<S462>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_l = rtb_Subtract_oz;

    /* Update for UnitDelay: '<S462>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_p = rtb_Product2_a;

    /* Update for UnitDelay: '<S466>/FixPt Unit Delay2' incorporates:
     *  Constant: '<S466>/FixPt Constant'
     */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_a = 0U;

    /* Update for UnitDelay: '<S466>/FixPt Unit Delay1' */
    Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_f = rtb_Sum1_j;

    /* Update for UnitDelay: '<S456>/Delay Input1'
     *
     * Block description for '<S456>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_jp = FixPtRelationalOperator_p;

    /* Update for UnitDelay: '<S455>/Delay Input1' incorporates:
     *  Constant: '<S28>/Constant5'
     *
     * Block description for '<S455>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_ft = false;

    /* Update for UnitDelay: '<S451>/Delay Input1'
     *
     * Block description for '<S451>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_m = Code_Gen_Model_B.Face_Away_Driver;

    /* Update for UnitDelay: '<S452>/Delay Input1'
     *
     * Block description for '<S452>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_k = Code_Gen_Model_B.Face_Left_Driver;

    /* Update for UnitDelay: '<S453>/Delay Input1'
     *
     * Block description for '<S453>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_g = Code_Gen_Model_B.Face_Toward_Driver;

    /* Update for UnitDelay: '<S454>/Delay Input1'
     *
     * Block description for '<S454>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_g2 = Code_Gen_Model_B.Face_Right_Driver;

    /* Update for UnitDelay: '<S448>/Unit Delay2' */
    Code_Gen_Model_DW.UnitDelay2_DSTATE_l = FixPtRelationalOperator_e;

    /* Update for UnitDelay: '<S448>/Unit Delay4' */
    Code_Gen_Model_DW.UnitDelay4_DSTATE = Robot_Reached_Destination;

    /* Update for UnitDelay: '<S448>/Unit Delay3' */
    Code_Gen_Model_DW.UnitDelay3_DSTATE =
      Code_Gen_Model_B.Steering_Abs_Gyro_Latch;

    /* Update for UnitDelay: '<S448>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_j2 = rtb_DeadZone;

    /* End of Outputs for SubSystem: '<S2>/Teleop' */
    break;

   default:
    /* InitializeConditions for IfAction SubSystem: '<S2>/Test' incorporates:
     *  ActionPort: '<S29>/Action Port'
     */
    /* InitializeConditions for SwitchCase: '<S2>/Switch Case' incorporates:
     *  UnitDelay: '<S29>/Unit Delay'
     */
    Code_Gen_Model_DW.UnitDelay_DSTATE_iro = ((rtAction == rtPrevAction) &&
      (Code_Gen_Model_DW.UnitDelay_DSTATE_iro));

    /* End of InitializeConditions for SubSystem: '<S2>/Test' */

    /* Outputs for IfAction SubSystem: '<S2>/Test' incorporates:
     *  ActionPort: '<S29>/Action Port'
     */
    /* SignalConversion generated from: '<S29>/Spline_Ref_Poses' incorporates:
     *  Merge: '<S21>/Merge8'
     */
    memset(&rtb_Spline_Ref_Poses[0], 0, 40U * (sizeof(real_T)));

    /* Merge: '<S21>/Merge1' incorporates:
     *  Constant: '<S29>/Constant1'
     *  SignalConversion generated from: '<S29>/Steering_Abs_Cmd'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd = 0.0;

    /* Merge: '<S21>/Merge2' incorporates:
     *  Constant: '<S29>/Constant2'
     *  SignalConversion generated from: '<S29>/Steering_Rel_Cmd'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd = 0.0;

    /* Merge: '<S21>/Merge3' incorporates:
     *  Constant: '<S29>/Constant3'
     *  SignalConversion generated from: '<S29>/Translation_Angle'
     */
    Code_Gen_Model_B.Translation_Angle = 0.0;

    /* Merge: '<S21>/Merge4' incorporates:
     *  Constant: '<S29>/Constant4'
     *  SignalConversion generated from: '<S29>/Translation_Speed'
     */
    Code_Gen_Model_B.Translation_Speed = 0.0;

    /* SignalConversion generated from: '<S29>/Is_Absolute_Translation' incorporates:
     *  Constant: '<S29>/Constant5'
     */
    rtb_Is_Absolute_Translation_g = false;

    /* SignalConversion generated from: '<S29>/Is_Absolute_Steering' incorporates:
     *  Constant: '<S29>/Constant6'
     */
    rtb_Is_Absolute_Steering = false;

    /* Merge: '<S21>/Merge7' incorporates:
     *  Constant: '<S29>/Constant7'
     *  SignalConversion generated from: '<S29>/Spline_Enable'
     */
    Code_Gen_Model_B.Spline_Enable = false;

    /* Merge: '<S21>/Merge9' incorporates:
     *  Constant: '<S29>/Constant9'
     *  SignalConversion generated from: '<S29>/Spline_Num_Poses'
     */
    Code_Gen_Model_B.Spline_Num_Poses = 10.0;

    /* Merge: '<S21>/Merge10' incorporates:
     *  Constant: '<S29>/Constant12'
     *  SignalConversion generated from: '<S29>/Test_Mode'
     */
    Code_Gen_Model_B.Test_Mode = true;

    /* Switch: '<S29>/Switch' incorporates:
     *  Constant: '<S29>/Constant14'
     *  Switch: '<S29>/Switch1'
     *  UnitDelay: '<S29>/Unit Delay'
     */
    if (Code_Gen_Model_B.Button_Disable_Wheels) {
      Robot_Reached_Destination = true;
    } else {
      Robot_Reached_Destination = ((!Code_Gen_Model_B.Button_Enable_Wheels) &&
        (Code_Gen_Model_DW.UnitDelay_DSTATE_iro));
    }

    /* End of Switch: '<S29>/Switch' */

    /* Merge: '<S21>/Merge19' incorporates:
     *  SignalConversion generated from: '<S29>/Swerve_Motors_Disabled'
     */
    Code_Gen_Model_B.Swerve_Motors_Disabled = Robot_Reached_Destination;

    /* Merge: '<S21>/Merge12' incorporates:
     *  Constant: '<S29>/Constant11'
     *  SignalConversion generated from: '<S29>/Reefscape_Motors_Enable'
     */
    Code_Gen_Model_B.Reefscape_Motors_Enable_merge = false;

    /* Merge: '<S21>/Merge11' incorporates:
     *  Constant: '<S29>/Constant10'
     *  SignalConversion generated from: '<S29>/Elevator_Height_Desired'
     */
    Code_Gen_Model_B.Elevator_Height_Desired_merge = 0.0;

    /* Merge: '<S21>/Merge13' incorporates:
     *  Constant: '<S29>/Constant15'
     *  SignalConversion generated from: '<S29>/Coral_Arm_Angle_Desired'
     */
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_merge = -90.0;

    /* Merge: '<S21>/Merge17' incorporates:
     *  Constant: '<S29>/Constant16'
     *  SignalConversion generated from: '<S29>/Coral_Wheel_DutyCycle'
     */
    Code_Gen_Model_B.Coral_Wheel_DutyCycle_merge = 0.0;

    /* Merge: '<S21>/Merge18' incorporates:
     *  Constant: '<S29>/Constant17'
     *  SignalConversion generated from: '<S29>/Algae_Wheel_Outside_DutyCycle'
     */
    Code_Gen_Model_B.Algae_Wheel_Outside_DutyCycle_m = 0.0;

    /* Merge: '<S21>/Merge20' incorporates:
     *  Constant: '<S29>/Constant18'
     *  SignalConversion generated from: '<S29>/Algae_Wheel_Inside_DutyCycle'
     */
    Code_Gen_Model_B.Algae_Wheel_Inside_DutyCycle_me = 0.0;

    /* Merge: '<S21>/Merge21' incorporates:
     *  Constant: '<S29>/Constant19'
     *  SignalConversion generated from: '<S29>/Elevator_LowerPickup_Reset'
     */
    Code_Gen_Model_B.Elevator_LowerPickup_Reset_merg = false;

    /* SignalConversion generated from: '<S29>/Coral_Pickup_Lower_Wait_State' incorporates:
     *  Constant: '<S29>/Constant20'
     */
    rtb_Compare_ai = false;

    /* Merge: '<S21>/Merge23' incorporates:
     *  Constant: '<S29>/Constant21'
     *  SignalConversion generated from: '<S29>/Swerve_Drive_Integral_Enable'
     */
    Code_Gen_Model_B.Swerve_Drive_Integral_Enable = false;

    /* SignalConversion generated from: '<S29>/AT_On_Target' incorporates:
     *  Constant: '<S29>/Constant23'
     */
    Compare_f = false;

    /* Merge: '<S21>/Merge24' incorporates:
     *  Constant: '<S29>/Constant22'
     *  SignalConversion generated from: '<S29>/Desired_Pipeline'
     */
    Code_Gen_Model_B.Desired_Pipeline = 0U;

    /* Merge: '<S21>/Merge14' incorporates:
     *  SignalConversion: '<S29>/Signal Copy'
     */
    Code_Gen_Model_B.Enable_Wheels = Code_Gen_Model_B.Button_Enable_Wheels;

    /* Merge: '<S21>/Merge16' incorporates:
     *  SignalConversion: '<S29>/Signal Copy2'
     */
    Code_Gen_Model_B.Disable_Wheels = Code_Gen_Model_B.Button_Disable_Wheels;

    /* Merge: '<S21>/Merge15' incorporates:
     *  SignalConversion: '<S29>/Signal Copy1'
     */
    Code_Gen_Model_B.Reset_Wheel_Offsets =
      Code_Gen_Model_B.Button_Reset_Wheel_Offsets;

    /* Update for UnitDelay: '<S29>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_iro = Robot_Reached_Destination;

    /* End of Outputs for SubSystem: '<S2>/Test' */
    break;
  }

  /* End of SwitchCase: '<S2>/Switch Case' */

  /* MinMax: '<S13>/Max' incorporates:
   *  Bias: '<S2>/Add Constant'
   *  Lookup_n-D: '<S13>/Range of Motion Protection Limit'
   *  Lookup_n-D: '<S13>/Range of Motion Protection Limit1'
   *  Merge: '<S21>/Merge13'
   */
  rtb_Abs1 = fmax(fmax(Code_Gen_Model_B.Elevator_Height_Desired_merge,
                       look1_binlcpw
                       (Code_Gen_Model_B.Coral_Arm_Angle_Desired_merge,
                        Code_Gen_Model_ConstP.pooled36,
                        Code_Gen_Model_ConstP.pooled35, 95U)), look1_binlcpw
                  (Code_Gen_Model_B.Coral_Arm_Angle_Measured,
                   Code_Gen_Model_ConstP.pooled36,
                   Code_Gen_Model_ConstP.pooled35, 95U));

  /* Switch: '<S13>/Switch3' incorporates:
   *  Abs: '<S13>/Abs1'
   *  Constant: '<S13>/Constant'
   *  Constant: '<S13>/Constant6'
   *  Constant: '<S92>/Constant'
   *  Logic: '<S13>/AND'
   *  RelationalOperator: '<S13>/Relational Operator'
   *  RelationalOperator: '<S92>/Compare'
   *  UnitDelay: '<S13>/Unit Delay'
   */
  if ((Code_Gen_Model_B.Elevator_Height_Desired_merge < rtb_Abs1) && (fabs
       (Code_Gen_Model_B.Elevator_Error) <= Elevator_Height_Error_Threshold)) {
    rtb_Minus_k_idx_0 = Elevator_Error_Increase;
  } else {
    rtb_Minus_k_idx_0 = 0.0;
  }

  /* Sum: '<S13>/Add' incorporates:
   *  Sum: '<S13>/Subtract'
   *  Switch: '<S13>/Switch3'
   */
  Code_Gen_Model_B.Elevator_Error = (rtb_Abs1 -
    Code_Gen_Model_B.Elevator_Height_Measured) + rtb_Minus_k_idx_0;

  /* Logic: '<S13>/Logical Operator3' incorporates:
   *  Constant: '<S93>/Constant'
   *  RelationalOperator: '<S93>/Compare'
   */
  FixPtRelationalOperator_p = (rtb_Compare_ai ||
    (Code_Gen_Model_B.Elevator_Height_Desired_merge == 0.0));

  /* Gain: '<S95>/Gain1' */
  Code_Gen_Model_B.Elevator_Proportional = Elevator_Gain_Prop *
    Code_Gen_Model_B.Elevator_Error;

  /* Logic: '<S13>/Logical Operator' incorporates:
   *  Logic: '<S13>/Logical Operator2'
   *  Logic: '<S13>/NOT'
   *  Logic: '<S13>/NOT2'
   *  Logic: '<S13>/OR'
   */
  Robot_Reached_Destination = (((!FixPtRelationalOperator_p) &&
    (Code_Gen_Model_B.Reefscape_Motors_Enable_merge)) && ((!Code_Gen_Model_B.Out)
    && (!Code_Gen_Model_B.Out_m)));

  /* Switch: '<S95>/Switch' */
  if (Robot_Reached_Destination) {
    /* Switch: '<S95>/Switch1' incorporates:
     *  UnitDelay: '<S104>/Delay Input1'
     *
     * Block description for '<S104>/Delay Input1':
     *
     *  Store in Global RAM
     */
    if (!Code_Gen_Model_DW.DelayInput1_DSTATE_be) {
      /* Switch: '<S95>/Switch' incorporates:
       *  Constant: '<S95>/Constant3'
       */
      Code_Gen_Model_B.Elevator_Integral = Elevator_Int_IC;
    } else {
      /* Sum: '<S95>/Sum2' incorporates:
       *  Gain: '<S95>/Gain2'
       *  UnitDelay: '<S95>/Unit Delay'
       */
      rtb_rx = (Elevator_Gain_Int * Code_Gen_Model_B.Elevator_Error) +
        Code_Gen_Model_B.Elevator_Integral;

      /* Sum: '<S95>/Subtract' incorporates:
       *  Constant: '<S95>/Constant'
       */
      rtb_Abs1 = Elevator_Total_UL - Code_Gen_Model_B.Elevator_Proportional;

      /* Switch: '<S105>/Switch2' incorporates:
       *  RelationalOperator: '<S105>/LowerRelop1'
       */
      if (!(rtb_rx > rtb_Abs1)) {
        /* Sum: '<S95>/Subtract1' incorporates:
         *  Constant: '<S95>/Constant1'
         */
        rtb_Abs1 = Elevator_Total_LL - Code_Gen_Model_B.Elevator_Proportional;

        /* Switch: '<S105>/Switch' incorporates:
         *  RelationalOperator: '<S105>/UpperRelop'
         */
        if (!(rtb_rx < rtb_Abs1)) {
          rtb_Abs1 = rtb_rx;
        }

        /* End of Switch: '<S105>/Switch' */
      }

      /* End of Switch: '<S105>/Switch2' */

      /* Saturate: '<S95>/Saturation1' */
      if (rtb_Abs1 > Elevator_Int_UL) {
        /* Switch: '<S95>/Switch' */
        Code_Gen_Model_B.Elevator_Integral = Elevator_Int_UL;
      } else if (rtb_Abs1 < Elevator_Int_LL) {
        /* Switch: '<S95>/Switch' */
        Code_Gen_Model_B.Elevator_Integral = Elevator_Int_LL;
      } else {
        /* Switch: '<S95>/Switch' */
        Code_Gen_Model_B.Elevator_Integral = rtb_Abs1;
      }

      /* End of Saturate: '<S95>/Saturation1' */
    }

    /* End of Switch: '<S95>/Switch1' */
  } else {
    /* Switch: '<S95>/Switch' incorporates:
     *  Constant: '<S95>/Constant2'
     */
    Code_Gen_Model_B.Elevator_Integral = 0.0;
  }

  /* End of Switch: '<S95>/Switch' */

  /* Switch: '<S13>/Switch2' incorporates:
   *  Constant: '<S13>/Constant5'
   */
  if (Code_Gen_Model_B.Reefscape_Motors_Enable_merge) {
    /* Switch: '<S13>/Switch4' */
    if (FixPtRelationalOperator_p) {
      /* Switch: '<S13>/Switch5' incorporates:
       *  Abs: '<S13>/Abs'
       *  Constant: '<S13>/Constant7'
       *  Constant: '<S13>/Constant8'
       *  Constant: '<S91>/Constant'
       *  RelationalOperator: '<S91>/Compare'
       */
      if (fabs(Code_Gen_Model_B.Elevator_Error) <= Elevator_Error_Bottom_Disable)
      {
        rtb_Abs1 = Elevator_Bottom_DC;
      } else {
        rtb_Abs1 = Elevator_Total_LL;
      }

      /* End of Switch: '<S13>/Switch5' */
    } else {
      /* Sum: '<S95>/Add1' */
      rtb_rx = Code_Gen_Model_B.Elevator_Proportional +
        Code_Gen_Model_B.Elevator_Integral;

      /* Saturate: '<S95>/Saturation2' */
      if (rtb_rx > Elevator_Total_UL) {
        rtb_rx = Elevator_Total_UL;
      } else if (rtb_rx < Elevator_Total_LL) {
        rtb_rx = Elevator_Total_LL;
      }

      /* End of Saturate: '<S95>/Saturation2' */

      /* Switch: '<S13>/Switch1' incorporates:
       *  Constant: '<S13>/Constant1'
       *  Constant: '<S13>/Constant2'
       */
      if (Code_Gen_Model_B.Out) {
        rtb_Abs1 = Elevator_Hold_at_Top_DC;
      } else {
        rtb_Abs1 = 1.0;
      }

      /* End of Switch: '<S13>/Switch1' */

      /* Switch: '<S96>/Switch2' incorporates:
       *  RelationalOperator: '<S96>/LowerRelop1'
       */
      if (!(rtb_rx > rtb_Abs1)) {
        /* Switch: '<S13>/Switch' incorporates:
         *  Constant: '<S13>/Constant3'
         *  Constant: '<S13>/Constant4'
         */
        if (Code_Gen_Model_B.Out_m) {
          rtb_Abs1 = 0.0;
        } else {
          rtb_Abs1 = -1.0;
        }

        /* End of Switch: '<S13>/Switch' */

        /* Switch: '<S96>/Switch' incorporates:
         *  RelationalOperator: '<S96>/UpperRelop'
         */
        if (!(rtb_rx < rtb_Abs1)) {
          rtb_Abs1 = rtb_rx;
        }

        /* End of Switch: '<S96>/Switch' */
      }

      /* End of Switch: '<S96>/Switch2' */
    }

    /* End of Switch: '<S13>/Switch4' */
  } else {
    rtb_Abs1 = 0.0;
  }

  /* End of Switch: '<S13>/Switch2' */

  /* Abs: '<S94>/Abs' incorporates:
   *  Sum: '<S94>/Subtract'
   */
  rtb_Switch2_kn = fabs(rtb_rx_f - rtb_Abs1);

  /* UnitDelay: '<S76>/Unit Delay' */
  rtb_rx = Code_Gen_Model_DW.UnitDelay_DSTATE_o;

  /* Logic: '<S9>/Logical Operator' incorporates:
   *  Constant: '<S72>/Constant'
   *  Constant: '<S73>/Constant'
   *  RelationalOperator: '<S72>/Compare'
   *  RelationalOperator: '<S73>/Compare'
   */
  rtb_Compare_ai = ((Code_Gen_Model_B.Elevator_Height_Measured <
                     Elevator_Height_Coral_Arm_Low_Thresh) &&
                    (Code_Gen_Model_B.Coral_Arm_Angle_Measured <
                     Coral_Arm_Angle_Neg_Threshold));

  /* Logic: '<S9>/Logical Operator4' incorporates:
   *  Constant: '<S74>/Constant'
   *  Constant: '<S75>/Constant'
   *  RelationalOperator: '<S74>/Compare'
   *  RelationalOperator: '<S75>/Compare'
   */
  FixPtRelationalOperator_e = ((Code_Gen_Model_B.Coral_Arm_Angle_Desired_merge >
    Coral_Arm_Angle_Pos_Threshold) && (Code_Gen_Model_B.Coral_Arm_Angle_Measured
    > Coral_Arm_Angle_Pos_Threshold));

  /* Lookup_n-D: '<S9>/1-D Lookup Table' incorporates:
   *  Bias: '<S2>/Add Constant'
   */
  rtb_Product2_a = look1_binlcpw(Code_Gen_Model_B.Coral_Arm_Angle_Measured,
    Code_Gen_Model_ConstP.uDLookupTable_bp01Data,
    Code_Gen_Model_ConstP.uDLookupTable_tableData_l, 2U);

  /* Switch: '<S78>/Switch2' incorporates:
   *  Constant: '<S9>/Constant'
   *  RelationalOperator: '<S78>/LowerRelop1'
   */
  if (Code_Gen_Model_B.Coral_Arm_Angle_Desired_merge > 90.0) {
    rtb_Subtract_oz = 90.0;
  } else {
    /* Lookup_n-D: '<S9>/Range of Motion Protection Limit' incorporates:
     *  Switch: '<S14>/Switch'
     */
    rtb_Subtract_oz = look1_binlcpw(Code_Gen_Model_B.Elevator_Height_Measured,
      Code_Gen_Model_ConstP.RangeofMotionProtectionLimit_bp,
      Code_Gen_Model_ConstP.RangeofMotionProtectionLimit_ta, 74U);

    /* Switch: '<S78>/Switch' incorporates:
     *  RelationalOperator: '<S78>/UpperRelop'
     */
    if (!(Code_Gen_Model_B.Coral_Arm_Angle_Desired_merge < rtb_Subtract_oz)) {
      rtb_Subtract_oz = Code_Gen_Model_B.Coral_Arm_Angle_Desired_merge;
    }

    /* End of Switch: '<S78>/Switch' */
  }

  /* End of Switch: '<S78>/Switch2' */

  /* Sum: '<S9>/Subtract' */
  Code_Gen_Model_B.Coral_ArmAngle_Error = rtb_Subtract_oz -
    Code_Gen_Model_B.Coral_Arm_Angle_Measured;

  /* Gain: '<S77>/Gain1' */
  Code_Gen_Model_B.Elevator_Proportional_l = Coral_Arm_Gain_Prop *
    Code_Gen_Model_B.Coral_ArmAngle_Error;

  /* Logic: '<S9>/Logical Operator2' incorporates:
   *  Logic: '<S9>/Logical Operator1'
   *  Logic: '<S9>/Logical Operator3'
   */
  FixPtRelationalOperator_p = (((!FixPtRelationalOperator_e) && (!rtb_Compare_ai))
    && (Code_Gen_Model_B.Reefscape_Motors_Enable_merge));

  /* Lookup_n-D: '<S9>/1-D Lookup Table1' incorporates:
   *  Bias: '<S2>/Add Constant'
   */
  rtb_Subtract_oz = look1_binlcpw(Code_Gen_Model_B.Coral_Arm_Angle_Measured,
    Code_Gen_Model_ConstP.uDLookupTable1_bp01Data,
    Code_Gen_Model_ConstP.uDLookupTable1_tableData, 1U);

  /* Switch: '<S77>/Switch' */
  if (FixPtRelationalOperator_p) {
    /* Switch: '<S77>/Switch1' incorporates:
     *  UnitDelay: '<S86>/Delay Input1'
     *
     * Block description for '<S86>/Delay Input1':
     *
     *  Store in Global RAM
     */
    if (!Code_Gen_Model_DW.DelayInput1_DSTATE_op) {
      /* Switch: '<S77>/Switch' incorporates:
       *  Constant: '<S77>/Constant3'
       */
      Code_Gen_Model_B.Elevator_Integral_o = Coral_Arm_Int_IC;
    } else {
      /* Sum: '<S77>/Sum2' incorporates:
       *  Gain: '<S77>/Gain2'
       *  UnitDelay: '<S77>/Unit Delay'
       */
      rtb_Rotationmatrixfromlocalto_1 = (Coral_Arm_Gain_Int *
        Code_Gen_Model_B.Coral_ArmAngle_Error) +
        Code_Gen_Model_B.Elevator_Integral_o;

      /* Sum: '<S77>/Subtract' */
      rtb_Subtract_e = rtb_Product2_a - Code_Gen_Model_B.Elevator_Proportional_l;

      /* Switch: '<S87>/Switch2' incorporates:
       *  RelationalOperator: '<S87>/LowerRelop1'
       */
      if (!(rtb_Rotationmatrixfromlocalto_1 > rtb_Subtract_e)) {
        /* Sum: '<S77>/Subtract1' */
        rtb_Subtract_e = rtb_Subtract_oz -
          Code_Gen_Model_B.Elevator_Proportional_l;

        /* Switch: '<S87>/Switch' incorporates:
         *  RelationalOperator: '<S87>/UpperRelop'
         */
        if (!(rtb_Rotationmatrixfromlocalto_1 < rtb_Subtract_e)) {
          rtb_Subtract_e = rtb_Rotationmatrixfromlocalto_1;
        }

        /* End of Switch: '<S87>/Switch' */
      }

      /* End of Switch: '<S87>/Switch2' */

      /* Saturate: '<S77>/Saturation1' */
      if (rtb_Subtract_e > Coral_Arm_Int_UL) {
        /* Switch: '<S77>/Switch' */
        Code_Gen_Model_B.Elevator_Integral_o = Coral_Arm_Int_UL;
      } else if (rtb_Subtract_e < Coral_Arm_Int_LL) {
        /* Switch: '<S77>/Switch' */
        Code_Gen_Model_B.Elevator_Integral_o = Coral_Arm_Int_LL;
      } else {
        /* Switch: '<S77>/Switch' */
        Code_Gen_Model_B.Elevator_Integral_o = rtb_Subtract_e;
      }

      /* End of Saturate: '<S77>/Saturation1' */
    }

    /* End of Switch: '<S77>/Switch1' */
  } else {
    /* Switch: '<S77>/Switch' incorporates:
     *  Constant: '<S77>/Constant2'
     */
    Code_Gen_Model_B.Elevator_Integral_o = 0.0;
  }

  /* End of Switch: '<S77>/Switch' */

  /* Switch: '<S9>/Switch2' incorporates:
   *  Constant: '<S9>/Constant5'
   */
  if (Code_Gen_Model_B.Reefscape_Motors_Enable_merge) {
    /* Switch: '<S9>/Switch1' incorporates:
     *  Constant: '<S9>/Constant2'
     *  Switch: '<S9>/Switch3'
     */
    if (rtb_Compare_ai) {
      rtb_Subtract_oz = Coral_Arm_Neg90_DC;
    } else if (FixPtRelationalOperator_e) {
      /* Switch: '<S9>/Switch3' incorporates:
       *  Constant: '<S9>/Constant1'
       */
      rtb_Subtract_oz = Coral_Arm_Pos90_DC;
    } else {
      /* Sum: '<S77>/Add1' incorporates:
       *  Switch: '<S9>/Switch3'
       */
      rtb_Rotationmatrixfromlocalto_1 = Code_Gen_Model_B.Elevator_Proportional_l
        + Code_Gen_Model_B.Elevator_Integral_o;

      /* Switch: '<S88>/Switch2' incorporates:
       *  RelationalOperator: '<S88>/LowerRelop1'
       *  RelationalOperator: '<S88>/UpperRelop'
       *  Switch: '<S88>/Switch'
       *  Switch: '<S9>/Switch3'
       */
      if (rtb_Rotationmatrixfromlocalto_1 > rtb_Product2_a) {
        rtb_Subtract_oz = rtb_Product2_a;
      } else if (!(rtb_Rotationmatrixfromlocalto_1 < rtb_Subtract_oz)) {
        rtb_Subtract_oz = rtb_Rotationmatrixfromlocalto_1;
      }

      /* End of Switch: '<S88>/Switch2' */
    }

    /* End of Switch: '<S9>/Switch1' */
  } else {
    rtb_Subtract_oz = 0.0;
  }

  /* End of Switch: '<S9>/Switch2' */

  /* Abs: '<S76>/Abs' incorporates:
   *  Sum: '<S76>/Subtract'
   */
  rtb_Product2_a = fabs(rtb_rx - rtb_Subtract_oz);

  /* Reshape: '<S134>/Reshapey' incorporates:
   *  Inport: '<Root>/Limelight_Est_Pose_X'
   *  Inport: '<Root>/Limelight_Est_Pose_Y'
   *  S-Function (sfix_udelay): '<S19>/Tapped Delay'
   *  S-Function (sfix_udelay): '<S19>/Tapped Delay1'
   *  Sum: '<S19>/Add'
   *  Sum: '<S19>/Add1'
   */
  rtb_Reshapey[0] = (Code_Gen_Model_U.Limelight_Est_Pose_X +
                     Code_Gen_Model_DW.TappedDelay_X[0]) +
    Code_Gen_Model_DW.TappedDelay_X[1];
  rtb_Reshapey[1] = (Code_Gen_Model_U.Limelight_Est_Pose_Y +
                     Code_Gen_Model_DW.TappedDelay1_X[0]) +
    Code_Gen_Model_DW.TappedDelay1_X[1];

  /* Outputs for Enabled SubSystem: '<S161>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S187>/Enable'
   */
  /* Outputs for Enabled SubSystem: '<S154>/MeasurementUpdate' incorporates:
   *  EnablePort: '<S185>/Enable'
   */
  /* Logic: '<S19>/AND' incorporates:
   *  Constant: '<S19>/Constant'
   *  Constant: '<S19>/Constant1'
   *  Inport: '<Root>/Num_Tags_Detected'
   *  RelationalOperator: '<S19>/Relational Operator'
   */
  if ((Code_Gen_Model_U.Num_Tags_Detected > 0.0) && (KF_Enable != 0.0)) {
    Code_Gen_Model_DW.MeasurementUpdate_MODE = true;

    /* Product: '<S185>/C[k]*xhat[k|k-1]' incorporates:
     *  Constant: '<S134>/C'
     *  Delay: '<S134>/MemoryX'
     */
    rtb_Minus_n[0] = Code_Gen_Model_DW.MemoryX_DSTATE[0];
    rtb_Minus_n[1] = 0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[0];
    rtb_Minus_n[0] += 0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[1];
    rtb_Minus_n[1] += Code_Gen_Model_DW.MemoryX_DSTATE[1];

    /* Sum: '<S185>/Sum' incorporates:
     *  Constant: '<S134>/D'
     *  Product: '<S185>/C[k]*xhat[k|k-1]'
     *  Product: '<S185>/D[k]*u[k]'
     *  Sum: '<S185>/Add1'
     */
    rtb_Sum1_j = (0.0 * Code_Gen_Model_B.Product6[0]) + (0.0 *
      Code_Gen_Model_B.Product6[1]);
    rtb_Rotationmatrixfromlocalto_1 = rtb_Reshapey[0] - (rtb_Sum1_j +
      rtb_Minus_n[0]);
    rtb_Sum1_j = rtb_Reshapey[1] - (rtb_Sum1_j + rtb_Minus_n[1]);

    /* Product: '<S185>/Product3' incorporates:
     *  Constant: '<S135>/KalmanGainL'
     */
    Code_Gen_Model_B.Product3[0] = 0.0951249219725039 *
      rtb_Rotationmatrixfromlocalto_1;
    Code_Gen_Model_B.Product3[1] = 1.304610855474728E-16 *
      rtb_Rotationmatrixfromlocalto_1;
    Code_Gen_Model_B.Product3[0] += -2.0601714451538746E-17 * rtb_Sum1_j;
    Code_Gen_Model_B.Product3[1] += 0.095124921972504 * rtb_Sum1_j;
    Code_Gen_Model_DW.EnabledSubsystem_MODE = true;

    /* Sum: '<S187>/Add1' incorporates:
     *  Product: '<S187>/Product'
     */
    rtb_Rotationmatrixfromlocalto_1 = rtb_Reshapey[0] - rtb_Minus_n[0];
    rtb_Sum1_j = rtb_Reshapey[1] - rtb_Minus_n[1];

    /* Product: '<S187>/Product2' incorporates:
     *  Constant: '<S135>/KalmanGainM'
     */
    Code_Gen_Model_B.Product2[0] = 0.09512492197250387 *
      rtb_Rotationmatrixfromlocalto_1;
    Code_Gen_Model_B.Product2[1] = 5.9896845167210271E-17 *
      rtb_Rotationmatrixfromlocalto_1;
    Code_Gen_Model_B.Product2[0] += 5.9896845167210271E-17 * rtb_Sum1_j;
    Code_Gen_Model_B.Product2[1] += 0.095124921972503981 * rtb_Sum1_j;
  } else {
    if (Code_Gen_Model_DW.MeasurementUpdate_MODE) {
      /* Disable for Product: '<S185>/Product3' incorporates:
       *  Outport: '<S185>/L*(y[k]-yhat[k|k-1])'
       */
      Code_Gen_Model_B.Product3[0] = 0.0;
      Code_Gen_Model_B.Product3[1] = 0.0;
      Code_Gen_Model_DW.MeasurementUpdate_MODE = false;
    }

    if (Code_Gen_Model_DW.EnabledSubsystem_MODE) {
      /* Disable for Product: '<S187>/Product2' incorporates:
       *  Outport: '<S187>/deltax'
       */
      Code_Gen_Model_B.Product2[0] = 0.0;
      Code_Gen_Model_B.Product2[1] = 0.0;
      Code_Gen_Model_DW.EnabledSubsystem_MODE = false;
    }
  }

  /* End of Logic: '<S19>/AND' */
  /* End of Outputs for SubSystem: '<S154>/MeasurementUpdate' */
  /* End of Outputs for SubSystem: '<S161>/Enabled Subsystem' */

  /* Sum: '<S161>/Add' incorporates:
   *  Delay: '<S134>/MemoryX'
   */
  rtb_Reshapey[0] = Code_Gen_Model_B.Product2[0] +
    Code_Gen_Model_DW.MemoryX_DSTATE[0];
  rtb_Reshapey[1] = Code_Gen_Model_B.Product2[1] +
    Code_Gen_Model_DW.MemoryX_DSTATE[1];

  /* DiscreteIntegrator: '<S22>/Accumulator2' incorporates:
   *  Constant: '<S22>/Constant'
   *  Constant: '<S2>/Constant'
   */
  if ((Odometry_Reset_IC > 0.0) &&
      (Code_Gen_Model_DW.Accumulator2_PrevResetState <= 0)) {
    Code_Gen_Model_DW.Accumulator2_DSTATE = Odometry_IC_X;
  }

  /* DiscreteIntegrator: '<S22>/Accumulator2' */
  Code_Gen_Model_B.Odom_Position_X = Code_Gen_Model_DW.Accumulator2_DSTATE;

  /* Switch: '<S19>/Switch' incorporates:
   *  Constant: '<S19>/Constant2'
   */
  if (KF_Enable != 0.0) {
    /* Switch: '<S19>/Switch' */
    Code_Gen_Model_B.KF_Position_X = rtb_Reshapey[0];
  } else {
    /* Switch: '<S19>/Switch' */
    Code_Gen_Model_B.KF_Position_X = Code_Gen_Model_B.Odom_Position_X;
  }

  /* End of Switch: '<S19>/Switch' */

  /* DiscreteIntegrator: '<S22>/Accumulator' incorporates:
   *  Constant: '<S22>/Constant'
   *  Constant: '<S2>/Constant1'
   */
  if ((Odometry_Reset_IC > 0.0) && (Code_Gen_Model_DW.Accumulator_PrevResetState
       <= 0)) {
    Code_Gen_Model_DW.Accumulator_DSTATE = Odometry_IC_Y;
  }

  /* DiscreteIntegrator: '<S22>/Accumulator' */
  Code_Gen_Model_B.Odom_Position_Y = Code_Gen_Model_DW.Accumulator_DSTATE;

  /* Switch: '<S19>/Switch1' incorporates:
   *  Constant: '<S19>/Constant2'
   */
  if (KF_Enable != 0.0) {
    /* Switch: '<S19>/Switch1' */
    Code_Gen_Model_B.KF_Position_Y = rtb_Reshapey[1];
  } else {
    /* Switch: '<S19>/Switch1' */
    Code_Gen_Model_B.KF_Position_Y = Code_Gen_Model_B.Odom_Position_Y;
  }

  /* End of Switch: '<S19>/Switch1' */

  /* If: '<S25>/If' incorporates:
   *  Constant: '<S264>/Constant'
   *  Logic: '<S264>/AND'
   *  MATLAB Function: '<S214>/Find closest index to curve'
   *  Product: '<S264>/Product'
   *  RelationalOperator: '<S264>/Relational Operator'
   *  RelationalOperator: '<S264>/Relational Operator1'
   *  Selector: '<S264>/Selector'
   *  Selector: '<S264>/Selector1'
   *  Selector: '<S265>/Selector'
   *  Sum: '<S264>/Add'
   */
  rtPrevAction = Code_Gen_Model_DW.If_ActiveSubsystem;
  rtAction = (int8_T)(!Code_Gen_Model_B.Spline_Enable);
  Code_Gen_Model_DW.If_ActiveSubsystem = rtAction;
  if ((rtPrevAction != rtAction) && (rtPrevAction == 0)) {
    /* Disable for If: '<S217>/If' */
    if (Code_Gen_Model_DW.If_ActiveSubsystem_h == 0) {
      /* Disable for If: '<S220>/If' */
      if (Code_Gen_Model_DW.If_ActiveSubsystem_o == 0) {
        /* Disable for If: '<S222>/If' */
        Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;
      }

      Code_Gen_Model_DW.If_ActiveSubsystem_o = -1;
    }

    Code_Gen_Model_DW.If_ActiveSubsystem_h = -1;

    /* End of Disable for If: '<S217>/If' */
  }

  if (rtAction == 0) {
    if (rtPrevAction != 0) {
      /* InitializeConditions for IfAction SubSystem: '<S25>/Spline Path Following Enabled' incorporates:
       *  ActionPort: '<S212>/Action Port'
       */
      /* InitializeConditions for If: '<S25>/If' incorporates:
       *  UnitDelay: '<S212>/Unit Delay'
       *  UnitDelay: '<S213>/Unit Delay'
       *  UnitDelay: '<S215>/Unit Delay'
       *  UnitDelay: '<S215>/Unit Delay1'
       *  UnitDelay: '<S265>/Unit Delay'
       *  UnitDelay: '<S265>/Unit Delay1'
       */
      Code_Gen_Model_DW.UnitDelay_DSTATE_gh = 2.0;
      Code_Gen_Model_DW.UnitDelay_DSTATE_hn = 0.0;
      Code_Gen_Model_DW.UnitDelay1_DSTATE_f4 = 0.0;
      Code_Gen_Model_DW.UnitDelay_DSTATE_g4 = 0.0;
      Code_Gen_Model_DW.UnitDelay_DSTATE_le = 0.0;
      Code_Gen_Model_DW.UnitDelay1_DSTATE_kc = 0.0;

      /* End of InitializeConditions for SubSystem: '<S25>/Spline Path Following Enabled' */
    }

    /* Outputs for IfAction SubSystem: '<S25>/Spline Path Following Enabled' incorporates:
     *  ActionPort: '<S212>/Action Port'
     */
    /* Selector: '<S213>/Selector1' incorporates:
     *  Merge: '<S21>/Merge8'
     */
    for (i = 0; i < 10; i++) {
      rtb_Ref_Poses[i] = rtb_Spline_Ref_Poses[i];
      rtb_Ref_Poses[i + 10] = rtb_Spline_Ref_Poses[i + 10];
    }

    /* End of Selector: '<S213>/Selector1' */

    /* Lookup_n-D: '<S212>/Capture Radius' incorporates:
     *  UnitDelay: '<S212>/Unit Delay'
     */
    rtb_Rotationmatrixfromlocalto_1 = look1_binlcpw
      (Code_Gen_Model_DW.UnitDelay_DSTATE_hn, Code_Gen_Model_ConstP.pooled10,
       Code_Gen_Model_ConstP.CaptureRadius_tableData, 3U);

    /* SignalConversion generated from: '<S213>/Matrix Concatenate2' */
    rtb_Reshapey[0] = Code_Gen_Model_B.KF_Position_X;

    /* SignalConversion generated from: '<S213>/Matrix Concatenate2' */
    rtb_Reshapey[1] = Code_Gen_Model_B.KF_Position_Y;

    /* If: '<S217>/If' incorporates:
     *  RelationalOperator: '<S217>/ '
     *  UnitDelay: '<S213>/Unit Delay'
     */
    rtPrevAction = Code_Gen_Model_DW.If_ActiveSubsystem_h;
    rtAction = (int8_T)(!(Code_Gen_Model_DW.UnitDelay_DSTATE_gh <=
                          Code_Gen_Model_B.Spline_Num_Poses));
    Code_Gen_Model_DW.If_ActiveSubsystem_h = rtAction;
    if ((rtPrevAction != rtAction) && (rtPrevAction == 0)) {
      /* Disable for If: '<S220>/If' */
      if (Code_Gen_Model_DW.If_ActiveSubsystem_o == 0) {
        /* Disable for If: '<S222>/If' */
        Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;
      }

      Code_Gen_Model_DW.If_ActiveSubsystem_o = -1;
    }

    if (rtAction == 0) {
      /* InitializeConditions for IfAction SubSystem: '<S217>/Robot_Index_Is_Valid' incorporates:
       *  ActionPort: '<S220>/Action Port'
       */
      /* InitializeConditions for If: '<S217>/If' incorporates:
       *  UnitDelay: '<S220>/Unit Delay'
       */
      Code_Gen_Model_DW.UnitDelay_DSTATE_e4 = ((rtPrevAction == 0) &&
        (Code_Gen_Model_DW.UnitDelay_DSTATE_e4));

      /* End of InitializeConditions for SubSystem: '<S217>/Robot_Index_Is_Valid' */

      /* Outputs for IfAction SubSystem: '<S217>/Robot_Index_Is_Valid' incorporates:
       *  ActionPort: '<S220>/Action Port'
       */
      /* Outputs for IfAction SubSystem: '<S220>/Increment_If_Rectangle_Check' incorporates:
       *  ActionPort: '<S223>/Action Port'
       */
      /* If: '<S220>/If' incorporates:
       *  Selector: '<S213>/Selector1'
       *  Selector: '<S220>/Selector'
       *  Selector: '<S223>/Selector'
       */
      rtb_Rotationmatrixfromlocalto_2 = rtb_Ref_Poses[((int32_T)
        Code_Gen_Model_DW.UnitDelay_DSTATE_gh) - 1];

      /* End of Outputs for SubSystem: '<S220>/Increment_If_Rectangle_Check' */

      /* Sum: '<S220>/Minus' incorporates:
       *  Concatenate: '<S213>/Matrix Concatenate2'
       *  Selector: '<S220>/Selector'
       */
      rtb_Minus_n[0] = rtb_Reshapey[0] - rtb_Rotationmatrixfromlocalto_2;

      /* Outputs for IfAction SubSystem: '<S220>/Increment_If_Rectangle_Check' incorporates:
       *  ActionPort: '<S223>/Action Port'
       */
      /* If: '<S220>/If' incorporates:
       *  Selector: '<S213>/Selector1'
       *  Selector: '<S220>/Selector'
       *  Selector: '<S223>/Selector'
       *  Sum: '<S220>/Minus'
       */
      rtb_DeadZone = rtb_Ref_Poses[((int32_T)
        Code_Gen_Model_DW.UnitDelay_DSTATE_gh) + 9];

      /* End of Outputs for SubSystem: '<S220>/Increment_If_Rectangle_Check' */

      /* Sum: '<S220>/Minus' incorporates:
       *  Concatenate: '<S213>/Matrix Concatenate2'
       *  Selector: '<S220>/Selector'
       */
      rtb_Minus_n[1] = rtb_Reshapey[1] - rtb_DeadZone;

      /* Math: '<S220>/Hypot' */
      rtb_Subtract_e = rt_hypotd_snf(rtb_Minus_n[0], rtb_Minus_n[1]);

      /* RelationalOperator: '<S220>/Equal' */
      rtb_Is_Absolute_Steering = (Code_Gen_Model_B.Spline_Num_Poses ==
        Code_Gen_Model_DW.UnitDelay_DSTATE_gh);

      /* Switch: '<S220>/Switch' incorporates:
       *  Logic: '<S220>/AND'
       *  Logic: '<S220>/OR'
       *  RelationalOperator: '<S220>/Relational Operator'
       *  UnitDelay: '<S220>/Unit Delay'
       */
      rtb_Is_Absolute_Translation_g = ((Code_Gen_Model_DW.UnitDelay_DSTATE_e4) ||
        ((rtb_Subtract_e <= rtb_Rotationmatrixfromlocalto_1) &&
         rtb_Is_Absolute_Steering));

      /* If: '<S220>/If' */
      rtPrevAction = Code_Gen_Model_DW.If_ActiveSubsystem_o;
      if (!rtb_Is_Absolute_Translation_g) {
        if (!rtb_Is_Absolute_Steering) {
          rtAction = 1;
        } else {
          rtAction = 2;
        }
      }

      Code_Gen_Model_DW.If_ActiveSubsystem_o = rtAction;
      if ((rtPrevAction != rtAction) && (rtPrevAction == 0)) {
        /* Disable for If: '<S222>/If' */
        Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;
      }

      switch (rtAction) {
       case 0:
        /* Outputs for IfAction SubSystem: '<S220>/Circle_Check_Valid' incorporates:
         *  ActionPort: '<S222>/Action Port'
         */
        /* If: '<S222>/If' incorporates:
         *  RelationalOperator: '<S222>/Equal'
         */
        rtPrevAction = Code_Gen_Model_DW.If_ActiveSubsystem_d;
        rtAction = (int8_T)(!(Code_Gen_Model_DW.UnitDelay_DSTATE_gh ==
                              Code_Gen_Model_B.Spline_Num_Poses));
        Code_Gen_Model_DW.If_ActiveSubsystem_d = rtAction;
        if (rtAction == 0) {
          /* InitializeConditions for IfAction SubSystem: '<S222>/Is_Last_Point' incorporates:
           *  ActionPort: '<S225>/Action Port'
           */
          /* InitializeConditions for If: '<S222>/If' incorporates:
           *  UnitDelay: '<S225>/Unit Delay'
           */
          Code_Gen_Model_DW.UnitDelay_DSTATE_n = ((rtPrevAction == 0) &&
            (Code_Gen_Model_DW.UnitDelay_DSTATE_n));

          /* End of InitializeConditions for SubSystem: '<S222>/Is_Last_Point' */

          /* Outputs for IfAction SubSystem: '<S222>/Is_Last_Point' incorporates:
           *  ActionPort: '<S225>/Action Port'
           */
          /* Switch: '<S225>/Switch' incorporates:
           *  Constant: '<S227>/Constant'
           *  Logic: '<S225>/OR'
           *  RelationalOperator: '<S227>/Compare'
           *  UnitDelay: '<S225>/Unit Delay'
           */
          FixPtRelationalOperator_e = ((Code_Gen_Model_DW.UnitDelay_DSTATE_n) ||
            (rtb_Subtract_e <= Spline_Stop_Radius));

          /* If: '<S225>/If' */
          if (FixPtRelationalOperator_e) {
            /* Outputs for IfAction SubSystem: '<S225>/Robot_Is_At_Destination' incorporates:
             *  ActionPort: '<S228>/Action Port'
             */
            /* Merge: '<S217>/Merge2' incorporates:
             *  Constant: '<S228>/Constant'
             *  SignalConversion generated from: '<S228>/Robot_Reached_Destination'
             */
            rtb_Is_Absolute_Steering = true;

            /* SignalConversion generated from: '<S228>/Make_Staight_Line_To_End' incorporates:
             *  Constant: '<S228>/Constant1'
             */
            rtb_Compare_ai = false;

            /* End of Outputs for SubSystem: '<S225>/Robot_Is_At_Destination' */
          } else {
            /* Outputs for IfAction SubSystem: '<S225>/Straight_Line_Path_To_End' incorporates:
             *  ActionPort: '<S229>/Action Port'
             */
            /* Merge: '<S217>/Merge2' incorporates:
             *  Constant: '<S229>/Constant'
             *  SignalConversion generated from: '<S229>/Robot_Reached_Destination'
             */
            rtb_Is_Absolute_Steering = false;

            /* SignalConversion generated from: '<S229>/Make_Staight_Line_To_End' incorporates:
             *  Constant: '<S229>/Constant1'
             */
            rtb_Compare_ai = true;

            /* End of Outputs for SubSystem: '<S225>/Straight_Line_Path_To_End' */
          }

          /* End of If: '<S225>/If' */

          /* Merge: '<S217>/Merge4' incorporates:
           *  SignalConversion: '<S225>/Signal Copy'
           */
          Code_Gen_Model_B.Spline_Follow_Index =
            Code_Gen_Model_DW.UnitDelay_DSTATE_gh;

          /* Update for UnitDelay: '<S225>/Unit Delay' */
          Code_Gen_Model_DW.UnitDelay_DSTATE_n = FixPtRelationalOperator_e;

          /* End of Outputs for SubSystem: '<S222>/Is_Last_Point' */
        } else {
          /* Outputs for IfAction SubSystem: '<S222>/Increment_Search' incorporates:
           *  ActionPort: '<S224>/Action Port'
           */
          /* Merge: '<S217>/Merge2' incorporates:
           *  Constant: '<S224>/Constant'
           *  SignalConversion generated from: '<S224>/Robot_Reached_Destination'
           */
          rtb_Is_Absolute_Steering = false;

          /* SignalConversion generated from: '<S224>/Make_Staight_Line_To_End' incorporates:
           *  Constant: '<S224>/Constant1'
           */
          rtb_Compare_ai = false;

          /* Merge: '<S217>/Merge4' incorporates:
           *  Constant: '<S226>/FixPt Constant'
           *  SignalConversion: '<S224>/Signal Copy'
           *  Sum: '<S226>/FixPt Sum1'
           */
          Code_Gen_Model_B.Spline_Follow_Index =
            Code_Gen_Model_DW.UnitDelay_DSTATE_gh + 1.0;

          /* End of Outputs for SubSystem: '<S222>/Increment_Search' */
        }

        /* End of If: '<S222>/If' */
        /* End of Outputs for SubSystem: '<S220>/Circle_Check_Valid' */
        break;

       case 1:
        /* Outputs for IfAction SubSystem: '<S220>/Increment_If_Rectangle_Check' incorporates:
         *  ActionPort: '<S223>/Action Port'
         */
        /* Sum: '<S230>/FixPt Sum1' incorporates:
         *  Constant: '<S230>/FixPt Constant'
         */
        rtb_Subtract_e = Code_Gen_Model_DW.UnitDelay_DSTATE_gh + 1.0;

        /* Selector: '<S223>/Selector1' incorporates:
         *  Selector: '<S213>/Selector1'
         */
        rtb_Rotationmatrixfromlocalto_3 = rtb_Ref_Poses[((int32_T)rtb_Subtract_e)
          - 1];

        /* Sum: '<S231>/Subtract' incorporates:
         *  Selector: '<S223>/Selector1'
         *  Sum: '<S231>/Minus1'
         */
        rtb_Minus_n[0] = rtb_Rotationmatrixfromlocalto_3 -
          rtb_Rotationmatrixfromlocalto_2;

        /* Selector: '<S223>/Selector1' incorporates:
         *  Selector: '<S213>/Selector1'
         */
        rtb_Subtract_e = rtb_Ref_Poses[((int32_T)rtb_Subtract_e) + 9];

        /* Sum: '<S231>/Subtract' incorporates:
         *  Selector: '<S223>/Selector1'
         *  Sum: '<S231>/Minus1'
         */
        rtb_Minus_n[1] = rtb_Subtract_e - rtb_DeadZone;

        /* Math: '<S231>/Hypot' */
        rtb_Sum1_j = rt_hypotd_snf(rtb_Minus_n[0], rtb_Minus_n[1]);

        /* UnaryMinus: '<S231>/Unary Minus' */
        rtb_Minus_k_idx_0 = rtb_Minus_n[0];

        /* Product: '<S231>/Product' incorporates:
         *  Product: '<S231>/Divide'
         *  UnaryMinus: '<S231>/Unary Minus'
         */
        rtb_Minus_n[0] = (rtb_Minus_n[1] / rtb_Sum1_j) *
          rtb_Rotationmatrixfromlocalto_1;
        rtb_Minus_n[1] = ((-rtb_Minus_k_idx_0) / rtb_Sum1_j) *
          rtb_Rotationmatrixfromlocalto_1;

        /* Sum: '<S231>/Add1' incorporates:
         *  Sum: '<S231>/Add2'
         *  Sum: '<S231>/Minus'
         */
        rtb_Minus_k_idx_0 = rtb_Rotationmatrixfromlocalto_3 - rtb_Minus_n[0];

        /* Sum: '<S231>/Minus4' incorporates:
         *  Sum: '<S231>/Add2'
         *  Sum: '<S231>/Minus'
         */
        rtb_Rotationmatrixfromlocalto_3 = (rtb_Rotationmatrixfromlocalto_3 +
          rtb_Minus_n[0]) - rtb_Minus_k_idx_0;

        /* Sum: '<S231>/Minus5' incorporates:
         *  Concatenate: '<S213>/Matrix Concatenate2'
         *  Sum: '<S231>/Minus'
         */
        rtb_Minus_k_idx_1 = rtb_Reshapey[0] - rtb_Minus_k_idx_0;

        /* Sum: '<S231>/Add' incorporates:
         *  Sum: '<S231>/Add2'
         *  Sum: '<S231>/Minus1'
         */
        rtb_Rotationmatrixfromlocalto_0 = rtb_Rotationmatrixfromlocalto_2 -
          rtb_Minus_n[0];

        /* Sum: '<S231>/Minus' incorporates:
         *  Sum: '<S231>/Minus1'
         */
        rtb_Minus_k_idx_0 -= rtb_Rotationmatrixfromlocalto_0;

        /* DotProduct: '<S231>/Dot Product' incorporates:
         *  Concatenate: '<S213>/Matrix Concatenate2'
         *  Sum: '<S231>/Minus'
         *  Sum: '<S231>/Minus1'
         *  Sum: '<S231>/Minus5'
         */
        rtb_Sum1_j = (rtb_Reshapey[0] - rtb_Rotationmatrixfromlocalto_0) *
          rtb_Minus_k_idx_0;

        /* DotProduct: '<S231>/Dot Product1' incorporates:
         *  Sum: '<S231>/Minus'
         */
        rtb_Rotationmatrixfromlocalto_2 = rtb_Minus_k_idx_0 * rtb_Minus_k_idx_0;

        /* DotProduct: '<S231>/Dot Product2' incorporates:
         *  Sum: '<S231>/Minus4'
         *  Sum: '<S231>/Minus5'
         */
        rtb_Hypot = rtb_Rotationmatrixfromlocalto_3 * rtb_Minus_k_idx_1;

        /* DotProduct: '<S231>/Dot Product3' incorporates:
         *  Sum: '<S231>/Minus4'
         */
        rtb_MatrixConcatenate_b_idx_0 = rtb_Rotationmatrixfromlocalto_3 *
          rtb_Rotationmatrixfromlocalto_3;

        /* Sum: '<S231>/Add1' incorporates:
         *  Sum: '<S231>/Add2'
         *  Sum: '<S231>/Minus'
         */
        rtb_Minus_k_idx_0 = rtb_Subtract_e - rtb_Minus_n[1];

        /* Sum: '<S231>/Minus4' incorporates:
         *  Sum: '<S231>/Add2'
         *  Sum: '<S231>/Minus'
         */
        rtb_Rotationmatrixfromlocalto_3 = (rtb_Subtract_e + rtb_Minus_n[1]) -
          rtb_Minus_k_idx_0;

        /* Sum: '<S231>/Minus5' incorporates:
         *  Concatenate: '<S213>/Matrix Concatenate2'
         *  Sum: '<S231>/Minus'
         */
        rtb_Minus_k_idx_1 = rtb_Reshapey[1] - rtb_Minus_k_idx_0;

        /* Sum: '<S231>/Add' incorporates:
         *  Sum: '<S231>/Add2'
         *  Sum: '<S231>/Minus1'
         */
        rtb_Rotationmatrixfromlocalto_0 = rtb_DeadZone - rtb_Minus_n[1];

        /* Sum: '<S231>/Minus' incorporates:
         *  Sum: '<S231>/Minus1'
         */
        rtb_Minus_k_idx_0 -= rtb_Rotationmatrixfromlocalto_0;

        /* DotProduct: '<S231>/Dot Product' incorporates:
         *  Concatenate: '<S213>/Matrix Concatenate2'
         *  Sum: '<S231>/Minus'
         *  Sum: '<S231>/Minus1'
         *  Sum: '<S231>/Minus5'
         */
        rtb_Sum1_j += (rtb_Reshapey[1] - rtb_Rotationmatrixfromlocalto_0) *
          rtb_Minus_k_idx_0;

        /* RelationalOperator: '<S232>/Compare' incorporates:
         *  Constant: '<S232>/Constant'
         */
        rtb_Is_Absolute_Steering = (rtb_Sum1_j >= 0.0);

        /* RelationalOperator: '<S231>/LessThanOrEqual' incorporates:
         *  DotProduct: '<S231>/Dot Product1'
         *  Sum: '<S231>/Minus'
         */
        rtb_Compare_ai = (rtb_Sum1_j <= ((rtb_Minus_k_idx_0 * rtb_Minus_k_idx_0)
          + rtb_Rotationmatrixfromlocalto_2));

        /* DotProduct: '<S231>/Dot Product2' incorporates:
         *  Sum: '<S231>/Minus4'
         *  Sum: '<S231>/Minus5'
         */
        rtb_Sum1_j = (rtb_Rotationmatrixfromlocalto_3 * rtb_Minus_k_idx_1) +
          rtb_Hypot;

        /* Merge: '<S217>/Merge4' incorporates:
         *  Constant: '<S233>/Constant'
         *  DataTypeConversion: '<S223>/Data Type Conversion'
         *  DotProduct: '<S231>/Dot Product3'
         *  Logic: '<S231>/AND'
         *  RelationalOperator: '<S231>/LessThanOrEqual1'
         *  RelationalOperator: '<S233>/Compare'
         *  Sum: '<S223>/Add'
         *  Sum: '<S231>/Minus4'
         */
        Code_Gen_Model_B.Spline_Follow_Index = ((real_T)
          (((rtb_Is_Absolute_Steering && rtb_Compare_ai) && (rtb_Sum1_j >= 0.0))
           && (rtb_Sum1_j <= ((rtb_Rotationmatrixfromlocalto_3 *
          rtb_Rotationmatrixfromlocalto_3) + rtb_MatrixConcatenate_b_idx_0)))) +
          Code_Gen_Model_DW.UnitDelay_DSTATE_gh;

        /* Merge: '<S217>/Merge2' incorporates:
         *  Constant: '<S223>/Constant2'
         *  SignalConversion generated from: '<S223>/Robot_Reached_Destination'
         */
        rtb_Is_Absolute_Steering = false;

        /* SignalConversion generated from: '<S223>/Make_Staight_Line_To_End' incorporates:
         *  Constant: '<S223>/Constant1'
         */
        rtb_Compare_ai = false;

        /* End of Outputs for SubSystem: '<S220>/Increment_If_Rectangle_Check' */
        break;

       default:
        /* Outputs for IfAction SubSystem: '<S220>/Catch-all if not the last point and not in the circle' incorporates:
         *  ActionPort: '<S221>/Action Port'
         */
        /* Merge: '<S217>/Merge2' incorporates:
         *  Constant: '<S221>/Constant2'
         *  SignalConversion generated from: '<S221>/Robot_Reached_Destination'
         */
        rtb_Is_Absolute_Steering = false;

        /* SignalConversion generated from: '<S221>/Make_Staight_Line_To_End' incorporates:
         *  Constant: '<S221>/Constant1'
         */
        rtb_Compare_ai = false;

        /* Merge: '<S217>/Merge4' incorporates:
         *  SignalConversion generated from: '<S221>/Current_Index'
         */
        Code_Gen_Model_B.Spline_Follow_Index =
          Code_Gen_Model_DW.UnitDelay_DSTATE_gh;

        /* End of Outputs for SubSystem: '<S220>/Catch-all if not the last point and not in the circle' */
        break;
      }

      /* Merge: '<S217>/Merge1' incorporates:
       *  Constant: '<S220>/Constant'
       *  SignalConversion generated from: '<S220>/Out_Of_Bounds'
       */
      Code_Gen_Model_B.Spline_Out_Of_Bounds = false;

      /* Update for UnitDelay: '<S220>/Unit Delay' */
      Code_Gen_Model_DW.UnitDelay_DSTATE_e4 = rtb_Is_Absolute_Translation_g;

      /* End of Outputs for SubSystem: '<S217>/Robot_Index_Is_Valid' */
    } else {
      /* Outputs for IfAction SubSystem: '<S217>/Escape_Auto_Driving' incorporates:
       *  ActionPort: '<S219>/Action Port'
       */
      /* Merge: '<S217>/Merge1' incorporates:
       *  Constant: '<S219>/Constant'
       *  SignalConversion generated from: '<S219>/Out_Of_Bounds'
       */
      Code_Gen_Model_B.Spline_Out_Of_Bounds = true;

      /* Merge: '<S217>/Merge2' incorporates:
       *  Constant: '<S219>/Constant1'
       *  SignalConversion generated from: '<S219>/Robot_Reached_Destination'
       */
      rtb_Is_Absolute_Steering = false;

      /* SignalConversion generated from: '<S219>/Make_Staight_Line_To_End' incorporates:
       *  Constant: '<S219>/Constant2'
       */
      rtb_Compare_ai = false;

      /* Merge: '<S217>/Merge4' incorporates:
       *  SignalConversion generated from: '<S219>/Current_Index'
       */
      Code_Gen_Model_B.Spline_Follow_Index =
        Code_Gen_Model_DW.UnitDelay_DSTATE_gh;

      /* End of Outputs for SubSystem: '<S217>/Escape_Auto_Driving' */
    }

    /* End of If: '<S217>/If' */

    /* If: '<S213>/If1' */
    if (!rtb_Compare_ai) {
      /* Outputs for IfAction SubSystem: '<S213>/Make_Knots_and_Path_Planning' incorporates:
       *  ActionPort: '<S218>/Action Port'
       */
      /* Bias: '<S234>/Add Constant' incorporates:
       *  Bias: '<S234>/Bias'
       *  Sum: '<S234>/Subtract'
       */
      rtb_Subtract_e = ((Code_Gen_Model_B.Spline_Num_Poses -
                         Code_Gen_Model_B.Spline_Follow_Index) + 3.0) + 1.0;

      /* SignalConversion generated from: '<S234>/Selector4' incorporates:
       *  Bias: '<S234>/Bias1'
       *  Constant: '<S236>/FixPt Constant'
       *  Sum: '<S236>/FixPt Sum1'
       */
      rtb_Minus_n[0] = Code_Gen_Model_B.Spline_Follow_Index - 1.0;
      rtb_Minus_n[1] = Code_Gen_Model_B.Spline_Num_Poses + 2.0;

      /* SignalConversion generated from: '<S234>/Selector5' */
      rtb_Reshapey[1] = Code_Gen_Model_B.Spline_Num_Poses;

      /* Selector: '<S234>/Selector5' */
      Code_Gen_Model_DW.Selector5_DIMS1[0] = (int32_T)rtb_Reshapey[1];
      Code_Gen_Model_DW.Selector5_DIMS1[1] = 2;
      s239_iter = ((int32_T)rtb_Reshapey[1]) - 1;

      /* Concatenate: '<S234>/Matrix Concatenate' */
      Code_Gen_Model_DW.MatrixConcatenate_DIMS1[0] =
        Code_Gen_Model_DW.Selector5_DIMS1[0] + 2;
      Code_Gen_Model_DW.MatrixConcatenate_DIMS1[1] = 2;

      /* Selector: '<S234>/Selector5' incorporates:
       *  Concatenate: '<S234>/Matrix Concatenate'
       *  Gain: '<S238>/Gain'
       *  Selector: '<S213>/Selector1'
       *  Selector: '<S234>/Selector2'
       *  Selector: '<S234>/Selector3'
       *  Sum: '<S238>/Subtract'
       */
      i = 0;
      for (rtb_Num_Segments = 0; rtb_Num_Segments < 2; rtb_Num_Segments++) {
        for (rtb_Bias1_p = 0; rtb_Bias1_p <= s239_iter; rtb_Bias1_p++) {
          rtb_Selector5[rtb_Bias1_p + (Code_Gen_Model_DW.Selector5_DIMS1[0] *
            rtb_Num_Segments)] = rtb_Ref_Poses[rtb_Bias1_p + i];
        }

        rtb_MatrixConcatenate_p[Code_Gen_Model_DW.MatrixConcatenate_DIMS1[0] *
          rtb_Num_Segments] = (rtb_Ref_Poses[i] * 2.0) - rtb_Ref_Poses[i + 1];
        i += 10;
      }

      /* Concatenate: '<S234>/Matrix Concatenate' incorporates:
       *  Bias: '<S234>/Add Constant1'
       *  Gain: '<S237>/Gain'
       *  Selector: '<S213>/Selector1'
       *  Selector: '<S234>/Selector'
       *  Selector: '<S234>/Selector1'
       *  Selector: '<S234>/Selector5'
       *  Sum: '<S237>/Subtract'
       */
      s239_iter = Code_Gen_Model_DW.Selector5_DIMS1[0];
      for (i = 0; i < 2; i++) {
        for (rtb_Num_Segments = 0; rtb_Num_Segments < s239_iter;
             rtb_Num_Segments++) {
          rtb_MatrixConcatenate_p[(rtb_Num_Segments +
            (Code_Gen_Model_DW.MatrixConcatenate_DIMS1[0] * i)) + 1] =
            rtb_Selector5[(Code_Gen_Model_DW.Selector5_DIMS1[0] * i) +
            rtb_Num_Segments];
        }
      }

      rtb_MatrixConcatenate_p[Code_Gen_Model_DW.Selector5_DIMS1[0] + 1] =
        (rtb_Ref_Poses[((int32_T)rtb_Reshapey[1]) - 1] * 2.0) - rtb_Ref_Poses
        [((int32_T)(Code_Gen_Model_B.Spline_Num_Poses - 1.0)) - 1];
      rtb_MatrixConcatenate_p[(Code_Gen_Model_DW.Selector5_DIMS1[0] +
        Code_Gen_Model_DW.MatrixConcatenate_DIMS1[0]) + 1] = (rtb_Ref_Poses
        [((int32_T)Code_Gen_Model_B.Spline_Num_Poses) + 9] * 2.0) -
        rtb_Ref_Poses[((int32_T)(Code_Gen_Model_B.Spline_Num_Poses - 1.0)) + 9];

      /* Selector: '<S234>/Selector4' */
      s239_iter = ((int32_T)rtb_Minus_n[1]) - ((int32_T)rtb_Minus_n[0]);
      Code_Gen_Model_DW.Selector4_DIMS1[0] = s239_iter + 1;
      Code_Gen_Model_DW.Selector4_DIMS1[1] = 2;

      /* Assignment: '<S234>/Assignment' */
      memset(&rtb_Assignment[0], 0, 24U * (sizeof(real_T)));

      /* Selector: '<S234>/Selector4' */
      rtb_Bias1_p = (int32_T)rtb_Minus_n[0];

      /* Assignment: '<S234>/Assignment' incorporates:
       *  Concatenate: '<S234>/Matrix Concatenate'
       *  Selector: '<S234>/Selector4'
       */
      for (i = 0; i < 2; i++) {
        for (rtb_Num_Segments = 0; rtb_Num_Segments <= s239_iter;
             rtb_Num_Segments++) {
          rtb_Assignment[rtb_Num_Segments + (12 * i)] = rtb_MatrixConcatenate_p
            [((rtb_Num_Segments + rtb_Bias1_p) +
              (Code_Gen_Model_DW.MatrixConcatenate_DIMS1[0] * i)) - 1];
        }
      }

      /* Outputs for Iterator SubSystem: '<S235>/Sampling_Loop' incorporates:
       *  WhileIterator: '<S239>/While Iterator'
       */
      s239_iter = 1;
      do {
        rtb_Rotationmatrixfromlocalto_2 = rtb_Assignment[s239_iter + 1];
        rtb_Minus_n[0] = rtb_Rotationmatrixfromlocalto_2 -
          rtb_Assignment[s239_iter - 1];
        rtb_Add2_f[0] = rtb_Assignment[s239_iter] - rtb_Assignment[s239_iter + 2];
        rtb_Minus_k_idx_0 = rtb_Rotationmatrixfromlocalto_2 -
          rtb_Assignment[s239_iter];
        rtb_Rotationmatrixfromlocalto_2 = rtb_Assignment[s239_iter + 13];
        rtb_Minus_n[1] = rtb_Rotationmatrixfromlocalto_2 -
          rtb_Assignment[s239_iter + 11];
        rtb_Hypot = rtb_Assignment[s239_iter + 12];
        rtb_Add2_f[1] = rtb_Hypot - rtb_Assignment[s239_iter + 14];
        rtb_Minus_k_idx_1 = rtb_Rotationmatrixfromlocalto_2 - rtb_Hypot;
        for (rtb_Bias1_p = 0; rtb_Bias1_p < 50; rtb_Bias1_p++) {
          rtb_Sum1_j = ((real_T)rtb_Bias1_p) / 49.0;
          rtb_DeadZone = rt_powd_snf(rtb_Sum1_j, 2.0);
          rtb_UnitDelay1_el = rt_powd_snf(rtb_Sum1_j, 3.0);
          rtb_Rotationmatrixfromlocalto_0 = (rtb_Sum1_j - (2.0 * rtb_DeadZone))
            + rtb_UnitDelay1_el;
          rtb_Rotationmatrixfromlocalto_2 = rtb_DeadZone - rtb_UnitDelay1_el;
          rtb_Sum1_b = 3.0 * rtb_DeadZone;
          rtb_UnitDelay1_el = rtb_Sum1_b - (2.0 * rtb_UnitDelay1_el);
          rtb_MatrixConcatenate_b_idx_0 = ((((rtb_Minus_n[0] *
            rtb_Rotationmatrixfromlocalto_0) + (rtb_Add2_f[0] *
            rtb_Rotationmatrixfromlocalto_2)) * 0.0) + (rtb_Minus_k_idx_0 *
            rtb_UnitDelay1_el)) + rtb_Assignment[s239_iter];
          rtb_MatrixConcatenate_b_idx_1 = ((((rtb_Minus_n[1] *
            rtb_Rotationmatrixfromlocalto_0) + (rtb_Add2_f[1] *
            rtb_Rotationmatrixfromlocalto_2)) * 0.0) + (rtb_Minus_k_idx_1 *
            rtb_UnitDelay1_el)) + rtb_Hypot;
          rtb_Rotationmatrixfromlocalto_0 = (rtb_Sum1_b - (4.0 * rtb_Sum1_j)) +
            1.0;
          rtb_Rotationmatrixfromlocalto_2 = (2.0 * rtb_Sum1_j) - rtb_Sum1_b;
          rtb_DeadZone = (rtb_Sum1_j - rtb_DeadZone) * 6.0;
          rtb_UnitDelay1_el = (((rtb_Minus_n[0] *
            rtb_Rotationmatrixfromlocalto_0) + (rtb_Add2_f[0] *
            rtb_Rotationmatrixfromlocalto_2)) * 0.0) + (rtb_Minus_k_idx_0 *
            rtb_DeadZone);
          rtb_Subtract2_h = rtb_UnitDelay1_el;
          rtb_Rotationmatrixfromlocalto_3 = rtb_UnitDelay1_el;
          rtb_UnitDelay1_el = (((rtb_Minus_n[1] *
            rtb_Rotationmatrixfromlocalto_0) + (rtb_Add2_f[1] *
            rtb_Rotationmatrixfromlocalto_2)) * 0.0) + (rtb_Minus_k_idx_1 *
            rtb_DeadZone);
          rtb_DeadZone = (6.0 * rtb_Sum1_j) - 4.0;
          rtb_Rotationmatrixfromlocalto_0 = (-6.0 * rtb_Sum1_j) + 2.0;
          rtb_Sum1_j = (-12.0 * rtb_Sum1_j) + 6.0;
          rtb_Rotationmatrixfromlocalto_2 = (((rtb_Minus_n[0] * rtb_DeadZone) +
            (rtb_Add2_f[0] * rtb_Rotationmatrixfromlocalto_0)) * 0.0) +
            (rtb_Minus_k_idx_0 * rtb_Sum1_j);
          rtb_Rotationmatrixfromlocalto_0 = (((rtb_Minus_n[1] * rtb_DeadZone) +
            (rtb_Add2_f[1] * rtb_Rotationmatrixfromlocalto_0)) * 0.0) +
            (rtb_Minus_k_idx_1 * rtb_Sum1_j);
          rtb_DeadZone = rt_powd_snf(rt_hypotd_snf(rtb_Subtract2_h,
            rtb_UnitDelay1_el), 3.0);
          rtb_Sum1_j = fmax(1.0E-10, rtb_DeadZone);
          Code_Gen_Model_DW.Relay_Mode = ((rtb_DeadZone >=
            2.2204460492503131E-16) || (Code_Gen_Model_DW.Relay_Mode));
          if (Code_Gen_Model_DW.Relay_Mode) {
            rtb_DeadZone = 1.0;
          } else {
            rtb_DeadZone = -1.0;
          }

          if (rtb_Bias1_p == 0) {
            memset(&rtb_Assignment_d[0], 0, 150U * (sizeof(real_T)));
          }

          rtb_Assignment_d[rtb_Bias1_p] = rtb_MatrixConcatenate_b_idx_0;
          rtb_Assignment_d[rtb_Bias1_p + 50] = rtb_MatrixConcatenate_b_idx_1;
          rtb_Assignment_d[rtb_Bias1_p + 100] = fabs
            ((rtb_Rotationmatrixfromlocalto_3 * rtb_Rotationmatrixfromlocalto_0)
             - (rtb_Rotationmatrixfromlocalto_2 * rtb_UnitDelay1_el)) /
            (rtb_Sum1_j * rtb_DeadZone);
        }

        if (s239_iter == 1) {
          memset(&Code_Gen_Model_B.Assignment[0], 0, 450U * (sizeof(real_T)));
        }

        for (i = 0; i < 3; i++) {
          memcpy(&Code_Gen_Model_B.Assignment[((i * 50) + (s239_iter * 150)) +
                 -150], &rtb_Assignment_d[i * 50], 50U * (sizeof(real_T)));
        }

        rtb_Sum1_j = rtb_Subtract_e - ((real_T)s239_iter);
        rtb_Num_Segments = s239_iter;
        s239_iter++;
      } while ((rtb_Sum1_j >= 4.0) && (s239_iter <= 3));

      /* End of Outputs for SubSystem: '<S235>/Sampling_Loop' */

      /* SignalConversion generated from: '<S218>/Position_and_Curvature' incorporates:
       *  Assignment: '<S239>/Assignment'
       *  Merge: '<S213>/Merge'
       */
      memcpy(&rtb_Position_and_Curvature[0], &Code_Gen_Model_B.Assignment[0],
             450U * (sizeof(real_T)));

      /* End of Outputs for SubSystem: '<S213>/Make_Knots_and_Path_Planning' */
    } else {
      /* Outputs for IfAction SubSystem: '<S213>/If Action Subsystem' incorporates:
       *  ActionPort: '<S216>/Action Port'
       */
      /* Product: '<S216>/Product' incorporates:
       *  Selector: '<S213>/Selector'
       *  Selector: '<S213>/Selector1'
       */
      rtb_Sum1_j = rtb_Ref_Poses[((int32_T)Code_Gen_Model_B.Spline_Num_Poses) -
        1];

      /* Product: '<S216>/Product1' incorporates:
       *  Selector: '<S213>/Selector'
       *  Selector: '<S213>/Selector1'
       */
      rtb_Subtract_e = rtb_Ref_Poses[((int32_T)Code_Gen_Model_B.Spline_Num_Poses)
        + 9];
      for (i = 0; i < 50; i++) {
        /* Product: '<S216>/Product' incorporates:
         *  Constant: '<S216>/Constant2'
         */
        rtb_MatrixConcatenate_h[i] = rtb_Sum1_j;

        /* Product: '<S216>/Product1' incorporates:
         *  Constant: '<S216>/Constant2'
         *  Product: '<S216>/Product'
         */
        rtb_MatrixConcatenate_h[i + 50] = rtb_Subtract_e;
      }

      /* Assignment: '<S216>/Assignment' incorporates:
       *  Concatenate: '<S216>/Matrix Concatenate'
       *  Merge: '<S213>/Merge'
       */
      memset(&rtb_Position_and_Curvature[0], 0, 450U * (sizeof(real_T)));
      for (i = 0; i < 50; i++) {
        rtb_Position_and_Curvature[i] = rtb_MatrixConcatenate_h[i];
        rtb_Position_and_Curvature[i + 50] = rtb_MatrixConcatenate_h[i + 50];
      }

      /* End of Assignment: '<S216>/Assignment' */

      /* SignalConversion generated from: '<S216>/Num_Segments' incorporates:
       *  Constant: '<S216>/Constant1'
       */
      rtb_Num_Segments = 1;

      /* End of Outputs for SubSystem: '<S213>/If Action Subsystem' */
    }

    /* End of If: '<S213>/If1' */

    /* Concatenate: '<S214>/Matrix Concatenate' incorporates:
     *  Merge: '<S213>/Merge'
     *  Selector: '<S214>/Selector'
     *  Selector: '<S214>/Selector1'
     *  Selector: '<S214>/Selector3'
     */
    for (i = 0; i < 50; i++) {
      rtb_MatrixConcatenate_o[i] = rtb_Position_and_Curvature[i];
      rtb_MatrixConcatenate_o[i + 50] = rtb_Position_and_Curvature[i + 150];
      rtb_MatrixConcatenate_o[i + 100] = rtb_Position_and_Curvature[i + 300];
      rtb_MatrixConcatenate_o[i + 150] = rtb_Position_and_Curvature[i + 50];
      rtb_MatrixConcatenate_o[i + 200] = rtb_Position_and_Curvature[i + 200];
      rtb_MatrixConcatenate_o[i + 250] = rtb_Position_and_Curvature[i + 350];
      rtb_MatrixConcatenate_o[i + 300] = rtb_Position_and_Curvature[i + 100];
      rtb_MatrixConcatenate_o[i + 350] = rtb_Position_and_Curvature[i + 250];
      rtb_MatrixConcatenate_o[i + 400] = rtb_Position_and_Curvature[i + 400];
    }

    /* End of Concatenate: '<S214>/Matrix Concatenate' */

    /* MATLAB Function: '<S214>/Distance Along Curve' incorporates:
     *  Concatenate: '<S214>/Matrix Concatenate'
     *  Selector: '<S214>/Selector4'
     *  Selector: '<S214>/Selector5'
     */
    memset(&rtb_Assignment_d[0], 0, 150U * (sizeof(real_T)));
    for (s239_iter = 0; s239_iter < 149; s239_iter++) {
      /* Outputs for Iterator SubSystem: '<S235>/Sampling_Loop' incorporates:
       *  WhileIterator: '<S239>/While Iterator'
       */
      rtb_Assignment_d[s239_iter + 1] = rt_hypotd_snf
        (rtb_MatrixConcatenate_o[s239_iter + 1] -
         rtb_MatrixConcatenate_o[s239_iter], rtb_MatrixConcatenate_o[s239_iter +
         151] - rtb_MatrixConcatenate_o[s239_iter + 150]) +
        rtb_Assignment_d[s239_iter];

      /* End of Outputs for SubSystem: '<S235>/Sampling_Loop' */
    }

    /* End of MATLAB Function: '<S214>/Distance Along Curve' */

    /* MATLAB Function: '<S214>/Find closest index to curve' incorporates:
     *  Concatenate: '<S214>/Matrix Concatenate'
     *  Selector: '<S214>/Selector4'
     *  Selector: '<S214>/Selector5'
     *  Selector: '<S265>/Selector'
     */
    for (s239_iter = 0; s239_iter < 150; s239_iter++) {
      /* Outputs for Iterator SubSystem: '<S235>/Sampling_Loop' incorporates:
       *  WhileIterator: '<S239>/While Iterator'
       */
      distance_from_robot[s239_iter] = rt_hypotd_snf
        (rtb_MatrixConcatenate_o[s239_iter] - Code_Gen_Model_B.KF_Position_X,
         rtb_MatrixConcatenate_o[s239_iter + 150] -
         Code_Gen_Model_B.KF_Position_Y);

      /* End of Outputs for SubSystem: '<S235>/Sampling_Loop' */
    }

    if (!rtIsNaN(distance_from_robot[0])) {
      s239_iter = 1;
    } else {
      s239_iter = 0;
      rtb_Bias1_p = 2;
      exitg1 = false;
      while ((!exitg1) && (rtb_Bias1_p < 151)) {
        if (!rtIsNaN(distance_from_robot[rtb_Bias1_p - 1])) {
          s239_iter = rtb_Bias1_p;
          exitg1 = true;
        } else {
          rtb_Bias1_p++;
        }
      }
    }

    if (s239_iter == 0) {
      rtb_Subtract_e = distance_from_robot[0];
    } else {
      rtb_Subtract_e = distance_from_robot[s239_iter - 1];
      for (rtb_Bias1_p = s239_iter + 1; rtb_Bias1_p < 151; rtb_Bias1_p++) {
        rtb_Sum1_j = distance_from_robot[rtb_Bias1_p - 1];
        if (rtb_Subtract_e > rtb_Sum1_j) {
          rtb_Subtract_e = rtb_Sum1_j;
        }
      }
    }

    s239_iter = 1;
    rtb_Bias1_p = 0;
    exitg1 = false;
    while ((!exitg1) && (rtb_Bias1_p < 150)) {
      s239_iter = rtb_Bias1_p + 1;
      if (distance_from_robot[rtb_Bias1_p] == rtb_Subtract_e) {
        exitg1 = true;
      } else {
        rtb_Bias1_p++;
      }
    }

    /* Selector: '<S265>/Selector' incorporates:
     *  Constant: '<S265>/Constant'
     *  MATLAB Function: '<S214>/Find closest index to curve'
     *  MinMax: '<S265>/Min'
     */
    rtb_Sum1_j = rtb_Assignment_d[((int32_T)fmin(50.0, s239_iter)) - 1];

    /* If: '<S265>/If' incorporates:
     *  RelationalOperator: '<S265>/Relational Operator'
     */
    if (rtb_Assignment_d[0] != rtb_Assignment_d[49]) {
      /* Outputs for IfAction SubSystem: '<S265>/Dynamic Lookup Tables' incorporates:
       *  ActionPort: '<S268>/Action Port'
       */
      /* SignalConversion generated from: '<S268>/Lookup Table Dynamic' */
      rtb_Reshapey[0] = rtb_Assignment_d[0];
      rtb_Reshapey[1] = rtb_Assignment_d[49];

      /* Sum: '<S270>/FixPt Sum1' incorporates:
       *  Constant: '<S270>/FixPt Constant'
       */
      rtb_Subtract_e = Code_Gen_Model_B.Spline_Follow_Index - 1.0;

      /* SignalConversion generated from: '<S268>/Lookup Table Dynamic' incorporates:
       *  Merge: '<S21>/Merge8'
       *  Selector: '<S268>/Selector11'
       *  Selector: '<S268>/Selector12'
       */
      rtb_Minus_n[0] = rtb_Spline_Ref_Poses[((int32_T)rtb_Subtract_e) + 19];
      rtb_Minus_n[1] = rtb_Spline_Ref_Poses[((int32_T)
        Code_Gen_Model_B.Spline_Follow_Index) + 19];

      /* SignalConversion generated from: '<S268>/Lookup Table Dynamic1' incorporates:
       *  Merge: '<S21>/Merge8'
       *  Selector: '<S268>/Selector1'
       *  Selector: '<S268>/Selector2'
       */
      rtb_Add2_f[0] = rtb_Spline_Ref_Poses[((int32_T)rtb_Subtract_e) + 29];
      rtb_Add2_f[1] = rtb_Spline_Ref_Poses[((int32_T)
        Code_Gen_Model_B.Spline_Follow_Index) + 29];

      /* S-Function (sfix_look1_dyn): '<S268>/Lookup Table Dynamic' */
      /* Dynamic Look-Up Table Block: '<S268>/Lookup Table Dynamic'
       * Input0  Data Type:  Floating Point real_T
       * Input1  Data Type:  Floating Point real_T
       * Input2  Data Type:  Floating Point real_T
       * Output0 Data Type:  Floating Point real_T
       * Lookup Method: Linear_Endpoint
       *
       */
      LookUp_real_T_real_T( &(rtb_Subtract_e), &rtb_Minus_n[0], rtb_Sum1_j,
                           &rtb_Reshapey[0], 1U);

      /* SignalConversion: '<S268>/Signal Copy' incorporates:
       *  S-Function (sfix_look1_dyn): '<S268>/Lookup Table Dynamic1'
       */
      /* Dynamic Look-Up Table Block: '<S268>/Lookup Table Dynamic1'
       * Input0  Data Type:  Floating Point real_T
       * Input1  Data Type:  Floating Point real_T
       * Input2  Data Type:  Floating Point real_T
       * Output0 Data Type:  Floating Point real_T
       * Lookup Method: Linear_Endpoint
       *
       */
      LookUp_real_T_real_T( &(rtb_Merge1), &rtb_Add2_f[0], rtb_Sum1_j,
                           &rtb_Reshapey[0], 1U);

      /* End of Outputs for SubSystem: '<S265>/Dynamic Lookup Tables' */
    } else {
      /* Outputs for IfAction SubSystem: '<S265>/Latch' incorporates:
       *  ActionPort: '<S269>/Action Port'
       */
      /* SignalConversion generated from: '<S269>/In1' incorporates:
       *  UnitDelay: '<S265>/Unit Delay1'
       */
      rtb_Subtract_e = Code_Gen_Model_DW.UnitDelay1_DSTATE_f4;

      /* SignalConversion generated from: '<S269>/In2' incorporates:
       *  UnitDelay: '<S265>/Unit Delay'
       */
      rtb_Merge1 = Code_Gen_Model_DW.UnitDelay_DSTATE_g4;

      /* End of Outputs for SubSystem: '<S265>/Latch' */
    }

    /* End of If: '<S265>/If' */

    /* MinMax: '<S212>/Min' incorporates:
     *  Lookup_n-D: '<S212>/Lookahead Distance'
     *  UnitDelay: '<S212>/Unit Delay'
     */
    rtb_Rotationmatrixfromlocalto_1 = fmin(rtb_Rotationmatrixfromlocalto_1,
      look1_binlcpw(Code_Gen_Model_DW.UnitDelay_DSTATE_hn,
                    Code_Gen_Model_ConstP.pooled10,
                    Code_Gen_Model_ConstP.LookaheadDistance_tableData, 3U));

    /* Outputs for Iterator SubSystem: '<S214>/Find first index that meets distance target' incorporates:
     *  WhileIterator: '<S264>/While Iterator'
     */
    s264_iter = 1U;
    rtb_Is_Absolute_Translation_g = true;
    while (rtb_Is_Absolute_Translation_g && (s264_iter <= 150)) {
      /* Outputs for Iterator SubSystem: '<S214>/Find first index that meets distance target' incorporates:
       *  WhileIterator: '<S264>/While Iterator'
       */
      Code_Gen_Model_B.WhileIterator = s264_iter;
      rtb_Is_Absolute_Translation_g =
        ((rtb_Assignment_d[Code_Gen_Model_B.WhileIterator - 1] <=
          (rtb_Assignment_d[s239_iter - 1] + rtb_Rotationmatrixfromlocalto_1)) &&
         (Code_Gen_Model_B.WhileIterator < (((real_T)rtb_Num_Segments) * 50.0)));
      s264_iter++;
    }

    /* End of Outputs for SubSystem: '<S214>/Find first index that meets distance target' */

    /* Switch: '<S267>/Switch' incorporates:
     *  Concatenate: '<S214>/Matrix Concatenate'
     *  Constant: '<S214>/Constant'
     *  Constant: '<S264>/Constant'
     *  Constant: '<S267>/Constant'
     *  Constant: '<S267>/Constant1'
     *  Constant: '<S267>/Constant2'
     *  Constant: '<S267>/Constant3'
     *  Logic: '<S264>/AND'
     *  MATLAB Function: '<S214>/Find closest index to curve'
     *  Math: '<S267>/Hypot'
     *  Merge: '<S21>/Merge8'
     *  MinMax: '<S267>/Max'
     *  MinMax: '<S267>/Min'
     *  MinMax: '<S267>/Min1'
     *  Product: '<S264>/Product'
     *  Product: '<S267>/Divide'
     *  Product: '<S267>/Product'
     *  Product: '<S267>/Product1'
     *  RelationalOperator: '<S214>/Relational Operator'
     *  RelationalOperator: '<S264>/Relational Operator'
     *  RelationalOperator: '<S264>/Relational Operator1'
     *  Selector: '<S214>/Selector10'
     *  Selector: '<S214>/Selector7'
     *  Selector: '<S214>/Selector8'
     *  Selector: '<S214>/Selector9'
     *  Selector: '<S264>/Selector'
     *  Selector: '<S264>/Selector1'
     *  Selector: '<S265>/Selector'
     *  Sqrt: '<S267>/Sqrt'
     *  Sum: '<S214>/Subtract'
     *  Sum: '<S264>/Add'
     *  Sum: '<S267>/Subtract'
     *  Sum: '<S267>/Subtract1'
     */
    if (Code_Gen_Model_B.Spline_Follow_Index >=
        (Code_Gen_Model_B.Spline_Num_Poses -
         Spline_Pose_Num_Before_End_Reduce_Speed)) {
      rtb_Rotationmatrixfromlocalto_1 = fmin(rt_hypotd_snf(rtb_Spline_Ref_Poses
        [9] - Code_Gen_Model_B.KF_Position_X, rtb_Spline_Ref_Poses[19] -
        Code_Gen_Model_B.KF_Position_Y) *
        Spline_Last_Pose_Distance_to_Velocity_Gain, fmin(rtb_Subtract_e *
        Spline_Velocity_Multiplier_TEST, sqrt
        (Spline_Max_Centripital_Acceleration / fmax
         (rtb_MatrixConcatenate_o[Code_Gen_Model_B.WhileIterator + 299], 1.0E-5))));
    } else {
      rtb_Rotationmatrixfromlocalto_1 = fmin(rtb_Subtract_e *
        Spline_Velocity_Multiplier_TEST, sqrt
        (Spline_Max_Centripital_Acceleration / fmax
         (rtb_MatrixConcatenate_o[Code_Gen_Model_B.WhileIterator + 299], 1.0E-5)));
    }

    /* End of Switch: '<S267>/Switch' */

    /* Logic: '<S215>/OR' */
    rtb_Compare_ai = (rtb_Is_Absolute_Steering ||
                      (Code_Gen_Model_B.Spline_Out_Of_Bounds));

    /* Switch: '<S215>/Switch1' incorporates:
     *  Switch: '<S215>/Switch'
     *  UnitDelay: '<S215>/Unit Delay'
     */
    if (rtb_Compare_ai) {
      /* Merge: '<S25>/Merge2' incorporates:
       *  Constant: '<S215>/Constant3'
       *  SignalConversion: '<S215>/Signal Copy1'
       */
      Code_Gen_Model_B.Translation_Speed_SPF = 0.0;
      rtb_Sum1_j = Code_Gen_Model_DW.UnitDelay_DSTATE_le;
    } else {
      /* Merge: '<S25>/Merge2' incorporates:
       *  SignalConversion: '<S215>/Signal Copy1'
       */
      Code_Gen_Model_B.Translation_Speed_SPF = rtb_Rotationmatrixfromlocalto_1;
      rtb_Sum1_j = rtb_Merge1;
    }

    /* End of Switch: '<S215>/Switch1' */

    /* Merge: '<S25>/Merge' incorporates:
     *  SignalConversion: '<S215>/Signal Copy'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd_SPF = rtb_Sum1_j;

    /* Selector: '<S214>/Selector6' incorporates:
     *  Concatenate: '<S214>/Matrix Concatenate'
     *  Selector: '<S214>/Selector5'
     */
    Code_Gen_Model_B.Spline_Target_Y =
      rtb_MatrixConcatenate_o[Code_Gen_Model_B.WhileIterator + 149];

    /* Selector: '<S214>/Selector2' incorporates:
     *  Concatenate: '<S214>/Matrix Concatenate'
     *  Selector: '<S214>/Selector4'
     */
    Code_Gen_Model_B.Spline_Target_X =
      rtb_MatrixConcatenate_o[Code_Gen_Model_B.WhileIterator - 1];

    /* Switch: '<S215>/Switch2' incorporates:
     *  Sum: '<S271>/Subtract'
     *  Sum: '<S271>/Subtract1'
     *  Trigonometry: '<S271>/Atan2'
     *  UnitDelay: '<S215>/Unit Delay1'
     */
    if (rtb_Compare_ai) {
      rtb_DeadZone = Code_Gen_Model_DW.UnitDelay1_DSTATE_kc;
    } else {
      rtb_DeadZone = rt_atan2d_snf(Code_Gen_Model_B.Spline_Target_Y -
        Code_Gen_Model_B.KF_Position_Y, Code_Gen_Model_B.Spline_Target_X -
        Code_Gen_Model_B.KF_Position_X);
    }

    /* End of Switch: '<S215>/Switch2' */

    /* Merge: '<S25>/Merge3' incorporates:
     *  SignalConversion: '<S215>/Signal Copy2'
     */
    Code_Gen_Model_B.Translation_Angle_SPF = rtb_DeadZone;

    /* Merge: '<S25>/Merge7' incorporates:
     *  SignalConversion: '<S212>/Signal Copy'
     */
    Code_Gen_Model_B.Robot_Reached_Destination_l = rtb_Is_Absolute_Steering;

    /* Merge: '<S25>/Merge1' incorporates:
     *  Constant: '<S215>/Constant2'
     *  SignalConversion generated from: '<S212>/Steering_Rel_Cmd'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd_SPF = 0.0;

    /* Merge: '<S25>/Merge4' incorporates:
     *  Constant: '<S215>/Constant5'
     *  SignalConversion generated from: '<S212>/Is_Absolute_Translation'
     */
    Code_Gen_Model_B.Is_Absolute_Translation_SPF = true;

    /* Merge: '<S25>/Merge5' incorporates:
     *  Constant: '<S215>/Constant6'
     *  SignalConversion generated from: '<S212>/Is_Absolute_Steering'
     */
    Code_Gen_Model_B.Is_Absolute_Steering_SPF = true;

    /* Merge: '<S25>/Merge8' incorporates:
     *  SignalConversion generated from: '<S212>/Gyro_Angle_Field_rad'
     */
    Code_Gen_Model_B.Gyro_Angle_SPF = Code_Gen_Model_B.Gyro_Angle_Field_rad;

    /* Update for UnitDelay: '<S213>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_gh = Code_Gen_Model_B.Spline_Follow_Index;

    /* Update for UnitDelay: '<S212>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_hn = rtb_Rotationmatrixfromlocalto_1;

    /* Update for UnitDelay: '<S265>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_f4 = rtb_Subtract_e;

    /* Update for UnitDelay: '<S265>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_g4 = rtb_Merge1;

    /* Update for UnitDelay: '<S215>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_le = rtb_Sum1_j;

    /* Update for UnitDelay: '<S215>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_kc = rtb_DeadZone;

    /* End of Outputs for SubSystem: '<S25>/Spline Path Following Enabled' */
  } else {
    /* Outputs for IfAction SubSystem: '<S25>/Pass Through' incorporates:
     *  ActionPort: '<S211>/Action Port'
     */
    /* Merge: '<S25>/Merge7' incorporates:
     *  Constant: '<S211>/Constant'
     *  SignalConversion generated from: '<S211>/Robot_Reached_Destination'
     */
    Code_Gen_Model_B.Robot_Reached_Destination_l = true;

    /* Merge: '<S25>/Merge' incorporates:
     *  SignalConversion generated from: '<S211>/Steering_Abs_Cmd_In'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd_SPF = Code_Gen_Model_B.Steering_Abs_Cmd;

    /* Merge: '<S25>/Merge1' incorporates:
     *  SignalConversion generated from: '<S211>/Steering_Rel_Cmd_In'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd_SPF = Code_Gen_Model_B.Steering_Rel_Cmd;

    /* Merge: '<S25>/Merge2' incorporates:
     *  SignalConversion generated from: '<S211>/Translation_Speed_In'
     */
    Code_Gen_Model_B.Translation_Speed_SPF = Code_Gen_Model_B.Translation_Speed;

    /* Merge: '<S25>/Merge3' incorporates:
     *  SignalConversion generated from: '<S211>/Translation_Angle_In'
     */
    Code_Gen_Model_B.Translation_Angle_SPF = Code_Gen_Model_B.Translation_Angle;

    /* Merge: '<S25>/Merge4' incorporates:
     *  SignalConversion generated from: '<S211>/Is_Absolute_Translation_In'
     */
    Code_Gen_Model_B.Is_Absolute_Translation_SPF = rtb_Is_Absolute_Translation_g;

    /* Merge: '<S25>/Merge5' incorporates:
     *  SignalConversion generated from: '<S211>/Is_Absolute_Steering_In'
     */
    Code_Gen_Model_B.Is_Absolute_Steering_SPF = rtb_Is_Absolute_Steering;

    /* Merge: '<S25>/Merge8' incorporates:
     *  SignalConversion generated from: '<S211>/Gyro_Angle_rad'
     */
    Code_Gen_Model_B.Gyro_Angle_SPF = Code_Gen_Model_B.Gyro_Angle_rad;

    /* End of Outputs for SubSystem: '<S25>/Pass Through' */
  }

  /* End of If: '<S25>/If' */

  /* Signum: '<S365>/Sign2' incorporates:
   *  UnitDelay: '<S365>/Unit Delay'
   */
  if (rtIsNaN(Code_Gen_Model_B.Translation_Speed_RL)) {
    rtb_Minus_k_idx_0 = (rtNaN);
  } else if (Code_Gen_Model_B.Translation_Speed_RL < 0.0) {
    rtb_Minus_k_idx_0 = -1.0;
  } else {
    rtb_Minus_k_idx_0 = (Code_Gen_Model_B.Translation_Speed_RL > 0.0);
  }

  /* Signum: '<S365>/Sign1' */
  if (rtIsNaN(Code_Gen_Model_B.Translation_Speed_SPF)) {
    tmp = (rtNaN);
  } else if (Code_Gen_Model_B.Translation_Speed_SPF < 0.0) {
    tmp = -1.0;
  } else {
    tmp = (Code_Gen_Model_B.Translation_Speed_SPF > 0.0);
  }

  /* Product: '<S365>/Product1' incorporates:
   *  Signum: '<S365>/Sign1'
   *  Signum: '<S365>/Sign2'
   */
  rtb_Minus_k_idx_0 *= tmp;
  if (rtIsNaN(rtb_Minus_k_idx_0)) {
    i = 0;
  } else {
    i = (int32_T)fmod(rtb_Minus_k_idx_0, 256.0);
  }

  /* Switch: '<S365>/Switch' incorporates:
   *  Constant: '<S365>/Constant'
   *  Constant: '<S370>/Constant'
   *  Constant: '<S371>/Constant'
   *  Logic: '<S365>/or'
   *  Product: '<S365>/Product1'
   *  RelationalOperator: '<S370>/Compare'
   *  RelationalOperator: '<S371>/Compare'
   *  UnitDelay: '<S365>/Unit Delay'
   */
  if ((Code_Gen_Model_B.Translation_Speed_RL == 0.0) || (((i < 0) ? ((int32_T)
         ((int8_T)(-((int8_T)((uint8_T)(-((real_T)i))))))) : i) > 0)) {
    rtb_Rotationmatrixfromlocalto_3 = Code_Gen_Model_B.Translation_Speed_SPF;
  } else {
    rtb_Rotationmatrixfromlocalto_3 = 0.0;
  }

  /* End of Switch: '<S365>/Switch' */

  /* Switch: '<S376>/Init' incorporates:
   *  UnitDelay: '<S376>/FixPt Unit Delay1'
   *  UnitDelay: '<S376>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE != 0) {
    rtb_Subtract_e = rtb_Rotationmatrixfromlocalto_3;
  } else {
    rtb_Subtract_e = Code_Gen_Model_B.Translation_Speed_RL;
  }

  /* End of Switch: '<S376>/Init' */

  /* RelationalOperator: '<S372>/Compare' incorporates:
   *  Constant: '<S372>/Constant'
   */
  rtb_Is_Absolute_Translation_g = (rtb_Rotationmatrixfromlocalto_3 == 0.0);

  /* RelationalOperator: '<S373>/Compare' incorporates:
   *  Constant: '<S373>/Constant'
   */
  rtb_Is_Absolute_Steering = (rtb_Rotationmatrixfromlocalto_3 > 0.0);

  /* Abs: '<S365>/Abs' incorporates:
   *  Sum: '<S365>/Subtract'
   *  UnitDelay: '<S365>/Unit Delay'
   */
  rtb_Merge1 = fabs(Code_Gen_Model_B.Translation_Speed_RL -
                    Code_Gen_Model_B.Translation_Speed_SPF);

  /* Switch: '<S365>/Switch5' incorporates:
   *  Constant: '<S365>/Constant1'
   *  Switch: '<S365>/Switch1'
   *  UnaryMinus: '<S365>/Unary Minus'
   */
  if (rtb_Is_Absolute_Translation_g) {
    /* SignalConversion generated from: '<S365>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S365>/Constant4'
     *  Constant: '<S365>/Constant6'
     */
    rtb_Reshapey[0] = Translation_Speed_Approach_Zero_Final_Thresh;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S365>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S365>/Constant2'
     *  Constant: '<S365>/Constant5'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Translation_Speed_Approach_Zero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S365>/Lookup Table Dynamic' */
    /* Dynamic Look-Up Table Block: '<S365>/Lookup Table Dynamic'
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
    rtb_Minus_k_idx_0 = -Translation_Speed_Rate_Limit_Dec;
  } else {
    /* SignalConversion generated from: '<S365>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S365>/Constant10'
     *  Constant: '<S365>/Constant8'
     */
    rtb_Reshapey[0] = Translation_Speed_NonZero_Final_Scale_Factor;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S365>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S365>/Constant7'
     *  Constant: '<S365>/Constant9'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Translation_Speed_NonZero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S365>/Lookup Table Dynamic1' */
    /* Dynamic Look-Up Table Block: '<S365>/Lookup Table Dynamic1'
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

    /* Switch: '<S365>/Switch3' incorporates:
     *  Constant: '<S365>/Constant1'
     *  Constant: '<S365>/Constant3'
     *  UnaryMinus: '<S365>/Unary Minus'
     */
    if (rtb_Is_Absolute_Steering) {
      rtb_Minus_k_idx_0 = Translation_Speed_Rate_Limit_Inc;
    } else {
      rtb_Minus_k_idx_0 = -Translation_Speed_Rate_Limit_Dec;
    }

    /* End of Switch: '<S365>/Switch3' */
  }

  /* End of Switch: '<S365>/Switch5' */

  /* Product: '<S365>/Product' incorporates:
   *  Switch: '<S365>/Switch1'
   */
  rtb_rx_p = rtb_Minus_k_idx_0 * rtb_Merge1;

  /* Sum: '<S374>/Sum1' */
  rtb_Rotationmatrixfromlocalto_1 = rtb_Rotationmatrixfromlocalto_3 -
    rtb_Subtract_e;

  /* Switch: '<S375>/Switch2' incorporates:
   *  RelationalOperator: '<S375>/LowerRelop1'
   */
  if (!(rtb_Rotationmatrixfromlocalto_1 > rtb_rx_p)) {
    /* Switch: '<S365>/Switch2' incorporates:
     *  Constant: '<S365>/Constant1'
     *  Switch: '<S365>/Switch4'
     */
    if (rtb_Is_Absolute_Translation_g) {
      rtb_Sum1_j = Translation_Speed_Rate_Limit_Dec;
    } else if (rtb_Is_Absolute_Steering) {
      /* Switch: '<S365>/Switch4' incorporates:
       *  Constant: '<S365>/Constant1'
       */
      rtb_Sum1_j = Translation_Speed_Rate_Limit_Dec;
    } else {
      /* Switch: '<S365>/Switch4' incorporates:
       *  Constant: '<S365>/Constant3'
       *  UnaryMinus: '<S365>/Unary Minus1'
       */
      rtb_Sum1_j = -Translation_Speed_Rate_Limit_Inc;
    }

    /* End of Switch: '<S365>/Switch2' */

    /* Product: '<S365>/Product2' */
    rtb_Sum1_j *= rtb_Merge1;

    /* Switch: '<S375>/Switch' incorporates:
     *  RelationalOperator: '<S375>/UpperRelop'
     */
    if (rtb_Rotationmatrixfromlocalto_1 < rtb_Sum1_j) {
      rtb_rx_p = rtb_Sum1_j;
    } else {
      rtb_rx_p = rtb_Rotationmatrixfromlocalto_1;
    }

    /* End of Switch: '<S375>/Switch' */
  }

  /* End of Switch: '<S375>/Switch2' */

  /* Sum: '<S374>/Sum' */
  Code_Gen_Model_B.Translation_Speed_RL = rtb_rx_p + rtb_Subtract_e;

  /* Switch: '<S368>/Switch' */
  if (Code_Gen_Model_B.Is_Absolute_Translation_SPF) {
    /* Switch: '<S368>/Switch' incorporates:
     *  Constant: '<S400>/Constant3'
     *  Constant: '<S400>/Constant4'
     *  Math: '<S400>/Math Function'
     *  Sum: '<S368>/Subtract'
     *  Sum: '<S400>/Add1'
     *  Sum: '<S400>/Add2'
     */
    Code_Gen_Model_B.Translation_Steering_Cmd = rt_modd_snf
      ((Code_Gen_Model_B.Translation_Angle_SPF - Code_Gen_Model_B.Gyro_Angle_SPF)
       + 3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;
  } else {
    /* Switch: '<S368>/Switch' */
    Code_Gen_Model_B.Translation_Steering_Cmd =
      Code_Gen_Model_B.Translation_Angle_SPF;
  }

  /* End of Switch: '<S368>/Switch' */

  /* Sum: '<S396>/Add1' incorporates:
   *  Constant: '<S396>/Constant3'
   *  Constant: '<S396>/Constant4'
   *  Math: '<S396>/Math Function'
   *  Sum: '<S395>/Sum'
   *  Sum: '<S396>/Add2'
   */
  rtb_Rotationmatrixfromlocalto_3 = rt_modd_snf
    ((Code_Gen_Model_B.Steering_Abs_Cmd_SPF - Code_Gen_Model_B.Gyro_Angle_SPF) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S398>/Sum1' incorporates:
   *  Constant: '<S395>/Constant2'
   *  Product: '<S398>/Product'
   *  Sum: '<S398>/Sum'
   *  UnitDelay: '<S398>/Unit Delay1'
   */
  rtb_Merge1 = ((rtb_Rotationmatrixfromlocalto_3 -
                 Code_Gen_Model_DW.UnitDelay1_DSTATE_i) *
                Steering_Heading_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_i;

  /* Product: '<S395>/Product' incorporates:
   *  Constant: '<S395>/Constant3'
   */
  rtb_Rotationmatrixfromlocalto_1 = rtb_Merge1 * Steering_Heading_Control_D;

  /* Sum: '<S397>/Diff' incorporates:
   *  UnitDelay: '<S397>/UD'
   *
   * Block description for '<S397>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S397>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Minus_k_idx_0 = rtb_Rotationmatrixfromlocalto_1 -
    Code_Gen_Model_DW.UD_DSTATE_a;

  /* Saturate: '<S395>/Saturation' */
  if (rtb_Minus_k_idx_0 > Steering_Heading_Control_D_UL) {
    rtb_Minus_k_idx_0 = Steering_Heading_Control_D_UL;
  } else if (rtb_Minus_k_idx_0 < Steering_Heading_Control_D_LL) {
    rtb_Minus_k_idx_0 = Steering_Heading_Control_D_LL;
  }

  /* Sum: '<S395>/Add' incorporates:
   *  Gain: '<S395>/Gain1'
   *  Saturate: '<S395>/Saturation'
   */
  rtb_Sum1_j = (Steering_Heading_Control_P * rtb_Rotationmatrixfromlocalto_3) +
    rtb_Minus_k_idx_0;

  /* Sum: '<S395>/Subtract' incorporates:
   *  Constant: '<S395>/Constant'
   */
  rtb_Subtract_e = Steering_Heading_Control_Total_UL - rtb_Sum1_j;

  /* Sum: '<S395>/Sum2' incorporates:
   *  Gain: '<S395>/Gain2'
   *  UnitDelay: '<S395>/Unit Delay'
   */
  rtb_DeadZone = (Steering_Heading_Control_I * rtb_Rotationmatrixfromlocalto_3)
    + Code_Gen_Model_DW.UnitDelay_DSTATE_m2;

  /* Switch: '<S399>/Switch2' incorporates:
   *  RelationalOperator: '<S399>/LowerRelop1'
   */
  if (!(rtb_DeadZone > rtb_Subtract_e)) {
    /* Sum: '<S395>/Subtract1' incorporates:
     *  Constant: '<S395>/Constant1'
     */
    rtb_Subtract_e = Steering_Heading_Control_Total_LL - rtb_Sum1_j;

    /* Switch: '<S399>/Switch' incorporates:
     *  RelationalOperator: '<S399>/UpperRelop'
     */
    if (!(rtb_DeadZone < rtb_Subtract_e)) {
      rtb_Subtract_e = rtb_DeadZone;
    }

    /* End of Switch: '<S399>/Switch' */
  }

  /* End of Switch: '<S399>/Switch2' */

  /* Saturate: '<S395>/Saturation1' */
  if (rtb_Subtract_e > Steering_Heading_Control_I_UL) {
    rtb_Subtract_e = Steering_Heading_Control_I_UL;
  } else if (rtb_Subtract_e < Steering_Heading_Control_I_LL) {
    rtb_Subtract_e = Steering_Heading_Control_I_LL;
  }

  /* End of Saturate: '<S395>/Saturation1' */

  /* Sum: '<S395>/Add1' */
  rtb_Minus_k_idx_0 = rtb_Sum1_j + rtb_Subtract_e;

  /* Saturate: '<S395>/Saturation2' */
  if (rtb_Minus_k_idx_0 > Steering_Heading_Control_Total_UL) {
    /* Saturate: '<S395>/Saturation2' */
    Code_Gen_Model_B.Steering_Localized_PID = Steering_Heading_Control_Total_UL;
  } else if (rtb_Minus_k_idx_0 < Steering_Heading_Control_Total_LL) {
    /* Saturate: '<S395>/Saturation2' */
    Code_Gen_Model_B.Steering_Localized_PID = Steering_Heading_Control_Total_LL;
  } else {
    /* Saturate: '<S395>/Saturation2' */
    Code_Gen_Model_B.Steering_Localized_PID = rtb_Minus_k_idx_0;
  }

  /* End of Saturate: '<S395>/Saturation2' */

  /* Switch: '<S379>/Switch' incorporates:
   *  Abs: '<S379>/Abs'
   *  Constant: '<S379>/Constant'
   *  Constant: '<S394>/Constant'
   *  RelationalOperator: '<S394>/Compare'
   */
  if (fabs(Code_Gen_Model_B.Steering_Localized_PID) >
      Steering_Heading_Control_Deadzone) {
    rtb_Rotationmatrixfromlocalto_3 = Code_Gen_Model_B.Steering_Localized_PID;
  } else {
    rtb_Rotationmatrixfromlocalto_3 = 0.0;
  }

  /* End of Switch: '<S379>/Switch' */

  /* Signum: '<S378>/Sign2' incorporates:
   *  UnitDelay: '<S378>/Unit Delay'
   */
  if (rtIsNaN(Code_Gen_Model_DW.UnitDelay_DSTATE_d)) {
    rtb_Minus_k_idx_0 = (rtNaN);
  } else if (Code_Gen_Model_DW.UnitDelay_DSTATE_d < 0.0) {
    rtb_Minus_k_idx_0 = -1.0;
  } else {
    rtb_Minus_k_idx_0 = (Code_Gen_Model_DW.UnitDelay_DSTATE_d > 0.0);
  }

  /* Signum: '<S378>/Sign1' */
  if (rtIsNaN(rtb_Rotationmatrixfromlocalto_3)) {
    tmp = (rtNaN);
  } else if (rtb_Rotationmatrixfromlocalto_3 < 0.0) {
    tmp = -1.0;
  } else {
    tmp = (rtb_Rotationmatrixfromlocalto_3 > 0.0);
  }

  /* Product: '<S378>/Product1' incorporates:
   *  Signum: '<S378>/Sign1'
   *  Signum: '<S378>/Sign2'
   */
  rtb_Minus_k_idx_0 *= tmp;
  if (rtIsNaN(rtb_Minus_k_idx_0)) {
    i = 0;
  } else {
    i = (int32_T)fmod(rtb_Minus_k_idx_0, 256.0);
  }

  /* Switch: '<S378>/Switch' incorporates:
   *  Constant: '<S378>/Constant'
   *  Constant: '<S387>/Constant'
   *  Constant: '<S388>/Constant'
   *  Logic: '<S378>/or'
   *  Product: '<S378>/Product1'
   *  RelationalOperator: '<S387>/Compare'
   *  RelationalOperator: '<S388>/Compare'
   *  UnitDelay: '<S378>/Unit Delay'
   */
  if ((Code_Gen_Model_DW.UnitDelay_DSTATE_d == 0.0) || (((i < 0) ? ((int32_T)
         ((int8_T)(-((int8_T)((uint8_T)(-((real_T)i))))))) : i) > 0)) {
    rtb_Subtract2_h = rtb_Rotationmatrixfromlocalto_3;
  } else {
    rtb_Subtract2_h = 0.0;
  }

  /* End of Switch: '<S378>/Switch' */

  /* Switch: '<S393>/Init' incorporates:
   *  UnitDelay: '<S393>/FixPt Unit Delay1'
   *  UnitDelay: '<S393>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_p != 0) {
    rtb_thetay_e = rtb_Subtract2_h;
  } else {
    rtb_thetay_e = Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_e;
  }

  /* End of Switch: '<S393>/Init' */

  /* RelationalOperator: '<S389>/Compare' incorporates:
   *  Constant: '<S389>/Constant'
   */
  rtb_Is_Absolute_Translation_g = (rtb_Subtract2_h == 0.0);

  /* RelationalOperator: '<S390>/Compare' incorporates:
   *  Constant: '<S390>/Constant'
   */
  rtb_Is_Absolute_Steering = (rtb_Subtract2_h > 0.0);

  /* Abs: '<S378>/Abs' incorporates:
   *  Sum: '<S378>/Subtract'
   *  UnitDelay: '<S378>/Unit Delay'
   */
  rtb_Sum1_j = fabs(Code_Gen_Model_DW.UnitDelay_DSTATE_d -
                    rtb_Rotationmatrixfromlocalto_3);

  /* Switch: '<S378>/Switch5' incorporates:
   *  Constant: '<S378>/Constant1'
   *  Switch: '<S378>/Switch1'
   *  UnaryMinus: '<S378>/Unary Minus'
   */
  if (rtb_Is_Absolute_Translation_g) {
    /* SignalConversion generated from: '<S378>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S378>/Constant4'
     *  Constant: '<S378>/Constant6'
     */
    rtb_Reshapey[0] = Steering_Absolute_Cmd_Approach_Zero_Final_Thresh;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S378>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S378>/Constant2'
     *  Constant: '<S378>/Constant5'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Steering_Absolute_Cmd_Approach_Zero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S378>/Lookup Table Dynamic' */
    /* Dynamic Look-Up Table Block: '<S378>/Lookup Table Dynamic'
     * Input0  Data Type:  Floating Point real_T
     * Input1  Data Type:  Floating Point real_T
     * Input2  Data Type:  Floating Point real_T
     * Output0 Data Type:  Floating Point real_T
     * Lookup Method: Linear_Endpoint
     *
     */
    LookUp_real_T_real_T( &(rtb_LookupTableDynamic), &rtb_Reshapey[0],
                         rtb_Sum1_j, &rtb_Minus_n[0], 1U);
    rtb_Sum1_j = rtb_LookupTableDynamic;
    rtb_Minus_k_idx_0 = -Steering_Absolute_Cmd_Rate_Limit_Dec;
  } else {
    /* SignalConversion generated from: '<S378>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S378>/Constant10'
     *  Constant: '<S378>/Constant8'
     */
    rtb_Reshapey[0] = Steering_Absolute_Cmd_NonZero_Final_Scale_Factor;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S378>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S378>/Constant7'
     *  Constant: '<S378>/Constant9'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Steering_Absolute_Cmd_NonZero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S378>/Lookup Table Dynamic1' */
    /* Dynamic Look-Up Table Block: '<S378>/Lookup Table Dynamic1'
     * Input0  Data Type:  Floating Point real_T
     * Input1  Data Type:  Floating Point real_T
     * Input2  Data Type:  Floating Point real_T
     * Output0 Data Type:  Floating Point real_T
     * Lookup Method: Linear_Endpoint
     *
     */
    LookUp_real_T_real_T( &(rtb_LookupTableDynamic1), &rtb_Reshapey[0],
                         rtb_Sum1_j, &rtb_Minus_n[0], 1U);
    rtb_Sum1_j = rtb_LookupTableDynamic1;

    /* Switch: '<S378>/Switch3' incorporates:
     *  Constant: '<S378>/Constant1'
     *  Constant: '<S378>/Constant3'
     *  UnaryMinus: '<S378>/Unary Minus'
     */
    if (rtb_Is_Absolute_Steering) {
      rtb_Minus_k_idx_0 = Steering_Absolute_Cmd_Rate_Limit_Inc;
    } else {
      rtb_Minus_k_idx_0 = -Steering_Absolute_Cmd_Rate_Limit_Dec;
    }

    /* End of Switch: '<S378>/Switch3' */
  }

  /* End of Switch: '<S378>/Switch5' */

  /* Product: '<S378>/Product' incorporates:
   *  Switch: '<S378>/Switch1'
   */
  rtb_UnitDelay1_el = rtb_Minus_k_idx_0 * rtb_Sum1_j;

  /* Sum: '<S391>/Sum1' */
  rtb_DeadZone = rtb_Subtract2_h - rtb_thetay_e;

  /* Switch: '<S392>/Switch2' incorporates:
   *  RelationalOperator: '<S392>/LowerRelop1'
   */
  if (!(rtb_DeadZone > rtb_UnitDelay1_el)) {
    /* Switch: '<S378>/Switch2' incorporates:
     *  Constant: '<S378>/Constant1'
     *  Constant: '<S378>/Constant3'
     *  Switch: '<S378>/Switch4'
     *  UnaryMinus: '<S378>/Unary Minus1'
     */
    if (rtb_Is_Absolute_Translation_g) {
      rtb_Minus_k_idx_0 = Steering_Absolute_Cmd_Rate_Limit_Dec;
    } else if (rtb_Is_Absolute_Steering) {
      /* Switch: '<S378>/Switch4' incorporates:
       *  Constant: '<S378>/Constant1'
       */
      rtb_Minus_k_idx_0 = Steering_Absolute_Cmd_Rate_Limit_Dec;
    } else {
      rtb_Minus_k_idx_0 = -Steering_Absolute_Cmd_Rate_Limit_Inc;
    }

    /* Product: '<S378>/Product2' incorporates:
     *  Switch: '<S378>/Switch2'
     */
    rtb_Rotationmatrixfromlocalto_0 = rtb_Minus_k_idx_0 * rtb_Sum1_j;

    /* Switch: '<S392>/Switch' incorporates:
     *  RelationalOperator: '<S392>/UpperRelop'
     */
    if (rtb_DeadZone < rtb_Rotationmatrixfromlocalto_0) {
      rtb_UnitDelay1_el = rtb_Rotationmatrixfromlocalto_0;
    } else {
      rtb_UnitDelay1_el = rtb_DeadZone;
    }

    /* End of Switch: '<S392>/Switch' */
  }

  /* End of Switch: '<S392>/Switch2' */

  /* Sum: '<S391>/Sum' */
  rtb_Sum1_j = rtb_UnitDelay1_el + rtb_thetay_e;

  /* Signum: '<S377>/Sign2' incorporates:
   *  UnitDelay: '<S377>/Unit Delay'
   */
  if (rtIsNaN(Code_Gen_Model_DW.UnitDelay_DSTATE_g)) {
    rtb_Minus_k_idx_0 = (rtNaN);
  } else if (Code_Gen_Model_DW.UnitDelay_DSTATE_g < 0.0) {
    rtb_Minus_k_idx_0 = -1.0;
  } else {
    rtb_Minus_k_idx_0 = (Code_Gen_Model_DW.UnitDelay_DSTATE_g > 0.0);
  }

  /* Signum: '<S377>/Sign1' */
  if (rtIsNaN(Code_Gen_Model_B.Steering_Rel_Cmd_SPF)) {
    tmp = (rtNaN);
  } else if (Code_Gen_Model_B.Steering_Rel_Cmd_SPF < 0.0) {
    tmp = -1.0;
  } else {
    tmp = (Code_Gen_Model_B.Steering_Rel_Cmd_SPF > 0.0);
  }

  /* Product: '<S377>/Product1' incorporates:
   *  Signum: '<S377>/Sign1'
   *  Signum: '<S377>/Sign2'
   */
  rtb_Minus_k_idx_0 *= tmp;
  if (rtIsNaN(rtb_Minus_k_idx_0)) {
    i = 0;
  } else {
    i = (int32_T)fmod(rtb_Minus_k_idx_0, 256.0);
  }

  /* Switch: '<S377>/Switch' incorporates:
   *  Constant: '<S377>/Constant'
   *  Constant: '<S380>/Constant'
   *  Constant: '<S381>/Constant'
   *  Logic: '<S377>/or'
   *  Product: '<S377>/Product1'
   *  RelationalOperator: '<S380>/Compare'
   *  RelationalOperator: '<S381>/Compare'
   *  UnitDelay: '<S377>/Unit Delay'
   */
  if ((Code_Gen_Model_DW.UnitDelay_DSTATE_g == 0.0) || (((i < 0) ? ((int32_T)
         ((int8_T)(-((int8_T)((uint8_T)(-((real_T)i))))))) : i) > 0)) {
    rtb_Subtract2_h = Code_Gen_Model_B.Steering_Rel_Cmd_SPF;
  } else {
    rtb_Subtract2_h = 0.0;
  }

  /* End of Switch: '<S377>/Switch' */

  /* Switch: '<S386>/Init' incorporates:
   *  UnitDelay: '<S386>/FixPt Unit Delay1'
   *  UnitDelay: '<S386>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_c != 0) {
    rtb_thetay_e = rtb_Subtract2_h;
  } else {
    rtb_thetay_e = Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_p;
  }

  /* End of Switch: '<S386>/Init' */

  /* RelationalOperator: '<S382>/Compare' incorporates:
   *  Constant: '<S382>/Constant'
   */
  rtb_Is_Absolute_Translation_g = (rtb_Subtract2_h == 0.0);

  /* RelationalOperator: '<S383>/Compare' incorporates:
   *  Constant: '<S383>/Constant'
   */
  rtb_Is_Absolute_Steering = (rtb_Subtract2_h > 0.0);

  /* Abs: '<S377>/Abs' incorporates:
   *  Sum: '<S377>/Subtract'
   *  UnitDelay: '<S377>/Unit Delay'
   */
  rtb_DeadZone = fabs(Code_Gen_Model_DW.UnitDelay_DSTATE_g -
                      Code_Gen_Model_B.Steering_Rel_Cmd_SPF);

  /* Switch: '<S377>/Switch5' incorporates:
   *  Constant: '<S377>/Constant1'
   *  Switch: '<S377>/Switch1'
   *  UnaryMinus: '<S377>/Unary Minus'
   */
  if (rtb_Is_Absolute_Translation_g) {
    /* SignalConversion generated from: '<S377>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S377>/Constant4'
     *  Constant: '<S377>/Constant6'
     */
    rtb_Reshapey[0] = Steering_Relative_Cmd_Approach_Zero_Final_Thresh;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S377>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S377>/Constant2'
     *  Constant: '<S377>/Constant5'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Steering_Relative_Cmd_Approach_Zero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S377>/Lookup Table Dynamic' */
    /* Dynamic Look-Up Table Block: '<S377>/Lookup Table Dynamic'
     * Input0  Data Type:  Floating Point real_T
     * Input1  Data Type:  Floating Point real_T
     * Input2  Data Type:  Floating Point real_T
     * Output0 Data Type:  Floating Point real_T
     * Lookup Method: Linear_Endpoint
     *
     */
    LookUp_real_T_real_T( &(rtb_LookupTableDynamic_p), &rtb_Reshapey[0],
                         rtb_DeadZone, &rtb_Minus_n[0], 1U);
    rtb_DeadZone = rtb_LookupTableDynamic_p;
    rtb_Minus_k_idx_0 = -Steering_Relative_Cmd_Rate_Limit_Dec;
  } else {
    /* SignalConversion generated from: '<S377>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S377>/Constant10'
     *  Constant: '<S377>/Constant8'
     */
    rtb_Reshapey[0] = Steering_Relative_Cmd_NonZero_Final_Scale_Factor;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S377>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S377>/Constant7'
     *  Constant: '<S377>/Constant9'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Steering_Relative_Cmd_NonZero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S377>/Lookup Table Dynamic1' */
    /* Dynamic Look-Up Table Block: '<S377>/Lookup Table Dynamic1'
     * Input0  Data Type:  Floating Point real_T
     * Input1  Data Type:  Floating Point real_T
     * Input2  Data Type:  Floating Point real_T
     * Output0 Data Type:  Floating Point real_T
     * Lookup Method: Linear_Endpoint
     *
     */
    LookUp_real_T_real_T( &(rtb_LookupTableDynamic1_g), &rtb_Reshapey[0],
                         rtb_DeadZone, &rtb_Minus_n[0], 1U);
    rtb_DeadZone = rtb_LookupTableDynamic1_g;

    /* Switch: '<S377>/Switch3' incorporates:
     *  Constant: '<S377>/Constant1'
     *  Constant: '<S377>/Constant3'
     *  UnaryMinus: '<S377>/Unary Minus'
     */
    if (rtb_Is_Absolute_Steering) {
      rtb_Minus_k_idx_0 = Steering_Relative_Cmd_Rate_Limit_Inc;
    } else {
      rtb_Minus_k_idx_0 = -Steering_Relative_Cmd_Rate_Limit_Dec;
    }

    /* End of Switch: '<S377>/Switch3' */
  }

  /* End of Switch: '<S377>/Switch5' */

  /* Product: '<S377>/Product' incorporates:
   *  Switch: '<S377>/Switch1'
   */
  rtb_Rotationmatrixfromlocalto_3 = rtb_Minus_k_idx_0 * rtb_DeadZone;

  /* Sum: '<S384>/Sum1' */
  rtb_Rotationmatrixfromlocalto_0 = rtb_Subtract2_h - rtb_thetay_e;

  /* Switch: '<S385>/Switch2' incorporates:
   *  RelationalOperator: '<S385>/LowerRelop1'
   */
  if (!(rtb_Rotationmatrixfromlocalto_0 > rtb_Rotationmatrixfromlocalto_3)) {
    /* Switch: '<S377>/Switch2' incorporates:
     *  Constant: '<S377>/Constant1'
     *  Constant: '<S377>/Constant3'
     *  Switch: '<S377>/Switch4'
     *  UnaryMinus: '<S377>/Unary Minus1'
     */
    if (rtb_Is_Absolute_Translation_g) {
      rtb_Minus_k_idx_0 = Steering_Relative_Cmd_Rate_Limit_Dec;
    } else if (rtb_Is_Absolute_Steering) {
      /* Switch: '<S377>/Switch4' incorporates:
       *  Constant: '<S377>/Constant1'
       */
      rtb_Minus_k_idx_0 = Steering_Relative_Cmd_Rate_Limit_Dec;
    } else {
      rtb_Minus_k_idx_0 = -Steering_Relative_Cmd_Rate_Limit_Inc;
    }

    /* Product: '<S377>/Product2' incorporates:
     *  Switch: '<S377>/Switch2'
     */
    rtb_Rotationmatrixfromlocalto_2 = rtb_Minus_k_idx_0 * rtb_DeadZone;

    /* Switch: '<S385>/Switch' incorporates:
     *  RelationalOperator: '<S385>/UpperRelop'
     */
    if (rtb_Rotationmatrixfromlocalto_0 < rtb_Rotationmatrixfromlocalto_2) {
      rtb_Rotationmatrixfromlocalto_3 = rtb_Rotationmatrixfromlocalto_2;
    } else {
      rtb_Rotationmatrixfromlocalto_3 = rtb_Rotationmatrixfromlocalto_0;
    }

    /* End of Switch: '<S385>/Switch' */
  }

  /* End of Switch: '<S385>/Switch2' */

  /* Sum: '<S384>/Sum' */
  rtb_DeadZone = rtb_Rotationmatrixfromlocalto_3 + rtb_thetay_e;

  /* Switch: '<S367>/Switch' */
  if (Code_Gen_Model_B.Is_Absolute_Steering_SPF) {
    /* Switch: '<S367>/Switch' */
    Code_Gen_Model_B.Steering_Localized_Cmd = rtb_Sum1_j;
  } else {
    /* Switch: '<S367>/Switch' */
    Code_Gen_Model_B.Steering_Localized_Cmd = rtb_DeadZone;
  }

  /* End of Switch: '<S367>/Switch' */

  /* Fcn: '<S408>/r->x' incorporates:
   *  Fcn: '<S413>/r->x'
   *  Fcn: '<S418>/r->x'
   *  Fcn: '<S423>/r->x'
   */
  rtb_Rotationmatrixfromlocalto_2 = Code_Gen_Model_B.Translation_Speed_RL * cos
    (Code_Gen_Model_B.Translation_Steering_Cmd);

  /* Sum: '<S402>/Add' incorporates:
   *  Fcn: '<S408>/r->x'
   *  Fcn: '<S409>/r->x'
   */
  rtb_Reshapey[0] = (Code_Gen_Model_B.Steering_Localized_Cmd * cos
                     (Code_Gen_Model_ConstB.FL_Tangent_Angle)) +
    rtb_Rotationmatrixfromlocalto_2;

  /* Fcn: '<S408>/theta->y' incorporates:
   *  Fcn: '<S413>/theta->y'
   *  Fcn: '<S418>/theta->y'
   *  Fcn: '<S423>/theta->y'
   */
  rtb_Rotationmatrixfromlocalto_0 = Code_Gen_Model_B.Translation_Speed_RL * sin
    (Code_Gen_Model_B.Translation_Steering_Cmd);

  /* Sum: '<S402>/Add' incorporates:
   *  Fcn: '<S408>/theta->y'
   *  Fcn: '<S409>/theta->y'
   */
  rtb_Reshapey[1] = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                     (Code_Gen_Model_ConstB.FL_Tangent_Angle)) +
    rtb_Rotationmatrixfromlocalto_0;

  /* Sum: '<S403>/Add' incorporates:
   *  Fcn: '<S414>/r->x'
   *  Fcn: '<S414>/theta->y'
   */
  rtb_Minus_n[0] = (Code_Gen_Model_B.Steering_Localized_Cmd * cos
                    (Code_Gen_Model_ConstB.FR_Tangent_Angle)) +
    rtb_Rotationmatrixfromlocalto_2;
  rtb_Minus_n[1] = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                    (Code_Gen_Model_ConstB.FR_Tangent_Angle)) +
    rtb_Rotationmatrixfromlocalto_0;

  /* Sum: '<S404>/Add' incorporates:
   *  Fcn: '<S419>/r->x'
   *  Fcn: '<S419>/theta->y'
   */
  rtb_Add2_f[0] = (Code_Gen_Model_B.Steering_Localized_Cmd * cos
                   (Code_Gen_Model_ConstB.BL_Tangent_Angle)) +
    rtb_Rotationmatrixfromlocalto_2;
  rtb_Add2_f[1] = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                   (Code_Gen_Model_ConstB.BL_Tangent_Angle)) +
    rtb_Rotationmatrixfromlocalto_0;

  /* Sum: '<S405>/Add' incorporates:
   *  Fcn: '<S424>/r->x'
   *  Fcn: '<S424>/theta->y'
   */
  rtb_Minus_k_idx_0 = (Code_Gen_Model_B.Steering_Localized_Cmd * cos
                       (Code_Gen_Model_ConstB.BR_Tangent_Angle)) +
    rtb_Rotationmatrixfromlocalto_2;
  rtb_Minus_k_idx_1 = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                       (Code_Gen_Model_ConstB.BR_Tangent_Angle)) +
    rtb_Rotationmatrixfromlocalto_0;

  /* Fcn: '<S422>/x->r' */
  rtb_UnitDelay1_el = rt_hypotd_snf(rtb_Minus_k_idx_0, rtb_Minus_k_idx_1);

  /* RelationalOperator: '<S425>/Compare' incorporates:
   *  Constant: '<S425>/Constant'
   */
  rtb_Compare_ai = (rtb_UnitDelay1_el == 0.0);

  /* Switch: '<S421>/Switch1' */
  if (rtb_Compare_ai) {
    /* Switch: '<S421>/Switch1' incorporates:
     *  Constant: '<S421>/Constant'
     */
    Code_Gen_Model_B.BR_Desired_Wheel_Speed_in = 1.0E-15;
  } else {
    /* Switch: '<S421>/Switch1' */
    Code_Gen_Model_B.BR_Desired_Wheel_Speed_in = rtb_UnitDelay1_el;
  }

  /* End of Switch: '<S421>/Switch1' */

  /* Fcn: '<S407>/x->r' */
  rtb_UnitDelay1_el = rt_hypotd_snf(rtb_Reshapey[0], rtb_Reshapey[1]);

  /* RelationalOperator: '<S410>/Compare' incorporates:
   *  Constant: '<S410>/Constant'
   */
  rtb_Is_Absolute_Steering = (rtb_UnitDelay1_el == 0.0);

  /* Switch: '<S406>/Switch1' */
  if (rtb_Is_Absolute_Steering) {
    /* Switch: '<S406>/Switch1' incorporates:
     *  Constant: '<S406>/Constant'
     */
    Code_Gen_Model_B.FL_Desired_Wheel_Speed_in = 1.0E-15;
  } else {
    /* Switch: '<S406>/Switch1' */
    Code_Gen_Model_B.FL_Desired_Wheel_Speed_in = rtb_UnitDelay1_el;
  }

  /* End of Switch: '<S406>/Switch1' */

  /* Fcn: '<S412>/x->r' */
  rtb_Subtract2_h = rt_hypotd_snf(rtb_Minus_n[0], rtb_Minus_n[1]);

  /* RelationalOperator: '<S415>/Compare' incorporates:
   *  Constant: '<S415>/Constant'
   */
  FixPtRelationalOperator_e = (rtb_Subtract2_h == 0.0);

  /* Switch: '<S411>/Switch1' */
  if (FixPtRelationalOperator_e) {
    /* Switch: '<S411>/Switch1' incorporates:
     *  Constant: '<S411>/Constant'
     */
    Code_Gen_Model_B.FR_Desired_Wheel_Speed_in = 1.0E-15;
  } else {
    /* Switch: '<S411>/Switch1' */
    Code_Gen_Model_B.FR_Desired_Wheel_Speed_in = rtb_Subtract2_h;
  }

  /* End of Switch: '<S411>/Switch1' */

  /* Fcn: '<S417>/x->r' */
  rtb_thetay_e = rt_hypotd_snf(rtb_Add2_f[0], rtb_Add2_f[1]);

  /* RelationalOperator: '<S420>/Compare' incorporates:
   *  Constant: '<S420>/Constant'
   */
  rtb_Is_Absolute_Translation_g = (rtb_thetay_e == 0.0);

  /* Switch: '<S416>/Switch1' */
  if (rtb_Is_Absolute_Translation_g) {
    /* Switch: '<S416>/Switch1' incorporates:
     *  Constant: '<S416>/Constant'
     */
    Code_Gen_Model_B.BL_Desired_Wheel_Speed_in = 1.0E-15;
  } else {
    /* Switch: '<S416>/Switch1' */
    Code_Gen_Model_B.BL_Desired_Wheel_Speed_in = rtb_thetay_e;
  }

  /* End of Switch: '<S416>/Switch1' */

  /* Product: '<S401>/Divide' incorporates:
   *  Abs: '<S401>/Abs'
   *  Abs: '<S401>/Abs1'
   *  Abs: '<S401>/Abs2'
   *  Abs: '<S401>/Abs3'
   *  Constant: '<S401>/Constant'
   *  MinMax: '<S401>/Max'
   */
  rtb_UnitDelay1_el = 5.1198378053698752 / fmax(fmax(fmax(fmax
    (5.1198378053698752, Code_Gen_Model_B.FL_Desired_Wheel_Speed_in),
    Code_Gen_Model_B.FR_Desired_Wheel_Speed_in),
    Code_Gen_Model_B.BL_Desired_Wheel_Speed_in),
    Code_Gen_Model_B.BR_Desired_Wheel_Speed_in);

  /* Product: '<S401>/Product3' */
  Code_Gen_Model_B.BR_Desired_Wheel_Speed =
    Code_Gen_Model_B.BR_Desired_Wheel_Speed_in * rtb_UnitDelay1_el;

  /* Switch: '<S421>/Switch' */
  if (!rtb_Compare_ai) {
    /* Switch: '<S421>/Switch' incorporates:
     *  Fcn: '<S422>/x->theta'
     */
    Code_Gen_Model_B.BR_Desired_Module_Angle = rt_atan2d_snf(rtb_Minus_k_idx_1,
      rtb_Minus_k_idx_0);
  }

  /* End of Switch: '<S421>/Switch' */

  /* Trigonometry: '<S357>/Cos4' incorporates:
   *  Switch: '<S346>/Angle_Switch'
   *  Trigonometry: '<S356>/Cos4'
   */
  rtb_Minus_k_idx_1 = cos(Code_Gen_Model_B.BR_Desired_Module_Angle);

  /* Trigonometry: '<S357>/Sin5' incorporates:
   *  UnaryMinus: '<S355>/Unary Minus'
   */
  rtb_rx_p = sin(-Code_Gen_Model_B.BR_Steer_Module_Angle);

  /* Trigonometry: '<S357>/Sin4' */
  rtb_uDLookupTable_l = sin(Code_Gen_Model_B.BR_Desired_Module_Angle);

  /* Trigonometry: '<S357>/Cos5' incorporates:
   *  UnaryMinus: '<S355>/Unary Minus'
   */
  rtb_thetay_e = cos(-Code_Gen_Model_B.BR_Steer_Module_Angle);

  /* Sum: '<S357>/Subtract1' incorporates:
   *  Product: '<S357>/Product2'
   *  Product: '<S357>/Product3'
   *  Trigonometry: '<S357>/Cos4'
   */
  rtb_Rotationmatrixfromlocalto_0 = (rtb_Minus_k_idx_1 * rtb_rx_p) +
    (rtb_uDLookupTable_l * rtb_thetay_e);

  /* Sum: '<S357>/Subtract' incorporates:
   *  Product: '<S357>/Product'
   *  Product: '<S357>/Product1'
   *  Trigonometry: '<S357>/Cos4'
   */
  rtb_Rotationmatrixfromlocalto_2 = (rtb_Minus_k_idx_1 * rtb_thetay_e) -
    (rtb_uDLookupTable_l * rtb_rx_p);

  /* Math: '<S357>/Hypot' */
  rtb_Hypot = rt_hypotd_snf(rtb_Rotationmatrixfromlocalto_2,
    rtb_Rotationmatrixfromlocalto_0);

  /* Switch: '<S357>/Switch' incorporates:
   *  Constant: '<S357>/Constant'
   *  Constant: '<S357>/Constant1'
   *  Constant: '<S358>/Constant'
   *  Product: '<S357>/Divide'
   *  Product: '<S357>/Divide1'
   *  RelationalOperator: '<S358>/Compare'
   *  Switch: '<S357>/Switch1'
   */
  if (rtb_Hypot > 1.0E-6) {
    rtb_Subtract2_h = rtb_Rotationmatrixfromlocalto_0 / rtb_Hypot;
    rtb_thetay_e = rtb_Rotationmatrixfromlocalto_2 / rtb_Hypot;
  } else {
    rtb_Subtract2_h = 0.0;
    rtb_thetay_e = 1.0;
  }

  /* End of Switch: '<S357>/Switch' */

  /* Switch: '<S346>/Speed_Switch' incorporates:
   *  Abs: '<S346>/Abs'
   *  Constant: '<S354>/Constant'
   *  RelationalOperator: '<S354>/Compare'
   *  Switch: '<S346>/Angle_Switch'
   *  Trigonometry: '<S356>/Atan1'
   *  Trigonometry: '<S357>/Atan1'
   *  UnaryMinus: '<S346>/Unary Minus'
   */
  if (fabs(rt_atan2d_snf(rtb_Subtract2_h, rtb_thetay_e)) > 1.5707963267948966) {
    rtb_Minus_k_idx_0 = -Code_Gen_Model_B.BR_Desired_Wheel_Speed;

    /* Sum: '<S356>/Subtract1' incorporates:
     *  Product: '<S356>/Product2'
     *  Product: '<S356>/Product3'
     *  Trigonometry: '<S356>/Sin4'
     *  UnaryMinus: '<S346>/Unary Minus'
     */
    rtb_Rotationmatrixfromlocalto_0 = (rtb_Minus_k_idx_1 *
      Code_Gen_Model_ConstB.Sin5_c) + (rtb_uDLookupTable_l *
      Code_Gen_Model_ConstB.Cos5_b);

    /* Sum: '<S356>/Subtract' incorporates:
     *  Product: '<S356>/Product'
     *  Product: '<S356>/Product1'
     *  Trigonometry: '<S356>/Sin4'
     */
    rtb_Hypot = (rtb_Minus_k_idx_1 * Code_Gen_Model_ConstB.Cos5_b) -
      (rtb_uDLookupTable_l * Code_Gen_Model_ConstB.Sin5_c);

    /* Math: '<S356>/Hypot' */
    rtb_Rotationmatrixfromlocalto_2 = rt_hypotd_snf(rtb_Hypot,
      rtb_Rotationmatrixfromlocalto_0);

    /* Switch: '<S356>/Switch1' incorporates:
     *  Constant: '<S356>/Constant'
     *  Constant: '<S356>/Constant1'
     *  Constant: '<S359>/Constant'
     *  Product: '<S356>/Divide'
     *  Product: '<S356>/Divide1'
     *  RelationalOperator: '<S359>/Compare'
     *  Switch: '<S356>/Switch'
     */
    if (rtb_Rotationmatrixfromlocalto_2 > 1.0E-6) {
      rtb_Hypot /= rtb_Rotationmatrixfromlocalto_2;
      rtb_Rotationmatrixfromlocalto_0 /= rtb_Rotationmatrixfromlocalto_2;
    } else {
      rtb_Hypot = 1.0;
      rtb_Rotationmatrixfromlocalto_0 = 0.0;
    }

    /* End of Switch: '<S356>/Switch1' */
    rtb_rx_p = rt_atan2d_snf(rtb_Rotationmatrixfromlocalto_0, rtb_Hypot);
  } else {
    rtb_Minus_k_idx_0 = Code_Gen_Model_B.BR_Desired_Wheel_Speed;
    rtb_rx_p = Code_Gen_Model_B.BR_Desired_Module_Angle;
  }

  /* Product: '<S349>/Product2' incorporates:
   *  Constant: '<S349>/Constant'
   *  Switch: '<S346>/Speed_Switch'
   */
  rtb_Subtract2_h = rtb_Minus_k_idx_0 * 1210.9758620668042;

  /* Signum: '<S344>/Sign' */
  if (rtIsNaN(rtb_Subtract2_h)) {
    rtb_Minus_k_idx_0 = (rtNaN);
  } else if (rtb_Subtract2_h < 0.0) {
    rtb_Minus_k_idx_0 = -1.0;
  } else {
    rtb_Minus_k_idx_0 = (rtb_Subtract2_h > 0.0);
  }

  /* Signum: '<S344>/Sign1' incorporates:
   *  Inport: '<Root>/BackRight_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.BackRight_Drive_Motor_Speed)) {
    tmp = (rtNaN);
  } else if (Code_Gen_Model_U.BackRight_Drive_Motor_Speed < 0.0) {
    tmp = -1.0;
  } else {
    tmp = (Code_Gen_Model_U.BackRight_Drive_Motor_Speed > 0.0);
  }

  /* Sum: '<S347>/Add' incorporates:
   *  Sum: '<S348>/Sum'
   */
  rtb_rx_p -= Code_Gen_Model_B.BR_Steer_Module_Angle;

  /* Product: '<S279>/Product' incorporates:
   *  Abs: '<S344>/Abs'
   *  Abs: '<S347>/Abs'
   *  Constant: '<S350>/Constant'
   *  Constant: '<S360>/Constant3'
   *  Constant: '<S360>/Constant4'
   *  Inport: '<Root>/BackRight_Drive_Motor_Speed'
   *  Logic: '<S344>/OR'
   *  Lookup_n-D: '<S347>/1-D Lookup Table'
   *  Math: '<S360>/Math Function'
   *  RelationalOperator: '<S344>/Equal1'
   *  RelationalOperator: '<S350>/Compare'
   *  Signum: '<S344>/Sign'
   *  Signum: '<S344>/Sign1'
   *  Sum: '<S347>/Add'
   *  Sum: '<S360>/Add1'
   *  Sum: '<S360>/Add2'
   */
  rtb_Subtract2_h = (((real_T)((rtb_Minus_k_idx_0 == tmp) || (fabs
    (Code_Gen_Model_U.BackRight_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_Subtract2_h) *
    look1_binlcpw(fabs(rt_modd_snf(rtb_rx_p + 1.5707963267948966,
    3.1415926535897931) - 1.5707963267948966), Code_Gen_Model_ConstP.pooled38,
                  Code_Gen_Model_ConstP.pooled37, 1U);

  /* Sum: '<S345>/Sum' incorporates:
   *  Inport: '<Root>/BackRight_Drive_Motor_Speed'
   */
  rtb_Hypot = rtb_Subtract2_h - Code_Gen_Model_U.BackRight_Drive_Motor_Speed;

  /* Sum: '<S352>/Sum1' incorporates:
   *  Constant: '<S345>/Constant2'
   *  Product: '<S352>/Product'
   *  Sum: '<S352>/Sum'
   *  UnitDelay: '<S352>/Unit Delay1'
   */
  rtb_Rotationmatrixfromlocalto_0 = ((rtb_Hypot -
    Code_Gen_Model_DW.UnitDelay1_DSTATE_j) * Drive_Motor_Control_D_FilterCoeff)
    + Code_Gen_Model_DW.UnitDelay1_DSTATE_j;

  /* Product: '<S345>/Product' incorporates:
   *  Constant: '<S345>/Constant3'
   */
  rtb_Rotationmatrixfromlocalto_2 = rtb_Rotationmatrixfromlocalto_0 *
    Drive_Motor_Control_D;

  /* Sum: '<S351>/Diff' incorporates:
   *  UnitDelay: '<S351>/UD'
   *
   * Block description for '<S351>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S351>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Minus_k_idx_0 = rtb_Rotationmatrixfromlocalto_2 -
    Code_Gen_Model_DW.UD_DSTATE_j;

  /* Saturate: '<S345>/Saturation' */
  if (rtb_Minus_k_idx_0 > Drive_Motor_Control_D_UL) {
    rtb_Minus_k_idx_0 = Drive_Motor_Control_D_UL;
  } else if (rtb_Minus_k_idx_0 < Drive_Motor_Control_D_LL) {
    rtb_Minus_k_idx_0 = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S345>/Add' incorporates:
   *  Gain: '<S345>/Gain'
   *  Gain: '<S345>/Gain1'
   *  Saturate: '<S345>/Saturation'
   */
  rtb_MatrixConcatenate_b_idx_0 = ((Drive_Motor_Control_FF * rtb_Subtract2_h) +
    (Drive_Motor_Control_P * rtb_Hypot)) + rtb_Minus_k_idx_0;

  /* Switch: '<S345>/Switch' incorporates:
   *  Constant: '<S345>/Constant4'
   */
  if (Code_Gen_Model_B.Swerve_Drive_Integral_Enable) {
    /* Sum: '<S345>/Sum2' incorporates:
     *  Gain: '<S345>/Gain2'
     *  UnitDelay: '<S345>/Unit Delay'
     */
    rtb_Hypot = (Drive_Motor_Control_I * rtb_Hypot) +
      Code_Gen_Model_DW.UnitDelay_DSTATE_l;

    /* Sum: '<S345>/Subtract' incorporates:
     *  Constant: '<S345>/Constant'
     */
    rtb_MatrixConcatenate_b_idx_1 = 1.0 - rtb_MatrixConcatenate_b_idx_0;

    /* Switch: '<S353>/Switch2' incorporates:
     *  Constant: '<S345>/Constant'
     *  RelationalOperator: '<S353>/LowerRelop1'
     *  Sum: '<S345>/Subtract'
     */
    if (!(rtb_Hypot > (1.0 - rtb_MatrixConcatenate_b_idx_0))) {
      /* Sum: '<S345>/Subtract1' incorporates:
       *  Constant: '<S345>/Constant1'
       */
      rtb_MatrixConcatenate_b_idx_1 = -1.0 - rtb_MatrixConcatenate_b_idx_0;

      /* Switch: '<S353>/Switch' incorporates:
       *  Constant: '<S345>/Constant1'
       *  RelationalOperator: '<S353>/UpperRelop'
       *  Sum: '<S345>/Subtract1'
       */
      if (!(rtb_Hypot < (-1.0 - rtb_MatrixConcatenate_b_idx_0))) {
        rtb_MatrixConcatenate_b_idx_1 = rtb_Hypot;
      }

      /* End of Switch: '<S353>/Switch' */
    }

    /* End of Switch: '<S353>/Switch2' */

    /* Saturate: '<S345>/Saturation1' */
    if (rtb_MatrixConcatenate_b_idx_1 > Drive_Motor_Control_I_UL) {
      rtb_Hypot = Drive_Motor_Control_I_UL;
    } else if (rtb_MatrixConcatenate_b_idx_1 < Drive_Motor_Control_I_LL) {
      rtb_Hypot = Drive_Motor_Control_I_LL;
    } else {
      rtb_Hypot = rtb_MatrixConcatenate_b_idx_1;
    }

    /* End of Saturate: '<S345>/Saturation1' */
  } else {
    rtb_Hypot = 0.0;
  }

  /* End of Switch: '<S345>/Switch' */

  /* Sum: '<S345>/Add1' */
  rtb_Minus_k_idx_0 = rtb_MatrixConcatenate_b_idx_0 + rtb_Hypot;

  /* Saturate: '<S345>/Saturation2' */
  if (rtb_Minus_k_idx_0 > 1.0) {
    /* Outport: '<Root>/BackRight_Drive_DutyCycle' */
    Code_Gen_Model_Y.BackRight_Drive_DutyCycle = 1.0;
  } else if (rtb_Minus_k_idx_0 < -1.0) {
    /* Outport: '<Root>/BackRight_Drive_DutyCycle' */
    Code_Gen_Model_Y.BackRight_Drive_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/BackRight_Drive_DutyCycle' */
    Code_Gen_Model_Y.BackRight_Drive_DutyCycle = rtb_Minus_k_idx_0;
  }

  /* End of Saturate: '<S345>/Saturation2' */

  /* Product: '<S401>/Product' */
  Code_Gen_Model_B.FL_Desired_Wheel_Speed =
    Code_Gen_Model_B.FL_Desired_Wheel_Speed_in * rtb_UnitDelay1_el;

  /* Switch: '<S406>/Switch' */
  if (!rtb_Is_Absolute_Steering) {
    /* Switch: '<S406>/Switch' incorporates:
     *  Fcn: '<S407>/x->theta'
     */
    Code_Gen_Model_B.FL_Desired_Module_Angle = rt_atan2d_snf(rtb_Reshapey[1],
      rtb_Reshapey[0]);
  }

  /* End of Switch: '<S406>/Switch' */

  /* Trigonometry: '<S294>/Cos4' incorporates:
   *  Switch: '<S283>/Angle_Switch'
   *  Trigonometry: '<S293>/Cos4'
   */
  rtb_Minus_k_idx_1 = cos(Code_Gen_Model_B.FL_Desired_Module_Angle);

  /* Trigonometry: '<S294>/Sin5' incorporates:
   *  UnaryMinus: '<S292>/Unary Minus'
   */
  rtb_uDLookupTable_l = sin(-Code_Gen_Model_B.FL_Steer_Module_Angle);

  /* Trigonometry: '<S294>/Sin4' */
  rtb_Rotationmatrixfromlocalto_3 = sin(Code_Gen_Model_B.FL_Desired_Module_Angle);

  /* Trigonometry: '<S294>/Cos5' incorporates:
   *  UnaryMinus: '<S292>/Unary Minus'
   */
  rtb_thetay_e = cos(-Code_Gen_Model_B.FL_Steer_Module_Angle);

  /* Sum: '<S294>/Subtract1' incorporates:
   *  Product: '<S294>/Product2'
   *  Product: '<S294>/Product3'
   *  Trigonometry: '<S294>/Cos4'
   */
  rtb_MatrixConcatenate_b_idx_0 = (rtb_Minus_k_idx_1 * rtb_uDLookupTable_l) +
    (rtb_Rotationmatrixfromlocalto_3 * rtb_thetay_e);

  /* Sum: '<S294>/Subtract' incorporates:
   *  Product: '<S294>/Product'
   *  Product: '<S294>/Product1'
   *  Trigonometry: '<S294>/Cos4'
   */
  rtb_MatrixConcatenate_b_idx_1 = (rtb_Minus_k_idx_1 * rtb_thetay_e) -
    (rtb_Rotationmatrixfromlocalto_3 * rtb_uDLookupTable_l);

  /* Math: '<S294>/Hypot' */
  rtb_Hypot_g5 = rt_hypotd_snf(rtb_MatrixConcatenate_b_idx_1,
    rtb_MatrixConcatenate_b_idx_0);

  /* Switch: '<S294>/Switch' incorporates:
   *  Constant: '<S294>/Constant'
   *  Constant: '<S294>/Constant1'
   *  Constant: '<S295>/Constant'
   *  Product: '<S294>/Divide'
   *  Product: '<S294>/Divide1'
   *  RelationalOperator: '<S295>/Compare'
   *  Switch: '<S294>/Switch1'
   */
  if (rtb_Hypot_g5 > 1.0E-6) {
    rtb_Subtract2_h = rtb_MatrixConcatenate_b_idx_0 / rtb_Hypot_g5;
    rtb_thetay_e = rtb_MatrixConcatenate_b_idx_1 / rtb_Hypot_g5;
  } else {
    rtb_Subtract2_h = 0.0;
    rtb_thetay_e = 1.0;
  }

  /* End of Switch: '<S294>/Switch' */

  /* Switch: '<S283>/Speed_Switch' incorporates:
   *  Abs: '<S283>/Abs'
   *  Constant: '<S291>/Constant'
   *  RelationalOperator: '<S291>/Compare'
   *  Switch: '<S283>/Angle_Switch'
   *  Trigonometry: '<S293>/Atan1'
   *  Trigonometry: '<S294>/Atan1'
   *  UnaryMinus: '<S283>/Unary Minus'
   */
  if (fabs(rt_atan2d_snf(rtb_Subtract2_h, rtb_thetay_e)) > 1.5707963267948966) {
    rtb_Minus_k_idx_0 = -Code_Gen_Model_B.FL_Desired_Wheel_Speed;

    /* Sum: '<S293>/Subtract1' incorporates:
     *  Product: '<S293>/Product2'
     *  Product: '<S293>/Product3'
     *  Trigonometry: '<S293>/Sin4'
     *  UnaryMinus: '<S283>/Unary Minus'
     */
    rtb_MatrixConcatenate_b_idx_0 = (rtb_Minus_k_idx_1 *
      Code_Gen_Model_ConstB.Sin5) + (rtb_Rotationmatrixfromlocalto_3 *
      Code_Gen_Model_ConstB.Cos5);

    /* Sum: '<S293>/Subtract' incorporates:
     *  Product: '<S293>/Product'
     *  Product: '<S293>/Product1'
     *  Trigonometry: '<S293>/Sin4'
     */
    rtb_Hypot_g5 = (rtb_Minus_k_idx_1 * Code_Gen_Model_ConstB.Cos5) -
      (rtb_Rotationmatrixfromlocalto_3 * Code_Gen_Model_ConstB.Sin5);

    /* Math: '<S293>/Hypot' */
    rtb_MatrixConcatenate_b_idx_1 = rt_hypotd_snf(rtb_Hypot_g5,
      rtb_MatrixConcatenate_b_idx_0);

    /* Switch: '<S293>/Switch1' incorporates:
     *  Constant: '<S293>/Constant'
     *  Constant: '<S293>/Constant1'
     *  Constant: '<S296>/Constant'
     *  Product: '<S293>/Divide'
     *  Product: '<S293>/Divide1'
     *  RelationalOperator: '<S296>/Compare'
     *  Switch: '<S293>/Switch'
     */
    if (rtb_MatrixConcatenate_b_idx_1 > 1.0E-6) {
      rtb_Hypot_g5 /= rtb_MatrixConcatenate_b_idx_1;
      rtb_MatrixConcatenate_b_idx_0 /= rtb_MatrixConcatenate_b_idx_1;
    } else {
      rtb_Hypot_g5 = 1.0;
      rtb_MatrixConcatenate_b_idx_0 = 0.0;
    }

    /* End of Switch: '<S293>/Switch1' */
    rtb_uDLookupTable_l = rt_atan2d_snf(rtb_MatrixConcatenate_b_idx_0,
      rtb_Hypot_g5);
  } else {
    rtb_Minus_k_idx_0 = Code_Gen_Model_B.FL_Desired_Wheel_Speed;
    rtb_uDLookupTable_l = Code_Gen_Model_B.FL_Desired_Module_Angle;
  }

  /* Product: '<S286>/Product2' incorporates:
   *  Constant: '<S286>/Constant'
   *  Switch: '<S283>/Speed_Switch'
   */
  rtb_Subtract2_h = rtb_Minus_k_idx_0 * 1210.9758620668042;

  /* Signum: '<S281>/Sign' */
  if (rtIsNaN(rtb_Subtract2_h)) {
    rtb_Minus_k_idx_0 = (rtNaN);
  } else if (rtb_Subtract2_h < 0.0) {
    rtb_Minus_k_idx_0 = -1.0;
  } else {
    rtb_Minus_k_idx_0 = (rtb_Subtract2_h > 0.0);
  }

  /* Signum: '<S281>/Sign1' incorporates:
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed)) {
    tmp = (rtNaN);
  } else if (Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed < 0.0) {
    tmp = -1.0;
  } else {
    tmp = (Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed > 0.0);
  }

  /* Sum: '<S284>/Add' incorporates:
   *  Sum: '<S285>/Sum'
   */
  rtb_uDLookupTable_l -= Code_Gen_Model_B.FL_Steer_Module_Angle;

  /* Product: '<S276>/Product' incorporates:
   *  Abs: '<S281>/Abs'
   *  Abs: '<S284>/Abs'
   *  Constant: '<S287>/Constant'
   *  Constant: '<S297>/Constant3'
   *  Constant: '<S297>/Constant4'
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Speed'
   *  Logic: '<S281>/OR'
   *  Lookup_n-D: '<S284>/1-D Lookup Table'
   *  Math: '<S297>/Math Function'
   *  RelationalOperator: '<S281>/Equal1'
   *  RelationalOperator: '<S287>/Compare'
   *  Signum: '<S281>/Sign'
   *  Signum: '<S281>/Sign1'
   *  Sum: '<S284>/Add'
   *  Sum: '<S297>/Add1'
   *  Sum: '<S297>/Add2'
   */
  rtb_Subtract2_h = (((real_T)((rtb_Minus_k_idx_0 == tmp) || (fabs
    (Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_Subtract2_h) *
    look1_binlcpw(fabs(rt_modd_snf(rtb_uDLookupTable_l + 1.5707963267948966,
    3.1415926535897931) - 1.5707963267948966), Code_Gen_Model_ConstP.pooled38,
                  Code_Gen_Model_ConstP.pooled37, 1U);

  /* Sum: '<S282>/Sum' incorporates:
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Speed'
   */
  rtb_Hypot_g5 = rtb_Subtract2_h - Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed;

  /* Sum: '<S289>/Sum1' incorporates:
   *  Constant: '<S282>/Constant2'
   *  Product: '<S289>/Product'
   *  Sum: '<S289>/Sum'
   *  UnitDelay: '<S289>/Unit Delay1'
   */
  rtb_MatrixConcatenate_b_idx_0 = ((rtb_Hypot_g5 -
    Code_Gen_Model_DW.UnitDelay1_DSTATE_f) * Drive_Motor_Control_D_FilterCoeff)
    + Code_Gen_Model_DW.UnitDelay1_DSTATE_f;

  /* Product: '<S282>/Product' incorporates:
   *  Constant: '<S282>/Constant3'
   */
  rtb_MatrixConcatenate_b_idx_1 = rtb_MatrixConcatenate_b_idx_0 *
    Drive_Motor_Control_D;

  /* Sum: '<S288>/Diff' incorporates:
   *  UnitDelay: '<S288>/UD'
   *
   * Block description for '<S288>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S288>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Minus_k_idx_0 = rtb_MatrixConcatenate_b_idx_1 -
    Code_Gen_Model_DW.UD_DSTATE_h;

  /* Saturate: '<S282>/Saturation' */
  if (rtb_Minus_k_idx_0 > Drive_Motor_Control_D_UL) {
    rtb_Minus_k_idx_0 = Drive_Motor_Control_D_UL;
  } else if (rtb_Minus_k_idx_0 < Drive_Motor_Control_D_LL) {
    rtb_Minus_k_idx_0 = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S282>/Add' incorporates:
   *  Gain: '<S282>/Gain'
   *  Gain: '<S282>/Gain1'
   *  Saturate: '<S282>/Saturation'
   */
  rtb_Add_ju = ((Drive_Motor_Control_FF * rtb_Subtract2_h) +
                (Drive_Motor_Control_P * rtb_Hypot_g5)) + rtb_Minus_k_idx_0;

  /* Switch: '<S282>/Switch' incorporates:
   *  Constant: '<S282>/Constant4'
   */
  if (Code_Gen_Model_B.Swerve_Drive_Integral_Enable) {
    /* Sum: '<S282>/Sum2' incorporates:
     *  Gain: '<S282>/Gain2'
     *  UnitDelay: '<S282>/Unit Delay'
     */
    rtb_Hypot_g5 = (Drive_Motor_Control_I * rtb_Hypot_g5) +
      Code_Gen_Model_DW.UnitDelay_DSTATE_j;

    /* Sum: '<S282>/Subtract' incorporates:
     *  Constant: '<S282>/Constant'
     */
    rtb_Switch2_n = 1.0 - rtb_Add_ju;

    /* Switch: '<S290>/Switch2' incorporates:
     *  Constant: '<S282>/Constant'
     *  RelationalOperator: '<S290>/LowerRelop1'
     *  Sum: '<S282>/Subtract'
     */
    if (!(rtb_Hypot_g5 > (1.0 - rtb_Add_ju))) {
      /* Sum: '<S282>/Subtract1' incorporates:
       *  Constant: '<S282>/Constant1'
       */
      rtb_Switch2_n = -1.0 - rtb_Add_ju;

      /* Switch: '<S290>/Switch' incorporates:
       *  Constant: '<S282>/Constant1'
       *  RelationalOperator: '<S290>/UpperRelop'
       *  Sum: '<S282>/Subtract1'
       */
      if (!(rtb_Hypot_g5 < (-1.0 - rtb_Add_ju))) {
        rtb_Switch2_n = rtb_Hypot_g5;
      }

      /* End of Switch: '<S290>/Switch' */
    }

    /* End of Switch: '<S290>/Switch2' */

    /* Saturate: '<S282>/Saturation1' */
    if (rtb_Switch2_n > Drive_Motor_Control_I_UL) {
      rtb_Hypot_g5 = Drive_Motor_Control_I_UL;
    } else if (rtb_Switch2_n < Drive_Motor_Control_I_LL) {
      rtb_Hypot_g5 = Drive_Motor_Control_I_LL;
    } else {
      rtb_Hypot_g5 = rtb_Switch2_n;
    }

    /* End of Saturate: '<S282>/Saturation1' */
  } else {
    rtb_Hypot_g5 = 0.0;
  }

  /* End of Switch: '<S282>/Switch' */

  /* Sum: '<S282>/Add1' */
  rtb_Minus_k_idx_0 = rtb_Add_ju + rtb_Hypot_g5;

  /* Saturate: '<S282>/Saturation2' */
  if (rtb_Minus_k_idx_0 > 1.0) {
    /* Outport: '<Root>/FrontLeft_Drive_DutyCycle' */
    Code_Gen_Model_Y.FrontLeft_Drive_DutyCycle = 1.0;
  } else if (rtb_Minus_k_idx_0 < -1.0) {
    /* Outport: '<Root>/FrontLeft_Drive_DutyCycle' */
    Code_Gen_Model_Y.FrontLeft_Drive_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/FrontLeft_Drive_DutyCycle' */
    Code_Gen_Model_Y.FrontLeft_Drive_DutyCycle = rtb_Minus_k_idx_0;
  }

  /* End of Saturate: '<S282>/Saturation2' */

  /* Sum: '<S298>/Add1' incorporates:
   *  Constant: '<S298>/Constant3'
   *  Constant: '<S298>/Constant4'
   *  Math: '<S298>/Math Function'
   *  Sum: '<S298>/Add2'
   */
  rtb_Subtract2_h = rt_modd_snf(rtb_uDLookupTable_l + 3.1415926535897931,
    6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S300>/Sum1' incorporates:
   *  Constant: '<S285>/Constant2'
   *  Product: '<S300>/Product'
   *  Sum: '<S300>/Sum'
   *  UnitDelay: '<S300>/Unit Delay1'
   */
  rtb_Add_ju = ((rtb_Subtract2_h - Code_Gen_Model_DW.UnitDelay1_DSTATE_b) *
                Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_b;

  /* Product: '<S285>/Product' incorporates:
   *  Constant: '<S285>/Constant3'
   */
  rtb_Switch2_n = rtb_Add_ju * Steering_Motor_Control_D;

  /* Sum: '<S299>/Diff' incorporates:
   *  UnitDelay: '<S299>/UD'
   *
   * Block description for '<S299>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S299>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Minus_k_idx_0 = rtb_Switch2_n - Code_Gen_Model_DW.UD_DSTATE_b;

  /* Saturate: '<S285>/Saturation' */
  if (rtb_Minus_k_idx_0 > Steering_Motor_Control_D_UL) {
    rtb_Minus_k_idx_0 = Steering_Motor_Control_D_UL;
  } else if (rtb_Minus_k_idx_0 < Steering_Motor_Control_D_LL) {
    rtb_Minus_k_idx_0 = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S285>/Add' incorporates:
   *  Gain: '<S285>/Gain1'
   *  Saturate: '<S285>/Saturation'
   */
  rtb_Rotationmatrixfromlocalto_3 = (Steering_Motor_Control_P * rtb_Subtract2_h)
    + rtb_Minus_k_idx_0;

  /* Sum: '<S285>/Subtract' incorporates:
   *  Constant: '<S285>/Constant'
   */
  rtb_thetay_e = 1.0 - rtb_Rotationmatrixfromlocalto_3;

  /* Sum: '<S285>/Sum2' incorporates:
   *  Gain: '<S285>/Gain2'
   *  UnitDelay: '<S285>/Unit Delay'
   */
  rtb_Sum2_e = (Steering_Motor_Control_I * rtb_Subtract2_h) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_e;

  /* Switch: '<S301>/Switch2' incorporates:
   *  Constant: '<S285>/Constant'
   *  RelationalOperator: '<S301>/LowerRelop1'
   *  Sum: '<S285>/Subtract'
   */
  if (!(rtb_Sum2_e > (1.0 - rtb_Rotationmatrixfromlocalto_3))) {
    /* Switch: '<S301>/Switch' incorporates:
     *  Constant: '<S285>/Constant1'
     *  RelationalOperator: '<S301>/UpperRelop'
     *  Sum: '<S285>/Subtract1'
     */
    if (rtb_Sum2_e < (-1.0 - rtb_Rotationmatrixfromlocalto_3)) {
      rtb_thetay_e = -1.0 - rtb_Rotationmatrixfromlocalto_3;
    } else {
      rtb_thetay_e = rtb_Sum2_e;
    }

    /* End of Switch: '<S301>/Switch' */
  }

  /* End of Switch: '<S301>/Switch2' */

  /* Saturate: '<S285>/Saturation1' */
  if (rtb_thetay_e > Steering_Motor_Control_I_UL) {
    rtb_Sum2_e = Steering_Motor_Control_I_UL;
  } else if (rtb_thetay_e < Steering_Motor_Control_I_LL) {
    rtb_Sum2_e = Steering_Motor_Control_I_LL;
  } else {
    rtb_Sum2_e = rtb_thetay_e;
  }

  /* End of Saturate: '<S285>/Saturation1' */

  /* Sum: '<S285>/Add1' */
  rtb_Minus_k_idx_0 = rtb_Rotationmatrixfromlocalto_3 + rtb_Sum2_e;

  /* Saturate: '<S285>/Saturation2' */
  if (rtb_Minus_k_idx_0 > 1.0) {
    /* Outport: '<Root>/FrontLeft_Steer_DutyCycle' */
    Code_Gen_Model_Y.FrontLeft_Steer_DutyCycle = 1.0;
  } else if (rtb_Minus_k_idx_0 < -1.0) {
    /* Outport: '<Root>/FrontLeft_Steer_DutyCycle' */
    Code_Gen_Model_Y.FrontLeft_Steer_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/FrontLeft_Steer_DutyCycle' */
    Code_Gen_Model_Y.FrontLeft_Steer_DutyCycle = rtb_Minus_k_idx_0;
  }

  /* End of Saturate: '<S285>/Saturation2' */

  /* Product: '<S401>/Product1' */
  Code_Gen_Model_B.FR_Desired_Wheel_Speed =
    Code_Gen_Model_B.FR_Desired_Wheel_Speed_in * rtb_UnitDelay1_el;

  /* Switch: '<S411>/Switch' */
  if (!FixPtRelationalOperator_e) {
    /* Switch: '<S411>/Switch' incorporates:
     *  Fcn: '<S412>/x->theta'
     */
    Code_Gen_Model_B.FR_Desired_Module_Angle = rt_atan2d_snf(rtb_Minus_n[1],
      rtb_Minus_n[0]);
  }

  /* End of Switch: '<S411>/Switch' */

  /* Trigonometry: '<S315>/Cos4' incorporates:
   *  Switch: '<S304>/Angle_Switch'
   *  Trigonometry: '<S314>/Cos4'
   */
  rtb_Minus_k_idx_1 = cos(Code_Gen_Model_B.FR_Desired_Module_Angle);

  /* Trigonometry: '<S315>/Sin5' incorporates:
   *  UnaryMinus: '<S313>/Unary Minus'
   */
  rtb_uDLookupTable_l = sin(-Code_Gen_Model_B.FR_Steer_Module_Angle);

  /* Trigonometry: '<S315>/Sin4' */
  rtb_Rotationmatrixfromlocalto_3 = sin(Code_Gen_Model_B.FR_Desired_Module_Angle);

  /* Trigonometry: '<S315>/Cos5' incorporates:
   *  UnaryMinus: '<S313>/Unary Minus'
   */
  rtb_thetay_e = cos(-Code_Gen_Model_B.FR_Steer_Module_Angle);

  /* Sum: '<S315>/Subtract1' incorporates:
   *  Product: '<S315>/Product2'
   *  Product: '<S315>/Product3'
   *  Trigonometry: '<S315>/Cos4'
   */
  rtb_Subtract2_h = (rtb_Minus_k_idx_1 * rtb_uDLookupTable_l) +
    (rtb_Rotationmatrixfromlocalto_3 * rtb_thetay_e);

  /* Sum: '<S315>/Subtract' incorporates:
   *  Product: '<S315>/Product'
   *  Product: '<S315>/Product1'
   *  Trigonometry: '<S315>/Cos4'
   */
  rtb_Subtract_gy = (rtb_Minus_k_idx_1 * rtb_thetay_e) -
    (rtb_Rotationmatrixfromlocalto_3 * rtb_uDLookupTable_l);

  /* Math: '<S315>/Hypot' */
  rtb_Hypot_b = rt_hypotd_snf(rtb_Subtract_gy, rtb_Subtract2_h);

  /* Switch: '<S315>/Switch' incorporates:
   *  Constant: '<S315>/Constant'
   *  Constant: '<S315>/Constant1'
   *  Constant: '<S316>/Constant'
   *  Product: '<S315>/Divide'
   *  Product: '<S315>/Divide1'
   *  RelationalOperator: '<S316>/Compare'
   *  Switch: '<S315>/Switch1'
   */
  if (rtb_Hypot_b > 1.0E-6) {
    rtb_Subtract2_h /= rtb_Hypot_b;
    rtb_thetay_e = rtb_Subtract_gy / rtb_Hypot_b;
  } else {
    rtb_Subtract2_h = 0.0;
    rtb_thetay_e = 1.0;
  }

  /* End of Switch: '<S315>/Switch' */

  /* Switch: '<S304>/Speed_Switch' incorporates:
   *  Abs: '<S304>/Abs'
   *  Constant: '<S312>/Constant'
   *  RelationalOperator: '<S312>/Compare'
   *  Switch: '<S304>/Angle_Switch'
   *  Trigonometry: '<S314>/Atan1'
   *  Trigonometry: '<S315>/Atan1'
   *  UnaryMinus: '<S304>/Unary Minus'
   */
  if (fabs(rt_atan2d_snf(rtb_Subtract2_h, rtb_thetay_e)) > 1.5707963267948966) {
    rtb_Minus_k_idx_0 = -Code_Gen_Model_B.FR_Desired_Wheel_Speed;

    /* Sum: '<S314>/Subtract1' incorporates:
     *  Product: '<S314>/Product2'
     *  Product: '<S314>/Product3'
     *  Trigonometry: '<S314>/Sin4'
     *  UnaryMinus: '<S304>/Unary Minus'
     */
    rtb_Subtract_gy = (rtb_Minus_k_idx_1 * Code_Gen_Model_ConstB.Sin5_m) +
      (rtb_Rotationmatrixfromlocalto_3 * Code_Gen_Model_ConstB.Cos5_g);

    /* Sum: '<S314>/Subtract' incorporates:
     *  Product: '<S314>/Product'
     *  Product: '<S314>/Product1'
     *  Trigonometry: '<S314>/Sin4'
     */
    rtb_Minus_k_idx_1 = (rtb_Minus_k_idx_1 * Code_Gen_Model_ConstB.Cos5_g) -
      (rtb_Rotationmatrixfromlocalto_3 * Code_Gen_Model_ConstB.Sin5_m);

    /* Math: '<S314>/Hypot' */
    rtb_Rotationmatrixfromlocalto_3 = rt_hypotd_snf(rtb_Minus_k_idx_1,
      rtb_Subtract_gy);

    /* Switch: '<S314>/Switch1' incorporates:
     *  Constant: '<S314>/Constant'
     *  Constant: '<S314>/Constant1'
     *  Constant: '<S317>/Constant'
     *  Product: '<S314>/Divide'
     *  Product: '<S314>/Divide1'
     *  RelationalOperator: '<S317>/Compare'
     *  Switch: '<S314>/Switch'
     */
    if (rtb_Rotationmatrixfromlocalto_3 > 1.0E-6) {
      rtb_Minus_k_idx_1 /= rtb_Rotationmatrixfromlocalto_3;
      rtb_Rotationmatrixfromlocalto_3 = rtb_Subtract_gy /
        rtb_Rotationmatrixfromlocalto_3;
    } else {
      rtb_Minus_k_idx_1 = 1.0;
      rtb_Rotationmatrixfromlocalto_3 = 0.0;
    }

    /* End of Switch: '<S314>/Switch1' */
    rtb_uDLookupTable_l = rt_atan2d_snf(rtb_Rotationmatrixfromlocalto_3,
      rtb_Minus_k_idx_1);
  } else {
    rtb_Minus_k_idx_0 = Code_Gen_Model_B.FR_Desired_Wheel_Speed;
    rtb_uDLookupTable_l = Code_Gen_Model_B.FR_Desired_Module_Angle;
  }

  /* Product: '<S307>/Product2' incorporates:
   *  Constant: '<S307>/Constant'
   *  Switch: '<S304>/Speed_Switch'
   */
  rtb_Subtract2_h = rtb_Minus_k_idx_0 * 1210.9758620668042;

  /* Signum: '<S302>/Sign' */
  if (rtIsNaN(rtb_Subtract2_h)) {
    rtb_Minus_k_idx_0 = (rtNaN);
  } else if (rtb_Subtract2_h < 0.0) {
    rtb_Minus_k_idx_0 = -1.0;
  } else {
    rtb_Minus_k_idx_0 = (rtb_Subtract2_h > 0.0);
  }

  /* Signum: '<S302>/Sign1' incorporates:
   *  Inport: '<Root>/FrontRight_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.FrontRight_Drive_Motor_Speed)) {
    tmp = (rtNaN);
  } else if (Code_Gen_Model_U.FrontRight_Drive_Motor_Speed < 0.0) {
    tmp = -1.0;
  } else {
    tmp = (Code_Gen_Model_U.FrontRight_Drive_Motor_Speed > 0.0);
  }

  /* Sum: '<S305>/Add' incorporates:
   *  Sum: '<S306>/Sum'
   */
  rtb_uDLookupTable_l -= Code_Gen_Model_B.FR_Steer_Module_Angle;

  /* Product: '<S277>/Product' incorporates:
   *  Abs: '<S302>/Abs'
   *  Abs: '<S305>/Abs'
   *  Constant: '<S308>/Constant'
   *  Constant: '<S318>/Constant3'
   *  Constant: '<S318>/Constant4'
   *  Inport: '<Root>/FrontRight_Drive_Motor_Speed'
   *  Logic: '<S302>/OR'
   *  Lookup_n-D: '<S305>/1-D Lookup Table'
   *  Math: '<S318>/Math Function'
   *  RelationalOperator: '<S302>/Equal1'
   *  RelationalOperator: '<S308>/Compare'
   *  Signum: '<S302>/Sign'
   *  Signum: '<S302>/Sign1'
   *  Sum: '<S305>/Add'
   *  Sum: '<S318>/Add1'
   *  Sum: '<S318>/Add2'
   */
  rtb_Subtract2_h = (((real_T)((rtb_Minus_k_idx_0 == tmp) || (fabs
    (Code_Gen_Model_U.FrontRight_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_Subtract2_h) *
    look1_binlcpw(fabs(rt_modd_snf(rtb_uDLookupTable_l + 1.5707963267948966,
    3.1415926535897931) - 1.5707963267948966), Code_Gen_Model_ConstP.pooled38,
                  Code_Gen_Model_ConstP.pooled37, 1U);

  /* Sum: '<S303>/Sum' incorporates:
   *  Inport: '<Root>/FrontRight_Drive_Motor_Speed'
   */
  rtb_Subtract_gy = rtb_Subtract2_h -
    Code_Gen_Model_U.FrontRight_Drive_Motor_Speed;

  /* Sum: '<S310>/Sum1' incorporates:
   *  Constant: '<S303>/Constant2'
   *  Product: '<S310>/Product'
   *  Sum: '<S310>/Sum'
   *  UnitDelay: '<S310>/Unit Delay1'
   */
  rtb_Rotationmatrixfromlocalto_3 = ((rtb_Subtract_gy -
    Code_Gen_Model_DW.UnitDelay1_DSTATE_e) * Drive_Motor_Control_D_FilterCoeff)
    + Code_Gen_Model_DW.UnitDelay1_DSTATE_e;

  /* Product: '<S303>/Product' incorporates:
   *  Constant: '<S303>/Constant3'
   */
  rtb_Minus_k_idx_1 = rtb_Rotationmatrixfromlocalto_3 * Drive_Motor_Control_D;

  /* Sum: '<S309>/Diff' incorporates:
   *  UnitDelay: '<S309>/UD'
   *
   * Block description for '<S309>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S309>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Minus_k_idx_0 = rtb_Minus_k_idx_1 - Code_Gen_Model_DW.UD_DSTATE_mm;

  /* Saturate: '<S303>/Saturation' */
  if (rtb_Minus_k_idx_0 > Drive_Motor_Control_D_UL) {
    rtb_Minus_k_idx_0 = Drive_Motor_Control_D_UL;
  } else if (rtb_Minus_k_idx_0 < Drive_Motor_Control_D_LL) {
    rtb_Minus_k_idx_0 = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S303>/Add' incorporates:
   *  Gain: '<S303>/Gain'
   *  Gain: '<S303>/Gain1'
   *  Saturate: '<S303>/Saturation'
   */
  rtb_Subtract2_h = ((Drive_Motor_Control_FF * rtb_Subtract2_h) +
                     (Drive_Motor_Control_P * rtb_Subtract_gy)) +
    rtb_Minus_k_idx_0;

  /* Switch: '<S303>/Switch' incorporates:
   *  Constant: '<S303>/Constant4'
   */
  if (Code_Gen_Model_B.Swerve_Drive_Integral_Enable) {
    /* Sum: '<S303>/Sum2' incorporates:
     *  Gain: '<S303>/Gain2'
     *  UnitDelay: '<S303>/Unit Delay'
     */
    rtb_Subtract_gy = (Drive_Motor_Control_I * rtb_Subtract_gy) +
      Code_Gen_Model_DW.UnitDelay_DSTATE_hj;

    /* Sum: '<S303>/Subtract' incorporates:
     *  Constant: '<S303>/Constant'
     */
    rtb_Hypot_b = 1.0 - rtb_Subtract2_h;

    /* Switch: '<S311>/Switch2' incorporates:
     *  Constant: '<S303>/Constant'
     *  RelationalOperator: '<S311>/LowerRelop1'
     *  Sum: '<S303>/Subtract'
     */
    if (!(rtb_Subtract_gy > (1.0 - rtb_Subtract2_h))) {
      /* Sum: '<S303>/Subtract1' incorporates:
       *  Constant: '<S303>/Constant1'
       */
      rtb_Hypot_b = -1.0 - rtb_Subtract2_h;

      /* Switch: '<S311>/Switch' incorporates:
       *  Constant: '<S303>/Constant1'
       *  RelationalOperator: '<S311>/UpperRelop'
       *  Sum: '<S303>/Subtract1'
       */
      if (!(rtb_Subtract_gy < (-1.0 - rtb_Subtract2_h))) {
        rtb_Hypot_b = rtb_Subtract_gy;
      }

      /* End of Switch: '<S311>/Switch' */
    }

    /* End of Switch: '<S311>/Switch2' */

    /* Saturate: '<S303>/Saturation1' */
    if (rtb_Hypot_b > Drive_Motor_Control_I_UL) {
      rtb_Subtract_gy = Drive_Motor_Control_I_UL;
    } else if (rtb_Hypot_b < Drive_Motor_Control_I_LL) {
      rtb_Subtract_gy = Drive_Motor_Control_I_LL;
    } else {
      rtb_Subtract_gy = rtb_Hypot_b;
    }

    /* End of Saturate: '<S303>/Saturation1' */
  } else {
    rtb_Subtract_gy = 0.0;
  }

  /* End of Switch: '<S303>/Switch' */

  /* Sum: '<S303>/Add1' */
  rtb_Minus_k_idx_0 = rtb_Subtract2_h + rtb_Subtract_gy;

  /* Saturate: '<S303>/Saturation2' */
  if (rtb_Minus_k_idx_0 > 1.0) {
    /* Outport: '<Root>/FrontRight_Drive_DutyCycle' */
    Code_Gen_Model_Y.FrontRight_Drive_DutyCycle = 1.0;
  } else if (rtb_Minus_k_idx_0 < -1.0) {
    /* Outport: '<Root>/FrontRight_Drive_DutyCycle' */
    Code_Gen_Model_Y.FrontRight_Drive_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/FrontRight_Drive_DutyCycle' */
    Code_Gen_Model_Y.FrontRight_Drive_DutyCycle = rtb_Minus_k_idx_0;
  }

  /* End of Saturate: '<S303>/Saturation2' */

  /* Sum: '<S319>/Add1' incorporates:
   *  Constant: '<S319>/Constant3'
   *  Constant: '<S319>/Constant4'
   *  Math: '<S319>/Math Function'
   *  Sum: '<S319>/Add2'
   */
  rtb_Subtract2_h = rt_modd_snf(rtb_uDLookupTable_l + 3.1415926535897931,
    6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S321>/Sum1' incorporates:
   *  Constant: '<S306>/Constant2'
   *  Product: '<S321>/Product'
   *  Sum: '<S321>/Sum'
   *  UnitDelay: '<S321>/Unit Delay1'
   */
  rtb_Hypot_b = ((rtb_Subtract2_h - Code_Gen_Model_DW.UnitDelay1_DSTATE_n) *
                 Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_n;

  /* Product: '<S306>/Product' incorporates:
   *  Constant: '<S306>/Constant3'
   */
  rtb_Product_hi = rtb_Hypot_b * Steering_Motor_Control_D;

  /* Sum: '<S320>/Diff' incorporates:
   *  UnitDelay: '<S320>/UD'
   *
   * Block description for '<S320>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S320>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Minus_k_idx_0 = rtb_Product_hi - Code_Gen_Model_DW.UD_DSTATE_i1;

  /* Saturate: '<S306>/Saturation' */
  if (rtb_Minus_k_idx_0 > Steering_Motor_Control_D_UL) {
    rtb_Minus_k_idx_0 = Steering_Motor_Control_D_UL;
  } else if (rtb_Minus_k_idx_0 < Steering_Motor_Control_D_LL) {
    rtb_Minus_k_idx_0 = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S306>/Add' incorporates:
   *  Gain: '<S306>/Gain1'
   *  Saturate: '<S306>/Saturation'
   */
  rtb_uDLookupTable_l = (Steering_Motor_Control_P * rtb_Subtract2_h) +
    rtb_Minus_k_idx_0;

  /* Sum: '<S306>/Subtract' incorporates:
   *  Constant: '<S306>/Constant'
   */
  rtb_thetay_e = 1.0 - rtb_uDLookupTable_l;

  /* Sum: '<S306>/Sum2' incorporates:
   *  Gain: '<S306>/Gain2'
   *  UnitDelay: '<S306>/Unit Delay'
   */
  rtb_Subtract2_h = (Steering_Motor_Control_I * rtb_Subtract2_h) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_dt;

  /* Switch: '<S322>/Switch2' incorporates:
   *  Constant: '<S306>/Constant'
   *  RelationalOperator: '<S322>/LowerRelop1'
   *  Sum: '<S306>/Subtract'
   */
  if (!(rtb_Subtract2_h > (1.0 - rtb_uDLookupTable_l))) {
    /* Switch: '<S322>/Switch' incorporates:
     *  Constant: '<S306>/Constant1'
     *  RelationalOperator: '<S322>/UpperRelop'
     *  Sum: '<S306>/Subtract1'
     */
    if (rtb_Subtract2_h < (-1.0 - rtb_uDLookupTable_l)) {
      rtb_thetay_e = -1.0 - rtb_uDLookupTable_l;
    } else {
      rtb_thetay_e = rtb_Subtract2_h;
    }

    /* End of Switch: '<S322>/Switch' */
  }

  /* End of Switch: '<S322>/Switch2' */

  /* Saturate: '<S306>/Saturation1' */
  if (rtb_thetay_e > Steering_Motor_Control_I_UL) {
    rtb_Subtract1_bh = Steering_Motor_Control_I_UL;
  } else if (rtb_thetay_e < Steering_Motor_Control_I_LL) {
    rtb_Subtract1_bh = Steering_Motor_Control_I_LL;
  } else {
    rtb_Subtract1_bh = rtb_thetay_e;
  }

  /* End of Saturate: '<S306>/Saturation1' */

  /* Sum: '<S306>/Add1' */
  rtb_Minus_k_idx_0 = rtb_uDLookupTable_l + rtb_Subtract1_bh;

  /* Saturate: '<S306>/Saturation2' */
  if (rtb_Minus_k_idx_0 > 1.0) {
    /* Outport: '<Root>/FrontRight_Steer_DutyCycle' */
    Code_Gen_Model_Y.FrontRight_Steer_DutyCycle = 1.0;
  } else if (rtb_Minus_k_idx_0 < -1.0) {
    /* Outport: '<Root>/FrontRight_Steer_DutyCycle' */
    Code_Gen_Model_Y.FrontRight_Steer_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/FrontRight_Steer_DutyCycle' */
    Code_Gen_Model_Y.FrontRight_Steer_DutyCycle = rtb_Minus_k_idx_0;
  }

  /* End of Saturate: '<S306>/Saturation2' */

  /* Product: '<S401>/Product2' */
  Code_Gen_Model_B.BL_Desired_Wheel_Speed =
    Code_Gen_Model_B.BL_Desired_Wheel_Speed_in * rtb_UnitDelay1_el;

  /* Switch: '<S416>/Switch' */
  if (!rtb_Is_Absolute_Translation_g) {
    /* Switch: '<S416>/Switch' incorporates:
     *  Fcn: '<S417>/x->theta'
     */
    Code_Gen_Model_B.BL_Desired_Module_Angle = rt_atan2d_snf(rtb_Add2_f[1],
      rtb_Add2_f[0]);
  }

  /* End of Switch: '<S416>/Switch' */

  /* Trigonometry: '<S336>/Cos4' incorporates:
   *  Switch: '<S325>/Angle_Switch'
   *  Trigonometry: '<S335>/Cos4'
   */
  rtb_Product_nr = cos(Code_Gen_Model_B.BL_Desired_Module_Angle);

  /* Trigonometry: '<S336>/Sin5' incorporates:
   *  UnaryMinus: '<S334>/Unary Minus'
   */
  rtb_thetay_e = sin(-Code_Gen_Model_B.BL_Steer_Module_Angle);

  /* Trigonometry: '<S336>/Sin4' */
  rtb_uDLookupTable_l = sin(Code_Gen_Model_B.BL_Desired_Module_Angle);

  /* Trigonometry: '<S336>/Cos5' incorporates:
   *  UnaryMinus: '<S334>/Unary Minus'
   */
  rtb_Subtract2_h = cos(-Code_Gen_Model_B.BL_Steer_Module_Angle);

  /* Sum: '<S336>/Subtract1' incorporates:
   *  Product: '<S336>/Product2'
   *  Product: '<S336>/Product3'
   *  Trigonometry: '<S336>/Cos4'
   */
  rtb_UnitDelay1_el = (rtb_Product_nr * rtb_thetay_e) + (rtb_uDLookupTable_l *
    rtb_Subtract2_h);

  /* Sum: '<S336>/Subtract' incorporates:
   *  Product: '<S336>/Product'
   *  Product: '<S336>/Product1'
   *  Trigonometry: '<S336>/Cos4'
   */
  rtb_Subtract2_h = (rtb_Product_nr * rtb_Subtract2_h) - (rtb_uDLookupTable_l *
    rtb_thetay_e);

  /* Math: '<S336>/Hypot' */
  rtb_thetay_e = rt_hypotd_snf(rtb_Subtract2_h, rtb_UnitDelay1_el);

  /* Switch: '<S336>/Switch' incorporates:
   *  Constant: '<S336>/Constant'
   *  Constant: '<S336>/Constant1'
   *  Constant: '<S337>/Constant'
   *  Product: '<S336>/Divide'
   *  Product: '<S336>/Divide1'
   *  RelationalOperator: '<S337>/Compare'
   *  Switch: '<S336>/Switch1'
   */
  if (rtb_thetay_e > 1.0E-6) {
    rtb_UnitDelay1_el /= rtb_thetay_e;
    rtb_Subtract2_h /= rtb_thetay_e;
  } else {
    rtb_UnitDelay1_el = 0.0;
    rtb_Subtract2_h = 1.0;
  }

  /* End of Switch: '<S336>/Switch' */

  /* Switch: '<S325>/Speed_Switch' incorporates:
   *  Abs: '<S325>/Abs'
   *  Constant: '<S333>/Constant'
   *  RelationalOperator: '<S333>/Compare'
   *  Switch: '<S325>/Angle_Switch'
   *  Trigonometry: '<S335>/Atan1'
   *  Trigonometry: '<S336>/Atan1'
   *  UnaryMinus: '<S325>/Unary Minus'
   */
  if (fabs(rt_atan2d_snf(rtb_UnitDelay1_el, rtb_Subtract2_h)) >
      1.5707963267948966) {
    rtb_Minus_k_idx_0 = -Code_Gen_Model_B.BL_Desired_Wheel_Speed;

    /* Sum: '<S335>/Subtract1' incorporates:
     *  Product: '<S335>/Product2'
     *  Product: '<S335>/Product3'
     *  Trigonometry: '<S335>/Sin4'
     *  UnaryMinus: '<S325>/Unary Minus'
     */
    rtb_Subtract2_h = (rtb_Product_nr * Code_Gen_Model_ConstB.Sin5_e) +
      (rtb_uDLookupTable_l * Code_Gen_Model_ConstB.Cos5_i);

    /* Sum: '<S335>/Subtract' incorporates:
     *  Product: '<S335>/Product'
     *  Product: '<S335>/Product1'
     *  Trigonometry: '<S335>/Sin4'
     */
    rtb_uDLookupTable_l = (rtb_Product_nr * Code_Gen_Model_ConstB.Cos5_i) -
      (rtb_uDLookupTable_l * Code_Gen_Model_ConstB.Sin5_e);

    /* Math: '<S335>/Hypot' */
    rtb_thetay_e = rt_hypotd_snf(rtb_uDLookupTable_l, rtb_Subtract2_h);

    /* Switch: '<S335>/Switch1' incorporates:
     *  Constant: '<S335>/Constant'
     *  Constant: '<S335>/Constant1'
     *  Constant: '<S338>/Constant'
     *  Product: '<S335>/Divide'
     *  Product: '<S335>/Divide1'
     *  RelationalOperator: '<S338>/Compare'
     *  Switch: '<S335>/Switch'
     */
    if (rtb_thetay_e > 1.0E-6) {
      rtb_uDLookupTable_l /= rtb_thetay_e;
      rtb_Subtract2_h /= rtb_thetay_e;
    } else {
      rtb_uDLookupTable_l = 1.0;
      rtb_Subtract2_h = 0.0;
    }

    /* End of Switch: '<S335>/Switch1' */
    rtb_thetay_e = rt_atan2d_snf(rtb_Subtract2_h, rtb_uDLookupTable_l);
  } else {
    rtb_Minus_k_idx_0 = Code_Gen_Model_B.BL_Desired_Wheel_Speed;
    rtb_thetay_e = Code_Gen_Model_B.BL_Desired_Module_Angle;
  }

  /* Product: '<S328>/Product2' incorporates:
   *  Constant: '<S328>/Constant'
   *  Switch: '<S325>/Speed_Switch'
   */
  rtb_UnitDelay1_el = rtb_Minus_k_idx_0 * 1210.9758620668042;

  /* Signum: '<S323>/Sign' */
  if (rtIsNaN(rtb_UnitDelay1_el)) {
    rtb_Minus_k_idx_0 = (rtNaN);
  } else if (rtb_UnitDelay1_el < 0.0) {
    rtb_Minus_k_idx_0 = -1.0;
  } else {
    rtb_Minus_k_idx_0 = (rtb_UnitDelay1_el > 0.0);
  }

  /* Signum: '<S323>/Sign1' incorporates:
   *  Inport: '<Root>/BackLeft_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.BackLeft_Drive_Motor_Speed)) {
    tmp = (rtNaN);
  } else if (Code_Gen_Model_U.BackLeft_Drive_Motor_Speed < 0.0) {
    tmp = -1.0;
  } else {
    tmp = (Code_Gen_Model_U.BackLeft_Drive_Motor_Speed > 0.0);
  }

  /* Sum: '<S326>/Add' incorporates:
   *  Sum: '<S327>/Sum'
   */
  rtb_Sum1_b = rtb_thetay_e - Code_Gen_Model_B.BL_Steer_Module_Angle;

  /* Product: '<S278>/Product' incorporates:
   *  Abs: '<S323>/Abs'
   *  Abs: '<S326>/Abs'
   *  Constant: '<S329>/Constant'
   *  Constant: '<S339>/Constant3'
   *  Constant: '<S339>/Constant4'
   *  Inport: '<Root>/BackLeft_Drive_Motor_Speed'
   *  Logic: '<S323>/OR'
   *  Lookup_n-D: '<S326>/1-D Lookup Table'
   *  Math: '<S339>/Math Function'
   *  RelationalOperator: '<S323>/Equal1'
   *  RelationalOperator: '<S329>/Compare'
   *  Signum: '<S323>/Sign'
   *  Signum: '<S323>/Sign1'
   *  Sum: '<S326>/Add'
   *  Sum: '<S339>/Add1'
   *  Sum: '<S339>/Add2'
   */
  rtb_UnitDelay1_el = (((real_T)((rtb_Minus_k_idx_0 == tmp) || (fabs
    (Code_Gen_Model_U.BackLeft_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_UnitDelay1_el) *
    look1_binlcpw(fabs(rt_modd_snf(rtb_Sum1_b + 1.5707963267948966,
    3.1415926535897931) - 1.5707963267948966), Code_Gen_Model_ConstP.pooled38,
                  Code_Gen_Model_ConstP.pooled37, 1U);

  /* Sum: '<S324>/Sum' incorporates:
   *  Inport: '<Root>/BackLeft_Drive_Motor_Speed'
   */
  rtb_Subtract2_h = rtb_UnitDelay1_el -
    Code_Gen_Model_U.BackLeft_Drive_Motor_Speed;

  /* Sum: '<S331>/Sum1' incorporates:
   *  Constant: '<S324>/Constant2'
   *  Product: '<S331>/Product'
   *  Sum: '<S331>/Sum'
   *  UnitDelay: '<S331>/Unit Delay1'
   */
  rtb_uDLookupTable_l = ((rtb_Subtract2_h -
    Code_Gen_Model_DW.UnitDelay1_DSTATE_n4) * Drive_Motor_Control_D_FilterCoeff)
    + Code_Gen_Model_DW.UnitDelay1_DSTATE_n4;

  /* Product: '<S324>/Product' incorporates:
   *  Constant: '<S324>/Constant3'
   */
  rtb_Product_nr = rtb_uDLookupTable_l * Drive_Motor_Control_D;

  /* Sum: '<S330>/Diff' incorporates:
   *  UnitDelay: '<S330>/UD'
   *
   * Block description for '<S330>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S330>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Minus_k_idx_0 = rtb_Product_nr - Code_Gen_Model_DW.UD_DSTATE_o;

  /* Saturate: '<S324>/Saturation' */
  if (rtb_Minus_k_idx_0 > Drive_Motor_Control_D_UL) {
    rtb_Minus_k_idx_0 = Drive_Motor_Control_D_UL;
  } else if (rtb_Minus_k_idx_0 < Drive_Motor_Control_D_LL) {
    rtb_Minus_k_idx_0 = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S324>/Add' incorporates:
   *  Gain: '<S324>/Gain'
   *  Gain: '<S324>/Gain1'
   *  Saturate: '<S324>/Saturation'
   */
  rtb_UnitDelay1_el = ((Drive_Motor_Control_FF * rtb_UnitDelay1_el) +
                       (Drive_Motor_Control_P * rtb_Subtract2_h)) +
    rtb_Minus_k_idx_0;

  /* Switch: '<S324>/Switch' incorporates:
   *  Constant: '<S324>/Constant4'
   */
  if (Code_Gen_Model_B.Swerve_Drive_Integral_Enable) {
    /* Sum: '<S324>/Sum2' incorporates:
     *  Gain: '<S324>/Gain2'
     *  UnitDelay: '<S324>/Unit Delay'
     */
    rtb_Subtract2_h = (Drive_Motor_Control_I * rtb_Subtract2_h) +
      Code_Gen_Model_DW.UnitDelay_DSTATE_f;

    /* Sum: '<S324>/Subtract' incorporates:
     *  Constant: '<S324>/Constant'
     */
    rtb_Integral_hv = 1.0 - rtb_UnitDelay1_el;

    /* Switch: '<S332>/Switch2' incorporates:
     *  Constant: '<S324>/Constant'
     *  RelationalOperator: '<S332>/LowerRelop1'
     *  Sum: '<S324>/Subtract'
     */
    if (!(rtb_Subtract2_h > (1.0 - rtb_UnitDelay1_el))) {
      /* Sum: '<S324>/Subtract1' incorporates:
       *  Constant: '<S324>/Constant1'
       */
      rtb_Integral_hv = -1.0 - rtb_UnitDelay1_el;

      /* Switch: '<S332>/Switch' incorporates:
       *  Constant: '<S324>/Constant1'
       *  RelationalOperator: '<S332>/UpperRelop'
       *  Sum: '<S324>/Subtract1'
       */
      if (!(rtb_Subtract2_h < (-1.0 - rtb_UnitDelay1_el))) {
        rtb_Integral_hv = rtb_Subtract2_h;
      }

      /* End of Switch: '<S332>/Switch' */
    }

    /* End of Switch: '<S332>/Switch2' */

    /* Saturate: '<S324>/Saturation1' */
    if (rtb_Integral_hv > Drive_Motor_Control_I_UL) {
      rtb_Integral_hv = Drive_Motor_Control_I_UL;
    } else if (rtb_Integral_hv < Drive_Motor_Control_I_LL) {
      rtb_Integral_hv = Drive_Motor_Control_I_LL;
    }

    /* End of Saturate: '<S324>/Saturation1' */
  } else {
    rtb_Integral_hv = 0.0;
  }

  /* End of Switch: '<S324>/Switch' */

  /* Sum: '<S324>/Add1' */
  rtb_Minus_k_idx_0 = rtb_UnitDelay1_el + rtb_Integral_hv;

  /* Saturate: '<S324>/Saturation2' */
  if (rtb_Minus_k_idx_0 > 1.0) {
    /* Outport: '<Root>/BackLeft_Drive_DutyCycle' */
    Code_Gen_Model_Y.BackLeft_Drive_DutyCycle = 1.0;
  } else if (rtb_Minus_k_idx_0 < -1.0) {
    /* Outport: '<Root>/BackLeft_Drive_DutyCycle' */
    Code_Gen_Model_Y.BackLeft_Drive_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/BackLeft_Drive_DutyCycle' */
    Code_Gen_Model_Y.BackLeft_Drive_DutyCycle = rtb_Minus_k_idx_0;
  }

  /* End of Saturate: '<S324>/Saturation2' */

  /* Sum: '<S340>/Add1' incorporates:
   *  Constant: '<S340>/Constant3'
   *  Constant: '<S340>/Constant4'
   *  Math: '<S340>/Math Function'
   *  Sum: '<S340>/Add2'
   */
  rtb_UnitDelay1_el = rt_modd_snf(rtb_Sum1_b + 3.1415926535897931,
    6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S342>/Sum1' incorporates:
   *  Constant: '<S327>/Constant2'
   *  Product: '<S342>/Product'
   *  Sum: '<S342>/Sum'
   *  UnitDelay: '<S342>/Unit Delay1'
   */
  rtb_Sum1_b = ((rtb_UnitDelay1_el - Code_Gen_Model_DW.UnitDelay1_DSTATE_nw) *
                Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_nw;

  /* Product: '<S327>/Product' incorporates:
   *  Constant: '<S327>/Constant3'
   */
  rtb_Product_nq = rtb_Sum1_b * Steering_Motor_Control_D;

  /* Sum: '<S341>/Diff' incorporates:
   *  UnitDelay: '<S341>/UD'
   *
   * Block description for '<S341>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S341>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Minus_k_idx_0 = rtb_Product_nq - Code_Gen_Model_DW.UD_DSTATE_k;

  /* Saturate: '<S327>/Saturation' */
  if (rtb_Minus_k_idx_0 > Steering_Motor_Control_D_UL) {
    rtb_Minus_k_idx_0 = Steering_Motor_Control_D_UL;
  } else if (rtb_Minus_k_idx_0 < Steering_Motor_Control_D_LL) {
    rtb_Minus_k_idx_0 = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S327>/Add' incorporates:
   *  Gain: '<S327>/Gain1'
   *  Saturate: '<S327>/Saturation'
   */
  rtb_thetay_e = (Steering_Motor_Control_P * rtb_UnitDelay1_el) +
    rtb_Minus_k_idx_0;

  /* Sum: '<S327>/Subtract' incorporates:
   *  Constant: '<S327>/Constant'
   */
  rtb_Subtract2_h = 1.0 - rtb_thetay_e;

  /* Sum: '<S327>/Sum2' incorporates:
   *  Gain: '<S327>/Gain2'
   *  UnitDelay: '<S327>/Unit Delay'
   */
  rtb_UnitDelay1_el = (Steering_Motor_Control_I * rtb_UnitDelay1_el) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_k;

  /* Switch: '<S343>/Switch2' incorporates:
   *  Constant: '<S327>/Constant'
   *  RelationalOperator: '<S343>/LowerRelop1'
   *  Sum: '<S327>/Subtract'
   */
  if (!(rtb_UnitDelay1_el > (1.0 - rtb_thetay_e))) {
    /* Sum: '<S327>/Subtract1' incorporates:
     *  Constant: '<S327>/Constant1'
     */
    rtb_Subtract2_h = -1.0 - rtb_thetay_e;

    /* Switch: '<S343>/Switch' incorporates:
     *  Constant: '<S327>/Constant1'
     *  RelationalOperator: '<S343>/UpperRelop'
     *  Sum: '<S327>/Subtract1'
     */
    if (!(rtb_UnitDelay1_el < (-1.0 - rtb_thetay_e))) {
      rtb_Subtract2_h = rtb_UnitDelay1_el;
    }

    /* End of Switch: '<S343>/Switch' */
  }

  /* End of Switch: '<S343>/Switch2' */

  /* Saturate: '<S327>/Saturation1' */
  if (rtb_Subtract2_h > Steering_Motor_Control_I_UL) {
    rtb_Integral_m = Steering_Motor_Control_I_UL;
  } else if (rtb_Subtract2_h < Steering_Motor_Control_I_LL) {
    rtb_Integral_m = Steering_Motor_Control_I_LL;
  } else {
    rtb_Integral_m = rtb_Subtract2_h;
  }

  /* End of Saturate: '<S327>/Saturation1' */

  /* Sum: '<S327>/Add1' */
  rtb_Minus_k_idx_0 = rtb_thetay_e + rtb_Integral_m;

  /* Saturate: '<S327>/Saturation2' */
  if (rtb_Minus_k_idx_0 > 1.0) {
    /* Outport: '<Root>/BackLeft_Steer_DutyCycle' */
    Code_Gen_Model_Y.BackLeft_Steer_DutyCycle = 1.0;
  } else if (rtb_Minus_k_idx_0 < -1.0) {
    /* Outport: '<Root>/BackLeft_Steer_DutyCycle' */
    Code_Gen_Model_Y.BackLeft_Steer_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/BackLeft_Steer_DutyCycle' */
    Code_Gen_Model_Y.BackLeft_Steer_DutyCycle = rtb_Minus_k_idx_0;
  }

  /* End of Saturate: '<S327>/Saturation2' */

  /* Sum: '<S361>/Add1' incorporates:
   *  Constant: '<S361>/Constant3'
   *  Constant: '<S361>/Constant4'
   *  Math: '<S361>/Math Function'
   *  Sum: '<S361>/Add2'
   */
  rtb_UnitDelay1_el = rt_modd_snf(rtb_rx_p + 3.1415926535897931,
    6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S363>/Sum1' incorporates:
   *  Constant: '<S348>/Constant2'
   *  Product: '<S363>/Product'
   *  Sum: '<S363>/Sum'
   *  UnitDelay: '<S363>/Unit Delay1'
   */
  rtb_rx_p = ((rtb_UnitDelay1_el - Code_Gen_Model_DW.UnitDelay1_DSTATE_iw) *
              Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_iw;

  /* Product: '<S348>/Product' incorporates:
   *  Constant: '<S348>/Constant3'
   */
  rtb_Product_il = rtb_rx_p * Steering_Motor_Control_D;

  /* Sum: '<S362>/Diff' incorporates:
   *  UnitDelay: '<S362>/UD'
   *
   * Block description for '<S362>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S362>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Minus_k_idx_0 = rtb_Product_il - Code_Gen_Model_DW.UD_DSTATE_l;

  /* Saturate: '<S348>/Saturation' */
  if (rtb_Minus_k_idx_0 > Steering_Motor_Control_D_UL) {
    rtb_Minus_k_idx_0 = Steering_Motor_Control_D_UL;
  } else if (rtb_Minus_k_idx_0 < Steering_Motor_Control_D_LL) {
    rtb_Minus_k_idx_0 = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S348>/Add' incorporates:
   *  Gain: '<S348>/Gain1'
   *  Saturate: '<S348>/Saturation'
   */
  rtb_thetay_e = (Steering_Motor_Control_P * rtb_UnitDelay1_el) +
    rtb_Minus_k_idx_0;

  /* Sum: '<S348>/Subtract' incorporates:
   *  Constant: '<S348>/Constant'
   */
  rtb_Subtract2_h = 1.0 - rtb_thetay_e;

  /* Sum: '<S348>/Sum2' incorporates:
   *  Gain: '<S348>/Gain2'
   *  UnitDelay: '<S348>/Unit Delay'
   */
  rtb_UnitDelay1_el = (Steering_Motor_Control_I * rtb_UnitDelay1_el) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_lm;

  /* Switch: '<S364>/Switch2' incorporates:
   *  Constant: '<S348>/Constant'
   *  RelationalOperator: '<S364>/LowerRelop1'
   *  Sum: '<S348>/Subtract'
   */
  if (!(rtb_UnitDelay1_el > (1.0 - rtb_thetay_e))) {
    /* Sum: '<S348>/Subtract1' incorporates:
     *  Constant: '<S348>/Constant1'
     */
    rtb_Subtract2_h = -1.0 - rtb_thetay_e;

    /* Switch: '<S364>/Switch' incorporates:
     *  Constant: '<S348>/Constant1'
     *  RelationalOperator: '<S364>/UpperRelop'
     *  Sum: '<S348>/Subtract1'
     */
    if (!(rtb_UnitDelay1_el < (-1.0 - rtb_thetay_e))) {
      rtb_Subtract2_h = rtb_UnitDelay1_el;
    }

    /* End of Switch: '<S364>/Switch' */
  }

  /* End of Switch: '<S364>/Switch2' */

  /* Saturate: '<S348>/Saturation1' */
  if (rtb_Subtract2_h > Steering_Motor_Control_I_UL) {
    rtb_Integral_p = Steering_Motor_Control_I_UL;
  } else if (rtb_Subtract2_h < Steering_Motor_Control_I_LL) {
    rtb_Integral_p = Steering_Motor_Control_I_LL;
  } else {
    rtb_Integral_p = rtb_Subtract2_h;
  }

  /* End of Saturate: '<S348>/Saturation1' */

  /* Sum: '<S348>/Add1' */
  rtb_Minus_k_idx_0 = rtb_thetay_e + rtb_Integral_p;

  /* Saturate: '<S348>/Saturation2' */
  if (rtb_Minus_k_idx_0 > 1.0) {
    /* Outport: '<Root>/BackRight_Steer_DutyCycle' */
    Code_Gen_Model_Y.BackRight_Steer_DutyCycle = 1.0;
  } else if (rtb_Minus_k_idx_0 < -1.0) {
    /* Outport: '<Root>/BackRight_Steer_DutyCycle' */
    Code_Gen_Model_Y.BackRight_Steer_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/BackRight_Steer_DutyCycle' */
    Code_Gen_Model_Y.BackRight_Steer_DutyCycle = rtb_Minus_k_idx_0;
  }

  /* End of Saturate: '<S348>/Saturation2' */

  /* Gain: '<S197>/meters to feet1' */
  Code_Gen_Model_B.Odometry_Y_global_est_ft = 3.28084 *
    Code_Gen_Model_B.Odom_Position_Y;

  /* RelationalOperator: '<S198>/Compare' incorporates:
   *  Constant: '<S197>/Constant'
   *  Constant: '<S198>/Constant'
   */
  rtb_Is_Absolute_Translation_g = (Odometry_X_Y_TEAR != 0.0);

  /* Switch: '<S197>/Switch1' incorporates:
   *  UnitDelay: '<S197>/Unit Delay1'
   */
  if (rtb_Is_Absolute_Translation_g) {
    rtb_Switch1_e3 = Code_Gen_Model_B.Odometry_Y_global_est_ft;
  } else {
    rtb_Switch1_e3 = Code_Gen_Model_DW.UnitDelay1_DSTATE_d;
  }

  /* End of Switch: '<S197>/Switch1' */

  /* Sum: '<S197>/Subtract1' */
  Code_Gen_Model_B.Odometry_Y_global_TEAR_ft =
    Code_Gen_Model_B.Odometry_Y_global_est_ft - rtb_Switch1_e3;

  /* Gain: '<S197>/meters to feet' */
  Code_Gen_Model_B.Odometry_X_global_est_ft = 3.28084 *
    Code_Gen_Model_B.Odom_Position_X;

  /* Switch: '<S197>/Switch' incorporates:
   *  UnitDelay: '<S197>/Unit Delay'
   */
  if (rtb_Is_Absolute_Translation_g) {
    rtb_Switch = Code_Gen_Model_B.Odometry_X_global_est_ft;
  } else {
    rtb_Switch = Code_Gen_Model_DW.UnitDelay_DSTATE_c;
  }

  /* End of Switch: '<S197>/Switch' */

  /* Sum: '<S197>/Subtract' */
  Code_Gen_Model_B.Odometry_X_global_TEAR_ft =
    Code_Gen_Model_B.Odometry_X_global_est_ft - rtb_Switch;

  /* Signum: '<S94>/Sign2' */
  if (rtIsNaN(rtb_rx_f)) {
    rtb_Minus_k_idx_0 = (rtNaN);
  } else if (rtb_rx_f < 0.0) {
    rtb_Minus_k_idx_0 = -1.0;
  } else {
    rtb_Minus_k_idx_0 = (rtb_rx_f > 0.0);
  }

  /* Signum: '<S94>/Sign1' */
  if (rtIsNaN(rtb_Abs1)) {
    tmp = (rtNaN);
  } else if (rtb_Abs1 < 0.0) {
    tmp = -1.0;
  } else {
    tmp = (rtb_Abs1 > 0.0);
  }

  /* Product: '<S94>/Product1' incorporates:
   *  Signum: '<S94>/Sign1'
   *  Signum: '<S94>/Sign2'
   */
  rtb_Minus_k_idx_0 *= tmp;
  if (rtIsNaN(rtb_Minus_k_idx_0)) {
    i = 0;
  } else {
    i = (int32_T)fmod(rtb_Minus_k_idx_0, 256.0);
  }

  /* Switch: '<S94>/Switch' incorporates:
   *  Constant: '<S94>/Constant'
   *  Constant: '<S97>/Constant'
   *  Constant: '<S98>/Constant'
   *  Logic: '<S94>/or'
   *  Product: '<S94>/Product1'
   *  RelationalOperator: '<S97>/Compare'
   *  RelationalOperator: '<S98>/Compare'
   */
  if ((!(rtb_rx_f == 0.0)) && (((i < 0) ? ((int32_T)((int8_T)(-((int8_T)
            ((uint8_T)(-((real_T)i))))))) : i) <= 0)) {
    rtb_Abs1 = 0.0;
  }

  /* End of Switch: '<S94>/Switch' */

  /* RelationalOperator: '<S99>/Compare' incorporates:
   *  Constant: '<S99>/Constant'
   */
  rtb_Is_Absolute_Translation_g = (rtb_Abs1 == 0.0);

  /* Switch: '<S94>/Switch5' */
  if (rtb_Is_Absolute_Translation_g) {
    /* SignalConversion generated from: '<S94>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S94>/Constant4'
     *  Constant: '<S94>/Constant6'
     */
    rtb_Reshapey[0] = 1.0;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S94>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S94>/Constant2'
     *  Constant: '<S94>/Constant5'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = 0.01;

    /* S-Function (sfix_look1_dyn): '<S94>/Lookup Table Dynamic' */
    /* Dynamic Look-Up Table Block: '<S94>/Lookup Table Dynamic'
     * Input0  Data Type:  Floating Point real_T
     * Input1  Data Type:  Floating Point real_T
     * Input2  Data Type:  Floating Point real_T
     * Output0 Data Type:  Floating Point real_T
     * Lookup Method: Linear_Endpoint
     *
     */
    LookUp_real_T_real_T( &(rtb_LookupTableDynamic_jw), &rtb_Reshapey[0],
                         rtb_Switch2_kn, &rtb_Minus_n[0], 1U);
    rtb_rx_f = rtb_LookupTableDynamic_jw;
  } else {
    /* SignalConversion generated from: '<S94>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S94>/Constant10'
     *  Constant: '<S94>/Constant8'
     */
    rtb_Reshapey[0] = 1.0;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S94>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S94>/Constant7'
     *  Constant: '<S94>/Constant9'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = 0.01;

    /* S-Function (sfix_look1_dyn): '<S94>/Lookup Table Dynamic1' */
    /* Dynamic Look-Up Table Block: '<S94>/Lookup Table Dynamic1'
     * Input0  Data Type:  Floating Point real_T
     * Input1  Data Type:  Floating Point real_T
     * Input2  Data Type:  Floating Point real_T
     * Output0 Data Type:  Floating Point real_T
     * Lookup Method: Linear_Endpoint
     *
     */
    LookUp_real_T_real_T( &(rtb_LookupTableDynamic1_b), &rtb_Reshapey[0],
                         rtb_Switch2_kn, &rtb_Minus_n[0], 1U);
    rtb_rx_f = rtb_LookupTableDynamic1_b;
  }

  /* End of Switch: '<S94>/Switch5' */

  /* RelationalOperator: '<S100>/Compare' incorporates:
   *  Constant: '<S100>/Constant'
   */
  rtb_Is_Absolute_Steering = (rtb_Abs1 > 0.0);

  /* Switch: '<S94>/Switch1' incorporates:
   *  Switch: '<S94>/Switch3'
   */
  if (rtb_Is_Absolute_Translation_g) {
    rtb_Minus_k_idx_0 = Code_Gen_Model_ConstB.UnaryMinus_m;
  } else if (rtb_Is_Absolute_Steering) {
    /* Switch: '<S94>/Switch3' incorporates:
     *  Constant: '<S94>/Constant3'
     */
    rtb_Minus_k_idx_0 = Elevator_DC_Inc_RL;
  } else {
    rtb_Minus_k_idx_0 = Code_Gen_Model_ConstB.UnaryMinus_m;
  }

  /* Product: '<S94>/Product' incorporates:
   *  Switch: '<S94>/Switch1'
   */
  rtb_UnitDelay1_el = rtb_Minus_k_idx_0 * rtb_rx_f;

  /* Switch: '<S103>/Init' incorporates:
   *  UnitDelay: '<S103>/FixPt Unit Delay1'
   *  UnitDelay: '<S103>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_o != 0) {
    rtb_Subtract2_h = rtb_Abs1;
  } else {
    rtb_Subtract2_h = Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_l;
  }

  /* End of Switch: '<S103>/Init' */

  /* Sum: '<S101>/Sum1' */
  rtb_Abs1 -= rtb_Subtract2_h;

  /* Switch: '<S102>/Switch2' incorporates:
   *  RelationalOperator: '<S102>/LowerRelop1'
   */
  if (!(rtb_Abs1 > rtb_UnitDelay1_el)) {
    /* Switch: '<S94>/Switch2' incorporates:
     *  Constant: '<S94>/Constant1'
     *  Switch: '<S94>/Switch4'
     */
    if (rtb_Is_Absolute_Translation_g) {
      rtb_Switch2_kn = -1.0;
    } else if (rtb_Is_Absolute_Steering) {
      /* Switch: '<S94>/Switch4' incorporates:
       *  Constant: '<S94>/Constant1'
       */
      rtb_Switch2_kn = -1.0;
    } else {
      /* Switch: '<S94>/Switch4' incorporates:
       *  Constant: '<S94>/Constant3'
       *  UnaryMinus: '<S94>/Unary Minus1'
       */
      rtb_Switch2_kn = -Elevator_DC_Inc_RL;
    }

    /* End of Switch: '<S94>/Switch2' */

    /* Product: '<S94>/Product2' */
    rtb_Switch2_kn *= rtb_rx_f;

    /* Switch: '<S102>/Switch' incorporates:
     *  RelationalOperator: '<S102>/UpperRelop'
     */
    if (rtb_Abs1 < rtb_Switch2_kn) {
      rtb_UnitDelay1_el = rtb_Switch2_kn;
    } else {
      rtb_UnitDelay1_el = rtb_Abs1;
    }

    /* End of Switch: '<S102>/Switch' */
  }

  /* End of Switch: '<S102>/Switch2' */

  /* Outport: '<Root>/Elevator_DutyCycle' incorporates:
   *  Sum: '<S101>/Sum'
   */
  Code_Gen_Model_Y.Elevator_DutyCycle = rtb_UnitDelay1_el + rtb_Subtract2_h;

  /* Signum: '<S76>/Sign2' */
  if (rtIsNaN(rtb_rx)) {
    rtb_Minus_k_idx_0 = (rtNaN);
  } else if (rtb_rx < 0.0) {
    rtb_Minus_k_idx_0 = -1.0;
  } else {
    rtb_Minus_k_idx_0 = (rtb_rx > 0.0);
  }

  /* Signum: '<S76>/Sign1' */
  if (rtIsNaN(rtb_Subtract_oz)) {
    tmp = (rtNaN);
  } else if (rtb_Subtract_oz < 0.0) {
    tmp = -1.0;
  } else {
    tmp = (rtb_Subtract_oz > 0.0);
  }

  /* Product: '<S76>/Product1' incorporates:
   *  Signum: '<S76>/Sign1'
   *  Signum: '<S76>/Sign2'
   */
  rtb_Minus_k_idx_0 *= tmp;
  if (rtIsNaN(rtb_Minus_k_idx_0)) {
    i = 0;
  } else {
    i = (int32_T)fmod(rtb_Minus_k_idx_0, 256.0);
  }

  /* Switch: '<S76>/Switch' incorporates:
   *  Constant: '<S76>/Constant'
   *  Constant: '<S79>/Constant'
   *  Constant: '<S80>/Constant'
   *  Logic: '<S76>/or'
   *  Product: '<S76>/Product1'
   *  RelationalOperator: '<S79>/Compare'
   *  RelationalOperator: '<S80>/Compare'
   */
  if ((!(rtb_rx == 0.0)) && (((i < 0) ? ((int32_T)((int8_T)(-((int8_T)((uint8_T)
             (-((real_T)i))))))) : i) <= 0)) {
    rtb_Subtract_oz = 0.0;
  }

  /* End of Switch: '<S76>/Switch' */

  /* RelationalOperator: '<S81>/Compare' incorporates:
   *  Constant: '<S81>/Constant'
   */
  rtb_Is_Absolute_Translation_g = (rtb_Subtract_oz == 0.0);

  /* Switch: '<S76>/Switch5' */
  if (rtb_Is_Absolute_Translation_g) {
    /* SignalConversion generated from: '<S76>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S76>/Constant4'
     *  Constant: '<S76>/Constant6'
     */
    rtb_Reshapey[0] = 1.0;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S76>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S76>/Constant2'
     *  Constant: '<S76>/Constant5'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = 0.01;

    /* S-Function (sfix_look1_dyn): '<S76>/Lookup Table Dynamic' */
    /* Dynamic Look-Up Table Block: '<S76>/Lookup Table Dynamic'
     * Input0  Data Type:  Floating Point real_T
     * Input1  Data Type:  Floating Point real_T
     * Input2  Data Type:  Floating Point real_T
     * Output0 Data Type:  Floating Point real_T
     * Lookup Method: Linear_Endpoint
     *
     */
    LookUp_real_T_real_T( &(rtb_LookupTableDynamic_n), &rtb_Reshapey[0],
                         rtb_Product2_a, &rtb_Minus_n[0], 1U);
    rtb_rx_f = rtb_LookupTableDynamic_n;
  } else {
    /* SignalConversion generated from: '<S76>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S76>/Constant10'
     *  Constant: '<S76>/Constant8'
     */
    rtb_Reshapey[0] = 1.0;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S76>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S76>/Constant7'
     *  Constant: '<S76>/Constant9'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = 0.01;

    /* S-Function (sfix_look1_dyn): '<S76>/Lookup Table Dynamic1' */
    /* Dynamic Look-Up Table Block: '<S76>/Lookup Table Dynamic1'
     * Input0  Data Type:  Floating Point real_T
     * Input1  Data Type:  Floating Point real_T
     * Input2  Data Type:  Floating Point real_T
     * Output0 Data Type:  Floating Point real_T
     * Lookup Method: Linear_Endpoint
     *
     */
    LookUp_real_T_real_T( &(rtb_LookupTableDynamic1_a), &rtb_Reshapey[0],
                         rtb_Product2_a, &rtb_Minus_n[0], 1U);
    rtb_rx_f = rtb_LookupTableDynamic1_a;
  }

  /* End of Switch: '<S76>/Switch5' */

  /* RelationalOperator: '<S82>/Compare' incorporates:
   *  Constant: '<S82>/Constant'
   */
  rtb_Is_Absolute_Steering = (rtb_Subtract_oz > 0.0);

  /* Switch: '<S76>/Switch1' incorporates:
   *  Switch: '<S76>/Switch3'
   */
  if (rtb_Is_Absolute_Translation_g) {
    rtb_Minus_k_idx_0 = Code_Gen_Model_ConstB.UnaryMinus;
  } else if (rtb_Is_Absolute_Steering) {
    /* Switch: '<S76>/Switch3' incorporates:
     *  Constant: '<S76>/Constant3'
     */
    rtb_Minus_k_idx_0 = Coral_Arm_DC_Inc_RL;
  } else {
    rtb_Minus_k_idx_0 = Code_Gen_Model_ConstB.UnaryMinus;
  }

  /* Product: '<S76>/Product' incorporates:
   *  Switch: '<S76>/Switch1'
   */
  rtb_UnitDelay1_el = rtb_Minus_k_idx_0 * rtb_rx_f;

  /* Switch: '<S85>/Init' incorporates:
   *  UnitDelay: '<S85>/FixPt Unit Delay1'
   *  UnitDelay: '<S85>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_j != 0) {
    rtb_Subtract2_h = rtb_Subtract_oz;
  } else {
    rtb_Subtract2_h = Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_pc;
  }

  /* End of Switch: '<S85>/Init' */

  /* Sum: '<S83>/Sum1' */
  rtb_rx = rtb_Subtract_oz - rtb_Subtract2_h;

  /* Switch: '<S84>/Switch2' incorporates:
   *  RelationalOperator: '<S84>/LowerRelop1'
   */
  if (!(rtb_rx > rtb_UnitDelay1_el)) {
    /* Switch: '<S76>/Switch2' incorporates:
     *  Constant: '<S76>/Constant1'
     *  Constant: '<S76>/Constant3'
     *  Switch: '<S76>/Switch4'
     *  UnaryMinus: '<S76>/Unary Minus1'
     */
    if (rtb_Is_Absolute_Translation_g) {
      rtb_Minus_k_idx_0 = -1.0;
    } else if (rtb_Is_Absolute_Steering) {
      /* Switch: '<S76>/Switch4' incorporates:
       *  Constant: '<S76>/Constant1'
       */
      rtb_Minus_k_idx_0 = -1.0;
    } else {
      rtb_Minus_k_idx_0 = -Coral_Arm_DC_Inc_RL;
    }

    /* Product: '<S76>/Product2' incorporates:
     *  Switch: '<S76>/Switch2'
     */
    rtb_Abs1 = rtb_Minus_k_idx_0 * rtb_rx_f;

    /* Switch: '<S84>/Switch' incorporates:
     *  RelationalOperator: '<S84>/UpperRelop'
     */
    if (rtb_rx < rtb_Abs1) {
      rtb_UnitDelay1_el = rtb_Abs1;
    } else {
      rtb_UnitDelay1_el = rtb_rx;
    }

    /* End of Switch: '<S84>/Switch' */
  }

  /* End of Switch: '<S84>/Switch2' */

  /* Outport: '<Root>/Coral_Arm_DutyCycle' incorporates:
   *  Sum: '<S83>/Sum'
   */
  Code_Gen_Model_Y.Coral_Arm_DutyCycle = rtb_UnitDelay1_el + rtb_Subtract2_h;

  /* RelationalOperator: '<S129>/Compare' incorporates:
   *  Constant: '<S129>/Constant'
   *  Inport: '<Root>/Joystick_Left_B8'
   */
  Code_Gen_Model_B.Actuator_Cmd = (Code_Gen_Model_U.Joystick_Left_B8 != 0.0);

  /* DataTypeConversion: '<S24>/Data Type Conversion' incorporates:
   *  Outport: '<Root>/CANdle_LED_ID'
   */
  rtb_Minus_k_idx_0 = floor(Code_Gen_Model_Y.CANdle_LED_ID);
  if ((rtIsNaN(rtb_Minus_k_idx_0)) || (rtIsInf(rtb_Minus_k_idx_0))) {
    rtb_Minus_k_idx_0 = 0.0;
  } else {
    rtb_Minus_k_idx_0 = fmod(rtb_Minus_k_idx_0, 256.0);
  }

  MultiportSwitch = (uint8_T)((rtb_Minus_k_idx_0 < 0.0) ? ((int32_T)((uint8_T)
    (-((int8_T)((uint8_T)(-rtb_Minus_k_idx_0)))))) : ((int32_T)((uint8_T)
    rtb_Minus_k_idx_0)));

  /* End of DataTypeConversion: '<S24>/Data Type Conversion' */

  /* RelationalOperator: '<S112>/Compare' incorporates:
   *  Constant: '<S112>/Constant'
   */
  rtb_Compare_ai = (MultiportSwitch == 0);

  /* Logic: '<S15>/Logical Operator2' incorporates:
   *  Constant: '<S15>/Constant5'
   *  Logic: '<S15>/Logical Operator3'
   *  RelationalOperator: '<S15>/Relational Operator'
   */
  rtb_Is_Absolute_Translation_g =
    ((Code_Gen_Model_B.Reefscape_Motors_Enable_merge) &&
     (Code_Gen_Model_B.Elevator_Height_Desired_merge == Elevator_Height_End_Game));

  /* Switch: '<S15>/Switch5' incorporates:
   *  Constant: '<S15>/Constant9'
   *  Logic: '<S15>/Logical Operator2'
   *  Switch: '<S15>/Switch7'
   *  UnitDelay: '<S15>/Unit Delay1'
   */
  if (rtb_Is_Absolute_Translation_g && (Code_Gen_Model_B.Actuator_Cmd)) {
    rtb_Is_Absolute_Steering = true;
  } else {
    rtb_Is_Absolute_Steering = ((!rtb_Compare_ai) &&
      (Code_Gen_Model_DW.UnitDelay1_DSTATE_kb));
  }

  /* End of Switch: '<S15>/Switch5' */

  /* RelationalOperator: '<S130>/Compare' incorporates:
   *  Constant: '<S130>/Constant'
   *  Inport: '<Root>/Joystick_Left_B5'
   */
  Code_Gen_Model_B.Winch_Cmd = (Code_Gen_Model_U.Joystick_Left_B5 != 0.0);

  /* Switch: '<S15>/Switch4' incorporates:
   *  Constant: '<S15>/Constant8'
   *  Logic: '<S15>/Logical Operator3'
   *  Switch: '<S15>/Switch6'
   *  UnitDelay: '<S15>/Unit Delay'
   */
  if (rtb_Is_Absolute_Translation_g && (Code_Gen_Model_B.Winch_Cmd)) {
    rtb_Compare_ai = true;
  } else {
    rtb_Compare_ai = ((!rtb_Compare_ai) &&
                      (Code_Gen_Model_DW.UnitDelay_DSTATE_gln));
  }

  /* End of Switch: '<S15>/Switch4' */

  /* Switch: '<S15>/Switch8' incorporates:
   *  Abs: '<S15>/Abs'
   *  Constant: '<S110>/Constant'
   *  Constant: '<S111>/Constant'
   *  Constant: '<S15>/Constant11'
   *  Inport: '<Root>/Actuator_Revs'
   *  RelationalOperator: '<S110>/Compare'
   *  RelationalOperator: '<S111>/Compare'
   *  UnitDelay: '<S15>/Unit Delay2'
   */
  if (fabs(Code_Gen_Model_U.Actuator_Revs) <= Actuator_Rev_Startup_Range) {
    FixPtRelationalOperator_e = true;
  } else {
    FixPtRelationalOperator_e = ((!(Code_Gen_Model_U.Actuator_Revs >=
      Actuator_Rev_Target)) && (Code_Gen_Model_DW.UnitDelay2_DSTATE_k));
  }

  /* End of Switch: '<S15>/Switch8' */

  /* Switch: '<S15>/Switch2' incorporates:
   *  Logic: '<S15>/Logical Operator4'
   */
  if (rtb_Compare_ai && rtb_Is_Absolute_Steering) {
    /* Switch: '<S15>/Switch3' */
    if (FixPtRelationalOperator_e) {
      /* Outport: '<Root>/Actuator_DutyCycle' incorporates:
       *  Constant: '<S15>/Constant6'
       */
      Code_Gen_Model_Y.Actuator_DutyCycle = Actuator_DC;
    } else {
      /* Outport: '<Root>/Actuator_DutyCycle' incorporates:
       *  Constant: '<S15>/Constant7'
       */
      Code_Gen_Model_Y.Actuator_DutyCycle = 0.0;
    }

    /* End of Switch: '<S15>/Switch3' */
  } else {
    /* Outport: '<Root>/Actuator_DutyCycle' incorporates:
     *  Constant: '<S15>/Constant4'
     */
    Code_Gen_Model_Y.Actuator_DutyCycle = 0.0;
  }

  /* End of Switch: '<S15>/Switch2' */

  /* Switch: '<S15>/Switch' */
  if (rtb_Compare_ai) {
    /* Switch: '<S15>/Switch1' incorporates:
     *  Constant: '<S109>/Constant'
     *  Inport: '<Root>/Winch_Revs'
     *  RelationalOperator: '<S109>/Compare'
     */
    if (Code_Gen_Model_U.Winch_Revs < Winch_Rev_Target) {
      /* Outport: '<Root>/Winch_DutyCycle' incorporates:
       *  Constant: '<S15>/Constant1'
       */
      Code_Gen_Model_Y.Winch_DutyCycle = Winch_Spool_DC;
    } else {
      /* Outport: '<Root>/Winch_DutyCycle' incorporates:
       *  Constant: '<S15>/Constant2'
       */
      Code_Gen_Model_Y.Winch_DutyCycle = Winch_Hold_DC;
    }

    /* End of Switch: '<S15>/Switch1' */
  } else {
    /* Outport: '<Root>/Winch_DutyCycle' incorporates:
     *  Constant: '<S15>/Constant'
     */
    Code_Gen_Model_Y.Winch_DutyCycle = 0.0;
  }

  /* End of Switch: '<S15>/Switch' */

  /* Chart: '<S24>/Chart' */
  if (Code_Gen_Model_DW.is_active_c9_Code_Gen_Model == 0) {
    Code_Gen_Model_DW.is_active_c9_Code_Gen_Model = 1U;
    Code_Gen_Model_B.Active_GameState = 0U;
    Code_Gen_Model_DW.is_c9_Code_Gen_Model = Code_Gen_Model_IN_Disabled;
  } else if (Code_Gen_Model_DW.is_c9_Code_Gen_Model ==
             Code_Gen_Model_IN_Disabled) {
    if (MultiportSwitch != 0) {
      Code_Gen_Model_DW.is_c9_Code_Gen_Model = Code_Gen_Model_IN_Not_Disabled;
      Code_Gen_Model_B.Active_GameState = MultiportSwitch;
    }

    /* case IN_Not_Disabled: */
  } else if (MultiportSwitch == 0) {
    Code_Gen_Model_DW.is_c9_Code_Gen_Model = Code_Gen_Model_IN_Disabled;
  } else {
    Code_Gen_Model_B.Active_GameState = MultiportSwitch;
  }

  /* End of Chart: '<S24>/Chart' */

  /* Outport: '<Root>/Gyro_Angle_Offset_Total' incorporates:
   *  Gain: '<S16>/Gain'
   *  Sum: '<S16>/Add1'
   */
  Code_Gen_Model_Y.Gyro_Angle_Offset_Total = (rtb_thetay + rtb_Switch1) *
    57.295779513082323;

  /* Switch: '<S4>/Switch1' incorporates:
   *  Constant: '<S4>/Constant2'
   *  Constant: '<S4>/Constant3'
   *  Outport: '<Root>/CANdle_LED_ID'
   *  Switch: '<S4>/Switch'
   */
  if (TEST_CANdle_Flag != 0.0) {
    Code_Gen_Model_Y.CANdle_LED_ID = TEST_CANdle_LED_ID;
  } else {
    Code_Gen_Model_Y.CANdle_LED_ID = Compare_f;
  }

  /* End of Switch: '<S4>/Switch1' */

  /* Product: '<S23>/Product' incorporates:
   *  Constant: '<S23>/Constant1'
   *  Sum: '<S200>/Diff'
   *  UnitDelay: '<S200>/UD'
   *
   * Block description for '<S200>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S200>/UD':
   *
   *  Store in Global RAM
   */
  rtb_UnitDelay1_el = (0.0 - Code_Gen_Model_DW.UD_DSTATE_e) *
    0.049546817471321378;

  /* Product: '<S23>/Product1' incorporates:
   *  Constant: '<S23>/Constant1'
   *  Sum: '<S201>/Diff'
   *  UnitDelay: '<S201>/UD'
   *
   * Block description for '<S201>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S201>/UD':
   *
   *  Store in Global RAM
   */
  rtb_thetay_e = (0.0 - Code_Gen_Model_DW.UD_DSTATE_p) * 0.049546817471321378;

  /* Product: '<S23>/Product2' incorporates:
   *  Constant: '<S23>/Constant1'
   *  Sum: '<S202>/Diff'
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
  rtb_thetay = (0.0 - Code_Gen_Model_DW.UD_DSTATE_bg) * 0.049546817471321378;

  /* Product: '<S23>/Product3' incorporates:
   *  Constant: '<S23>/Constant1'
   *  Sum: '<S203>/Diff'
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
  rtb_Abs1 = (0.0 - Code_Gen_Model_DW.UD_DSTATE_cp) * 0.049546817471321378;

  /* SignalConversion generated from: '<S23>/Product7' incorporates:
   *  Fcn: '<S204>/r->x'
   *  Fcn: '<S204>/theta->y'
   *  Fcn: '<S205>/r->x'
   *  Fcn: '<S205>/theta->y'
   *  Fcn: '<S206>/r->x'
   *  Fcn: '<S206>/theta->y'
   *  Fcn: '<S207>/r->x'
   *  Fcn: '<S207>/theta->y'
   */
  rtb_TmpSignalConversionAtProduc[0] = rtb_UnitDelay1_el * cos(0.0);
  rtb_TmpSignalConversionAtProduc[1] = rtb_UnitDelay1_el * sin(0.0);
  rtb_TmpSignalConversionAtProduc[2] = rtb_thetay_e * cos(0.0);
  rtb_TmpSignalConversionAtProduc[3] = rtb_thetay_e * sin(0.0);
  rtb_TmpSignalConversionAtProduc[4] = rtb_thetay * cos(0.0);
  rtb_TmpSignalConversionAtProduc[5] = rtb_thetay * sin(0.0);
  rtb_TmpSignalConversionAtProduc[6] = rtb_Abs1 * cos(0.0);
  rtb_TmpSignalConversionAtProduc[7] = rtb_Abs1 * sin(0.0);

  /* Product: '<S23>/Product7' incorporates:
   *  Constant: '<S23>/Constant4'
   */
  rtb_UnitDelay1_el = 0.0;
  rtb_Subtract2_h = 0.0;
  i = 0;
  for (rtb_Num_Segments = 0; rtb_Num_Segments < 8; rtb_Num_Segments++) {
    rtb_Minus_k_idx_0 = rtb_TmpSignalConversionAtProduc[rtb_Num_Segments];
    rtb_UnitDelay1_el += Code_Gen_Model_ConstP.pooled27[i] * rtb_Minus_k_idx_0;
    rtb_Subtract2_h += Code_Gen_Model_ConstP.pooled27[i + 1] * rtb_Minus_k_idx_0;
    i += 2;
  }

  rtb_Reshapey[1] = rtb_Subtract2_h;
  rtb_Reshapey[0] = rtb_UnitDelay1_el;

  /* End of Product: '<S23>/Product7' */

  /* Sum: '<S23>/Subtract2' incorporates:
   *  Constant: '<S23>/Constant3'
   *  Gain: '<S23>/Gain7'
   *  Math: '<S23>/Square'
   *  Sum: '<S199>/Diff'
   *  UnitDelay: '<S199>/UD'
   *
   * Block description for '<S199>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S199>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Subtract2_h = 1.0 - (((0.0 - Code_Gen_Model_DW.UD_DSTATE_do) * (0.0 -
    Code_Gen_Model_DW.UD_DSTATE_do)) * 0.16666666666666666);

  /* Gain: '<S23>/Gain6' incorporates:
   *  Sum: '<S199>/Diff'
   *  UnitDelay: '<S199>/UD'
   *
   * Block description for '<S199>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S199>/UD':
   *
   *  Store in Global RAM
   */
  rtb_UnitDelay1_el = (0.0 - Code_Gen_Model_DW.UD_DSTATE_do) * 0.5;

  /* Product: '<S23>/Product6' incorporates:
   *  Concatenate: '<S23>/Rotation matrix from local to global'
   *  SignalConversion generated from: '<S23>/POSE exponential matrix for improved accuracy while rotating'
   *  UnaryMinus: '<S23>/Unary Minus2'
   */
  rtb_rx = (rtb_Subtract2_h * rtb_Reshapey[0]) + ((-rtb_UnitDelay1_el) *
    rtb_Reshapey[1]);
  rtb_rx_f = (rtb_UnitDelay1_el * rtb_Reshapey[0]) + (rtb_Subtract2_h *
    rtb_Reshapey[1]);
  Code_Gen_Model_B.Product6_d[0] =
    Code_Gen_Model_ConstB.Rotationmatrixfromlocaltogl[0] * rtb_rx;
  Code_Gen_Model_B.Product6_d[1] =
    Code_Gen_Model_ConstB.Rotationmatrixfromlocaltogl[1] * rtb_rx;
  Code_Gen_Model_B.Product6_d[0] +=
    Code_Gen_Model_ConstB.Rotationmatrixfromlocaltogl[2] * rtb_rx_f;
  Code_Gen_Model_B.Product6_d[1] +=
    Code_Gen_Model_ConstB.Rotationmatrixfromlocaltogl[3] * rtb_rx_f;

  /* RelationalOperator: '<S209>/Compare' incorporates:
   *  Constant: '<S208>/Constant'
   *  Constant: '<S209>/Constant'
   */
  rtb_Is_Absolute_Translation_g = (Odometry_X_Y_TEAR != 0.0);

  /* DiscreteIntegrator: '<S23>/Accumulator2' incorporates:
   *  Constant: '<S23>/Constant'
   */
  if (Code_Gen_Model_DW.Accumulator2_IC_LOADING != 0) {
    Code_Gen_Model_DW.Accumulator2_DSTATE_p = 0.0;
  }

  if ((Odometry_Reset_IC > 0.0) &&
      (Code_Gen_Model_DW.Accumulator2_PrevResetState_c <= 0)) {
    Code_Gen_Model_DW.Accumulator2_DSTATE_p = 0.0;
  }

  /* DiscreteIntegrator: '<S23>/Accumulator2' */
  Code_Gen_Model_B.Odom_Position_X_p = Code_Gen_Model_DW.Accumulator2_DSTATE_p;

  /* Gain: '<S208>/meters to feet' */
  Code_Gen_Model_B.Odometry_X_global_est_ft_i = 3.28084 *
    Code_Gen_Model_B.Odom_Position_X_p;

  /* Switch: '<S208>/Switch' incorporates:
   *  UnitDelay: '<S208>/Unit Delay'
   */
  if (rtb_Is_Absolute_Translation_g) {
    rtb_thetay = Code_Gen_Model_B.Odometry_X_global_est_ft_i;
  } else {
    rtb_thetay = Code_Gen_Model_DW.UnitDelay_DSTATE_b;
  }

  /* End of Switch: '<S208>/Switch' */

  /* Sum: '<S208>/Subtract' */
  Code_Gen_Model_B.Odometry_X_global_TEAR_ft_e =
    Code_Gen_Model_B.Odometry_X_global_est_ft_i - rtb_thetay;

  /* DiscreteIntegrator: '<S23>/Accumulator' incorporates:
   *  Constant: '<S23>/Constant'
   */
  if (Code_Gen_Model_DW.Accumulator_IC_LOADING != 0) {
    Code_Gen_Model_DW.Accumulator_DSTATE_p = 0.0;
  }

  if ((Odometry_Reset_IC > 0.0) &&
      (Code_Gen_Model_DW.Accumulator_PrevResetState_j <= 0)) {
    Code_Gen_Model_DW.Accumulator_DSTATE_p = 0.0;
  }

  /* DiscreteIntegrator: '<S23>/Accumulator' */
  Code_Gen_Model_B.Odom_Position_Y_l = Code_Gen_Model_DW.Accumulator_DSTATE_p;

  /* Gain: '<S208>/meters to feet1' */
  Code_Gen_Model_B.Odometry_Y_global_est_ft_k = 3.28084 *
    Code_Gen_Model_B.Odom_Position_Y_l;

  /* Switch: '<S208>/Switch1' incorporates:
   *  UnitDelay: '<S208>/Unit Delay1'
   */
  if (rtb_Is_Absolute_Translation_g) {
    rtb_rx_f = Code_Gen_Model_B.Odometry_Y_global_est_ft_k;
  } else {
    rtb_rx_f = Code_Gen_Model_DW.UnitDelay1_DSTATE_a;
  }

  /* End of Switch: '<S208>/Switch1' */

  /* Sum: '<S208>/Subtract1' */
  Code_Gen_Model_B.Odometry_Y_global_TEAR_ft_d =
    Code_Gen_Model_B.Odometry_Y_global_est_ft_k - rtb_rx_f;

  /* SignalConversion: '<S17>/Signal Copy4' incorporates:
   *  Inport: '<Root>/Joystick_Right_X'
   */
  Code_Gen_Model_B.Steer_Joystick_X = Code_Gen_Model_U.Joystick_Right_X;

  /* Update for UnitDelay: '<S189>/UD' incorporates:
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Rev'
   *
   * Block description for '<S189>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE = Code_Gen_Model_U.FrontLeft_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S190>/UD' incorporates:
   *  Inport: '<Root>/FrontRight_Drive_Motor_Rev'
   *
   * Block description for '<S190>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_m = Code_Gen_Model_U.FrontRight_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S191>/UD' incorporates:
   *  Inport: '<Root>/BackLeft_Drive_Motor_Rev'
   *
   * Block description for '<S191>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_i = Code_Gen_Model_U.BackLeft_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S192>/UD' incorporates:
   *  Inport: '<Root>/BackRight_Drive_Motor_Rev'
   *
   * Block description for '<S192>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_c = Code_Gen_Model_U.BackRight_Drive_Motor_Rev;

  /* Update for Delay: '<S134>/MemoryX' */
  Code_Gen_Model_DW.icLoad = false;

  /* Product: '<S154>/A[k]*xhat[k|k-1]' incorporates:
   *  Constant: '<S134>/A'
   *  Delay: '<S134>/MemoryX'
   */
  rtb_Switch2_kn = Code_Gen_Model_DW.MemoryX_DSTATE[0];
  rtb_Subtract_oz = 0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[0];
  rtb_Minus_k_idx_0 = Code_Gen_Model_DW.MemoryX_DSTATE[1];

  /* Update for Delay: '<S134>/MemoryX' incorporates:
   *  Constant: '<S134>/A'
   *  Constant: '<S134>/B'
   *  Product: '<S154>/A[k]*xhat[k|k-1]'
   *  Product: '<S154>/B[k]*u[k]'
   *  Sum: '<S154>/Add'
   */
  Code_Gen_Model_DW.MemoryX_DSTATE[0] = (((0.0 * Code_Gen_Model_B.Product6[1]) +
    Code_Gen_Model_B.Product6[0]) + ((0.0 * rtb_Minus_k_idx_0) + rtb_Switch2_kn))
    + Code_Gen_Model_B.Product3[0];
  Code_Gen_Model_DW.MemoryX_DSTATE[1] = (((0.0 * Code_Gen_Model_B.Product6[0]) +
    Code_Gen_Model_B.Product6[1]) + (rtb_Subtract_oz + rtb_Minus_k_idx_0)) +
    Code_Gen_Model_B.Product3[1];

  /* Update for UnitDelay: '<S114>/Delay Input1' incorporates:
   *  Constant: '<S16>/Constant3'
   *
   * Block description for '<S114>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE = Gyro_Calibration_Reset_Flag;

  /* Update for UnitDelay: '<S16>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE = rtb_Switch1;

  /* Update for UnitDelay: '<S188>/UD'
   *
   * Block description for '<S188>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_d = Code_Gen_Model_B.Gyro_Angle_Field_rad;

  /* Update for UnitDelay: '<S94>/Unit Delay' incorporates:
   *  Outport: '<Root>/Elevator_DutyCycle'
   */
  Code_Gen_Model_DW.UnitDelay_DSTATE = Code_Gen_Model_Y.Elevator_DutyCycle;

  /* Update for UnitDelay: '<S131>/Delay Input1' incorporates:
   *  Inport: '<Root>/Joystick_Left_B11'
   *
   * Block description for '<S131>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_n = Code_Gen_Model_U.Joystick_Left_B11;

  /* Update for UnitDelay: '<S132>/Delay Input1' incorporates:
   *  Inport: '<Root>/Joystick_Left_B12'
   *
   * Block description for '<S132>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_e = Code_Gen_Model_U.Joystick_Left_B12;

  /* Update for UnitDelay: '<S133>/Delay Input1' incorporates:
   *  Inport: '<Root>/Joystick_Left_B13'
   *
   * Block description for '<S133>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_nj = Code_Gen_Model_U.Joystick_Left_B13;

  /* Update for UnitDelay: '<S106>/Delay Input1'
   *
   * Block description for '<S106>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_bd = Code_Gen_Model_B.Out_m;

  /* Update for UnitDelay: '<S107>/Delay Input1'
   *
   * Block description for '<S107>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_o1 = Code_Gen_Model_B.Out;

  /* Update for UnitDelay: '<S2>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_mp =
    Code_Gen_Model_B.Elevator_LowerPickup_Reset_merg;

  /* Update for UnitDelay: '<S108>/Delay Input1'
   *
   * Block description for '<S108>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_po = rtb_Compare;

  /* Update for UnitDelay: '<S18>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_ll =
    Code_Gen_Model_B.Robot_Reached_Destination_l;

  /* Update for UnitDelay: '<S104>/Delay Input1'
   *
   * Block description for '<S104>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_be = Robot_Reached_Destination;

  /* Update for UnitDelay: '<S76>/Unit Delay' incorporates:
   *  Outport: '<Root>/Coral_Arm_DutyCycle'
   */
  Code_Gen_Model_DW.UnitDelay_DSTATE_o = Code_Gen_Model_Y.Coral_Arm_DutyCycle;

  /* Update for UnitDelay: '<S86>/Delay Input1'
   *
   * Block description for '<S86>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_op = FixPtRelationalOperator_p;

  /* Update for S-Function (sfix_udelay): '<S19>/Tapped Delay' */
  Code_Gen_Model_DW.TappedDelay_X[0] = Code_Gen_Model_DW.TappedDelay_X[1];
  Code_Gen_Model_DW.TappedDelay_X[1] = Code_Gen_Model_B.Product6[0];

  /* Update for S-Function (sfix_udelay): '<S19>/Tapped Delay1' */
  Code_Gen_Model_DW.TappedDelay1_X[0] = Code_Gen_Model_DW.TappedDelay1_X[1];
  Code_Gen_Model_DW.TappedDelay1_X[1] = Code_Gen_Model_B.Product6[1];

  /* Update for DiscreteIntegrator: '<S22>/Accumulator2' incorporates:
   *  Constant: '<S22>/Constant'
   *  DiscreteIntegrator: '<S22>/Accumulator'
   *  DiscreteIntegrator: '<S23>/Accumulator'
   *  DiscreteIntegrator: '<S23>/Accumulator2'
   */
  Code_Gen_Model_DW.Accumulator2_DSTATE += Code_Gen_Model_B.Product6[0];
  if (Odometry_Reset_IC > 0.0) {
    Code_Gen_Model_DW.Accumulator2_PrevResetState = 1;
    Code_Gen_Model_DW.Accumulator_PrevResetState = 1;
    Code_Gen_Model_DW.Accumulator2_PrevResetState_c = 1;
    Code_Gen_Model_DW.Accumulator_PrevResetState_j = 1;
  } else if (Odometry_Reset_IC < 0.0) {
    Code_Gen_Model_DW.Accumulator2_PrevResetState = -1;
    Code_Gen_Model_DW.Accumulator_PrevResetState = -1;
    Code_Gen_Model_DW.Accumulator2_PrevResetState_c = -1;
    Code_Gen_Model_DW.Accumulator_PrevResetState_j = -1;
  } else if (Odometry_Reset_IC == 0.0) {
    Code_Gen_Model_DW.Accumulator2_PrevResetState = 0;
    Code_Gen_Model_DW.Accumulator_PrevResetState = 0;
    Code_Gen_Model_DW.Accumulator2_PrevResetState_c = 0;
    Code_Gen_Model_DW.Accumulator_PrevResetState_j = 0;
  } else {
    Code_Gen_Model_DW.Accumulator2_PrevResetState = 2;
    Code_Gen_Model_DW.Accumulator_PrevResetState = 2;
    Code_Gen_Model_DW.Accumulator2_PrevResetState_c = 2;
    Code_Gen_Model_DW.Accumulator_PrevResetState_j = 2;
  }

  /* End of Update for DiscreteIntegrator: '<S22>/Accumulator2' */

  /* Update for DiscreteIntegrator: '<S22>/Accumulator' */
  Code_Gen_Model_DW.Accumulator_DSTATE += Code_Gen_Model_B.Product6[1];

  /* Update for UnitDelay: '<S376>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S376>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE = 0U;

  /* Update for UnitDelay: '<S398>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_i = rtb_Merge1;

  /* Update for UnitDelay: '<S397>/UD'
   *
   * Block description for '<S397>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_a = rtb_Rotationmatrixfromlocalto_1;

  /* Update for UnitDelay: '<S395>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_m2 = rtb_Subtract_e;

  /* Update for UnitDelay: '<S378>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_d = rtb_Sum1_j;

  /* Update for UnitDelay: '<S393>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S393>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_p = 0U;

  /* Update for UnitDelay: '<S393>/FixPt Unit Delay1' */
  Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_e = rtb_Sum1_j;

  /* Update for UnitDelay: '<S377>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_g = rtb_DeadZone;

  /* Update for UnitDelay: '<S386>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S386>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_c = 0U;

  /* Update for UnitDelay: '<S386>/FixPt Unit Delay1' */
  Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_p = rtb_DeadZone;

  /* Update for UnitDelay: '<S352>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_j = rtb_Rotationmatrixfromlocalto_0;

  /* Update for UnitDelay: '<S351>/UD'
   *
   * Block description for '<S351>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_j = rtb_Rotationmatrixfromlocalto_2;

  /* Update for UnitDelay: '<S345>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_l = rtb_Hypot;

  /* Update for UnitDelay: '<S289>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_f = rtb_MatrixConcatenate_b_idx_0;

  /* Update for UnitDelay: '<S288>/UD'
   *
   * Block description for '<S288>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_h = rtb_MatrixConcatenate_b_idx_1;

  /* Update for UnitDelay: '<S282>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_j = rtb_Hypot_g5;

  /* Update for UnitDelay: '<S300>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_b = rtb_Add_ju;

  /* Update for UnitDelay: '<S299>/UD'
   *
   * Block description for '<S299>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_b = rtb_Switch2_n;

  /* Update for UnitDelay: '<S285>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_e = rtb_Sum2_e;

  /* Update for UnitDelay: '<S310>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_e = rtb_Rotationmatrixfromlocalto_3;

  /* Update for UnitDelay: '<S309>/UD'
   *
   * Block description for '<S309>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_mm = rtb_Minus_k_idx_1;

  /* Update for UnitDelay: '<S303>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_hj = rtb_Subtract_gy;

  /* Update for UnitDelay: '<S321>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_n = rtb_Hypot_b;

  /* Update for UnitDelay: '<S320>/UD'
   *
   * Block description for '<S320>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_i1 = rtb_Product_hi;

  /* Update for UnitDelay: '<S306>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_dt = rtb_Subtract1_bh;

  /* Update for UnitDelay: '<S331>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_n4 = rtb_uDLookupTable_l;

  /* Update for UnitDelay: '<S330>/UD'
   *
   * Block description for '<S330>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_o = rtb_Product_nr;

  /* Update for UnitDelay: '<S324>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_f = rtb_Integral_hv;

  /* Update for UnitDelay: '<S342>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_nw = rtb_Sum1_b;

  /* Update for UnitDelay: '<S341>/UD'
   *
   * Block description for '<S341>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_k = rtb_Product_nq;

  /* Update for UnitDelay: '<S327>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_k = rtb_Integral_m;

  /* Update for UnitDelay: '<S363>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_iw = rtb_rx_p;

  /* Update for UnitDelay: '<S362>/UD'
   *
   * Block description for '<S362>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_l = rtb_Product_il;

  /* Update for UnitDelay: '<S348>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_lm = rtb_Integral_p;

  /* Update for UnitDelay: '<S197>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_d = rtb_Switch1_e3;

  /* Update for UnitDelay: '<S197>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_c = rtb_Switch;

  /* Update for UnitDelay: '<S103>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S103>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_o = 0U;

  /* Update for UnitDelay: '<S103>/FixPt Unit Delay1' incorporates:
   *  Outport: '<Root>/Elevator_DutyCycle'
   */
  Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_l =
    Code_Gen_Model_Y.Elevator_DutyCycle;

  /* Update for UnitDelay: '<S85>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S85>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_j = 0U;

  /* Update for UnitDelay: '<S85>/FixPt Unit Delay1' incorporates:
   *  Outport: '<Root>/Coral_Arm_DutyCycle'
   */
  Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_pc =
    Code_Gen_Model_Y.Coral_Arm_DutyCycle;

  /* Update for UnitDelay: '<S15>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_kb = rtb_Is_Absolute_Steering;

  /* Update for UnitDelay: '<S15>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_gln = rtb_Compare_ai;

  /* Update for UnitDelay: '<S15>/Unit Delay2' */
  Code_Gen_Model_DW.UnitDelay2_DSTATE_k = FixPtRelationalOperator_e;

  /* Update for UnitDelay: '<S200>/UD'
   *
   * Block description for '<S200>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_e = 0.0;

  /* Update for UnitDelay: '<S201>/UD'
   *
   * Block description for '<S201>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_p = 0.0;

  /* Update for UnitDelay: '<S202>/UD'
   *
   * Block description for '<S202>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_bg = 0.0;

  /* Update for UnitDelay: '<S203>/UD'
   *
   * Block description for '<S203>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_cp = 0.0;

  /* Update for UnitDelay: '<S199>/UD'
   *
   * Block description for '<S199>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_do = 0.0;

  /* Update for DiscreteIntegrator: '<S23>/Accumulator2' */
  Code_Gen_Model_DW.Accumulator2_IC_LOADING = 0U;
  Code_Gen_Model_DW.Accumulator2_DSTATE_p += Code_Gen_Model_B.Product6_d[0];

  /* Update for UnitDelay: '<S208>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_b = rtb_thetay;

  /* Update for DiscreteIntegrator: '<S23>/Accumulator' */
  Code_Gen_Model_DW.Accumulator_IC_LOADING = 0U;
  Code_Gen_Model_DW.Accumulator_DSTATE_p += Code_Gen_Model_B.Product6_d[1];

  /* Update for UnitDelay: '<S208>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_a = rtb_rx_f;
}

/* Model step function */
void Code_Gen_Model_step(void)
{
  /* Outputs for Atomic SubSystem: '<Root>/High Frequency Block' */
  High_Frequency_Model_Step();

  /* End of Outputs for SubSystem: '<Root>/High Frequency Block' */

  /* Outputs for Atomic SubSystem: '<Root>/RoboRio Controls' */
  Model_Step();

  /* End of Outputs for SubSystem: '<Root>/RoboRio Controls' */

  /* Outport: '<Root>/Enable_Wheels' */
  Code_Gen_Model_Y.Enable_Wheels = Code_Gen_Model_B.Enable_Wheels;

  /* Outport: '<Root>/Reset_Wheel_Offsets' */
  Code_Gen_Model_Y.Reset_Wheel_Offsets = Code_Gen_Model_B.Reset_Wheel_Offsets;

  /* Outport: '<Root>/Disable_Wheels' */
  Code_Gen_Model_Y.Disable_Wheels = Code_Gen_Model_B.Disable_Wheels;

  /* Outport: '<Root>/Swerve_Motors_Disabled' */
  Code_Gen_Model_Y.Swerve_Motors_Disabled =
    Code_Gen_Model_B.Swerve_Motors_Disabled;

  /* Outport: '<Root>/Coral_Wheel_DutyCycle' */
  Code_Gen_Model_Y.Coral_Wheel_DutyCycle =
    Code_Gen_Model_B.Coral_Wheel_DutyCycle_merge;

  /* Outport: '<Root>/Algae_Wheel_Outside_DutyCycle' */
  Code_Gen_Model_Y.Algae_Wheel_Outside_DutyCycle =
    Code_Gen_Model_B.Algae_Wheel_Outside_DutyCycle_m;

  /* Outport: '<Root>/Algae_Wheel_Inside_DutyCycle' */
  Code_Gen_Model_Y.Algae_Wheel_Inside_DutyCycle =
    Code_Gen_Model_B.Algae_Wheel_Inside_DutyCycle_me;

  /* Outport: '<Root>/Desired_Pipeline' */
  Code_Gen_Model_Y.Desired_Pipeline = Code_Gen_Model_B.Desired_Pipeline;
}

/* Model initialize function */
void Code_Gen_Model_initialize(void)
{
  /* SystemInitialize for Atomic SubSystem: '<Root>/RoboRio Controls' */
  Model_Step_Init();

  /* End of SystemInitialize for SubSystem: '<Root>/RoboRio Controls' */
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
