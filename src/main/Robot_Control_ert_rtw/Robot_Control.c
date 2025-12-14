/*
 * Sponsored License - for use in support of a program or activity
 * sponsored by MathWorks.  Not for government, commercial or other
 * non-sponsored organizational use.
 *
 * File: Robot_Control.c
 *
 * Code generated for Simulink model 'Robot_Control'.
 *
 * Model version                  : 2.422
 * Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
 * C/C++ source code generated on : Sat Dec 13 20:01:48 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM 7
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Robot_Control.h"
#include "rtwtypes.h"
#include "Robot_Control_private.h"
#include <math.h>
#include "rt_nonfinite.h"
#include <string.h>
#include "rt_hypotd_snf.h"
#include "rt_atan2d_snf.h"
#include "rt_modd_snf.h"
#include "rt_powd_snf.h"
#include "LookUp_real_T_real_T.h"
#include "look1_binlcpw.h"
#include "plook_u32u8_evencka.h"

/* Named constants for Chart: '<S9>/Debounce' */
#define Robot_Control_IN_False         ((uint8_T)1U)
#define Robot_Control_IN_Timer_False   ((uint8_T)2U)
#define Robot_Control_IN_Timer_True    ((uint8_T)3U)
#define Robot_Control_IN_True          ((uint8_T)4U)

/* Named constants for Chart: '<S28>/Reefscape_Chart' */
#define R_IN_Elevator_Height_Bottom_pre ((uint8_T)7U)
#define Robo_IN_Coral_Pickup_Lower_Wait ((uint8_T)2U)
#define Robot_C_IN_Coral_Pickup_Prepare ((uint8_T)3U)
#define Robot_C_IN_Coral_Score_Position ((uint8_T)2U)
#define Robot_Co_IN_Auto_Lower_Elevator ((uint8_T)1U)
#define Robot_Co_IN_Manual_Adjustment_c ((uint8_T)5U)
#define Robot_Con_IN_Coral_Pickup_Lower ((uint8_T)1U)
#define Robot_Con_IN_Coral_Pickup_Raise ((uint8_T)4U)
#define Robot_Cont_IN_Algae_Pickup_High ((uint8_T)1U)
#define Robot_Cont_IN_Manual_Adjustment ((uint8_T)2U)
#define Robot_Contr_IN_Algae_Pickup_Low ((uint8_T)2U)
#define Robot_Contro_IN_Coral_Motor_Off ((uint8_T)2U)
#define Robot_Contro_IN_NO_ACTIVE_CHILD ((uint8_T)0U)
#define Robot_Control_IN_Algae_Hold    ((uint8_T)1U)
#define Robot_Control_IN_Algae_Pull_In ((uint8_T)2U)
#define Robot_Control_IN_Algae_Push_Out ((uint8_T)3U)
#define Robot_Control_IN_Algae_Score   ((uint8_T)3U)
#define Robot_Control_IN_Auto_Lower_Arm ((uint8_T)1U)
#define Robot_Control_IN_Coral         ((uint8_T)4U)
#define Robot_Control_IN_Coral_Eject   ((uint8_T)1U)
#define Robot_Control_IN_Coral_Pickup  ((uint8_T)5U)
#define Robot_Control_IN_Eject         ((uint8_T)1U)
#define Robot_Control_IN_End_Game_Climb ((uint8_T)8U)
#define Robot_Control_IN_L1            ((uint8_T)1U)
#define Robot_Control_IN_L2            ((uint8_T)2U)
#define Robot_Control_IN_L3            ((uint8_T)3U)
#define Robot_Control_IN_L4            ((uint8_T)4U)
#define Robot_Control_IN_Level_1       ((uint8_T)1U)
#define Robot_Control_IN_Level_2       ((uint8_T)2U)
#define Robot_Control_IN_Level_3       ((uint8_T)3U)
#define Robot_Control_IN_Level_4       ((uint8_T)4U)
#define Robot_Control_IN_Level_4_Auto  ((uint8_T)4U)
#define Robot_Control_IN_Level_4_Teleop ((uint8_T)5U)
#define Robot_Control_IN_Level_4_Timer ((uint8_T)6U)
#define Robot_Control_IN_None          ((uint8_T)5U)
#define Robot_Control_IN_Off           ((uint8_T)4U)
#define Robot_Control_IN_Off_Target    ((uint8_T)1U)
#define Robot_Control_IN_On_Target     ((uint8_T)2U)
#define Robot_Control_IN_Start         ((uint8_T)9U)
#define Robot_Control_IN_Start_Angle   ((uint8_T)10U)
#define Robot_Control_IN_Stop          ((uint8_T)7U)
#define Robot_IN_Elevator_Height_Bottom ((uint8_T)6U)
#define Robot__IN_Auto_Lower_Elevator_l ((uint8_T)2U)

/* Named constants for Chart: '<S20>/Chart' */
#define Robot_Cont_IN_NO_ACTIVE_CHILD_g ((uint8_T)0U)
#define Robot_Control_IN_Disabled      ((uint8_T)1U)
#define Robot_Control_IN_Not_Disabled  ((uint8_T)2U)

/* Named constants for Chart: '<S25>/Reefscape_Auto_Steps' */
#define IN_Back_Up_from_Reef_Coral_Scor ((uint8_T)2U)
#define IN_Drive_Backward_from_Collect_ ((uint8_T)3U)
#define IN_Drive_Backward_from_Processo ((uint8_T)4U)
#define IN_Drive_Forward_and_Collect_Al ((uint8_T)5U)
#define R_IN_Path_to_Coral_Station_1_v3 ((uint8_T)5U)
#define Robo_IN_Adjust_Height_for_Algae ((uint8_T)1U)
#define Robo_IN_Path_to_Coral_Station_1 ((uint8_T)4U)
#define Robo_IN_Wait_at_Coral_Station_1 ((uint8_T)11U)
#define Robot_Co_IN_Back_Up_from_Reef_1 ((uint8_T)2U)
#define Robot_Co_IN_Back_Up_from_Reef_2 ((uint8_T)3U)
#define Robot_Con_IN_Score_at_Processor ((uint8_T)10U)
#define Robot_Cont_IN_Lower_for_Scoring ((uint8_T)7U)
#define Robot_Cont_IN_Path_to_Processor ((uint8_T)8U)
#define Robot_Cont_IN_Path_to_Reef_2_v2 ((uint8_T)8U)
#define Robot_Contro_IN_Score_at_Reef_1 ((uint8_T)9U)
#define Robot_Contro_IN_Score_at_Reef_2 ((uint8_T)10U)
#define Robot_Contro_IN_Wait_for_Teleop ((uint8_T)12U)
#define Robot_Control_IN_Back          ((uint8_T)1U)
#define Robot_Control_IN_Center        ((uint8_T)1U)
#define Robot_Control_IN_Drive         ((uint8_T)1U)
#define Robot_Control_IN_End_early     ((uint8_T)6U)
#define Robot_Control_IN_L1_g          ((uint8_T)2U)
#define Robot_Control_IN_Left_and_Right ((uint8_T)2U)
#define Robot_Control_IN_Path_to_Reef  ((uint8_T)9U)
#define Robot_Control_IN_Path_to_Reef_1 ((uint8_T)6U)
#define Robot_Control_IN_Path_to_Reef_2 ((uint8_T)7U)
#define Robot_Control_IN_Raise_to_L2   ((uint8_T)2U)
#define Robot_Control_IN_Raise_to_L4   ((uint8_T)2U)
#define Robot_Control_IN_Raise_to_L4_e ((uint8_T)1U)
#define Robot_Control_IN_Score_at_Reef ((uint8_T)11U)
#define Robot_Control_IN_Set_L4        ((uint8_T)1U)
#define Robot_Control_IN_Start_l       ((uint8_T)3U)
#define Robot_Control_IN_Stay_at_L2    ((uint8_T)2U)
#define Robot_Control_IN_Timer_to_L4   ((uint8_T)2U)

/* Exported block parameters */
real_T AT_Integral_Enable_Error_Angle = 5.0;
                                     /* Variable: AT_Integral_Enable_Error_Angle
                                      * Referenced by:
                                      *   '<S399>/Constant'
                                      *   '<S33>/Constant'
                                      */
real_T AT_Integral_Enable_Error_XY = 2.0;/* Variable: AT_Integral_Enable_Error_XY
                                          * Referenced by:
                                          *   '<S406>/Constant'
                                          *   '<S407>/Constant'
                                          *   '<S40>/Constant'
                                          *   '<S41>/Constant'
                                          */
real_T AT_Max_Error_Angle = 1.0;       /* Variable: AT_Max_Error_Angle
                                        * Referenced by:
                                        *   '<S405>/Constant'
                                        *   '<S39>/Constant'
                                        */
real_T AT_Max_Error_XY = 0.75;         /* Variable: AT_Max_Error_XY
                                        * Referenced by:
                                        *   '<S403>/Constant'
                                        *   '<S404>/Constant'
                                        *   '<S37>/Constant'
                                        *   '<S38>/Constant'
                                        */
real_T AT_On_Target_Time = 0.25;       /* Variable: AT_On_Target_Time
                                        * Referenced by:
                                        *   '<S395>/Reefscape_Chart'
                                        *   '<S28>/Reefscape_Chart'
                                        */
real_T AT_Reef_Target_Algae_X = 18.0;  /* Variable: AT_Reef_Target_Algae_X
                                        * Referenced by:
                                        *   '<S393>/Constant7'
                                        *   '<S26>/Constant7'
                                        */
real_T AT_Reef_Target_Algae_Y = 2.5;   /* Variable: AT_Reef_Target_Algae_Y
                                        * Referenced by:
                                        *   '<S393>/Constant6'
                                        *   '<S26>/Constant6'
                                        */
real_T AT_Reef_Target_Center_Y = -4.5; /* Variable: AT_Reef_Target_Center_Y
                                        * Referenced by:
                                        *   '<S393>/Constant3'
                                        *   '<S26>/Constant3'
                                        */
real_T AT_Reef_Target_L1_X = 25.75;    /* Variable: AT_Reef_Target_L1_X
                                        * Referenced by:
                                        *   '<S393>/Constant4'
                                        *   '<S26>/Constant4'
                                        */
real_T AT_Reef_Target_L2_L3_X = 24.25; /* Variable: AT_Reef_Target_L2_L3_X
                                        * Referenced by:
                                        *   '<S393>/Constant'
                                        *   '<S26>/Constant'
                                        */
real_T AT_Reef_Target_L4_X = 26.75;    /* Variable: AT_Reef_Target_L4_X
                                        * Referenced by:
                                        *   '<S393>/Constant5'
                                        *   '<S26>/Constant5'
                                        */
real_T AT_Reef_Target_Left_Y = 3.5;    /* Variable: AT_Reef_Target_Left_Y
                                        * Referenced by:
                                        *   '<S393>/Constant1'
                                        *   '<S26>/Constant1'
                                        */
real_T AT_Reef_Target_Right_Y = -9.5;  /* Variable: AT_Reef_Target_Right_Y
                                        * Referenced by: '<S393>/Constant2'
                                        */
real_T AT_Steering_Error_Angle_Gain_P = 0.1;
                                     /* Variable: AT_Steering_Error_Angle_Gain_P
                                      * Referenced by:
                                      *   '<S30>/Constant4'
                                      *   '<S415>/Constant4'
                                      */
real_T AT_Steering_Speed_Max = 0.4;    /* Variable: AT_Steering_Speed_Max
                                        * Referenced by:
                                        *   '<S30>/Constant10'
                                        *   '<S415>/Constant10'
                                        */
real_T AT_Translation_Control_Gain_Field = 10.0;
                                  /* Variable: AT_Translation_Control_Gain_Field
                                   * Referenced by: '<S416>/Gain2'
                                   */
real_T AT_Translation_Control_Gain_Relative = 0.07;
                               /* Variable: AT_Translation_Control_Gain_Relative
                                * Referenced by:
                                *   '<S30>/Gain1'
                                *   '<S416>/Gain1'
                                */
real_T AT_Translation_Speed_Max_Field = 5.0;
                                     /* Variable: AT_Translation_Speed_Max_Field
                                      * Referenced by: '<S416>/Constant5'
                                      */
real_T AT_Translation_Speed_Max_Relative = 0.75;
                                  /* Variable: AT_Translation_Speed_Max_Relative
                                   * Referenced by:
                                   *   '<S30>/Constant8'
                                   *   '<S416>/Constant8'
                                   */
real_T Actuator_DC = 0.5;              /* Variable: Actuator_DC
                                        * Referenced by: '<S14>/Constant6'
                                        */
real_T Actuator_Rev_Startup_Range = 10.0;/* Variable: Actuator_Rev_Startup_Range
                                          * Referenced by: '<S105>/Constant'
                                          */
real_T Actuator_Rev_Target = 80.0;     /* Variable: Actuator_Rev_Target
                                        * Referenced by: '<S106>/Constant'
                                        */
real_T Algae_Eject_Time = 1.0;         /* Variable: Algae_Eject_Time
                                        * Referenced by:
                                        *   '<S395>/Reefscape_Chart'
                                        *   '<S28>/Reefscape_Chart'
                                        */
real_T Algae_Hold_DC = 0.005;          /* Variable: Algae_Hold_DC
                                        * Referenced by:
                                        *   '<S395>/Reefscape_Chart'
                                        *   '<S28>/Reefscape_Chart'
                                        */
real_T Algae_Pull_In_DC = 1.0;         /* Variable: Algae_Pull_In_DC
                                        * Referenced by:
                                        *   '<S395>/Reefscape_Chart'
                                        *   '<S28>/Reefscape_Chart'
                                        */
real_T Algae_Push_Out_DC = -0.3;       /* Variable: Algae_Push_Out_DC
                                        * Referenced by:
                                        *   '<S395>/Reefscape_Chart'
                                        *   '<S28>/Reefscape_Chart'
                                        */
real_T Auto_Algae_Height_Time = 0.5;   /* Variable: Auto_Algae_Height_Time
                                        * Referenced by: '<S25>/Reefscape_Auto_Steps'
                                        */
real_T Auto_Backup_Time_Processor = 1.0;/* Variable: Auto_Backup_Time_Processor
                                         * Referenced by: '<S25>/Reefscape_Auto_Steps'
                                         */
real_T Auto_Backup_Time_Reef = 0.25;   /* Variable: Auto_Backup_Time_Reef
                                        * Referenced by: '<S25>/Reefscape_Auto_Steps'
                                        */
real_T Auto_Path1_Delay_to_L2_Time = 0.5;/* Variable: Auto_Path1_Delay_to_L2_Time
                                          * Referenced by: '<S25>/Reefscape_Auto_Steps'
                                          */
real_T Auto_Path1_Delay_to_L4_Time = 0.25;/* Variable: Auto_Path1_Delay_to_L4_Time
                                           * Referenced by: '<S25>/Reefscape_Auto_Steps'
                                           */
real_T Auto_Path2_Delay_to_L4_Time = 0.0;/* Variable: Auto_Path2_Delay_to_L4_Time
                                          * Referenced by: '<S25>/Reefscape_Auto_Steps'
                                          */
real_T Auto_Speed_Algae = 0.5;         /* Variable: Auto_Speed_Algae
                                        * Referenced by: '<S25>/Reefscape_Auto_Steps'
                                        */
real_T Auto_Speed_Coral = 1.0;         /* Variable: Auto_Speed_Coral
                                        * Referenced by: '<S25>/Reefscape_Auto_Steps'
                                        */
real_T Auto_Speed_Processor = 0.5;     /* Variable: Auto_Speed_Processor
                                        * Referenced by: '<S25>/Reefscape_Auto_Steps'
                                        */
real_T Auto_Speed_Reef = 1.0;          /* Variable: Auto_Speed_Reef
                                        * Referenced by: '<S25>/Reefscape_Auto_Steps'
                                        */
real_T Boost_Trigger_Decreasing_Limit = -0.28;
                                     /* Variable: Boost_Trigger_Decreasing_Limit
                                      * Referenced by: '<S430>/Constant1'
                                      */
real_T Boost_Trigger_High_Speed = 5.0; /* Variable: Boost_Trigger_High_Speed
                                        * Referenced by:
                                        *   '<S426>/Constant'
                                        *   '<S426>/Saturation'
                                        */
real_T Boost_Trigger_Increasing_Limit = 3.5;
                                     /* Variable: Boost_Trigger_Increasing_Limit
                                      * Referenced by: '<S430>/Constant3'
                                      */
real_T Boost_Trigger_Low_Speed = 1.5;  /* Variable: Boost_Trigger_Low_Speed
                                        * Referenced by: '<S426>/Constant1'
                                        */
real_T Coral_Arm_Angle_Coral_Score_Lower_Rate = -2.0;
                             /* Variable: Coral_Arm_Angle_Coral_Score_Lower_Rate
                              * Referenced by:
                              *   '<S395>/Reefscape_Chart'
                              *   '<S28>/Reefscape_Chart'
                              */
real_T Coral_Arm_Angle_Error_Threshold = 3.0;
                                    /* Variable: Coral_Arm_Angle_Error_Threshold
                                     * Referenced by:
                                     *   '<S395>/Reefscape_Chart'
                                     *   '<S28>/Reefscape_Chart'
                                     */
real_T Coral_Arm_Angle_L1 = -15.0;     /* Variable: Coral_Arm_Angle_L1
                                        * Referenced by:
                                        *   '<S395>/Reefscape_Chart'
                                        *   '<S28>/Reefscape_Chart'
                                        */
real_T Coral_Arm_Angle_L2 = 50.0;      /* Variable: Coral_Arm_Angle_L2
                                        * Referenced by:
                                        *   '<S395>/Reefscape_Chart'
                                        *   '<S28>/Reefscape_Chart'
                                        */
real_T Coral_Arm_Angle_L3 = 50.0;      /* Variable: Coral_Arm_Angle_L3
                                        * Referenced by:
                                        *   '<S395>/Reefscape_Chart'
                                        *   '<S28>/Reefscape_Chart'
                                        */
real_T Coral_Arm_Angle_L4 = 57.0;      /* Variable: Coral_Arm_Angle_L4
                                        * Referenced by:
                                        *   '<S395>/Reefscape_Chart'
                                        *   '<S28>/Reefscape_Chart'
                                        */
real_T Coral_Arm_Angle_L4_Eject_Auto = 25.0;
                                      /* Variable: Coral_Arm_Angle_L4_Eject_Auto
                                       * Referenced by:
                                       *   '<S395>/Reefscape_Chart'
                                       *   '<S28>/Reefscape_Chart'
                                       */
real_T Coral_Arm_Angle_L4_Eject_Teleop = 40.0;
                                    /* Variable: Coral_Arm_Angle_L4_Eject_Teleop
                                     * Referenced by:
                                     *   '<S395>/Reefscape_Chart'
                                     *   '<S28>/Reefscape_Chart'
                                     */
real_T Coral_Arm_Angle_Neg_Threshold = -86.0;
                                      /* Variable: Coral_Arm_Angle_Neg_Threshold
                                       * Referenced by: '<S68>/Constant'
                                       */
real_T Coral_Arm_Angle_Pos_Threshold = 80.0;
                                      /* Variable: Coral_Arm_Angle_Pos_Threshold
                                       * Referenced by:
                                       *   '<S69>/Constant'
                                       *   '<S70>/Constant'
                                       */
real_T Coral_Arm_Angle_Start = -15.0;  /* Variable: Coral_Arm_Angle_Start
                                        * Referenced by:
                                        *   '<S395>/Reefscape_Chart'
                                        *   '<S28>/Reefscape_Chart'
                                        */
real_T Coral_Arm_Angle_Start_Thresh = -75.0;/* Variable: Coral_Arm_Angle_Start_Thresh
                                             * Referenced by:
                                             *   '<S395>/Reefscape_Chart'
                                             *   '<S28>/Reefscape_Chart'
                                             */
real_T Coral_Arm_Angle_Up = 85.0;      /* Variable: Coral_Arm_Angle_Up
                                        * Referenced by:
                                        *   '<S395>/Reefscape_Chart'
                                        *   '<S28>/Reefscape_Chart'
                                        */
real_T Coral_Arm_DC_Inc_RL = 0.033333; /* Variable: Coral_Arm_DC_Inc_RL
                                        * Referenced by: '<S71>/Constant3'
                                        */
real_T Coral_Arm_Gain_Int = 0.0005;    /* Variable: Coral_Arm_Gain_Int
                                        * Referenced by: '<S72>/Gain2'
                                        */
real_T Coral_Arm_Gain_Prop = 0.005;    /* Variable: Coral_Arm_Gain_Prop
                                        * Referenced by: '<S72>/Gain1'
                                        */
real_T Coral_Arm_Int_IC = 0.0;         /* Variable: Coral_Arm_Int_IC
                                        * Referenced by: '<S72>/Constant3'
                                        */
real_T Coral_Arm_Int_LL = -0.025;      /* Variable: Coral_Arm_Int_LL
                                        * Referenced by: '<S72>/Saturation1'
                                        */
real_T Coral_Arm_Int_UL = 0.025;       /* Variable: Coral_Arm_Int_UL
                                        * Referenced by: '<S72>/Saturation1'
                                        */
real_T Coral_Arm_Manual_Gain = 1.0;    /* Variable: Coral_Arm_Manual_Gain
                                        * Referenced by:
                                        *   '<S395>/Reefscape_Chart'
                                        *   '<S28>/Reefscape_Chart'
                                        */
real_T Coral_Arm_Neg90_DC = -0.03;     /* Variable: Coral_Arm_Neg90_DC
                                        * Referenced by: '<S8>/Constant2'
                                        */
real_T Coral_Arm_Pos90_DC = 0.03;      /* Variable: Coral_Arm_Pos90_DC
                                        * Referenced by: '<S8>/Constant1'
                                        */
real_T Coral_Detect_Distance = 150.0;  /* Variable: Coral_Detect_Distance
                                        * Referenced by:
                                        *   '<S25>/Reefscape_Auto_Steps'
                                        *   '<S395>/Reefscape_Chart'
                                        *   '<S28>/Reefscape_Chart'
                                        */
real_T Coral_Eject_Time = 0.5;         /* Variable: Coral_Eject_Time
                                        * Referenced by:
                                        *   '<S395>/Reefscape_Chart'
                                        *   '<S28>/Reefscape_Chart'
                                        */
real_T Coral_Motor_DC_Eject = -0.4;    /* Variable: Coral_Motor_DC_Eject
                                        * Referenced by:
                                        *   '<S395>/Reefscape_Chart'
                                        *   '<S28>/Reefscape_Chart'
                                        */
real_T Coral_Motor_DC_Hold = 0.01;     /* Variable: Coral_Motor_DC_Hold
                                        * Referenced by:
                                        *   '<S395>/Reefscape_Chart'
                                        *   '<S28>/Reefscape_Chart'
                                        */
real_T Coral_Motor_DC_Pickup = 0.1;    /* Variable: Coral_Motor_DC_Pickup
                                        * Referenced by:
                                        *   '<S395>/Reefscape_Chart'
                                        *   '<S28>/Reefscape_Chart'
                                        */
real_T Drive_Engage_Hook_Angle = 3.1416;/* Variable: Drive_Engage_Hook_Angle
                                         * Referenced by: '<S416>/Constant9'
                                         */
real_T Drive_Engage_Hook_Speed = 0.3;  /* Variable: Drive_Engage_Hook_Speed
                                        * Referenced by: '<S416>/Constant7'
                                        */
real_T Drive_Motor_Control_D = 0.0001; /* Variable: Drive_Motor_Control_D
                                        * Referenced by:
                                        *   '<S249>/Constant3'
                                        *   '<S270>/Constant3'
                                        *   '<S291>/Constant3'
                                        *   '<S312>/Constant3'
                                        */
real_T Drive_Motor_Control_D_FilterCoeff = 0.22223;
                                  /* Variable: Drive_Motor_Control_D_FilterCoeff
                                   * Referenced by:
                                   *   '<S249>/Constant2'
                                   *   '<S270>/Constant2'
                                   *   '<S291>/Constant2'
                                   *   '<S312>/Constant2'
                                   */
real_T Drive_Motor_Control_D_LL = -0.2;/* Variable: Drive_Motor_Control_D_LL
                                        * Referenced by:
                                        *   '<S249>/Saturation'
                                        *   '<S270>/Saturation'
                                        *   '<S291>/Saturation'
                                        *   '<S312>/Saturation'
                                        */
real_T Drive_Motor_Control_D_UL = 0.2; /* Variable: Drive_Motor_Control_D_UL
                                        * Referenced by:
                                        *   '<S249>/Saturation'
                                        *   '<S270>/Saturation'
                                        *   '<S291>/Saturation'
                                        *   '<S312>/Saturation'
                                        */
real_T Drive_Motor_Control_FF = 0.00016129;/* Variable: Drive_Motor_Control_FF
                                            * Referenced by:
                                            *   '<S249>/Gain'
                                            *   '<S270>/Gain'
                                            *   '<S291>/Gain'
                                            *   '<S312>/Gain'
                                            */
real_T Drive_Motor_Control_I = 1.0E-6; /* Variable: Drive_Motor_Control_I
                                        * Referenced by:
                                        *   '<S249>/Gain2'
                                        *   '<S270>/Gain2'
                                        *   '<S291>/Gain2'
                                        *   '<S312>/Gain2'
                                        */
real_T Drive_Motor_Control_I_LL = -0.03;/* Variable: Drive_Motor_Control_I_LL
                                         * Referenced by:
                                         *   '<S249>/Saturation1'
                                         *   '<S270>/Saturation1'
                                         *   '<S291>/Saturation1'
                                         *   '<S312>/Saturation1'
                                         */
real_T Drive_Motor_Control_I_UL = 0.03;/* Variable: Drive_Motor_Control_I_UL
                                        * Referenced by:
                                        *   '<S249>/Saturation1'
                                        *   '<S270>/Saturation1'
                                        *   '<S291>/Saturation1'
                                        *   '<S312>/Saturation1'
                                        */
real_T Drive_Motor_Control_P = 5.0E-6; /* Variable: Drive_Motor_Control_P
                                        * Referenced by:
                                        *   '<S249>/Gain1'
                                        *   '<S270>/Gain1'
                                        *   '<S291>/Gain1'
                                        *   '<S312>/Gain1'
                                        */
real_T Drive_Motor_Control_Sign_Change_Deadband = 7000.0;
                           /* Variable: Drive_Motor_Control_Sign_Change_Deadband
                            * Referenced by:
                            *   '<S254>/Constant'
                            *   '<S275>/Constant'
                            *   '<S296>/Constant'
                            *   '<S317>/Constant'
                            */
real_T Elevator_Bottom_DC = -0.1;      /* Variable: Elevator_Bottom_DC
                                        * Referenced by: '<S12>/Constant7'
                                        */
real_T Elevator_DC_Inc_RL = 0.066667;  /* Variable: Elevator_DC_Inc_RL
                                        * Referenced by: '<S89>/Constant3'
                                        */
real_T Elevator_Error_Bottom_Disable = 1.0;
                                      /* Variable: Elevator_Error_Bottom_Disable
                                       * Referenced by: '<S86>/Constant'
                                       */
real_T Elevator_Error_Increase = 0.0;  /* Variable: Elevator_Error_Increase
                                        * Referenced by: '<S12>/Constant6'
                                        */
real_T Elevator_Gain_Int = 0.02;       /* Variable: Elevator_Gain_Int
                                        * Referenced by: '<S90>/Gain2'
                                        */
real_T Elevator_Gain_Prop = 0.3;       /* Variable: Elevator_Gain_Prop
                                        * Referenced by: '<S90>/Gain1'
                                        */
real_T Elevator_Height_Algae_High = 20.3;/* Variable: Elevator_Height_Algae_High
                                          * Referenced by:
                                          *   '<S395>/Reefscape_Chart'
                                          *   '<S28>/Reefscape_Chart'
                                          */
real_T Elevator_Height_Algae_Low = 12.3;/* Variable: Elevator_Height_Algae_Low
                                         * Referenced by:
                                         *   '<S395>/Reefscape_Chart'
                                         *   '<S28>/Reefscape_Chart'
                                         */
real_T Elevator_Height_Algae_Score = 3.3;/* Variable: Elevator_Height_Algae_Score
                                          * Referenced by:
                                          *   '<S395>/Reefscape_Chart'
                                          *   '<S28>/Reefscape_Chart'
                                          */
real_T Elevator_Height_Bottom = 0.0;   /* Variable: Elevator_Height_Bottom
                                        * Referenced by:
                                        *   '<S395>/Reefscape_Chart'
                                        *   '<S28>/Reefscape_Chart'
                                        */
real_T Elevator_Height_Bottom_Pre = 13.8;/* Variable: Elevator_Height_Bottom_Pre
                                          * Referenced by:
                                          *   '<S395>/Reefscape_Chart'
                                          *   '<S28>/Reefscape_Chart'
                                          */
real_T Elevator_Height_Coral_Arm_Low_Thresh = 8.5;
                               /* Variable: Elevator_Height_Coral_Arm_Low_Thresh
                                * Referenced by: '<S67>/Constant'
                                */
real_T Elevator_Height_Coral_Score_Lower_Rate = -0.2;
                             /* Variable: Elevator_Height_Coral_Score_Lower_Rate
                              * Referenced by:
                              *   '<S395>/Reefscape_Chart'
                              *   '<S28>/Reefscape_Chart'
                              */
real_T Elevator_Height_End_Game = 14.8;/* Variable: Elevator_Height_End_Game
                                        * Referenced by:
                                        *   '<S14>/Constant5'
                                        *   '<S395>/Reefscape_Chart'
                                        *   '<S28>/Reefscape_Chart'
                                        */
real_T Elevator_Height_Error_Threshold = 1.0;
                                    /* Variable: Elevator_Height_Error_Threshold
                                     * Referenced by:
                                     *   '<S87>/Constant'
                                     *   '<S395>/Reefscape_Chart'
                                     *   '<S28>/Reefscape_Chart'
                                     */
real_T Elevator_Height_L1 = 11.8;      /* Variable: Elevator_Height_L1
                                        * Referenced by:
                                        *   '<S395>/Reefscape_Chart'
                                        *   '<S28>/Reefscape_Chart'
                                        */
real_T Elevator_Height_L2 = 7.05;      /* Variable: Elevator_Height_L2
                                        * Referenced by:
                                        *   '<S395>/Reefscape_Chart'
                                        *   '<S28>/Reefscape_Chart'
                                        */
real_T Elevator_Height_L2_Eject = 1.05;/* Variable: Elevator_Height_L2_Eject
                                        * Referenced by:
                                        *   '<S395>/Reefscape_Chart'
                                        *   '<S28>/Reefscape_Chart'
                                        */
real_T Elevator_Height_L3 = 15.05;     /* Variable: Elevator_Height_L3
                                        * Referenced by:
                                        *   '<S395>/Reefscape_Chart'
                                        *   '<S28>/Reefscape_Chart'
                                        */
real_T Elevator_Height_L3_Eject = 9.05;/* Variable: Elevator_Height_L3_Eject
                                        * Referenced by:
                                        *   '<S395>/Reefscape_Chart'
                                        *   '<S28>/Reefscape_Chart'
                                        */
real_T Elevator_Height_L4 = 26.7;      /* Variable: Elevator_Height_L4
                                        * Referenced by:
                                        *   '<S395>/Reefscape_Chart'
                                        *   '<S28>/Reefscape_Chart'
                                        */
real_T Elevator_Height_Lower = 7.3;    /* Variable: Elevator_Height_Lower
                                        * Referenced by:
                                        *   '<S395>/Reefscape_Chart'
                                        *   '<S28>/Reefscape_Chart'
                                        */
real_T Elevator_Height_Manual_Gain = 0.1;/* Variable: Elevator_Height_Manual_Gain
                                          * Referenced by:
                                          *   '<S395>/Reefscape_Chart'
                                          *   '<S28>/Reefscape_Chart'
                                          */
real_T Elevator_Height_PickupLower_Reset = 7.675;
                                  /* Variable: Elevator_Height_PickupLower_Reset
                                   * Referenced by: '<S13>/Constant2'
                                   */
real_T Elevator_Height_Prepare = 10.8; /* Variable: Elevator_Height_Prepare
                                        * Referenced by:
                                        *   '<S395>/Reefscape_Chart'
                                        *   '<S28>/Reefscape_Chart'
                                        */
real_T Elevator_Height_Raise = 9.4;    /* Variable: Elevator_Height_Raise
                                        * Referenced by:
                                        *   '<S395>/Reefscape_Chart'
                                        *   '<S28>/Reefscape_Chart'
                                        */
real_T Elevator_Height_Top_Reset = 30.0;/* Variable: Elevator_Height_Top_Reset
                                         * Referenced by:
                                         *   '<S13>/Constant1'
                                         *   '<S13>/Constant3'
                                         */
real_T Elevator_Hold_at_Top_DC = 0.1;  /* Variable: Elevator_Hold_at_Top_DC
                                        * Referenced by: '<S12>/Constant1'
                                        */
real_T Elevator_Int_IC = 0.0;          /* Variable: Elevator_Int_IC
                                        * Referenced by: '<S90>/Constant3'
                                        */
real_T Elevator_Int_LL = -0.1;         /* Variable: Elevator_Int_LL
                                        * Referenced by: '<S90>/Saturation1'
                                        */
real_T Elevator_Int_UL = 0.1;          /* Variable: Elevator_Int_UL
                                        * Referenced by: '<S90>/Saturation1'
                                        */
real_T Elevator_Limit_Switch_Debounce_F2T = 0.5;
                                 /* Variable: Elevator_Limit_Switch_Debounce_F2T
                                  * Referenced by:
                                  *   '<S9>/Constant1'
                                  *   '<S10>/Constant1'
                                  */
real_T Elevator_Limit_Switch_Debounce_T2F = 0.0;
                                 /* Variable: Elevator_Limit_Switch_Debounce_T2F
                                  * Referenced by:
                                  *   '<S9>/Constant2'
                                  *   '<S10>/Constant2'
                                  */
real_T Elevator_LowerPickup_Time = 0.0;/* Variable: Elevator_LowerPickup_Time
                                        * Referenced by:
                                        *   '<S395>/Reefscape_Chart'
                                        *   '<S28>/Reefscape_Chart'
                                        */
real_T Elevator_MotorRev_to_Inch = 0.27646;/* Variable: Elevator_MotorRev_to_Inch
                                            * Referenced by: '<S13>/Gain1'
                                            */
real_T Elevator_Total_LL = -0.5;       /* Variable: Elevator_Total_LL
                                        * Referenced by:
                                        *   '<S12>/Constant8'
                                        *   '<S90>/Constant1'
                                        *   '<S90>/Saturation2'
                                        */
real_T Elevator_Total_UL = 1.0;        /* Variable: Elevator_Total_UL
                                        * Referenced by:
                                        *   '<S90>/Constant'
                                        *   '<S90>/Saturation2'
                                        */
real_T KF_Enable = 1.0;                /* Variable: KF_Enable
                                        * Referenced by:
                                        *   '<S17>/Constant1'
                                        *   '<S17>/Constant2'
                                        */
real_T L4_Switch_Time = 0.1;           /* Variable: L4_Switch_Time
                                        * Referenced by:
                                        *   '<S395>/Reefscape_Chart'
                                        *   '<S28>/Reefscape_Chart'
                                        */
real_T Limelight_Tag_Angle_Offset = 0.0;/* Variable: Limelight_Tag_Angle_Offset
                                         * Referenced by: '<S18>/Constant2'
                                         */
real_T Limelight_Tag_X_Offset = -0.28; /* Variable: Limelight_Tag_X_Offset
                                        * Referenced by: '<S18>/Constant'
                                        */
real_T Limelight_Tag_Y_Offset = -0.28; /* Variable: Limelight_Tag_Y_Offset
                                        * Referenced by: '<S18>/Constant1'
                                        */
real_T MatchTime_Skip_Coral_Pickup = 7.0;/* Variable: MatchTime_Skip_Coral_Pickup
                                          * Referenced by: '<S25>/Reefscape_Auto_Steps'
                                          */
real_T MatchTime_Skip_Second_L4 = 3.4; /* Variable: MatchTime_Skip_Second_L4
                                        * Referenced by: '<S25>/Reefscape_Auto_Steps'
                                        */
real_T Spline_Last_Pose_Distance_to_Velocity_Gain = 2.0;
                         /* Variable: Spline_Last_Pose_Distance_to_Velocity_Gain
                          * Referenced by: '<S238>/Constant2'
                          */
real_T Spline_Max_Centripital_Acceleration = 10.0;
                                /* Variable: Spline_Max_Centripital_Acceleration
                                 * Referenced by: '<S238>/Constant1'
                                 */
real_T Spline_Pose_Num_Before_End_Reduce_Speed = 1.0;
                            /* Variable: Spline_Pose_Num_Before_End_Reduce_Speed
                             * Referenced by: '<S185>/Constant'
                             */
real_T Spline_Stop_Radius = 0.1;       /* Variable: Spline_Stop_Radius
                                        * Referenced by: '<S198>/Constant'
                                        */
real_T Spline_Velocity_Multiplier_TEST = 1.0;
                                    /* Variable: Spline_Velocity_Multiplier_TEST
                                     * Referenced by: '<S238>/Constant3'
                                     */
real_T Steering_Absolute_Cmd_Approach_Zero_Error_Thresh = 0.2;
                   /* Variable: Steering_Absolute_Cmd_Approach_Zero_Error_Thresh
                    * Referenced by: '<S345>/Constant5'
                    */
real_T Steering_Absolute_Cmd_Approach_Zero_Final_Thresh = 0.01;
                   /* Variable: Steering_Absolute_Cmd_Approach_Zero_Final_Thresh
                    * Referenced by: '<S345>/Constant6'
                    */
real_T Steering_Absolute_Cmd_NonZero_Error_Thresh = 0.2;
                         /* Variable: Steering_Absolute_Cmd_NonZero_Error_Thresh
                          * Referenced by: '<S345>/Constant9'
                          */
real_T Steering_Absolute_Cmd_NonZero_Final_Scale_Factor = 0.1;
                   /* Variable: Steering_Absolute_Cmd_NonZero_Final_Scale_Factor
                    * Referenced by: '<S345>/Constant10'
                    */
real_T Steering_Absolute_Cmd_Rate_Limit_Dec = -1.0;
                               /* Variable: Steering_Absolute_Cmd_Rate_Limit_Dec
                                * Referenced by: '<S345>/Constant1'
                                */
real_T Steering_Absolute_Cmd_Rate_Limit_Inc = 1.0;
                               /* Variable: Steering_Absolute_Cmd_Rate_Limit_Inc
                                * Referenced by: '<S345>/Constant3'
                                */
real_T Steering_Heading_Control_D = 0.0;/* Variable: Steering_Heading_Control_D
                                         * Referenced by: '<S362>/Constant3'
                                         */
real_T Steering_Heading_Control_D_FilterCoeff = 0.22223;
                             /* Variable: Steering_Heading_Control_D_FilterCoeff
                              * Referenced by: '<S362>/Constant2'
                              */
real_T Steering_Heading_Control_D_LL = 0.0;
                                      /* Variable: Steering_Heading_Control_D_LL
                                       * Referenced by: '<S362>/Saturation'
                                       */
real_T Steering_Heading_Control_D_UL = 0.0;
                                      /* Variable: Steering_Heading_Control_D_UL
                                       * Referenced by: '<S362>/Saturation'
                                       */
real_T Steering_Heading_Control_Deadzone = 0.1;
                                  /* Variable: Steering_Heading_Control_Deadzone
                                   * Referenced by: '<S361>/Constant'
                                   */
real_T Steering_Heading_Control_I = 0.0;/* Variable: Steering_Heading_Control_I
                                         * Referenced by: '<S362>/Gain2'
                                         */
real_T Steering_Heading_Control_I_LL = -0.1;
                                      /* Variable: Steering_Heading_Control_I_LL
                                       * Referenced by: '<S362>/Saturation1'
                                       */
real_T Steering_Heading_Control_I_UL = 0.1;
                                      /* Variable: Steering_Heading_Control_I_UL
                                       * Referenced by: '<S362>/Saturation1'
                                       */
real_T Steering_Heading_Control_P = 2.5;/* Variable: Steering_Heading_Control_P
                                         * Referenced by: '<S362>/Gain1'
                                         */
real_T Steering_Heading_Control_Total_LL = -2.5;
                                  /* Variable: Steering_Heading_Control_Total_LL
                                   * Referenced by:
                                   *   '<S362>/Constant1'
                                   *   '<S362>/Saturation2'
                                   */
real_T Steering_Heading_Control_Total_UL = 2.5;
                                  /* Variable: Steering_Heading_Control_Total_UL
                                   * Referenced by:
                                   *   '<S362>/Constant'
                                   *   '<S362>/Saturation2'
                                   */
real_T Steering_Motor_Control_D = 0.5; /* Variable: Steering_Motor_Control_D
                                        * Referenced by:
                                        *   '<S252>/Constant3'
                                        *   '<S273>/Constant3'
                                        *   '<S294>/Constant3'
                                        *   '<S315>/Constant3'
                                        */
real_T Steering_Motor_Control_D_FilterCoeff = 0.22223;
                               /* Variable: Steering_Motor_Control_D_FilterCoeff
                                * Referenced by:
                                *   '<S252>/Constant2'
                                *   '<S273>/Constant2'
                                *   '<S294>/Constant2'
                                *   '<S315>/Constant2'
                                */
real_T Steering_Motor_Control_D_LL = -0.2;/* Variable: Steering_Motor_Control_D_LL
                                           * Referenced by:
                                           *   '<S252>/Saturation'
                                           *   '<S273>/Saturation'
                                           *   '<S294>/Saturation'
                                           *   '<S315>/Saturation'
                                           */
real_T Steering_Motor_Control_D_UL = 0.2;/* Variable: Steering_Motor_Control_D_UL
                                          * Referenced by:
                                          *   '<S252>/Saturation'
                                          *   '<S273>/Saturation'
                                          *   '<S294>/Saturation'
                                          *   '<S315>/Saturation'
                                          */
real_T Steering_Motor_Control_I = 0.005;/* Variable: Steering_Motor_Control_I
                                         * Referenced by:
                                         *   '<S252>/Gain2'
                                         *   '<S273>/Gain2'
                                         *   '<S294>/Gain2'
                                         *   '<S315>/Gain2'
                                         */
real_T Steering_Motor_Control_I_LL = -0.005;/* Variable: Steering_Motor_Control_I_LL
                                             * Referenced by:
                                             *   '<S252>/Saturation1'
                                             *   '<S273>/Saturation1'
                                             *   '<S294>/Saturation1'
                                             *   '<S315>/Saturation1'
                                             */
real_T Steering_Motor_Control_I_UL = 0.005;/* Variable: Steering_Motor_Control_I_UL
                                            * Referenced by:
                                            *   '<S252>/Saturation1'
                                            *   '<S273>/Saturation1'
                                            *   '<S294>/Saturation1'
                                            *   '<S315>/Saturation1'
                                            */
real_T Steering_Motor_Control_P = 0.15;/* Variable: Steering_Motor_Control_P
                                        * Referenced by:
                                        *   '<S252>/Gain1'
                                        *   '<S273>/Gain1'
                                        *   '<S294>/Gain1'
                                        *   '<S315>/Gain1'
                                        */
real_T Steering_Relative_Cmd_Approach_Zero_Error_Thresh = 0.2;
                   /* Variable: Steering_Relative_Cmd_Approach_Zero_Error_Thresh
                    * Referenced by: '<S344>/Constant5'
                    */
real_T Steering_Relative_Cmd_Approach_Zero_Final_Thresh = 0.01;
                   /* Variable: Steering_Relative_Cmd_Approach_Zero_Final_Thresh
                    * Referenced by: '<S344>/Constant6'
                    */
real_T Steering_Relative_Cmd_NonZero_Error_Thresh = 0.2;
                         /* Variable: Steering_Relative_Cmd_NonZero_Error_Thresh
                          * Referenced by: '<S344>/Constant9'
                          */
real_T Steering_Relative_Cmd_NonZero_Final_Scale_Factor = 1.0;
                   /* Variable: Steering_Relative_Cmd_NonZero_Final_Scale_Factor
                    * Referenced by: '<S344>/Constant10'
                    */
real_T Steering_Relative_Cmd_Rate_Limit_Dec = -10.0;
                               /* Variable: Steering_Relative_Cmd_Rate_Limit_Dec
                                * Referenced by: '<S344>/Constant1'
                                */
real_T Steering_Relative_Cmd_Rate_Limit_Inc = 10.0;
                               /* Variable: Steering_Relative_Cmd_Rate_Limit_Inc
                                * Referenced by: '<S344>/Constant3'
                                */
real_T Steering_Relative_Gain = 5.0;   /* Variable: Steering_Relative_Gain
                                        * Referenced by: '<S415>/Constant'
                                        */
real_T Steering_Twist_Gain = -0.5;     /* Variable: Steering_Twist_Gain
                                        * Referenced by: '<S415>/Constant1'
                                        */
real_T TEST_CANdle_Flag = 0.0;         /* Variable: TEST_CANdle_Flag
                                        * Referenced by: '<S3>/Constant2'
                                        */
real_T TEST_CANdle_LED_ID = 0.0;       /* Variable: TEST_CANdle_LED_ID
                                        * Referenced by: '<S3>/Constant3'
                                        */
real_T TEST_Swerve_Mode_Override_Flag = 0.0;
                                     /* Variable: TEST_Swerve_Mode_Override_Flag
                                      * Referenced by: '<S396>/Constant5'
                                      */
real_T TEST_Swerve_Mode_Steering = 0.0;/* Variable: TEST_Swerve_Mode_Steering
                                        * Referenced by: '<S396>/Constant8'
                                        */
real_T TEST_Swerve_Mode_Translation = 0.0;/* Variable: TEST_Swerve_Mode_Translation
                                           * Referenced by: '<S396>/Constant7'
                                           */
real_T Translation_Speed_Approach_Zero_Error_Thresh = 0.2;
                       /* Variable: Translation_Speed_Approach_Zero_Error_Thresh
                        * Referenced by: '<S332>/Constant5'
                        */
real_T Translation_Speed_Approach_Zero_Final_Thresh = 0.01;
                       /* Variable: Translation_Speed_Approach_Zero_Final_Thresh
                        * Referenced by: '<S332>/Constant6'
                        */
real_T Translation_Speed_NonZero_Error_Thresh = 0.15;
                             /* Variable: Translation_Speed_NonZero_Error_Thresh
                              * Referenced by: '<S332>/Constant9'
                              */
real_T Translation_Speed_NonZero_Final_Scale_Factor = 0.05;
                       /* Variable: Translation_Speed_NonZero_Final_Scale_Factor
                        * Referenced by: '<S332>/Constant10'
                        */
real_T Translation_Speed_Rate_Limit_Dec = -4.0;
                                   /* Variable: Translation_Speed_Rate_Limit_Dec
                                    * Referenced by: '<S332>/Constant1'
                                    */
real_T Translation_Speed_Rate_Limit_Inc = 4.0;
                                   /* Variable: Translation_Speed_Rate_Limit_Inc
                                    * Referenced by: '<S332>/Constant3'
                                    */
real_T Translation_Twist_Gain = -0.5;  /* Variable: Translation_Twist_Gain
                                        * Referenced by: '<S416>/Gain'
                                        */
real_T Twist_Deadzone_neg = -0.01;     /* Variable: Twist_Deadzone_neg
                                        * Referenced by:
                                        *   '<S415>/Dead Zone'
                                        *   '<S416>/Dead Zone'
                                        */
real_T Twist_Deadzone_pos = 0.01;      /* Variable: Twist_Deadzone_pos
                                        * Referenced by:
                                        *   '<S415>/Dead Zone'
                                        *   '<S416>/Dead Zone'
                                        */
real_T Winch_Hold_DC = 0.05;           /* Variable: Winch_Hold_DC
                                        * Referenced by: '<S14>/Constant2'
                                        */
real_T Winch_Rev_Target = 30.0;        /* Variable: Winch_Rev_Target
                                        * Referenced by: '<S104>/Constant'
                                        */
real_T Winch_Spool_DC = 1.0;           /* Variable: Winch_Spool_DC
                                        * Referenced by: '<S14>/Constant1'
                                        */
uint8_T TEST_Pipeline = 0U;            /* Variable: TEST_Pipeline
                                        * Referenced by: '<S24>/Constant22'
                                        */

/* Block signals (default storage) */
B_Robot_Control_T Robot_Control_B;

/* Block states (default storage) */
DW_Robot_Control_T Robot_Control_DW;

/* External inputs (root inport signals with default storage) */
ExtU_Robot_Control_T Robot_Control_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_Robot_Control_T Robot_Control_Y;

/* Real-time model */
static RT_MODEL_Robot_Control_T Robot_Control_M_;
RT_MODEL_Robot_Control_T *const Robot_Control_M = &Robot_Control_M_;

/* Forward declaration for local functions */
static void Robot_Control_Algae_Pickup_High(boolean_T rtu_Gamepad_Start,
  boolean_T rtu_Gamepad_Back, boolean_T rtu_Gamepad_RB, boolean_T
  rtu_Gamepad_POV_Up, boolean_T rtu_Gamepad_POV_Down, boolean_T
  rtu_Gamepad_POV_Left, boolean_T rtu_Gamepad_POV_Right, real_T
  rtu_Gamepad_Stick_Left_Y, real_T rtu_Gamepad_Stick_Right_Y, real_T
  rtu_Coral_Arm_Angle_Measured, boolean_T rtu_Algae_Limit_Switch, real_T
  *rty_State_ID, real_T *rty_Elevator_Height_Desired, real_T
  *rty_Coral_Arm_Angle_Desired, real_T *rty_Coral_Wheel_DC, uint8_T
  *rty_Set_Algae_Level, uint8_T *rty_Desired_Pipeline,
  DW_Reefscape_Chart_Robot_Cont_T *localDW);
static void Robot_Control_Algae_Pickup_Low(boolean_T rtu_Gamepad_Start,
  boolean_T rtu_Gamepad_Back, boolean_T rtu_Gamepad_RB, boolean_T
  rtu_Gamepad_POV_Up, boolean_T rtu_Gamepad_POV_Down, boolean_T
  rtu_Gamepad_POV_Left, boolean_T rtu_Gamepad_POV_Right, real_T
  rtu_Gamepad_Stick_Left_Y, real_T rtu_Gamepad_Stick_Right_Y, real_T
  rtu_Coral_Arm_Angle_Measured, boolean_T rtu_Algae_Limit_Switch, real_T
  *rty_State_ID, real_T *rty_Elevator_Height_Desired, real_T
  *rty_Coral_Arm_Angle_Desired, real_T *rty_Coral_Wheel_DC, uint8_T
  *rty_Set_Algae_Level, uint8_T *rty_Desired_Pipeline,
  DW_Reefscape_Chart_Robot_Cont_T *localDW);
static void Robo_enter_internal_Coral_Eject(uint8_T rtu_GameState, real_T
  *rty_State_ID, real_T *rty_Elevator_Height_Desired, real_T
  *rty_Coral_Arm_Angle_Desired, real_T *rty_Coral_Wheel_DC, uint16_T
  *rty_Set_Coral_Level, DW_Reefscape_Chart_Robot_Cont_T *localDW);
static void enter_internal_Coral_Score_Posi(boolean_T rtu_Gamepad_B1_A,
  boolean_T rtu_Gamepad_B2_B, boolean_T rtu_Gamepad_B3_X, boolean_T
  rtu_Gamepad_B4_Y, real_T rtu_Gamepad_Stick_Left_Y, real_T
  rtu_Gamepad_Stick_Right_Y, real_T *rty_State_ID, real_T
  *rty_Elevator_Height_Desired, real_T *rty_Coral_Arm_Angle_Desired, uint16_T
  *rty_Set_Coral_Level, DW_Reefscape_Chart_Robot_Cont_T *localDW);
static void Robot_Control_Level_3(real_T rtu_Gamepad_Stick_Left_Y, real_T
  rtu_Gamepad_Stick_Right_Y, real_T *rty_State_ID, real_T
  *rty_Elevator_Height_Desired, real_T *rty_Coral_Arm_Angle_Desired,
  DW_Reefscape_Chart_Robot_Cont_T *localDW);
static void Robot_Control_Level_4(real_T rtu_Gamepad_Stick_Left_Y, real_T
  rtu_Gamepad_Stick_Right_Y, real_T *rty_State_ID, real_T
  *rty_Elevator_Height_Desired, real_T *rty_Coral_Arm_Angle_Desired,
  DW_Reefscape_Chart_Robot_Cont_T *localDW);
static void Robot_Cont_Coral_Score_Position(uint8_T rtu_GameState, boolean_T
  rtu_Gamepad_B1_A, boolean_T rtu_Gamepad_B2_B, boolean_T rtu_Gamepad_B3_X,
  boolean_T rtu_Gamepad_B4_Y, boolean_T rtu_Gamepad_Start, boolean_T
  rtu_Gamepad_Back, boolean_T rtu_Gamepad_RB, boolean_T rtu_Gamepad_POV_Up,
  boolean_T rtu_Gamepad_POV_Down, boolean_T rtu_Gamepad_POV_Left, boolean_T
  rtu_Gamepad_POV_Right, real_T rtu_Gamepad_Stick_Left_Y, real_T
  rtu_Gamepad_Stick_Right_Y, real_T rtu_Coral_Arm_Angle_Measured, boolean_T
  rtu_Coral_Limit_Switch, boolean_T rtu_Algae_Limit_Switch, real_T *rty_State_ID,
  real_T *rty_Elevator_Height_Desired, real_T *rty_Coral_Arm_Angle_Desired,
  real_T *rty_Coral_Wheel_DC, uint16_T *rty_Set_Coral_Level, uint8_T
  *rty_Set_Algae_Level, uint8_T *rty_Desired_Pipeline,
  DW_Reefscape_Chart_Robot_Cont_T *localDW);
static void Robot_exit_internal_Coral_Eject(boolean_T *rty_Coral_Score,
  DW_Reefscape_Chart_Robot_Cont_T *localDW);
static void Robot_Control_Level_4_Teleop(boolean_T rtu_Gamepad_RB, real_T
  rtu_Gamepad_Stick_Left_Y, real_T rtu_Gamepad_Stick_Right_Y, real_T
  rtu_Coral_Arm_Angle_Measured, boolean_T rtu_Coral_Limit_Switch, boolean_T
  rtu_AT_On_Target, real_T *rty_State_ID, real_T *rty_Elevator_Height_Desired,
  real_T *rty_Coral_Arm_Angle_Desired, real_T *rty_Coral_Wheel_DC,
  DW_Reefscape_Chart_Robot_Cont_T *localDW);
static void Robot_Control_Coral(uint8_T rtu_GameState, boolean_T
  rtu_Gamepad_B1_A, boolean_T rtu_Gamepad_B2_B, boolean_T rtu_Gamepad_B3_X,
  boolean_T rtu_Gamepad_B4_Y, boolean_T rtu_Gamepad_Start, boolean_T
  rtu_Gamepad_Back, boolean_T rtu_Gamepad_RB, boolean_T rtu_Gamepad_POV_Up,
  boolean_T rtu_Gamepad_POV_Down, boolean_T rtu_Gamepad_POV_Left, boolean_T
  rtu_Gamepad_POV_Right, real_T rtu_Gamepad_Stick_Left_Y, real_T
  rtu_Gamepad_Stick_Right_Y, real_T rtu_Elevator_Height_Measured, real_T
  rtu_Coral_Arm_Angle_Measured, boolean_T rtu_Coral_Limit_Switch, boolean_T
  rtu_Algae_Limit_Switch, boolean_T rtu_AT_On_Target, real_T *rty_State_ID,
  real_T *rty_Elevator_Height_Desired, real_T *rty_Coral_Arm_Angle_Desired,
  real_T *rty_Coral_Wheel_DC, uint16_T *rty_Set_Coral_Level, uint8_T
  *rty_Set_Algae_Level, boolean_T *rty_Coral_Score, uint8_T
  *rty_Desired_Pipeline, DW_Reefscape_Chart_Robot_Cont_T *localDW);
static void Robo_exit_internal_Coral_Pickup(boolean_T
  *rty_Coral_Pickup_Lower_Wait_Sta, DW_Reefscape_Chart_Robot_Cont_T *localDW);
static void Robot_Control_Set_Level(boolean_T rtu_Gamepad_B1_A, boolean_T
  rtu_Gamepad_B2_B, boolean_T rtu_Gamepad_B3_X, boolean_T rtu_Gamepad_B4_Y,
  DW_Reefscape_Chart_Robot_Cont_T *localDW);
static void Robot_Control_Coral_Pickup(boolean_T rtu_Gamepad_B1_A, boolean_T
  rtu_Gamepad_B2_B, boolean_T rtu_Gamepad_B3_X, boolean_T rtu_Gamepad_B4_Y,
  boolean_T rtu_Gamepad_Start, boolean_T rtu_Gamepad_Back, boolean_T
  rtu_Gamepad_RB, boolean_T rtu_Gamepad_POV_Up, boolean_T rtu_Gamepad_POV_Down,
  boolean_T rtu_Gamepad_POV_Left, boolean_T rtu_Gamepad_POV_Right, real_T
  rtu_Gamepad_Stick_Left_Y, real_T rtu_Gamepad_Stick_Right_Y, real_T
  rtu_Elevator_Height_Measured, real_T rtu_Coral_Arm_Angle_Measured, real_T
  rtu_Coral_TOF_Distance, boolean_T rtu_Coral_Limit_Switch, boolean_T
  rtu_Algae_Limit_Switch, real_T *rty_State_ID, real_T
  *rty_Elevator_Height_Desired, real_T *rty_Coral_Arm_Angle_Desired, real_T
  *rty_Coral_Wheel_DC, boolean_T *rty_Elevator_LowerPickup_Reset, boolean_T
  *rty_Coral_Pickup_Lower_Wait_Sta, uint8_T *rty_Set_Algae_Level, uint8_T
  *rty_Desired_Pipeline, DW_Reefscape_Chart_Robot_Cont_T *localDW);
static void Robot_Co_Elevator_Height_Bottom(boolean_T rtu_Gamepad_Start,
  boolean_T rtu_Gamepad_Back, boolean_T rtu_Gamepad_RB, boolean_T
  rtu_Gamepad_POV_Up, boolean_T rtu_Gamepad_POV_Down, boolean_T
  rtu_Gamepad_POV_Left, boolean_T rtu_Gamepad_POV_Right, real_T
  rtu_Gamepad_Stick_Left_Y, real_T rtu_Gamepad_Stick_Right_Y, real_T
  rtu_Coral_Arm_Angle_Measured, boolean_T rtu_Algae_Limit_Switch, real_T
  *rty_State_ID, real_T *rty_Elevator_Height_Desired, real_T
  *rty_Coral_Arm_Angle_Desired, real_T *rty_Coral_Wheel_DC, uint8_T
  *rty_Set_Algae_Level, uint8_T *rty_Desired_Pipeline,
  DW_Reefscape_Chart_Robot_Cont_T *localDW);
static void Robo_Elevator_Height_Bottom_pre(boolean_T rtu_Gamepad_Start,
  boolean_T rtu_Gamepad_Back, boolean_T rtu_Gamepad_RB, boolean_T
  rtu_Gamepad_POV_Up, boolean_T rtu_Gamepad_POV_Down, boolean_T
  rtu_Gamepad_POV_Left, boolean_T rtu_Gamepad_POV_Right, real_T
  rtu_Gamepad_Stick_Left_Y, real_T rtu_Gamepad_Stick_Right_Y, real_T
  rtu_Elevator_Height_Measured, real_T rtu_Coral_Arm_Angle_Measured, boolean_T
  rtu_Algae_Limit_Switch, real_T *rty_State_ID, real_T
  *rty_Elevator_Height_Desired, real_T *rty_Coral_Arm_Angle_Desired, real_T
  *rty_Coral_Wheel_DC, uint8_T *rty_Set_Algae_Level, uint8_T
  *rty_Desired_Pipeline, DW_Reefscape_Chart_Robot_Cont_T *localDW);
static void Robot_Control_End_Game_Climb(boolean_T rtu_Gamepad_Start, boolean_T
  rtu_Gamepad_Back, boolean_T rtu_Gamepad_RB, boolean_T rtu_Gamepad_POV_Up,
  boolean_T rtu_Gamepad_POV_Down, boolean_T rtu_Gamepad_POV_Left, boolean_T
  rtu_Gamepad_POV_Right, real_T rtu_Gamepad_Stick_Left_Y, real_T
  rtu_Gamepad_Stick_Right_Y, real_T rtu_Coral_Arm_Angle_Measured, boolean_T
  rtu_Algae_Limit_Switch, real_T *rty_State_ID, real_T
  *rty_Elevator_Height_Desired, real_T *rty_Coral_Arm_Angle_Desired, real_T
  *rty_Coral_Wheel_DC, uint8_T *rty_Set_Algae_Level, uint8_T
  *rty_Desired_Pipeline, DW_Reefscape_Chart_Robot_Cont_T *localDW);
static void Robot_Control_Set_Level_h(boolean_T rtu_Gamepad_B1_A, boolean_T
  rtu_Gamepad_B2_B, boolean_T rtu_Gamepad_B3_X, boolean_T rtu_Gamepad_B4_Y,
  DW_Reefscape_Chart_Robot_Cont_T *localDW);
static void Ro_Elevator_CoralArm_CoralWheel(uint8_T rtu_GameState, boolean_T
  rtu_Gamepad_B1_A, boolean_T rtu_Gamepad_B2_B, boolean_T rtu_Gamepad_B3_X,
  boolean_T rtu_Gamepad_B4_Y, boolean_T rtu_Gamepad_Start, boolean_T
  rtu_Gamepad_Back, boolean_T rtu_Gamepad_RB, boolean_T rtu_Gamepad_POV_Up,
  boolean_T rtu_Gamepad_POV_Down, boolean_T rtu_Gamepad_POV_Left, boolean_T
  rtu_Gamepad_POV_Right, real_T rtu_Gamepad_Stick_Left_Y, real_T
  rtu_Gamepad_Stick_Right_Y, real_T rtu_Elevator_Height_Measured, real_T
  rtu_Coral_Arm_Angle_Measured, real_T rtu_Coral_TOF_Distance, boolean_T
  rtu_Coral_Limit_Switch, boolean_T rtu_Algae_Limit_Switch, boolean_T
  rtu_AT_On_Target, real_T *rty_State_ID, real_T *rty_Elevator_Height_Desired,
  real_T *rty_Coral_Arm_Angle_Desired, real_T *rty_Coral_Wheel_DC, boolean_T
  *rty_Elevator_LowerPickup_Reset, boolean_T *rty_Coral_Pickup_Lower_Wait_Sta,
  uint16_T *rty_Set_Coral_Level, uint8_T *rty_Set_Algae_Level, boolean_T
  *rty_Coral_Score, uint8_T *rty_Desired_Pipeline,
  DW_Reefscape_Chart_Robot_Cont_T *localDW);

/* Forward declaration for local functions */
static void Robot_Control_Left_and_Right(const boolean_T
  *Robot_Reached_Destination, const uint8_T *MultiportSwitch, const uint8_T
  *MultiportSwitch1, const uint8_T *Switch6, const uint8_T *Switch14, const
  boolean_T *UnitDelay1);

/*
 * System initialize for atomic system:
 *    '<S9>/Debounce'
 *    '<S10>/Debounce'
 */
void Robot_Control_Debounce_Init(boolean_T *rty_Out)
{
  *rty_Out = false;
}

/*
 * Output and update for atomic system:
 *    '<S9>/Debounce'
 *    '<S10>/Debounce'
 */
void Robot_Control_Debounce(boolean_T rtu_In, boolean_T rtu_Init_Cond, real_T
  rtu_Time_True, real_T rtu_Time_False, boolean_T *rty_Out,
  DW_Debounce_Robot_Control_T *localDW)
{
  /* Chart: '<S9>/Debounce' */
  if (localDW->is_active_c3_Controls_Component == 0U) {
    localDW->is_active_c3_Controls_Component = 1U;
    if (!rtu_Init_Cond) {
      localDW->is_c3_Controls_Components_lib = Robot_Control_IN_False;
      *rty_Out = false;
    } else {
      localDW->is_c3_Controls_Components_lib = Robot_Control_IN_True;
      *rty_Out = true;
    }
  } else {
    switch (localDW->is_c3_Controls_Components_lib) {
     case Robot_Control_IN_False:
      *rty_Out = false;
      if (rtu_In) {
        localDW->is_c3_Controls_Components_lib = Robot_Control_IN_Timer_True;
        localDW->timer = 0.02;
      }
      break;

     case Robot_Control_IN_Timer_False:
      if (localDW->timer >= rtu_Time_False) {
        localDW->is_c3_Controls_Components_lib = Robot_Control_IN_False;
        *rty_Out = false;
      } else if (rtu_In) {
        localDW->is_c3_Controls_Components_lib = Robot_Control_IN_True;
        *rty_Out = true;
      } else {
        localDW->timer += 0.02;
      }
      break;

     case Robot_Control_IN_Timer_True:
      if (localDW->timer >= rtu_Time_True) {
        localDW->is_c3_Controls_Components_lib = Robot_Control_IN_True;
        *rty_Out = true;
      } else if (!rtu_In) {
        localDW->is_c3_Controls_Components_lib = Robot_Control_IN_False;
        *rty_Out = false;
      } else {
        localDW->timer += 0.02;
      }
      break;

     default:
      /* case IN_True: */
      *rty_Out = true;
      if (!rtu_In) {
        localDW->is_c3_Controls_Components_lib = Robot_Control_IN_Timer_False;
        localDW->timer = 0.02;
      }
      break;
    }
  }

  /* End of Chart: '<S9>/Debounce' */
}

/* Function for Chart: '<S28>/Reefscape_Chart' */
static void Robot_Control_Algae_Pickup_High(boolean_T rtu_Gamepad_Start,
  boolean_T rtu_Gamepad_Back, boolean_T rtu_Gamepad_RB, boolean_T
  rtu_Gamepad_POV_Up, boolean_T rtu_Gamepad_POV_Down, boolean_T
  rtu_Gamepad_POV_Left, boolean_T rtu_Gamepad_POV_Right, real_T
  rtu_Gamepad_Stick_Left_Y, real_T rtu_Gamepad_Stick_Right_Y, real_T
  rtu_Coral_Arm_Angle_Measured, boolean_T rtu_Algae_Limit_Switch, real_T
  *rty_State_ID, real_T *rty_Elevator_Height_Desired, real_T
  *rty_Coral_Arm_Angle_Desired, real_T *rty_Coral_Wheel_DC, uint8_T
  *rty_Set_Algae_Level, uint8_T *rty_Desired_Pipeline,
  DW_Reefscape_Chart_Robot_Cont_T *localDW)
{
  *rty_State_ID = 4.3;
  *rty_Desired_Pipeline = 2U;
  if (rtu_Gamepad_Start && (!rtu_Algae_Limit_Switch)) {
    localDW->is_Algae_Pickup_High = Robot_Contro_IN_NO_ACTIVE_CHILD;
    *rty_Set_Algae_Level = 0U;
    localDW->is_Elevator_CoralArm_CoralWheel = Robot_Control_IN_Coral_Pickup;
    localDW->is_Actions = Robot_C_IN_Coral_Pickup_Prepare;
    *rty_State_ID = 1.0;
    *rty_Elevator_Height_Desired = Elevator_Height_Prepare;
    *rty_Coral_Arm_Angle_Desired = -90.0;
    *rty_Desired_Pipeline = 1U;
    localDW->is_Coral_Pickup_Prepare = Robot_Contro_IN_Coral_Motor_Off;
    *rty_Coral_Wheel_DC = 0.0;
    localDW->is_Set_Level = Robot_Control_IN_None;
    localDW->Set_L1 = false;
    localDW->Set_L2 = false;
    localDW->Set_L3 = false;
    localDW->Set_L4 = false;
  } else if (rtu_Gamepad_Back) {
    if (rtu_Coral_Arm_Angle_Measured >= Coral_Arm_Angle_Start_Thresh) {
      localDW->is_Algae_Pickup_High = Robot_Contro_IN_NO_ACTIVE_CHILD;
      *rty_Set_Algae_Level = 0U;
      localDW->is_Elevator_CoralArm_CoralWheel = Robot_IN_Elevator_Height_Bottom;
      *rty_State_ID = 0.2;
      *rty_Elevator_Height_Desired = Elevator_Height_Bottom;
      *rty_Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
      *rty_Desired_Pipeline = 0U;
      localDW->is_Elevator_Height_Bottom = Robot_Contro_IN_Coral_Motor_Off;
      *rty_Coral_Wheel_DC = 0.0;
    } else {
      localDW->is_Algae_Pickup_High = Robot_Contro_IN_NO_ACTIVE_CHILD;
      *rty_Set_Algae_Level = 0U;
      localDW->is_Elevator_CoralArm_CoralWheel = R_IN_Elevator_Height_Bottom_pre;
      *rty_State_ID = 0.1;
      *rty_Elevator_Height_Desired = Elevator_Height_Bottom_Pre;
      *rty_Desired_Pipeline = 0U;
      localDW->is_Elevator_Height_Bottom_pre = Robot_Contro_IN_Coral_Motor_Off;
      *rty_Coral_Wheel_DC = 0.0;
    }
  } else if (rtu_Gamepad_POV_Up) {
    localDW->is_Algae_Pickup_High = Robot_Contro_IN_NO_ACTIVE_CHILD;
    *rty_Set_Algae_Level = 0U;
    localDW->is_Elevator_CoralArm_CoralWheel = Robot_Control_IN_End_Game_Climb;
    *rty_State_ID = 4.4;
    *rty_Elevator_Height_Desired = Elevator_Height_End_Game;
    *rty_Coral_Arm_Angle_Desired = -90.0;
    *rty_Desired_Pipeline = 0U;
    localDW->is_End_Game_Climb = Robot_Contro_IN_Coral_Motor_Off;
    *rty_Coral_Wheel_DC = 0.0;
  } else if (rtu_Gamepad_POV_Down) {
    localDW->is_Algae_Pickup_High = Robot_Contro_IN_NO_ACTIVE_CHILD;
    *rty_Set_Algae_Level = 0U;
    localDW->is_Elevator_CoralArm_CoralWheel = Robot_Control_IN_Algae_Score;
    *rty_State_ID = 4.1;
    *rty_Elevator_Height_Desired = Elevator_Height_Algae_Score;
    *rty_Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
    *rty_Desired_Pipeline = 0U;
    localDW->is_Algae_Score = Robot_Contro_IN_Coral_Motor_Off;
    *rty_Coral_Wheel_DC = 0.0;
  } else if (rtu_Gamepad_POV_Left) {
    localDW->is_Algae_Pickup_High = Robot_Contro_IN_NO_ACTIVE_CHILD;
    localDW->is_Elevator_CoralArm_CoralWheel = Robot_Contr_IN_Algae_Pickup_Low;
    *rty_State_ID = 4.2;
    *rty_Elevator_Height_Desired = Elevator_Height_Algae_Low;
    *rty_Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
    *rty_Set_Algae_Level = 2U;
    *rty_Desired_Pipeline = 2U;
    localDW->is_Algae_Pickup_Low = Robot_Contro_IN_Coral_Motor_Off;
    *rty_Coral_Wheel_DC = 0.0;
  } else if (rtu_Gamepad_POV_Right) {
    localDW->is_Elevator_CoralArm_CoralWheel = Robot_Cont_IN_Algae_Pickup_High;
    *rty_State_ID = 4.3;
    *rty_Elevator_Height_Desired = Elevator_Height_Algae_High;
    *rty_Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
    *rty_Set_Algae_Level = 3U;
    *rty_Desired_Pipeline = 2U;
    localDW->is_Algae_Pickup_High = Robot_Contro_IN_Coral_Motor_Off;
    *rty_Coral_Wheel_DC = 0.0;
  } else {
    *rty_Elevator_Height_Desired += rtu_Gamepad_Stick_Right_Y *
      Elevator_Height_Manual_Gain;
    *rty_Coral_Arm_Angle_Desired += rtu_Gamepad_Stick_Left_Y *
      Coral_Arm_Manual_Gain;
    if (localDW->is_Algae_Pickup_High == Robot_Control_IN_Coral_Eject) {
      if (localDW->timer >= Coral_Eject_Time) {
        localDW->is_Algae_Pickup_High = Robot_Contro_IN_Coral_Motor_Off;
        *rty_Coral_Wheel_DC = 0.0;
      } else {
        localDW->timer += 0.02;
      }

      /* case IN_Coral_Motor_Off: */
    } else if (rtu_Gamepad_RB) {
      localDW->is_Algae_Pickup_High = Robot_Control_IN_Coral_Eject;
      *rty_Coral_Wheel_DC = Coral_Motor_DC_Eject;
      localDW->timer = 0.0;
    }
  }
}

/* Function for Chart: '<S28>/Reefscape_Chart' */
static void Robot_Control_Algae_Pickup_Low(boolean_T rtu_Gamepad_Start,
  boolean_T rtu_Gamepad_Back, boolean_T rtu_Gamepad_RB, boolean_T
  rtu_Gamepad_POV_Up, boolean_T rtu_Gamepad_POV_Down, boolean_T
  rtu_Gamepad_POV_Left, boolean_T rtu_Gamepad_POV_Right, real_T
  rtu_Gamepad_Stick_Left_Y, real_T rtu_Gamepad_Stick_Right_Y, real_T
  rtu_Coral_Arm_Angle_Measured, boolean_T rtu_Algae_Limit_Switch, real_T
  *rty_State_ID, real_T *rty_Elevator_Height_Desired, real_T
  *rty_Coral_Arm_Angle_Desired, real_T *rty_Coral_Wheel_DC, uint8_T
  *rty_Set_Algae_Level, uint8_T *rty_Desired_Pipeline,
  DW_Reefscape_Chart_Robot_Cont_T *localDW)
{
  *rty_State_ID = 4.2;
  *rty_Desired_Pipeline = 2U;
  if (rtu_Gamepad_Start && (!rtu_Algae_Limit_Switch)) {
    localDW->is_Algae_Pickup_Low = Robot_Contro_IN_NO_ACTIVE_CHILD;
    *rty_Set_Algae_Level = 0U;
    localDW->is_Elevator_CoralArm_CoralWheel = Robot_Control_IN_Coral_Pickup;
    localDW->is_Actions = Robot_C_IN_Coral_Pickup_Prepare;
    *rty_State_ID = 1.0;
    *rty_Elevator_Height_Desired = Elevator_Height_Prepare;
    *rty_Coral_Arm_Angle_Desired = -90.0;
    *rty_Desired_Pipeline = 1U;
    localDW->is_Coral_Pickup_Prepare = Robot_Contro_IN_Coral_Motor_Off;
    *rty_Coral_Wheel_DC = 0.0;
    localDW->is_Set_Level = Robot_Control_IN_None;
    localDW->Set_L1 = false;
    localDW->Set_L2 = false;
    localDW->Set_L3 = false;
    localDW->Set_L4 = false;
  } else if (rtu_Gamepad_Back) {
    if (rtu_Coral_Arm_Angle_Measured >= Coral_Arm_Angle_Start_Thresh) {
      localDW->is_Algae_Pickup_Low = Robot_Contro_IN_NO_ACTIVE_CHILD;
      *rty_Set_Algae_Level = 0U;
      localDW->is_Elevator_CoralArm_CoralWheel = Robot_IN_Elevator_Height_Bottom;
      *rty_State_ID = 0.2;
      *rty_Elevator_Height_Desired = Elevator_Height_Bottom;
      *rty_Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
      *rty_Desired_Pipeline = 0U;
      localDW->is_Elevator_Height_Bottom = Robot_Contro_IN_Coral_Motor_Off;
      *rty_Coral_Wheel_DC = 0.0;
    } else {
      localDW->is_Algae_Pickup_Low = Robot_Contro_IN_NO_ACTIVE_CHILD;
      *rty_Set_Algae_Level = 0U;
      localDW->is_Elevator_CoralArm_CoralWheel = R_IN_Elevator_Height_Bottom_pre;
      *rty_State_ID = 0.1;
      *rty_Elevator_Height_Desired = Elevator_Height_Bottom_Pre;
      *rty_Desired_Pipeline = 0U;
      localDW->is_Elevator_Height_Bottom_pre = Robot_Contro_IN_Coral_Motor_Off;
      *rty_Coral_Wheel_DC = 0.0;
    }
  } else if (rtu_Gamepad_POV_Up) {
    localDW->is_Algae_Pickup_Low = Robot_Contro_IN_NO_ACTIVE_CHILD;
    *rty_Set_Algae_Level = 0U;
    localDW->is_Elevator_CoralArm_CoralWheel = Robot_Control_IN_End_Game_Climb;
    *rty_State_ID = 4.4;
    *rty_Elevator_Height_Desired = Elevator_Height_End_Game;
    *rty_Coral_Arm_Angle_Desired = -90.0;
    *rty_Desired_Pipeline = 0U;
    localDW->is_End_Game_Climb = Robot_Contro_IN_Coral_Motor_Off;
    *rty_Coral_Wheel_DC = 0.0;
  } else if (rtu_Gamepad_POV_Down) {
    localDW->is_Algae_Pickup_Low = Robot_Contro_IN_NO_ACTIVE_CHILD;
    *rty_Set_Algae_Level = 0U;
    localDW->is_Elevator_CoralArm_CoralWheel = Robot_Control_IN_Algae_Score;
    *rty_State_ID = 4.1;
    *rty_Elevator_Height_Desired = Elevator_Height_Algae_Score;
    *rty_Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
    *rty_Desired_Pipeline = 0U;
    localDW->is_Algae_Score = Robot_Contro_IN_Coral_Motor_Off;
    *rty_Coral_Wheel_DC = 0.0;
  } else if (rtu_Gamepad_POV_Left) {
    localDW->is_Elevator_CoralArm_CoralWheel = Robot_Contr_IN_Algae_Pickup_Low;
    *rty_State_ID = 4.2;
    *rty_Elevator_Height_Desired = Elevator_Height_Algae_Low;
    *rty_Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
    *rty_Set_Algae_Level = 2U;
    *rty_Desired_Pipeline = 2U;
    localDW->is_Algae_Pickup_Low = Robot_Contro_IN_Coral_Motor_Off;
    *rty_Coral_Wheel_DC = 0.0;
  } else if (rtu_Gamepad_POV_Right) {
    localDW->is_Algae_Pickup_Low = Robot_Contro_IN_NO_ACTIVE_CHILD;
    localDW->is_Elevator_CoralArm_CoralWheel = Robot_Cont_IN_Algae_Pickup_High;
    *rty_State_ID = 4.3;
    *rty_Elevator_Height_Desired = Elevator_Height_Algae_High;
    *rty_Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
    *rty_Set_Algae_Level = 3U;
    *rty_Desired_Pipeline = 2U;
    localDW->is_Algae_Pickup_High = Robot_Contro_IN_Coral_Motor_Off;
    *rty_Coral_Wheel_DC = 0.0;
  } else {
    *rty_Elevator_Height_Desired += rtu_Gamepad_Stick_Right_Y *
      Elevator_Height_Manual_Gain;
    *rty_Coral_Arm_Angle_Desired += rtu_Gamepad_Stick_Left_Y *
      Coral_Arm_Manual_Gain;
    if (localDW->is_Algae_Pickup_Low == Robot_Control_IN_Coral_Eject) {
      if (localDW->timer >= Coral_Eject_Time) {
        localDW->is_Algae_Pickup_Low = Robot_Contro_IN_Coral_Motor_Off;
        *rty_Coral_Wheel_DC = 0.0;
      } else {
        localDW->timer += 0.02;
      }

      /* case IN_Coral_Motor_Off: */
    } else if (rtu_Gamepad_RB) {
      localDW->is_Algae_Pickup_Low = Robot_Control_IN_Coral_Eject;
      *rty_Coral_Wheel_DC = Coral_Motor_DC_Eject;
      localDW->timer = 0.0;
    }
  }
}

/* Function for Chart: '<S28>/Reefscape_Chart' */
static void Robo_enter_internal_Coral_Eject(uint8_T rtu_GameState, real_T
  *rty_State_ID, real_T *rty_Elevator_Height_Desired, real_T
  *rty_Coral_Arm_Angle_Desired, real_T *rty_Coral_Wheel_DC, uint16_T
  *rty_Set_Coral_Level, DW_Reefscape_Chart_Robot_Cont_T *localDW)
{
  switch (*rty_Set_Coral_Level) {
   case 2:
    localDW->is_Coral_Eject = Robot_Control_IN_Level_2;
    *rty_State_ID = 3.2;
    localDW->is_Level_2 = Robot_Co_IN_Auto_Lower_Elevator;
    *rty_Elevator_Height_Desired += Elevator_Height_Coral_Score_Lower_Rate;
    break;

   case 3:
    localDW->is_Coral_Eject = Robot_Control_IN_Level_3;
    *rty_State_ID = 3.3;
    localDW->is_Level_3 = Robot_Co_IN_Auto_Lower_Elevator;
    *rty_Elevator_Height_Desired += Elevator_Height_Coral_Score_Lower_Rate;
    break;

   default:
    if (((*rty_Set_Coral_Level) == 4) && (rtu_GameState == 2)) {
      localDW->is_Coral_Eject = Robot_Control_IN_Level_4_Teleop;
      *rty_State_ID = 3.4;
      localDW->is_Level_4_Teleop = Robot_Control_IN_Auto_Lower_Arm;
      *rty_Coral_Arm_Angle_Desired += Coral_Arm_Angle_Coral_Score_Lower_Rate;
    } else if (((*rty_Set_Coral_Level) == 4) && (rtu_GameState == 1)) {
      localDW->is_Coral_Eject = Robot_Control_IN_Level_4_Auto;
      *rty_State_ID = 3.5;
      localDW->is_Level_4_Auto = Robot_Control_IN_Auto_Lower_Arm;
      *rty_Coral_Arm_Angle_Desired += Coral_Arm_Angle_Coral_Score_Lower_Rate;
    } else {
      localDW->is_Coral_Eject = Robot_Control_IN_Eject;
      *rty_State_ID = 3.7;
      *rty_Coral_Wheel_DC = Coral_Motor_DC_Eject;
      localDW->timer = 0.0;
    }
    break;
  }
}

/* Function for Chart: '<S28>/Reefscape_Chart' */
static void enter_internal_Coral_Score_Posi(boolean_T rtu_Gamepad_B1_A,
  boolean_T rtu_Gamepad_B2_B, boolean_T rtu_Gamepad_B3_X, boolean_T
  rtu_Gamepad_B4_Y, real_T rtu_Gamepad_Stick_Left_Y, real_T
  rtu_Gamepad_Stick_Right_Y, real_T *rty_State_ID, real_T
  *rty_Elevator_Height_Desired, real_T *rty_Coral_Arm_Angle_Desired, uint16_T
  *rty_Set_Coral_Level, DW_Reefscape_Chart_Robot_Cont_T *localDW)
{
  if ((localDW->Set_L1) || rtu_Gamepad_B1_A) {
    localDW->is_Coral_Score_Position = Robot_Control_IN_Level_1;
    *rty_State_ID = 2.1;
    *rty_Set_Coral_Level = 1U;
    *rty_Elevator_Height_Desired = Elevator_Height_L1;
    *rty_Coral_Arm_Angle_Desired = Coral_Arm_Angle_L1;
  } else if ((localDW->Set_L2) || rtu_Gamepad_B3_X) {
    localDW->is_Coral_Score_Position = Robot_Control_IN_Level_2;
    *rty_State_ID = 2.2;
    *rty_Set_Coral_Level = 2U;
    *rty_Elevator_Height_Desired = Elevator_Height_L2;
    *rty_Coral_Arm_Angle_Desired = Coral_Arm_Angle_L2;
  } else if ((localDW->Set_L3) || rtu_Gamepad_B2_B) {
    localDW->is_Coral_Score_Position = Robot_Control_IN_Level_3;
    *rty_State_ID = 2.3;
    *rty_Set_Coral_Level = 3U;
    *rty_Elevator_Height_Desired = Elevator_Height_L3;
    *rty_Coral_Arm_Angle_Desired = Coral_Arm_Angle_L3;
  } else if ((localDW->Set_L4) || rtu_Gamepad_B4_Y) {
    localDW->is_Coral_Score_Position = Robot_Control_IN_Level_4;
    *rty_State_ID = 2.4;
    *rty_Set_Coral_Level = 4U;
    *rty_Elevator_Height_Desired = Elevator_Height_L4;
    *rty_Coral_Arm_Angle_Desired = Coral_Arm_Angle_L4;
  } else {
    localDW->is_Coral_Score_Position = Robot_Co_IN_Manual_Adjustment_c;
    *rty_State_ID = 2.5;
    *rty_Elevator_Height_Desired += rtu_Gamepad_Stick_Right_Y *
      Elevator_Height_Manual_Gain;
    *rty_Coral_Arm_Angle_Desired += rtu_Gamepad_Stick_Left_Y *
      Coral_Arm_Manual_Gain;
  }
}

/* Function for Chart: '<S28>/Reefscape_Chart' */
static void Robot_Control_Level_3(real_T rtu_Gamepad_Stick_Left_Y, real_T
  rtu_Gamepad_Stick_Right_Y, real_T *rty_State_ID, real_T
  *rty_Elevator_Height_Desired, real_T *rty_Coral_Arm_Angle_Desired,
  DW_Reefscape_Chart_Robot_Cont_T *localDW)
{
  *rty_State_ID = 2.3;
  if ((rtu_Gamepad_Stick_Right_Y != 0.0) || (rtu_Gamepad_Stick_Left_Y != 0.0)) {
    localDW->is_Coral_Score_Position = Robot_Co_IN_Manual_Adjustment_c;
    *rty_State_ID = 2.5;
    *rty_Elevator_Height_Desired += rtu_Gamepad_Stick_Right_Y *
      Elevator_Height_Manual_Gain;
    *rty_Coral_Arm_Angle_Desired += rtu_Gamepad_Stick_Left_Y *
      Coral_Arm_Manual_Gain;
  }
}

/* Function for Chart: '<S28>/Reefscape_Chart' */
static void Robot_Control_Level_4(real_T rtu_Gamepad_Stick_Left_Y, real_T
  rtu_Gamepad_Stick_Right_Y, real_T *rty_State_ID, real_T
  *rty_Elevator_Height_Desired, real_T *rty_Coral_Arm_Angle_Desired,
  DW_Reefscape_Chart_Robot_Cont_T *localDW)
{
  *rty_State_ID = 2.4;
  if ((rtu_Gamepad_Stick_Right_Y != 0.0) || (rtu_Gamepad_Stick_Left_Y != 0.0)) {
    localDW->is_Coral_Score_Position = Robot_Co_IN_Manual_Adjustment_c;
    *rty_State_ID = 2.5;
    *rty_Elevator_Height_Desired += rtu_Gamepad_Stick_Right_Y *
      Elevator_Height_Manual_Gain;
    *rty_Coral_Arm_Angle_Desired += rtu_Gamepad_Stick_Left_Y *
      Coral_Arm_Manual_Gain;
  }
}

/* Function for Chart: '<S28>/Reefscape_Chart' */
static void Robot_Cont_Coral_Score_Position(uint8_T rtu_GameState, boolean_T
  rtu_Gamepad_B1_A, boolean_T rtu_Gamepad_B2_B, boolean_T rtu_Gamepad_B3_X,
  boolean_T rtu_Gamepad_B4_Y, boolean_T rtu_Gamepad_Start, boolean_T
  rtu_Gamepad_Back, boolean_T rtu_Gamepad_RB, boolean_T rtu_Gamepad_POV_Up,
  boolean_T rtu_Gamepad_POV_Down, boolean_T rtu_Gamepad_POV_Left, boolean_T
  rtu_Gamepad_POV_Right, real_T rtu_Gamepad_Stick_Left_Y, real_T
  rtu_Gamepad_Stick_Right_Y, real_T rtu_Coral_Arm_Angle_Measured, boolean_T
  rtu_Coral_Limit_Switch, boolean_T rtu_Algae_Limit_Switch, real_T *rty_State_ID,
  real_T *rty_Elevator_Height_Desired, real_T *rty_Coral_Arm_Angle_Desired,
  real_T *rty_Coral_Wheel_DC, uint16_T *rty_Set_Coral_Level, uint8_T
  *rty_Set_Algae_Level, uint8_T *rty_Desired_Pipeline,
  DW_Reefscape_Chart_Robot_Cont_T *localDW)
{
  if (((rtu_Gamepad_B1_A || rtu_Gamepad_B3_X) || rtu_Gamepad_B2_B) ||
      rtu_Gamepad_B4_Y) {
    localDW->Set_L1 = false;
    localDW->Set_L2 = false;
    localDW->Set_L3 = false;
    localDW->Set_L4 = false;
    localDW->is_Coral = Robot_C_IN_Coral_Score_Position;
    enter_internal_Coral_Score_Posi(rtu_Gamepad_B1_A, rtu_Gamepad_B2_B,
      rtu_Gamepad_B3_X, rtu_Gamepad_B4_Y, rtu_Gamepad_Stick_Left_Y,
      rtu_Gamepad_Stick_Right_Y, rty_State_ID, rty_Elevator_Height_Desired,
      rty_Coral_Arm_Angle_Desired, rty_Set_Coral_Level, localDW);
  } else if (rtu_Gamepad_RB || (localDW->timer_robot_target >= AT_On_Target_Time))
  {
    localDW->is_Coral_Score_Position = Robot_Contro_IN_NO_ACTIVE_CHILD;
    localDW->is_Coral = Robot_Control_IN_Coral_Eject;
    Robo_enter_internal_Coral_Eject(rtu_GameState, rty_State_ID,
      rty_Elevator_Height_Desired, rty_Coral_Arm_Angle_Desired,
      rty_Coral_Wheel_DC, rty_Set_Coral_Level, localDW);
  } else if (rtu_Gamepad_Start && (!rtu_Algae_Limit_Switch)) {
    localDW->is_Coral_Score_Position = Robot_Contro_IN_NO_ACTIVE_CHILD;
    localDW->is_Coral = Robot_Contro_IN_NO_ACTIVE_CHILD;
    *rty_Set_Coral_Level = 0U;
    localDW->is_Elevator_CoralArm_CoralWheel = Robot_Control_IN_Coral_Pickup;
    localDW->is_Actions = Robot_C_IN_Coral_Pickup_Prepare;
    *rty_State_ID = 1.0;
    *rty_Elevator_Height_Desired = Elevator_Height_Prepare;
    *rty_Coral_Arm_Angle_Desired = -90.0;
    *rty_Desired_Pipeline = 1U;
    localDW->is_Coral_Pickup_Prepare = Robot_Contro_IN_Coral_Motor_Off;
    *rty_Coral_Wheel_DC = 0.0;
    localDW->is_Set_Level = Robot_Control_IN_None;
    localDW->Set_L1 = false;
    localDW->Set_L2 = false;
    localDW->Set_L3 = false;
    localDW->Set_L4 = false;
  } else if (rtu_Gamepad_Back) {
    if (rtu_Coral_Arm_Angle_Measured >= Coral_Arm_Angle_Start_Thresh) {
      localDW->is_Coral_Score_Position = Robot_Contro_IN_NO_ACTIVE_CHILD;
      localDW->is_Coral = Robot_Contro_IN_NO_ACTIVE_CHILD;
      *rty_Set_Coral_Level = 0U;
      localDW->is_Elevator_CoralArm_CoralWheel = Robot_IN_Elevator_Height_Bottom;
      *rty_State_ID = 0.2;
      *rty_Elevator_Height_Desired = Elevator_Height_Bottom;
      *rty_Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
      *rty_Desired_Pipeline = 0U;
      localDW->is_Elevator_Height_Bottom = Robot_Contro_IN_Coral_Motor_Off;
      *rty_Coral_Wheel_DC = 0.0;
    } else {
      localDW->is_Coral_Score_Position = Robot_Contro_IN_NO_ACTIVE_CHILD;
      localDW->is_Coral = Robot_Contro_IN_NO_ACTIVE_CHILD;
      *rty_Set_Coral_Level = 0U;
      localDW->is_Elevator_CoralArm_CoralWheel = R_IN_Elevator_Height_Bottom_pre;
      *rty_State_ID = 0.1;
      *rty_Elevator_Height_Desired = Elevator_Height_Bottom_Pre;
      *rty_Desired_Pipeline = 0U;
      localDW->is_Elevator_Height_Bottom_pre = Robot_Contro_IN_Coral_Motor_Off;
      *rty_Coral_Wheel_DC = 0.0;
    }
  } else if (rtu_Gamepad_POV_Up) {
    localDW->is_Coral_Score_Position = Robot_Contro_IN_NO_ACTIVE_CHILD;
    localDW->is_Coral = Robot_Contro_IN_NO_ACTIVE_CHILD;
    *rty_Set_Coral_Level = 0U;
    localDW->is_Elevator_CoralArm_CoralWheel = Robot_Control_IN_End_Game_Climb;
    *rty_State_ID = 4.4;
    *rty_Elevator_Height_Desired = Elevator_Height_End_Game;
    *rty_Coral_Arm_Angle_Desired = -90.0;
    *rty_Desired_Pipeline = 0U;
    localDW->is_End_Game_Climb = Robot_Contro_IN_Coral_Motor_Off;
    *rty_Coral_Wheel_DC = 0.0;
  } else if (rtu_Gamepad_POV_Down) {
    localDW->is_Coral_Score_Position = Robot_Contro_IN_NO_ACTIVE_CHILD;
    localDW->is_Coral = Robot_Contro_IN_NO_ACTIVE_CHILD;
    *rty_Set_Coral_Level = 0U;
    localDW->is_Elevator_CoralArm_CoralWheel = Robot_Control_IN_Algae_Score;
    *rty_State_ID = 4.1;
    *rty_Elevator_Height_Desired = Elevator_Height_Algae_Score;
    *rty_Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
    *rty_Desired_Pipeline = 0U;
    localDW->is_Algae_Score = Robot_Contro_IN_Coral_Motor_Off;
    *rty_Coral_Wheel_DC = 0.0;
  } else if (rtu_Gamepad_POV_Left) {
    localDW->is_Coral_Score_Position = Robot_Contro_IN_NO_ACTIVE_CHILD;
    localDW->is_Coral = Robot_Contro_IN_NO_ACTIVE_CHILD;
    *rty_Set_Coral_Level = 0U;
    localDW->is_Elevator_CoralArm_CoralWheel = Robot_Contr_IN_Algae_Pickup_Low;
    *rty_State_ID = 4.2;
    *rty_Elevator_Height_Desired = Elevator_Height_Algae_Low;
    *rty_Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
    *rty_Set_Algae_Level = 2U;
    *rty_Desired_Pipeline = 2U;
    localDW->is_Algae_Pickup_Low = Robot_Contro_IN_Coral_Motor_Off;
    *rty_Coral_Wheel_DC = 0.0;
  } else if (rtu_Gamepad_POV_Right) {
    localDW->is_Coral_Score_Position = Robot_Contro_IN_NO_ACTIVE_CHILD;
    localDW->is_Coral = Robot_Contro_IN_NO_ACTIVE_CHILD;
    *rty_Set_Coral_Level = 0U;
    localDW->is_Elevator_CoralArm_CoralWheel = Robot_Cont_IN_Algae_Pickup_High;
    *rty_State_ID = 4.3;
    *rty_Elevator_Height_Desired = Elevator_Height_Algae_High;
    *rty_Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
    *rty_Set_Algae_Level = 3U;
    *rty_Desired_Pipeline = 2U;
    localDW->is_Algae_Pickup_High = Robot_Contro_IN_Coral_Motor_Off;
    *rty_Coral_Wheel_DC = 0.0;
  } else {
    switch (localDW->is_Coral_Score_Position) {
     case Robot_Control_IN_Level_1:
      *rty_State_ID = 2.1;
      if ((rtu_Gamepad_Stick_Right_Y != 0.0) || (rtu_Gamepad_Stick_Left_Y != 0.0))
      {
        localDW->is_Coral_Score_Position = Robot_Co_IN_Manual_Adjustment_c;
        *rty_State_ID = 2.5;
        *rty_Elevator_Height_Desired += rtu_Gamepad_Stick_Right_Y *
          Elevator_Height_Manual_Gain;
        *rty_Coral_Arm_Angle_Desired += rtu_Gamepad_Stick_Left_Y *
          Coral_Arm_Manual_Gain;
      }
      break;

     case Robot_Control_IN_Level_2:
      *rty_State_ID = 2.2;
      if ((rtu_Gamepad_Stick_Right_Y != 0.0) || (rtu_Gamepad_Stick_Left_Y != 0.0))
      {
        localDW->is_Coral_Score_Position = Robot_Co_IN_Manual_Adjustment_c;
        *rty_State_ID = 2.5;
        *rty_Elevator_Height_Desired += rtu_Gamepad_Stick_Right_Y *
          Elevator_Height_Manual_Gain;
        *rty_Coral_Arm_Angle_Desired += rtu_Gamepad_Stick_Left_Y *
          Coral_Arm_Manual_Gain;
      }
      break;

     case Robot_Control_IN_Level_3:
      Robot_Control_Level_3(rtu_Gamepad_Stick_Left_Y, rtu_Gamepad_Stick_Right_Y,
                            rty_State_ID, rty_Elevator_Height_Desired,
                            rty_Coral_Arm_Angle_Desired, localDW);
      break;

     case Robot_Control_IN_Level_4:
      Robot_Control_Level_4(rtu_Gamepad_Stick_Left_Y, rtu_Gamepad_Stick_Right_Y,
                            rty_State_ID, rty_Elevator_Height_Desired,
                            rty_Coral_Arm_Angle_Desired, localDW);
      break;

     default:
      /* case IN_Manual_Adjustment: */
      *rty_State_ID = 2.5;
      if (!rtu_Coral_Limit_Switch) {
        localDW->is_Coral_Score_Position = Robot_Contro_IN_NO_ACTIVE_CHILD;
        localDW->is_Coral = Robot_Control_IN_Coral_Eject;
        localDW->is_Coral_Eject = Robot_Control_IN_Eject;
        *rty_State_ID = 3.7;
        *rty_Coral_Wheel_DC = Coral_Motor_DC_Eject;
        localDW->timer = 0.0;
      } else {
        *rty_Elevator_Height_Desired += rtu_Gamepad_Stick_Right_Y *
          Elevator_Height_Manual_Gain;
        *rty_Coral_Arm_Angle_Desired += rtu_Gamepad_Stick_Left_Y *
          Coral_Arm_Manual_Gain;
      }
      break;
    }
  }
}

/* Function for Chart: '<S28>/Reefscape_Chart' */
static void Robot_exit_internal_Coral_Eject(boolean_T *rty_Coral_Score,
  DW_Reefscape_Chart_Robot_Cont_T *localDW)
{
  if (localDW->is_Coral_Eject == Robot_Control_IN_Stop) {
    *rty_Coral_Score = false;
    localDW->is_Coral_Eject = Robot_Contro_IN_NO_ACTIVE_CHILD;
  } else {
    localDW->is_Level_2 = Robot_Contro_IN_NO_ACTIVE_CHILD;
    localDW->is_Level_3 = Robot_Contro_IN_NO_ACTIVE_CHILD;
    localDW->is_Level_4_Auto = Robot_Contro_IN_NO_ACTIVE_CHILD;
    localDW->is_Level_4_Teleop = Robot_Contro_IN_NO_ACTIVE_CHILD;
    localDW->is_Coral_Eject = Robot_Contro_IN_NO_ACTIVE_CHILD;
  }
}

/* Function for Chart: '<S28>/Reefscape_Chart' */
static void Robot_Control_Level_4_Teleop(boolean_T rtu_Gamepad_RB, real_T
  rtu_Gamepad_Stick_Left_Y, real_T rtu_Gamepad_Stick_Right_Y, real_T
  rtu_Coral_Arm_Angle_Measured, boolean_T rtu_Coral_Limit_Switch, boolean_T
  rtu_AT_On_Target, real_T *rty_State_ID, real_T *rty_Elevator_Height_Desired,
  real_T *rty_Coral_Arm_Angle_Desired, real_T *rty_Coral_Wheel_DC,
  DW_Reefscape_Chart_Robot_Cont_T *localDW)
{
  *rty_State_ID = 3.4;
  if (rtu_Gamepad_RB) {
    localDW->is_Level_4_Teleop = Robot_Contro_IN_NO_ACTIVE_CHILD;
    localDW->is_Coral_Eject = Robot_Control_IN_Eject;
    *rty_State_ID = 3.7;
    *rty_Coral_Wheel_DC = Coral_Motor_DC_Eject;
    localDW->timer = 0.0;
  } else if (!rtu_Coral_Limit_Switch) {
    localDW->is_Level_4_Teleop = Robot_Contro_IN_NO_ACTIVE_CHILD;
    localDW->is_Coral_Eject = Robot_Control_IN_Level_4_Timer;
    *rty_State_ID = 3.6;
    *rty_Elevator_Height_Desired += Elevator_Height_Coral_Score_Lower_Rate;
    localDW->timer = 0.02;
  } else if (localDW->is_Level_4_Teleop == Robot_Control_IN_Auto_Lower_Arm) {
    if (rtu_Coral_Arm_Angle_Measured < Coral_Arm_Angle_L4_Eject_Teleop) {
      localDW->is_Level_4_Teleop = Robot_Cont_IN_Manual_Adjustment;
      *rty_Elevator_Height_Desired += rtu_Gamepad_Stick_Right_Y *
        Elevator_Height_Manual_Gain;
      *rty_Coral_Arm_Angle_Desired += rtu_Gamepad_Stick_Left_Y *
        Coral_Arm_Manual_Gain;
    } else {
      *rty_Coral_Arm_Angle_Desired += Coral_Arm_Angle_Coral_Score_Lower_Rate;
    }

    /* case IN_Manual_Adjustment: */
  } else if (rtu_AT_On_Target) {
    localDW->is_Level_4_Teleop = Robot_Control_IN_Auto_Lower_Arm;
    *rty_Coral_Arm_Angle_Desired += Coral_Arm_Angle_Coral_Score_Lower_Rate;
  } else {
    *rty_Elevator_Height_Desired += rtu_Gamepad_Stick_Right_Y *
      Elevator_Height_Manual_Gain;
    *rty_Coral_Arm_Angle_Desired += rtu_Gamepad_Stick_Left_Y *
      Coral_Arm_Manual_Gain;
  }
}

/* Function for Chart: '<S28>/Reefscape_Chart' */
static void Robot_Control_Coral(uint8_T rtu_GameState, boolean_T
  rtu_Gamepad_B1_A, boolean_T rtu_Gamepad_B2_B, boolean_T rtu_Gamepad_B3_X,
  boolean_T rtu_Gamepad_B4_Y, boolean_T rtu_Gamepad_Start, boolean_T
  rtu_Gamepad_Back, boolean_T rtu_Gamepad_RB, boolean_T rtu_Gamepad_POV_Up,
  boolean_T rtu_Gamepad_POV_Down, boolean_T rtu_Gamepad_POV_Left, boolean_T
  rtu_Gamepad_POV_Right, real_T rtu_Gamepad_Stick_Left_Y, real_T
  rtu_Gamepad_Stick_Right_Y, real_T rtu_Elevator_Height_Measured, real_T
  rtu_Coral_Arm_Angle_Measured, boolean_T rtu_Coral_Limit_Switch, boolean_T
  rtu_Algae_Limit_Switch, boolean_T rtu_AT_On_Target, real_T *rty_State_ID,
  real_T *rty_Elevator_Height_Desired, real_T *rty_Coral_Arm_Angle_Desired,
  real_T *rty_Coral_Wheel_DC, uint16_T *rty_Set_Coral_Level, uint8_T
  *rty_Set_Algae_Level, boolean_T *rty_Coral_Score, uint8_T
  *rty_Desired_Pipeline, DW_Reefscape_Chart_Robot_Cont_T *localDW)
{
  if (localDW->is_Coral == Robot_Control_IN_Coral_Eject) {
    if (rtu_Gamepad_Start && (!rtu_Algae_Limit_Switch)) {
      Robot_exit_internal_Coral_Eject(rty_Coral_Score, localDW);
      localDW->is_Coral = Robot_Contro_IN_NO_ACTIVE_CHILD;
      *rty_Set_Coral_Level = 0U;
      localDW->is_Elevator_CoralArm_CoralWheel = Robot_Control_IN_Coral_Pickup;
      localDW->is_Actions = Robot_C_IN_Coral_Pickup_Prepare;
      *rty_State_ID = 1.0;
      *rty_Elevator_Height_Desired = Elevator_Height_Prepare;
      *rty_Coral_Arm_Angle_Desired = -90.0;
      *rty_Desired_Pipeline = 1U;
      localDW->is_Coral_Pickup_Prepare = Robot_Contro_IN_Coral_Motor_Off;
      *rty_Coral_Wheel_DC = 0.0;
      localDW->is_Set_Level = Robot_Control_IN_None;
      localDW->Set_L1 = false;
      localDW->Set_L2 = false;
      localDW->Set_L3 = false;
      localDW->Set_L4 = false;
    } else if (rtu_Gamepad_Back) {
      if (rtu_Coral_Arm_Angle_Measured >= Coral_Arm_Angle_Start_Thresh) {
        Robot_exit_internal_Coral_Eject(rty_Coral_Score, localDW);
        localDW->is_Coral = Robot_Contro_IN_NO_ACTIVE_CHILD;
        *rty_Set_Coral_Level = 0U;
        localDW->is_Elevator_CoralArm_CoralWheel =
          Robot_IN_Elevator_Height_Bottom;
        *rty_State_ID = 0.2;
        *rty_Elevator_Height_Desired = Elevator_Height_Bottom;
        *rty_Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
        *rty_Desired_Pipeline = 0U;
        localDW->is_Elevator_Height_Bottom = Robot_Contro_IN_Coral_Motor_Off;
        *rty_Coral_Wheel_DC = 0.0;
      } else {
        Robot_exit_internal_Coral_Eject(rty_Coral_Score, localDW);
        localDW->is_Coral = Robot_Contro_IN_NO_ACTIVE_CHILD;
        *rty_Set_Coral_Level = 0U;
        localDW->is_Elevator_CoralArm_CoralWheel =
          R_IN_Elevator_Height_Bottom_pre;
        *rty_State_ID = 0.1;
        *rty_Elevator_Height_Desired = Elevator_Height_Bottom_Pre;
        *rty_Desired_Pipeline = 0U;
        localDW->is_Elevator_Height_Bottom_pre = Robot_Contro_IN_Coral_Motor_Off;
        *rty_Coral_Wheel_DC = 0.0;
      }
    } else if (rtu_Gamepad_POV_Up) {
      Robot_exit_internal_Coral_Eject(rty_Coral_Score, localDW);
      localDW->is_Coral = Robot_Contro_IN_NO_ACTIVE_CHILD;
      *rty_Set_Coral_Level = 0U;
      localDW->is_Elevator_CoralArm_CoralWheel = Robot_Control_IN_End_Game_Climb;
      *rty_State_ID = 4.4;
      *rty_Elevator_Height_Desired = Elevator_Height_End_Game;
      *rty_Coral_Arm_Angle_Desired = -90.0;
      *rty_Desired_Pipeline = 0U;
      localDW->is_End_Game_Climb = Robot_Contro_IN_Coral_Motor_Off;
      *rty_Coral_Wheel_DC = 0.0;
    } else if (rtu_Gamepad_POV_Down) {
      Robot_exit_internal_Coral_Eject(rty_Coral_Score, localDW);
      localDW->is_Coral = Robot_Contro_IN_NO_ACTIVE_CHILD;
      *rty_Set_Coral_Level = 0U;
      localDW->is_Elevator_CoralArm_CoralWheel = Robot_Control_IN_Algae_Score;
      *rty_State_ID = 4.1;
      *rty_Elevator_Height_Desired = Elevator_Height_Algae_Score;
      *rty_Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
      *rty_Desired_Pipeline = 0U;
      localDW->is_Algae_Score = Robot_Contro_IN_Coral_Motor_Off;
      *rty_Coral_Wheel_DC = 0.0;
    } else if (rtu_Gamepad_POV_Left) {
      Robot_exit_internal_Coral_Eject(rty_Coral_Score, localDW);
      localDW->is_Coral = Robot_Contro_IN_NO_ACTIVE_CHILD;
      *rty_Set_Coral_Level = 0U;
      localDW->is_Elevator_CoralArm_CoralWheel = Robot_Contr_IN_Algae_Pickup_Low;
      *rty_State_ID = 4.2;
      *rty_Elevator_Height_Desired = Elevator_Height_Algae_Low;
      *rty_Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
      *rty_Set_Algae_Level = 2U;
      *rty_Desired_Pipeline = 2U;
      localDW->is_Algae_Pickup_Low = Robot_Contro_IN_Coral_Motor_Off;
      *rty_Coral_Wheel_DC = 0.0;
    } else if (rtu_Gamepad_POV_Right) {
      Robot_exit_internal_Coral_Eject(rty_Coral_Score, localDW);
      localDW->is_Coral = Robot_Contro_IN_NO_ACTIVE_CHILD;
      *rty_Set_Coral_Level = 0U;
      localDW->is_Elevator_CoralArm_CoralWheel = Robot_Cont_IN_Algae_Pickup_High;
      *rty_State_ID = 4.3;
      *rty_Elevator_Height_Desired = Elevator_Height_Algae_High;
      *rty_Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
      *rty_Set_Algae_Level = 3U;
      *rty_Desired_Pipeline = 2U;
      localDW->is_Algae_Pickup_High = Robot_Contro_IN_Coral_Motor_Off;
      *rty_Coral_Wheel_DC = 0.0;
    } else {
      switch (localDW->is_Coral_Eject) {
       case Robot_Control_IN_Eject:
        *rty_State_ID = 3.7;
        if (localDW->timer >= Coral_Eject_Time) {
          localDW->is_Coral_Eject = Robot_Control_IN_Stop;
          *rty_State_ID = 3.8;
          *rty_Coral_Wheel_DC = 0.0;
          *rty_Coral_Score = true;
        } else {
          localDW->timer += 0.02;
        }
        break;

       case Robot_Control_IN_Level_2:
        *rty_State_ID = 3.2;
        if ((!rtu_Coral_Limit_Switch) || rtu_Gamepad_RB) {
          localDW->is_Level_2 = Robot_Contro_IN_NO_ACTIVE_CHILD;
          localDW->is_Coral_Eject = Robot_Control_IN_Eject;
          *rty_State_ID = 3.7;
          *rty_Coral_Wheel_DC = Coral_Motor_DC_Eject;
          localDW->timer = 0.0;
        } else if (localDW->is_Level_2 == Robot_Co_IN_Auto_Lower_Elevator) {
          if (rtu_Elevator_Height_Measured <= Elevator_Height_L2_Eject) {
            localDW->is_Level_2 = Robot_Cont_IN_Manual_Adjustment;
            *rty_Elevator_Height_Desired += rtu_Gamepad_Stick_Right_Y *
              Elevator_Height_Manual_Gain;
            *rty_Coral_Arm_Angle_Desired += rtu_Gamepad_Stick_Left_Y *
              Coral_Arm_Manual_Gain;
          } else {
            *rty_Elevator_Height_Desired +=
              Elevator_Height_Coral_Score_Lower_Rate;
          }

          /* case IN_Manual_Adjustment: */
        } else if (rtu_AT_On_Target) {
          localDW->is_Level_2 = Robot_Co_IN_Auto_Lower_Elevator;
          *rty_Elevator_Height_Desired += Elevator_Height_Coral_Score_Lower_Rate;
        } else {
          *rty_Elevator_Height_Desired += rtu_Gamepad_Stick_Right_Y *
            Elevator_Height_Manual_Gain;
          *rty_Coral_Arm_Angle_Desired += rtu_Gamepad_Stick_Left_Y *
            Coral_Arm_Manual_Gain;
        }
        break;

       case Robot_Control_IN_Level_3:
        *rty_State_ID = 3.3;
        if ((!rtu_Coral_Limit_Switch) || rtu_Gamepad_RB) {
          localDW->is_Level_3 = Robot_Contro_IN_NO_ACTIVE_CHILD;
          localDW->is_Coral_Eject = Robot_Control_IN_Eject;
          *rty_State_ID = 3.7;
          *rty_Coral_Wheel_DC = Coral_Motor_DC_Eject;
          localDW->timer = 0.0;
        } else if (localDW->is_Level_3 == Robot_Co_IN_Auto_Lower_Elevator) {
          if (rtu_Elevator_Height_Measured <= Elevator_Height_L3_Eject) {
            localDW->is_Level_3 = Robot_Cont_IN_Manual_Adjustment;
            *rty_Elevator_Height_Desired += rtu_Gamepad_Stick_Right_Y *
              Elevator_Height_Manual_Gain;
            *rty_Coral_Arm_Angle_Desired += rtu_Gamepad_Stick_Left_Y *
              Coral_Arm_Manual_Gain;
          } else {
            *rty_Elevator_Height_Desired +=
              Elevator_Height_Coral_Score_Lower_Rate;
          }

          /* case IN_Manual_Adjustment: */
        } else if (rtu_AT_On_Target) {
          localDW->is_Level_3 = Robot_Co_IN_Auto_Lower_Elevator;
          *rty_Elevator_Height_Desired += Elevator_Height_Coral_Score_Lower_Rate;
        } else {
          *rty_Elevator_Height_Desired += rtu_Gamepad_Stick_Right_Y *
            Elevator_Height_Manual_Gain;
          *rty_Coral_Arm_Angle_Desired += rtu_Gamepad_Stick_Left_Y *
            Coral_Arm_Manual_Gain;
        }
        break;

       case Robot_Control_IN_Level_4_Auto:
        *rty_State_ID = 3.5;
        if (!rtu_Coral_Limit_Switch) {
          localDW->is_Level_4_Auto = Robot_Contro_IN_NO_ACTIVE_CHILD;
          localDW->is_Coral_Eject = Robot_Control_IN_Level_4_Timer;
          *rty_State_ID = 3.6;
          *rty_Elevator_Height_Desired += Elevator_Height_Coral_Score_Lower_Rate;
          localDW->timer = 0.02;
        } else if (localDW->is_Level_4_Auto == Robot_Control_IN_Auto_Lower_Arm)
        {
          if (rtu_Coral_Arm_Angle_Measured < Coral_Arm_Angle_L4_Eject_Auto) {
            localDW->is_Level_4_Auto = Robot__IN_Auto_Lower_Elevator_l;
            *rty_Elevator_Height_Desired +=
              Elevator_Height_Coral_Score_Lower_Rate;
          } else {
            *rty_Coral_Arm_Angle_Desired +=
              Coral_Arm_Angle_Coral_Score_Lower_Rate;
          }
        } else {
          /* case IN_Auto_Lower_Elevator: */
          *rty_Elevator_Height_Desired += Elevator_Height_Coral_Score_Lower_Rate;
        }
        break;

       case Robot_Control_IN_Level_4_Teleop:
        Robot_Control_Level_4_Teleop(rtu_Gamepad_RB, rtu_Gamepad_Stick_Left_Y,
          rtu_Gamepad_Stick_Right_Y, rtu_Coral_Arm_Angle_Measured,
          rtu_Coral_Limit_Switch, rtu_AT_On_Target, rty_State_ID,
          rty_Elevator_Height_Desired, rty_Coral_Arm_Angle_Desired,
          rty_Coral_Wheel_DC, localDW);
        break;

       case Robot_Control_IN_Level_4_Timer:
        *rty_State_ID = 3.6;
        if (localDW->timer >= L4_Switch_Time) {
          localDW->is_Coral_Eject = Robot_Control_IN_Eject;
          *rty_State_ID = 3.7;
          *rty_Coral_Wheel_DC = Coral_Motor_DC_Eject;
          localDW->timer = 0.0;
        } else {
          *rty_Elevator_Height_Desired += Elevator_Height_Coral_Score_Lower_Rate;
          localDW->timer += 0.02;
        }
        break;

       default:
        /* case IN_Stop: */
        *rty_State_ID = 3.8;
        *rty_Elevator_Height_Desired += rtu_Gamepad_Stick_Right_Y *
          Elevator_Height_Manual_Gain;
        *rty_Coral_Arm_Angle_Desired += rtu_Gamepad_Stick_Left_Y *
          Coral_Arm_Manual_Gain;
        break;
      }
    }
  } else {
    /* case IN_Coral_Score_Position: */
    Robot_Cont_Coral_Score_Position(rtu_GameState, rtu_Gamepad_B1_A,
      rtu_Gamepad_B2_B, rtu_Gamepad_B3_X, rtu_Gamepad_B4_Y, rtu_Gamepad_Start,
      rtu_Gamepad_Back, rtu_Gamepad_RB, rtu_Gamepad_POV_Up, rtu_Gamepad_POV_Down,
      rtu_Gamepad_POV_Left, rtu_Gamepad_POV_Right, rtu_Gamepad_Stick_Left_Y,
      rtu_Gamepad_Stick_Right_Y, rtu_Coral_Arm_Angle_Measured,
      rtu_Coral_Limit_Switch, rtu_Algae_Limit_Switch, rty_State_ID,
      rty_Elevator_Height_Desired, rty_Coral_Arm_Angle_Desired,
      rty_Coral_Wheel_DC, rty_Set_Coral_Level, rty_Set_Algae_Level,
      rty_Desired_Pipeline, localDW);
  }
}

/* Function for Chart: '<S28>/Reefscape_Chart' */
static void Robo_exit_internal_Coral_Pickup(boolean_T
  *rty_Coral_Pickup_Lower_Wait_Sta, DW_Reefscape_Chart_Robot_Cont_T *localDW)
{
  localDW->is_Set_Level = Robot_Contro_IN_NO_ACTIVE_CHILD;
  if (localDW->is_Actions == Robo_IN_Coral_Pickup_Lower_Wait) {
    *rty_Coral_Pickup_Lower_Wait_Sta = false;
    localDW->is_Actions = Robot_Contro_IN_NO_ACTIVE_CHILD;
  } else {
    localDW->is_Coral_Pickup_Prepare = Robot_Contro_IN_NO_ACTIVE_CHILD;
    localDW->is_Actions = Robot_Contro_IN_NO_ACTIVE_CHILD;
  }
}

/* Function for Chart: '<S28>/Reefscape_Chart' */
static void Robot_Control_Set_Level(boolean_T rtu_Gamepad_B1_A, boolean_T
  rtu_Gamepad_B2_B, boolean_T rtu_Gamepad_B3_X, boolean_T rtu_Gamepad_B4_Y,
  DW_Reefscape_Chart_Robot_Cont_T *localDW)
{
  switch (localDW->is_Set_Level) {
   case Robot_Control_IN_L1:
    if ((rtu_Gamepad_B3_X || rtu_Gamepad_B2_B) || rtu_Gamepad_B4_Y) {
      if (rtu_Gamepad_B1_A) {
        localDW->is_Set_Level = Robot_Control_IN_L1;
        localDW->Set_L1 = true;
        localDW->Set_L2 = false;
        localDW->Set_L3 = false;
        localDW->Set_L4 = false;
      } else if (rtu_Gamepad_B3_X) {
        localDW->is_Set_Level = Robot_Control_IN_L2;
        localDW->Set_L1 = false;
        localDW->Set_L2 = true;
        localDW->Set_L3 = false;
        localDW->Set_L4 = false;
      } else if (rtu_Gamepad_B2_B) {
        localDW->is_Set_Level = Robot_Control_IN_L3;
        localDW->Set_L1 = false;
        localDW->Set_L2 = false;
        localDW->Set_L3 = true;
        localDW->Set_L4 = false;
      } else if (rtu_Gamepad_B4_Y) {
        localDW->is_Set_Level = Robot_Control_IN_L4;
        localDW->Set_L1 = false;
        localDW->Set_L2 = false;
        localDW->Set_L3 = false;
        localDW->Set_L4 = true;
      }
    }
    break;

   case Robot_Control_IN_L2:
    if ((rtu_Gamepad_B1_A || rtu_Gamepad_B2_B) || rtu_Gamepad_B4_Y) {
      if (rtu_Gamepad_B1_A) {
        localDW->is_Set_Level = Robot_Control_IN_L1;
        localDW->Set_L1 = true;
        localDW->Set_L2 = false;
        localDW->Set_L3 = false;
        localDW->Set_L4 = false;
      } else if (rtu_Gamepad_B3_X) {
        localDW->is_Set_Level = Robot_Control_IN_L2;
        localDW->Set_L1 = false;
        localDW->Set_L2 = true;
        localDW->Set_L3 = false;
        localDW->Set_L4 = false;
      } else if (rtu_Gamepad_B2_B) {
        localDW->is_Set_Level = Robot_Control_IN_L3;
        localDW->Set_L1 = false;
        localDW->Set_L2 = false;
        localDW->Set_L3 = true;
        localDW->Set_L4 = false;
      } else if (rtu_Gamepad_B4_Y) {
        localDW->is_Set_Level = Robot_Control_IN_L4;
        localDW->Set_L1 = false;
        localDW->Set_L2 = false;
        localDW->Set_L3 = false;
        localDW->Set_L4 = true;
      }
    }
    break;

   case Robot_Control_IN_L3:
    if ((rtu_Gamepad_B1_A || rtu_Gamepad_B3_X) || rtu_Gamepad_B4_Y) {
      if (rtu_Gamepad_B1_A) {
        localDW->is_Set_Level = Robot_Control_IN_L1;
        localDW->Set_L1 = true;
        localDW->Set_L2 = false;
        localDW->Set_L3 = false;
        localDW->Set_L4 = false;
      } else if (rtu_Gamepad_B3_X) {
        localDW->is_Set_Level = Robot_Control_IN_L2;
        localDW->Set_L1 = false;
        localDW->Set_L2 = true;
        localDW->Set_L3 = false;
        localDW->Set_L4 = false;
      } else if (rtu_Gamepad_B2_B) {
        localDW->is_Set_Level = Robot_Control_IN_L3;
        localDW->Set_L1 = false;
        localDW->Set_L2 = false;
        localDW->Set_L3 = true;
        localDW->Set_L4 = false;
      } else if (rtu_Gamepad_B4_Y) {
        localDW->is_Set_Level = Robot_Control_IN_L4;
        localDW->Set_L1 = false;
        localDW->Set_L2 = false;
        localDW->Set_L3 = false;
        localDW->Set_L4 = true;
      }
    }
    break;

   case Robot_Control_IN_L4:
    if ((rtu_Gamepad_B1_A || rtu_Gamepad_B3_X) || rtu_Gamepad_B2_B) {
      if (rtu_Gamepad_B1_A) {
        localDW->is_Set_Level = Robot_Control_IN_L1;
        localDW->Set_L1 = true;
        localDW->Set_L2 = false;
        localDW->Set_L3 = false;
        localDW->Set_L4 = false;
      } else if (rtu_Gamepad_B3_X) {
        localDW->is_Set_Level = Robot_Control_IN_L2;
        localDW->Set_L1 = false;
        localDW->Set_L2 = true;
        localDW->Set_L3 = false;
        localDW->Set_L4 = false;
      } else if (rtu_Gamepad_B2_B) {
        localDW->is_Set_Level = Robot_Control_IN_L3;
        localDW->Set_L1 = false;
        localDW->Set_L2 = false;
        localDW->Set_L3 = true;
        localDW->Set_L4 = false;
      } else if (rtu_Gamepad_B4_Y) {
        localDW->is_Set_Level = Robot_Control_IN_L4;
        localDW->Set_L1 = false;
        localDW->Set_L2 = false;
        localDW->Set_L3 = false;
        localDW->Set_L4 = true;
      }
    }
    break;

   default:
    /* case IN_None: */
    if (rtu_Gamepad_B1_A) {
      localDW->is_Set_Level = Robot_Control_IN_L1;
      localDW->Set_L1 = true;
      localDW->Set_L2 = false;
      localDW->Set_L3 = false;
      localDW->Set_L4 = false;
    } else if (rtu_Gamepad_B3_X) {
      localDW->is_Set_Level = Robot_Control_IN_L2;
      localDW->Set_L1 = false;
      localDW->Set_L2 = true;
      localDW->Set_L3 = false;
      localDW->Set_L4 = false;
    } else if (rtu_Gamepad_B2_B) {
      localDW->is_Set_Level = Robot_Control_IN_L3;
      localDW->Set_L1 = false;
      localDW->Set_L2 = false;
      localDW->Set_L3 = true;
      localDW->Set_L4 = false;
    } else if (rtu_Gamepad_B4_Y) {
      localDW->is_Set_Level = Robot_Control_IN_L4;
      localDW->Set_L1 = false;
      localDW->Set_L2 = false;
      localDW->Set_L3 = false;
      localDW->Set_L4 = true;
    }
    break;
  }
}

/* Function for Chart: '<S28>/Reefscape_Chart' */
static void Robot_Control_Coral_Pickup(boolean_T rtu_Gamepad_B1_A, boolean_T
  rtu_Gamepad_B2_B, boolean_T rtu_Gamepad_B3_X, boolean_T rtu_Gamepad_B4_Y,
  boolean_T rtu_Gamepad_Start, boolean_T rtu_Gamepad_Back, boolean_T
  rtu_Gamepad_RB, boolean_T rtu_Gamepad_POV_Up, boolean_T rtu_Gamepad_POV_Down,
  boolean_T rtu_Gamepad_POV_Left, boolean_T rtu_Gamepad_POV_Right, real_T
  rtu_Gamepad_Stick_Left_Y, real_T rtu_Gamepad_Stick_Right_Y, real_T
  rtu_Elevator_Height_Measured, real_T rtu_Coral_Arm_Angle_Measured, real_T
  rtu_Coral_TOF_Distance, boolean_T rtu_Coral_Limit_Switch, boolean_T
  rtu_Algae_Limit_Switch, real_T *rty_State_ID, real_T
  *rty_Elevator_Height_Desired, real_T *rty_Coral_Arm_Angle_Desired, real_T
  *rty_Coral_Wheel_DC, boolean_T *rty_Elevator_LowerPickup_Reset, boolean_T
  *rty_Coral_Pickup_Lower_Wait_Sta, uint8_T *rty_Set_Algae_Level, uint8_T
  *rty_Desired_Pipeline, DW_Reefscape_Chart_Robot_Cont_T *localDW)
{
  if (rtu_Gamepad_Start && (!rtu_Algae_Limit_Switch)) {
    Robo_exit_internal_Coral_Pickup(rty_Coral_Pickup_Lower_Wait_Sta, localDW);
    localDW->is_Elevator_CoralArm_CoralWheel = Robot_Control_IN_Coral_Pickup;
    localDW->is_Actions = Robot_C_IN_Coral_Pickup_Prepare;
    *rty_State_ID = 1.0;
    *rty_Elevator_Height_Desired = Elevator_Height_Prepare;
    *rty_Coral_Arm_Angle_Desired = -90.0;
    *rty_Desired_Pipeline = 1U;
    localDW->is_Coral_Pickup_Prepare = Robot_Contro_IN_Coral_Motor_Off;
    *rty_Coral_Wheel_DC = 0.0;
    localDW->is_Set_Level = Robot_Control_IN_None;
    localDW->Set_L1 = false;
    localDW->Set_L2 = false;
    localDW->Set_L3 = false;
    localDW->Set_L4 = false;
  } else if (rtu_Gamepad_Back) {
    if (rtu_Coral_Arm_Angle_Measured >= Coral_Arm_Angle_Start_Thresh) {
      Robo_exit_internal_Coral_Pickup(rty_Coral_Pickup_Lower_Wait_Sta, localDW);
      localDW->is_Elevator_CoralArm_CoralWheel = Robot_IN_Elevator_Height_Bottom;
      *rty_State_ID = 0.2;
      *rty_Elevator_Height_Desired = Elevator_Height_Bottom;
      *rty_Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
      *rty_Desired_Pipeline = 0U;
      localDW->is_Elevator_Height_Bottom = Robot_Contro_IN_Coral_Motor_Off;
      *rty_Coral_Wheel_DC = 0.0;
    } else {
      Robo_exit_internal_Coral_Pickup(rty_Coral_Pickup_Lower_Wait_Sta, localDW);
      localDW->is_Elevator_CoralArm_CoralWheel = R_IN_Elevator_Height_Bottom_pre;
      *rty_State_ID = 0.1;
      *rty_Elevator_Height_Desired = Elevator_Height_Bottom_Pre;
      *rty_Desired_Pipeline = 0U;
      localDW->is_Elevator_Height_Bottom_pre = Robot_Contro_IN_Coral_Motor_Off;
      *rty_Coral_Wheel_DC = 0.0;
    }
  } else if (rtu_Gamepad_POV_Up) {
    Robo_exit_internal_Coral_Pickup(rty_Coral_Pickup_Lower_Wait_Sta, localDW);
    localDW->is_Elevator_CoralArm_CoralWheel = Robot_Control_IN_End_Game_Climb;
    *rty_State_ID = 4.4;
    *rty_Elevator_Height_Desired = Elevator_Height_End_Game;
    *rty_Coral_Arm_Angle_Desired = -90.0;
    *rty_Desired_Pipeline = 0U;
    localDW->is_End_Game_Climb = Robot_Contro_IN_Coral_Motor_Off;
    *rty_Coral_Wheel_DC = 0.0;
  } else if (rtu_Gamepad_POV_Down) {
    Robo_exit_internal_Coral_Pickup(rty_Coral_Pickup_Lower_Wait_Sta, localDW);
    localDW->is_Elevator_CoralArm_CoralWheel = Robot_Control_IN_Algae_Score;
    *rty_State_ID = 4.1;
    *rty_Elevator_Height_Desired = Elevator_Height_Algae_Score;
    *rty_Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
    *rty_Desired_Pipeline = 0U;
    localDW->is_Algae_Score = Robot_Contro_IN_Coral_Motor_Off;
    *rty_Coral_Wheel_DC = 0.0;
  } else if (rtu_Gamepad_POV_Left) {
    Robo_exit_internal_Coral_Pickup(rty_Coral_Pickup_Lower_Wait_Sta, localDW);
    localDW->is_Elevator_CoralArm_CoralWheel = Robot_Contr_IN_Algae_Pickup_Low;
    *rty_State_ID = 4.2;
    *rty_Elevator_Height_Desired = Elevator_Height_Algae_Low;
    *rty_Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
    *rty_Set_Algae_Level = 2U;
    *rty_Desired_Pipeline = 2U;
    localDW->is_Algae_Pickup_Low = Robot_Contro_IN_Coral_Motor_Off;
    *rty_Coral_Wheel_DC = 0.0;
  } else if (rtu_Gamepad_POV_Right) {
    Robo_exit_internal_Coral_Pickup(rty_Coral_Pickup_Lower_Wait_Sta, localDW);
    localDW->is_Elevator_CoralArm_CoralWheel = Robot_Cont_IN_Algae_Pickup_High;
    *rty_State_ID = 4.3;
    *rty_Elevator_Height_Desired = Elevator_Height_Algae_High;
    *rty_Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
    *rty_Set_Algae_Level = 3U;
    *rty_Desired_Pipeline = 2U;
    localDW->is_Algae_Pickup_High = Robot_Contro_IN_Coral_Motor_Off;
    *rty_Coral_Wheel_DC = 0.0;
  } else {
    switch (localDW->is_Actions) {
     case Robot_Con_IN_Coral_Pickup_Lower:
      *rty_State_ID = 1.1;
      *rty_Desired_Pipeline = 0U;
      if (rtu_Coral_Limit_Switch) {
        localDW->is_Actions = Robo_IN_Coral_Pickup_Lower_Wait;
        *rty_State_ID = 1.2;
        *rty_Coral_Pickup_Lower_Wait_Sta = true;
        *rty_Coral_Wheel_DC = Coral_Motor_DC_Hold;
        *rty_Elevator_LowerPickup_Reset = false;
        localDW->timer = 0.0;
        *rty_Desired_Pipeline = 0U;
      } else {
        *rty_Elevator_Height_Desired += rtu_Gamepad_Stick_Right_Y *
          Elevator_Height_Manual_Gain;
        *rty_Coral_Arm_Angle_Desired += rtu_Gamepad_Stick_Left_Y *
          Coral_Arm_Manual_Gain;
      }
      break;

     case Robo_IN_Coral_Pickup_Lower_Wait:
      *rty_State_ID = 1.2;
      *rty_Elevator_LowerPickup_Reset = false;
      *rty_Desired_Pipeline = 0U;
      if ((localDW->timer >= Elevator_LowerPickup_Time) && ((((localDW->Set_L1) ||
             (localDW->Set_L2)) || (localDW->Set_L3)) || (localDW->Set_L4))) {
        *rty_Coral_Pickup_Lower_Wait_Sta = false;
        localDW->is_Actions = Robot_Con_IN_Coral_Pickup_Raise;
        *rty_State_ID = 1.3;
        *rty_Elevator_Height_Desired = Elevator_Height_Raise;
        *rty_Desired_Pipeline = 0U;
      } else {
        localDW->timer += 0.02;
        *rty_Elevator_Height_Desired += rtu_Gamepad_Stick_Right_Y *
          Elevator_Height_Manual_Gain;
        *rty_Coral_Arm_Angle_Desired += rtu_Gamepad_Stick_Left_Y *
          Coral_Arm_Manual_Gain;
      }
      break;

     case Robot_C_IN_Coral_Pickup_Prepare:
      *rty_State_ID = 1.0;
      *rty_Desired_Pipeline = 1U;
      if ((fabs((*rty_Elevator_Height_Desired) - rtu_Elevator_Height_Measured) <=
           Elevator_Height_Error_Threshold) && ((fabs
            ((*rty_Coral_Arm_Angle_Desired) - rtu_Coral_Arm_Angle_Measured) <=
            Coral_Arm_Angle_Error_Threshold) && (rtu_Coral_TOF_Distance <
            Coral_Detect_Distance))) {
        localDW->is_Coral_Pickup_Prepare = Robot_Contro_IN_NO_ACTIVE_CHILD;
        localDW->is_Actions = Robot_Con_IN_Coral_Pickup_Lower;
        *rty_State_ID = 1.1;
        *rty_Elevator_Height_Desired = Elevator_Height_Lower;
        *rty_Coral_Wheel_DC = Coral_Motor_DC_Pickup;
        *rty_Desired_Pipeline = 0U;
      } else {
        *rty_Elevator_Height_Desired += rtu_Gamepad_Stick_Right_Y *
          Elevator_Height_Manual_Gain;
        *rty_Coral_Arm_Angle_Desired += rtu_Gamepad_Stick_Left_Y *
          Coral_Arm_Manual_Gain;
        if (localDW->is_Coral_Pickup_Prepare == Robot_Control_IN_Coral_Eject) {
          if (localDW->timer >= Coral_Eject_Time) {
            localDW->is_Coral_Pickup_Prepare = Robot_Contro_IN_Coral_Motor_Off;
            *rty_Coral_Wheel_DC = 0.0;
          } else {
            localDW->timer += 0.02;
          }

          /* case IN_Coral_Motor_Off: */
        } else if (rtu_Gamepad_RB) {
          localDW->is_Coral_Pickup_Prepare = Robot_Control_IN_Coral_Eject;
          *rty_Coral_Wheel_DC = Coral_Motor_DC_Eject;
          localDW->timer = 0.0;
        }
      }
      break;

     default:
      /* case IN_Coral_Pickup_Raise: */
      *rty_State_ID = 1.3;
      *rty_Desired_Pipeline = 0U;
      if ((fabs((*rty_Elevator_Height_Desired) - rtu_Elevator_Height_Measured) <=
           Elevator_Height_Error_Threshold) && ((((localDW->Set_L1) ||
             (localDW->Set_L2)) || (localDW->Set_L3)) || (localDW->Set_L4))) {
        Robo_exit_internal_Coral_Pickup(rty_Coral_Pickup_Lower_Wait_Sta, localDW);
        localDW->is_Elevator_CoralArm_CoralWheel = Robot_Control_IN_Start_Angle;
        *rty_State_ID = 2.0;
        *rty_Coral_Arm_Angle_Desired = Coral_Arm_Angle_Start;
      } else {
        *rty_Elevator_Height_Desired += rtu_Gamepad_Stick_Right_Y *
          Elevator_Height_Manual_Gain;
        *rty_Coral_Arm_Angle_Desired += rtu_Gamepad_Stick_Left_Y *
          Coral_Arm_Manual_Gain;
      }
      break;
    }

    if (localDW->is_Elevator_CoralArm_CoralWheel ==
        Robot_Control_IN_Coral_Pickup) {
      Robot_Control_Set_Level(rtu_Gamepad_B1_A, rtu_Gamepad_B2_B,
        rtu_Gamepad_B3_X, rtu_Gamepad_B4_Y, localDW);
    }
  }
}

/* Function for Chart: '<S28>/Reefscape_Chart' */
static void Robot_Co_Elevator_Height_Bottom(boolean_T rtu_Gamepad_Start,
  boolean_T rtu_Gamepad_Back, boolean_T rtu_Gamepad_RB, boolean_T
  rtu_Gamepad_POV_Up, boolean_T rtu_Gamepad_POV_Down, boolean_T
  rtu_Gamepad_POV_Left, boolean_T rtu_Gamepad_POV_Right, real_T
  rtu_Gamepad_Stick_Left_Y, real_T rtu_Gamepad_Stick_Right_Y, real_T
  rtu_Coral_Arm_Angle_Measured, boolean_T rtu_Algae_Limit_Switch, real_T
  *rty_State_ID, real_T *rty_Elevator_Height_Desired, real_T
  *rty_Coral_Arm_Angle_Desired, real_T *rty_Coral_Wheel_DC, uint8_T
  *rty_Set_Algae_Level, uint8_T *rty_Desired_Pipeline,
  DW_Reefscape_Chart_Robot_Cont_T *localDW)
{
  *rty_State_ID = 0.2;
  *rty_Desired_Pipeline = 0U;
  if (rtu_Gamepad_Start && (!rtu_Algae_Limit_Switch)) {
    localDW->is_Elevator_Height_Bottom = Robot_Contro_IN_NO_ACTIVE_CHILD;
    localDW->is_Elevator_CoralArm_CoralWheel = Robot_Control_IN_Coral_Pickup;
    localDW->is_Actions = Robot_C_IN_Coral_Pickup_Prepare;
    *rty_State_ID = 1.0;
    *rty_Elevator_Height_Desired = Elevator_Height_Prepare;
    *rty_Coral_Arm_Angle_Desired = -90.0;
    *rty_Desired_Pipeline = 1U;
    localDW->is_Coral_Pickup_Prepare = Robot_Contro_IN_Coral_Motor_Off;
    *rty_Coral_Wheel_DC = 0.0;
    localDW->is_Set_Level = Robot_Control_IN_None;
    localDW->Set_L1 = false;
    localDW->Set_L2 = false;
    localDW->Set_L3 = false;
    localDW->Set_L4 = false;
  } else if (rtu_Gamepad_Back) {
    if (rtu_Coral_Arm_Angle_Measured >= Coral_Arm_Angle_Start_Thresh) {
      localDW->is_Elevator_CoralArm_CoralWheel = Robot_IN_Elevator_Height_Bottom;
      *rty_State_ID = 0.2;
      *rty_Elevator_Height_Desired = Elevator_Height_Bottom;
      *rty_Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
      *rty_Desired_Pipeline = 0U;
      localDW->is_Elevator_Height_Bottom = Robot_Contro_IN_Coral_Motor_Off;
      *rty_Coral_Wheel_DC = 0.0;
    } else {
      localDW->is_Elevator_Height_Bottom = Robot_Contro_IN_NO_ACTIVE_CHILD;
      localDW->is_Elevator_CoralArm_CoralWheel = R_IN_Elevator_Height_Bottom_pre;
      *rty_State_ID = 0.1;
      *rty_Elevator_Height_Desired = Elevator_Height_Bottom_Pre;
      *rty_Desired_Pipeline = 0U;
      localDW->is_Elevator_Height_Bottom_pre = Robot_Contro_IN_Coral_Motor_Off;
      *rty_Coral_Wheel_DC = 0.0;
    }
  } else if (rtu_Gamepad_POV_Up) {
    localDW->is_Elevator_Height_Bottom = Robot_Contro_IN_NO_ACTIVE_CHILD;
    localDW->is_Elevator_CoralArm_CoralWheel = Robot_Control_IN_End_Game_Climb;
    *rty_State_ID = 4.4;
    *rty_Elevator_Height_Desired = Elevator_Height_End_Game;
    *rty_Coral_Arm_Angle_Desired = -90.0;
    *rty_Desired_Pipeline = 0U;
    localDW->is_End_Game_Climb = Robot_Contro_IN_Coral_Motor_Off;
    *rty_Coral_Wheel_DC = 0.0;
  } else if (rtu_Gamepad_POV_Down) {
    localDW->is_Elevator_Height_Bottom = Robot_Contro_IN_NO_ACTIVE_CHILD;
    localDW->is_Elevator_CoralArm_CoralWheel = Robot_Control_IN_Algae_Score;
    *rty_State_ID = 4.1;
    *rty_Elevator_Height_Desired = Elevator_Height_Algae_Score;
    *rty_Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
    *rty_Desired_Pipeline = 0U;
    localDW->is_Algae_Score = Robot_Contro_IN_Coral_Motor_Off;
    *rty_Coral_Wheel_DC = 0.0;
  } else if (rtu_Gamepad_POV_Left) {
    localDW->is_Elevator_Height_Bottom = Robot_Contro_IN_NO_ACTIVE_CHILD;
    localDW->is_Elevator_CoralArm_CoralWheel = Robot_Contr_IN_Algae_Pickup_Low;
    *rty_State_ID = 4.2;
    *rty_Elevator_Height_Desired = Elevator_Height_Algae_Low;
    *rty_Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
    *rty_Set_Algae_Level = 2U;
    *rty_Desired_Pipeline = 2U;
    localDW->is_Algae_Pickup_Low = Robot_Contro_IN_Coral_Motor_Off;
    *rty_Coral_Wheel_DC = 0.0;
  } else if (rtu_Gamepad_POV_Right) {
    localDW->is_Elevator_Height_Bottom = Robot_Contro_IN_NO_ACTIVE_CHILD;
    localDW->is_Elevator_CoralArm_CoralWheel = Robot_Cont_IN_Algae_Pickup_High;
    *rty_State_ID = 4.3;
    *rty_Elevator_Height_Desired = Elevator_Height_Algae_High;
    *rty_Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
    *rty_Set_Algae_Level = 3U;
    *rty_Desired_Pipeline = 2U;
    localDW->is_Algae_Pickup_High = Robot_Contro_IN_Coral_Motor_Off;
    *rty_Coral_Wheel_DC = 0.0;
  } else {
    *rty_Elevator_Height_Desired += rtu_Gamepad_Stick_Right_Y *
      Elevator_Height_Manual_Gain;
    *rty_Coral_Arm_Angle_Desired += rtu_Gamepad_Stick_Left_Y *
      Coral_Arm_Manual_Gain;
    if (localDW->is_Elevator_Height_Bottom == Robot_Control_IN_Coral_Eject) {
      if (localDW->timer >= Coral_Eject_Time) {
        localDW->is_Elevator_Height_Bottom = Robot_Contro_IN_Coral_Motor_Off;
        *rty_Coral_Wheel_DC = 0.0;
      } else {
        localDW->timer += 0.02;
      }

      /* case IN_Coral_Motor_Off: */
    } else if (rtu_Gamepad_RB) {
      localDW->is_Elevator_Height_Bottom = Robot_Control_IN_Coral_Eject;
      *rty_Coral_Wheel_DC = Coral_Motor_DC_Eject;
      localDW->timer = 0.0;
    }
  }
}

/* Function for Chart: '<S28>/Reefscape_Chart' */
static void Robo_Elevator_Height_Bottom_pre(boolean_T rtu_Gamepad_Start,
  boolean_T rtu_Gamepad_Back, boolean_T rtu_Gamepad_RB, boolean_T
  rtu_Gamepad_POV_Up, boolean_T rtu_Gamepad_POV_Down, boolean_T
  rtu_Gamepad_POV_Left, boolean_T rtu_Gamepad_POV_Right, real_T
  rtu_Gamepad_Stick_Left_Y, real_T rtu_Gamepad_Stick_Right_Y, real_T
  rtu_Elevator_Height_Measured, real_T rtu_Coral_Arm_Angle_Measured, boolean_T
  rtu_Algae_Limit_Switch, real_T *rty_State_ID, real_T
  *rty_Elevator_Height_Desired, real_T *rty_Coral_Arm_Angle_Desired, real_T
  *rty_Coral_Wheel_DC, uint8_T *rty_Set_Algae_Level, uint8_T
  *rty_Desired_Pipeline, DW_Reefscape_Chart_Robot_Cont_T *localDW)
{
  boolean_T guard1;
  *rty_State_ID = 0.1;
  *rty_Desired_Pipeline = 0U;
  guard1 = false;
  if (rtu_Elevator_Height_Measured > ((*rty_Elevator_Height_Desired) -
       Elevator_Height_Error_Threshold)) {
    guard1 = true;
  } else if (rtu_Gamepad_Start && (!rtu_Algae_Limit_Switch)) {
    localDW->is_Elevator_Height_Bottom_pre = Robot_Contro_IN_NO_ACTIVE_CHILD;
    localDW->is_Elevator_CoralArm_CoralWheel = Robot_Control_IN_Coral_Pickup;
    localDW->is_Actions = Robot_C_IN_Coral_Pickup_Prepare;
    *rty_State_ID = 1.0;
    *rty_Elevator_Height_Desired = Elevator_Height_Prepare;
    *rty_Coral_Arm_Angle_Desired = -90.0;
    *rty_Desired_Pipeline = 1U;
    localDW->is_Coral_Pickup_Prepare = Robot_Contro_IN_Coral_Motor_Off;
    *rty_Coral_Wheel_DC = 0.0;
    localDW->is_Set_Level = Robot_Control_IN_None;
    localDW->Set_L1 = false;
    localDW->Set_L2 = false;
    localDW->Set_L3 = false;
    localDW->Set_L4 = false;
  } else if (rtu_Gamepad_Back) {
    if (rtu_Coral_Arm_Angle_Measured >= Coral_Arm_Angle_Start_Thresh) {
      guard1 = true;
    } else {
      localDW->is_Elevator_CoralArm_CoralWheel = R_IN_Elevator_Height_Bottom_pre;
      *rty_State_ID = 0.1;
      *rty_Elevator_Height_Desired = Elevator_Height_Bottom_Pre;
      *rty_Desired_Pipeline = 0U;
      localDW->is_Elevator_Height_Bottom_pre = Robot_Contro_IN_Coral_Motor_Off;
      *rty_Coral_Wheel_DC = 0.0;
    }
  } else if (rtu_Gamepad_POV_Up) {
    localDW->is_Elevator_Height_Bottom_pre = Robot_Contro_IN_NO_ACTIVE_CHILD;
    localDW->is_Elevator_CoralArm_CoralWheel = Robot_Control_IN_End_Game_Climb;
    *rty_State_ID = 4.4;
    *rty_Elevator_Height_Desired = Elevator_Height_End_Game;
    *rty_Coral_Arm_Angle_Desired = -90.0;
    *rty_Desired_Pipeline = 0U;
    localDW->is_End_Game_Climb = Robot_Contro_IN_Coral_Motor_Off;
    *rty_Coral_Wheel_DC = 0.0;
  } else if (rtu_Gamepad_POV_Down) {
    localDW->is_Elevator_Height_Bottom_pre = Robot_Contro_IN_NO_ACTIVE_CHILD;
    localDW->is_Elevator_CoralArm_CoralWheel = Robot_Control_IN_Algae_Score;
    *rty_State_ID = 4.1;
    *rty_Elevator_Height_Desired = Elevator_Height_Algae_Score;
    *rty_Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
    *rty_Desired_Pipeline = 0U;
    localDW->is_Algae_Score = Robot_Contro_IN_Coral_Motor_Off;
    *rty_Coral_Wheel_DC = 0.0;
  } else if (rtu_Gamepad_POV_Left) {
    localDW->is_Elevator_Height_Bottom_pre = Robot_Contro_IN_NO_ACTIVE_CHILD;
    localDW->is_Elevator_CoralArm_CoralWheel = Robot_Contr_IN_Algae_Pickup_Low;
    *rty_State_ID = 4.2;
    *rty_Elevator_Height_Desired = Elevator_Height_Algae_Low;
    *rty_Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
    *rty_Set_Algae_Level = 2U;
    *rty_Desired_Pipeline = 2U;
    localDW->is_Algae_Pickup_Low = Robot_Contro_IN_Coral_Motor_Off;
    *rty_Coral_Wheel_DC = 0.0;
  } else if (rtu_Gamepad_POV_Right) {
    localDW->is_Elevator_Height_Bottom_pre = Robot_Contro_IN_NO_ACTIVE_CHILD;
    localDW->is_Elevator_CoralArm_CoralWheel = Robot_Cont_IN_Algae_Pickup_High;
    *rty_State_ID = 4.3;
    *rty_Elevator_Height_Desired = Elevator_Height_Algae_High;
    *rty_Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
    *rty_Set_Algae_Level = 3U;
    *rty_Desired_Pipeline = 2U;
    localDW->is_Algae_Pickup_High = Robot_Contro_IN_Coral_Motor_Off;
    *rty_Coral_Wheel_DC = 0.0;
  } else {
    *rty_Elevator_Height_Desired += rtu_Gamepad_Stick_Right_Y *
      Elevator_Height_Manual_Gain;
    *rty_Coral_Arm_Angle_Desired += rtu_Gamepad_Stick_Left_Y *
      Coral_Arm_Manual_Gain;
    if (localDW->is_Elevator_Height_Bottom_pre == Robot_Control_IN_Coral_Eject)
    {
      if (localDW->timer >= Coral_Eject_Time) {
        localDW->is_Elevator_Height_Bottom_pre = Robot_Contro_IN_Coral_Motor_Off;
        *rty_Coral_Wheel_DC = 0.0;
      } else {
        localDW->timer += 0.02;
      }

      /* case IN_Coral_Motor_Off: */
    } else if (rtu_Gamepad_RB) {
      localDW->is_Elevator_Height_Bottom_pre = Robot_Control_IN_Coral_Eject;
      *rty_Coral_Wheel_DC = Coral_Motor_DC_Eject;
      localDW->timer = 0.0;
    }
  }

  if (guard1) {
    localDW->is_Elevator_Height_Bottom_pre = Robot_Contro_IN_NO_ACTIVE_CHILD;
    localDW->is_Elevator_CoralArm_CoralWheel = Robot_IN_Elevator_Height_Bottom;
    *rty_State_ID = 0.2;
    *rty_Elevator_Height_Desired = Elevator_Height_Bottom;
    *rty_Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
    *rty_Desired_Pipeline = 0U;
    localDW->is_Elevator_Height_Bottom = Robot_Contro_IN_Coral_Motor_Off;
    *rty_Coral_Wheel_DC = 0.0;
  }
}

/* Function for Chart: '<S28>/Reefscape_Chart' */
static void Robot_Control_End_Game_Climb(boolean_T rtu_Gamepad_Start, boolean_T
  rtu_Gamepad_Back, boolean_T rtu_Gamepad_RB, boolean_T rtu_Gamepad_POV_Up,
  boolean_T rtu_Gamepad_POV_Down, boolean_T rtu_Gamepad_POV_Left, boolean_T
  rtu_Gamepad_POV_Right, real_T rtu_Gamepad_Stick_Left_Y, real_T
  rtu_Gamepad_Stick_Right_Y, real_T rtu_Coral_Arm_Angle_Measured, boolean_T
  rtu_Algae_Limit_Switch, real_T *rty_State_ID, real_T
  *rty_Elevator_Height_Desired, real_T *rty_Coral_Arm_Angle_Desired, real_T
  *rty_Coral_Wheel_DC, uint8_T *rty_Set_Algae_Level, uint8_T
  *rty_Desired_Pipeline, DW_Reefscape_Chart_Robot_Cont_T *localDW)
{
  *rty_State_ID = 4.4;
  *rty_Desired_Pipeline = 0U;
  if (rtu_Gamepad_Start && (!rtu_Algae_Limit_Switch)) {
    localDW->is_End_Game_Climb = Robot_Contro_IN_NO_ACTIVE_CHILD;
    localDW->is_Elevator_CoralArm_CoralWheel = Robot_Control_IN_Coral_Pickup;
    localDW->is_Actions = Robot_C_IN_Coral_Pickup_Prepare;
    *rty_State_ID = 1.0;
    *rty_Elevator_Height_Desired = Elevator_Height_Prepare;
    *rty_Coral_Arm_Angle_Desired = -90.0;
    *rty_Desired_Pipeline = 1U;
    localDW->is_Coral_Pickup_Prepare = Robot_Contro_IN_Coral_Motor_Off;
    *rty_Coral_Wheel_DC = 0.0;
    localDW->is_Set_Level = Robot_Control_IN_None;
    localDW->Set_L1 = false;
    localDW->Set_L2 = false;
    localDW->Set_L3 = false;
    localDW->Set_L4 = false;
  } else if (rtu_Gamepad_Back) {
    if (rtu_Coral_Arm_Angle_Measured >= Coral_Arm_Angle_Start_Thresh) {
      localDW->is_End_Game_Climb = Robot_Contro_IN_NO_ACTIVE_CHILD;
      localDW->is_Elevator_CoralArm_CoralWheel = Robot_IN_Elevator_Height_Bottom;
      *rty_State_ID = 0.2;
      *rty_Elevator_Height_Desired = Elevator_Height_Bottom;
      *rty_Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
      *rty_Desired_Pipeline = 0U;
      localDW->is_Elevator_Height_Bottom = Robot_Contro_IN_Coral_Motor_Off;
      *rty_Coral_Wheel_DC = 0.0;
    } else {
      localDW->is_End_Game_Climb = Robot_Contro_IN_NO_ACTIVE_CHILD;
      localDW->is_Elevator_CoralArm_CoralWheel = R_IN_Elevator_Height_Bottom_pre;
      *rty_State_ID = 0.1;
      *rty_Elevator_Height_Desired = Elevator_Height_Bottom_Pre;
      *rty_Desired_Pipeline = 0U;
      localDW->is_Elevator_Height_Bottom_pre = Robot_Contro_IN_Coral_Motor_Off;
      *rty_Coral_Wheel_DC = 0.0;
    }
  } else if (rtu_Gamepad_POV_Up) {
    localDW->is_Elevator_CoralArm_CoralWheel = Robot_Control_IN_End_Game_Climb;
    *rty_State_ID = 4.4;
    *rty_Elevator_Height_Desired = Elevator_Height_End_Game;
    *rty_Coral_Arm_Angle_Desired = -90.0;
    *rty_Desired_Pipeline = 0U;
    localDW->is_End_Game_Climb = Robot_Contro_IN_Coral_Motor_Off;
    *rty_Coral_Wheel_DC = 0.0;
  } else if (rtu_Gamepad_POV_Down) {
    localDW->is_End_Game_Climb = Robot_Contro_IN_NO_ACTIVE_CHILD;
    localDW->is_Elevator_CoralArm_CoralWheel = Robot_Control_IN_Algae_Score;
    *rty_State_ID = 4.1;
    *rty_Elevator_Height_Desired = Elevator_Height_Algae_Score;
    *rty_Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
    *rty_Desired_Pipeline = 0U;
    localDW->is_Algae_Score = Robot_Contro_IN_Coral_Motor_Off;
    *rty_Coral_Wheel_DC = 0.0;
  } else if (rtu_Gamepad_POV_Left) {
    localDW->is_End_Game_Climb = Robot_Contro_IN_NO_ACTIVE_CHILD;
    localDW->is_Elevator_CoralArm_CoralWheel = Robot_Contr_IN_Algae_Pickup_Low;
    *rty_State_ID = 4.2;
    *rty_Elevator_Height_Desired = Elevator_Height_Algae_Low;
    *rty_Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
    *rty_Set_Algae_Level = 2U;
    *rty_Desired_Pipeline = 2U;
    localDW->is_Algae_Pickup_Low = Robot_Contro_IN_Coral_Motor_Off;
    *rty_Coral_Wheel_DC = 0.0;
  } else if (rtu_Gamepad_POV_Right) {
    localDW->is_End_Game_Climb = Robot_Contro_IN_NO_ACTIVE_CHILD;
    localDW->is_Elevator_CoralArm_CoralWheel = Robot_Cont_IN_Algae_Pickup_High;
    *rty_State_ID = 4.3;
    *rty_Elevator_Height_Desired = Elevator_Height_Algae_High;
    *rty_Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
    *rty_Set_Algae_Level = 3U;
    *rty_Desired_Pipeline = 2U;
    localDW->is_Algae_Pickup_High = Robot_Contro_IN_Coral_Motor_Off;
    *rty_Coral_Wheel_DC = 0.0;
  } else {
    *rty_Elevator_Height_Desired += rtu_Gamepad_Stick_Right_Y *
      Elevator_Height_Manual_Gain;
    *rty_Coral_Arm_Angle_Desired += rtu_Gamepad_Stick_Left_Y *
      Coral_Arm_Manual_Gain;
    if (localDW->is_End_Game_Climb == Robot_Control_IN_Coral_Eject) {
      if (localDW->timer >= Coral_Eject_Time) {
        localDW->is_End_Game_Climb = Robot_Contro_IN_Coral_Motor_Off;
        *rty_Coral_Wheel_DC = 0.0;
      } else {
        localDW->timer += 0.02;
      }

      /* case IN_Coral_Motor_Off: */
    } else if (rtu_Gamepad_RB) {
      localDW->is_End_Game_Climb = Robot_Control_IN_Coral_Eject;
      *rty_Coral_Wheel_DC = Coral_Motor_DC_Eject;
      localDW->timer = 0.0;
    }
  }
}

/* Function for Chart: '<S28>/Reefscape_Chart' */
static void Robot_Control_Set_Level_h(boolean_T rtu_Gamepad_B1_A, boolean_T
  rtu_Gamepad_B2_B, boolean_T rtu_Gamepad_B3_X, boolean_T rtu_Gamepad_B4_Y,
  DW_Reefscape_Chart_Robot_Cont_T *localDW)
{
  switch (localDW->is_Set_Level_n) {
   case Robot_Control_IN_L1:
    if ((rtu_Gamepad_B3_X || rtu_Gamepad_B2_B) || rtu_Gamepad_B4_Y) {
      if (rtu_Gamepad_B1_A) {
        localDW->is_Set_Level_n = Robot_Control_IN_L1;
        localDW->Set_L1 = true;
        localDW->Set_L2 = false;
        localDW->Set_L3 = false;
        localDW->Set_L4 = false;
      } else if (rtu_Gamepad_B3_X) {
        localDW->is_Set_Level_n = Robot_Control_IN_L2;
        localDW->Set_L1 = false;
        localDW->Set_L2 = true;
        localDW->Set_L3 = false;
        localDW->Set_L4 = false;
      } else if (rtu_Gamepad_B2_B) {
        localDW->is_Set_Level_n = Robot_Control_IN_L3;
        localDW->Set_L1 = false;
        localDW->Set_L2 = false;
        localDW->Set_L3 = true;
        localDW->Set_L4 = false;
      } else if (rtu_Gamepad_B4_Y) {
        localDW->is_Set_Level_n = Robot_Control_IN_L4;
        localDW->Set_L1 = false;
        localDW->Set_L2 = false;
        localDW->Set_L3 = false;
        localDW->Set_L4 = true;
      }
    }
    break;

   case Robot_Control_IN_L2:
    if ((rtu_Gamepad_B1_A || rtu_Gamepad_B2_B) || rtu_Gamepad_B4_Y) {
      if (rtu_Gamepad_B1_A) {
        localDW->is_Set_Level_n = Robot_Control_IN_L1;
        localDW->Set_L1 = true;
        localDW->Set_L2 = false;
        localDW->Set_L3 = false;
        localDW->Set_L4 = false;
      } else if (rtu_Gamepad_B3_X) {
        localDW->is_Set_Level_n = Robot_Control_IN_L2;
        localDW->Set_L1 = false;
        localDW->Set_L2 = true;
        localDW->Set_L3 = false;
        localDW->Set_L4 = false;
      } else if (rtu_Gamepad_B2_B) {
        localDW->is_Set_Level_n = Robot_Control_IN_L3;
        localDW->Set_L1 = false;
        localDW->Set_L2 = false;
        localDW->Set_L3 = true;
        localDW->Set_L4 = false;
      } else if (rtu_Gamepad_B4_Y) {
        localDW->is_Set_Level_n = Robot_Control_IN_L4;
        localDW->Set_L1 = false;
        localDW->Set_L2 = false;
        localDW->Set_L3 = false;
        localDW->Set_L4 = true;
      }
    }
    break;

   case Robot_Control_IN_L3:
    if ((rtu_Gamepad_B1_A || rtu_Gamepad_B3_X) || rtu_Gamepad_B4_Y) {
      if (rtu_Gamepad_B1_A) {
        localDW->is_Set_Level_n = Robot_Control_IN_L1;
        localDW->Set_L1 = true;
        localDW->Set_L2 = false;
        localDW->Set_L3 = false;
        localDW->Set_L4 = false;
      } else if (rtu_Gamepad_B3_X) {
        localDW->is_Set_Level_n = Robot_Control_IN_L2;
        localDW->Set_L1 = false;
        localDW->Set_L2 = true;
        localDW->Set_L3 = false;
        localDW->Set_L4 = false;
      } else if (rtu_Gamepad_B2_B) {
        localDW->is_Set_Level_n = Robot_Control_IN_L3;
        localDW->Set_L1 = false;
        localDW->Set_L2 = false;
        localDW->Set_L3 = true;
        localDW->Set_L4 = false;
      } else if (rtu_Gamepad_B4_Y) {
        localDW->is_Set_Level_n = Robot_Control_IN_L4;
        localDW->Set_L1 = false;
        localDW->Set_L2 = false;
        localDW->Set_L3 = false;
        localDW->Set_L4 = true;
      }
    }
    break;

   case Robot_Control_IN_L4:
    if ((rtu_Gamepad_B1_A || rtu_Gamepad_B3_X) || rtu_Gamepad_B2_B) {
      if (rtu_Gamepad_B1_A) {
        localDW->is_Set_Level_n = Robot_Control_IN_L1;
        localDW->Set_L1 = true;
        localDW->Set_L2 = false;
        localDW->Set_L3 = false;
        localDW->Set_L4 = false;
      } else if (rtu_Gamepad_B3_X) {
        localDW->is_Set_Level_n = Robot_Control_IN_L2;
        localDW->Set_L1 = false;
        localDW->Set_L2 = true;
        localDW->Set_L3 = false;
        localDW->Set_L4 = false;
      } else if (rtu_Gamepad_B2_B) {
        localDW->is_Set_Level_n = Robot_Control_IN_L3;
        localDW->Set_L1 = false;
        localDW->Set_L2 = false;
        localDW->Set_L3 = true;
        localDW->Set_L4 = false;
      } else if (rtu_Gamepad_B4_Y) {
        localDW->is_Set_Level_n = Robot_Control_IN_L4;
        localDW->Set_L1 = false;
        localDW->Set_L2 = false;
        localDW->Set_L3 = false;
        localDW->Set_L4 = true;
      }
    }
    break;

   default:
    /* case IN_None: */
    if (rtu_Gamepad_B1_A) {
      localDW->is_Set_Level_n = Robot_Control_IN_L1;
      localDW->Set_L1 = true;
      localDW->Set_L2 = false;
      localDW->Set_L3 = false;
      localDW->Set_L4 = false;
    } else if (rtu_Gamepad_B3_X) {
      localDW->is_Set_Level_n = Robot_Control_IN_L2;
      localDW->Set_L1 = false;
      localDW->Set_L2 = true;
      localDW->Set_L3 = false;
      localDW->Set_L4 = false;
    } else if (rtu_Gamepad_B2_B) {
      localDW->is_Set_Level_n = Robot_Control_IN_L3;
      localDW->Set_L1 = false;
      localDW->Set_L2 = false;
      localDW->Set_L3 = true;
      localDW->Set_L4 = false;
    } else if (rtu_Gamepad_B4_Y) {
      localDW->is_Set_Level_n = Robot_Control_IN_L4;
      localDW->Set_L1 = false;
      localDW->Set_L2 = false;
      localDW->Set_L3 = false;
      localDW->Set_L4 = true;
    }
    break;
  }
}

/* Function for Chart: '<S28>/Reefscape_Chart' */
static void Ro_Elevator_CoralArm_CoralWheel(uint8_T rtu_GameState, boolean_T
  rtu_Gamepad_B1_A, boolean_T rtu_Gamepad_B2_B, boolean_T rtu_Gamepad_B3_X,
  boolean_T rtu_Gamepad_B4_Y, boolean_T rtu_Gamepad_Start, boolean_T
  rtu_Gamepad_Back, boolean_T rtu_Gamepad_RB, boolean_T rtu_Gamepad_POV_Up,
  boolean_T rtu_Gamepad_POV_Down, boolean_T rtu_Gamepad_POV_Left, boolean_T
  rtu_Gamepad_POV_Right, real_T rtu_Gamepad_Stick_Left_Y, real_T
  rtu_Gamepad_Stick_Right_Y, real_T rtu_Elevator_Height_Measured, real_T
  rtu_Coral_Arm_Angle_Measured, real_T rtu_Coral_TOF_Distance, boolean_T
  rtu_Coral_Limit_Switch, boolean_T rtu_Algae_Limit_Switch, boolean_T
  rtu_AT_On_Target, real_T *rty_State_ID, real_T *rty_Elevator_Height_Desired,
  real_T *rty_Coral_Arm_Angle_Desired, real_T *rty_Coral_Wheel_DC, boolean_T
  *rty_Elevator_LowerPickup_Reset, boolean_T *rty_Coral_Pickup_Lower_Wait_Sta,
  uint16_T *rty_Set_Coral_Level, uint8_T *rty_Set_Algae_Level, boolean_T
  *rty_Coral_Score, uint8_T *rty_Desired_Pipeline,
  DW_Reefscape_Chart_Robot_Cont_T *localDW)
{
  switch (localDW->is_Elevator_CoralArm_CoralWheel) {
   case Robot_Cont_IN_Algae_Pickup_High:
    Robot_Control_Algae_Pickup_High(rtu_Gamepad_Start, rtu_Gamepad_Back,
      rtu_Gamepad_RB, rtu_Gamepad_POV_Up, rtu_Gamepad_POV_Down,
      rtu_Gamepad_POV_Left, rtu_Gamepad_POV_Right, rtu_Gamepad_Stick_Left_Y,
      rtu_Gamepad_Stick_Right_Y, rtu_Coral_Arm_Angle_Measured,
      rtu_Algae_Limit_Switch, rty_State_ID, rty_Elevator_Height_Desired,
      rty_Coral_Arm_Angle_Desired, rty_Coral_Wheel_DC, rty_Set_Algae_Level,
      rty_Desired_Pipeline, localDW);
    break;

   case Robot_Contr_IN_Algae_Pickup_Low:
    Robot_Control_Algae_Pickup_Low(rtu_Gamepad_Start, rtu_Gamepad_Back,
      rtu_Gamepad_RB, rtu_Gamepad_POV_Up, rtu_Gamepad_POV_Down,
      rtu_Gamepad_POV_Left, rtu_Gamepad_POV_Right, rtu_Gamepad_Stick_Left_Y,
      rtu_Gamepad_Stick_Right_Y, rtu_Coral_Arm_Angle_Measured,
      rtu_Algae_Limit_Switch, rty_State_ID, rty_Elevator_Height_Desired,
      rty_Coral_Arm_Angle_Desired, rty_Coral_Wheel_DC, rty_Set_Algae_Level,
      rty_Desired_Pipeline, localDW);
    break;

   case Robot_Control_IN_Algae_Score:
    *rty_State_ID = 4.1;
    *rty_Desired_Pipeline = 0U;
    if (rtu_Gamepad_Start && (!rtu_Algae_Limit_Switch)) {
      localDW->is_Algae_Score = Robot_Contro_IN_NO_ACTIVE_CHILD;
      localDW->is_Elevator_CoralArm_CoralWheel = Robot_Control_IN_Coral_Pickup;
      localDW->is_Actions = Robot_C_IN_Coral_Pickup_Prepare;
      *rty_State_ID = 1.0;
      *rty_Elevator_Height_Desired = Elevator_Height_Prepare;
      *rty_Coral_Arm_Angle_Desired = -90.0;
      *rty_Desired_Pipeline = 1U;
      localDW->is_Coral_Pickup_Prepare = Robot_Contro_IN_Coral_Motor_Off;
      *rty_Coral_Wheel_DC = 0.0;
      localDW->is_Set_Level = Robot_Control_IN_None;
      localDW->Set_L1 = false;
      localDW->Set_L2 = false;
      localDW->Set_L3 = false;
      localDW->Set_L4 = false;
    } else if (rtu_Gamepad_Back) {
      if (rtu_Coral_Arm_Angle_Measured >= Coral_Arm_Angle_Start_Thresh) {
        localDW->is_Algae_Score = Robot_Contro_IN_NO_ACTIVE_CHILD;
        localDW->is_Elevator_CoralArm_CoralWheel =
          Robot_IN_Elevator_Height_Bottom;
        *rty_State_ID = 0.2;
        *rty_Elevator_Height_Desired = Elevator_Height_Bottom;
        *rty_Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
        *rty_Desired_Pipeline = 0U;
        localDW->is_Elevator_Height_Bottom = Robot_Contro_IN_Coral_Motor_Off;
        *rty_Coral_Wheel_DC = 0.0;
      } else {
        localDW->is_Algae_Score = Robot_Contro_IN_NO_ACTIVE_CHILD;
        localDW->is_Elevator_CoralArm_CoralWheel =
          R_IN_Elevator_Height_Bottom_pre;
        *rty_State_ID = 0.1;
        *rty_Elevator_Height_Desired = Elevator_Height_Bottom_Pre;
        *rty_Desired_Pipeline = 0U;
        localDW->is_Elevator_Height_Bottom_pre = Robot_Contro_IN_Coral_Motor_Off;
        *rty_Coral_Wheel_DC = 0.0;
      }
    } else if (rtu_Gamepad_POV_Up) {
      localDW->is_Algae_Score = Robot_Contro_IN_NO_ACTIVE_CHILD;
      localDW->is_Elevator_CoralArm_CoralWheel = Robot_Control_IN_End_Game_Climb;
      *rty_State_ID = 4.4;
      *rty_Elevator_Height_Desired = Elevator_Height_End_Game;
      *rty_Coral_Arm_Angle_Desired = -90.0;
      *rty_Desired_Pipeline = 0U;
      localDW->is_End_Game_Climb = Robot_Contro_IN_Coral_Motor_Off;
      *rty_Coral_Wheel_DC = 0.0;
    } else if (rtu_Gamepad_POV_Down) {
      localDW->is_Elevator_CoralArm_CoralWheel = Robot_Control_IN_Algae_Score;
      *rty_State_ID = 4.1;
      *rty_Elevator_Height_Desired = Elevator_Height_Algae_Score;
      *rty_Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
      *rty_Desired_Pipeline = 0U;
      localDW->is_Algae_Score = Robot_Contro_IN_Coral_Motor_Off;
      *rty_Coral_Wheel_DC = 0.0;
    } else if (rtu_Gamepad_POV_Left) {
      localDW->is_Algae_Score = Robot_Contro_IN_NO_ACTIVE_CHILD;
      localDW->is_Elevator_CoralArm_CoralWheel = Robot_Contr_IN_Algae_Pickup_Low;
      *rty_State_ID = 4.2;
      *rty_Elevator_Height_Desired = Elevator_Height_Algae_Low;
      *rty_Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
      *rty_Set_Algae_Level = 2U;
      *rty_Desired_Pipeline = 2U;
      localDW->is_Algae_Pickup_Low = Robot_Contro_IN_Coral_Motor_Off;
      *rty_Coral_Wheel_DC = 0.0;
    } else if (rtu_Gamepad_POV_Right) {
      localDW->is_Algae_Score = Robot_Contro_IN_NO_ACTIVE_CHILD;
      localDW->is_Elevator_CoralArm_CoralWheel = Robot_Cont_IN_Algae_Pickup_High;
      *rty_State_ID = 4.3;
      *rty_Elevator_Height_Desired = Elevator_Height_Algae_High;
      *rty_Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
      *rty_Set_Algae_Level = 3U;
      *rty_Desired_Pipeline = 2U;
      localDW->is_Algae_Pickup_High = Robot_Contro_IN_Coral_Motor_Off;
      *rty_Coral_Wheel_DC = 0.0;
    } else {
      *rty_Elevator_Height_Desired += rtu_Gamepad_Stick_Right_Y *
        Elevator_Height_Manual_Gain;
      *rty_Coral_Arm_Angle_Desired += rtu_Gamepad_Stick_Left_Y *
        Coral_Arm_Manual_Gain;
      if (localDW->is_Algae_Score == Robot_Control_IN_Coral_Eject) {
        if (localDW->timer >= Coral_Eject_Time) {
          localDW->is_Algae_Score = Robot_Contro_IN_Coral_Motor_Off;
          *rty_Coral_Wheel_DC = 0.0;
        } else {
          localDW->timer += 0.02;
        }

        /* case IN_Coral_Motor_Off: */
      } else if (rtu_Gamepad_RB) {
        localDW->is_Algae_Score = Robot_Control_IN_Coral_Eject;
        *rty_Coral_Wheel_DC = Coral_Motor_DC_Eject;
        localDW->timer = 0.0;
      }
    }
    break;

   case Robot_Control_IN_Coral:
    Robot_Control_Coral(rtu_GameState, rtu_Gamepad_B1_A, rtu_Gamepad_B2_B,
                        rtu_Gamepad_B3_X, rtu_Gamepad_B4_Y, rtu_Gamepad_Start,
                        rtu_Gamepad_Back, rtu_Gamepad_RB, rtu_Gamepad_POV_Up,
                        rtu_Gamepad_POV_Down, rtu_Gamepad_POV_Left,
                        rtu_Gamepad_POV_Right, rtu_Gamepad_Stick_Left_Y,
                        rtu_Gamepad_Stick_Right_Y, rtu_Elevator_Height_Measured,
                        rtu_Coral_Arm_Angle_Measured, rtu_Coral_Limit_Switch,
                        rtu_Algae_Limit_Switch, rtu_AT_On_Target, rty_State_ID,
                        rty_Elevator_Height_Desired, rty_Coral_Arm_Angle_Desired,
                        rty_Coral_Wheel_DC, rty_Set_Coral_Level,
                        rty_Set_Algae_Level, rty_Coral_Score,
                        rty_Desired_Pipeline, localDW);
    break;

   case Robot_Control_IN_Coral_Pickup:
    Robot_Control_Coral_Pickup(rtu_Gamepad_B1_A, rtu_Gamepad_B2_B,
      rtu_Gamepad_B3_X, rtu_Gamepad_B4_Y, rtu_Gamepad_Start, rtu_Gamepad_Back,
      rtu_Gamepad_RB, rtu_Gamepad_POV_Up, rtu_Gamepad_POV_Down,
      rtu_Gamepad_POV_Left, rtu_Gamepad_POV_Right, rtu_Gamepad_Stick_Left_Y,
      rtu_Gamepad_Stick_Right_Y, rtu_Elevator_Height_Measured,
      rtu_Coral_Arm_Angle_Measured, rtu_Coral_TOF_Distance,
      rtu_Coral_Limit_Switch, rtu_Algae_Limit_Switch, rty_State_ID,
      rty_Elevator_Height_Desired, rty_Coral_Arm_Angle_Desired,
      rty_Coral_Wheel_DC, rty_Elevator_LowerPickup_Reset,
      rty_Coral_Pickup_Lower_Wait_Sta, rty_Set_Algae_Level, rty_Desired_Pipeline,
      localDW);
    break;

   case Robot_IN_Elevator_Height_Bottom:
    Robot_Co_Elevator_Height_Bottom(rtu_Gamepad_Start, rtu_Gamepad_Back,
      rtu_Gamepad_RB, rtu_Gamepad_POV_Up, rtu_Gamepad_POV_Down,
      rtu_Gamepad_POV_Left, rtu_Gamepad_POV_Right, rtu_Gamepad_Stick_Left_Y,
      rtu_Gamepad_Stick_Right_Y, rtu_Coral_Arm_Angle_Measured,
      rtu_Algae_Limit_Switch, rty_State_ID, rty_Elevator_Height_Desired,
      rty_Coral_Arm_Angle_Desired, rty_Coral_Wheel_DC, rty_Set_Algae_Level,
      rty_Desired_Pipeline, localDW);
    break;

   case R_IN_Elevator_Height_Bottom_pre:
    Robo_Elevator_Height_Bottom_pre(rtu_Gamepad_Start, rtu_Gamepad_Back,
      rtu_Gamepad_RB, rtu_Gamepad_POV_Up, rtu_Gamepad_POV_Down,
      rtu_Gamepad_POV_Left, rtu_Gamepad_POV_Right, rtu_Gamepad_Stick_Left_Y,
      rtu_Gamepad_Stick_Right_Y, rtu_Elevator_Height_Measured,
      rtu_Coral_Arm_Angle_Measured, rtu_Algae_Limit_Switch, rty_State_ID,
      rty_Elevator_Height_Desired, rty_Coral_Arm_Angle_Desired,
      rty_Coral_Wheel_DC, rty_Set_Algae_Level, rty_Desired_Pipeline, localDW);
    break;

   case Robot_Control_IN_End_Game_Climb:
    Robot_Control_End_Game_Climb(rtu_Gamepad_Start, rtu_Gamepad_Back,
      rtu_Gamepad_RB, rtu_Gamepad_POV_Up, rtu_Gamepad_POV_Down,
      rtu_Gamepad_POV_Left, rtu_Gamepad_POV_Right, rtu_Gamepad_Stick_Left_Y,
      rtu_Gamepad_Stick_Right_Y, rtu_Coral_Arm_Angle_Measured,
      rtu_Algae_Limit_Switch, rty_State_ID, rty_Elevator_Height_Desired,
      rty_Coral_Arm_Angle_Desired, rty_Coral_Wheel_DC, rty_Set_Algae_Level,
      rty_Desired_Pipeline, localDW);
    break;

   case Robot_Control_IN_Start:
    *rty_State_ID = 0.0;
    *rty_Desired_Pipeline = 0U;
    if ((((rtu_Coral_Limit_Switch && (localDW->Set_L1)) || (localDW->Set_L2)) ||
         (localDW->Set_L3)) || (localDW->Set_L4)) {
      localDW->is_Set_Level_n = Robot_Contro_IN_NO_ACTIVE_CHILD;
      localDW->is_Elevator_CoralArm_CoralWheel = Robot_Control_IN_Coral;
      localDW->is_Coral = Robot_C_IN_Coral_Score_Position;
      enter_internal_Coral_Score_Posi(rtu_Gamepad_B1_A, rtu_Gamepad_B2_B,
        rtu_Gamepad_B3_X, rtu_Gamepad_B4_Y, rtu_Gamepad_Stick_Left_Y,
        rtu_Gamepad_Stick_Right_Y, rty_State_ID, rty_Elevator_Height_Desired,
        rty_Coral_Arm_Angle_Desired, rty_Set_Coral_Level, localDW);
    } else if (!rtu_Coral_Limit_Switch) {
      if (rtu_Algae_Limit_Switch) {
        localDW->is_Set_Level_n = Robot_Contro_IN_NO_ACTIVE_CHILD;
        localDW->is_Elevator_CoralArm_CoralWheel = Robot_Control_IN_Algae_Score;
        *rty_State_ID = 4.1;
        *rty_Elevator_Height_Desired = Elevator_Height_Algae_Score;
        *rty_Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
        *rty_Desired_Pipeline = 0U;
        localDW->is_Algae_Score = Robot_Contro_IN_Coral_Motor_Off;
        *rty_Coral_Wheel_DC = 0.0;
      } else {
        localDW->is_Set_Level_n = Robot_Contro_IN_NO_ACTIVE_CHILD;
        localDW->is_Elevator_CoralArm_CoralWheel =
          Robot_IN_Elevator_Height_Bottom;
        *rty_State_ID = 0.2;
        *rty_Elevator_Height_Desired = Elevator_Height_Bottom;
        *rty_Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
        *rty_Desired_Pipeline = 0U;
        localDW->is_Elevator_Height_Bottom = Robot_Contro_IN_Coral_Motor_Off;
        *rty_Coral_Wheel_DC = 0.0;
      }
    } else {
      Robot_Control_Set_Level_h(rtu_Gamepad_B1_A, rtu_Gamepad_B2_B,
        rtu_Gamepad_B3_X, rtu_Gamepad_B4_Y, localDW);
    }
    break;

   default:
    /* case IN_Start_Angle: */
    *rty_State_ID = 2.0;
    if (rtu_Coral_Arm_Angle_Measured > Coral_Arm_Angle_Start_Thresh) {
      localDW->is_Elevator_CoralArm_CoralWheel = Robot_Control_IN_Coral;
      localDW->is_Coral = Robot_C_IN_Coral_Score_Position;
      enter_internal_Coral_Score_Posi(rtu_Gamepad_B1_A, rtu_Gamepad_B2_B,
        rtu_Gamepad_B3_X, rtu_Gamepad_B4_Y, rtu_Gamepad_Stick_Left_Y,
        rtu_Gamepad_Stick_Right_Y, rty_State_ID, rty_Elevator_Height_Desired,
        rty_Coral_Arm_Angle_Desired, rty_Set_Coral_Level, localDW);
    }
    break;
  }
}

/*
 * System initialize for atomic system:
 *    '<S28>/Reefscape_Chart'
 *    '<S395>/Reefscape_Chart'
 */
void Robot_Cont_Reefscape_Chart_Init(real_T *rty_State_ID, real_T
  *rty_Elevator_Height_Desired, real_T *rty_Coral_Arm_Angle_Desired, real_T
  *rty_Coral_Wheel_DC, real_T *rty_Algae_Wheel_Outside_DC, real_T
  *rty_Algae_Wheel_Inside_DC, boolean_T *rty_Elevator_LowerPickup_Reset,
  boolean_T *rty_Coral_Pickup_Lower_Wait_Sta, uint16_T *rty_Set_Coral_Level,
  uint8_T *rty_Set_Algae_Level, boolean_T *rty_Coral_Score, uint8_T
  *rty_Desired_Pipeline)
{
  *rty_State_ID = 0.0;
  *rty_Elevator_Height_Desired = 0.0;
  *rty_Coral_Arm_Angle_Desired = 0.0;
  *rty_Coral_Wheel_DC = 0.0;
  *rty_Algae_Wheel_Outside_DC = 0.0;
  *rty_Algae_Wheel_Inside_DC = 0.0;
  *rty_Elevator_LowerPickup_Reset = false;
  *rty_Coral_Pickup_Lower_Wait_Sta = false;
  *rty_Set_Coral_Level = 0U;
  *rty_Set_Algae_Level = 0U;
  *rty_Coral_Score = false;
  *rty_Desired_Pipeline = 0U;
}

/*
 * System reset for atomic system:
 *    '<S28>/Reefscape_Chart'
 *    '<S395>/Reefscape_Chart'
 */
void Robot_Con_Reefscape_Chart_Reset(real_T *rty_State_ID, real_T
  *rty_Elevator_Height_Desired, real_T *rty_Coral_Arm_Angle_Desired, real_T
  *rty_Coral_Wheel_DC, real_T *rty_Algae_Wheel_Outside_DC, real_T
  *rty_Algae_Wheel_Inside_DC, boolean_T *rty_Elevator_LowerPickup_Reset,
  boolean_T *rty_Coral_Pickup_Lower_Wait_Sta, uint16_T *rty_Set_Coral_Level,
  uint8_T *rty_Set_Algae_Level, boolean_T *rty_Coral_Score, uint8_T
  *rty_Desired_Pipeline, DW_Reefscape_Chart_Robot_Cont_T *localDW)
{
  localDW->is_active_c5_Robot_Control = 0U;
  localDW->is_Elevator_CoralArm_CoralWheel = Robot_Contro_IN_NO_ACTIVE_CHILD;
  localDW->is_Algae_Pickup_High = Robot_Contro_IN_NO_ACTIVE_CHILD;
  localDW->is_Algae_Pickup_Low = Robot_Contro_IN_NO_ACTIVE_CHILD;
  localDW->is_Algae_Score = Robot_Contro_IN_NO_ACTIVE_CHILD;
  localDW->is_Coral = Robot_Contro_IN_NO_ACTIVE_CHILD;
  localDW->is_Coral_Eject = Robot_Contro_IN_NO_ACTIVE_CHILD;
  localDW->is_Level_2 = Robot_Contro_IN_NO_ACTIVE_CHILD;
  localDW->is_Level_3 = Robot_Contro_IN_NO_ACTIVE_CHILD;
  localDW->is_Level_4_Auto = Robot_Contro_IN_NO_ACTIVE_CHILD;
  localDW->is_Level_4_Teleop = Robot_Contro_IN_NO_ACTIVE_CHILD;
  localDW->is_Coral_Score_Position = Robot_Contro_IN_NO_ACTIVE_CHILD;
  localDW->is_Actions = Robot_Contro_IN_NO_ACTIVE_CHILD;
  localDW->is_Coral_Pickup_Prepare = Robot_Contro_IN_NO_ACTIVE_CHILD;
  localDW->is_Set_Level = Robot_Contro_IN_NO_ACTIVE_CHILD;
  localDW->is_Elevator_Height_Bottom = Robot_Contro_IN_NO_ACTIVE_CHILD;
  localDW->is_Elevator_Height_Bottom_pre = Robot_Contro_IN_NO_ACTIVE_CHILD;
  localDW->is_End_Game_Climb = Robot_Contro_IN_NO_ACTIVE_CHILD;
  localDW->is_Set_Level_n = Robot_Contro_IN_NO_ACTIVE_CHILD;
  localDW->is_Algae_Wheels = Robot_Contro_IN_NO_ACTIVE_CHILD;
  localDW->is_AT_On_Target_Timer = Robot_Contro_IN_NO_ACTIVE_CHILD;
  *rty_State_ID = 0.0;
  *rty_Elevator_Height_Desired = 0.0;
  *rty_Coral_Arm_Angle_Desired = 0.0;
  *rty_Coral_Wheel_DC = 0.0;
  localDW->timer = 0.0;
  *rty_Algae_Wheel_Outside_DC = 0.0;
  *rty_Algae_Wheel_Inside_DC = 0.0;
  *rty_Elevator_LowerPickup_Reset = false;
  localDW->Set_L1 = false;
  localDW->Set_L2 = false;
  localDW->Set_L3 = false;
  localDW->Set_L4 = false;
  *rty_Coral_Pickup_Lower_Wait_Sta = false;
  *rty_Set_Coral_Level = 0U;
  *rty_Set_Algae_Level = 0U;
  localDW->timer_robot_target = 0.0;
  *rty_Coral_Score = false;
  *rty_Desired_Pipeline = 0U;
}

/*
 * Output and update for atomic system:
 *    '<S28>/Reefscape_Chart'
 *    '<S395>/Reefscape_Chart'
 */
void Robot_Control_Reefscape_Chart(uint8_T rtu_GameState, boolean_T
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
  DW_Reefscape_Chart_Robot_Cont_T *localDW)
{
  /* Chart: '<S28>/Reefscape_Chart' */
  if (localDW->is_active_c5_Robot_Control == 0U) {
    localDW->is_active_c5_Robot_Control = 1U;
    localDW->is_Elevator_CoralArm_CoralWheel = Robot_Control_IN_Start;
    *rty_State_ID = 0.0;
    *rty_Elevator_Height_Desired = Elevator_Height_Bottom;
    *rty_Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
    *rty_Coral_Wheel_DC = 0.0;
    *rty_Desired_Pipeline = 0U;
    localDW->is_Set_Level_n = Robot_Control_IN_None;
    localDW->Set_L1 = false;
    localDW->Set_L2 = false;
    localDW->Set_L3 = false;
    localDW->Set_L4 = false;
    localDW->is_Algae_Wheels = Robot_Control_IN_Off;
    *rty_Algae_Wheel_Outside_DC = 0.0;
    *rty_Algae_Wheel_Inside_DC = 0.0;
    localDW->is_AT_On_Target_Timer = Robot_Control_IN_Off_Target;
    localDW->timer_robot_target = 0.0;
  } else {
    Ro_Elevator_CoralArm_CoralWheel(rtu_GameState, rtu_Gamepad_B1_A,
      rtu_Gamepad_B2_B, rtu_Gamepad_B3_X, rtu_Gamepad_B4_Y, rtu_Gamepad_Start,
      rtu_Gamepad_Back, rtu_Gamepad_RB, rtu_Gamepad_POV_Up, rtu_Gamepad_POV_Down,
      rtu_Gamepad_POV_Left, rtu_Gamepad_POV_Right, rtu_Gamepad_Stick_Left_Y,
      rtu_Gamepad_Stick_Right_Y, rtu_Elevator_Height_Measured,
      rtu_Coral_Arm_Angle_Measured, rtu_Coral_TOF_Distance,
      rtu_Coral_Limit_Switch, rtu_Algae_Limit_Switch, rtu_AT_On_Target,
      rty_State_ID, rty_Elevator_Height_Desired, rty_Coral_Arm_Angle_Desired,
      rty_Coral_Wheel_DC, rty_Elevator_LowerPickup_Reset,
      rty_Coral_Pickup_Lower_Wait_Sta, rty_Set_Coral_Level, rty_Set_Algae_Level,
      rty_Coral_Score, rty_Desired_Pipeline, localDW);
    switch (localDW->is_Algae_Wheels) {
     case Robot_Control_IN_Algae_Hold:
      *rty_Algae_Wheel_Outside_DC = Algae_Hold_DC;
      *rty_Algae_Wheel_Inside_DC = Algae_Hold_DC;
      if (rtu_Gamepad_RT) {
        localDW->is_Algae_Wheels = Robot_Control_IN_Algae_Push_Out;
        *rty_Algae_Wheel_Outside_DC = Algae_Push_Out_DC;
        *rty_Algae_Wheel_Inside_DC = Algae_Push_Out_DC;
        localDW->timer = 0.0;
      }
      break;

     case Robot_Control_IN_Algae_Pull_In:
      *rty_Algae_Wheel_Outside_DC = Algae_Pull_In_DC;
      *rty_Algae_Wheel_Inside_DC = Algae_Pull_In_DC;
      if (rtu_Algae_Limit_Switch) {
        localDW->is_Algae_Wheels = Robot_Control_IN_Algae_Hold;
        *rty_Algae_Wheel_Outside_DC = Algae_Hold_DC;
        *rty_Algae_Wheel_Inside_DC = Algae_Hold_DC;
      } else if (rtu_Gamepad_RT) {
        localDW->is_Algae_Wheels = Robot_Control_IN_Algae_Push_Out;
        *rty_Algae_Wheel_Outside_DC = Algae_Push_Out_DC;
        *rty_Algae_Wheel_Inside_DC = Algae_Push_Out_DC;
        localDW->timer = 0.0;
      }
      break;

     case Robot_Control_IN_Algae_Push_Out:
      *rty_Algae_Wheel_Outside_DC = Algae_Push_Out_DC;
      *rty_Algae_Wheel_Inside_DC = Algae_Push_Out_DC;
      if (localDW->timer >= Algae_Eject_Time) {
        localDW->is_Algae_Wheels = Robot_Control_IN_Off;
        *rty_Algae_Wheel_Outside_DC = 0.0;
        *rty_Algae_Wheel_Inside_DC = 0.0;
      } else if ((rtu_Gamepad_LT || rtu_Gamepad_POV_Left) ||
                 rtu_Gamepad_POV_Right) {
        localDW->is_Algae_Wheels = Robot_Control_IN_Algae_Pull_In;
        *rty_Algae_Wheel_Outside_DC = Algae_Pull_In_DC;
        *rty_Algae_Wheel_Inside_DC = Algae_Pull_In_DC;
      } else {
        localDW->timer += 0.02;
      }
      break;

     default:
      /* case IN_Off: */
      *rty_Algae_Wheel_Outside_DC = 0.0;
      *rty_Algae_Wheel_Inside_DC = 0.0;
      if (rtu_Algae_Limit_Switch) {
        localDW->is_Algae_Wheels = Robot_Control_IN_Algae_Hold;
        *rty_Algae_Wheel_Outside_DC = Algae_Hold_DC;
        *rty_Algae_Wheel_Inside_DC = Algae_Hold_DC;
      } else if ((rtu_Gamepad_LT || rtu_Gamepad_POV_Left) ||
                 rtu_Gamepad_POV_Right) {
        localDW->is_Algae_Wheels = Robot_Control_IN_Algae_Pull_In;
        *rty_Algae_Wheel_Outside_DC = Algae_Pull_In_DC;
        *rty_Algae_Wheel_Inside_DC = Algae_Pull_In_DC;
      } else if (rtu_Gamepad_RT) {
        localDW->is_Algae_Wheels = Robot_Control_IN_Algae_Push_Out;
        *rty_Algae_Wheel_Outside_DC = Algae_Push_Out_DC;
        *rty_Algae_Wheel_Inside_DC = Algae_Push_Out_DC;
        localDW->timer = 0.0;
      }
      break;
    }

    if (localDW->is_AT_On_Target_Timer == Robot_Control_IN_Off_Target) {
      if (rtu_AT_On_Target) {
        localDW->is_AT_On_Target_Timer = Robot_Control_IN_On_Target;
        localDW->timer_robot_target = 0.02;
      }

      /* case IN_On_Target: */
    } else if (!rtu_AT_On_Target) {
      localDW->is_AT_On_Target_Timer = Robot_Control_IN_Off_Target;
      localDW->timer_robot_target = 0.0;
    } else {
      localDW->timer_robot_target += 0.02;
    }
  }

  /* End of Chart: '<S28>/Reefscape_Chart' */
}

/* Function for Chart: '<S25>/Reefscape_Auto_Steps' */
static void Robot_Control_Left_and_Right(const boolean_T
  *Robot_Reached_Destination, const uint8_T *MultiportSwitch, const uint8_T
  *MultiportSwitch1, const uint8_T *Switch6, const uint8_T *Switch14, const
  boolean_T *UnitDelay1)
{
  switch (Robot_Control_DW.is_Left_and_Right) {
   case Robot_Control_IN_Back:
    Robot_Control_B.Gamepad_Back_out = false;
    Robot_Control_DW.is_Left_and_Right = Robot_Contro_IN_Wait_for_Teleop;
    Robot_Control_B.Auto_Step_ID = 9U;
    Robot_Control_B.Path_Enable = false;
    Robot_Control_B.Translation_Speed_g = 0.0;
    Robot_Control_B.Translation_Angle_l = 0.0;
    break;

   case Robot_Co_IN_Back_Up_from_Reef_1:
    Robot_Control_B.Auto_Step_ID = 3U;
    Robot_Control_B.Path_Enable = false;
    Robot_Control_B.Translation_Speed_g = Auto_Speed_Reef;
    Robot_Control_B.Translation_Angle_l = 3.1415926535897931;
    if (Robot_Control_DW.timer >= Auto_Backup_Time_Reef) {
      /* Inport: '<Root>/MatchTime' */
      if (Robot_Control_U.MatchTime <= MatchTime_Skip_Coral_Pickup) {
        Robot_Control_DW.is_Left_and_Right = R_IN_Path_to_Coral_Station_1_v3;
        Robot_Control_B.Auto_Step_ID = 20U;
        Robot_Control_B.Path_Enable = true;
        Robot_Control_B.Path_ID = *Switch14;
        Robot_Control_B.Translation_Speed_g = 0.0;
        Robot_Control_B.Translation_Angle_l = 0.0;
        Robot_Control_B.Gamepad_Back_out = true;
      } else {
        Robot_Control_DW.is_Left_and_Right = Robo_IN_Path_to_Coral_Station_1;
        Robot_Control_B.Auto_Step_ID = 4U;
        Robot_Control_B.Path_Enable = true;
        Robot_Control_B.Path_ID = *MultiportSwitch1;
        Robot_Control_B.Translation_Speed_g = 0.0;
        Robot_Control_B.Translation_Angle_l = 0.0;
        Robot_Control_B.Gamepad_Start_out = true;
      }
    } else {
      Robot_Control_DW.timer += 0.02;
    }
    break;

   case Robot_Co_IN_Back_Up_from_Reef_2:
    Robot_Control_B.Auto_Step_ID = 8U;
    Robot_Control_B.Path_Enable = false;
    Robot_Control_B.Translation_Speed_g = Auto_Speed_Reef;
    Robot_Control_B.Translation_Angle_l = 3.1415926535897931;
    if (Robot_Control_DW.timer >= Auto_Backup_Time_Reef) {
      Robot_Control_DW.is_Left_and_Right = Robot_Control_IN_Back;
      Robot_Control_B.Gamepad_Back_out = true;
    } else {
      Robot_Control_DW.timer += 0.02;
    }
    break;

   case Robo_IN_Path_to_Coral_Station_1:
    Robot_Control_B.Auto_Step_ID = 4U;
    Robot_Control_B.Path_Enable = true;
    Robot_Control_B.Translation_Speed_g = 0.0;
    Robot_Control_B.Translation_Angle_l = 0.0;
    if (*Robot_Reached_Destination) {
      Robot_Control_B.Gamepad_Start_out = false;
      Robot_Control_DW.is_Left_and_Right = Robo_IN_Wait_at_Coral_Station_1;
      Robot_Control_B.Auto_Step_ID = 5U;
      Robot_Control_B.Path_Enable = false;
      Robot_Control_B.Translation_Speed_g = Auto_Speed_Coral;
      Robot_Control_B.Translation_Angle_l = 3.1415926535897931;
    }
    break;

   case R_IN_Path_to_Coral_Station_1_v3:
    Robot_Control_B.Auto_Step_ID = 20U;
    Robot_Control_B.Path_Enable = true;
    Robot_Control_B.Translation_Speed_g = 0.0;
    Robot_Control_B.Translation_Angle_l = 0.0;
    if (*Robot_Reached_Destination) {
      Robot_Control_B.Gamepad_Back_out = false;
      Robot_Control_DW.is_Left_and_Right = Robot_Contro_IN_Wait_for_Teleop;
      Robot_Control_B.Auto_Step_ID = 9U;
      Robot_Control_B.Path_Enable = false;
    }
    break;

   case Robot_Control_IN_Path_to_Reef_1:
    Robot_Control_B.Auto_Step_ID = 1U;
    Robot_Control_B.Translation_Speed_g = 0.0;
    Robot_Control_B.Translation_Angle_l = 0.0;
    switch (Robot_Control_DW.is_Path_to_Reef_1) {
     case Robot_Control_IN_Drive:
      Robot_Control_B.Path_Enable = true;
      if (*Robot_Reached_Destination) {
        if (Robot_Control_DW.is_Drive == Robot_Control_IN_Raise_to_L4_e) {
          Robot_Control_B.Gamepad_B4_Y_out = false;
          Robot_Control_DW.is_Drive = Robot_Cont_IN_NO_ACTIVE_CHILD_g;
        } else {
          Robot_Control_DW.is_Drive = Robot_Cont_IN_NO_ACTIVE_CHILD_g;
        }

        Robot_Control_DW.is_Path_to_Reef_1 = Robot_Cont_IN_NO_ACTIVE_CHILD_g;
        Robot_Control_DW.is_Left_and_Right = Robot_Contro_IN_Score_at_Reef_1;
        Robot_Control_B.Auto_Step_ID = 2U;
        Robot_Control_B.Path_Enable = false;
        Robot_Control_B.Align_Left_d = true;
      } else {
        switch (Robot_Control_DW.is_Drive) {
         case Robot_Control_IN_Raise_to_L4_e:
          break;

         default:
          /* case IN_Stay_at_L2: */
          if (Robot_Control_DW.timer >= Auto_Path1_Delay_to_L4_Time) {
            Robot_Control_DW.is_Drive = Robot_Control_IN_Raise_to_L4_e;
            Robot_Control_B.Gamepad_B4_Y_out = true;
          } else {
            Robot_Control_DW.timer += 0.02;
          }
          break;
        }
      }
      break;

     case Robot_Control_IN_Raise_to_L2:
      Robot_Control_B.Path_Enable = false;
      if (Robot_Control_DW.timer >= Auto_Path1_Delay_to_L2_Time) {
        Robot_Control_B.Gamepad_B3_X_out = false;
        Robot_Control_DW.is_Path_to_Reef_1 = Robot_Control_IN_Drive;
        Robot_Control_B.Path_Enable = true;
        Robot_Control_B.Path_ID = *MultiportSwitch;
        Robot_Control_DW.is_Drive = Robot_Control_IN_Stay_at_L2;
        Robot_Control_DW.timer = 0.0;
      } else {
        Robot_Control_DW.timer += 0.02;
      }
      break;

     default:
      /* case IN_Start: */
      Robot_Control_B.Path_Enable = false;
      if (Robot_Control_DW.timer >= 0.04) {
        Robot_Control_DW.is_Path_to_Reef_1 = Robot_Control_IN_Raise_to_L2;
        Robot_Control_B.Gamepad_B3_X_out = true;
        Robot_Control_DW.timer = 0.0;
      } else {
        Robot_Control_DW.timer += 0.02;
      }
      break;
    }
    break;

   case Robot_Control_IN_Path_to_Reef_2:
    Robot_Control_B.Auto_Step_ID = 6U;
    Robot_Control_B.Path_Enable = true;
    Robot_Control_B.Translation_Speed_g = 0.0;
    Robot_Control_B.Translation_Angle_l = 0.0;
    if (Robot_Control_DW.is_Path_to_Reef_2 == Robot_Control_IN_Set_L4) {
      if (*Robot_Reached_Destination) {
        Robot_Control_B.Gamepad_B4_Y_out = false;
        Robot_Control_DW.is_Path_to_Reef_2 = Robot_Cont_IN_NO_ACTIVE_CHILD_g;
        Robot_Control_DW.is_Left_and_Right = Robot_Contro_IN_Score_at_Reef_2;
        Robot_Control_B.Auto_Step_ID = 7U;
        Robot_Control_B.Path_Enable = false;
        Robot_Control_B.Align_Left_d = true;
      }

      /* case IN_Timer_to_L4: */
    } else if (Robot_Control_DW.timer >= Auto_Path2_Delay_to_L4_Time) {
      Robot_Control_DW.is_Path_to_Reef_2 = Robot_Control_IN_Set_L4;
      Robot_Control_B.Gamepad_B4_Y_out = true;
    } else {
      Robot_Control_DW.timer += 0.02;
    }
    break;

   case Robot_Cont_IN_Path_to_Reef_2_v2:
    Robot_Control_B.Auto_Step_ID = 21U;
    Robot_Control_B.Path_Enable = true;
    Robot_Control_B.Translation_Speed_g = 0.0;
    Robot_Control_B.Translation_Angle_l = 0.0;
    if (Robot_Control_DW.is_Path_to_Reef_2_v2 == Robot_Control_IN_Back) {
      if (*Robot_Reached_Destination) {
        Robot_Control_B.Gamepad_Back_out = false;
        Robot_Control_DW.is_Path_to_Reef_2_v2 = Robot_Cont_IN_NO_ACTIVE_CHILD_g;
        Robot_Control_DW.is_Left_and_Right = Robot_Contro_IN_Wait_for_Teleop;
        Robot_Control_B.Auto_Step_ID = 9U;
        Robot_Control_B.Path_Enable = false;
      }

      /* case IN_L1: */
    } else if (Robot_Control_B.UnitDelay2 >= 2.1) {
      Robot_Control_B.Gamepad_B1_A_out = false;
      Robot_Control_DW.is_Path_to_Reef_2_v2 = Robot_Control_IN_Back;
      Robot_Control_B.Gamepad_Back_out = true;
    }
    break;

   case Robot_Contro_IN_Score_at_Reef_1:
    Robot_Control_B.Auto_Step_ID = 2U;
    Robot_Control_B.Path_Enable = false;
    Robot_Control_B.Translation_Speed_g = 0.0;
    Robot_Control_B.Translation_Angle_l = 0.0;
    if (*UnitDelay1) {
      Robot_Control_B.Align_Left_d = false;
      Robot_Control_DW.is_Left_and_Right = Robot_Co_IN_Back_Up_from_Reef_1;
      Robot_Control_B.Auto_Step_ID = 3U;
      Robot_Control_B.Translation_Speed_g = Auto_Speed_Reef;
      Robot_Control_B.Translation_Angle_l = 3.1415926535897931;
      Robot_Control_DW.timer = 0.0;
    }
    break;

   case Robot_Contro_IN_Score_at_Reef_2:
    Robot_Control_B.Auto_Step_ID = 7U;
    Robot_Control_B.Path_Enable = false;
    Robot_Control_B.Translation_Speed_g = 0.0;
    Robot_Control_B.Translation_Angle_l = 0.0;
    if (*UnitDelay1) {
      Robot_Control_B.Align_Left_d = false;
      Robot_Control_DW.is_Left_and_Right = Robot_Co_IN_Back_Up_from_Reef_2;
      Robot_Control_B.Auto_Step_ID = 8U;
      Robot_Control_B.Translation_Speed_g = Auto_Speed_Reef;
      Robot_Control_B.Translation_Angle_l = 3.1415926535897931;
      Robot_Control_DW.timer = 0.0;
    }
    break;

   case Robo_IN_Wait_at_Coral_Station_1:
    Robot_Control_B.Auto_Step_ID = 5U;
    Robot_Control_B.Path_Enable = false;
    Robot_Control_B.Translation_Speed_g = Auto_Speed_Coral;
    Robot_Control_B.Translation_Angle_l = 3.1415926535897931;

    /* Inport: '<Root>/Coral_TOF_Distance' */
    if (Robot_Control_U.Coral_TOF_Distance < Coral_Detect_Distance) {
      /* Inport: '<Root>/MatchTime' */
      if (Robot_Control_U.MatchTime <= MatchTime_Skip_Second_L4) {
        Robot_Control_DW.is_Left_and_Right = Robot_Cont_IN_Path_to_Reef_2_v2;
        Robot_Control_B.Auto_Step_ID = 21U;
        Robot_Control_B.Path_Enable = true;
        Robot_Control_B.Path_ID = *Switch6;
        Robot_Control_B.Translation_Speed_g = 0.0;
        Robot_Control_B.Translation_Angle_l = 0.0;
        Robot_Control_DW.is_Path_to_Reef_2_v2 = Robot_Control_IN_L1_g;
        Robot_Control_B.Gamepad_B1_A_out = true;
      } else {
        Robot_Control_DW.is_Left_and_Right = Robot_Control_IN_Path_to_Reef_2;
        Robot_Control_B.Auto_Step_ID = 6U;
        Robot_Control_B.Path_Enable = true;
        Robot_Control_B.Path_ID = *Switch6;
        Robot_Control_B.Translation_Speed_g = 0.0;
        Robot_Control_B.Translation_Angle_l = 0.0;
        Robot_Control_DW.is_Path_to_Reef_2 = Robot_Control_IN_Timer_to_L4;
        Robot_Control_DW.timer = 0.0;
      }
    }

    /* End of Inport: '<Root>/Coral_TOF_Distance' */
    break;

   default:
    /* case IN_Wait_for_Teleop: */
    Robot_Control_B.Auto_Step_ID = 9U;
    Robot_Control_B.Path_Enable = false;
    Robot_Control_B.Translation_Speed_g = 0.0;
    Robot_Control_B.Translation_Angle_l = 0.0;
    break;
  }
}

/* Model step function */
void Robot_Control_step(void)
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
  real_T rtb_Add2[2];
  real_T rtb_Minus_n[2];
  real_T rtb_Reshapey[2];
  real_T rtb_Abs1;
  real_T rtb_Abs2_p;
  real_T rtb_Add_fn;
  real_T rtb_Add_h5;
  real_T rtb_Algae_Wheel_Inside_DutyCycl;
  real_T rtb_Algae_Wheel_Outside_DutyCyc;
  real_T rtb_Coral_Wheel_DutyCycle_merge;
  real_T rtb_DeadZone;
  real_T rtb_Hypot_b;
  real_T rtb_Hypot_g5;
  real_T rtb_Init;
  real_T rtb_Integral_hv;
  real_T rtb_Integral_m;
  real_T rtb_Integral_p;
  real_T rtb_MatrixConcatenate_b_idx_0;
  real_T rtb_MatrixConcatenate_idx_0;
  real_T rtb_Merge1;
  real_T rtb_Modulation_Drv;
  real_T rtb_Optimized_Module_Angle;
  real_T rtb_Product2_a;
  real_T rtb_Product_hi;
  real_T rtb_Product_il;
  real_T rtb_Product_nq;
  real_T rtb_Product_nr;
  real_T rtb_Subtract1_a;
  real_T rtb_Subtract1_la;
  real_T rtb_Subtract_b2;
  real_T rtb_Subtract_ia;
  real_T rtb_Sum1_m;
  real_T rtb_Sum2_e;
  real_T rtb_Switch2_c;
  real_T rtb_Switch2_et;
  real_T rtb_Switch2_kn;
  real_T rtb_Switch2_n;
  real_T rtb_Switch5_a;
  real_T rtb_Switch_jz;
  real_T rtb_uDLookupTable_l;
  real_T u0;
  int32_T i;
  int32_T rtb_Bias1_p;
  int32_T rtb_Num_Segments;
  int32_T s210_iter;
  uint16_T s235_iter;
  int8_T rtAction;
  int8_T rtPrevAction;
  uint8_T MultiportSwitch1;
  uint8_T Switch14;
  uint8_T Switch6;
  uint8_T rtb_Desired_Pipeline;
  boolean_T Compare;
  boolean_T Compare_f;
  boolean_T Robot_Reached_Destination;
  boolean_T exitg1;
  boolean_T rtb_AND1;
  boolean_T rtb_AND4;
  boolean_T rtb_Compare_jp;
  boolean_T rtb_Disable_Wheels;
  boolean_T rtb_Is_Absolute_Steering;
  boolean_T rtb_Is_Absolute_Translation_g;
  boolean_T rtb_RelationalOperator_ci;
  boolean_T rtb_Reset_Wheel_Offsets;
  boolean_T rtb_UnitDelay_l;

  /* RelationalOperator: '<S124>/FixPt Relational Operator' incorporates:
   *  Inport: '<Root>/Joystick_Left_B11'
   *  UnitDelay: '<S124>/Delay Input1'
   *
   * Block description for '<S124>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Robot_Control_B.Button_Enable_Wheels = (Robot_Control_U.Joystick_Left_B11 >
    Robot_Control_DW.DelayInput1_DSTATE);

  /* RelationalOperator: '<S125>/FixPt Relational Operator' incorporates:
   *  Inport: '<Root>/Joystick_Left_B12'
   *  UnitDelay: '<S125>/Delay Input1'
   *
   * Block description for '<S125>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Robot_Control_B.Button_Reset_Wheel_Offsets =
    (Robot_Control_U.Joystick_Left_B12 > Robot_Control_DW.DelayInput1_DSTATE_e);

  /* RelationalOperator: '<S126>/FixPt Relational Operator' incorporates:
   *  Inport: '<Root>/Joystick_Left_B13'
   *  UnitDelay: '<S126>/Delay Input1'
   *
   * Block description for '<S126>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Robot_Control_B.Button_Disable_Wheels = (Robot_Control_U.Joystick_Left_B13 >
    Robot_Control_DW.DelayInput1_DSTATE_n);

  /* SignalConversion: '<S15>/Signal Copy1' incorporates:
   *  Inport: '<Root>/Joystick_Left_X'
   */
  Robot_Control_B.Drive_Joystick_X = Robot_Control_U.Joystick_Left_X;

  /* SignalConversion: '<S15>/Signal Copy2' incorporates:
   *  Inport: '<Root>/Joystick_Left_Y'
   */
  Robot_Control_B.Drive_Joystick_Y = Robot_Control_U.Joystick_Left_Y;

  /* SignalConversion: '<S15>/Signal Copy3' incorporates:
   *  Inport: '<Root>/Joystick_Left_Z'
   */
  Robot_Control_B.Drive_Joystick_Z = Robot_Control_U.Joystick_Left_Z;

  /* RelationalOperator: '<S115>/Compare' incorporates:
   *  Constant: '<S115>/Constant'
   *  Inport: '<Root>/Joystick_Left_POV'
   */
  Robot_Control_B.Drive_Joystick_Z_Mode = (Robot_Control_U.Joystick_Left_POV !=
    -1.0);

  /* SignalConversion: '<S15>/Signal Copy5' incorporates:
   *  Inport: '<Root>/Joystick_Right_Y'
   */
  Robot_Control_B.Steer_Joystick_Y = Robot_Control_U.Joystick_Right_Y;

  /* SignalConversion: '<S15>/Signal Copy6' incorporates:
   *  Inport: '<Root>/Joystick_Right_Z'
   */
  Robot_Control_B.Steer_Joystick_Z = Robot_Control_U.Joystick_Right_Z;

  /* RelationalOperator: '<S121>/Compare' incorporates:
   *  Constant: '<S121>/Constant'
   *  Inport: '<Root>/Joystick_Left_B1'
   */
  Robot_Control_B.Is_Boosting = (Robot_Control_U.Joystick_Left_B1 != 0.0);

  /* RelationalOperator: '<S113>/Compare' incorporates:
   *  Constant: '<S113>/Constant'
   *  Inport: '<Root>/Joystick_Right_POV'
   */
  Robot_Control_B.Face_Toward_Driver = (Robot_Control_U.Joystick_Right_POV ==
    180.0);

  /* RelationalOperator: '<S114>/Compare' incorporates:
   *  Constant: '<S114>/Constant'
   *  Inport: '<Root>/Joystick_Right_POV'
   */
  Robot_Control_B.Face_Right_Driver = (Robot_Control_U.Joystick_Right_POV ==
    90.0);

  /* RelationalOperator: '<S116>/Compare' incorporates:
   *  Constant: '<S116>/Constant'
   *  Inport: '<Root>/Joystick_Right_POV'
   */
  Robot_Control_B.Face_Left_Driver = (Robot_Control_U.Joystick_Right_POV ==
    270.0);

  /* RelationalOperator: '<S109>/Compare' incorporates:
   *  Constant: '<S109>/Constant'
   *  Inport: '<Root>/Joystick_Right_POV'
   */
  Robot_Control_B.Face_Away_Driver = (Robot_Control_U.Joystick_Right_POV == 0.0);

  /* Sum: '<S18>/Add' incorporates:
   *  Constant: '<S18>/Constant'
   *  Gain: '<S18>/Convert meters to inches1'
   *  Inport: '<Root>/Limelight_Tag_X'
   */
  Robot_Control_B.Limelight_Tag_Corrected_X = (39.37008 *
    Robot_Control_U.Limelight_Tag_X) + Limelight_Tag_X_Offset;

  /* Sum: '<S18>/Add1' incorporates:
   *  Constant: '<S18>/Constant1'
   *  Gain: '<S18>/Convert meters to inches'
   *  Inport: '<Root>/Limelight_Tag_Y'
   */
  Robot_Control_B.Limelight_Tag_Corrected_Y = (39.37008 *
    Robot_Control_U.Limelight_Tag_Y) + Limelight_Tag_Y_Offset;

  /* Sum: '<S18>/Add2' incorporates:
   *  Constant: '<S18>/Constant2'
   *  Inport: '<Root>/Limelight_Tag_Angle'
   */
  Robot_Control_B.Limelight_Tag_Corrected_Angle =
    Robot_Control_U.Limelight_Tag_Angle + Limelight_Tag_Angle_Offset;

  /* RelationalOperator: '<S119>/Compare' incorporates:
   *  Constant: '<S119>/Constant'
   *  Inport: '<Root>/Joystick_Left_B3'
   */
  Robot_Control_B.Align_Left = (Robot_Control_U.Joystick_Left_B3 != 0.0);

  /* RelationalOperator: '<S118>/Compare' incorporates:
   *  Constant: '<S118>/Constant'
   *  Inport: '<Root>/Joystick_Left_B4'
   */
  Robot_Control_B.Align_Right = (Robot_Control_U.Joystick_Left_B4 != 0.0);

  /* RelationalOperator: '<S120>/Compare' incorporates:
   *  Constant: '<S120>/Constant'
   *  Inport: '<Root>/Joystick_Left_B2'
   */
  Robot_Control_B.Align_Center = (Robot_Control_U.Joystick_Left_B2 != 0.0);

  /* RelationalOperator: '<S117>/Compare' incorporates:
   *  Constant: '<S117>/Constant'
   *  Inport: '<Root>/Joystick_Left_B7'
   */
  Robot_Control_B.Drive_Engage_Hook = (Robot_Control_U.Joystick_Left_B7 != 0.0);

  /* RelationalOperator: '<S108>/Compare' incorporates:
   *  Constant: '<S108>/Constant'
   *  Inport: '<Root>/Gamepad_POV'
   */
  Robot_Control_B.Gamepad_POV_Up = (Robot_Control_U.Gamepad_POV == 0.0);

  /* RelationalOperator: '<S110>/Compare' incorporates:
   *  Constant: '<S110>/Constant'
   *  Inport: '<Root>/Gamepad_POV'
   */
  Robot_Control_B.Gamepad_POV_Down = (Robot_Control_U.Gamepad_POV == 180.0);

  /* RelationalOperator: '<S112>/Compare' incorporates:
   *  Constant: '<S112>/Constant'
   *  Inport: '<Root>/Gamepad_POV'
   */
  Robot_Control_B.Gamepad_POV_Left = (Robot_Control_U.Gamepad_POV == 270.0);

  /* RelationalOperator: '<S111>/Compare' incorporates:
   *  Constant: '<S111>/Constant'
   *  Inport: '<Root>/Gamepad_POV'
   */
  Robot_Control_B.Gamepad_POV_Right = (Robot_Control_U.Gamepad_POV == 90.0);

  /* Chart: '<S9>/Debounce' incorporates:
   *  Constant: '<S4>/Constant'
   *  Constant: '<S9>/Constant'
   *  Constant: '<S9>/Constant1'
   *  Constant: '<S9>/Constant2'
   *  Inport: '<Root>/Elevator_Limit_Switch_Bottom'
   *  RelationalOperator: '<S4>/Compare'
   */
  Robot_Control_Debounce((Robot_Control_U.Elevator_Limit_Switch_Bottom != 0.0),
    true, Elevator_Limit_Switch_Debounce_F2T, Elevator_Limit_Switch_Debounce_T2F,
    &Robot_Control_B.Out_h, &Robot_Control_DW.sf_Debounce);

  /* Chart: '<S10>/Debounce' incorporates:
   *  Constant: '<S10>/Constant'
   *  Constant: '<S10>/Constant1'
   *  Constant: '<S10>/Constant2'
   *  Constant: '<S5>/Constant'
   *  Inport: '<Root>/Elevator_Limit_Switch_Top'
   *  RelationalOperator: '<S5>/Compare'
   */
  Robot_Control_Debounce((Robot_Control_U.Elevator_Limit_Switch_Top != 0.0),
    false, Elevator_Limit_Switch_Debounce_F2T,
    Elevator_Limit_Switch_Debounce_T2F, &Robot_Control_B.Out,
    &Robot_Control_DW.sf_Debounce_m);

  /* Gain: '<S13>/Gain1' incorporates:
   *  Inport: '<Root>/Elevator_Motor_Rev'
   */
  Robot_Control_B.Elevator_Height_Measured_Raw = Elevator_MotorRev_to_Inch *
    Robot_Control_U.Elevator_Motor_Rev;

  /* UnitDelay: '<S1>/Unit Delay' */
  rtb_UnitDelay_l = Robot_Control_DW.UnitDelay_DSTATE_mph;

  /* Switch: '<S13>/Switch1' incorporates:
   *  RelationalOperator: '<S101>/FixPt Relational Operator'
   *  RelationalOperator: '<S102>/FixPt Relational Operator'
   *  RelationalOperator: '<S103>/FixPt Relational Operator'
   *  Switch: '<S13>/Switch2'
   *  Switch: '<S13>/Switch3'
   *  UnitDelay: '<S101>/Delay Input1'
   *  UnitDelay: '<S102>/Delay Input1'
   *  UnitDelay: '<S103>/Delay Input1'
   *  UnitDelay: '<S1>/Unit Delay'
   *
   * Block description for '<S101>/Delay Input1':
   *
   *  Store in Global RAM
   *
   * Block description for '<S102>/Delay Input1':
   *
   *  Store in Global RAM
   *
   * Block description for '<S103>/Delay Input1':
   *
   *  Store in Global RAM
   */
  if (((int32_T)Robot_Control_B.Out_h) < ((int32_T)
       Robot_Control_DW.DelayInput1_DSTATE_bd)) {
    /* Switch: '<S13>/Switch1' */
    Robot_Control_B.Elevator_Height_Offset =
      Robot_Control_B.Elevator_Height_Measured_Raw;
  } else if (((int32_T)Robot_Control_B.Out) < ((int32_T)
              Robot_Control_DW.DelayInput1_DSTATE_o1)) {
    /* Switch: '<S13>/Switch1' incorporates:
     *  Constant: '<S13>/Constant1'
     *  Sum: '<S13>/Subtract1'
     *  Switch: '<S13>/Switch2'
     */
    Robot_Control_B.Elevator_Height_Offset =
      Robot_Control_B.Elevator_Height_Measured_Raw - Elevator_Height_Top_Reset;
  } else if (((int32_T)Robot_Control_DW.UnitDelay_DSTATE_mph) > ((int32_T)
              Robot_Control_DW.DelayInput1_DSTATE_po)) {
    /* Switch: '<S13>/Switch1' incorporates:
     *  Constant: '<S13>/Constant2'
     *  Sum: '<S13>/Subtract2'
     *  Switch: '<S13>/Switch2'
     *  Switch: '<S13>/Switch3'
     */
    Robot_Control_B.Elevator_Height_Offset =
      Robot_Control_B.Elevator_Height_Measured_Raw -
      Elevator_Height_PickupLower_Reset;
  }

  /* End of Switch: '<S13>/Switch1' */

  /* Switch: '<S13>/Switch' incorporates:
   *  Logic: '<S13>/Logical Operator'
   */
  if ((Robot_Control_B.Out_h) || (Robot_Control_B.Out)) {
    /* Switch: '<S13>/Switch4' */
    if (Robot_Control_B.Out_h) {
      /* Switch: '<S13>/Switch' incorporates:
       *  Constant: '<S13>/Constant'
       */
      Robot_Control_B.Elevator_Height_Measured = 0.0;
    } else {
      /* Switch: '<S13>/Switch' incorporates:
       *  Constant: '<S13>/Constant3'
       */
      Robot_Control_B.Elevator_Height_Measured = Elevator_Height_Top_Reset;
    }

    /* End of Switch: '<S13>/Switch4' */
  } else {
    /* Switch: '<S13>/Switch' incorporates:
     *  Sum: '<S13>/Subtract'
     */
    Robot_Control_B.Elevator_Height_Measured =
      Robot_Control_B.Elevator_Height_Measured_Raw -
      Robot_Control_B.Elevator_Height_Offset;
  }

  /* End of Switch: '<S13>/Switch' */

  /* Bias: '<S1>/Add Constant' incorporates:
   *  Inport: '<Root>/Coral_Arm_Angle_Measured_Raw'
   */
  Robot_Control_B.Coral_Arm_Angle_Measured =
    Robot_Control_U.Coral_Arm_Angle_Measured_Raw - 180.0;

  /* RelationalOperator: '<S6>/Compare' incorporates:
   *  Constant: '<S6>/Constant'
   *  Inport: '<Root>/Coral_Limit_Switch'
   */
  Compare = (Robot_Control_U.Coral_Limit_Switch != 0.0);

  /* RelationalOperator: '<S7>/Compare' incorporates:
   *  Constant: '<S7>/Constant'
   *  Inport: '<Root>/Algae_Limit_Switch'
   */
  Compare_f = (Robot_Control_U.Algae_Limit_Switch != 0.0);

  /* UnitDelay: '<S16>/Unit Delay' */
  Robot_Reached_Destination = Robot_Control_DW.UnitDelay_DSTATE_ll;

  /* SwitchCase: '<S1>/Switch Case' incorporates:
   *  Inport: '<Root>/GameState'
   */
  rtPrevAction = Robot_Control_DW.SwitchCase_ActiveSubsystem;
  u0 = trunc(Robot_Control_U.GameState);
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

  Robot_Control_DW.SwitchCase_ActiveSubsystem = rtAction;
  switch (rtAction) {
   case 0:
    /* Outputs for IfAction SubSystem: '<S1>/Disabled' incorporates:
     *  ActionPort: '<S11>/Action Port'
     */
    /* SignalConversion generated from: '<S11>/Spline_Ref_Poses' incorporates:
     *  Merge: '<S19>/Merge8'
     */
    memset(&rtb_Spline_Ref_Poses[0], 0, 40U * (sizeof(real_T)));

    /* Merge: '<S19>/Merge1' incorporates:
     *  Constant: '<S11>/Constant1'
     *  SignalConversion generated from: '<S11>/Steering_Abs_Cmd'
     */
    Robot_Control_B.Steering_Abs_Cmd = 0.0;

    /* Merge: '<S19>/Merge2' incorporates:
     *  Constant: '<S11>/Constant2'
     *  SignalConversion generated from: '<S11>/Steering_Rel_Cmd'
     */
    Robot_Control_B.Steering_Rel_Cmd = 0.0;

    /* Merge: '<S19>/Merge3' incorporates:
     *  Constant: '<S11>/Constant3'
     *  SignalConversion generated from: '<S11>/Translation_Angle'
     */
    Robot_Control_B.Translation_Angle = 0.0;

    /* Merge: '<S19>/Merge4' incorporates:
     *  Constant: '<S11>/Constant4'
     *  SignalConversion generated from: '<S11>/Translation_Speed'
     */
    Robot_Control_B.Translation_Speed = 0.0;

    /* SignalConversion generated from: '<S11>/Is_Absolute_Translation' incorporates:
     *  Constant: '<S11>/Constant5'
     */
    rtb_Is_Absolute_Translation_g = false;

    /* SignalConversion generated from: '<S11>/Is_Absolute_Steering' incorporates:
     *  Constant: '<S11>/Constant6'
     */
    rtb_Is_Absolute_Steering = false;

    /* Merge: '<S19>/Merge7' incorporates:
     *  Constant: '<S11>/Constant7'
     *  SignalConversion generated from: '<S11>/Spline_Enable'
     */
    Robot_Control_B.Spline_Enable = false;

    /* Merge: '<S19>/Merge9' incorporates:
     *  Constant: '<S11>/Constant9'
     *  SignalConversion generated from: '<S11>/Spline_Num_Poses'
     */
    Robot_Control_B.Spline_Num_Poses = 10.0;

    /* Merge: '<S19>/Merge10' incorporates:
     *  Constant: '<S11>/Constant10'
     *  SignalConversion generated from: '<S11>/Test_Mode'
     */
    Robot_Control_B.Test_Mode = false;

    /* SignalConversion generated from: '<S11>/Enable_Wheels' incorporates:
     *  Constant: '<S11>/Constant18'
     */
    Robot_Reached_Destination = false;

    /* SignalConversion generated from: '<S11>/Reset_Wheel_Offsets' incorporates:
     *  Constant: '<S11>/Constant13'
     */
    rtb_Reset_Wheel_Offsets = false;

    /* SignalConversion generated from: '<S11>/Disable_Wheels' incorporates:
     *  Constant: '<S11>/Constant14'
     */
    rtb_Disable_Wheels = false;

    /* SignalConversion generated from: '<S11>/Swerve_Motors_Disabled' incorporates:
     *  Constant: '<S11>/Constant12'
     */
    Compare = true;

    /* Merge: '<S19>/Merge12' incorporates:
     *  Constant: '<S11>/Constant15'
     *  SignalConversion generated from: '<S11>/Reefscape_Motors_Enable'
     */
    Robot_Control_B.Reefscape_Motors_Enable_merge = false;

    /* Merge: '<S19>/Merge11' incorporates:
     *  Constant: '<S11>/Constant11'
     *  SignalConversion generated from: '<S11>/Elevator_Height_Desired'
     */
    Robot_Control_B.Elevator_Height_Desired_merge = 0.0;

    /* Merge: '<S19>/Merge13' incorporates:
     *  Constant: '<S11>/Constant16'
     *  SignalConversion generated from: '<S11>/Coral_Arm_Angle_Desired'
     */
    Robot_Control_B.Coral_Arm_Angle_Desired_merge = -90.0;

    /* SignalConversion generated from: '<S11>/Coral_Wheel_DutyCycle' incorporates:
     *  Constant: '<S11>/Constant17'
     */
    rtb_Coral_Wheel_DutyCycle_merge = 0.0;

    /* SignalConversion generated from: '<S11>/Algae_Wheel_Outside_DutyCycle' incorporates:
     *  Constant: '<S11>/Constant19'
     */
    rtb_Algae_Wheel_Outside_DutyCyc = 0.0;

    /* SignalConversion generated from: '<S11>/Algae_Wheel_Inside_DutyCycle' incorporates:
     *  Constant: '<S11>/Constant20'
     */
    rtb_Algae_Wheel_Inside_DutyCycl = 0.0;

    /* Merge: '<S19>/Merge21' incorporates:
     *  Constant: '<S11>/Constant21'
     *  SignalConversion generated from: '<S11>/Elevator_LowerPickup_Reset'
     */
    Robot_Control_B.Elevator_LowerPickup_Reset_merg = false;

    /* SignalConversion generated from: '<S11>/Coral_Pickup_Lower_Wait_State' incorporates:
     *  Constant: '<S11>/Constant22'
     */
    rtb_RelationalOperator_ci = false;

    /* Merge: '<S19>/Merge23' incorporates:
     *  Constant: '<S11>/Constant23'
     *  SignalConversion generated from: '<S11>/Swerve_Drive_Integral_Enable'
     */
    Robot_Control_B.Swerve_Drive_Integral_Enable = false;

    /* SignalConversion generated from: '<S11>/AT_On_Target' incorporates:
     *  Constant: '<S11>/Constant24'
     */
    Compare_f = false;

    /* SignalConversion generated from: '<S11>/Desired_Pipeline' incorporates:
     *  Constant: '<S11>/Constant25'
     */
    rtb_Desired_Pipeline = 0U;

    /* End of Outputs for SubSystem: '<S1>/Disabled' */
    break;

   case 1:
    if (rtAction != rtPrevAction) {
      /* InitializeConditions for IfAction SubSystem: '<S1>/Autonomous' incorporates:
       *  ActionPort: '<S2>/Action Port'
       */
      /* InitializeConditions for SwitchCase: '<S1>/Switch Case' incorporates:
       *  UnitDelay: '<S25>/Unit Delay'
       *  UnitDelay: '<S25>/Unit Delay1'
       *  UnitDelay: '<S25>/Unit Delay2'
       *  UnitDelay: '<S26>/Unit Delay'
       *  UnitDelay: '<S26>/Unit Delay1'
       *  UnitDelay: '<S51>/Delay Input1'
       *  UnitDelay: '<S53>/Delay Input1'
       *  UnitDelay: '<S54>/Delay Input1'
       *  UnitDelay: '<S57>/Delay Input1'
       *  UnitDelay: '<S58>/Delay Input1'
       *  UnitDelay: '<S59>/Delay Input1'
       *  UnitDelay: '<S62>/Delay Input1'
       *  UnitDelay: '<S64>/Delay Input1'
       *
       * Block description for '<S51>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S53>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S54>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S57>/Delay Input1':
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
       * Block description for '<S64>/Delay Input1':
       *
       *  Store in Global RAM
       */
      Robot_Control_DW.UnitDelay1_DSTATE_p = false;
      Robot_Control_DW.UnitDelay2_DSTATE = 0.0;
      Robot_Control_DW.DelayInput1_DSTATE_l = false;
      Robot_Control_DW.DelayInput1_DSTATE_au = false;
      Robot_Control_DW.DelayInput1_DSTATE_ne = false;
      Robot_Control_DW.DelayInput1_DSTATE_ff = false;
      Robot_Control_DW.DelayInput1_DSTATE_ev = false;
      Robot_Control_DW.DelayInput1_DSTATE_b2 = false;
      Robot_Control_DW.DelayInput1_DSTATE_b3 = false;
      Robot_Control_DW.DelayInput1_DSTATE_ae = false;
      Robot_Control_DW.UnitDelay_DSTATE_i3 = false;
      Robot_Control_DW.UnitDelay1_DSTATE_ek = 0.0;
      Robot_Control_DW.UnitDelay_DSTATE_b = 0.0;

      /* End of InitializeConditions for SubSystem: '<S1>/Autonomous' */

      /* SystemReset for IfAction SubSystem: '<S1>/Autonomous' incorporates:
       *  ActionPort: '<S2>/Action Port'
       */
      /* SystemReset for SwitchCase: '<S1>/Switch Case' incorporates:
       *  Chart: '<S25>/Reefscape_Auto_Steps'
       *  Chart: '<S28>/Reefscape_Chart'
       *  SignalConversion generated from: '<S2>/Algae_Wheel_Outside_DutyCycle'
       */
      Robot_Control_DW.is_active_c6_Robot_Control = 0U;
      Robot_Control_DW.is_c6_Robot_Control = Robot_Cont_IN_NO_ACTIVE_CHILD_g;
      Robot_Control_DW.is_Center = Robot_Cont_IN_NO_ACTIVE_CHILD_g;
      Robot_Control_DW.is_Path_to_Reef = Robot_Cont_IN_NO_ACTIVE_CHILD_g;
      Robot_Control_DW.is_Left_and_Right = Robot_Cont_IN_NO_ACTIVE_CHILD_g;
      Robot_Control_DW.is_Path_to_Reef_1 = Robot_Cont_IN_NO_ACTIVE_CHILD_g;
      Robot_Control_DW.is_Drive = Robot_Cont_IN_NO_ACTIVE_CHILD_g;
      Robot_Control_DW.is_Path_to_Reef_2 = Robot_Cont_IN_NO_ACTIVE_CHILD_g;
      Robot_Control_DW.is_Path_to_Reef_2_v2 = Robot_Cont_IN_NO_ACTIVE_CHILD_g;
      Robot_Control_B.Align_Left_d = false;
      Robot_Control_B.Align_Center_a = false;
      Robot_Control_B.Gamepad_B4_Y_out = false;
      Robot_Control_B.Gamepad_Start_out = false;
      Robot_Control_B.Gamepad_Back_out = false;
      Robot_Control_B.Gamepad_RT_out = false;
      Robot_Control_B.Gamepad_POV_Down_k = false;
      Robot_Control_B.Gamepad_POV_Left_p = false;
      Robot_Control_B.Path_Enable = false;
      Robot_Control_B.Path_ID = 0U;
      Robot_Control_DW.timer = 0.0;
      Robot_Control_B.Translation_Speed_g = 0.0;
      Robot_Control_B.Translation_Angle_l = 0.0;
      Robot_Control_B.Gamepad_B1_A_out = false;
      Robot_Control_B.Gamepad_B3_X_out = false;

      /* Outputs for IfAction SubSystem: '<S1>/Autonomous' incorporates:
       *  ActionPort: '<S2>/Action Port'
       */
      Robot_Con_Reefscape_Chart_Reset(&Robot_Control_B.State_ID_Auto,
        &Robot_Control_B.Elevator_Height_Desired_h,
        &Robot_Control_B.Coral_Arm_Angle_Desired_f,
        &Robot_Control_B.Coral_Wheel_DC_a, &rtb_Algae_Wheel_Outside_DutyCyc,
        &rtb_Algae_Wheel_Inside_DutyCycl,
        &Robot_Control_B.Elevator_LowerPickup_Reset_g,
        &Robot_Control_B.Coral_Pickup_Lower_Wait_State_m,
        &Robot_Control_B.Set_Coral_Level_j, &Robot_Control_B.Set_Algae_Level_p,
        &Robot_Control_B.Coral_Score_j, &rtb_Desired_Pipeline,
        &Robot_Control_DW.sf_Reefscape_Chart);

      /* End of Outputs for SubSystem: '<S1>/Autonomous' */
      /* End of SystemReset for SubSystem: '<S1>/Autonomous' */
    }

    /* Outputs for IfAction SubSystem: '<S1>/Autonomous' incorporates:
     *  ActionPort: '<S2>/Action Port'
     */
    /* MultiPortSwitch: '<S27>/Multiport Switch' incorporates:
     *  Inport: '<Root>/Auto_Start_Position'
     */
    switch ((int32_T)Robot_Control_U.Auto_Start_Position) {
     case 1:
      /* Switch: '<S27>/Switch' incorporates:
       *  Inport: '<Root>/IsBlueAlliance'
       *  MultiPortSwitch: '<S27>/Multiport Switch1'
       *  Switch: '<S27>/Switch3'
       */
      if (Robot_Control_U.IsBlueAlliance != 0.0) {
        /* MultiPortSwitch: '<S27>/Multiport Switch' incorporates:
         *  Constant: '<S27>/Constant3'
         */
        rtb_Desired_Pipeline = 1U;

        /* MultiPortSwitch: '<S27>/Multiport Switch1' incorporates:
         *  Constant: '<S27>/Constant17'
         */
        MultiportSwitch1 = 2U;
      } else {
        /* MultiPortSwitch: '<S27>/Multiport Switch' incorporates:
         *  Constant: '<S27>/Constant4'
         */
        rtb_Desired_Pipeline = 9U;

        /* MultiPortSwitch: '<S27>/Multiport Switch1' incorporates:
         *  Constant: '<S27>/Constant18'
         */
        MultiportSwitch1 = 10U;
      }

      /* End of Switch: '<S27>/Switch' */
      break;

     case 2:
      /* Switch: '<S27>/Switch1' incorporates:
       *  Inport: '<Root>/IsBlueAlliance'
       *  MultiPortSwitch: '<S27>/Multiport Switch1'
       *  Switch: '<S27>/Switch4'
       */
      if (Robot_Control_U.IsBlueAlliance != 0.0) {
        /* MultiPortSwitch: '<S27>/Multiport Switch' incorporates:
         *  Constant: '<S27>/Constant6'
         */
        rtb_Desired_Pipeline = 7U;

        /* MultiPortSwitch: '<S27>/Multiport Switch1' incorporates:
         *  Constant: '<S27>/Constant19'
         */
        MultiportSwitch1 = 8U;
      } else {
        /* MultiPortSwitch: '<S27>/Multiport Switch' incorporates:
         *  Constant: '<S27>/Constant11'
         */
        rtb_Desired_Pipeline = 15U;

        /* MultiPortSwitch: '<S27>/Multiport Switch1' incorporates:
         *  Constant: '<S27>/Constant14'
         */
        MultiportSwitch1 = 16U;
      }

      /* End of Switch: '<S27>/Switch1' */
      break;

     default:
      /* Switch: '<S27>/Switch2' incorporates:
       *  Inport: '<Root>/IsBlueAlliance'
       *  MultiPortSwitch: '<S27>/Multiport Switch1'
       *  Switch: '<S27>/Switch5'
       */
      if (Robot_Control_U.IsBlueAlliance != 0.0) {
        /* MultiPortSwitch: '<S27>/Multiport Switch' incorporates:
         *  Constant: '<S27>/Constant13'
         */
        rtb_Desired_Pipeline = 4U;

        /* MultiPortSwitch: '<S27>/Multiport Switch1' incorporates:
         *  Constant: '<S27>/Constant16'
         */
        MultiportSwitch1 = 5U;
      } else {
        /* MultiPortSwitch: '<S27>/Multiport Switch' incorporates:
         *  Constant: '<S27>/Constant12'
         */
        rtb_Desired_Pipeline = 12U;

        /* MultiPortSwitch: '<S27>/Multiport Switch1' incorporates:
         *  Constant: '<S27>/Constant15'
         */
        MultiportSwitch1 = 13U;
      }

      /* End of Switch: '<S27>/Switch2' */
      break;
    }

    /* End of MultiPortSwitch: '<S27>/Multiport Switch' */

    /* Switch: '<S27>/Switch6' incorporates:
     *  Constant: '<S49>/Constant'
     *  Inport: '<Root>/Auto_Start_Position'
     *  Inport: '<Root>/IsBlueAlliance'
     *  RelationalOperator: '<S49>/Compare'
     *  Switch: '<S27>/Switch13'
     *  Switch: '<S27>/Switch14'
     *  Switch: '<S27>/Switch8'
     */
    if (Robot_Control_U.Auto_Start_Position <= 2.0) {
      /* Switch: '<S27>/Switch7' incorporates:
       *  Inport: '<Root>/IsBlueAlliance'
       *  Switch: '<S27>/Switch12'
       */
      if (Robot_Control_U.IsBlueAlliance != 0.0) {
        /* Switch: '<S27>/Switch6' incorporates:
         *  Constant: '<S27>/Constant20'
         */
        Switch6 = 3U;

        /* Switch: '<S27>/Switch14' incorporates:
         *  Constant: '<S27>/Constant1'
         */
        Switch14 = 17U;
      } else {
        /* Switch: '<S27>/Switch6' incorporates:
         *  Constant: '<S27>/Constant21'
         */
        Switch6 = 11U;

        /* Switch: '<S27>/Switch14' incorporates:
         *  Constant: '<S27>/Constant2'
         */
        Switch14 = 19U;
      }

      /* End of Switch: '<S27>/Switch7' */
    } else if (Robot_Control_U.IsBlueAlliance != 0.0) {
      /* Switch: '<S27>/Switch8' incorporates:
       *  Constant: '<S27>/Constant22'
       *  Switch: '<S27>/Switch6'
       */
      Switch6 = 6U;

      /* Switch: '<S27>/Switch13' incorporates:
       *  Constant: '<S27>/Constant5'
       *  Switch: '<S27>/Switch14'
       */
      Switch14 = 18U;
    } else {
      /* Switch: '<S27>/Switch6' incorporates:
       *  Constant: '<S27>/Constant23'
       *  Switch: '<S27>/Switch8'
       */
      Switch6 = 14U;

      /* Switch: '<S27>/Switch14' incorporates:
       *  Constant: '<S27>/Constant7'
       *  Switch: '<S27>/Switch13'
       */
      Switch14 = 20U;
    }

    /* End of Switch: '<S27>/Switch6' */

    /* UnitDelay: '<S25>/Unit Delay2' */
    Robot_Control_B.UnitDelay2 = Robot_Control_DW.UnitDelay2_DSTATE;

    /* Chart: '<S25>/Reefscape_Auto_Steps' incorporates:
     *  Inport: '<Root>/Auto_Start_Position'
     *  UnitDelay: '<S16>/Unit Delay'
     *  UnitDelay: '<S25>/Unit Delay1'
     */
    if (Robot_Control_DW.is_active_c6_Robot_Control == 0U) {
      Robot_Control_DW.is_active_c6_Robot_Control = 1U;
      if ((Robot_Control_U.Auto_Start_Position == 1.0) ||
          (Robot_Control_U.Auto_Start_Position == 3.0)) {
        Robot_Control_DW.is_c6_Robot_Control = Robot_Control_IN_Left_and_Right;
        Robot_Control_DW.is_Left_and_Right = Robot_Control_IN_Path_to_Reef_1;
        Robot_Control_B.Auto_Step_ID = 1U;
        Robot_Control_B.Translation_Speed_g = 0.0;
        Robot_Control_B.Translation_Angle_l = 0.0;
        Robot_Control_DW.is_Path_to_Reef_1 = Robot_Control_IN_Start_l;
        Robot_Control_B.Path_Enable = false;
        Robot_Control_DW.timer = 0.0;
      } else {
        Robot_Control_DW.is_c6_Robot_Control = Robot_Control_IN_Center;
        Robot_Control_DW.is_Center = Robot_Control_IN_Path_to_Reef;
        Robot_Control_B.Auto_Step_ID = 101U;
        Robot_Control_B.Translation_Speed_g = 0.0;
        Robot_Control_B.Translation_Angle_l = 0.0;
        Robot_Control_DW.is_Path_to_Reef = Robot_Control_IN_Start_l;
        Robot_Control_B.Path_Enable = false;
        Robot_Control_DW.timer = 0.0;
      }
    } else if (Robot_Control_DW.is_c6_Robot_Control == Robot_Control_IN_Center)
    {
      switch (Robot_Control_DW.is_Center) {
       case Robo_IN_Adjust_Height_for_Algae:
        Robot_Control_B.Auto_Step_ID = 104U;
        Robot_Control_B.Path_Enable = false;
        Robot_Control_B.Translation_Speed_g = 0.0;
        Robot_Control_B.Translation_Angle_l = 0.0;
        if (Robot_Control_DW.timer >= Auto_Algae_Height_Time) {
          Robot_Control_B.Gamepad_POV_Left_p = false;
          Robot_Control_DW.is_Center = IN_Drive_Forward_and_Collect_Al;
          Robot_Control_B.Auto_Step_ID = 105U;
          Robot_Control_B.Translation_Speed_g = Auto_Speed_Algae;
          Robot_Control_B.Align_Center_a = true;
        } else {
          Robot_Control_DW.timer += 0.02;
        }
        break;

       case IN_Back_Up_from_Reef_Coral_Scor:
        Robot_Control_B.Auto_Step_ID = 103U;
        Robot_Control_B.Path_Enable = false;
        Robot_Control_B.Translation_Speed_g = Auto_Speed_Reef;
        Robot_Control_B.Translation_Angle_l = 3.1415926535897931;
        if (Robot_Control_DW.timer >= Auto_Backup_Time_Reef) {
          Robot_Control_DW.is_Center = Robo_IN_Adjust_Height_for_Algae;
          Robot_Control_B.Auto_Step_ID = 104U;
          Robot_Control_B.Translation_Speed_g = 0.0;
          Robot_Control_B.Translation_Angle_l = 0.0;
          Robot_Control_B.Gamepad_POV_Left_p = true;
          Robot_Control_DW.timer = 0.0;
        } else {
          Robot_Control_DW.timer += 0.02;
        }
        break;

       case IN_Drive_Backward_from_Collect_:
        Robot_Control_B.Auto_Step_ID = 106U;
        Robot_Control_B.Path_Enable = false;
        Robot_Control_B.Translation_Speed_g = Auto_Speed_Reef;
        Robot_Control_B.Translation_Angle_l = 3.1415926535897931;
        if (Robot_Control_DW.timer >= Auto_Backup_Time_Reef) {
          Robot_Control_DW.is_Center = Robot_Cont_IN_Path_to_Processor;
          Robot_Control_B.Auto_Step_ID = 107U;
          Robot_Control_B.Path_Enable = true;
          Robot_Control_B.Path_ID = MultiportSwitch1;
        } else {
          Robot_Control_DW.timer += 0.02;
        }
        break;

       case IN_Drive_Backward_from_Processo:
        Robot_Control_B.Auto_Step_ID = 110U;
        Robot_Control_B.Path_Enable = false;
        Robot_Control_B.Translation_Speed_g = Auto_Speed_Processor;
        Robot_Control_B.Translation_Angle_l = 3.1415926535897931;
        if (Robot_Control_DW.timer >= Auto_Backup_Time_Processor) {
          Robot_Control_B.Gamepad_Back_out = false;
          Robot_Control_DW.is_Center = Robot_Contro_IN_Wait_for_Teleop;
          Robot_Control_B.Auto_Step_ID = 111U;
          Robot_Control_B.Translation_Speed_g = 0.0;
          Robot_Control_B.Translation_Angle_l = 0.0;
        } else {
          Robot_Control_DW.timer += 0.02;
        }
        break;

       case IN_Drive_Forward_and_Collect_Al:
        Robot_Control_B.Auto_Step_ID = 105U;
        Robot_Control_B.Path_Enable = false;
        Robot_Control_B.Translation_Speed_g = Auto_Speed_Algae;
        Robot_Control_B.Translation_Angle_l = 0.0;
        if (Compare_f) {
          Robot_Control_B.Align_Center_a = false;
          Robot_Control_DW.is_Center = IN_Drive_Backward_from_Collect_;
          Robot_Control_B.Auto_Step_ID = 106U;
          Robot_Control_B.Translation_Speed_g = Auto_Speed_Reef;
          Robot_Control_B.Translation_Angle_l = 3.1415926535897931;
          Robot_Control_DW.timer = 0.0;
        }
        break;

       case Robot_Control_IN_End_early:
        Robot_Control_B.Gamepad_Back_out = false;
        Robot_Control_DW.is_Center = Robot_Contro_IN_Wait_for_Teleop;
        Robot_Control_B.Auto_Step_ID = 111U;
        Robot_Control_B.Path_Enable = false;
        Robot_Control_B.Translation_Speed_g = 0.0;
        Robot_Control_B.Translation_Angle_l = 0.0;
        break;

       case Robot_Cont_IN_Lower_for_Scoring:
        Robot_Control_B.Auto_Step_ID = 108U;
        if (Robot_Control_DW.timer >= Auto_Algae_Height_Time) {
          Robot_Control_B.Gamepad_POV_Down_k = false;
          Robot_Control_DW.is_Center = Robot_Con_IN_Score_at_Processor;
          Robot_Control_B.Auto_Step_ID = 109U;
          Robot_Control_B.Path_Enable = false;
          Robot_Control_B.Translation_Speed_g = 0.0;
          Robot_Control_B.Translation_Angle_l = 0.0;
          Robot_Control_B.Gamepad_RT_out = true;
        } else {
          Robot_Control_DW.timer += 0.02;
        }
        break;

       case Robot_Cont_IN_Path_to_Processor:
        Robot_Control_B.Auto_Step_ID = 107U;
        Robot_Control_B.Path_Enable = true;
        if (Robot_Control_DW.UnitDelay_DSTATE_ll) {
          Robot_Control_DW.is_Center = Robot_Cont_IN_Lower_for_Scoring;
          Robot_Control_B.Auto_Step_ID = 108U;
          Robot_Control_B.Gamepad_POV_Down_k = true;
          Robot_Control_DW.timer = 0.0;
        }
        break;

       case Robot_Control_IN_Path_to_Reef:
        Robot_Control_B.Auto_Step_ID = 101U;
        Robot_Control_B.Translation_Speed_g = 0.0;
        Robot_Control_B.Translation_Angle_l = 0.0;
        switch (Robot_Control_DW.is_Path_to_Reef) {
         case Robot_Control_IN_Drive:
          Robot_Control_B.Path_Enable = true;
          if (Robot_Control_DW.UnitDelay_DSTATE_ll) {
            Robot_Control_DW.is_Path_to_Reef = Robot_Cont_IN_NO_ACTIVE_CHILD_g;
            Robot_Control_DW.is_Center = Robot_Control_IN_Score_at_Reef;
            Robot_Control_B.Auto_Step_ID = 102U;
            Robot_Control_B.Path_Enable = false;
            Robot_Control_B.Align_Left_d = true;
          }
          break;

         case Robot_Control_IN_Raise_to_L4:
          Robot_Control_B.Path_Enable = false;
          if (Robot_Control_DW.timer >= Auto_Path1_Delay_to_L4_Time) {
            Robot_Control_B.Gamepad_B4_Y_out = false;
            Robot_Control_DW.is_Path_to_Reef = Robot_Control_IN_Drive;
            Robot_Control_B.Path_Enable = true;
            Robot_Control_B.Path_ID = rtb_Desired_Pipeline;
          } else {
            Robot_Control_B.Gamepad_B4_Y_out = true;
            Robot_Control_DW.timer += 0.02;
          }
          break;

         default:
          /* case IN_Start: */
          Robot_Control_B.Path_Enable = false;
          if (Robot_Control_DW.timer >= 0.04) {
            Robot_Control_DW.is_Path_to_Reef = Robot_Control_IN_Raise_to_L4;
            Robot_Control_DW.timer = 0.0;
          } else {
            Robot_Control_DW.timer += 0.02;
          }
          break;
        }
        break;

       case Robot_Con_IN_Score_at_Processor:
        Robot_Control_B.Auto_Step_ID = 109U;
        Robot_Control_B.Path_Enable = false;
        Robot_Control_B.Translation_Speed_g = 0.0;
        Robot_Control_B.Translation_Angle_l = 0.0;
        if (!Compare_f) {
          Robot_Control_B.Gamepad_RT_out = false;
          Robot_Control_DW.is_Center = IN_Drive_Backward_from_Processo;
          Robot_Control_B.Auto_Step_ID = 110U;
          Robot_Control_B.Translation_Speed_g = Auto_Speed_Processor;
          Robot_Control_B.Translation_Angle_l = 3.1415926535897931;
          Robot_Control_DW.timer = 0.0;
          Robot_Control_B.Gamepad_Back_out = true;
        }
        break;

       case Robot_Control_IN_Score_at_Reef:
        Robot_Control_B.Auto_Step_ID = 102U;
        Robot_Control_B.Path_Enable = false;
        Robot_Control_B.Translation_Speed_g = 0.0;
        Robot_Control_B.Translation_Angle_l = 0.0;
        if (Robot_Control_DW.UnitDelay1_DSTATE_p) {
          Robot_Control_B.Align_Left_d = false;
          Robot_Control_DW.is_Center = IN_Back_Up_from_Reef_Coral_Scor;
          Robot_Control_B.Auto_Step_ID = 103U;
          Robot_Control_B.Translation_Speed_g = Auto_Speed_Reef;
          Robot_Control_B.Translation_Angle_l = 3.1415926535897931;
          Robot_Control_DW.timer = 0.0;
        }
        break;

       default:
        /* case IN_Wait_for_Teleop: */
        Robot_Control_B.Auto_Step_ID = 111U;
        Robot_Control_B.Path_Enable = false;
        Robot_Control_B.Translation_Speed_g = 0.0;
        Robot_Control_B.Translation_Angle_l = 0.0;
        break;
      }
    } else {
      /* case IN_Left_and_Right: */
      Robot_Control_Left_and_Right(&Robot_Control_DW.UnitDelay_DSTATE_ll,
        &rtb_Desired_Pipeline, &MultiportSwitch1, &Switch6, &Switch14,
        &Robot_Control_DW.UnitDelay1_DSTATE_p);
    }

    /* End of Chart: '<S25>/Reefscape_Auto_Steps' */

    /* Selector: '<S25>/Selector' incorporates:
     *  Constant: '<S25>/Constant'
     *  Merge: '<S19>/Merge8'
     */
    for (i = 0; i < 4; i++) {
      for (rtb_Num_Segments = 0; rtb_Num_Segments < 10; rtb_Num_Segments++) {
        s210_iter = (10 * i) + rtb_Num_Segments;
        rtb_Spline_Ref_Poses[s210_iter] = rtCP_Constant_Value_k
          [((Robot_Control_B.Path_ID - 1) * 40) + s210_iter];
      }
    }

    /* End of Selector: '<S25>/Selector' */

    /* SignalConversion generated from: '<S2>/Algae_Wheel_Outside_DutyCycle' incorporates:
     *  Chart: '<S28>/Reefscape_Chart'
     *  Constant: '<S25>/GameState = 1 is Autos'
     *  Inport: '<Root>/Coral_TOF_Distance'
     *  RelationalOperator: '<S51>/FixPt Relational Operator'
     *  RelationalOperator: '<S52>/FixPt Relational Operator'
     *  RelationalOperator: '<S53>/FixPt Relational Operator'
     *  RelationalOperator: '<S54>/FixPt Relational Operator'
     *  RelationalOperator: '<S55>/FixPt Relational Operator'
     *  RelationalOperator: '<S57>/FixPt Relational Operator'
     *  RelationalOperator: '<S58>/FixPt Relational Operator'
     *  RelationalOperator: '<S59>/FixPt Relational Operator'
     *  RelationalOperator: '<S60>/FixPt Relational Operator'
     *  RelationalOperator: '<S61>/FixPt Relational Operator'
     *  RelationalOperator: '<S62>/FixPt Relational Operator'
     *  RelationalOperator: '<S63>/FixPt Relational Operator'
     *  RelationalOperator: '<S64>/FixPt Relational Operator'
     *  UnitDelay: '<S25>/Unit Delay'
     *  UnitDelay: '<S51>/Delay Input1'
     *  UnitDelay: '<S53>/Delay Input1'
     *  UnitDelay: '<S54>/Delay Input1'
     *  UnitDelay: '<S57>/Delay Input1'
     *  UnitDelay: '<S58>/Delay Input1'
     *  UnitDelay: '<S59>/Delay Input1'
     *  UnitDelay: '<S62>/Delay Input1'
     *  UnitDelay: '<S64>/Delay Input1'
     *
     * Block description for '<S51>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S53>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S54>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S57>/Delay Input1':
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
     * Block description for '<S64>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Robot_Control_Reefscape_Chart(1, (((int32_T)Robot_Control_B.Gamepad_B1_A_out)
      > ((int32_T)Robot_Control_DW.DelayInput1_DSTATE_l)), false, (((int32_T)
      Robot_Control_B.Gamepad_B3_X_out) > ((int32_T)
      Robot_Control_DW.DelayInput1_DSTATE_au)), (((int32_T)
      Robot_Control_B.Gamepad_B4_Y_out) > ((int32_T)
      Robot_Control_DW.DelayInput1_DSTATE_ne)), (((int32_T)
      Robot_Control_B.Gamepad_Start_out) > ((int32_T)
      Robot_Control_DW.DelayInput1_DSTATE_ff)), (((int32_T)
      Robot_Control_B.Gamepad_Back_out) > ((int32_T)
      Robot_Control_DW.DelayInput1_DSTATE_ev)), false, false, (((int32_T)
      Robot_Control_B.Gamepad_RT_out) > ((int32_T)
      Robot_Control_DW.DelayInput1_DSTATE_b2)), false, (((int32_T)
      Robot_Control_B.Gamepad_POV_Down_k) > ((int32_T)
      Robot_Control_DW.DelayInput1_DSTATE_b3)), (((int32_T)
      Robot_Control_B.Gamepad_POV_Left_p) > ((int32_T)
      Robot_Control_DW.DelayInput1_DSTATE_ae)), false,
      Robot_Control_ConstB.DeadZone, Robot_Control_ConstB.DeadZone1,
      Robot_Control_B.Elevator_Height_Measured,
      Robot_Control_B.Coral_Arm_Angle_Measured,
      Robot_Control_U.Coral_TOF_Distance, Compare, Compare_f,
      Robot_Control_DW.UnitDelay_DSTATE_i3, &Robot_Control_B.State_ID_Auto,
      &Robot_Control_B.Elevator_Height_Desired_h,
      &Robot_Control_B.Coral_Arm_Angle_Desired_f,
      &Robot_Control_B.Coral_Wheel_DC_a, &rtb_Algae_Wheel_Outside_DutyCyc,
      &rtb_Algae_Wheel_Inside_DutyCycl,
      &Robot_Control_B.Elevator_LowerPickup_Reset_g,
      &Robot_Control_B.Coral_Pickup_Lower_Wait_State_m,
      &Robot_Control_B.Set_Coral_Level_j, &Robot_Control_B.Set_Algae_Level_p,
      &Robot_Control_B.Coral_Score_j, &rtb_Desired_Pipeline,
      &Robot_Control_DW.sf_Reefscape_Chart);

    /* Merge: '<S19>/Merge13' incorporates:
     *  SignalConversion generated from: '<S2>/Coral_Arm_Angle_Desired'
     */
    Robot_Control_B.Coral_Arm_Angle_Desired_merge =
      Robot_Control_B.Coral_Arm_Angle_Desired_f;

    /* SignalConversion generated from: '<S2>/Coral_Pickup_Lower_Wait_State' */
    rtb_RelationalOperator_ci = Robot_Control_B.Coral_Pickup_Lower_Wait_State_m;

    /* SignalConversion generated from: '<S2>/Coral_Wheel_DutyCycle' */
    rtb_Coral_Wheel_DutyCycle_merge = Robot_Control_B.Coral_Wheel_DC_a;

    /* Merge: '<S19>/Merge11' incorporates:
     *  SignalConversion generated from: '<S2>/Elevator_Height_Desired'
     */
    Robot_Control_B.Elevator_Height_Desired_merge =
      Robot_Control_B.Elevator_Height_Desired_h;

    /* Merge: '<S19>/Merge21' incorporates:
     *  SignalConversion generated from: '<S2>/Elevator_LowerPickup_Reset'
     */
    Robot_Control_B.Elevator_LowerPickup_Reset_merg =
      Robot_Control_B.Elevator_LowerPickup_Reset_g;

    /* Switch: '<S26>/Switch' incorporates:
     *  Constant: '<S26>/Constant1'
     *  Constant: '<S36>/Constant'
     *  Constant: '<S47>/Constant'
     *  Logic: '<S26>/AND'
     *  Logic: '<S26>/AND1'
     *  RelationalOperator: '<S36>/Compare'
     *  RelationalOperator: '<S47>/Compare'
     *  Switch: '<S26>/Switch4'
     *  Switch: '<S26>/Switch6'
     */
    if (Robot_Control_B.Align_Left_d) {
      rtb_Switch_jz = AT_Reef_Target_Left_Y;
    } else if ((Robot_Control_B.Align_Center_a) &&
               (Robot_Control_B.Set_Coral_Level_j == 1)) {
      /* Switch: '<S26>/Switch4' incorporates:
       *  Constant: '<S26>/Constant3'
       */
      rtb_Switch_jz = AT_Reef_Target_Center_Y;
    } else if ((Robot_Control_B.Align_Center_a) &&
               (Robot_Control_B.Set_Algae_Level_p != 0)) {
      /* Switch: '<S26>/Switch6' incorporates:
       *  Constant: '<S26>/Constant6'
       *  Switch: '<S26>/Switch4'
       */
      rtb_Switch_jz = AT_Reef_Target_Algae_Y;
    } else {
      /* Switch: '<S26>/Switch4' incorporates:
       *  UnitDelay: '<S26>/Unit Delay1'
       */
      rtb_Switch_jz = Robot_Control_DW.UnitDelay1_DSTATE_ek;
    }

    /* End of Switch: '<S26>/Switch' */

    /* Sum: '<S26>/Subtract1' */
    rtb_Abs1 = rtb_Switch_jz - Robot_Control_B.Limelight_Tag_Corrected_Y;

    /* SignalConversion: '<S25>/Signal Copy6' */
    Robot_Control_B.Auto_AT_Relative_Error_Y = rtb_Abs1;

    /* Switch: '<S26>/Switch2' incorporates:
     *  Constant: '<S26>/Constant4'
     *  Constant: '<S31>/Constant'
     *  Constant: '<S32>/Constant'
     *  Constant: '<S34>/Constant'
     *  Constant: '<S35>/Constant'
     *  Constant: '<S48>/Constant'
     *  Logic: '<S26>/AND2'
     *  Logic: '<S26>/AND3'
     *  Logic: '<S26>/Logical Operator5'
     *  Logic: '<S26>/Logical Operator6'
     *  Logic: '<S26>/OR'
     *  Logic: '<S26>/OR1'
     *  RelationalOperator: '<S31>/Compare'
     *  RelationalOperator: '<S32>/Compare'
     *  RelationalOperator: '<S34>/Compare'
     *  RelationalOperator: '<S35>/Compare'
     *  RelationalOperator: '<S48>/Compare'
     *  Switch: '<S26>/Switch3'
     *  Switch: '<S26>/Switch5'
     *  Switch: '<S26>/Switch7'
     */
    if ((Robot_Control_B.Align_Center_a) && (Robot_Control_B.Set_Coral_Level_j ==
         1)) {
      rtb_Switch2_kn = AT_Reef_Target_L1_X;
    } else if ((Robot_Control_B.Align_Left_d) &&
               ((Robot_Control_B.Set_Coral_Level_j == 2) ||
                (Robot_Control_B.Set_Coral_Level_j == 3))) {
      /* Switch: '<S26>/Switch3' incorporates:
       *  Constant: '<S26>/Constant'
       */
      rtb_Switch2_kn = AT_Reef_Target_L2_L3_X;
    } else if ((Robot_Control_B.Align_Left_d) &&
               (Robot_Control_B.Set_Coral_Level_j == 4)) {
      /* Switch: '<S26>/Switch5' incorporates:
       *  Constant: '<S26>/Constant5'
       *  Switch: '<S26>/Switch3'
       */
      rtb_Switch2_kn = AT_Reef_Target_L4_X;
    } else if ((Robot_Control_B.Align_Center_a) &&
               (Robot_Control_B.Set_Algae_Level_p != 0)) {
      /* Switch: '<S26>/Switch7' incorporates:
       *  Constant: '<S26>/Constant7'
       *  Switch: '<S26>/Switch3'
       *  Switch: '<S26>/Switch5'
       */
      rtb_Switch2_kn = AT_Reef_Target_Algae_X;
    } else {
      /* Switch: '<S26>/Switch5' incorporates:
       *  Switch: '<S26>/Switch3'
       *  UnitDelay: '<S26>/Unit Delay'
       */
      rtb_Switch2_kn = Robot_Control_DW.UnitDelay_DSTATE_b;
    }

    /* End of Switch: '<S26>/Switch2' */

    /* Sum: '<S26>/Subtract' */
    rtb_Subtract_ia = rtb_Switch2_kn - Robot_Control_B.Limelight_Tag_Corrected_X;

    /* SignalConversion: '<S25>/Signal Copy2' incorporates:
     *  UnaryMinus: '<S26>/Unary Minus1'
     */
    Robot_Control_B.Auto_AT_Relative_Error_X = -rtb_Subtract_ia;

    /* Logic: '<S26>/Logical Operator1' incorporates:
     *  Constant: '<S42>/Constant'
     *  Constant: '<S43>/Constant'
     *  Constant: '<S44>/Constant'
     *  Constant: '<S45>/Constant'
     *  Constant: '<S46>/Constant'
     *  Logic: '<S26>/Logical Operator2'
     *  Logic: '<S26>/Logical Operator3'
     *  Logic: '<S26>/Logical Operator4'
     *  Logic: '<S26>/NOT'
     *  RelationalOperator: '<S42>/Compare'
     *  RelationalOperator: '<S43>/Compare'
     *  RelationalOperator: '<S44>/Compare'
     *  RelationalOperator: '<S45>/Compare'
     *  RelationalOperator: '<S46>/Compare'
     */
    Compare = (((((!(Robot_Control_B.Limelight_Tag_Corrected_X == 0.0)) ||
                  (!(Robot_Control_B.Limelight_Tag_Corrected_Y == 0.0))) ||
                 (!(Robot_Control_B.Limelight_Tag_Corrected_Angle == 0.0))) &&
                ((Robot_Control_B.Set_Coral_Level_j != 0) ||
                 (Robot_Control_B.Set_Algae_Level_p != 0))) &&
               ((Robot_Control_B.Align_Left_d) ||
                (Robot_Control_B.Align_Center_a)));

    /* SignalConversion: '<S25>/Signal Copy1' */
    Robot_Control_B.Auto_AT_Relative_Enable = Compare;

    /* SignalConversion: '<S25>/Signal Copy7' incorporates:
     *  UnaryMinus: '<S26>/Unary Minus'
     */
    Robot_Control_B.Auto_AT_Relative_Error_Angle =
      -Robot_Control_B.Limelight_Tag_Corrected_Angle;

    /* Switch: '<S30>/Switch2' incorporates:
     *  Switch: '<S30>/Switch'
     *  Switch: '<S30>/Switch1'
     */
    if (Robot_Control_B.Auto_AT_Relative_Enable) {
      /* Merge: '<S19>/Merge3' incorporates:
       *  Trigonometry: '<S30>/Atan3'
       */
      Robot_Control_B.Translation_Angle = rt_atan2d_snf
        (Robot_Control_B.Auto_AT_Relative_Error_Y,
         Robot_Control_B.Auto_AT_Relative_Error_X);

      /* Product: '<S30>/Product2' incorporates:
       *  Constant: '<S30>/Constant4'
       */
      rtb_Product2_a = Robot_Control_B.Auto_AT_Relative_Error_Angle *
        AT_Steering_Error_Angle_Gain_P;

      /* Switch: '<S66>/Switch2' incorporates:
       *  Constant: '<S30>/Constant10'
       *  RelationalOperator: '<S66>/LowerRelop1'
       *  RelationalOperator: '<S66>/UpperRelop'
       *  Switch: '<S66>/Switch'
       *  UnaryMinus: '<S30>/Unary Minus'
       */
      if (rtb_Product2_a > AT_Steering_Speed_Max) {
        /* Merge: '<S19>/Merge2' */
        Robot_Control_B.Steering_Rel_Cmd = AT_Steering_Speed_Max;
      } else if (rtb_Product2_a < (-AT_Steering_Speed_Max)) {
        /* Switch: '<S66>/Switch' incorporates:
         *  Merge: '<S19>/Merge2'
         *  UnaryMinus: '<S30>/Unary Minus'
         */
        Robot_Control_B.Steering_Rel_Cmd = -AT_Steering_Speed_Max;
      } else {
        /* Merge: '<S19>/Merge2' incorporates:
         *  Switch: '<S66>/Switch'
         */
        Robot_Control_B.Steering_Rel_Cmd = rtb_Product2_a;
      }

      /* End of Switch: '<S66>/Switch2' */

      /* Merge: '<S19>/Merge4' incorporates:
       *  Constant: '<S30>/Constant8'
       *  Gain: '<S30>/Gain1'
       *  Math: '<S30>/Magnitude2'
       *  MinMax: '<S30>/Min1'
       */
      Robot_Control_B.Translation_Speed = fmin(AT_Translation_Speed_Max_Relative,
        AT_Translation_Control_Gain_Relative * rt_hypotd_snf
        (Robot_Control_B.Auto_AT_Relative_Error_X,
         Robot_Control_B.Auto_AT_Relative_Error_Y));
    } else {
      /* Merge: '<S19>/Merge3' */
      Robot_Control_B.Translation_Angle = Robot_Control_B.Translation_Angle_l;

      /* Merge: '<S19>/Merge2' incorporates:
       *  Constant: '<S30>/Constant2'
       */
      Robot_Control_B.Steering_Rel_Cmd = 0.0;

      /* Merge: '<S19>/Merge4' */
      Robot_Control_B.Translation_Speed = Robot_Control_B.Translation_Speed_g;
    }

    /* End of Switch: '<S30>/Switch2' */

    /* Abs: '<S26>/Abs2' incorporates:
     *  UnaryMinus: '<S26>/Unary Minus'
     */
    rtb_Product2_a = fabs(-Robot_Control_B.Limelight_Tag_Corrected_Angle);

    /* Abs: '<S26>/Abs' incorporates:
     *  UnaryMinus: '<S26>/Unary Minus1'
     */
    rtb_Subtract_ia = fabs(-rtb_Subtract_ia);

    /* Abs: '<S26>/Abs1' */
    rtb_Abs1 = fabs(rtb_Abs1);

    /* Merge: '<S19>/Merge23' incorporates:
     *  Constant: '<S33>/Constant'
     *  Constant: '<S40>/Constant'
     *  Constant: '<S41>/Constant'
     *  Logic: '<S26>/Logical Operator7'
     *  RelationalOperator: '<S33>/Compare'
     *  RelationalOperator: '<S40>/Compare'
     *  RelationalOperator: '<S41>/Compare'
     */
    Robot_Control_B.Swerve_Drive_Integral_Enable = (((Compare &&
      (rtb_Subtract_ia <= AT_Integral_Enable_Error_XY)) && (rtb_Abs1 <=
      AT_Integral_Enable_Error_XY)) && (rtb_Product2_a <=
      AT_Integral_Enable_Error_Angle));

    /* SignalConversion: '<S25>/Signal Copy8' incorporates:
     *  Constant: '<S37>/Constant'
     *  Constant: '<S38>/Constant'
     *  Constant: '<S39>/Constant'
     *  Logic: '<S26>/Logical Operator'
     *  RelationalOperator: '<S37>/Compare'
     *  RelationalOperator: '<S38>/Compare'
     *  RelationalOperator: '<S39>/Compare'
     */
    Robot_Control_B.Auto_AT_On_Target = (((Compare && (rtb_Subtract_ia <=
      AT_Max_Error_XY)) && (rtb_Abs1 <= AT_Max_Error_XY)) && (rtb_Product2_a <=
      AT_Max_Error_Angle));

    /* SignalConversion: '<S25>/Signal Copy9' */
    Compare_f = Robot_Control_B.Auto_AT_On_Target;

    /* Merge: '<S19>/Merge9' incorporates:
     *  Lookup_n-D: '<S25>/1-D Lookup Table'
     */
    Robot_Control_B.Spline_Num_Poses =
      rtCP_uDLookupTable_tableData[plook_u32u8_evencka(Robot_Control_B.Path_ID,
      1U, 1U, 19U)];

    /* Merge: '<S19>/Merge7' incorporates:
     *  SignalConversion: '<S25>/Signal Copy'
     */
    Robot_Control_B.Spline_Enable = Robot_Control_B.Path_Enable;

    /* Merge: '<S19>/Merge12' incorporates:
     *  Constant: '<S28>/Constant5'
     *  SignalConversion generated from: '<S2>/Reefscape_Motors_Enable'
     */
    Robot_Control_B.Reefscape_Motors_Enable_merge = true;

    /* Merge: '<S19>/Merge1' incorporates:
     *  Constant: '<S30>/Constant1'
     *  SignalConversion generated from: '<S2>/Steering_Abs_Cmd'
     */
    Robot_Control_B.Steering_Abs_Cmd = 0.0;

    /* SignalConversion generated from: '<S2>/Is_Absolute_Translation' incorporates:
     *  Constant: '<S30>/Constant3'
     */
    rtb_Is_Absolute_Translation_g = false;

    /* SignalConversion generated from: '<S2>/Is_Absolute_Steering' incorporates:
     *  Constant: '<S30>/Constant5'
     */
    rtb_Is_Absolute_Steering = false;

    /* Merge: '<S19>/Merge10' incorporates:
     *  Constant: '<S2>/Constant3'
     *  SignalConversion generated from: '<S2>/Test_Mode'
     */
    Robot_Control_B.Test_Mode = false;

    /* SignalConversion generated from: '<S2>/Enable_Wheels' incorporates:
     *  Constant: '<S2>/Constant1'
     */
    Robot_Reached_Destination = false;

    /* SignalConversion generated from: '<S2>/Reset_Wheel_Offsets' incorporates:
     *  Constant: '<S2>/Constant13'
     */
    rtb_Reset_Wheel_Offsets = false;

    /* SignalConversion generated from: '<S2>/Disable_Wheels' incorporates:
     *  Constant: '<S2>/Constant14'
     */
    rtb_Disable_Wheels = false;

    /* SignalConversion generated from: '<S2>/Swerve_Motors_Disabled' incorporates:
     *  Constant: '<S2>/Constant4'
     */
    Compare = false;

    /* SignalConversion generated from: '<S2>/Desired_Pipeline' incorporates:
     *  Constant: '<S2>/Constant'
     */
    rtb_Desired_Pipeline = 0U;

    /* Update for UnitDelay: '<S25>/Unit Delay1' */
    Robot_Control_DW.UnitDelay1_DSTATE_p = Robot_Control_B.Coral_Score_j;

    /* Update for UnitDelay: '<S25>/Unit Delay2' */
    Robot_Control_DW.UnitDelay2_DSTATE = Robot_Control_B.State_ID_Auto;

    /* Update for UnitDelay: '<S51>/Delay Input1'
     *
     * Block description for '<S51>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Robot_Control_DW.DelayInput1_DSTATE_l = Robot_Control_B.Gamepad_B1_A_out;

    /* Update for UnitDelay: '<S52>/Delay Input1' incorporates:
     *  Constant: '<S25>/Constant4'
     *
     * Block description for '<S52>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Robot_Control_DW.DelayInput1_DSTATE_bdz = false;

    /* Update for UnitDelay: '<S57>/Delay Input1'
     *
     * Block description for '<S57>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Robot_Control_DW.DelayInput1_DSTATE_au = Robot_Control_B.Gamepad_B3_X_out;

    /* Update for UnitDelay: '<S58>/Delay Input1'
     *
     * Block description for '<S58>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Robot_Control_DW.DelayInput1_DSTATE_ne = Robot_Control_B.Gamepad_B4_Y_out;

    /* Update for UnitDelay: '<S59>/Delay Input1'
     *
     * Block description for '<S59>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Robot_Control_DW.DelayInput1_DSTATE_ff = Robot_Control_B.Gamepad_Start_out;

    /* Update for UnitDelay: '<S53>/Delay Input1'
     *
     * Block description for '<S53>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Robot_Control_DW.DelayInput1_DSTATE_ev = Robot_Control_B.Gamepad_Back_out;

    /* Update for UnitDelay: '<S60>/Delay Input1' incorporates:
     *  Constant: '<S25>/Constant17'
     *
     * Block description for '<S60>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Robot_Control_DW.DelayInput1_DSTATE_o1g = false;

    /* Update for UnitDelay: '<S63>/Delay Input1' incorporates:
     *  Constant: '<S25>/Constant12'
     *
     * Block description for '<S63>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Robot_Control_DW.DelayInput1_DSTATE_os = false;

    /* Update for UnitDelay: '<S64>/Delay Input1'
     *
     * Block description for '<S64>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Robot_Control_DW.DelayInput1_DSTATE_b2 = Robot_Control_B.Gamepad_RT_out;

    /* Update for UnitDelay: '<S56>/Delay Input1' incorporates:
     *  Constant: '<S25>/Constant13'
     *
     * Block description for '<S56>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Robot_Control_DW.DelayInput1_DSTATE_bm = false;

    /* Update for UnitDelay: '<S61>/Delay Input1' incorporates:
     *  Constant: '<S25>/Constant2'
     *
     * Block description for '<S61>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Robot_Control_DW.DelayInput1_DSTATE_d = false;

    /* Update for UnitDelay: '<S62>/Delay Input1'
     *
     * Block description for '<S62>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Robot_Control_DW.DelayInput1_DSTATE_b3 = Robot_Control_B.Gamepad_POV_Down_k;

    /* Update for UnitDelay: '<S54>/Delay Input1'
     *
     * Block description for '<S54>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Robot_Control_DW.DelayInput1_DSTATE_ae = Robot_Control_B.Gamepad_POV_Left_p;

    /* Update for UnitDelay: '<S55>/Delay Input1' incorporates:
     *  Constant: '<S25>/Constant14'
     *
     * Block description for '<S55>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Robot_Control_DW.DelayInput1_DSTATE_mu = false;

    /* Update for UnitDelay: '<S25>/Unit Delay' */
    Robot_Control_DW.UnitDelay_DSTATE_i3 = Robot_Control_B.Auto_AT_On_Target;

    /* Update for UnitDelay: '<S26>/Unit Delay1' */
    Robot_Control_DW.UnitDelay1_DSTATE_ek = rtb_Switch_jz;

    /* Update for UnitDelay: '<S26>/Unit Delay' */
    Robot_Control_DW.UnitDelay_DSTATE_b = rtb_Switch2_kn;

    /* End of Outputs for SubSystem: '<S1>/Autonomous' */
    break;

   case 2:
    if (rtAction != rtPrevAction) {
      /* InitializeConditions for IfAction SubSystem: '<S1>/Teleop' incorporates:
       *  ActionPort: '<S23>/Action Port'
       */
      /* InitializeConditions for SwitchCase: '<S1>/Switch Case' incorporates:
       *  UnitDelay: '<S23>/Unit Delay'
       *  UnitDelay: '<S393>/Unit Delay'
       *  UnitDelay: '<S393>/Unit Delay1'
       *  UnitDelay: '<S415>/Unit Delay1'
       *  UnitDelay: '<S415>/Unit Delay2'
       *  UnitDelay: '<S415>/Unit Delay3'
       *  UnitDelay: '<S415>/Unit Delay4'
       *  UnitDelay: '<S418>/Delay Input1'
       *  UnitDelay: '<S419>/Delay Input1'
       *  UnitDelay: '<S420>/Delay Input1'
       *  UnitDelay: '<S421>/Delay Input1'
       *  UnitDelay: '<S423>/Delay Input1'
       *  UnitDelay: '<S429>/Unit Delay'
       *  UnitDelay: '<S429>/Unit Delay1'
       *  UnitDelay: '<S433>/FixPt Unit Delay1'
       *  UnitDelay: '<S433>/FixPt Unit Delay2'
       *  UnitDelay: '<S436>/Delay Input1'
       *  UnitDelay: '<S437>/Delay Input1'
       *  UnitDelay: '<S438>/Delay Input1'
       *  UnitDelay: '<S439>/Delay Input1'
       *  UnitDelay: '<S440>/Delay Input1'
       *  UnitDelay: '<S441>/Delay Input1'
       *  UnitDelay: '<S442>/Delay Input1'
       *  UnitDelay: '<S443>/Delay Input1'
       *  UnitDelay: '<S444>/Delay Input1'
       *  UnitDelay: '<S445>/Delay Input1'
       *  UnitDelay: '<S446>/Delay Input1'
       *  UnitDelay: '<S447>/Delay Input1'
       *  UnitDelay: '<S448>/Delay Input1'
       *  UnitDelay: '<S449>/Delay Input1'
       *
       * Block description for '<S418>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S419>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S420>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S421>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S423>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S436>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S437>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S438>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S439>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S440>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S441>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S442>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S443>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S444>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S445>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S446>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S447>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S448>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S449>/Delay Input1':
       *
       *  Store in Global RAM
       */
      Robot_Control_DW.DelayInput1_DSTATE_c = 0.0;
      Robot_Control_DW.DelayInput1_DSTATE_nr = 0.0;
      Robot_Control_DW.DelayInput1_DSTATE_ez = 0.0;
      Robot_Control_DW.DelayInput1_DSTATE_nh = 0.0;
      Robot_Control_DW.DelayInput1_DSTATE_i = 0.0;
      Robot_Control_DW.DelayInput1_DSTATE_cp = 0.0;
      Robot_Control_DW.DelayInput1_DSTATE_p = 0.0;
      Robot_Control_DW.DelayInput1_DSTATE_o = 0.0;
      Robot_Control_DW.DelayInput1_DSTATE_j = 0.0;
      Robot_Control_DW.DelayInput1_DSTATE_b = 0.0;
      Robot_Control_DW.DelayInput1_DSTATE_oy = false;
      Robot_Control_DW.DelayInput1_DSTATE_f = false;
      Robot_Control_DW.DelayInput1_DSTATE_o5 = false;
      Robot_Control_DW.DelayInput1_DSTATE_a = false;
      Robot_Control_DW.UnitDelay_DSTATE_ia = false;
      Robot_Control_DW.UnitDelay1_DSTATE_nr = 0.0;
      Robot_Control_DW.UnitDelay_DSTATE_kq = 0.0;
      Robot_Control_DW.UnitDelay1_DSTATE_l = 0.0;
      Robot_Control_DW.UnitDelay_DSTATE_p = 0.0;
      Robot_Control_DW.FixPtUnitDelay2_DSTATE_a = 1U;
      Robot_Control_DW.FixPtUnitDelay1_DSTATE_f = 0.0;
      Robot_Control_DW.DelayInput1_DSTATE_jp = false;
      Robot_Control_DW.DelayInput1_DSTATE_m = false;
      Robot_Control_DW.DelayInput1_DSTATE_k = false;
      Robot_Control_DW.DelayInput1_DSTATE_g = false;
      Robot_Control_DW.DelayInput1_DSTATE_g2 = false;
      Robot_Control_DW.UnitDelay2_DSTATE_l = false;
      Robot_Control_DW.UnitDelay4_DSTATE = false;
      Robot_Control_DW.UnitDelay3_DSTATE = 0.0;
      Robot_Control_DW.UnitDelay1_DSTATE_j2 = 0.0;

      /* End of InitializeConditions for SubSystem: '<S1>/Teleop' */

      /* SystemReset for IfAction SubSystem: '<S1>/Teleop' incorporates:
       *  ActionPort: '<S23>/Action Port'
       */
      /* Outputs for IfAction SubSystem: '<S1>/Teleop' incorporates:
       *  ActionPort: '<S23>/Action Port'
       */
      /* SystemReset for SwitchCase: '<S1>/Switch Case' incorporates:
       *  Chart: '<S395>/Reefscape_Chart'
       *  SignalConversion generated from: '<S23>/Algae_Wheel_Outside_DutyCycle'
       */
      Robot_Con_Reefscape_Chart_Reset(&Robot_Control_B.State_ID_Teleop,
        &Robot_Control_B.Elevator_Height_Desired,
        &Robot_Control_B.Coral_Arm_Angle_Desired,
        &Robot_Control_B.Coral_Wheel_DC, &rtb_Algae_Wheel_Outside_DutyCyc,
        &rtb_Algae_Wheel_Inside_DutyCycl,
        &Robot_Control_B.Elevator_LowerPickup_Reset,
        &Robot_Control_B.Coral_Pickup_Lower_Wait_State,
        &Robot_Control_B.Set_Coral_Level, &Robot_Control_B.Set_Algae_Level,
        &Robot_Reached_Destination, &Robot_Control_B.Desired_Pipeline,
        &Robot_Control_DW.sf_Reefscape_Chart_n);

      /* End of Outputs for SubSystem: '<S1>/Teleop' */
      /* End of SystemReset for SubSystem: '<S1>/Teleop' */
    }

    /* Outputs for IfAction SubSystem: '<S1>/Teleop' incorporates:
     *  ActionPort: '<S23>/Action Port'
     */
    /* SignalConversion generated from: '<S23>/Spline_Ref_Poses' incorporates:
     *  Merge: '<S19>/Merge8'
     */
    memset(&rtb_Spline_Ref_Poses[0], 0, 40U * (sizeof(real_T)));

    /* DeadZone: '<S395>/Dead Zone' incorporates:
     *  Inport: '<Root>/Gamepad_Stick_Left_Y'
     */
    if (Robot_Control_U.Gamepad_Stick_Left_Y > 0.1) {
      u0 = Robot_Control_U.Gamepad_Stick_Left_Y - 0.1;
    } else if (Robot_Control_U.Gamepad_Stick_Left_Y >= -0.1) {
      u0 = 0.0;
    } else {
      u0 = Robot_Control_U.Gamepad_Stick_Left_Y - -0.1;
    }

    /* DeadZone: '<S395>/Dead Zone1' incorporates:
     *  Inport: '<Root>/Gamepad_Stick_Right_Y'
     */
    if (Robot_Control_U.Gamepad_Stick_Right_Y > 0.1) {
      rtb_Switch2_et = Robot_Control_U.Gamepad_Stick_Right_Y - 0.1;
    } else if (Robot_Control_U.Gamepad_Stick_Right_Y >= -0.1) {
      rtb_Switch2_et = 0.0;
    } else {
      rtb_Switch2_et = Robot_Control_U.Gamepad_Stick_Right_Y - -0.1;
    }

    /* SignalConversion generated from: '<S23>/Algae_Wheel_Outside_DutyCycle' incorporates:
     *  Chart: '<S395>/Reefscape_Chart'
     *  Constant: '<S23>/Constant'
     *  DeadZone: '<S395>/Dead Zone'
     *  DeadZone: '<S395>/Dead Zone1'
     *  Inport: '<Root>/Coral_TOF_Distance'
     *  Inport: '<Root>/Gamepad_B1_A'
     *  Inport: '<Root>/Gamepad_B2_B'
     *  Inport: '<Root>/Gamepad_B3_X'
     *  Inport: '<Root>/Gamepad_B4_Y'
     *  Inport: '<Root>/Gamepad_Back'
     *  Inport: '<Root>/Gamepad_LT'
     *  Inport: '<Root>/Gamepad_RB'
     *  Inport: '<Root>/Gamepad_RT'
     *  Inport: '<Root>/Gamepad_Start'
     *  Inport: '<Root>/Joystick_Right_B1'
     *  Logic: '<S395>/Logical Operator'
     *  RelationalOperator: '<S436>/FixPt Relational Operator'
     *  RelationalOperator: '<S437>/FixPt Relational Operator'
     *  RelationalOperator: '<S438>/FixPt Relational Operator'
     *  RelationalOperator: '<S439>/FixPt Relational Operator'
     *  RelationalOperator: '<S440>/FixPt Relational Operator'
     *  RelationalOperator: '<S441>/FixPt Relational Operator'
     *  RelationalOperator: '<S442>/FixPt Relational Operator'
     *  RelationalOperator: '<S443>/FixPt Relational Operator'
     *  RelationalOperator: '<S444>/FixPt Relational Operator'
     *  RelationalOperator: '<S445>/FixPt Relational Operator'
     *  RelationalOperator: '<S446>/FixPt Relational Operator'
     *  RelationalOperator: '<S447>/FixPt Relational Operator'
     *  RelationalOperator: '<S448>/FixPt Relational Operator'
     *  RelationalOperator: '<S449>/FixPt Relational Operator'
     *  UnitDelay: '<S23>/Unit Delay'
     *  UnitDelay: '<S436>/Delay Input1'
     *  UnitDelay: '<S437>/Delay Input1'
     *  UnitDelay: '<S438>/Delay Input1'
     *  UnitDelay: '<S439>/Delay Input1'
     *  UnitDelay: '<S440>/Delay Input1'
     *  UnitDelay: '<S441>/Delay Input1'
     *  UnitDelay: '<S442>/Delay Input1'
     *  UnitDelay: '<S443>/Delay Input1'
     *  UnitDelay: '<S444>/Delay Input1'
     *  UnitDelay: '<S445>/Delay Input1'
     *  UnitDelay: '<S446>/Delay Input1'
     *  UnitDelay: '<S447>/Delay Input1'
     *  UnitDelay: '<S448>/Delay Input1'
     *  UnitDelay: '<S449>/Delay Input1'
     *
     * Block description for '<S436>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S437>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S438>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S439>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S440>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S441>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S442>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S443>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S444>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S445>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S446>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S447>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S448>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S449>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Robot_Control_Reefscape_Chart(2, (Robot_Control_U.Gamepad_B1_A >
      Robot_Control_DW.DelayInput1_DSTATE_c), (Robot_Control_U.Gamepad_B2_B >
      Robot_Control_DW.DelayInput1_DSTATE_nr), (Robot_Control_U.Gamepad_B3_X >
      Robot_Control_DW.DelayInput1_DSTATE_ez), (Robot_Control_U.Gamepad_B4_Y >
      Robot_Control_DW.DelayInput1_DSTATE_nh), (Robot_Control_U.Gamepad_Start >
      Robot_Control_DW.DelayInput1_DSTATE_i), (Robot_Control_U.Gamepad_Back >
      Robot_Control_DW.DelayInput1_DSTATE_cp), (Robot_Control_U.Gamepad_RB >
      Robot_Control_DW.DelayInput1_DSTATE_p), (Robot_Control_U.Gamepad_LT >
      Robot_Control_DW.DelayInput1_DSTATE_o), ((Robot_Control_U.Gamepad_RT >
      Robot_Control_DW.DelayInput1_DSTATE_j) ||
      (Robot_Control_U.Joystick_Right_B1 > Robot_Control_DW.DelayInput1_DSTATE_b)),
      (((int32_T)Robot_Control_B.Gamepad_POV_Up) > ((int32_T)
      Robot_Control_DW.DelayInput1_DSTATE_oy)), (((int32_T)
      Robot_Control_B.Gamepad_POV_Down) > ((int32_T)
      Robot_Control_DW.DelayInput1_DSTATE_f)), (((int32_T)
      Robot_Control_B.Gamepad_POV_Left) > ((int32_T)
      Robot_Control_DW.DelayInput1_DSTATE_o5)), (((int32_T)
      Robot_Control_B.Gamepad_POV_Right) > ((int32_T)
      Robot_Control_DW.DelayInput1_DSTATE_a)), u0, rtb_Switch2_et,
      Robot_Control_B.Elevator_Height_Measured,
      Robot_Control_B.Coral_Arm_Angle_Measured,
      Robot_Control_U.Coral_TOF_Distance, Compare, Compare_f,
      Robot_Control_DW.UnitDelay_DSTATE_ia, &Robot_Control_B.State_ID_Teleop,
      &Robot_Control_B.Elevator_Height_Desired,
      &Robot_Control_B.Coral_Arm_Angle_Desired, &Robot_Control_B.Coral_Wheel_DC,
      &rtb_Algae_Wheel_Outside_DutyCyc, &rtb_Algae_Wheel_Inside_DutyCycl,
      &Robot_Control_B.Elevator_LowerPickup_Reset,
      &Robot_Control_B.Coral_Pickup_Lower_Wait_State,
      &Robot_Control_B.Set_Coral_Level, &Robot_Control_B.Set_Algae_Level,
      &Robot_Reached_Destination, &Robot_Control_B.Desired_Pipeline,
      &Robot_Control_DW.sf_Reefscape_Chart_n);

    /* Switch: '<S393>/Switch' incorporates:
     *  Constant: '<S393>/Constant1'
     *  Constant: '<S402>/Constant'
     *  Constant: '<S413>/Constant'
     *  Logic: '<S393>/AND'
     *  Logic: '<S393>/AND1'
     *  RelationalOperator: '<S402>/Compare'
     *  RelationalOperator: '<S413>/Compare'
     *  Switch: '<S393>/Switch1'
     *  Switch: '<S393>/Switch4'
     *  Switch: '<S393>/Switch6'
     */
    if (Robot_Control_B.Align_Left) {
      rtb_Switch_jz = AT_Reef_Target_Left_Y;
    } else if (Robot_Control_B.Align_Right) {
      /* Switch: '<S393>/Switch1' incorporates:
       *  Constant: '<S393>/Constant2'
       */
      rtb_Switch_jz = AT_Reef_Target_Right_Y;
    } else if ((Robot_Control_B.Align_Center) &&
               (Robot_Control_B.Set_Coral_Level == 1)) {
      /* Switch: '<S393>/Switch4' incorporates:
       *  Constant: '<S393>/Constant3'
       *  Switch: '<S393>/Switch1'
       */
      rtb_Switch_jz = AT_Reef_Target_Center_Y;
    } else if ((Robot_Control_B.Align_Center) &&
               (Robot_Control_B.Set_Algae_Level != 0)) {
      /* Switch: '<S393>/Switch6' incorporates:
       *  Constant: '<S393>/Constant6'
       *  Switch: '<S393>/Switch1'
       *  Switch: '<S393>/Switch4'
       */
      rtb_Switch_jz = AT_Reef_Target_Algae_Y;
    } else {
      /* Switch: '<S393>/Switch4' incorporates:
       *  Switch: '<S393>/Switch1'
       *  UnitDelay: '<S393>/Unit Delay1'
       */
      rtb_Switch_jz = Robot_Control_DW.UnitDelay1_DSTATE_nr;
    }

    /* End of Switch: '<S393>/Switch' */

    /* Sum: '<S393>/Subtract1' */
    rtb_Coral_Wheel_DutyCycle_merge = rtb_Switch_jz -
      Robot_Control_B.Limelight_Tag_Corrected_Y;

    /* SignalConversion: '<S23>/Signal Copy8' */
    Robot_Control_B.AT_Relative_Error_Error_Y = rtb_Coral_Wheel_DutyCycle_merge;

    /* Switch: '<S393>/Switch2' incorporates:
     *  Constant: '<S393>/Constant4'
     *  Constant: '<S401>/Constant'
     *  Logic: '<S393>/AND2'
     *  RelationalOperator: '<S401>/Compare'
     */
    if ((Robot_Control_B.Align_Center) && (Robot_Control_B.Set_Coral_Level == 1))
    {
      rtb_Abs1 = AT_Reef_Target_L1_X;
    } else {
      /* Logic: '<S393>/OR' */
      Compare = ((Robot_Control_B.Align_Left) || (Robot_Control_B.Align_Right));

      /* Switch: '<S393>/Switch3' incorporates:
       *  Constant: '<S393>/Constant'
       *  Constant: '<S397>/Constant'
       *  Constant: '<S398>/Constant'
       *  Constant: '<S400>/Constant'
       *  Constant: '<S414>/Constant'
       *  Logic: '<S393>/AND3'
       *  Logic: '<S393>/Logical Operator5'
       *  Logic: '<S393>/Logical Operator6'
       *  Logic: '<S393>/OR1'
       *  RelationalOperator: '<S397>/Compare'
       *  RelationalOperator: '<S398>/Compare'
       *  RelationalOperator: '<S400>/Compare'
       *  RelationalOperator: '<S414>/Compare'
       *  Switch: '<S393>/Switch5'
       *  Switch: '<S393>/Switch7'
       */
      if (Compare && ((Robot_Control_B.Set_Coral_Level == 2) ||
                      (Robot_Control_B.Set_Coral_Level == 3))) {
        rtb_Abs1 = AT_Reef_Target_L2_L3_X;
      } else if (Compare && (Robot_Control_B.Set_Coral_Level == 4)) {
        /* Switch: '<S393>/Switch5' incorporates:
         *  Constant: '<S393>/Constant5'
         */
        rtb_Abs1 = AT_Reef_Target_L4_X;
      } else if ((Robot_Control_B.Align_Center) &&
                 (Robot_Control_B.Set_Algae_Level != 0)) {
        /* Switch: '<S393>/Switch7' incorporates:
         *  Constant: '<S393>/Constant7'
         *  Switch: '<S393>/Switch5'
         */
        rtb_Abs1 = AT_Reef_Target_Algae_X;
      } else {
        /* Switch: '<S393>/Switch5' incorporates:
         *  UnitDelay: '<S393>/Unit Delay'
         */
        rtb_Abs1 = Robot_Control_DW.UnitDelay_DSTATE_kq;
      }

      /* End of Switch: '<S393>/Switch3' */
    }

    /* End of Switch: '<S393>/Switch2' */

    /* Sum: '<S393>/Subtract' */
    rtb_Subtract_b2 = rtb_Abs1 - Robot_Control_B.Limelight_Tag_Corrected_X;

    /* SignalConversion: '<S23>/Signal Copy7' incorporates:
     *  UnaryMinus: '<S393>/Unary Minus1'
     */
    Robot_Control_B.AT_Relative_Error_Error_X = -rtb_Subtract_b2;

    /* DeadZone: '<S416>/Dead Zone' */
    if (Robot_Control_B.Drive_Joystick_Z > Twist_Deadzone_pos) {
      rtb_DeadZone = Robot_Control_B.Drive_Joystick_Z - Twist_Deadzone_pos;
    } else if (Robot_Control_B.Drive_Joystick_Z >= Twist_Deadzone_neg) {
      rtb_DeadZone = 0.0;
    } else {
      rtb_DeadZone = Robot_Control_B.Drive_Joystick_Z - Twist_Deadzone_neg;
    }

    /* End of DeadZone: '<S416>/Dead Zone' */

    /* Lookup_n-D: '<S416>/Modulation_Drv' incorporates:
     *  Math: '<S416>/Magnitude'
     */
    rtb_Modulation_Drv = look1_binlcpw(rt_hypotd_snf
      (Robot_Control_B.Drive_Joystick_X, Robot_Control_B.Drive_Joystick_Y),
      rtCP_Modulation_Drv_bp01Data, rtCP_Modulation_Drv_tableData, 20U);

    /* RelationalOperator: '<S427>/Compare' incorporates:
     *  Constant: '<S427>/Constant'
     */
    Robot_Reached_Destination = (rtb_Modulation_Drv == 0.0);

    /* Logic: '<S416>/Logical Operator' incorporates:
     *  Constant: '<S428>/Constant'
     *  RelationalOperator: '<S428>/Compare'
     */
    rtb_Disable_Wheels = ((rtb_DeadZone != 0.0) && Robot_Reached_Destination);

    /* Logic: '<S393>/Logical Operator1' incorporates:
     *  Constant: '<S408>/Constant'
     *  Constant: '<S409>/Constant'
     *  Constant: '<S410>/Constant'
     *  Constant: '<S411>/Constant'
     *  Constant: '<S412>/Constant'
     *  Logic: '<S393>/Logical Operator2'
     *  Logic: '<S393>/Logical Operator3'
     *  Logic: '<S393>/Logical Operator4'
     *  Logic: '<S393>/NOT'
     *  RelationalOperator: '<S408>/Compare'
     *  RelationalOperator: '<S409>/Compare'
     *  RelationalOperator: '<S410>/Compare'
     *  RelationalOperator: '<S411>/Compare'
     *  RelationalOperator: '<S412>/Compare'
     */
    Compare = (((((!(Robot_Control_B.Limelight_Tag_Corrected_X == 0.0)) ||
                  (!(Robot_Control_B.Limelight_Tag_Corrected_Y == 0.0))) ||
                 (!(Robot_Control_B.Limelight_Tag_Corrected_Angle == 0.0))) &&
                ((Robot_Control_B.Set_Coral_Level != 0) ||
                 (Robot_Control_B.Set_Algae_Level != 0))) &&
               (((Robot_Control_B.Align_Left) || (Robot_Control_B.Align_Right)) ||
                (Robot_Control_B.Align_Center)));

    /* SignalConversion: '<S23>/Signal Copy6' */
    Robot_Control_B.AT_Relative_Error_Enable = Compare;

    /* Logic: '<S416>/Logical Operator1' */
    rtb_Reset_Wheel_Offsets = (((Robot_Control_B.Drive_Engage_Hook) ||
      (Robot_Control_B.AT_Relative_Error_Enable)) || rtb_Disable_Wheels);

    /* Switch: '<S429>/Switch1' incorporates:
     *  Constant: '<S434>/Constant'
     *  Constant: '<S435>/Constant'
     *  Logic: '<S429>/AND'
     *  RelationalOperator: '<S434>/Compare'
     *  RelationalOperator: '<S435>/Compare'
     *  Switch: '<S429>/Switch2'
     *  UnitDelay: '<S429>/Unit Delay'
     *  UnitDelay: '<S429>/Unit Delay1'
     */
    if ((Robot_Control_B.Drive_Joystick_X == 0.0) &&
        (Robot_Control_B.Drive_Joystick_Y == 0.0)) {
      rtb_Switch2_kn = Robot_Control_DW.UnitDelay1_DSTATE_l;
      rtb_Subtract_ia = Robot_Control_DW.UnitDelay_DSTATE_p;
    } else {
      rtb_Switch2_kn = Robot_Control_B.Drive_Joystick_Y;
      rtb_Subtract_ia = Robot_Control_B.Drive_Joystick_X;
    }

    /* End of Switch: '<S429>/Switch1' */

    /* Switch: '<S416>/Switch9' incorporates:
     *  Switch: '<S416>/Switch4'
     */
    if (rtb_Reset_Wheel_Offsets) {
      /* Switch: '<S416>/Switch3' incorporates:
       *  Switch: '<S416>/Switch1'
       */
      if (Robot_Control_B.Drive_Engage_Hook) {
        /* Merge: '<S19>/Merge3' incorporates:
         *  Constant: '<S416>/Constant9'
         */
        Robot_Control_B.Translation_Angle = Drive_Engage_Hook_Angle;
      } else if (rtb_Disable_Wheels) {
        /* Signum: '<S416>/Sign' incorporates:
         *  Switch: '<S416>/Switch1'
         */
        if (rtIsNaN(rtb_DeadZone)) {
          u0 = (rtNaN);
        } else if (rtb_DeadZone < 0.0) {
          u0 = -1.0;
        } else {
          u0 = (rtb_DeadZone > 0.0);
        }

        /* Switch: '<S416>/Switch5' incorporates:
         *  Constant: '<S416>/Constant3'
         *  Constant: '<S416>/Constant4'
         *  Switch: '<S416>/Switch1'
         */
        if (Robot_Control_B.Drive_Joystick_Z_Mode) {
          rtb_Switch2_et = -1.5707963267948966;
        } else {
          rtb_Switch2_et = 0.0;
        }

        /* Merge: '<S19>/Merge3' incorporates:
         *  Gain: '<S416>/Gain3'
         *  Signum: '<S416>/Sign'
         *  Sum: '<S416>/Add'
         *  Switch: '<S416>/Switch1'
         *  Switch: '<S416>/Switch5'
         */
        Robot_Control_B.Translation_Angle = (3.1415926535897931 * u0) +
          rtb_Switch2_et;
      } else {
        /* Merge: '<S19>/Merge3' incorporates:
         *  Switch: '<S416>/Switch1'
         *  Trigonometry: '<S416>/Atan3'
         */
        Robot_Control_B.Translation_Angle = rt_atan2d_snf
          (Robot_Control_B.AT_Relative_Error_Error_Y,
           Robot_Control_B.AT_Relative_Error_Error_X);
      }

      /* End of Switch: '<S416>/Switch3' */
    } else if (Robot_Reached_Destination) {
      /* Switch: '<S416>/Switch6' incorporates:
       *  Inport: '<Root>/IsBlueAlliance'
       *  Switch: '<S416>/Switch4'
       */
      if (Robot_Control_U.IsBlueAlliance != 0.0) {
        /* Merge: '<S19>/Merge3' incorporates:
         *  Constant: '<S416>/Constant'
         */
        Robot_Control_B.Translation_Angle = 0.0;
      } else {
        /* Merge: '<S19>/Merge3' incorporates:
         *  Constant: '<S416>/Constant1'
         */
        Robot_Control_B.Translation_Angle = 3.1415926535897931;
      }

      /* End of Switch: '<S416>/Switch6' */
    } else {
      /* Merge: '<S19>/Merge3' incorporates:
       *  Switch: '<S416>/Switch4'
       *  Trigonometry: '<S416>/Atan2'
       */
      Robot_Control_B.Translation_Angle = rt_atan2d_snf(rtb_Switch2_kn,
        rtb_Subtract_ia);
    }

    /* End of Switch: '<S416>/Switch9' */

    /* Switch: '<S426>/Switch1' incorporates:
     *  Constant: '<S426>/Constant'
     *  Constant: '<S426>/Constant1'
     */
    if (Robot_Control_B.Is_Boosting) {
      rtb_Add_h5 = Boost_Trigger_High_Speed;
    } else {
      rtb_Add_h5 = Boost_Trigger_Low_Speed;
    }

    /* End of Switch: '<S426>/Switch1' */

    /* Switch: '<S433>/Init' incorporates:
     *  UnitDelay: '<S433>/FixPt Unit Delay1'
     *  UnitDelay: '<S433>/FixPt Unit Delay2'
     */
    if (Robot_Control_DW.FixPtUnitDelay2_DSTATE_a != 0) {
      rtb_Abs2_p = rtb_Add_h5;
    } else {
      rtb_Abs2_p = Robot_Control_DW.FixPtUnitDelay1_DSTATE_f;
    }

    /* End of Switch: '<S433>/Init' */

    /* Sum: '<S431>/Sum1' */
    rtb_Product2_a = rtb_Add_h5 - rtb_Abs2_p;

    /* Switch: '<S432>/Switch2' incorporates:
     *  Constant: '<S430>/Constant1'
     *  Constant: '<S430>/Constant3'
     *  RelationalOperator: '<S432>/LowerRelop1'
     *  RelationalOperator: '<S432>/UpperRelop'
     *  Switch: '<S432>/Switch'
     */
    if (rtb_Product2_a > Boost_Trigger_Increasing_Limit) {
      rtb_Product2_a = Boost_Trigger_Increasing_Limit;
    } else if (rtb_Product2_a < Boost_Trigger_Decreasing_Limit) {
      /* Switch: '<S432>/Switch' incorporates:
       *  Constant: '<S430>/Constant1'
       */
      rtb_Product2_a = Boost_Trigger_Decreasing_Limit;
    }

    /* Sum: '<S431>/Sum' incorporates:
     *  Switch: '<S432>/Switch2'
     */
    rtb_Product2_a += rtb_Abs2_p;

    /* Switch: '<S416>/Switch8' incorporates:
     *  Switch: '<S416>/Switch2'
     */
    if (rtb_Reset_Wheel_Offsets) {
      /* Switch: '<S416>/Switch10' incorporates:
       *  Switch: '<S416>/Switch'
       */
      if (Robot_Control_B.Drive_Engage_Hook) {
        /* Merge: '<S19>/Merge4' incorporates:
         *  Constant: '<S416>/Constant7'
         */
        Robot_Control_B.Translation_Speed = Drive_Engage_Hook_Speed;
      } else if (rtb_Disable_Wheels) {
        /* Switch: '<S416>/Switch' incorporates:
         *  Gain: '<S416>/Gain'
         *  Merge: '<S19>/Merge4'
         */
        Robot_Control_B.Translation_Speed = Translation_Twist_Gain *
          rtb_DeadZone;
      } else {
        /* Merge: '<S19>/Merge4' incorporates:
         *  Constant: '<S416>/Constant8'
         *  Gain: '<S416>/Gain1'
         *  Math: '<S416>/Magnitude2'
         *  MinMax: '<S416>/Min1'
         *  Switch: '<S416>/Switch'
         */
        Robot_Control_B.Translation_Speed = fmin
          (AT_Translation_Speed_Max_Relative,
           AT_Translation_Control_Gain_Relative * rt_hypotd_snf
           (Robot_Control_B.AT_Relative_Error_Error_X,
            Robot_Control_B.AT_Relative_Error_Error_Y));
      }

      /* End of Switch: '<S416>/Switch10' */
    } else if (Robot_Reached_Destination) {
      /* Merge: '<S19>/Merge4' incorporates:
       *  Constant: '<S23>/Constant7'
       *  Constant: '<S23>/Constant8'
       *  Constant: '<S416>/Constant5'
       *  Gain: '<S416>/Gain2'
       *  Math: '<S416>/Magnitude1'
       *  MinMax: '<S416>/Min'
       *  Switch: '<S416>/Switch2'
       */
      Robot_Control_B.Translation_Speed = fmin(AT_Translation_Speed_Max_Field,
        AT_Translation_Control_Gain_Field * 0.0);
    } else {
      /* Product: '<S426>/Product' incorporates:
       *  Switch: '<S416>/Switch2'
       */
      u0 = rtb_Modulation_Drv * rtb_Product2_a;

      /* Saturate: '<S426>/Saturation' incorporates:
       *  Switch: '<S416>/Switch2'
       */
      if (u0 > Boost_Trigger_High_Speed) {
        /* Merge: '<S19>/Merge4' */
        Robot_Control_B.Translation_Speed = Boost_Trigger_High_Speed;
      } else if (u0 < (-Boost_Trigger_High_Speed)) {
        /* Merge: '<S19>/Merge4' */
        Robot_Control_B.Translation_Speed = -Boost_Trigger_High_Speed;
      } else {
        /* Merge: '<S19>/Merge4' */
        Robot_Control_B.Translation_Speed = u0;
      }

      /* End of Saturate: '<S426>/Saturation' */
    }

    /* End of Switch: '<S416>/Switch8' */

    /* Switch: '<S396>/Switch' incorporates:
     *  Constant: '<S396>/Constant5'
     *  Constant: '<S396>/Constant7'
     *  DataTypeConversion: '<S396>/Data Type Conversion'
     *  Switch: '<S416>/Switch7'
     */
    if (TEST_Swerve_Mode_Override_Flag != 0.0) {
      rtb_Is_Absolute_Translation_g = (TEST_Swerve_Mode_Translation != 0.0);
    } else {
      rtb_Is_Absolute_Translation_g = !rtb_Reset_Wheel_Offsets;
    }

    /* End of Switch: '<S396>/Switch' */

    /* SignalConversion: '<S23>/Signal Copy9' incorporates:
     *  UnaryMinus: '<S393>/Unary Minus'
     */
    Robot_Control_B.AT_Relative_Error_Angle =
      -Robot_Control_B.Limelight_Tag_Corrected_Angle;

    /* Switch: '<S415>/Switch' incorporates:
     *  Constant: '<S415>/Constant9'
     */
    if (Robot_Control_B.AT_Relative_Error_Enable) {
      /* Product: '<S415>/Product2' incorporates:
       *  Constant: '<S415>/Constant4'
       */
      rtb_Abs2_p = Robot_Control_B.AT_Relative_Error_Angle *
        AT_Steering_Error_Angle_Gain_P;

      /* Switch: '<S425>/Switch2' incorporates:
       *  Constant: '<S415>/Constant10'
       *  RelationalOperator: '<S425>/LowerRelop1'
       *  RelationalOperator: '<S425>/UpperRelop'
       *  Switch: '<S425>/Switch'
       *  UnaryMinus: '<S415>/Unary Minus'
       */
      if (rtb_Abs2_p > AT_Steering_Speed_Max) {
        rtb_Add_h5 = AT_Steering_Speed_Max;
      } else if (rtb_Abs2_p < (-AT_Steering_Speed_Max)) {
        /* Switch: '<S425>/Switch' incorporates:
         *  UnaryMinus: '<S415>/Unary Minus'
         */
        rtb_Add_h5 = -AT_Steering_Speed_Max;
      } else {
        rtb_Add_h5 = rtb_Abs2_p;
      }

      /* End of Switch: '<S425>/Switch2' */
    } else {
      rtb_Add_h5 = 0.0;
    }

    /* End of Switch: '<S415>/Switch' */

    /* DeadZone: '<S415>/Dead Zone' */
    if (Robot_Control_B.Steer_Joystick_Z > Twist_Deadzone_pos) {
      u0 = Robot_Control_B.Steer_Joystick_Z - Twist_Deadzone_pos;
    } else if (Robot_Control_B.Steer_Joystick_Z >= Twist_Deadzone_neg) {
      u0 = 0.0;
    } else {
      u0 = Robot_Control_B.Steer_Joystick_Z - Twist_Deadzone_neg;
    }

    /* Sum: '<S415>/Add' incorporates:
     *  Constant: '<S415>/Constant'
     *  Constant: '<S415>/Constant1'
     *  DeadZone: '<S415>/Dead Zone'
     *  Lookup_n-D: '<S415>/Modulation_Str_Y_Rel'
     *  Product: '<S415>/Product'
     *  Product: '<S415>/Product1'
     *  SignalConversion: '<S15>/Signal Copy5'
     */
    rtb_Add_h5 += (look1_binlcpw(Robot_Control_B.Steer_Joystick_Y,
      rtCP_Modulation_Str_Y_Rel_bp01D, rtCP_Modulation_Str_Y_Rel_table, 20U) *
                   Steering_Relative_Gain) + (u0 * Steering_Twist_Gain);

    /* RelationalOperator: '<S417>/Compare' incorporates:
     *  Constant: '<S417>/Constant'
     */
    rtb_Compare_jp = (rtb_Add_h5 == 0.0);

    /* Switch: '<S396>/Switch1' incorporates:
     *  Constant: '<S396>/Constant5'
     *  Constant: '<S396>/Constant8'
     *  DataTypeConversion: '<S396>/Data Type Conversion1'
     */
    if (TEST_Swerve_Mode_Override_Flag != 0.0) {
      rtb_Is_Absolute_Steering = (TEST_Swerve_Mode_Steering != 0.0);
    } else {
      rtb_Is_Absolute_Steering = rtb_Compare_jp;
    }

    /* End of Switch: '<S396>/Switch1' */

    /* Logic: '<S415>/AND2' incorporates:
     *  RelationalOperator: '<S418>/FixPt Relational Operator'
     *  RelationalOperator: '<S419>/FixPt Relational Operator'
     *  RelationalOperator: '<S420>/FixPt Relational Operator'
     *  RelationalOperator: '<S421>/FixPt Relational Operator'
     *  UnitDelay: '<S418>/Delay Input1'
     *  UnitDelay: '<S419>/Delay Input1'
     *  UnitDelay: '<S420>/Delay Input1'
     *  UnitDelay: '<S421>/Delay Input1'
     *
     * Block description for '<S418>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S419>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S420>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S421>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Robot_Reached_Destination = ((((((int32_T)Robot_Control_B.Face_Away_Driver) >
      ((int32_T)Robot_Control_DW.DelayInput1_DSTATE_m)) || (((int32_T)
      Robot_Control_B.Face_Left_Driver) > ((int32_T)
      Robot_Control_DW.DelayInput1_DSTATE_k))) || (((int32_T)
      Robot_Control_B.Face_Toward_Driver) > ((int32_T)
      Robot_Control_DW.DelayInput1_DSTATE_g))) || (((int32_T)
      Robot_Control_B.Face_Right_Driver) > ((int32_T)
      Robot_Control_DW.DelayInput1_DSTATE_g2)));

    /* Logic: '<S415>/AND1' incorporates:
     *  Logic: '<S415>/AND3'
     *  UnitDelay: '<S415>/Unit Delay2'
     */
    rtb_AND1 = (rtb_Compare_jp && (Robot_Reached_Destination ||
      (Robot_Control_DW.UnitDelay2_DSTATE_l)));

    /* Logic: '<S415>/AND4' incorporates:
     *  Logic: '<S415>/AND8'
     *  UnitDelay: '<S415>/Unit Delay4'
     */
    rtb_AND4 = ((rtb_Compare_jp && (!Robot_Reached_Destination)) &&
                (Robot_Control_DW.UnitDelay4_DSTATE));

    /* Logic: '<S415>/AND6' */
    Robot_Control_B.Steering_Abs_Angle_Active = (rtb_AND1 || rtb_AND4);

    /* Switch: '<S415>/Switch8' incorporates:
     *  Constant: '<S424>/Constant'
     *  Logic: '<S415>/AND9'
     *  RelationalOperator: '<S423>/FixPt Relational Operator'
     *  RelationalOperator: '<S424>/Compare'
     *  UnitDelay: '<S20>/Unit Delay'
     *  UnitDelay: '<S423>/Delay Input1'
     *
     * Block description for '<S423>/Delay Input1':
     *
     *  Store in Global RAM
     */
    if (((Robot_Control_B.Steering_Abs_Angle_Active) || (((int32_T)
           rtb_Compare_jp) > ((int32_T)Robot_Control_DW.DelayInput1_DSTATE_jp)))
        || (Robot_Control_B.Active_GameState != 2)) {
      /* Switch: '<S415>/Switch8' incorporates:
       *  Inport: '<Root>/Gyro_Angle_rad'
       */
      Robot_Control_B.Steering_Abs_Gyro_Latch = Robot_Control_U.Gyro_Angle_rad;
    } else {
      /* Switch: '<S415>/Switch8' incorporates:
       *  UnitDelay: '<S415>/Unit Delay3'
       */
      Robot_Control_B.Steering_Abs_Gyro_Latch =
        Robot_Control_DW.UnitDelay3_DSTATE;
    }

    /* End of Switch: '<S415>/Switch8' */

    /* Switch: '<S415>/Switch4' incorporates:
     *  Constant: '<S415>/Constant5'
     *  Switch: '<S415>/Switch1'
     *  Switch: '<S415>/Switch5'
     *  Switch: '<S415>/Switch6'
     *  Switch: '<S415>/Switch7'
     */
    if (Robot_Control_B.Face_Away_Driver) {
      rtb_DeadZone = 0.0;
    } else if (Robot_Control_B.Face_Left_Driver) {
      /* Switch: '<S415>/Switch5' incorporates:
       *  Constant: '<S415>/Constant6'
       */
      rtb_DeadZone = 1.5707963267948966;
    } else if (Robot_Control_B.Face_Toward_Driver) {
      /* Switch: '<S415>/Switch6' incorporates:
       *  Constant: '<S415>/Constant7'
       *  Switch: '<S415>/Switch5'
       */
      rtb_DeadZone = 3.1415926535897931;
    } else if (Robot_Control_B.Face_Right_Driver) {
      /* Switch: '<S415>/Switch7' incorporates:
       *  Constant: '<S415>/Constant8'
       *  Switch: '<S415>/Switch5'
       *  Switch: '<S415>/Switch6'
       */
      rtb_DeadZone = 4.71238898038469;
    } else if (rtb_AND4) {
      /* Switch: '<S415>/Switch1' incorporates:
       *  Constant: '<S23>/Constant10'
       *  Switch: '<S415>/Switch5'
       *  Switch: '<S415>/Switch6'
       *  Switch: '<S415>/Switch7'
       */
      rtb_DeadZone = 0.0;
    } else {
      /* Switch: '<S415>/Switch6' incorporates:
       *  Switch: '<S415>/Switch5'
       *  Switch: '<S415>/Switch7'
       *  UnitDelay: '<S415>/Unit Delay1'
       */
      rtb_DeadZone = Robot_Control_DW.UnitDelay1_DSTATE_j2;
    }

    /* End of Switch: '<S415>/Switch4' */

    /* Switch: '<S415>/Switch2' incorporates:
     *  Switch: '<S415>/Switch3'
     */
    if (Robot_Control_B.Steering_Abs_Angle_Active) {
      /* Switch: '<S415>/Switch2' incorporates:
       *  Constant: '<S415>/Constant2'
       */
      Robot_Control_B.Steering_Abs_Gyro = 0.0;

      /* Switch: '<S415>/Switch3' */
      Robot_Control_B.Steering_Abs_Angle = rtb_DeadZone;
    } else {
      /* Switch: '<S415>/Switch2' */
      Robot_Control_B.Steering_Abs_Gyro =
        Robot_Control_B.Steering_Abs_Gyro_Latch;

      /* Switch: '<S415>/Switch3' incorporates:
       *  Constant: '<S415>/Constant3'
       */
      Robot_Control_B.Steering_Abs_Angle = 0.0;
    }

    /* End of Switch: '<S415>/Switch2' */

    /* Merge: '<S19>/Merge1' incorporates:
     *  Sum: '<S415>/Add1'
     */
    Robot_Control_B.Steering_Abs_Cmd = Robot_Control_B.Steering_Abs_Angle +
      Robot_Control_B.Steering_Abs_Gyro;

    /* Merge: '<S19>/Merge2' incorporates:
     *  SignalConversion: '<S415>/Signal Copy'
     */
    Robot_Control_B.Steering_Rel_Cmd = rtb_Add_h5;

    /* Abs: '<S393>/Abs2' incorporates:
     *  UnaryMinus: '<S393>/Unary Minus'
     */
    rtb_Abs2_p = fabs(-Robot_Control_B.Limelight_Tag_Corrected_Angle);

    /* Abs: '<S393>/Abs' incorporates:
     *  UnaryMinus: '<S393>/Unary Minus1'
     */
    rtb_Subtract_b2 = fabs(-rtb_Subtract_b2);

    /* Abs: '<S393>/Abs1' */
    rtb_Coral_Wheel_DutyCycle_merge = fabs(rtb_Coral_Wheel_DutyCycle_merge);

    /* Merge: '<S19>/Merge23' incorporates:
     *  Constant: '<S399>/Constant'
     *  Constant: '<S406>/Constant'
     *  Constant: '<S407>/Constant'
     *  Logic: '<S393>/Logical Operator7'
     *  RelationalOperator: '<S399>/Compare'
     *  RelationalOperator: '<S406>/Compare'
     *  RelationalOperator: '<S407>/Compare'
     *  SignalConversion: '<S23>/Signal Copy'
     */
    Robot_Control_B.Swerve_Drive_Integral_Enable = (((Compare &&
      (rtb_Subtract_b2 <= AT_Integral_Enable_Error_XY)) &&
      (rtb_Coral_Wheel_DutyCycle_merge <= AT_Integral_Enable_Error_XY)) &&
      (rtb_Abs2_p <= AT_Integral_Enable_Error_Angle));

    /* SignalConversion: '<S23>/Signal Copy10' incorporates:
     *  Constant: '<S403>/Constant'
     *  Constant: '<S404>/Constant'
     *  Constant: '<S405>/Constant'
     *  Logic: '<S393>/Logical Operator'
     *  RelationalOperator: '<S403>/Compare'
     *  RelationalOperator: '<S404>/Compare'
     *  RelationalOperator: '<S405>/Compare'
     */
    Robot_Control_B.Teleop_AT_On_Target = (((Compare && (rtb_Subtract_b2 <=
      AT_Max_Error_XY)) && (rtb_Coral_Wheel_DutyCycle_merge <= AT_Max_Error_XY))
      && (rtb_Abs2_p <= AT_Max_Error_Angle));

    /* SignalConversion: '<S23>/Signal Copy11' */
    Compare_f = Robot_Control_B.Teleop_AT_On_Target;

    /* Merge: '<S19>/Merge13' incorporates:
     *  SignalConversion generated from: '<S23>/Coral_Arm_Angle_Desired'
     */
    Robot_Control_B.Coral_Arm_Angle_Desired_merge =
      Robot_Control_B.Coral_Arm_Angle_Desired;

    /* SignalConversion generated from: '<S23>/Coral_Pickup_Lower_Wait_State' */
    rtb_RelationalOperator_ci = Robot_Control_B.Coral_Pickup_Lower_Wait_State;

    /* SignalConversion generated from: '<S23>/Coral_Wheel_DutyCycle' */
    rtb_Coral_Wheel_DutyCycle_merge = Robot_Control_B.Coral_Wheel_DC;

    /* SignalConversion generated from: '<S23>/Desired_Pipeline' */
    rtb_Desired_Pipeline = Robot_Control_B.Desired_Pipeline;

    /* Merge: '<S19>/Merge11' incorporates:
     *  SignalConversion generated from: '<S23>/Elevator_Height_Desired'
     */
    Robot_Control_B.Elevator_Height_Desired_merge =
      Robot_Control_B.Elevator_Height_Desired;

    /* Merge: '<S19>/Merge21' incorporates:
     *  SignalConversion generated from: '<S23>/Elevator_LowerPickup_Reset'
     */
    Robot_Control_B.Elevator_LowerPickup_Reset_merg =
      Robot_Control_B.Elevator_LowerPickup_Reset;

    /* Merge: '<S19>/Merge12' incorporates:
     *  Constant: '<S395>/Constant5'
     *  SignalConversion generated from: '<S23>/Reefscape_Motors_Enable'
     */
    Robot_Control_B.Reefscape_Motors_Enable_merge = true;

    /* Merge: '<S19>/Merge7' incorporates:
     *  Constant: '<S23>/Constant3'
     *  SignalConversion generated from: '<S23>/Spline_Enable'
     */
    Robot_Control_B.Spline_Enable = false;

    /* Merge: '<S19>/Merge9' incorporates:
     *  Constant: '<S23>/Constant9'
     *  SignalConversion generated from: '<S23>/Spline_Num_Poses'
     */
    Robot_Control_B.Spline_Num_Poses = 10.0;

    /* Merge: '<S19>/Merge10' incorporates:
     *  Constant: '<S23>/Constant1'
     *  SignalConversion generated from: '<S23>/Test_Mode'
     */
    Robot_Control_B.Test_Mode = false;

    /* SignalConversion generated from: '<S23>/Enable_Wheels' incorporates:
     *  Constant: '<S23>/Constant6'
     */
    Robot_Reached_Destination = false;

    /* SignalConversion generated from: '<S23>/Reset_Wheel_Offsets' incorporates:
     *  Constant: '<S23>/Constant13'
     */
    rtb_Reset_Wheel_Offsets = false;

    /* SignalConversion generated from: '<S23>/Disable_Wheels' incorporates:
     *  Constant: '<S23>/Constant14'
     */
    rtb_Disable_Wheels = false;

    /* SignalConversion generated from: '<S23>/Swerve_Motors_Disabled' incorporates:
     *  Constant: '<S23>/Constant2'
     */
    Compare = false;

    /* Update for UnitDelay: '<S436>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_B1_A'
     *
     * Block description for '<S436>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Robot_Control_DW.DelayInput1_DSTATE_c = Robot_Control_U.Gamepad_B1_A;

    /* Update for UnitDelay: '<S437>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_B2_B'
     *
     * Block description for '<S437>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Robot_Control_DW.DelayInput1_DSTATE_nr = Robot_Control_U.Gamepad_B2_B;

    /* Update for UnitDelay: '<S442>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_B3_X'
     *
     * Block description for '<S442>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Robot_Control_DW.DelayInput1_DSTATE_ez = Robot_Control_U.Gamepad_B3_X;

    /* Update for UnitDelay: '<S443>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_B4_Y'
     *
     * Block description for '<S443>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Robot_Control_DW.DelayInput1_DSTATE_nh = Robot_Control_U.Gamepad_B4_Y;

    /* Update for UnitDelay: '<S444>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_Start'
     *
     * Block description for '<S444>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Robot_Control_DW.DelayInput1_DSTATE_i = Robot_Control_U.Gamepad_Start;

    /* Update for UnitDelay: '<S438>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_Back'
     *
     * Block description for '<S438>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Robot_Control_DW.DelayInput1_DSTATE_cp = Robot_Control_U.Gamepad_Back;

    /* Update for UnitDelay: '<S445>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_RB'
     *
     * Block description for '<S445>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Robot_Control_DW.DelayInput1_DSTATE_p = Robot_Control_U.Gamepad_RB;

    /* Update for UnitDelay: '<S448>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_LT'
     *
     * Block description for '<S448>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Robot_Control_DW.DelayInput1_DSTATE_o = Robot_Control_U.Gamepad_LT;

    /* Update for UnitDelay: '<S449>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_RT'
     *
     * Block description for '<S449>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Robot_Control_DW.DelayInput1_DSTATE_j = Robot_Control_U.Gamepad_RT;

    /* Update for UnitDelay: '<S441>/Delay Input1' incorporates:
     *  Inport: '<Root>/Joystick_Right_B1'
     *
     * Block description for '<S441>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Robot_Control_DW.DelayInput1_DSTATE_b = Robot_Control_U.Joystick_Right_B1;

    /* Update for UnitDelay: '<S446>/Delay Input1'
     *
     * Block description for '<S446>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Robot_Control_DW.DelayInput1_DSTATE_oy = Robot_Control_B.Gamepad_POV_Up;

    /* Update for UnitDelay: '<S447>/Delay Input1'
     *
     * Block description for '<S447>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Robot_Control_DW.DelayInput1_DSTATE_f = Robot_Control_B.Gamepad_POV_Down;

    /* Update for UnitDelay: '<S439>/Delay Input1'
     *
     * Block description for '<S439>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Robot_Control_DW.DelayInput1_DSTATE_o5 = Robot_Control_B.Gamepad_POV_Left;

    /* Update for UnitDelay: '<S440>/Delay Input1'
     *
     * Block description for '<S440>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Robot_Control_DW.DelayInput1_DSTATE_a = Robot_Control_B.Gamepad_POV_Right;

    /* Update for UnitDelay: '<S23>/Unit Delay' */
    Robot_Control_DW.UnitDelay_DSTATE_ia = Robot_Control_B.Teleop_AT_On_Target;

    /* Update for UnitDelay: '<S393>/Unit Delay1' */
    Robot_Control_DW.UnitDelay1_DSTATE_nr = rtb_Switch_jz;

    /* Update for UnitDelay: '<S393>/Unit Delay' */
    Robot_Control_DW.UnitDelay_DSTATE_kq = rtb_Abs1;

    /* Update for UnitDelay: '<S429>/Unit Delay1' */
    Robot_Control_DW.UnitDelay1_DSTATE_l = rtb_Switch2_kn;

    /* Update for UnitDelay: '<S429>/Unit Delay' */
    Robot_Control_DW.UnitDelay_DSTATE_p = rtb_Subtract_ia;

    /* Update for UnitDelay: '<S433>/FixPt Unit Delay2' incorporates:
     *  Constant: '<S433>/FixPt Constant'
     */
    Robot_Control_DW.FixPtUnitDelay2_DSTATE_a = 0U;

    /* Update for UnitDelay: '<S433>/FixPt Unit Delay1' */
    Robot_Control_DW.FixPtUnitDelay1_DSTATE_f = rtb_Product2_a;

    /* Update for UnitDelay: '<S423>/Delay Input1'
     *
     * Block description for '<S423>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Robot_Control_DW.DelayInput1_DSTATE_jp = rtb_Compare_jp;

    /* Update for UnitDelay: '<S422>/Delay Input1' incorporates:
     *  Constant: '<S23>/Constant5'
     *
     * Block description for '<S422>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Robot_Control_DW.DelayInput1_DSTATE_ft = false;

    /* Update for UnitDelay: '<S418>/Delay Input1'
     *
     * Block description for '<S418>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Robot_Control_DW.DelayInput1_DSTATE_m = Robot_Control_B.Face_Away_Driver;

    /* Update for UnitDelay: '<S419>/Delay Input1'
     *
     * Block description for '<S419>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Robot_Control_DW.DelayInput1_DSTATE_k = Robot_Control_B.Face_Left_Driver;

    /* Update for UnitDelay: '<S420>/Delay Input1'
     *
     * Block description for '<S420>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Robot_Control_DW.DelayInput1_DSTATE_g = Robot_Control_B.Face_Toward_Driver;

    /* Update for UnitDelay: '<S421>/Delay Input1'
     *
     * Block description for '<S421>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Robot_Control_DW.DelayInput1_DSTATE_g2 = Robot_Control_B.Face_Right_Driver;

    /* Update for UnitDelay: '<S415>/Unit Delay2' */
    Robot_Control_DW.UnitDelay2_DSTATE_l = rtb_AND1;

    /* Update for UnitDelay: '<S415>/Unit Delay4' */
    Robot_Control_DW.UnitDelay4_DSTATE = rtb_AND4;

    /* Update for UnitDelay: '<S415>/Unit Delay3' */
    Robot_Control_DW.UnitDelay3_DSTATE = Robot_Control_B.Steering_Abs_Gyro_Latch;

    /* Update for UnitDelay: '<S415>/Unit Delay1' */
    Robot_Control_DW.UnitDelay1_DSTATE_j2 = rtb_DeadZone;

    /* End of Outputs for SubSystem: '<S1>/Teleop' */
    break;

   default:
    /* InitializeConditions for IfAction SubSystem: '<S1>/Test' incorporates:
     *  ActionPort: '<S24>/Action Port'
     */
    /* InitializeConditions for SwitchCase: '<S1>/Switch Case' incorporates:
     *  UnitDelay: '<S24>/Unit Delay'
     */
    Robot_Control_DW.UnitDelay_DSTATE_ir = ((rtAction == rtPrevAction) &&
      (Robot_Control_DW.UnitDelay_DSTATE_ir));

    /* End of InitializeConditions for SubSystem: '<S1>/Test' */

    /* Outputs for IfAction SubSystem: '<S1>/Test' incorporates:
     *  ActionPort: '<S24>/Action Port'
     */
    /* SignalConversion generated from: '<S24>/Spline_Ref_Poses' incorporates:
     *  Merge: '<S19>/Merge8'
     */
    memset(&rtb_Spline_Ref_Poses[0], 0, 40U * (sizeof(real_T)));

    /* Merge: '<S19>/Merge1' incorporates:
     *  Constant: '<S24>/Constant1'
     *  SignalConversion generated from: '<S24>/Steering_Abs_Cmd'
     */
    Robot_Control_B.Steering_Abs_Cmd = 0.0;

    /* Merge: '<S19>/Merge2' incorporates:
     *  Constant: '<S24>/Constant2'
     *  SignalConversion generated from: '<S24>/Steering_Rel_Cmd'
     */
    Robot_Control_B.Steering_Rel_Cmd = 0.0;

    /* Merge: '<S19>/Merge3' incorporates:
     *  Constant: '<S24>/Constant3'
     *  SignalConversion generated from: '<S24>/Translation_Angle'
     */
    Robot_Control_B.Translation_Angle = 0.0;

    /* Merge: '<S19>/Merge4' incorporates:
     *  Constant: '<S24>/Constant4'
     *  SignalConversion generated from: '<S24>/Translation_Speed'
     */
    Robot_Control_B.Translation_Speed = 0.0;

    /* SignalConversion generated from: '<S24>/Is_Absolute_Translation' incorporates:
     *  Constant: '<S24>/Constant5'
     */
    rtb_Is_Absolute_Translation_g = false;

    /* SignalConversion generated from: '<S24>/Is_Absolute_Steering' incorporates:
     *  Constant: '<S24>/Constant6'
     */
    rtb_Is_Absolute_Steering = false;

    /* Merge: '<S19>/Merge7' incorporates:
     *  Constant: '<S24>/Constant7'
     *  SignalConversion generated from: '<S24>/Spline_Enable'
     */
    Robot_Control_B.Spline_Enable = false;

    /* Merge: '<S19>/Merge9' incorporates:
     *  Constant: '<S24>/Constant9'
     *  SignalConversion generated from: '<S24>/Spline_Num_Poses'
     */
    Robot_Control_B.Spline_Num_Poses = 10.0;

    /* Merge: '<S19>/Merge10' incorporates:
     *  Constant: '<S24>/Constant12'
     *  SignalConversion generated from: '<S24>/Test_Mode'
     */
    Robot_Control_B.Test_Mode = true;

    /* Switch: '<S24>/Switch' incorporates:
     *  Constant: '<S24>/Constant14'
     *  Switch: '<S24>/Switch1'
     *  UnitDelay: '<S24>/Unit Delay'
     */
    if (Robot_Control_B.Button_Disable_Wheels) {
      Compare = true;
    } else {
      Compare = ((!Robot_Control_B.Button_Enable_Wheels) &&
                 (Robot_Control_DW.UnitDelay_DSTATE_ir));
    }

    /* End of Switch: '<S24>/Switch' */

    /* Merge: '<S19>/Merge12' incorporates:
     *  Constant: '<S24>/Constant11'
     *  SignalConversion generated from: '<S24>/Reefscape_Motors_Enable'
     */
    Robot_Control_B.Reefscape_Motors_Enable_merge = false;

    /* Merge: '<S19>/Merge11' incorporates:
     *  Constant: '<S24>/Constant10'
     *  SignalConversion generated from: '<S24>/Elevator_Height_Desired'
     */
    Robot_Control_B.Elevator_Height_Desired_merge = 0.0;

    /* Merge: '<S19>/Merge13' incorporates:
     *  Constant: '<S24>/Constant15'
     *  SignalConversion generated from: '<S24>/Coral_Arm_Angle_Desired'
     */
    Robot_Control_B.Coral_Arm_Angle_Desired_merge = -90.0;

    /* SignalConversion generated from: '<S24>/Coral_Wheel_DutyCycle' incorporates:
     *  Constant: '<S24>/Constant16'
     */
    rtb_Coral_Wheel_DutyCycle_merge = 0.0;

    /* SignalConversion generated from: '<S24>/Algae_Wheel_Outside_DutyCycle' incorporates:
     *  Constant: '<S24>/Constant17'
     */
    rtb_Algae_Wheel_Outside_DutyCyc = 0.0;

    /* SignalConversion generated from: '<S24>/Algae_Wheel_Inside_DutyCycle' incorporates:
     *  Constant: '<S24>/Constant18'
     */
    rtb_Algae_Wheel_Inside_DutyCycl = 0.0;

    /* Merge: '<S19>/Merge21' incorporates:
     *  Constant: '<S24>/Constant19'
     *  SignalConversion generated from: '<S24>/Elevator_LowerPickup_Reset'
     */
    Robot_Control_B.Elevator_LowerPickup_Reset_merg = false;

    /* SignalConversion generated from: '<S24>/Coral_Pickup_Lower_Wait_State' incorporates:
     *  Constant: '<S24>/Constant20'
     */
    rtb_RelationalOperator_ci = false;

    /* Merge: '<S19>/Merge23' incorporates:
     *  Constant: '<S24>/Constant21'
     *  SignalConversion generated from: '<S24>/Swerve_Drive_Integral_Enable'
     */
    Robot_Control_B.Swerve_Drive_Integral_Enable = false;

    /* SignalConversion generated from: '<S24>/AT_On_Target' incorporates:
     *  Constant: '<S24>/Constant23'
     */
    Compare_f = false;

    /* SignalConversion generated from: '<S24>/Desired_Pipeline' incorporates:
     *  Constant: '<S24>/Constant22'
     */
    rtb_Desired_Pipeline = TEST_Pipeline;

    /* SignalConversion: '<S24>/Signal Copy' */
    Robot_Reached_Destination = Robot_Control_B.Button_Enable_Wheels;

    /* SignalConversion: '<S24>/Signal Copy2' */
    rtb_Disable_Wheels = Robot_Control_B.Button_Disable_Wheels;

    /* SignalConversion: '<S24>/Signal Copy1' */
    rtb_Reset_Wheel_Offsets = Robot_Control_B.Button_Reset_Wheel_Offsets;

    /* Update for UnitDelay: '<S24>/Unit Delay' */
    Robot_Control_DW.UnitDelay_DSTATE_ir = Compare;

    /* End of Outputs for SubSystem: '<S1>/Test' */
    break;
  }

  /* End of SwitchCase: '<S1>/Switch Case' */

  /* Reshape: '<S127>/Reshapey' incorporates:
   *  Inport: '<Root>/Limelight_Est_Pose_X'
   *  Inport: '<Root>/Limelight_Est_Pose_Y'
   *  S-Function (sfix_udelay): '<S17>/Tapped Delay'
   *  S-Function (sfix_udelay): '<S17>/Tapped Delay1'
   *  Sum: '<S17>/Add'
   *  Sum: '<S17>/Add1'
   */
  rtb_Reshapey[0] = (Robot_Control_U.Limelight_Est_Pose_X +
                     Robot_Control_DW.TappedDelay_X[0]) +
    Robot_Control_DW.TappedDelay_X[1];
  rtb_Reshapey[1] = (Robot_Control_U.Limelight_Est_Pose_Y +
                     Robot_Control_DW.TappedDelay1_X[0]) +
    Robot_Control_DW.TappedDelay1_X[1];

  /* Delay: '<S127>/MemoryX' incorporates:
   *  Constant: '<S127>/X0'
   */
  if (Robot_Control_DW.icLoad) {
    Robot_Control_DW.MemoryX_DSTATE[0] = 0.0;
    Robot_Control_DW.MemoryX_DSTATE[1] = 0.0;
  }

  /* Outputs for Enabled SubSystem: '<S154>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S180>/Enable'
   */
  /* Outputs for Enabled SubSystem: '<S147>/MeasurementUpdate' incorporates:
   *  EnablePort: '<S178>/Enable'
   */
  /* Logic: '<S17>/AND' incorporates:
   *  Constant: '<S17>/Constant'
   *  Constant: '<S17>/Constant1'
   *  Inport: '<Root>/Num_Tags_Detected'
   *  RelationalOperator: '<S17>/Relational Operator'
   */
  if ((Robot_Control_U.Num_Tags_Detected > 0.0) && (KF_Enable != 0.0)) {
    Robot_Control_DW.MeasurementUpdate_MODE = true;

    /* Product: '<S178>/C[k]*xhat[k|k-1]' incorporates:
     *  Constant: '<S127>/C'
     *  Delay: '<S127>/MemoryX'
     *  Product: '<S180>/Product'
     */
    rtb_Abs1 = (0.0 * Robot_Control_DW.MemoryX_DSTATE[1]) +
      Robot_Control_DW.MemoryX_DSTATE[0];
    rtb_Minus_n[0] = rtb_Abs1;

    /* Sum: '<S178>/Sum' incorporates:
     *  Constant: '<S127>/D'
     *  Inport: '<Root>/Odom_Delta_X'
     *  Inport: '<Root>/Odom_Delta_Y'
     *  Product: '<S178>/C[k]*xhat[k|k-1]'
     *  Product: '<S178>/D[k]*u[k]'
     *  Sum: '<S178>/Add1'
     */
    rtb_Switch2_kn = (0.0 * Robot_Control_U.Odom_Delta_X) + (0.0 *
      Robot_Control_U.Odom_Delta_Y);
    rtb_Switch_jz = rtb_Reshapey[0] - (rtb_Switch2_kn + rtb_Abs1);

    /* Product: '<S178>/C[k]*xhat[k|k-1]' incorporates:
     *  Constant: '<S127>/C'
     *  Delay: '<S127>/MemoryX'
     *  Product: '<S180>/Product'
     */
    rtb_Abs1 = (0.0 * Robot_Control_DW.MemoryX_DSTATE[0]) +
      Robot_Control_DW.MemoryX_DSTATE[1];
    rtb_Minus_n[1] = rtb_Abs1;

    /* Sum: '<S178>/Sum' incorporates:
     *  Constant: '<S127>/D'
     *  Product: '<S178>/C[k]*xhat[k|k-1]'
     *  Product: '<S178>/D[k]*u[k]'
     *  Sum: '<S178>/Add1'
     */
    rtb_Switch2_kn = rtb_Reshapey[1] - (rtb_Switch2_kn + rtb_Abs1);
    Robot_Control_DW.EnabledSubsystem_MODE = true;

    /* Product: '<S178>/Product3' incorporates:
     *  Constant: '<S128>/KalmanGainL'
     */
    Robot_Control_B.Product3[0] = (0.0951249219725039 * rtb_Switch_jz) +
      (-2.0601714451538746E-17 * rtb_Switch2_kn);

    /* Sum: '<S180>/Add1' incorporates:
     *  Product: '<S180>/Product'
     */
    rtb_Abs1 = rtb_Reshapey[0] - rtb_Minus_n[0];

    /* Product: '<S178>/Product3' incorporates:
     *  Constant: '<S128>/KalmanGainL'
     */
    Robot_Control_B.Product3[1] = (1.304610855474728E-16 * rtb_Switch_jz) +
      (0.095124921972504 * rtb_Switch2_kn);

    /* Sum: '<S180>/Add1' incorporates:
     *  Product: '<S180>/Product'
     */
    rtb_Switch2_kn = rtb_Reshapey[1] - rtb_Minus_n[1];

    /* Product: '<S180>/Product2' incorporates:
     *  Constant: '<S128>/KalmanGainM'
     */
    Robot_Control_B.Product2[0] = (0.09512492197250387 * rtb_Abs1) +
      (5.9896845167210271E-17 * rtb_Switch2_kn);
    Robot_Control_B.Product2[1] = (5.9896845167210271E-17 * rtb_Abs1) +
      (0.095124921972503981 * rtb_Switch2_kn);
  } else {
    if (Robot_Control_DW.MeasurementUpdate_MODE) {
      /* Disable for Product: '<S178>/Product3' incorporates:
       *  Outport: '<S178>/L*(y[k]-yhat[k|k-1])'
       */
      Robot_Control_B.Product3[0] = 0.0;
      Robot_Control_B.Product3[1] = 0.0;
      Robot_Control_DW.MeasurementUpdate_MODE = false;
    }

    if (Robot_Control_DW.EnabledSubsystem_MODE) {
      /* Disable for Product: '<S180>/Product2' incorporates:
       *  Outport: '<S180>/deltax'
       */
      Robot_Control_B.Product2[0] = 0.0;
      Robot_Control_B.Product2[1] = 0.0;
      Robot_Control_DW.EnabledSubsystem_MODE = false;
    }
  }

  /* End of Logic: '<S17>/AND' */
  /* End of Outputs for SubSystem: '<S147>/MeasurementUpdate' */
  /* End of Outputs for SubSystem: '<S154>/Enabled Subsystem' */

  /* Sum: '<S154>/Add' incorporates:
   *  Delay: '<S127>/MemoryX'
   */
  rtb_Reshapey[0] = Robot_Control_B.Product2[0] +
    Robot_Control_DW.MemoryX_DSTATE[0];
  rtb_Reshapey[1] = Robot_Control_B.Product2[1] +
    Robot_Control_DW.MemoryX_DSTATE[1];

  /* Switch: '<S17>/Switch' incorporates:
   *  Constant: '<S17>/Constant2'
   *  Switch: '<S17>/Switch1'
   */
  if (KF_Enable != 0.0) {
    /* Switch: '<S17>/Switch' */
    Robot_Control_B.KF_Position_X = rtb_Reshapey[0];

    /* Switch: '<S17>/Switch1' */
    Robot_Control_B.KF_Position_Y = rtb_Reshapey[1];
  } else {
    /* Switch: '<S17>/Switch' incorporates:
     *  Inport: '<Root>/Odom_Position_X'
     */
    Robot_Control_B.KF_Position_X = Robot_Control_U.Odom_Position_X;

    /* Switch: '<S17>/Switch1' incorporates:
     *  Inport: '<Root>/Odom_Position_Y'
     */
    Robot_Control_B.KF_Position_Y = Robot_Control_U.Odom_Position_Y;
  }

  /* End of Switch: '<S17>/Switch' */

  /* If: '<S21>/If' incorporates:
   *  Constant: '<S235>/Constant'
   *  Logic: '<S235>/AND'
   *  MATLAB Function: '<S185>/Find closest index to curve'
   *  Product: '<S235>/Product'
   *  RelationalOperator: '<S235>/Relational Operator'
   *  RelationalOperator: '<S235>/Relational Operator1'
   *  Selector: '<S235>/Selector'
   *  Selector: '<S235>/Selector1'
   *  Selector: '<S236>/Selector'
   *  Sum: '<S235>/Add'
   */
  rtPrevAction = Robot_Control_DW.If_ActiveSubsystem;
  rtAction = (int8_T)(!Robot_Control_B.Spline_Enable);
  Robot_Control_DW.If_ActiveSubsystem = rtAction;
  if ((rtPrevAction != rtAction) && (rtPrevAction == 0)) {
    /* Disable for If: '<S188>/If' */
    if (Robot_Control_DW.If_ActiveSubsystem_h == 0) {
      /* Disable for If: '<S191>/If' */
      if (Robot_Control_DW.If_ActiveSubsystem_o == 0) {
        /* Disable for If: '<S193>/If' */
        Robot_Control_DW.If_ActiveSubsystem_d = -1;
      }

      Robot_Control_DW.If_ActiveSubsystem_o = -1;
    }

    Robot_Control_DW.If_ActiveSubsystem_h = -1;

    /* End of Disable for If: '<S188>/If' */
  }

  if (rtAction == 0) {
    if (rtPrevAction != 0) {
      /* InitializeConditions for IfAction SubSystem: '<S21>/Spline Path Following Enabled' incorporates:
       *  ActionPort: '<S183>/Action Port'
       */
      /* InitializeConditions for If: '<S21>/If' incorporates:
       *  UnitDelay: '<S183>/Unit Delay'
       *  UnitDelay: '<S184>/Unit Delay'
       *  UnitDelay: '<S186>/Unit Delay'
       *  UnitDelay: '<S186>/Unit Delay1'
       *  UnitDelay: '<S236>/Unit Delay'
       *  UnitDelay: '<S236>/Unit Delay1'
       */
      Robot_Control_DW.UnitDelay_DSTATE_gh = 2.0;
      Robot_Control_DW.UnitDelay_DSTATE_hn = 0.0;
      Robot_Control_DW.UnitDelay1_DSTATE_f4 = 0.0;
      Robot_Control_DW.UnitDelay_DSTATE_g4 = 0.0;
      Robot_Control_DW.UnitDelay_DSTATE_le = 0.0;
      Robot_Control_DW.UnitDelay1_DSTATE_k = 0.0;

      /* End of InitializeConditions for SubSystem: '<S21>/Spline Path Following Enabled' */
    }

    /* Outputs for IfAction SubSystem: '<S21>/Spline Path Following Enabled' incorporates:
     *  ActionPort: '<S183>/Action Port'
     */
    /* Selector: '<S184>/Selector1' incorporates:
     *  Merge: '<S19>/Merge8'
     */
    for (i = 0; i < 10; i++) {
      rtb_Ref_Poses[i] = rtb_Spline_Ref_Poses[i];
      rtb_Ref_Poses[i + 10] = rtb_Spline_Ref_Poses[i + 10];
    }

    /* End of Selector: '<S184>/Selector1' */

    /* Lookup_n-D: '<S183>/Capture Radius' incorporates:
     *  UnitDelay: '<S183>/Unit Delay'
     */
    rtb_Switch_jz = look1_binlcpw(Robot_Control_DW.UnitDelay_DSTATE_hn,
      rtCP_CaptureRadius_bp01Data, rtCP_CaptureRadius_tableData, 3U);

    /* SignalConversion generated from: '<S184>/Matrix Concatenate2' */
    rtb_Reshapey[0] = Robot_Control_B.KF_Position_X;

    /* SignalConversion generated from: '<S184>/Matrix Concatenate2' */
    rtb_Reshapey[1] = Robot_Control_B.KF_Position_Y;

    /* If: '<S188>/If' incorporates:
     *  RelationalOperator: '<S188>/ '
     *  UnitDelay: '<S184>/Unit Delay'
     */
    rtPrevAction = Robot_Control_DW.If_ActiveSubsystem_h;
    rtAction = (int8_T)(!(Robot_Control_DW.UnitDelay_DSTATE_gh <=
                          Robot_Control_B.Spline_Num_Poses));
    Robot_Control_DW.If_ActiveSubsystem_h = rtAction;
    if ((rtPrevAction != rtAction) && (rtPrevAction == 0)) {
      /* Disable for If: '<S191>/If' */
      if (Robot_Control_DW.If_ActiveSubsystem_o == 0) {
        /* Disable for If: '<S193>/If' */
        Robot_Control_DW.If_ActiveSubsystem_d = -1;
      }

      Robot_Control_DW.If_ActiveSubsystem_o = -1;
    }

    if (rtAction == 0) {
      /* InitializeConditions for IfAction SubSystem: '<S188>/Robot_Index_Is_Valid' incorporates:
       *  ActionPort: '<S191>/Action Port'
       */
      /* InitializeConditions for If: '<S188>/If' incorporates:
       *  UnitDelay: '<S191>/Unit Delay'
       */
      Robot_Control_DW.UnitDelay_DSTATE_e4 = ((rtPrevAction == 0) &&
        (Robot_Control_DW.UnitDelay_DSTATE_e4));

      /* End of InitializeConditions for SubSystem: '<S188>/Robot_Index_Is_Valid' */

      /* Outputs for IfAction SubSystem: '<S188>/Robot_Index_Is_Valid' incorporates:
       *  ActionPort: '<S191>/Action Port'
       */
      /* Outputs for IfAction SubSystem: '<S191>/Increment_If_Rectangle_Check' incorporates:
       *  ActionPort: '<S194>/Action Port'
       */
      /* If: '<S191>/If' incorporates:
       *  Selector: '<S184>/Selector1'
       *  Selector: '<S191>/Selector'
       *  Selector: '<S194>/Selector'
       */
      rtb_Subtract_b2 = rtb_Ref_Poses[((int32_T)
        Robot_Control_DW.UnitDelay_DSTATE_gh) - 1];

      /* End of Outputs for SubSystem: '<S191>/Increment_If_Rectangle_Check' */

      /* Sum: '<S191>/Minus' incorporates:
       *  Concatenate: '<S184>/Matrix Concatenate2'
       *  Selector: '<S191>/Selector'
       */
      rtb_Minus_n[0] = rtb_Reshapey[0] - rtb_Subtract_b2;

      /* Outputs for IfAction SubSystem: '<S191>/Increment_If_Rectangle_Check' incorporates:
       *  ActionPort: '<S194>/Action Port'
       */
      /* If: '<S191>/If' incorporates:
       *  Selector: '<S184>/Selector1'
       *  Selector: '<S191>/Selector'
       *  Selector: '<S194>/Selector'
       *  Sum: '<S191>/Minus'
       */
      rtb_Subtract_ia = rtb_Ref_Poses[((int32_T)
        Robot_Control_DW.UnitDelay_DSTATE_gh) + 9];

      /* End of Outputs for SubSystem: '<S191>/Increment_If_Rectangle_Check' */

      /* Sum: '<S191>/Minus' incorporates:
       *  Concatenate: '<S184>/Matrix Concatenate2'
       *  Selector: '<S191>/Selector'
       */
      rtb_Minus_n[1] = rtb_Reshapey[1] - rtb_Subtract_ia;

      /* Math: '<S191>/Hypot' */
      rtb_Abs1 = rt_hypotd_snf(rtb_Minus_n[0], rtb_Minus_n[1]);

      /* RelationalOperator: '<S191>/Equal' */
      rtb_Is_Absolute_Steering = (Robot_Control_B.Spline_Num_Poses ==
        Robot_Control_DW.UnitDelay_DSTATE_gh);

      /* Switch: '<S191>/Switch' incorporates:
       *  Logic: '<S191>/AND'
       *  Logic: '<S191>/OR'
       *  RelationalOperator: '<S191>/Relational Operator'
       *  UnitDelay: '<S191>/Unit Delay'
       */
      rtb_Is_Absolute_Translation_g = ((Robot_Control_DW.UnitDelay_DSTATE_e4) ||
        ((rtb_Abs1 <= rtb_Switch_jz) && rtb_Is_Absolute_Steering));

      /* If: '<S191>/If' */
      rtPrevAction = Robot_Control_DW.If_ActiveSubsystem_o;
      if (!rtb_Is_Absolute_Translation_g) {
        if (!rtb_Is_Absolute_Steering) {
          rtAction = 1;
        } else {
          rtAction = 2;
        }
      }

      Robot_Control_DW.If_ActiveSubsystem_o = rtAction;
      if ((rtPrevAction != rtAction) && (rtPrevAction == 0)) {
        /* Disable for If: '<S193>/If' */
        Robot_Control_DW.If_ActiveSubsystem_d = -1;
      }

      switch (rtAction) {
       case 0:
        /* Outputs for IfAction SubSystem: '<S191>/Circle_Check_Valid' incorporates:
         *  ActionPort: '<S193>/Action Port'
         */
        /* If: '<S193>/If' incorporates:
         *  RelationalOperator: '<S193>/Equal'
         */
        rtPrevAction = Robot_Control_DW.If_ActiveSubsystem_d;
        rtAction = (int8_T)(!(Robot_Control_DW.UnitDelay_DSTATE_gh ==
                              Robot_Control_B.Spline_Num_Poses));
        Robot_Control_DW.If_ActiveSubsystem_d = rtAction;
        if (rtAction == 0) {
          /* InitializeConditions for IfAction SubSystem: '<S193>/Is_Last_Point' incorporates:
           *  ActionPort: '<S196>/Action Port'
           */
          /* InitializeConditions for If: '<S193>/If' incorporates:
           *  UnitDelay: '<S196>/Unit Delay'
           */
          Robot_Control_DW.UnitDelay_DSTATE_n = ((rtPrevAction == 0) &&
            (Robot_Control_DW.UnitDelay_DSTATE_n));

          /* End of InitializeConditions for SubSystem: '<S193>/Is_Last_Point' */

          /* Outputs for IfAction SubSystem: '<S193>/Is_Last_Point' incorporates:
           *  ActionPort: '<S196>/Action Port'
           */
          /* Switch: '<S196>/Switch' incorporates:
           *  Constant: '<S198>/Constant'
           *  Logic: '<S196>/OR'
           *  RelationalOperator: '<S198>/Compare'
           *  UnitDelay: '<S196>/Unit Delay'
           */
          rtb_AND1 = ((Robot_Control_DW.UnitDelay_DSTATE_n) || (rtb_Abs1 <=
            Spline_Stop_Radius));

          /* If: '<S196>/If' */
          if (rtb_AND1) {
            /* Outputs for IfAction SubSystem: '<S196>/Robot_Is_At_Destination' incorporates:
             *  ActionPort: '<S199>/Action Port'
             */
            /* Merge: '<S188>/Merge2' incorporates:
             *  Constant: '<S199>/Constant'
             *  SignalConversion generated from: '<S199>/Robot_Reached_Destination'
             */
            rtb_Is_Absolute_Steering = true;

            /* SignalConversion generated from: '<S199>/Make_Staight_Line_To_End' incorporates:
             *  Constant: '<S199>/Constant1'
             */
            rtb_Compare_jp = false;

            /* End of Outputs for SubSystem: '<S196>/Robot_Is_At_Destination' */
          } else {
            /* Outputs for IfAction SubSystem: '<S196>/Straight_Line_Path_To_End' incorporates:
             *  ActionPort: '<S200>/Action Port'
             */
            /* Merge: '<S188>/Merge2' incorporates:
             *  Constant: '<S200>/Constant'
             *  SignalConversion generated from: '<S200>/Robot_Reached_Destination'
             */
            rtb_Is_Absolute_Steering = false;

            /* SignalConversion generated from: '<S200>/Make_Staight_Line_To_End' incorporates:
             *  Constant: '<S200>/Constant1'
             */
            rtb_Compare_jp = true;

            /* End of Outputs for SubSystem: '<S196>/Straight_Line_Path_To_End' */
          }

          /* End of If: '<S196>/If' */

          /* Merge: '<S188>/Merge4' incorporates:
           *  SignalConversion: '<S196>/Signal Copy'
           */
          Robot_Control_B.Spline_Follow_Index =
            Robot_Control_DW.UnitDelay_DSTATE_gh;

          /* Update for UnitDelay: '<S196>/Unit Delay' */
          Robot_Control_DW.UnitDelay_DSTATE_n = rtb_AND1;

          /* End of Outputs for SubSystem: '<S193>/Is_Last_Point' */
        } else {
          /* Outputs for IfAction SubSystem: '<S193>/Increment_Search' incorporates:
           *  ActionPort: '<S195>/Action Port'
           */
          /* Merge: '<S188>/Merge2' incorporates:
           *  Constant: '<S195>/Constant'
           *  SignalConversion generated from: '<S195>/Robot_Reached_Destination'
           */
          rtb_Is_Absolute_Steering = false;

          /* SignalConversion generated from: '<S195>/Make_Staight_Line_To_End' incorporates:
           *  Constant: '<S195>/Constant1'
           */
          rtb_Compare_jp = false;

          /* Merge: '<S188>/Merge4' incorporates:
           *  Constant: '<S197>/FixPt Constant'
           *  SignalConversion: '<S195>/Signal Copy'
           *  Sum: '<S197>/FixPt Sum1'
           */
          Robot_Control_B.Spline_Follow_Index =
            Robot_Control_DW.UnitDelay_DSTATE_gh + 1.0;

          /* End of Outputs for SubSystem: '<S193>/Increment_Search' */
        }

        /* End of If: '<S193>/If' */
        /* End of Outputs for SubSystem: '<S191>/Circle_Check_Valid' */
        break;

       case 1:
        /* Outputs for IfAction SubSystem: '<S191>/Increment_If_Rectangle_Check' incorporates:
         *  ActionPort: '<S194>/Action Port'
         */
        /* Sum: '<S201>/FixPt Sum1' incorporates:
         *  Constant: '<S201>/FixPt Constant'
         */
        rtb_Abs1 = Robot_Control_DW.UnitDelay_DSTATE_gh + 1.0;

        /* Selector: '<S194>/Selector1' incorporates:
         *  Selector: '<S184>/Selector1'
         */
        rtb_DeadZone = rtb_Ref_Poses[((int32_T)rtb_Abs1) - 1];

        /* Sum: '<S202>/Subtract' incorporates:
         *  Selector: '<S194>/Selector1'
         *  Sum: '<S202>/Minus1'
         */
        rtb_Minus_n[0] = rtb_DeadZone - rtb_Subtract_b2;

        /* Selector: '<S194>/Selector1' incorporates:
         *  Selector: '<S184>/Selector1'
         */
        rtb_Product2_a = rtb_Ref_Poses[((int32_T)rtb_Abs1) + 9];

        /* Sum: '<S202>/Subtract' incorporates:
         *  Selector: '<S194>/Selector1'
         *  Sum: '<S202>/Minus1'
         */
        rtb_Minus_n[1] = rtb_Product2_a - rtb_Subtract_ia;

        /* Math: '<S202>/Hypot' */
        rtb_Switch2_kn = rt_hypotd_snf(rtb_Minus_n[0], rtb_Minus_n[1]);

        /* Product: '<S202>/Divide' */
        rtb_Abs1 = rtb_Minus_n[1];

        /* UnaryMinus: '<S202>/Unary Minus' */
        rtb_Abs2_p = rtb_Minus_n[0];

        /* Product: '<S202>/Product' incorporates:
         *  Product: '<S202>/Divide'
         *  UnaryMinus: '<S202>/Unary Minus'
         */
        rtb_Minus_n[0] = (rtb_Abs1 / rtb_Switch2_kn) * rtb_Switch_jz;
        rtb_Minus_n[1] = ((-rtb_Abs2_p) / rtb_Switch2_kn) * rtb_Switch_jz;

        /* Sum: '<S202>/Add1' incorporates:
         *  Sum: '<S202>/Add2'
         *  Sum: '<S202>/Minus'
         */
        rtb_Abs2_p = rtb_DeadZone - rtb_Minus_n[0];

        /* Sum: '<S202>/Minus4' incorporates:
         *  Sum: '<S202>/Add2'
         *  Sum: '<S202>/Minus'
         */
        rtb_DeadZone = (rtb_DeadZone + rtb_Minus_n[0]) - rtb_Abs2_p;

        /* Sum: '<S202>/Minus5' incorporates:
         *  Concatenate: '<S184>/Matrix Concatenate2'
         *  Sum: '<S202>/Minus'
         */
        rtb_Modulation_Drv = rtb_Reshapey[0] - rtb_Abs2_p;

        /* Sum: '<S202>/Add' incorporates:
         *  Sum: '<S202>/Add2'
         *  Sum: '<S202>/Minus1'
         */
        rtb_Abs1 = rtb_Subtract_b2 - rtb_Minus_n[0];

        /* Sum: '<S202>/Minus' incorporates:
         *  Sum: '<S202>/Minus1'
         */
        rtb_Abs2_p -= rtb_Abs1;

        /* DotProduct: '<S202>/Dot Product' incorporates:
         *  Concatenate: '<S184>/Matrix Concatenate2'
         *  Sum: '<S202>/Minus'
         *  Sum: '<S202>/Minus1'
         *  Sum: '<S202>/Minus5'
         */
        rtb_Switch2_kn = (rtb_Reshapey[0] - rtb_Abs1) * rtb_Abs2_p;

        /* DotProduct: '<S202>/Dot Product1' incorporates:
         *  Sum: '<S202>/Minus'
         */
        rtb_Subtract_b2 = rtb_Abs2_p * rtb_Abs2_p;

        /* DotProduct: '<S202>/Dot Product2' incorporates:
         *  Sum: '<S202>/Minus4'
         *  Sum: '<S202>/Minus5'
         */
        rtb_Add_h5 = rtb_DeadZone * rtb_Modulation_Drv;

        /* DotProduct: '<S202>/Dot Product3' incorporates:
         *  Sum: '<S202>/Minus4'
         */
        rtb_MatrixConcatenate_b_idx_0 = rtb_DeadZone * rtb_DeadZone;

        /* Sum: '<S202>/Add1' incorporates:
         *  Sum: '<S202>/Add2'
         *  Sum: '<S202>/Minus'
         */
        rtb_Abs2_p = rtb_Product2_a - rtb_Minus_n[1];

        /* Sum: '<S202>/Minus4' incorporates:
         *  Sum: '<S202>/Add2'
         *  Sum: '<S202>/Minus'
         */
        rtb_DeadZone = (rtb_Product2_a + rtb_Minus_n[1]) - rtb_Abs2_p;

        /* Sum: '<S202>/Minus5' incorporates:
         *  Concatenate: '<S184>/Matrix Concatenate2'
         *  Sum: '<S202>/Minus'
         */
        rtb_Modulation_Drv = rtb_Reshapey[1] - rtb_Abs2_p;

        /* Sum: '<S202>/Add' incorporates:
         *  Sum: '<S202>/Add2'
         *  Sum: '<S202>/Minus1'
         */
        rtb_Abs1 = rtb_Subtract_ia - rtb_Minus_n[1];

        /* Sum: '<S202>/Minus' incorporates:
         *  Sum: '<S202>/Minus1'
         */
        rtb_Abs2_p -= rtb_Abs1;

        /* DotProduct: '<S202>/Dot Product' incorporates:
         *  Concatenate: '<S184>/Matrix Concatenate2'
         *  Sum: '<S202>/Minus'
         *  Sum: '<S202>/Minus1'
         *  Sum: '<S202>/Minus5'
         */
        rtb_Switch2_kn += (rtb_Reshapey[1] - rtb_Abs1) * rtb_Abs2_p;

        /* RelationalOperator: '<S203>/Compare' incorporates:
         *  Constant: '<S203>/Constant'
         */
        rtb_Is_Absolute_Steering = (rtb_Switch2_kn >= 0.0);

        /* RelationalOperator: '<S202>/LessThanOrEqual' incorporates:
         *  DotProduct: '<S202>/Dot Product1'
         *  Sum: '<S202>/Minus'
         */
        rtb_Compare_jp = (rtb_Switch2_kn <= ((rtb_Abs2_p * rtb_Abs2_p) +
          rtb_Subtract_b2));

        /* DotProduct: '<S202>/Dot Product2' incorporates:
         *  Sum: '<S202>/Minus4'
         *  Sum: '<S202>/Minus5'
         */
        rtb_Switch2_kn = (rtb_DeadZone * rtb_Modulation_Drv) + rtb_Add_h5;

        /* Merge: '<S188>/Merge4' incorporates:
         *  Constant: '<S204>/Constant'
         *  DataTypeConversion: '<S194>/Data Type Conversion'
         *  DotProduct: '<S202>/Dot Product3'
         *  Logic: '<S202>/AND'
         *  RelationalOperator: '<S202>/LessThanOrEqual1'
         *  RelationalOperator: '<S204>/Compare'
         *  Sum: '<S194>/Add'
         *  Sum: '<S202>/Minus4'
         */
        Robot_Control_B.Spline_Follow_Index = ((real_T)
          (((rtb_Is_Absolute_Steering && rtb_Compare_jp) && (rtb_Switch2_kn >=
          0.0)) && (rtb_Switch2_kn <= ((rtb_DeadZone * rtb_DeadZone) +
          rtb_MatrixConcatenate_b_idx_0)))) +
          Robot_Control_DW.UnitDelay_DSTATE_gh;

        /* Merge: '<S188>/Merge2' incorporates:
         *  Constant: '<S194>/Constant2'
         *  SignalConversion generated from: '<S194>/Robot_Reached_Destination'
         */
        rtb_Is_Absolute_Steering = false;

        /* SignalConversion generated from: '<S194>/Make_Staight_Line_To_End' incorporates:
         *  Constant: '<S194>/Constant1'
         */
        rtb_Compare_jp = false;

        /* End of Outputs for SubSystem: '<S191>/Increment_If_Rectangle_Check' */
        break;

       default:
        /* Outputs for IfAction SubSystem: '<S191>/Catch-all if not the last point and not in the circle' incorporates:
         *  ActionPort: '<S192>/Action Port'
         */
        /* Merge: '<S188>/Merge2' incorporates:
         *  Constant: '<S192>/Constant2'
         *  SignalConversion generated from: '<S192>/Robot_Reached_Destination'
         */
        rtb_Is_Absolute_Steering = false;

        /* SignalConversion generated from: '<S192>/Make_Staight_Line_To_End' incorporates:
         *  Constant: '<S192>/Constant1'
         */
        rtb_Compare_jp = false;

        /* Merge: '<S188>/Merge4' incorporates:
         *  SignalConversion generated from: '<S192>/Current_Index'
         */
        Robot_Control_B.Spline_Follow_Index =
          Robot_Control_DW.UnitDelay_DSTATE_gh;

        /* End of Outputs for SubSystem: '<S191>/Catch-all if not the last point and not in the circle' */
        break;
      }

      /* Merge: '<S188>/Merge1' incorporates:
       *  Constant: '<S191>/Constant'
       *  SignalConversion generated from: '<S191>/Out_Of_Bounds'
       */
      Robot_Control_B.Spline_Out_Of_Bounds = false;

      /* Update for UnitDelay: '<S191>/Unit Delay' */
      Robot_Control_DW.UnitDelay_DSTATE_e4 = rtb_Is_Absolute_Translation_g;

      /* End of Outputs for SubSystem: '<S188>/Robot_Index_Is_Valid' */
    } else {
      /* Outputs for IfAction SubSystem: '<S188>/Escape_Auto_Driving' incorporates:
       *  ActionPort: '<S190>/Action Port'
       */
      /* Merge: '<S188>/Merge1' incorporates:
       *  Constant: '<S190>/Constant'
       *  SignalConversion generated from: '<S190>/Out_Of_Bounds'
       */
      Robot_Control_B.Spline_Out_Of_Bounds = true;

      /* Merge: '<S188>/Merge2' incorporates:
       *  Constant: '<S190>/Constant1'
       *  SignalConversion generated from: '<S190>/Robot_Reached_Destination'
       */
      rtb_Is_Absolute_Steering = false;

      /* SignalConversion generated from: '<S190>/Make_Staight_Line_To_End' incorporates:
       *  Constant: '<S190>/Constant2'
       */
      rtb_Compare_jp = false;

      /* Merge: '<S188>/Merge4' incorporates:
       *  SignalConversion generated from: '<S190>/Current_Index'
       */
      Robot_Control_B.Spline_Follow_Index = Robot_Control_DW.UnitDelay_DSTATE_gh;

      /* End of Outputs for SubSystem: '<S188>/Escape_Auto_Driving' */
    }

    /* End of If: '<S188>/If' */

    /* If: '<S184>/If1' */
    if (!rtb_Compare_jp) {
      /* Outputs for IfAction SubSystem: '<S184>/Make_Knots_and_Path_Planning' incorporates:
       *  ActionPort: '<S189>/Action Port'
       */
      /* Bias: '<S205>/Add Constant' incorporates:
       *  Bias: '<S205>/Bias'
       *  Sum: '<S205>/Subtract'
       */
      rtb_Abs1 = ((Robot_Control_B.Spline_Num_Poses -
                   Robot_Control_B.Spline_Follow_Index) + 3.0) + 1.0;

      /* SignalConversion generated from: '<S205>/Selector4' incorporates:
       *  Bias: '<S205>/Bias1'
       *  Constant: '<S207>/FixPt Constant'
       *  Sum: '<S207>/FixPt Sum1'
       */
      rtb_Minus_n[0] = Robot_Control_B.Spline_Follow_Index - 1.0;
      rtb_Minus_n[1] = Robot_Control_B.Spline_Num_Poses + 2.0;

      /* SignalConversion generated from: '<S205>/Selector5' */
      rtb_Reshapey[1] = Robot_Control_B.Spline_Num_Poses;

      /* Selector: '<S205>/Selector5' */
      Robot_Control_DW.Selector5_DIMS1[0] = (int32_T)rtb_Reshapey[1];
      Robot_Control_DW.Selector5_DIMS1[1] = 2;
      s210_iter = ((int32_T)rtb_Reshapey[1]) - 1;

      /* Concatenate: '<S205>/Matrix Concatenate' */
      Robot_Control_DW.MatrixConcatenate_DIMS1[0] =
        Robot_Control_DW.Selector5_DIMS1[0] + 2;
      Robot_Control_DW.MatrixConcatenate_DIMS1[1] = 2;

      /* Selector: '<S205>/Selector5' incorporates:
       *  Concatenate: '<S205>/Matrix Concatenate'
       *  Gain: '<S209>/Gain'
       *  Selector: '<S184>/Selector1'
       *  Selector: '<S205>/Selector2'
       *  Selector: '<S205>/Selector3'
       *  Sum: '<S209>/Subtract'
       */
      i = 0;
      for (rtb_Num_Segments = 0; rtb_Num_Segments < 2; rtb_Num_Segments++) {
        for (rtb_Bias1_p = 0; rtb_Bias1_p <= s210_iter; rtb_Bias1_p++) {
          rtb_Selector5[rtb_Bias1_p + (Robot_Control_DW.Selector5_DIMS1[0] *
            rtb_Num_Segments)] = rtb_Ref_Poses[rtb_Bias1_p + i];
        }

        rtb_MatrixConcatenate_p[Robot_Control_DW.MatrixConcatenate_DIMS1[0] *
          rtb_Num_Segments] = (rtb_Ref_Poses[i] * 2.0) - rtb_Ref_Poses[i + 1];
        i += 10;
      }

      /* Concatenate: '<S205>/Matrix Concatenate' incorporates:
       *  Bias: '<S205>/Add Constant1'
       *  Gain: '<S208>/Gain'
       *  Selector: '<S184>/Selector1'
       *  Selector: '<S205>/Selector'
       *  Selector: '<S205>/Selector1'
       *  Selector: '<S205>/Selector5'
       *  Sum: '<S208>/Subtract'
       */
      s210_iter = Robot_Control_DW.Selector5_DIMS1[0];
      for (i = 0; i < 2; i++) {
        for (rtb_Num_Segments = 0; rtb_Num_Segments < s210_iter;
             rtb_Num_Segments++) {
          rtb_MatrixConcatenate_p[(rtb_Num_Segments +
            (Robot_Control_DW.MatrixConcatenate_DIMS1[0] * i)) + 1] =
            rtb_Selector5[(Robot_Control_DW.Selector5_DIMS1[0] * i) +
            rtb_Num_Segments];
        }
      }

      rtb_MatrixConcatenate_p[Robot_Control_DW.Selector5_DIMS1[0] + 1] =
        (rtb_Ref_Poses[((int32_T)Robot_Control_B.Spline_Num_Poses) - 1] * 2.0) -
        rtb_Ref_Poses[((int32_T)(Robot_Control_B.Spline_Num_Poses - 1.0)) - 1];
      rtb_MatrixConcatenate_p[(Robot_Control_DW.Selector5_DIMS1[0] +
        Robot_Control_DW.MatrixConcatenate_DIMS1[0]) + 1] = (rtb_Ref_Poses
        [((int32_T)Robot_Control_B.Spline_Num_Poses) + 9] * 2.0) -
        rtb_Ref_Poses[((int32_T)(Robot_Control_B.Spline_Num_Poses - 1.0)) + 9];

      /* Selector: '<S205>/Selector4' */
      s210_iter = ((int32_T)rtb_Minus_n[1]) - ((int32_T)rtb_Minus_n[0]);
      Robot_Control_DW.Selector4_DIMS1[0] = s210_iter + 1;
      Robot_Control_DW.Selector4_DIMS1[1] = 2;

      /* Assignment: '<S205>/Assignment' */
      memset(&rtb_Assignment[0], 0, 24U * (sizeof(real_T)));

      /* Selector: '<S205>/Selector4' */
      rtb_Bias1_p = (int32_T)rtb_Minus_n[0];

      /* Assignment: '<S205>/Assignment' incorporates:
       *  Concatenate: '<S205>/Matrix Concatenate'
       *  Selector: '<S205>/Selector4'
       */
      for (i = 0; i < 2; i++) {
        for (rtb_Num_Segments = 0; rtb_Num_Segments <= s210_iter;
             rtb_Num_Segments++) {
          rtb_Assignment[rtb_Num_Segments + (12 * i)] = rtb_MatrixConcatenate_p
            [((rtb_Num_Segments + rtb_Bias1_p) +
              (Robot_Control_DW.MatrixConcatenate_DIMS1[0] * i)) - 1];
        }
      }

      /* Outputs for Iterator SubSystem: '<S206>/Sampling_Loop' incorporates:
       *  WhileIterator: '<S210>/While Iterator'
       */
      s210_iter = 1;
      do {
        rtb_Subtract_b2 = rtb_Assignment[s210_iter + 1];
        rtb_Minus_n[0] = rtb_Subtract_b2 - rtb_Assignment[s210_iter - 1];
        rtb_Add2[0] = rtb_Assignment[s210_iter] - rtb_Assignment[s210_iter + 2];
        rtb_Modulation_Drv = rtb_Subtract_b2 - rtb_Assignment[s210_iter];
        rtb_Subtract_b2 = rtb_Assignment[s210_iter + 13];
        rtb_Minus_n[1] = rtb_Subtract_b2 - rtb_Assignment[s210_iter + 11];
        rtb_DeadZone = rtb_Assignment[s210_iter + 12];
        rtb_Add2[1] = rtb_DeadZone - rtb_Assignment[s210_iter + 14];
        rtb_Add_h5 = rtb_Subtract_b2 - rtb_DeadZone;
        for (rtb_Bias1_p = 0; rtb_Bias1_p < 50; rtb_Bias1_p++) {
          rtb_Switch2_kn = ((real_T)rtb_Bias1_p) / 49.0;
          rtb_Subtract_ia = rt_powd_snf(rtb_Switch2_kn, 2.0);
          rtb_Abs2_p = rt_powd_snf(rtb_Switch2_kn, 3.0);
          rtb_Product2_a = (rtb_Switch2_kn - (2.0 * rtb_Subtract_ia)) +
            rtb_Abs2_p;
          rtb_Subtract_b2 = rtb_Subtract_ia - rtb_Abs2_p;
          rtb_Abs2_p = (3.0 * rtb_Subtract_ia) - (2.0 * rtb_Abs2_p);
          rtb_MatrixConcatenate_b_idx_0 = ((((rtb_Minus_n[0] * rtb_Product2_a) +
            (rtb_Add2[0] * rtb_Subtract_b2)) * 0.0) + (rtb_Modulation_Drv *
            rtb_Abs2_p)) + rtb_Assignment[s210_iter];
          rtb_Abs2_p = ((((rtb_Minus_n[1] * rtb_Product2_a) + (rtb_Add2[1] *
            rtb_Subtract_b2)) * 0.0) + (rtb_Add_h5 * rtb_Abs2_p)) + rtb_DeadZone;
          rtb_Product2_a = ((3.0 * rtb_Subtract_ia) - (4.0 * rtb_Switch2_kn)) +
            1.0;
          rtb_Subtract_b2 = (2.0 * rtb_Switch2_kn) - (3.0 * rtb_Subtract_ia);
          rtb_Subtract_ia = (rtb_Switch2_kn - rtb_Subtract_ia) * 6.0;
          rtb_MatrixConcatenate_idx_0 = (((rtb_Minus_n[0] * rtb_Product2_a) +
            (rtb_Add2[0] * rtb_Subtract_b2)) * 0.0) + (rtb_Modulation_Drv *
            rtb_Subtract_ia);
          rtb_Hypot_g5 = (((rtb_Minus_n[1] * rtb_Product2_a) + (rtb_Add2[1] *
            rtb_Subtract_b2)) * 0.0) + (rtb_Add_h5 * rtb_Subtract_ia);
          rtb_Subtract_ia = (6.0 * rtb_Switch2_kn) - 4.0;
          rtb_Product2_a = (-6.0 * rtb_Switch2_kn) + 2.0;
          rtb_Switch2_kn = (-12.0 * rtb_Switch2_kn) + 6.0;
          rtb_Subtract_b2 = (((rtb_Minus_n[0] * rtb_Subtract_ia) + (rtb_Add2[0] *
            rtb_Product2_a)) * 0.0) + (rtb_Modulation_Drv * rtb_Switch2_kn);
          rtb_Product2_a = (((rtb_Minus_n[1] * rtb_Subtract_ia) + (rtb_Add2[1] *
            rtb_Product2_a)) * 0.0) + (rtb_Add_h5 * rtb_Switch2_kn);
          rtb_Subtract_ia = rt_powd_snf(rt_hypotd_snf
            (rtb_MatrixConcatenate_idx_0, rtb_Hypot_g5), 3.0);
          rtb_Switch2_kn = fmax(1.0E-10, rtb_Subtract_ia);
          Robot_Control_DW.Relay_Mode = ((rtb_Subtract_ia >=
            2.2204460492503131E-16) || (Robot_Control_DW.Relay_Mode));
          if ((rtb_Bias1_p + 1) == 1) {
            memset(&rtb_Assignment_d[0], 0, 150U * (sizeof(real_T)));
          }

          rtb_Assignment_d[rtb_Bias1_p] = rtb_MatrixConcatenate_b_idx_0;
          rtb_Assignment_d[rtb_Bias1_p + 50] = rtb_Abs2_p;
          if (Robot_Control_DW.Relay_Mode) {
            i = 1;
          } else {
            i = -1;
          }

          rtb_Assignment_d[rtb_Bias1_p + 100] = fabs
            ((rtb_MatrixConcatenate_idx_0 * rtb_Product2_a) - (rtb_Subtract_b2 *
              rtb_Hypot_g5)) / (rtb_Switch2_kn * ((real_T)i));
        }

        if (s210_iter == 1) {
          memset(&Robot_Control_B.Assignment[0], 0, 450U * (sizeof(real_T)));
        }

        for (i = 0; i < 3; i++) {
          memcpy(&Robot_Control_B.Assignment[((i * 50) + (s210_iter * 150)) +
                 -150], &rtb_Assignment_d[i * 50], 50U * (sizeof(real_T)));
        }

        rtb_Switch2_kn = rtb_Abs1 - ((real_T)s210_iter);
        rtb_Num_Segments = s210_iter;
        s210_iter++;
      } while ((rtb_Switch2_kn >= 4.0) && (s210_iter <= 3));

      /* End of Outputs for SubSystem: '<S206>/Sampling_Loop' */

      /* SignalConversion generated from: '<S189>/Position_and_Curvature' incorporates:
       *  Assignment: '<S210>/Assignment'
       *  Merge: '<S184>/Merge'
       */
      memcpy(&rtb_Position_and_Curvature[0], &Robot_Control_B.Assignment[0],
             450U * (sizeof(real_T)));

      /* End of Outputs for SubSystem: '<S184>/Make_Knots_and_Path_Planning' */
    } else {
      /* Outputs for IfAction SubSystem: '<S184>/If Action Subsystem' incorporates:
       *  ActionPort: '<S187>/Action Port'
       */
      /* Product: '<S187>/Product' incorporates:
       *  Selector: '<S184>/Selector'
       *  Selector: '<S184>/Selector1'
       */
      rtb_Switch2_kn = rtb_Ref_Poses[((int32_T)Robot_Control_B.Spline_Num_Poses)
        - 1];

      /* Product: '<S187>/Product1' incorporates:
       *  Selector: '<S184>/Selector'
       *  Selector: '<S184>/Selector1'
       */
      rtb_Abs1 = rtb_Ref_Poses[((int32_T)Robot_Control_B.Spline_Num_Poses) + 9];
      for (i = 0; i < 50; i++) {
        /* Product: '<S187>/Product' incorporates:
         *  Constant: '<S187>/Constant2'
         */
        rtb_MatrixConcatenate_h[i] = rtb_Switch2_kn;

        /* Product: '<S187>/Product1' incorporates:
         *  Constant: '<S187>/Constant2'
         *  Product: '<S187>/Product'
         */
        rtb_MatrixConcatenate_h[i + 50] = rtb_Abs1;
      }

      /* Assignment: '<S187>/Assignment' incorporates:
       *  Concatenate: '<S187>/Matrix Concatenate'
       *  Merge: '<S184>/Merge'
       */
      memset(&rtb_Position_and_Curvature[0], 0, 450U * (sizeof(real_T)));
      for (i = 0; i < 50; i++) {
        rtb_Position_and_Curvature[i] = rtb_MatrixConcatenate_h[i];
        rtb_Position_and_Curvature[i + 50] = rtb_MatrixConcatenate_h[i + 50];
      }

      /* End of Assignment: '<S187>/Assignment' */

      /* SignalConversion generated from: '<S187>/Num_Segments' incorporates:
       *  Constant: '<S187>/Constant1'
       */
      rtb_Num_Segments = 1;

      /* End of Outputs for SubSystem: '<S184>/If Action Subsystem' */
    }

    /* End of If: '<S184>/If1' */

    /* Concatenate: '<S185>/Matrix Concatenate' incorporates:
     *  Merge: '<S184>/Merge'
     *  Selector: '<S185>/Selector'
     *  Selector: '<S185>/Selector1'
     *  Selector: '<S185>/Selector3'
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

    /* End of Concatenate: '<S185>/Matrix Concatenate' */

    /* MATLAB Function: '<S185>/Distance Along Curve' incorporates:
     *  Concatenate: '<S185>/Matrix Concatenate'
     *  Selector: '<S185>/Selector4'
     *  Selector: '<S185>/Selector5'
     */
    memset(&rtb_Assignment_d[0], 0, 150U * (sizeof(real_T)));
    for (s210_iter = 0; s210_iter < 149; s210_iter++) {
      /* Outputs for Iterator SubSystem: '<S206>/Sampling_Loop' incorporates:
       *  WhileIterator: '<S210>/While Iterator'
       */
      rtb_Assignment_d[s210_iter + 1] = rt_hypotd_snf
        (rtb_MatrixConcatenate_o[s210_iter + 1] -
         rtb_MatrixConcatenate_o[s210_iter], rtb_MatrixConcatenate_o[s210_iter +
         151] - rtb_MatrixConcatenate_o[s210_iter + 150]) +
        rtb_Assignment_d[s210_iter];

      /* End of Outputs for SubSystem: '<S206>/Sampling_Loop' */
    }

    /* End of MATLAB Function: '<S185>/Distance Along Curve' */

    /* MATLAB Function: '<S185>/Find closest index to curve' incorporates:
     *  Concatenate: '<S185>/Matrix Concatenate'
     *  Selector: '<S185>/Selector4'
     *  Selector: '<S185>/Selector5'
     *  Selector: '<S236>/Selector'
     */
    for (s210_iter = 0; s210_iter < 150; s210_iter++) {
      /* Outputs for Iterator SubSystem: '<S206>/Sampling_Loop' incorporates:
       *  WhileIterator: '<S210>/While Iterator'
       */
      distance_from_robot[s210_iter] = rt_hypotd_snf
        (rtb_MatrixConcatenate_o[s210_iter] - Robot_Control_B.KF_Position_X,
         rtb_MatrixConcatenate_o[s210_iter + 150] -
         Robot_Control_B.KF_Position_Y);

      /* End of Outputs for SubSystem: '<S206>/Sampling_Loop' */
    }

    if (!rtIsNaN(distance_from_robot[0])) {
      s210_iter = 1;
    } else {
      s210_iter = 0;
      rtb_Bias1_p = 2;
      exitg1 = false;
      while ((!exitg1) && (rtb_Bias1_p < 151)) {
        if (!rtIsNaN(distance_from_robot[rtb_Bias1_p - 1])) {
          s210_iter = rtb_Bias1_p;
          exitg1 = true;
        } else {
          rtb_Bias1_p++;
        }
      }
    }

    if (s210_iter == 0) {
      rtb_Abs1 = distance_from_robot[0];
    } else {
      rtb_Abs1 = distance_from_robot[s210_iter - 1];
      for (rtb_Bias1_p = s210_iter + 1; rtb_Bias1_p < 151; rtb_Bias1_p++) {
        rtb_Switch2_kn = distance_from_robot[rtb_Bias1_p - 1];
        if (rtb_Abs1 > rtb_Switch2_kn) {
          rtb_Abs1 = rtb_Switch2_kn;
        }
      }
    }

    s210_iter = 1;
    rtb_Bias1_p = 0;
    exitg1 = false;
    while ((!exitg1) && (rtb_Bias1_p < 150)) {
      s210_iter = rtb_Bias1_p + 1;
      if (distance_from_robot[rtb_Bias1_p] == rtb_Abs1) {
        exitg1 = true;
      } else {
        rtb_Bias1_p++;
      }
    }

    /* Selector: '<S236>/Selector' incorporates:
     *  Constant: '<S236>/Constant'
     *  MATLAB Function: '<S185>/Find closest index to curve'
     *  MinMax: '<S236>/Min'
     */
    rtb_Switch2_kn = rtb_Assignment_d[((int32_T)fmin(50.0, s210_iter)) - 1];

    /* If: '<S236>/If' incorporates:
     *  RelationalOperator: '<S236>/Relational Operator'
     */
    if (rtb_Assignment_d[0] != rtb_Assignment_d[49]) {
      /* Outputs for IfAction SubSystem: '<S236>/Dynamic Lookup Tables' incorporates:
       *  ActionPort: '<S239>/Action Port'
       */
      /* SignalConversion generated from: '<S239>/Lookup Table Dynamic' */
      rtb_Reshapey[0] = rtb_Assignment_d[0];
      rtb_Reshapey[1] = rtb_Assignment_d[49];

      /* Sum: '<S241>/FixPt Sum1' incorporates:
       *  Constant: '<S241>/FixPt Constant'
       */
      rtb_Abs1 = Robot_Control_B.Spline_Follow_Index - 1.0;

      /* SignalConversion generated from: '<S239>/Lookup Table Dynamic' incorporates:
       *  Merge: '<S19>/Merge8'
       *  Selector: '<S239>/Selector11'
       *  Selector: '<S239>/Selector12'
       */
      rtb_Minus_n[0] = rtb_Spline_Ref_Poses[((int32_T)rtb_Abs1) + 19];
      rtb_Minus_n[1] = rtb_Spline_Ref_Poses[((int32_T)
        Robot_Control_B.Spline_Follow_Index) + 19];

      /* SignalConversion generated from: '<S239>/Lookup Table Dynamic1' incorporates:
       *  Merge: '<S19>/Merge8'
       *  Selector: '<S239>/Selector1'
       *  Selector: '<S239>/Selector2'
       */
      rtb_Add2[0] = rtb_Spline_Ref_Poses[((int32_T)rtb_Abs1) + 29];
      rtb_Add2[1] = rtb_Spline_Ref_Poses[((int32_T)
        Robot_Control_B.Spline_Follow_Index) + 29];

      /* S-Function (sfix_look1_dyn): '<S239>/Lookup Table Dynamic' */
      /* Dynamic Look-Up Table Block: '<S239>/Lookup Table Dynamic'
       * Input0  Data Type:  Floating Point real_T
       * Input1  Data Type:  Floating Point real_T
       * Input2  Data Type:  Floating Point real_T
       * Output0 Data Type:  Floating Point real_T
       * Lookup Method: Linear_Endpoint
       *
       */
      LookUp_real_T_real_T( &(rtb_Abs1), &rtb_Minus_n[0], rtb_Switch2_kn,
                           &rtb_Reshapey[0], 1U);

      /* SignalConversion: '<S239>/Signal Copy' incorporates:
       *  S-Function (sfix_look1_dyn): '<S239>/Lookup Table Dynamic1'
       */
      /* Dynamic Look-Up Table Block: '<S239>/Lookup Table Dynamic1'
       * Input0  Data Type:  Floating Point real_T
       * Input1  Data Type:  Floating Point real_T
       * Input2  Data Type:  Floating Point real_T
       * Output0 Data Type:  Floating Point real_T
       * Lookup Method: Linear_Endpoint
       *
       */
      LookUp_real_T_real_T( &(rtb_Merge1), &rtb_Add2[0], rtb_Switch2_kn,
                           &rtb_Reshapey[0], 1U);

      /* End of Outputs for SubSystem: '<S236>/Dynamic Lookup Tables' */
    } else {
      /* Outputs for IfAction SubSystem: '<S236>/Latch' incorporates:
       *  ActionPort: '<S240>/Action Port'
       */
      /* SignalConversion generated from: '<S240>/In1' incorporates:
       *  UnitDelay: '<S236>/Unit Delay1'
       */
      rtb_Abs1 = Robot_Control_DW.UnitDelay1_DSTATE_f4;

      /* SignalConversion generated from: '<S240>/In2' incorporates:
       *  UnitDelay: '<S236>/Unit Delay'
       */
      rtb_Merge1 = Robot_Control_DW.UnitDelay_DSTATE_g4;

      /* End of Outputs for SubSystem: '<S236>/Latch' */
    }

    /* End of If: '<S236>/If' */

    /* MinMax: '<S183>/Min' incorporates:
     *  Lookup_n-D: '<S183>/Lookahead Distance'
     *  UnitDelay: '<S183>/Unit Delay'
     */
    rtb_Switch_jz = fmin(rtb_Switch_jz, look1_binlcpw
                         (Robot_Control_DW.UnitDelay_DSTATE_hn,
                          rtCP_LookaheadDistance_bp01Data,
                          rtCP_LookaheadDistance_tableDat, 3U));

    /* Outputs for Iterator SubSystem: '<S185>/Find first index that meets distance target' incorporates:
     *  WhileIterator: '<S235>/While Iterator'
     */
    s235_iter = 1U;
    rtb_Is_Absolute_Translation_g = true;
    while (rtb_Is_Absolute_Translation_g && (s235_iter <= 150)) {
      /* Outputs for Iterator SubSystem: '<S185>/Find first index that meets distance target' incorporates:
       *  WhileIterator: '<S235>/While Iterator'
       */
      Robot_Control_B.WhileIterator = s235_iter;
      rtb_Is_Absolute_Translation_g =
        ((rtb_Assignment_d[Robot_Control_B.WhileIterator - 1] <=
          (rtb_Assignment_d[s210_iter - 1] + rtb_Switch_jz)) &&
         (Robot_Control_B.WhileIterator < (((real_T)rtb_Num_Segments) * 50.0)));
      s235_iter++;
    }

    /* End of Outputs for SubSystem: '<S185>/Find first index that meets distance target' */

    /* Switch: '<S238>/Switch' incorporates:
     *  Concatenate: '<S185>/Matrix Concatenate'
     *  Constant: '<S185>/Constant'
     *  Constant: '<S235>/Constant'
     *  Constant: '<S238>/Constant'
     *  Constant: '<S238>/Constant1'
     *  Constant: '<S238>/Constant2'
     *  Constant: '<S238>/Constant3'
     *  Logic: '<S235>/AND'
     *  MATLAB Function: '<S185>/Find closest index to curve'
     *  Math: '<S238>/Hypot'
     *  Merge: '<S19>/Merge8'
     *  MinMax: '<S238>/Max'
     *  MinMax: '<S238>/Min'
     *  MinMax: '<S238>/Min1'
     *  Product: '<S235>/Product'
     *  Product: '<S238>/Divide'
     *  Product: '<S238>/Product'
     *  Product: '<S238>/Product1'
     *  RelationalOperator: '<S185>/Relational Operator'
     *  RelationalOperator: '<S235>/Relational Operator'
     *  RelationalOperator: '<S235>/Relational Operator1'
     *  Selector: '<S185>/Selector10'
     *  Selector: '<S185>/Selector7'
     *  Selector: '<S185>/Selector8'
     *  Selector: '<S185>/Selector9'
     *  Selector: '<S235>/Selector'
     *  Selector: '<S235>/Selector1'
     *  Selector: '<S236>/Selector'
     *  Sqrt: '<S238>/Sqrt'
     *  Sum: '<S185>/Subtract'
     *  Sum: '<S235>/Add'
     *  Sum: '<S238>/Subtract'
     *  Sum: '<S238>/Subtract1'
     */
    if (Robot_Control_B.Spline_Follow_Index >= (Robot_Control_B.Spline_Num_Poses
         - Spline_Pose_Num_Before_End_Reduce_Speed)) {
      rtb_Switch_jz = fmin(rt_hypotd_snf(rtb_Spline_Ref_Poses[9] -
        Robot_Control_B.KF_Position_X, rtb_Spline_Ref_Poses[19] -
        Robot_Control_B.KF_Position_Y) *
                           Spline_Last_Pose_Distance_to_Velocity_Gain, fmin
                           (rtb_Abs1 * Spline_Velocity_Multiplier_TEST, sqrt
                            (Spline_Max_Centripital_Acceleration / fmax
        (rtb_MatrixConcatenate_o[Robot_Control_B.WhileIterator + 299], 1.0E-5))));
    } else {
      rtb_Switch_jz = fmin(rtb_Abs1 * Spline_Velocity_Multiplier_TEST, sqrt
                           (Spline_Max_Centripital_Acceleration / fmax
                            (rtb_MatrixConcatenate_o[Robot_Control_B.WhileIterator
        + 299], 1.0E-5)));
    }

    /* End of Switch: '<S238>/Switch' */

    /* Logic: '<S186>/OR' */
    rtb_Compare_jp = (rtb_Is_Absolute_Steering ||
                      (Robot_Control_B.Spline_Out_Of_Bounds));

    /* Switch: '<S186>/Switch1' incorporates:
     *  Switch: '<S186>/Switch'
     *  UnitDelay: '<S186>/Unit Delay'
     */
    if (rtb_Compare_jp) {
      /* Merge: '<S21>/Merge2' incorporates:
       *  Constant: '<S186>/Constant3'
       *  SignalConversion: '<S186>/Signal Copy1'
       */
      Robot_Control_B.Translation_Speed_SPF = 0.0;
      rtb_Switch2_kn = Robot_Control_DW.UnitDelay_DSTATE_le;
    } else {
      /* Merge: '<S21>/Merge2' incorporates:
       *  SignalConversion: '<S186>/Signal Copy1'
       */
      Robot_Control_B.Translation_Speed_SPF = rtb_Switch_jz;
      rtb_Switch2_kn = rtb_Merge1;
    }

    /* End of Switch: '<S186>/Switch1' */

    /* Merge: '<S21>/Merge' incorporates:
     *  SignalConversion: '<S186>/Signal Copy'
     */
    Robot_Control_B.Steering_Abs_Cmd_SPF = rtb_Switch2_kn;

    /* Selector: '<S185>/Selector6' incorporates:
     *  Concatenate: '<S185>/Matrix Concatenate'
     *  Selector: '<S185>/Selector5'
     */
    Robot_Control_B.Spline_Target_Y =
      rtb_MatrixConcatenate_o[Robot_Control_B.WhileIterator + 149];

    /* Selector: '<S185>/Selector2' incorporates:
     *  Concatenate: '<S185>/Matrix Concatenate'
     *  Selector: '<S185>/Selector4'
     */
    Robot_Control_B.Spline_Target_X =
      rtb_MatrixConcatenate_o[Robot_Control_B.WhileIterator - 1];

    /* Switch: '<S186>/Switch2' incorporates:
     *  Sum: '<S242>/Subtract'
     *  Sum: '<S242>/Subtract1'
     *  Trigonometry: '<S242>/Atan2'
     *  UnitDelay: '<S186>/Unit Delay1'
     */
    if (rtb_Compare_jp) {
      rtb_Subtract_ia = Robot_Control_DW.UnitDelay1_DSTATE_k;
    } else {
      rtb_Subtract_ia = rt_atan2d_snf(Robot_Control_B.Spline_Target_Y -
        Robot_Control_B.KF_Position_Y, Robot_Control_B.Spline_Target_X -
        Robot_Control_B.KF_Position_X);
    }

    /* End of Switch: '<S186>/Switch2' */

    /* Merge: '<S21>/Merge3' incorporates:
     *  SignalConversion: '<S186>/Signal Copy2'
     */
    Robot_Control_B.Translation_Angle_SPF = rtb_Subtract_ia;

    /* Merge: '<S21>/Merge7' incorporates:
     *  SignalConversion: '<S183>/Signal Copy'
     */
    Robot_Control_B.Robot_Reached_Destination_l = rtb_Is_Absolute_Steering;

    /* Merge: '<S21>/Merge1' incorporates:
     *  Constant: '<S186>/Constant2'
     *  SignalConversion generated from: '<S183>/Steering_Rel_Cmd'
     */
    Robot_Control_B.Steering_Rel_Cmd_SPF = 0.0;

    /* Merge: '<S21>/Merge4' incorporates:
     *  Constant: '<S186>/Constant5'
     *  SignalConversion generated from: '<S183>/Is_Absolute_Translation'
     */
    Robot_Control_B.Is_Absolute_Translation_SPF = true;

    /* Merge: '<S21>/Merge5' incorporates:
     *  Constant: '<S186>/Constant6'
     *  SignalConversion generated from: '<S183>/Is_Absolute_Steering'
     */
    Robot_Control_B.Is_Absolute_Steering_SPF = true;

    /* Merge: '<S21>/Merge8' incorporates:
     *  Inport: '<Root>/Gyro_Angle_Field_rad'
     *  SignalConversion generated from: '<S183>/Gyro_Angle_Field_rad'
     */
    Robot_Control_B.Gyro_Angle_SPF = Robot_Control_U.Gyro_Angle_Field_rad;

    /* Update for UnitDelay: '<S184>/Unit Delay' */
    Robot_Control_DW.UnitDelay_DSTATE_gh = Robot_Control_B.Spline_Follow_Index;

    /* Update for UnitDelay: '<S183>/Unit Delay' */
    Robot_Control_DW.UnitDelay_DSTATE_hn = rtb_Switch_jz;

    /* Update for UnitDelay: '<S236>/Unit Delay1' */
    Robot_Control_DW.UnitDelay1_DSTATE_f4 = rtb_Abs1;

    /* Update for UnitDelay: '<S236>/Unit Delay' */
    Robot_Control_DW.UnitDelay_DSTATE_g4 = rtb_Merge1;

    /* Update for UnitDelay: '<S186>/Unit Delay' */
    Robot_Control_DW.UnitDelay_DSTATE_le = rtb_Switch2_kn;

    /* Update for UnitDelay: '<S186>/Unit Delay1' */
    Robot_Control_DW.UnitDelay1_DSTATE_k = rtb_Subtract_ia;

    /* End of Outputs for SubSystem: '<S21>/Spline Path Following Enabled' */
  } else {
    /* Outputs for IfAction SubSystem: '<S21>/Pass Through' incorporates:
     *  ActionPort: '<S182>/Action Port'
     */
    /* Merge: '<S21>/Merge7' incorporates:
     *  Constant: '<S182>/Constant'
     *  SignalConversion generated from: '<S182>/Robot_Reached_Destination'
     */
    Robot_Control_B.Robot_Reached_Destination_l = true;

    /* Merge: '<S21>/Merge' incorporates:
     *  SignalConversion generated from: '<S182>/Steering_Abs_Cmd_In'
     */
    Robot_Control_B.Steering_Abs_Cmd_SPF = Robot_Control_B.Steering_Abs_Cmd;

    /* Merge: '<S21>/Merge1' incorporates:
     *  SignalConversion generated from: '<S182>/Steering_Rel_Cmd_In'
     */
    Robot_Control_B.Steering_Rel_Cmd_SPF = Robot_Control_B.Steering_Rel_Cmd;

    /* Merge: '<S21>/Merge2' incorporates:
     *  SignalConversion generated from: '<S182>/Translation_Speed_In'
     */
    Robot_Control_B.Translation_Speed_SPF = Robot_Control_B.Translation_Speed;

    /* Merge: '<S21>/Merge3' incorporates:
     *  SignalConversion generated from: '<S182>/Translation_Angle_In'
     */
    Robot_Control_B.Translation_Angle_SPF = Robot_Control_B.Translation_Angle;

    /* Merge: '<S21>/Merge4' incorporates:
     *  SignalConversion generated from: '<S182>/Is_Absolute_Translation_In'
     */
    Robot_Control_B.Is_Absolute_Translation_SPF = rtb_Is_Absolute_Translation_g;

    /* Merge: '<S21>/Merge5' incorporates:
     *  SignalConversion generated from: '<S182>/Is_Absolute_Steering_In'
     */
    Robot_Control_B.Is_Absolute_Steering_SPF = rtb_Is_Absolute_Steering;

    /* Merge: '<S21>/Merge8' incorporates:
     *  Inport: '<Root>/Gyro_Angle_rad'
     *  SignalConversion generated from: '<S182>/Gyro_Angle_rad'
     */
    Robot_Control_B.Gyro_Angle_SPF = Robot_Control_U.Gyro_Angle_rad;

    /* End of Outputs for SubSystem: '<S21>/Pass Through' */
  }

  /* End of If: '<S21>/If' */

  /* Signum: '<S332>/Sign2' incorporates:
   *  UnitDelay: '<S332>/Unit Delay'
   */
  if (rtIsNaN(Robot_Control_B.Translation_Speed_RL)) {
    u0 = (rtNaN);
  } else if (Robot_Control_B.Translation_Speed_RL < 0.0) {
    u0 = -1.0;
  } else {
    u0 = (Robot_Control_B.Translation_Speed_RL > 0.0);
  }

  /* Signum: '<S332>/Sign1' */
  if (rtIsNaN(Robot_Control_B.Translation_Speed_SPF)) {
    rtb_Switch2_et = (rtNaN);
  } else if (Robot_Control_B.Translation_Speed_SPF < 0.0) {
    rtb_Switch2_et = -1.0;
  } else {
    rtb_Switch2_et = (Robot_Control_B.Translation_Speed_SPF > 0.0);
  }

  /* Product: '<S332>/Product1' incorporates:
   *  Signum: '<S332>/Sign1'
   *  Signum: '<S332>/Sign2'
   */
  u0 *= rtb_Switch2_et;
  if (rtIsNaN(u0)) {
    i = 0;
  } else {
    i = (int32_T)fmod(u0, 256.0);
  }

  /* Switch: '<S332>/Switch' incorporates:
   *  Constant: '<S332>/Constant'
   *  Constant: '<S337>/Constant'
   *  Constant: '<S338>/Constant'
   *  Logic: '<S332>/or'
   *  Product: '<S332>/Product1'
   *  RelationalOperator: '<S337>/Compare'
   *  RelationalOperator: '<S338>/Compare'
   *  UnitDelay: '<S332>/Unit Delay'
   */
  if ((Robot_Control_B.Translation_Speed_RL == 0.0) || (((i < 0) ? ((int32_T)
         ((int8_T)(-((int8_T)((uint8_T)(-((real_T)i))))))) : i) > 0)) {
    rtb_uDLookupTable_l = Robot_Control_B.Translation_Speed_SPF;
  } else {
    rtb_uDLookupTable_l = 0.0;
  }

  /* End of Switch: '<S332>/Switch' */

  /* Switch: '<S343>/Init' incorporates:
   *  UnitDelay: '<S343>/FixPt Unit Delay1'
   *  UnitDelay: '<S343>/FixPt Unit Delay2'
   */
  if (Robot_Control_DW.FixPtUnitDelay2_DSTATE != 0) {
    rtb_Abs1 = rtb_uDLookupTable_l;
  } else {
    rtb_Abs1 = Robot_Control_B.Translation_Speed_RL;
  }

  /* End of Switch: '<S343>/Init' */

  /* RelationalOperator: '<S339>/Compare' incorporates:
   *  Constant: '<S339>/Constant'
   */
  rtb_Is_Absolute_Translation_g = (rtb_uDLookupTable_l == 0.0);

  /* RelationalOperator: '<S340>/Compare' incorporates:
   *  Constant: '<S340>/Constant'
   */
  rtb_Is_Absolute_Steering = (rtb_uDLookupTable_l > 0.0);

  /* Abs: '<S332>/Abs' incorporates:
   *  Sum: '<S332>/Subtract'
   *  UnitDelay: '<S332>/Unit Delay'
   */
  rtb_Merge1 = fabs(Robot_Control_B.Translation_Speed_RL -
                    Robot_Control_B.Translation_Speed_SPF);

  /* Switch: '<S332>/Switch5' incorporates:
   *  Constant: '<S332>/Constant1'
   *  Switch: '<S332>/Switch1'
   *  UnaryMinus: '<S332>/Unary Minus'
   */
  if (rtb_Is_Absolute_Translation_g) {
    /* SignalConversion generated from: '<S332>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S332>/Constant4'
     *  Constant: '<S332>/Constant6'
     */
    rtb_Reshapey[0] = Translation_Speed_Approach_Zero_Final_Thresh;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S332>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S332>/Constant2'
     *  Constant: '<S332>/Constant5'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Translation_Speed_Approach_Zero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S332>/Lookup Table Dynamic' */
    /* Dynamic Look-Up Table Block: '<S332>/Lookup Table Dynamic'
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
    u0 = -Translation_Speed_Rate_Limit_Dec;
  } else {
    /* SignalConversion generated from: '<S332>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S332>/Constant10'
     *  Constant: '<S332>/Constant8'
     */
    rtb_Reshapey[0] = Translation_Speed_NonZero_Final_Scale_Factor;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S332>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S332>/Constant7'
     *  Constant: '<S332>/Constant9'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Translation_Speed_NonZero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S332>/Lookup Table Dynamic1' */
    /* Dynamic Look-Up Table Block: '<S332>/Lookup Table Dynamic1'
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

    /* Switch: '<S332>/Switch3' incorporates:
     *  Constant: '<S332>/Constant1'
     *  Constant: '<S332>/Constant3'
     *  UnaryMinus: '<S332>/Unary Minus'
     */
    if (rtb_Is_Absolute_Steering) {
      u0 = Translation_Speed_Rate_Limit_Inc;
    } else {
      u0 = -Translation_Speed_Rate_Limit_Dec;
    }

    /* End of Switch: '<S332>/Switch3' */
  }

  /* End of Switch: '<S332>/Switch5' */

  /* Product: '<S332>/Product' incorporates:
   *  Switch: '<S332>/Switch1'
   */
  rtb_Optimized_Module_Angle = u0 * rtb_Merge1;

  /* Sum: '<S341>/Sum1' */
  rtb_Switch_jz = rtb_uDLookupTable_l - rtb_Abs1;

  /* Switch: '<S342>/Switch2' incorporates:
   *  RelationalOperator: '<S342>/LowerRelop1'
   */
  if (!(rtb_Switch_jz > rtb_Optimized_Module_Angle)) {
    /* Switch: '<S332>/Switch2' incorporates:
     *  Constant: '<S332>/Constant1'
     *  Switch: '<S332>/Switch4'
     */
    if (rtb_Is_Absolute_Translation_g) {
      rtb_Switch2_kn = Translation_Speed_Rate_Limit_Dec;
    } else if (rtb_Is_Absolute_Steering) {
      /* Switch: '<S332>/Switch4' incorporates:
       *  Constant: '<S332>/Constant1'
       */
      rtb_Switch2_kn = Translation_Speed_Rate_Limit_Dec;
    } else {
      /* Switch: '<S332>/Switch4' incorporates:
       *  Constant: '<S332>/Constant3'
       *  UnaryMinus: '<S332>/Unary Minus1'
       */
      rtb_Switch2_kn = -Translation_Speed_Rate_Limit_Inc;
    }

    /* End of Switch: '<S332>/Switch2' */

    /* Product: '<S332>/Product2' */
    rtb_Switch2_kn *= rtb_Merge1;

    /* Switch: '<S342>/Switch' incorporates:
     *  RelationalOperator: '<S342>/UpperRelop'
     */
    if (rtb_Switch_jz < rtb_Switch2_kn) {
      rtb_Optimized_Module_Angle = rtb_Switch2_kn;
    } else {
      rtb_Optimized_Module_Angle = rtb_Switch_jz;
    }

    /* End of Switch: '<S342>/Switch' */
  }

  /* End of Switch: '<S342>/Switch2' */

  /* Sum: '<S341>/Sum' */
  Robot_Control_B.Translation_Speed_RL = rtb_Optimized_Module_Angle + rtb_Abs1;

  /* Switch: '<S335>/Switch' */
  if (Robot_Control_B.Is_Absolute_Translation_SPF) {
    /* Switch: '<S335>/Switch' incorporates:
     *  Constant: '<S367>/Constant3'
     *  Constant: '<S367>/Constant4'
     *  Math: '<S367>/Math Function'
     *  Sum: '<S335>/Subtract'
     *  Sum: '<S367>/Add1'
     *  Sum: '<S367>/Add2'
     */
    Robot_Control_B.Translation_Steering_Cmd = rt_modd_snf
      ((Robot_Control_B.Translation_Angle_SPF - Robot_Control_B.Gyro_Angle_SPF)
       + 3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;
  } else {
    /* Switch: '<S335>/Switch' */
    Robot_Control_B.Translation_Steering_Cmd =
      Robot_Control_B.Translation_Angle_SPF;
  }

  /* End of Switch: '<S335>/Switch' */

  /* Sum: '<S363>/Add1' incorporates:
   *  Constant: '<S363>/Constant3'
   *  Constant: '<S363>/Constant4'
   *  Math: '<S363>/Math Function'
   *  Sum: '<S362>/Sum'
   *  Sum: '<S363>/Add2'
   */
  rtb_Subtract_ia = rt_modd_snf((Robot_Control_B.Steering_Abs_Cmd_SPF -
    Robot_Control_B.Gyro_Angle_SPF) + 3.1415926535897931, 6.2831853071795862) -
    3.1415926535897931;

  /* Sum: '<S365>/Sum1' incorporates:
   *  Constant: '<S362>/Constant2'
   *  Product: '<S365>/Product'
   *  Sum: '<S365>/Sum'
   *  UnitDelay: '<S365>/Unit Delay1'
   */
  rtb_Merge1 = ((rtb_Subtract_ia - Robot_Control_DW.UnitDelay1_DSTATE_i) *
                Steering_Heading_Control_D_FilterCoeff) +
    Robot_Control_DW.UnitDelay1_DSTATE_i;

  /* Product: '<S362>/Product' incorporates:
   *  Constant: '<S362>/Constant3'
   */
  rtb_Switch_jz = rtb_Merge1 * Steering_Heading_Control_D;

  /* Sum: '<S364>/Diff' incorporates:
   *  UnitDelay: '<S364>/UD'
   *
   * Block description for '<S364>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S364>/UD':
   *
   *  Store in Global RAM
   */
  u0 = rtb_Switch_jz - Robot_Control_DW.UD_DSTATE;

  /* Saturate: '<S362>/Saturation' */
  if (u0 > Steering_Heading_Control_D_UL) {
    u0 = Steering_Heading_Control_D_UL;
  } else if (u0 < Steering_Heading_Control_D_LL) {
    u0 = Steering_Heading_Control_D_LL;
  }

  /* Sum: '<S362>/Add' incorporates:
   *  Gain: '<S362>/Gain1'
   *  Saturate: '<S362>/Saturation'
   */
  rtb_Switch2_kn = (Steering_Heading_Control_P * rtb_Subtract_ia) + u0;

  /* Sum: '<S362>/Subtract' incorporates:
   *  Constant: '<S362>/Constant'
   */
  rtb_Abs1 = Steering_Heading_Control_Total_UL - rtb_Switch2_kn;

  /* Sum: '<S362>/Sum2' incorporates:
   *  Gain: '<S362>/Gain2'
   *  UnitDelay: '<S362>/Unit Delay'
   */
  rtb_Subtract_ia = (Steering_Heading_Control_I * rtb_Subtract_ia) +
    Robot_Control_DW.UnitDelay_DSTATE_m;

  /* Switch: '<S366>/Switch2' incorporates:
   *  RelationalOperator: '<S366>/LowerRelop1'
   */
  if (!(rtb_Subtract_ia > rtb_Abs1)) {
    /* Sum: '<S362>/Subtract1' incorporates:
     *  Constant: '<S362>/Constant1'
     */
    rtb_Abs1 = Steering_Heading_Control_Total_LL - rtb_Switch2_kn;

    /* Switch: '<S366>/Switch' incorporates:
     *  RelationalOperator: '<S366>/UpperRelop'
     */
    if (!(rtb_Subtract_ia < rtb_Abs1)) {
      rtb_Abs1 = rtb_Subtract_ia;
    }

    /* End of Switch: '<S366>/Switch' */
  }

  /* End of Switch: '<S366>/Switch2' */

  /* Saturate: '<S362>/Saturation1' */
  if (rtb_Abs1 > Steering_Heading_Control_I_UL) {
    rtb_Abs1 = Steering_Heading_Control_I_UL;
  } else if (rtb_Abs1 < Steering_Heading_Control_I_LL) {
    rtb_Abs1 = Steering_Heading_Control_I_LL;
  }

  /* End of Saturate: '<S362>/Saturation1' */

  /* Sum: '<S362>/Add1' */
  u0 = rtb_Switch2_kn + rtb_Abs1;

  /* Saturate: '<S362>/Saturation2' */
  if (u0 > Steering_Heading_Control_Total_UL) {
    /* Saturate: '<S362>/Saturation2' */
    Robot_Control_B.Steering_Localized_PID = Steering_Heading_Control_Total_UL;
  } else if (u0 < Steering_Heading_Control_Total_LL) {
    /* Saturate: '<S362>/Saturation2' */
    Robot_Control_B.Steering_Localized_PID = Steering_Heading_Control_Total_LL;
  } else {
    /* Saturate: '<S362>/Saturation2' */
    Robot_Control_B.Steering_Localized_PID = u0;
  }

  /* End of Saturate: '<S362>/Saturation2' */

  /* Switch: '<S346>/Switch' incorporates:
   *  Abs: '<S346>/Abs'
   *  Constant: '<S346>/Constant'
   *  Constant: '<S361>/Constant'
   *  RelationalOperator: '<S361>/Compare'
   */
  if (fabs(Robot_Control_B.Steering_Localized_PID) >
      Steering_Heading_Control_Deadzone) {
    rtb_Subtract_ia = Robot_Control_B.Steering_Localized_PID;
  } else {
    rtb_Subtract_ia = 0.0;
  }

  /* End of Switch: '<S346>/Switch' */

  /* Signum: '<S345>/Sign2' incorporates:
   *  UnitDelay: '<S345>/Unit Delay'
   */
  if (rtIsNaN(Robot_Control_DW.UnitDelay_DSTATE_d)) {
    u0 = (rtNaN);
  } else if (Robot_Control_DW.UnitDelay_DSTATE_d < 0.0) {
    u0 = -1.0;
  } else {
    u0 = (Robot_Control_DW.UnitDelay_DSTATE_d > 0.0);
  }

  /* Signum: '<S345>/Sign1' */
  if (rtIsNaN(rtb_Subtract_ia)) {
    rtb_Switch2_et = (rtNaN);
  } else if (rtb_Subtract_ia < 0.0) {
    rtb_Switch2_et = -1.0;
  } else {
    rtb_Switch2_et = (rtb_Subtract_ia > 0.0);
  }

  /* Product: '<S345>/Product1' incorporates:
   *  Signum: '<S345>/Sign1'
   *  Signum: '<S345>/Sign2'
   */
  u0 *= rtb_Switch2_et;
  if (rtIsNaN(u0)) {
    i = 0;
  } else {
    i = (int32_T)fmod(u0, 256.0);
  }

  /* Switch: '<S345>/Switch' incorporates:
   *  Constant: '<S345>/Constant'
   *  Constant: '<S354>/Constant'
   *  Constant: '<S355>/Constant'
   *  Logic: '<S345>/or'
   *  Product: '<S345>/Product1'
   *  RelationalOperator: '<S354>/Compare'
   *  RelationalOperator: '<S355>/Compare'
   *  UnitDelay: '<S345>/Unit Delay'
   */
  if ((Robot_Control_DW.UnitDelay_DSTATE_d == 0.0) || (((i < 0) ? ((int32_T)
         ((int8_T)(-((int8_T)((uint8_T)(-((real_T)i))))))) : i) > 0)) {
    rtb_MatrixConcatenate_b_idx_0 = rtb_Subtract_ia;
  } else {
    rtb_MatrixConcatenate_b_idx_0 = 0.0;
  }

  /* End of Switch: '<S345>/Switch' */

  /* Switch: '<S360>/Init' incorporates:
   *  UnitDelay: '<S360>/FixPt Unit Delay1'
   *  UnitDelay: '<S360>/FixPt Unit Delay2'
   */
  if (Robot_Control_DW.FixPtUnitDelay2_DSTATE_p != 0) {
    rtb_Init = rtb_MatrixConcatenate_b_idx_0;
  } else {
    rtb_Init = Robot_Control_DW.FixPtUnitDelay1_DSTATE_e;
  }

  /* End of Switch: '<S360>/Init' */

  /* RelationalOperator: '<S356>/Compare' incorporates:
   *  Constant: '<S356>/Constant'
   */
  rtb_Is_Absolute_Translation_g = (rtb_MatrixConcatenate_b_idx_0 == 0.0);

  /* RelationalOperator: '<S357>/Compare' incorporates:
   *  Constant: '<S357>/Constant'
   */
  rtb_Is_Absolute_Steering = (rtb_MatrixConcatenate_b_idx_0 > 0.0);

  /* Abs: '<S345>/Abs' incorporates:
   *  Sum: '<S345>/Subtract'
   *  UnitDelay: '<S345>/Unit Delay'
   */
  rtb_Switch2_kn = fabs(Robot_Control_DW.UnitDelay_DSTATE_d - rtb_Subtract_ia);

  /* Switch: '<S345>/Switch5' incorporates:
   *  Constant: '<S345>/Constant1'
   *  Switch: '<S345>/Switch1'
   *  UnaryMinus: '<S345>/Unary Minus'
   */
  if (rtb_Is_Absolute_Translation_g) {
    /* SignalConversion generated from: '<S345>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S345>/Constant4'
     *  Constant: '<S345>/Constant6'
     */
    rtb_Reshapey[0] = Steering_Absolute_Cmd_Approach_Zero_Final_Thresh;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S345>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S345>/Constant2'
     *  Constant: '<S345>/Constant5'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Steering_Absolute_Cmd_Approach_Zero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S345>/Lookup Table Dynamic' */
    /* Dynamic Look-Up Table Block: '<S345>/Lookup Table Dynamic'
     * Input0  Data Type:  Floating Point real_T
     * Input1  Data Type:  Floating Point real_T
     * Input2  Data Type:  Floating Point real_T
     * Output0 Data Type:  Floating Point real_T
     * Lookup Method: Linear_Endpoint
     *
     */
    LookUp_real_T_real_T( &(rtb_LookupTableDynamic), &rtb_Reshapey[0],
                         rtb_Switch2_kn, &rtb_Minus_n[0], 1U);
    rtb_Switch2_kn = rtb_LookupTableDynamic;
    u0 = -Steering_Absolute_Cmd_Rate_Limit_Dec;
  } else {
    /* SignalConversion generated from: '<S345>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S345>/Constant10'
     *  Constant: '<S345>/Constant8'
     */
    rtb_Reshapey[0] = Steering_Absolute_Cmd_NonZero_Final_Scale_Factor;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S345>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S345>/Constant7'
     *  Constant: '<S345>/Constant9'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Steering_Absolute_Cmd_NonZero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S345>/Lookup Table Dynamic1' */
    /* Dynamic Look-Up Table Block: '<S345>/Lookup Table Dynamic1'
     * Input0  Data Type:  Floating Point real_T
     * Input1  Data Type:  Floating Point real_T
     * Input2  Data Type:  Floating Point real_T
     * Output0 Data Type:  Floating Point real_T
     * Lookup Method: Linear_Endpoint
     *
     */
    LookUp_real_T_real_T( &(rtb_LookupTableDynamic1), &rtb_Reshapey[0],
                         rtb_Switch2_kn, &rtb_Minus_n[0], 1U);
    rtb_Switch2_kn = rtb_LookupTableDynamic1;

    /* Switch: '<S345>/Switch3' incorporates:
     *  Constant: '<S345>/Constant1'
     *  Constant: '<S345>/Constant3'
     *  UnaryMinus: '<S345>/Unary Minus'
     */
    if (rtb_Is_Absolute_Steering) {
      u0 = Steering_Absolute_Cmd_Rate_Limit_Inc;
    } else {
      u0 = -Steering_Absolute_Cmd_Rate_Limit_Dec;
    }

    /* End of Switch: '<S345>/Switch3' */
  }

  /* End of Switch: '<S345>/Switch5' */

  /* Product: '<S345>/Product' incorporates:
   *  Switch: '<S345>/Switch1'
   */
  rtb_DeadZone = u0 * rtb_Switch2_kn;

  /* Sum: '<S358>/Sum1' */
  rtb_Subtract_ia = rtb_MatrixConcatenate_b_idx_0 - rtb_Init;

  /* Switch: '<S359>/Switch2' incorporates:
   *  RelationalOperator: '<S359>/LowerRelop1'
   */
  if (!(rtb_Subtract_ia > rtb_DeadZone)) {
    /* Switch: '<S345>/Switch2' incorporates:
     *  Constant: '<S345>/Constant1'
     *  Switch: '<S345>/Switch4'
     */
    if (rtb_Is_Absolute_Translation_g) {
      rtb_Product2_a = Steering_Absolute_Cmd_Rate_Limit_Dec;
    } else if (rtb_Is_Absolute_Steering) {
      /* Switch: '<S345>/Switch4' incorporates:
       *  Constant: '<S345>/Constant1'
       */
      rtb_Product2_a = Steering_Absolute_Cmd_Rate_Limit_Dec;
    } else {
      /* Switch: '<S345>/Switch4' incorporates:
       *  Constant: '<S345>/Constant3'
       *  UnaryMinus: '<S345>/Unary Minus1'
       */
      rtb_Product2_a = -Steering_Absolute_Cmd_Rate_Limit_Inc;
    }

    /* End of Switch: '<S345>/Switch2' */

    /* Product: '<S345>/Product2' */
    rtb_Product2_a *= rtb_Switch2_kn;

    /* Switch: '<S359>/Switch' incorporates:
     *  RelationalOperator: '<S359>/UpperRelop'
     */
    if (rtb_Subtract_ia < rtb_Product2_a) {
      rtb_DeadZone = rtb_Product2_a;
    } else {
      rtb_DeadZone = rtb_Subtract_ia;
    }

    /* End of Switch: '<S359>/Switch' */
  }

  /* End of Switch: '<S359>/Switch2' */

  /* Sum: '<S358>/Sum' */
  rtb_Switch2_kn = rtb_DeadZone + rtb_Init;

  /* Signum: '<S344>/Sign2' incorporates:
   *  UnitDelay: '<S344>/Unit Delay'
   */
  if (rtIsNaN(Robot_Control_DW.UnitDelay_DSTATE_g)) {
    u0 = (rtNaN);
  } else if (Robot_Control_DW.UnitDelay_DSTATE_g < 0.0) {
    u0 = -1.0;
  } else {
    u0 = (Robot_Control_DW.UnitDelay_DSTATE_g > 0.0);
  }

  /* Signum: '<S344>/Sign1' */
  if (rtIsNaN(Robot_Control_B.Steering_Rel_Cmd_SPF)) {
    rtb_Switch2_et = (rtNaN);
  } else if (Robot_Control_B.Steering_Rel_Cmd_SPF < 0.0) {
    rtb_Switch2_et = -1.0;
  } else {
    rtb_Switch2_et = (Robot_Control_B.Steering_Rel_Cmd_SPF > 0.0);
  }

  /* Product: '<S344>/Product1' incorporates:
   *  Signum: '<S344>/Sign1'
   *  Signum: '<S344>/Sign2'
   */
  u0 *= rtb_Switch2_et;
  if (rtIsNaN(u0)) {
    i = 0;
  } else {
    i = (int32_T)fmod(u0, 256.0);
  }

  /* Switch: '<S344>/Switch' incorporates:
   *  Constant: '<S344>/Constant'
   *  Constant: '<S347>/Constant'
   *  Constant: '<S348>/Constant'
   *  Logic: '<S344>/or'
   *  Product: '<S344>/Product1'
   *  RelationalOperator: '<S347>/Compare'
   *  RelationalOperator: '<S348>/Compare'
   *  UnitDelay: '<S344>/Unit Delay'
   */
  if ((Robot_Control_DW.UnitDelay_DSTATE_g == 0.0) || (((i < 0) ? ((int32_T)
         ((int8_T)(-((int8_T)((uint8_T)(-((real_T)i))))))) : i) > 0)) {
    rtb_MatrixConcatenate_b_idx_0 = Robot_Control_B.Steering_Rel_Cmd_SPF;
  } else {
    rtb_MatrixConcatenate_b_idx_0 = 0.0;
  }

  /* End of Switch: '<S344>/Switch' */

  /* Switch: '<S353>/Init' incorporates:
   *  UnitDelay: '<S353>/FixPt Unit Delay1'
   *  UnitDelay: '<S353>/FixPt Unit Delay2'
   */
  if (Robot_Control_DW.FixPtUnitDelay2_DSTATE_c != 0) {
    rtb_Init = rtb_MatrixConcatenate_b_idx_0;
  } else {
    rtb_Init = Robot_Control_DW.FixPtUnitDelay1_DSTATE_p;
  }

  /* End of Switch: '<S353>/Init' */

  /* RelationalOperator: '<S349>/Compare' incorporates:
   *  Constant: '<S349>/Constant'
   */
  rtb_Is_Absolute_Translation_g = (rtb_MatrixConcatenate_b_idx_0 == 0.0);

  /* RelationalOperator: '<S350>/Compare' incorporates:
   *  Constant: '<S350>/Constant'
   */
  rtb_Is_Absolute_Steering = (rtb_MatrixConcatenate_b_idx_0 > 0.0);

  /* Abs: '<S344>/Abs' incorporates:
   *  Sum: '<S344>/Subtract'
   *  UnitDelay: '<S344>/Unit Delay'
   */
  rtb_Product2_a = fabs(Robot_Control_DW.UnitDelay_DSTATE_g -
                        Robot_Control_B.Steering_Rel_Cmd_SPF);

  /* Switch: '<S344>/Switch5' incorporates:
   *  Constant: '<S344>/Constant1'
   *  Switch: '<S344>/Switch1'
   *  UnaryMinus: '<S344>/Unary Minus'
   */
  if (rtb_Is_Absolute_Translation_g) {
    /* SignalConversion generated from: '<S344>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S344>/Constant4'
     *  Constant: '<S344>/Constant6'
     */
    rtb_Reshapey[0] = Steering_Relative_Cmd_Approach_Zero_Final_Thresh;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S344>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S344>/Constant2'
     *  Constant: '<S344>/Constant5'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Steering_Relative_Cmd_Approach_Zero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S344>/Lookup Table Dynamic' */
    /* Dynamic Look-Up Table Block: '<S344>/Lookup Table Dynamic'
     * Input0  Data Type:  Floating Point real_T
     * Input1  Data Type:  Floating Point real_T
     * Input2  Data Type:  Floating Point real_T
     * Output0 Data Type:  Floating Point real_T
     * Lookup Method: Linear_Endpoint
     *
     */
    LookUp_real_T_real_T( &(rtb_LookupTableDynamic_p), &rtb_Reshapey[0],
                         rtb_Product2_a, &rtb_Minus_n[0], 1U);
    rtb_Product2_a = rtb_LookupTableDynamic_p;
    u0 = -Steering_Relative_Cmd_Rate_Limit_Dec;
  } else {
    /* SignalConversion generated from: '<S344>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S344>/Constant10'
     *  Constant: '<S344>/Constant8'
     */
    rtb_Reshapey[0] = Steering_Relative_Cmd_NonZero_Final_Scale_Factor;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S344>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S344>/Constant7'
     *  Constant: '<S344>/Constant9'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Steering_Relative_Cmd_NonZero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S344>/Lookup Table Dynamic1' */
    /* Dynamic Look-Up Table Block: '<S344>/Lookup Table Dynamic1'
     * Input0  Data Type:  Floating Point real_T
     * Input1  Data Type:  Floating Point real_T
     * Input2  Data Type:  Floating Point real_T
     * Output0 Data Type:  Floating Point real_T
     * Lookup Method: Linear_Endpoint
     *
     */
    LookUp_real_T_real_T( &(rtb_LookupTableDynamic1_g), &rtb_Reshapey[0],
                         rtb_Product2_a, &rtb_Minus_n[0], 1U);
    rtb_Product2_a = rtb_LookupTableDynamic1_g;

    /* Switch: '<S344>/Switch3' incorporates:
     *  Constant: '<S344>/Constant1'
     *  Constant: '<S344>/Constant3'
     *  UnaryMinus: '<S344>/Unary Minus'
     */
    if (rtb_Is_Absolute_Steering) {
      u0 = Steering_Relative_Cmd_Rate_Limit_Inc;
    } else {
      u0 = -Steering_Relative_Cmd_Rate_Limit_Dec;
    }

    /* End of Switch: '<S344>/Switch3' */
  }

  /* End of Switch: '<S344>/Switch5' */

  /* Product: '<S344>/Product' incorporates:
   *  Switch: '<S344>/Switch1'
   */
  rtb_Subtract_ia = u0 * rtb_Product2_a;

  /* Sum: '<S351>/Sum1' */
  rtb_Subtract_b2 = rtb_MatrixConcatenate_b_idx_0 - rtb_Init;

  /* Switch: '<S352>/Switch2' incorporates:
   *  RelationalOperator: '<S352>/LowerRelop1'
   */
  if (!(rtb_Subtract_b2 > rtb_Subtract_ia)) {
    /* Switch: '<S344>/Switch2' incorporates:
     *  Constant: '<S344>/Constant1'
     *  Constant: '<S344>/Constant3'
     *  Switch: '<S344>/Switch4'
     *  UnaryMinus: '<S344>/Unary Minus1'
     */
    if (rtb_Is_Absolute_Translation_g) {
      u0 = Steering_Relative_Cmd_Rate_Limit_Dec;
    } else if (rtb_Is_Absolute_Steering) {
      /* Switch: '<S344>/Switch4' incorporates:
       *  Constant: '<S344>/Constant1'
       */
      u0 = Steering_Relative_Cmd_Rate_Limit_Dec;
    } else {
      u0 = -Steering_Relative_Cmd_Rate_Limit_Inc;
    }

    /* Product: '<S344>/Product2' incorporates:
     *  Switch: '<S344>/Switch2'
     */
    rtb_Subtract_ia = u0 * rtb_Product2_a;

    /* Switch: '<S352>/Switch' incorporates:
     *  RelationalOperator: '<S352>/UpperRelop'
     */
    if (!(rtb_Subtract_b2 < rtb_Subtract_ia)) {
      rtb_Subtract_ia = rtb_Subtract_b2;
    }

    /* End of Switch: '<S352>/Switch' */
  }

  /* End of Switch: '<S352>/Switch2' */

  /* Sum: '<S351>/Sum' */
  rtb_Subtract_ia += rtb_Init;

  /* Switch: '<S334>/Switch' */
  if (Robot_Control_B.Is_Absolute_Steering_SPF) {
    /* Switch: '<S334>/Switch' */
    Robot_Control_B.Steering_Localized_Cmd = rtb_Switch2_kn;
  } else {
    /* Switch: '<S334>/Switch' */
    Robot_Control_B.Steering_Localized_Cmd = rtb_Subtract_ia;
  }

  /* End of Switch: '<S334>/Switch' */

  /* Fcn: '<S375>/r->x' incorporates:
   *  Fcn: '<S380>/r->x'
   *  Fcn: '<S385>/r->x'
   *  Fcn: '<S390>/r->x'
   */
  rtb_Subtract_b2 = Robot_Control_B.Translation_Speed_RL * cos
    (Robot_Control_B.Translation_Steering_Cmd);

  /* Sum: '<S369>/Add' incorporates:
   *  Fcn: '<S375>/r->x'
   *  Fcn: '<S376>/r->x'
   */
  rtb_Reshapey[0] = (Robot_Control_B.Steering_Localized_Cmd * cos
                     (Robot_Control_ConstB.FL_Tangent_Angle)) + rtb_Subtract_b2;

  /* Fcn: '<S375>/theta->y' incorporates:
   *  Fcn: '<S380>/theta->y'
   *  Fcn: '<S385>/theta->y'
   *  Fcn: '<S390>/theta->y'
   */
  rtb_Product2_a = Robot_Control_B.Translation_Speed_RL * sin
    (Robot_Control_B.Translation_Steering_Cmd);

  /* Sum: '<S369>/Add' incorporates:
   *  Fcn: '<S375>/theta->y'
   *  Fcn: '<S376>/theta->y'
   */
  rtb_Reshapey[1] = (Robot_Control_B.Steering_Localized_Cmd * sin
                     (Robot_Control_ConstB.FL_Tangent_Angle)) + rtb_Product2_a;

  /* Sum: '<S370>/Add' incorporates:
   *  Fcn: '<S381>/r->x'
   *  Fcn: '<S381>/theta->y'
   */
  rtb_Minus_n[0] = (Robot_Control_B.Steering_Localized_Cmd * cos
                    (Robot_Control_ConstB.FR_Tangent_Angle)) + rtb_Subtract_b2;
  rtb_Minus_n[1] = (Robot_Control_B.Steering_Localized_Cmd * sin
                    (Robot_Control_ConstB.FR_Tangent_Angle)) + rtb_Product2_a;

  /* Sum: '<S371>/Add' incorporates:
   *  Fcn: '<S386>/r->x'
   *  Fcn: '<S386>/theta->y'
   */
  rtb_Add2[0] = (Robot_Control_B.Steering_Localized_Cmd * cos
                 (Robot_Control_ConstB.BL_Tangent_Angle)) + rtb_Subtract_b2;
  rtb_Add2[1] = (Robot_Control_B.Steering_Localized_Cmd * sin
                 (Robot_Control_ConstB.BL_Tangent_Angle)) + rtb_Product2_a;

  /* Sum: '<S372>/Add' incorporates:
   *  Fcn: '<S391>/r->x'
   *  Fcn: '<S391>/theta->y'
   */
  rtb_Modulation_Drv = (Robot_Control_B.Steering_Localized_Cmd * cos
                        (Robot_Control_ConstB.BR_Tangent_Angle)) +
    rtb_Subtract_b2;
  rtb_Add_h5 = (Robot_Control_B.Steering_Localized_Cmd * sin
                (Robot_Control_ConstB.BR_Tangent_Angle)) + rtb_Product2_a;

  /* Fcn: '<S389>/x->r' */
  rtb_DeadZone = rt_hypotd_snf(rtb_Modulation_Drv, rtb_Add_h5);

  /* RelationalOperator: '<S392>/Compare' incorporates:
   *  Constant: '<S392>/Constant'
   */
  rtb_Is_Absolute_Translation_g = (rtb_DeadZone == 0.0);

  /* Switch: '<S388>/Switch1' */
  if (rtb_Is_Absolute_Translation_g) {
    /* Switch: '<S388>/Switch1' incorporates:
     *  Constant: '<S388>/Constant'
     */
    Robot_Control_B.BR_Desired_Wheel_Speed_in = 1.0E-15;
  } else {
    /* Switch: '<S388>/Switch1' */
    Robot_Control_B.BR_Desired_Wheel_Speed_in = rtb_DeadZone;
  }

  /* End of Switch: '<S388>/Switch1' */

  /* Fcn: '<S374>/x->r' */
  rtb_DeadZone = rt_hypotd_snf(rtb_Reshapey[0], rtb_Reshapey[1]);

  /* RelationalOperator: '<S377>/Compare' incorporates:
   *  Constant: '<S377>/Constant'
   */
  rtb_Is_Absolute_Steering = (rtb_DeadZone == 0.0);

  /* Switch: '<S373>/Switch1' */
  if (rtb_Is_Absolute_Steering) {
    /* Switch: '<S373>/Switch1' incorporates:
     *  Constant: '<S373>/Constant'
     */
    Robot_Control_B.FL_Desired_Wheel_Speed_in = 1.0E-15;
  } else {
    /* Switch: '<S373>/Switch1' */
    Robot_Control_B.FL_Desired_Wheel_Speed_in = rtb_DeadZone;
  }

  /* End of Switch: '<S373>/Switch1' */

  /* Fcn: '<S379>/x->r' */
  rtb_MatrixConcatenate_b_idx_0 = rt_hypotd_snf(rtb_Minus_n[0], rtb_Minus_n[1]);

  /* RelationalOperator: '<S382>/Compare' incorporates:
   *  Constant: '<S382>/Constant'
   */
  rtb_Compare_jp = (rtb_MatrixConcatenate_b_idx_0 == 0.0);

  /* Switch: '<S378>/Switch1' */
  if (rtb_Compare_jp) {
    /* Switch: '<S378>/Switch1' incorporates:
     *  Constant: '<S378>/Constant'
     */
    Robot_Control_B.FR_Desired_Wheel_Speed_in = 1.0E-15;
  } else {
    /* Switch: '<S378>/Switch1' */
    Robot_Control_B.FR_Desired_Wheel_Speed_in = rtb_MatrixConcatenate_b_idx_0;
  }

  /* End of Switch: '<S378>/Switch1' */

  /* Fcn: '<S384>/x->r' */
  rtb_Init = rt_hypotd_snf(rtb_Add2[0], rtb_Add2[1]);

  /* RelationalOperator: '<S387>/Compare' incorporates:
   *  Constant: '<S387>/Constant'
   */
  rtb_AND1 = (rtb_Init == 0.0);

  /* Switch: '<S383>/Switch1' */
  if (rtb_AND1) {
    /* Switch: '<S383>/Switch1' incorporates:
     *  Constant: '<S383>/Constant'
     */
    Robot_Control_B.BL_Desired_Wheel_Speed_in = 1.0E-15;
  } else {
    /* Switch: '<S383>/Switch1' */
    Robot_Control_B.BL_Desired_Wheel_Speed_in = rtb_Init;
  }

  /* End of Switch: '<S383>/Switch1' */

  /* Product: '<S368>/Divide' incorporates:
   *  Abs: '<S368>/Abs'
   *  Abs: '<S368>/Abs1'
   *  Abs: '<S368>/Abs2'
   *  Abs: '<S368>/Abs3'
   *  Constant: '<S368>/Constant'
   *  MinMax: '<S368>/Max'
   */
  rtb_DeadZone = 5.1198378053698752 / fmax(fmax(fmax(fmax(5.1198378053698752,
    Robot_Control_B.FL_Desired_Wheel_Speed_in),
    Robot_Control_B.FR_Desired_Wheel_Speed_in),
    Robot_Control_B.BL_Desired_Wheel_Speed_in),
    Robot_Control_B.BR_Desired_Wheel_Speed_in);

  /* Product: '<S368>/Product3' */
  Robot_Control_B.BR_Desired_Wheel_Speed =
    Robot_Control_B.BR_Desired_Wheel_Speed_in * rtb_DeadZone;

  /* Switch: '<S388>/Switch' */
  if (!rtb_Is_Absolute_Translation_g) {
    /* Switch: '<S388>/Switch' incorporates:
     *  Fcn: '<S389>/x->theta'
     */
    Robot_Control_B.BR_Desired_Module_Angle = rt_atan2d_snf(rtb_Add_h5,
      rtb_Modulation_Drv);
  }

  /* End of Switch: '<S388>/Switch' */

  /* Trigonometry: '<S324>/Cos4' incorporates:
   *  Switch: '<S313>/Angle_Switch'
   *  Trigonometry: '<S323>/Cos4'
   */
  rtb_Product_nr = cos(Robot_Control_B.BR_Desired_Module_Angle);

  /* Trigonometry: '<S324>/Sin5' incorporates:
   *  Inport: '<Root>/BR_Steer_Module_Angle'
   *  UnaryMinus: '<S322>/Unary Minus'
   */
  rtb_Optimized_Module_Angle = sin(-Robot_Control_U.BR_Steer_Module_Angle);

  /* Trigonometry: '<S324>/Sin4' incorporates:
   *  Switch: '<S313>/Angle_Switch'
   *  Trigonometry: '<S323>/Sin4'
   */
  rtb_Product2_a = sin(Robot_Control_B.BR_Desired_Module_Angle);

  /* Trigonometry: '<S324>/Cos5' incorporates:
   *  Inport: '<Root>/BR_Steer_Module_Angle'
   *  UnaryMinus: '<S322>/Unary Minus'
   */
  rtb_Init = cos(-Robot_Control_U.BR_Steer_Module_Angle);

  /* Sum: '<S324>/Subtract1' incorporates:
   *  Product: '<S324>/Product2'
   *  Product: '<S324>/Product3'
   *  Trigonometry: '<S324>/Cos4'
   *  Trigonometry: '<S324>/Sin4'
   */
  rtb_Subtract_b2 = (rtb_Product_nr * rtb_Optimized_Module_Angle) +
    (rtb_Product2_a * rtb_Init);

  /* Sum: '<S324>/Subtract' incorporates:
   *  Product: '<S324>/Product'
   *  Product: '<S324>/Product1'
   *  Trigonometry: '<S324>/Cos4'
   *  Trigonometry: '<S324>/Sin4'
   */
  rtb_Abs2_p = (rtb_Product_nr * rtb_Init) - (rtb_Product2_a *
    rtb_Optimized_Module_Angle);

  /* Math: '<S324>/Hypot' */
  rtb_Modulation_Drv = rt_hypotd_snf(rtb_Abs2_p, rtb_Subtract_b2);

  /* Switch: '<S324>/Switch' incorporates:
   *  Constant: '<S324>/Constant'
   *  Constant: '<S324>/Constant1'
   *  Constant: '<S325>/Constant'
   *  Product: '<S324>/Divide'
   *  Product: '<S324>/Divide1'
   *  RelationalOperator: '<S325>/Compare'
   *  Switch: '<S324>/Switch1'
   */
  if (rtb_Modulation_Drv > 1.0E-6) {
    rtb_MatrixConcatenate_b_idx_0 = rtb_Subtract_b2 / rtb_Modulation_Drv;
    rtb_Init = rtb_Abs2_p / rtb_Modulation_Drv;
  } else {
    rtb_MatrixConcatenate_b_idx_0 = 0.0;
    rtb_Init = 1.0;
  }

  /* End of Switch: '<S324>/Switch' */

  /* Switch: '<S313>/Speed_Switch' incorporates:
   *  Abs: '<S313>/Abs'
   *  Constant: '<S321>/Constant'
   *  RelationalOperator: '<S321>/Compare'
   *  Switch: '<S313>/Angle_Switch'
   *  Trigonometry: '<S323>/Atan1'
   *  Trigonometry: '<S324>/Atan1'
   *  UnaryMinus: '<S313>/Unary Minus'
   */
  if (fabs(rt_atan2d_snf(rtb_MatrixConcatenate_b_idx_0, rtb_Init)) >
      1.5707963267948966) {
    u0 = -Robot_Control_B.BR_Desired_Wheel_Speed;

    /* Sum: '<S323>/Subtract1' incorporates:
     *  Product: '<S323>/Product2'
     *  Product: '<S323>/Product3'
     *  UnaryMinus: '<S313>/Unary Minus'
     */
    rtb_Subtract_b2 = (rtb_Product_nr * Robot_Control_ConstB.Sin5_c) +
      (rtb_Product2_a * Robot_Control_ConstB.Cos5_b);

    /* Sum: '<S323>/Subtract' incorporates:
     *  Product: '<S323>/Product'
     *  Product: '<S323>/Product1'
     */
    rtb_Abs2_p = (rtb_Product_nr * Robot_Control_ConstB.Cos5_b) -
      (rtb_Product2_a * Robot_Control_ConstB.Sin5_c);

    /* Math: '<S323>/Hypot' */
    rtb_Product2_a = rt_hypotd_snf(rtb_Abs2_p, rtb_Subtract_b2);

    /* Switch: '<S323>/Switch1' incorporates:
     *  Constant: '<S323>/Constant'
     *  Constant: '<S323>/Constant1'
     *  Constant: '<S326>/Constant'
     *  Product: '<S323>/Divide'
     *  Product: '<S323>/Divide1'
     *  RelationalOperator: '<S326>/Compare'
     *  Switch: '<S323>/Switch'
     */
    if (rtb_Product2_a > 1.0E-6) {
      rtb_Abs2_p /= rtb_Product2_a;
      rtb_Product2_a = rtb_Subtract_b2 / rtb_Product2_a;
    } else {
      rtb_Abs2_p = 1.0;
      rtb_Product2_a = 0.0;
    }

    /* End of Switch: '<S323>/Switch1' */
    rtb_Optimized_Module_Angle = rt_atan2d_snf(rtb_Product2_a, rtb_Abs2_p);
  } else {
    u0 = Robot_Control_B.BR_Desired_Wheel_Speed;
    rtb_Optimized_Module_Angle = Robot_Control_B.BR_Desired_Module_Angle;
  }

  /* Product: '<S316>/Product2' incorporates:
   *  Constant: '<S316>/Constant'
   *  Switch: '<S313>/Speed_Switch'
   */
  rtb_MatrixConcatenate_b_idx_0 = u0 * 1210.9758620668042;

  /* Signum: '<S311>/Sign' */
  if (rtIsNaN(rtb_MatrixConcatenate_b_idx_0)) {
    u0 = (rtNaN);
  } else if (rtb_MatrixConcatenate_b_idx_0 < 0.0) {
    u0 = -1.0;
  } else {
    u0 = (rtb_MatrixConcatenate_b_idx_0 > 0.0);
  }

  /* Signum: '<S311>/Sign1' incorporates:
   *  Inport: '<Root>/BackRight_Drive_Motor_Speed'
   */
  if (rtIsNaN(Robot_Control_U.BackRight_Drive_Motor_Speed)) {
    rtb_Switch2_et = (rtNaN);
  } else if (Robot_Control_U.BackRight_Drive_Motor_Speed < 0.0) {
    rtb_Switch2_et = -1.0;
  } else {
    rtb_Switch2_et = (Robot_Control_U.BackRight_Drive_Motor_Speed > 0.0);
  }

  /* Sum: '<S314>/Add' incorporates:
   *  Inport: '<Root>/BR_Steer_Module_Angle'
   *  Sum: '<S315>/Sum'
   */
  rtb_Optimized_Module_Angle -= Robot_Control_U.BR_Steer_Module_Angle;

  /* Product: '<S246>/Product' incorporates:
   *  Abs: '<S311>/Abs'
   *  Abs: '<S314>/Abs'
   *  Constant: '<S317>/Constant'
   *  Constant: '<S327>/Constant3'
   *  Constant: '<S327>/Constant4'
   *  Inport: '<Root>/BackRight_Drive_Motor_Speed'
   *  Logic: '<S311>/OR'
   *  Lookup_n-D: '<S314>/1-D Lookup Table'
   *  Math: '<S327>/Math Function'
   *  RelationalOperator: '<S311>/Equal1'
   *  RelationalOperator: '<S317>/Compare'
   *  Signum: '<S311>/Sign'
   *  Signum: '<S311>/Sign1'
   *  Sum: '<S314>/Add'
   *  Sum: '<S327>/Add1'
   *  Sum: '<S327>/Add2'
   */
  rtb_MatrixConcatenate_b_idx_0 = (((real_T)((u0 == rtb_Switch2_et) || (fabs
    (Robot_Control_U.BackRight_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_MatrixConcatenate_b_idx_0)
    * look1_binlcpw(fabs(rt_modd_snf(rtb_Optimized_Module_Angle +
    1.5707963267948966, 3.1415926535897931) - 1.5707963267948966),
                    rtCP_uDLookupTable_bp01Data, rtCP_uDLookupTable_tableData_g,
                    1U);

  /* Sum: '<S312>/Sum' incorporates:
   *  Inport: '<Root>/BackRight_Drive_Motor_Speed'
   */
  rtb_Abs2_p = rtb_MatrixConcatenate_b_idx_0 -
    Robot_Control_U.BackRight_Drive_Motor_Speed;

  /* Sum: '<S319>/Sum1' incorporates:
   *  Constant: '<S312>/Constant2'
   *  Product: '<S319>/Product'
   *  Sum: '<S319>/Sum'
   *  UnitDelay: '<S319>/Unit Delay1'
   */
  rtb_Product2_a = ((rtb_Abs2_p - Robot_Control_DW.UnitDelay1_DSTATE_j) *
                    Drive_Motor_Control_D_FilterCoeff) +
    Robot_Control_DW.UnitDelay1_DSTATE_j;

  /* Product: '<S312>/Product' incorporates:
   *  Constant: '<S312>/Constant3'
   */
  rtb_Subtract_b2 = rtb_Product2_a * Drive_Motor_Control_D;

  /* Sum: '<S318>/Diff' incorporates:
   *  UnitDelay: '<S318>/UD'
   *
   * Block description for '<S318>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S318>/UD':
   *
   *  Store in Global RAM
   */
  u0 = rtb_Subtract_b2 - Robot_Control_DW.UD_DSTATE_j;

  /* Saturate: '<S312>/Saturation' */
  if (u0 > Drive_Motor_Control_D_UL) {
    u0 = Drive_Motor_Control_D_UL;
  } else if (u0 < Drive_Motor_Control_D_LL) {
    u0 = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S312>/Add' incorporates:
   *  Gain: '<S312>/Gain'
   *  Gain: '<S312>/Gain1'
   *  Saturate: '<S312>/Saturation'
   */
  rtb_Modulation_Drv = ((Drive_Motor_Control_FF * rtb_MatrixConcatenate_b_idx_0)
                        + (Drive_Motor_Control_P * rtb_Abs2_p)) + u0;

  /* Switch: '<S312>/Switch' incorporates:
   *  Constant: '<S312>/Constant4'
   */
  if (Robot_Control_B.Swerve_Drive_Integral_Enable) {
    /* Sum: '<S312>/Sum2' incorporates:
     *  Gain: '<S312>/Gain2'
     *  UnitDelay: '<S312>/Unit Delay'
     */
    rtb_Abs2_p = (Drive_Motor_Control_I * rtb_Abs2_p) +
      Robot_Control_DW.UnitDelay_DSTATE_l;

    /* Sum: '<S312>/Subtract' incorporates:
     *  Constant: '<S312>/Constant'
     */
    rtb_Add_h5 = 1.0 - rtb_Modulation_Drv;

    /* Switch: '<S320>/Switch2' incorporates:
     *  Constant: '<S312>/Constant'
     *  RelationalOperator: '<S320>/LowerRelop1'
     *  Sum: '<S312>/Subtract'
     */
    if (!(rtb_Abs2_p > (1.0 - rtb_Modulation_Drv))) {
      /* Sum: '<S312>/Subtract1' incorporates:
       *  Constant: '<S312>/Constant1'
       */
      rtb_Add_h5 = -1.0 - rtb_Modulation_Drv;

      /* Switch: '<S320>/Switch' incorporates:
       *  Constant: '<S312>/Constant1'
       *  RelationalOperator: '<S320>/UpperRelop'
       *  Sum: '<S312>/Subtract1'
       */
      if (!(rtb_Abs2_p < (-1.0 - rtb_Modulation_Drv))) {
        rtb_Add_h5 = rtb_Abs2_p;
      }

      /* End of Switch: '<S320>/Switch' */
    }

    /* End of Switch: '<S320>/Switch2' */

    /* Saturate: '<S312>/Saturation1' */
    if (rtb_Add_h5 > Drive_Motor_Control_I_UL) {
      rtb_Abs2_p = Drive_Motor_Control_I_UL;
    } else if (rtb_Add_h5 < Drive_Motor_Control_I_LL) {
      rtb_Abs2_p = Drive_Motor_Control_I_LL;
    } else {
      rtb_Abs2_p = rtb_Add_h5;
    }

    /* End of Saturate: '<S312>/Saturation1' */
  } else {
    rtb_Abs2_p = 0.0;
  }

  /* End of Switch: '<S312>/Switch' */

  /* Sum: '<S312>/Add1' */
  u0 = rtb_Modulation_Drv + rtb_Abs2_p;

  /* Saturate: '<S312>/Saturation2' */
  if (u0 > 1.0) {
    /* Outport: '<Root>/BackRight_Drive_DutyCycle' */
    Robot_Control_Y.BackRight_Drive_DutyCycle = 1.0;
  } else if (u0 < -1.0) {
    /* Outport: '<Root>/BackRight_Drive_DutyCycle' */
    Robot_Control_Y.BackRight_Drive_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/BackRight_Drive_DutyCycle' */
    Robot_Control_Y.BackRight_Drive_DutyCycle = u0;
  }

  /* End of Saturate: '<S312>/Saturation2' */

  /* Switch: '<S373>/Switch' */
  if (!rtb_Is_Absolute_Steering) {
    /* Switch: '<S373>/Switch' incorporates:
     *  Fcn: '<S374>/x->theta'
     */
    Robot_Control_B.FL_Desired_Module_Angle = rt_atan2d_snf(rtb_Reshapey[1],
      rtb_Reshapey[0]);
  }

  /* End of Switch: '<S373>/Switch' */

  /* Trigonometry: '<S261>/Cos4' incorporates:
   *  Switch: '<S250>/Angle_Switch'
   *  Trigonometry: '<S260>/Cos4'
   */
  rtb_Product_nr = cos(Robot_Control_B.FL_Desired_Module_Angle);

  /* Trigonometry: '<S261>/Sin5' incorporates:
   *  Inport: '<Root>/FL_Steer_Module_Angle'
   *  UnaryMinus: '<S259>/Unary Minus'
   */
  rtb_uDLookupTable_l = sin(-Robot_Control_U.FL_Steer_Module_Angle);

  /* Trigonometry: '<S261>/Sin4' incorporates:
   *  Switch: '<S250>/Angle_Switch'
   *  Trigonometry: '<S260>/Sin4'
   */
  rtb_Integral_hv = sin(Robot_Control_B.FL_Desired_Module_Angle);

  /* Trigonometry: '<S261>/Cos5' incorporates:
   *  Inport: '<Root>/FL_Steer_Module_Angle'
   *  UnaryMinus: '<S259>/Unary Minus'
   */
  rtb_Init = cos(-Robot_Control_U.FL_Steer_Module_Angle);

  /* Sum: '<S261>/Subtract1' incorporates:
   *  Product: '<S261>/Product2'
   *  Product: '<S261>/Product3'
   *  Trigonometry: '<S261>/Cos4'
   *  Trigonometry: '<S261>/Sin4'
   */
  rtb_Modulation_Drv = (rtb_Product_nr * rtb_uDLookupTable_l) + (rtb_Integral_hv
    * rtb_Init);

  /* Sum: '<S261>/Subtract' incorporates:
   *  Product: '<S261>/Product'
   *  Product: '<S261>/Product1'
   *  Trigonometry: '<S261>/Cos4'
   *  Trigonometry: '<S261>/Sin4'
   */
  rtb_Add_h5 = (rtb_Product_nr * rtb_Init) - (rtb_Integral_hv *
    rtb_uDLookupTable_l);

  /* Math: '<S261>/Hypot' */
  rtb_Hypot_g5 = rt_hypotd_snf(rtb_Add_h5, rtb_Modulation_Drv);

  /* Switch: '<S261>/Switch' incorporates:
   *  Constant: '<S261>/Constant'
   *  Constant: '<S261>/Constant1'
   *  Constant: '<S262>/Constant'
   *  Product: '<S261>/Divide'
   *  Product: '<S261>/Divide1'
   *  RelationalOperator: '<S262>/Compare'
   *  Switch: '<S261>/Switch1'
   */
  if (rtb_Hypot_g5 > 1.0E-6) {
    rtb_MatrixConcatenate_b_idx_0 = rtb_Modulation_Drv / rtb_Hypot_g5;
    rtb_Init = rtb_Add_h5 / rtb_Hypot_g5;
  } else {
    rtb_MatrixConcatenate_b_idx_0 = 0.0;
    rtb_Init = 1.0;
  }

  /* End of Switch: '<S261>/Switch' */

  /* Product: '<S368>/Product' */
  Robot_Control_B.FL_Desired_Wheel_Speed =
    Robot_Control_B.FL_Desired_Wheel_Speed_in * rtb_DeadZone;

  /* Switch: '<S250>/Speed_Switch' incorporates:
   *  Abs: '<S250>/Abs'
   *  Constant: '<S258>/Constant'
   *  RelationalOperator: '<S258>/Compare'
   *  Switch: '<S250>/Angle_Switch'
   *  Trigonometry: '<S260>/Atan1'
   *  Trigonometry: '<S261>/Atan1'
   *  UnaryMinus: '<S250>/Unary Minus'
   */
  if (fabs(rt_atan2d_snf(rtb_MatrixConcatenate_b_idx_0, rtb_Init)) >
      1.5707963267948966) {
    u0 = -Robot_Control_B.FL_Desired_Wheel_Speed;

    /* Sum: '<S260>/Subtract1' incorporates:
     *  Product: '<S260>/Product2'
     *  Product: '<S260>/Product3'
     *  UnaryMinus: '<S250>/Unary Minus'
     */
    rtb_Modulation_Drv = (rtb_Product_nr * Robot_Control_ConstB.Sin5) +
      (rtb_Integral_hv * Robot_Control_ConstB.Cos5);

    /* Sum: '<S260>/Subtract' incorporates:
     *  Product: '<S260>/Product'
     *  Product: '<S260>/Product1'
     */
    rtb_Hypot_g5 = (rtb_Product_nr * Robot_Control_ConstB.Cos5) -
      (rtb_Integral_hv * Robot_Control_ConstB.Sin5);

    /* Math: '<S260>/Hypot' */
    rtb_Add_h5 = rt_hypotd_snf(rtb_Hypot_g5, rtb_Modulation_Drv);

    /* Switch: '<S260>/Switch1' incorporates:
     *  Constant: '<S260>/Constant'
     *  Constant: '<S260>/Constant1'
     *  Constant: '<S263>/Constant'
     *  Product: '<S260>/Divide'
     *  Product: '<S260>/Divide1'
     *  RelationalOperator: '<S263>/Compare'
     *  Switch: '<S260>/Switch'
     */
    if (rtb_Add_h5 > 1.0E-6) {
      rtb_Hypot_g5 /= rtb_Add_h5;
      rtb_Modulation_Drv /= rtb_Add_h5;
    } else {
      rtb_Hypot_g5 = 1.0;
      rtb_Modulation_Drv = 0.0;
    }

    /* End of Switch: '<S260>/Switch1' */
    rtb_uDLookupTable_l = rt_atan2d_snf(rtb_Modulation_Drv, rtb_Hypot_g5);
  } else {
    u0 = Robot_Control_B.FL_Desired_Wheel_Speed;
    rtb_uDLookupTable_l = Robot_Control_B.FL_Desired_Module_Angle;
  }

  /* Product: '<S253>/Product2' incorporates:
   *  Constant: '<S253>/Constant'
   *  Switch: '<S250>/Speed_Switch'
   */
  rtb_MatrixConcatenate_b_idx_0 = u0 * 1210.9758620668042;

  /* Signum: '<S248>/Sign' */
  if (rtIsNaN(rtb_MatrixConcatenate_b_idx_0)) {
    u0 = (rtNaN);
  } else if (rtb_MatrixConcatenate_b_idx_0 < 0.0) {
    u0 = -1.0;
  } else {
    u0 = (rtb_MatrixConcatenate_b_idx_0 > 0.0);
  }

  /* Signum: '<S248>/Sign1' incorporates:
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Speed'
   */
  if (rtIsNaN(Robot_Control_U.FrontLeft_Drive_Motor_Speed)) {
    rtb_Switch2_et = (rtNaN);
  } else if (Robot_Control_U.FrontLeft_Drive_Motor_Speed < 0.0) {
    rtb_Switch2_et = -1.0;
  } else {
    rtb_Switch2_et = (Robot_Control_U.FrontLeft_Drive_Motor_Speed > 0.0);
  }

  /* Sum: '<S251>/Add' incorporates:
   *  Inport: '<Root>/FL_Steer_Module_Angle'
   *  Sum: '<S252>/Sum'
   */
  rtb_uDLookupTable_l -= Robot_Control_U.FL_Steer_Module_Angle;

  /* Product: '<S243>/Product' incorporates:
   *  Abs: '<S248>/Abs'
   *  Abs: '<S251>/Abs'
   *  Constant: '<S254>/Constant'
   *  Constant: '<S264>/Constant3'
   *  Constant: '<S264>/Constant4'
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Speed'
   *  Logic: '<S248>/OR'
   *  Lookup_n-D: '<S251>/1-D Lookup Table'
   *  Math: '<S264>/Math Function'
   *  RelationalOperator: '<S248>/Equal1'
   *  RelationalOperator: '<S254>/Compare'
   *  Signum: '<S248>/Sign'
   *  Signum: '<S248>/Sign1'
   *  Sum: '<S251>/Add'
   *  Sum: '<S264>/Add1'
   *  Sum: '<S264>/Add2'
   */
  rtb_MatrixConcatenate_b_idx_0 = (((real_T)((u0 == rtb_Switch2_et) || (fabs
    (Robot_Control_U.FrontLeft_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_MatrixConcatenate_b_idx_0)
    * look1_binlcpw(fabs(rt_modd_snf(rtb_uDLookupTable_l + 1.5707963267948966,
    3.1415926535897931) - 1.5707963267948966), rtCP_uDLookupTable_bp01Data_h,
                    rtCP_uDLookupTable_tableData_j, 1U);

  /* Sum: '<S249>/Sum' incorporates:
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Speed'
   */
  rtb_Hypot_g5 = rtb_MatrixConcatenate_b_idx_0 -
    Robot_Control_U.FrontLeft_Drive_Motor_Speed;

  /* Sum: '<S256>/Sum1' incorporates:
   *  Constant: '<S249>/Constant2'
   *  Product: '<S256>/Product'
   *  Sum: '<S256>/Sum'
   *  UnitDelay: '<S256>/Unit Delay1'
   */
  rtb_Modulation_Drv = ((rtb_Hypot_g5 - Robot_Control_DW.UnitDelay1_DSTATE_f) *
                        Drive_Motor_Control_D_FilterCoeff) +
    Robot_Control_DW.UnitDelay1_DSTATE_f;

  /* Product: '<S249>/Product' incorporates:
   *  Constant: '<S249>/Constant3'
   */
  rtb_Add_h5 = rtb_Modulation_Drv * Drive_Motor_Control_D;

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
  u0 = rtb_Add_h5 - Robot_Control_DW.UD_DSTATE_h;

  /* Saturate: '<S249>/Saturation' */
  if (u0 > Drive_Motor_Control_D_UL) {
    u0 = Drive_Motor_Control_D_UL;
  } else if (u0 < Drive_Motor_Control_D_LL) {
    u0 = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S249>/Add' incorporates:
   *  Gain: '<S249>/Gain'
   *  Gain: '<S249>/Gain1'
   *  Saturate: '<S249>/Saturation'
   */
  rtb_MatrixConcatenate_idx_0 = ((Drive_Motor_Control_FF *
    rtb_MatrixConcatenate_b_idx_0) + (Drive_Motor_Control_P * rtb_Hypot_g5)) +
    u0;

  /* Switch: '<S249>/Switch' incorporates:
   *  Constant: '<S249>/Constant4'
   */
  if (Robot_Control_B.Swerve_Drive_Integral_Enable) {
    /* Sum: '<S249>/Sum2' incorporates:
     *  Gain: '<S249>/Gain2'
     *  UnitDelay: '<S249>/Unit Delay'
     */
    rtb_Hypot_g5 = (Drive_Motor_Control_I * rtb_Hypot_g5) +
      Robot_Control_DW.UnitDelay_DSTATE_j;

    /* Sum: '<S249>/Subtract' incorporates:
     *  Constant: '<S249>/Constant'
     */
    rtb_Switch2_n = 1.0 - rtb_MatrixConcatenate_idx_0;

    /* Switch: '<S257>/Switch2' incorporates:
     *  Constant: '<S249>/Constant'
     *  RelationalOperator: '<S257>/LowerRelop1'
     *  Sum: '<S249>/Subtract'
     */
    if (!(rtb_Hypot_g5 > (1.0 - rtb_MatrixConcatenate_idx_0))) {
      /* Sum: '<S249>/Subtract1' incorporates:
       *  Constant: '<S249>/Constant1'
       */
      rtb_Switch2_n = -1.0 - rtb_MatrixConcatenate_idx_0;

      /* Switch: '<S257>/Switch' incorporates:
       *  Constant: '<S249>/Constant1'
       *  RelationalOperator: '<S257>/UpperRelop'
       *  Sum: '<S249>/Subtract1'
       */
      if (!(rtb_Hypot_g5 < (-1.0 - rtb_MatrixConcatenate_idx_0))) {
        rtb_Switch2_n = rtb_Hypot_g5;
      }

      /* End of Switch: '<S257>/Switch' */
    }

    /* End of Switch: '<S257>/Switch2' */

    /* Saturate: '<S249>/Saturation1' */
    if (rtb_Switch2_n > Drive_Motor_Control_I_UL) {
      rtb_Hypot_g5 = Drive_Motor_Control_I_UL;
    } else if (rtb_Switch2_n < Drive_Motor_Control_I_LL) {
      rtb_Hypot_g5 = Drive_Motor_Control_I_LL;
    } else {
      rtb_Hypot_g5 = rtb_Switch2_n;
    }

    /* End of Saturate: '<S249>/Saturation1' */
  } else {
    rtb_Hypot_g5 = 0.0;
  }

  /* End of Switch: '<S249>/Switch' */

  /* Sum: '<S249>/Add1' */
  u0 = rtb_MatrixConcatenate_idx_0 + rtb_Hypot_g5;

  /* Saturate: '<S249>/Saturation2' */
  if (u0 > 1.0) {
    /* Outport: '<Root>/FrontLeft_Drive_DutyCycle' */
    Robot_Control_Y.FrontLeft_Drive_DutyCycle = 1.0;
  } else if (u0 < -1.0) {
    /* Outport: '<Root>/FrontLeft_Drive_DutyCycle' */
    Robot_Control_Y.FrontLeft_Drive_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/FrontLeft_Drive_DutyCycle' */
    Robot_Control_Y.FrontLeft_Drive_DutyCycle = u0;
  }

  /* End of Saturate: '<S249>/Saturation2' */

  /* Sum: '<S265>/Add1' incorporates:
   *  Constant: '<S265>/Constant3'
   *  Constant: '<S265>/Constant4'
   *  Math: '<S265>/Math Function'
   *  Sum: '<S265>/Add2'
   */
  rtb_MatrixConcatenate_b_idx_0 = rt_modd_snf(rtb_uDLookupTable_l +
    3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S267>/Sum1' incorporates:
   *  Constant: '<S252>/Constant2'
   *  Product: '<S267>/Product'
   *  Sum: '<S267>/Sum'
   *  UnitDelay: '<S267>/Unit Delay1'
   */
  rtb_MatrixConcatenate_idx_0 = ((rtb_MatrixConcatenate_b_idx_0 -
    Robot_Control_DW.UnitDelay1_DSTATE_b) * Steering_Motor_Control_D_FilterCoeff)
    + Robot_Control_DW.UnitDelay1_DSTATE_b;

  /* Product: '<S252>/Product' incorporates:
   *  Constant: '<S252>/Constant3'
   */
  rtb_Switch2_n = rtb_MatrixConcatenate_idx_0 * Steering_Motor_Control_D;

  /* Sum: '<S266>/Diff' incorporates:
   *  UnitDelay: '<S266>/UD'
   *
   * Block description for '<S266>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S266>/UD':
   *
   *  Store in Global RAM
   */
  u0 = rtb_Switch2_n - Robot_Control_DW.UD_DSTATE_b;

  /* Saturate: '<S252>/Saturation' */
  if (u0 > Steering_Motor_Control_D_UL) {
    u0 = Steering_Motor_Control_D_UL;
  } else if (u0 < Steering_Motor_Control_D_LL) {
    u0 = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S252>/Add' incorporates:
   *  Gain: '<S252>/Gain1'
   *  Saturate: '<S252>/Saturation'
   */
  rtb_Add_fn = (Steering_Motor_Control_P * rtb_MatrixConcatenate_b_idx_0) + u0;

  /* Sum: '<S252>/Subtract' incorporates:
   *  Constant: '<S252>/Constant'
   */
  rtb_Init = 1.0 - rtb_Add_fn;

  /* Sum: '<S252>/Sum2' incorporates:
   *  Gain: '<S252>/Gain2'
   *  UnitDelay: '<S252>/Unit Delay'
   */
  rtb_Sum2_e = (Steering_Motor_Control_I * rtb_MatrixConcatenate_b_idx_0) +
    Robot_Control_DW.UnitDelay_DSTATE_e;

  /* Switch: '<S268>/Switch2' incorporates:
   *  RelationalOperator: '<S268>/LowerRelop1'
   */
  if (!(rtb_Sum2_e > rtb_Init)) {
    /* Switch: '<S268>/Switch' incorporates:
     *  Constant: '<S252>/Constant1'
     *  RelationalOperator: '<S268>/UpperRelop'
     *  Sum: '<S252>/Subtract1'
     */
    if (rtb_Sum2_e < (-1.0 - rtb_Add_fn)) {
      rtb_Init = -1.0 - rtb_Add_fn;
    } else {
      rtb_Init = rtb_Sum2_e;
    }

    /* End of Switch: '<S268>/Switch' */
  }

  /* End of Switch: '<S268>/Switch2' */

  /* Saturate: '<S252>/Saturation1' */
  if (rtb_Init > Steering_Motor_Control_I_UL) {
    rtb_Sum2_e = Steering_Motor_Control_I_UL;
  } else if (rtb_Init < Steering_Motor_Control_I_LL) {
    rtb_Sum2_e = Steering_Motor_Control_I_LL;
  } else {
    rtb_Sum2_e = rtb_Init;
  }

  /* End of Saturate: '<S252>/Saturation1' */

  /* Sum: '<S252>/Add1' */
  u0 = rtb_Add_fn + rtb_Sum2_e;

  /* Saturate: '<S252>/Saturation2' */
  if (u0 > 1.0) {
    /* Outport: '<Root>/FrontLeft_Steer_DutyCycle' */
    Robot_Control_Y.FrontLeft_Steer_DutyCycle = 1.0;
  } else if (u0 < -1.0) {
    /* Outport: '<Root>/FrontLeft_Steer_DutyCycle' */
    Robot_Control_Y.FrontLeft_Steer_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/FrontLeft_Steer_DutyCycle' */
    Robot_Control_Y.FrontLeft_Steer_DutyCycle = u0;
  }

  /* End of Saturate: '<S252>/Saturation2' */

  /* Switch: '<S378>/Switch' */
  if (!rtb_Compare_jp) {
    /* Switch: '<S378>/Switch' incorporates:
     *  Fcn: '<S379>/x->theta'
     */
    Robot_Control_B.FR_Desired_Module_Angle = rt_atan2d_snf(rtb_Minus_n[1],
      rtb_Minus_n[0]);
  }

  /* End of Switch: '<S378>/Switch' */

  /* Trigonometry: '<S282>/Cos4' incorporates:
   *  Switch: '<S271>/Angle_Switch'
   *  Trigonometry: '<S281>/Cos4'
   */
  rtb_Product_nr = cos(Robot_Control_B.FR_Desired_Module_Angle);

  /* Trigonometry: '<S282>/Sin5' incorporates:
   *  Inport: '<Root>/FR_Steer_Module_Angle'
   *  UnaryMinus: '<S280>/Unary Minus'
   */
  rtb_uDLookupTable_l = sin(-Robot_Control_U.FR_Steer_Module_Angle);

  /* Trigonometry: '<S282>/Sin4' incorporates:
   *  Switch: '<S271>/Angle_Switch'
   *  Trigonometry: '<S281>/Sin4'
   */
  rtb_Integral_hv = sin(Robot_Control_B.FR_Desired_Module_Angle);

  /* Trigonometry: '<S282>/Cos5' incorporates:
   *  Inport: '<Root>/FR_Steer_Module_Angle'
   *  UnaryMinus: '<S280>/Unary Minus'
   */
  rtb_Init = cos(-Robot_Control_U.FR_Steer_Module_Angle);

  /* Sum: '<S282>/Subtract1' incorporates:
   *  Product: '<S282>/Product2'
   *  Product: '<S282>/Product3'
   *  Trigonometry: '<S282>/Cos4'
   *  Trigonometry: '<S282>/Sin4'
   */
  rtb_Add_fn = (rtb_Product_nr * rtb_uDLookupTable_l) + (rtb_Integral_hv *
    rtb_Init);

  /* Sum: '<S282>/Subtract' incorporates:
   *  Product: '<S282>/Product'
   *  Product: '<S282>/Product1'
   *  Trigonometry: '<S282>/Cos4'
   *  Trigonometry: '<S282>/Sin4'
   */
  rtb_Subtract1_la = (rtb_Product_nr * rtb_Init) - (rtb_Integral_hv *
    rtb_uDLookupTable_l);

  /* Math: '<S282>/Hypot' */
  rtb_Hypot_b = rt_hypotd_snf(rtb_Subtract1_la, rtb_Add_fn);

  /* Switch: '<S282>/Switch' incorporates:
   *  Constant: '<S282>/Constant'
   *  Constant: '<S282>/Constant1'
   *  Constant: '<S283>/Constant'
   *  Product: '<S282>/Divide'
   *  Product: '<S282>/Divide1'
   *  RelationalOperator: '<S283>/Compare'
   *  Switch: '<S282>/Switch1'
   */
  if (rtb_Hypot_b > 1.0E-6) {
    rtb_MatrixConcatenate_b_idx_0 = rtb_Add_fn / rtb_Hypot_b;
    rtb_Init = rtb_Subtract1_la / rtb_Hypot_b;
  } else {
    rtb_MatrixConcatenate_b_idx_0 = 0.0;
    rtb_Init = 1.0;
  }

  /* End of Switch: '<S282>/Switch' */

  /* Product: '<S368>/Product1' */
  Robot_Control_B.FR_Desired_Wheel_Speed =
    Robot_Control_B.FR_Desired_Wheel_Speed_in * rtb_DeadZone;

  /* Switch: '<S271>/Speed_Switch' incorporates:
   *  Abs: '<S271>/Abs'
   *  Constant: '<S279>/Constant'
   *  RelationalOperator: '<S279>/Compare'
   *  Switch: '<S271>/Angle_Switch'
   *  Trigonometry: '<S281>/Atan1'
   *  Trigonometry: '<S282>/Atan1'
   *  UnaryMinus: '<S271>/Unary Minus'
   */
  if (fabs(rt_atan2d_snf(rtb_MatrixConcatenate_b_idx_0, rtb_Init)) >
      1.5707963267948966) {
    u0 = -Robot_Control_B.FR_Desired_Wheel_Speed;

    /* Sum: '<S281>/Subtract1' incorporates:
     *  Product: '<S281>/Product2'
     *  Product: '<S281>/Product3'
     *  UnaryMinus: '<S271>/Unary Minus'
     */
    rtb_Add_fn = (rtb_Product_nr * Robot_Control_ConstB.Sin5_m) +
      (rtb_Integral_hv * Robot_Control_ConstB.Cos5_g);

    /* Sum: '<S281>/Subtract' incorporates:
     *  Product: '<S281>/Product'
     *  Product: '<S281>/Product1'
     */
    rtb_Hypot_b = (rtb_Product_nr * Robot_Control_ConstB.Cos5_g) -
      (rtb_Integral_hv * Robot_Control_ConstB.Sin5_m);

    /* Math: '<S281>/Hypot' */
    rtb_Subtract1_la = rt_hypotd_snf(rtb_Hypot_b, rtb_Add_fn);

    /* Switch: '<S281>/Switch1' incorporates:
     *  Constant: '<S281>/Constant'
     *  Constant: '<S281>/Constant1'
     *  Constant: '<S284>/Constant'
     *  Product: '<S281>/Divide'
     *  Product: '<S281>/Divide1'
     *  RelationalOperator: '<S284>/Compare'
     *  Switch: '<S281>/Switch'
     */
    if (rtb_Subtract1_la > 1.0E-6) {
      rtb_Hypot_b /= rtb_Subtract1_la;
      rtb_Add_fn /= rtb_Subtract1_la;
    } else {
      rtb_Hypot_b = 1.0;
      rtb_Add_fn = 0.0;
    }

    /* End of Switch: '<S281>/Switch1' */
    rtb_uDLookupTable_l = rt_atan2d_snf(rtb_Add_fn, rtb_Hypot_b);
  } else {
    u0 = Robot_Control_B.FR_Desired_Wheel_Speed;
    rtb_uDLookupTable_l = Robot_Control_B.FR_Desired_Module_Angle;
  }

  /* Product: '<S274>/Product2' incorporates:
   *  Constant: '<S274>/Constant'
   *  Switch: '<S271>/Speed_Switch'
   */
  rtb_MatrixConcatenate_b_idx_0 = u0 * 1210.9758620668042;

  /* Signum: '<S269>/Sign' */
  if (rtIsNaN(rtb_MatrixConcatenate_b_idx_0)) {
    u0 = (rtNaN);
  } else if (rtb_MatrixConcatenate_b_idx_0 < 0.0) {
    u0 = -1.0;
  } else {
    u0 = (rtb_MatrixConcatenate_b_idx_0 > 0.0);
  }

  /* Signum: '<S269>/Sign1' incorporates:
   *  Inport: '<Root>/FrontRight_Drive_Motor_Speed'
   */
  if (rtIsNaN(Robot_Control_U.FrontRight_Drive_Motor_Speed)) {
    rtb_Switch2_et = (rtNaN);
  } else if (Robot_Control_U.FrontRight_Drive_Motor_Speed < 0.0) {
    rtb_Switch2_et = -1.0;
  } else {
    rtb_Switch2_et = (Robot_Control_U.FrontRight_Drive_Motor_Speed > 0.0);
  }

  /* Sum: '<S272>/Add' incorporates:
   *  Inport: '<Root>/FR_Steer_Module_Angle'
   *  Sum: '<S273>/Sum'
   */
  rtb_uDLookupTable_l -= Robot_Control_U.FR_Steer_Module_Angle;

  /* Product: '<S244>/Product' incorporates:
   *  Abs: '<S269>/Abs'
   *  Abs: '<S272>/Abs'
   *  Constant: '<S275>/Constant'
   *  Constant: '<S285>/Constant3'
   *  Constant: '<S285>/Constant4'
   *  Inport: '<Root>/FrontRight_Drive_Motor_Speed'
   *  Logic: '<S269>/OR'
   *  Lookup_n-D: '<S272>/1-D Lookup Table'
   *  Math: '<S285>/Math Function'
   *  RelationalOperator: '<S269>/Equal1'
   *  RelationalOperator: '<S275>/Compare'
   *  Signum: '<S269>/Sign'
   *  Signum: '<S269>/Sign1'
   *  Sum: '<S272>/Add'
   *  Sum: '<S285>/Add1'
   *  Sum: '<S285>/Add2'
   */
  rtb_MatrixConcatenate_b_idx_0 = (((real_T)((u0 == rtb_Switch2_et) || (fabs
    (Robot_Control_U.FrontRight_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_MatrixConcatenate_b_idx_0)
    * look1_binlcpw(fabs(rt_modd_snf(rtb_uDLookupTable_l + 1.5707963267948966,
    3.1415926535897931) - 1.5707963267948966), rtCP_uDLookupTable_bp01Data_p,
                    rtCP_uDLookupTable_tableData_gs, 1U);

  /* Sum: '<S270>/Sum' incorporates:
   *  Inport: '<Root>/FrontRight_Drive_Motor_Speed'
   */
  rtb_Hypot_b = rtb_MatrixConcatenate_b_idx_0 -
    Robot_Control_U.FrontRight_Drive_Motor_Speed;

  /* Sum: '<S277>/Sum1' incorporates:
   *  Constant: '<S270>/Constant2'
   *  Product: '<S277>/Product'
   *  Sum: '<S277>/Sum'
   *  UnitDelay: '<S277>/Unit Delay1'
   */
  rtb_Add_fn = ((rtb_Hypot_b - Robot_Control_DW.UnitDelay1_DSTATE_e) *
                Drive_Motor_Control_D_FilterCoeff) +
    Robot_Control_DW.UnitDelay1_DSTATE_e;

  /* Product: '<S270>/Product' incorporates:
   *  Constant: '<S270>/Constant3'
   */
  rtb_Subtract1_la = rtb_Add_fn * Drive_Motor_Control_D;

  /* Sum: '<S276>/Diff' incorporates:
   *  UnitDelay: '<S276>/UD'
   *
   * Block description for '<S276>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S276>/UD':
   *
   *  Store in Global RAM
   */
  u0 = rtb_Subtract1_la - Robot_Control_DW.UD_DSTATE_m;

  /* Saturate: '<S270>/Saturation' */
  if (u0 > Drive_Motor_Control_D_UL) {
    u0 = Drive_Motor_Control_D_UL;
  } else if (u0 < Drive_Motor_Control_D_LL) {
    u0 = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S270>/Add' incorporates:
   *  Gain: '<S270>/Gain'
   *  Gain: '<S270>/Gain1'
   *  Saturate: '<S270>/Saturation'
   */
  rtb_MatrixConcatenate_b_idx_0 = ((Drive_Motor_Control_FF *
    rtb_MatrixConcatenate_b_idx_0) + (Drive_Motor_Control_P * rtb_Hypot_b)) + u0;

  /* Switch: '<S270>/Switch' incorporates:
   *  Constant: '<S270>/Constant4'
   */
  if (Robot_Control_B.Swerve_Drive_Integral_Enable) {
    /* Sum: '<S270>/Sum2' incorporates:
     *  Gain: '<S270>/Gain2'
     *  UnitDelay: '<S270>/Unit Delay'
     */
    rtb_Hypot_b = (Drive_Motor_Control_I * rtb_Hypot_b) +
      Robot_Control_DW.UnitDelay_DSTATE_h;

    /* Sum: '<S270>/Subtract' incorporates:
     *  Constant: '<S270>/Constant'
     */
    rtb_Switch2_c = 1.0 - rtb_MatrixConcatenate_b_idx_0;

    /* Switch: '<S278>/Switch2' incorporates:
     *  Constant: '<S270>/Constant'
     *  RelationalOperator: '<S278>/LowerRelop1'
     *  Sum: '<S270>/Subtract'
     */
    if (!(rtb_Hypot_b > (1.0 - rtb_MatrixConcatenate_b_idx_0))) {
      /* Sum: '<S270>/Subtract1' incorporates:
       *  Constant: '<S270>/Constant1'
       */
      rtb_Switch2_c = -1.0 - rtb_MatrixConcatenate_b_idx_0;

      /* Switch: '<S278>/Switch' incorporates:
       *  Constant: '<S270>/Constant1'
       *  RelationalOperator: '<S278>/UpperRelop'
       *  Sum: '<S270>/Subtract1'
       */
      if (!(rtb_Hypot_b < (-1.0 - rtb_MatrixConcatenate_b_idx_0))) {
        rtb_Switch2_c = rtb_Hypot_b;
      }

      /* End of Switch: '<S278>/Switch' */
    }

    /* End of Switch: '<S278>/Switch2' */

    /* Saturate: '<S270>/Saturation1' */
    if (rtb_Switch2_c > Drive_Motor_Control_I_UL) {
      rtb_Hypot_b = Drive_Motor_Control_I_UL;
    } else if (rtb_Switch2_c < Drive_Motor_Control_I_LL) {
      rtb_Hypot_b = Drive_Motor_Control_I_LL;
    } else {
      rtb_Hypot_b = rtb_Switch2_c;
    }

    /* End of Saturate: '<S270>/Saturation1' */
  } else {
    rtb_Hypot_b = 0.0;
  }

  /* End of Switch: '<S270>/Switch' */

  /* Sum: '<S270>/Add1' */
  u0 = rtb_MatrixConcatenate_b_idx_0 + rtb_Hypot_b;

  /* Saturate: '<S270>/Saturation2' */
  if (u0 > 1.0) {
    /* Outport: '<Root>/FrontRight_Drive_DutyCycle' */
    Robot_Control_Y.FrontRight_Drive_DutyCycle = 1.0;
  } else if (u0 < -1.0) {
    /* Outport: '<Root>/FrontRight_Drive_DutyCycle' */
    Robot_Control_Y.FrontRight_Drive_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/FrontRight_Drive_DutyCycle' */
    Robot_Control_Y.FrontRight_Drive_DutyCycle = u0;
  }

  /* End of Saturate: '<S270>/Saturation2' */

  /* Sum: '<S286>/Add1' incorporates:
   *  Constant: '<S286>/Constant3'
   *  Constant: '<S286>/Constant4'
   *  Math: '<S286>/Math Function'
   *  Sum: '<S286>/Add2'
   */
  rtb_MatrixConcatenate_b_idx_0 = rt_modd_snf(rtb_uDLookupTable_l +
    3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S288>/Sum1' incorporates:
   *  Constant: '<S273>/Constant2'
   *  Product: '<S288>/Product'
   *  Sum: '<S288>/Sum'
   *  UnitDelay: '<S288>/Unit Delay1'
   */
  rtb_Switch2_c = ((rtb_MatrixConcatenate_b_idx_0 -
                    Robot_Control_DW.UnitDelay1_DSTATE_n) *
                   Steering_Motor_Control_D_FilterCoeff) +
    Robot_Control_DW.UnitDelay1_DSTATE_n;

  /* Product: '<S273>/Product' incorporates:
   *  Constant: '<S273>/Constant3'
   */
  rtb_Product_hi = rtb_Switch2_c * Steering_Motor_Control_D;

  /* Sum: '<S287>/Diff' incorporates:
   *  UnitDelay: '<S287>/UD'
   *
   * Block description for '<S287>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S287>/UD':
   *
   *  Store in Global RAM
   */
  u0 = rtb_Product_hi - Robot_Control_DW.UD_DSTATE_i;

  /* Saturate: '<S273>/Saturation' */
  if (u0 > Steering_Motor_Control_D_UL) {
    u0 = Steering_Motor_Control_D_UL;
  } else if (u0 < Steering_Motor_Control_D_LL) {
    u0 = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S273>/Add' incorporates:
   *  Gain: '<S273>/Gain1'
   *  Saturate: '<S273>/Saturation'
   */
  rtb_uDLookupTable_l = (Steering_Motor_Control_P *
    rtb_MatrixConcatenate_b_idx_0) + u0;

  /* Sum: '<S273>/Subtract' incorporates:
   *  Constant: '<S273>/Constant'
   */
  rtb_Init = 1.0 - rtb_uDLookupTable_l;

  /* Sum: '<S273>/Sum2' incorporates:
   *  Gain: '<S273>/Gain2'
   *  UnitDelay: '<S273>/Unit Delay'
   */
  rtb_MatrixConcatenate_b_idx_0 = (Steering_Motor_Control_I *
    rtb_MatrixConcatenate_b_idx_0) + Robot_Control_DW.UnitDelay_DSTATE_dt;

  /* Switch: '<S289>/Switch2' incorporates:
   *  RelationalOperator: '<S289>/LowerRelop1'
   */
  if (!(rtb_MatrixConcatenate_b_idx_0 > rtb_Init)) {
    /* Switch: '<S289>/Switch' incorporates:
     *  Constant: '<S273>/Constant1'
     *  RelationalOperator: '<S289>/UpperRelop'
     *  Sum: '<S273>/Subtract1'
     */
    if (rtb_MatrixConcatenate_b_idx_0 < (-1.0 - rtb_uDLookupTable_l)) {
      rtb_Init = -1.0 - rtb_uDLookupTable_l;
    } else {
      rtb_Init = rtb_MatrixConcatenate_b_idx_0;
    }

    /* End of Switch: '<S289>/Switch' */
  }

  /* End of Switch: '<S289>/Switch2' */

  /* Saturate: '<S273>/Saturation1' */
  if (rtb_Init > Steering_Motor_Control_I_UL) {
    rtb_Subtract1_a = Steering_Motor_Control_I_UL;
  } else if (rtb_Init < Steering_Motor_Control_I_LL) {
    rtb_Subtract1_a = Steering_Motor_Control_I_LL;
  } else {
    rtb_Subtract1_a = rtb_Init;
  }

  /* End of Saturate: '<S273>/Saturation1' */

  /* Sum: '<S273>/Add1' */
  u0 = rtb_uDLookupTable_l + rtb_Subtract1_a;

  /* Saturate: '<S273>/Saturation2' */
  if (u0 > 1.0) {
    /* Outport: '<Root>/FrontRight_Steer_DutyCycle' */
    Robot_Control_Y.FrontRight_Steer_DutyCycle = 1.0;
  } else if (u0 < -1.0) {
    /* Outport: '<Root>/FrontRight_Steer_DutyCycle' */
    Robot_Control_Y.FrontRight_Steer_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/FrontRight_Steer_DutyCycle' */
    Robot_Control_Y.FrontRight_Steer_DutyCycle = u0;
  }

  /* End of Saturate: '<S273>/Saturation2' */

  /* Switch: '<S383>/Switch' */
  if (!rtb_AND1) {
    /* Switch: '<S383>/Switch' incorporates:
     *  Fcn: '<S384>/x->theta'
     */
    Robot_Control_B.BL_Desired_Module_Angle = rt_atan2d_snf(rtb_Add2[1],
      rtb_Add2[0]);
  }

  /* End of Switch: '<S383>/Switch' */

  /* Trigonometry: '<S303>/Cos4' incorporates:
   *  Switch: '<S292>/Angle_Switch'
   *  Trigonometry: '<S302>/Cos4'
   */
  rtb_Product_nr = cos(Robot_Control_B.BL_Desired_Module_Angle);

  /* Trigonometry: '<S303>/Sin5' incorporates:
   *  Inport: '<Root>/BL_Steer_Module_Angle'
   *  UnaryMinus: '<S301>/Unary Minus'
   */
  rtb_uDLookupTable_l = sin(-Robot_Control_U.BL_Steer_Module_Angle);

  /* Trigonometry: '<S303>/Sin4' incorporates:
   *  Switch: '<S292>/Angle_Switch'
   *  Trigonometry: '<S302>/Sin4'
   */
  rtb_Integral_hv = sin(Robot_Control_B.BL_Desired_Module_Angle);

  /* Trigonometry: '<S303>/Cos5' incorporates:
   *  Inport: '<Root>/BL_Steer_Module_Angle'
   *  UnaryMinus: '<S301>/Unary Minus'
   */
  rtb_Init = cos(-Robot_Control_U.BL_Steer_Module_Angle);

  /* Sum: '<S303>/Subtract1' incorporates:
   *  Product: '<S303>/Product2'
   *  Product: '<S303>/Product3'
   *  Trigonometry: '<S303>/Cos4'
   *  Trigonometry: '<S303>/Sin4'
   */
  rtb_MatrixConcatenate_b_idx_0 = (rtb_Product_nr * rtb_uDLookupTable_l) +
    (rtb_Integral_hv * rtb_Init);

  /* Sum: '<S303>/Subtract' incorporates:
   *  Product: '<S303>/Product'
   *  Product: '<S303>/Product1'
   *  Trigonometry: '<S303>/Cos4'
   *  Trigonometry: '<S303>/Sin4'
   */
  rtb_Init = (rtb_Product_nr * rtb_Init) - (rtb_Integral_hv *
    rtb_uDLookupTable_l);

  /* Math: '<S303>/Hypot' */
  rtb_uDLookupTable_l = rt_hypotd_snf(rtb_Init, rtb_MatrixConcatenate_b_idx_0);

  /* Switch: '<S303>/Switch' incorporates:
   *  Constant: '<S303>/Constant'
   *  Constant: '<S303>/Constant1'
   *  Constant: '<S304>/Constant'
   *  Product: '<S303>/Divide'
   *  Product: '<S303>/Divide1'
   *  RelationalOperator: '<S304>/Compare'
   *  Switch: '<S303>/Switch1'
   */
  if (rtb_uDLookupTable_l > 1.0E-6) {
    rtb_MatrixConcatenate_b_idx_0 /= rtb_uDLookupTable_l;
    rtb_Init /= rtb_uDLookupTable_l;
  } else {
    rtb_MatrixConcatenate_b_idx_0 = 0.0;
    rtb_Init = 1.0;
  }

  /* End of Switch: '<S303>/Switch' */

  /* Product: '<S368>/Product2' */
  Robot_Control_B.BL_Desired_Wheel_Speed =
    Robot_Control_B.BL_Desired_Wheel_Speed_in * rtb_DeadZone;

  /* Switch: '<S292>/Speed_Switch' incorporates:
   *  Abs: '<S292>/Abs'
   *  Constant: '<S300>/Constant'
   *  RelationalOperator: '<S300>/Compare'
   *  Switch: '<S292>/Angle_Switch'
   *  Trigonometry: '<S302>/Atan1'
   *  Trigonometry: '<S303>/Atan1'
   *  UnaryMinus: '<S292>/Unary Minus'
   */
  if (fabs(rt_atan2d_snf(rtb_MatrixConcatenate_b_idx_0, rtb_Init)) >
      1.5707963267948966) {
    u0 = -Robot_Control_B.BL_Desired_Wheel_Speed;

    /* Sum: '<S302>/Subtract1' incorporates:
     *  Product: '<S302>/Product2'
     *  Product: '<S302>/Product3'
     *  UnaryMinus: '<S292>/Unary Minus'
     */
    rtb_MatrixConcatenate_b_idx_0 = (rtb_Product_nr *
      Robot_Control_ConstB.Sin5_e) + (rtb_Integral_hv *
      Robot_Control_ConstB.Cos5_i);

    /* Sum: '<S302>/Subtract' incorporates:
     *  Product: '<S302>/Product'
     *  Product: '<S302>/Product1'
     */
    rtb_uDLookupTable_l = (rtb_Product_nr * Robot_Control_ConstB.Cos5_i) -
      (rtb_Integral_hv * Robot_Control_ConstB.Sin5_e);

    /* Math: '<S302>/Hypot' */
    rtb_Init = rt_hypotd_snf(rtb_uDLookupTable_l, rtb_MatrixConcatenate_b_idx_0);

    /* Switch: '<S302>/Switch1' incorporates:
     *  Constant: '<S302>/Constant'
     *  Constant: '<S302>/Constant1'
     *  Constant: '<S305>/Constant'
     *  Product: '<S302>/Divide'
     *  Product: '<S302>/Divide1'
     *  RelationalOperator: '<S305>/Compare'
     *  Switch: '<S302>/Switch'
     */
    if (rtb_Init > 1.0E-6) {
      rtb_uDLookupTable_l /= rtb_Init;
      rtb_MatrixConcatenate_b_idx_0 /= rtb_Init;
    } else {
      rtb_uDLookupTable_l = 1.0;
      rtb_MatrixConcatenate_b_idx_0 = 0.0;
    }

    /* End of Switch: '<S302>/Switch1' */
    rtb_Init = rt_atan2d_snf(rtb_MatrixConcatenate_b_idx_0, rtb_uDLookupTable_l);
  } else {
    u0 = Robot_Control_B.BL_Desired_Wheel_Speed;
    rtb_Init = Robot_Control_B.BL_Desired_Module_Angle;
  }

  /* Product: '<S295>/Product2' incorporates:
   *  Constant: '<S295>/Constant'
   *  Switch: '<S292>/Speed_Switch'
   */
  rtb_DeadZone = u0 * 1210.9758620668042;

  /* Signum: '<S290>/Sign' */
  if (rtIsNaN(rtb_DeadZone)) {
    u0 = (rtNaN);
  } else if (rtb_DeadZone < 0.0) {
    u0 = -1.0;
  } else {
    u0 = (rtb_DeadZone > 0.0);
  }

  /* Signum: '<S290>/Sign1' incorporates:
   *  Inport: '<Root>/BackLeft_Drive_Motor_Speed'
   */
  if (rtIsNaN(Robot_Control_U.BackLeft_Drive_Motor_Speed)) {
    rtb_Switch2_et = (rtNaN);
  } else if (Robot_Control_U.BackLeft_Drive_Motor_Speed < 0.0) {
    rtb_Switch2_et = -1.0;
  } else {
    rtb_Switch2_et = (Robot_Control_U.BackLeft_Drive_Motor_Speed > 0.0);
  }

  /* Sum: '<S293>/Add' incorporates:
   *  Inport: '<Root>/BL_Steer_Module_Angle'
   *  Sum: '<S294>/Sum'
   */
  rtb_Sum1_m = rtb_Init - Robot_Control_U.BL_Steer_Module_Angle;

  /* Product: '<S245>/Product' incorporates:
   *  Abs: '<S290>/Abs'
   *  Abs: '<S293>/Abs'
   *  Constant: '<S296>/Constant'
   *  Constant: '<S306>/Constant3'
   *  Constant: '<S306>/Constant4'
   *  Inport: '<Root>/BackLeft_Drive_Motor_Speed'
   *  Logic: '<S290>/OR'
   *  Lookup_n-D: '<S293>/1-D Lookup Table'
   *  Math: '<S306>/Math Function'
   *  RelationalOperator: '<S290>/Equal1'
   *  RelationalOperator: '<S296>/Compare'
   *  Signum: '<S290>/Sign'
   *  Signum: '<S290>/Sign1'
   *  Sum: '<S293>/Add'
   *  Sum: '<S306>/Add1'
   *  Sum: '<S306>/Add2'
   */
  rtb_DeadZone = (((real_T)((u0 == rtb_Switch2_et) || (fabs
    (Robot_Control_U.BackLeft_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_DeadZone) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_Sum1_m + 1.5707963267948966, 3.1415926535897931) -
          1.5707963267948966), rtCP_uDLookupTable_bp01Data_j,
     rtCP_uDLookupTable_tableData_h, 1U);

  /* Sum: '<S291>/Sum' incorporates:
   *  Inport: '<Root>/BackLeft_Drive_Motor_Speed'
   */
  rtb_MatrixConcatenate_b_idx_0 = rtb_DeadZone -
    Robot_Control_U.BackLeft_Drive_Motor_Speed;

  /* Sum: '<S298>/Sum1' incorporates:
   *  Constant: '<S291>/Constant2'
   *  Product: '<S298>/Product'
   *  Sum: '<S298>/Sum'
   *  UnitDelay: '<S298>/Unit Delay1'
   */
  rtb_uDLookupTable_l = ((rtb_MatrixConcatenate_b_idx_0 -
    Robot_Control_DW.UnitDelay1_DSTATE_n4) * Drive_Motor_Control_D_FilterCoeff)
    + Robot_Control_DW.UnitDelay1_DSTATE_n4;

  /* Product: '<S291>/Product' incorporates:
   *  Constant: '<S291>/Constant3'
   */
  rtb_Product_nr = rtb_uDLookupTable_l * Drive_Motor_Control_D;

  /* Sum: '<S297>/Diff' incorporates:
   *  UnitDelay: '<S297>/UD'
   *
   * Block description for '<S297>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S297>/UD':
   *
   *  Store in Global RAM
   */
  u0 = rtb_Product_nr - Robot_Control_DW.UD_DSTATE_o;

  /* Saturate: '<S291>/Saturation' */
  if (u0 > Drive_Motor_Control_D_UL) {
    u0 = Drive_Motor_Control_D_UL;
  } else if (u0 < Drive_Motor_Control_D_LL) {
    u0 = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S291>/Add' incorporates:
   *  Gain: '<S291>/Gain'
   *  Gain: '<S291>/Gain1'
   *  Saturate: '<S291>/Saturation'
   */
  rtb_DeadZone = ((Drive_Motor_Control_FF * rtb_DeadZone) +
                  (Drive_Motor_Control_P * rtb_MatrixConcatenate_b_idx_0)) + u0;

  /* Switch: '<S291>/Switch' incorporates:
   *  Constant: '<S291>/Constant4'
   */
  if (Robot_Control_B.Swerve_Drive_Integral_Enable) {
    /* Sum: '<S291>/Sum2' incorporates:
     *  Gain: '<S291>/Gain2'
     *  UnitDelay: '<S291>/Unit Delay'
     */
    rtb_MatrixConcatenate_b_idx_0 = (Drive_Motor_Control_I *
      rtb_MatrixConcatenate_b_idx_0) + Robot_Control_DW.UnitDelay_DSTATE_f;

    /* Sum: '<S291>/Subtract' incorporates:
     *  Constant: '<S291>/Constant'
     */
    rtb_Integral_hv = 1.0 - rtb_DeadZone;

    /* Switch: '<S299>/Switch2' incorporates:
     *  Constant: '<S291>/Constant'
     *  RelationalOperator: '<S299>/LowerRelop1'
     *  Sum: '<S291>/Subtract'
     */
    if (!(rtb_MatrixConcatenate_b_idx_0 > (1.0 - rtb_DeadZone))) {
      /* Sum: '<S291>/Subtract1' incorporates:
       *  Constant: '<S291>/Constant1'
       */
      rtb_Integral_hv = -1.0 - rtb_DeadZone;

      /* Switch: '<S299>/Switch' incorporates:
       *  Constant: '<S291>/Constant1'
       *  RelationalOperator: '<S299>/UpperRelop'
       *  Sum: '<S291>/Subtract1'
       */
      if (!(rtb_MatrixConcatenate_b_idx_0 < (-1.0 - rtb_DeadZone))) {
        rtb_Integral_hv = rtb_MatrixConcatenate_b_idx_0;
      }

      /* End of Switch: '<S299>/Switch' */
    }

    /* End of Switch: '<S299>/Switch2' */

    /* Saturate: '<S291>/Saturation1' */
    if (rtb_Integral_hv > Drive_Motor_Control_I_UL) {
      rtb_Integral_hv = Drive_Motor_Control_I_UL;
    } else if (rtb_Integral_hv < Drive_Motor_Control_I_LL) {
      rtb_Integral_hv = Drive_Motor_Control_I_LL;
    }

    /* End of Saturate: '<S291>/Saturation1' */
  } else {
    rtb_Integral_hv = 0.0;
  }

  /* End of Switch: '<S291>/Switch' */

  /* Sum: '<S291>/Add1' */
  u0 = rtb_DeadZone + rtb_Integral_hv;

  /* Saturate: '<S291>/Saturation2' */
  if (u0 > 1.0) {
    /* Outport: '<Root>/BackLeft_Drive_DutyCycle' */
    Robot_Control_Y.BackLeft_Drive_DutyCycle = 1.0;
  } else if (u0 < -1.0) {
    /* Outport: '<Root>/BackLeft_Drive_DutyCycle' */
    Robot_Control_Y.BackLeft_Drive_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/BackLeft_Drive_DutyCycle' */
    Robot_Control_Y.BackLeft_Drive_DutyCycle = u0;
  }

  /* End of Saturate: '<S291>/Saturation2' */

  /* Sum: '<S307>/Add1' incorporates:
   *  Constant: '<S307>/Constant3'
   *  Constant: '<S307>/Constant4'
   *  Math: '<S307>/Math Function'
   *  Sum: '<S307>/Add2'
   */
  rtb_DeadZone = rt_modd_snf(rtb_Sum1_m + 3.1415926535897931, 6.2831853071795862)
    - 3.1415926535897931;

  /* Sum: '<S309>/Sum1' incorporates:
   *  Constant: '<S294>/Constant2'
   *  Product: '<S309>/Product'
   *  Sum: '<S309>/Sum'
   *  UnitDelay: '<S309>/Unit Delay1'
   */
  rtb_Sum1_m = ((rtb_DeadZone - Robot_Control_DW.UnitDelay1_DSTATE_nw) *
                Steering_Motor_Control_D_FilterCoeff) +
    Robot_Control_DW.UnitDelay1_DSTATE_nw;

  /* Product: '<S294>/Product' incorporates:
   *  Constant: '<S294>/Constant3'
   */
  rtb_Product_nq = rtb_Sum1_m * Steering_Motor_Control_D;

  /* Sum: '<S308>/Diff' incorporates:
   *  UnitDelay: '<S308>/UD'
   *
   * Block description for '<S308>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S308>/UD':
   *
   *  Store in Global RAM
   */
  u0 = rtb_Product_nq - Robot_Control_DW.UD_DSTATE_k;

  /* Saturate: '<S294>/Saturation' */
  if (u0 > Steering_Motor_Control_D_UL) {
    u0 = Steering_Motor_Control_D_UL;
  } else if (u0 < Steering_Motor_Control_D_LL) {
    u0 = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S294>/Add' incorporates:
   *  Gain: '<S294>/Gain1'
   *  Saturate: '<S294>/Saturation'
   */
  rtb_Init = (Steering_Motor_Control_P * rtb_DeadZone) + u0;

  /* Sum: '<S294>/Subtract' incorporates:
   *  Constant: '<S294>/Constant'
   */
  rtb_MatrixConcatenate_b_idx_0 = 1.0 - rtb_Init;

  /* Sum: '<S294>/Sum2' incorporates:
   *  Gain: '<S294>/Gain2'
   *  UnitDelay: '<S294>/Unit Delay'
   */
  rtb_DeadZone = (Steering_Motor_Control_I * rtb_DeadZone) +
    Robot_Control_DW.UnitDelay_DSTATE_k;

  /* Switch: '<S310>/Switch2' incorporates:
   *  Constant: '<S294>/Constant'
   *  RelationalOperator: '<S310>/LowerRelop1'
   *  Sum: '<S294>/Subtract'
   */
  if (!(rtb_DeadZone > (1.0 - rtb_Init))) {
    /* Sum: '<S294>/Subtract1' incorporates:
     *  Constant: '<S294>/Constant1'
     */
    rtb_MatrixConcatenate_b_idx_0 = -1.0 - rtb_Init;

    /* Switch: '<S310>/Switch' incorporates:
     *  Constant: '<S294>/Constant1'
     *  RelationalOperator: '<S310>/UpperRelop'
     *  Sum: '<S294>/Subtract1'
     */
    if (!(rtb_DeadZone < (-1.0 - rtb_Init))) {
      rtb_MatrixConcatenate_b_idx_0 = rtb_DeadZone;
    }

    /* End of Switch: '<S310>/Switch' */
  }

  /* End of Switch: '<S310>/Switch2' */

  /* Saturate: '<S294>/Saturation1' */
  if (rtb_MatrixConcatenate_b_idx_0 > Steering_Motor_Control_I_UL) {
    rtb_Integral_m = Steering_Motor_Control_I_UL;
  } else if (rtb_MatrixConcatenate_b_idx_0 < Steering_Motor_Control_I_LL) {
    rtb_Integral_m = Steering_Motor_Control_I_LL;
  } else {
    rtb_Integral_m = rtb_MatrixConcatenate_b_idx_0;
  }

  /* End of Saturate: '<S294>/Saturation1' */

  /* Sum: '<S294>/Add1' */
  u0 = rtb_Init + rtb_Integral_m;

  /* Saturate: '<S294>/Saturation2' */
  if (u0 > 1.0) {
    /* Outport: '<Root>/BackLeft_Steer_DutyCycle' */
    Robot_Control_Y.BackLeft_Steer_DutyCycle = 1.0;
  } else if (u0 < -1.0) {
    /* Outport: '<Root>/BackLeft_Steer_DutyCycle' */
    Robot_Control_Y.BackLeft_Steer_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/BackLeft_Steer_DutyCycle' */
    Robot_Control_Y.BackLeft_Steer_DutyCycle = u0;
  }

  /* End of Saturate: '<S294>/Saturation2' */

  /* Sum: '<S328>/Add1' incorporates:
   *  Constant: '<S328>/Constant3'
   *  Constant: '<S328>/Constant4'
   *  Math: '<S328>/Math Function'
   *  Sum: '<S328>/Add2'
   */
  rtb_DeadZone = rt_modd_snf(rtb_Optimized_Module_Angle + 3.1415926535897931,
    6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S330>/Sum1' incorporates:
   *  Constant: '<S315>/Constant2'
   *  Product: '<S330>/Product'
   *  Sum: '<S330>/Sum'
   *  UnitDelay: '<S330>/Unit Delay1'
   */
  rtb_Optimized_Module_Angle = ((rtb_DeadZone -
    Robot_Control_DW.UnitDelay1_DSTATE_iw) *
    Steering_Motor_Control_D_FilterCoeff) +
    Robot_Control_DW.UnitDelay1_DSTATE_iw;

  /* Product: '<S315>/Product' incorporates:
   *  Constant: '<S315>/Constant3'
   */
  rtb_Product_il = rtb_Optimized_Module_Angle * Steering_Motor_Control_D;

  /* Sum: '<S329>/Diff' incorporates:
   *  UnitDelay: '<S329>/UD'
   *
   * Block description for '<S329>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S329>/UD':
   *
   *  Store in Global RAM
   */
  u0 = rtb_Product_il - Robot_Control_DW.UD_DSTATE_l;

  /* Saturate: '<S315>/Saturation' */
  if (u0 > Steering_Motor_Control_D_UL) {
    u0 = Steering_Motor_Control_D_UL;
  } else if (u0 < Steering_Motor_Control_D_LL) {
    u0 = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S315>/Add' incorporates:
   *  Gain: '<S315>/Gain1'
   *  Saturate: '<S315>/Saturation'
   */
  rtb_Init = (Steering_Motor_Control_P * rtb_DeadZone) + u0;

  /* Sum: '<S315>/Subtract' incorporates:
   *  Constant: '<S315>/Constant'
   */
  rtb_MatrixConcatenate_b_idx_0 = 1.0 - rtb_Init;

  /* Sum: '<S315>/Sum2' incorporates:
   *  Gain: '<S315>/Gain2'
   *  UnitDelay: '<S315>/Unit Delay'
   */
  rtb_DeadZone = (Steering_Motor_Control_I * rtb_DeadZone) +
    Robot_Control_DW.UnitDelay_DSTATE_lm;

  /* Switch: '<S331>/Switch2' incorporates:
   *  Constant: '<S315>/Constant'
   *  RelationalOperator: '<S331>/LowerRelop1'
   *  Sum: '<S315>/Subtract'
   */
  if (!(rtb_DeadZone > (1.0 - rtb_Init))) {
    /* Sum: '<S315>/Subtract1' incorporates:
     *  Constant: '<S315>/Constant1'
     */
    rtb_MatrixConcatenate_b_idx_0 = -1.0 - rtb_Init;

    /* Switch: '<S331>/Switch' incorporates:
     *  Constant: '<S315>/Constant1'
     *  RelationalOperator: '<S331>/UpperRelop'
     *  Sum: '<S315>/Subtract1'
     */
    if (!(rtb_DeadZone < (-1.0 - rtb_Init))) {
      rtb_MatrixConcatenate_b_idx_0 = rtb_DeadZone;
    }

    /* End of Switch: '<S331>/Switch' */
  }

  /* End of Switch: '<S331>/Switch2' */

  /* Saturate: '<S315>/Saturation1' */
  if (rtb_MatrixConcatenate_b_idx_0 > Steering_Motor_Control_I_UL) {
    rtb_Integral_p = Steering_Motor_Control_I_UL;
  } else if (rtb_MatrixConcatenate_b_idx_0 < Steering_Motor_Control_I_LL) {
    rtb_Integral_p = Steering_Motor_Control_I_LL;
  } else {
    rtb_Integral_p = rtb_MatrixConcatenate_b_idx_0;
  }

  /* End of Saturate: '<S315>/Saturation1' */

  /* Sum: '<S315>/Add1' */
  u0 = rtb_Init + rtb_Integral_p;

  /* Saturate: '<S315>/Saturation2' */
  if (u0 > 1.0) {
    /* Outport: '<Root>/BackRight_Steer_DutyCycle' */
    Robot_Control_Y.BackRight_Steer_DutyCycle = 1.0;
  } else if (u0 < -1.0) {
    /* Outport: '<Root>/BackRight_Steer_DutyCycle' */
    Robot_Control_Y.BackRight_Steer_DutyCycle = -1.0;
  } else {
    /* Outport: '<Root>/BackRight_Steer_DutyCycle' */
    Robot_Control_Y.BackRight_Steer_DutyCycle = u0;
  }

  /* End of Saturate: '<S315>/Saturation2' */

  /* MinMax: '<S12>/Max' incorporates:
   *  Bias: '<S1>/Add Constant'
   *  Lookup_n-D: '<S12>/Range of Motion Protection Limit'
   *  Lookup_n-D: '<S12>/Range of Motion Protection Limit1'
   *  Merge: '<S19>/Merge13'
   */
  rtb_DeadZone = fmax(fmax(Robot_Control_B.Elevator_Height_Desired_merge,
    look1_binlcpw(Robot_Control_B.Coral_Arm_Angle_Desired_merge,
                  rtCP_RangeofMotionProtectionL_a,
                  rtCP_RangeofMotionProtection_jh, 95U)), look1_binlcpw
                      (Robot_Control_B.Coral_Arm_Angle_Measured,
                       rtCP_RangeofMotionProtection_aw,
                       rtCP_RangeofMotionProtectionL_d, 95U));

  /* Switch: '<S12>/Switch3' incorporates:
   *  Abs: '<S12>/Abs1'
   *  Constant: '<S12>/Constant'
   *  Constant: '<S12>/Constant6'
   *  Constant: '<S87>/Constant'
   *  Logic: '<S12>/AND'
   *  RelationalOperator: '<S12>/Relational Operator'
   *  RelationalOperator: '<S87>/Compare'
   *  UnitDelay: '<S12>/Unit Delay'
   */
  if ((Robot_Control_B.Elevator_Height_Desired_merge < rtb_DeadZone) && (fabs
       (Robot_Control_B.Elevator_Error) <= Elevator_Height_Error_Threshold)) {
    u0 = Elevator_Error_Increase;
  } else {
    u0 = 0.0;
  }

  /* Sum: '<S12>/Add' incorporates:
   *  Sum: '<S12>/Subtract'
   *  Switch: '<S12>/Switch3'
   */
  Robot_Control_B.Elevator_Error = (rtb_DeadZone -
    Robot_Control_B.Elevator_Height_Measured) + u0;

  /* Logic: '<S12>/Logical Operator3' incorporates:
   *  Constant: '<S88>/Constant'
   *  RelationalOperator: '<S88>/Compare'
   */
  rtb_RelationalOperator_ci = (rtb_RelationalOperator_ci ||
    (Robot_Control_B.Elevator_Height_Desired_merge == 0.0));

  /* Gain: '<S90>/Gain1' */
  Robot_Control_B.Elevator_Proportional = Elevator_Gain_Prop *
    Robot_Control_B.Elevator_Error;

  /* Logic: '<S12>/Logical Operator' incorporates:
   *  Logic: '<S12>/Logical Operator2'
   *  Logic: '<S12>/NOT'
   *  Logic: '<S12>/NOT2'
   *  Logic: '<S12>/OR'
   */
  rtb_Is_Absolute_Translation_g = (((!rtb_RelationalOperator_ci) &&
    (Robot_Control_B.Reefscape_Motors_Enable_merge)) && ((!Robot_Control_B.Out) &&
    (!Robot_Control_B.Out_h)));

  /* Switch: '<S90>/Switch' */
  if (rtb_Is_Absolute_Translation_g) {
    /* Switch: '<S90>/Switch1' incorporates:
     *  UnitDelay: '<S99>/Delay Input1'
     *
     * Block description for '<S99>/Delay Input1':
     *
     *  Store in Global RAM
     */
    if (!Robot_Control_DW.DelayInput1_DSTATE_be) {
      /* Switch: '<S90>/Switch' incorporates:
       *  Constant: '<S90>/Constant3'
       */
      Robot_Control_B.Elevator_Integral = Elevator_Int_IC;
    } else {
      /* Sum: '<S90>/Sum2' incorporates:
       *  Gain: '<S90>/Gain2'
       *  UnitDelay: '<S90>/Unit Delay'
       */
      rtb_DeadZone = (Elevator_Gain_Int * Robot_Control_B.Elevator_Error) +
        Robot_Control_B.Elevator_Integral;

      /* Sum: '<S90>/Subtract' incorporates:
       *  Constant: '<S90>/Constant'
       */
      rtb_MatrixConcatenate_b_idx_0 = Elevator_Total_UL -
        Robot_Control_B.Elevator_Proportional;

      /* Switch: '<S100>/Switch2' incorporates:
       *  RelationalOperator: '<S100>/LowerRelop1'
       */
      if (!(rtb_DeadZone > rtb_MatrixConcatenate_b_idx_0)) {
        /* Sum: '<S90>/Subtract1' incorporates:
         *  Constant: '<S90>/Constant1'
         */
        rtb_MatrixConcatenate_b_idx_0 = Elevator_Total_LL -
          Robot_Control_B.Elevator_Proportional;

        /* Switch: '<S100>/Switch' incorporates:
         *  RelationalOperator: '<S100>/UpperRelop'
         */
        if (!(rtb_DeadZone < rtb_MatrixConcatenate_b_idx_0)) {
          rtb_MatrixConcatenate_b_idx_0 = rtb_DeadZone;
        }

        /* End of Switch: '<S100>/Switch' */
      }

      /* End of Switch: '<S100>/Switch2' */

      /* Saturate: '<S90>/Saturation1' */
      if (rtb_MatrixConcatenate_b_idx_0 > Elevator_Int_UL) {
        /* Switch: '<S90>/Switch' */
        Robot_Control_B.Elevator_Integral = Elevator_Int_UL;
      } else if (rtb_MatrixConcatenate_b_idx_0 < Elevator_Int_LL) {
        /* Switch: '<S90>/Switch' */
        Robot_Control_B.Elevator_Integral = Elevator_Int_LL;
      } else {
        /* Switch: '<S90>/Switch' */
        Robot_Control_B.Elevator_Integral = rtb_MatrixConcatenate_b_idx_0;
      }

      /* End of Saturate: '<S90>/Saturation1' */
    }

    /* End of Switch: '<S90>/Switch1' */
  } else {
    /* Switch: '<S90>/Switch' incorporates:
     *  Constant: '<S90>/Constant2'
     */
    Robot_Control_B.Elevator_Integral = 0.0;
  }

  /* End of Switch: '<S90>/Switch' */

  /* Switch: '<S12>/Switch2' incorporates:
   *  Constant: '<S12>/Constant5'
   */
  if (Robot_Control_B.Reefscape_Motors_Enable_merge) {
    /* Switch: '<S12>/Switch4' */
    if (rtb_RelationalOperator_ci) {
      /* Switch: '<S12>/Switch5' incorporates:
       *  Abs: '<S12>/Abs'
       *  Constant: '<S12>/Constant7'
       *  Constant: '<S12>/Constant8'
       *  Constant: '<S86>/Constant'
       *  RelationalOperator: '<S86>/Compare'
       */
      if (fabs(Robot_Control_B.Elevator_Error) <= Elevator_Error_Bottom_Disable)
      {
        rtb_DeadZone = Elevator_Bottom_DC;
      } else {
        rtb_DeadZone = Elevator_Total_LL;
      }

      /* End of Switch: '<S12>/Switch5' */
    } else {
      /* Sum: '<S90>/Add1' */
      rtb_MatrixConcatenate_b_idx_0 = Robot_Control_B.Elevator_Proportional +
        Robot_Control_B.Elevator_Integral;

      /* Saturate: '<S90>/Saturation2' */
      if (rtb_MatrixConcatenate_b_idx_0 > Elevator_Total_UL) {
        rtb_MatrixConcatenate_b_idx_0 = Elevator_Total_UL;
      } else if (rtb_MatrixConcatenate_b_idx_0 < Elevator_Total_LL) {
        rtb_MatrixConcatenate_b_idx_0 = Elevator_Total_LL;
      }

      /* End of Saturate: '<S90>/Saturation2' */

      /* Switch: '<S12>/Switch1' incorporates:
       *  Constant: '<S12>/Constant1'
       *  Constant: '<S12>/Constant2'
       */
      if (Robot_Control_B.Out) {
        rtb_DeadZone = Elevator_Hold_at_Top_DC;
      } else {
        rtb_DeadZone = 1.0;
      }

      /* End of Switch: '<S12>/Switch1' */

      /* Switch: '<S91>/Switch2' incorporates:
       *  RelationalOperator: '<S91>/LowerRelop1'
       */
      if (!(rtb_MatrixConcatenate_b_idx_0 > rtb_DeadZone)) {
        /* Switch: '<S12>/Switch' incorporates:
         *  Constant: '<S12>/Constant3'
         *  Constant: '<S12>/Constant4'
         */
        if (Robot_Control_B.Out_h) {
          rtb_DeadZone = 0.0;
        } else {
          rtb_DeadZone = -1.0;
        }

        /* End of Switch: '<S12>/Switch' */

        /* Switch: '<S91>/Switch' incorporates:
         *  RelationalOperator: '<S91>/UpperRelop'
         */
        if (!(rtb_MatrixConcatenate_b_idx_0 < rtb_DeadZone)) {
          rtb_DeadZone = rtb_MatrixConcatenate_b_idx_0;
        }

        /* End of Switch: '<S91>/Switch' */
      }

      /* End of Switch: '<S91>/Switch2' */
    }

    /* End of Switch: '<S12>/Switch4' */
  } else {
    rtb_DeadZone = 0.0;
  }

  /* End of Switch: '<S12>/Switch2' */

  /* UnitDelay: '<S89>/Unit Delay' */
  rtb_MatrixConcatenate_b_idx_0 = Robot_Control_DW.UnitDelay_DSTATE_mh;

  /* Abs: '<S89>/Abs' incorporates:
   *  Sum: '<S89>/Subtract'
   */
  rtb_Init = fabs(rtb_MatrixConcatenate_b_idx_0 - rtb_DeadZone);

  /* Signum: '<S89>/Sign2' */
  if (rtIsNaN(rtb_MatrixConcatenate_b_idx_0)) {
    u0 = (rtNaN);
  } else if (rtb_MatrixConcatenate_b_idx_0 < 0.0) {
    u0 = -1.0;
  } else {
    u0 = (rtb_MatrixConcatenate_b_idx_0 > 0.0);
  }

  /* Signum: '<S89>/Sign1' */
  if (rtIsNaN(rtb_DeadZone)) {
    rtb_Switch2_et = (rtNaN);
  } else if (rtb_DeadZone < 0.0) {
    rtb_Switch2_et = -1.0;
  } else {
    rtb_Switch2_et = (rtb_DeadZone > 0.0);
  }

  /* Product: '<S89>/Product1' incorporates:
   *  Signum: '<S89>/Sign1'
   *  Signum: '<S89>/Sign2'
   */
  u0 *= rtb_Switch2_et;
  if (rtIsNaN(u0)) {
    i = 0;
  } else {
    i = (int32_T)fmod(u0, 256.0);
  }

  /* Switch: '<S89>/Switch' incorporates:
   *  Constant: '<S89>/Constant'
   *  Constant: '<S92>/Constant'
   *  Constant: '<S93>/Constant'
   *  Logic: '<S89>/or'
   *  Product: '<S89>/Product1'
   *  RelationalOperator: '<S92>/Compare'
   *  RelationalOperator: '<S93>/Compare'
   */
  if ((!(rtb_MatrixConcatenate_b_idx_0 == 0.0)) && (((i < 0) ? ((int32_T)
         ((int8_T)(-((int8_T)((uint8_T)(-((real_T)i))))))) : i) <= 0)) {
    rtb_DeadZone = 0.0;
  }

  /* End of Switch: '<S89>/Switch' */

  /* RelationalOperator: '<S94>/Compare' incorporates:
   *  Constant: '<S94>/Constant'
   */
  rtb_RelationalOperator_ci = (rtb_DeadZone == 0.0);

  /* Switch: '<S89>/Switch5' */
  if (rtb_RelationalOperator_ci) {
    /* SignalConversion generated from: '<S89>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S89>/Constant4'
     *  Constant: '<S89>/Constant6'
     */
    rtb_Reshapey[0] = 1.0;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S89>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S89>/Constant2'
     *  Constant: '<S89>/Constant5'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = 0.01;

    /* S-Function (sfix_look1_dyn): '<S89>/Lookup Table Dynamic' */
    /* Dynamic Look-Up Table Block: '<S89>/Lookup Table Dynamic'
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
    /* SignalConversion generated from: '<S89>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S89>/Constant10'
     *  Constant: '<S89>/Constant8'
     */
    rtb_Reshapey[0] = 1.0;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S89>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S89>/Constant7'
     *  Constant: '<S89>/Constant9'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = 0.01;

    /* S-Function (sfix_look1_dyn): '<S89>/Lookup Table Dynamic1' */
    /* Dynamic Look-Up Table Block: '<S89>/Lookup Table Dynamic1'
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

  /* End of Switch: '<S89>/Switch5' */

  /* RelationalOperator: '<S95>/Compare' incorporates:
   *  Constant: '<S95>/Constant'
   */
  rtb_Is_Absolute_Steering = (rtb_DeadZone > 0.0);

  /* Switch: '<S89>/Switch1' incorporates:
   *  Switch: '<S89>/Switch3'
   */
  if (rtb_RelationalOperator_ci) {
    u0 = Robot_Control_ConstB.UnaryMinus_m;
  } else if (rtb_Is_Absolute_Steering) {
    /* Switch: '<S89>/Switch3' incorporates:
     *  Constant: '<S89>/Constant3'
     */
    u0 = Elevator_DC_Inc_RL;
  } else {
    u0 = Robot_Control_ConstB.UnaryMinus_m;
  }

  /* Product: '<S89>/Product' incorporates:
   *  Switch: '<S89>/Switch1'
   */
  rtb_MatrixConcatenate_b_idx_0 = u0 * rtb_Switch5_a;

  /* Switch: '<S98>/Init' incorporates:
   *  UnitDelay: '<S98>/FixPt Unit Delay1'
   *  UnitDelay: '<S98>/FixPt Unit Delay2'
   */
  if (Robot_Control_DW.FixPtUnitDelay2_DSTATE_o != 0) {
    rtb_Init = rtb_DeadZone;
  } else {
    rtb_Init = Robot_Control_DW.FixPtUnitDelay1_DSTATE_l;
  }

  /* End of Switch: '<S98>/Init' */

  /* Sum: '<S96>/Sum1' */
  rtb_DeadZone -= rtb_Init;

  /* Switch: '<S97>/Switch2' incorporates:
   *  RelationalOperator: '<S97>/LowerRelop1'
   */
  if (!(rtb_DeadZone > rtb_MatrixConcatenate_b_idx_0)) {
    /* Switch: '<S89>/Switch2' incorporates:
     *  Constant: '<S89>/Constant1'
     *  Constant: '<S89>/Constant3'
     *  Switch: '<S89>/Switch4'
     *  UnaryMinus: '<S89>/Unary Minus1'
     */
    if (rtb_RelationalOperator_ci) {
      u0 = -1.0;
    } else if (rtb_Is_Absolute_Steering) {
      /* Switch: '<S89>/Switch4' incorporates:
       *  Constant: '<S89>/Constant1'
       */
      u0 = -1.0;
    } else {
      u0 = -Elevator_DC_Inc_RL;
    }

    /* Product: '<S89>/Product2' incorporates:
     *  Switch: '<S89>/Switch2'
     */
    rtb_MatrixConcatenate_b_idx_0 = u0 * rtb_Switch5_a;

    /* Switch: '<S97>/Switch' incorporates:
     *  RelationalOperator: '<S97>/UpperRelop'
     */
    if (!(rtb_DeadZone < rtb_MatrixConcatenate_b_idx_0)) {
      rtb_MatrixConcatenate_b_idx_0 = rtb_DeadZone;
    }

    /* End of Switch: '<S97>/Switch' */
  }

  /* End of Switch: '<S97>/Switch2' */

  /* Sum: '<S96>/Sum' */
  rtb_Switch5_a = rtb_MatrixConcatenate_b_idx_0 + rtb_Init;

  /* Outport: '<Root>/Elevator_DutyCycle' */
  Robot_Control_Y.Elevator_DutyCycle = rtb_Switch5_a;

  /* Logic: '<S8>/Logical Operator' incorporates:
   *  Constant: '<S67>/Constant'
   *  Constant: '<S68>/Constant'
   *  RelationalOperator: '<S67>/Compare'
   *  RelationalOperator: '<S68>/Compare'
   */
  rtb_RelationalOperator_ci = ((Robot_Control_B.Elevator_Height_Measured <
    Elevator_Height_Coral_Arm_Low_Thresh) &&
    (Robot_Control_B.Coral_Arm_Angle_Measured < Coral_Arm_Angle_Neg_Threshold));

  /* Logic: '<S8>/Logical Operator4' incorporates:
   *  Constant: '<S69>/Constant'
   *  Constant: '<S70>/Constant'
   *  RelationalOperator: '<S69>/Compare'
   *  RelationalOperator: '<S70>/Compare'
   */
  rtb_Compare_jp = ((Robot_Control_B.Coral_Arm_Angle_Desired_merge >
                     Coral_Arm_Angle_Pos_Threshold) &&
                    (Robot_Control_B.Coral_Arm_Angle_Measured >
                     Coral_Arm_Angle_Pos_Threshold));

  /* Lookup_n-D: '<S8>/1-D Lookup Table' incorporates:
   *  Bias: '<S1>/Add Constant'
   */
  rtb_MatrixConcatenate_b_idx_0 = look1_binlcpw
    (Robot_Control_B.Coral_Arm_Angle_Measured, rtCP_uDLookupTable_bp01Data_o,
     rtCP_uDLookupTable_tableData_l, 2U);

  /* Switch: '<S73>/Switch2' incorporates:
   *  Constant: '<S8>/Constant'
   *  RelationalOperator: '<S73>/LowerRelop1'
   */
  if (Robot_Control_B.Coral_Arm_Angle_Desired_merge > 90.0) {
    rtb_DeadZone = 90.0;
  } else {
    /* Lookup_n-D: '<S8>/Range of Motion Protection Limit' incorporates:
     *  Switch: '<S13>/Switch'
     */
    rtb_DeadZone = look1_binlcpw(Robot_Control_B.Elevator_Height_Measured,
      rtCP_RangeofMotionProtectionL_j, rtCP_RangeofMotionProtectionLim, 74U);

    /* Switch: '<S73>/Switch' incorporates:
     *  RelationalOperator: '<S73>/UpperRelop'
     */
    if (!(Robot_Control_B.Coral_Arm_Angle_Desired_merge < rtb_DeadZone)) {
      rtb_DeadZone = Robot_Control_B.Coral_Arm_Angle_Desired_merge;
    }

    /* End of Switch: '<S73>/Switch' */
  }

  /* End of Switch: '<S73>/Switch2' */

  /* Sum: '<S8>/Subtract' */
  Robot_Control_B.Coral_ArmAngle_Error = rtb_DeadZone -
    Robot_Control_B.Coral_Arm_Angle_Measured;

  /* Gain: '<S72>/Gain1' */
  Robot_Control_B.Elevator_Proportional_l = Coral_Arm_Gain_Prop *
    Robot_Control_B.Coral_ArmAngle_Error;

  /* Logic: '<S8>/Logical Operator2' incorporates:
   *  Logic: '<S8>/Logical Operator1'
   *  Logic: '<S8>/Logical Operator3'
   */
  rtb_Is_Absolute_Steering = (((!rtb_Compare_jp) && (!rtb_RelationalOperator_ci))
    && (Robot_Control_B.Reefscape_Motors_Enable_merge));

  /* Lookup_n-D: '<S8>/1-D Lookup Table1' incorporates:
   *  Bias: '<S1>/Add Constant'
   */
  rtb_DeadZone = look1_binlcpw(Robot_Control_B.Coral_Arm_Angle_Measured,
    rtCP_uDLookupTable1_bp01Data, rtCP_uDLookupTable1_tableData, 1U);

  /* Switch: '<S72>/Switch' */
  if (rtb_Is_Absolute_Steering) {
    /* Switch: '<S72>/Switch1' incorporates:
     *  UnitDelay: '<S81>/Delay Input1'
     *
     * Block description for '<S81>/Delay Input1':
     *
     *  Store in Global RAM
     */
    if (!Robot_Control_DW.DelayInput1_DSTATE_op) {
      /* Switch: '<S72>/Switch' incorporates:
       *  Constant: '<S72>/Constant3'
       */
      Robot_Control_B.Elevator_Integral_o = Coral_Arm_Int_IC;
    } else {
      /* Sum: '<S72>/Sum2' incorporates:
       *  Gain: '<S72>/Gain2'
       *  UnitDelay: '<S72>/Unit Delay'
       */
      rtb_Init = (Coral_Arm_Gain_Int * Robot_Control_B.Coral_ArmAngle_Error) +
        Robot_Control_B.Elevator_Integral_o;

      /* Sum: '<S72>/Subtract' */
      rtb_Switch2_et = rtb_MatrixConcatenate_b_idx_0 -
        Robot_Control_B.Elevator_Proportional_l;

      /* Switch: '<S82>/Switch2' incorporates:
       *  RelationalOperator: '<S82>/LowerRelop1'
       */
      if (!(rtb_Init > rtb_Switch2_et)) {
        /* Sum: '<S72>/Subtract1' */
        rtb_Switch2_et = rtb_DeadZone - Robot_Control_B.Elevator_Proportional_l;

        /* Switch: '<S82>/Switch' incorporates:
         *  RelationalOperator: '<S82>/UpperRelop'
         */
        if (!(rtb_Init < rtb_Switch2_et)) {
          rtb_Switch2_et = rtb_Init;
        }

        /* End of Switch: '<S82>/Switch' */
      }

      /* End of Switch: '<S82>/Switch2' */

      /* Saturate: '<S72>/Saturation1' */
      if (rtb_Switch2_et > Coral_Arm_Int_UL) {
        /* Switch: '<S72>/Switch' */
        Robot_Control_B.Elevator_Integral_o = Coral_Arm_Int_UL;
      } else if (rtb_Switch2_et < Coral_Arm_Int_LL) {
        /* Switch: '<S72>/Switch' */
        Robot_Control_B.Elevator_Integral_o = Coral_Arm_Int_LL;
      } else {
        /* Switch: '<S72>/Switch' */
        Robot_Control_B.Elevator_Integral_o = rtb_Switch2_et;
      }

      /* End of Saturate: '<S72>/Saturation1' */
    }

    /* End of Switch: '<S72>/Switch1' */
  } else {
    /* Switch: '<S72>/Switch' incorporates:
     *  Constant: '<S72>/Constant2'
     */
    Robot_Control_B.Elevator_Integral_o = 0.0;
  }

  /* End of Switch: '<S72>/Switch' */

  /* Switch: '<S8>/Switch2' incorporates:
   *  Constant: '<S8>/Constant5'
   */
  if (Robot_Control_B.Reefscape_Motors_Enable_merge) {
    /* Switch: '<S8>/Switch1' incorporates:
     *  Constant: '<S8>/Constant2'
     *  Switch: '<S8>/Switch3'
     */
    if (rtb_RelationalOperator_ci) {
      rtb_DeadZone = Coral_Arm_Neg90_DC;
    } else if (rtb_Compare_jp) {
      /* Switch: '<S8>/Switch3' incorporates:
       *  Constant: '<S8>/Constant1'
       */
      rtb_DeadZone = Coral_Arm_Pos90_DC;
    } else {
      /* Sum: '<S72>/Add1' incorporates:
       *  Switch: '<S8>/Switch3'
       */
      rtb_Init = Robot_Control_B.Elevator_Proportional_l +
        Robot_Control_B.Elevator_Integral_o;

      /* Switch: '<S83>/Switch2' incorporates:
       *  RelationalOperator: '<S83>/LowerRelop1'
       *  RelationalOperator: '<S83>/UpperRelop'
       *  Switch: '<S83>/Switch'
       *  Switch: '<S8>/Switch3'
       */
      if (rtb_Init > rtb_MatrixConcatenate_b_idx_0) {
        rtb_DeadZone = rtb_MatrixConcatenate_b_idx_0;
      } else if (!(rtb_Init < rtb_DeadZone)) {
        rtb_DeadZone = rtb_Init;
      }

      /* End of Switch: '<S83>/Switch2' */
    }

    /* End of Switch: '<S8>/Switch1' */
  } else {
    rtb_DeadZone = 0.0;
  }

  /* End of Switch: '<S8>/Switch2' */

  /* UnitDelay: '<S71>/Unit Delay' */
  rtb_MatrixConcatenate_b_idx_0 = Robot_Control_DW.UnitDelay_DSTATE_oz;

  /* Abs: '<S71>/Abs' incorporates:
   *  Sum: '<S71>/Subtract'
   */
  rtb_Init = fabs(rtb_MatrixConcatenate_b_idx_0 - rtb_DeadZone);

  /* Signum: '<S71>/Sign2' */
  if (rtIsNaN(rtb_MatrixConcatenate_b_idx_0)) {
    u0 = (rtNaN);
  } else if (rtb_MatrixConcatenate_b_idx_0 < 0.0) {
    u0 = -1.0;
  } else {
    u0 = (rtb_MatrixConcatenate_b_idx_0 > 0.0);
  }

  /* Signum: '<S71>/Sign1' */
  if (rtIsNaN(rtb_DeadZone)) {
    rtb_Switch2_et = (rtNaN);
  } else if (rtb_DeadZone < 0.0) {
    rtb_Switch2_et = -1.0;
  } else {
    rtb_Switch2_et = (rtb_DeadZone > 0.0);
  }

  /* Product: '<S71>/Product1' incorporates:
   *  Signum: '<S71>/Sign1'
   *  Signum: '<S71>/Sign2'
   */
  u0 *= rtb_Switch2_et;
  if (rtIsNaN(u0)) {
    i = 0;
  } else {
    i = (int32_T)fmod(u0, 256.0);
  }

  /* Switch: '<S71>/Switch' incorporates:
   *  Constant: '<S71>/Constant'
   *  Constant: '<S74>/Constant'
   *  Constant: '<S75>/Constant'
   *  Logic: '<S71>/or'
   *  Product: '<S71>/Product1'
   *  RelationalOperator: '<S74>/Compare'
   *  RelationalOperator: '<S75>/Compare'
   */
  if ((!(rtb_MatrixConcatenate_b_idx_0 == 0.0)) && (((i < 0) ? ((int32_T)
         ((int8_T)(-((int8_T)((uint8_T)(-((real_T)i))))))) : i) <= 0)) {
    rtb_DeadZone = 0.0;
  }

  /* End of Switch: '<S71>/Switch' */

  /* RelationalOperator: '<S76>/Compare' incorporates:
   *  Constant: '<S76>/Constant'
   */
  rtb_RelationalOperator_ci = (rtb_DeadZone == 0.0);

  /* Switch: '<S71>/Switch5' */
  if (rtb_RelationalOperator_ci) {
    /* SignalConversion generated from: '<S71>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S71>/Constant4'
     *  Constant: '<S71>/Constant6'
     */
    rtb_Reshapey[0] = 1.0;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S71>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S71>/Constant2'
     *  Constant: '<S71>/Constant5'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = 0.01;

    /* S-Function (sfix_look1_dyn): '<S71>/Lookup Table Dynamic' */
    /* Dynamic Look-Up Table Block: '<S71>/Lookup Table Dynamic'
     * Input0  Data Type:  Floating Point real_T
     * Input1  Data Type:  Floating Point real_T
     * Input2  Data Type:  Floating Point real_T
     * Output0 Data Type:  Floating Point real_T
     * Lookup Method: Linear_Endpoint
     *
     */
    LookUp_real_T_real_T( &(rtb_LookupTableDynamic_n), &rtb_Reshapey[0],
                         rtb_Init, &rtb_Minus_n[0], 1U);
    rtb_Switch2_et = rtb_LookupTableDynamic_n;
  } else {
    /* SignalConversion generated from: '<S71>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S71>/Constant10'
     *  Constant: '<S71>/Constant8'
     */
    rtb_Reshapey[0] = 1.0;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S71>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S71>/Constant7'
     *  Constant: '<S71>/Constant9'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = 0.01;

    /* S-Function (sfix_look1_dyn): '<S71>/Lookup Table Dynamic1' */
    /* Dynamic Look-Up Table Block: '<S71>/Lookup Table Dynamic1'
     * Input0  Data Type:  Floating Point real_T
     * Input1  Data Type:  Floating Point real_T
     * Input2  Data Type:  Floating Point real_T
     * Output0 Data Type:  Floating Point real_T
     * Lookup Method: Linear_Endpoint
     *
     */
    LookUp_real_T_real_T( &(rtb_LookupTableDynamic1_a), &rtb_Reshapey[0],
                         rtb_Init, &rtb_Minus_n[0], 1U);
    rtb_Switch2_et = rtb_LookupTableDynamic1_a;
  }

  /* End of Switch: '<S71>/Switch5' */

  /* RelationalOperator: '<S77>/Compare' incorporates:
   *  Constant: '<S77>/Constant'
   */
  rtb_Compare_jp = (rtb_DeadZone > 0.0);

  /* Switch: '<S71>/Switch1' incorporates:
   *  Switch: '<S71>/Switch3'
   */
  if (rtb_RelationalOperator_ci) {
    u0 = Robot_Control_ConstB.UnaryMinus;
  } else if (rtb_Compare_jp) {
    /* Switch: '<S71>/Switch3' incorporates:
     *  Constant: '<S71>/Constant3'
     */
    u0 = Coral_Arm_DC_Inc_RL;
  } else {
    u0 = Robot_Control_ConstB.UnaryMinus;
  }

  /* Product: '<S71>/Product' incorporates:
   *  Switch: '<S71>/Switch1'
   */
  rtb_MatrixConcatenate_b_idx_0 = u0 * rtb_Switch2_et;

  /* Switch: '<S80>/Init' incorporates:
   *  UnitDelay: '<S80>/FixPt Unit Delay1'
   *  UnitDelay: '<S80>/FixPt Unit Delay2'
   */
  if (Robot_Control_DW.FixPtUnitDelay2_DSTATE_j != 0) {
    rtb_Init = rtb_DeadZone;
  } else {
    rtb_Init = Robot_Control_DW.FixPtUnitDelay1_DSTATE_pc;
  }

  /* End of Switch: '<S80>/Init' */

  /* Sum: '<S78>/Sum1' */
  rtb_DeadZone -= rtb_Init;

  /* Switch: '<S79>/Switch2' incorporates:
   *  RelationalOperator: '<S79>/LowerRelop1'
   */
  if (!(rtb_DeadZone > rtb_MatrixConcatenate_b_idx_0)) {
    /* Switch: '<S71>/Switch2' incorporates:
     *  Constant: '<S71>/Constant1'
     *  Constant: '<S71>/Constant3'
     *  Switch: '<S71>/Switch4'
     *  UnaryMinus: '<S71>/Unary Minus1'
     */
    if (rtb_RelationalOperator_ci) {
      u0 = -1.0;
    } else if (rtb_Compare_jp) {
      /* Switch: '<S71>/Switch4' incorporates:
       *  Constant: '<S71>/Constant1'
       */
      u0 = -1.0;
    } else {
      u0 = -Coral_Arm_DC_Inc_RL;
    }

    /* Product: '<S71>/Product2' incorporates:
     *  Switch: '<S71>/Switch2'
     */
    rtb_MatrixConcatenate_b_idx_0 = u0 * rtb_Switch2_et;

    /* Switch: '<S79>/Switch' incorporates:
     *  RelationalOperator: '<S79>/UpperRelop'
     */
    if (!(rtb_DeadZone < rtb_MatrixConcatenate_b_idx_0)) {
      rtb_MatrixConcatenate_b_idx_0 = rtb_DeadZone;
    }

    /* End of Switch: '<S79>/Switch' */
  }

  /* End of Switch: '<S79>/Switch2' */

  /* Sum: '<S78>/Sum' */
  rtb_DeadZone = rtb_MatrixConcatenate_b_idx_0 + rtb_Init;

  /* Outport: '<Root>/Coral_Arm_DutyCycle' */
  Robot_Control_Y.Coral_Arm_DutyCycle = rtb_DeadZone;

  /* RelationalOperator: '<S14>/Relational Operator' incorporates:
   *  Constant: '<S14>/Constant5'
   */
  rtb_RelationalOperator_ci = (Robot_Control_B.Elevator_Height_Desired_merge ==
    Elevator_Height_End_Game);

  /* RelationalOperator: '<S123>/Compare' incorporates:
   *  Constant: '<S123>/Constant'
   *  Inport: '<Root>/Joystick_Left_B5'
   */
  Robot_Control_B.Winch_Cmd = (Robot_Control_U.Joystick_Left_B5 != 0.0);

  /* DataTypeConversion: '<S20>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/GameState'
   */
  u0 = floor(Robot_Control_U.GameState);
  if ((rtIsNaN(u0)) || (rtIsInf(u0))) {
    u0 = 0.0;
  } else {
    u0 = fmod(u0, 256.0);
  }

  MultiportSwitch1 = (uint8_T)((u0 < 0.0) ? ((int32_T)((uint8_T)(-((int8_T)
    ((uint8_T)(-u0)))))) : ((int32_T)((uint8_T)u0)));

  /* End of DataTypeConversion: '<S20>/Data Type Conversion' */

  /* RelationalOperator: '<S107>/Compare' incorporates:
   *  Constant: '<S107>/Constant'
   */
  rtb_AND1 = (MultiportSwitch1 == 0);

  /* Logic: '<S14>/Logical Operator3' incorporates:
   *  Logic: '<S14>/Logical Operator2'
   */
  rtb_AND4 = ((Robot_Control_B.Reefscape_Motors_Enable_merge) &&
              rtb_RelationalOperator_ci);

  /* Switch: '<S14>/Switch4' incorporates:
   *  Constant: '<S14>/Constant8'
   *  Logic: '<S14>/Logical Operator3'
   *  Switch: '<S14>/Switch6'
   *  UnitDelay: '<S14>/Unit Delay'
   */
  if (rtb_AND4 && (Robot_Control_B.Winch_Cmd)) {
    rtb_Compare_jp = true;
  } else {
    rtb_Compare_jp = ((!rtb_AND1) && (Robot_Control_DW.UnitDelay_DSTATE_gln));
  }

  /* End of Switch: '<S14>/Switch4' */

  /* Switch: '<S14>/Switch' */
  if (rtb_Compare_jp) {
    /* Switch: '<S14>/Switch1' incorporates:
     *  Constant: '<S104>/Constant'
     *  Inport: '<Root>/Winch_Revs'
     *  RelationalOperator: '<S104>/Compare'
     */
    if (Robot_Control_U.Winch_Revs < Winch_Rev_Target) {
      /* Outport: '<Root>/Winch_DutyCycle' incorporates:
       *  Constant: '<S14>/Constant1'
       */
      Robot_Control_Y.Winch_DutyCycle = Winch_Spool_DC;
    } else {
      /* Outport: '<Root>/Winch_DutyCycle' incorporates:
       *  Constant: '<S14>/Constant2'
       */
      Robot_Control_Y.Winch_DutyCycle = Winch_Hold_DC;
    }

    /* End of Switch: '<S14>/Switch1' */
  } else {
    /* Outport: '<Root>/Winch_DutyCycle' incorporates:
     *  Constant: '<S14>/Constant'
     */
    Robot_Control_Y.Winch_DutyCycle = 0.0;
  }

  /* End of Switch: '<S14>/Switch' */

  /* RelationalOperator: '<S122>/Compare' incorporates:
   *  Constant: '<S122>/Constant'
   *  Inport: '<Root>/Joystick_Left_B8'
   */
  Robot_Control_B.Actuator_Cmd = (Robot_Control_U.Joystick_Left_B8 != 0.0);

  /* Switch: '<S14>/Switch5' incorporates:
   *  Logic: '<S14>/Logical Operator2'
   *  Switch: '<S14>/Switch7'
   *  UnitDelay: '<S14>/Unit Delay1'
   */
  if ((!rtb_AND4) || (!Robot_Control_B.Actuator_Cmd)) {
    rtb_RelationalOperator_ci = ((!rtb_AND1) &&
      (Robot_Control_DW.UnitDelay1_DSTATE_kb));
  }

  /* End of Switch: '<S14>/Switch5' */

  /* Switch: '<S14>/Switch8' incorporates:
   *  Abs: '<S14>/Abs'
   *  Constant: '<S105>/Constant'
   *  Constant: '<S106>/Constant'
   *  Constant: '<S14>/Constant11'
   *  Inport: '<Root>/Actuator_Revs'
   *  RelationalOperator: '<S105>/Compare'
   *  RelationalOperator: '<S106>/Compare'
   *  UnitDelay: '<S14>/Unit Delay2'
   */
  if (fabs(Robot_Control_U.Actuator_Revs) <= Actuator_Rev_Startup_Range) {
    rtb_AND1 = true;
  } else {
    rtb_AND1 = ((!(Robot_Control_U.Actuator_Revs >= Actuator_Rev_Target)) &&
                (Robot_Control_DW.UnitDelay2_DSTATE_k));
  }

  /* End of Switch: '<S14>/Switch8' */

  /* Switch: '<S14>/Switch2' incorporates:
   *  Logic: '<S14>/Logical Operator4'
   */
  if (rtb_Compare_jp && rtb_RelationalOperator_ci) {
    /* Switch: '<S14>/Switch3' */
    if (rtb_AND1) {
      /* Outport: '<Root>/Actuator_DutyCycle' incorporates:
       *  Constant: '<S14>/Constant6'
       */
      Robot_Control_Y.Actuator_DutyCycle = Actuator_DC;
    } else {
      /* Outport: '<Root>/Actuator_DutyCycle' incorporates:
       *  Constant: '<S14>/Constant7'
       */
      Robot_Control_Y.Actuator_DutyCycle = 0.0;
    }

    /* End of Switch: '<S14>/Switch3' */
  } else {
    /* Outport: '<Root>/Actuator_DutyCycle' incorporates:
     *  Constant: '<S14>/Constant4'
     */
    Robot_Control_Y.Actuator_DutyCycle = 0.0;
  }

  /* End of Switch: '<S14>/Switch2' */

  /* Chart: '<S20>/Chart' */
  if (Robot_Control_DW.is_active_c9_Robot_Control == 0U) {
    Robot_Control_DW.is_active_c9_Robot_Control = 1U;
    Robot_Control_B.Active_GameState = 0U;
    Robot_Control_DW.is_c9_Robot_Control = Robot_Control_IN_Disabled;
  } else if (Robot_Control_DW.is_c9_Robot_Control == Robot_Control_IN_Disabled)
  {
    if (MultiportSwitch1 != 0) {
      Robot_Control_DW.is_c9_Robot_Control = Robot_Control_IN_Not_Disabled;
      Robot_Control_B.Active_GameState = MultiportSwitch1;
    }

    /* case IN_Not_Disabled: */
  } else if (MultiportSwitch1 == 0) {
    Robot_Control_DW.is_c9_Robot_Control = Robot_Control_IN_Disabled;
  } else {
    Robot_Control_B.Active_GameState = MultiportSwitch1;
  }

  /* End of Chart: '<S20>/Chart' */

  /* Switch: '<S3>/Switch1' incorporates:
   *  Constant: '<S3>/Constant2'
   */
  if (TEST_CANdle_Flag != 0.0) {
    /* Outport: '<Root>/CANdle_LED_ID' incorporates:
     *  Constant: '<S3>/Constant3'
     */
    Robot_Control_Y.CANdle_LED_ID = TEST_CANdle_LED_ID;
  } else {
    /* Outport: '<Root>/CANdle_LED_ID' incorporates:
     *  Switch: '<S3>/Switch'
     */
    Robot_Control_Y.CANdle_LED_ID = Compare_f;
  }

  /* End of Switch: '<S3>/Switch1' */

  /* Outport: '<Root>/Enable_Wheels' */
  Robot_Control_Y.Enable_Wheels = Robot_Reached_Destination;

  /* Outport: '<Root>/Reset_Wheel_Offsets' */
  Robot_Control_Y.Reset_Wheel_Offsets = rtb_Reset_Wheel_Offsets;

  /* Outport: '<Root>/Disable_Wheels' */
  Robot_Control_Y.Disable_Wheels = rtb_Disable_Wheels;

  /* Outport: '<Root>/Swerve_Motors_Disabled' */
  Robot_Control_Y.Swerve_Motors_Disabled = Compare;

  /* Outport: '<Root>/Coral_Wheel_DutyCycle' */
  Robot_Control_Y.Coral_Wheel_DutyCycle = rtb_Coral_Wheel_DutyCycle_merge;

  /* Outport: '<Root>/Algae_Wheel_Outside_DutyCycle' */
  Robot_Control_Y.Algae_Wheel_Outside_DutyCycle =
    rtb_Algae_Wheel_Outside_DutyCyc;

  /* Outport: '<Root>/Algae_Wheel_Inside_DutyCycle' */
  Robot_Control_Y.Algae_Wheel_Inside_DutyCycle = rtb_Algae_Wheel_Inside_DutyCycl;

  /* Outport: '<Root>/Desired_Pipeline' */
  Robot_Control_Y.Desired_Pipeline = rtb_Desired_Pipeline;

  /* SignalConversion: '<S15>/Signal Copy4' incorporates:
   *  Inport: '<Root>/Joystick_Right_X'
   */
  Robot_Control_B.Steer_Joystick_X = Robot_Control_U.Joystick_Right_X;

  /* Update for UnitDelay: '<S124>/Delay Input1' incorporates:
   *  Inport: '<Root>/Joystick_Left_B11'
   *
   * Block description for '<S124>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Robot_Control_DW.DelayInput1_DSTATE = Robot_Control_U.Joystick_Left_B11;

  /* Update for UnitDelay: '<S125>/Delay Input1' incorporates:
   *  Inport: '<Root>/Joystick_Left_B12'
   *
   * Block description for '<S125>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Robot_Control_DW.DelayInput1_DSTATE_e = Robot_Control_U.Joystick_Left_B12;

  /* Update for UnitDelay: '<S126>/Delay Input1' incorporates:
   *  Inport: '<Root>/Joystick_Left_B13'
   *
   * Block description for '<S126>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Robot_Control_DW.DelayInput1_DSTATE_n = Robot_Control_U.Joystick_Left_B13;

  /* Update for UnitDelay: '<S101>/Delay Input1'
   *
   * Block description for '<S101>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Robot_Control_DW.DelayInput1_DSTATE_bd = Robot_Control_B.Out_h;

  /* Update for UnitDelay: '<S102>/Delay Input1'
   *
   * Block description for '<S102>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Robot_Control_DW.DelayInput1_DSTATE_o1 = Robot_Control_B.Out;

  /* Update for UnitDelay: '<S1>/Unit Delay' */
  Robot_Control_DW.UnitDelay_DSTATE_mph =
    Robot_Control_B.Elevator_LowerPickup_Reset_merg;

  /* Update for UnitDelay: '<S103>/Delay Input1'
   *
   * Block description for '<S103>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Robot_Control_DW.DelayInput1_DSTATE_po = rtb_UnitDelay_l;

  /* Update for UnitDelay: '<S16>/Unit Delay' */
  Robot_Control_DW.UnitDelay_DSTATE_ll =
    Robot_Control_B.Robot_Reached_Destination_l;

  /* Update for S-Function (sfix_udelay): '<S17>/Tapped Delay' incorporates:
   *  Inport: '<Root>/Odom_Delta_X'
   */
  Robot_Control_DW.TappedDelay_X[0] = Robot_Control_DW.TappedDelay_X[1];
  Robot_Control_DW.TappedDelay_X[1] = Robot_Control_U.Odom_Delta_X;

  /* Update for S-Function (sfix_udelay): '<S17>/Tapped Delay1' incorporates:
   *  Inport: '<Root>/Odom_Delta_Y'
   */
  Robot_Control_DW.TappedDelay1_X[0] = Robot_Control_DW.TappedDelay1_X[1];
  Robot_Control_DW.TappedDelay1_X[1] = Robot_Control_U.Odom_Delta_Y;

  /* Update for Delay: '<S127>/MemoryX' */
  Robot_Control_DW.icLoad = false;

  /* Product: '<S147>/A[k]*xhat[k|k-1]' incorporates:
   *  Constant: '<S127>/A'
   *  Delay: '<S127>/MemoryX'
   */
  rtb_Coral_Wheel_DutyCycle_merge = (0.0 * Robot_Control_DW.MemoryX_DSTATE[1]) +
    Robot_Control_DW.MemoryX_DSTATE[0];
  rtb_Algae_Wheel_Outside_DutyCyc = (0.0 * Robot_Control_DW.MemoryX_DSTATE[0]) +
    Robot_Control_DW.MemoryX_DSTATE[1];

  /* Update for Delay: '<S127>/MemoryX' incorporates:
   *  Constant: '<S127>/B'
   *  Inport: '<Root>/Odom_Delta_X'
   *  Inport: '<Root>/Odom_Delta_Y'
   *  Product: '<S147>/A[k]*xhat[k|k-1]'
   *  Product: '<S147>/B[k]*u[k]'
   *  Sum: '<S147>/Add'
   */
  Robot_Control_DW.MemoryX_DSTATE[0] = (((0.0 * Robot_Control_U.Odom_Delta_Y) +
    Robot_Control_U.Odom_Delta_X) + rtb_Coral_Wheel_DutyCycle_merge) +
    Robot_Control_B.Product3[0];
  Robot_Control_DW.MemoryX_DSTATE[1] = (((0.0 * Robot_Control_U.Odom_Delta_X) +
    Robot_Control_U.Odom_Delta_Y) + rtb_Algae_Wheel_Outside_DutyCyc) +
    Robot_Control_B.Product3[1];

  /* Update for UnitDelay: '<S343>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S343>/FixPt Constant'
   */
  Robot_Control_DW.FixPtUnitDelay2_DSTATE = 0U;

  /* Update for UnitDelay: '<S365>/Unit Delay1' */
  Robot_Control_DW.UnitDelay1_DSTATE_i = rtb_Merge1;

  /* Update for UnitDelay: '<S364>/UD'
   *
   * Block description for '<S364>/UD':
   *
   *  Store in Global RAM
   */
  Robot_Control_DW.UD_DSTATE = rtb_Switch_jz;

  /* Update for UnitDelay: '<S362>/Unit Delay' */
  Robot_Control_DW.UnitDelay_DSTATE_m = rtb_Abs1;

  /* Update for UnitDelay: '<S345>/Unit Delay' */
  Robot_Control_DW.UnitDelay_DSTATE_d = rtb_Switch2_kn;

  /* Update for UnitDelay: '<S360>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S360>/FixPt Constant'
   */
  Robot_Control_DW.FixPtUnitDelay2_DSTATE_p = 0U;

  /* Update for UnitDelay: '<S360>/FixPt Unit Delay1' */
  Robot_Control_DW.FixPtUnitDelay1_DSTATE_e = rtb_Switch2_kn;

  /* Update for UnitDelay: '<S344>/Unit Delay' */
  Robot_Control_DW.UnitDelay_DSTATE_g = rtb_Subtract_ia;

  /* Update for UnitDelay: '<S353>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S353>/FixPt Constant'
   */
  Robot_Control_DW.FixPtUnitDelay2_DSTATE_c = 0U;

  /* Update for UnitDelay: '<S353>/FixPt Unit Delay1' */
  Robot_Control_DW.FixPtUnitDelay1_DSTATE_p = rtb_Subtract_ia;

  /* Update for UnitDelay: '<S319>/Unit Delay1' */
  Robot_Control_DW.UnitDelay1_DSTATE_j = rtb_Product2_a;

  /* Update for UnitDelay: '<S318>/UD'
   *
   * Block description for '<S318>/UD':
   *
   *  Store in Global RAM
   */
  Robot_Control_DW.UD_DSTATE_j = rtb_Subtract_b2;

  /* Update for UnitDelay: '<S312>/Unit Delay' */
  Robot_Control_DW.UnitDelay_DSTATE_l = rtb_Abs2_p;

  /* Update for UnitDelay: '<S256>/Unit Delay1' */
  Robot_Control_DW.UnitDelay1_DSTATE_f = rtb_Modulation_Drv;

  /* Update for UnitDelay: '<S255>/UD'
   *
   * Block description for '<S255>/UD':
   *
   *  Store in Global RAM
   */
  Robot_Control_DW.UD_DSTATE_h = rtb_Add_h5;

  /* Update for UnitDelay: '<S249>/Unit Delay' */
  Robot_Control_DW.UnitDelay_DSTATE_j = rtb_Hypot_g5;

  /* Update for UnitDelay: '<S267>/Unit Delay1' */
  Robot_Control_DW.UnitDelay1_DSTATE_b = rtb_MatrixConcatenate_idx_0;

  /* Update for UnitDelay: '<S266>/UD'
   *
   * Block description for '<S266>/UD':
   *
   *  Store in Global RAM
   */
  Robot_Control_DW.UD_DSTATE_b = rtb_Switch2_n;

  /* Update for UnitDelay: '<S252>/Unit Delay' */
  Robot_Control_DW.UnitDelay_DSTATE_e = rtb_Sum2_e;

  /* Update for UnitDelay: '<S277>/Unit Delay1' */
  Robot_Control_DW.UnitDelay1_DSTATE_e = rtb_Add_fn;

  /* Update for UnitDelay: '<S276>/UD'
   *
   * Block description for '<S276>/UD':
   *
   *  Store in Global RAM
   */
  Robot_Control_DW.UD_DSTATE_m = rtb_Subtract1_la;

  /* Update for UnitDelay: '<S270>/Unit Delay' */
  Robot_Control_DW.UnitDelay_DSTATE_h = rtb_Hypot_b;

  /* Update for UnitDelay: '<S288>/Unit Delay1' */
  Robot_Control_DW.UnitDelay1_DSTATE_n = rtb_Switch2_c;

  /* Update for UnitDelay: '<S287>/UD'
   *
   * Block description for '<S287>/UD':
   *
   *  Store in Global RAM
   */
  Robot_Control_DW.UD_DSTATE_i = rtb_Product_hi;

  /* Update for UnitDelay: '<S273>/Unit Delay' */
  Robot_Control_DW.UnitDelay_DSTATE_dt = rtb_Subtract1_a;

  /* Update for UnitDelay: '<S298>/Unit Delay1' */
  Robot_Control_DW.UnitDelay1_DSTATE_n4 = rtb_uDLookupTable_l;

  /* Update for UnitDelay: '<S297>/UD'
   *
   * Block description for '<S297>/UD':
   *
   *  Store in Global RAM
   */
  Robot_Control_DW.UD_DSTATE_o = rtb_Product_nr;

  /* Update for UnitDelay: '<S291>/Unit Delay' */
  Robot_Control_DW.UnitDelay_DSTATE_f = rtb_Integral_hv;

  /* Update for UnitDelay: '<S309>/Unit Delay1' */
  Robot_Control_DW.UnitDelay1_DSTATE_nw = rtb_Sum1_m;

  /* Update for UnitDelay: '<S308>/UD'
   *
   * Block description for '<S308>/UD':
   *
   *  Store in Global RAM
   */
  Robot_Control_DW.UD_DSTATE_k = rtb_Product_nq;

  /* Update for UnitDelay: '<S294>/Unit Delay' */
  Robot_Control_DW.UnitDelay_DSTATE_k = rtb_Integral_m;

  /* Update for UnitDelay: '<S330>/Unit Delay1' */
  Robot_Control_DW.UnitDelay1_DSTATE_iw = rtb_Optimized_Module_Angle;

  /* Update for UnitDelay: '<S329>/UD'
   *
   * Block description for '<S329>/UD':
   *
   *  Store in Global RAM
   */
  Robot_Control_DW.UD_DSTATE_l = rtb_Product_il;

  /* Update for UnitDelay: '<S315>/Unit Delay' */
  Robot_Control_DW.UnitDelay_DSTATE_lm = rtb_Integral_p;

  /* Update for UnitDelay: '<S99>/Delay Input1'
   *
   * Block description for '<S99>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Robot_Control_DW.DelayInput1_DSTATE_be = rtb_Is_Absolute_Translation_g;

  /* Update for UnitDelay: '<S89>/Unit Delay' */
  Robot_Control_DW.UnitDelay_DSTATE_mh = rtb_Switch5_a;

  /* Update for UnitDelay: '<S98>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S98>/FixPt Constant'
   */
  Robot_Control_DW.FixPtUnitDelay2_DSTATE_o = 0U;

  /* Update for UnitDelay: '<S98>/FixPt Unit Delay1' */
  Robot_Control_DW.FixPtUnitDelay1_DSTATE_l = rtb_Switch5_a;

  /* Update for UnitDelay: '<S81>/Delay Input1'
   *
   * Block description for '<S81>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Robot_Control_DW.DelayInput1_DSTATE_op = rtb_Is_Absolute_Steering;

  /* Update for UnitDelay: '<S71>/Unit Delay' */
  Robot_Control_DW.UnitDelay_DSTATE_oz = rtb_DeadZone;

  /* Update for UnitDelay: '<S80>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S80>/FixPt Constant'
   */
  Robot_Control_DW.FixPtUnitDelay2_DSTATE_j = 0U;

  /* Update for UnitDelay: '<S80>/FixPt Unit Delay1' */
  Robot_Control_DW.FixPtUnitDelay1_DSTATE_pc = rtb_DeadZone;

  /* Update for UnitDelay: '<S14>/Unit Delay' */
  Robot_Control_DW.UnitDelay_DSTATE_gln = rtb_Compare_jp;

  /* Update for UnitDelay: '<S14>/Unit Delay1' */
  Robot_Control_DW.UnitDelay1_DSTATE_kb = rtb_RelationalOperator_ci;

  /* Update for UnitDelay: '<S14>/Unit Delay2' */
  Robot_Control_DW.UnitDelay2_DSTATE_k = rtb_AND1;
}

/* Model initialize function */
void Robot_Control_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  {
    real_T Algae_Wheel_Inside_DC_c;
    real_T Algae_Wheel_Outside_DC_p;
    uint8_T Desired_Pipeline_e;
    boolean_T Coral_Score;

    /* Start for SwitchCase: '<S1>/Switch Case' */
    Robot_Control_DW.SwitchCase_ActiveSubsystem = -1;

    /* Start for If: '<S21>/If' */
    Robot_Control_DW.If_ActiveSubsystem = -1;

    /* InitializeConditions for Delay: '<S127>/MemoryX' */
    Robot_Control_DW.icLoad = true;

    /* InitializeConditions for UnitDelay: '<S343>/FixPt Unit Delay2' */
    Robot_Control_DW.FixPtUnitDelay2_DSTATE = 1U;

    /* InitializeConditions for UnitDelay: '<S360>/FixPt Unit Delay2' */
    Robot_Control_DW.FixPtUnitDelay2_DSTATE_p = 1U;

    /* InitializeConditions for UnitDelay: '<S353>/FixPt Unit Delay2' */
    Robot_Control_DW.FixPtUnitDelay2_DSTATE_c = 1U;

    /* InitializeConditions for UnitDelay: '<S98>/FixPt Unit Delay2' */
    Robot_Control_DW.FixPtUnitDelay2_DSTATE_o = 1U;

    /* InitializeConditions for UnitDelay: '<S80>/FixPt Unit Delay2' */
    Robot_Control_DW.FixPtUnitDelay2_DSTATE_j = 1U;

    /* SystemInitialize for Chart: '<S9>/Debounce' */
    Robot_Control_Debounce_Init(&Robot_Control_B.Out_h);

    /* SystemInitialize for Chart: '<S10>/Debounce' */
    Robot_Control_Debounce_Init(&Robot_Control_B.Out);

    /* SystemInitialize for IfAction SubSystem: '<S1>/Autonomous' */
    /* SystemInitialize for Chart: '<S28>/Reefscape_Chart' */
    Robot_Cont_Reefscape_Chart_Init(&Robot_Control_B.State_ID_Auto,
      &Robot_Control_B.Elevator_Height_Desired_h,
      &Robot_Control_B.Coral_Arm_Angle_Desired_f,
      &Robot_Control_B.Coral_Wheel_DC_a, &Algae_Wheel_Outside_DC_p,
      &Algae_Wheel_Inside_DC_c, &Robot_Control_B.Elevator_LowerPickup_Reset_g,
      &Robot_Control_B.Coral_Pickup_Lower_Wait_State_m,
      &Robot_Control_B.Set_Coral_Level_j, &Robot_Control_B.Set_Algae_Level_p,
      &Robot_Control_B.Coral_Score_j, &Desired_Pipeline_e);

    /* End of SystemInitialize for SubSystem: '<S1>/Autonomous' */

    /* SystemInitialize for IfAction SubSystem: '<S1>/Teleop' */
    /* InitializeConditions for UnitDelay: '<S433>/FixPt Unit Delay2' */
    Robot_Control_DW.FixPtUnitDelay2_DSTATE_a = 1U;

    /* SystemInitialize for Chart: '<S395>/Reefscape_Chart' */
    Robot_Cont_Reefscape_Chart_Init(&Robot_Control_B.State_ID_Teleop,
      &Robot_Control_B.Elevator_Height_Desired,
      &Robot_Control_B.Coral_Arm_Angle_Desired, &Robot_Control_B.Coral_Wheel_DC,
      &Algae_Wheel_Outside_DC_p, &Algae_Wheel_Inside_DC_c,
      &Robot_Control_B.Elevator_LowerPickup_Reset,
      &Robot_Control_B.Coral_Pickup_Lower_Wait_State,
      &Robot_Control_B.Set_Coral_Level, &Robot_Control_B.Set_Algae_Level,
      &Coral_Score, &Robot_Control_B.Desired_Pipeline);

    /* End of SystemInitialize for SubSystem: '<S1>/Teleop' */

    /* SystemInitialize for IfAction SubSystem: '<S21>/Spline Path Following Enabled' */
    /* Start for If: '<S188>/If' */
    Robot_Control_DW.If_ActiveSubsystem_h = -1;

    /* InitializeConditions for UnitDelay: '<S184>/Unit Delay' */
    Robot_Control_DW.UnitDelay_DSTATE_gh = 2.0;

    /* SystemInitialize for IfAction SubSystem: '<S188>/Robot_Index_Is_Valid' */
    /* Start for If: '<S191>/If' */
    Robot_Control_DW.If_ActiveSubsystem_o = -1;

    /* SystemInitialize for IfAction SubSystem: '<S191>/Circle_Check_Valid' */
    /* Start for If: '<S193>/If' */
    Robot_Control_DW.If_ActiveSubsystem_d = -1;

    /* End of SystemInitialize for SubSystem: '<S191>/Circle_Check_Valid' */
    /* End of SystemInitialize for SubSystem: '<S188>/Robot_Index_Is_Valid' */
    /* End of SystemInitialize for SubSystem: '<S21>/Spline Path Following Enabled' */
  }
}

/* Model terminate function */
void Robot_Control_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
