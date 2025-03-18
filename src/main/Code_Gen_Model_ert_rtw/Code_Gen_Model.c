/*
 * Sponsored License - for use in support of a program or activity
 * sponsored by MathWorks.  Not for government, commercial or other
 * non-sponsored organizational use.
 *
 * File: Code_Gen_Model.c
 *
 * Code generated for Simulink model 'Code_Gen_Model'.
 *
 * Model version                  : 2.350
 * Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
 * C/C++ source code generated on : Tue Mar 18 03:16:37 2025
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

/* Named constants for Chart: '<S20>/Chart' */
#define Code_Gen_Mod_IN_NO_ACTIVE_CHILD ((uint8_T)0U)
#define Code_Gen_Model_IN_Disabled     ((uint8_T)1U)
#define Code_Gen_Model_IN_Not_Disabled ((uint8_T)2U)

/* Named constants for Chart: '<S29>/Reefscape_Chart' */
#define C_IN_Elevator_Height_Bottom_pre ((uint8_T)7U)
#define Code_Ge_IN_Coral_Pickup_Prepare ((uint8_T)3U)
#define Code_Ge_IN_Coral_Score_Position ((uint8_T)2U)
#define Code_Gen_IN_Auto_Lower_Elevator ((uint8_T)1U)
#define Code_Gen_IN_Manual_Adjustment_c ((uint8_T)5U)
#define Code_Gen_M_IN_Algae_Pickup_High ((uint8_T)1U)
#define Code_Gen_M_IN_Manual_Adjustment ((uint8_T)2U)
#define Code_Gen_Mo_IN_Algae_Pickup_Low ((uint8_T)2U)
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
#define Code_Gen_Model_IN_None         ((uint8_T)5U)
#define Code_Gen_Model_IN_Off          ((uint8_T)4U)
#define Code_Gen_Model_IN_Off_Target   ((uint8_T)1U)
#define Code_Gen_Model_IN_On_Target    ((uint8_T)2U)
#define Code_Gen_Model_IN_Start        ((uint8_T)9U)
#define Code_Gen_Model_IN_Start_Angle  ((uint8_T)10U)
#define Code_Gen_Model_IN_Stop         ((uint8_T)6U)
#define Code_Gen__IN_Coral_Pickup_Lower ((uint8_T)1U)
#define Code_Gen__IN_Coral_Pickup_Raise ((uint8_T)4U)
#define Code_IN_Coral_Pickup_Lower_Wait ((uint8_T)2U)
#define Code__IN_Elevator_Height_Bottom ((uint8_T)6U)

/* Named constants for Chart: '<S26>/Reefscape_Auto_Steps' */
#define Code_Gen_IN_Back_Up_from_Reef_1 ((uint8_T)1U)
#define Code_Gen_IN_Back_Up_from_Reef_2 ((uint8_T)2U)
#define Code_Gen_IN_Back_Up_from_Reef_3 ((uint8_T)3U)
#define Code_Gen_M_IN_Wait_for_Teleop_m ((uint8_T)16U)
#define Code_Gen_Mod_IN_Score_at_Reef_1 ((uint8_T)11U)
#define Code_Gen_Mod_IN_Score_at_Reef_2 ((uint8_T)12U)
#define Code_Gen_Mod_IN_Score_at_Reef_3 ((uint8_T)13U)
#define Code_Gen_Mod_IN_Wait_for_Teleop ((uint8_T)9U)
#define Code_Gen_Mode_IN_Left_and_Right ((uint8_T)2U)
#define Code_Gen_Mode_IN_Path_to_Reef_1 ((uint8_T)8U)
#define Code_Gen_Mode_IN_Path_to_Reef_2 ((uint8_T)9U)
#define Code_Gen_Mode_IN_Path_to_Reef_3 ((uint8_T)10U)
#define Code_Gen_Model_IN_Center       ((uint8_T)1U)
#define Code_Gen_Model_IN_Drive        ((uint8_T)1U)
#define Code_Gen_Model_IN_Path_to_Reef ((uint8_T)6U)
#define Code_Gen_Model_IN_Score_at_Reef ((uint8_T)8U)
#define Code_Gen_Model_IN_Set_L4       ((uint8_T)2U)
#define Code_Gen_Model_IN_Set_L4_h     ((uint8_T)1U)
#define Code_Gen_Model_IN_Timer_to_L4  ((uint8_T)2U)
#define Code_Gen__IN_Path_to_Start_Line ((uint8_T)7U)
#define Code_IN_Adjust_Height_for_Algae ((uint8_T)1U)
#define Code_IN_Path_to_Coral_Station_1 ((uint8_T)4U)
#define Code_IN_Path_to_Coral_Station_2 ((uint8_T)6U)
#define Code_IN_Path_to_Coral_Station_3 ((uint8_T)7U)
#define Code_IN_Wait_at_Coral_Station_1 ((uint8_T)14U)
#define Code_IN_Wait_at_Coral_Station_2 ((uint8_T)15U)
#define IN_Back_Up_from_Reef_Coral_Sc_o ((uint8_T)3U)
#define IN_Back_Up_from_Reef_Coral_Scor ((uint8_T)2U)
#define IN_Drive_Backward_from_Collect_ ((uint8_T)4U)
#define IN_Drive_Forward_and_Collect_Al ((uint8_T)5U)
#define IN_Path_to_Coral_Station_1_end_ ((uint8_T)5U)

/* Exported block parameters */
real_T AT_CS_L_Angle_Blue = 2.1991;    /* Variable: AT_CS_L_Angle_Blue
                                        * Referenced by: '<S413>/Constant14'
                                        */
real_T AT_CS_L_Angle_Red = -0.94248;   /* Variable: AT_CS_L_Angle_Red
                                        * Referenced by: '<S413>/Constant13'
                                        */
real_T AT_CS_L_X_Blue = 1.0751;        /* Variable: AT_CS_L_X_Blue
                                        * Referenced by: '<S413>/Constant9'
                                        */
real_T AT_CS_L_X_Red = 16.4733;        /* Variable: AT_CS_L_X_Red
                                        * Referenced by: '<S413>/Constant5'
                                        */
real_T AT_CS_L_Y_Blue = 7.0882;        /* Variable: AT_CS_L_Y_Blue
                                        * Referenced by: '<S413>/Constant28'
                                        */
real_T AT_CS_L_Y_Red = 0.96356;        /* Variable: AT_CS_L_Y_Red
                                        * Referenced by: '<S413>/Constant27'
                                        */
real_T AT_CS_R_Angle_Blue = -2.1991;   /* Variable: AT_CS_R_Angle_Blue
                                        * Referenced by: '<S413>/Constant12'
                                        */
real_T AT_CS_R_Angle_Red = 0.94248;    /* Variable: AT_CS_R_Angle_Red
                                        * Referenced by: '<S413>/Constant11'
                                        */
real_T AT_CS_R_X_Blue = 1.0751;        /* Variable: AT_CS_R_X_Blue
                                        * Referenced by: '<S413>/Constant4'
                                        */
real_T AT_CS_R_X_Red = 16.4733;        /* Variable: AT_CS_R_X_Red
                                        * Referenced by: '<S413>/Constant17'
                                        */
real_T AT_CS_R_Y_Blue = 0.96356;       /* Variable: AT_CS_R_Y_Blue
                                        * Referenced by: '<S413>/Constant26'
                                        */
real_T AT_CS_R_Y_Red = 7.0882;         /* Variable: AT_CS_R_Y_Red
                                        * Referenced by: '<S413>/Constant3'
                                        */
real_T AT_Cage_L_Finish_Angle_Blue = -3.1416;/* Variable: AT_Cage_L_Finish_Angle_Blue
                                              * Referenced by: '<S413>/Constant55'
                                              */
real_T AT_Cage_L_Finish_Angle_Red = 0.0;/* Variable: AT_Cage_L_Finish_Angle_Red
                                         * Referenced by: '<S413>/Constant54'
                                         */
real_T AT_Cage_L_Finish_X_Blue = 8.7681;/* Variable: AT_Cage_L_Finish_X_Blue
                                         * Referenced by: '<S413>/Constant39'
                                         */
real_T AT_Cage_L_Finish_X_Red = 8.7803;/* Variable: AT_Cage_L_Finish_X_Red
                                        * Referenced by: '<S413>/Constant2'
                                        */
real_T AT_Cage_L_Finish_Y_Blue = 7.2603;/* Variable: AT_Cage_L_Finish_Y_Blue
                                         * Referenced by: '<S413>/Constant43'
                                         */
real_T AT_Cage_L_Finish_Y_Red = 0.79229;/* Variable: AT_Cage_L_Finish_Y_Red
                                         * Referenced by: '<S413>/Constant42'
                                         */
real_T AT_Cage_L_Start_Angle_Blue = -3.1416;/* Variable: AT_Cage_L_Start_Angle_Blue
                                             * Referenced by: '<S413>/Constant49'
                                             */
real_T AT_Cage_L_Start_Angle_Red = 0.0;/* Variable: AT_Cage_L_Start_Angle_Red
                                        * Referenced by: '<S413>/Constant48'
                                        */
real_T AT_Cage_L_Start_X_Blue = 9.5301;/* Variable: AT_Cage_L_Start_X_Blue
                                        * Referenced by: '<S413>/Constant7'
                                        */
real_T AT_Cage_L_Start_X_Red = 8.0183; /* Variable: AT_Cage_L_Start_X_Red
                                        * Referenced by: '<S413>/Constant15'
                                        */
real_T AT_Cage_L_Start_Y_Blue = 7.2603;/* Variable: AT_Cage_L_Start_Y_Blue
                                        * Referenced by: '<S413>/Constant32'
                                        */
real_T AT_Cage_L_Start_Y_Red = 0.79229;/* Variable: AT_Cage_L_Start_Y_Red
                                        * Referenced by: '<S413>/Constant25'
                                        */
real_T AT_Cage_M_Finish_Angle_Blue = -3.1416;/* Variable: AT_Cage_M_Finish_Angle_Blue
                                              * Referenced by: '<S413>/Constant53'
                                              */
real_T AT_Cage_M_Finish_Angle_Red = 0.0;/* Variable: AT_Cage_M_Finish_Angle_Red
                                         * Referenced by: '<S413>/Constant52'
                                         */
real_T AT_Cage_M_Finish_X_Blue = 8.7681;/* Variable: AT_Cage_M_Finish_X_Blue
                                         * Referenced by: '<S413>/Constant34'
                                         */
real_T AT_Cage_M_Finish_X_Red = 8.7803;/* Variable: AT_Cage_M_Finish_X_Red
                                        * Referenced by: '<S413>/Constant35'
                                        */
real_T AT_Cage_M_Finish_Y_Blue = 6.1697;/* Variable: AT_Cage_M_Finish_Y_Blue
                                         * Referenced by: '<S413>/Constant41'
                                         */
real_T AT_Cage_M_Finish_Y_Red = 1.8829;/* Variable: AT_Cage_M_Finish_Y_Red
                                        * Referenced by: '<S413>/Constant44'
                                        */
real_T AT_Cage_M_Start_Angle_Blue = -3.1416;/* Variable: AT_Cage_M_Start_Angle_Blue
                                             * Referenced by: '<S413>/Constant47'
                                             */
real_T AT_Cage_M_Start_Angle_Red = 0.0;/* Variable: AT_Cage_M_Start_Angle_Red
                                        * Referenced by: '<S413>/Constant46'
                                        */
real_T AT_Cage_M_Start_X_Blue = 9.5301;/* Variable: AT_Cage_M_Start_X_Blue
                                        * Referenced by: '<S413>/Constant20'
                                        */
real_T AT_Cage_M_Start_X_Red = 8.0183; /* Variable: AT_Cage_M_Start_X_Red
                                        * Referenced by: '<S413>/Constant24'
                                        */
real_T AT_Cage_M_Start_Y_Blue = 6.1697;/* Variable: AT_Cage_M_Start_Y_Blue
                                        * Referenced by: '<S413>/Constant22'
                                        */
real_T AT_Cage_M_Start_Y_Red = 1.8829; /* Variable: AT_Cage_M_Start_Y_Red
                                        * Referenced by: '<S413>/Constant33'
                                        */
real_T AT_Cage_R_Finish_Angle_Blue = -3.1416;/* Variable: AT_Cage_R_Finish_Angle_Blue
                                              * Referenced by: '<S413>/Constant51'
                                              */
real_T AT_Cage_R_Finish_Angle_Red = 0.0;/* Variable: AT_Cage_R_Finish_Angle_Red
                                         * Referenced by: '<S413>/Constant56'
                                         */
real_T AT_Cage_R_Finish_X_Blue = 8.7681;/* Variable: AT_Cage_R_Finish_X_Blue
                                         * Referenced by: '<S413>/Constant36'
                                         */
real_T AT_Cage_R_Finish_X_Red = 8.7803;/* Variable: AT_Cage_R_Finish_X_Red
                                        * Referenced by: '<S413>/Constant38'
                                        */
real_T AT_Cage_R_Finish_Y_Blue = 5.079;/* Variable: AT_Cage_R_Finish_Y_Blue
                                        * Referenced by: '<S413>/Constant45'
                                        */
real_T AT_Cage_R_Finish_Y_Red = 2.9735;/* Variable: AT_Cage_R_Finish_Y_Red
                                        * Referenced by: '<S413>/Constant40'
                                        */
real_T AT_Cage_R_Start_Angle_Blue = -3.1416;/* Variable: AT_Cage_R_Start_Angle_Blue
                                             * Referenced by: '<S413>/Constant1'
                                             */
real_T AT_Cage_R_Start_Angle_Red = 0.0;/* Variable: AT_Cage_R_Start_Angle_Red
                                        * Referenced by: '<S413>/Constant50'
                                        */
real_T AT_Cage_R_Start_X_Blue = 9.5301;/* Variable: AT_Cage_R_Start_X_Blue
                                        * Referenced by: '<S413>/Constant29'
                                        */
real_T AT_Cage_R_Start_X_Red = 8.0183; /* Variable: AT_Cage_R_Start_X_Red
                                        * Referenced by: '<S413>/Constant31'
                                        */
real_T AT_Cage_R_Start_Y_Blue = 5.079; /* Variable: AT_Cage_R_Start_Y_Blue
                                        * Referenced by: '<S413>/Constant6'
                                        */
real_T AT_Cage_R_Start_Y_Red = 2.9735; /* Variable: AT_Cage_R_Start_Y_Red
                                        * Referenced by: '<S413>/Constant16'
                                        */
real_T AT_Integral_Enable_Error_Angle = 5.0;
                                     /* Variable: AT_Integral_Enable_Error_Angle
                                      * Referenced by:
                                      *   '<S420>/Constant'
                                      *   '<S34>/Constant'
                                      */
real_T AT_Integral_Enable_Error_XY = 2.0;/* Variable: AT_Integral_Enable_Error_XY
                                          * Referenced by:
                                          *   '<S427>/Constant'
                                          *   '<S428>/Constant'
                                          *   '<S41>/Constant'
                                          *   '<S42>/Constant'
                                          */
real_T AT_Max_Error_Angle = 0.5;       /* Variable: AT_Max_Error_Angle
                                        * Referenced by:
                                        *   '<S426>/Constant'
                                        *   '<S40>/Constant'
                                        */
real_T AT_Max_Error_XY = 0.5;          /* Variable: AT_Max_Error_XY
                                        * Referenced by:
                                        *   '<S424>/Constant'
                                        *   '<S425>/Constant'
                                        *   '<S38>/Constant'
                                        *   '<S39>/Constant'
                                        */
real_T AT_On_Target_Time = 0.5;        /* Variable: AT_On_Target_Time
                                        * Referenced by:
                                        *   '<S416>/Reefscape_Chart'
                                        *   '<S29>/Reefscape_Chart'
                                        */
real_T AT_Processor_Angle_Blue = -1.5708;/* Variable: AT_Processor_Angle_Blue
                                          * Referenced by: '<S413>/Constant10'
                                          */
real_T AT_Processor_Angle_Red = 1.5708;/* Variable: AT_Processor_Angle_Red
                                        * Referenced by: '<S413>/Constant8'
                                        */
real_T AT_Processor_X_Blue = 11.5608;  /* Variable: AT_Processor_X_Blue
                                        * Referenced by: '<S413>/Constant18'
                                        */
real_T AT_Processor_X_Red = 5.9875;    /* Variable: AT_Processor_X_Red
                                        * Referenced by: '<S413>/Constant19'
                                        */
real_T AT_Processor_Y_Blue = 7.4714;   /* Variable: AT_Processor_Y_Blue
                                        * Referenced by: '<S413>/Constant21'
                                        */
real_T AT_Processor_Y_Red = 0.58039;   /* Variable: AT_Processor_Y_Red
                                        * Referenced by: '<S413>/Constant23'
                                        */
real_T AT_Reef_Target_Algae_X = 18.0;  /* Variable: AT_Reef_Target_Algae_X
                                        * Referenced by:
                                        *   '<S414>/Constant7'
                                        *   '<S27>/Constant7'
                                        */
real_T AT_Reef_Target_Algae_Y = 2.5;   /* Variable: AT_Reef_Target_Algae_Y
                                        * Referenced by:
                                        *   '<S414>/Constant6'
                                        *   '<S27>/Constant6'
                                        */
real_T AT_Reef_Target_Center_Y = -4.5; /* Variable: AT_Reef_Target_Center_Y
                                        * Referenced by:
                                        *   '<S414>/Constant3'
                                        *   '<S27>/Constant3'
                                        */
real_T AT_Reef_Target_L1_X = 25.75;    /* Variable: AT_Reef_Target_L1_X
                                        * Referenced by:
                                        *   '<S414>/Constant4'
                                        *   '<S27>/Constant4'
                                        */
real_T AT_Reef_Target_L2_L3_X = 24.0;  /* Variable: AT_Reef_Target_L2_L3_X
                                        * Referenced by:
                                        *   '<S414>/Constant'
                                        *   '<S27>/Constant'
                                        */
real_T AT_Reef_Target_L4_X = 26.75;    /* Variable: AT_Reef_Target_L4_X
                                        * Referenced by:
                                        *   '<S414>/Constant5'
                                        *   '<S27>/Constant5'
                                        */
real_T AT_Reef_Target_Left_Y = 3.5;    /* Variable: AT_Reef_Target_Left_Y
                                        * Referenced by:
                                        *   '<S414>/Constant1'
                                        *   '<S27>/Constant1'
                                        */
real_T AT_Reef_Target_Right_Y = -9.5;  /* Variable: AT_Reef_Target_Right_Y
                                        * Referenced by:
                                        *   '<S414>/Constant2'
                                        *   '<S27>/Constant2'
                                        */
real_T AT_Steering_Error_Angle_Gain_P = 0.1;
                                     /* Variable: AT_Steering_Error_Angle_Gain_P
                                      * Referenced by:
                                      *   '<S31>/Constant4'
                                      *   '<S436>/Constant4'
                                      */
real_T AT_Steering_Speed_Max = 0.4;    /* Variable: AT_Steering_Speed_Max
                                        * Referenced by:
                                        *   '<S31>/Constant10'
                                        *   '<S436>/Constant10'
                                        */
real_T AT_Translation_Control_Gain_Field = 10.0;
                                  /* Variable: AT_Translation_Control_Gain_Field
                                   * Referenced by: '<S437>/Gain2'
                                   */
real_T AT_Translation_Control_Gain_Relative = 0.2;
                               /* Variable: AT_Translation_Control_Gain_Relative
                                * Referenced by:
                                *   '<S31>/Gain1'
                                *   '<S437>/Gain1'
                                */
real_T AT_Translation_Speed_Max_Field = 5.0;
                                     /* Variable: AT_Translation_Speed_Max_Field
                                      * Referenced by: '<S437>/Constant5'
                                      */
real_T AT_Translation_Speed_Max_Relative = 0.5;
                                  /* Variable: AT_Translation_Speed_Max_Relative
                                   * Referenced by:
                                   *   '<S31>/Constant8'
                                   *   '<S437>/Constant8'
                                   */
real_T Actuator_DC = 0.3;              /* Variable: Actuator_DC
                                        * Referenced by: '<S12>/Constant3'
                                        */
real_T Algae_Eject_Time = 1.0;         /* Variable: Algae_Eject_Time
                                        * Referenced by:
                                        *   '<S416>/Reefscape_Chart'
                                        *   '<S29>/Reefscape_Chart'
                                        */
real_T Algae_Hold_DC = 0.005;          /* Variable: Algae_Hold_DC
                                        * Referenced by:
                                        *   '<S416>/Reefscape_Chart'
                                        *   '<S29>/Reefscape_Chart'
                                        */
real_T Algae_Pull_In_DC = 1.0;         /* Variable: Algae_Pull_In_DC
                                        * Referenced by:
                                        *   '<S416>/Reefscape_Chart'
                                        *   '<S29>/Reefscape_Chart'
                                        */
real_T Algae_Push_Out_DC = -0.3;       /* Variable: Algae_Push_Out_DC
                                        * Referenced by:
                                        *   '<S416>/Reefscape_Chart'
                                        *   '<S29>/Reefscape_Chart'
                                        */
real_T Auto_Algae_Height_Time = 0.5;   /* Variable: Auto_Algae_Height_Time
                                        * Referenced by: '<S26>/Reefscape_Auto_Steps'
                                        */
real_T Auto_Backup_Time_Reef = 1.0;    /* Variable: Auto_Backup_Time_Reef
                                        * Referenced by: '<S26>/Reefscape_Auto_Steps'
                                        */
real_T Auto_Path1_Delay_to_L4_Time = 1.0;/* Variable: Auto_Path1_Delay_to_L4_Time
                                          * Referenced by: '<S26>/Reefscape_Auto_Steps'
                                          */
real_T Auto_Path2_Delay_to_L4_Time = 1.0;/* Variable: Auto_Path2_Delay_to_L4_Time
                                          * Referenced by: '<S26>/Reefscape_Auto_Steps'
                                          */
real_T Auto_Speed_Algae = 0.2;         /* Variable: Auto_Speed_Algae
                                        * Referenced by: '<S26>/Reefscape_Auto_Steps'
                                        */
real_T Auto_Speed_Coral = 0.5;         /* Variable: Auto_Speed_Coral
                                        * Referenced by: '<S26>/Reefscape_Auto_Steps'
                                        */
real_T Auto_Speed_Reef = 0.5;          /* Variable: Auto_Speed_Reef
                                        * Referenced by: '<S26>/Reefscape_Auto_Steps'
                                        */
real_T Auto_Starting_Position = 1.0;   /* Variable: Auto_Starting_Position
                                        * Referenced by: '<S26>/Constant1'
                                        */
real_T Boost_Trigger_Decreasing_Limit = -0.28;
                                     /* Variable: Boost_Trigger_Decreasing_Limit
                                      * Referenced by: '<S451>/Constant1'
                                      */
real_T Boost_Trigger_High_Speed = 5.0; /* Variable: Boost_Trigger_High_Speed
                                        * Referenced by:
                                        *   '<S447>/Constant'
                                        *   '<S447>/Saturation'
                                        */
real_T Boost_Trigger_Increasing_Limit = 3.5;
                                     /* Variable: Boost_Trigger_Increasing_Limit
                                      * Referenced by: '<S451>/Constant3'
                                      */
real_T Boost_Trigger_Low_Speed = 1.5;  /* Variable: Boost_Trigger_Low_Speed
                                        * Referenced by: '<S447>/Constant1'
                                        */
real_T Coral_Arm_Angle_Coral_Score_Lower_Rate = -1.0;
                             /* Variable: Coral_Arm_Angle_Coral_Score_Lower_Rate
                              * Referenced by:
                              *   '<S416>/Reefscape_Chart'
                              *   '<S29>/Reefscape_Chart'
                              */
real_T Coral_Arm_Angle_Error_Threshold = 3.0;
                                    /* Variable: Coral_Arm_Angle_Error_Threshold
                                     * Referenced by:
                                     *   '<S416>/Reefscape_Chart'
                                     *   '<S29>/Reefscape_Chart'
                                     */
real_T Coral_Arm_Angle_L1 = -15.0;     /* Variable: Coral_Arm_Angle_L1
                                        * Referenced by:
                                        *   '<S416>/Reefscape_Chart'
                                        *   '<S29>/Reefscape_Chart'
                                        */
real_T Coral_Arm_Angle_L2 = 60.0;      /* Variable: Coral_Arm_Angle_L2
                                        * Referenced by:
                                        *   '<S416>/Reefscape_Chart'
                                        *   '<S29>/Reefscape_Chart'
                                        */
real_T Coral_Arm_Angle_L3 = 60.0;      /* Variable: Coral_Arm_Angle_L3
                                        * Referenced by:
                                        *   '<S416>/Reefscape_Chart'
                                        *   '<S29>/Reefscape_Chart'
                                        */
real_T Coral_Arm_Angle_L4 = 57.0;      /* Variable: Coral_Arm_Angle_L4
                                        * Referenced by:
                                        *   '<S416>/Reefscape_Chart'
                                        *   '<S29>/Reefscape_Chart'
                                        */
real_T Coral_Arm_Angle_L4_Eject_Auto = 25.0;
                                      /* Variable: Coral_Arm_Angle_L4_Eject_Auto
                                       * Referenced by:
                                       *   '<S416>/Reefscape_Chart'
                                       *   '<S29>/Reefscape_Chart'
                                       */
real_T Coral_Arm_Angle_L4_Eject_Teleop = 40.0;
                                    /* Variable: Coral_Arm_Angle_L4_Eject_Teleop
                                     * Referenced by:
                                     *   '<S416>/Reefscape_Chart'
                                     *   '<S29>/Reefscape_Chart'
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
                                        *   '<S416>/Reefscape_Chart'
                                        *   '<S29>/Reefscape_Chart'
                                        */
real_T Coral_Arm_Angle_Start_Thresh = -75.0;/* Variable: Coral_Arm_Angle_Start_Thresh
                                             * Referenced by:
                                             *   '<S416>/Reefscape_Chart'
                                             *   '<S29>/Reefscape_Chart'
                                             */
real_T Coral_Arm_Angle_Up = 85.0;      /* Variable: Coral_Arm_Angle_Up
                                        * Referenced by:
                                        *   '<S416>/Reefscape_Chart'
                                        *   '<S29>/Reefscape_Chart'
                                        */
real_T Coral_Arm_DC_Inc_RL = 0.066667; /* Variable: Coral_Arm_DC_Inc_RL
                                        * Referenced by: '<S71>/Constant3'
                                        */
real_T Coral_Arm_Gain_Int = 0.001;     /* Variable: Coral_Arm_Gain_Int
                                        * Referenced by: '<S72>/Gain2'
                                        */
real_T Coral_Arm_Gain_Prop = 0.01;     /* Variable: Coral_Arm_Gain_Prop
                                        * Referenced by: '<S72>/Gain1'
                                        */
real_T Coral_Arm_Int_IC = 0.0;         /* Variable: Coral_Arm_Int_IC
                                        * Referenced by: '<S72>/Constant3'
                                        */
real_T Coral_Arm_Int_LL = -0.05;       /* Variable: Coral_Arm_Int_LL
                                        * Referenced by: '<S72>/Saturation1'
                                        */
real_T Coral_Arm_Int_UL = 0.05;        /* Variable: Coral_Arm_Int_UL
                                        * Referenced by: '<S72>/Saturation1'
                                        */
real_T Coral_Arm_Manual_Gain = 1.0;    /* Variable: Coral_Arm_Manual_Gain
                                        * Referenced by:
                                        *   '<S416>/Reefscape_Chart'
                                        *   '<S29>/Reefscape_Chart'
                                        */
real_T Coral_Arm_Neg90_DC = -0.03;     /* Variable: Coral_Arm_Neg90_DC
                                        * Referenced by: '<S8>/Constant2'
                                        */
real_T Coral_Arm_Pos90_DC = 0.03;      /* Variable: Coral_Arm_Pos90_DC
                                        * Referenced by: '<S8>/Constant1'
                                        */
real_T Coral_Detect_Distance = 150.0;  /* Variable: Coral_Detect_Distance
                                        * Referenced by:
                                        *   '<S416>/Reefscape_Chart'
                                        *   '<S29>/Reefscape_Chart'
                                        */
real_T Coral_Eject_Time = 0.5;         /* Variable: Coral_Eject_Time
                                        * Referenced by:
                                        *   '<S416>/Reefscape_Chart'
                                        *   '<S29>/Reefscape_Chart'
                                        */
real_T Coral_Motor_DC_Eject = -0.4;    /* Variable: Coral_Motor_DC_Eject
                                        * Referenced by:
                                        *   '<S416>/Reefscape_Chart'
                                        *   '<S29>/Reefscape_Chart'
                                        */
real_T Coral_Motor_DC_Hold = 0.01;     /* Variable: Coral_Motor_DC_Hold
                                        * Referenced by:
                                        *   '<S416>/Reefscape_Chart'
                                        *   '<S29>/Reefscape_Chart'
                                        */
real_T Coral_Motor_DC_Pickup = 0.1;    /* Variable: Coral_Motor_DC_Pickup
                                        * Referenced by:
                                        *   '<S416>/Reefscape_Chart'
                                        *   '<S29>/Reefscape_Chart'
                                        */
real_T Drive_Motor_Control_D = 0.0001; /* Variable: Drive_Motor_Control_D
                                        * Referenced by:
                                        *   '<S269>/Constant3'
                                        *   '<S290>/Constant3'
                                        *   '<S311>/Constant3'
                                        *   '<S332>/Constant3'
                                        */
real_T Drive_Motor_Control_D_FilterCoeff = 0.22223;
                                  /* Variable: Drive_Motor_Control_D_FilterCoeff
                                   * Referenced by:
                                   *   '<S269>/Constant2'
                                   *   '<S290>/Constant2'
                                   *   '<S311>/Constant2'
                                   *   '<S332>/Constant2'
                                   */
real_T Drive_Motor_Control_D_LL = -0.2;/* Variable: Drive_Motor_Control_D_LL
                                        * Referenced by:
                                        *   '<S269>/Saturation'
                                        *   '<S290>/Saturation'
                                        *   '<S311>/Saturation'
                                        *   '<S332>/Saturation'
                                        */
real_T Drive_Motor_Control_D_UL = 0.2; /* Variable: Drive_Motor_Control_D_UL
                                        * Referenced by:
                                        *   '<S269>/Saturation'
                                        *   '<S290>/Saturation'
                                        *   '<S311>/Saturation'
                                        *   '<S332>/Saturation'
                                        */
real_T Drive_Motor_Control_FF = 0.00016129;/* Variable: Drive_Motor_Control_FF
                                            * Referenced by:
                                            *   '<S269>/Gain'
                                            *   '<S290>/Gain'
                                            *   '<S311>/Gain'
                                            *   '<S332>/Gain'
                                            */
real_T Drive_Motor_Control_I = 1.0E-6; /* Variable: Drive_Motor_Control_I
                                        * Referenced by:
                                        *   '<S269>/Gain2'
                                        *   '<S290>/Gain2'
                                        *   '<S311>/Gain2'
                                        *   '<S332>/Gain2'
                                        */
real_T Drive_Motor_Control_I_LL = -0.03;/* Variable: Drive_Motor_Control_I_LL
                                         * Referenced by:
                                         *   '<S269>/Saturation1'
                                         *   '<S290>/Saturation1'
                                         *   '<S311>/Saturation1'
                                         *   '<S332>/Saturation1'
                                         */
real_T Drive_Motor_Control_I_UL = 0.03;/* Variable: Drive_Motor_Control_I_UL
                                        * Referenced by:
                                        *   '<S269>/Saturation1'
                                        *   '<S290>/Saturation1'
                                        *   '<S311>/Saturation1'
                                        *   '<S332>/Saturation1'
                                        */
real_T Drive_Motor_Control_P = 5.0E-6; /* Variable: Drive_Motor_Control_P
                                        * Referenced by:
                                        *   '<S269>/Gain1'
                                        *   '<S290>/Gain1'
                                        *   '<S311>/Gain1'
                                        *   '<S332>/Gain1'
                                        */
real_T Drive_Motor_Control_Sign_Change_Deadband = 7000.0;
                           /* Variable: Drive_Motor_Control_Sign_Change_Deadband
                            * Referenced by:
                            *   '<S274>/Constant'
                            *   '<S295>/Constant'
                            *   '<S316>/Constant'
                            *   '<S337>/Constant'
                            */
real_T Elevator_Bottom_DC = -0.04;     /* Variable: Elevator_Bottom_DC
                                        * Referenced by: '<S10>/Constant7'
                                        */
real_T Elevator_DC_Inc_RL = 0.066667;  /* Variable: Elevator_DC_Inc_RL
                                        * Referenced by: '<S87>/Constant3'
                                        */
real_T Elevator_Error_Bottom_Disable = 1.0;
                                      /* Variable: Elevator_Error_Bottom_Disable
                                       * Referenced by: '<S84>/Constant'
                                       */
real_T Elevator_Error_Increase = 0.0;  /* Variable: Elevator_Error_Increase
                                        * Referenced by: '<S10>/Constant6'
                                        */
real_T Elevator_Gain_Int = 0.02;       /* Variable: Elevator_Gain_Int
                                        * Referenced by: '<S88>/Gain2'
                                        */
real_T Elevator_Gain_Prop = 0.3;       /* Variable: Elevator_Gain_Prop
                                        * Referenced by: '<S88>/Gain1'
                                        */
real_T Elevator_Height_Algae_High = 20.5;/* Variable: Elevator_Height_Algae_High
                                          * Referenced by:
                                          *   '<S416>/Reefscape_Chart'
                                          *   '<S29>/Reefscape_Chart'
                                          */
real_T Elevator_Height_Algae_Low = 12.5;/* Variable: Elevator_Height_Algae_Low
                                         * Referenced by:
                                         *   '<S416>/Reefscape_Chart'
                                         *   '<S29>/Reefscape_Chart'
                                         */
real_T Elevator_Height_Algae_Score = 3.5;/* Variable: Elevator_Height_Algae_Score
                                          * Referenced by:
                                          *   '<S416>/Reefscape_Chart'
                                          *   '<S29>/Reefscape_Chart'
                                          */
real_T Elevator_Height_Bottom = 0.0;   /* Variable: Elevator_Height_Bottom
                                        * Referenced by:
                                        *   '<S416>/Reefscape_Chart'
                                        *   '<S29>/Reefscape_Chart'
                                        */
real_T Elevator_Height_Coral_Arm_Low_Thresh = 8.5;
                               /* Variable: Elevator_Height_Coral_Arm_Low_Thresh
                                * Referenced by: '<S67>/Constant'
                                */
real_T Elevator_Height_Coral_Score_Lower_Rate = -0.1;
                             /* Variable: Elevator_Height_Coral_Score_Lower_Rate
                              * Referenced by:
                              *   '<S416>/Reefscape_Chart'
                              *   '<S29>/Reefscape_Chart'
                              */
real_T Elevator_Height_End_Game = 15.0;/* Variable: Elevator_Height_End_Game
                                        * Referenced by:
                                        *   '<S12>/Constant5'
                                        *   '<S416>/Reefscape_Chart'
                                        *   '<S29>/Reefscape_Chart'
                                        */
real_T Elevator_Height_Error_Threshold = 1.0;
                                    /* Variable: Elevator_Height_Error_Threshold
                                     * Referenced by:
                                     *   '<S85>/Constant'
                                     *   '<S416>/Reefscape_Chart'
                                     *   '<S29>/Reefscape_Chart'
                                     */
real_T Elevator_Height_L1 = 12.0;      /* Variable: Elevator_Height_L1
                                        * Referenced by:
                                        *   '<S416>/Reefscape_Chart'
                                        *   '<S29>/Reefscape_Chart'
                                        */
real_T Elevator_Height_L2 = 5.5;       /* Variable: Elevator_Height_L2
                                        * Referenced by:
                                        *   '<S416>/Reefscape_Chart'
                                        *   '<S29>/Reefscape_Chart'
                                        */
real_T Elevator_Height_L2_Eject = -0.5;/* Variable: Elevator_Height_L2_Eject
                                        * Referenced by:
                                        *   '<S416>/Reefscape_Chart'
                                        *   '<S29>/Reefscape_Chart'
                                        */
real_T Elevator_Height_L3 = 13.5;      /* Variable: Elevator_Height_L3
                                        * Referenced by:
                                        *   '<S416>/Reefscape_Chart'
                                        *   '<S29>/Reefscape_Chart'
                                        */
real_T Elevator_Height_L3_Eject = 7.5; /* Variable: Elevator_Height_L3_Eject
                                        * Referenced by:
                                        *   '<S416>/Reefscape_Chart'
                                        *   '<S29>/Reefscape_Chart'
                                        */
real_T Elevator_Height_L4 = 27.5;      /* Variable: Elevator_Height_L4
                                        * Referenced by:
                                        *   '<S416>/Reefscape_Chart'
                                        *   '<S29>/Reefscape_Chart'
                                        */
real_T Elevator_Height_Lower = 7.5;    /* Variable: Elevator_Height_Lower
                                        * Referenced by:
                                        *   '<S416>/Reefscape_Chart'
                                        *   '<S29>/Reefscape_Chart'
                                        */
real_T Elevator_Height_Manual_Gain = 0.1;/* Variable: Elevator_Height_Manual_Gain
                                          * Referenced by:
                                          *   '<S416>/Reefscape_Chart'
                                          *   '<S29>/Reefscape_Chart'
                                          */
real_T Elevator_Height_PickupLower_Reset = 7.875;
                                  /* Variable: Elevator_Height_PickupLower_Reset
                                   * Referenced by: '<S11>/Constant2'
                                   */
real_T Elevator_Height_Prepare = 11.5; /* Variable: Elevator_Height_Prepare
                                        * Referenced by:
                                        *   '<S416>/Reefscape_Chart'
                                        *   '<S29>/Reefscape_Chart'
                                        */
real_T Elevator_Height_Raise = 9.6;    /* Variable: Elevator_Height_Raise
                                        * Referenced by:
                                        *   '<S416>/Reefscape_Chart'
                                        *   '<S29>/Reefscape_Chart'
                                        */
real_T Elevator_Height_Top_Reset = 30.0;/* Variable: Elevator_Height_Top_Reset
                                         * Referenced by:
                                         *   '<S11>/Constant1'
                                         *   '<S11>/Constant3'
                                         */
real_T Elevator_Hold_at_Top_DC = 0.1;  /* Variable: Elevator_Hold_at_Top_DC
                                        * Referenced by: '<S10>/Constant1'
                                        */
real_T Elevator_Int_IC = 0.0;          /* Variable: Elevator_Int_IC
                                        * Referenced by: '<S88>/Constant3'
                                        */
real_T Elevator_Int_LL = -0.1;         /* Variable: Elevator_Int_LL
                                        * Referenced by: '<S88>/Saturation1'
                                        */
real_T Elevator_Int_UL = 0.1;          /* Variable: Elevator_Int_UL
                                        * Referenced by: '<S88>/Saturation1'
                                        */
real_T Elevator_LowerPickup_Time = 0.5;/* Variable: Elevator_LowerPickup_Time
                                        * Referenced by:
                                        *   '<S416>/Reefscape_Chart'
                                        *   '<S29>/Reefscape_Chart'
                                        */
real_T Elevator_MotorRev_to_Inch = 0.27646;/* Variable: Elevator_MotorRev_to_Inch
                                            * Referenced by: '<S11>/Gain1'
                                            */
real_T Elevator_Total_LL = -0.5;       /* Variable: Elevator_Total_LL
                                        * Referenced by:
                                        *   '<S88>/Constant1'
                                        *   '<S88>/Saturation2'
                                        */
real_T Elevator_Total_UL = 1.0;        /* Variable: Elevator_Total_UL
                                        * Referenced by:
                                        *   '<S88>/Constant'
                                        *   '<S88>/Saturation2'
                                        */
real_T Gyro_Calibration_Reset_Degree = 180.0;
                                      /* Variable: Gyro_Calibration_Reset_Degree
                                       * Referenced by:
                                       *   '<S13>/Constant2'
                                       *   '<S13>/Unit Delay1'
                                       */
real_T Gyro_Calibration_Reset_Flag = 0.0;/* Variable: Gyro_Calibration_Reset_Flag
                                          * Referenced by: '<S13>/Constant3'
                                          */
real_T KF_Enable = 1.0;                /* Variable: KF_Enable
                                        * Referenced by:
                                        *   '<S16>/Constant1'
                                        *   '<S16>/Constant2'
                                        */
real_T Limelight_Tag_Angle_Offset = 0.0;/* Variable: Limelight_Tag_Angle_Offset
                                         * Referenced by: '<S17>/Constant2'
                                         */
real_T Limelight_Tag_X_Offset = -0.28; /* Variable: Limelight_Tag_X_Offset
                                        * Referenced by: '<S17>/Constant'
                                        */
real_T Limelight_Tag_Y_Offset = -0.28; /* Variable: Limelight_Tag_Y_Offset
                                        * Referenced by: '<S17>/Constant1'
                                        */
real_T Odometry_IC_X = 0.0;            /* Variable: Odometry_IC_X
                                        * Referenced by: '<S1>/Constant'
                                        */
real_T Odometry_IC_Y = 0.0;            /* Variable: Odometry_IC_Y
                                        * Referenced by: '<S1>/Constant1'
                                        */
real_T Odometry_Reset_IC = 0.0;        /* Variable: Odometry_Reset_IC
                                        * Referenced by: '<S19>/Constant'
                                        */
real_T Odometry_X_Y_TEAR = 0.0;        /* Variable: Odometry_X_Y_TEAR
                                        * Referenced by: '<S195>/Constant'
                                        */
real_T Spline_Last_Pose_Distance_to_Velocity_Gain = 2.0;
                         /* Variable: Spline_Last_Pose_Distance_to_Velocity_Gain
                          * Referenced by: '<S254>/Constant2'
                          */
real_T Spline_Max_Centripital_Acceleration = 10.0;
                                /* Variable: Spline_Max_Centripital_Acceleration
                                 * Referenced by: '<S254>/Constant1'
                                 */
real_T Spline_Pose_Num_Before_End_Reduce_Speed = 1.0;
                            /* Variable: Spline_Pose_Num_Before_End_Reduce_Speed
                             * Referenced by: '<S201>/Constant'
                             */
real_T Spline_Stop_Radius = 0.1;       /* Variable: Spline_Stop_Radius
                                        * Referenced by: '<S214>/Constant'
                                        */
real_T Spline_Velocity_Multiplier_TEST = 1.0;
                                    /* Variable: Spline_Velocity_Multiplier_TEST
                                     * Referenced by: '<S254>/Constant3'
                                     */
real_T Steering_Absolute_Cmd_Approach_Zero_Error_Thresh = 0.2;
                   /* Variable: Steering_Absolute_Cmd_Approach_Zero_Error_Thresh
                    * Referenced by: '<S365>/Constant5'
                    */
real_T Steering_Absolute_Cmd_Approach_Zero_Final_Thresh = 0.01;
                   /* Variable: Steering_Absolute_Cmd_Approach_Zero_Final_Thresh
                    * Referenced by: '<S365>/Constant6'
                    */
real_T Steering_Absolute_Cmd_NonZero_Error_Thresh = 0.2;
                         /* Variable: Steering_Absolute_Cmd_NonZero_Error_Thresh
                          * Referenced by: '<S365>/Constant9'
                          */
real_T Steering_Absolute_Cmd_NonZero_Final_Scale_Factor = 0.1;
                   /* Variable: Steering_Absolute_Cmd_NonZero_Final_Scale_Factor
                    * Referenced by: '<S365>/Constant10'
                    */
real_T Steering_Absolute_Cmd_Rate_Limit_Dec = -1.0;
                               /* Variable: Steering_Absolute_Cmd_Rate_Limit_Dec
                                * Referenced by: '<S365>/Constant1'
                                */
real_T Steering_Absolute_Cmd_Rate_Limit_Inc = 1.0;
                               /* Variable: Steering_Absolute_Cmd_Rate_Limit_Inc
                                * Referenced by: '<S365>/Constant3'
                                */
real_T Steering_Heading_Control_D = 0.0;/* Variable: Steering_Heading_Control_D
                                         * Referenced by: '<S382>/Constant3'
                                         */
real_T Steering_Heading_Control_D_FilterCoeff = 0.22223;
                             /* Variable: Steering_Heading_Control_D_FilterCoeff
                              * Referenced by: '<S382>/Constant2'
                              */
real_T Steering_Heading_Control_D_LL = 0.0;
                                      /* Variable: Steering_Heading_Control_D_LL
                                       * Referenced by: '<S382>/Saturation'
                                       */
real_T Steering_Heading_Control_D_UL = 0.0;
                                      /* Variable: Steering_Heading_Control_D_UL
                                       * Referenced by: '<S382>/Saturation'
                                       */
real_T Steering_Heading_Control_Deadzone = 0.1;
                                  /* Variable: Steering_Heading_Control_Deadzone
                                   * Referenced by: '<S381>/Constant'
                                   */
real_T Steering_Heading_Control_I = 0.0;/* Variable: Steering_Heading_Control_I
                                         * Referenced by: '<S382>/Gain2'
                                         */
real_T Steering_Heading_Control_I_LL = -0.1;
                                      /* Variable: Steering_Heading_Control_I_LL
                                       * Referenced by: '<S382>/Saturation1'
                                       */
real_T Steering_Heading_Control_I_UL = 0.1;
                                      /* Variable: Steering_Heading_Control_I_UL
                                       * Referenced by: '<S382>/Saturation1'
                                       */
real_T Steering_Heading_Control_P = 2.5;/* Variable: Steering_Heading_Control_P
                                         * Referenced by: '<S382>/Gain1'
                                         */
real_T Steering_Heading_Control_Total_LL = -2.5;
                                  /* Variable: Steering_Heading_Control_Total_LL
                                   * Referenced by:
                                   *   '<S382>/Constant1'
                                   *   '<S382>/Saturation2'
                                   */
real_T Steering_Heading_Control_Total_UL = 2.5;
                                  /* Variable: Steering_Heading_Control_Total_UL
                                   * Referenced by:
                                   *   '<S382>/Constant'
                                   *   '<S382>/Saturation2'
                                   */
real_T Steering_Motor_Control_D = 0.5; /* Variable: Steering_Motor_Control_D
                                        * Referenced by:
                                        *   '<S272>/Constant3'
                                        *   '<S293>/Constant3'
                                        *   '<S314>/Constant3'
                                        *   '<S335>/Constant3'
                                        */
real_T Steering_Motor_Control_D_FilterCoeff = 0.22223;
                               /* Variable: Steering_Motor_Control_D_FilterCoeff
                                * Referenced by:
                                *   '<S272>/Constant2'
                                *   '<S293>/Constant2'
                                *   '<S314>/Constant2'
                                *   '<S335>/Constant2'
                                */
real_T Steering_Motor_Control_D_LL = -0.2;/* Variable: Steering_Motor_Control_D_LL
                                           * Referenced by:
                                           *   '<S272>/Saturation'
                                           *   '<S293>/Saturation'
                                           *   '<S314>/Saturation'
                                           *   '<S335>/Saturation'
                                           */
real_T Steering_Motor_Control_D_UL = 0.2;/* Variable: Steering_Motor_Control_D_UL
                                          * Referenced by:
                                          *   '<S272>/Saturation'
                                          *   '<S293>/Saturation'
                                          *   '<S314>/Saturation'
                                          *   '<S335>/Saturation'
                                          */
real_T Steering_Motor_Control_I = 0.005;/* Variable: Steering_Motor_Control_I
                                         * Referenced by:
                                         *   '<S272>/Gain2'
                                         *   '<S293>/Gain2'
                                         *   '<S314>/Gain2'
                                         *   '<S335>/Gain2'
                                         */
real_T Steering_Motor_Control_I_LL = -0.005;/* Variable: Steering_Motor_Control_I_LL
                                             * Referenced by:
                                             *   '<S272>/Saturation1'
                                             *   '<S293>/Saturation1'
                                             *   '<S314>/Saturation1'
                                             *   '<S335>/Saturation1'
                                             */
real_T Steering_Motor_Control_I_UL = 0.005;/* Variable: Steering_Motor_Control_I_UL
                                            * Referenced by:
                                            *   '<S272>/Saturation1'
                                            *   '<S293>/Saturation1'
                                            *   '<S314>/Saturation1'
                                            *   '<S335>/Saturation1'
                                            */
real_T Steering_Motor_Control_P = 0.15;/* Variable: Steering_Motor_Control_P
                                        * Referenced by:
                                        *   '<S272>/Gain1'
                                        *   '<S293>/Gain1'
                                        *   '<S314>/Gain1'
                                        *   '<S335>/Gain1'
                                        */
real_T Steering_Relative_Cmd_Approach_Zero_Error_Thresh = 0.2;
                   /* Variable: Steering_Relative_Cmd_Approach_Zero_Error_Thresh
                    * Referenced by: '<S364>/Constant5'
                    */
real_T Steering_Relative_Cmd_Approach_Zero_Final_Thresh = 0.01;
                   /* Variable: Steering_Relative_Cmd_Approach_Zero_Final_Thresh
                    * Referenced by: '<S364>/Constant6'
                    */
real_T Steering_Relative_Cmd_NonZero_Error_Thresh = 0.2;
                         /* Variable: Steering_Relative_Cmd_NonZero_Error_Thresh
                          * Referenced by: '<S364>/Constant9'
                          */
real_T Steering_Relative_Cmd_NonZero_Final_Scale_Factor = 1.0;
                   /* Variable: Steering_Relative_Cmd_NonZero_Final_Scale_Factor
                    * Referenced by: '<S364>/Constant10'
                    */
real_T Steering_Relative_Cmd_Rate_Limit_Dec = -10.0;
                               /* Variable: Steering_Relative_Cmd_Rate_Limit_Dec
                                * Referenced by: '<S364>/Constant1'
                                */
real_T Steering_Relative_Cmd_Rate_Limit_Inc = 10.0;
                               /* Variable: Steering_Relative_Cmd_Rate_Limit_Inc
                                * Referenced by: '<S364>/Constant3'
                                */
real_T Steering_Relative_Gain = 5.0;   /* Variable: Steering_Relative_Gain
                                        * Referenced by: '<S436>/Constant'
                                        */
real_T Steering_Twist_Gain = -0.5;     /* Variable: Steering_Twist_Gain
                                        * Referenced by: '<S436>/Constant1'
                                        */
real_T TEST_CANdle_Flag = 0.0;         /* Variable: TEST_CANdle_Flag
                                        * Referenced by: '<S3>/Constant2'
                                        */
real_T TEST_CANdle_LED_ID = 0.0;       /* Variable: TEST_CANdle_LED_ID
                                        * Referenced by: '<S3>/Constant3'
                                        */
real_T TEST_Swerve_Mode_Override_Flag = 0.0;
                                     /* Variable: TEST_Swerve_Mode_Override_Flag
                                      * Referenced by: '<S417>/Constant5'
                                      */
real_T TEST_Swerve_Mode_Steering = 0.0;/* Variable: TEST_Swerve_Mode_Steering
                                        * Referenced by: '<S417>/Constant8'
                                        */
real_T TEST_Swerve_Mode_Translation = 0.0;/* Variable: TEST_Swerve_Mode_Translation
                                           * Referenced by: '<S417>/Constant7'
                                           */
real_T Translation_Speed_Approach_Zero_Error_Thresh = 0.2;
                       /* Variable: Translation_Speed_Approach_Zero_Error_Thresh
                        * Referenced by: '<S352>/Constant5'
                        */
real_T Translation_Speed_Approach_Zero_Final_Thresh = 0.01;
                       /* Variable: Translation_Speed_Approach_Zero_Final_Thresh
                        * Referenced by: '<S352>/Constant6'
                        */
real_T Translation_Speed_NonZero_Error_Thresh = 0.15;
                             /* Variable: Translation_Speed_NonZero_Error_Thresh
                              * Referenced by: '<S352>/Constant9'
                              */
real_T Translation_Speed_NonZero_Final_Scale_Factor = 0.05;
                       /* Variable: Translation_Speed_NonZero_Final_Scale_Factor
                        * Referenced by: '<S352>/Constant10'
                        */
real_T Translation_Speed_Rate_Limit_Dec = -4.0;
                                   /* Variable: Translation_Speed_Rate_Limit_Dec
                                    * Referenced by: '<S352>/Constant1'
                                    */
real_T Translation_Speed_Rate_Limit_Inc = 4.0;
                                   /* Variable: Translation_Speed_Rate_Limit_Inc
                                    * Referenced by: '<S352>/Constant3'
                                    */
real_T Translation_Twist_Gain = -0.5;  /* Variable: Translation_Twist_Gain
                                        * Referenced by: '<S437>/Gain'
                                        */
real_T Twist_Deadzone_neg = -0.01;     /* Variable: Twist_Deadzone_neg
                                        * Referenced by:
                                        *   '<S436>/Dead Zone'
                                        *   '<S437>/Dead Zone'
                                        */
real_T Twist_Deadzone_pos = 0.01;      /* Variable: Twist_Deadzone_pos
                                        * Referenced by:
                                        *   '<S436>/Dead Zone'
                                        *   '<S437>/Dead Zone'
                                        */
real_T Winch_Hold_DC = 0.0;            /* Variable: Winch_Hold_DC
                                        * Referenced by: '<S12>/Constant2'
                                        */
real_T Winch_Rev_Target = 10.0;        /* Variable: Winch_Rev_Target
                                        * Referenced by: '<S102>/Constant'
                                        */
real_T Winch_Spool_DC = 0.0;           /* Variable: Winch_Spool_DC
                                        * Referenced by: '<S12>/Constant1'
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
  *Robot_Reached_Destination, const uint8_T *MultiportSwitch, boolean_T
  *Path_Enable);
static void Code_Gen_Model_Path_to_Reef_3(const boolean_T
  *Robot_Reached_Destination, boolean_T *Path_Enable);
static void Code_Gen_Model_Left_and_Right(const boolean_T
  *Robot_Reached_Destination, const uint8_T *MultiportSwitch, const uint8_T
  *MultiportSwitch1, boolean_T *Path_Enable, const uint8_T *Switch6, const
  uint8_T *Switch9);
static void enter_internal_Coral_Score_Posi(void);
static void Code_Gen_Mode_Algae_Pickup_High(void);
static void Code_Gen_Model_Algae_Pickup_Low(void);
static void Code__exit_internal_Coral_Eject(void);
static void Code_Gen_Model_Coral_Eject(void);
static void Code_Gen_Model_Coral(void);
static void Code_exit_internal_Coral_Pickup(void);
static void Code_Gen_Model_Set_Level(void);
static void Code_Gen_Model_Coral_Pickup(void);
static void Code_Elevator_Height_Bottom_pre(void);
static void Code_Gen_Model_End_Game_Climb(void);
static void Code_Gen_Model_Set_Level_h(void);
static void Co_Elevator_CoralArm_CoralWheel(void);
static void enter_internal_Coral_Score_Po_f(void);
static void Code_Gen_Mo_Algae_Pickup_High_k(void);
static void Code_Gen_Mod_Algae_Pickup_Low_c(void);
static void Cod_exit_internal_Coral_Eject_j(void);
static void Code_Gen_Model_Coral_Eject_k(void);
static void Code_Gen_Model_Coral_d(void);
static void Co_exit_internal_Coral_Pickup_n(void);
static void Code_Gen_Model_Set_Level_g(void);
static void Code_Gen_Model_Coral_Pickup_m(void);
static void Co_Elevator_Height_Bottom_pre_j(void);
static void Code_Gen_Model_End_Game_Climb_f(void);
static void Elevator_CoralArm_CoralWheel_i(void);

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

/* Function for Chart: '<S26>/Reefscape_Auto_Steps' */
static void Code_Gen_Model_Path_to_Reef_1(const boolean_T
  *Robot_Reached_Destination, const uint8_T *MultiportSwitch, boolean_T
  *Path_Enable)
{
  Code_Gen_Model_B.Auto_Step_ID = 1U;
  Code_Gen_Model_B.Translation_Speed_k = 0.0;
  Code_Gen_Model_B.Translation_Angle_c = 0.0;
  if (Code_Gen_Model_DW.is_Path_to_Reef_1 == Code_Gen_Model_IN_Drive) {
    *Path_Enable = true;
    if (*Robot_Reached_Destination) {
      Code_Gen_Model_DW.is_Path_to_Reef_1 = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Left_and_Right = Code_Gen_Mod_IN_Score_at_Reef_1;
      Code_Gen_Model_B.Auto_Step_ID = 2U;
      *Path_Enable = false;
      Code_Gen_Model_B.Align_Left_d = true;
    }
  } else {
    /* case IN_Set_L4: */
    *Path_Enable = false;
    if (Code_Gen_Model_DW.timer_n >= Auto_Path1_Delay_to_L4_Time) {
      Code_Gen_Model_B.Gamepad_B4_Y_out = false;
      Code_Gen_Model_DW.is_Path_to_Reef_1 = Code_Gen_Model_IN_Drive;
      *Path_Enable = true;
      Code_Gen_Model_B.Path_ID = *MultiportSwitch;
    } else {
      Code_Gen_Model_B.Gamepad_B4_Y_out = true;
      Code_Gen_Model_DW.timer_n += 0.02;
    }
  }
}

/* Function for Chart: '<S26>/Reefscape_Auto_Steps' */
static void Code_Gen_Model_Path_to_Reef_3(const boolean_T
  *Robot_Reached_Destination, boolean_T *Path_Enable)
{
  Code_Gen_Model_B.Auto_Step_ID = 11U;
  *Path_Enable = true;
  Code_Gen_Model_B.Translation_Speed_k = 0.0;
  Code_Gen_Model_B.Translation_Angle_c = 0.0;
  if (Code_Gen_Model_DW.is_Path_to_Reef_3 == Code_Gen_Model_IN_Set_L4_h) {
    if (*Robot_Reached_Destination) {
      Code_Gen_Model_B.Gamepad_B4_Y_out = false;
      Code_Gen_Model_DW.is_Path_to_Reef_3 = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Left_and_Right = Code_Gen_Mod_IN_Score_at_Reef_3;
      Code_Gen_Model_B.Auto_Step_ID = 12U;
      *Path_Enable = false;
      Code_Gen_Model_B.Align_Right_i = true;
    }

    /* case IN_Timer_to_L4: */
  } else if (Code_Gen_Model_DW.timer_n >= Auto_Path2_Delay_to_L4_Time) {
    Code_Gen_Model_DW.is_Path_to_Reef_3 = Code_Gen_Model_IN_Set_L4_h;
    Code_Gen_Model_B.Gamepad_B4_Y_out = true;
  } else {
    Code_Gen_Model_DW.timer_n += 0.02;
  }
}

/* Function for Chart: '<S26>/Reefscape_Auto_Steps' */
static void Code_Gen_Model_Left_and_Right(const boolean_T
  *Robot_Reached_Destination, const uint8_T *MultiportSwitch, const uint8_T
  *MultiportSwitch1, boolean_T *Path_Enable, const uint8_T *Switch6, const
  uint8_T *Switch9)
{
  switch (Code_Gen_Model_DW.is_Left_and_Right) {
   case Code_Gen_IN_Back_Up_from_Reef_1:
    Code_Gen_Model_B.Auto_Step_ID = 3U;
    *Path_Enable = false;
    Code_Gen_Model_B.Translation_Speed_k = Auto_Speed_Reef;
    Code_Gen_Model_B.Translation_Angle_c = 3.1415926535897931;
    if (*Robot_Reached_Destination) {
      Code_Gen_Model_DW.is_Left_and_Right = IN_Path_to_Coral_Station_1_end_;
      Code_Gen_Model_B.Auto_Step_ID = 20U;
      *Path_Enable = true;
      Code_Gen_Model_B.Path_ID = *MultiportSwitch1;
      Code_Gen_Model_B.Translation_Speed_k = 0.0;
      Code_Gen_Model_B.Translation_Angle_c = 0.0;
      Code_Gen_Model_B.Gamepad_Back_out = true;
    } else {
      Code_Gen_Model_DW.timer_n += 0.02;
    }
    break;

   case Code_Gen_IN_Back_Up_from_Reef_2:
    Code_Gen_Model_B.Auto_Step_ID = 8U;
    *Path_Enable = false;
    Code_Gen_Model_B.Translation_Speed_k = Auto_Speed_Reef;
    Code_Gen_Model_B.Translation_Angle_c = 3.1415926535897931;
    if (Code_Gen_Model_DW.timer_n >= Auto_Backup_Time_Reef) {
      Code_Gen_Model_DW.is_Left_and_Right = Code_IN_Path_to_Coral_Station_2;
      Code_Gen_Model_B.Auto_Step_ID = 9U;
      *Path_Enable = true;
      Code_Gen_Model_B.Path_ID = *Switch9;
      Code_Gen_Model_B.Translation_Speed_k = 0.0;
      Code_Gen_Model_B.Translation_Angle_c = 0.0;
      Code_Gen_Model_B.Gamepad_Start_out = true;
    } else {
      Code_Gen_Model_DW.timer_n += 0.02;
    }
    break;

   case Code_Gen_IN_Back_Up_from_Reef_3:
    Code_Gen_Model_B.Auto_Step_ID = 13U;
    *Path_Enable = false;
    Code_Gen_Model_B.Translation_Speed_k = Auto_Speed_Reef;
    Code_Gen_Model_B.Translation_Angle_c = 3.1415926535897931;
    if (Code_Gen_Model_DW.timer_n >= Auto_Backup_Time_Reef) {
      Code_Gen_Model_DW.is_Left_and_Right = Code_IN_Path_to_Coral_Station_3;
      Code_Gen_Model_B.Auto_Step_ID = 14U;
      *Path_Enable = true;
      Code_Gen_Model_B.Path_ID = *Switch9;
      Code_Gen_Model_B.Translation_Speed_k = 0.0;
      Code_Gen_Model_B.Translation_Angle_c = 0.0;
      Code_Gen_Model_B.Gamepad_Back_out = true;
    } else {
      Code_Gen_Model_DW.timer_n += 0.02;
    }
    break;

   case Code_IN_Path_to_Coral_Station_1:
    Code_Gen_Model_B.Auto_Step_ID = 4U;
    *Path_Enable = true;
    Code_Gen_Model_B.Translation_Speed_k = 0.0;
    Code_Gen_Model_B.Translation_Angle_c = 0.0;
    if (*Robot_Reached_Destination) {
      Code_Gen_Model_B.Gamepad_Start_out = false;
      Code_Gen_Model_DW.is_Left_and_Right = Code_IN_Wait_at_Coral_Station_1;
      Code_Gen_Model_B.Auto_Step_ID = 5U;
      *Path_Enable = false;
      Code_Gen_Model_B.Translation_Speed_k = Auto_Speed_Coral;
      Code_Gen_Model_B.Translation_Angle_c = 3.1415926535897931;
      Code_Gen_Model_B.Gamepad_B4_Y_out = true;
    }
    break;

   case IN_Path_to_Coral_Station_1_end_:
    Code_Gen_Model_B.Auto_Step_ID = 20U;
    *Path_Enable = true;
    Code_Gen_Model_B.Translation_Speed_k = 0.0;
    Code_Gen_Model_B.Translation_Angle_c = 0.0;
    if (*Robot_Reached_Destination) {
      Code_Gen_Model_B.Gamepad_Back_out = false;
      Code_Gen_Model_DW.is_Left_and_Right = Code_Gen_M_IN_Wait_for_Teleop_m;
      Code_Gen_Model_B.Auto_Step_ID = 15U;
      *Path_Enable = false;
    }
    break;

   case Code_IN_Path_to_Coral_Station_2:
    Code_Gen_Model_B.Auto_Step_ID = 9U;
    *Path_Enable = true;
    Code_Gen_Model_B.Translation_Speed_k = 0.0;
    Code_Gen_Model_B.Translation_Angle_c = 0.0;
    if (*Robot_Reached_Destination) {
      Code_Gen_Model_B.Gamepad_Start_out = false;
      Code_Gen_Model_DW.is_Left_and_Right = Code_IN_Wait_at_Coral_Station_2;
      Code_Gen_Model_B.Auto_Step_ID = 10U;
      *Path_Enable = false;
      Code_Gen_Model_B.Translation_Speed_k = Auto_Speed_Coral;
      Code_Gen_Model_B.Translation_Angle_c = 3.1415926535897931;
    }
    break;

   case Code_IN_Path_to_Coral_Station_3:
    Code_Gen_Model_B.Auto_Step_ID = 14U;
    *Path_Enable = true;
    Code_Gen_Model_B.Translation_Speed_k = 0.0;
    Code_Gen_Model_B.Translation_Angle_c = 0.0;
    if (*Robot_Reached_Destination) {
      Code_Gen_Model_B.Gamepad_Back_out = false;
      Code_Gen_Model_DW.is_Left_and_Right = Code_Gen_M_IN_Wait_for_Teleop_m;
      Code_Gen_Model_B.Auto_Step_ID = 15U;
      *Path_Enable = false;
    }
    break;

   case Code_Gen_Mode_IN_Path_to_Reef_1:
    Code_Gen_Model_Path_to_Reef_1(Robot_Reached_Destination, MultiportSwitch,
      Path_Enable);
    break;

   case Code_Gen_Mode_IN_Path_to_Reef_2:
    Code_Gen_Model_B.Auto_Step_ID = 6U;
    *Path_Enable = true;
    Code_Gen_Model_B.Translation_Speed_k = 0.0;
    Code_Gen_Model_B.Translation_Angle_c = 0.0;
    if (Code_Gen_Model_DW.is_Path_to_Reef_2 == Code_Gen_Model_IN_Set_L4_h) {
      if (*Robot_Reached_Destination) {
        Code_Gen_Model_B.Gamepad_B4_Y_out = false;
        Code_Gen_Model_DW.is_Path_to_Reef_2 = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
        Code_Gen_Model_DW.is_Left_and_Right = Code_Gen_Mod_IN_Score_at_Reef_2;
        Code_Gen_Model_B.Auto_Step_ID = 7U;
        *Path_Enable = false;
        Code_Gen_Model_B.Align_Left_d = true;
      }

      /* case IN_Timer_to_L4: */
    } else if (Code_Gen_Model_DW.timer_n >= Auto_Path2_Delay_to_L4_Time) {
      Code_Gen_Model_DW.is_Path_to_Reef_2 = Code_Gen_Model_IN_Set_L4_h;
      Code_Gen_Model_B.Gamepad_B4_Y_out = true;
    } else {
      Code_Gen_Model_DW.timer_n += 0.02;
    }
    break;

   case Code_Gen_Mode_IN_Path_to_Reef_3:
    Code_Gen_Model_Path_to_Reef_3(Robot_Reached_Destination, Path_Enable);
    break;

   case Code_Gen_Mod_IN_Score_at_Reef_1:
    Code_Gen_Model_B.Auto_Step_ID = 2U;
    *Path_Enable = false;
    Code_Gen_Model_B.Translation_Speed_k = 0.0;
    Code_Gen_Model_B.Translation_Angle_c = 0.0;
    if (Code_Gen_Model_B.UnitDelay1_d) {
      Code_Gen_Model_B.Align_Left_d = false;
      Code_Gen_Model_DW.is_Left_and_Right = Code_Gen_IN_Back_Up_from_Reef_1;
      Code_Gen_Model_B.Auto_Step_ID = 3U;
      *Path_Enable = false;
      Code_Gen_Model_B.Translation_Speed_k = Auto_Speed_Reef;
      Code_Gen_Model_B.Translation_Angle_c = 3.1415926535897931;
      Code_Gen_Model_DW.timer_n = 0.0;
    }
    break;

   case Code_Gen_Mod_IN_Score_at_Reef_2:
    Code_Gen_Model_B.Auto_Step_ID = 7U;
    *Path_Enable = false;
    Code_Gen_Model_B.Translation_Speed_k = 0.0;
    Code_Gen_Model_B.Translation_Angle_c = 0.0;
    if (Code_Gen_Model_B.UnitDelay1_d) {
      Code_Gen_Model_B.Align_Left_d = false;
      Code_Gen_Model_DW.is_Left_and_Right = Code_Gen_IN_Back_Up_from_Reef_2;
      Code_Gen_Model_B.Auto_Step_ID = 8U;
      *Path_Enable = false;
      Code_Gen_Model_B.Translation_Speed_k = Auto_Speed_Reef;
      Code_Gen_Model_B.Translation_Angle_c = 3.1415926535897931;
      Code_Gen_Model_DW.timer_n = 0.0;
    }
    break;

   case Code_Gen_Mod_IN_Score_at_Reef_3:
    Code_Gen_Model_B.Auto_Step_ID = 12U;
    *Path_Enable = false;
    Code_Gen_Model_B.Translation_Speed_k = 0.0;
    Code_Gen_Model_B.Translation_Angle_c = 0.0;
    if (Code_Gen_Model_B.UnitDelay1_d) {
      Code_Gen_Model_B.Align_Right_i = false;
      Code_Gen_Model_DW.is_Left_and_Right = Code_Gen_IN_Back_Up_from_Reef_3;
      Code_Gen_Model_B.Auto_Step_ID = 13U;
      *Path_Enable = false;
      Code_Gen_Model_B.Translation_Speed_k = Auto_Speed_Reef;
      Code_Gen_Model_B.Translation_Angle_c = 3.1415926535897931;
      Code_Gen_Model_DW.timer_n = 0.0;
    }
    break;

   case Code_IN_Wait_at_Coral_Station_1:
    Code_Gen_Model_B.Auto_Step_ID = 5U;
    *Path_Enable = false;
    Code_Gen_Model_B.Translation_Speed_k = Auto_Speed_Coral;
    Code_Gen_Model_B.Translation_Angle_c = 3.1415926535897931;
    if (Code_Gen_Model_B.Compare) {
      Code_Gen_Model_B.Gamepad_B4_Y_out = false;
      Code_Gen_Model_DW.is_Left_and_Right = Code_Gen_Mode_IN_Path_to_Reef_2;
      Code_Gen_Model_B.Auto_Step_ID = 6U;
      *Path_Enable = true;
      Code_Gen_Model_B.Path_ID = *Switch6;
      Code_Gen_Model_B.Translation_Speed_k = 0.0;
      Code_Gen_Model_B.Translation_Angle_c = 0.0;
      Code_Gen_Model_DW.is_Path_to_Reef_2 = Code_Gen_Model_IN_Timer_to_L4;
      Code_Gen_Model_DW.timer_n = 0.0;
    }
    break;

   case Code_IN_Wait_at_Coral_Station_2:
    Code_Gen_Model_B.Auto_Step_ID = 10U;
    *Path_Enable = false;
    Code_Gen_Model_B.Translation_Speed_k = Auto_Speed_Coral;
    Code_Gen_Model_B.Translation_Angle_c = 3.1415926535897931;
    if (Code_Gen_Model_B.Compare) {
      Code_Gen_Model_DW.is_Left_and_Right = Code_Gen_Mode_IN_Path_to_Reef_3;
      Code_Gen_Model_B.Auto_Step_ID = 11U;
      *Path_Enable = true;
      Code_Gen_Model_B.Path_ID = *Switch6;
      Code_Gen_Model_B.Translation_Speed_k = 0.0;
      Code_Gen_Model_B.Translation_Angle_c = 0.0;
      Code_Gen_Model_DW.is_Path_to_Reef_3 = Code_Gen_Model_IN_Timer_to_L4;
      Code_Gen_Model_DW.timer_n = 0.0;
    }
    break;

   default:
    /* case IN_Wait_for_Teleop: */
    Code_Gen_Model_B.Auto_Step_ID = 15U;
    *Path_Enable = false;
    Code_Gen_Model_B.Translation_Speed_k = 0.0;
    Code_Gen_Model_B.Translation_Angle_c = 0.0;
    break;
  }
}

/* Function for Chart: '<S29>/Reefscape_Chart' */
static void enter_internal_Coral_Score_Posi(void)
{
  if ((Code_Gen_Model_DW.Set_L1_j) ||
      (Code_Gen_Model_B.FixPtRelationalOperator_nw)) {
    Code_Gen_Model_DW.is_Coral_Score_Position_k = Code_Gen_Model_IN_Level_1;
    Code_Gen_Model_B.State_ID_d = 2.1;
    Code_Gen_Model_B.Set_Coral_Level_j = 1U;
    Code_Gen_Model_B.Elevator_Height_Desired_h = Elevator_Height_L1;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_f = Coral_Arm_Angle_L1;
  } else if ((Code_Gen_Model_DW.Set_L2_b) ||
             (Code_Gen_Model_B.FixPtRelationalOperator_o)) {
    Code_Gen_Model_DW.is_Coral_Score_Position_k = Code_Gen_Model_IN_Level_2;
    Code_Gen_Model_B.State_ID_d = 2.2;
    Code_Gen_Model_B.Set_Coral_Level_j = 2U;
    Code_Gen_Model_B.Elevator_Height_Desired_h = Elevator_Height_L2;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_f = Coral_Arm_Angle_L2;
  } else if ((Code_Gen_Model_DW.Set_L3_f) ||
             (Code_Gen_Model_B.FixPtRelationalOperator_dd)) {
    Code_Gen_Model_DW.is_Coral_Score_Position_k = Code_Gen_Model_IN_Level_3;
    Code_Gen_Model_B.State_ID_d = 2.3;
    Code_Gen_Model_B.Set_Coral_Level_j = 3U;
    Code_Gen_Model_B.Elevator_Height_Desired_h = Elevator_Height_L3;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_f = Coral_Arm_Angle_L3;
  } else if ((Code_Gen_Model_DW.Set_L4_d) ||
             (Code_Gen_Model_B.FixPtRelationalOperator_a)) {
    Code_Gen_Model_DW.is_Coral_Score_Position_k = Code_Gen_Model_IN_Level_4;
    Code_Gen_Model_B.State_ID_d = 2.4;
    Code_Gen_Model_B.Set_Coral_Level_j = 4U;
    Code_Gen_Model_B.Elevator_Height_Desired_h = Elevator_Height_L4;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_f = Coral_Arm_Angle_L4;
  } else {
    Code_Gen_Model_DW.is_Coral_Score_Position_k =
      Code_Gen_IN_Manual_Adjustment_c;
    Code_Gen_Model_B.State_ID_d = 2.5;
    Code_Gen_Model_B.Elevator_Height_Desired_h +=
      Code_Gen_Model_ConstB.DeadZone1 * Elevator_Height_Manual_Gain;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_f += Code_Gen_Model_ConstB.DeadZone
      * Coral_Arm_Manual_Gain;
  }
}

/* Function for Chart: '<S29>/Reefscape_Chart' */
static void Code_Gen_Mode_Algae_Pickup_High(void)
{
  Code_Gen_Model_B.State_ID_d = 4.3;
  Code_Gen_Model_B.Coral_Wheel_DC_a = 0.0;
  if ((Code_Gen_Model_B.FixPtRelationalOperator_oi) &&
      (!Code_Gen_Model_B.Compare_f)) {
    Code_Gen_Model_B.Set_Algae_Level_p = 0U;
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_o =
      Code_Gen_Model_IN_Coral_Pickup;
    Code_Gen_Model_DW.is_Actions_h = Code_Ge_IN_Coral_Pickup_Prepare;
    Code_Gen_Model_B.State_ID_d = 1.0;
    Code_Gen_Model_B.Elevator_Height_Desired_h = Elevator_Height_Prepare;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_f = -90.0;
    Code_Gen_Model_DW.is_Set_Level_n = Code_Gen_Model_IN_None;
    Code_Gen_Model_DW.Set_L1_j = false;
    Code_Gen_Model_DW.Set_L2_b = false;
    Code_Gen_Model_DW.Set_L3_f = false;
    Code_Gen_Model_DW.Set_L4_d = false;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_p4) {
    if (Code_Gen_Model_B.Coral_Arm_Angle_Measured >=
        Coral_Arm_Angle_Start_Thresh) {
      Code_Gen_Model_B.Set_Algae_Level_p = 0U;
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_o =
        Code__IN_Elevator_Height_Bottom;
      Code_Gen_Model_B.State_ID_d = 0.2;
      Code_Gen_Model_B.Elevator_Height_Desired_h = Elevator_Height_Bottom;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_f = Coral_Arm_Angle_Up;
    } else {
      Code_Gen_Model_B.Set_Algae_Level_p = 0U;
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_o =
        C_IN_Elevator_Height_Bottom_pre;
      Code_Gen_Model_B.State_ID_d = 0.1;
      Code_Gen_Model_B.Elevator_Height_Desired_h = Elevator_Height_Prepare;
    }
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_af) {
    Code_Gen_Model_B.Set_Algae_Level_p = 0U;
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_o =
      Code_Gen_Mode_IN_End_Game_Climb;
    Code_Gen_Model_B.State_ID_d = 4.4;
    Code_Gen_Model_B.Elevator_Height_Desired_h = Elevator_Height_End_Game;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_f = Coral_Arm_Angle_Up;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_oe) {
    Code_Gen_Model_B.Set_Algae_Level_p = 0U;
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_o =
      Code_Gen_Model_IN_Algae_Score;
    Code_Gen_Model_B.State_ID_d = 4.1;
    Code_Gen_Model_B.Elevator_Height_Desired_h = Elevator_Height_Algae_Score;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_f = Coral_Arm_Angle_Up;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_e) {
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_o =
      Code_Gen_Mo_IN_Algae_Pickup_Low;
    Code_Gen_Model_B.State_ID_d = 4.2;
    Code_Gen_Model_B.Elevator_Height_Desired_h = Elevator_Height_Algae_Low;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_f = Coral_Arm_Angle_Up;
    Code_Gen_Model_B.Set_Algae_Level_p = 2U;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_lp) {
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_o =
      Code_Gen_M_IN_Algae_Pickup_High;
    Code_Gen_Model_B.Elevator_Height_Desired_h = Elevator_Height_Algae_High;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_f = Coral_Arm_Angle_Up;
    Code_Gen_Model_B.Set_Algae_Level_p = 3U;
  }
}

/* Function for Chart: '<S29>/Reefscape_Chart' */
static void Code_Gen_Model_Algae_Pickup_Low(void)
{
  Code_Gen_Model_B.State_ID_d = 4.2;
  Code_Gen_Model_B.Coral_Wheel_DC_a = 0.0;
  if ((Code_Gen_Model_B.FixPtRelationalOperator_oi) &&
      (!Code_Gen_Model_B.Compare_f)) {
    Code_Gen_Model_B.Set_Algae_Level_p = 0U;
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_o =
      Code_Gen_Model_IN_Coral_Pickup;
    Code_Gen_Model_DW.is_Actions_h = Code_Ge_IN_Coral_Pickup_Prepare;
    Code_Gen_Model_B.State_ID_d = 1.0;
    Code_Gen_Model_B.Elevator_Height_Desired_h = Elevator_Height_Prepare;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_f = -90.0;
    Code_Gen_Model_DW.is_Set_Level_n = Code_Gen_Model_IN_None;
    Code_Gen_Model_DW.Set_L1_j = false;
    Code_Gen_Model_DW.Set_L2_b = false;
    Code_Gen_Model_DW.Set_L3_f = false;
    Code_Gen_Model_DW.Set_L4_d = false;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_p4) {
    if (Code_Gen_Model_B.Coral_Arm_Angle_Measured >=
        Coral_Arm_Angle_Start_Thresh) {
      Code_Gen_Model_B.Set_Algae_Level_p = 0U;
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_o =
        Code__IN_Elevator_Height_Bottom;
      Code_Gen_Model_B.State_ID_d = 0.2;
      Code_Gen_Model_B.Elevator_Height_Desired_h = Elevator_Height_Bottom;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_f = Coral_Arm_Angle_Up;
    } else {
      Code_Gen_Model_B.Set_Algae_Level_p = 0U;
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_o =
        C_IN_Elevator_Height_Bottom_pre;
      Code_Gen_Model_B.State_ID_d = 0.1;
      Code_Gen_Model_B.Elevator_Height_Desired_h = Elevator_Height_Prepare;
    }
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_af) {
    Code_Gen_Model_B.Set_Algae_Level_p = 0U;
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_o =
      Code_Gen_Mode_IN_End_Game_Climb;
    Code_Gen_Model_B.State_ID_d = 4.4;
    Code_Gen_Model_B.Elevator_Height_Desired_h = Elevator_Height_End_Game;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_f = Coral_Arm_Angle_Up;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_oe) {
    Code_Gen_Model_B.Set_Algae_Level_p = 0U;
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_o =
      Code_Gen_Model_IN_Algae_Score;
    Code_Gen_Model_B.State_ID_d = 4.1;
    Code_Gen_Model_B.Elevator_Height_Desired_h = Elevator_Height_Algae_Score;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_f = Coral_Arm_Angle_Up;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_e) {
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_o =
      Code_Gen_Mo_IN_Algae_Pickup_Low;
    Code_Gen_Model_B.Elevator_Height_Desired_h = Elevator_Height_Algae_Low;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_f = Coral_Arm_Angle_Up;
    Code_Gen_Model_B.Set_Algae_Level_p = 2U;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_lp) {
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_o =
      Code_Gen_M_IN_Algae_Pickup_High;
    Code_Gen_Model_B.State_ID_d = 4.3;
    Code_Gen_Model_B.Elevator_Height_Desired_h = Elevator_Height_Algae_High;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_f = Coral_Arm_Angle_Up;
    Code_Gen_Model_B.Set_Algae_Level_p = 3U;
  }
}

/* Function for Chart: '<S29>/Reefscape_Chart' */
static void Code__exit_internal_Coral_Eject(void)
{
  if (Code_Gen_Model_DW.is_Coral_Eject_n == Code_Gen_Model_IN_Stop) {
    Code_Gen_Model_B.Coral_Score_j = false;
    Code_Gen_Model_DW.is_Coral_Eject_n = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
  } else {
    Code_Gen_Model_DW.is_Level_2_c = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_DW.is_Level_3_l = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_DW.is_Level_4_Teleop_l = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_DW.is_Coral_Eject_n = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
  }
}

/* Function for Chart: '<S29>/Reefscape_Chart' */
static void Code_Gen_Model_Coral_Eject(void)
{
  if ((Code_Gen_Model_B.FixPtRelationalOperator_oi) &&
      (!Code_Gen_Model_B.Compare_f)) {
    Code__exit_internal_Coral_Eject();
    Code_Gen_Model_DW.is_Coral_n = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_B.Set_Coral_Level_j = 0U;
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_o =
      Code_Gen_Model_IN_Coral_Pickup;
    Code_Gen_Model_DW.is_Actions_h = Code_Ge_IN_Coral_Pickup_Prepare;
    Code_Gen_Model_B.State_ID_d = 1.0;
    Code_Gen_Model_B.Elevator_Height_Desired_h = Elevator_Height_Prepare;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_f = -90.0;
    Code_Gen_Model_B.Coral_Wheel_DC_a = 0.0;
    Code_Gen_Model_DW.is_Set_Level_n = Code_Gen_Model_IN_None;
    Code_Gen_Model_DW.Set_L1_j = false;
    Code_Gen_Model_DW.Set_L2_b = false;
    Code_Gen_Model_DW.Set_L3_f = false;
    Code_Gen_Model_DW.Set_L4_d = false;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_p4) {
    if (Code_Gen_Model_B.Coral_Arm_Angle_Measured >=
        Coral_Arm_Angle_Start_Thresh) {
      Code__exit_internal_Coral_Eject();
      Code_Gen_Model_DW.is_Coral_n = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_B.Set_Coral_Level_j = 0U;
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_o =
        Code__IN_Elevator_Height_Bottom;
      Code_Gen_Model_B.State_ID_d = 0.2;
      Code_Gen_Model_B.Elevator_Height_Desired_h = Elevator_Height_Bottom;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_f = Coral_Arm_Angle_Up;
      Code_Gen_Model_B.Coral_Wheel_DC_a = 0.0;
    } else {
      Code__exit_internal_Coral_Eject();
      Code_Gen_Model_DW.is_Coral_n = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_B.Set_Coral_Level_j = 0U;
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_o =
        C_IN_Elevator_Height_Bottom_pre;
      Code_Gen_Model_B.State_ID_d = 0.1;
      Code_Gen_Model_B.Elevator_Height_Desired_h = Elevator_Height_Prepare;
      Code_Gen_Model_B.Coral_Wheel_DC_a = 0.0;
    }
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_af) {
    Code__exit_internal_Coral_Eject();
    Code_Gen_Model_DW.is_Coral_n = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_B.Set_Coral_Level_j = 0U;
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_o =
      Code_Gen_Mode_IN_End_Game_Climb;
    Code_Gen_Model_B.State_ID_d = 4.4;
    Code_Gen_Model_B.Elevator_Height_Desired_h = Elevator_Height_End_Game;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_f = Coral_Arm_Angle_Up;
    Code_Gen_Model_B.Coral_Wheel_DC_a = 0.0;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_oe) {
    Code__exit_internal_Coral_Eject();
    Code_Gen_Model_DW.is_Coral_n = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_B.Set_Coral_Level_j = 0U;
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_o =
      Code_Gen_Model_IN_Algae_Score;
    Code_Gen_Model_B.State_ID_d = 4.1;
    Code_Gen_Model_B.Elevator_Height_Desired_h = Elevator_Height_Algae_Score;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_f = Coral_Arm_Angle_Up;
    Code_Gen_Model_B.Coral_Wheel_DC_a = 0.0;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_e) {
    Code__exit_internal_Coral_Eject();
    Code_Gen_Model_DW.is_Coral_n = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_B.Set_Coral_Level_j = 0U;
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_o =
      Code_Gen_Mo_IN_Algae_Pickup_Low;
    Code_Gen_Model_B.State_ID_d = 4.2;
    Code_Gen_Model_B.Elevator_Height_Desired_h = Elevator_Height_Algae_Low;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_f = Coral_Arm_Angle_Up;
    Code_Gen_Model_B.Coral_Wheel_DC_a = 0.0;
    Code_Gen_Model_B.Set_Algae_Level_p = 2U;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_lp) {
    Code__exit_internal_Coral_Eject();
    Code_Gen_Model_DW.is_Coral_n = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_B.Set_Coral_Level_j = 0U;
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_o =
      Code_Gen_M_IN_Algae_Pickup_High;
    Code_Gen_Model_B.State_ID_d = 4.3;
    Code_Gen_Model_B.Elevator_Height_Desired_h = Elevator_Height_Algae_High;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_f = Coral_Arm_Angle_Up;
    Code_Gen_Model_B.Coral_Wheel_DC_a = 0.0;
    Code_Gen_Model_B.Set_Algae_Level_p = 3U;
  } else {
    switch (Code_Gen_Model_DW.is_Coral_Eject_n) {
     case Code_Gen_Model_IN_Eject:
      Code_Gen_Model_B.State_ID_d = 3.6;
      Code_Gen_Model_B.Coral_Wheel_DC_a = Coral_Motor_DC_Eject;
      if (Code_Gen_Model_DW.timer_n2 >= Coral_Eject_Time) {
        Code_Gen_Model_DW.is_Coral_Eject_n = Code_Gen_Model_IN_Stop;
        Code_Gen_Model_B.State_ID_d = 3.7;
        Code_Gen_Model_B.Coral_Wheel_DC_a = 0.0;
        Code_Gen_Model_B.Coral_Score_j = true;
      } else {
        Code_Gen_Model_DW.timer_n2 += 0.02;
      }
      break;

     case Code_Gen_Model_IN_Level_2:
      Code_Gen_Model_B.State_ID_d = 3.2;
      if ((!Code_Gen_Model_B.Compare) ||
          (Code_Gen_Model_B.FixPtRelationalOperator_dp)) {
        Code_Gen_Model_DW.is_Level_2_c = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
        Code_Gen_Model_DW.is_Coral_Eject_n = Code_Gen_Model_IN_Eject;
        Code_Gen_Model_B.State_ID_d = 3.6;
        Code_Gen_Model_B.Coral_Wheel_DC_a = Coral_Motor_DC_Eject;
        Code_Gen_Model_DW.timer_n2 = 0.0;
      } else if (Code_Gen_Model_DW.is_Level_2_c ==
                 Code_Gen_IN_Auto_Lower_Elevator) {
        if (Code_Gen_Model_B.Elevator_Height_Measured <=
            Elevator_Height_L2_Eject) {
          Code_Gen_Model_DW.is_Level_2_c = Code_Gen_M_IN_Manual_Adjustment;
          Code_Gen_Model_B.Elevator_Height_Desired_h +=
            Code_Gen_Model_ConstB.DeadZone1 * Elevator_Height_Manual_Gain;
          Code_Gen_Model_B.Coral_Arm_Angle_Desired_f +=
            Code_Gen_Model_ConstB.DeadZone * Coral_Arm_Manual_Gain;
        } else {
          Code_Gen_Model_B.Elevator_Height_Desired_h +=
            Elevator_Height_Coral_Score_Lower_Rate;
        }

        /* case IN_Manual_Adjustment: */
      } else if (Code_Gen_Model_B.UnitDelay_b) {
        Code_Gen_Model_DW.is_Level_2_c = Code_Gen_IN_Auto_Lower_Elevator;
        Code_Gen_Model_B.Elevator_Height_Desired_h +=
          Elevator_Height_Coral_Score_Lower_Rate;
      } else {
        Code_Gen_Model_B.Elevator_Height_Desired_h +=
          Code_Gen_Model_ConstB.DeadZone1 * Elevator_Height_Manual_Gain;
        Code_Gen_Model_B.Coral_Arm_Angle_Desired_f +=
          Code_Gen_Model_ConstB.DeadZone * Coral_Arm_Manual_Gain;
      }
      break;

     case Code_Gen_Model_IN_Level_3:
      Code_Gen_Model_B.State_ID_d = 3.3;
      if ((!Code_Gen_Model_B.Compare) ||
          (Code_Gen_Model_B.FixPtRelationalOperator_dp)) {
        Code_Gen_Model_DW.is_Level_3_l = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
        Code_Gen_Model_DW.is_Coral_Eject_n = Code_Gen_Model_IN_Eject;
        Code_Gen_Model_B.State_ID_d = 3.6;
        Code_Gen_Model_B.Coral_Wheel_DC_a = Coral_Motor_DC_Eject;
        Code_Gen_Model_DW.timer_n2 = 0.0;
      } else if (Code_Gen_Model_DW.is_Level_3_l ==
                 Code_Gen_IN_Auto_Lower_Elevator) {
        if (Code_Gen_Model_B.Elevator_Height_Measured <=
            Elevator_Height_L3_Eject) {
          Code_Gen_Model_DW.is_Level_3_l = Code_Gen_M_IN_Manual_Adjustment;
          Code_Gen_Model_B.Elevator_Height_Desired_h +=
            Code_Gen_Model_ConstB.DeadZone1 * Elevator_Height_Manual_Gain;
          Code_Gen_Model_B.Coral_Arm_Angle_Desired_f +=
            Code_Gen_Model_ConstB.DeadZone * Coral_Arm_Manual_Gain;
        } else {
          Code_Gen_Model_B.Elevator_Height_Desired_h +=
            Elevator_Height_Coral_Score_Lower_Rate;
        }

        /* case IN_Manual_Adjustment: */
      } else if (Code_Gen_Model_B.UnitDelay_b) {
        Code_Gen_Model_DW.is_Level_3_l = Code_Gen_IN_Auto_Lower_Elevator;
        Code_Gen_Model_B.Elevator_Height_Desired_h +=
          Elevator_Height_Coral_Score_Lower_Rate;
      } else {
        Code_Gen_Model_B.Elevator_Height_Desired_h +=
          Code_Gen_Model_ConstB.DeadZone1 * Elevator_Height_Manual_Gain;
        Code_Gen_Model_B.Coral_Arm_Angle_Desired_f +=
          Code_Gen_Model_ConstB.DeadZone * Coral_Arm_Manual_Gain;
      }
      break;

     case Code_Gen_Model_IN_Level_4_Auto:
      Code_Gen_Model_B.State_ID_d = 3.5;
      if ((!Code_Gen_Model_B.Compare) ||
          (Code_Gen_Model_B.Coral_Arm_Angle_Measured <
           Coral_Arm_Angle_L4_Eject_Auto)) {
        Code_Gen_Model_DW.is_Coral_Eject_n = Code_Gen_Model_IN_Eject;
        Code_Gen_Model_B.State_ID_d = 3.6;
        Code_Gen_Model_B.Coral_Wheel_DC_a = Coral_Motor_DC_Eject;
        Code_Gen_Model_DW.timer_n2 = 0.0;
      } else {
        Code_Gen_Model_B.Coral_Arm_Angle_Desired_f +=
          Coral_Arm_Angle_Coral_Score_Lower_Rate;
      }
      break;

     case Code_Gen_Mode_IN_Level_4_Teleop:
      Code_Gen_Model_B.State_ID_d = 3.4;
      if ((!Code_Gen_Model_B.Compare) ||
          (Code_Gen_Model_B.FixPtRelationalOperator_dp)) {
        Code_Gen_Model_DW.is_Level_4_Teleop_l = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
        Code_Gen_Model_DW.is_Coral_Eject_n = Code_Gen_Model_IN_Eject;
        Code_Gen_Model_B.State_ID_d = 3.6;
        Code_Gen_Model_B.Coral_Wheel_DC_a = Coral_Motor_DC_Eject;
        Code_Gen_Model_DW.timer_n2 = 0.0;
      } else if (Code_Gen_Model_DW.is_Level_4_Teleop_l ==
                 Code_Gen_Mode_IN_Auto_Lower_Arm) {
        if (Code_Gen_Model_B.Coral_Arm_Angle_Measured <
            Coral_Arm_Angle_L4_Eject_Teleop) {
          Code_Gen_Model_DW.is_Level_4_Teleop_l =
            Code_Gen_M_IN_Manual_Adjustment;
          Code_Gen_Model_B.Elevator_Height_Desired_h +=
            Code_Gen_Model_ConstB.DeadZone1 * Elevator_Height_Manual_Gain;
          Code_Gen_Model_B.Coral_Arm_Angle_Desired_f +=
            Code_Gen_Model_ConstB.DeadZone * Coral_Arm_Manual_Gain;
        } else {
          Code_Gen_Model_B.Coral_Arm_Angle_Desired_f +=
            Coral_Arm_Angle_Coral_Score_Lower_Rate;
        }

        /* case IN_Manual_Adjustment: */
      } else if (Code_Gen_Model_B.UnitDelay_b) {
        Code_Gen_Model_DW.is_Level_4_Teleop_l = Code_Gen_Mode_IN_Auto_Lower_Arm;
        Code_Gen_Model_B.Coral_Arm_Angle_Desired_f +=
          Coral_Arm_Angle_Coral_Score_Lower_Rate;
      } else {
        Code_Gen_Model_B.Elevator_Height_Desired_h +=
          Code_Gen_Model_ConstB.DeadZone1 * Elevator_Height_Manual_Gain;
        Code_Gen_Model_B.Coral_Arm_Angle_Desired_f +=
          Code_Gen_Model_ConstB.DeadZone * Coral_Arm_Manual_Gain;
      }
      break;

     default:
      /* case IN_Stop: */
      Code_Gen_Model_B.State_ID_d = 3.7;
      Code_Gen_Model_B.Coral_Wheel_DC_a = 0.0;
      break;
    }
  }
}

/* Function for Chart: '<S29>/Reefscape_Chart' */
static void Code_Gen_Model_Coral(void)
{
  if (Code_Gen_Model_DW.is_Coral_n == Code_Gen_Model_IN_Coral_Eject) {
    Code_Gen_Model_Coral_Eject();

    /* case IN_Coral_Score_Position: */
  } else if ((((Code_Gen_Model_B.FixPtRelationalOperator_nw) ||
               (Code_Gen_Model_B.FixPtRelationalOperator_o)) ||
              (Code_Gen_Model_B.FixPtRelationalOperator_dd)) ||
             (Code_Gen_Model_B.FixPtRelationalOperator_a)) {
    Code_Gen_Model_DW.Set_L1_j = false;
    Code_Gen_Model_DW.Set_L2_b = false;
    Code_Gen_Model_DW.Set_L3_f = false;
    Code_Gen_Model_DW.Set_L4_d = false;
    Code_Gen_Model_DW.is_Coral_n = Code_Ge_IN_Coral_Score_Position;
    enter_internal_Coral_Score_Posi();
  } else if ((Code_Gen_Model_B.FixPtRelationalOperator_dp) ||
             (Code_Gen_Model_DW.timer_robot_target_g >= AT_On_Target_Time)) {
    Code_Gen_Model_DW.is_Coral_Score_Position_k =
      Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_DW.is_Coral_n = Code_Gen_Model_IN_Coral_Eject;
    if (Code_Gen_Model_DW.Set_L2_b) {
      Code_Gen_Model_DW.is_Coral_Eject_n = Code_Gen_Model_IN_Level_2;
      Code_Gen_Model_B.State_ID_d = 3.2;
      Code_Gen_Model_DW.is_Level_2_c = Code_Gen_IN_Auto_Lower_Elevator;
      Code_Gen_Model_B.Elevator_Height_Desired_h +=
        Elevator_Height_Coral_Score_Lower_Rate;
    } else if (Code_Gen_Model_DW.Set_L3_f) {
      Code_Gen_Model_DW.is_Coral_Eject_n = Code_Gen_Model_IN_Level_3;
      Code_Gen_Model_B.State_ID_d = 3.3;
      Code_Gen_Model_DW.is_Level_3_l = Code_Gen_IN_Auto_Lower_Elevator;
      Code_Gen_Model_B.Elevator_Height_Desired_h +=
        Elevator_Height_Coral_Score_Lower_Rate;
    } else if (Code_Gen_Model_DW.Set_L4_d) {
      Code_Gen_Model_DW.is_Coral_Eject_n = Code_Gen_Model_IN_Level_4_Auto;
      Code_Gen_Model_B.State_ID_d = 3.5;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_f +=
        Coral_Arm_Angle_Coral_Score_Lower_Rate;
    } else {
      Code_Gen_Model_DW.is_Coral_Eject_n = Code_Gen_Model_IN_Eject;
      Code_Gen_Model_B.State_ID_d = 3.6;
      Code_Gen_Model_B.Coral_Wheel_DC_a = Coral_Motor_DC_Eject;
      Code_Gen_Model_DW.timer_n2 = 0.0;
    }
  } else {
    switch (Code_Gen_Model_DW.is_Coral_Score_Position_k) {
     case Code_Gen_Model_IN_Level_1:
      Code_Gen_Model_B.State_ID_d = 2.1;
      if ((Code_Gen_Model_ConstB.DeadZone1 != 0.0) ||
          (Code_Gen_Model_ConstB.DeadZone != 0.0)) {
        Code_Gen_Model_DW.is_Coral_Score_Position_k =
          Code_Gen_IN_Manual_Adjustment_c;
        Code_Gen_Model_B.State_ID_d = 2.5;
        Code_Gen_Model_B.Elevator_Height_Desired_h +=
          Code_Gen_Model_ConstB.DeadZone1 * Elevator_Height_Manual_Gain;
        Code_Gen_Model_B.Coral_Arm_Angle_Desired_f +=
          Code_Gen_Model_ConstB.DeadZone * Coral_Arm_Manual_Gain;
      }
      break;

     case Code_Gen_Model_IN_Level_2:
      Code_Gen_Model_B.State_ID_d = 2.2;
      if ((Code_Gen_Model_ConstB.DeadZone1 != 0.0) ||
          (Code_Gen_Model_ConstB.DeadZone != 0.0)) {
        Code_Gen_Model_DW.is_Coral_Score_Position_k =
          Code_Gen_IN_Manual_Adjustment_c;
        Code_Gen_Model_B.State_ID_d = 2.5;
        Code_Gen_Model_B.Elevator_Height_Desired_h +=
          Code_Gen_Model_ConstB.DeadZone1 * Elevator_Height_Manual_Gain;
        Code_Gen_Model_B.Coral_Arm_Angle_Desired_f +=
          Code_Gen_Model_ConstB.DeadZone * Coral_Arm_Manual_Gain;
      }
      break;

     case Code_Gen_Model_IN_Level_3:
      Code_Gen_Model_B.State_ID_d = 2.3;
      if ((Code_Gen_Model_ConstB.DeadZone1 != 0.0) ||
          (Code_Gen_Model_ConstB.DeadZone != 0.0)) {
        Code_Gen_Model_DW.is_Coral_Score_Position_k =
          Code_Gen_IN_Manual_Adjustment_c;
        Code_Gen_Model_B.State_ID_d = 2.5;
        Code_Gen_Model_B.Elevator_Height_Desired_h +=
          Code_Gen_Model_ConstB.DeadZone1 * Elevator_Height_Manual_Gain;
        Code_Gen_Model_B.Coral_Arm_Angle_Desired_f +=
          Code_Gen_Model_ConstB.DeadZone * Coral_Arm_Manual_Gain;
      }
      break;

     case Code_Gen_Model_IN_Level_4:
      Code_Gen_Model_B.State_ID_d = 2.4;
      if ((Code_Gen_Model_ConstB.DeadZone1 != 0.0) ||
          (Code_Gen_Model_ConstB.DeadZone != 0.0)) {
        Code_Gen_Model_DW.is_Coral_Score_Position_k =
          Code_Gen_IN_Manual_Adjustment_c;
        Code_Gen_Model_B.State_ID_d = 2.5;
        Code_Gen_Model_B.Elevator_Height_Desired_h +=
          Code_Gen_Model_ConstB.DeadZone1 * Elevator_Height_Manual_Gain;
        Code_Gen_Model_B.Coral_Arm_Angle_Desired_f +=
          Code_Gen_Model_ConstB.DeadZone * Coral_Arm_Manual_Gain;
      }
      break;

     default:
      /* case IN_Manual_Adjustment: */
      Code_Gen_Model_B.State_ID_d = 2.5;
      if (!Code_Gen_Model_B.Compare) {
        Code_Gen_Model_DW.is_Coral_Score_Position_k =
          Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
        Code_Gen_Model_DW.is_Coral_n = Code_Gen_Model_IN_Coral_Eject;
        Code_Gen_Model_DW.is_Coral_Eject_n = Code_Gen_Model_IN_Eject;
        Code_Gen_Model_B.State_ID_d = 3.6;
        Code_Gen_Model_B.Coral_Wheel_DC_a = Coral_Motor_DC_Eject;
        Code_Gen_Model_DW.timer_n2 = 0.0;
      } else {
        Code_Gen_Model_B.Elevator_Height_Desired_h +=
          Code_Gen_Model_ConstB.DeadZone1 * Elevator_Height_Manual_Gain;
        Code_Gen_Model_B.Coral_Arm_Angle_Desired_f +=
          Code_Gen_Model_ConstB.DeadZone * Coral_Arm_Manual_Gain;
      }
      break;
    }
  }
}

/* Function for Chart: '<S29>/Reefscape_Chart' */
static void Code_exit_internal_Coral_Pickup(void)
{
  Code_Gen_Model_DW.is_Set_Level_n = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
  if (Code_Gen_Model_DW.is_Actions_h == Code_IN_Coral_Pickup_Lower_Wait) {
    Code_Gen_Model_B.Coral_Pickup_Lower_Wait_State_m = false;
    Code_Gen_Model_DW.is_Actions_h = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
  } else {
    Code_Gen_Model_DW.is_Actions_h = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
  }
}

/* Function for Chart: '<S29>/Reefscape_Chart' */
static void Code_Gen_Model_Set_Level(void)
{
  switch (Code_Gen_Model_DW.is_Set_Level_n) {
   case Code_Gen_Model_IN_L1:
    if (((Code_Gen_Model_B.FixPtRelationalOperator_o) ||
         (Code_Gen_Model_B.FixPtRelationalOperator_dd)) ||
        (Code_Gen_Model_B.FixPtRelationalOperator_a)) {
      if (Code_Gen_Model_B.FixPtRelationalOperator_nw) {
        Code_Gen_Model_DW.is_Set_Level_n = Code_Gen_Model_IN_L1;
        Code_Gen_Model_DW.Set_L1_j = true;
        Code_Gen_Model_DW.Set_L2_b = false;
        Code_Gen_Model_DW.Set_L3_f = false;
        Code_Gen_Model_DW.Set_L4_d = false;
      } else if (Code_Gen_Model_B.FixPtRelationalOperator_o) {
        Code_Gen_Model_DW.is_Set_Level_n = Code_Gen_Model_IN_L2;
        Code_Gen_Model_DW.Set_L1_j = false;
        Code_Gen_Model_DW.Set_L2_b = true;
        Code_Gen_Model_DW.Set_L3_f = false;
        Code_Gen_Model_DW.Set_L4_d = false;
      } else if (Code_Gen_Model_B.FixPtRelationalOperator_dd) {
        Code_Gen_Model_DW.is_Set_Level_n = Code_Gen_Model_IN_L3;
        Code_Gen_Model_DW.Set_L1_j = false;
        Code_Gen_Model_DW.Set_L2_b = false;
        Code_Gen_Model_DW.Set_L3_f = true;
        Code_Gen_Model_DW.Set_L4_d = false;
      } else if (Code_Gen_Model_B.FixPtRelationalOperator_a) {
        Code_Gen_Model_DW.is_Set_Level_n = Code_Gen_Model_IN_L4;
        Code_Gen_Model_DW.Set_L1_j = false;
        Code_Gen_Model_DW.Set_L2_b = false;
        Code_Gen_Model_DW.Set_L3_f = false;
        Code_Gen_Model_DW.Set_L4_d = true;
      }
    }
    break;

   case Code_Gen_Model_IN_L2:
    if (((Code_Gen_Model_B.FixPtRelationalOperator_nw) ||
         (Code_Gen_Model_B.FixPtRelationalOperator_dd)) ||
        (Code_Gen_Model_B.FixPtRelationalOperator_a)) {
      if (Code_Gen_Model_B.FixPtRelationalOperator_nw) {
        Code_Gen_Model_DW.is_Set_Level_n = Code_Gen_Model_IN_L1;
        Code_Gen_Model_DW.Set_L1_j = true;
        Code_Gen_Model_DW.Set_L2_b = false;
        Code_Gen_Model_DW.Set_L3_f = false;
        Code_Gen_Model_DW.Set_L4_d = false;
      } else if (Code_Gen_Model_B.FixPtRelationalOperator_o) {
        Code_Gen_Model_DW.is_Set_Level_n = Code_Gen_Model_IN_L2;
        Code_Gen_Model_DW.Set_L1_j = false;
        Code_Gen_Model_DW.Set_L2_b = true;
        Code_Gen_Model_DW.Set_L3_f = false;
        Code_Gen_Model_DW.Set_L4_d = false;
      } else if (Code_Gen_Model_B.FixPtRelationalOperator_dd) {
        Code_Gen_Model_DW.is_Set_Level_n = Code_Gen_Model_IN_L3;
        Code_Gen_Model_DW.Set_L1_j = false;
        Code_Gen_Model_DW.Set_L2_b = false;
        Code_Gen_Model_DW.Set_L3_f = true;
        Code_Gen_Model_DW.Set_L4_d = false;
      } else if (Code_Gen_Model_B.FixPtRelationalOperator_a) {
        Code_Gen_Model_DW.is_Set_Level_n = Code_Gen_Model_IN_L4;
        Code_Gen_Model_DW.Set_L1_j = false;
        Code_Gen_Model_DW.Set_L2_b = false;
        Code_Gen_Model_DW.Set_L3_f = false;
        Code_Gen_Model_DW.Set_L4_d = true;
      }
    }
    break;

   case Code_Gen_Model_IN_L3:
    if (((Code_Gen_Model_B.FixPtRelationalOperator_nw) ||
         (Code_Gen_Model_B.FixPtRelationalOperator_o)) ||
        (Code_Gen_Model_B.FixPtRelationalOperator_a)) {
      if (Code_Gen_Model_B.FixPtRelationalOperator_nw) {
        Code_Gen_Model_DW.is_Set_Level_n = Code_Gen_Model_IN_L1;
        Code_Gen_Model_DW.Set_L1_j = true;
        Code_Gen_Model_DW.Set_L2_b = false;
        Code_Gen_Model_DW.Set_L3_f = false;
        Code_Gen_Model_DW.Set_L4_d = false;
      } else if (Code_Gen_Model_B.FixPtRelationalOperator_o) {
        Code_Gen_Model_DW.is_Set_Level_n = Code_Gen_Model_IN_L2;
        Code_Gen_Model_DW.Set_L1_j = false;
        Code_Gen_Model_DW.Set_L2_b = true;
        Code_Gen_Model_DW.Set_L3_f = false;
        Code_Gen_Model_DW.Set_L4_d = false;
      } else if (Code_Gen_Model_B.FixPtRelationalOperator_dd) {
        Code_Gen_Model_DW.is_Set_Level_n = Code_Gen_Model_IN_L3;
        Code_Gen_Model_DW.Set_L1_j = false;
        Code_Gen_Model_DW.Set_L2_b = false;
        Code_Gen_Model_DW.Set_L3_f = true;
        Code_Gen_Model_DW.Set_L4_d = false;
      } else if (Code_Gen_Model_B.FixPtRelationalOperator_a) {
        Code_Gen_Model_DW.is_Set_Level_n = Code_Gen_Model_IN_L4;
        Code_Gen_Model_DW.Set_L1_j = false;
        Code_Gen_Model_DW.Set_L2_b = false;
        Code_Gen_Model_DW.Set_L3_f = false;
        Code_Gen_Model_DW.Set_L4_d = true;
      }
    }
    break;

   case Code_Gen_Model_IN_L4:
    if (((Code_Gen_Model_B.FixPtRelationalOperator_nw) ||
         (Code_Gen_Model_B.FixPtRelationalOperator_o)) ||
        (Code_Gen_Model_B.FixPtRelationalOperator_dd)) {
      if (Code_Gen_Model_B.FixPtRelationalOperator_nw) {
        Code_Gen_Model_DW.is_Set_Level_n = Code_Gen_Model_IN_L1;
        Code_Gen_Model_DW.Set_L1_j = true;
        Code_Gen_Model_DW.Set_L2_b = false;
        Code_Gen_Model_DW.Set_L3_f = false;
        Code_Gen_Model_DW.Set_L4_d = false;
      } else if (Code_Gen_Model_B.FixPtRelationalOperator_o) {
        Code_Gen_Model_DW.is_Set_Level_n = Code_Gen_Model_IN_L2;
        Code_Gen_Model_DW.Set_L1_j = false;
        Code_Gen_Model_DW.Set_L2_b = true;
        Code_Gen_Model_DW.Set_L3_f = false;
        Code_Gen_Model_DW.Set_L4_d = false;
      } else if (Code_Gen_Model_B.FixPtRelationalOperator_dd) {
        Code_Gen_Model_DW.is_Set_Level_n = Code_Gen_Model_IN_L3;
        Code_Gen_Model_DW.Set_L1_j = false;
        Code_Gen_Model_DW.Set_L2_b = false;
        Code_Gen_Model_DW.Set_L3_f = true;
        Code_Gen_Model_DW.Set_L4_d = false;
      } else if (Code_Gen_Model_B.FixPtRelationalOperator_a) {
        Code_Gen_Model_DW.is_Set_Level_n = Code_Gen_Model_IN_L4;
        Code_Gen_Model_DW.Set_L1_j = false;
        Code_Gen_Model_DW.Set_L2_b = false;
        Code_Gen_Model_DW.Set_L3_f = false;
        Code_Gen_Model_DW.Set_L4_d = true;
      }
    }
    break;

   default:
    /* case IN_None: */
    if (Code_Gen_Model_B.FixPtRelationalOperator_nw) {
      Code_Gen_Model_DW.is_Set_Level_n = Code_Gen_Model_IN_L1;
      Code_Gen_Model_DW.Set_L1_j = true;
      Code_Gen_Model_DW.Set_L2_b = false;
      Code_Gen_Model_DW.Set_L3_f = false;
      Code_Gen_Model_DW.Set_L4_d = false;
    } else if (Code_Gen_Model_B.FixPtRelationalOperator_o) {
      Code_Gen_Model_DW.is_Set_Level_n = Code_Gen_Model_IN_L2;
      Code_Gen_Model_DW.Set_L1_j = false;
      Code_Gen_Model_DW.Set_L2_b = true;
      Code_Gen_Model_DW.Set_L3_f = false;
      Code_Gen_Model_DW.Set_L4_d = false;
    } else if (Code_Gen_Model_B.FixPtRelationalOperator_dd) {
      Code_Gen_Model_DW.is_Set_Level_n = Code_Gen_Model_IN_L3;
      Code_Gen_Model_DW.Set_L1_j = false;
      Code_Gen_Model_DW.Set_L2_b = false;
      Code_Gen_Model_DW.Set_L3_f = true;
      Code_Gen_Model_DW.Set_L4_d = false;
    } else if (Code_Gen_Model_B.FixPtRelationalOperator_a) {
      Code_Gen_Model_DW.is_Set_Level_n = Code_Gen_Model_IN_L4;
      Code_Gen_Model_DW.Set_L1_j = false;
      Code_Gen_Model_DW.Set_L2_b = false;
      Code_Gen_Model_DW.Set_L3_f = false;
      Code_Gen_Model_DW.Set_L4_d = true;
    }
    break;
  }
}

/* Function for Chart: '<S29>/Reefscape_Chart' */
static void Code_Gen_Model_Coral_Pickup(void)
{
  if ((Code_Gen_Model_B.FixPtRelationalOperator_oi) &&
      (!Code_Gen_Model_B.Compare_f)) {
    Code_exit_internal_Coral_Pickup();
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_o =
      Code_Gen_Model_IN_Coral_Pickup;
    Code_Gen_Model_DW.is_Actions_h = Code_Ge_IN_Coral_Pickup_Prepare;
    Code_Gen_Model_B.State_ID_d = 1.0;
    Code_Gen_Model_B.Elevator_Height_Desired_h = Elevator_Height_Prepare;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_f = -90.0;
    Code_Gen_Model_B.Coral_Wheel_DC_a = 0.0;
    Code_Gen_Model_DW.is_Set_Level_n = Code_Gen_Model_IN_None;
    Code_Gen_Model_DW.Set_L1_j = false;
    Code_Gen_Model_DW.Set_L2_b = false;
    Code_Gen_Model_DW.Set_L3_f = false;
    Code_Gen_Model_DW.Set_L4_d = false;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_p4) {
    if (Code_Gen_Model_B.Coral_Arm_Angle_Measured >=
        Coral_Arm_Angle_Start_Thresh) {
      Code_exit_internal_Coral_Pickup();
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_o =
        Code__IN_Elevator_Height_Bottom;
      Code_Gen_Model_B.State_ID_d = 0.2;
      Code_Gen_Model_B.Elevator_Height_Desired_h = Elevator_Height_Bottom;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_f = Coral_Arm_Angle_Up;
      Code_Gen_Model_B.Coral_Wheel_DC_a = 0.0;
    } else {
      Code_exit_internal_Coral_Pickup();
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_o =
        C_IN_Elevator_Height_Bottom_pre;
      Code_Gen_Model_B.State_ID_d = 0.1;
      Code_Gen_Model_B.Elevator_Height_Desired_h = Elevator_Height_Prepare;
      Code_Gen_Model_B.Coral_Wheel_DC_a = 0.0;
    }
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_af) {
    Code_exit_internal_Coral_Pickup();
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_o =
      Code_Gen_Mode_IN_End_Game_Climb;
    Code_Gen_Model_B.State_ID_d = 4.4;
    Code_Gen_Model_B.Elevator_Height_Desired_h = Elevator_Height_End_Game;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_f = Coral_Arm_Angle_Up;
    Code_Gen_Model_B.Coral_Wheel_DC_a = 0.0;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_oe) {
    Code_exit_internal_Coral_Pickup();
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_o =
      Code_Gen_Model_IN_Algae_Score;
    Code_Gen_Model_B.State_ID_d = 4.1;
    Code_Gen_Model_B.Elevator_Height_Desired_h = Elevator_Height_Algae_Score;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_f = Coral_Arm_Angle_Up;
    Code_Gen_Model_B.Coral_Wheel_DC_a = 0.0;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_e) {
    Code_exit_internal_Coral_Pickup();
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_o =
      Code_Gen_Mo_IN_Algae_Pickup_Low;
    Code_Gen_Model_B.State_ID_d = 4.2;
    Code_Gen_Model_B.Elevator_Height_Desired_h = Elevator_Height_Algae_Low;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_f = Coral_Arm_Angle_Up;
    Code_Gen_Model_B.Coral_Wheel_DC_a = 0.0;
    Code_Gen_Model_B.Set_Algae_Level_p = 2U;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_lp) {
    Code_exit_internal_Coral_Pickup();
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_o =
      Code_Gen_M_IN_Algae_Pickup_High;
    Code_Gen_Model_B.State_ID_d = 4.3;
    Code_Gen_Model_B.Elevator_Height_Desired_h = Elevator_Height_Algae_High;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_f = Coral_Arm_Angle_Up;
    Code_Gen_Model_B.Coral_Wheel_DC_a = 0.0;
    Code_Gen_Model_B.Set_Algae_Level_p = 3U;
  } else {
    switch (Code_Gen_Model_DW.is_Actions_h) {
     case Code_Gen__IN_Coral_Pickup_Lower:
      Code_Gen_Model_B.State_ID_d = 1.1;
      Code_Gen_Model_B.Coral_Wheel_DC_a = Coral_Motor_DC_Pickup;
      if (Code_Gen_Model_B.Compare) {
        Code_Gen_Model_DW.is_Actions_h = Code_IN_Coral_Pickup_Lower_Wait;
        Code_Gen_Model_B.State_ID_d = 1.2;
        Code_Gen_Model_B.Coral_Pickup_Lower_Wait_State_m = true;
        Code_Gen_Model_B.Coral_Wheel_DC_a = Coral_Motor_DC_Hold;
        Code_Gen_Model_B.Elevator_LowerPickup_Reset_g = false;
        Code_Gen_Model_DW.timer_n2 = 0.0;
      }
      break;

     case Code_IN_Coral_Pickup_Lower_Wait:
      Code_Gen_Model_B.State_ID_d = 1.2;
      Code_Gen_Model_B.Coral_Wheel_DC_a = Coral_Motor_DC_Hold;
      if ((Code_Gen_Model_DW.timer_n2 >= Elevator_LowerPickup_Time) &&
          ((((Code_Gen_Model_DW.Set_L1_j) || (Code_Gen_Model_DW.Set_L2_b)) ||
            (Code_Gen_Model_DW.Set_L3_f)) || (Code_Gen_Model_DW.Set_L4_d))) {
        Code_Gen_Model_B.Elevator_LowerPickup_Reset_g = true;
        Code_Gen_Model_B.Coral_Pickup_Lower_Wait_State_m = false;
        Code_Gen_Model_DW.is_Actions_h = Code_Gen__IN_Coral_Pickup_Raise;
        Code_Gen_Model_B.State_ID_d = 1.3;
        Code_Gen_Model_B.Elevator_Height_Desired_h = Elevator_Height_Raise;
      } else {
        Code_Gen_Model_DW.timer_n2 += 0.02;
      }
      break;

     case Code_Ge_IN_Coral_Pickup_Prepare:
      Code_Gen_Model_B.State_ID_d = 1.0;
      Code_Gen_Model_B.Coral_Wheel_DC_a = 0.0;

      /* Inport: '<Root>/Coral_TOF_Distance' */
      if ((fabs(Code_Gen_Model_B.Elevator_Height_Desired_h -
                Code_Gen_Model_B.Elevator_Height_Measured) <=
           Elevator_Height_Error_Threshold) && ((fabs
            (Code_Gen_Model_B.Coral_Arm_Angle_Desired_f -
             Code_Gen_Model_B.Coral_Arm_Angle_Measured) <=
            Coral_Arm_Angle_Error_Threshold) &&
           (Code_Gen_Model_U.Coral_TOF_Distance < Coral_Detect_Distance))) {
        Code_Gen_Model_DW.is_Actions_h = Code_Gen__IN_Coral_Pickup_Lower;
        Code_Gen_Model_B.State_ID_d = 1.1;
        Code_Gen_Model_B.Elevator_Height_Desired_h = Elevator_Height_Lower;
        Code_Gen_Model_B.Coral_Wheel_DC_a = Coral_Motor_DC_Pickup;
      }

      /* End of Inport: '<Root>/Coral_TOF_Distance' */
      break;

     default:
      /* case IN_Coral_Pickup_Raise: */
      Code_Gen_Model_B.State_ID_d = 1.3;
      if ((fabs(Code_Gen_Model_B.Elevator_Height_Desired_h -
                Code_Gen_Model_B.Elevator_Height_Measured) <=
           Elevator_Height_Error_Threshold) && ((((Code_Gen_Model_DW.Set_L1_j) ||
             (Code_Gen_Model_DW.Set_L2_b)) || (Code_Gen_Model_DW.Set_L3_f)) ||
           (Code_Gen_Model_DW.Set_L4_d))) {
        Code_exit_internal_Coral_Pickup();
        Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_o =
          Code_Gen_Model_IN_Start_Angle;
        Code_Gen_Model_B.State_ID_d = 2.0;
        Code_Gen_Model_B.Coral_Arm_Angle_Desired_f = Coral_Arm_Angle_Start;
      }
      break;
    }

    if (Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_o ==
        Code_Gen_Model_IN_Coral_Pickup) {
      Code_Gen_Model_Set_Level();
    }
  }
}

/* Function for Chart: '<S29>/Reefscape_Chart' */
static void Code_Elevator_Height_Bottom_pre(void)
{
  boolean_T guard1;
  Code_Gen_Model_B.State_ID_d = 0.1;
  Code_Gen_Model_B.Coral_Wheel_DC_a = 0.0;
  guard1 = false;
  if (Code_Gen_Model_B.Elevator_Height_Measured >
      (Code_Gen_Model_B.Elevator_Height_Desired_h -
       Elevator_Height_Error_Threshold)) {
    guard1 = true;
  } else if ((Code_Gen_Model_B.FixPtRelationalOperator_oi) &&
             (!Code_Gen_Model_B.Compare_f)) {
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_o =
      Code_Gen_Model_IN_Coral_Pickup;
    Code_Gen_Model_DW.is_Actions_h = Code_Ge_IN_Coral_Pickup_Prepare;
    Code_Gen_Model_B.State_ID_d = 1.0;
    Code_Gen_Model_B.Elevator_Height_Desired_h = Elevator_Height_Prepare;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_f = -90.0;
    Code_Gen_Model_DW.is_Set_Level_n = Code_Gen_Model_IN_None;
    Code_Gen_Model_DW.Set_L1_j = false;
    Code_Gen_Model_DW.Set_L2_b = false;
    Code_Gen_Model_DW.Set_L3_f = false;
    Code_Gen_Model_DW.Set_L4_d = false;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_p4) {
    if (Code_Gen_Model_B.Coral_Arm_Angle_Measured >=
        Coral_Arm_Angle_Start_Thresh) {
      guard1 = true;
    } else {
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_o =
        C_IN_Elevator_Height_Bottom_pre;
      Code_Gen_Model_B.Elevator_Height_Desired_h = Elevator_Height_Prepare;
    }
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_af) {
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_o =
      Code_Gen_Mode_IN_End_Game_Climb;
    Code_Gen_Model_B.State_ID_d = 4.4;
    Code_Gen_Model_B.Elevator_Height_Desired_h = Elevator_Height_End_Game;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_f = Coral_Arm_Angle_Up;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_oe) {
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_o =
      Code_Gen_Model_IN_Algae_Score;
    Code_Gen_Model_B.State_ID_d = 4.1;
    Code_Gen_Model_B.Elevator_Height_Desired_h = Elevator_Height_Algae_Score;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_f = Coral_Arm_Angle_Up;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_e) {
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_o =
      Code_Gen_Mo_IN_Algae_Pickup_Low;
    Code_Gen_Model_B.State_ID_d = 4.2;
    Code_Gen_Model_B.Elevator_Height_Desired_h = Elevator_Height_Algae_Low;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_f = Coral_Arm_Angle_Up;
    Code_Gen_Model_B.Set_Algae_Level_p = 2U;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_lp) {
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_o =
      Code_Gen_M_IN_Algae_Pickup_High;
    Code_Gen_Model_B.State_ID_d = 4.3;
    Code_Gen_Model_B.Elevator_Height_Desired_h = Elevator_Height_Algae_High;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_f = Coral_Arm_Angle_Up;
    Code_Gen_Model_B.Set_Algae_Level_p = 3U;
  }

  if (guard1) {
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_o =
      Code__IN_Elevator_Height_Bottom;
    Code_Gen_Model_B.State_ID_d = 0.2;
    Code_Gen_Model_B.Elevator_Height_Desired_h = Elevator_Height_Bottom;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_f = Coral_Arm_Angle_Up;
  }
}

/* Function for Chart: '<S29>/Reefscape_Chart' */
static void Code_Gen_Model_End_Game_Climb(void)
{
  Code_Gen_Model_B.State_ID_d = 4.4;
  Code_Gen_Model_B.Coral_Wheel_DC_a = 0.0;
  if ((Code_Gen_Model_B.FixPtRelationalOperator_oi) &&
      (!Code_Gen_Model_B.Compare_f)) {
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_o =
      Code_Gen_Model_IN_Coral_Pickup;
    Code_Gen_Model_DW.is_Actions_h = Code_Ge_IN_Coral_Pickup_Prepare;
    Code_Gen_Model_B.State_ID_d = 1.0;
    Code_Gen_Model_B.Elevator_Height_Desired_h = Elevator_Height_Prepare;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_f = -90.0;
    Code_Gen_Model_DW.is_Set_Level_n = Code_Gen_Model_IN_None;
    Code_Gen_Model_DW.Set_L1_j = false;
    Code_Gen_Model_DW.Set_L2_b = false;
    Code_Gen_Model_DW.Set_L3_f = false;
    Code_Gen_Model_DW.Set_L4_d = false;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_p4) {
    if (Code_Gen_Model_B.Coral_Arm_Angle_Measured >=
        Coral_Arm_Angle_Start_Thresh) {
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_o =
        Code__IN_Elevator_Height_Bottom;
      Code_Gen_Model_B.State_ID_d = 0.2;
      Code_Gen_Model_B.Elevator_Height_Desired_h = Elevator_Height_Bottom;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_f = Coral_Arm_Angle_Up;
    } else {
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_o =
        C_IN_Elevator_Height_Bottom_pre;
      Code_Gen_Model_B.State_ID_d = 0.1;
      Code_Gen_Model_B.Elevator_Height_Desired_h = Elevator_Height_Prepare;
    }
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_af) {
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_o =
      Code_Gen_Mode_IN_End_Game_Climb;
    Code_Gen_Model_B.Elevator_Height_Desired_h = Elevator_Height_End_Game;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_f = Coral_Arm_Angle_Up;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_oe) {
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_o =
      Code_Gen_Model_IN_Algae_Score;
    Code_Gen_Model_B.State_ID_d = 4.1;
    Code_Gen_Model_B.Elevator_Height_Desired_h = Elevator_Height_Algae_Score;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_f = Coral_Arm_Angle_Up;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_e) {
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_o =
      Code_Gen_Mo_IN_Algae_Pickup_Low;
    Code_Gen_Model_B.State_ID_d = 4.2;
    Code_Gen_Model_B.Elevator_Height_Desired_h = Elevator_Height_Algae_Low;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_f = Coral_Arm_Angle_Up;
    Code_Gen_Model_B.Set_Algae_Level_p = 2U;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_lp) {
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_o =
      Code_Gen_M_IN_Algae_Pickup_High;
    Code_Gen_Model_B.State_ID_d = 4.3;
    Code_Gen_Model_B.Elevator_Height_Desired_h = Elevator_Height_Algae_High;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_f = Coral_Arm_Angle_Up;
    Code_Gen_Model_B.Set_Algae_Level_p = 3U;
  }
}

/* Function for Chart: '<S29>/Reefscape_Chart' */
static void Code_Gen_Model_Set_Level_h(void)
{
  switch (Code_Gen_Model_DW.is_Set_Level_a) {
   case Code_Gen_Model_IN_L1:
    if (((Code_Gen_Model_B.FixPtRelationalOperator_o) ||
         (Code_Gen_Model_B.FixPtRelationalOperator_dd)) ||
        (Code_Gen_Model_B.FixPtRelationalOperator_a)) {
      if (Code_Gen_Model_B.FixPtRelationalOperator_nw) {
        Code_Gen_Model_DW.is_Set_Level_a = Code_Gen_Model_IN_L1;
        Code_Gen_Model_DW.Set_L1_j = true;
        Code_Gen_Model_DW.Set_L2_b = false;
        Code_Gen_Model_DW.Set_L3_f = false;
        Code_Gen_Model_DW.Set_L4_d = false;
      } else if (Code_Gen_Model_B.FixPtRelationalOperator_o) {
        Code_Gen_Model_DW.is_Set_Level_a = Code_Gen_Model_IN_L2;
        Code_Gen_Model_DW.Set_L1_j = false;
        Code_Gen_Model_DW.Set_L2_b = true;
        Code_Gen_Model_DW.Set_L3_f = false;
        Code_Gen_Model_DW.Set_L4_d = false;
      } else if (Code_Gen_Model_B.FixPtRelationalOperator_dd) {
        Code_Gen_Model_DW.is_Set_Level_a = Code_Gen_Model_IN_L3;
        Code_Gen_Model_DW.Set_L1_j = false;
        Code_Gen_Model_DW.Set_L2_b = false;
        Code_Gen_Model_DW.Set_L3_f = true;
        Code_Gen_Model_DW.Set_L4_d = false;
      } else if (Code_Gen_Model_B.FixPtRelationalOperator_a) {
        Code_Gen_Model_DW.is_Set_Level_a = Code_Gen_Model_IN_L4;
        Code_Gen_Model_DW.Set_L1_j = false;
        Code_Gen_Model_DW.Set_L2_b = false;
        Code_Gen_Model_DW.Set_L3_f = false;
        Code_Gen_Model_DW.Set_L4_d = true;
      }
    }
    break;

   case Code_Gen_Model_IN_L2:
    if (((Code_Gen_Model_B.FixPtRelationalOperator_nw) ||
         (Code_Gen_Model_B.FixPtRelationalOperator_dd)) ||
        (Code_Gen_Model_B.FixPtRelationalOperator_a)) {
      if (Code_Gen_Model_B.FixPtRelationalOperator_nw) {
        Code_Gen_Model_DW.is_Set_Level_a = Code_Gen_Model_IN_L1;
        Code_Gen_Model_DW.Set_L1_j = true;
        Code_Gen_Model_DW.Set_L2_b = false;
        Code_Gen_Model_DW.Set_L3_f = false;
        Code_Gen_Model_DW.Set_L4_d = false;
      } else if (Code_Gen_Model_B.FixPtRelationalOperator_o) {
        Code_Gen_Model_DW.is_Set_Level_a = Code_Gen_Model_IN_L2;
        Code_Gen_Model_DW.Set_L1_j = false;
        Code_Gen_Model_DW.Set_L2_b = true;
        Code_Gen_Model_DW.Set_L3_f = false;
        Code_Gen_Model_DW.Set_L4_d = false;
      } else if (Code_Gen_Model_B.FixPtRelationalOperator_dd) {
        Code_Gen_Model_DW.is_Set_Level_a = Code_Gen_Model_IN_L3;
        Code_Gen_Model_DW.Set_L1_j = false;
        Code_Gen_Model_DW.Set_L2_b = false;
        Code_Gen_Model_DW.Set_L3_f = true;
        Code_Gen_Model_DW.Set_L4_d = false;
      } else if (Code_Gen_Model_B.FixPtRelationalOperator_a) {
        Code_Gen_Model_DW.is_Set_Level_a = Code_Gen_Model_IN_L4;
        Code_Gen_Model_DW.Set_L1_j = false;
        Code_Gen_Model_DW.Set_L2_b = false;
        Code_Gen_Model_DW.Set_L3_f = false;
        Code_Gen_Model_DW.Set_L4_d = true;
      }
    }
    break;

   case Code_Gen_Model_IN_L3:
    if (((Code_Gen_Model_B.FixPtRelationalOperator_nw) ||
         (Code_Gen_Model_B.FixPtRelationalOperator_o)) ||
        (Code_Gen_Model_B.FixPtRelationalOperator_a)) {
      if (Code_Gen_Model_B.FixPtRelationalOperator_nw) {
        Code_Gen_Model_DW.is_Set_Level_a = Code_Gen_Model_IN_L1;
        Code_Gen_Model_DW.Set_L1_j = true;
        Code_Gen_Model_DW.Set_L2_b = false;
        Code_Gen_Model_DW.Set_L3_f = false;
        Code_Gen_Model_DW.Set_L4_d = false;
      } else if (Code_Gen_Model_B.FixPtRelationalOperator_o) {
        Code_Gen_Model_DW.is_Set_Level_a = Code_Gen_Model_IN_L2;
        Code_Gen_Model_DW.Set_L1_j = false;
        Code_Gen_Model_DW.Set_L2_b = true;
        Code_Gen_Model_DW.Set_L3_f = false;
        Code_Gen_Model_DW.Set_L4_d = false;
      } else if (Code_Gen_Model_B.FixPtRelationalOperator_dd) {
        Code_Gen_Model_DW.is_Set_Level_a = Code_Gen_Model_IN_L3;
        Code_Gen_Model_DW.Set_L1_j = false;
        Code_Gen_Model_DW.Set_L2_b = false;
        Code_Gen_Model_DW.Set_L3_f = true;
        Code_Gen_Model_DW.Set_L4_d = false;
      } else if (Code_Gen_Model_B.FixPtRelationalOperator_a) {
        Code_Gen_Model_DW.is_Set_Level_a = Code_Gen_Model_IN_L4;
        Code_Gen_Model_DW.Set_L1_j = false;
        Code_Gen_Model_DW.Set_L2_b = false;
        Code_Gen_Model_DW.Set_L3_f = false;
        Code_Gen_Model_DW.Set_L4_d = true;
      }
    }
    break;

   case Code_Gen_Model_IN_L4:
    if (((Code_Gen_Model_B.FixPtRelationalOperator_nw) ||
         (Code_Gen_Model_B.FixPtRelationalOperator_o)) ||
        (Code_Gen_Model_B.FixPtRelationalOperator_dd)) {
      if (Code_Gen_Model_B.FixPtRelationalOperator_nw) {
        Code_Gen_Model_DW.is_Set_Level_a = Code_Gen_Model_IN_L1;
        Code_Gen_Model_DW.Set_L1_j = true;
        Code_Gen_Model_DW.Set_L2_b = false;
        Code_Gen_Model_DW.Set_L3_f = false;
        Code_Gen_Model_DW.Set_L4_d = false;
      } else if (Code_Gen_Model_B.FixPtRelationalOperator_o) {
        Code_Gen_Model_DW.is_Set_Level_a = Code_Gen_Model_IN_L2;
        Code_Gen_Model_DW.Set_L1_j = false;
        Code_Gen_Model_DW.Set_L2_b = true;
        Code_Gen_Model_DW.Set_L3_f = false;
        Code_Gen_Model_DW.Set_L4_d = false;
      } else if (Code_Gen_Model_B.FixPtRelationalOperator_dd) {
        Code_Gen_Model_DW.is_Set_Level_a = Code_Gen_Model_IN_L3;
        Code_Gen_Model_DW.Set_L1_j = false;
        Code_Gen_Model_DW.Set_L2_b = false;
        Code_Gen_Model_DW.Set_L3_f = true;
        Code_Gen_Model_DW.Set_L4_d = false;
      } else if (Code_Gen_Model_B.FixPtRelationalOperator_a) {
        Code_Gen_Model_DW.is_Set_Level_a = Code_Gen_Model_IN_L4;
        Code_Gen_Model_DW.Set_L1_j = false;
        Code_Gen_Model_DW.Set_L2_b = false;
        Code_Gen_Model_DW.Set_L3_f = false;
        Code_Gen_Model_DW.Set_L4_d = true;
      }
    }
    break;

   default:
    /* case IN_None: */
    if (Code_Gen_Model_B.FixPtRelationalOperator_nw) {
      Code_Gen_Model_DW.is_Set_Level_a = Code_Gen_Model_IN_L1;
      Code_Gen_Model_DW.Set_L1_j = true;
      Code_Gen_Model_DW.Set_L2_b = false;
      Code_Gen_Model_DW.Set_L3_f = false;
      Code_Gen_Model_DW.Set_L4_d = false;
    } else if (Code_Gen_Model_B.FixPtRelationalOperator_o) {
      Code_Gen_Model_DW.is_Set_Level_a = Code_Gen_Model_IN_L2;
      Code_Gen_Model_DW.Set_L1_j = false;
      Code_Gen_Model_DW.Set_L2_b = true;
      Code_Gen_Model_DW.Set_L3_f = false;
      Code_Gen_Model_DW.Set_L4_d = false;
    } else if (Code_Gen_Model_B.FixPtRelationalOperator_dd) {
      Code_Gen_Model_DW.is_Set_Level_a = Code_Gen_Model_IN_L3;
      Code_Gen_Model_DW.Set_L1_j = false;
      Code_Gen_Model_DW.Set_L2_b = false;
      Code_Gen_Model_DW.Set_L3_f = true;
      Code_Gen_Model_DW.Set_L4_d = false;
    } else if (Code_Gen_Model_B.FixPtRelationalOperator_a) {
      Code_Gen_Model_DW.is_Set_Level_a = Code_Gen_Model_IN_L4;
      Code_Gen_Model_DW.Set_L1_j = false;
      Code_Gen_Model_DW.Set_L2_b = false;
      Code_Gen_Model_DW.Set_L3_f = false;
      Code_Gen_Model_DW.Set_L4_d = true;
    }
    break;
  }
}

/* Function for Chart: '<S29>/Reefscape_Chart' */
static void Co_Elevator_CoralArm_CoralWheel(void)
{
  switch (Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_o) {
   case Code_Gen_M_IN_Algae_Pickup_High:
    Code_Gen_Mode_Algae_Pickup_High();
    break;

   case Code_Gen_Mo_IN_Algae_Pickup_Low:
    Code_Gen_Model_Algae_Pickup_Low();
    break;

   case Code_Gen_Model_IN_Algae_Score:
    Code_Gen_Model_B.State_ID_d = 4.1;
    Code_Gen_Model_B.Coral_Wheel_DC_a = 0.0;
    if ((Code_Gen_Model_B.FixPtRelationalOperator_oi) &&
        (!Code_Gen_Model_B.Compare_f)) {
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_o =
        Code_Gen_Model_IN_Coral_Pickup;
      Code_Gen_Model_DW.is_Actions_h = Code_Ge_IN_Coral_Pickup_Prepare;
      Code_Gen_Model_B.State_ID_d = 1.0;
      Code_Gen_Model_B.Elevator_Height_Desired_h = Elevator_Height_Prepare;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_f = -90.0;
      Code_Gen_Model_DW.is_Set_Level_n = Code_Gen_Model_IN_None;
      Code_Gen_Model_DW.Set_L1_j = false;
      Code_Gen_Model_DW.Set_L2_b = false;
      Code_Gen_Model_DW.Set_L3_f = false;
      Code_Gen_Model_DW.Set_L4_d = false;
    } else if (Code_Gen_Model_B.FixPtRelationalOperator_p4) {
      if (Code_Gen_Model_B.Coral_Arm_Angle_Measured >=
          Coral_Arm_Angle_Start_Thresh) {
        Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_o =
          Code__IN_Elevator_Height_Bottom;
        Code_Gen_Model_B.State_ID_d = 0.2;
        Code_Gen_Model_B.Elevator_Height_Desired_h = Elevator_Height_Bottom;
        Code_Gen_Model_B.Coral_Arm_Angle_Desired_f = Coral_Arm_Angle_Up;
      } else {
        Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_o =
          C_IN_Elevator_Height_Bottom_pre;
        Code_Gen_Model_B.State_ID_d = 0.1;
        Code_Gen_Model_B.Elevator_Height_Desired_h = Elevator_Height_Prepare;
      }
    } else if (Code_Gen_Model_B.FixPtRelationalOperator_af) {
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_o =
        Code_Gen_Mode_IN_End_Game_Climb;
      Code_Gen_Model_B.State_ID_d = 4.4;
      Code_Gen_Model_B.Elevator_Height_Desired_h = Elevator_Height_End_Game;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_f = Coral_Arm_Angle_Up;
    } else if (Code_Gen_Model_B.FixPtRelationalOperator_oe) {
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_o =
        Code_Gen_Model_IN_Algae_Score;
      Code_Gen_Model_B.Elevator_Height_Desired_h = Elevator_Height_Algae_Score;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_f = Coral_Arm_Angle_Up;
    } else if (Code_Gen_Model_B.FixPtRelationalOperator_e) {
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_o =
        Code_Gen_Mo_IN_Algae_Pickup_Low;
      Code_Gen_Model_B.State_ID_d = 4.2;
      Code_Gen_Model_B.Elevator_Height_Desired_h = Elevator_Height_Algae_Low;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_f = Coral_Arm_Angle_Up;
      Code_Gen_Model_B.Set_Algae_Level_p = 2U;
    } else if (Code_Gen_Model_B.FixPtRelationalOperator_lp) {
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_o =
        Code_Gen_M_IN_Algae_Pickup_High;
      Code_Gen_Model_B.State_ID_d = 4.3;
      Code_Gen_Model_B.Elevator_Height_Desired_h = Elevator_Height_Algae_High;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_f = Coral_Arm_Angle_Up;
      Code_Gen_Model_B.Set_Algae_Level_p = 3U;
    }
    break;

   case Code_Gen_Model_IN_Coral:
    Code_Gen_Model_Coral();
    break;

   case Code_Gen_Model_IN_Coral_Pickup:
    Code_Gen_Model_Coral_Pickup();
    break;

   case Code__IN_Elevator_Height_Bottom:
    Code_Gen_Model_B.State_ID_d = 0.2;
    Code_Gen_Model_B.Coral_Wheel_DC_a = 0.0;
    if ((Code_Gen_Model_B.FixPtRelationalOperator_oi) &&
        (!Code_Gen_Model_B.Compare_f)) {
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_o =
        Code_Gen_Model_IN_Coral_Pickup;
      Code_Gen_Model_DW.is_Actions_h = Code_Ge_IN_Coral_Pickup_Prepare;
      Code_Gen_Model_B.State_ID_d = 1.0;
      Code_Gen_Model_B.Elevator_Height_Desired_h = Elevator_Height_Prepare;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_f = -90.0;
      Code_Gen_Model_DW.is_Set_Level_n = Code_Gen_Model_IN_None;
      Code_Gen_Model_DW.Set_L1_j = false;
      Code_Gen_Model_DW.Set_L2_b = false;
      Code_Gen_Model_DW.Set_L3_f = false;
      Code_Gen_Model_DW.Set_L4_d = false;
    } else if (Code_Gen_Model_B.FixPtRelationalOperator_p4) {
      if (Code_Gen_Model_B.Coral_Arm_Angle_Measured >=
          Coral_Arm_Angle_Start_Thresh) {
        Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_o =
          Code__IN_Elevator_Height_Bottom;
        Code_Gen_Model_B.Elevator_Height_Desired_h = Elevator_Height_Bottom;
        Code_Gen_Model_B.Coral_Arm_Angle_Desired_f = Coral_Arm_Angle_Up;
      } else {
        Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_o =
          C_IN_Elevator_Height_Bottom_pre;
        Code_Gen_Model_B.State_ID_d = 0.1;
        Code_Gen_Model_B.Elevator_Height_Desired_h = Elevator_Height_Prepare;
      }
    } else if (Code_Gen_Model_B.FixPtRelationalOperator_af) {
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_o =
        Code_Gen_Mode_IN_End_Game_Climb;
      Code_Gen_Model_B.State_ID_d = 4.4;
      Code_Gen_Model_B.Elevator_Height_Desired_h = Elevator_Height_End_Game;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_f = Coral_Arm_Angle_Up;
    } else if (Code_Gen_Model_B.FixPtRelationalOperator_oe) {
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_o =
        Code_Gen_Model_IN_Algae_Score;
      Code_Gen_Model_B.State_ID_d = 4.1;
      Code_Gen_Model_B.Elevator_Height_Desired_h = Elevator_Height_Algae_Score;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_f = Coral_Arm_Angle_Up;
    } else if (Code_Gen_Model_B.FixPtRelationalOperator_e) {
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_o =
        Code_Gen_Mo_IN_Algae_Pickup_Low;
      Code_Gen_Model_B.State_ID_d = 4.2;
      Code_Gen_Model_B.Elevator_Height_Desired_h = Elevator_Height_Algae_Low;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_f = Coral_Arm_Angle_Up;
      Code_Gen_Model_B.Set_Algae_Level_p = 2U;
    } else if (Code_Gen_Model_B.FixPtRelationalOperator_lp) {
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_o =
        Code_Gen_M_IN_Algae_Pickup_High;
      Code_Gen_Model_B.State_ID_d = 4.3;
      Code_Gen_Model_B.Elevator_Height_Desired_h = Elevator_Height_Algae_High;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_f = Coral_Arm_Angle_Up;
      Code_Gen_Model_B.Set_Algae_Level_p = 3U;
    }
    break;

   case C_IN_Elevator_Height_Bottom_pre:
    Code_Elevator_Height_Bottom_pre();
    break;

   case Code_Gen_Mode_IN_End_Game_Climb:
    Code_Gen_Model_End_Game_Climb();
    break;

   case Code_Gen_Model_IN_Start:
    Code_Gen_Model_B.State_ID_d = 0.0;
    Code_Gen_Model_B.Coral_Wheel_DC_a = 0.0;
    if ((((Code_Gen_Model_DW.Set_L1_j) || (Code_Gen_Model_DW.Set_L2_b)) ||
         (Code_Gen_Model_DW.Set_L3_f)) || (Code_Gen_Model_DW.Set_L4_d)) {
      Code_Gen_Model_DW.is_Set_Level_a = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_o =
        Code_Gen_Model_IN_Coral;
      Code_Gen_Model_DW.is_Coral_n = Code_Ge_IN_Coral_Score_Position;
      enter_internal_Coral_Score_Posi();
    } else {
      Code_Gen_Model_Set_Level_h();
    }
    break;

   default:
    /* case IN_Start_Angle: */
    Code_Gen_Model_B.State_ID_d = 2.0;
    if (Code_Gen_Model_B.Coral_Arm_Angle_Measured > Coral_Arm_Angle_Start_Thresh)
    {
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_o =
        Code_Gen_Model_IN_Coral;
      Code_Gen_Model_DW.is_Coral_n = Code_Ge_IN_Coral_Score_Position;
      enter_internal_Coral_Score_Posi();
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

/* Function for Chart: '<S416>/Reefscape_Chart' */
static void enter_internal_Coral_Score_Po_f(void)
{
  if ((Code_Gen_Model_DW.Set_L1) || (Code_Gen_Model_B.FixPtRelationalOperator))
  {
    Code_Gen_Model_DW.is_Coral_Score_Position = Code_Gen_Model_IN_Level_1;
    Code_Gen_Model_B.State_ID = 2.1;
    Code_Gen_Model_B.Set_Coral_Level = 1U;
    Code_Gen_Model_B.Elevator_Height_Desired = Elevator_Height_L1;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired = Coral_Arm_Angle_L1;
  } else if ((Code_Gen_Model_DW.Set_L2) ||
             (Code_Gen_Model_B.FixPtRelationalOperator_k)) {
    Code_Gen_Model_DW.is_Coral_Score_Position = Code_Gen_Model_IN_Level_2;
    Code_Gen_Model_B.State_ID = 2.2;
    Code_Gen_Model_B.Set_Coral_Level = 2U;
    Code_Gen_Model_B.Elevator_Height_Desired = Elevator_Height_L2;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired = Coral_Arm_Angle_L2;
  } else if ((Code_Gen_Model_DW.Set_L3) ||
             (Code_Gen_Model_B.FixPtRelationalOperator_n)) {
    Code_Gen_Model_DW.is_Coral_Score_Position = Code_Gen_Model_IN_Level_3;
    Code_Gen_Model_B.State_ID = 2.3;
    Code_Gen_Model_B.Set_Coral_Level = 3U;
    Code_Gen_Model_B.Elevator_Height_Desired = Elevator_Height_L3;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired = Coral_Arm_Angle_L3;
  } else if ((Code_Gen_Model_DW.Set_L4) ||
             (Code_Gen_Model_B.FixPtRelationalOperator_d)) {
    Code_Gen_Model_DW.is_Coral_Score_Position = Code_Gen_Model_IN_Level_4;
    Code_Gen_Model_B.State_ID = 2.4;
    Code_Gen_Model_B.Set_Coral_Level = 4U;
    Code_Gen_Model_B.Elevator_Height_Desired = Elevator_Height_L4;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired = Coral_Arm_Angle_L4;
  } else {
    Code_Gen_Model_DW.is_Coral_Score_Position = Code_Gen_IN_Manual_Adjustment_c;
    Code_Gen_Model_B.State_ID = 2.5;
    Code_Gen_Model_B.Elevator_Height_Desired += Code_Gen_Model_B.DeadZone1 *
      Elevator_Height_Manual_Gain;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired += Code_Gen_Model_B.DeadZone *
      Coral_Arm_Manual_Gain;
  }
}

/* Function for Chart: '<S416>/Reefscape_Chart' */
static void Code_Gen_Mo_Algae_Pickup_High_k(void)
{
  Code_Gen_Model_B.State_ID = 4.3;
  Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
  if ((Code_Gen_Model_B.FixPtRelationalOperator_ne) &&
      (!Code_Gen_Model_B.Compare_f)) {
    Code_Gen_Model_B.Set_Algae_Level = 0U;
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_Model_IN_Coral_Pickup;
    Code_Gen_Model_DW.is_Actions = Code_Ge_IN_Coral_Pickup_Prepare;
    Code_Gen_Model_B.State_ID = 1.0;
    Code_Gen_Model_B.Elevator_Height_Desired = Elevator_Height_Prepare;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired = -90.0;
    Code_Gen_Model_DW.is_Set_Level = Code_Gen_Model_IN_None;
    Code_Gen_Model_DW.Set_L1 = false;
    Code_Gen_Model_DW.Set_L2 = false;
    Code_Gen_Model_DW.Set_L3 = false;
    Code_Gen_Model_DW.Set_L4 = false;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_j) {
    if (Code_Gen_Model_B.Coral_Arm_Angle_Measured >=
        Coral_Arm_Angle_Start_Thresh) {
      Code_Gen_Model_B.Set_Algae_Level = 0U;
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        Code__IN_Elevator_Height_Bottom;
      Code_Gen_Model_B.State_ID = 0.2;
      Code_Gen_Model_B.Elevator_Height_Desired = Elevator_Height_Bottom;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
    } else {
      Code_Gen_Model_B.Set_Algae_Level = 0U;
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        C_IN_Elevator_Height_Bottom_pre;
      Code_Gen_Model_B.State_ID = 0.1;
      Code_Gen_Model_B.Elevator_Height_Desired = Elevator_Height_Prepare;
    }
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_i) {
    Code_Gen_Model_B.Set_Algae_Level = 0U;
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_Mode_IN_End_Game_Climb;
    Code_Gen_Model_B.State_ID = 4.4;
    Code_Gen_Model_B.Elevator_Height_Desired = Elevator_Height_End_Game;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_m) {
    Code_Gen_Model_B.Set_Algae_Level = 0U;
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_Model_IN_Algae_Score;
    Code_Gen_Model_B.State_ID = 4.1;
    Code_Gen_Model_B.Elevator_Height_Desired = Elevator_Height_Algae_Score;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_ji) {
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_Mo_IN_Algae_Pickup_Low;
    Code_Gen_Model_B.State_ID = 4.2;
    Code_Gen_Model_B.Elevator_Height_Desired = Elevator_Height_Algae_Low;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
    Code_Gen_Model_B.Set_Algae_Level = 2U;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_ml) {
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_M_IN_Algae_Pickup_High;
    Code_Gen_Model_B.Elevator_Height_Desired = Elevator_Height_Algae_High;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
    Code_Gen_Model_B.Set_Algae_Level = 3U;
  }
}

/* Function for Chart: '<S416>/Reefscape_Chart' */
static void Code_Gen_Mod_Algae_Pickup_Low_c(void)
{
  Code_Gen_Model_B.State_ID = 4.2;
  Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
  if ((Code_Gen_Model_B.FixPtRelationalOperator_ne) &&
      (!Code_Gen_Model_B.Compare_f)) {
    Code_Gen_Model_B.Set_Algae_Level = 0U;
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_Model_IN_Coral_Pickup;
    Code_Gen_Model_DW.is_Actions = Code_Ge_IN_Coral_Pickup_Prepare;
    Code_Gen_Model_B.State_ID = 1.0;
    Code_Gen_Model_B.Elevator_Height_Desired = Elevator_Height_Prepare;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired = -90.0;
    Code_Gen_Model_DW.is_Set_Level = Code_Gen_Model_IN_None;
    Code_Gen_Model_DW.Set_L1 = false;
    Code_Gen_Model_DW.Set_L2 = false;
    Code_Gen_Model_DW.Set_L3 = false;
    Code_Gen_Model_DW.Set_L4 = false;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_j) {
    if (Code_Gen_Model_B.Coral_Arm_Angle_Measured >=
        Coral_Arm_Angle_Start_Thresh) {
      Code_Gen_Model_B.Set_Algae_Level = 0U;
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        Code__IN_Elevator_Height_Bottom;
      Code_Gen_Model_B.State_ID = 0.2;
      Code_Gen_Model_B.Elevator_Height_Desired = Elevator_Height_Bottom;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
    } else {
      Code_Gen_Model_B.Set_Algae_Level = 0U;
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        C_IN_Elevator_Height_Bottom_pre;
      Code_Gen_Model_B.State_ID = 0.1;
      Code_Gen_Model_B.Elevator_Height_Desired = Elevator_Height_Prepare;
    }
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_i) {
    Code_Gen_Model_B.Set_Algae_Level = 0U;
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_Mode_IN_End_Game_Climb;
    Code_Gen_Model_B.State_ID = 4.4;
    Code_Gen_Model_B.Elevator_Height_Desired = Elevator_Height_End_Game;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_m) {
    Code_Gen_Model_B.Set_Algae_Level = 0U;
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_Model_IN_Algae_Score;
    Code_Gen_Model_B.State_ID = 4.1;
    Code_Gen_Model_B.Elevator_Height_Desired = Elevator_Height_Algae_Score;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_ji) {
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_Mo_IN_Algae_Pickup_Low;
    Code_Gen_Model_B.Elevator_Height_Desired = Elevator_Height_Algae_Low;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
    Code_Gen_Model_B.Set_Algae_Level = 2U;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_ml) {
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_M_IN_Algae_Pickup_High;
    Code_Gen_Model_B.State_ID = 4.3;
    Code_Gen_Model_B.Elevator_Height_Desired = Elevator_Height_Algae_High;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
    Code_Gen_Model_B.Set_Algae_Level = 3U;
  }
}

/* Function for Chart: '<S416>/Reefscape_Chart' */
static void Cod_exit_internal_Coral_Eject_j(void)
{
  if (Code_Gen_Model_DW.is_Coral_Eject == Code_Gen_Model_IN_Stop) {
    Code_Gen_Model_DW.is_Coral_Eject = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
  } else {
    Code_Gen_Model_DW.is_Level_2 = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_DW.is_Level_3 = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_DW.is_Level_4_Teleop = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_DW.is_Coral_Eject = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
  }
}

/* Function for Chart: '<S416>/Reefscape_Chart' */
static void Code_Gen_Model_Coral_Eject_k(void)
{
  if ((Code_Gen_Model_B.FixPtRelationalOperator_ne) &&
      (!Code_Gen_Model_B.Compare_f)) {
    Cod_exit_internal_Coral_Eject_j();
    Code_Gen_Model_DW.is_Coral = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_B.Set_Coral_Level = 0U;
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_Model_IN_Coral_Pickup;
    Code_Gen_Model_DW.is_Actions = Code_Ge_IN_Coral_Pickup_Prepare;
    Code_Gen_Model_B.State_ID = 1.0;
    Code_Gen_Model_B.Elevator_Height_Desired = Elevator_Height_Prepare;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired = -90.0;
    Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
    Code_Gen_Model_DW.is_Set_Level = Code_Gen_Model_IN_None;
    Code_Gen_Model_DW.Set_L1 = false;
    Code_Gen_Model_DW.Set_L2 = false;
    Code_Gen_Model_DW.Set_L3 = false;
    Code_Gen_Model_DW.Set_L4 = false;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_j) {
    if (Code_Gen_Model_B.Coral_Arm_Angle_Measured >=
        Coral_Arm_Angle_Start_Thresh) {
      Cod_exit_internal_Coral_Eject_j();
      Code_Gen_Model_DW.is_Coral = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_B.Set_Coral_Level = 0U;
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        Code__IN_Elevator_Height_Bottom;
      Code_Gen_Model_B.State_ID = 0.2;
      Code_Gen_Model_B.Elevator_Height_Desired = Elevator_Height_Bottom;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
      Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
    } else {
      Cod_exit_internal_Coral_Eject_j();
      Code_Gen_Model_DW.is_Coral = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_B.Set_Coral_Level = 0U;
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        C_IN_Elevator_Height_Bottom_pre;
      Code_Gen_Model_B.State_ID = 0.1;
      Code_Gen_Model_B.Elevator_Height_Desired = Elevator_Height_Prepare;
      Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
    }
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_i) {
    Cod_exit_internal_Coral_Eject_j();
    Code_Gen_Model_DW.is_Coral = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_B.Set_Coral_Level = 0U;
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_Mode_IN_End_Game_Climb;
    Code_Gen_Model_B.State_ID = 4.4;
    Code_Gen_Model_B.Elevator_Height_Desired = Elevator_Height_End_Game;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
    Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_m) {
    Cod_exit_internal_Coral_Eject_j();
    Code_Gen_Model_DW.is_Coral = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_B.Set_Coral_Level = 0U;
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_Model_IN_Algae_Score;
    Code_Gen_Model_B.State_ID = 4.1;
    Code_Gen_Model_B.Elevator_Height_Desired = Elevator_Height_Algae_Score;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
    Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_ji) {
    Cod_exit_internal_Coral_Eject_j();
    Code_Gen_Model_DW.is_Coral = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_B.Set_Coral_Level = 0U;
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_Mo_IN_Algae_Pickup_Low;
    Code_Gen_Model_B.State_ID = 4.2;
    Code_Gen_Model_B.Elevator_Height_Desired = Elevator_Height_Algae_Low;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
    Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
    Code_Gen_Model_B.Set_Algae_Level = 2U;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_ml) {
    Cod_exit_internal_Coral_Eject_j();
    Code_Gen_Model_DW.is_Coral = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_B.Set_Coral_Level = 0U;
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_M_IN_Algae_Pickup_High;
    Code_Gen_Model_B.State_ID = 4.3;
    Code_Gen_Model_B.Elevator_Height_Desired = Elevator_Height_Algae_High;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
    Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
    Code_Gen_Model_B.Set_Algae_Level = 3U;
  } else {
    switch (Code_Gen_Model_DW.is_Coral_Eject) {
     case Code_Gen_Model_IN_Eject:
      Code_Gen_Model_B.State_ID = 3.6;
      Code_Gen_Model_B.Coral_Wheel_DC = Coral_Motor_DC_Eject;
      if (Code_Gen_Model_DW.timer >= Coral_Eject_Time) {
        Code_Gen_Model_DW.is_Coral_Eject = Code_Gen_Model_IN_Stop;
        Code_Gen_Model_B.State_ID = 3.7;
        Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
      } else {
        Code_Gen_Model_DW.timer += 0.02;
      }
      break;

     case Code_Gen_Model_IN_Level_2:
      Code_Gen_Model_B.State_ID = 3.2;
      if ((!Code_Gen_Model_B.Compare) ||
          (Code_Gen_Model_B.FixPtRelationalOperator_l)) {
        Code_Gen_Model_DW.is_Level_2 = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
        Code_Gen_Model_DW.is_Coral_Eject = Code_Gen_Model_IN_Eject;
        Code_Gen_Model_B.State_ID = 3.6;
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
      Code_Gen_Model_B.State_ID = 3.3;
      if ((!Code_Gen_Model_B.Compare) ||
          (Code_Gen_Model_B.FixPtRelationalOperator_l)) {
        Code_Gen_Model_DW.is_Level_3 = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
        Code_Gen_Model_DW.is_Coral_Eject = Code_Gen_Model_IN_Eject;
        Code_Gen_Model_B.State_ID = 3.6;
        Code_Gen_Model_B.Coral_Wheel_DC = Coral_Motor_DC_Eject;
        Code_Gen_Model_DW.timer = 0.0;
      } else if (Code_Gen_Model_DW.is_Level_3 == Code_Gen_IN_Auto_Lower_Elevator)
      {
        if (Code_Gen_Model_B.Elevator_Height_Measured <=
            Elevator_Height_L3_Eject) {
          Code_Gen_Model_DW.is_Level_3 = Code_Gen_M_IN_Manual_Adjustment;
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
        Code_Gen_Model_DW.is_Level_3 = Code_Gen_IN_Auto_Lower_Elevator;
        Code_Gen_Model_B.Elevator_Height_Desired +=
          Elevator_Height_Coral_Score_Lower_Rate;
      } else {
        Code_Gen_Model_B.Elevator_Height_Desired += Code_Gen_Model_B.DeadZone1 *
          Elevator_Height_Manual_Gain;
        Code_Gen_Model_B.Coral_Arm_Angle_Desired += Code_Gen_Model_B.DeadZone *
          Coral_Arm_Manual_Gain;
      }
      break;

     case Code_Gen_Model_IN_Level_4_Auto:
      Code_Gen_Model_B.State_ID = 3.5;
      if ((!Code_Gen_Model_B.Compare) ||
          (Code_Gen_Model_B.Coral_Arm_Angle_Measured <
           Coral_Arm_Angle_L4_Eject_Auto)) {
        Code_Gen_Model_DW.is_Coral_Eject = Code_Gen_Model_IN_Eject;
        Code_Gen_Model_B.State_ID = 3.6;
        Code_Gen_Model_B.Coral_Wheel_DC = Coral_Motor_DC_Eject;
        Code_Gen_Model_DW.timer = 0.0;
      } else {
        Code_Gen_Model_B.Coral_Arm_Angle_Desired +=
          Coral_Arm_Angle_Coral_Score_Lower_Rate;
      }
      break;

     case Code_Gen_Mode_IN_Level_4_Teleop:
      Code_Gen_Model_B.State_ID = 3.4;
      if ((!Code_Gen_Model_B.Compare) ||
          (Code_Gen_Model_B.FixPtRelationalOperator_l)) {
        Code_Gen_Model_DW.is_Level_4_Teleop = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
        Code_Gen_Model_DW.is_Coral_Eject = Code_Gen_Model_IN_Eject;
        Code_Gen_Model_B.State_ID = 3.6;
        Code_Gen_Model_B.Coral_Wheel_DC = Coral_Motor_DC_Eject;
        Code_Gen_Model_DW.timer = 0.0;
      } else if (Code_Gen_Model_DW.is_Level_4_Teleop ==
                 Code_Gen_Mode_IN_Auto_Lower_Arm) {
        if (Code_Gen_Model_B.Coral_Arm_Angle_Measured <
            Coral_Arm_Angle_L4_Eject_Teleop) {
          Code_Gen_Model_DW.is_Level_4_Teleop = Code_Gen_M_IN_Manual_Adjustment;
          Code_Gen_Model_B.Elevator_Height_Desired += Code_Gen_Model_B.DeadZone1
            * Elevator_Height_Manual_Gain;
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
      break;

     default:
      /* case IN_Stop: */
      Code_Gen_Model_B.State_ID = 3.7;
      Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
      break;
    }
  }
}

/* Function for Chart: '<S416>/Reefscape_Chart' */
static void Code_Gen_Model_Coral_d(void)
{
  if (Code_Gen_Model_DW.is_Coral == Code_Gen_Model_IN_Coral_Eject) {
    Code_Gen_Model_Coral_Eject_k();

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
    enter_internal_Coral_Score_Po_f();
  } else if ((Code_Gen_Model_B.FixPtRelationalOperator_l) ||
             (Code_Gen_Model_DW.timer_robot_target >= AT_On_Target_Time)) {
    Code_Gen_Model_DW.is_Coral_Score_Position = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_DW.is_Coral = Code_Gen_Model_IN_Coral_Eject;
    if (Code_Gen_Model_DW.Set_L2) {
      Code_Gen_Model_DW.is_Coral_Eject = Code_Gen_Model_IN_Level_2;
      Code_Gen_Model_B.State_ID = 3.2;
      Code_Gen_Model_DW.is_Level_2 = Code_Gen_IN_Auto_Lower_Elevator;
      Code_Gen_Model_B.Elevator_Height_Desired +=
        Elevator_Height_Coral_Score_Lower_Rate;
    } else if (Code_Gen_Model_DW.Set_L3) {
      Code_Gen_Model_DW.is_Coral_Eject = Code_Gen_Model_IN_Level_3;
      Code_Gen_Model_B.State_ID = 3.3;
      Code_Gen_Model_DW.is_Level_3 = Code_Gen_IN_Auto_Lower_Elevator;
      Code_Gen_Model_B.Elevator_Height_Desired +=
        Elevator_Height_Coral_Score_Lower_Rate;
    } else if (Code_Gen_Model_DW.Set_L4) {
      Code_Gen_Model_DW.is_Coral_Eject = Code_Gen_Mode_IN_Level_4_Teleop;
      Code_Gen_Model_B.State_ID = 3.4;
      Code_Gen_Model_DW.is_Level_4_Teleop = Code_Gen_Mode_IN_Auto_Lower_Arm;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired +=
        Coral_Arm_Angle_Coral_Score_Lower_Rate;
    } else {
      Code_Gen_Model_DW.is_Coral_Eject = Code_Gen_Model_IN_Eject;
      Code_Gen_Model_B.State_ID = 3.6;
      Code_Gen_Model_B.Coral_Wheel_DC = Coral_Motor_DC_Eject;
      Code_Gen_Model_DW.timer = 0.0;
    }
  } else {
    switch (Code_Gen_Model_DW.is_Coral_Score_Position) {
     case Code_Gen_Model_IN_Level_1:
      Code_Gen_Model_B.State_ID = 2.1;
      if ((Code_Gen_Model_B.DeadZone1 != 0.0) || (Code_Gen_Model_B.DeadZone !=
           0.0)) {
        Code_Gen_Model_DW.is_Coral_Score_Position =
          Code_Gen_IN_Manual_Adjustment_c;
        Code_Gen_Model_B.State_ID = 2.5;
        Code_Gen_Model_B.Elevator_Height_Desired += Code_Gen_Model_B.DeadZone1 *
          Elevator_Height_Manual_Gain;
        Code_Gen_Model_B.Coral_Arm_Angle_Desired += Code_Gen_Model_B.DeadZone *
          Coral_Arm_Manual_Gain;
      }
      break;

     case Code_Gen_Model_IN_Level_2:
      Code_Gen_Model_B.State_ID = 2.2;
      if ((Code_Gen_Model_B.DeadZone1 != 0.0) || (Code_Gen_Model_B.DeadZone !=
           0.0)) {
        Code_Gen_Model_DW.is_Coral_Score_Position =
          Code_Gen_IN_Manual_Adjustment_c;
        Code_Gen_Model_B.State_ID = 2.5;
        Code_Gen_Model_B.Elevator_Height_Desired += Code_Gen_Model_B.DeadZone1 *
          Elevator_Height_Manual_Gain;
        Code_Gen_Model_B.Coral_Arm_Angle_Desired += Code_Gen_Model_B.DeadZone *
          Coral_Arm_Manual_Gain;
      }
      break;

     case Code_Gen_Model_IN_Level_3:
      Code_Gen_Model_B.State_ID = 2.3;
      if ((Code_Gen_Model_B.DeadZone1 != 0.0) || (Code_Gen_Model_B.DeadZone !=
           0.0)) {
        Code_Gen_Model_DW.is_Coral_Score_Position =
          Code_Gen_IN_Manual_Adjustment_c;
        Code_Gen_Model_B.State_ID = 2.5;
        Code_Gen_Model_B.Elevator_Height_Desired += Code_Gen_Model_B.DeadZone1 *
          Elevator_Height_Manual_Gain;
        Code_Gen_Model_B.Coral_Arm_Angle_Desired += Code_Gen_Model_B.DeadZone *
          Coral_Arm_Manual_Gain;
      }
      break;

     case Code_Gen_Model_IN_Level_4:
      Code_Gen_Model_B.State_ID = 2.4;
      if ((Code_Gen_Model_B.DeadZone1 != 0.0) || (Code_Gen_Model_B.DeadZone !=
           0.0)) {
        Code_Gen_Model_DW.is_Coral_Score_Position =
          Code_Gen_IN_Manual_Adjustment_c;
        Code_Gen_Model_B.State_ID = 2.5;
        Code_Gen_Model_B.Elevator_Height_Desired += Code_Gen_Model_B.DeadZone1 *
          Elevator_Height_Manual_Gain;
        Code_Gen_Model_B.Coral_Arm_Angle_Desired += Code_Gen_Model_B.DeadZone *
          Coral_Arm_Manual_Gain;
      }
      break;

     default:
      /* case IN_Manual_Adjustment: */
      Code_Gen_Model_B.State_ID = 2.5;
      if (!Code_Gen_Model_B.Compare) {
        Code_Gen_Model_DW.is_Coral_Score_Position =
          Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
        Code_Gen_Model_DW.is_Coral = Code_Gen_Model_IN_Coral_Eject;
        Code_Gen_Model_DW.is_Coral_Eject = Code_Gen_Model_IN_Eject;
        Code_Gen_Model_B.State_ID = 3.6;
        Code_Gen_Model_B.Coral_Wheel_DC = Coral_Motor_DC_Eject;
        Code_Gen_Model_DW.timer = 0.0;
      } else {
        Code_Gen_Model_B.Elevator_Height_Desired += Code_Gen_Model_B.DeadZone1 *
          Elevator_Height_Manual_Gain;
        Code_Gen_Model_B.Coral_Arm_Angle_Desired += Code_Gen_Model_B.DeadZone *
          Coral_Arm_Manual_Gain;
      }
      break;
    }
  }
}

/* Function for Chart: '<S416>/Reefscape_Chart' */
static void Co_exit_internal_Coral_Pickup_n(void)
{
  Code_Gen_Model_DW.is_Set_Level = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
  if (Code_Gen_Model_DW.is_Actions == Code_IN_Coral_Pickup_Lower_Wait) {
    Code_Gen_Model_B.Coral_Pickup_Lower_Wait_State = false;
    Code_Gen_Model_DW.is_Actions = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
  } else {
    Code_Gen_Model_DW.is_Actions = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
  }
}

/* Function for Chart: '<S416>/Reefscape_Chart' */
static void Code_Gen_Model_Set_Level_g(void)
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

/* Function for Chart: '<S416>/Reefscape_Chart' */
static void Code_Gen_Model_Coral_Pickup_m(void)
{
  if ((Code_Gen_Model_B.FixPtRelationalOperator_ne) &&
      (!Code_Gen_Model_B.Compare_f)) {
    Co_exit_internal_Coral_Pickup_n();
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_Model_IN_Coral_Pickup;
    Code_Gen_Model_DW.is_Actions = Code_Ge_IN_Coral_Pickup_Prepare;
    Code_Gen_Model_B.State_ID = 1.0;
    Code_Gen_Model_B.Elevator_Height_Desired = Elevator_Height_Prepare;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired = -90.0;
    Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
    Code_Gen_Model_DW.is_Set_Level = Code_Gen_Model_IN_None;
    Code_Gen_Model_DW.Set_L1 = false;
    Code_Gen_Model_DW.Set_L2 = false;
    Code_Gen_Model_DW.Set_L3 = false;
    Code_Gen_Model_DW.Set_L4 = false;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_j) {
    if (Code_Gen_Model_B.Coral_Arm_Angle_Measured >=
        Coral_Arm_Angle_Start_Thresh) {
      Co_exit_internal_Coral_Pickup_n();
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        Code__IN_Elevator_Height_Bottom;
      Code_Gen_Model_B.State_ID = 0.2;
      Code_Gen_Model_B.Elevator_Height_Desired = Elevator_Height_Bottom;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
      Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
    } else {
      Co_exit_internal_Coral_Pickup_n();
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        C_IN_Elevator_Height_Bottom_pre;
      Code_Gen_Model_B.State_ID = 0.1;
      Code_Gen_Model_B.Elevator_Height_Desired = Elevator_Height_Prepare;
      Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
    }
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_i) {
    Co_exit_internal_Coral_Pickup_n();
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_Mode_IN_End_Game_Climb;
    Code_Gen_Model_B.State_ID = 4.4;
    Code_Gen_Model_B.Elevator_Height_Desired = Elevator_Height_End_Game;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
    Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_m) {
    Co_exit_internal_Coral_Pickup_n();
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_Model_IN_Algae_Score;
    Code_Gen_Model_B.State_ID = 4.1;
    Code_Gen_Model_B.Elevator_Height_Desired = Elevator_Height_Algae_Score;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
    Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_ji) {
    Co_exit_internal_Coral_Pickup_n();
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_Mo_IN_Algae_Pickup_Low;
    Code_Gen_Model_B.State_ID = 4.2;
    Code_Gen_Model_B.Elevator_Height_Desired = Elevator_Height_Algae_Low;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
    Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
    Code_Gen_Model_B.Set_Algae_Level = 2U;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_ml) {
    Co_exit_internal_Coral_Pickup_n();
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_M_IN_Algae_Pickup_High;
    Code_Gen_Model_B.State_ID = 4.3;
    Code_Gen_Model_B.Elevator_Height_Desired = Elevator_Height_Algae_High;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
    Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
    Code_Gen_Model_B.Set_Algae_Level = 3U;
  } else {
    switch (Code_Gen_Model_DW.is_Actions) {
     case Code_Gen__IN_Coral_Pickup_Lower:
      Code_Gen_Model_B.State_ID = 1.1;
      Code_Gen_Model_B.Coral_Wheel_DC = Coral_Motor_DC_Pickup;
      if (Code_Gen_Model_B.Compare) {
        Code_Gen_Model_DW.is_Actions = Code_IN_Coral_Pickup_Lower_Wait;
        Code_Gen_Model_B.State_ID = 1.2;
        Code_Gen_Model_B.Coral_Pickup_Lower_Wait_State = true;
        Code_Gen_Model_B.Coral_Wheel_DC = Coral_Motor_DC_Hold;
        Code_Gen_Model_B.Elevator_LowerPickup_Reset = false;
        Code_Gen_Model_DW.timer = 0.0;
      }
      break;

     case Code_IN_Coral_Pickup_Lower_Wait:
      Code_Gen_Model_B.State_ID = 1.2;
      Code_Gen_Model_B.Coral_Wheel_DC = Coral_Motor_DC_Hold;
      if ((Code_Gen_Model_DW.timer >= Elevator_LowerPickup_Time) &&
          ((((Code_Gen_Model_DW.Set_L1) || (Code_Gen_Model_DW.Set_L2)) ||
            (Code_Gen_Model_DW.Set_L3)) || (Code_Gen_Model_DW.Set_L4))) {
        Code_Gen_Model_B.Elevator_LowerPickup_Reset = true;
        Code_Gen_Model_B.Coral_Pickup_Lower_Wait_State = false;
        Code_Gen_Model_DW.is_Actions = Code_Gen__IN_Coral_Pickup_Raise;
        Code_Gen_Model_B.State_ID = 1.3;
        Code_Gen_Model_B.Elevator_Height_Desired = Elevator_Height_Raise;
      } else {
        Code_Gen_Model_DW.timer += 0.02;
      }
      break;

     case Code_Ge_IN_Coral_Pickup_Prepare:
      Code_Gen_Model_B.State_ID = 1.0;
      Code_Gen_Model_B.Coral_Wheel_DC = 0.0;

      /* Inport: '<Root>/Coral_TOF_Distance' */
      if ((fabs(Code_Gen_Model_B.Elevator_Height_Desired -
                Code_Gen_Model_B.Elevator_Height_Measured) <=
           Elevator_Height_Error_Threshold) && ((fabs
            (Code_Gen_Model_B.Coral_Arm_Angle_Desired -
             Code_Gen_Model_B.Coral_Arm_Angle_Measured) <=
            Coral_Arm_Angle_Error_Threshold) &&
           (Code_Gen_Model_U.Coral_TOF_Distance < Coral_Detect_Distance))) {
        Code_Gen_Model_DW.is_Actions = Code_Gen__IN_Coral_Pickup_Lower;
        Code_Gen_Model_B.State_ID = 1.1;
        Code_Gen_Model_B.Elevator_Height_Desired = Elevator_Height_Lower;
        Code_Gen_Model_B.Coral_Wheel_DC = Coral_Motor_DC_Pickup;
      }

      /* End of Inport: '<Root>/Coral_TOF_Distance' */
      break;

     default:
      /* case IN_Coral_Pickup_Raise: */
      Code_Gen_Model_B.State_ID = 1.3;
      if ((fabs(Code_Gen_Model_B.Elevator_Height_Desired -
                Code_Gen_Model_B.Elevator_Height_Measured) <=
           Elevator_Height_Error_Threshold) && ((((Code_Gen_Model_DW.Set_L1) ||
             (Code_Gen_Model_DW.Set_L2)) || (Code_Gen_Model_DW.Set_L3)) ||
           (Code_Gen_Model_DW.Set_L4))) {
        Co_exit_internal_Coral_Pickup_n();
        Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
          Code_Gen_Model_IN_Start_Angle;
        Code_Gen_Model_B.State_ID = 2.0;
        Code_Gen_Model_B.Coral_Arm_Angle_Desired = Coral_Arm_Angle_Start;
      }
      break;
    }

    if (Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel ==
        Code_Gen_Model_IN_Coral_Pickup) {
      Code_Gen_Model_Set_Level_g();
    }
  }
}

/* Function for Chart: '<S416>/Reefscape_Chart' */
static void Co_Elevator_Height_Bottom_pre_j(void)
{
  boolean_T guard1;
  Code_Gen_Model_B.State_ID = 0.1;
  Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
  guard1 = false;
  if (Code_Gen_Model_B.Elevator_Height_Measured >
      (Code_Gen_Model_B.Elevator_Height_Desired -
       Elevator_Height_Error_Threshold)) {
    guard1 = true;
  } else if ((Code_Gen_Model_B.FixPtRelationalOperator_ne) &&
             (!Code_Gen_Model_B.Compare_f)) {
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_Model_IN_Coral_Pickup;
    Code_Gen_Model_DW.is_Actions = Code_Ge_IN_Coral_Pickup_Prepare;
    Code_Gen_Model_B.State_ID = 1.0;
    Code_Gen_Model_B.Elevator_Height_Desired = Elevator_Height_Prepare;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired = -90.0;
    Code_Gen_Model_DW.is_Set_Level = Code_Gen_Model_IN_None;
    Code_Gen_Model_DW.Set_L1 = false;
    Code_Gen_Model_DW.Set_L2 = false;
    Code_Gen_Model_DW.Set_L3 = false;
    Code_Gen_Model_DW.Set_L4 = false;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_j) {
    if (Code_Gen_Model_B.Coral_Arm_Angle_Measured >=
        Coral_Arm_Angle_Start_Thresh) {
      guard1 = true;
    } else {
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        C_IN_Elevator_Height_Bottom_pre;
      Code_Gen_Model_B.Elevator_Height_Desired = Elevator_Height_Prepare;
    }
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_i) {
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_Mode_IN_End_Game_Climb;
    Code_Gen_Model_B.State_ID = 4.4;
    Code_Gen_Model_B.Elevator_Height_Desired = Elevator_Height_End_Game;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_m) {
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_Model_IN_Algae_Score;
    Code_Gen_Model_B.State_ID = 4.1;
    Code_Gen_Model_B.Elevator_Height_Desired = Elevator_Height_Algae_Score;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_ji) {
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_Mo_IN_Algae_Pickup_Low;
    Code_Gen_Model_B.State_ID = 4.2;
    Code_Gen_Model_B.Elevator_Height_Desired = Elevator_Height_Algae_Low;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
    Code_Gen_Model_B.Set_Algae_Level = 2U;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_ml) {
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_M_IN_Algae_Pickup_High;
    Code_Gen_Model_B.State_ID = 4.3;
    Code_Gen_Model_B.Elevator_Height_Desired = Elevator_Height_Algae_High;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
    Code_Gen_Model_B.Set_Algae_Level = 3U;
  }

  if (guard1) {
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code__IN_Elevator_Height_Bottom;
    Code_Gen_Model_B.State_ID = 0.2;
    Code_Gen_Model_B.Elevator_Height_Desired = Elevator_Height_Bottom;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
  }
}

/* Function for Chart: '<S416>/Reefscape_Chart' */
static void Code_Gen_Model_End_Game_Climb_f(void)
{
  Code_Gen_Model_B.State_ID = 4.4;
  Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
  if ((Code_Gen_Model_B.FixPtRelationalOperator_ne) &&
      (!Code_Gen_Model_B.Compare_f)) {
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_Model_IN_Coral_Pickup;
    Code_Gen_Model_DW.is_Actions = Code_Ge_IN_Coral_Pickup_Prepare;
    Code_Gen_Model_B.State_ID = 1.0;
    Code_Gen_Model_B.Elevator_Height_Desired = Elevator_Height_Prepare;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired = -90.0;
    Code_Gen_Model_DW.is_Set_Level = Code_Gen_Model_IN_None;
    Code_Gen_Model_DW.Set_L1 = false;
    Code_Gen_Model_DW.Set_L2 = false;
    Code_Gen_Model_DW.Set_L3 = false;
    Code_Gen_Model_DW.Set_L4 = false;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_j) {
    if (Code_Gen_Model_B.Coral_Arm_Angle_Measured >=
        Coral_Arm_Angle_Start_Thresh) {
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        Code__IN_Elevator_Height_Bottom;
      Code_Gen_Model_B.State_ID = 0.2;
      Code_Gen_Model_B.Elevator_Height_Desired = Elevator_Height_Bottom;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
    } else {
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        C_IN_Elevator_Height_Bottom_pre;
      Code_Gen_Model_B.State_ID = 0.1;
      Code_Gen_Model_B.Elevator_Height_Desired = Elevator_Height_Prepare;
    }
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_i) {
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_Mode_IN_End_Game_Climb;
    Code_Gen_Model_B.Elevator_Height_Desired = Elevator_Height_End_Game;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_m) {
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_Model_IN_Algae_Score;
    Code_Gen_Model_B.State_ID = 4.1;
    Code_Gen_Model_B.Elevator_Height_Desired = Elevator_Height_Algae_Score;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_ji) {
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_Mo_IN_Algae_Pickup_Low;
    Code_Gen_Model_B.State_ID = 4.2;
    Code_Gen_Model_B.Elevator_Height_Desired = Elevator_Height_Algae_Low;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
    Code_Gen_Model_B.Set_Algae_Level = 2U;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_ml) {
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_M_IN_Algae_Pickup_High;
    Code_Gen_Model_B.State_ID = 4.3;
    Code_Gen_Model_B.Elevator_Height_Desired = Elevator_Height_Algae_High;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
    Code_Gen_Model_B.Set_Algae_Level = 3U;
  }
}

/* Function for Chart: '<S416>/Reefscape_Chart' */
static void Elevator_CoralArm_CoralWheel_i(void)
{
  switch (Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel) {
   case Code_Gen_M_IN_Algae_Pickup_High:
    Code_Gen_Mo_Algae_Pickup_High_k();
    break;

   case Code_Gen_Mo_IN_Algae_Pickup_Low:
    Code_Gen_Mod_Algae_Pickup_Low_c();
    break;

   case Code_Gen_Model_IN_Algae_Score:
    Code_Gen_Model_B.State_ID = 4.1;
    Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
    if ((Code_Gen_Model_B.FixPtRelationalOperator_ne) &&
        (!Code_Gen_Model_B.Compare_f)) {
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        Code_Gen_Model_IN_Coral_Pickup;
      Code_Gen_Model_DW.is_Actions = Code_Ge_IN_Coral_Pickup_Prepare;
      Code_Gen_Model_B.State_ID = 1.0;
      Code_Gen_Model_B.Elevator_Height_Desired = Elevator_Height_Prepare;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired = -90.0;
      Code_Gen_Model_DW.is_Set_Level = Code_Gen_Model_IN_None;
      Code_Gen_Model_DW.Set_L1 = false;
      Code_Gen_Model_DW.Set_L2 = false;
      Code_Gen_Model_DW.Set_L3 = false;
      Code_Gen_Model_DW.Set_L4 = false;
    } else if (Code_Gen_Model_B.FixPtRelationalOperator_j) {
      if (Code_Gen_Model_B.Coral_Arm_Angle_Measured >=
          Coral_Arm_Angle_Start_Thresh) {
        Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
          Code__IN_Elevator_Height_Bottom;
        Code_Gen_Model_B.State_ID = 0.2;
        Code_Gen_Model_B.Elevator_Height_Desired = Elevator_Height_Bottom;
        Code_Gen_Model_B.Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
      } else {
        Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
          C_IN_Elevator_Height_Bottom_pre;
        Code_Gen_Model_B.State_ID = 0.1;
        Code_Gen_Model_B.Elevator_Height_Desired = Elevator_Height_Prepare;
      }
    } else if (Code_Gen_Model_B.FixPtRelationalOperator_i) {
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        Code_Gen_Mode_IN_End_Game_Climb;
      Code_Gen_Model_B.State_ID = 4.4;
      Code_Gen_Model_B.Elevator_Height_Desired = Elevator_Height_End_Game;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
    } else if (Code_Gen_Model_B.FixPtRelationalOperator_m) {
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        Code_Gen_Model_IN_Algae_Score;
      Code_Gen_Model_B.Elevator_Height_Desired = Elevator_Height_Algae_Score;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
    } else if (Code_Gen_Model_B.FixPtRelationalOperator_ji) {
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        Code_Gen_Mo_IN_Algae_Pickup_Low;
      Code_Gen_Model_B.State_ID = 4.2;
      Code_Gen_Model_B.Elevator_Height_Desired = Elevator_Height_Algae_Low;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
      Code_Gen_Model_B.Set_Algae_Level = 2U;
    } else if (Code_Gen_Model_B.FixPtRelationalOperator_ml) {
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        Code_Gen_M_IN_Algae_Pickup_High;
      Code_Gen_Model_B.State_ID = 4.3;
      Code_Gen_Model_B.Elevator_Height_Desired = Elevator_Height_Algae_High;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
      Code_Gen_Model_B.Set_Algae_Level = 3U;
    }
    break;

   case Code_Gen_Model_IN_Coral:
    Code_Gen_Model_Coral_d();
    break;

   case Code_Gen_Model_IN_Coral_Pickup:
    Code_Gen_Model_Coral_Pickup_m();
    break;

   case Code__IN_Elevator_Height_Bottom:
    Code_Gen_Model_B.State_ID = 0.2;
    Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
    if ((Code_Gen_Model_B.FixPtRelationalOperator_ne) &&
        (!Code_Gen_Model_B.Compare_f)) {
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        Code_Gen_Model_IN_Coral_Pickup;
      Code_Gen_Model_DW.is_Actions = Code_Ge_IN_Coral_Pickup_Prepare;
      Code_Gen_Model_B.State_ID = 1.0;
      Code_Gen_Model_B.Elevator_Height_Desired = Elevator_Height_Prepare;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired = -90.0;
      Code_Gen_Model_DW.is_Set_Level = Code_Gen_Model_IN_None;
      Code_Gen_Model_DW.Set_L1 = false;
      Code_Gen_Model_DW.Set_L2 = false;
      Code_Gen_Model_DW.Set_L3 = false;
      Code_Gen_Model_DW.Set_L4 = false;
    } else if (Code_Gen_Model_B.FixPtRelationalOperator_j) {
      if (Code_Gen_Model_B.Coral_Arm_Angle_Measured >=
          Coral_Arm_Angle_Start_Thresh) {
        Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
          Code__IN_Elevator_Height_Bottom;
        Code_Gen_Model_B.Elevator_Height_Desired = Elevator_Height_Bottom;
        Code_Gen_Model_B.Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
      } else {
        Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
          C_IN_Elevator_Height_Bottom_pre;
        Code_Gen_Model_B.State_ID = 0.1;
        Code_Gen_Model_B.Elevator_Height_Desired = Elevator_Height_Prepare;
      }
    } else if (Code_Gen_Model_B.FixPtRelationalOperator_i) {
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        Code_Gen_Mode_IN_End_Game_Climb;
      Code_Gen_Model_B.State_ID = 4.4;
      Code_Gen_Model_B.Elevator_Height_Desired = Elevator_Height_End_Game;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
    } else if (Code_Gen_Model_B.FixPtRelationalOperator_m) {
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        Code_Gen_Model_IN_Algae_Score;
      Code_Gen_Model_B.State_ID = 4.1;
      Code_Gen_Model_B.Elevator_Height_Desired = Elevator_Height_Algae_Score;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
    } else if (Code_Gen_Model_B.FixPtRelationalOperator_ji) {
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        Code_Gen_Mo_IN_Algae_Pickup_Low;
      Code_Gen_Model_B.State_ID = 4.2;
      Code_Gen_Model_B.Elevator_Height_Desired = Elevator_Height_Algae_Low;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
      Code_Gen_Model_B.Set_Algae_Level = 2U;
    } else if (Code_Gen_Model_B.FixPtRelationalOperator_ml) {
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        Code_Gen_M_IN_Algae_Pickup_High;
      Code_Gen_Model_B.State_ID = 4.3;
      Code_Gen_Model_B.Elevator_Height_Desired = Elevator_Height_Algae_High;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
      Code_Gen_Model_B.Set_Algae_Level = 3U;
    }
    break;

   case C_IN_Elevator_Height_Bottom_pre:
    Co_Elevator_Height_Bottom_pre_j();
    break;

   case Code_Gen_Mode_IN_End_Game_Climb:
    Code_Gen_Model_End_Game_Climb_f();
    break;

   case Code_Gen_Model_IN_Start:
    Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
    if (((Code_Gen_Model_DW.Set_L2) || (Code_Gen_Model_DW.Set_L3)) ||
        (Code_Gen_Model_DW.Set_L4)) {
      Code_Gen_Model_DW.is_Set_Level_b = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        Code_Gen_Model_IN_Coral;
      Code_Gen_Model_DW.is_Coral = Code_Ge_IN_Coral_Score_Position;
      enter_internal_Coral_Score_Po_f();
    } else {
      Code_Gen_Model_DW.is_Set_Level_b = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        Code__IN_Elevator_Height_Bottom;
      Code_Gen_Model_B.State_ID = 0.2;
      Code_Gen_Model_B.Elevator_Height_Desired = Elevator_Height_Bottom;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
    }
    break;

   default:
    /* case IN_Start_Angle: */
    Code_Gen_Model_B.State_ID = 2.0;
    if (Code_Gen_Model_B.Coral_Arm_Angle_Measured > Coral_Arm_Angle_Start_Thresh)
    {
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        Code_Gen_Model_IN_Coral;
      Code_Gen_Model_DW.is_Coral = Code_Ge_IN_Coral_Score_Position;
      enter_internal_Coral_Score_Po_f();
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
  real_T tmp[2];
  real_T rtb_Add_c;
  real_T rtb_Add_fn;
  real_T rtb_Add_ju;
  real_T rtb_Add_o5;
  real_T rtb_Algae_Wheel_Inside_DutyCycl;
  real_T rtb_Algae_Wheel_Outside_DutyCyc;
  real_T rtb_Coral_Wheel_DutyCycle_merge;
  real_T rtb_Disable_Wheels;
  real_T rtb_Enable_Wheels;
  real_T rtb_Hypot_b;
  real_T rtb_Hypot_g5;
  real_T rtb_Init;
  real_T rtb_Integral_hv;
  real_T rtb_Integral_m;
  real_T rtb_Integral_p;
  real_T rtb_Merge1;
  real_T rtb_Minus_k_idx_0;
  real_T rtb_Minus_k_idx_1;
  real_T rtb_Optimized_Module_Angle;
  real_T rtb_Product_lf;
  real_T rtb_Product_pz;
  real_T rtb_Reset_Wheel_Offsets;
  real_T rtb_Rotationmatrixfromlocalto_0;
  real_T rtb_Rotationmatrixfromlocalto_1;
  real_T rtb_Rotationmatrixfromlocalto_2;
  real_T rtb_Rotationmatrixfromlocalto_3;
  real_T rtb_Subtract1_la;
  real_T rtb_Subtract_h3;
  real_T rtb_Sum1_m;
  real_T rtb_Sum2_e;
  real_T rtb_Sum2_oc;
  real_T rtb_Switch1;
  real_T rtb_Switch1_j1;
  real_T rtb_Switch2_ah;
  real_T rtb_Switch2_az;
  real_T rtb_Switch2_e;
  real_T rtb_Switch2_g;
  real_T rtb_Switch2_gl;
  real_T rtb_Switch2_i;
  real_T rtb_Switch2_ji;
  real_T rtb_Switch2_jm;
  real_T rtb_Switch5_a;
  real_T rtb_uDLookupTable_l;
  int32_T i;
  int32_T rtb_Bias1_p;
  int32_T rtb_Num_Segments;
  int32_T s226_iter;
  uint16_T s251_iter;
  int8_T rtAction;
  int8_T rtPrevAction;
  uint8_T MultiportSwitch;
  uint8_T MultiportSwitch1;
  uint8_T Switch6;
  uint8_T Switch9;
  boolean_T FixPtRelationalOperator_p;
  boolean_T Robot_Reached_Destination;
  boolean_T exitg1;
  boolean_T rtb_AND1;
  boolean_T rtb_AND2_k;
  boolean_T rtb_AT_CS_Left_Red_Active;
  boolean_T rtb_AT_CS_Right_Blue_Active;
  boolean_T rtb_AT_CS_Right_Red_Active;
  boolean_T rtb_AT_Cage_Left_Finish_Blue_Ac;
  boolean_T rtb_AT_Cage_Left_Finish_Red_Act;
  boolean_T rtb_AT_Cage_Middle_Finish_Blue_;
  boolean_T rtb_AT_Cage_Middle_Finish_Red_A;
  boolean_T rtb_AT_Cage_Middle_Start_Red_Ac;
  boolean_T rtb_AT_Cage_Right_Finish_Blue_A;
  boolean_T rtb_AT_Cage_Right_Finish_Red_Ac;
  boolean_T rtb_AT_Cage_Right_Start_Blue_Ac;
  boolean_T rtb_AT_Cage_Right_Start_Red_Act;
  boolean_T rtb_AT_Processor_Blue_Active;
  boolean_T rtb_AT_Processor_Red_Active;
  boolean_T rtb_Compare;
  boolean_T rtb_Compare_cid;
  boolean_T rtb_Compare_pd;
  boolean_T rtb_FixPtRelationalOperator_m;
  boolean_T rtb_Is_Absolute_Steering;
  boolean_T rtb_Is_Absolute_Translation_g;
  boolean_T rtb_LogicalOperator_c;
  boolean_T rtb_OR_gh;
  boolean_T rtb_Swerve_Motors_Disabled;
  boolean_T rtb_UnitDelay_l;

  /* Sum: '<S259>/Add1' incorporates:
   *  Constant: '<S259>/Constant3'
   *  Constant: '<S259>/Constant4'
   *  Gain: '<S22>/Revolutions to Radians'
   *  Inport: '<Root>/FrontLeft_Steer_Rev'
   *  Inport: '<Root>/FrontLeft_Turn_Offset'
   *  Math: '<S259>/Math Function'
   *  Sum: '<S22>/Add'
   *  Sum: '<S259>/Add2'
   */
  Code_Gen_Model_B.FL_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.FrontLeft_Steer_Rev -
       Code_Gen_Model_U.FrontLeft_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Product: '<S19>/Product' incorporates:
   *  Constant: '<S19>/Constant1'
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Rev'
   *  Sum: '<S187>/Diff'
   *  UnitDelay: '<S187>/UD'
   *
   * Block description for '<S187>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S187>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Switch2_ji = (Code_Gen_Model_U.FrontLeft_Drive_Motor_Rev -
                    Code_Gen_Model_DW.UD_DSTATE) * 0.049546817471321378;

  /* Sum: '<S260>/Add1' incorporates:
   *  Constant: '<S260>/Constant3'
   *  Constant: '<S260>/Constant4'
   *  Gain: '<S22>/Revolutions to Radians1'
   *  Inport: '<Root>/FrontRight_Steer_Rev'
   *  Inport: '<Root>/FrontRight_Turn_Offset'
   *  Math: '<S260>/Math Function'
   *  Sum: '<S22>/Add1'
   *  Sum: '<S260>/Add2'
   */
  Code_Gen_Model_B.FR_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.FrontRight_Steer_Rev -
       Code_Gen_Model_U.FrontRight_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Product: '<S19>/Product1' incorporates:
   *  Constant: '<S19>/Constant1'
   *  Inport: '<Root>/FrontRight_Drive_Motor_Rev'
   *  Sum: '<S188>/Diff'
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
  rtb_uDLookupTable_l = (Code_Gen_Model_U.FrontRight_Drive_Motor_Rev -
    Code_Gen_Model_DW.UD_DSTATE_m) * 0.049546817471321378;

  /* Sum: '<S261>/Add1' incorporates:
   *  Constant: '<S261>/Constant3'
   *  Constant: '<S261>/Constant4'
   *  Gain: '<S22>/Revolutions to Radians2'
   *  Inport: '<Root>/BackLeft_Steer_Rev'
   *  Inport: '<Root>/BackLeft_Turn_Offset'
   *  Math: '<S261>/Math Function'
   *  Sum: '<S22>/Add2'
   *  Sum: '<S261>/Add2'
   */
  Code_Gen_Model_B.BL_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.BackLeft_Steer_Rev -
       Code_Gen_Model_U.BackLeft_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Product: '<S19>/Product2' incorporates:
   *  Constant: '<S19>/Constant1'
   *  Inport: '<Root>/BackLeft_Drive_Motor_Rev'
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
  rtb_Init = (Code_Gen_Model_U.BackLeft_Drive_Motor_Rev -
              Code_Gen_Model_DW.UD_DSTATE_i) * 0.049546817471321378;

  /* Sum: '<S262>/Add1' incorporates:
   *  Constant: '<S262>/Constant3'
   *  Constant: '<S262>/Constant4'
   *  Gain: '<S22>/Revolutions to Radians3'
   *  Inport: '<Root>/BackRight_Steer_Rev'
   *  Inport: '<Root>/BackRight_Turn_Offset'
   *  Math: '<S262>/Math Function'
   *  Sum: '<S22>/Add3'
   *  Sum: '<S262>/Add2'
   */
  Code_Gen_Model_B.BR_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.BackRight_Steer_Rev -
       Code_Gen_Model_U.BackRight_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Product: '<S19>/Product3' incorporates:
   *  Constant: '<S19>/Constant1'
   *  Inport: '<Root>/BackRight_Drive_Motor_Rev'
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
  rtb_Add_o5 = (Code_Gen_Model_U.BackRight_Drive_Motor_Rev -
                Code_Gen_Model_DW.UD_DSTATE_c) * 0.049546817471321378;

  /* SignalConversion generated from: '<S19>/Product7' incorporates:
   *  Fcn: '<S191>/r->x'
   *  Fcn: '<S191>/theta->y'
   *  Fcn: '<S192>/r->x'
   *  Fcn: '<S192>/theta->y'
   *  Fcn: '<S193>/r->x'
   *  Fcn: '<S193>/theta->y'
   *  Fcn: '<S194>/r->x'
   *  Fcn: '<S194>/theta->y'
   */
  rtb_TmpSignalConversionAtProduc[0] = rtb_Switch2_ji * cos
    (Code_Gen_Model_B.FL_Steer_Module_Angle);
  rtb_TmpSignalConversionAtProduc[1] = rtb_Switch2_ji * sin
    (Code_Gen_Model_B.FL_Steer_Module_Angle);
  rtb_TmpSignalConversionAtProduc[2] = rtb_uDLookupTable_l * cos
    (Code_Gen_Model_B.FR_Steer_Module_Angle);
  rtb_TmpSignalConversionAtProduc[3] = rtb_uDLookupTable_l * sin
    (Code_Gen_Model_B.FR_Steer_Module_Angle);
  rtb_TmpSignalConversionAtProduc[4] = rtb_Init * cos
    (Code_Gen_Model_B.BL_Steer_Module_Angle);
  rtb_TmpSignalConversionAtProduc[5] = rtb_Init * sin
    (Code_Gen_Model_B.BL_Steer_Module_Angle);
  rtb_TmpSignalConversionAtProduc[6] = rtb_Add_o5 * cos
    (Code_Gen_Model_B.BR_Steer_Module_Angle);
  rtb_TmpSignalConversionAtProduc[7] = rtb_Add_o5 * sin
    (Code_Gen_Model_B.BR_Steer_Module_Angle);

  /* Reshape: '<S132>/Reshapey' incorporates:
   *  Inport: '<Root>/Limelight_Est_Pose_X'
   *  Inport: '<Root>/Limelight_Est_Pose_Y'
   *  S-Function (sfix_udelay): '<S16>/Tapped Delay'
   *  S-Function (sfix_udelay): '<S16>/Tapped Delay1'
   *  Sum: '<S16>/Add'
   *  Sum: '<S16>/Add1'
   */
  rtb_Reshapey[0] = (Code_Gen_Model_U.Limelight_Est_Pose_X +
                     Code_Gen_Model_DW.TappedDelay_X[0]) +
    Code_Gen_Model_DW.TappedDelay_X[1];
  rtb_Reshapey[1] = (Code_Gen_Model_U.Limelight_Est_Pose_Y +
                     Code_Gen_Model_DW.TappedDelay1_X[0]) +
    Code_Gen_Model_DW.TappedDelay1_X[1];

  /* Delay: '<S132>/MemoryX' incorporates:
   *  Constant: '<S132>/X0'
   */
  if (Code_Gen_Model_DW.icLoad) {
    Code_Gen_Model_DW.MemoryX_DSTATE[0] = 0.0;
    Code_Gen_Model_DW.MemoryX_DSTATE[1] = 0.0;
  }

  /* Switch: '<S13>/Switch1' incorporates:
   *  Constant: '<S13>/Constant2'
   *  Constant: '<S13>/Constant3'
   *  Inport: '<Root>/Gyro_Angle'
   *  RelationalOperator: '<S105>/FixPt Relational Operator'
   *  Sum: '<S13>/Sum'
   *  UnitDelay: '<S105>/Delay Input1'
   *  UnitDelay: '<S13>/Unit Delay1'
   *
   * Block description for '<S105>/Delay Input1':
   *
   *  Store in Global RAM
   */
  if (Gyro_Calibration_Reset_Flag > Code_Gen_Model_DW.DelayInput1_DSTATE) {
    rtb_Switch1 = Gyro_Calibration_Reset_Degree - Code_Gen_Model_U.Gyro_Angle;
  } else {
    rtb_Switch1 = Code_Gen_Model_DW.UnitDelay1_DSTATE;
  }

  /* End of Switch: '<S13>/Switch1' */

  /* Sum: '<S13>/Subtract1' incorporates:
   *  Inport: '<Root>/Gyro_Angle'
   */
  Code_Gen_Model_B.Gyro_Angle_Calibrated_deg = Code_Gen_Model_U.Gyro_Angle +
    rtb_Switch1;

  /* Gain: '<S104>/Gain1' */
  Code_Gen_Model_B.Gyro_Angle_rad = 0.017453292519943295 *
    Code_Gen_Model_B.Gyro_Angle_Calibrated_deg;

  /* Switch: '<S13>/Switch' incorporates:
   *  Constant: '<S13>/Constant'
   *  Constant: '<S13>/Constant1'
   *  Inport: '<Root>/IsBlueAlliance'
   */
  if (Code_Gen_Model_U.IsBlueAlliance != 0.0) {
    rtb_Switch1_j1 = 0.0;
  } else {
    rtb_Switch1_j1 = 3.1415926535897931;
  }

  /* End of Switch: '<S13>/Switch' */

  /* Sum: '<S13>/Add' */
  Code_Gen_Model_B.Gyro_Angle_Field_rad = Code_Gen_Model_B.Gyro_Angle_rad +
    rtb_Switch1_j1;

  /* Trigonometry: '<S19>/Trigonometric Function' */
  rtb_Add_o5 = cos(Code_Gen_Model_B.Gyro_Angle_Field_rad);

  /* Trigonometry: '<S19>/Trigonometric Function1' */
  rtb_Switch2_g = sin(Code_Gen_Model_B.Gyro_Angle_Field_rad);

  /* SignalConversion generated from: '<S19>/Rotation matrix from local to global' */
  rtb_Rotationmatrixfromlocalto_3 = rtb_Add_o5;
  rtb_Rotationmatrixfromlocalto_1 = rtb_Switch2_g;

  /* SignalConversion generated from: '<S19>/Rotation matrix from local to global' incorporates:
   *  UnaryMinus: '<S19>/Unary Minus'
   */
  rtb_Rotationmatrixfromlocalto_2 = -rtb_Switch2_g;
  rtb_Rotationmatrixfromlocalto_0 = rtb_Add_o5;

  /* Sum: '<S186>/Diff' incorporates:
   *  UnitDelay: '<S186>/UD'
   *
   * Block description for '<S186>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S186>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Add_o5 = Code_Gen_Model_B.Gyro_Angle_Field_rad -
    Code_Gen_Model_DW.UD_DSTATE_d;

  /* Sum: '<S19>/Subtract2' incorporates:
   *  Constant: '<S19>/Constant3'
   *  Gain: '<S19>/Gain7'
   *  Math: '<S19>/Square'
   */
  rtb_Switch2_g = 1.0 - ((rtb_Add_o5 * rtb_Add_o5) * 0.16666666666666666);

  /* Gain: '<S19>/Gain6' */
  rtb_Add_o5 *= 0.5;

  /* Product: '<S19>/Product7' incorporates:
   *  Constant: '<S19>/Constant4'
   */
  for (i = 0; i < 2; i++) {
    rtb_Minus_k_idx_0 = 0.0;
    rtb_Num_Segments = 0;
    for (s226_iter = 0; s226_iter < 8; s226_iter++) {
      rtb_Minus_k_idx_0 +=
        Code_Gen_Model_ConstP.Constant4_Value[rtb_Num_Segments + i] *
        rtb_TmpSignalConversionAtProduc[s226_iter];
      rtb_Num_Segments += 2;
    }

    tmp[i] = rtb_Minus_k_idx_0;
  }

  /* End of Product: '<S19>/Product7' */

  /* Product: '<S19>/Product6' incorporates:
   *  SignalConversion generated from: '<S19>/POSE exponential matrix for improved accuracy while rotating'
   *  UnaryMinus: '<S19>/Unary Minus2'
   */
  rtb_Coral_Wheel_DutyCycle_merge = (rtb_Switch2_g * tmp[0]) + ((-rtb_Add_o5) *
    tmp[1]);
  rtb_Algae_Wheel_Outside_DutyCyc = (rtb_Add_o5 * tmp[0]) + (rtb_Switch2_g *
    tmp[1]);

  /* Product: '<S19>/Product6' incorporates:
   *  Concatenate: '<S19>/Rotation matrix from local to global'
   */
  Code_Gen_Model_B.Product6[0] = (rtb_Rotationmatrixfromlocalto_3 *
    rtb_Coral_Wheel_DutyCycle_merge) + (rtb_Rotationmatrixfromlocalto_2 *
    rtb_Algae_Wheel_Outside_DutyCyc);
  Code_Gen_Model_B.Product6[1] = (rtb_Rotationmatrixfromlocalto_1 *
    rtb_Coral_Wheel_DutyCycle_merge) + (rtb_Rotationmatrixfromlocalto_0 *
    rtb_Algae_Wheel_Outside_DutyCyc);

  /* Outputs for Enabled SubSystem: '<S159>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S185>/Enable'
   */
  /* Outputs for Enabled SubSystem: '<S152>/MeasurementUpdate' incorporates:
   *  EnablePort: '<S183>/Enable'
   */
  /* Logic: '<S16>/AND' incorporates:
   *  Constant: '<S16>/Constant'
   *  Constant: '<S16>/Constant1'
   *  Inport: '<Root>/Num_Tags_Detected'
   *  RelationalOperator: '<S16>/Relational Operator'
   */
  if ((Code_Gen_Model_U.Num_Tags_Detected > 0.0) && (KF_Enable != 0.0)) {
    Code_Gen_Model_DW.MeasurementUpdate_MODE = true;

    /* Product: '<S183>/C[k]*xhat[k|k-1]' incorporates:
     *  Constant: '<S132>/C'
     *  Delay: '<S132>/MemoryX'
     *  Product: '<S185>/Product'
     */
    rtb_Switch2_gl = (0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[1]) +
      Code_Gen_Model_DW.MemoryX_DSTATE[0];
    rtb_Minus_n[0] = rtb_Switch2_gl;

    /* Sum: '<S183>/Sum' incorporates:
     *  Constant: '<S132>/D'
     *  Product: '<S183>/C[k]*xhat[k|k-1]'
     *  Product: '<S183>/D[k]*u[k]'
     *  Sum: '<S183>/Add1'
     */
    rtb_Coral_Wheel_DutyCycle_merge = (0.0 * Code_Gen_Model_B.Product6[0]) +
      (0.0 * Code_Gen_Model_B.Product6[1]);
    rtb_Rotationmatrixfromlocalto_2 = rtb_Reshapey[0] -
      (rtb_Coral_Wheel_DutyCycle_merge + rtb_Switch2_gl);

    /* Product: '<S183>/C[k]*xhat[k|k-1]' incorporates:
     *  Constant: '<S132>/C'
     *  Delay: '<S132>/MemoryX'
     *  Product: '<S185>/Product'
     */
    rtb_Switch2_gl = (0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[0]) +
      Code_Gen_Model_DW.MemoryX_DSTATE[1];
    rtb_Minus_n[1] = rtb_Switch2_gl;

    /* Sum: '<S183>/Sum' incorporates:
     *  Constant: '<S132>/D'
     *  Product: '<S183>/C[k]*xhat[k|k-1]'
     *  Product: '<S183>/D[k]*u[k]'
     *  Sum: '<S183>/Add1'
     */
    rtb_Coral_Wheel_DutyCycle_merge = rtb_Reshapey[1] -
      (rtb_Coral_Wheel_DutyCycle_merge + rtb_Switch2_gl);
    Code_Gen_Model_DW.EnabledSubsystem_MODE = true;

    /* Product: '<S183>/Product3' incorporates:
     *  Constant: '<S133>/KalmanGainL'
     */
    Code_Gen_Model_B.Product3[0] = (0.0951249219725039 *
      rtb_Rotationmatrixfromlocalto_2) + (-2.0601714451538746E-17 *
      rtb_Coral_Wheel_DutyCycle_merge);

    /* Sum: '<S185>/Add1' incorporates:
     *  Product: '<S185>/Product'
     */
    rtb_Algae_Wheel_Outside_DutyCyc = rtb_Reshapey[0] - rtb_Minus_n[0];

    /* Product: '<S183>/Product3' incorporates:
     *  Constant: '<S133>/KalmanGainL'
     */
    Code_Gen_Model_B.Product3[1] = (1.304610855474728E-16 *
      rtb_Rotationmatrixfromlocalto_2) + (0.095124921972504 *
      rtb_Coral_Wheel_DutyCycle_merge);

    /* Sum: '<S185>/Add1' incorporates:
     *  Product: '<S185>/Product'
     */
    rtb_Coral_Wheel_DutyCycle_merge = rtb_Reshapey[1] - rtb_Minus_n[1];

    /* Product: '<S185>/Product2' incorporates:
     *  Constant: '<S133>/KalmanGainM'
     */
    Code_Gen_Model_B.Product2[0] = (0.09512492197250387 *
      rtb_Algae_Wheel_Outside_DutyCyc) + (5.9896845167210271E-17 *
      rtb_Coral_Wheel_DutyCycle_merge);
    Code_Gen_Model_B.Product2[1] = (5.9896845167210271E-17 *
      rtb_Algae_Wheel_Outside_DutyCyc) + (0.095124921972503981 *
      rtb_Coral_Wheel_DutyCycle_merge);
  } else {
    if (Code_Gen_Model_DW.MeasurementUpdate_MODE) {
      /* Disable for Product: '<S183>/Product3' incorporates:
       *  Outport: '<S183>/L*(y[k]-yhat[k|k-1])'
       */
      Code_Gen_Model_B.Product3[0] = 0.0;
      Code_Gen_Model_B.Product3[1] = 0.0;
      Code_Gen_Model_DW.MeasurementUpdate_MODE = false;
    }

    if (Code_Gen_Model_DW.EnabledSubsystem_MODE) {
      /* Disable for Product: '<S185>/Product2' incorporates:
       *  Outport: '<S185>/deltax'
       */
      Code_Gen_Model_B.Product2[0] = 0.0;
      Code_Gen_Model_B.Product2[1] = 0.0;
      Code_Gen_Model_DW.EnabledSubsystem_MODE = false;
    }
  }

  /* End of Logic: '<S16>/AND' */
  /* End of Outputs for SubSystem: '<S152>/MeasurementUpdate' */
  /* End of Outputs for SubSystem: '<S159>/Enabled Subsystem' */

  /* Sum: '<S159>/Add' incorporates:
   *  Delay: '<S132>/MemoryX'
   */
  rtb_Reshapey[0] = Code_Gen_Model_B.Product2[0] +
    Code_Gen_Model_DW.MemoryX_DSTATE[0];
  rtb_Reshapey[1] = Code_Gen_Model_B.Product2[1] +
    Code_Gen_Model_DW.MemoryX_DSTATE[1];

  /* DiscreteIntegrator: '<S19>/Accumulator2' incorporates:
   *  Constant: '<S19>/Constant'
   *  Constant: '<S1>/Constant'
   */
  if ((Odometry_Reset_IC > 0.0) &&
      (Code_Gen_Model_DW.Accumulator2_PrevResetState <= 0)) {
    Code_Gen_Model_DW.Accumulator2_DSTATE = Odometry_IC_X;
  }

  /* DiscreteIntegrator: '<S19>/Accumulator2' */
  Code_Gen_Model_B.Odom_Position_X = Code_Gen_Model_DW.Accumulator2_DSTATE;

  /* Switch: '<S16>/Switch' incorporates:
   *  Constant: '<S16>/Constant2'
   */
  if (KF_Enable != 0.0) {
    /* Switch: '<S16>/Switch' */
    Code_Gen_Model_B.KF_Position_X = rtb_Reshapey[0];
  } else {
    /* Switch: '<S16>/Switch' */
    Code_Gen_Model_B.KF_Position_X = Code_Gen_Model_B.Odom_Position_X;
  }

  /* End of Switch: '<S16>/Switch' */

  /* DiscreteIntegrator: '<S19>/Accumulator' incorporates:
   *  Constant: '<S19>/Constant'
   *  Constant: '<S1>/Constant1'
   */
  if ((Odometry_Reset_IC > 0.0) && (Code_Gen_Model_DW.Accumulator_PrevResetState
       <= 0)) {
    Code_Gen_Model_DW.Accumulator_DSTATE = Odometry_IC_Y;
  }

  /* DiscreteIntegrator: '<S19>/Accumulator' */
  Code_Gen_Model_B.Odom_Position_Y = Code_Gen_Model_DW.Accumulator_DSTATE;

  /* Switch: '<S16>/Switch1' incorporates:
   *  Constant: '<S16>/Constant2'
   */
  if (KF_Enable != 0.0) {
    /* Switch: '<S16>/Switch1' */
    Code_Gen_Model_B.KF_Position_Y = rtb_Reshapey[1];
  } else {
    /* Switch: '<S16>/Switch1' */
    Code_Gen_Model_B.KF_Position_Y = Code_Gen_Model_B.Odom_Position_Y;
  }

  /* End of Switch: '<S16>/Switch1' */

  /* RelationalOperator: '<S129>/FixPt Relational Operator' incorporates:
   *  Inport: '<Root>/Joystick_Left_B11'
   *  UnitDelay: '<S129>/Delay Input1'
   *
   * Block description for '<S129>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_B.Button_Enable_Wheels = (Code_Gen_Model_U.Joystick_Left_B11 >
    Code_Gen_Model_DW.DelayInput1_DSTATE_n);

  /* RelationalOperator: '<S130>/FixPt Relational Operator' incorporates:
   *  Inport: '<Root>/Joystick_Left_B12'
   *  UnitDelay: '<S130>/Delay Input1'
   *
   * Block description for '<S130>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_B.Button_Reset_Wheel_Offsets =
    (Code_Gen_Model_U.Joystick_Left_B12 > Code_Gen_Model_DW.DelayInput1_DSTATE_e);

  /* RelationalOperator: '<S131>/FixPt Relational Operator' incorporates:
   *  Inport: '<Root>/Joystick_Left_B13'
   *  UnitDelay: '<S131>/Delay Input1'
   *
   * Block description for '<S131>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_B.Button_Disable_Wheels = (Code_Gen_Model_U.Joystick_Left_B13 >
    Code_Gen_Model_DW.DelayInput1_DSTATE_nj);

  /* SignalConversion: '<S14>/Signal Copy1' incorporates:
   *  Inport: '<Root>/Joystick_Left_X'
   */
  Code_Gen_Model_B.Drive_Joystick_X = Code_Gen_Model_U.Joystick_Left_X;

  /* SignalConversion: '<S14>/Signal Copy2' incorporates:
   *  Inport: '<Root>/Joystick_Left_Y'
   */
  Code_Gen_Model_B.Drive_Joystick_Y = Code_Gen_Model_U.Joystick_Left_Y;

  /* SignalConversion: '<S14>/Signal Copy3' incorporates:
   *  Inport: '<Root>/Joystick_Left_Z'
   */
  Code_Gen_Model_B.Drive_Joystick_Z = Code_Gen_Model_U.Joystick_Left_Z;

  /* RelationalOperator: '<S113>/Compare' incorporates:
   *  Constant: '<S113>/Constant'
   *  Inport: '<Root>/Joystick_Left_POV'
   */
  Code_Gen_Model_B.Drive_Joystick_Z_Mode = (Code_Gen_Model_U.Joystick_Left_POV
    != -1.0);

  /* SignalConversion: '<S14>/Signal Copy5' incorporates:
   *  Inport: '<Root>/Joystick_Right_Y'
   */
  Code_Gen_Model_B.Steer_Joystick_Y = Code_Gen_Model_U.Joystick_Right_Y;

  /* SignalConversion: '<S14>/Signal Copy6' incorporates:
   *  Inport: '<Root>/Joystick_Right_Z'
   */
  Code_Gen_Model_B.Steer_Joystick_Z = Code_Gen_Model_U.Joystick_Right_Z;

  /* RelationalOperator: '<S123>/Compare' incorporates:
   *  Constant: '<S123>/Constant'
   *  Inport: '<Root>/Joystick_Left_B1'
   */
  Code_Gen_Model_B.Is_Boosting = (Code_Gen_Model_U.Joystick_Left_B1 != 0.0);

  /* RelationalOperator: '<S111>/Compare' incorporates:
   *  Constant: '<S111>/Constant'
   *  Inport: '<Root>/Joystick_Right_POV'
   */
  Code_Gen_Model_B.Face_Toward_Driver = (Code_Gen_Model_U.Joystick_Right_POV ==
    180.0);

  /* RelationalOperator: '<S112>/Compare' incorporates:
   *  Constant: '<S112>/Constant'
   *  Inport: '<Root>/Joystick_Right_POV'
   */
  Code_Gen_Model_B.Face_Right_Driver = (Code_Gen_Model_U.Joystick_Right_POV ==
    90.0);

  /* RelationalOperator: '<S114>/Compare' incorporates:
   *  Constant: '<S114>/Constant'
   *  Inport: '<Root>/Joystick_Right_POV'
   */
  Code_Gen_Model_B.Face_Left_Driver = (Code_Gen_Model_U.Joystick_Right_POV ==
    270.0);

  /* RelationalOperator: '<S107>/Compare' incorporates:
   *  Constant: '<S107>/Constant'
   *  Inport: '<Root>/Joystick_Right_POV'
   */
  Code_Gen_Model_B.Face_Away_Driver = (Code_Gen_Model_U.Joystick_Right_POV ==
    0.0);

  /* Sum: '<S17>/Add' incorporates:
   *  Constant: '<S17>/Constant'
   *  Gain: '<S17>/Convert meters to inches1'
   *  Inport: '<Root>/Limelight_Tag_X'
   */
  Code_Gen_Model_B.Limelight_Tag_Corrected_X = (39.37008 *
    Code_Gen_Model_U.Limelight_Tag_X) + Limelight_Tag_X_Offset;

  /* Sum: '<S17>/Add1' incorporates:
   *  Constant: '<S17>/Constant1'
   *  Gain: '<S17>/Convert meters to inches'
   *  Inport: '<Root>/Limelight_Tag_Y'
   */
  Code_Gen_Model_B.Limelight_Tag_Corrected_Y = (39.37008 *
    Code_Gen_Model_U.Limelight_Tag_Y) + Limelight_Tag_Y_Offset;

  /* Sum: '<S17>/Add2' incorporates:
   *  Constant: '<S17>/Constant2'
   *  Inport: '<Root>/Limelight_Tag_Angle'
   */
  Code_Gen_Model_B.Limelight_Tag_Corrected_Angle =
    Code_Gen_Model_U.Limelight_Tag_Angle + Limelight_Tag_Angle_Offset;

  /* RelationalOperator: '<S121>/Compare' incorporates:
   *  Constant: '<S121>/Constant'
   *  Inport: '<Root>/Joystick_Left_B3'
   */
  Code_Gen_Model_B.Align_Left = (Code_Gen_Model_U.Joystick_Left_B3 != 0.0);

  /* RelationalOperator: '<S120>/Compare' incorporates:
   *  Constant: '<S120>/Constant'
   *  Inport: '<Root>/Joystick_Left_B4'
   */
  Code_Gen_Model_B.Align_Right = (Code_Gen_Model_U.Joystick_Left_B4 != 0.0);

  /* RelationalOperator: '<S122>/Compare' incorporates:
   *  Constant: '<S122>/Constant'
   *  Inport: '<Root>/Joystick_Left_B2'
   */
  Code_Gen_Model_B.Align_Center = (Code_Gen_Model_U.Joystick_Left_B2 != 0.0);

  /* RelationalOperator: '<S119>/Compare' incorporates:
   *  Constant: '<S119>/Constant'
   *  Inport: '<Root>/Joystick_Right_B3'
   */
  Code_Gen_Model_B.Coral_Station_Left = (Code_Gen_Model_U.Joystick_Right_B3 !=
    0.0);

  /* RelationalOperator: '<S118>/Compare' incorporates:
   *  Constant: '<S118>/Constant'
   *  Inport: '<Root>/Joystick_Right_B4'
   */
  Code_Gen_Model_B.Coral_Station_Right = (Code_Gen_Model_U.Joystick_Right_B4 !=
    0.0);

  /* RelationalOperator: '<S117>/Compare' incorporates:
   *  Constant: '<S117>/Constant'
   *  Inport: '<Root>/Joystick_Right_B2'
   */
  Code_Gen_Model_B.Processor = (Code_Gen_Model_U.Joystick_Right_B2 != 0.0);

  /* RelationalOperator: '<S115>/Compare' incorporates:
   *  Constant: '<S115>/Constant'
   *  Inport: '<Root>/Joystick_Right_B7'
   */
  Code_Gen_Model_B.Cage_Left_Start = (Code_Gen_Model_U.Joystick_Right_B7 != 0.0);

  /* RelationalOperator: '<S116>/Compare' incorporates:
   *  Constant: '<S116>/Constant'
   *  Inport: '<Root>/Joystick_Right_B6'
   */
  Code_Gen_Model_B.Cage_Middle_Start = (Code_Gen_Model_U.Joystick_Right_B6 !=
    0.0);

  /* RelationalOperator: '<S124>/Compare' incorporates:
   *  Constant: '<S124>/Constant'
   *  Inport: '<Root>/Joystick_Right_B5'
   */
  Code_Gen_Model_B.Cage_Right_Start = (Code_Gen_Model_U.Joystick_Right_B5 != 0.0);

  /* RelationalOperator: '<S125>/Compare' incorporates:
   *  Constant: '<S125>/Constant'
   *  Inport: '<Root>/Joystick_Right_B8'
   */
  Code_Gen_Model_B.Cage_Left_Finish = (Code_Gen_Model_U.Joystick_Right_B8 != 0.0);

  /* RelationalOperator: '<S126>/Compare' incorporates:
   *  Constant: '<S126>/Constant'
   *  Inport: '<Root>/Joystick_Right_B9'
   */
  Code_Gen_Model_B.Cage_Middle_Finish = (Code_Gen_Model_U.Joystick_Right_B9 !=
    0.0);

  /* RelationalOperator: '<S127>/Compare' incorporates:
   *  Constant: '<S127>/Constant'
   *  Inport: '<Root>/Joystick_Right_B10'
   */
  Code_Gen_Model_B.Cage_Right_Finish = (Code_Gen_Model_U.Joystick_Right_B10 !=
    0.0);

  /* RelationalOperator: '<S106>/Compare' incorporates:
   *  Constant: '<S106>/Constant'
   *  Inport: '<Root>/Gamepad_POV'
   */
  Code_Gen_Model_B.Gamepad_POV_Up = (Code_Gen_Model_U.Gamepad_POV == 0.0);

  /* RelationalOperator: '<S108>/Compare' incorporates:
   *  Constant: '<S108>/Constant'
   *  Inport: '<Root>/Gamepad_POV'
   */
  Code_Gen_Model_B.Gamepad_POV_Down = (Code_Gen_Model_U.Gamepad_POV == 180.0);

  /* RelationalOperator: '<S110>/Compare' incorporates:
   *  Constant: '<S110>/Constant'
   *  Inport: '<Root>/Gamepad_POV'
   */
  Code_Gen_Model_B.Gamepad_POV_Left = (Code_Gen_Model_U.Gamepad_POV == 270.0);

  /* RelationalOperator: '<S109>/Compare' incorporates:
   *  Constant: '<S109>/Constant'
   *  Inport: '<Root>/Gamepad_POV'
   */
  Code_Gen_Model_B.Gamepad_POV_Right = (Code_Gen_Model_U.Gamepad_POV == 90.0);

  /* RelationalOperator: '<S4>/Compare' incorporates:
   *  Constant: '<S4>/Constant'
   *  Inport: '<Root>/Elevator_Limit_Switch_Bottom'
   */
  rtb_Compare = (Code_Gen_Model_U.Elevator_Limit_Switch_Bottom != 0.0);

  /* RelationalOperator: '<S5>/Compare' incorporates:
   *  Constant: '<S5>/Constant'
   *  Inport: '<Root>/Elevator_Limit_Switch_Top'
   */
  rtb_Compare_pd = (Code_Gen_Model_U.Elevator_Limit_Switch_Top != 0.0);

  /* Gain: '<S11>/Gain1' incorporates:
   *  Inport: '<Root>/Elevator_Motor_Rev'
   */
  Code_Gen_Model_B.Elevator_Height_Measured_Raw = Elevator_MotorRev_to_Inch *
    Code_Gen_Model_U.Elevator_Motor_Rev;

  /* UnitDelay: '<S1>/Unit Delay' */
  rtb_UnitDelay_l = Code_Gen_Model_DW.UnitDelay_DSTATE_mph;

  /* Switch: '<S11>/Switch1' incorporates:
   *  RelationalOperator: '<S100>/FixPt Relational Operator'
   *  RelationalOperator: '<S101>/FixPt Relational Operator'
   *  RelationalOperator: '<S99>/FixPt Relational Operator'
   *  Switch: '<S11>/Switch2'
   *  Switch: '<S11>/Switch3'
   *  UnitDelay: '<S100>/Delay Input1'
   *  UnitDelay: '<S101>/Delay Input1'
   *  UnitDelay: '<S1>/Unit Delay'
   *  UnitDelay: '<S99>/Delay Input1'
   *
   * Block description for '<S100>/Delay Input1':
   *
   *  Store in Global RAM
   *
   * Block description for '<S101>/Delay Input1':
   *
   *  Store in Global RAM
   *
   * Block description for '<S99>/Delay Input1':
   *
   *  Store in Global RAM
   */
  if (((int32_T)rtb_Compare) < ((int32_T)Code_Gen_Model_DW.DelayInput1_DSTATE_b))
  {
    /* Switch: '<S11>/Switch1' */
    Code_Gen_Model_B.Elevator_Height_Offset =
      Code_Gen_Model_B.Elevator_Height_Measured_Raw;
  } else if (((int32_T)rtb_Compare_pd) < ((int32_T)
              Code_Gen_Model_DW.DelayInput1_DSTATE_o1)) {
    /* Switch: '<S11>/Switch1' incorporates:
     *  Constant: '<S11>/Constant1'
     *  Sum: '<S11>/Subtract1'
     *  Switch: '<S11>/Switch2'
     */
    Code_Gen_Model_B.Elevator_Height_Offset =
      Code_Gen_Model_B.Elevator_Height_Measured_Raw - Elevator_Height_Top_Reset;
  } else if (((int32_T)Code_Gen_Model_DW.UnitDelay_DSTATE_mph) > ((int32_T)
              Code_Gen_Model_DW.DelayInput1_DSTATE_po)) {
    /* Switch: '<S11>/Switch1' incorporates:
     *  Constant: '<S11>/Constant2'
     *  Sum: '<S11>/Subtract2'
     *  Switch: '<S11>/Switch2'
     *  Switch: '<S11>/Switch3'
     */
    Code_Gen_Model_B.Elevator_Height_Offset =
      Code_Gen_Model_B.Elevator_Height_Measured_Raw -
      Elevator_Height_PickupLower_Reset;
  }

  /* End of Switch: '<S11>/Switch1' */

  /* Switch: '<S11>/Switch' incorporates:
   *  Logic: '<S11>/Logical Operator'
   */
  if (rtb_Compare || rtb_Compare_pd) {
    /* Switch: '<S11>/Switch4' */
    if (rtb_Compare) {
      /* Switch: '<S11>/Switch' incorporates:
       *  Constant: '<S11>/Constant'
       */
      Code_Gen_Model_B.Elevator_Height_Measured = 0.0;
    } else {
      /* Switch: '<S11>/Switch' incorporates:
       *  Constant: '<S11>/Constant3'
       */
      Code_Gen_Model_B.Elevator_Height_Measured = Elevator_Height_Top_Reset;
    }

    /* End of Switch: '<S11>/Switch4' */
  } else {
    /* Switch: '<S11>/Switch' incorporates:
     *  Sum: '<S11>/Subtract'
     */
    Code_Gen_Model_B.Elevator_Height_Measured =
      Code_Gen_Model_B.Elevator_Height_Measured_Raw -
      Code_Gen_Model_B.Elevator_Height_Offset;
  }

  /* End of Switch: '<S11>/Switch' */

  /* Bias: '<S1>/Add Constant' incorporates:
   *  Inport: '<Root>/Coral_Arm_Angle_Measured_Raw'
   */
  Code_Gen_Model_B.Coral_Arm_Angle_Measured =
    Code_Gen_Model_U.Coral_Arm_Angle_Measured_Raw - 180.0;

  /* RelationalOperator: '<S6>/Compare' incorporates:
   *  Constant: '<S6>/Constant'
   *  Inport: '<Root>/Coral_Limit_Switch'
   */
  Code_Gen_Model_B.Compare = (Code_Gen_Model_U.Coral_Limit_Switch != 0.0);

  /* RelationalOperator: '<S7>/Compare' incorporates:
   *  Constant: '<S7>/Constant'
   *  Inport: '<Root>/Algae_Limit_Switch'
   */
  Code_Gen_Model_B.Compare_f = (Code_Gen_Model_U.Algae_Limit_Switch != 0.0);

  /* SwitchCase: '<S1>/Switch Case' incorporates:
   *  Inport: '<Root>/GameState'
   */
  rtPrevAction = Code_Gen_Model_DW.SwitchCase_ActiveSubsystem;
  rtb_Minus_k_idx_0 = trunc(Code_Gen_Model_U.GameState);
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
    /* Outputs for IfAction SubSystem: '<S1>/Disabled' incorporates:
     *  ActionPort: '<S9>/Action Port'
     */
    /* SignalConversion generated from: '<S9>/Spline_Ref_Poses' incorporates:
     *  Merge: '<S18>/Merge8'
     */
    memset(&rtb_Spline_Ref_Poses[0], 0, 40U * (sizeof(real_T)));

    /* Merge: '<S18>/Merge1' incorporates:
     *  Constant: '<S9>/Constant1'
     *  SignalConversion generated from: '<S9>/Steering_Abs_Cmd'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd = 0.0;

    /* Merge: '<S18>/Merge2' incorporates:
     *  Constant: '<S9>/Constant2'
     *  SignalConversion generated from: '<S9>/Steering_Rel_Cmd'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd = 0.0;

    /* Merge: '<S18>/Merge3' incorporates:
     *  Constant: '<S9>/Constant3'
     *  SignalConversion generated from: '<S9>/Translation_Angle'
     */
    Code_Gen_Model_B.Translation_Angle = 0.0;

    /* Merge: '<S18>/Merge4' incorporates:
     *  Constant: '<S9>/Constant4'
     *  SignalConversion generated from: '<S9>/Translation_Speed'
     */
    Code_Gen_Model_B.Translation_Speed = 0.0;

    /* SignalConversion generated from: '<S9>/Is_Absolute_Translation' incorporates:
     *  Constant: '<S9>/Constant5'
     */
    rtb_Is_Absolute_Translation_g = true;

    /* SignalConversion generated from: '<S9>/Is_Absolute_Steering' incorporates:
     *  Constant: '<S9>/Constant6'
     */
    rtb_Is_Absolute_Steering = true;

    /* Merge: '<S18>/Merge7' incorporates:
     *  Constant: '<S9>/Constant7'
     *  SignalConversion generated from: '<S9>/Spline_Enable'
     */
    Code_Gen_Model_B.Spline_Enable = false;

    /* Merge: '<S18>/Merge9' incorporates:
     *  Constant: '<S9>/Constant9'
     *  SignalConversion generated from: '<S9>/Spline_Num_Poses'
     */
    Code_Gen_Model_B.Spline_Num_Poses = 10.0;

    /* Merge: '<S18>/Merge10' incorporates:
     *  Constant: '<S9>/Constant10'
     *  SignalConversion generated from: '<S9>/Test_Mode'
     */
    Code_Gen_Model_B.Test_Mode = false;

    /* SignalConversion generated from: '<S9>/Enable_Wheels' incorporates:
     *  Constant: '<S9>/Constant18'
     */
    rtb_Enable_Wheels = 0.0;

    /* SignalConversion generated from: '<S9>/Reset_Wheel_Offsets' incorporates:
     *  Constant: '<S9>/Constant13'
     */
    rtb_Reset_Wheel_Offsets = 0.0;

    /* SignalConversion generated from: '<S9>/Disable_Wheels' incorporates:
     *  Constant: '<S9>/Constant14'
     */
    rtb_Disable_Wheels = 0.0;

    /* SignalConversion generated from: '<S9>/Swerve_Motors_Disabled' incorporates:
     *  Constant: '<S9>/Constant12'
     */
    rtb_Swerve_Motors_Disabled = false;

    /* Merge: '<S18>/Merge12' incorporates:
     *  Constant: '<S9>/Constant15'
     *  SignalConversion generated from: '<S9>/Reefscape_Motors_Enable'
     */
    Code_Gen_Model_B.Reefscape_Motors_Enable_merge = false;

    /* Merge: '<S18>/Merge11' incorporates:
     *  Constant: '<S9>/Constant11'
     *  SignalConversion generated from: '<S9>/Elevator_Height_Desired'
     */
    Code_Gen_Model_B.Elevator_Height_Desired_merge = 0.0;

    /* Merge: '<S18>/Merge13' incorporates:
     *  Constant: '<S9>/Constant16'
     *  SignalConversion generated from: '<S9>/Coral_Arm_Angle_Desired'
     */
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_merge = -90.0;

    /* SignalConversion generated from: '<S9>/Coral_Wheel_DutyCycle' incorporates:
     *  Constant: '<S9>/Constant17'
     */
    rtb_Coral_Wheel_DutyCycle_merge = 0.0;

    /* SignalConversion generated from: '<S9>/Algae_Wheel_Outside_DutyCycle' incorporates:
     *  Constant: '<S9>/Constant19'
     */
    rtb_Algae_Wheel_Outside_DutyCyc = 0.0;

    /* SignalConversion generated from: '<S9>/Algae_Wheel_Inside_DutyCycle' incorporates:
     *  Constant: '<S9>/Constant20'
     */
    rtb_Algae_Wheel_Inside_DutyCycl = 0.0;

    /* Merge: '<S18>/Merge21' incorporates:
     *  Constant: '<S9>/Constant21'
     *  SignalConversion generated from: '<S9>/Elevator_LowerPickup_Reset'
     */
    Code_Gen_Model_B.Elevator_LowerPickup_Reset_merg = false;

    /* SignalConversion generated from: '<S9>/Coral_Pickup_Lower_Wait_State' incorporates:
     *  Constant: '<S9>/Constant22'
     */
    rtb_Compare_cid = false;

    /* Merge: '<S18>/Merge23' incorporates:
     *  Constant: '<S9>/Constant23'
     *  SignalConversion generated from: '<S9>/Swerve_Drive_Integral_Enable'
     */
    Code_Gen_Model_B.Swerve_Drive_Integral_Enable = false;

    /* SignalConversion generated from: '<S9>/AT_On_Target' incorporates:
     *  Constant: '<S9>/Constant24'
     */
    Robot_Reached_Destination = false;

    /* Merge: '<S18>/Merge24' incorporates:
     *  SignalConversion generated from: '<S9>/Auto_State_ID'
     *  UnitDelay: '<S1>/Unit Delay1'
     */
    Code_Gen_Model_B.State_ID_merge = Code_Gen_Model_DW.UnitDelay1_DSTATE_b;

    /* End of Outputs for SubSystem: '<S1>/Disabled' */
    break;

   case 1:
    if (rtAction != rtPrevAction) {
      /* InitializeConditions for IfAction SubSystem: '<S1>/Autonomous' incorporates:
       *  ActionPort: '<S2>/Action Port'
       */
      /* InitializeConditions for SwitchCase: '<S1>/Switch Case' incorporates:
       *  UnitDelay: '<S26>/Unit Delay'
       *  UnitDelay: '<S26>/Unit Delay1'
       *  UnitDelay: '<S27>/Unit Delay'
       *  UnitDelay: '<S27>/Unit Delay1'
       *  UnitDelay: '<S54>/Delay Input1'
       *  UnitDelay: '<S55>/Delay Input1'
       *  UnitDelay: '<S58>/Delay Input1'
       *  UnitDelay: '<S59>/Delay Input1'
       *  UnitDelay: '<S62>/Delay Input1'
       *  UnitDelay: '<S63>/Delay Input1'
       *
       * Block description for '<S54>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S55>/Delay Input1':
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
       */
      Code_Gen_Model_DW.UnitDelay1_DSTATE_p = false;
      Code_Gen_Model_DW.DelayInput1_DSTATE_ne = false;
      Code_Gen_Model_DW.DelayInput1_DSTATE_ff = false;
      Code_Gen_Model_DW.DelayInput1_DSTATE_ev = false;
      Code_Gen_Model_DW.DelayInput1_DSTATE_os = false;
      Code_Gen_Model_DW.DelayInput1_DSTATE_b3 = false;
      Code_Gen_Model_DW.DelayInput1_DSTATE_ae = false;
      Code_Gen_Model_DW.UnitDelay_DSTATE_i3 = false;
      Code_Gen_Model_DW.UnitDelay1_DSTATE_ek = 0.0;
      Code_Gen_Model_DW.UnitDelay_DSTATE_b = 0.0;

      /* End of InitializeConditions for SubSystem: '<S1>/Autonomous' */

      /* SystemReset for IfAction SubSystem: '<S1>/Autonomous' incorporates:
       *  ActionPort: '<S2>/Action Port'
       */
      /* SystemReset for SwitchCase: '<S1>/Switch Case' incorporates:
       *  Chart: '<S26>/Reefscape_Auto_Steps'
       *  Chart: '<S29>/Reefscape_Chart'
       *  Merge: '<S18>/Merge7'
       */
      Code_Gen_Model_DW.is_active_c5_Code_Gen_Model = 0U;
      Code_Gen_Model_DW.is_c5_Code_Gen_Model = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Center = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Path_to_Reef = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Left_and_Right = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Path_to_Reef_1 = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Path_to_Reef_2 = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Path_to_Reef_3 = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_B.Align_Left_d = false;
      Code_Gen_Model_B.Align_Right_i = false;
      Code_Gen_Model_B.Align_Center_b = false;
      Code_Gen_Model_B.Gamepad_B4_Y_out = false;
      Code_Gen_Model_B.Gamepad_Start_out = false;
      Code_Gen_Model_B.Gamepad_Back_out = false;
      Code_Gen_Model_B.Gamepad_LT_out = false;
      Code_Gen_Model_B.Gamepad_POV_Down_o = false;
      Code_Gen_Model_B.Gamepad_POV_Left_d = false;
      Code_Gen_Model_B.Spline_Enable = false;
      Code_Gen_Model_B.Path_ID = 0U;
      Code_Gen_Model_DW.timer_n = 0.0;
      Code_Gen_Model_B.Translation_Speed_k = 0.0;
      Code_Gen_Model_B.Translation_Angle_c = 0.0;
      Code_Gen_Model_DW.is_active_c6_Code_Gen_Model = 0U;
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_o =
        Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Coral_n = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Coral_Eject_n = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Level_2_c = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Level_3_l = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Level_4_Teleop_l = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Coral_Score_Position_k =
        Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Actions_h = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Set_Level_n = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Set_Level_a = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Algae_Wheels_p = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_AT_On_Target_Timer_o =
        Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_B.Elevator_Height_Desired_h = 0.0;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_f = 0.0;
      Code_Gen_Model_B.Coral_Wheel_DC_a = 0.0;
      Code_Gen_Model_DW.timer_n2 = 0.0;
      Code_Gen_Model_B.Elevator_LowerPickup_Reset_g = false;
      Code_Gen_Model_DW.Set_L1_j = false;
      Code_Gen_Model_DW.Set_L2_b = false;
      Code_Gen_Model_DW.Set_L3_f = false;
      Code_Gen_Model_DW.Set_L4_d = false;
      Code_Gen_Model_B.Coral_Pickup_Lower_Wait_State_m = false;
      Code_Gen_Model_B.Set_Coral_Level_j = 0U;
      Code_Gen_Model_B.Set_Algae_Level_p = 0U;
      Code_Gen_Model_DW.timer_robot_target_g = 0.0;
      Code_Gen_Model_B.Coral_Score_j = false;

      /* End of SystemReset for SubSystem: '<S1>/Autonomous' */
    }

    /* Outputs for IfAction SubSystem: '<S1>/Autonomous' incorporates:
     *  ActionPort: '<S2>/Action Port'
     */
    /* MultiPortSwitch: '<S28>/Multiport Switch' incorporates:
     *  Constant: '<S26>/Constant1'
     */
    switch ((int32_T)Auto_Starting_Position) {
     case 1:
      /* Switch: '<S28>/Switch' incorporates:
       *  Inport: '<Root>/IsBlueAlliance'
       *  MultiPortSwitch: '<S28>/Multiport Switch1'
       *  Switch: '<S28>/Switch3'
       */
      if (Code_Gen_Model_U.IsBlueAlliance != 0.0) {
        /* MultiPortSwitch: '<S28>/Multiport Switch' incorporates:
         *  Constant: '<S28>/Constant3'
         */
        MultiportSwitch = 1U;

        /* MultiPortSwitch: '<S28>/Multiport Switch1' incorporates:
         *  Constant: '<S28>/Constant17'
         */
        MultiportSwitch1 = 2U;
      } else {
        /* MultiPortSwitch: '<S28>/Multiport Switch' incorporates:
         *  Constant: '<S28>/Constant4'
         */
        MultiportSwitch = 15U;

        /* MultiPortSwitch: '<S28>/Multiport Switch1' incorporates:
         *  Constant: '<S28>/Constant18'
         */
        MultiportSwitch1 = 16U;
      }

      /* End of Switch: '<S28>/Switch' */
      break;

     case 2:
      /* Switch: '<S28>/Switch1' incorporates:
       *  Inport: '<Root>/IsBlueAlliance'
       *  MultiPortSwitch: '<S28>/Multiport Switch1'
       *  Switch: '<S28>/Switch4'
       */
      if (Code_Gen_Model_U.IsBlueAlliance != 0.0) {
        /* MultiPortSwitch: '<S28>/Multiport Switch' incorporates:
         *  Constant: '<S28>/Constant6'
         */
        MultiportSwitch = 9U;

        /* MultiPortSwitch: '<S28>/Multiport Switch1' incorporates:
         *  Constant: '<S28>/Constant19'
         */
        MultiportSwitch1 = 10U;
      } else {
        /* MultiPortSwitch: '<S28>/Multiport Switch' incorporates:
         *  Constant: '<S28>/Constant11'
         */
        MultiportSwitch = 19U;

        /* MultiPortSwitch: '<S28>/Multiport Switch1' incorporates:
         *  Constant: '<S28>/Constant14'
         */
        MultiportSwitch1 = 20U;
      }

      /* End of Switch: '<S28>/Switch1' */
      break;

     default:
      /* Switch: '<S28>/Switch2' incorporates:
       *  Inport: '<Root>/IsBlueAlliance'
       *  MultiPortSwitch: '<S28>/Multiport Switch1'
       *  Switch: '<S28>/Switch5'
       */
      if (Code_Gen_Model_U.IsBlueAlliance != 0.0) {
        /* MultiPortSwitch: '<S28>/Multiport Switch' incorporates:
         *  Constant: '<S28>/Constant13'
         */
        MultiportSwitch = 5U;

        /* MultiPortSwitch: '<S28>/Multiport Switch1' incorporates:
         *  Constant: '<S28>/Constant16'
         */
        MultiportSwitch1 = 6U;
      } else {
        /* MultiPortSwitch: '<S28>/Multiport Switch' incorporates:
         *  Constant: '<S28>/Constant12'
         */
        MultiportSwitch = 11U;

        /* MultiPortSwitch: '<S28>/Multiport Switch1' incorporates:
         *  Constant: '<S28>/Constant15'
         */
        MultiportSwitch1 = 12U;
      }

      /* End of Switch: '<S28>/Switch2' */
      break;
    }

    /* End of MultiPortSwitch: '<S28>/Multiport Switch' */

    /* Switch: '<S28>/Switch6' incorporates:
     *  Constant: '<S26>/Constant1'
     *  Constant: '<S50>/Constant'
     *  Inport: '<Root>/IsBlueAlliance'
     *  RelationalOperator: '<S50>/Compare'
     *  Switch: '<S28>/Switch11'
     *  Switch: '<S28>/Switch8'
     *  Switch: '<S28>/Switch9'
     */
    if (Auto_Starting_Position <= 2.0) {
      /* Switch: '<S28>/Switch7' incorporates:
       *  Inport: '<Root>/IsBlueAlliance'
       *  Switch: '<S28>/Switch10'
       */
      if (Code_Gen_Model_U.IsBlueAlliance != 0.0) {
        /* Switch: '<S28>/Switch6' incorporates:
         *  Constant: '<S28>/Constant20'
         */
        Switch6 = 3U;

        /* Switch: '<S28>/Switch9' incorporates:
         *  Constant: '<S28>/Constant24'
         */
        Switch9 = 4U;
      } else {
        /* Switch: '<S28>/Switch6' incorporates:
         *  Constant: '<S28>/Constant21'
         */
        Switch6 = 17U;

        /* Switch: '<S28>/Switch9' incorporates:
         *  Constant: '<S28>/Constant25'
         */
        Switch9 = 18U;
      }

      /* End of Switch: '<S28>/Switch7' */
    } else if (Code_Gen_Model_U.IsBlueAlliance != 0.0) {
      /* Switch: '<S28>/Switch8' incorporates:
       *  Constant: '<S28>/Constant22'
       *  Switch: '<S28>/Switch6'
       */
      Switch6 = 7U;

      /* Switch: '<S28>/Switch11' incorporates:
       *  Constant: '<S28>/Constant26'
       *  Switch: '<S28>/Switch9'
       */
      Switch9 = 8U;
    } else {
      /* Switch: '<S28>/Switch6' incorporates:
       *  Constant: '<S28>/Constant23'
       *  Switch: '<S28>/Switch8'
       */
      Switch6 = 13U;

      /* Switch: '<S28>/Switch9' incorporates:
       *  Constant: '<S28>/Constant27'
       *  Switch: '<S28>/Switch11'
       */
      Switch9 = 14U;
    }

    /* End of Switch: '<S28>/Switch6' */

    /* UnitDelay: '<S26>/Unit Delay1' */
    Code_Gen_Model_B.UnitDelay1_d = Code_Gen_Model_DW.UnitDelay1_DSTATE_p;

    /* Chart: '<S26>/Reefscape_Auto_Steps' incorporates:
     *  Constant: '<S26>/Constant1'
     *  UnitDelay: '<S15>/Unit Delay'
     */
    if (Code_Gen_Model_DW.is_active_c5_Code_Gen_Model == 0U) {
      Code_Gen_Model_DW.is_active_c5_Code_Gen_Model = 1U;
      if ((Auto_Starting_Position == 1.0) || (Auto_Starting_Position == 3.0)) {
        Code_Gen_Model_DW.is_c5_Code_Gen_Model = Code_Gen_Mode_IN_Left_and_Right;
        Code_Gen_Model_DW.is_Left_and_Right = Code_Gen_Mode_IN_Path_to_Reef_1;
        Code_Gen_Model_B.Auto_Step_ID = 1U;
        Code_Gen_Model_B.Translation_Speed_k = 0.0;
        Code_Gen_Model_B.Translation_Angle_c = 0.0;
        Code_Gen_Model_DW.is_Path_to_Reef_1 = Code_Gen_Model_IN_Set_L4;

        /* Merge: '<S18>/Merge7' */
        Code_Gen_Model_B.Spline_Enable = false;
        Code_Gen_Model_DW.timer_n = 0.0;
      } else {
        Code_Gen_Model_DW.is_c5_Code_Gen_Model = Code_Gen_Model_IN_Center;
        Code_Gen_Model_DW.is_Center = Code_Gen_Model_IN_Path_to_Reef;
        Code_Gen_Model_B.Auto_Step_ID = 101U;
        Code_Gen_Model_B.Translation_Speed_k = 0.0;
        Code_Gen_Model_B.Translation_Angle_c = 0.0;
        Code_Gen_Model_DW.is_Path_to_Reef = Code_Gen_Model_IN_Set_L4;

        /* Merge: '<S18>/Merge7' */
        Code_Gen_Model_B.Spline_Enable = false;
        Code_Gen_Model_DW.timer_n = 0.0;
      }
    } else if (Code_Gen_Model_DW.is_c5_Code_Gen_Model ==
               Code_Gen_Model_IN_Center) {
      switch (Code_Gen_Model_DW.is_Center) {
       case Code_IN_Adjust_Height_for_Algae:
        Code_Gen_Model_B.Auto_Step_ID = 104U;

        /* Merge: '<S18>/Merge7' */
        Code_Gen_Model_B.Spline_Enable = false;
        Code_Gen_Model_B.Translation_Speed_k = 0.0;
        Code_Gen_Model_B.Translation_Angle_c = 0.0;
        if (Code_Gen_Model_DW.timer_n >= Auto_Algae_Height_Time) {
          Code_Gen_Model_B.Gamepad_POV_Left_d = false;
          Code_Gen_Model_DW.is_Center = IN_Drive_Forward_and_Collect_Al;
          Code_Gen_Model_B.Auto_Step_ID = 105U;
          Code_Gen_Model_B.Translation_Speed_k = Auto_Speed_Algae;
          Code_Gen_Model_B.Gamepad_LT_out = true;
          Code_Gen_Model_B.Align_Center_b = true;
          Code_Gen_Model_DW.timer_n = 0.0;
        } else {
          Code_Gen_Model_DW.timer_n += 0.02;
        }
        break;

       case IN_Back_Up_from_Reef_Coral_Scor:
        Code_Gen_Model_B.Auto_Step_ID = 103U;

        /* Merge: '<S18>/Merge7' */
        Code_Gen_Model_B.Spline_Enable = false;
        Code_Gen_Model_B.Translation_Speed_k = Auto_Speed_Reef;
        Code_Gen_Model_B.Translation_Angle_c = 3.1415926535897931;
        if (Code_Gen_Model_DW.timer_n >= Auto_Backup_Time_Reef) {
          Code_Gen_Model_DW.is_Center = Code_IN_Adjust_Height_for_Algae;
          Code_Gen_Model_B.Auto_Step_ID = 104U;
          Code_Gen_Model_B.Translation_Speed_k = 0.0;
          Code_Gen_Model_B.Translation_Angle_c = 0.0;
          Code_Gen_Model_B.Gamepad_POV_Left_d = true;
          Code_Gen_Model_DW.timer_n = 0.0;
        } else {
          Code_Gen_Model_DW.timer_n += 0.02;
        }
        break;

       case IN_Back_Up_from_Reef_Coral_Sc_o:
        Code_Gen_Model_B.Auto_Step_ID = 123U;

        /* Merge: '<S18>/Merge7' */
        Code_Gen_Model_B.Spline_Enable = false;
        Code_Gen_Model_B.Translation_Speed_k = 0.0;
        Code_Gen_Model_B.Translation_Angle_c = 0.0;
        if (Code_Gen_Model_DW.timer_n >= Auto_Backup_Time_Reef) {
          Code_Gen_Model_DW.is_Center = Code_Gen_Mod_IN_Wait_for_Teleop;
          Code_Gen_Model_B.Auto_Step_ID = 108U;
        } else {
          Code_Gen_Model_DW.timer_n += 0.02;
        }
        break;

       case IN_Drive_Backward_from_Collect_:
        Code_Gen_Model_B.Auto_Step_ID = 106U;

        /* Merge: '<S18>/Merge7' */
        Code_Gen_Model_B.Spline_Enable = false;
        Code_Gen_Model_B.Translation_Speed_k = Auto_Speed_Reef;
        Code_Gen_Model_B.Translation_Angle_c = 3.1415926535897931;
        if (Code_Gen_Model_DW.timer_n >= Auto_Backup_Time_Reef) {
          Code_Gen_Model_DW.is_Center = Code_Gen__IN_Path_to_Start_Line;
          Code_Gen_Model_B.Auto_Step_ID = 107U;

          /* Merge: '<S18>/Merge7' */
          Code_Gen_Model_B.Spline_Enable = true;
          Code_Gen_Model_B.Path_ID = MultiportSwitch1;
          Code_Gen_Model_B.Gamepad_POV_Down_o = true;
        } else {
          Code_Gen_Model_DW.timer_n += 0.02;
        }
        break;

       case IN_Drive_Forward_and_Collect_Al:
        Code_Gen_Model_B.Auto_Step_ID = 105U;

        /* Merge: '<S18>/Merge7' */
        Code_Gen_Model_B.Spline_Enable = false;
        Code_Gen_Model_B.Translation_Speed_k = Auto_Speed_Algae;
        Code_Gen_Model_B.Translation_Angle_c = 0.0;
        if (Code_Gen_Model_B.Compare_f) {
          Code_Gen_Model_B.Gamepad_LT_out = false;
          Code_Gen_Model_B.Align_Center_b = false;
          Code_Gen_Model_DW.is_Center = IN_Drive_Backward_from_Collect_;
          Code_Gen_Model_B.Auto_Step_ID = 106U;
          Code_Gen_Model_B.Translation_Speed_k = Auto_Speed_Reef;
          Code_Gen_Model_B.Translation_Angle_c = 3.1415926535897931;
          Code_Gen_Model_DW.timer_n = 0.0;
        } else {
          Code_Gen_Model_DW.timer_n += 0.02;
        }
        break;

       case Code_Gen_Model_IN_Path_to_Reef:
        Code_Gen_Model_B.Auto_Step_ID = 101U;
        Code_Gen_Model_B.Translation_Speed_k = 0.0;
        Code_Gen_Model_B.Translation_Angle_c = 0.0;
        if (Code_Gen_Model_DW.is_Path_to_Reef == Code_Gen_Model_IN_Drive) {
          /* Merge: '<S18>/Merge7' */
          Code_Gen_Model_B.Spline_Enable = true;
          if (Code_Gen_Model_DW.UnitDelay_DSTATE_ll) {
            Code_Gen_Model_DW.is_Path_to_Reef = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
            Code_Gen_Model_DW.is_Center = Code_Gen_Model_IN_Score_at_Reef;
            Code_Gen_Model_B.Auto_Step_ID = 102U;

            /* Merge: '<S18>/Merge7' */
            Code_Gen_Model_B.Spline_Enable = false;
            Code_Gen_Model_B.Align_Left_d = true;
          }
        } else {
          /* Merge: '<S18>/Merge7' */
          /* case IN_Set_L4: */
          Code_Gen_Model_B.Spline_Enable = false;
          if (Code_Gen_Model_DW.timer_n >= Auto_Path1_Delay_to_L4_Time) {
            Code_Gen_Model_B.Gamepad_B4_Y_out = false;
            Code_Gen_Model_DW.is_Path_to_Reef = Code_Gen_Model_IN_Drive;

            /* Merge: '<S18>/Merge7' */
            Code_Gen_Model_B.Spline_Enable = true;
            Code_Gen_Model_B.Path_ID = MultiportSwitch;
          } else {
            Code_Gen_Model_B.Gamepad_B4_Y_out = true;
            Code_Gen_Model_DW.timer_n += 0.02;
          }
        }
        break;

       case Code_Gen__IN_Path_to_Start_Line:
        Code_Gen_Model_B.Auto_Step_ID = 107U;

        /* Merge: '<S18>/Merge7' */
        Code_Gen_Model_B.Spline_Enable = true;
        if (Code_Gen_Model_DW.UnitDelay_DSTATE_ll) {
          Code_Gen_Model_B.Gamepad_POV_Down_o = false;
          Code_Gen_Model_DW.is_Center = Code_Gen_Mod_IN_Wait_for_Teleop;
          Code_Gen_Model_B.Auto_Step_ID = 108U;

          /* Merge: '<S18>/Merge7' */
          Code_Gen_Model_B.Spline_Enable = false;
          Code_Gen_Model_B.Translation_Speed_k = 0.0;
          Code_Gen_Model_B.Translation_Angle_c = 0.0;
        }
        break;

       case Code_Gen_Model_IN_Score_at_Reef:
        Code_Gen_Model_B.Auto_Step_ID = 102U;

        /* Merge: '<S18>/Merge7' */
        Code_Gen_Model_B.Spline_Enable = false;
        Code_Gen_Model_B.Translation_Speed_k = 0.0;
        Code_Gen_Model_B.Translation_Angle_c = 0.0;
        if (Code_Gen_Model_B.UnitDelay1_d) {
          Code_Gen_Model_B.Align_Left_d = false;
          Code_Gen_Model_DW.is_Center = IN_Back_Up_from_Reef_Coral_Sc_o;
          Code_Gen_Model_B.Auto_Step_ID = 123U;
          Code_Gen_Model_DW.timer_n = 0.0;
        }
        break;

       default:
        /* case IN_Wait_for_Teleop: */
        Code_Gen_Model_B.Auto_Step_ID = 108U;

        /* Merge: '<S18>/Merge7' */
        Code_Gen_Model_B.Spline_Enable = false;
        Code_Gen_Model_B.Translation_Speed_k = 0.0;
        Code_Gen_Model_B.Translation_Angle_c = 0.0;
        break;
      }
    } else {
      /* Merge: '<S18>/Merge7' incorporates:
       *  UnitDelay: '<S15>/Unit Delay'
       */
      /* case IN_Left_and_Right: */
      Code_Gen_Model_Left_and_Right(&Code_Gen_Model_DW.UnitDelay_DSTATE_ll,
        &MultiportSwitch, &MultiportSwitch1, &Code_Gen_Model_B.Spline_Enable,
        &Switch6, &Switch9);
    }

    /* End of Chart: '<S26>/Reefscape_Auto_Steps' */

    /* Selector: '<S26>/Selector' incorporates:
     *  Constant: '<S26>/Constant'
     *  Merge: '<S18>/Merge8'
     */
    for (i = 0; i < 4; i++) {
      for (rtb_Num_Segments = 0; rtb_Num_Segments < 10; rtb_Num_Segments++) {
        s226_iter = (10 * i) + rtb_Num_Segments;
        rtb_Spline_Ref_Poses[s226_iter] =
          Code_Gen_Model_ConstP.Constant_Value_k[((Code_Gen_Model_B.Path_ID - 1)
          * 40) + s226_iter];
      }
    }

    /* End of Selector: '<S26>/Selector' */

    /* RelationalOperator: '<S58>/FixPt Relational Operator' incorporates:
     *  UnitDelay: '<S58>/Delay Input1'
     *
     * Block description for '<S58>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_B.FixPtRelationalOperator_a = (((int32_T)
      Code_Gen_Model_B.Gamepad_B4_Y_out) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_ne));

    /* RelationalOperator: '<S52>/FixPt Relational Operator' */
    Code_Gen_Model_B.FixPtRelationalOperator_nw = false;

    /* RelationalOperator: '<S53>/FixPt Relational Operator' */
    Code_Gen_Model_B.FixPtRelationalOperator_dd = false;

    /* RelationalOperator: '<S57>/FixPt Relational Operator' */
    Code_Gen_Model_B.FixPtRelationalOperator_o = false;

    /* RelationalOperator: '<S59>/FixPt Relational Operator' incorporates:
     *  UnitDelay: '<S59>/Delay Input1'
     *
     * Block description for '<S59>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_B.FixPtRelationalOperator_oi = (((int32_T)
      Code_Gen_Model_B.Gamepad_Start_out) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_ff));

    /* RelationalOperator: '<S54>/FixPt Relational Operator' incorporates:
     *  UnitDelay: '<S54>/Delay Input1'
     *
     * Block description for '<S54>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_B.FixPtRelationalOperator_p4 = (((int32_T)
      Code_Gen_Model_B.Gamepad_Back_out) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_ev));

    /* RelationalOperator: '<S60>/FixPt Relational Operator' */
    Code_Gen_Model_B.FixPtRelationalOperator_dp = false;

    /* RelationalOperator: '<S61>/FixPt Relational Operator' */
    Code_Gen_Model_B.FixPtRelationalOperator_af = false;

    /* RelationalOperator: '<S62>/FixPt Relational Operator' incorporates:
     *  UnitDelay: '<S62>/Delay Input1'
     *
     * Block description for '<S62>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_B.FixPtRelationalOperator_oe = (((int32_T)
      Code_Gen_Model_B.Gamepad_POV_Down_o) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_b3));

    /* RelationalOperator: '<S55>/FixPt Relational Operator' incorporates:
     *  UnitDelay: '<S55>/Delay Input1'
     *
     * Block description for '<S55>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_B.FixPtRelationalOperator_e = (((int32_T)
      Code_Gen_Model_B.Gamepad_POV_Left_d) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_ae));

    /* RelationalOperator: '<S56>/FixPt Relational Operator' */
    Code_Gen_Model_B.FixPtRelationalOperator_lp = false;

    /* UnitDelay: '<S26>/Unit Delay' */
    Code_Gen_Model_B.UnitDelay_b = Code_Gen_Model_DW.UnitDelay_DSTATE_i3;

    /* Chart: '<S29>/Reefscape_Chart' incorporates:
     *  RelationalOperator: '<S63>/FixPt Relational Operator'
     *  UnitDelay: '<S63>/Delay Input1'
     *
     * Block description for '<S63>/Delay Input1':
     *
     *  Store in Global RAM
     */
    if (Code_Gen_Model_DW.is_active_c6_Code_Gen_Model == 0U) {
      Code_Gen_Model_DW.is_active_c6_Code_Gen_Model = 1U;
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWhe_o =
        Code_Gen_Model_IN_Start;
      Code_Gen_Model_B.State_ID_d = 0.0;
      Code_Gen_Model_B.Elevator_Height_Desired_h = Elevator_Height_Bottom;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_f = Coral_Arm_Angle_Up;
      Code_Gen_Model_B.Coral_Wheel_DC_a = 0.0;
      Code_Gen_Model_DW.is_Set_Level_a = Code_Gen_Model_IN_None;
      Code_Gen_Model_DW.Set_L1_j = false;
      Code_Gen_Model_DW.Set_L2_b = false;
      Code_Gen_Model_DW.Set_L3_f = false;
      Code_Gen_Model_DW.Set_L4_d = false;
      Code_Gen_Model_DW.is_Algae_Wheels_p = Code_Gen_Model_IN_Off;

      /* SignalConversion generated from: '<S2>/Algae_Wheel_Outside_DutyCycle' */
      rtb_Algae_Wheel_Outside_DutyCyc = 0.0;

      /* SignalConversion generated from: '<S2>/Algae_Wheel_Inside_DutyCycle' */
      rtb_Algae_Wheel_Inside_DutyCycl = 0.0;
      Code_Gen_Model_DW.is_AT_On_Target_Timer_o = Code_Gen_Model_IN_Off_Target;
      Code_Gen_Model_DW.timer_robot_target_g = 0.0;
    } else {
      Co_Elevator_CoralArm_CoralWheel();
      switch (Code_Gen_Model_DW.is_Algae_Wheels_p) {
       case Code_Gen_Model_IN_Algae_Hold:
        /* SignalConversion generated from: '<S2>/Algae_Wheel_Outside_DutyCycle' */
        rtb_Algae_Wheel_Outside_DutyCyc = Algae_Hold_DC;

        /* SignalConversion generated from: '<S2>/Algae_Wheel_Inside_DutyCycle' */
        rtb_Algae_Wheel_Inside_DutyCycl = Algae_Hold_DC;
        break;

       case Code_Gen_Model_IN_Algae_Pull_In:
        /* SignalConversion generated from: '<S2>/Algae_Wheel_Outside_DutyCycle' */
        rtb_Algae_Wheel_Outside_DutyCyc = Algae_Pull_In_DC;

        /* SignalConversion generated from: '<S2>/Algae_Wheel_Inside_DutyCycle' */
        rtb_Algae_Wheel_Inside_DutyCycl = Algae_Pull_In_DC;
        if (Code_Gen_Model_B.Compare_f) {
          Code_Gen_Model_DW.is_Algae_Wheels_p = Code_Gen_Model_IN_Algae_Hold;

          /* SignalConversion generated from: '<S2>/Algae_Wheel_Outside_DutyCycle' */
          rtb_Algae_Wheel_Outside_DutyCyc = Algae_Hold_DC;

          /* SignalConversion generated from: '<S2>/Algae_Wheel_Inside_DutyCycle' */
          rtb_Algae_Wheel_Inside_DutyCycl = Algae_Hold_DC;
        }
        break;

       case Code_Gen_Mode_IN_Algae_Push_Out:
        /* SignalConversion generated from: '<S2>/Algae_Wheel_Outside_DutyCycle' */
        rtb_Algae_Wheel_Outside_DutyCyc = Algae_Push_Out_DC;

        /* SignalConversion generated from: '<S2>/Algae_Wheel_Inside_DutyCycle' */
        rtb_Algae_Wheel_Inside_DutyCycl = Algae_Push_Out_DC;
        if (Code_Gen_Model_DW.timer_n2 >= Algae_Eject_Time) {
          Code_Gen_Model_DW.is_Algae_Wheels_p = Code_Gen_Model_IN_Off;

          /* SignalConversion generated from: '<S2>/Algae_Wheel_Outside_DutyCycle' */
          rtb_Algae_Wheel_Outside_DutyCyc = 0.0;

          /* SignalConversion generated from: '<S2>/Algae_Wheel_Inside_DutyCycle' */
          rtb_Algae_Wheel_Inside_DutyCycl = 0.0;
        } else {
          Code_Gen_Model_DW.timer_n2 += 0.02;
        }
        break;

       default:
        /* SignalConversion generated from: '<S2>/Algae_Wheel_Outside_DutyCycle' */
        /* case IN_Off: */
        rtb_Algae_Wheel_Outside_DutyCyc = 0.0;

        /* SignalConversion generated from: '<S2>/Algae_Wheel_Inside_DutyCycle' */
        rtb_Algae_Wheel_Inside_DutyCycl = 0.0;
        if (((int32_T)Code_Gen_Model_B.Gamepad_LT_out) > ((int32_T)
             Code_Gen_Model_DW.DelayInput1_DSTATE_os)) {
          Code_Gen_Model_DW.is_Algae_Wheels_p = Code_Gen_Model_IN_Algae_Pull_In;

          /* SignalConversion generated from: '<S2>/Algae_Wheel_Outside_DutyCycle' */
          rtb_Algae_Wheel_Outside_DutyCyc = Algae_Pull_In_DC;

          /* SignalConversion generated from: '<S2>/Algae_Wheel_Inside_DutyCycle' */
          rtb_Algae_Wheel_Inside_DutyCycl = Algae_Pull_In_DC;
        }
        break;
      }

      if (Code_Gen_Model_DW.is_AT_On_Target_Timer_o ==
          Code_Gen_Model_IN_Off_Target) {
        if (Code_Gen_Model_B.UnitDelay_b) {
          Code_Gen_Model_DW.is_AT_On_Target_Timer_o =
            Code_Gen_Model_IN_On_Target;
          Code_Gen_Model_DW.timer_robot_target_g = 0.02;
        }

        /* case IN_On_Target: */
      } else if (!Code_Gen_Model_B.UnitDelay_b) {
        Code_Gen_Model_DW.is_AT_On_Target_Timer_o = Code_Gen_Model_IN_Off_Target;
        Code_Gen_Model_DW.timer_robot_target_g = 0.0;
      } else {
        Code_Gen_Model_DW.timer_robot_target_g += 0.02;
      }
    }

    /* End of Chart: '<S29>/Reefscape_Chart' */

    /* Merge: '<S18>/Merge13' incorporates:
     *  SignalConversion generated from: '<S2>/Coral_Arm_Angle_Desired'
     */
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_merge =
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_f;

    /* SignalConversion generated from: '<S2>/Coral_Pickup_Lower_Wait_State' */
    rtb_Compare_cid = Code_Gen_Model_B.Coral_Pickup_Lower_Wait_State_m;

    /* SignalConversion generated from: '<S2>/Coral_Wheel_DutyCycle' */
    rtb_Coral_Wheel_DutyCycle_merge = Code_Gen_Model_B.Coral_Wheel_DC_a;

    /* Merge: '<S18>/Merge11' incorporates:
     *  SignalConversion generated from: '<S2>/Elevator_Height_Desired'
     */
    Code_Gen_Model_B.Elevator_Height_Desired_merge =
      Code_Gen_Model_B.Elevator_Height_Desired_h;

    /* Merge: '<S18>/Merge21' incorporates:
     *  SignalConversion generated from: '<S2>/Elevator_LowerPickup_Reset'
     */
    Code_Gen_Model_B.Elevator_LowerPickup_Reset_merg =
      Code_Gen_Model_B.Elevator_LowerPickup_Reset_g;

    /* Merge: '<S18>/Merge24' incorporates:
     *  SignalConversion generated from: '<S2>/State_ID'
     */
    Code_Gen_Model_B.State_ID_merge = Code_Gen_Model_B.State_ID_d;

    /* Switch: '<S27>/Switch' incorporates:
     *  Constant: '<S27>/Constant1'
     *  Constant: '<S37>/Constant'
     *  Constant: '<S48>/Constant'
     *  Logic: '<S27>/AND'
     *  Logic: '<S27>/AND1'
     *  RelationalOperator: '<S37>/Compare'
     *  RelationalOperator: '<S48>/Compare'
     *  Switch: '<S27>/Switch1'
     *  Switch: '<S27>/Switch4'
     *  Switch: '<S27>/Switch6'
     */
    if (Code_Gen_Model_B.Align_Left_d) {
      rtb_Rotationmatrixfromlocalto_2 = AT_Reef_Target_Left_Y;
    } else if (Code_Gen_Model_B.Align_Right_i) {
      /* Switch: '<S27>/Switch1' incorporates:
       *  Constant: '<S27>/Constant2'
       */
      rtb_Rotationmatrixfromlocalto_2 = AT_Reef_Target_Right_Y;
    } else if ((Code_Gen_Model_B.Align_Center_b) &&
               (Code_Gen_Model_B.Set_Coral_Level_j == 1)) {
      /* Switch: '<S27>/Switch4' incorporates:
       *  Constant: '<S27>/Constant3'
       *  Switch: '<S27>/Switch1'
       */
      rtb_Rotationmatrixfromlocalto_2 = AT_Reef_Target_Center_Y;
    } else if ((Code_Gen_Model_B.Align_Center_b) &&
               (Code_Gen_Model_B.Set_Algae_Level_p != 0)) {
      /* Switch: '<S27>/Switch6' incorporates:
       *  Constant: '<S27>/Constant6'
       *  Switch: '<S27>/Switch1'
       *  Switch: '<S27>/Switch4'
       */
      rtb_Rotationmatrixfromlocalto_2 = AT_Reef_Target_Algae_Y;
    } else {
      /* Switch: '<S27>/Switch4' incorporates:
       *  Switch: '<S27>/Switch1'
       *  UnitDelay: '<S27>/Unit Delay1'
       */
      rtb_Rotationmatrixfromlocalto_2 = Code_Gen_Model_DW.UnitDelay1_DSTATE_ek;
    }

    /* End of Switch: '<S27>/Switch' */

    /* Sum: '<S27>/Subtract1' */
    rtb_Enable_Wheels = rtb_Rotationmatrixfromlocalto_2 -
      Code_Gen_Model_B.Limelight_Tag_Corrected_Y;

    /* SignalConversion: '<S26>/Signal Copy6' */
    Code_Gen_Model_B.Auto_AT_Relative_Error_Y = rtb_Enable_Wheels;

    /* Switch: '<S27>/Switch2' incorporates:
     *  Constant: '<S27>/Constant4'
     *  Constant: '<S36>/Constant'
     *  Logic: '<S27>/AND2'
     *  RelationalOperator: '<S36>/Compare'
     */
    if ((Code_Gen_Model_B.Align_Center_b) && (Code_Gen_Model_B.Set_Coral_Level_j
         == 1)) {
      rtb_Switch2_gl = AT_Reef_Target_L1_X;
    } else {
      /* Logic: '<S27>/OR' */
      Robot_Reached_Destination = ((Code_Gen_Model_B.Align_Left_d) ||
        (Code_Gen_Model_B.Align_Right_i));

      /* Switch: '<S27>/Switch3' incorporates:
       *  Constant: '<S27>/Constant'
       *  Constant: '<S32>/Constant'
       *  Constant: '<S33>/Constant'
       *  Constant: '<S35>/Constant'
       *  Constant: '<S49>/Constant'
       *  Logic: '<S27>/AND3'
       *  Logic: '<S27>/Logical Operator5'
       *  Logic: '<S27>/Logical Operator6'
       *  Logic: '<S27>/OR1'
       *  RelationalOperator: '<S32>/Compare'
       *  RelationalOperator: '<S33>/Compare'
       *  RelationalOperator: '<S35>/Compare'
       *  RelationalOperator: '<S49>/Compare'
       *  Switch: '<S27>/Switch5'
       *  Switch: '<S27>/Switch7'
       */
      if (Robot_Reached_Destination && ((Code_Gen_Model_B.Set_Coral_Level_j == 2)
           || (Code_Gen_Model_B.Set_Coral_Level_j == 3))) {
        rtb_Switch2_gl = AT_Reef_Target_L2_L3_X;
      } else if (Robot_Reached_Destination &&
                 (Code_Gen_Model_B.Set_Coral_Level_j == 4)) {
        /* Switch: '<S27>/Switch5' incorporates:
         *  Constant: '<S27>/Constant5'
         */
        rtb_Switch2_gl = AT_Reef_Target_L4_X;
      } else if ((Code_Gen_Model_B.Align_Center_b) &&
                 (Code_Gen_Model_B.Set_Algae_Level_p != 0)) {
        /* Switch: '<S27>/Switch7' incorporates:
         *  Constant: '<S27>/Constant7'
         *  Switch: '<S27>/Switch5'
         */
        rtb_Switch2_gl = AT_Reef_Target_Algae_X;
      } else {
        /* Switch: '<S27>/Switch5' incorporates:
         *  UnitDelay: '<S27>/Unit Delay'
         */
        rtb_Switch2_gl = Code_Gen_Model_DW.UnitDelay_DSTATE_b;
      }

      /* End of Switch: '<S27>/Switch3' */
    }

    /* End of Switch: '<S27>/Switch2' */

    /* Sum: '<S27>/Subtract' */
    rtb_Disable_Wheels = rtb_Switch2_gl -
      Code_Gen_Model_B.Limelight_Tag_Corrected_X;

    /* SignalConversion: '<S26>/Signal Copy2' incorporates:
     *  UnaryMinus: '<S27>/Unary Minus1'
     */
    Code_Gen_Model_B.Auto_AT_Relative_Error_X = -rtb_Disable_Wheels;

    /* Logic: '<S27>/Logical Operator1' incorporates:
     *  Constant: '<S43>/Constant'
     *  Constant: '<S44>/Constant'
     *  Constant: '<S45>/Constant'
     *  Constant: '<S46>/Constant'
     *  Constant: '<S47>/Constant'
     *  Logic: '<S27>/Logical Operator2'
     *  Logic: '<S27>/Logical Operator3'
     *  Logic: '<S27>/Logical Operator4'
     *  Logic: '<S27>/NOT'
     *  RelationalOperator: '<S43>/Compare'
     *  RelationalOperator: '<S44>/Compare'
     *  RelationalOperator: '<S45>/Compare'
     *  RelationalOperator: '<S46>/Compare'
     *  RelationalOperator: '<S47>/Compare'
     */
    Robot_Reached_Destination =
      (((((!(Code_Gen_Model_B.Limelight_Tag_Corrected_X == 0.0)) ||
          (!(Code_Gen_Model_B.Limelight_Tag_Corrected_Y == 0.0))) ||
         (!(Code_Gen_Model_B.Limelight_Tag_Corrected_Angle == 0.0))) &&
        ((Code_Gen_Model_B.Set_Coral_Level_j != 0) ||
         (Code_Gen_Model_B.Set_Algae_Level_p != 0))) &&
       (((Code_Gen_Model_B.Align_Left_d) || (Code_Gen_Model_B.Align_Right_i)) ||
        (Code_Gen_Model_B.Align_Center_b)));

    /* SignalConversion: '<S26>/Signal Copy1' */
    Code_Gen_Model_B.Auto_AT_Relative_Enable = Robot_Reached_Destination;

    /* SignalConversion: '<S26>/Signal Copy7' incorporates:
     *  UnaryMinus: '<S27>/Unary Minus'
     */
    Code_Gen_Model_B.Auto_AT_Relative_Error_Angle =
      -Code_Gen_Model_B.Limelight_Tag_Corrected_Angle;

    /* Switch: '<S31>/Switch2' incorporates:
     *  Switch: '<S31>/Switch'
     *  Switch: '<S31>/Switch1'
     */
    if (Code_Gen_Model_B.Auto_AT_Relative_Enable) {
      /* Merge: '<S18>/Merge3' incorporates:
       *  Trigonometry: '<S31>/Atan3'
       */
      Code_Gen_Model_B.Translation_Angle = rt_atan2d_snf
        (Code_Gen_Model_B.Auto_AT_Relative_Error_Y,
         Code_Gen_Model_B.Auto_AT_Relative_Error_X);

      /* Product: '<S31>/Product2' incorporates:
       *  Constant: '<S31>/Constant4'
       */
      rtb_Reset_Wheel_Offsets = Code_Gen_Model_B.Auto_AT_Relative_Error_Angle *
        AT_Steering_Error_Angle_Gain_P;

      /* Switch: '<S66>/Switch2' incorporates:
       *  Constant: '<S31>/Constant10'
       *  RelationalOperator: '<S66>/LowerRelop1'
       *  RelationalOperator: '<S66>/UpperRelop'
       *  Switch: '<S66>/Switch'
       *  UnaryMinus: '<S31>/Unary Minus'
       */
      if (rtb_Reset_Wheel_Offsets > AT_Steering_Speed_Max) {
        /* Merge: '<S18>/Merge2' */
        Code_Gen_Model_B.Steering_Rel_Cmd = AT_Steering_Speed_Max;
      } else if (rtb_Reset_Wheel_Offsets < (-AT_Steering_Speed_Max)) {
        /* Switch: '<S66>/Switch' incorporates:
         *  Merge: '<S18>/Merge2'
         *  UnaryMinus: '<S31>/Unary Minus'
         */
        Code_Gen_Model_B.Steering_Rel_Cmd = -AT_Steering_Speed_Max;
      } else {
        /* Merge: '<S18>/Merge2' incorporates:
         *  Switch: '<S66>/Switch'
         */
        Code_Gen_Model_B.Steering_Rel_Cmd = rtb_Reset_Wheel_Offsets;
      }

      /* End of Switch: '<S66>/Switch2' */

      /* Merge: '<S18>/Merge4' incorporates:
       *  Constant: '<S31>/Constant8'
       *  Gain: '<S31>/Gain1'
       *  Math: '<S31>/Magnitude2'
       *  MinMax: '<S31>/Min1'
       */
      Code_Gen_Model_B.Translation_Speed = fmin
        (AT_Translation_Speed_Max_Relative, AT_Translation_Control_Gain_Relative
         * rt_hypotd_snf(Code_Gen_Model_B.Auto_AT_Relative_Error_X,
                         Code_Gen_Model_B.Auto_AT_Relative_Error_Y));
    } else {
      /* Merge: '<S18>/Merge3' */
      Code_Gen_Model_B.Translation_Angle = Code_Gen_Model_B.Translation_Angle_c;

      /* Merge: '<S18>/Merge2' incorporates:
       *  Constant: '<S31>/Constant2'
       */
      Code_Gen_Model_B.Steering_Rel_Cmd = 0.0;

      /* Merge: '<S18>/Merge4' */
      Code_Gen_Model_B.Translation_Speed = Code_Gen_Model_B.Translation_Speed_k;
    }

    /* End of Switch: '<S31>/Switch2' */

    /* Abs: '<S27>/Abs2' incorporates:
     *  UnaryMinus: '<S27>/Unary Minus'
     */
    rtb_Reset_Wheel_Offsets = fabs
      (-Code_Gen_Model_B.Limelight_Tag_Corrected_Angle);

    /* Abs: '<S27>/Abs' incorporates:
     *  UnaryMinus: '<S27>/Unary Minus1'
     */
    rtb_Disable_Wheels = fabs(-rtb_Disable_Wheels);

    /* Abs: '<S27>/Abs1' */
    rtb_Enable_Wheels = fabs(rtb_Enable_Wheels);

    /* Merge: '<S18>/Merge23' incorporates:
     *  Constant: '<S34>/Constant'
     *  Constant: '<S41>/Constant'
     *  Constant: '<S42>/Constant'
     *  Logic: '<S27>/Logical Operator7'
     *  RelationalOperator: '<S34>/Compare'
     *  RelationalOperator: '<S41>/Compare'
     *  RelationalOperator: '<S42>/Compare'
     */
    Code_Gen_Model_B.Swerve_Drive_Integral_Enable = (((Robot_Reached_Destination
      && (rtb_Disable_Wheels <= AT_Integral_Enable_Error_XY)) &&
      (rtb_Enable_Wheels <= AT_Integral_Enable_Error_XY)) &&
      (rtb_Reset_Wheel_Offsets <= AT_Integral_Enable_Error_Angle));

    /* SignalConversion: '<S26>/Signal Copy8' incorporates:
     *  Constant: '<S38>/Constant'
     *  Constant: '<S39>/Constant'
     *  Constant: '<S40>/Constant'
     *  Logic: '<S27>/Logical Operator'
     *  RelationalOperator: '<S38>/Compare'
     *  RelationalOperator: '<S39>/Compare'
     *  RelationalOperator: '<S40>/Compare'
     */
    Code_Gen_Model_B.Auto_AT_On_Target = (((Robot_Reached_Destination &&
      (rtb_Disable_Wheels <= AT_Max_Error_XY)) && (rtb_Enable_Wheels <=
      AT_Max_Error_XY)) && (rtb_Reset_Wheel_Offsets <= AT_Max_Error_Angle));

    /* SignalConversion: '<S26>/Signal Copy9' */
    Robot_Reached_Destination = Code_Gen_Model_B.Auto_AT_On_Target;

    /* Merge: '<S18>/Merge9' incorporates:
     *  Lookup_n-D: '<S26>/1-D Lookup Table'
     */
    Code_Gen_Model_B.Spline_Num_Poses =
      Code_Gen_Model_ConstP.uDLookupTable_tableData[plook_u32u8_evencka
      (Code_Gen_Model_B.Path_ID, 1U, 1U, 19U)];

    /* Merge: '<S18>/Merge12' incorporates:
     *  Constant: '<S29>/Constant5'
     *  SignalConversion generated from: '<S2>/Reefscape_Motors_Enable'
     */
    Code_Gen_Model_B.Reefscape_Motors_Enable_merge = true;

    /* Merge: '<S18>/Merge1' incorporates:
     *  Constant: '<S31>/Constant1'
     *  SignalConversion generated from: '<S2>/Steering_Abs_Cmd'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd = 0.0;

    /* SignalConversion generated from: '<S2>/Is_Absolute_Translation' incorporates:
     *  Constant: '<S31>/Constant3'
     */
    rtb_Is_Absolute_Translation_g = false;

    /* SignalConversion generated from: '<S2>/Is_Absolute_Steering' incorporates:
     *  Constant: '<S31>/Constant5'
     */
    rtb_Is_Absolute_Steering = false;

    /* Merge: '<S18>/Merge10' incorporates:
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
    rtb_Reset_Wheel_Offsets = 0.0;

    /* SignalConversion generated from: '<S2>/Disable_Wheels' incorporates:
     *  Constant: '<S2>/Constant14'
     */
    rtb_Disable_Wheels = 0.0;

    /* SignalConversion generated from: '<S2>/Swerve_Motors_Disabled' incorporates:
     *  Constant: '<S2>/Constant4'
     */
    rtb_Swerve_Motors_Disabled = false;

    /* Update for UnitDelay: '<S26>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_p = Code_Gen_Model_B.Coral_Score_j;

    /* Update for UnitDelay: '<S58>/Delay Input1'
     *
     * Block description for '<S58>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_ne = Code_Gen_Model_B.Gamepad_B4_Y_out;

    /* Update for UnitDelay: '<S52>/Delay Input1' incorporates:
     *  Constant: '<S26>/Constant3'
     *
     * Block description for '<S52>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_l = false;

    /* Update for UnitDelay: '<S53>/Delay Input1' incorporates:
     *  Constant: '<S26>/Constant4'
     *
     * Block description for '<S53>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_bd = false;

    /* Update for UnitDelay: '<S57>/Delay Input1' incorporates:
     *  Constant: '<S26>/Constant6'
     *
     * Block description for '<S57>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_au = false;

    /* Update for UnitDelay: '<S59>/Delay Input1'
     *
     * Block description for '<S59>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_ff = Code_Gen_Model_B.Gamepad_Start_out;

    /* Update for UnitDelay: '<S54>/Delay Input1'
     *
     * Block description for '<S54>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_ev = Code_Gen_Model_B.Gamepad_Back_out;

    /* Update for UnitDelay: '<S60>/Delay Input1' incorporates:
     *  Constant: '<S26>/Constant17'
     *
     * Block description for '<S60>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_o1g = false;

    /* Update for UnitDelay: '<S63>/Delay Input1'
     *
     * Block description for '<S63>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_os = Code_Gen_Model_B.Gamepad_LT_out;

    /* Update for UnitDelay: '<S64>/Delay Input1' incorporates:
     *  Constant: '<S26>/Constant12'
     *
     * Block description for '<S64>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_b2 = false;

    /* Update for UnitDelay: '<S61>/Delay Input1' incorporates:
     *  Constant: '<S26>/Constant13'
     *
     * Block description for '<S61>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_d = false;

    /* Update for UnitDelay: '<S62>/Delay Input1'
     *
     * Block description for '<S62>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_b3 =
      Code_Gen_Model_B.Gamepad_POV_Down_o;

    /* Update for UnitDelay: '<S55>/Delay Input1'
     *
     * Block description for '<S55>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_ae =
      Code_Gen_Model_B.Gamepad_POV_Left_d;

    /* Update for UnitDelay: '<S56>/Delay Input1' incorporates:
     *  Constant: '<S26>/Constant14'
     *
     * Block description for '<S56>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_mu = false;

    /* Update for UnitDelay: '<S26>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_i3 = Code_Gen_Model_B.Auto_AT_On_Target;

    /* Update for UnitDelay: '<S27>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_ek = rtb_Rotationmatrixfromlocalto_2;

    /* Update for UnitDelay: '<S27>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_b = rtb_Switch2_gl;

    /* End of Outputs for SubSystem: '<S1>/Autonomous' */
    break;

   case 2:
    if (rtAction != rtPrevAction) {
      /* InitializeConditions for IfAction SubSystem: '<S1>/Teleop' incorporates:
       *  ActionPort: '<S24>/Action Port'
       */
      /* InitializeConditions for SwitchCase: '<S1>/Switch Case' incorporates:
       *  UnitDelay: '<S24>/Unit Delay'
       *  UnitDelay: '<S413>/Unit Delay1'
       *  UnitDelay: '<S414>/Unit Delay'
       *  UnitDelay: '<S414>/Unit Delay1'
       *  UnitDelay: '<S436>/Unit Delay1'
       *  UnitDelay: '<S436>/Unit Delay2'
       *  UnitDelay: '<S436>/Unit Delay3'
       *  UnitDelay: '<S436>/Unit Delay4'
       *  UnitDelay: '<S439>/Delay Input1'
       *  UnitDelay: '<S440>/Delay Input1'
       *  UnitDelay: '<S441>/Delay Input1'
       *  UnitDelay: '<S442>/Delay Input1'
       *  UnitDelay: '<S443>/Delay Input1'
       *  UnitDelay: '<S444>/Delay Input1'
       *  UnitDelay: '<S450>/Unit Delay'
       *  UnitDelay: '<S450>/Unit Delay1'
       *  UnitDelay: '<S454>/FixPt Unit Delay1'
       *  UnitDelay: '<S454>/FixPt Unit Delay2'
       *  UnitDelay: '<S457>/Delay Input1'
       *  UnitDelay: '<S458>/Delay Input1'
       *  UnitDelay: '<S459>/Delay Input1'
       *  UnitDelay: '<S460>/Delay Input1'
       *  UnitDelay: '<S461>/Delay Input1'
       *  UnitDelay: '<S462>/Delay Input1'
       *  UnitDelay: '<S463>/Delay Input1'
       *  UnitDelay: '<S464>/Delay Input1'
       *  UnitDelay: '<S465>/Delay Input1'
       *  UnitDelay: '<S466>/Delay Input1'
       *  UnitDelay: '<S467>/Delay Input1'
       *  UnitDelay: '<S468>/Delay Input1'
       *  UnitDelay: '<S469>/Delay Input1'
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
       * Block description for '<S457>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S458>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S459>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S460>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S461>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S462>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S463>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S464>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S465>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S466>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S467>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S468>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S469>/Delay Input1':
       *
       *  Store in Global RAM
       */
      Code_Gen_Model_DW.UnitDelay1_DSTATE_l = 0.0;
      Code_Gen_Model_DW.UnitDelay_DSTATE_p = 0.0;
      Code_Gen_Model_DW.DelayInput1_DSTATE_c = 0.0;
      Code_Gen_Model_DW.DelayInput1_DSTATE_nr = 0.0;
      Code_Gen_Model_DW.DelayInput1_DSTATE_ez = 0.0;
      Code_Gen_Model_DW.DelayInput1_DSTATE_nh = 0.0;
      Code_Gen_Model_DW.DelayInput1_DSTATE_i = 0.0;
      Code_Gen_Model_DW.DelayInput1_DSTATE_cp = 0.0;
      Code_Gen_Model_DW.DelayInput1_DSTATE_p = 0.0;
      Code_Gen_Model_DW.DelayInput1_DSTATE_o = 0.0;
      Code_Gen_Model_DW.DelayInput1_DSTATE_j = 0.0;
      Code_Gen_Model_DW.DelayInput1_DSTATE_oy = false;
      Code_Gen_Model_DW.DelayInput1_DSTATE_f = false;
      Code_Gen_Model_DW.DelayInput1_DSTATE_o5 = false;
      Code_Gen_Model_DW.DelayInput1_DSTATE_a = false;
      Code_Gen_Model_DW.UnitDelay_DSTATE_ia = false;
      Code_Gen_Model_DW.UnitDelay1_DSTATE_nr = 0.0;
      Code_Gen_Model_DW.UnitDelay_DSTATE_kq = 0.0;
      Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_a = 1U;
      Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_f = 0.0;
      Code_Gen_Model_DW.DelayInput1_DSTATE_jp = false;
      Code_Gen_Model_DW.DelayInput1_DSTATE_ft = false;
      Code_Gen_Model_DW.DelayInput1_DSTATE_m = false;
      Code_Gen_Model_DW.DelayInput1_DSTATE_k = false;
      Code_Gen_Model_DW.DelayInput1_DSTATE_g = false;
      Code_Gen_Model_DW.DelayInput1_DSTATE_g2 = false;
      Code_Gen_Model_DW.UnitDelay2_DSTATE = false;
      Code_Gen_Model_DW.UnitDelay4_DSTATE = false;
      Code_Gen_Model_DW.UnitDelay3_DSTATE = 0.0;
      Code_Gen_Model_DW.UnitDelay1_DSTATE_e1 = 0.0;
      Code_Gen_Model_DW.UnitDelay1_DSTATE_j2 = 0.0;

      /* End of InitializeConditions for SubSystem: '<S1>/Teleop' */

      /* SystemReset for IfAction SubSystem: '<S1>/Teleop' incorporates:
       *  ActionPort: '<S24>/Action Port'
       */
      /* SystemReset for SwitchCase: '<S1>/Switch Case' incorporates:
       *  Chart: '<S416>/Reefscape_Chart'
       */
      Code_Gen_Model_DW.is_active_c4_Code_Gen_Model = 0U;
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Coral = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Coral_Eject = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Level_2 = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Level_3 = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Level_4_Teleop = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Coral_Score_Position =
        Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Actions = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Set_Level = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Set_Level_b = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_Algae_Wheels = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
      Code_Gen_Model_DW.is_AT_On_Target_Timer = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
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

      /* End of SystemReset for SubSystem: '<S1>/Teleop' */
    }

    /* Outputs for IfAction SubSystem: '<S1>/Teleop' incorporates:
     *  ActionPort: '<S24>/Action Port'
     */
    /* SignalConversion generated from: '<S24>/Spline_Ref_Poses' incorporates:
     *  Merge: '<S18>/Merge8'
     */
    memset(&rtb_Spline_Ref_Poses[0], 0, 40U * (sizeof(real_T)));

    /* Logic: '<S413>/Logical Operator8' incorporates:
     *  Inport: '<Root>/IsBlueAlliance'
     */
    rtb_Swerve_Motors_Disabled = ((Code_Gen_Model_B.Cage_Left_Start) &&
      (Code_Gen_Model_U.IsBlueAlliance != 0.0));

    /* Logic: '<S413>/Logical Operator10' incorporates:
     *  Inport: '<Root>/IsBlueAlliance'
     */
    rtb_Compare_cid = !(Code_Gen_Model_U.IsBlueAlliance != 0.0);

    /* Logic: '<S413>/Logical Operator9' */
    rtb_Is_Absolute_Steering = ((Code_Gen_Model_B.Cage_Left_Start) &&
      rtb_Compare_cid);

    /* Logic: '<S413>/Logical Operator7' incorporates:
     *  Inport: '<Root>/IsBlueAlliance'
     */
    rtb_Is_Absolute_Translation_g = ((Code_Gen_Model_B.Cage_Middle_Start) &&
      (Code_Gen_Model_U.IsBlueAlliance != 0.0));

    /* Logic: '<S413>/Logical Operator12' */
    rtb_AT_Cage_Middle_Start_Red_Ac = ((Code_Gen_Model_B.Cage_Middle_Start) &&
      rtb_Compare_cid);

    /* Logic: '<S413>/Logical Operator13' incorporates:
     *  Inport: '<Root>/IsBlueAlliance'
     */
    rtb_AT_Cage_Right_Start_Blue_Ac = ((Code_Gen_Model_B.Cage_Right_Start) &&
      (Code_Gen_Model_U.IsBlueAlliance != 0.0));

    /* Logic: '<S413>/Logical Operator14' */
    rtb_AT_Cage_Right_Start_Red_Act = ((Code_Gen_Model_B.Cage_Right_Start) &&
      rtb_Compare_cid);

    /* Logic: '<S413>/Logical Operator19' incorporates:
     *  Inport: '<Root>/IsBlueAlliance'
     */
    rtb_AT_Cage_Left_Finish_Blue_Ac = ((Code_Gen_Model_B.Cage_Left_Finish) &&
      (Code_Gen_Model_U.IsBlueAlliance != 0.0));

    /* Logic: '<S413>/Logical Operator20' */
    rtb_AT_Cage_Left_Finish_Red_Act = ((Code_Gen_Model_B.Cage_Left_Finish) &&
      rtb_Compare_cid);

    /* Logic: '<S413>/Logical Operator18' incorporates:
     *  Inport: '<Root>/IsBlueAlliance'
     */
    rtb_AT_Cage_Middle_Finish_Blue_ = ((Code_Gen_Model_B.Cage_Middle_Finish) &&
      (Code_Gen_Model_U.IsBlueAlliance != 0.0));

    /* Logic: '<S413>/Logical Operator15' */
    rtb_AT_Cage_Middle_Finish_Red_A = ((Code_Gen_Model_B.Cage_Middle_Finish) &&
      rtb_Compare_cid);

    /* Logic: '<S413>/Logical Operator16' incorporates:
     *  Inport: '<Root>/IsBlueAlliance'
     */
    rtb_AT_Cage_Right_Finish_Blue_A = ((Code_Gen_Model_B.Cage_Right_Finish) &&
      (Code_Gen_Model_U.IsBlueAlliance != 0.0));

    /* Logic: '<S413>/Logical Operator17' */
    rtb_AT_Cage_Right_Finish_Red_Ac = ((Code_Gen_Model_B.Cage_Right_Finish) &&
      rtb_Compare_cid);

    /* Logic: '<S413>/Logical Operator6' */
    rtb_AT_Processor_Red_Active = ((Code_Gen_Model_B.Processor) &&
      rtb_Compare_cid);

    /* Logic: '<S413>/Logical Operator5' incorporates:
     *  Inport: '<Root>/IsBlueAlliance'
     */
    rtb_AT_Processor_Blue_Active = ((Code_Gen_Model_B.Processor) &&
      (Code_Gen_Model_U.IsBlueAlliance != 0.0));

    /* Logic: '<S413>/Logical Operator4' */
    rtb_AT_CS_Right_Red_Active = ((Code_Gen_Model_B.Coral_Station_Right) &&
      rtb_Compare_cid);

    /* Logic: '<S413>/Logical Operator1' incorporates:
     *  Inport: '<Root>/IsBlueAlliance'
     */
    rtb_AT_CS_Right_Blue_Active = ((Code_Gen_Model_B.Coral_Station_Right) &&
      (Code_Gen_Model_U.IsBlueAlliance != 0.0));

    /* Logic: '<S413>/Logical Operator3' */
    rtb_AT_CS_Left_Red_Active = ((Code_Gen_Model_B.Coral_Station_Left) &&
      rtb_Compare_cid);

    /* Logic: '<S413>/Logical Operator2' incorporates:
     *  Inport: '<Root>/IsBlueAlliance'
     */
    rtb_Compare_cid = ((Code_Gen_Model_B.Coral_Station_Left) &&
                       (Code_Gen_Model_U.IsBlueAlliance != 0.0));

    /* Switch: '<S413>/Switch2' incorporates:
     *  Switch: '<S413>/Switch1'
     *  Switch: '<S413>/Switch10'
     *  Switch: '<S413>/Switch12'
     *  Switch: '<S413>/Switch13'
     *  Switch: '<S413>/Switch14'
     *  Switch: '<S413>/Switch16'
     *  Switch: '<S413>/Switch19'
     *  Switch: '<S413>/Switch20'
     *  Switch: '<S413>/Switch21'
     *  Switch: '<S413>/Switch22'
     *  Switch: '<S413>/Switch24'
     *  Switch: '<S413>/Switch3'
     *  Switch: '<S413>/Switch30'
     *  Switch: '<S413>/Switch4'
     */
    if (rtb_Compare_cid) {
      /* Switch: '<S413>/Switch2' incorporates:
       *  Constant: '<S413>/Constant9'
       *  Sum: '<S413>/Add17'
       */
      Code_Gen_Model_B.AT_Field_Error_X = AT_CS_L_X_Blue -
        Code_Gen_Model_B.KF_Position_X;

      /* Switch: '<S413>/Switch4' incorporates:
       *  Constant: '<S413>/Constant28'
       *  Sum: '<S413>/Add23'
       */
      Code_Gen_Model_B.AT_Field_Error_Y = AT_CS_L_Y_Blue -
        Code_Gen_Model_B.KF_Position_Y;
    } else if (rtb_AT_CS_Left_Red_Active) {
      /* Switch: '<S413>/Switch2' incorporates:
       *  Constant: '<S413>/Constant5'
       *  Sum: '<S413>/Add16'
       *  Switch: '<S413>/Switch16'
       */
      Code_Gen_Model_B.AT_Field_Error_X = AT_CS_L_X_Red -
        Code_Gen_Model_B.KF_Position_X;

      /* Switch: '<S413>/Switch4' incorporates:
       *  Constant: '<S413>/Constant27'
       *  Sum: '<S413>/Add22'
       *  Switch: '<S413>/Switch24'
       */
      Code_Gen_Model_B.AT_Field_Error_Y = AT_CS_L_Y_Red -
        Code_Gen_Model_B.KF_Position_Y;
    } else if (rtb_AT_CS_Right_Blue_Active) {
      /* Switch: '<S413>/Switch2' incorporates:
       *  Constant: '<S413>/Constant4'
       *  Sum: '<S413>/Add10'
       *  Switch: '<S413>/Switch1'
       *  Switch: '<S413>/Switch16'
       */
      Code_Gen_Model_B.AT_Field_Error_X = AT_CS_R_X_Blue -
        Code_Gen_Model_B.KF_Position_X;

      /* Switch: '<S413>/Switch4' incorporates:
       *  Constant: '<S413>/Constant26'
       *  Sum: '<S413>/Add12'
       *  Switch: '<S413>/Switch19'
       *  Switch: '<S413>/Switch24'
       */
      Code_Gen_Model_B.AT_Field_Error_Y = AT_CS_R_Y_Blue -
        Code_Gen_Model_B.KF_Position_Y;
    } else if (rtb_AT_CS_Right_Red_Active) {
      /* Switch: '<S413>/Switch2' incorporates:
       *  Constant: '<S413>/Constant17'
       *  Sum: '<S413>/Add11'
       *  Switch: '<S413>/Switch1'
       *  Switch: '<S413>/Switch12'
       *  Switch: '<S413>/Switch16'
       */
      Code_Gen_Model_B.AT_Field_Error_X = AT_CS_R_X_Red -
        Code_Gen_Model_B.KF_Position_X;

      /* Switch: '<S413>/Switch4' incorporates:
       *  Constant: '<S413>/Constant3'
       *  Sum: '<S413>/Add13'
       *  Switch: '<S413>/Switch19'
       *  Switch: '<S413>/Switch20'
       *  Switch: '<S413>/Switch24'
       */
      Code_Gen_Model_B.AT_Field_Error_Y = AT_CS_R_Y_Red -
        Code_Gen_Model_B.KF_Position_Y;
    } else if (rtb_AT_Processor_Blue_Active) {
      /* Switch: '<S413>/Switch2' incorporates:
       *  Constant: '<S413>/Constant18'
       *  Sum: '<S413>/Add14'
       *  Switch: '<S413>/Switch1'
       *  Switch: '<S413>/Switch12'
       *  Switch: '<S413>/Switch13'
       *  Switch: '<S413>/Switch16'
       */
      Code_Gen_Model_B.AT_Field_Error_X = AT_Processor_X_Blue -
        Code_Gen_Model_B.KF_Position_X;

      /* Switch: '<S413>/Switch4' incorporates:
       *  Constant: '<S413>/Constant21'
       *  Sum: '<S413>/Add20'
       *  Switch: '<S413>/Switch19'
       *  Switch: '<S413>/Switch20'
       *  Switch: '<S413>/Switch21'
       *  Switch: '<S413>/Switch24'
       */
      Code_Gen_Model_B.AT_Field_Error_Y = AT_Processor_Y_Blue -
        Code_Gen_Model_B.KF_Position_Y;
    } else if (rtb_AT_Processor_Red_Active) {
      /* Switch: '<S413>/Switch2' incorporates:
       *  Constant: '<S413>/Constant19'
       *  Sum: '<S413>/Add15'
       *  Switch: '<S413>/Switch1'
       *  Switch: '<S413>/Switch12'
       *  Switch: '<S413>/Switch13'
       *  Switch: '<S413>/Switch14'
       *  Switch: '<S413>/Switch16'
       */
      Code_Gen_Model_B.AT_Field_Error_X = AT_Processor_X_Red -
        Code_Gen_Model_B.KF_Position_X;

      /* Switch: '<S413>/Switch4' incorporates:
       *  Constant: '<S413>/Constant23'
       *  Sum: '<S413>/Add21'
       *  Switch: '<S413>/Switch19'
       *  Switch: '<S413>/Switch20'
       *  Switch: '<S413>/Switch21'
       *  Switch: '<S413>/Switch22'
       *  Switch: '<S413>/Switch24'
       */
      Code_Gen_Model_B.AT_Field_Error_Y = AT_Processor_Y_Red -
        Code_Gen_Model_B.KF_Position_Y;
    } else if (rtb_Swerve_Motors_Disabled) {
      /* Switch: '<S413>/Switch2' incorporates:
       *  Constant: '<S413>/Constant7'
       *  Sum: '<S413>/Add1'
       *  Switch: '<S413>/Switch1'
       *  Switch: '<S413>/Switch12'
       *  Switch: '<S413>/Switch13'
       *  Switch: '<S413>/Switch14'
       *  Switch: '<S413>/Switch16'
       *  Switch: '<S413>/Switch3'
       */
      Code_Gen_Model_B.AT_Field_Error_X = AT_Cage_L_Start_X_Blue -
        Code_Gen_Model_B.KF_Position_X;

      /* Switch: '<S413>/Switch4' incorporates:
       *  Constant: '<S413>/Constant32'
       *  Sum: '<S413>/Add24'
       *  Switch: '<S413>/Switch19'
       *  Switch: '<S413>/Switch20'
       *  Switch: '<S413>/Switch21'
       *  Switch: '<S413>/Switch22'
       *  Switch: '<S413>/Switch24'
       *  Switch: '<S413>/Switch30'
       */
      Code_Gen_Model_B.AT_Field_Error_Y = AT_Cage_L_Start_Y_Blue -
        Code_Gen_Model_B.KF_Position_Y;
    } else if (rtb_Is_Absolute_Steering) {
      /* Switch: '<S413>/Switch2' incorporates:
       *  Constant: '<S413>/Constant15'
       *  Sum: '<S413>/Add2'
       *  Switch: '<S413>/Switch1'
       *  Switch: '<S413>/Switch10'
       *  Switch: '<S413>/Switch12'
       *  Switch: '<S413>/Switch13'
       *  Switch: '<S413>/Switch14'
       *  Switch: '<S413>/Switch16'
       *  Switch: '<S413>/Switch3'
       */
      Code_Gen_Model_B.AT_Field_Error_X = AT_Cage_L_Start_X_Red -
        Code_Gen_Model_B.KF_Position_X;

      /* Switch: '<S413>/Switch4' incorporates:
       *  Constant: '<S413>/Constant25'
       *  Sum: '<S413>/Add19'
       *  Switch: '<S413>/Switch19'
       *  Switch: '<S413>/Switch20'
       *  Switch: '<S413>/Switch21'
       *  Switch: '<S413>/Switch22'
       *  Switch: '<S413>/Switch24'
       *  Switch: '<S413>/Switch29'
       *  Switch: '<S413>/Switch30'
       */
      Code_Gen_Model_B.AT_Field_Error_Y = AT_Cage_L_Start_Y_Red -
        Code_Gen_Model_B.KF_Position_Y;
    } else {
      /* Switch: '<S413>/Switch11' incorporates:
       *  Switch: '<S413>/Switch1'
       *  Switch: '<S413>/Switch10'
       *  Switch: '<S413>/Switch12'
       *  Switch: '<S413>/Switch13'
       *  Switch: '<S413>/Switch14'
       *  Switch: '<S413>/Switch16'
       *  Switch: '<S413>/Switch3'
       */
      if (rtb_Is_Absolute_Translation_g) {
        /* Switch: '<S413>/Switch2' incorporates:
         *  Constant: '<S413>/Constant20'
         *  Sum: '<S413>/Add3'
         */
        Code_Gen_Model_B.AT_Field_Error_X = AT_Cage_M_Start_X_Blue -
          Code_Gen_Model_B.KF_Position_X;
      } else if (rtb_AT_Cage_Middle_Start_Red_Ac) {
        /* Switch: '<S413>/Switch2' incorporates:
         *  Constant: '<S413>/Constant24'
         *  Sum: '<S413>/Add4'
         *  Switch: '<S413>/Switch17'
         */
        Code_Gen_Model_B.AT_Field_Error_X = AT_Cage_M_Start_X_Red -
          Code_Gen_Model_B.KF_Position_X;
      } else if (rtb_AT_Cage_Right_Start_Blue_Ac) {
        /* Switch: '<S413>/Switch2' incorporates:
         *  Constant: '<S413>/Constant29'
         *  Sum: '<S413>/Add5'
         *  Switch: '<S413>/Switch17'
         *  Switch: '<S413>/Switch18'
         */
        Code_Gen_Model_B.AT_Field_Error_X = AT_Cage_R_Start_X_Blue -
          Code_Gen_Model_B.KF_Position_X;
      } else if (rtb_AT_Cage_Right_Start_Red_Act) {
        /* Switch: '<S413>/Switch2' incorporates:
         *  Constant: '<S413>/Constant31'
         *  Sum: '<S413>/Add6'
         *  Switch: '<S413>/Switch17'
         *  Switch: '<S413>/Switch18'
         *  Switch: '<S413>/Switch23'
         */
        Code_Gen_Model_B.AT_Field_Error_X = AT_Cage_R_Start_X_Red -
          Code_Gen_Model_B.KF_Position_X;
      } else if (rtb_AT_Cage_Left_Finish_Blue_Ac) {
        /* Switch: '<S413>/Switch2' incorporates:
         *  Constant: '<S413>/Constant39'
         *  Sum: '<S413>/Add25'
         *  Switch: '<S413>/Switch17'
         *  Switch: '<S413>/Switch18'
         *  Switch: '<S413>/Switch23'
         *  Switch: '<S413>/Switch36'
         */
        Code_Gen_Model_B.AT_Field_Error_X = AT_Cage_L_Finish_X_Blue -
          Code_Gen_Model_B.KF_Position_X;
      } else if (rtb_AT_Cage_Left_Finish_Red_Act) {
        /* Switch: '<S413>/Switch2' incorporates:
         *  Constant: '<S413>/Constant2'
         *  Sum: '<S413>/Add26'
         *  Switch: '<S413>/Switch17'
         *  Switch: '<S413>/Switch18'
         *  Switch: '<S413>/Switch23'
         *  Switch: '<S413>/Switch31'
         *  Switch: '<S413>/Switch36'
         */
        Code_Gen_Model_B.AT_Field_Error_X = AT_Cage_L_Finish_X_Red -
          Code_Gen_Model_B.KF_Position_X;
      } else if (rtb_AT_Cage_Middle_Finish_Blue_) {
        /* Switch: '<S413>/Switch2' incorporates:
         *  Constant: '<S413>/Constant34'
         *  Sum: '<S413>/Add27'
         *  Switch: '<S413>/Switch17'
         *  Switch: '<S413>/Switch18'
         *  Switch: '<S413>/Switch23'
         *  Switch: '<S413>/Switch31'
         *  Switch: '<S413>/Switch32'
         *  Switch: '<S413>/Switch36'
         */
        Code_Gen_Model_B.AT_Field_Error_X = AT_Cage_M_Finish_X_Blue -
          Code_Gen_Model_B.KF_Position_X;
      } else if (rtb_AT_Cage_Middle_Finish_Red_A) {
        /* Switch: '<S413>/Switch2' incorporates:
         *  Constant: '<S413>/Constant35'
         *  Sum: '<S413>/Add28'
         *  Switch: '<S413>/Switch17'
         *  Switch: '<S413>/Switch18'
         *  Switch: '<S413>/Switch23'
         *  Switch: '<S413>/Switch31'
         *  Switch: '<S413>/Switch32'
         *  Switch: '<S413>/Switch33'
         *  Switch: '<S413>/Switch36'
         */
        Code_Gen_Model_B.AT_Field_Error_X = AT_Cage_M_Finish_X_Red -
          Code_Gen_Model_B.KF_Position_X;
      } else if (rtb_AT_Cage_Right_Finish_Blue_A) {
        /* Switch: '<S413>/Switch34' incorporates:
         *  Constant: '<S413>/Constant36'
         *  Sum: '<S413>/Add29'
         *  Switch: '<S413>/Switch17'
         *  Switch: '<S413>/Switch18'
         *  Switch: '<S413>/Switch2'
         *  Switch: '<S413>/Switch23'
         *  Switch: '<S413>/Switch31'
         *  Switch: '<S413>/Switch32'
         *  Switch: '<S413>/Switch33'
         *  Switch: '<S413>/Switch36'
         */
        Code_Gen_Model_B.AT_Field_Error_X = AT_Cage_R_Finish_X_Blue -
          Code_Gen_Model_B.KF_Position_X;
      } else if (rtb_AT_Cage_Right_Finish_Red_Ac) {
        /* Switch: '<S413>/Switch35' incorporates:
         *  Constant: '<S413>/Constant38'
         *  Sum: '<S413>/Add30'
         *  Switch: '<S413>/Switch17'
         *  Switch: '<S413>/Switch18'
         *  Switch: '<S413>/Switch2'
         *  Switch: '<S413>/Switch23'
         *  Switch: '<S413>/Switch31'
         *  Switch: '<S413>/Switch32'
         *  Switch: '<S413>/Switch33'
         *  Switch: '<S413>/Switch34'
         *  Switch: '<S413>/Switch36'
         */
        Code_Gen_Model_B.AT_Field_Error_X = AT_Cage_R_Finish_X_Red -
          Code_Gen_Model_B.KF_Position_X;
      } else {
        /* Switch: '<S413>/Switch2' incorporates:
         *  Constant: '<S413>/Constant37'
         *  Switch: '<S413>/Switch17'
         *  Switch: '<S413>/Switch18'
         *  Switch: '<S413>/Switch23'
         *  Switch: '<S413>/Switch31'
         *  Switch: '<S413>/Switch32'
         *  Switch: '<S413>/Switch33'
         *  Switch: '<S413>/Switch34'
         *  Switch: '<S413>/Switch35'
         *  Switch: '<S413>/Switch36'
         */
        Code_Gen_Model_B.AT_Field_Error_X = 0.0;
      }

      /* End of Switch: '<S413>/Switch11' */

      /* Switch: '<S413>/Switch25' incorporates:
       *  Switch: '<S413>/Switch19'
       *  Switch: '<S413>/Switch20'
       *  Switch: '<S413>/Switch21'
       *  Switch: '<S413>/Switch22'
       *  Switch: '<S413>/Switch24'
       *  Switch: '<S413>/Switch26'
       *  Switch: '<S413>/Switch27'
       *  Switch: '<S413>/Switch28'
       *  Switch: '<S413>/Switch29'
       *  Switch: '<S413>/Switch30'
       *  Switch: '<S413>/Switch37'
       *  Switch: '<S413>/Switch38'
       *  Switch: '<S413>/Switch39'
       *  Switch: '<S413>/Switch40'
       *  Switch: '<S413>/Switch41'
       *  Switch: '<S413>/Switch42'
       */
      if (rtb_Is_Absolute_Translation_g) {
        /* Switch: '<S413>/Switch4' incorporates:
         *  Constant: '<S413>/Constant22'
         *  Sum: '<S413>/Add7'
         */
        Code_Gen_Model_B.AT_Field_Error_Y = AT_Cage_M_Start_Y_Blue -
          Code_Gen_Model_B.KF_Position_Y;
      } else if (rtb_AT_Cage_Middle_Start_Red_Ac) {
        /* Switch: '<S413>/Switch4' incorporates:
         *  Constant: '<S413>/Constant33'
         *  Sum: '<S413>/Add8'
         *  Switch: '<S413>/Switch26'
         */
        Code_Gen_Model_B.AT_Field_Error_Y = AT_Cage_M_Start_Y_Red -
          Code_Gen_Model_B.KF_Position_Y;
      } else if (rtb_AT_Cage_Right_Start_Blue_Ac) {
        /* Switch: '<S413>/Switch4' incorporates:
         *  Constant: '<S413>/Constant6'
         *  Sum: '<S413>/Add9'
         *  Switch: '<S413>/Switch26'
         *  Switch: '<S413>/Switch27'
         */
        Code_Gen_Model_B.AT_Field_Error_Y = AT_Cage_R_Start_Y_Blue -
          Code_Gen_Model_B.KF_Position_Y;
      } else if (rtb_AT_Cage_Right_Start_Red_Act) {
        /* Switch: '<S413>/Switch4' incorporates:
         *  Constant: '<S413>/Constant16'
         *  Sum: '<S413>/Add18'
         *  Switch: '<S413>/Switch26'
         *  Switch: '<S413>/Switch27'
         *  Switch: '<S413>/Switch28'
         */
        Code_Gen_Model_B.AT_Field_Error_Y = AT_Cage_R_Start_Y_Red -
          Code_Gen_Model_B.KF_Position_Y;
      } else if (rtb_AT_Cage_Left_Finish_Blue_Ac) {
        /* Switch: '<S413>/Switch4' incorporates:
         *  Constant: '<S413>/Constant43'
         *  Sum: '<S413>/Add33'
         *  Switch: '<S413>/Switch26'
         *  Switch: '<S413>/Switch27'
         *  Switch: '<S413>/Switch28'
         *  Switch: '<S413>/Switch42'
         */
        Code_Gen_Model_B.AT_Field_Error_Y = AT_Cage_L_Finish_Y_Blue -
          Code_Gen_Model_B.KF_Position_Y;
      } else if (rtb_AT_Cage_Left_Finish_Red_Act) {
        /* Switch: '<S413>/Switch4' incorporates:
         *  Constant: '<S413>/Constant42'
         *  Sum: '<S413>/Add32'
         *  Switch: '<S413>/Switch26'
         *  Switch: '<S413>/Switch27'
         *  Switch: '<S413>/Switch28'
         *  Switch: '<S413>/Switch41'
         *  Switch: '<S413>/Switch42'
         */
        Code_Gen_Model_B.AT_Field_Error_Y = AT_Cage_L_Finish_Y_Red -
          Code_Gen_Model_B.KF_Position_Y;
      } else if (rtb_AT_Cage_Middle_Finish_Blue_) {
        /* Switch: '<S413>/Switch4' incorporates:
         *  Constant: '<S413>/Constant41'
         *  Sum: '<S413>/Add34'
         *  Switch: '<S413>/Switch26'
         *  Switch: '<S413>/Switch27'
         *  Switch: '<S413>/Switch28'
         *  Switch: '<S413>/Switch37'
         *  Switch: '<S413>/Switch41'
         *  Switch: '<S413>/Switch42'
         */
        Code_Gen_Model_B.AT_Field_Error_Y = AT_Cage_M_Finish_Y_Blue -
          Code_Gen_Model_B.KF_Position_Y;
      } else if (rtb_AT_Cage_Middle_Finish_Red_A) {
        /* Switch: '<S413>/Switch4' incorporates:
         *  Constant: '<S413>/Constant44'
         *  Sum: '<S413>/Add35'
         *  Switch: '<S413>/Switch26'
         *  Switch: '<S413>/Switch27'
         *  Switch: '<S413>/Switch28'
         *  Switch: '<S413>/Switch37'
         *  Switch: '<S413>/Switch38'
         *  Switch: '<S413>/Switch41'
         *  Switch: '<S413>/Switch42'
         */
        Code_Gen_Model_B.AT_Field_Error_Y = AT_Cage_M_Finish_Y_Red -
          Code_Gen_Model_B.KF_Position_Y;
      } else if (rtb_AT_Cage_Right_Finish_Blue_A) {
        /* Switch: '<S413>/Switch39' incorporates:
         *  Constant: '<S413>/Constant45'
         *  Sum: '<S413>/Add36'
         *  Switch: '<S413>/Switch26'
         *  Switch: '<S413>/Switch27'
         *  Switch: '<S413>/Switch28'
         *  Switch: '<S413>/Switch37'
         *  Switch: '<S413>/Switch38'
         *  Switch: '<S413>/Switch4'
         *  Switch: '<S413>/Switch41'
         *  Switch: '<S413>/Switch42'
         */
        Code_Gen_Model_B.AT_Field_Error_Y = AT_Cage_R_Finish_Y_Blue -
          Code_Gen_Model_B.KF_Position_Y;
      } else if (rtb_AT_Cage_Right_Finish_Red_Ac) {
        /* Switch: '<S413>/Switch40' incorporates:
         *  Constant: '<S413>/Constant40'
         *  Sum: '<S413>/Add31'
         *  Switch: '<S413>/Switch26'
         *  Switch: '<S413>/Switch27'
         *  Switch: '<S413>/Switch28'
         *  Switch: '<S413>/Switch37'
         *  Switch: '<S413>/Switch38'
         *  Switch: '<S413>/Switch39'
         *  Switch: '<S413>/Switch4'
         *  Switch: '<S413>/Switch41'
         *  Switch: '<S413>/Switch42'
         */
        Code_Gen_Model_B.AT_Field_Error_Y = AT_Cage_R_Finish_Y_Red -
          Code_Gen_Model_B.KF_Position_Y;
      } else {
        /* Switch: '<S413>/Switch4' incorporates:
         *  Constant: '<S413>/Constant30'
         *  Switch: '<S413>/Switch26'
         *  Switch: '<S413>/Switch27'
         *  Switch: '<S413>/Switch28'
         *  Switch: '<S413>/Switch37'
         *  Switch: '<S413>/Switch38'
         *  Switch: '<S413>/Switch39'
         *  Switch: '<S413>/Switch40'
         *  Switch: '<S413>/Switch41'
         *  Switch: '<S413>/Switch42'
         */
        Code_Gen_Model_B.AT_Field_Error_Y = 0.0;
      }

      /* End of Switch: '<S413>/Switch25' */
    }

    /* End of Switch: '<S413>/Switch2' */

    /* Switch: '<S450>/Switch1' incorporates:
     *  Constant: '<S455>/Constant'
     *  Constant: '<S456>/Constant'
     *  Logic: '<S450>/AND'
     *  RelationalOperator: '<S455>/Compare'
     *  RelationalOperator: '<S456>/Compare'
     *  Switch: '<S450>/Switch2'
     *  UnitDelay: '<S450>/Unit Delay'
     *  UnitDelay: '<S450>/Unit Delay1'
     */
    if ((Code_Gen_Model_B.Drive_Joystick_X == 0.0) &&
        (Code_Gen_Model_B.Drive_Joystick_Y == 0.0)) {
      rtb_Rotationmatrixfromlocalto_2 = Code_Gen_Model_DW.UnitDelay1_DSTATE_l;
      rtb_Switch2_gl = Code_Gen_Model_DW.UnitDelay_DSTATE_p;
    } else {
      rtb_Rotationmatrixfromlocalto_2 = Code_Gen_Model_B.Drive_Joystick_Y;
      rtb_Switch2_gl = Code_Gen_Model_B.Drive_Joystick_X;
    }

    /* End of Switch: '<S450>/Switch1' */

    /* Lookup_n-D: '<S437>/Modulation_Drv' incorporates:
     *  Math: '<S437>/Magnitude'
     */
    rtb_Disable_Wheels = look1_binlcpw(rt_hypotd_snf
      (Code_Gen_Model_B.Drive_Joystick_X, Code_Gen_Model_B.Drive_Joystick_Y),
      Code_Gen_Model_ConstP.Modulation_Drv_bp01Data,
      Code_Gen_Model_ConstP.Modulation_Drv_tableData, 20U);

    /* RelationalOperator: '<S448>/Compare' incorporates:
     *  Constant: '<S448>/Constant'
     */
    Robot_Reached_Destination = (rtb_Disable_Wheels == 0.0);

    /* RelationalOperator: '<S457>/FixPt Relational Operator' incorporates:
     *  Inport: '<Root>/Gamepad_B1_A'
     *  UnitDelay: '<S457>/Delay Input1'
     *
     * Block description for '<S457>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_B.FixPtRelationalOperator = (Code_Gen_Model_U.Gamepad_B1_A >
      Code_Gen_Model_DW.DelayInput1_DSTATE_c);

    /* RelationalOperator: '<S458>/FixPt Relational Operator' incorporates:
     *  Inport: '<Root>/Gamepad_B2_B'
     *  UnitDelay: '<S458>/Delay Input1'
     *
     * Block description for '<S458>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_B.FixPtRelationalOperator_n = (Code_Gen_Model_U.Gamepad_B2_B >
      Code_Gen_Model_DW.DelayInput1_DSTATE_nr);

    /* RelationalOperator: '<S462>/FixPt Relational Operator' incorporates:
     *  Inport: '<Root>/Gamepad_B3_X'
     *  UnitDelay: '<S462>/Delay Input1'
     *
     * Block description for '<S462>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_B.FixPtRelationalOperator_k = (Code_Gen_Model_U.Gamepad_B3_X >
      Code_Gen_Model_DW.DelayInput1_DSTATE_ez);

    /* RelationalOperator: '<S463>/FixPt Relational Operator' incorporates:
     *  Inport: '<Root>/Gamepad_B4_Y'
     *  UnitDelay: '<S463>/Delay Input1'
     *
     * Block description for '<S463>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_B.FixPtRelationalOperator_d = (Code_Gen_Model_U.Gamepad_B4_Y >
      Code_Gen_Model_DW.DelayInput1_DSTATE_nh);

    /* RelationalOperator: '<S464>/FixPt Relational Operator' incorporates:
     *  Inport: '<Root>/Gamepad_Start'
     *  UnitDelay: '<S464>/Delay Input1'
     *
     * Block description for '<S464>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_B.FixPtRelationalOperator_ne =
      (Code_Gen_Model_U.Gamepad_Start > Code_Gen_Model_DW.DelayInput1_DSTATE_i);

    /* RelationalOperator: '<S459>/FixPt Relational Operator' incorporates:
     *  Inport: '<Root>/Gamepad_Back'
     *  UnitDelay: '<S459>/Delay Input1'
     *
     * Block description for '<S459>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_B.FixPtRelationalOperator_j = (Code_Gen_Model_U.Gamepad_Back >
      Code_Gen_Model_DW.DelayInput1_DSTATE_cp);

    /* RelationalOperator: '<S465>/FixPt Relational Operator' incorporates:
     *  Inport: '<Root>/Gamepad_RB'
     *  UnitDelay: '<S465>/Delay Input1'
     *
     * Block description for '<S465>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_B.FixPtRelationalOperator_l = (Code_Gen_Model_U.Gamepad_RB >
      Code_Gen_Model_DW.DelayInput1_DSTATE_p);

    /* RelationalOperator: '<S469>/FixPt Relational Operator' incorporates:
     *  Inport: '<Root>/Gamepad_RT'
     *  UnitDelay: '<S469>/Delay Input1'
     *
     * Block description for '<S469>/Delay Input1':
     *
     *  Store in Global RAM
     */
    FixPtRelationalOperator_p = (Code_Gen_Model_U.Gamepad_RT >
      Code_Gen_Model_DW.DelayInput1_DSTATE_j);

    /* RelationalOperator: '<S466>/FixPt Relational Operator' incorporates:
     *  UnitDelay: '<S466>/Delay Input1'
     *
     * Block description for '<S466>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_B.FixPtRelationalOperator_i = (((int32_T)
      Code_Gen_Model_B.Gamepad_POV_Up) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_oy));

    /* RelationalOperator: '<S467>/FixPt Relational Operator' incorporates:
     *  UnitDelay: '<S467>/Delay Input1'
     *
     * Block description for '<S467>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_B.FixPtRelationalOperator_m = (((int32_T)
      Code_Gen_Model_B.Gamepad_POV_Down) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_f));

    /* RelationalOperator: '<S460>/FixPt Relational Operator' incorporates:
     *  UnitDelay: '<S460>/Delay Input1'
     *
     * Block description for '<S460>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_B.FixPtRelationalOperator_ji = (((int32_T)
      Code_Gen_Model_B.Gamepad_POV_Left) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_o5));

    /* RelationalOperator: '<S461>/FixPt Relational Operator' incorporates:
     *  UnitDelay: '<S461>/Delay Input1'
     *
     * Block description for '<S461>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_B.FixPtRelationalOperator_ml = (((int32_T)
      Code_Gen_Model_B.Gamepad_POV_Right) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_a));

    /* DeadZone: '<S416>/Dead Zone' incorporates:
     *  Inport: '<Root>/Gamepad_Stick_Left_Y'
     */
    if (Code_Gen_Model_U.Gamepad_Stick_Left_Y > 0.1) {
      /* DeadZone: '<S416>/Dead Zone' */
      Code_Gen_Model_B.DeadZone = Code_Gen_Model_U.Gamepad_Stick_Left_Y - 0.1;
    } else if (Code_Gen_Model_U.Gamepad_Stick_Left_Y >= -0.1) {
      /* DeadZone: '<S416>/Dead Zone' */
      Code_Gen_Model_B.DeadZone = 0.0;
    } else {
      /* DeadZone: '<S416>/Dead Zone' */
      Code_Gen_Model_B.DeadZone = Code_Gen_Model_U.Gamepad_Stick_Left_Y - -0.1;
    }

    /* End of DeadZone: '<S416>/Dead Zone' */

    /* DeadZone: '<S416>/Dead Zone1' incorporates:
     *  Inport: '<Root>/Gamepad_Stick_Right_Y'
     */
    if (Code_Gen_Model_U.Gamepad_Stick_Right_Y > 0.1) {
      /* DeadZone: '<S416>/Dead Zone1' */
      Code_Gen_Model_B.DeadZone1 = Code_Gen_Model_U.Gamepad_Stick_Right_Y - 0.1;
    } else if (Code_Gen_Model_U.Gamepad_Stick_Right_Y >= -0.1) {
      /* DeadZone: '<S416>/Dead Zone1' */
      Code_Gen_Model_B.DeadZone1 = 0.0;
    } else {
      /* DeadZone: '<S416>/Dead Zone1' */
      Code_Gen_Model_B.DeadZone1 = Code_Gen_Model_U.Gamepad_Stick_Right_Y - -0.1;
    }

    /* End of DeadZone: '<S416>/Dead Zone1' */

    /* UnitDelay: '<S24>/Unit Delay' */
    Code_Gen_Model_B.UnitDelay = Code_Gen_Model_DW.UnitDelay_DSTATE_ia;

    /* Chart: '<S416>/Reefscape_Chart' incorporates:
     *  Inport: '<Root>/Gamepad_LT'
     *  RelationalOperator: '<S468>/FixPt Relational Operator'
     *  UnitDelay: '<S468>/Delay Input1'
     *
     * Block description for '<S468>/Delay Input1':
     *
     *  Store in Global RAM
     */
    if (Code_Gen_Model_DW.is_active_c4_Code_Gen_Model == 0U) {
      Code_Gen_Model_DW.is_active_c4_Code_Gen_Model = 1U;
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        Code_Gen_Model_IN_Start;
      Code_Gen_Model_B.State_ID = 0.0;
      Code_Gen_Model_B.Elevator_Height_Desired = Elevator_Height_Bottom;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired = Coral_Arm_Angle_Up;
      Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
      Code_Gen_Model_DW.is_Set_Level_b = Code_Gen_Model_IN_None;
      Code_Gen_Model_DW.Set_L1 = false;
      Code_Gen_Model_DW.Set_L2 = false;
      Code_Gen_Model_DW.Set_L3 = false;
      Code_Gen_Model_DW.Set_L4 = false;
      Code_Gen_Model_DW.is_Algae_Wheels = Code_Gen_Model_IN_Off;

      /* SignalConversion generated from: '<S24>/Algae_Wheel_Outside_DutyCycle' */
      rtb_Algae_Wheel_Outside_DutyCyc = 0.0;

      /* SignalConversion generated from: '<S24>/Algae_Wheel_Inside_DutyCycle' */
      rtb_Algae_Wheel_Inside_DutyCycl = 0.0;
      Code_Gen_Model_DW.is_AT_On_Target_Timer = Code_Gen_Model_IN_Off_Target;
      Code_Gen_Model_DW.timer_robot_target = 0.0;
    } else {
      Elevator_CoralArm_CoralWheel_i();
      switch (Code_Gen_Model_DW.is_Algae_Wheels) {
       case Code_Gen_Model_IN_Algae_Hold:
        /* SignalConversion generated from: '<S24>/Algae_Wheel_Outside_DutyCycle' */
        rtb_Algae_Wheel_Outside_DutyCyc = Algae_Hold_DC;

        /* SignalConversion generated from: '<S24>/Algae_Wheel_Inside_DutyCycle' */
        rtb_Algae_Wheel_Inside_DutyCycl = Algae_Hold_DC;
        if (FixPtRelationalOperator_p) {
          Code_Gen_Model_DW.is_Algae_Wheels = Code_Gen_Mode_IN_Algae_Push_Out;

          /* SignalConversion generated from: '<S24>/Algae_Wheel_Outside_DutyCycle' */
          rtb_Algae_Wheel_Outside_DutyCyc = Algae_Push_Out_DC;

          /* SignalConversion generated from: '<S24>/Algae_Wheel_Inside_DutyCycle' */
          rtb_Algae_Wheel_Inside_DutyCycl = Algae_Push_Out_DC;
          Code_Gen_Model_DW.timer = 0.0;
        }
        break;

       case Code_Gen_Model_IN_Algae_Pull_In:
        /* SignalConversion generated from: '<S24>/Algae_Wheel_Outside_DutyCycle' */
        rtb_Algae_Wheel_Outside_DutyCyc = Algae_Pull_In_DC;

        /* SignalConversion generated from: '<S24>/Algae_Wheel_Inside_DutyCycle' */
        rtb_Algae_Wheel_Inside_DutyCycl = Algae_Pull_In_DC;
        if (Code_Gen_Model_B.Compare_f) {
          Code_Gen_Model_DW.is_Algae_Wheels = Code_Gen_Model_IN_Algae_Hold;

          /* SignalConversion generated from: '<S24>/Algae_Wheel_Outside_DutyCycle' */
          rtb_Algae_Wheel_Outside_DutyCyc = Algae_Hold_DC;

          /* SignalConversion generated from: '<S24>/Algae_Wheel_Inside_DutyCycle' */
          rtb_Algae_Wheel_Inside_DutyCycl = Algae_Hold_DC;
        } else if (FixPtRelationalOperator_p) {
          Code_Gen_Model_DW.is_Algae_Wheels = Code_Gen_Mode_IN_Algae_Push_Out;

          /* SignalConversion generated from: '<S24>/Algae_Wheel_Outside_DutyCycle' */
          rtb_Algae_Wheel_Outside_DutyCyc = Algae_Push_Out_DC;

          /* SignalConversion generated from: '<S24>/Algae_Wheel_Inside_DutyCycle' */
          rtb_Algae_Wheel_Inside_DutyCycl = Algae_Push_Out_DC;
          Code_Gen_Model_DW.timer = 0.0;
        }
        break;

       case Code_Gen_Mode_IN_Algae_Push_Out:
        /* SignalConversion generated from: '<S24>/Algae_Wheel_Outside_DutyCycle' */
        rtb_Algae_Wheel_Outside_DutyCyc = Algae_Push_Out_DC;

        /* SignalConversion generated from: '<S24>/Algae_Wheel_Inside_DutyCycle' */
        rtb_Algae_Wheel_Inside_DutyCycl = Algae_Push_Out_DC;
        if (Code_Gen_Model_DW.timer >= Algae_Eject_Time) {
          Code_Gen_Model_DW.is_Algae_Wheels = Code_Gen_Model_IN_Off;

          /* SignalConversion generated from: '<S24>/Algae_Wheel_Outside_DutyCycle' */
          rtb_Algae_Wheel_Outside_DutyCyc = 0.0;

          /* SignalConversion generated from: '<S24>/Algae_Wheel_Inside_DutyCycle' */
          rtb_Algae_Wheel_Inside_DutyCycl = 0.0;
        } else {
          Code_Gen_Model_DW.timer += 0.02;
        }
        break;

       default:
        /* SignalConversion generated from: '<S24>/Algae_Wheel_Outside_DutyCycle' */
        /* case IN_Off: */
        rtb_Algae_Wheel_Outside_DutyCyc = 0.0;

        /* SignalConversion generated from: '<S24>/Algae_Wheel_Inside_DutyCycle' */
        rtb_Algae_Wheel_Inside_DutyCycl = 0.0;
        if (Code_Gen_Model_U.Gamepad_LT > Code_Gen_Model_DW.DelayInput1_DSTATE_o)
        {
          Code_Gen_Model_DW.is_Algae_Wheels = Code_Gen_Model_IN_Algae_Pull_In;

          /* SignalConversion generated from: '<S24>/Algae_Wheel_Outside_DutyCycle' */
          rtb_Algae_Wheel_Outside_DutyCyc = Algae_Pull_In_DC;

          /* SignalConversion generated from: '<S24>/Algae_Wheel_Inside_DutyCycle' */
          rtb_Algae_Wheel_Inside_DutyCycl = Algae_Pull_In_DC;
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

    /* End of Chart: '<S416>/Reefscape_Chart' */

    /* Logic: '<S414>/Logical Operator3' incorporates:
     *  Logic: '<S414>/OR'
     *  Switch: '<S414>/Switch2'
     */
    rtb_OR_gh = ((Code_Gen_Model_B.Align_Left) || (Code_Gen_Model_B.Align_Right));

    /* Logic: '<S414>/Logical Operator1' incorporates:
     *  Constant: '<S429>/Constant'
     *  Constant: '<S430>/Constant'
     *  Constant: '<S431>/Constant'
     *  Constant: '<S432>/Constant'
     *  Constant: '<S433>/Constant'
     *  Logic: '<S414>/Logical Operator2'
     *  Logic: '<S414>/Logical Operator3'
     *  Logic: '<S414>/Logical Operator4'
     *  Logic: '<S414>/NOT'
     *  RelationalOperator: '<S429>/Compare'
     *  RelationalOperator: '<S430>/Compare'
     *  RelationalOperator: '<S431>/Compare'
     *  RelationalOperator: '<S432>/Compare'
     *  RelationalOperator: '<S433>/Compare'
     */
    rtb_AND2_k = (((((!(Code_Gen_Model_B.Limelight_Tag_Corrected_X == 0.0)) || (
      !(Code_Gen_Model_B.Limelight_Tag_Corrected_Y == 0.0))) ||
                    (!(Code_Gen_Model_B.Limelight_Tag_Corrected_Angle == 0.0))) &&
                   ((Code_Gen_Model_B.Set_Coral_Level != 0) ||
                    (Code_Gen_Model_B.Set_Algae_Level != 0))) && (rtb_OR_gh ||
      (Code_Gen_Model_B.Align_Center)));

    /* SignalConversion: '<S24>/Signal Copy6' */
    Code_Gen_Model_B.AT_Relative_Error_Enable = rtb_AND2_k;

    /* DeadZone: '<S437>/Dead Zone' */
    if (Code_Gen_Model_B.Drive_Joystick_Z > Twist_Deadzone_pos) {
      rtb_Reset_Wheel_Offsets = Code_Gen_Model_B.Drive_Joystick_Z -
        Twist_Deadzone_pos;
    } else if (Code_Gen_Model_B.Drive_Joystick_Z >= Twist_Deadzone_neg) {
      rtb_Reset_Wheel_Offsets = 0.0;
    } else {
      rtb_Reset_Wheel_Offsets = Code_Gen_Model_B.Drive_Joystick_Z -
        Twist_Deadzone_neg;
    }

    /* End of DeadZone: '<S437>/Dead Zone' */

    /* Logic: '<S437>/Logical Operator' incorporates:
     *  Constant: '<S449>/Constant'
     *  RelationalOperator: '<S449>/Compare'
     */
    rtb_LogicalOperator_c = ((rtb_Reset_Wheel_Offsets != 0.0) &&
      Robot_Reached_Destination);

    /* Logic: '<S437>/Logical Operator1' */
    FixPtRelationalOperator_p = ((Code_Gen_Model_B.AT_Relative_Error_Enable) ||
      rtb_LogicalOperator_c);

    /* Switch: '<S414>/Switch' incorporates:
     *  Constant: '<S414>/Constant1'
     *  Constant: '<S423>/Constant'
     *  Constant: '<S434>/Constant'
     *  Logic: '<S414>/AND'
     *  Logic: '<S414>/AND1'
     *  RelationalOperator: '<S423>/Compare'
     *  RelationalOperator: '<S434>/Compare'
     *  Switch: '<S414>/Switch1'
     *  Switch: '<S414>/Switch4'
     *  Switch: '<S414>/Switch6'
     */
    if (Code_Gen_Model_B.Align_Left) {
      rtb_Switch2_ji = AT_Reef_Target_Left_Y;
    } else if (Code_Gen_Model_B.Align_Right) {
      /* Switch: '<S414>/Switch1' incorporates:
       *  Constant: '<S414>/Constant2'
       */
      rtb_Switch2_ji = AT_Reef_Target_Right_Y;
    } else if ((Code_Gen_Model_B.Align_Center) &&
               (Code_Gen_Model_B.Set_Coral_Level == 1)) {
      /* Switch: '<S414>/Switch4' incorporates:
       *  Constant: '<S414>/Constant3'
       *  Switch: '<S414>/Switch1'
       */
      rtb_Switch2_ji = AT_Reef_Target_Center_Y;
    } else if ((Code_Gen_Model_B.Align_Center) &&
               (Code_Gen_Model_B.Set_Algae_Level != 0)) {
      /* Switch: '<S414>/Switch6' incorporates:
       *  Constant: '<S414>/Constant6'
       *  Switch: '<S414>/Switch1'
       *  Switch: '<S414>/Switch4'
       */
      rtb_Switch2_ji = AT_Reef_Target_Algae_Y;
    } else {
      /* Switch: '<S414>/Switch4' incorporates:
       *  Switch: '<S414>/Switch1'
       *  UnitDelay: '<S414>/Unit Delay1'
       */
      rtb_Switch2_ji = Code_Gen_Model_DW.UnitDelay1_DSTATE_nr;
    }

    /* End of Switch: '<S414>/Switch' */

    /* Sum: '<S414>/Subtract1' */
    rtb_Enable_Wheels = rtb_Switch2_ji -
      Code_Gen_Model_B.Limelight_Tag_Corrected_Y;

    /* SignalConversion: '<S24>/Signal Copy8' */
    Code_Gen_Model_B.AT_Relative_Error_Error_Y = rtb_Enable_Wheels;

    /* Switch: '<S414>/Switch2' incorporates:
     *  Constant: '<S414>/Constant4'
     *  Constant: '<S418>/Constant'
     *  Constant: '<S419>/Constant'
     *  Constant: '<S421>/Constant'
     *  Constant: '<S422>/Constant'
     *  Constant: '<S435>/Constant'
     *  Logic: '<S414>/AND2'
     *  Logic: '<S414>/AND3'
     *  Logic: '<S414>/Logical Operator5'
     *  Logic: '<S414>/Logical Operator6'
     *  Logic: '<S414>/OR1'
     *  RelationalOperator: '<S418>/Compare'
     *  RelationalOperator: '<S419>/Compare'
     *  RelationalOperator: '<S421>/Compare'
     *  RelationalOperator: '<S422>/Compare'
     *  RelationalOperator: '<S435>/Compare'
     *  Switch: '<S414>/Switch3'
     *  Switch: '<S414>/Switch5'
     *  Switch: '<S414>/Switch7'
     */
    if ((Code_Gen_Model_B.Align_Center) && (Code_Gen_Model_B.Set_Coral_Level ==
         1)) {
      rtb_Switch2_jm = AT_Reef_Target_L1_X;
    } else if (rtb_OR_gh && ((Code_Gen_Model_B.Set_Coral_Level == 2) ||
                (Code_Gen_Model_B.Set_Coral_Level == 3))) {
      /* Switch: '<S414>/Switch3' incorporates:
       *  Constant: '<S414>/Constant'
       */
      rtb_Switch2_jm = AT_Reef_Target_L2_L3_X;
    } else if (rtb_OR_gh && (Code_Gen_Model_B.Set_Coral_Level == 4)) {
      /* Switch: '<S414>/Switch5' incorporates:
       *  Constant: '<S414>/Constant5'
       *  Switch: '<S414>/Switch3'
       */
      rtb_Switch2_jm = AT_Reef_Target_L4_X;
    } else if ((Code_Gen_Model_B.Align_Center) &&
               (Code_Gen_Model_B.Set_Algae_Level != 0)) {
      /* Switch: '<S414>/Switch7' incorporates:
       *  Constant: '<S414>/Constant7'
       *  Switch: '<S414>/Switch3'
       *  Switch: '<S414>/Switch5'
       */
      rtb_Switch2_jm = AT_Reef_Target_Algae_X;
    } else {
      /* Switch: '<S414>/Switch5' incorporates:
       *  Switch: '<S414>/Switch3'
       *  UnitDelay: '<S414>/Unit Delay'
       */
      rtb_Switch2_jm = Code_Gen_Model_DW.UnitDelay_DSTATE_kq;
    }

    /* Sum: '<S414>/Subtract' */
    rtb_Rotationmatrixfromlocalto_1 = rtb_Switch2_jm -
      Code_Gen_Model_B.Limelight_Tag_Corrected_X;

    /* SignalConversion: '<S24>/Signal Copy7' incorporates:
     *  UnaryMinus: '<S414>/Unary Minus1'
     */
    Code_Gen_Model_B.AT_Relative_Error_Error_X =
      -rtb_Rotationmatrixfromlocalto_1;

    /* Switch: '<S437>/Switch9' incorporates:
     *  Switch: '<S437>/Switch4'
     */
    if (FixPtRelationalOperator_p) {
      /* Switch: '<S437>/Switch1' */
      if (rtb_LogicalOperator_c) {
        /* Signum: '<S437>/Sign' */
        if (rtIsNaN(rtb_Reset_Wheel_Offsets)) {
          rtb_Minus_k_idx_0 = (rtNaN);
        } else if (rtb_Reset_Wheel_Offsets < 0.0) {
          rtb_Minus_k_idx_0 = -1.0;
        } else {
          rtb_Minus_k_idx_0 = (rtb_Reset_Wheel_Offsets > 0.0);
        }

        /* Switch: '<S437>/Switch5' incorporates:
         *  Constant: '<S437>/Constant3'
         *  Constant: '<S437>/Constant4'
         */
        if (Code_Gen_Model_B.Drive_Joystick_Z_Mode) {
          rtb_Switch2_i = -1.5707963267948966;
        } else {
          rtb_Switch2_i = 0.0;
        }

        /* Merge: '<S18>/Merge3' incorporates:
         *  Gain: '<S437>/Gain3'
         *  Signum: '<S437>/Sign'
         *  Sum: '<S437>/Add'
         *  Switch: '<S437>/Switch5'
         */
        Code_Gen_Model_B.Translation_Angle = (3.1415926535897931 *
          rtb_Minus_k_idx_0) + rtb_Switch2_i;
      } else {
        /* Merge: '<S18>/Merge3' incorporates:
         *  Trigonometry: '<S437>/Atan3'
         */
        Code_Gen_Model_B.Translation_Angle = rt_atan2d_snf
          (Code_Gen_Model_B.AT_Relative_Error_Error_Y,
           Code_Gen_Model_B.AT_Relative_Error_Error_X);
      }

      /* End of Switch: '<S437>/Switch1' */
    } else if (Robot_Reached_Destination) {
      /* Switch: '<S437>/Switch6' incorporates:
       *  Constant: '<S437>/Constant'
       *  Constant: '<S437>/Constant1'
       *  Inport: '<Root>/IsBlueAlliance'
       *  Switch: '<S437>/Switch4'
       */
      if (Code_Gen_Model_U.IsBlueAlliance != 0.0) {
        rtb_Minus_k_idx_0 = 0.0;
      } else {
        rtb_Minus_k_idx_0 = 3.1415926535897931;
      }

      /* Merge: '<S18>/Merge3' incorporates:
       *  Sum: '<S437>/Add1'
       *  Switch: '<S437>/Switch4'
       *  Switch: '<S437>/Switch6'
       *  Trigonometry: '<S437>/Atan1'
       */
      Code_Gen_Model_B.Translation_Angle = rt_atan2d_snf
        (Code_Gen_Model_B.AT_Field_Error_Y, Code_Gen_Model_B.AT_Field_Error_X) +
        rtb_Minus_k_idx_0;
    } else {
      /* Merge: '<S18>/Merge3' incorporates:
       *  Switch: '<S437>/Switch4'
       *  Trigonometry: '<S437>/Atan2'
       */
      Code_Gen_Model_B.Translation_Angle = rt_atan2d_snf
        (rtb_Rotationmatrixfromlocalto_2, rtb_Switch2_gl);
    }

    /* End of Switch: '<S437>/Switch9' */

    /* Switch: '<S447>/Switch1' incorporates:
     *  Constant: '<S447>/Constant'
     *  Constant: '<S447>/Constant1'
     */
    if (Code_Gen_Model_B.Is_Boosting) {
      rtb_Rotationmatrixfromlocalto_3 = Boost_Trigger_High_Speed;
    } else {
      rtb_Rotationmatrixfromlocalto_3 = Boost_Trigger_Low_Speed;
    }

    /* End of Switch: '<S447>/Switch1' */

    /* Switch: '<S454>/Init' incorporates:
     *  UnitDelay: '<S454>/FixPt Unit Delay1'
     *  UnitDelay: '<S454>/FixPt Unit Delay2'
     */
    if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_a != 0) {
      rtb_Coral_Wheel_DutyCycle_merge = rtb_Rotationmatrixfromlocalto_3;
    } else {
      rtb_Coral_Wheel_DutyCycle_merge =
        Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_f;
    }

    /* End of Switch: '<S454>/Init' */

    /* Sum: '<S452>/Sum1' */
    rtb_Rotationmatrixfromlocalto_0 = rtb_Rotationmatrixfromlocalto_3 -
      rtb_Coral_Wheel_DutyCycle_merge;

    /* Switch: '<S453>/Switch2' incorporates:
     *  Constant: '<S451>/Constant1'
     *  Constant: '<S451>/Constant3'
     *  RelationalOperator: '<S453>/LowerRelop1'
     *  RelationalOperator: '<S453>/UpperRelop'
     *  Switch: '<S453>/Switch'
     */
    if (rtb_Rotationmatrixfromlocalto_0 > Boost_Trigger_Increasing_Limit) {
      rtb_Rotationmatrixfromlocalto_0 = Boost_Trigger_Increasing_Limit;
    } else if (rtb_Rotationmatrixfromlocalto_0 < Boost_Trigger_Decreasing_Limit)
    {
      /* Switch: '<S453>/Switch' incorporates:
       *  Constant: '<S451>/Constant1'
       */
      rtb_Rotationmatrixfromlocalto_0 = Boost_Trigger_Decreasing_Limit;
    }

    /* Sum: '<S452>/Sum' incorporates:
     *  Switch: '<S453>/Switch2'
     */
    rtb_Rotationmatrixfromlocalto_0 += rtb_Coral_Wheel_DutyCycle_merge;

    /* Switch: '<S437>/Switch8' incorporates:
     *  Switch: '<S437>/Switch2'
     */
    if (FixPtRelationalOperator_p) {
      /* Switch: '<S437>/Switch' */
      if (rtb_LogicalOperator_c) {
        /* Merge: '<S18>/Merge4' incorporates:
         *  Gain: '<S437>/Gain'
         */
        Code_Gen_Model_B.Translation_Speed = Translation_Twist_Gain *
          rtb_Reset_Wheel_Offsets;
      } else {
        /* Merge: '<S18>/Merge4' incorporates:
         *  Constant: '<S437>/Constant8'
         *  Gain: '<S437>/Gain1'
         *  Math: '<S437>/Magnitude2'
         *  MinMax: '<S437>/Min1'
         */
        Code_Gen_Model_B.Translation_Speed = fmin
          (AT_Translation_Speed_Max_Relative,
           AT_Translation_Control_Gain_Relative * rt_hypotd_snf
           (Code_Gen_Model_B.AT_Relative_Error_Error_X,
            Code_Gen_Model_B.AT_Relative_Error_Error_Y));
      }

      /* End of Switch: '<S437>/Switch' */
    } else if (Robot_Reached_Destination) {
      /* Merge: '<S18>/Merge4' incorporates:
       *  Constant: '<S437>/Constant5'
       *  Gain: '<S437>/Gain2'
       *  Math: '<S437>/Magnitude1'
       *  MinMax: '<S437>/Min'
       *  Switch: '<S437>/Switch2'
       */
      Code_Gen_Model_B.Translation_Speed = fmin(AT_Translation_Speed_Max_Field,
        AT_Translation_Control_Gain_Field * rt_hypotd_snf
        (Code_Gen_Model_B.AT_Field_Error_X, Code_Gen_Model_B.AT_Field_Error_Y));
    } else {
      /* Product: '<S447>/Product' incorporates:
       *  Switch: '<S437>/Switch2'
       */
      rtb_Minus_k_idx_0 = rtb_Disable_Wheels * rtb_Rotationmatrixfromlocalto_0;

      /* Saturate: '<S447>/Saturation' incorporates:
       *  Switch: '<S437>/Switch2'
       */
      if (rtb_Minus_k_idx_0 > Boost_Trigger_High_Speed) {
        /* Merge: '<S18>/Merge4' */
        Code_Gen_Model_B.Translation_Speed = Boost_Trigger_High_Speed;
      } else if (rtb_Minus_k_idx_0 < (-Boost_Trigger_High_Speed)) {
        /* Merge: '<S18>/Merge4' */
        Code_Gen_Model_B.Translation_Speed = -Boost_Trigger_High_Speed;
      } else {
        /* Merge: '<S18>/Merge4' */
        Code_Gen_Model_B.Translation_Speed = rtb_Minus_k_idx_0;
      }

      /* End of Saturate: '<S447>/Saturation' */
    }

    /* End of Switch: '<S437>/Switch8' */

    /* Abs: '<S414>/Abs' incorporates:
     *  UnaryMinus: '<S414>/Unary Minus1'
     */
    rtb_Coral_Wheel_DutyCycle_merge = fabs(-rtb_Rotationmatrixfromlocalto_1);

    /* Abs: '<S414>/Abs1' */
    rtb_Enable_Wheels = fabs(rtb_Enable_Wheels);

    /* Abs: '<S414>/Abs2' incorporates:
     *  UnaryMinus: '<S414>/Unary Minus'
     */
    rtb_Rotationmatrixfromlocalto_3 = fabs
      (-Code_Gen_Model_B.Limelight_Tag_Corrected_Angle);

    /* SignalConversion: '<S24>/Signal Copy10' incorporates:
     *  Constant: '<S424>/Constant'
     *  Constant: '<S425>/Constant'
     *  Constant: '<S426>/Constant'
     *  Logic: '<S414>/Logical Operator'
     *  RelationalOperator: '<S424>/Compare'
     *  RelationalOperator: '<S425>/Compare'
     *  RelationalOperator: '<S426>/Compare'
     */
    Code_Gen_Model_B.Teleop_AT_On_Target = (((rtb_AND2_k &&
      (rtb_Coral_Wheel_DutyCycle_merge <= AT_Max_Error_XY)) &&
      (rtb_Enable_Wheels <= AT_Max_Error_XY)) &&
      (rtb_Rotationmatrixfromlocalto_3 <= AT_Max_Error_Angle));

    /* SignalConversion: '<S24>/Signal Copy11' */
    Robot_Reached_Destination = Code_Gen_Model_B.Teleop_AT_On_Target;

    /* Merge: '<S18>/Merge23' incorporates:
     *  Constant: '<S420>/Constant'
     *  Constant: '<S427>/Constant'
     *  Constant: '<S428>/Constant'
     *  Logic: '<S414>/Logical Operator7'
     *  RelationalOperator: '<S420>/Compare'
     *  RelationalOperator: '<S427>/Compare'
     *  RelationalOperator: '<S428>/Compare'
     *  SignalConversion: '<S24>/Signal Copy'
     */
    Code_Gen_Model_B.Swerve_Drive_Integral_Enable = (((rtb_AND2_k &&
      (rtb_Coral_Wheel_DutyCycle_merge <= AT_Integral_Enable_Error_XY)) &&
      (rtb_Enable_Wheels <= AT_Integral_Enable_Error_XY)) &&
      (rtb_Rotationmatrixfromlocalto_3 <= AT_Integral_Enable_Error_Angle));

    /* SignalConversion: '<S24>/Signal Copy9' incorporates:
     *  UnaryMinus: '<S414>/Unary Minus'
     */
    Code_Gen_Model_B.AT_Relative_Error_Angle =
      -Code_Gen_Model_B.Limelight_Tag_Corrected_Angle;

    /* Switch: '<S436>/Switch' incorporates:
     *  Constant: '<S436>/Constant9'
     */
    if (Code_Gen_Model_B.AT_Relative_Error_Enable) {
      /* Product: '<S436>/Product2' incorporates:
       *  Constant: '<S436>/Constant4'
       */
      rtb_Coral_Wheel_DutyCycle_merge = Code_Gen_Model_B.AT_Relative_Error_Angle
        * AT_Steering_Error_Angle_Gain_P;

      /* Switch: '<S446>/Switch2' incorporates:
       *  Constant: '<S436>/Constant10'
       *  RelationalOperator: '<S446>/LowerRelop1'
       *  RelationalOperator: '<S446>/UpperRelop'
       *  Switch: '<S446>/Switch'
       *  UnaryMinus: '<S436>/Unary Minus'
       */
      if (rtb_Coral_Wheel_DutyCycle_merge > AT_Steering_Speed_Max) {
        rtb_Coral_Wheel_DutyCycle_merge = AT_Steering_Speed_Max;
      } else if (rtb_Coral_Wheel_DutyCycle_merge < (-AT_Steering_Speed_Max)) {
        /* Switch: '<S446>/Switch' incorporates:
         *  UnaryMinus: '<S436>/Unary Minus'
         */
        rtb_Coral_Wheel_DutyCycle_merge = -AT_Steering_Speed_Max;
      }

      /* End of Switch: '<S446>/Switch2' */
    } else {
      rtb_Coral_Wheel_DutyCycle_merge = 0.0;
    }

    /* End of Switch: '<S436>/Switch' */

    /* DeadZone: '<S436>/Dead Zone' */
    if (Code_Gen_Model_B.Steer_Joystick_Z > Twist_Deadzone_pos) {
      rtb_Minus_k_idx_0 = Code_Gen_Model_B.Steer_Joystick_Z - Twist_Deadzone_pos;
    } else if (Code_Gen_Model_B.Steer_Joystick_Z >= Twist_Deadzone_neg) {
      rtb_Minus_k_idx_0 = 0.0;
    } else {
      rtb_Minus_k_idx_0 = Code_Gen_Model_B.Steer_Joystick_Z - Twist_Deadzone_neg;
    }

    /* Sum: '<S436>/Add' incorporates:
     *  Constant: '<S436>/Constant'
     *  Constant: '<S436>/Constant1'
     *  DeadZone: '<S436>/Dead Zone'
     *  Lookup_n-D: '<S436>/Modulation_Str_Y_Rel'
     *  Product: '<S436>/Product'
     *  Product: '<S436>/Product1'
     *  SignalConversion: '<S14>/Signal Copy5'
     */
    rtb_Coral_Wheel_DutyCycle_merge += (look1_binlcpw
      (Code_Gen_Model_B.Steer_Joystick_Y,
       Code_Gen_Model_ConstP.Modulation_Str_Y_Rel_bp01Data,
       Code_Gen_Model_ConstP.Modulation_Str_Y_Rel_tableData, 20U) *
      Steering_Relative_Gain) + (rtb_Minus_k_idx_0 * Steering_Twist_Gain);

    /* RelationalOperator: '<S438>/Compare' incorporates:
     *  Constant: '<S438>/Constant'
     */
    rtb_LogicalOperator_c = (rtb_Coral_Wheel_DutyCycle_merge == 0.0);

    /* Logic: '<S413>/Logical Operator11' */
    rtb_OR_gh = ((((((Code_Gen_Model_B.Coral_Station_Left) ||
                     (Code_Gen_Model_B.Coral_Station_Right)) ||
                    (Code_Gen_Model_B.Processor)) ||
                   (Code_Gen_Model_B.Cage_Left_Start)) ||
                  (Code_Gen_Model_B.Cage_Middle_Start)) ||
                 (Code_Gen_Model_B.Cage_Right_Start));

    /* RelationalOperator: '<S443>/FixPt Relational Operator' incorporates:
     *  UnitDelay: '<S443>/Delay Input1'
     *
     * Block description for '<S443>/Delay Input1':
     *
     *  Store in Global RAM
     */
    rtb_FixPtRelationalOperator_m = (((int32_T)rtb_OR_gh) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_ft));

    /* Logic: '<S436>/AND2' incorporates:
     *  RelationalOperator: '<S439>/FixPt Relational Operator'
     *  RelationalOperator: '<S440>/FixPt Relational Operator'
     *  RelationalOperator: '<S441>/FixPt Relational Operator'
     *  RelationalOperator: '<S442>/FixPt Relational Operator'
     *  UnitDelay: '<S439>/Delay Input1'
     *  UnitDelay: '<S440>/Delay Input1'
     *  UnitDelay: '<S441>/Delay Input1'
     *  UnitDelay: '<S442>/Delay Input1'
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
     */
    rtb_AND2_k = ((((((int32_T)Code_Gen_Model_B.Face_Away_Driver) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_m)) || (((int32_T)
      Code_Gen_Model_B.Face_Left_Driver) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_k))) || (((int32_T)
      Code_Gen_Model_B.Face_Toward_Driver) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_g))) || (((int32_T)
      Code_Gen_Model_B.Face_Right_Driver) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_g2)));

    /* Logic: '<S436>/AND1' incorporates:
     *  Logic: '<S436>/AND3'
     *  Logic: '<S436>/AND7'
     *  UnitDelay: '<S436>/Unit Delay2'
     */
    rtb_AND1 = ((rtb_LogicalOperator_c && (!rtb_FixPtRelationalOperator_m)) &&
                (rtb_AND2_k || (Code_Gen_Model_DW.UnitDelay2_DSTATE)));

    /* Logic: '<S436>/AND4' incorporates:
     *  Logic: '<S436>/AND5'
     *  Logic: '<S436>/AND8'
     *  UnitDelay: '<S436>/Unit Delay4'
     */
    rtb_AND2_k = ((rtb_LogicalOperator_c && (!rtb_AND2_k)) &&
                  (rtb_FixPtRelationalOperator_m ||
                   (Code_Gen_Model_DW.UnitDelay4_DSTATE)));

    /* Logic: '<S436>/AND6' */
    Code_Gen_Model_B.Steering_Abs_Angle_Active = (rtb_AND1 || rtb_AND2_k);

    /* Switch: '<S436>/Switch8' incorporates:
     *  Constant: '<S445>/Constant'
     *  Logic: '<S436>/AND9'
     *  RelationalOperator: '<S444>/FixPt Relational Operator'
     *  RelationalOperator: '<S445>/Compare'
     *  UnitDelay: '<S20>/Unit Delay'
     *  UnitDelay: '<S444>/Delay Input1'
     *
     * Block description for '<S444>/Delay Input1':
     *
     *  Store in Global RAM
     */
    if (((Code_Gen_Model_B.Steering_Abs_Angle_Active) || (((int32_T)
           rtb_LogicalOperator_c) > ((int32_T)
           Code_Gen_Model_DW.DelayInput1_DSTATE_jp))) ||
        (Code_Gen_Model_B.Active_GameState != 2)) {
      /* Switch: '<S436>/Switch8' */
      Code_Gen_Model_B.Steering_Abs_Gyro_Latch = Code_Gen_Model_B.Gyro_Angle_rad;
    } else {
      /* Switch: '<S436>/Switch8' incorporates:
       *  UnitDelay: '<S436>/Unit Delay3'
       */
      Code_Gen_Model_B.Steering_Abs_Gyro_Latch =
        Code_Gen_Model_DW.UnitDelay3_DSTATE;
    }

    /* End of Switch: '<S436>/Switch8' */

    /* Switch: '<S436>/Switch2' */
    if (Code_Gen_Model_B.Steering_Abs_Angle_Active) {
      /* Switch: '<S436>/Switch2' incorporates:
       *  Constant: '<S436>/Constant2'
       */
      Code_Gen_Model_B.Steering_Abs_Gyro = 0.0;
    } else {
      /* Switch: '<S436>/Switch2' */
      Code_Gen_Model_B.Steering_Abs_Gyro =
        Code_Gen_Model_B.Steering_Abs_Gyro_Latch;
    }

    /* End of Switch: '<S436>/Switch2' */

    /* Switch: '<S413>/Switch15' incorporates:
     *  Switch: '<S413>/Switch43'
     *  Switch: '<S413>/Switch44'
     *  Switch: '<S413>/Switch45'
     *  Switch: '<S413>/Switch46'
     *  Switch: '<S413>/Switch47'
     *  Switch: '<S413>/Switch48'
     *  Switch: '<S413>/Switch49'
     *  Switch: '<S413>/Switch5'
     *  Switch: '<S413>/Switch50'
     *  Switch: '<S413>/Switch51'
     *  Switch: '<S413>/Switch52'
     *  Switch: '<S413>/Switch53'
     *  Switch: '<S413>/Switch54'
     *  Switch: '<S413>/Switch6'
     *  Switch: '<S413>/Switch7'
     *  Switch: '<S413>/Switch8'
     *  Switch: '<S413>/Switch9'
     */
    if (rtb_Compare_cid) {
      /* Switch: '<S413>/Switch15' incorporates:
       *  Constant: '<S413>/Constant14'
       */
      Code_Gen_Model_B.AT_Field_Target_Angle = AT_CS_L_Angle_Blue;
    } else if (rtb_AT_CS_Left_Red_Active) {
      /* Switch: '<S413>/Switch15' incorporates:
       *  Constant: '<S413>/Constant13'
       *  Switch: '<S413>/Switch5'
       */
      Code_Gen_Model_B.AT_Field_Target_Angle = AT_CS_L_Angle_Red;
    } else if (rtb_AT_CS_Right_Blue_Active) {
      /* Switch: '<S413>/Switch15' incorporates:
       *  Constant: '<S413>/Constant12'
       *  Switch: '<S413>/Switch5'
       *  Switch: '<S413>/Switch6'
       */
      Code_Gen_Model_B.AT_Field_Target_Angle = AT_CS_R_Angle_Blue;
    } else if (rtb_AT_CS_Right_Red_Active) {
      /* Switch: '<S413>/Switch15' incorporates:
       *  Constant: '<S413>/Constant11'
       *  Switch: '<S413>/Switch5'
       *  Switch: '<S413>/Switch6'
       *  Switch: '<S413>/Switch7'
       */
      Code_Gen_Model_B.AT_Field_Target_Angle = AT_CS_R_Angle_Red;
    } else if (rtb_AT_Processor_Blue_Active) {
      /* Switch: '<S413>/Switch15' incorporates:
       *  Constant: '<S413>/Constant10'
       *  Switch: '<S413>/Switch5'
       *  Switch: '<S413>/Switch6'
       *  Switch: '<S413>/Switch7'
       *  Switch: '<S413>/Switch8'
       */
      Code_Gen_Model_B.AT_Field_Target_Angle = AT_Processor_Angle_Blue;
    } else if (rtb_AT_Processor_Red_Active) {
      /* Switch: '<S413>/Switch15' incorporates:
       *  Constant: '<S413>/Constant8'
       *  Switch: '<S413>/Switch5'
       *  Switch: '<S413>/Switch6'
       *  Switch: '<S413>/Switch7'
       *  Switch: '<S413>/Switch8'
       *  Switch: '<S413>/Switch9'
       */
      Code_Gen_Model_B.AT_Field_Target_Angle = AT_Processor_Angle_Red;
    } else if (rtb_Swerve_Motors_Disabled) {
      /* Switch: '<S413>/Switch15' incorporates:
       *  Constant: '<S413>/Constant49'
       *  Switch: '<S413>/Switch43'
       *  Switch: '<S413>/Switch5'
       *  Switch: '<S413>/Switch6'
       *  Switch: '<S413>/Switch7'
       *  Switch: '<S413>/Switch8'
       *  Switch: '<S413>/Switch9'
       */
      Code_Gen_Model_B.AT_Field_Target_Angle = AT_Cage_L_Start_Angle_Blue;
    } else if (rtb_Is_Absolute_Steering) {
      /* Switch: '<S413>/Switch15' incorporates:
       *  Constant: '<S413>/Constant48'
       *  Switch: '<S413>/Switch43'
       *  Switch: '<S413>/Switch44'
       *  Switch: '<S413>/Switch5'
       *  Switch: '<S413>/Switch6'
       *  Switch: '<S413>/Switch7'
       *  Switch: '<S413>/Switch8'
       *  Switch: '<S413>/Switch9'
       */
      Code_Gen_Model_B.AT_Field_Target_Angle = AT_Cage_L_Start_Angle_Red;
    } else if (rtb_Is_Absolute_Translation_g) {
      /* Switch: '<S413>/Switch15' incorporates:
       *  Constant: '<S413>/Constant47'
       *  Switch: '<S413>/Switch43'
       *  Switch: '<S413>/Switch44'
       *  Switch: '<S413>/Switch45'
       *  Switch: '<S413>/Switch5'
       *  Switch: '<S413>/Switch6'
       *  Switch: '<S413>/Switch7'
       *  Switch: '<S413>/Switch8'
       *  Switch: '<S413>/Switch9'
       */
      Code_Gen_Model_B.AT_Field_Target_Angle = AT_Cage_M_Start_Angle_Blue;
    } else if (rtb_AT_Cage_Middle_Start_Red_Ac) {
      /* Switch: '<S413>/Switch15' incorporates:
       *  Constant: '<S413>/Constant46'
       *  Switch: '<S413>/Switch43'
       *  Switch: '<S413>/Switch44'
       *  Switch: '<S413>/Switch45'
       *  Switch: '<S413>/Switch46'
       *  Switch: '<S413>/Switch5'
       *  Switch: '<S413>/Switch6'
       *  Switch: '<S413>/Switch7'
       *  Switch: '<S413>/Switch8'
       *  Switch: '<S413>/Switch9'
       */
      Code_Gen_Model_B.AT_Field_Target_Angle = AT_Cage_M_Start_Angle_Red;
    } else if (rtb_AT_Cage_Right_Start_Blue_Ac) {
      /* Switch: '<S413>/Switch15' incorporates:
       *  Constant: '<S413>/Constant1'
       *  Switch: '<S413>/Switch43'
       *  Switch: '<S413>/Switch44'
       *  Switch: '<S413>/Switch45'
       *  Switch: '<S413>/Switch46'
       *  Switch: '<S413>/Switch47'
       *  Switch: '<S413>/Switch5'
       *  Switch: '<S413>/Switch6'
       *  Switch: '<S413>/Switch7'
       *  Switch: '<S413>/Switch8'
       *  Switch: '<S413>/Switch9'
       */
      Code_Gen_Model_B.AT_Field_Target_Angle = AT_Cage_R_Start_Angle_Blue;
    } else if (rtb_AT_Cage_Right_Start_Red_Act) {
      /* Switch: '<S413>/Switch15' incorporates:
       *  Constant: '<S413>/Constant50'
       *  Switch: '<S413>/Switch43'
       *  Switch: '<S413>/Switch44'
       *  Switch: '<S413>/Switch45'
       *  Switch: '<S413>/Switch46'
       *  Switch: '<S413>/Switch47'
       *  Switch: '<S413>/Switch48'
       *  Switch: '<S413>/Switch5'
       *  Switch: '<S413>/Switch6'
       *  Switch: '<S413>/Switch7'
       *  Switch: '<S413>/Switch8'
       *  Switch: '<S413>/Switch9'
       */
      Code_Gen_Model_B.AT_Field_Target_Angle = AT_Cage_R_Start_Angle_Red;
    } else if (rtb_AT_Cage_Left_Finish_Blue_Ac) {
      /* Switch: '<S413>/Switch15' incorporates:
       *  Constant: '<S413>/Constant55'
       *  Switch: '<S413>/Switch43'
       *  Switch: '<S413>/Switch44'
       *  Switch: '<S413>/Switch45'
       *  Switch: '<S413>/Switch46'
       *  Switch: '<S413>/Switch47'
       *  Switch: '<S413>/Switch48'
       *  Switch: '<S413>/Switch49'
       *  Switch: '<S413>/Switch5'
       *  Switch: '<S413>/Switch6'
       *  Switch: '<S413>/Switch7'
       *  Switch: '<S413>/Switch8'
       *  Switch: '<S413>/Switch9'
       */
      Code_Gen_Model_B.AT_Field_Target_Angle = AT_Cage_L_Finish_Angle_Blue;
    } else if (rtb_AT_Cage_Left_Finish_Red_Act) {
      /* Switch: '<S413>/Switch15' incorporates:
       *  Constant: '<S413>/Constant54'
       *  Switch: '<S413>/Switch43'
       *  Switch: '<S413>/Switch44'
       *  Switch: '<S413>/Switch45'
       *  Switch: '<S413>/Switch46'
       *  Switch: '<S413>/Switch47'
       *  Switch: '<S413>/Switch48'
       *  Switch: '<S413>/Switch49'
       *  Switch: '<S413>/Switch5'
       *  Switch: '<S413>/Switch50'
       *  Switch: '<S413>/Switch6'
       *  Switch: '<S413>/Switch7'
       *  Switch: '<S413>/Switch8'
       *  Switch: '<S413>/Switch9'
       */
      Code_Gen_Model_B.AT_Field_Target_Angle = AT_Cage_L_Finish_Angle_Red;
    } else if (rtb_AT_Cage_Middle_Finish_Blue_) {
      /* Switch: '<S413>/Switch15' incorporates:
       *  Constant: '<S413>/Constant53'
       *  Switch: '<S413>/Switch43'
       *  Switch: '<S413>/Switch44'
       *  Switch: '<S413>/Switch45'
       *  Switch: '<S413>/Switch46'
       *  Switch: '<S413>/Switch47'
       *  Switch: '<S413>/Switch48'
       *  Switch: '<S413>/Switch49'
       *  Switch: '<S413>/Switch5'
       *  Switch: '<S413>/Switch50'
       *  Switch: '<S413>/Switch51'
       *  Switch: '<S413>/Switch6'
       *  Switch: '<S413>/Switch7'
       *  Switch: '<S413>/Switch8'
       *  Switch: '<S413>/Switch9'
       */
      Code_Gen_Model_B.AT_Field_Target_Angle = AT_Cage_M_Finish_Angle_Blue;
    } else if (rtb_AT_Cage_Middle_Finish_Red_A) {
      /* Switch: '<S413>/Switch15' incorporates:
       *  Constant: '<S413>/Constant52'
       *  Switch: '<S413>/Switch43'
       *  Switch: '<S413>/Switch44'
       *  Switch: '<S413>/Switch45'
       *  Switch: '<S413>/Switch46'
       *  Switch: '<S413>/Switch47'
       *  Switch: '<S413>/Switch48'
       *  Switch: '<S413>/Switch49'
       *  Switch: '<S413>/Switch5'
       *  Switch: '<S413>/Switch50'
       *  Switch: '<S413>/Switch51'
       *  Switch: '<S413>/Switch52'
       *  Switch: '<S413>/Switch6'
       *  Switch: '<S413>/Switch7'
       *  Switch: '<S413>/Switch8'
       *  Switch: '<S413>/Switch9'
       */
      Code_Gen_Model_B.AT_Field_Target_Angle = AT_Cage_M_Finish_Angle_Red;
    } else if (rtb_AT_Cage_Right_Finish_Blue_A) {
      /* Switch: '<S413>/Switch53' incorporates:
       *  Constant: '<S413>/Constant51'
       *  Switch: '<S413>/Switch15'
       *  Switch: '<S413>/Switch43'
       *  Switch: '<S413>/Switch44'
       *  Switch: '<S413>/Switch45'
       *  Switch: '<S413>/Switch46'
       *  Switch: '<S413>/Switch47'
       *  Switch: '<S413>/Switch48'
       *  Switch: '<S413>/Switch49'
       *  Switch: '<S413>/Switch5'
       *  Switch: '<S413>/Switch50'
       *  Switch: '<S413>/Switch51'
       *  Switch: '<S413>/Switch52'
       *  Switch: '<S413>/Switch6'
       *  Switch: '<S413>/Switch7'
       *  Switch: '<S413>/Switch8'
       *  Switch: '<S413>/Switch9'
       */
      Code_Gen_Model_B.AT_Field_Target_Angle = AT_Cage_R_Finish_Angle_Blue;
    } else if (rtb_AT_Cage_Right_Finish_Red_Ac) {
      /* Switch: '<S413>/Switch54' incorporates:
       *  Constant: '<S413>/Constant56'
       *  Switch: '<S413>/Switch15'
       *  Switch: '<S413>/Switch43'
       *  Switch: '<S413>/Switch44'
       *  Switch: '<S413>/Switch45'
       *  Switch: '<S413>/Switch46'
       *  Switch: '<S413>/Switch47'
       *  Switch: '<S413>/Switch48'
       *  Switch: '<S413>/Switch49'
       *  Switch: '<S413>/Switch5'
       *  Switch: '<S413>/Switch50'
       *  Switch: '<S413>/Switch51'
       *  Switch: '<S413>/Switch52'
       *  Switch: '<S413>/Switch53'
       *  Switch: '<S413>/Switch6'
       *  Switch: '<S413>/Switch7'
       *  Switch: '<S413>/Switch8'
       *  Switch: '<S413>/Switch9'
       */
      Code_Gen_Model_B.AT_Field_Target_Angle = AT_Cage_R_Finish_Angle_Red;
    } else {
      /* Switch: '<S413>/Switch15' incorporates:
       *  Switch: '<S413>/Switch43'
       *  Switch: '<S413>/Switch44'
       *  Switch: '<S413>/Switch45'
       *  Switch: '<S413>/Switch46'
       *  Switch: '<S413>/Switch47'
       *  Switch: '<S413>/Switch48'
       *  Switch: '<S413>/Switch49'
       *  Switch: '<S413>/Switch5'
       *  Switch: '<S413>/Switch50'
       *  Switch: '<S413>/Switch51'
       *  Switch: '<S413>/Switch52'
       *  Switch: '<S413>/Switch6'
       *  Switch: '<S413>/Switch7'
       *  Switch: '<S413>/Switch8'
       *  Switch: '<S413>/Switch9'
       *  UnitDelay: '<S413>/Unit Delay1'
       */
      Code_Gen_Model_B.AT_Field_Target_Angle =
        Code_Gen_Model_DW.UnitDelay1_DSTATE_e1;
    }

    /* End of Switch: '<S413>/Switch15' */

    /* Switch: '<S436>/Switch4' incorporates:
     *  Constant: '<S436>/Constant5'
     *  Switch: '<S436>/Switch1'
     *  Switch: '<S436>/Switch5'
     *  Switch: '<S436>/Switch6'
     *  Switch: '<S436>/Switch7'
     */
    if (Code_Gen_Model_B.Face_Away_Driver) {
      rtb_Rotationmatrixfromlocalto_1 = 0.0;
    } else if (Code_Gen_Model_B.Face_Left_Driver) {
      /* Switch: '<S436>/Switch5' incorporates:
       *  Constant: '<S436>/Constant6'
       */
      rtb_Rotationmatrixfromlocalto_1 = 1.5707963267948966;
    } else if (Code_Gen_Model_B.Face_Toward_Driver) {
      /* Switch: '<S436>/Switch6' incorporates:
       *  Constant: '<S436>/Constant7'
       *  Switch: '<S436>/Switch5'
       */
      rtb_Rotationmatrixfromlocalto_1 = 3.1415926535897931;
    } else if (Code_Gen_Model_B.Face_Right_Driver) {
      /* Switch: '<S436>/Switch7' incorporates:
       *  Constant: '<S436>/Constant8'
       *  Switch: '<S436>/Switch5'
       *  Switch: '<S436>/Switch6'
       */
      rtb_Rotationmatrixfromlocalto_1 = 4.71238898038469;
    } else if (rtb_AND2_k) {
      /* Switch: '<S436>/Switch1' incorporates:
       *  Switch: '<S436>/Switch5'
       *  Switch: '<S436>/Switch6'
       *  Switch: '<S436>/Switch7'
       */
      rtb_Rotationmatrixfromlocalto_1 = Code_Gen_Model_B.AT_Field_Target_Angle;
    } else {
      /* Switch: '<S436>/Switch6' incorporates:
       *  Switch: '<S436>/Switch5'
       *  Switch: '<S436>/Switch7'
       *  UnitDelay: '<S436>/Unit Delay1'
       */
      rtb_Rotationmatrixfromlocalto_1 = Code_Gen_Model_DW.UnitDelay1_DSTATE_j2;
    }

    /* End of Switch: '<S436>/Switch4' */

    /* Switch: '<S436>/Switch3' */
    if (Code_Gen_Model_B.Steering_Abs_Angle_Active) {
      /* Switch: '<S436>/Switch3' */
      Code_Gen_Model_B.Steering_Abs_Angle = rtb_Rotationmatrixfromlocalto_1;
    } else {
      /* Switch: '<S436>/Switch3' incorporates:
       *  Constant: '<S436>/Constant3'
       */
      Code_Gen_Model_B.Steering_Abs_Angle = 0.0;
    }

    /* End of Switch: '<S436>/Switch3' */

    /* Merge: '<S18>/Merge1' incorporates:
     *  Sum: '<S436>/Add1'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd = Code_Gen_Model_B.Steering_Abs_Angle +
      Code_Gen_Model_B.Steering_Abs_Gyro;

    /* Switch: '<S417>/Switch1' incorporates:
     *  Constant: '<S417>/Constant5'
     *  Constant: '<S417>/Constant7'
     *  Constant: '<S417>/Constant8'
     *  DataTypeConversion: '<S417>/Data Type Conversion'
     *  DataTypeConversion: '<S417>/Data Type Conversion1'
     *  Switch: '<S417>/Switch'
     *  Switch: '<S437>/Switch7'
     */
    if (TEST_Swerve_Mode_Override_Flag != 0.0) {
      rtb_Is_Absolute_Steering = (TEST_Swerve_Mode_Steering != 0.0);
      rtb_Is_Absolute_Translation_g = (TEST_Swerve_Mode_Translation != 0.0);
    } else {
      rtb_Is_Absolute_Steering = rtb_LogicalOperator_c;
      rtb_Is_Absolute_Translation_g = !FixPtRelationalOperator_p;
    }

    /* End of Switch: '<S417>/Switch1' */

    /* Merge: '<S18>/Merge2' incorporates:
     *  SignalConversion: '<S436>/Signal Copy'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd = rtb_Coral_Wheel_DutyCycle_merge;

    /* Merge: '<S18>/Merge13' incorporates:
     *  SignalConversion generated from: '<S24>/Coral_Arm_Angle_Desired'
     */
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_merge =
      Code_Gen_Model_B.Coral_Arm_Angle_Desired;

    /* SignalConversion generated from: '<S24>/Coral_Pickup_Lower_Wait_State' */
    rtb_Compare_cid = Code_Gen_Model_B.Coral_Pickup_Lower_Wait_State;

    /* SignalConversion generated from: '<S24>/Coral_Wheel_DutyCycle' */
    rtb_Coral_Wheel_DutyCycle_merge = Code_Gen_Model_B.Coral_Wheel_DC;

    /* Merge: '<S18>/Merge11' incorporates:
     *  SignalConversion generated from: '<S24>/Elevator_Height_Desired'
     */
    Code_Gen_Model_B.Elevator_Height_Desired_merge =
      Code_Gen_Model_B.Elevator_Height_Desired;

    /* Merge: '<S18>/Merge21' incorporates:
     *  SignalConversion generated from: '<S24>/Elevator_LowerPickup_Reset'
     */
    Code_Gen_Model_B.Elevator_LowerPickup_Reset_merg =
      Code_Gen_Model_B.Elevator_LowerPickup_Reset;

    /* Merge: '<S18>/Merge24' incorporates:
     *  SignalConversion generated from: '<S24>/State_ID'
     */
    Code_Gen_Model_B.State_ID_merge = Code_Gen_Model_B.State_ID;

    /* Merge: '<S18>/Merge12' incorporates:
     *  Constant: '<S416>/Constant5'
     *  SignalConversion generated from: '<S24>/Reefscape_Motors_Enable'
     */
    Code_Gen_Model_B.Reefscape_Motors_Enable_merge = true;

    /* Merge: '<S18>/Merge7' incorporates:
     *  Constant: '<S24>/Constant3'
     *  SignalConversion generated from: '<S24>/Spline_Enable'
     */
    Code_Gen_Model_B.Spline_Enable = false;

    /* Merge: '<S18>/Merge9' incorporates:
     *  Constant: '<S24>/Constant9'
     *  SignalConversion generated from: '<S24>/Spline_Num_Poses'
     */
    Code_Gen_Model_B.Spline_Num_Poses = 10.0;

    /* Merge: '<S18>/Merge10' incorporates:
     *  Constant: '<S24>/Constant1'
     *  SignalConversion generated from: '<S24>/Test_Mode'
     */
    Code_Gen_Model_B.Test_Mode = false;

    /* SignalConversion generated from: '<S24>/Enable_Wheels' incorporates:
     *  Constant: '<S24>/Constant6'
     */
    rtb_Enable_Wheels = 0.0;

    /* SignalConversion generated from: '<S24>/Reset_Wheel_Offsets' incorporates:
     *  Constant: '<S24>/Constant13'
     */
    rtb_Reset_Wheel_Offsets = 0.0;

    /* SignalConversion generated from: '<S24>/Disable_Wheels' incorporates:
     *  Constant: '<S24>/Constant14'
     */
    rtb_Disable_Wheels = 0.0;

    /* SignalConversion generated from: '<S24>/Swerve_Motors_Disabled' incorporates:
     *  Constant: '<S24>/Constant2'
     */
    rtb_Swerve_Motors_Disabled = false;

    /* Update for UnitDelay: '<S450>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_l = rtb_Rotationmatrixfromlocalto_2;

    /* Update for UnitDelay: '<S450>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_p = rtb_Switch2_gl;

    /* Update for UnitDelay: '<S457>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_B1_A'
     *
     * Block description for '<S457>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_c = Code_Gen_Model_U.Gamepad_B1_A;

    /* Update for UnitDelay: '<S458>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_B2_B'
     *
     * Block description for '<S458>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_nr = Code_Gen_Model_U.Gamepad_B2_B;

    /* Update for UnitDelay: '<S462>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_B3_X'
     *
     * Block description for '<S462>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_ez = Code_Gen_Model_U.Gamepad_B3_X;

    /* Update for UnitDelay: '<S463>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_B4_Y'
     *
     * Block description for '<S463>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_nh = Code_Gen_Model_U.Gamepad_B4_Y;

    /* Update for UnitDelay: '<S464>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_Start'
     *
     * Block description for '<S464>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_i = Code_Gen_Model_U.Gamepad_Start;

    /* Update for UnitDelay: '<S459>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_Back'
     *
     * Block description for '<S459>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_cp = Code_Gen_Model_U.Gamepad_Back;

    /* Update for UnitDelay: '<S465>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_RB'
     *
     * Block description for '<S465>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_p = Code_Gen_Model_U.Gamepad_RB;

    /* Update for UnitDelay: '<S468>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_LT'
     *
     * Block description for '<S468>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_o = Code_Gen_Model_U.Gamepad_LT;

    /* Update for UnitDelay: '<S469>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_RT'
     *
     * Block description for '<S469>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_j = Code_Gen_Model_U.Gamepad_RT;

    /* Update for UnitDelay: '<S466>/Delay Input1'
     *
     * Block description for '<S466>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_oy = Code_Gen_Model_B.Gamepad_POV_Up;

    /* Update for UnitDelay: '<S467>/Delay Input1'
     *
     * Block description for '<S467>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_f = Code_Gen_Model_B.Gamepad_POV_Down;

    /* Update for UnitDelay: '<S460>/Delay Input1'
     *
     * Block description for '<S460>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_o5 = Code_Gen_Model_B.Gamepad_POV_Left;

    /* Update for UnitDelay: '<S461>/Delay Input1'
     *
     * Block description for '<S461>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_a = Code_Gen_Model_B.Gamepad_POV_Right;

    /* Update for UnitDelay: '<S24>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_ia = Code_Gen_Model_B.Teleop_AT_On_Target;

    /* Update for UnitDelay: '<S414>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_nr = rtb_Switch2_ji;

    /* Update for UnitDelay: '<S414>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_kq = rtb_Switch2_jm;

    /* Update for UnitDelay: '<S454>/FixPt Unit Delay2' incorporates:
     *  Constant: '<S454>/FixPt Constant'
     */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_a = 0U;

    /* Update for UnitDelay: '<S454>/FixPt Unit Delay1' */
    Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_f = rtb_Rotationmatrixfromlocalto_0;

    /* Update for UnitDelay: '<S444>/Delay Input1'
     *
     * Block description for '<S444>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_jp = rtb_LogicalOperator_c;

    /* Update for UnitDelay: '<S443>/Delay Input1'
     *
     * Block description for '<S443>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_ft = rtb_OR_gh;

    /* Update for UnitDelay: '<S439>/Delay Input1'
     *
     * Block description for '<S439>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_m = Code_Gen_Model_B.Face_Away_Driver;

    /* Update for UnitDelay: '<S440>/Delay Input1'
     *
     * Block description for '<S440>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_k = Code_Gen_Model_B.Face_Left_Driver;

    /* Update for UnitDelay: '<S441>/Delay Input1'
     *
     * Block description for '<S441>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_g = Code_Gen_Model_B.Face_Toward_Driver;

    /* Update for UnitDelay: '<S442>/Delay Input1'
     *
     * Block description for '<S442>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_g2 = Code_Gen_Model_B.Face_Right_Driver;

    /* Update for UnitDelay: '<S436>/Unit Delay2' */
    Code_Gen_Model_DW.UnitDelay2_DSTATE = rtb_AND1;

    /* Update for UnitDelay: '<S436>/Unit Delay4' */
    Code_Gen_Model_DW.UnitDelay4_DSTATE = rtb_AND2_k;

    /* Update for UnitDelay: '<S436>/Unit Delay3' */
    Code_Gen_Model_DW.UnitDelay3_DSTATE =
      Code_Gen_Model_B.Steering_Abs_Gyro_Latch;

    /* Update for UnitDelay: '<S413>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_e1 =
      Code_Gen_Model_B.AT_Field_Target_Angle;

    /* Update for UnitDelay: '<S436>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_j2 = rtb_Rotationmatrixfromlocalto_1;

    /* End of Outputs for SubSystem: '<S1>/Teleop' */
    break;

   default:
    /* InitializeConditions for IfAction SubSystem: '<S1>/Test' incorporates:
     *  ActionPort: '<S25>/Action Port'
     */
    /* InitializeConditions for SwitchCase: '<S1>/Switch Case' incorporates:
     *  UnitDelay: '<S25>/Unit Delay'
     */
    Code_Gen_Model_DW.UnitDelay_DSTATE_ir = ((rtAction == rtPrevAction) &&
      (Code_Gen_Model_DW.UnitDelay_DSTATE_ir));

    /* End of InitializeConditions for SubSystem: '<S1>/Test' */

    /* Outputs for IfAction SubSystem: '<S1>/Test' incorporates:
     *  ActionPort: '<S25>/Action Port'
     */
    /* SignalConversion generated from: '<S25>/Spline_Ref_Poses' incorporates:
     *  Merge: '<S18>/Merge8'
     */
    memset(&rtb_Spline_Ref_Poses[0], 0, 40U * (sizeof(real_T)));

    /* Merge: '<S18>/Merge1' incorporates:
     *  Constant: '<S25>/Constant1'
     *  SignalConversion generated from: '<S25>/Steering_Abs_Cmd'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd = 0.0;

    /* Merge: '<S18>/Merge2' incorporates:
     *  Constant: '<S25>/Constant2'
     *  SignalConversion generated from: '<S25>/Steering_Rel_Cmd'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd = 0.0;

    /* Merge: '<S18>/Merge3' incorporates:
     *  Constant: '<S25>/Constant3'
     *  SignalConversion generated from: '<S25>/Translation_Angle'
     */
    Code_Gen_Model_B.Translation_Angle = 0.0;

    /* Merge: '<S18>/Merge4' incorporates:
     *  Constant: '<S25>/Constant4'
     *  SignalConversion generated from: '<S25>/Translation_Speed'
     */
    Code_Gen_Model_B.Translation_Speed = 0.0;

    /* SignalConversion generated from: '<S25>/Is_Absolute_Translation' incorporates:
     *  Constant: '<S25>/Constant5'
     */
    rtb_Is_Absolute_Translation_g = false;

    /* SignalConversion generated from: '<S25>/Is_Absolute_Steering' incorporates:
     *  Constant: '<S25>/Constant6'
     */
    rtb_Is_Absolute_Steering = false;

    /* Merge: '<S18>/Merge7' incorporates:
     *  Constant: '<S25>/Constant7'
     *  SignalConversion generated from: '<S25>/Spline_Enable'
     */
    Code_Gen_Model_B.Spline_Enable = false;

    /* Merge: '<S18>/Merge9' incorporates:
     *  Constant: '<S25>/Constant9'
     *  SignalConversion generated from: '<S25>/Spline_Num_Poses'
     */
    Code_Gen_Model_B.Spline_Num_Poses = 10.0;

    /* Merge: '<S18>/Merge10' incorporates:
     *  Constant: '<S25>/Constant12'
     *  SignalConversion generated from: '<S25>/Test_Mode'
     */
    Code_Gen_Model_B.Test_Mode = true;

    /* Switch: '<S25>/Switch' incorporates:
     *  Constant: '<S25>/Constant14'
     *  Switch: '<S25>/Switch1'
     *  UnitDelay: '<S25>/Unit Delay'
     */
    if (Code_Gen_Model_B.Button_Disable_Wheels) {
      rtb_Swerve_Motors_Disabled = true;
    } else if (Code_Gen_Model_B.Button_Enable_Wheels) {
      /* Switch: '<S25>/Switch1' incorporates:
       *  Constant: '<S25>/Constant13'
       */
      rtb_Swerve_Motors_Disabled = false;
    } else {
      rtb_Swerve_Motors_Disabled = Code_Gen_Model_DW.UnitDelay_DSTATE_ir;
    }

    /* End of Switch: '<S25>/Switch' */

    /* Merge: '<S18>/Merge12' incorporates:
     *  Constant: '<S25>/Constant11'
     *  SignalConversion generated from: '<S25>/Reefscape_Motors_Enable'
     */
    Code_Gen_Model_B.Reefscape_Motors_Enable_merge = false;

    /* Merge: '<S18>/Merge11' incorporates:
     *  Constant: '<S25>/Constant10'
     *  SignalConversion generated from: '<S25>/Elevator_Height_Desired'
     */
    Code_Gen_Model_B.Elevator_Height_Desired_merge = 0.0;

    /* Merge: '<S18>/Merge13' incorporates:
     *  Constant: '<S25>/Constant15'
     *  SignalConversion generated from: '<S25>/Coral_Arm_Angle_Desired'
     */
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_merge = -90.0;

    /* SignalConversion generated from: '<S25>/Coral_Wheel_DutyCycle' incorporates:
     *  Constant: '<S25>/Constant16'
     */
    rtb_Coral_Wheel_DutyCycle_merge = 0.0;

    /* SignalConversion generated from: '<S25>/Algae_Wheel_Outside_DutyCycle' incorporates:
     *  Constant: '<S25>/Constant17'
     */
    rtb_Algae_Wheel_Outside_DutyCyc = 0.0;

    /* SignalConversion generated from: '<S25>/Algae_Wheel_Inside_DutyCycle' incorporates:
     *  Constant: '<S25>/Constant18'
     */
    rtb_Algae_Wheel_Inside_DutyCycl = 0.0;

    /* Merge: '<S18>/Merge21' incorporates:
     *  Constant: '<S25>/Constant19'
     *  SignalConversion generated from: '<S25>/Elevator_LowerPickup_Reset'
     */
    Code_Gen_Model_B.Elevator_LowerPickup_Reset_merg = false;

    /* SignalConversion generated from: '<S25>/Coral_Pickup_Lower_Wait_State' incorporates:
     *  Constant: '<S25>/Constant20'
     */
    rtb_Compare_cid = false;

    /* Merge: '<S18>/Merge23' incorporates:
     *  Constant: '<S25>/Constant21'
     *  SignalConversion generated from: '<S25>/Swerve_Drive_Integral_Enable'
     */
    Code_Gen_Model_B.Swerve_Drive_Integral_Enable = false;

    /* SignalConversion generated from: '<S25>/AT_On_Target' incorporates:
     *  Constant: '<S25>/Constant23'
     */
    Robot_Reached_Destination = false;

    /* Merge: '<S18>/Merge24' incorporates:
     *  Constant: '<S25>/Constant22'
     *  SignalConversion generated from: '<S25>/State_ID'
     */
    Code_Gen_Model_B.State_ID_merge = 0.2;

    /* DataTypeConversion: '<S25>/Cast To Boolean1' */
    rtb_Enable_Wheels = Code_Gen_Model_B.Button_Enable_Wheels;

    /* DataTypeConversion: '<S25>/Cast To Boolean3' */
    rtb_Disable_Wheels = Code_Gen_Model_B.Button_Disable_Wheels;

    /* DataTypeConversion: '<S25>/Cast To Boolean2' */
    rtb_Reset_Wheel_Offsets = Code_Gen_Model_B.Button_Reset_Wheel_Offsets;

    /* Update for UnitDelay: '<S25>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_ir = rtb_Swerve_Motors_Disabled;

    /* End of Outputs for SubSystem: '<S1>/Test' */
    break;
  }

  /* End of SwitchCase: '<S1>/Switch Case' */

  /* If: '<S21>/If' incorporates:
   *  Constant: '<S251>/Constant'
   *  Logic: '<S251>/AND'
   *  MATLAB Function: '<S201>/Find closest index to curve'
   *  Product: '<S251>/Product'
   *  RelationalOperator: '<S251>/Relational Operator'
   *  RelationalOperator: '<S251>/Relational Operator1'
   *  Selector: '<S251>/Selector'
   *  Selector: '<S251>/Selector1'
   *  Selector: '<S252>/Selector'
   *  Sum: '<S251>/Add'
   */
  rtPrevAction = Code_Gen_Model_DW.If_ActiveSubsystem;
  rtAction = (int8_T)(!Code_Gen_Model_B.Spline_Enable);
  Code_Gen_Model_DW.If_ActiveSubsystem = rtAction;
  if ((rtPrevAction != rtAction) && (rtPrevAction == 0)) {
    /* Disable for If: '<S204>/If' */
    if (Code_Gen_Model_DW.If_ActiveSubsystem_h == 0) {
      /* Disable for If: '<S207>/If' */
      if (Code_Gen_Model_DW.If_ActiveSubsystem_o == 0) {
        /* Disable for If: '<S209>/If' */
        Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;
      }

      Code_Gen_Model_DW.If_ActiveSubsystem_o = -1;
    }

    Code_Gen_Model_DW.If_ActiveSubsystem_h = -1;

    /* End of Disable for If: '<S204>/If' */
  }

  if (rtAction == 0) {
    if (rtPrevAction != 0) {
      /* InitializeConditions for IfAction SubSystem: '<S21>/Spline Path Following Enabled' incorporates:
       *  ActionPort: '<S199>/Action Port'
       */
      /* InitializeConditions for If: '<S21>/If' incorporates:
       *  UnitDelay: '<S199>/Unit Delay'
       *  UnitDelay: '<S200>/Unit Delay'
       *  UnitDelay: '<S202>/Unit Delay'
       *  UnitDelay: '<S202>/Unit Delay1'
       *  UnitDelay: '<S252>/Unit Delay'
       *  UnitDelay: '<S252>/Unit Delay1'
       */
      Code_Gen_Model_DW.UnitDelay_DSTATE_gh = 2.0;
      Code_Gen_Model_DW.UnitDelay_DSTATE_hn = 0.0;
      Code_Gen_Model_DW.UnitDelay1_DSTATE_f4 = 0.0;
      Code_Gen_Model_DW.UnitDelay_DSTATE_g4 = 0.0;
      Code_Gen_Model_DW.UnitDelay_DSTATE_le = 0.0;
      Code_Gen_Model_DW.UnitDelay1_DSTATE_kc = 0.0;

      /* End of InitializeConditions for SubSystem: '<S21>/Spline Path Following Enabled' */
    }

    /* Outputs for IfAction SubSystem: '<S21>/Spline Path Following Enabled' incorporates:
     *  ActionPort: '<S199>/Action Port'
     */
    /* Selector: '<S200>/Selector1' incorporates:
     *  Merge: '<S18>/Merge8'
     */
    for (i = 0; i < 10; i++) {
      rtb_Ref_Poses[i] = rtb_Spline_Ref_Poses[i];
      rtb_Ref_Poses[i + 10] = rtb_Spline_Ref_Poses[i + 10];
    }

    /* End of Selector: '<S200>/Selector1' */

    /* Lookup_n-D: '<S199>/Capture Radius' incorporates:
     *  UnitDelay: '<S199>/Unit Delay'
     */
    rtb_Rotationmatrixfromlocalto_2 = look1_binlcpw
      (Code_Gen_Model_DW.UnitDelay_DSTATE_hn, Code_Gen_Model_ConstP.pooled8,
       Code_Gen_Model_ConstP.CaptureRadius_tableData, 3U);

    /* SignalConversion generated from: '<S200>/Matrix Concatenate2' */
    rtb_Reshapey[0] = Code_Gen_Model_B.KF_Position_X;

    /* SignalConversion generated from: '<S200>/Matrix Concatenate2' */
    rtb_Reshapey[1] = Code_Gen_Model_B.KF_Position_Y;

    /* If: '<S204>/If' incorporates:
     *  RelationalOperator: '<S204>/ '
     *  UnitDelay: '<S200>/Unit Delay'
     */
    rtPrevAction = Code_Gen_Model_DW.If_ActiveSubsystem_h;
    rtAction = (int8_T)(!(Code_Gen_Model_DW.UnitDelay_DSTATE_gh <=
                          Code_Gen_Model_B.Spline_Num_Poses));
    Code_Gen_Model_DW.If_ActiveSubsystem_h = rtAction;
    if ((rtPrevAction != rtAction) && (rtPrevAction == 0)) {
      /* Disable for If: '<S207>/If' */
      if (Code_Gen_Model_DW.If_ActiveSubsystem_o == 0) {
        /* Disable for If: '<S209>/If' */
        Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;
      }

      Code_Gen_Model_DW.If_ActiveSubsystem_o = -1;
    }

    if (rtAction == 0) {
      /* InitializeConditions for IfAction SubSystem: '<S204>/Robot_Index_Is_Valid' incorporates:
       *  ActionPort: '<S207>/Action Port'
       */
      /* InitializeConditions for If: '<S204>/If' incorporates:
       *  UnitDelay: '<S207>/Unit Delay'
       */
      Code_Gen_Model_DW.UnitDelay_DSTATE_e4 = ((rtPrevAction == 0) &&
        (Code_Gen_Model_DW.UnitDelay_DSTATE_e4));

      /* End of InitializeConditions for SubSystem: '<S204>/Robot_Index_Is_Valid' */

      /* Outputs for IfAction SubSystem: '<S204>/Robot_Index_Is_Valid' incorporates:
       *  ActionPort: '<S207>/Action Port'
       */
      /* Outputs for IfAction SubSystem: '<S207>/Increment_If_Rectangle_Check' incorporates:
       *  ActionPort: '<S210>/Action Port'
       */
      /* If: '<S207>/If' incorporates:
       *  Selector: '<S200>/Selector1'
       *  Selector: '<S207>/Selector'
       *  Selector: '<S210>/Selector'
       */
      rtb_Rotationmatrixfromlocalto_1 = rtb_Ref_Poses[((int32_T)
        Code_Gen_Model_DW.UnitDelay_DSTATE_gh) - 1];

      /* End of Outputs for SubSystem: '<S207>/Increment_If_Rectangle_Check' */

      /* Sum: '<S207>/Minus' incorporates:
       *  Concatenate: '<S200>/Matrix Concatenate2'
       *  Selector: '<S207>/Selector'
       */
      rtb_Minus_n[0] = rtb_Reshapey[0] - rtb_Rotationmatrixfromlocalto_1;

      /* Outputs for IfAction SubSystem: '<S207>/Increment_If_Rectangle_Check' incorporates:
       *  ActionPort: '<S210>/Action Port'
       */
      /* If: '<S207>/If' incorporates:
       *  Selector: '<S200>/Selector1'
       *  Selector: '<S207>/Selector'
       *  Selector: '<S210>/Selector'
       *  Sum: '<S207>/Minus'
       */
      rtb_Switch2_jm = rtb_Ref_Poses[((int32_T)
        Code_Gen_Model_DW.UnitDelay_DSTATE_gh) + 9];

      /* End of Outputs for SubSystem: '<S207>/Increment_If_Rectangle_Check' */

      /* Sum: '<S207>/Minus' incorporates:
       *  Concatenate: '<S200>/Matrix Concatenate2'
       *  Selector: '<S207>/Selector'
       */
      rtb_Minus_n[1] = rtb_Reshapey[1] - rtb_Switch2_jm;

      /* Math: '<S207>/Hypot' */
      rtb_Switch2_gl = rt_hypotd_snf(rtb_Minus_n[0], rtb_Minus_n[1]);

      /* RelationalOperator: '<S207>/Equal' */
      rtb_Is_Absolute_Translation_g = (Code_Gen_Model_B.Spline_Num_Poses ==
        Code_Gen_Model_DW.UnitDelay_DSTATE_gh);

      /* Switch: '<S207>/Switch' incorporates:
       *  Logic: '<S207>/AND'
       *  Logic: '<S207>/OR'
       *  RelationalOperator: '<S207>/Relational Operator'
       *  UnitDelay: '<S207>/Unit Delay'
       */
      rtb_Is_Absolute_Steering = ((Code_Gen_Model_DW.UnitDelay_DSTATE_e4) ||
        ((rtb_Switch2_gl <= rtb_Rotationmatrixfromlocalto_2) &&
         rtb_Is_Absolute_Translation_g));

      /* If: '<S207>/If' */
      rtPrevAction = Code_Gen_Model_DW.If_ActiveSubsystem_o;
      if (!rtb_Is_Absolute_Steering) {
        if (!rtb_Is_Absolute_Translation_g) {
          rtAction = 1;
        } else {
          rtAction = 2;
        }
      }

      Code_Gen_Model_DW.If_ActiveSubsystem_o = rtAction;
      if ((rtPrevAction != rtAction) && (rtPrevAction == 0)) {
        /* Disable for If: '<S209>/If' */
        Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;
      }

      switch (rtAction) {
       case 0:
        /* Outputs for IfAction SubSystem: '<S207>/Circle_Check_Valid' incorporates:
         *  ActionPort: '<S209>/Action Port'
         */
        /* If: '<S209>/If' incorporates:
         *  RelationalOperator: '<S209>/Equal'
         */
        rtPrevAction = Code_Gen_Model_DW.If_ActiveSubsystem_d;
        rtAction = (int8_T)(!(Code_Gen_Model_DW.UnitDelay_DSTATE_gh ==
                              Code_Gen_Model_B.Spline_Num_Poses));
        Code_Gen_Model_DW.If_ActiveSubsystem_d = rtAction;
        if (rtAction == 0) {
          /* InitializeConditions for IfAction SubSystem: '<S209>/Is_Last_Point' incorporates:
           *  ActionPort: '<S212>/Action Port'
           */
          /* InitializeConditions for If: '<S209>/If' incorporates:
           *  UnitDelay: '<S212>/Unit Delay'
           */
          Code_Gen_Model_DW.UnitDelay_DSTATE_n = ((rtPrevAction == 0) &&
            (Code_Gen_Model_DW.UnitDelay_DSTATE_n));

          /* End of InitializeConditions for SubSystem: '<S209>/Is_Last_Point' */

          /* Outputs for IfAction SubSystem: '<S209>/Is_Last_Point' incorporates:
           *  ActionPort: '<S212>/Action Port'
           */
          /* Switch: '<S212>/Switch' incorporates:
           *  Constant: '<S214>/Constant'
           *  Logic: '<S212>/OR'
           *  RelationalOperator: '<S214>/Compare'
           *  UnitDelay: '<S212>/Unit Delay'
           */
          rtb_AT_Cage_Right_Start_Blue_Ac =
            ((Code_Gen_Model_DW.UnitDelay_DSTATE_n) || (rtb_Switch2_gl <=
              Spline_Stop_Radius));

          /* If: '<S212>/If' */
          if (rtb_AT_Cage_Right_Start_Blue_Ac) {
            /* Outputs for IfAction SubSystem: '<S212>/Robot_Is_At_Destination' incorporates:
             *  ActionPort: '<S215>/Action Port'
             */
            /* Merge: '<S204>/Merge2' incorporates:
             *  Constant: '<S215>/Constant'
             *  SignalConversion generated from: '<S215>/Robot_Reached_Destination'
             */
            rtb_Is_Absolute_Translation_g = true;

            /* SignalConversion generated from: '<S215>/Make_Staight_Line_To_End' incorporates:
             *  Constant: '<S215>/Constant1'
             */
            rtb_AT_Cage_Middle_Start_Red_Ac = false;

            /* End of Outputs for SubSystem: '<S212>/Robot_Is_At_Destination' */
          } else {
            /* Outputs for IfAction SubSystem: '<S212>/Straight_Line_Path_To_End' incorporates:
             *  ActionPort: '<S216>/Action Port'
             */
            /* Merge: '<S204>/Merge2' incorporates:
             *  Constant: '<S216>/Constant'
             *  SignalConversion generated from: '<S216>/Robot_Reached_Destination'
             */
            rtb_Is_Absolute_Translation_g = false;

            /* SignalConversion generated from: '<S216>/Make_Staight_Line_To_End' incorporates:
             *  Constant: '<S216>/Constant1'
             */
            rtb_AT_Cage_Middle_Start_Red_Ac = true;

            /* End of Outputs for SubSystem: '<S212>/Straight_Line_Path_To_End' */
          }

          /* End of If: '<S212>/If' */

          /* Merge: '<S204>/Merge4' incorporates:
           *  SignalConversion: '<S212>/Signal Copy'
           */
          Code_Gen_Model_B.Spline_Follow_Index =
            Code_Gen_Model_DW.UnitDelay_DSTATE_gh;

          /* Update for UnitDelay: '<S212>/Unit Delay' */
          Code_Gen_Model_DW.UnitDelay_DSTATE_n = rtb_AT_Cage_Right_Start_Blue_Ac;

          /* End of Outputs for SubSystem: '<S209>/Is_Last_Point' */
        } else {
          /* Outputs for IfAction SubSystem: '<S209>/Increment_Search' incorporates:
           *  ActionPort: '<S211>/Action Port'
           */
          /* Merge: '<S204>/Merge2' incorporates:
           *  Constant: '<S211>/Constant'
           *  SignalConversion generated from: '<S211>/Robot_Reached_Destination'
           */
          rtb_Is_Absolute_Translation_g = false;

          /* SignalConversion generated from: '<S211>/Make_Staight_Line_To_End' incorporates:
           *  Constant: '<S211>/Constant1'
           */
          rtb_AT_Cage_Middle_Start_Red_Ac = false;

          /* Merge: '<S204>/Merge4' incorporates:
           *  Constant: '<S213>/FixPt Constant'
           *  SignalConversion: '<S211>/Signal Copy'
           *  Sum: '<S213>/FixPt Sum1'
           */
          Code_Gen_Model_B.Spline_Follow_Index =
            Code_Gen_Model_DW.UnitDelay_DSTATE_gh + 1.0;

          /* End of Outputs for SubSystem: '<S209>/Increment_Search' */
        }

        /* End of If: '<S209>/If' */
        /* End of Outputs for SubSystem: '<S207>/Circle_Check_Valid' */
        break;

       case 1:
        /* Outputs for IfAction SubSystem: '<S207>/Increment_If_Rectangle_Check' incorporates:
         *  ActionPort: '<S210>/Action Port'
         */
        /* Sum: '<S217>/FixPt Sum1' incorporates:
         *  Constant: '<S217>/FixPt Constant'
         */
        rtb_Switch2_gl = Code_Gen_Model_DW.UnitDelay_DSTATE_gh + 1.0;

        /* Selector: '<S210>/Selector1' incorporates:
         *  Selector: '<S200>/Selector1'
         */
        rtb_Switch2_g = rtb_Ref_Poses[((int32_T)rtb_Switch2_gl) - 1];

        /* Sum: '<S218>/Subtract' incorporates:
         *  Selector: '<S210>/Selector1'
         *  Sum: '<S218>/Minus1'
         */
        rtb_Minus_n[0] = rtb_Switch2_g - rtb_Rotationmatrixfromlocalto_1;

        /* Selector: '<S210>/Selector1' incorporates:
         *  Selector: '<S200>/Selector1'
         */
        rtb_Rotationmatrixfromlocalto_0 = rtb_Ref_Poses[((int32_T)rtb_Switch2_gl)
          + 9];

        /* Sum: '<S218>/Subtract' incorporates:
         *  Selector: '<S210>/Selector1'
         *  Sum: '<S218>/Minus1'
         */
        rtb_Minus_n[1] = rtb_Rotationmatrixfromlocalto_0 - rtb_Switch2_jm;

        /* Math: '<S218>/Hypot' */
        rtb_Switch2_ji = rt_hypotd_snf(rtb_Minus_n[0], rtb_Minus_n[1]);

        /* Product: '<S218>/Divide' */
        rtb_Switch2_gl = rtb_Minus_n[1];

        /* UnaryMinus: '<S218>/Unary Minus' */
        rtb_Add_o5 = rtb_Minus_n[0];

        /* Product: '<S218>/Product' incorporates:
         *  Product: '<S218>/Divide'
         *  UnaryMinus: '<S218>/Unary Minus'
         */
        rtb_Minus_n[0] = (rtb_Switch2_gl / rtb_Switch2_ji) *
          rtb_Rotationmatrixfromlocalto_2;
        rtb_Minus_n[1] = ((-rtb_Add_o5) / rtb_Switch2_ji) *
          rtb_Rotationmatrixfromlocalto_2;

        /* Sum: '<S218>/Add1' incorporates:
         *  Sum: '<S218>/Add2'
         *  Sum: '<S218>/Minus'
         */
        rtb_Add_o5 = rtb_Switch2_g - rtb_Minus_n[0];

        /* Sum: '<S218>/Minus4' incorporates:
         *  Sum: '<S218>/Add2'
         *  Sum: '<S218>/Minus'
         */
        rtb_Switch2_g = (rtb_Switch2_g + rtb_Minus_n[0]) - rtb_Add_o5;

        /* Sum: '<S218>/Minus5' incorporates:
         *  Concatenate: '<S200>/Matrix Concatenate2'
         *  Sum: '<S218>/Minus'
         */
        rtb_Rotationmatrixfromlocalto_3 = rtb_Reshapey[0] - rtb_Add_o5;

        /* Sum: '<S218>/Add' incorporates:
         *  Sum: '<S218>/Add2'
         *  Sum: '<S218>/Minus1'
         */
        rtb_Switch2_gl = rtb_Rotationmatrixfromlocalto_1 - rtb_Minus_n[0];

        /* Sum: '<S218>/Minus' incorporates:
         *  Sum: '<S218>/Minus1'
         */
        rtb_Add_o5 -= rtb_Switch2_gl;

        /* DotProduct: '<S218>/Dot Product' incorporates:
         *  Concatenate: '<S200>/Matrix Concatenate2'
         *  Sum: '<S218>/Minus'
         *  Sum: '<S218>/Minus1'
         *  Sum: '<S218>/Minus5'
         */
        rtb_Switch2_ji = (rtb_Reshapey[0] - rtb_Switch2_gl) * rtb_Add_o5;

        /* DotProduct: '<S218>/Dot Product1' incorporates:
         *  Sum: '<S218>/Minus'
         */
        rtb_Rotationmatrixfromlocalto_1 = rtb_Add_o5 * rtb_Add_o5;

        /* DotProduct: '<S218>/Dot Product2' incorporates:
         *  Sum: '<S218>/Minus4'
         *  Sum: '<S218>/Minus5'
         */
        rtb_Minus_k_idx_0 = rtb_Switch2_g * rtb_Rotationmatrixfromlocalto_3;

        /* DotProduct: '<S218>/Dot Product3' incorporates:
         *  Sum: '<S218>/Minus4'
         */
        rtb_Init = rtb_Switch2_g * rtb_Switch2_g;

        /* Sum: '<S218>/Add1' incorporates:
         *  Sum: '<S218>/Add2'
         *  Sum: '<S218>/Minus'
         */
        rtb_Add_o5 = rtb_Rotationmatrixfromlocalto_0 - rtb_Minus_n[1];

        /* Sum: '<S218>/Minus4' incorporates:
         *  Sum: '<S218>/Add2'
         *  Sum: '<S218>/Minus'
         */
        rtb_Switch2_g = (rtb_Rotationmatrixfromlocalto_0 + rtb_Minus_n[1]) -
          rtb_Add_o5;

        /* Sum: '<S218>/Minus5' incorporates:
         *  Concatenate: '<S200>/Matrix Concatenate2'
         *  Sum: '<S218>/Minus'
         */
        rtb_Rotationmatrixfromlocalto_3 = rtb_Reshapey[1] - rtb_Add_o5;

        /* Sum: '<S218>/Add' incorporates:
         *  Sum: '<S218>/Add2'
         *  Sum: '<S218>/Minus1'
         */
        rtb_Switch2_gl = rtb_Switch2_jm - rtb_Minus_n[1];

        /* Sum: '<S218>/Minus' incorporates:
         *  Sum: '<S218>/Minus1'
         */
        rtb_Add_o5 -= rtb_Switch2_gl;

        /* DotProduct: '<S218>/Dot Product' incorporates:
         *  Concatenate: '<S200>/Matrix Concatenate2'
         *  Sum: '<S218>/Minus'
         *  Sum: '<S218>/Minus1'
         *  Sum: '<S218>/Minus5'
         */
        rtb_Switch2_ji += (rtb_Reshapey[1] - rtb_Switch2_gl) * rtb_Add_o5;

        /* RelationalOperator: '<S219>/Compare' incorporates:
         *  Constant: '<S219>/Constant'
         */
        rtb_Is_Absolute_Translation_g = (rtb_Switch2_ji >= 0.0);

        /* RelationalOperator: '<S218>/LessThanOrEqual' incorporates:
         *  DotProduct: '<S218>/Dot Product1'
         *  Sum: '<S218>/Minus'
         */
        rtb_AT_Cage_Middle_Start_Red_Ac = (rtb_Switch2_ji <= ((rtb_Add_o5 *
          rtb_Add_o5) + rtb_Rotationmatrixfromlocalto_1));

        /* DotProduct: '<S218>/Dot Product2' incorporates:
         *  Sum: '<S218>/Minus4'
         *  Sum: '<S218>/Minus5'
         */
        rtb_Switch2_ji = (rtb_Switch2_g * rtb_Rotationmatrixfromlocalto_3) +
          rtb_Minus_k_idx_0;

        /* Merge: '<S204>/Merge4' incorporates:
         *  Constant: '<S220>/Constant'
         *  DataTypeConversion: '<S210>/Data Type Conversion'
         *  DotProduct: '<S218>/Dot Product3'
         *  Logic: '<S218>/AND'
         *  RelationalOperator: '<S218>/LessThanOrEqual1'
         *  RelationalOperator: '<S220>/Compare'
         *  Sum: '<S210>/Add'
         *  Sum: '<S218>/Minus4'
         */
        Code_Gen_Model_B.Spline_Follow_Index = ((real_T)
          (((rtb_Is_Absolute_Translation_g && rtb_AT_Cage_Middle_Start_Red_Ac) &&
            (rtb_Switch2_ji >= 0.0)) && (rtb_Switch2_ji <= ((rtb_Switch2_g *
          rtb_Switch2_g) + rtb_Init)))) + Code_Gen_Model_DW.UnitDelay_DSTATE_gh;

        /* Merge: '<S204>/Merge2' incorporates:
         *  Constant: '<S210>/Constant2'
         *  SignalConversion generated from: '<S210>/Robot_Reached_Destination'
         */
        rtb_Is_Absolute_Translation_g = false;

        /* SignalConversion generated from: '<S210>/Make_Staight_Line_To_End' incorporates:
         *  Constant: '<S210>/Constant1'
         */
        rtb_AT_Cage_Middle_Start_Red_Ac = false;

        /* End of Outputs for SubSystem: '<S207>/Increment_If_Rectangle_Check' */
        break;

       default:
        /* Outputs for IfAction SubSystem: '<S207>/Catch-all if not the last point and not in the circle' incorporates:
         *  ActionPort: '<S208>/Action Port'
         */
        /* Merge: '<S204>/Merge2' incorporates:
         *  Constant: '<S208>/Constant2'
         *  SignalConversion generated from: '<S208>/Robot_Reached_Destination'
         */
        rtb_Is_Absolute_Translation_g = false;

        /* SignalConversion generated from: '<S208>/Make_Staight_Line_To_End' incorporates:
         *  Constant: '<S208>/Constant1'
         */
        rtb_AT_Cage_Middle_Start_Red_Ac = false;

        /* Merge: '<S204>/Merge4' incorporates:
         *  SignalConversion generated from: '<S208>/Current_Index'
         */
        Code_Gen_Model_B.Spline_Follow_Index =
          Code_Gen_Model_DW.UnitDelay_DSTATE_gh;

        /* End of Outputs for SubSystem: '<S207>/Catch-all if not the last point and not in the circle' */
        break;
      }

      /* Merge: '<S204>/Merge1' incorporates:
       *  Constant: '<S207>/Constant'
       *  SignalConversion generated from: '<S207>/Out_Of_Bounds'
       */
      Code_Gen_Model_B.Spline_Out_Of_Bounds = false;

      /* Update for UnitDelay: '<S207>/Unit Delay' */
      Code_Gen_Model_DW.UnitDelay_DSTATE_e4 = rtb_Is_Absolute_Steering;

      /* End of Outputs for SubSystem: '<S204>/Robot_Index_Is_Valid' */
    } else {
      /* Outputs for IfAction SubSystem: '<S204>/Escape_Auto_Driving' incorporates:
       *  ActionPort: '<S206>/Action Port'
       */
      /* Merge: '<S204>/Merge1' incorporates:
       *  Constant: '<S206>/Constant'
       *  SignalConversion generated from: '<S206>/Out_Of_Bounds'
       */
      Code_Gen_Model_B.Spline_Out_Of_Bounds = true;

      /* Merge: '<S204>/Merge2' incorporates:
       *  Constant: '<S206>/Constant1'
       *  SignalConversion generated from: '<S206>/Robot_Reached_Destination'
       */
      rtb_Is_Absolute_Translation_g = false;

      /* SignalConversion generated from: '<S206>/Make_Staight_Line_To_End' incorporates:
       *  Constant: '<S206>/Constant2'
       */
      rtb_AT_Cage_Middle_Start_Red_Ac = false;

      /* Merge: '<S204>/Merge4' incorporates:
       *  SignalConversion generated from: '<S206>/Current_Index'
       */
      Code_Gen_Model_B.Spline_Follow_Index =
        Code_Gen_Model_DW.UnitDelay_DSTATE_gh;

      /* End of Outputs for SubSystem: '<S204>/Escape_Auto_Driving' */
    }

    /* End of If: '<S204>/If' */

    /* If: '<S200>/If1' */
    if (!rtb_AT_Cage_Middle_Start_Red_Ac) {
      /* Outputs for IfAction SubSystem: '<S200>/Make_Knots_and_Path_Planning' incorporates:
       *  ActionPort: '<S205>/Action Port'
       */
      /* Bias: '<S221>/Add Constant' incorporates:
       *  Bias: '<S221>/Bias'
       *  Sum: '<S221>/Subtract'
       */
      rtb_Switch2_gl = ((Code_Gen_Model_B.Spline_Num_Poses -
                         Code_Gen_Model_B.Spline_Follow_Index) + 3.0) + 1.0;

      /* SignalConversion generated from: '<S221>/Selector4' incorporates:
       *  Bias: '<S221>/Bias1'
       *  Constant: '<S223>/FixPt Constant'
       *  Sum: '<S223>/FixPt Sum1'
       */
      rtb_Minus_n[0] = Code_Gen_Model_B.Spline_Follow_Index - 1.0;
      rtb_Minus_n[1] = Code_Gen_Model_B.Spline_Num_Poses + 2.0;

      /* SignalConversion generated from: '<S221>/Selector5' */
      rtb_Reshapey[1] = Code_Gen_Model_B.Spline_Num_Poses;

      /* Selector: '<S221>/Selector5' */
      Code_Gen_Model_DW.Selector5_DIMS1[0] = (int32_T)rtb_Reshapey[1];
      Code_Gen_Model_DW.Selector5_DIMS1[1] = 2;
      rtb_Bias1_p = ((int32_T)rtb_Reshapey[1]) - 1;

      /* Concatenate: '<S221>/Matrix Concatenate' */
      Code_Gen_Model_DW.MatrixConcatenate_DIMS1[0] =
        Code_Gen_Model_DW.Selector5_DIMS1[0] + 2;
      Code_Gen_Model_DW.MatrixConcatenate_DIMS1[1] = 2;

      /* Selector: '<S221>/Selector5' incorporates:
       *  Concatenate: '<S221>/Matrix Concatenate'
       *  Gain: '<S225>/Gain'
       *  Selector: '<S200>/Selector1'
       *  Selector: '<S221>/Selector2'
       *  Selector: '<S221>/Selector3'
       *  Sum: '<S225>/Subtract'
       */
      i = 0;
      for (rtb_Num_Segments = 0; rtb_Num_Segments < 2; rtb_Num_Segments++) {
        for (s226_iter = 0; s226_iter <= rtb_Bias1_p; s226_iter++) {
          rtb_Selector5[s226_iter + (Code_Gen_Model_DW.Selector5_DIMS1[0] *
            rtb_Num_Segments)] = rtb_Ref_Poses[s226_iter + i];
        }

        rtb_MatrixConcatenate_p[Code_Gen_Model_DW.MatrixConcatenate_DIMS1[0] *
          rtb_Num_Segments] = (rtb_Ref_Poses[i] * 2.0) - rtb_Ref_Poses[i + 1];
        i += 10;
      }

      /* Concatenate: '<S221>/Matrix Concatenate' incorporates:
       *  Bias: '<S221>/Add Constant1'
       *  Gain: '<S224>/Gain'
       *  Selector: '<S200>/Selector1'
       *  Selector: '<S221>/Selector'
       *  Selector: '<S221>/Selector1'
       *  Selector: '<S221>/Selector5'
       *  Sum: '<S224>/Subtract'
       */
      s226_iter = Code_Gen_Model_DW.Selector5_DIMS1[0];
      for (i = 0; i < 2; i++) {
        for (rtb_Num_Segments = 0; rtb_Num_Segments < s226_iter;
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

      /* Selector: '<S221>/Selector4' */
      s226_iter = ((int32_T)rtb_Minus_n[1]) - ((int32_T)rtb_Minus_n[0]);
      Code_Gen_Model_DW.Selector4_DIMS1[0] = s226_iter + 1;
      Code_Gen_Model_DW.Selector4_DIMS1[1] = 2;

      /* Assignment: '<S221>/Assignment' */
      memset(&rtb_Assignment[0], 0, 24U * (sizeof(real_T)));

      /* Selector: '<S221>/Selector4' */
      rtb_Bias1_p = (int32_T)rtb_Minus_n[0];

      /* Assignment: '<S221>/Assignment' incorporates:
       *  Concatenate: '<S221>/Matrix Concatenate'
       *  Selector: '<S221>/Selector4'
       */
      for (i = 0; i < 2; i++) {
        for (rtb_Num_Segments = 0; rtb_Num_Segments <= s226_iter;
             rtb_Num_Segments++) {
          rtb_Assignment[rtb_Num_Segments + (12 * i)] = rtb_MatrixConcatenate_p
            [((rtb_Num_Segments + rtb_Bias1_p) +
              (Code_Gen_Model_DW.MatrixConcatenate_DIMS1[0] * i)) - 1];
        }
      }

      /* Outputs for Iterator SubSystem: '<S222>/Sampling_Loop' incorporates:
       *  WhileIterator: '<S226>/While Iterator'
       */
      s226_iter = 1;
      do {
        rtb_Rotationmatrixfromlocalto_1 = rtb_Assignment[s226_iter + 1];
        rtb_Minus_n[0] = rtb_Rotationmatrixfromlocalto_1 -
          rtb_Assignment[s226_iter - 1];
        rtb_Add2_f[0] = rtb_Assignment[s226_iter] - rtb_Assignment[s226_iter + 2];
        rtb_Minus_k_idx_0 = rtb_Rotationmatrixfromlocalto_1 -
          rtb_Assignment[s226_iter];
        rtb_Rotationmatrixfromlocalto_1 = rtb_Assignment[s226_iter + 13];
        rtb_Minus_n[1] = rtb_Rotationmatrixfromlocalto_1 -
          rtb_Assignment[s226_iter + 11];
        rtb_Add_o5 = rtb_Assignment[s226_iter + 12];
        rtb_Add2_f[1] = rtb_Add_o5 - rtb_Assignment[s226_iter + 14];
        rtb_Minus_k_idx_1 = rtb_Rotationmatrixfromlocalto_1 - rtb_Add_o5;
        for (rtb_Bias1_p = 0; rtb_Bias1_p < 50; rtb_Bias1_p++) {
          rtb_Switch2_ji = ((real_T)rtb_Bias1_p) / 49.0;
          rtb_Switch2_jm = rt_powd_snf(rtb_Switch2_ji, 2.0);
          rtb_Rotationmatrixfromlocalto_3 = rt_powd_snf(rtb_Switch2_ji, 3.0);
          rtb_Rotationmatrixfromlocalto_0 = (rtb_Switch2_ji - (2.0 *
            rtb_Switch2_jm)) + rtb_Rotationmatrixfromlocalto_3;
          rtb_Rotationmatrixfromlocalto_1 = rtb_Switch2_jm -
            rtb_Rotationmatrixfromlocalto_3;
          rtb_Rotationmatrixfromlocalto_3 = (3.0 * rtb_Switch2_jm) - (2.0 *
            rtb_Rotationmatrixfromlocalto_3);
          rtb_Switch2_g = ((((rtb_Minus_n[0] * rtb_Rotationmatrixfromlocalto_0)
                             + (rtb_Add2_f[0] * rtb_Rotationmatrixfromlocalto_1))
                            * 0.0) + (rtb_Minus_k_idx_0 *
            rtb_Rotationmatrixfromlocalto_3)) + rtb_Assignment[s226_iter];
          rtb_Init = ((((rtb_Minus_n[1] * rtb_Rotationmatrixfromlocalto_0) +
                        (rtb_Add2_f[1] * rtb_Rotationmatrixfromlocalto_1)) * 0.0)
                      + (rtb_Minus_k_idx_1 * rtb_Rotationmatrixfromlocalto_3)) +
            rtb_Add_o5;
          rtb_Rotationmatrixfromlocalto_0 = ((3.0 * rtb_Switch2_jm) - (4.0 *
            rtb_Switch2_ji)) + 1.0;
          rtb_Rotationmatrixfromlocalto_1 = (2.0 * rtb_Switch2_ji) - (3.0 *
            rtb_Switch2_jm);
          rtb_Switch2_jm = (rtb_Switch2_ji - rtb_Switch2_jm) * 6.0;
          rtb_Rotationmatrixfromlocalto_3 = (((rtb_Minus_n[0] *
            rtb_Rotationmatrixfromlocalto_0) + (rtb_Add2_f[0] *
            rtb_Rotationmatrixfromlocalto_1)) * 0.0) + (rtb_Minus_k_idx_0 *
            rtb_Switch2_jm);
          rtb_Switch2_az = (((rtb_Minus_n[1] * rtb_Rotationmatrixfromlocalto_0)
                             + (rtb_Add2_f[1] * rtb_Rotationmatrixfromlocalto_1))
                            * 0.0) + (rtb_Minus_k_idx_1 * rtb_Switch2_jm);
          rtb_Switch2_jm = (6.0 * rtb_Switch2_ji) - 4.0;
          rtb_Rotationmatrixfromlocalto_0 = (-6.0 * rtb_Switch2_ji) + 2.0;
          rtb_Switch2_ji = (-12.0 * rtb_Switch2_ji) + 6.0;
          rtb_Rotationmatrixfromlocalto_1 = (((rtb_Minus_n[0] * rtb_Switch2_jm)
            + (rtb_Add2_f[0] * rtb_Rotationmatrixfromlocalto_0)) * 0.0) +
            (rtb_Minus_k_idx_0 * rtb_Switch2_ji);
          rtb_Rotationmatrixfromlocalto_0 = (((rtb_Minus_n[1] * rtb_Switch2_jm)
            + (rtb_Add2_f[1] * rtb_Rotationmatrixfromlocalto_0)) * 0.0) +
            (rtb_Minus_k_idx_1 * rtb_Switch2_ji);
          rtb_Switch2_jm = rt_powd_snf(rt_hypotd_snf
            (rtb_Rotationmatrixfromlocalto_3, rtb_Switch2_az), 3.0);
          rtb_Switch2_ji = fmax(1.0E-10, rtb_Switch2_jm);
          Code_Gen_Model_DW.Relay_Mode = ((rtb_Switch2_jm >=
            2.2204460492503131E-16) || (Code_Gen_Model_DW.Relay_Mode));
          if ((rtb_Bias1_p + 1) == 1) {
            memset(&rtb_Assignment_d[0], 0, 150U * (sizeof(real_T)));
          }

          rtb_Assignment_d[rtb_Bias1_p] = rtb_Switch2_g;
          rtb_Assignment_d[rtb_Bias1_p + 50] = rtb_Init;
          if (Code_Gen_Model_DW.Relay_Mode) {
            i = 1;
          } else {
            i = -1;
          }

          rtb_Assignment_d[rtb_Bias1_p + 100] = fabs
            ((rtb_Rotationmatrixfromlocalto_3 * rtb_Rotationmatrixfromlocalto_0)
             - (rtb_Rotationmatrixfromlocalto_1 * rtb_Switch2_az)) /
            (rtb_Switch2_ji * ((real_T)i));
        }

        if (s226_iter == 1) {
          memset(&Code_Gen_Model_B.Assignment[0], 0, 450U * (sizeof(real_T)));
        }

        for (i = 0; i < 3; i++) {
          memcpy(&Code_Gen_Model_B.Assignment[((i * 50) + (s226_iter * 150)) +
                 -150], &rtb_Assignment_d[i * 50], 50U * (sizeof(real_T)));
        }

        rtb_Switch2_ji = rtb_Switch2_gl - ((real_T)s226_iter);
        rtb_Num_Segments = s226_iter;
        s226_iter++;
      } while ((rtb_Switch2_ji >= 4.0) && (s226_iter <= 3));

      /* End of Outputs for SubSystem: '<S222>/Sampling_Loop' */

      /* SignalConversion generated from: '<S205>/Position_and_Curvature' incorporates:
       *  Assignment: '<S226>/Assignment'
       *  Merge: '<S200>/Merge'
       */
      memcpy(&rtb_Position_and_Curvature[0], &Code_Gen_Model_B.Assignment[0],
             450U * (sizeof(real_T)));

      /* End of Outputs for SubSystem: '<S200>/Make_Knots_and_Path_Planning' */
    } else {
      /* Outputs for IfAction SubSystem: '<S200>/If Action Subsystem' incorporates:
       *  ActionPort: '<S203>/Action Port'
       */
      /* Product: '<S203>/Product' incorporates:
       *  Selector: '<S200>/Selector'
       *  Selector: '<S200>/Selector1'
       */
      rtb_Switch2_ji = rtb_Ref_Poses[((int32_T)Code_Gen_Model_B.Spline_Num_Poses)
        - 1];

      /* Product: '<S203>/Product1' incorporates:
       *  Selector: '<S200>/Selector'
       *  Selector: '<S200>/Selector1'
       */
      rtb_Switch2_gl = rtb_Ref_Poses[((int32_T)Code_Gen_Model_B.Spline_Num_Poses)
        + 9];
      for (i = 0; i < 50; i++) {
        /* Product: '<S203>/Product' incorporates:
         *  Constant: '<S203>/Constant2'
         */
        rtb_MatrixConcatenate_h[i] = rtb_Switch2_ji;

        /* Product: '<S203>/Product1' incorporates:
         *  Constant: '<S203>/Constant2'
         *  Product: '<S203>/Product'
         */
        rtb_MatrixConcatenate_h[i + 50] = rtb_Switch2_gl;
      }

      /* Assignment: '<S203>/Assignment' incorporates:
       *  Concatenate: '<S203>/Matrix Concatenate'
       *  Merge: '<S200>/Merge'
       */
      memset(&rtb_Position_and_Curvature[0], 0, 450U * (sizeof(real_T)));
      for (i = 0; i < 50; i++) {
        rtb_Position_and_Curvature[i] = rtb_MatrixConcatenate_h[i];
        rtb_Position_and_Curvature[i + 50] = rtb_MatrixConcatenate_h[i + 50];
      }

      /* End of Assignment: '<S203>/Assignment' */

      /* SignalConversion generated from: '<S203>/Num_Segments' incorporates:
       *  Constant: '<S203>/Constant1'
       */
      rtb_Num_Segments = 1;

      /* End of Outputs for SubSystem: '<S200>/If Action Subsystem' */
    }

    /* End of If: '<S200>/If1' */

    /* Concatenate: '<S201>/Matrix Concatenate' incorporates:
     *  Merge: '<S200>/Merge'
     *  Selector: '<S201>/Selector'
     *  Selector: '<S201>/Selector1'
     *  Selector: '<S201>/Selector3'
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

    /* End of Concatenate: '<S201>/Matrix Concatenate' */

    /* MATLAB Function: '<S201>/Distance Along Curve' incorporates:
     *  Concatenate: '<S201>/Matrix Concatenate'
     *  Selector: '<S201>/Selector4'
     *  Selector: '<S201>/Selector5'
     */
    memset(&rtb_Assignment_d[0], 0, 150U * (sizeof(real_T)));
    for (s226_iter = 0; s226_iter < 149; s226_iter++) {
      /* Outputs for Iterator SubSystem: '<S222>/Sampling_Loop' incorporates:
       *  WhileIterator: '<S226>/While Iterator'
       */
      rtb_Assignment_d[s226_iter + 1] = rt_hypotd_snf
        (rtb_MatrixConcatenate_o[s226_iter + 1] -
         rtb_MatrixConcatenate_o[s226_iter], rtb_MatrixConcatenate_o[s226_iter +
         151] - rtb_MatrixConcatenate_o[s226_iter + 150]) +
        rtb_Assignment_d[s226_iter];

      /* End of Outputs for SubSystem: '<S222>/Sampling_Loop' */
    }

    /* End of MATLAB Function: '<S201>/Distance Along Curve' */

    /* MATLAB Function: '<S201>/Find closest index to curve' incorporates:
     *  Concatenate: '<S201>/Matrix Concatenate'
     *  Selector: '<S201>/Selector4'
     *  Selector: '<S201>/Selector5'
     *  Selector: '<S252>/Selector'
     */
    for (s226_iter = 0; s226_iter < 150; s226_iter++) {
      /* Outputs for Iterator SubSystem: '<S222>/Sampling_Loop' incorporates:
       *  WhileIterator: '<S226>/While Iterator'
       */
      distance_from_robot[s226_iter] = rt_hypotd_snf
        (rtb_MatrixConcatenate_o[s226_iter] - Code_Gen_Model_B.KF_Position_X,
         rtb_MatrixConcatenate_o[s226_iter + 150] -
         Code_Gen_Model_B.KF_Position_Y);

      /* End of Outputs for SubSystem: '<S222>/Sampling_Loop' */
    }

    if (!rtIsNaN(distance_from_robot[0])) {
      s226_iter = 1;
    } else {
      s226_iter = 0;
      rtb_Bias1_p = 2;
      exitg1 = false;
      while ((!exitg1) && (rtb_Bias1_p < 151)) {
        if (!rtIsNaN(distance_from_robot[rtb_Bias1_p - 1])) {
          s226_iter = rtb_Bias1_p;
          exitg1 = true;
        } else {
          rtb_Bias1_p++;
        }
      }
    }

    if (s226_iter == 0) {
      rtb_Switch2_gl = distance_from_robot[0];
    } else {
      rtb_Switch2_gl = distance_from_robot[s226_iter - 1];
      for (rtb_Bias1_p = s226_iter + 1; rtb_Bias1_p < 151; rtb_Bias1_p++) {
        rtb_Switch2_ji = distance_from_robot[rtb_Bias1_p - 1];
        if (rtb_Switch2_gl > rtb_Switch2_ji) {
          rtb_Switch2_gl = rtb_Switch2_ji;
        }
      }
    }

    s226_iter = 1;
    rtb_Bias1_p = 0;
    exitg1 = false;
    while ((!exitg1) && (rtb_Bias1_p < 150)) {
      s226_iter = rtb_Bias1_p + 1;
      if (distance_from_robot[rtb_Bias1_p] == rtb_Switch2_gl) {
        exitg1 = true;
      } else {
        rtb_Bias1_p++;
      }
    }

    /* Selector: '<S252>/Selector' incorporates:
     *  Constant: '<S252>/Constant'
     *  MATLAB Function: '<S201>/Find closest index to curve'
     *  MinMax: '<S252>/Min'
     */
    rtb_Switch2_ji = rtb_Assignment_d[((int32_T)fmin(50.0, s226_iter)) - 1];

    /* If: '<S252>/If' incorporates:
     *  RelationalOperator: '<S252>/Relational Operator'
     */
    if (rtb_Assignment_d[0] != rtb_Assignment_d[49]) {
      /* Outputs for IfAction SubSystem: '<S252>/Dynamic Lookup Tables' incorporates:
       *  ActionPort: '<S255>/Action Port'
       */
      /* SignalConversion generated from: '<S255>/Lookup Table Dynamic' */
      rtb_Reshapey[0] = rtb_Assignment_d[0];
      rtb_Reshapey[1] = rtb_Assignment_d[49];

      /* Sum: '<S257>/FixPt Sum1' incorporates:
       *  Constant: '<S257>/FixPt Constant'
       */
      rtb_Switch2_gl = Code_Gen_Model_B.Spline_Follow_Index - 1.0;

      /* SignalConversion generated from: '<S255>/Lookup Table Dynamic' incorporates:
       *  Merge: '<S18>/Merge8'
       *  Selector: '<S255>/Selector11'
       *  Selector: '<S255>/Selector12'
       */
      rtb_Minus_n[0] = rtb_Spline_Ref_Poses[((int32_T)rtb_Switch2_gl) + 19];
      rtb_Minus_n[1] = rtb_Spline_Ref_Poses[((int32_T)
        Code_Gen_Model_B.Spline_Follow_Index) + 19];

      /* SignalConversion generated from: '<S255>/Lookup Table Dynamic1' incorporates:
       *  Merge: '<S18>/Merge8'
       *  Selector: '<S255>/Selector1'
       *  Selector: '<S255>/Selector2'
       */
      rtb_Add2_f[0] = rtb_Spline_Ref_Poses[((int32_T)rtb_Switch2_gl) + 29];
      rtb_Add2_f[1] = rtb_Spline_Ref_Poses[((int32_T)
        Code_Gen_Model_B.Spline_Follow_Index) + 29];

      /* S-Function (sfix_look1_dyn): '<S255>/Lookup Table Dynamic' */
      /* Dynamic Look-Up Table Block: '<S255>/Lookup Table Dynamic'
       * Input0  Data Type:  Floating Point real_T
       * Input1  Data Type:  Floating Point real_T
       * Input2  Data Type:  Floating Point real_T
       * Output0 Data Type:  Floating Point real_T
       * Lookup Method: Linear_Endpoint
       *
       */
      LookUp_real_T_real_T( &(rtb_Switch2_gl), &rtb_Minus_n[0], rtb_Switch2_ji,
                           &rtb_Reshapey[0], 1U);

      /* SignalConversion: '<S255>/Signal Copy' incorporates:
       *  S-Function (sfix_look1_dyn): '<S255>/Lookup Table Dynamic1'
       */
      /* Dynamic Look-Up Table Block: '<S255>/Lookup Table Dynamic1'
       * Input0  Data Type:  Floating Point real_T
       * Input1  Data Type:  Floating Point real_T
       * Input2  Data Type:  Floating Point real_T
       * Output0 Data Type:  Floating Point real_T
       * Lookup Method: Linear_Endpoint
       *
       */
      LookUp_real_T_real_T( &(rtb_Merge1), &rtb_Add2_f[0], rtb_Switch2_ji,
                           &rtb_Reshapey[0], 1U);

      /* End of Outputs for SubSystem: '<S252>/Dynamic Lookup Tables' */
    } else {
      /* Outputs for IfAction SubSystem: '<S252>/Latch' incorporates:
       *  ActionPort: '<S256>/Action Port'
       */
      /* SignalConversion generated from: '<S256>/In1' incorporates:
       *  UnitDelay: '<S252>/Unit Delay1'
       */
      rtb_Switch2_gl = Code_Gen_Model_DW.UnitDelay1_DSTATE_f4;

      /* SignalConversion generated from: '<S256>/In2' incorporates:
       *  UnitDelay: '<S252>/Unit Delay'
       */
      rtb_Merge1 = Code_Gen_Model_DW.UnitDelay_DSTATE_g4;

      /* End of Outputs for SubSystem: '<S252>/Latch' */
    }

    /* End of If: '<S252>/If' */

    /* MinMax: '<S199>/Min' incorporates:
     *  Lookup_n-D: '<S199>/Lookahead Distance'
     *  UnitDelay: '<S199>/Unit Delay'
     */
    rtb_Rotationmatrixfromlocalto_2 = fmin(rtb_Rotationmatrixfromlocalto_2,
      look1_binlcpw(Code_Gen_Model_DW.UnitDelay_DSTATE_hn,
                    Code_Gen_Model_ConstP.pooled8,
                    Code_Gen_Model_ConstP.LookaheadDistance_tableData, 3U));

    /* Outputs for Iterator SubSystem: '<S201>/Find first index that meets distance target' incorporates:
     *  WhileIterator: '<S251>/While Iterator'
     */
    s251_iter = 1U;
    rtb_Is_Absolute_Steering = true;
    while (rtb_Is_Absolute_Steering && (s251_iter <= 150)) {
      /* Outputs for Iterator SubSystem: '<S201>/Find first index that meets distance target' incorporates:
       *  WhileIterator: '<S251>/While Iterator'
       */
      Code_Gen_Model_B.WhileIterator = s251_iter;
      rtb_Is_Absolute_Steering =
        ((rtb_Assignment_d[Code_Gen_Model_B.WhileIterator - 1] <=
          (rtb_Assignment_d[s226_iter - 1] + rtb_Rotationmatrixfromlocalto_2)) &&
         (Code_Gen_Model_B.WhileIterator < (((real_T)rtb_Num_Segments) * 50.0)));
      s251_iter++;
    }

    /* End of Outputs for SubSystem: '<S201>/Find first index that meets distance target' */

    /* Switch: '<S254>/Switch' incorporates:
     *  Concatenate: '<S201>/Matrix Concatenate'
     *  Constant: '<S201>/Constant'
     *  Constant: '<S251>/Constant'
     *  Constant: '<S254>/Constant'
     *  Constant: '<S254>/Constant1'
     *  Constant: '<S254>/Constant2'
     *  Constant: '<S254>/Constant3'
     *  Logic: '<S251>/AND'
     *  MATLAB Function: '<S201>/Find closest index to curve'
     *  Math: '<S254>/Hypot'
     *  Merge: '<S18>/Merge8'
     *  MinMax: '<S254>/Max'
     *  MinMax: '<S254>/Min'
     *  MinMax: '<S254>/Min1'
     *  Product: '<S251>/Product'
     *  Product: '<S254>/Divide'
     *  Product: '<S254>/Product'
     *  Product: '<S254>/Product1'
     *  RelationalOperator: '<S201>/Relational Operator'
     *  RelationalOperator: '<S251>/Relational Operator'
     *  RelationalOperator: '<S251>/Relational Operator1'
     *  Selector: '<S201>/Selector10'
     *  Selector: '<S201>/Selector7'
     *  Selector: '<S201>/Selector8'
     *  Selector: '<S201>/Selector9'
     *  Selector: '<S251>/Selector'
     *  Selector: '<S251>/Selector1'
     *  Selector: '<S252>/Selector'
     *  Sqrt: '<S254>/Sqrt'
     *  Sum: '<S201>/Subtract'
     *  Sum: '<S251>/Add'
     *  Sum: '<S254>/Subtract'
     *  Sum: '<S254>/Subtract1'
     */
    if (Code_Gen_Model_B.Spline_Follow_Index >=
        (Code_Gen_Model_B.Spline_Num_Poses -
         Spline_Pose_Num_Before_End_Reduce_Speed)) {
      rtb_Rotationmatrixfromlocalto_2 = fmin(rt_hypotd_snf(rtb_Spline_Ref_Poses
        [9] - Code_Gen_Model_B.KF_Position_X, rtb_Spline_Ref_Poses[19] -
        Code_Gen_Model_B.KF_Position_Y) *
        Spline_Last_Pose_Distance_to_Velocity_Gain, fmin(rtb_Switch2_gl *
        Spline_Velocity_Multiplier_TEST, sqrt
        (Spline_Max_Centripital_Acceleration / fmax
         (rtb_MatrixConcatenate_o[Code_Gen_Model_B.WhileIterator + 299], 1.0E-5))));
    } else {
      rtb_Rotationmatrixfromlocalto_2 = fmin(rtb_Switch2_gl *
        Spline_Velocity_Multiplier_TEST, sqrt
        (Spline_Max_Centripital_Acceleration / fmax
         (rtb_MatrixConcatenate_o[Code_Gen_Model_B.WhileIterator + 299], 1.0E-5)));
    }

    /* End of Switch: '<S254>/Switch' */

    /* Logic: '<S202>/OR' */
    rtb_AT_Cage_Middle_Start_Red_Ac = (rtb_Is_Absolute_Translation_g ||
      (Code_Gen_Model_B.Spline_Out_Of_Bounds));

    /* Switch: '<S202>/Switch1' incorporates:
     *  Switch: '<S202>/Switch'
     *  UnitDelay: '<S202>/Unit Delay'
     */
    if (rtb_AT_Cage_Middle_Start_Red_Ac) {
      /* Merge: '<S21>/Merge2' incorporates:
       *  Constant: '<S202>/Constant3'
       *  SignalConversion: '<S202>/Signal Copy1'
       */
      Code_Gen_Model_B.Translation_Speed_SPF = 0.0;
      rtb_Switch2_ji = Code_Gen_Model_DW.UnitDelay_DSTATE_le;
    } else {
      /* Merge: '<S21>/Merge2' incorporates:
       *  SignalConversion: '<S202>/Signal Copy1'
       */
      Code_Gen_Model_B.Translation_Speed_SPF = rtb_Rotationmatrixfromlocalto_2;
      rtb_Switch2_ji = rtb_Merge1;
    }

    /* End of Switch: '<S202>/Switch1' */

    /* Merge: '<S21>/Merge' incorporates:
     *  SignalConversion: '<S202>/Signal Copy'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd_SPF = rtb_Switch2_ji;

    /* Selector: '<S201>/Selector6' incorporates:
     *  Concatenate: '<S201>/Matrix Concatenate'
     *  Selector: '<S201>/Selector5'
     */
    Code_Gen_Model_B.Spline_Target_Y =
      rtb_MatrixConcatenate_o[Code_Gen_Model_B.WhileIterator + 149];

    /* Selector: '<S201>/Selector2' incorporates:
     *  Concatenate: '<S201>/Matrix Concatenate'
     *  Selector: '<S201>/Selector4'
     */
    Code_Gen_Model_B.Spline_Target_X =
      rtb_MatrixConcatenate_o[Code_Gen_Model_B.WhileIterator - 1];

    /* Switch: '<S202>/Switch2' incorporates:
     *  Sum: '<S258>/Subtract'
     *  Sum: '<S258>/Subtract1'
     *  Trigonometry: '<S258>/Atan2'
     *  UnitDelay: '<S202>/Unit Delay1'
     */
    if (rtb_AT_Cage_Middle_Start_Red_Ac) {
      rtb_Switch2_jm = Code_Gen_Model_DW.UnitDelay1_DSTATE_kc;
    } else {
      rtb_Switch2_jm = rt_atan2d_snf(Code_Gen_Model_B.Spline_Target_Y -
        Code_Gen_Model_B.KF_Position_Y, Code_Gen_Model_B.Spline_Target_X -
        Code_Gen_Model_B.KF_Position_X);
    }

    /* End of Switch: '<S202>/Switch2' */

    /* Merge: '<S21>/Merge3' incorporates:
     *  SignalConversion: '<S202>/Signal Copy2'
     */
    Code_Gen_Model_B.Translation_Angle_SPF = rtb_Switch2_jm;

    /* Merge: '<S21>/Merge7' incorporates:
     *  SignalConversion: '<S199>/Signal Copy'
     */
    Code_Gen_Model_B.Robot_Reached_Destination_l = rtb_Is_Absolute_Translation_g;

    /* Merge: '<S21>/Merge1' incorporates:
     *  Constant: '<S202>/Constant2'
     *  SignalConversion generated from: '<S199>/Steering_Rel_Cmd'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd_SPF = 0.0;

    /* Merge: '<S21>/Merge4' incorporates:
     *  Constant: '<S202>/Constant5'
     *  SignalConversion generated from: '<S199>/Is_Absolute_Translation'
     */
    Code_Gen_Model_B.Is_Absolute_Translation_SPF = true;

    /* Merge: '<S21>/Merge5' incorporates:
     *  Constant: '<S202>/Constant6'
     *  SignalConversion generated from: '<S199>/Is_Absolute_Steering'
     */
    Code_Gen_Model_B.Is_Absolute_Steering_SPF = true;

    /* Merge: '<S21>/Merge8' incorporates:
     *  SignalConversion generated from: '<S199>/Gyro_Angle_Field_rad'
     */
    Code_Gen_Model_B.Gyro_Angle_SPF = Code_Gen_Model_B.Gyro_Angle_Field_rad;

    /* Update for UnitDelay: '<S200>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_gh = Code_Gen_Model_B.Spline_Follow_Index;

    /* Update for UnitDelay: '<S199>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_hn = rtb_Rotationmatrixfromlocalto_2;

    /* Update for UnitDelay: '<S252>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_f4 = rtb_Switch2_gl;

    /* Update for UnitDelay: '<S252>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_g4 = rtb_Merge1;

    /* Update for UnitDelay: '<S202>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_le = rtb_Switch2_ji;

    /* Update for UnitDelay: '<S202>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_kc = rtb_Switch2_jm;

    /* End of Outputs for SubSystem: '<S21>/Spline Path Following Enabled' */
  } else {
    /* Outputs for IfAction SubSystem: '<S21>/Pass Through' incorporates:
     *  ActionPort: '<S198>/Action Port'
     */
    /* Merge: '<S21>/Merge7' incorporates:
     *  Constant: '<S198>/Constant'
     *  SignalConversion generated from: '<S198>/Robot_Reached_Destination'
     */
    Code_Gen_Model_B.Robot_Reached_Destination_l = true;

    /* Merge: '<S21>/Merge' incorporates:
     *  SignalConversion generated from: '<S198>/Steering_Abs_Cmd_In'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd_SPF = Code_Gen_Model_B.Steering_Abs_Cmd;

    /* Merge: '<S21>/Merge1' incorporates:
     *  SignalConversion generated from: '<S198>/Steering_Rel_Cmd_In'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd_SPF = Code_Gen_Model_B.Steering_Rel_Cmd;

    /* Merge: '<S21>/Merge2' incorporates:
     *  SignalConversion generated from: '<S198>/Translation_Speed_In'
     */
    Code_Gen_Model_B.Translation_Speed_SPF = Code_Gen_Model_B.Translation_Speed;

    /* Merge: '<S21>/Merge3' incorporates:
     *  SignalConversion generated from: '<S198>/Translation_Angle_In'
     */
    Code_Gen_Model_B.Translation_Angle_SPF = Code_Gen_Model_B.Translation_Angle;

    /* Merge: '<S21>/Merge4' incorporates:
     *  SignalConversion generated from: '<S198>/Is_Absolute_Translation_In'
     */
    Code_Gen_Model_B.Is_Absolute_Translation_SPF = rtb_Is_Absolute_Translation_g;

    /* Merge: '<S21>/Merge5' incorporates:
     *  SignalConversion generated from: '<S198>/Is_Absolute_Steering_In'
     */
    Code_Gen_Model_B.Is_Absolute_Steering_SPF = rtb_Is_Absolute_Steering;

    /* Merge: '<S21>/Merge8' incorporates:
     *  SignalConversion generated from: '<S198>/Gyro_Angle_rad'
     */
    Code_Gen_Model_B.Gyro_Angle_SPF = Code_Gen_Model_B.Gyro_Angle_rad;

    /* End of Outputs for SubSystem: '<S21>/Pass Through' */
  }

  /* End of If: '<S21>/If' */

  /* Signum: '<S352>/Sign2' incorporates:
   *  UnitDelay: '<S352>/Unit Delay'
   */
  if (rtIsNaN(Code_Gen_Model_B.Translation_Speed_RL)) {
    rtb_Minus_k_idx_0 = (rtNaN);
  } else if (Code_Gen_Model_B.Translation_Speed_RL < 0.0) {
    rtb_Minus_k_idx_0 = -1.0;
  } else {
    rtb_Minus_k_idx_0 = (Code_Gen_Model_B.Translation_Speed_RL > 0.0);
  }

  /* Signum: '<S352>/Sign1' */
  if (rtIsNaN(Code_Gen_Model_B.Translation_Speed_SPF)) {
    rtb_Switch2_i = (rtNaN);
  } else if (Code_Gen_Model_B.Translation_Speed_SPF < 0.0) {
    rtb_Switch2_i = -1.0;
  } else {
    rtb_Switch2_i = (Code_Gen_Model_B.Translation_Speed_SPF > 0.0);
  }

  /* Product: '<S352>/Product1' incorporates:
   *  Signum: '<S352>/Sign1'
   *  Signum: '<S352>/Sign2'
   */
  rtb_Minus_k_idx_0 *= rtb_Switch2_i;
  if (rtIsNaN(rtb_Minus_k_idx_0)) {
    i = 0;
  } else {
    i = (int32_T)fmod(rtb_Minus_k_idx_0, 256.0);
  }

  /* Switch: '<S352>/Switch' incorporates:
   *  Constant: '<S352>/Constant'
   *  Constant: '<S357>/Constant'
   *  Constant: '<S358>/Constant'
   *  Logic: '<S352>/or'
   *  Product: '<S352>/Product1'
   *  RelationalOperator: '<S357>/Compare'
   *  RelationalOperator: '<S358>/Compare'
   *  UnitDelay: '<S352>/Unit Delay'
   */
  if ((Code_Gen_Model_B.Translation_Speed_RL == 0.0) || (((i < 0) ? ((int32_T)
         ((int8_T)(-((int8_T)((uint8_T)(-((real_T)i))))))) : i) > 0)) {
    rtb_Switch2_g = Code_Gen_Model_B.Translation_Speed_SPF;
  } else {
    rtb_Switch2_g = 0.0;
  }

  /* End of Switch: '<S352>/Switch' */

  /* Switch: '<S363>/Init' incorporates:
   *  UnitDelay: '<S363>/FixPt Unit Delay1'
   *  UnitDelay: '<S363>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE != 0) {
    rtb_Init = rtb_Switch2_g;
  } else {
    rtb_Init = Code_Gen_Model_B.Translation_Speed_RL;
  }

  /* End of Switch: '<S363>/Init' */

  /* RelationalOperator: '<S359>/Compare' incorporates:
   *  Constant: '<S359>/Constant'
   */
  rtb_Is_Absolute_Steering = (rtb_Switch2_g == 0.0);

  /* RelationalOperator: '<S360>/Compare' incorporates:
   *  Constant: '<S360>/Constant'
   */
  rtb_Is_Absolute_Translation_g = (rtb_Switch2_g > 0.0);

  /* Abs: '<S352>/Abs' incorporates:
   *  Sum: '<S352>/Subtract'
   *  UnitDelay: '<S352>/Unit Delay'
   */
  rtb_Merge1 = fabs(Code_Gen_Model_B.Translation_Speed_RL -
                    Code_Gen_Model_B.Translation_Speed_SPF);

  /* Switch: '<S352>/Switch5' incorporates:
   *  Constant: '<S352>/Constant1'
   *  Switch: '<S352>/Switch1'
   *  UnaryMinus: '<S352>/Unary Minus'
   */
  if (rtb_Is_Absolute_Steering) {
    /* SignalConversion generated from: '<S352>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S352>/Constant4'
     *  Constant: '<S352>/Constant6'
     */
    rtb_Reshapey[0] = Translation_Speed_Approach_Zero_Final_Thresh;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S352>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S352>/Constant2'
     *  Constant: '<S352>/Constant5'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Translation_Speed_Approach_Zero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S352>/Lookup Table Dynamic' */
    /* Dynamic Look-Up Table Block: '<S352>/Lookup Table Dynamic'
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
    /* SignalConversion generated from: '<S352>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S352>/Constant10'
     *  Constant: '<S352>/Constant8'
     */
    rtb_Reshapey[0] = Translation_Speed_NonZero_Final_Scale_Factor;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S352>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S352>/Constant7'
     *  Constant: '<S352>/Constant9'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Translation_Speed_NonZero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S352>/Lookup Table Dynamic1' */
    /* Dynamic Look-Up Table Block: '<S352>/Lookup Table Dynamic1'
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

    /* Switch: '<S352>/Switch3' incorporates:
     *  Constant: '<S352>/Constant1'
     *  Constant: '<S352>/Constant3'
     *  UnaryMinus: '<S352>/Unary Minus'
     */
    if (rtb_Is_Absolute_Translation_g) {
      rtb_Minus_k_idx_0 = Translation_Speed_Rate_Limit_Inc;
    } else {
      rtb_Minus_k_idx_0 = -Translation_Speed_Rate_Limit_Dec;
    }

    /* End of Switch: '<S352>/Switch3' */
  }

  /* End of Switch: '<S352>/Switch5' */

  /* Product: '<S352>/Product' incorporates:
   *  Switch: '<S352>/Switch1'
   */
  rtb_Optimized_Module_Angle = rtb_Minus_k_idx_0 * rtb_Merge1;

  /* Sum: '<S361>/Sum1' */
  rtb_Rotationmatrixfromlocalto_2 = rtb_Switch2_g - rtb_Init;

  /* Switch: '<S362>/Switch2' incorporates:
   *  RelationalOperator: '<S362>/LowerRelop1'
   */
  if (!(rtb_Rotationmatrixfromlocalto_2 > rtb_Optimized_Module_Angle)) {
    /* Switch: '<S352>/Switch2' incorporates:
     *  Constant: '<S352>/Constant1'
     *  Switch: '<S352>/Switch4'
     */
    if (rtb_Is_Absolute_Steering) {
      rtb_Switch2_gl = Translation_Speed_Rate_Limit_Dec;
    } else if (rtb_Is_Absolute_Translation_g) {
      /* Switch: '<S352>/Switch4' incorporates:
       *  Constant: '<S352>/Constant1'
       */
      rtb_Switch2_gl = Translation_Speed_Rate_Limit_Dec;
    } else {
      /* Switch: '<S352>/Switch4' incorporates:
       *  Constant: '<S352>/Constant3'
       *  UnaryMinus: '<S352>/Unary Minus1'
       */
      rtb_Switch2_gl = -Translation_Speed_Rate_Limit_Inc;
    }

    /* End of Switch: '<S352>/Switch2' */

    /* Product: '<S352>/Product2' */
    rtb_Switch2_gl *= rtb_Merge1;

    /* Switch: '<S362>/Switch' incorporates:
     *  RelationalOperator: '<S362>/UpperRelop'
     */
    if (rtb_Rotationmatrixfromlocalto_2 < rtb_Switch2_gl) {
      rtb_Optimized_Module_Angle = rtb_Switch2_gl;
    } else {
      rtb_Optimized_Module_Angle = rtb_Rotationmatrixfromlocalto_2;
    }

    /* End of Switch: '<S362>/Switch' */
  }

  /* End of Switch: '<S362>/Switch2' */

  /* Sum: '<S361>/Sum' */
  Code_Gen_Model_B.Translation_Speed_RL = rtb_Optimized_Module_Angle + rtb_Init;

  /* Switch: '<S355>/Switch' */
  if (Code_Gen_Model_B.Is_Absolute_Translation_SPF) {
    /* Switch: '<S355>/Switch' incorporates:
     *  Constant: '<S387>/Constant3'
     *  Constant: '<S387>/Constant4'
     *  Math: '<S387>/Math Function'
     *  Sum: '<S355>/Subtract'
     *  Sum: '<S387>/Add1'
     *  Sum: '<S387>/Add2'
     */
    Code_Gen_Model_B.Translation_Steering_Cmd = rt_modd_snf
      ((Code_Gen_Model_B.Translation_Angle_SPF - Code_Gen_Model_B.Gyro_Angle_SPF)
       + 3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;
  } else {
    /* Switch: '<S355>/Switch' */
    Code_Gen_Model_B.Translation_Steering_Cmd =
      Code_Gen_Model_B.Translation_Angle_SPF;
  }

  /* End of Switch: '<S355>/Switch' */

  /* Sum: '<S383>/Add1' incorporates:
   *  Constant: '<S383>/Constant3'
   *  Constant: '<S383>/Constant4'
   *  Math: '<S383>/Math Function'
   *  Sum: '<S382>/Sum'
   *  Sum: '<S383>/Add2'
   */
  rtb_Init = rt_modd_snf((Code_Gen_Model_B.Steering_Abs_Cmd_SPF -
    Code_Gen_Model_B.Gyro_Angle_SPF) + 3.1415926535897931, 6.2831853071795862) -
    3.1415926535897931;

  /* Sum: '<S385>/Sum1' incorporates:
   *  Constant: '<S382>/Constant2'
   *  Product: '<S385>/Product'
   *  Sum: '<S385>/Sum'
   *  UnitDelay: '<S385>/Unit Delay1'
   */
  rtb_Merge1 = ((rtb_Init - Code_Gen_Model_DW.UnitDelay1_DSTATE_i) *
                Steering_Heading_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_i;

  /* Product: '<S382>/Product' incorporates:
   *  Constant: '<S382>/Constant3'
   */
  rtb_Rotationmatrixfromlocalto_2 = rtb_Merge1 * Steering_Heading_Control_D;

  /* Sum: '<S384>/Diff' incorporates:
   *  UnitDelay: '<S384>/UD'
   *
   * Block description for '<S384>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S384>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Minus_k_idx_0 = rtb_Rotationmatrixfromlocalto_2 -
    Code_Gen_Model_DW.UD_DSTATE_a;

  /* Saturate: '<S382>/Saturation' */
  if (rtb_Minus_k_idx_0 > Steering_Heading_Control_D_UL) {
    rtb_Minus_k_idx_0 = Steering_Heading_Control_D_UL;
  } else if (rtb_Minus_k_idx_0 < Steering_Heading_Control_D_LL) {
    rtb_Minus_k_idx_0 = Steering_Heading_Control_D_LL;
  }

  /* Sum: '<S382>/Add' incorporates:
   *  Gain: '<S382>/Gain1'
   *  Saturate: '<S382>/Saturation'
   */
  rtb_Switch2_ji = (Steering_Heading_Control_P * rtb_Init) + rtb_Minus_k_idx_0;

  /* Sum: '<S382>/Subtract' incorporates:
   *  Constant: '<S382>/Constant'
   */
  rtb_Optimized_Module_Angle = Steering_Heading_Control_Total_UL -
    rtb_Switch2_ji;

  /* Sum: '<S382>/Sum2' incorporates:
   *  Gain: '<S382>/Gain2'
   *  UnitDelay: '<S382>/Unit Delay'
   */
  rtb_Switch2_gl = (Steering_Heading_Control_I * rtb_Init) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_m;

  /* Switch: '<S386>/Switch2' incorporates:
   *  RelationalOperator: '<S386>/LowerRelop1'
   */
  if (!(rtb_Switch2_gl > rtb_Optimized_Module_Angle)) {
    /* Sum: '<S382>/Subtract1' incorporates:
     *  Constant: '<S382>/Constant1'
     */
    rtb_Switch2_jm = Steering_Heading_Control_Total_LL - rtb_Switch2_ji;

    /* Switch: '<S386>/Switch' incorporates:
     *  RelationalOperator: '<S386>/UpperRelop'
     */
    if (rtb_Switch2_gl < rtb_Switch2_jm) {
      rtb_Optimized_Module_Angle = rtb_Switch2_jm;
    } else {
      rtb_Optimized_Module_Angle = rtb_Switch2_gl;
    }

    /* End of Switch: '<S386>/Switch' */
  }

  /* End of Switch: '<S386>/Switch2' */

  /* Saturate: '<S382>/Saturation1' */
  if (rtb_Optimized_Module_Angle > Steering_Heading_Control_I_UL) {
    rtb_Switch2_gl = Steering_Heading_Control_I_UL;
  } else if (rtb_Optimized_Module_Angle < Steering_Heading_Control_I_LL) {
    rtb_Switch2_gl = Steering_Heading_Control_I_LL;
  } else {
    rtb_Switch2_gl = rtb_Optimized_Module_Angle;
  }

  /* End of Saturate: '<S382>/Saturation1' */

  /* Sum: '<S382>/Add1' */
  rtb_Minus_k_idx_0 = rtb_Switch2_ji + rtb_Switch2_gl;

  /* Saturate: '<S382>/Saturation2' */
  if (rtb_Minus_k_idx_0 > Steering_Heading_Control_Total_UL) {
    /* Saturate: '<S382>/Saturation2' */
    Code_Gen_Model_B.Steering_Localized_PID = Steering_Heading_Control_Total_UL;
  } else if (rtb_Minus_k_idx_0 < Steering_Heading_Control_Total_LL) {
    /* Saturate: '<S382>/Saturation2' */
    Code_Gen_Model_B.Steering_Localized_PID = Steering_Heading_Control_Total_LL;
  } else {
    /* Saturate: '<S382>/Saturation2' */
    Code_Gen_Model_B.Steering_Localized_PID = rtb_Minus_k_idx_0;
  }

  /* End of Saturate: '<S382>/Saturation2' */

  /* Switch: '<S366>/Switch' incorporates:
   *  Abs: '<S366>/Abs'
   *  Constant: '<S366>/Constant'
   *  Constant: '<S381>/Constant'
   *  RelationalOperator: '<S381>/Compare'
   */
  if (fabs(Code_Gen_Model_B.Steering_Localized_PID) >
      Steering_Heading_Control_Deadzone) {
    rtb_Init = Code_Gen_Model_B.Steering_Localized_PID;
  } else {
    rtb_Init = 0.0;
  }

  /* End of Switch: '<S366>/Switch' */

  /* Signum: '<S365>/Sign2' incorporates:
   *  UnitDelay: '<S365>/Unit Delay'
   */
  if (rtIsNaN(Code_Gen_Model_DW.UnitDelay_DSTATE_d)) {
    rtb_Minus_k_idx_0 = (rtNaN);
  } else if (Code_Gen_Model_DW.UnitDelay_DSTATE_d < 0.0) {
    rtb_Minus_k_idx_0 = -1.0;
  } else {
    rtb_Minus_k_idx_0 = (Code_Gen_Model_DW.UnitDelay_DSTATE_d > 0.0);
  }

  /* Signum: '<S365>/Sign1' */
  if (rtIsNaN(rtb_Init)) {
    rtb_Switch2_i = (rtNaN);
  } else if (rtb_Init < 0.0) {
    rtb_Switch2_i = -1.0;
  } else {
    rtb_Switch2_i = (rtb_Init > 0.0);
  }

  /* Product: '<S365>/Product1' incorporates:
   *  Signum: '<S365>/Sign1'
   *  Signum: '<S365>/Sign2'
   */
  rtb_Minus_k_idx_0 *= rtb_Switch2_i;
  if (rtIsNaN(rtb_Minus_k_idx_0)) {
    i = 0;
  } else {
    i = (int32_T)fmod(rtb_Minus_k_idx_0, 256.0);
  }

  /* Switch: '<S365>/Switch' incorporates:
   *  Constant: '<S365>/Constant'
   *  Constant: '<S374>/Constant'
   *  Constant: '<S375>/Constant'
   *  Logic: '<S365>/or'
   *  Product: '<S365>/Product1'
   *  RelationalOperator: '<S374>/Compare'
   *  RelationalOperator: '<S375>/Compare'
   *  UnitDelay: '<S365>/Unit Delay'
   */
  if ((Code_Gen_Model_DW.UnitDelay_DSTATE_d == 0.0) || (((i < 0) ? ((int32_T)
         ((int8_T)(-((int8_T)((uint8_T)(-((real_T)i))))))) : i) > 0)) {
    rtb_uDLookupTable_l = rtb_Init;
  } else {
    rtb_uDLookupTable_l = 0.0;
  }

  /* End of Switch: '<S365>/Switch' */

  /* Switch: '<S380>/Init' incorporates:
   *  UnitDelay: '<S380>/FixPt Unit Delay1'
   *  UnitDelay: '<S380>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_p != 0) {
    rtb_Switch2_jm = rtb_uDLookupTable_l;
  } else {
    rtb_Switch2_jm = Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_e;
  }

  /* End of Switch: '<S380>/Init' */

  /* RelationalOperator: '<S376>/Compare' incorporates:
   *  Constant: '<S376>/Constant'
   */
  rtb_Is_Absolute_Steering = (rtb_uDLookupTable_l == 0.0);

  /* RelationalOperator: '<S377>/Compare' incorporates:
   *  Constant: '<S377>/Constant'
   */
  rtb_Is_Absolute_Translation_g = (rtb_uDLookupTable_l > 0.0);

  /* Abs: '<S365>/Abs' incorporates:
   *  Sum: '<S365>/Subtract'
   *  UnitDelay: '<S365>/Unit Delay'
   */
  rtb_Rotationmatrixfromlocalto_0 = fabs(Code_Gen_Model_DW.UnitDelay_DSTATE_d -
    rtb_Init);

  /* Switch: '<S365>/Switch1' incorporates:
   *  Constant: '<S365>/Constant1'
   *  Switch: '<S365>/Switch3'
   *  Switch: '<S365>/Switch5'
   *  UnaryMinus: '<S365>/Unary Minus'
   */
  if (rtb_Is_Absolute_Steering) {
    rtb_Switch2_ji = -Steering_Absolute_Cmd_Rate_Limit_Dec;

    /* SignalConversion generated from: '<S365>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S365>/Constant1'
     *  Constant: '<S365>/Constant4'
     *  Constant: '<S365>/Constant6'
     *  UnaryMinus: '<S365>/Unary Minus'
     */
    rtb_Reshapey[0] = Steering_Absolute_Cmd_Approach_Zero_Final_Thresh;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S365>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S365>/Constant2'
     *  Constant: '<S365>/Constant5'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Steering_Absolute_Cmd_Approach_Zero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S365>/Lookup Table Dynamic' */
    /* Dynamic Look-Up Table Block: '<S365>/Lookup Table Dynamic'
     * Input0  Data Type:  Floating Point real_T
     * Input1  Data Type:  Floating Point real_T
     * Input2  Data Type:  Floating Point real_T
     * Output0 Data Type:  Floating Point real_T
     * Lookup Method: Linear_Endpoint
     *
     */
    LookUp_real_T_real_T( &(rtb_LookupTableDynamic), &rtb_Reshapey[0],
                         rtb_Rotationmatrixfromlocalto_0, &rtb_Minus_n[0], 1U);
    rtb_Rotationmatrixfromlocalto_0 = rtb_LookupTableDynamic;
  } else {
    if (rtb_Is_Absolute_Translation_g) {
      /* Switch: '<S365>/Switch3' incorporates:
       *  Constant: '<S365>/Constant3'
       */
      rtb_Switch2_ji = Steering_Absolute_Cmd_Rate_Limit_Inc;
    } else {
      rtb_Switch2_ji = -Steering_Absolute_Cmd_Rate_Limit_Dec;
    }

    /* SignalConversion generated from: '<S365>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S365>/Constant1'
     *  Constant: '<S365>/Constant10'
     *  Constant: '<S365>/Constant8'
     *  UnaryMinus: '<S365>/Unary Minus'
     */
    rtb_Reshapey[0] = Steering_Absolute_Cmd_NonZero_Final_Scale_Factor;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S365>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S365>/Constant7'
     *  Constant: '<S365>/Constant9'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Steering_Absolute_Cmd_NonZero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S365>/Lookup Table Dynamic1' */
    /* Dynamic Look-Up Table Block: '<S365>/Lookup Table Dynamic1'
     * Input0  Data Type:  Floating Point real_T
     * Input1  Data Type:  Floating Point real_T
     * Input2  Data Type:  Floating Point real_T
     * Output0 Data Type:  Floating Point real_T
     * Lookup Method: Linear_Endpoint
     *
     */
    LookUp_real_T_real_T( &(rtb_LookupTableDynamic1), &rtb_Reshapey[0],
                         rtb_Rotationmatrixfromlocalto_0, &rtb_Minus_n[0], 1U);
    rtb_Rotationmatrixfromlocalto_0 = rtb_LookupTableDynamic1;
  }

  /* End of Switch: '<S365>/Switch1' */

  /* Product: '<S365>/Product' */
  rtb_Switch2_ji *= rtb_Rotationmatrixfromlocalto_0;

  /* Sum: '<S378>/Sum1' */
  rtb_Rotationmatrixfromlocalto_1 = rtb_uDLookupTable_l - rtb_Switch2_jm;

  /* Switch: '<S379>/Switch2' incorporates:
   *  RelationalOperator: '<S379>/LowerRelop1'
   */
  if (!(rtb_Rotationmatrixfromlocalto_1 > rtb_Switch2_ji)) {
    /* Switch: '<S365>/Switch2' incorporates:
     *  Constant: '<S365>/Constant1'
     *  Switch: '<S365>/Switch4'
     */
    if (rtb_Is_Absolute_Steering) {
      rtb_Switch2_ji = Steering_Absolute_Cmd_Rate_Limit_Dec;
    } else if (rtb_Is_Absolute_Translation_g) {
      /* Switch: '<S365>/Switch4' incorporates:
       *  Constant: '<S365>/Constant1'
       */
      rtb_Switch2_ji = Steering_Absolute_Cmd_Rate_Limit_Dec;
    } else {
      /* Switch: '<S365>/Switch4' incorporates:
       *  Constant: '<S365>/Constant3'
       *  UnaryMinus: '<S365>/Unary Minus1'
       */
      rtb_Switch2_ji = -Steering_Absolute_Cmd_Rate_Limit_Inc;
    }

    /* End of Switch: '<S365>/Switch2' */

    /* Product: '<S365>/Product2' */
    rtb_Switch2_ji *= rtb_Rotationmatrixfromlocalto_0;

    /* Switch: '<S379>/Switch' incorporates:
     *  RelationalOperator: '<S379>/UpperRelop'
     */
    if (!(rtb_Rotationmatrixfromlocalto_1 < rtb_Switch2_ji)) {
      rtb_Switch2_ji = rtb_Rotationmatrixfromlocalto_1;
    }

    /* End of Switch: '<S379>/Switch' */
  }

  /* End of Switch: '<S379>/Switch2' */

  /* Sum: '<S378>/Sum' */
  rtb_Switch2_ji += rtb_Switch2_jm;

  /* Signum: '<S364>/Sign2' incorporates:
   *  UnitDelay: '<S364>/Unit Delay'
   */
  if (rtIsNaN(Code_Gen_Model_DW.UnitDelay_DSTATE_g)) {
    rtb_Minus_k_idx_0 = (rtNaN);
  } else if (Code_Gen_Model_DW.UnitDelay_DSTATE_g < 0.0) {
    rtb_Minus_k_idx_0 = -1.0;
  } else {
    rtb_Minus_k_idx_0 = (Code_Gen_Model_DW.UnitDelay_DSTATE_g > 0.0);
  }

  /* Signum: '<S364>/Sign1' */
  if (rtIsNaN(Code_Gen_Model_B.Steering_Rel_Cmd_SPF)) {
    rtb_Switch2_i = (rtNaN);
  } else if (Code_Gen_Model_B.Steering_Rel_Cmd_SPF < 0.0) {
    rtb_Switch2_i = -1.0;
  } else {
    rtb_Switch2_i = (Code_Gen_Model_B.Steering_Rel_Cmd_SPF > 0.0);
  }

  /* Product: '<S364>/Product1' incorporates:
   *  Signum: '<S364>/Sign1'
   *  Signum: '<S364>/Sign2'
   */
  rtb_Minus_k_idx_0 *= rtb_Switch2_i;
  if (rtIsNaN(rtb_Minus_k_idx_0)) {
    i = 0;
  } else {
    i = (int32_T)fmod(rtb_Minus_k_idx_0, 256.0);
  }

  /* Switch: '<S364>/Switch' incorporates:
   *  Constant: '<S364>/Constant'
   *  Constant: '<S367>/Constant'
   *  Constant: '<S368>/Constant'
   *  Logic: '<S364>/or'
   *  Product: '<S364>/Product1'
   *  RelationalOperator: '<S367>/Compare'
   *  RelationalOperator: '<S368>/Compare'
   *  UnitDelay: '<S364>/Unit Delay'
   */
  if ((Code_Gen_Model_DW.UnitDelay_DSTATE_g == 0.0) || (((i < 0) ? ((int32_T)
         ((int8_T)(-((int8_T)((uint8_T)(-((real_T)i))))))) : i) > 0)) {
    rtb_Optimized_Module_Angle = Code_Gen_Model_B.Steering_Rel_Cmd_SPF;
  } else {
    rtb_Optimized_Module_Angle = 0.0;
  }

  /* End of Switch: '<S364>/Switch' */

  /* Switch: '<S373>/Init' incorporates:
   *  UnitDelay: '<S373>/FixPt Unit Delay1'
   *  UnitDelay: '<S373>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_c != 0) {
    rtb_uDLookupTable_l = rtb_Optimized_Module_Angle;
  } else {
    rtb_uDLookupTable_l = Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_p;
  }

  /* End of Switch: '<S373>/Init' */

  /* RelationalOperator: '<S369>/Compare' incorporates:
   *  Constant: '<S369>/Constant'
   */
  rtb_Is_Absolute_Steering = (rtb_Optimized_Module_Angle == 0.0);

  /* RelationalOperator: '<S370>/Compare' incorporates:
   *  Constant: '<S370>/Constant'
   */
  rtb_Is_Absolute_Translation_g = (rtb_Optimized_Module_Angle > 0.0);

  /* Abs: '<S364>/Abs' incorporates:
   *  Sum: '<S364>/Subtract'
   *  UnitDelay: '<S364>/Unit Delay'
   */
  rtb_Rotationmatrixfromlocalto_0 = fabs(Code_Gen_Model_DW.UnitDelay_DSTATE_g -
    Code_Gen_Model_B.Steering_Rel_Cmd_SPF);

  /* Switch: '<S364>/Switch5' incorporates:
   *  Constant: '<S364>/Constant1'
   *  Switch: '<S364>/Switch1'
   *  UnaryMinus: '<S364>/Unary Minus'
   */
  if (rtb_Is_Absolute_Steering) {
    /* SignalConversion generated from: '<S364>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S364>/Constant4'
     *  Constant: '<S364>/Constant6'
     */
    rtb_Reshapey[0] = Steering_Relative_Cmd_Approach_Zero_Final_Thresh;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S364>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S364>/Constant2'
     *  Constant: '<S364>/Constant5'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Steering_Relative_Cmd_Approach_Zero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S364>/Lookup Table Dynamic' */
    /* Dynamic Look-Up Table Block: '<S364>/Lookup Table Dynamic'
     * Input0  Data Type:  Floating Point real_T
     * Input1  Data Type:  Floating Point real_T
     * Input2  Data Type:  Floating Point real_T
     * Output0 Data Type:  Floating Point real_T
     * Lookup Method: Linear_Endpoint
     *
     */
    LookUp_real_T_real_T( &(rtb_LookupTableDynamic_p), &rtb_Reshapey[0],
                         rtb_Rotationmatrixfromlocalto_0, &rtb_Minus_n[0], 1U);
    rtb_Rotationmatrixfromlocalto_0 = rtb_LookupTableDynamic_p;
    rtb_Minus_k_idx_0 = -Steering_Relative_Cmd_Rate_Limit_Dec;
  } else {
    /* SignalConversion generated from: '<S364>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S364>/Constant10'
     *  Constant: '<S364>/Constant8'
     */
    rtb_Reshapey[0] = Steering_Relative_Cmd_NonZero_Final_Scale_Factor;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S364>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S364>/Constant7'
     *  Constant: '<S364>/Constant9'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Steering_Relative_Cmd_NonZero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S364>/Lookup Table Dynamic1' */
    /* Dynamic Look-Up Table Block: '<S364>/Lookup Table Dynamic1'
     * Input0  Data Type:  Floating Point real_T
     * Input1  Data Type:  Floating Point real_T
     * Input2  Data Type:  Floating Point real_T
     * Output0 Data Type:  Floating Point real_T
     * Lookup Method: Linear_Endpoint
     *
     */
    LookUp_real_T_real_T( &(rtb_LookupTableDynamic1_g), &rtb_Reshapey[0],
                         rtb_Rotationmatrixfromlocalto_0, &rtb_Minus_n[0], 1U);
    rtb_Rotationmatrixfromlocalto_0 = rtb_LookupTableDynamic1_g;

    /* Switch: '<S364>/Switch3' incorporates:
     *  Constant: '<S364>/Constant1'
     *  Constant: '<S364>/Constant3'
     *  UnaryMinus: '<S364>/Unary Minus'
     */
    if (rtb_Is_Absolute_Translation_g) {
      rtb_Minus_k_idx_0 = Steering_Relative_Cmd_Rate_Limit_Inc;
    } else {
      rtb_Minus_k_idx_0 = -Steering_Relative_Cmd_Rate_Limit_Dec;
    }

    /* End of Switch: '<S364>/Switch3' */
  }

  /* End of Switch: '<S364>/Switch5' */

  /* Product: '<S364>/Product' incorporates:
   *  Switch: '<S364>/Switch1'
   */
  rtb_Switch2_jm = rtb_Minus_k_idx_0 * rtb_Rotationmatrixfromlocalto_0;

  /* Sum: '<S371>/Sum1' */
  rtb_Rotationmatrixfromlocalto_1 = rtb_Optimized_Module_Angle -
    rtb_uDLookupTable_l;

  /* Switch: '<S372>/Switch2' incorporates:
   *  RelationalOperator: '<S372>/LowerRelop1'
   */
  if (!(rtb_Rotationmatrixfromlocalto_1 > rtb_Switch2_jm)) {
    /* Switch: '<S364>/Switch2' incorporates:
     *  Constant: '<S364>/Constant1'
     *  Constant: '<S364>/Constant3'
     *  Switch: '<S364>/Switch4'
     *  UnaryMinus: '<S364>/Unary Minus1'
     */
    if (rtb_Is_Absolute_Steering) {
      rtb_Minus_k_idx_0 = Steering_Relative_Cmd_Rate_Limit_Dec;
    } else if (rtb_Is_Absolute_Translation_g) {
      /* Switch: '<S364>/Switch4' incorporates:
       *  Constant: '<S364>/Constant1'
       */
      rtb_Minus_k_idx_0 = Steering_Relative_Cmd_Rate_Limit_Dec;
    } else {
      rtb_Minus_k_idx_0 = -Steering_Relative_Cmd_Rate_Limit_Inc;
    }

    /* Product: '<S364>/Product2' incorporates:
     *  Switch: '<S364>/Switch2'
     */
    rtb_Switch2_jm = rtb_Minus_k_idx_0 * rtb_Rotationmatrixfromlocalto_0;

    /* Switch: '<S372>/Switch' incorporates:
     *  RelationalOperator: '<S372>/UpperRelop'
     */
    if (!(rtb_Rotationmatrixfromlocalto_1 < rtb_Switch2_jm)) {
      rtb_Switch2_jm = rtb_Rotationmatrixfromlocalto_1;
    }

    /* End of Switch: '<S372>/Switch' */
  }

  /* End of Switch: '<S372>/Switch2' */

  /* Sum: '<S371>/Sum' */
  rtb_Switch2_jm += rtb_uDLookupTable_l;

  /* Switch: '<S354>/Switch' */
  if (Code_Gen_Model_B.Is_Absolute_Steering_SPF) {
    /* Switch: '<S354>/Switch' */
    Code_Gen_Model_B.Steering_Localized_Cmd = rtb_Switch2_ji;
  } else {
    /* Switch: '<S354>/Switch' */
    Code_Gen_Model_B.Steering_Localized_Cmd = rtb_Switch2_jm;
  }

  /* End of Switch: '<S354>/Switch' */

  /* Fcn: '<S395>/r->x' incorporates:
   *  Fcn: '<S400>/r->x'
   *  Fcn: '<S405>/r->x'
   *  Fcn: '<S410>/r->x'
   */
  rtb_Rotationmatrixfromlocalto_1 = Code_Gen_Model_B.Translation_Speed_RL * cos
    (Code_Gen_Model_B.Translation_Steering_Cmd);

  /* Sum: '<S389>/Add' incorporates:
   *  Fcn: '<S395>/r->x'
   *  Fcn: '<S396>/r->x'
   */
  rtb_Reshapey[0] = (Code_Gen_Model_B.Steering_Localized_Cmd * cos
                     (Code_Gen_Model_ConstB.FL_Tangent_Angle)) +
    rtb_Rotationmatrixfromlocalto_1;

  /* Fcn: '<S395>/theta->y' incorporates:
   *  Fcn: '<S400>/theta->y'
   *  Fcn: '<S405>/theta->y'
   *  Fcn: '<S410>/theta->y'
   */
  rtb_Rotationmatrixfromlocalto_0 = Code_Gen_Model_B.Translation_Speed_RL * sin
    (Code_Gen_Model_B.Translation_Steering_Cmd);

  /* Sum: '<S389>/Add' incorporates:
   *  Fcn: '<S395>/theta->y'
   *  Fcn: '<S396>/theta->y'
   */
  rtb_Reshapey[1] = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                     (Code_Gen_Model_ConstB.FL_Tangent_Angle)) +
    rtb_Rotationmatrixfromlocalto_0;

  /* Sum: '<S390>/Add' incorporates:
   *  Fcn: '<S401>/r->x'
   *  Fcn: '<S401>/theta->y'
   */
  rtb_Minus_n[0] = (Code_Gen_Model_B.Steering_Localized_Cmd * cos
                    (Code_Gen_Model_ConstB.FR_Tangent_Angle)) +
    rtb_Rotationmatrixfromlocalto_1;
  rtb_Minus_n[1] = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                    (Code_Gen_Model_ConstB.FR_Tangent_Angle)) +
    rtb_Rotationmatrixfromlocalto_0;

  /* Sum: '<S391>/Add' incorporates:
   *  Fcn: '<S406>/r->x'
   *  Fcn: '<S406>/theta->y'
   */
  rtb_Add2_f[0] = (Code_Gen_Model_B.Steering_Localized_Cmd * cos
                   (Code_Gen_Model_ConstB.BL_Tangent_Angle)) +
    rtb_Rotationmatrixfromlocalto_1;
  rtb_Add2_f[1] = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                   (Code_Gen_Model_ConstB.BL_Tangent_Angle)) +
    rtb_Rotationmatrixfromlocalto_0;

  /* Sum: '<S392>/Add' incorporates:
   *  Fcn: '<S411>/r->x'
   *  Fcn: '<S411>/theta->y'
   */
  rtb_Minus_k_idx_0 = (Code_Gen_Model_B.Steering_Localized_Cmd * cos
                       (Code_Gen_Model_ConstB.BR_Tangent_Angle)) +
    rtb_Rotationmatrixfromlocalto_1;
  rtb_Minus_k_idx_1 = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                       (Code_Gen_Model_ConstB.BR_Tangent_Angle)) +
    rtb_Rotationmatrixfromlocalto_0;

  /* Fcn: '<S409>/x->r' */
  rtb_Add_o5 = rt_hypotd_snf(rtb_Minus_k_idx_0, rtb_Minus_k_idx_1);

  /* RelationalOperator: '<S412>/Compare' incorporates:
   *  Constant: '<S412>/Constant'
   */
  rtb_Is_Absolute_Steering = (rtb_Add_o5 == 0.0);

  /* Switch: '<S408>/Switch1' */
  if (rtb_Is_Absolute_Steering) {
    /* Switch: '<S408>/Switch1' incorporates:
     *  Constant: '<S408>/Constant'
     */
    Code_Gen_Model_B.BR_Desired_Wheel_Speed_in = 1.0E-15;
  } else {
    /* Switch: '<S408>/Switch1' */
    Code_Gen_Model_B.BR_Desired_Wheel_Speed_in = rtb_Add_o5;
  }

  /* End of Switch: '<S408>/Switch1' */

  /* Fcn: '<S394>/x->r' */
  rtb_Add_o5 = rt_hypotd_snf(rtb_Reshapey[0], rtb_Reshapey[1]);

  /* RelationalOperator: '<S397>/Compare' incorporates:
   *  Constant: '<S397>/Constant'
   */
  rtb_Is_Absolute_Translation_g = (rtb_Add_o5 == 0.0);

  /* Switch: '<S393>/Switch1' */
  if (rtb_Is_Absolute_Translation_g) {
    /* Switch: '<S393>/Switch1' incorporates:
     *  Constant: '<S393>/Constant'
     */
    Code_Gen_Model_B.FL_Desired_Wheel_Speed_in = 1.0E-15;
  } else {
    /* Switch: '<S393>/Switch1' */
    Code_Gen_Model_B.FL_Desired_Wheel_Speed_in = rtb_Add_o5;
  }

  /* End of Switch: '<S393>/Switch1' */

  /* Fcn: '<S399>/x->r' */
  rtb_Switch2_g = rt_hypotd_snf(rtb_Minus_n[0], rtb_Minus_n[1]);

  /* RelationalOperator: '<S402>/Compare' incorporates:
   *  Constant: '<S402>/Constant'
   */
  rtb_AT_Cage_Middle_Start_Red_Ac = (rtb_Switch2_g == 0.0);

  /* Switch: '<S398>/Switch1' */
  if (rtb_AT_Cage_Middle_Start_Red_Ac) {
    /* Switch: '<S398>/Switch1' incorporates:
     *  Constant: '<S398>/Constant'
     */
    Code_Gen_Model_B.FR_Desired_Wheel_Speed_in = 1.0E-15;
  } else {
    /* Switch: '<S398>/Switch1' */
    Code_Gen_Model_B.FR_Desired_Wheel_Speed_in = rtb_Switch2_g;
  }

  /* End of Switch: '<S398>/Switch1' */

  /* Fcn: '<S404>/x->r' */
  rtb_Init = rt_hypotd_snf(rtb_Add2_f[0], rtb_Add2_f[1]);

  /* RelationalOperator: '<S407>/Compare' incorporates:
   *  Constant: '<S407>/Constant'
   */
  rtb_AT_Cage_Right_Start_Blue_Ac = (rtb_Init == 0.0);

  /* Switch: '<S403>/Switch1' */
  if (rtb_AT_Cage_Right_Start_Blue_Ac) {
    /* Switch: '<S403>/Switch1' incorporates:
     *  Constant: '<S403>/Constant'
     */
    Code_Gen_Model_B.BL_Desired_Wheel_Speed_in = 1.0E-15;
  } else {
    /* Switch: '<S403>/Switch1' */
    Code_Gen_Model_B.BL_Desired_Wheel_Speed_in = rtb_Init;
  }

  /* End of Switch: '<S403>/Switch1' */

  /* Product: '<S388>/Divide' incorporates:
   *  Abs: '<S388>/Abs'
   *  Abs: '<S388>/Abs1'
   *  Abs: '<S388>/Abs2'
   *  Abs: '<S388>/Abs3'
   *  Constant: '<S388>/Constant'
   *  MinMax: '<S388>/Max'
   */
  rtb_Add_o5 = 5.1198378053698752 / fmax(fmax(fmax(fmax(5.1198378053698752,
    Code_Gen_Model_B.FL_Desired_Wheel_Speed_in),
    Code_Gen_Model_B.FR_Desired_Wheel_Speed_in),
    Code_Gen_Model_B.BL_Desired_Wheel_Speed_in),
    Code_Gen_Model_B.BR_Desired_Wheel_Speed_in);

  /* Product: '<S388>/Product3' */
  Code_Gen_Model_B.BR_Desired_Wheel_Speed =
    Code_Gen_Model_B.BR_Desired_Wheel_Speed_in * rtb_Add_o5;

  /* Switch: '<S408>/Switch' */
  if (!rtb_Is_Absolute_Steering) {
    /* Switch: '<S408>/Switch' incorporates:
     *  Fcn: '<S409>/x->theta'
     */
    Code_Gen_Model_B.BR_Desired_Module_Angle = rt_atan2d_snf(rtb_Minus_k_idx_1,
      rtb_Minus_k_idx_0);
  }

  /* End of Switch: '<S408>/Switch' */

  /* Trigonometry: '<S344>/Cos4' incorporates:
   *  Switch: '<S333>/Angle_Switch'
   *  Trigonometry: '<S343>/Cos4'
   */
  rtb_Subtract_h3 = cos(Code_Gen_Model_B.BR_Desired_Module_Angle);

  /* Trigonometry: '<S344>/Sin5' incorporates:
   *  UnaryMinus: '<S342>/Unary Minus'
   */
  rtb_Optimized_Module_Angle = sin(-Code_Gen_Model_B.BR_Steer_Module_Angle);

  /* Trigonometry: '<S344>/Sin4' incorporates:
   *  Switch: '<S333>/Angle_Switch'
   *  Trigonometry: '<S343>/Sin4'
   */
  rtb_Rotationmatrixfromlocalto_0 = sin(Code_Gen_Model_B.BR_Desired_Module_Angle);

  /* Trigonometry: '<S344>/Cos5' incorporates:
   *  UnaryMinus: '<S342>/Unary Minus'
   */
  rtb_Init = cos(-Code_Gen_Model_B.BR_Steer_Module_Angle);

  /* Sum: '<S344>/Subtract1' incorporates:
   *  Product: '<S344>/Product2'
   *  Product: '<S344>/Product3'
   *  Trigonometry: '<S344>/Cos4'
   *  Trigonometry: '<S344>/Sin4'
   */
  rtb_Rotationmatrixfromlocalto_1 = (rtb_Subtract_h3 *
    rtb_Optimized_Module_Angle) + (rtb_Rotationmatrixfromlocalto_0 * rtb_Init);

  /* Sum: '<S344>/Subtract' incorporates:
   *  Product: '<S344>/Product'
   *  Product: '<S344>/Product1'
   *  Trigonometry: '<S344>/Cos4'
   *  Trigonometry: '<S344>/Sin4'
   */
  rtb_Rotationmatrixfromlocalto_3 = (rtb_Subtract_h3 * rtb_Init) -
    (rtb_Rotationmatrixfromlocalto_0 * rtb_Optimized_Module_Angle);

  /* Math: '<S344>/Hypot' */
  rtb_Minus_k_idx_1 = rt_hypotd_snf(rtb_Rotationmatrixfromlocalto_3,
    rtb_Rotationmatrixfromlocalto_1);

  /* Switch: '<S344>/Switch' incorporates:
   *  Constant: '<S344>/Constant'
   *  Constant: '<S344>/Constant1'
   *  Constant: '<S345>/Constant'
   *  Product: '<S344>/Divide'
   *  Product: '<S344>/Divide1'
   *  RelationalOperator: '<S345>/Compare'
   *  Switch: '<S344>/Switch1'
   */
  if (rtb_Minus_k_idx_1 > 1.0E-6) {
    rtb_Switch2_g = rtb_Rotationmatrixfromlocalto_1 / rtb_Minus_k_idx_1;
    rtb_Init = rtb_Rotationmatrixfromlocalto_3 / rtb_Minus_k_idx_1;
  } else {
    rtb_Switch2_g = 0.0;
    rtb_Init = 1.0;
  }

  /* End of Switch: '<S344>/Switch' */

  /* Switch: '<S333>/Speed_Switch' incorporates:
   *  Abs: '<S333>/Abs'
   *  Constant: '<S341>/Constant'
   *  RelationalOperator: '<S341>/Compare'
   *  Switch: '<S333>/Angle_Switch'
   *  Trigonometry: '<S343>/Atan1'
   *  Trigonometry: '<S344>/Atan1'
   *  UnaryMinus: '<S333>/Unary Minus'
   */
  if (fabs(rt_atan2d_snf(rtb_Switch2_g, rtb_Init)) > 1.5707963267948966) {
    rtb_Minus_k_idx_0 = -Code_Gen_Model_B.BR_Desired_Wheel_Speed;

    /* Sum: '<S343>/Subtract1' incorporates:
     *  Product: '<S343>/Product2'
     *  Product: '<S343>/Product3'
     *  UnaryMinus: '<S333>/Unary Minus'
     */
    rtb_Rotationmatrixfromlocalto_1 = (rtb_Subtract_h3 *
      Code_Gen_Model_ConstB.Sin5_c) + (rtb_Rotationmatrixfromlocalto_0 *
      Code_Gen_Model_ConstB.Cos5_b);

    /* Sum: '<S343>/Subtract' incorporates:
     *  Product: '<S343>/Product'
     *  Product: '<S343>/Product1'
     */
    rtb_Rotationmatrixfromlocalto_3 = (rtb_Subtract_h3 *
      Code_Gen_Model_ConstB.Cos5_b) - (rtb_Rotationmatrixfromlocalto_0 *
      Code_Gen_Model_ConstB.Sin5_c);

    /* Math: '<S343>/Hypot' */
    rtb_Rotationmatrixfromlocalto_0 = rt_hypotd_snf
      (rtb_Rotationmatrixfromlocalto_3, rtb_Rotationmatrixfromlocalto_1);

    /* Switch: '<S343>/Switch1' incorporates:
     *  Constant: '<S343>/Constant'
     *  Constant: '<S343>/Constant1'
     *  Constant: '<S346>/Constant'
     *  Product: '<S343>/Divide'
     *  Product: '<S343>/Divide1'
     *  RelationalOperator: '<S346>/Compare'
     *  Switch: '<S343>/Switch'
     */
    if (rtb_Rotationmatrixfromlocalto_0 > 1.0E-6) {
      rtb_Rotationmatrixfromlocalto_3 /= rtb_Rotationmatrixfromlocalto_0;
      rtb_Rotationmatrixfromlocalto_0 = rtb_Rotationmatrixfromlocalto_1 /
        rtb_Rotationmatrixfromlocalto_0;
    } else {
      rtb_Rotationmatrixfromlocalto_3 = 1.0;
      rtb_Rotationmatrixfromlocalto_0 = 0.0;
    }

    /* End of Switch: '<S343>/Switch1' */
    rtb_Optimized_Module_Angle = rt_atan2d_snf(rtb_Rotationmatrixfromlocalto_0,
      rtb_Rotationmatrixfromlocalto_3);
  } else {
    rtb_Minus_k_idx_0 = Code_Gen_Model_B.BR_Desired_Wheel_Speed;
    rtb_Optimized_Module_Angle = Code_Gen_Model_B.BR_Desired_Module_Angle;
  }

  /* Product: '<S336>/Product2' incorporates:
   *  Constant: '<S336>/Constant'
   *  Switch: '<S333>/Speed_Switch'
   */
  rtb_Switch2_g = rtb_Minus_k_idx_0 * 1210.9758620668042;

  /* Signum: '<S331>/Sign' */
  if (rtIsNaN(rtb_Switch2_g)) {
    rtb_Minus_k_idx_0 = (rtNaN);
  } else if (rtb_Switch2_g < 0.0) {
    rtb_Minus_k_idx_0 = -1.0;
  } else {
    rtb_Minus_k_idx_0 = (rtb_Switch2_g > 0.0);
  }

  /* Signum: '<S331>/Sign1' incorporates:
   *  Inport: '<Root>/BackRight_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.BackRight_Drive_Motor_Speed)) {
    rtb_Switch2_i = (rtNaN);
  } else if (Code_Gen_Model_U.BackRight_Drive_Motor_Speed < 0.0) {
    rtb_Switch2_i = -1.0;
  } else {
    rtb_Switch2_i = (Code_Gen_Model_U.BackRight_Drive_Motor_Speed > 0.0);
  }

  /* Sum: '<S334>/Add' incorporates:
   *  Sum: '<S335>/Sum'
   */
  rtb_Optimized_Module_Angle -= Code_Gen_Model_B.BR_Steer_Module_Angle;

  /* Product: '<S266>/Product' incorporates:
   *  Abs: '<S331>/Abs'
   *  Abs: '<S334>/Abs'
   *  Constant: '<S337>/Constant'
   *  Constant: '<S347>/Constant3'
   *  Constant: '<S347>/Constant4'
   *  Inport: '<Root>/BackRight_Drive_Motor_Speed'
   *  Logic: '<S331>/OR'
   *  Lookup_n-D: '<S334>/1-D Lookup Table'
   *  Math: '<S347>/Math Function'
   *  RelationalOperator: '<S331>/Equal1'
   *  RelationalOperator: '<S337>/Compare'
   *  Signum: '<S331>/Sign'
   *  Signum: '<S331>/Sign1'
   *  Sum: '<S334>/Add'
   *  Sum: '<S347>/Add1'
   *  Sum: '<S347>/Add2'
   */
  rtb_Switch2_g = (((real_T)((rtb_Minus_k_idx_0 == rtb_Switch2_i) || (fabs
    (Code_Gen_Model_U.BackRight_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_Switch2_g) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_Optimized_Module_Angle + 1.5707963267948966,
                      3.1415926535897931) - 1.5707963267948966),
     Code_Gen_Model_ConstP.pooled34, Code_Gen_Model_ConstP.pooled33, 1U);

  /* Sum: '<S332>/Sum' incorporates:
   *  Inport: '<Root>/BackRight_Drive_Motor_Speed'
   */
  rtb_Rotationmatrixfromlocalto_3 = rtb_Switch2_g -
    Code_Gen_Model_U.BackRight_Drive_Motor_Speed;

  /* Sum: '<S339>/Sum1' incorporates:
   *  Constant: '<S332>/Constant2'
   *  Product: '<S339>/Product'
   *  Sum: '<S339>/Sum'
   *  UnitDelay: '<S339>/Unit Delay1'
   */
  rtb_Rotationmatrixfromlocalto_0 = ((rtb_Rotationmatrixfromlocalto_3 -
    Code_Gen_Model_DW.UnitDelay1_DSTATE_j) * Drive_Motor_Control_D_FilterCoeff)
    + Code_Gen_Model_DW.UnitDelay1_DSTATE_j;

  /* Product: '<S332>/Product' incorporates:
   *  Constant: '<S332>/Constant3'
   */
  rtb_Rotationmatrixfromlocalto_1 = rtb_Rotationmatrixfromlocalto_0 *
    Drive_Motor_Control_D;

  /* Sum: '<S338>/Diff' incorporates:
   *  UnitDelay: '<S338>/UD'
   *
   * Block description for '<S338>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S338>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Minus_k_idx_0 = rtb_Rotationmatrixfromlocalto_1 -
    Code_Gen_Model_DW.UD_DSTATE_j;

  /* Saturate: '<S332>/Saturation' */
  if (rtb_Minus_k_idx_0 > Drive_Motor_Control_D_UL) {
    rtb_Minus_k_idx_0 = Drive_Motor_Control_D_UL;
  } else if (rtb_Minus_k_idx_0 < Drive_Motor_Control_D_LL) {
    rtb_Minus_k_idx_0 = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S332>/Add' incorporates:
   *  Gain: '<S332>/Gain'
   *  Gain: '<S332>/Gain1'
   *  Saturate: '<S332>/Saturation'
   */
  rtb_Minus_k_idx_1 = ((Drive_Motor_Control_FF * rtb_Switch2_g) +
                       (Drive_Motor_Control_P * rtb_Rotationmatrixfromlocalto_3))
    + rtb_Minus_k_idx_0;

  /* Switch: '<S332>/Switch' incorporates:
   *  Constant: '<S332>/Constant4'
   */
  if (Code_Gen_Model_B.Swerve_Drive_Integral_Enable) {
    /* Sum: '<S332>/Sum2' incorporates:
     *  Gain: '<S332>/Gain2'
     *  UnitDelay: '<S332>/Unit Delay'
     */
    rtb_Rotationmatrixfromlocalto_3 = (Drive_Motor_Control_I *
      rtb_Rotationmatrixfromlocalto_3) + Code_Gen_Model_DW.UnitDelay_DSTATE_l;

    /* Sum: '<S332>/Subtract' incorporates:
     *  Constant: '<S332>/Constant'
     */
    rtb_Switch2_az = 1.0 - rtb_Minus_k_idx_1;

    /* Switch: '<S340>/Switch2' incorporates:
     *  Constant: '<S332>/Constant'
     *  RelationalOperator: '<S340>/LowerRelop1'
     *  Sum: '<S332>/Subtract'
     */
    if (!(rtb_Rotationmatrixfromlocalto_3 > (1.0 - rtb_Minus_k_idx_1))) {
      /* Sum: '<S332>/Subtract1' incorporates:
       *  Constant: '<S332>/Constant1'
       */
      rtb_Switch2_az = -1.0 - rtb_Minus_k_idx_1;

      /* Switch: '<S340>/Switch' incorporates:
       *  Constant: '<S332>/Constant1'
       *  RelationalOperator: '<S340>/UpperRelop'
       *  Sum: '<S332>/Subtract1'
       */
      if (!(rtb_Rotationmatrixfromlocalto_3 < (-1.0 - rtb_Minus_k_idx_1))) {
        rtb_Switch2_az = rtb_Rotationmatrixfromlocalto_3;
      }

      /* End of Switch: '<S340>/Switch' */
    }

    /* End of Switch: '<S340>/Switch2' */

    /* Saturate: '<S332>/Saturation1' */
    if (rtb_Switch2_az > Drive_Motor_Control_I_UL) {
      rtb_Rotationmatrixfromlocalto_3 = Drive_Motor_Control_I_UL;
    } else if (rtb_Switch2_az < Drive_Motor_Control_I_LL) {
      rtb_Rotationmatrixfromlocalto_3 = Drive_Motor_Control_I_LL;
    } else {
      rtb_Rotationmatrixfromlocalto_3 = rtb_Switch2_az;
    }

    /* End of Saturate: '<S332>/Saturation1' */
  } else {
    rtb_Rotationmatrixfromlocalto_3 = 0.0;
  }

  /* End of Switch: '<S332>/Switch' */

  /* Sum: '<S332>/Add1' */
  rtb_Minus_k_idx_0 = rtb_Minus_k_idx_1 + rtb_Rotationmatrixfromlocalto_3;

  /* Saturate: '<S332>/Saturation2' */
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

  /* End of Saturate: '<S332>/Saturation2' */

  /* Switch: '<S393>/Switch' */
  if (!rtb_Is_Absolute_Translation_g) {
    /* Switch: '<S393>/Switch' incorporates:
     *  Fcn: '<S394>/x->theta'
     */
    Code_Gen_Model_B.FL_Desired_Module_Angle = rt_atan2d_snf(rtb_Reshapey[1],
      rtb_Reshapey[0]);
  }

  /* End of Switch: '<S393>/Switch' */

  /* Trigonometry: '<S281>/Cos4' incorporates:
   *  Switch: '<S270>/Angle_Switch'
   *  Trigonometry: '<S280>/Cos4'
   */
  rtb_Subtract_h3 = cos(Code_Gen_Model_B.FL_Desired_Module_Angle);

  /* Trigonometry: '<S281>/Sin5' incorporates:
   *  UnaryMinus: '<S279>/Unary Minus'
   */
  rtb_uDLookupTable_l = sin(-Code_Gen_Model_B.FL_Steer_Module_Angle);

  /* Trigonometry: '<S281>/Sin4' incorporates:
   *  Switch: '<S270>/Angle_Switch'
   *  Trigonometry: '<S280>/Sin4'
   */
  rtb_Integral_hv = sin(Code_Gen_Model_B.FL_Desired_Module_Angle);

  /* Trigonometry: '<S281>/Cos5' incorporates:
   *  UnaryMinus: '<S279>/Unary Minus'
   */
  rtb_Init = cos(-Code_Gen_Model_B.FL_Steer_Module_Angle);

  /* Sum: '<S281>/Subtract1' incorporates:
   *  Product: '<S281>/Product2'
   *  Product: '<S281>/Product3'
   *  Trigonometry: '<S281>/Cos4'
   *  Trigonometry: '<S281>/Sin4'
   */
  rtb_Minus_k_idx_1 = (rtb_Subtract_h3 * rtb_uDLookupTable_l) + (rtb_Integral_hv
    * rtb_Init);

  /* Sum: '<S281>/Subtract' incorporates:
   *  Product: '<S281>/Product'
   *  Product: '<S281>/Product1'
   *  Trigonometry: '<S281>/Cos4'
   *  Trigonometry: '<S281>/Sin4'
   */
  rtb_Switch2_az = (rtb_Subtract_h3 * rtb_Init) - (rtb_Integral_hv *
    rtb_uDLookupTable_l);

  /* Math: '<S281>/Hypot' */
  rtb_Hypot_g5 = rt_hypotd_snf(rtb_Switch2_az, rtb_Minus_k_idx_1);

  /* Switch: '<S281>/Switch' incorporates:
   *  Constant: '<S281>/Constant'
   *  Constant: '<S281>/Constant1'
   *  Constant: '<S282>/Constant'
   *  Product: '<S281>/Divide'
   *  Product: '<S281>/Divide1'
   *  RelationalOperator: '<S282>/Compare'
   *  Switch: '<S281>/Switch1'
   */
  if (rtb_Hypot_g5 > 1.0E-6) {
    rtb_Switch2_g = rtb_Minus_k_idx_1 / rtb_Hypot_g5;
    rtb_Init = rtb_Switch2_az / rtb_Hypot_g5;
  } else {
    rtb_Switch2_g = 0.0;
    rtb_Init = 1.0;
  }

  /* End of Switch: '<S281>/Switch' */

  /* Product: '<S388>/Product' */
  Code_Gen_Model_B.FL_Desired_Wheel_Speed =
    Code_Gen_Model_B.FL_Desired_Wheel_Speed_in * rtb_Add_o5;

  /* Switch: '<S270>/Speed_Switch' incorporates:
   *  Abs: '<S270>/Abs'
   *  Constant: '<S278>/Constant'
   *  RelationalOperator: '<S278>/Compare'
   *  Switch: '<S270>/Angle_Switch'
   *  Trigonometry: '<S280>/Atan1'
   *  Trigonometry: '<S281>/Atan1'
   *  UnaryMinus: '<S270>/Unary Minus'
   */
  if (fabs(rt_atan2d_snf(rtb_Switch2_g, rtb_Init)) > 1.5707963267948966) {
    rtb_Minus_k_idx_0 = -Code_Gen_Model_B.FL_Desired_Wheel_Speed;

    /* Sum: '<S280>/Subtract1' incorporates:
     *  Product: '<S280>/Product2'
     *  Product: '<S280>/Product3'
     *  UnaryMinus: '<S270>/Unary Minus'
     */
    rtb_Minus_k_idx_1 = (rtb_Subtract_h3 * Code_Gen_Model_ConstB.Sin5) +
      (rtb_Integral_hv * Code_Gen_Model_ConstB.Cos5);

    /* Sum: '<S280>/Subtract' incorporates:
     *  Product: '<S280>/Product'
     *  Product: '<S280>/Product1'
     */
    rtb_Hypot_g5 = (rtb_Subtract_h3 * Code_Gen_Model_ConstB.Cos5) -
      (rtb_Integral_hv * Code_Gen_Model_ConstB.Sin5);

    /* Math: '<S280>/Hypot' */
    rtb_Switch2_az = rt_hypotd_snf(rtb_Hypot_g5, rtb_Minus_k_idx_1);

    /* Switch: '<S280>/Switch1' incorporates:
     *  Constant: '<S280>/Constant'
     *  Constant: '<S280>/Constant1'
     *  Constant: '<S283>/Constant'
     *  Product: '<S280>/Divide'
     *  Product: '<S280>/Divide1'
     *  RelationalOperator: '<S283>/Compare'
     *  Switch: '<S280>/Switch'
     */
    if (rtb_Switch2_az > 1.0E-6) {
      rtb_Hypot_g5 /= rtb_Switch2_az;
      rtb_Minus_k_idx_1 /= rtb_Switch2_az;
    } else {
      rtb_Hypot_g5 = 1.0;
      rtb_Minus_k_idx_1 = 0.0;
    }

    /* End of Switch: '<S280>/Switch1' */
    rtb_uDLookupTable_l = rt_atan2d_snf(rtb_Minus_k_idx_1, rtb_Hypot_g5);
  } else {
    rtb_Minus_k_idx_0 = Code_Gen_Model_B.FL_Desired_Wheel_Speed;
    rtb_uDLookupTable_l = Code_Gen_Model_B.FL_Desired_Module_Angle;
  }

  /* Product: '<S273>/Product2' incorporates:
   *  Constant: '<S273>/Constant'
   *  Switch: '<S270>/Speed_Switch'
   */
  rtb_Switch2_g = rtb_Minus_k_idx_0 * 1210.9758620668042;

  /* Signum: '<S268>/Sign' */
  if (rtIsNaN(rtb_Switch2_g)) {
    rtb_Minus_k_idx_0 = (rtNaN);
  } else if (rtb_Switch2_g < 0.0) {
    rtb_Minus_k_idx_0 = -1.0;
  } else {
    rtb_Minus_k_idx_0 = (rtb_Switch2_g > 0.0);
  }

  /* Signum: '<S268>/Sign1' incorporates:
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed)) {
    rtb_Switch2_i = (rtNaN);
  } else if (Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed < 0.0) {
    rtb_Switch2_i = -1.0;
  } else {
    rtb_Switch2_i = (Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed > 0.0);
  }

  /* Sum: '<S271>/Add' incorporates:
   *  Sum: '<S272>/Sum'
   */
  rtb_Init = rtb_uDLookupTable_l - Code_Gen_Model_B.FL_Steer_Module_Angle;

  /* Product: '<S263>/Product' incorporates:
   *  Abs: '<S268>/Abs'
   *  Abs: '<S271>/Abs'
   *  Constant: '<S274>/Constant'
   *  Constant: '<S284>/Constant3'
   *  Constant: '<S284>/Constant4'
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Speed'
   *  Logic: '<S268>/OR'
   *  Lookup_n-D: '<S271>/1-D Lookup Table'
   *  Math: '<S284>/Math Function'
   *  RelationalOperator: '<S268>/Equal1'
   *  RelationalOperator: '<S274>/Compare'
   *  Signum: '<S268>/Sign'
   *  Signum: '<S268>/Sign1'
   *  Sum: '<S271>/Add'
   *  Sum: '<S284>/Add1'
   *  Sum: '<S284>/Add2'
   */
  rtb_Switch2_g = (((real_T)((rtb_Minus_k_idx_0 == rtb_Switch2_i) || (fabs
    (Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_Switch2_g) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_Init + 1.5707963267948966, 3.1415926535897931) -
          1.5707963267948966), Code_Gen_Model_ConstP.pooled34,
     Code_Gen_Model_ConstP.pooled33, 1U);

  /* Sum: '<S269>/Sum' incorporates:
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Speed'
   */
  rtb_Hypot_g5 = rtb_Switch2_g - Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed;

  /* Sum: '<S276>/Sum1' incorporates:
   *  Constant: '<S269>/Constant2'
   *  Product: '<S276>/Product'
   *  Sum: '<S276>/Sum'
   *  UnitDelay: '<S276>/Unit Delay1'
   */
  rtb_Minus_k_idx_1 = ((rtb_Hypot_g5 - Code_Gen_Model_DW.UnitDelay1_DSTATE_f) *
                       Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_f;

  /* Product: '<S269>/Product' incorporates:
   *  Constant: '<S269>/Constant3'
   */
  rtb_Switch2_az = rtb_Minus_k_idx_1 * Drive_Motor_Control_D;

  /* Sum: '<S275>/Diff' incorporates:
   *  UnitDelay: '<S275>/UD'
   *
   * Block description for '<S275>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S275>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Minus_k_idx_0 = rtb_Switch2_az - Code_Gen_Model_DW.UD_DSTATE_h;

  /* Saturate: '<S269>/Saturation' */
  if (rtb_Minus_k_idx_0 > Drive_Motor_Control_D_UL) {
    rtb_Minus_k_idx_0 = Drive_Motor_Control_D_UL;
  } else if (rtb_Minus_k_idx_0 < Drive_Motor_Control_D_LL) {
    rtb_Minus_k_idx_0 = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S269>/Add' incorporates:
   *  Gain: '<S269>/Gain'
   *  Gain: '<S269>/Gain1'
   *  Saturate: '<S269>/Saturation'
   */
  rtb_Add_ju = ((Drive_Motor_Control_FF * rtb_Switch2_g) +
                (Drive_Motor_Control_P * rtb_Hypot_g5)) + rtb_Minus_k_idx_0;

  /* Switch: '<S269>/Switch' incorporates:
   *  Constant: '<S269>/Constant4'
   */
  if (Code_Gen_Model_B.Swerve_Drive_Integral_Enable) {
    /* Sum: '<S269>/Sum2' incorporates:
     *  Gain: '<S269>/Gain2'
     *  UnitDelay: '<S269>/Unit Delay'
     */
    rtb_Hypot_g5 = (Drive_Motor_Control_I * rtb_Hypot_g5) +
      Code_Gen_Model_DW.UnitDelay_DSTATE_j;

    /* Sum: '<S269>/Subtract' incorporates:
     *  Constant: '<S269>/Constant'
     */
    rtb_Switch2_ah = 1.0 - rtb_Add_ju;

    /* Switch: '<S277>/Switch2' incorporates:
     *  Constant: '<S269>/Constant'
     *  RelationalOperator: '<S277>/LowerRelop1'
     *  Sum: '<S269>/Subtract'
     */
    if (!(rtb_Hypot_g5 > (1.0 - rtb_Add_ju))) {
      /* Sum: '<S269>/Subtract1' incorporates:
       *  Constant: '<S269>/Constant1'
       */
      rtb_Switch2_ah = -1.0 - rtb_Add_ju;

      /* Switch: '<S277>/Switch' incorporates:
       *  Constant: '<S269>/Constant1'
       *  RelationalOperator: '<S277>/UpperRelop'
       *  Sum: '<S269>/Subtract1'
       */
      if (!(rtb_Hypot_g5 < (-1.0 - rtb_Add_ju))) {
        rtb_Switch2_ah = rtb_Hypot_g5;
      }

      /* End of Switch: '<S277>/Switch' */
    }

    /* End of Switch: '<S277>/Switch2' */

    /* Saturate: '<S269>/Saturation1' */
    if (rtb_Switch2_ah > Drive_Motor_Control_I_UL) {
      rtb_Hypot_g5 = Drive_Motor_Control_I_UL;
    } else if (rtb_Switch2_ah < Drive_Motor_Control_I_LL) {
      rtb_Hypot_g5 = Drive_Motor_Control_I_LL;
    } else {
      rtb_Hypot_g5 = rtb_Switch2_ah;
    }

    /* End of Saturate: '<S269>/Saturation1' */
  } else {
    rtb_Hypot_g5 = 0.0;
  }

  /* End of Switch: '<S269>/Switch' */

  /* Sum: '<S269>/Add1' */
  rtb_Minus_k_idx_0 = rtb_Add_ju + rtb_Hypot_g5;

  /* Saturate: '<S269>/Saturation2' */
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

  /* End of Saturate: '<S269>/Saturation2' */

  /* Sum: '<S285>/Add1' incorporates:
   *  Constant: '<S285>/Constant3'
   *  Constant: '<S285>/Constant4'
   *  Math: '<S285>/Math Function'
   *  Sum: '<S285>/Add2'
   */
  rtb_Switch2_g = rt_modd_snf(rtb_Init + 3.1415926535897931, 6.2831853071795862)
    - 3.1415926535897931;

  /* Sum: '<S287>/Sum1' incorporates:
   *  Constant: '<S272>/Constant2'
   *  Product: '<S287>/Product'
   *  Sum: '<S287>/Sum'
   *  UnitDelay: '<S287>/Unit Delay1'
   */
  rtb_Add_ju = ((rtb_Switch2_g - Code_Gen_Model_DW.UnitDelay1_DSTATE_bk) *
                Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_bk;

  /* Product: '<S272>/Product' incorporates:
   *  Constant: '<S272>/Constant3'
   */
  rtb_Switch2_ah = rtb_Add_ju * Steering_Motor_Control_D;

  /* Sum: '<S286>/Diff' incorporates:
   *  UnitDelay: '<S286>/UD'
   *
   * Block description for '<S286>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S286>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Minus_k_idx_0 = rtb_Switch2_ah - Code_Gen_Model_DW.UD_DSTATE_b;

  /* Saturate: '<S272>/Saturation' */
  if (rtb_Minus_k_idx_0 > Steering_Motor_Control_D_UL) {
    rtb_Minus_k_idx_0 = Steering_Motor_Control_D_UL;
  } else if (rtb_Minus_k_idx_0 < Steering_Motor_Control_D_LL) {
    rtb_Minus_k_idx_0 = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S272>/Add' incorporates:
   *  Gain: '<S272>/Gain1'
   *  Saturate: '<S272>/Saturation'
   */
  rtb_Add_fn = (Steering_Motor_Control_P * rtb_Switch2_g) + rtb_Minus_k_idx_0;

  /* Sum: '<S272>/Subtract' incorporates:
   *  Constant: '<S272>/Constant'
   */
  rtb_Init = 1.0 - rtb_Add_fn;

  /* Sum: '<S272>/Sum2' incorporates:
   *  Gain: '<S272>/Gain2'
   *  UnitDelay: '<S272>/Unit Delay'
   */
  rtb_Sum2_e = (Steering_Motor_Control_I * rtb_Switch2_g) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_e;

  /* Switch: '<S288>/Switch2' incorporates:
   *  RelationalOperator: '<S288>/LowerRelop1'
   */
  if (!(rtb_Sum2_e > rtb_Init)) {
    /* Switch: '<S288>/Switch' incorporates:
     *  Constant: '<S272>/Constant1'
     *  RelationalOperator: '<S288>/UpperRelop'
     *  Sum: '<S272>/Subtract1'
     */
    if (rtb_Sum2_e < (-1.0 - rtb_Add_fn)) {
      rtb_Init = -1.0 - rtb_Add_fn;
    } else {
      rtb_Init = rtb_Sum2_e;
    }

    /* End of Switch: '<S288>/Switch' */
  }

  /* End of Switch: '<S288>/Switch2' */

  /* Saturate: '<S272>/Saturation1' */
  if (rtb_Init > Steering_Motor_Control_I_UL) {
    rtb_Sum2_e = Steering_Motor_Control_I_UL;
  } else if (rtb_Init < Steering_Motor_Control_I_LL) {
    rtb_Sum2_e = Steering_Motor_Control_I_LL;
  } else {
    rtb_Sum2_e = rtb_Init;
  }

  /* End of Saturate: '<S272>/Saturation1' */

  /* Sum: '<S272>/Add1' */
  rtb_Minus_k_idx_0 = rtb_Add_fn + rtb_Sum2_e;

  /* Saturate: '<S272>/Saturation2' */
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

  /* End of Saturate: '<S272>/Saturation2' */

  /* Switch: '<S398>/Switch' */
  if (!rtb_AT_Cage_Middle_Start_Red_Ac) {
    /* Switch: '<S398>/Switch' incorporates:
     *  Fcn: '<S399>/x->theta'
     */
    Code_Gen_Model_B.FR_Desired_Module_Angle = rt_atan2d_snf(rtb_Minus_n[1],
      rtb_Minus_n[0]);
  }

  /* End of Switch: '<S398>/Switch' */

  /* Trigonometry: '<S302>/Cos4' incorporates:
   *  Switch: '<S291>/Angle_Switch'
   *  Trigonometry: '<S301>/Cos4'
   */
  rtb_Subtract_h3 = cos(Code_Gen_Model_B.FR_Desired_Module_Angle);

  /* Trigonometry: '<S302>/Sin5' incorporates:
   *  UnaryMinus: '<S300>/Unary Minus'
   */
  rtb_uDLookupTable_l = sin(-Code_Gen_Model_B.FR_Steer_Module_Angle);

  /* Trigonometry: '<S302>/Sin4' incorporates:
   *  Switch: '<S291>/Angle_Switch'
   *  Trigonometry: '<S301>/Sin4'
   */
  rtb_Integral_hv = sin(Code_Gen_Model_B.FR_Desired_Module_Angle);

  /* Trigonometry: '<S302>/Cos5' incorporates:
   *  UnaryMinus: '<S300>/Unary Minus'
   */
  rtb_Init = cos(-Code_Gen_Model_B.FR_Steer_Module_Angle);

  /* Sum: '<S302>/Subtract1' incorporates:
   *  Product: '<S302>/Product2'
   *  Product: '<S302>/Product3'
   *  Trigonometry: '<S302>/Cos4'
   *  Trigonometry: '<S302>/Sin4'
   */
  rtb_Add_fn = (rtb_Subtract_h3 * rtb_uDLookupTable_l) + (rtb_Integral_hv *
    rtb_Init);

  /* Sum: '<S302>/Subtract' incorporates:
   *  Product: '<S302>/Product'
   *  Product: '<S302>/Product1'
   *  Trigonometry: '<S302>/Cos4'
   *  Trigonometry: '<S302>/Sin4'
   */
  rtb_Subtract1_la = (rtb_Subtract_h3 * rtb_Init) - (rtb_Integral_hv *
    rtb_uDLookupTable_l);

  /* Math: '<S302>/Hypot' */
  rtb_Hypot_b = rt_hypotd_snf(rtb_Subtract1_la, rtb_Add_fn);

  /* Switch: '<S302>/Switch' incorporates:
   *  Constant: '<S302>/Constant'
   *  Constant: '<S302>/Constant1'
   *  Constant: '<S303>/Constant'
   *  Product: '<S302>/Divide'
   *  Product: '<S302>/Divide1'
   *  RelationalOperator: '<S303>/Compare'
   *  Switch: '<S302>/Switch1'
   */
  if (rtb_Hypot_b > 1.0E-6) {
    rtb_Switch2_g = rtb_Add_fn / rtb_Hypot_b;
    rtb_Init = rtb_Subtract1_la / rtb_Hypot_b;
  } else {
    rtb_Switch2_g = 0.0;
    rtb_Init = 1.0;
  }

  /* End of Switch: '<S302>/Switch' */

  /* Product: '<S388>/Product1' */
  Code_Gen_Model_B.FR_Desired_Wheel_Speed =
    Code_Gen_Model_B.FR_Desired_Wheel_Speed_in * rtb_Add_o5;

  /* Switch: '<S291>/Speed_Switch' incorporates:
   *  Abs: '<S291>/Abs'
   *  Constant: '<S299>/Constant'
   *  RelationalOperator: '<S299>/Compare'
   *  Switch: '<S291>/Angle_Switch'
   *  Trigonometry: '<S301>/Atan1'
   *  Trigonometry: '<S302>/Atan1'
   *  UnaryMinus: '<S291>/Unary Minus'
   */
  if (fabs(rt_atan2d_snf(rtb_Switch2_g, rtb_Init)) > 1.5707963267948966) {
    rtb_Minus_k_idx_0 = -Code_Gen_Model_B.FR_Desired_Wheel_Speed;

    /* Sum: '<S301>/Subtract1' incorporates:
     *  Product: '<S301>/Product2'
     *  Product: '<S301>/Product3'
     *  UnaryMinus: '<S291>/Unary Minus'
     */
    rtb_Add_fn = (rtb_Subtract_h3 * Code_Gen_Model_ConstB.Sin5_m) +
      (rtb_Integral_hv * Code_Gen_Model_ConstB.Cos5_g);

    /* Sum: '<S301>/Subtract' incorporates:
     *  Product: '<S301>/Product'
     *  Product: '<S301>/Product1'
     */
    rtb_Hypot_b = (rtb_Subtract_h3 * Code_Gen_Model_ConstB.Cos5_g) -
      (rtb_Integral_hv * Code_Gen_Model_ConstB.Sin5_m);

    /* Math: '<S301>/Hypot' */
    rtb_Subtract1_la = rt_hypotd_snf(rtb_Hypot_b, rtb_Add_fn);

    /* Switch: '<S301>/Switch1' incorporates:
     *  Constant: '<S301>/Constant'
     *  Constant: '<S301>/Constant1'
     *  Constant: '<S304>/Constant'
     *  Product: '<S301>/Divide'
     *  Product: '<S301>/Divide1'
     *  RelationalOperator: '<S304>/Compare'
     *  Switch: '<S301>/Switch'
     */
    if (rtb_Subtract1_la > 1.0E-6) {
      rtb_Hypot_b /= rtb_Subtract1_la;
      rtb_Add_fn /= rtb_Subtract1_la;
    } else {
      rtb_Hypot_b = 1.0;
      rtb_Add_fn = 0.0;
    }

    /* End of Switch: '<S301>/Switch1' */
    rtb_uDLookupTable_l = rt_atan2d_snf(rtb_Add_fn, rtb_Hypot_b);
  } else {
    rtb_Minus_k_idx_0 = Code_Gen_Model_B.FR_Desired_Wheel_Speed;
    rtb_uDLookupTable_l = Code_Gen_Model_B.FR_Desired_Module_Angle;
  }

  /* Product: '<S294>/Product2' incorporates:
   *  Constant: '<S294>/Constant'
   *  Switch: '<S291>/Speed_Switch'
   */
  rtb_Switch2_g = rtb_Minus_k_idx_0 * 1210.9758620668042;

  /* Signum: '<S289>/Sign' */
  if (rtIsNaN(rtb_Switch2_g)) {
    rtb_Minus_k_idx_0 = (rtNaN);
  } else if (rtb_Switch2_g < 0.0) {
    rtb_Minus_k_idx_0 = -1.0;
  } else {
    rtb_Minus_k_idx_0 = (rtb_Switch2_g > 0.0);
  }

  /* Signum: '<S289>/Sign1' incorporates:
   *  Inport: '<Root>/FrontRight_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.FrontRight_Drive_Motor_Speed)) {
    rtb_Switch2_i = (rtNaN);
  } else if (Code_Gen_Model_U.FrontRight_Drive_Motor_Speed < 0.0) {
    rtb_Switch2_i = -1.0;
  } else {
    rtb_Switch2_i = (Code_Gen_Model_U.FrontRight_Drive_Motor_Speed > 0.0);
  }

  /* Sum: '<S292>/Add' incorporates:
   *  Sum: '<S293>/Sum'
   */
  rtb_Init = rtb_uDLookupTable_l - Code_Gen_Model_B.FR_Steer_Module_Angle;

  /* Product: '<S264>/Product' incorporates:
   *  Abs: '<S289>/Abs'
   *  Abs: '<S292>/Abs'
   *  Constant: '<S295>/Constant'
   *  Constant: '<S305>/Constant3'
   *  Constant: '<S305>/Constant4'
   *  Inport: '<Root>/FrontRight_Drive_Motor_Speed'
   *  Logic: '<S289>/OR'
   *  Lookup_n-D: '<S292>/1-D Lookup Table'
   *  Math: '<S305>/Math Function'
   *  RelationalOperator: '<S289>/Equal1'
   *  RelationalOperator: '<S295>/Compare'
   *  Signum: '<S289>/Sign'
   *  Signum: '<S289>/Sign1'
   *  Sum: '<S292>/Add'
   *  Sum: '<S305>/Add1'
   *  Sum: '<S305>/Add2'
   */
  rtb_Switch2_g = (((real_T)((rtb_Minus_k_idx_0 == rtb_Switch2_i) || (fabs
    (Code_Gen_Model_U.FrontRight_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_Switch2_g) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_Init + 1.5707963267948966, 3.1415926535897931) -
          1.5707963267948966), Code_Gen_Model_ConstP.pooled34,
     Code_Gen_Model_ConstP.pooled33, 1U);

  /* Sum: '<S290>/Sum' incorporates:
   *  Inport: '<Root>/FrontRight_Drive_Motor_Speed'
   */
  rtb_Hypot_b = rtb_Switch2_g - Code_Gen_Model_U.FrontRight_Drive_Motor_Speed;

  /* Sum: '<S297>/Sum1' incorporates:
   *  Constant: '<S290>/Constant2'
   *  Product: '<S297>/Product'
   *  Sum: '<S297>/Sum'
   *  UnitDelay: '<S297>/Unit Delay1'
   */
  rtb_Add_fn = ((rtb_Hypot_b - Code_Gen_Model_DW.UnitDelay1_DSTATE_e) *
                Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_e;

  /* Product: '<S290>/Product' incorporates:
   *  Constant: '<S290>/Constant3'
   */
  rtb_Subtract1_la = rtb_Add_fn * Drive_Motor_Control_D;

  /* Sum: '<S296>/Diff' incorporates:
   *  UnitDelay: '<S296>/UD'
   *
   * Block description for '<S296>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S296>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Minus_k_idx_0 = rtb_Subtract1_la - Code_Gen_Model_DW.UD_DSTATE_mm;

  /* Saturate: '<S290>/Saturation' */
  if (rtb_Minus_k_idx_0 > Drive_Motor_Control_D_UL) {
    rtb_Minus_k_idx_0 = Drive_Motor_Control_D_UL;
  } else if (rtb_Minus_k_idx_0 < Drive_Motor_Control_D_LL) {
    rtb_Minus_k_idx_0 = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S290>/Add' incorporates:
   *  Gain: '<S290>/Gain'
   *  Gain: '<S290>/Gain1'
   *  Saturate: '<S290>/Saturation'
   */
  rtb_Add_c = ((Drive_Motor_Control_FF * rtb_Switch2_g) + (Drive_Motor_Control_P
    * rtb_Hypot_b)) + rtb_Minus_k_idx_0;

  /* Switch: '<S290>/Switch' incorporates:
   *  Constant: '<S290>/Constant4'
   */
  if (Code_Gen_Model_B.Swerve_Drive_Integral_Enable) {
    /* Sum: '<S290>/Sum2' incorporates:
     *  Gain: '<S290>/Gain2'
     *  UnitDelay: '<S290>/Unit Delay'
     */
    rtb_Hypot_b = (Drive_Motor_Control_I * rtb_Hypot_b) +
      Code_Gen_Model_DW.UnitDelay_DSTATE_h;

    /* Sum: '<S290>/Subtract' incorporates:
     *  Constant: '<S290>/Constant'
     */
    rtb_Switch2_e = 1.0 - rtb_Add_c;

    /* Switch: '<S298>/Switch2' incorporates:
     *  Constant: '<S290>/Constant'
     *  RelationalOperator: '<S298>/LowerRelop1'
     *  Sum: '<S290>/Subtract'
     */
    if (!(rtb_Hypot_b > (1.0 - rtb_Add_c))) {
      /* Sum: '<S290>/Subtract1' incorporates:
       *  Constant: '<S290>/Constant1'
       */
      rtb_Switch2_e = -1.0 - rtb_Add_c;

      /* Switch: '<S298>/Switch' incorporates:
       *  Constant: '<S290>/Constant1'
       *  RelationalOperator: '<S298>/UpperRelop'
       *  Sum: '<S290>/Subtract1'
       */
      if (!(rtb_Hypot_b < (-1.0 - rtb_Add_c))) {
        rtb_Switch2_e = rtb_Hypot_b;
      }

      /* End of Switch: '<S298>/Switch' */
    }

    /* End of Switch: '<S298>/Switch2' */

    /* Saturate: '<S290>/Saturation1' */
    if (rtb_Switch2_e > Drive_Motor_Control_I_UL) {
      rtb_Hypot_b = Drive_Motor_Control_I_UL;
    } else if (rtb_Switch2_e < Drive_Motor_Control_I_LL) {
      rtb_Hypot_b = Drive_Motor_Control_I_LL;
    } else {
      rtb_Hypot_b = rtb_Switch2_e;
    }

    /* End of Saturate: '<S290>/Saturation1' */
  } else {
    rtb_Hypot_b = 0.0;
  }

  /* End of Switch: '<S290>/Switch' */

  /* Sum: '<S290>/Add1' */
  rtb_Minus_k_idx_0 = rtb_Add_c + rtb_Hypot_b;

  /* Saturate: '<S290>/Saturation2' */
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

  /* End of Saturate: '<S290>/Saturation2' */

  /* Sum: '<S306>/Add1' incorporates:
   *  Constant: '<S306>/Constant3'
   *  Constant: '<S306>/Constant4'
   *  Math: '<S306>/Math Function'
   *  Sum: '<S306>/Add2'
   */
  rtb_Switch2_g = rt_modd_snf(rtb_Init + 3.1415926535897931, 6.2831853071795862)
    - 3.1415926535897931;

  /* Sum: '<S308>/Sum1' incorporates:
   *  Constant: '<S293>/Constant2'
   *  Product: '<S308>/Product'
   *  Sum: '<S308>/Sum'
   *  UnitDelay: '<S308>/Unit Delay1'
   */
  rtb_Add_c = ((rtb_Switch2_g - Code_Gen_Model_DW.UnitDelay1_DSTATE_n) *
               Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_n;

  /* Product: '<S293>/Product' incorporates:
   *  Constant: '<S293>/Constant3'
   */
  rtb_Switch2_e = rtb_Add_c * Steering_Motor_Control_D;

  /* Sum: '<S307>/Diff' incorporates:
   *  UnitDelay: '<S307>/UD'
   *
   * Block description for '<S307>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S307>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Minus_k_idx_0 = rtb_Switch2_e - Code_Gen_Model_DW.UD_DSTATE_i1;

  /* Saturate: '<S293>/Saturation' */
  if (rtb_Minus_k_idx_0 > Steering_Motor_Control_D_UL) {
    rtb_Minus_k_idx_0 = Steering_Motor_Control_D_UL;
  } else if (rtb_Minus_k_idx_0 < Steering_Motor_Control_D_LL) {
    rtb_Minus_k_idx_0 = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S293>/Add' incorporates:
   *  Gain: '<S293>/Gain1'
   *  Saturate: '<S293>/Saturation'
   */
  rtb_uDLookupTable_l = (Steering_Motor_Control_P * rtb_Switch2_g) +
    rtb_Minus_k_idx_0;

  /* Sum: '<S293>/Subtract' incorporates:
   *  Constant: '<S293>/Constant'
   */
  rtb_Init = 1.0 - rtb_uDLookupTable_l;

  /* Sum: '<S293>/Sum2' incorporates:
   *  Gain: '<S293>/Gain2'
   *  UnitDelay: '<S293>/Unit Delay'
   */
  rtb_Sum2_oc = (Steering_Motor_Control_I * rtb_Switch2_g) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_dt;

  /* Switch: '<S309>/Switch2' incorporates:
   *  RelationalOperator: '<S309>/LowerRelop1'
   */
  if (!(rtb_Sum2_oc > rtb_Init)) {
    /* Switch: '<S309>/Switch' incorporates:
     *  Constant: '<S293>/Constant1'
     *  RelationalOperator: '<S309>/UpperRelop'
     *  Sum: '<S293>/Subtract1'
     */
    if (rtb_Sum2_oc < (-1.0 - rtb_uDLookupTable_l)) {
      rtb_Init = -1.0 - rtb_uDLookupTable_l;
    } else {
      rtb_Init = rtb_Sum2_oc;
    }

    /* End of Switch: '<S309>/Switch' */
  }

  /* End of Switch: '<S309>/Switch2' */

  /* Saturate: '<S293>/Saturation1' */
  if (rtb_Init > Steering_Motor_Control_I_UL) {
    rtb_Sum2_oc = Steering_Motor_Control_I_UL;
  } else if (rtb_Init < Steering_Motor_Control_I_LL) {
    rtb_Sum2_oc = Steering_Motor_Control_I_LL;
  } else {
    rtb_Sum2_oc = rtb_Init;
  }

  /* End of Saturate: '<S293>/Saturation1' */

  /* Sum: '<S293>/Add1' */
  rtb_Minus_k_idx_0 = rtb_uDLookupTable_l + rtb_Sum2_oc;

  /* Saturate: '<S293>/Saturation2' */
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

  /* End of Saturate: '<S293>/Saturation2' */

  /* Switch: '<S403>/Switch' */
  if (!rtb_AT_Cage_Right_Start_Blue_Ac) {
    /* Switch: '<S403>/Switch' incorporates:
     *  Fcn: '<S404>/x->theta'
     */
    Code_Gen_Model_B.BL_Desired_Module_Angle = rt_atan2d_snf(rtb_Add2_f[1],
      rtb_Add2_f[0]);
  }

  /* End of Switch: '<S403>/Switch' */

  /* Trigonometry: '<S323>/Cos4' incorporates:
   *  Switch: '<S312>/Angle_Switch'
   *  Trigonometry: '<S322>/Cos4'
   */
  rtb_Subtract_h3 = cos(Code_Gen_Model_B.BL_Desired_Module_Angle);

  /* Trigonometry: '<S323>/Sin5' incorporates:
   *  UnaryMinus: '<S321>/Unary Minus'
   */
  rtb_uDLookupTable_l = sin(-Code_Gen_Model_B.BL_Steer_Module_Angle);

  /* Trigonometry: '<S323>/Sin4' incorporates:
   *  Switch: '<S312>/Angle_Switch'
   *  Trigonometry: '<S322>/Sin4'
   */
  rtb_Integral_hv = sin(Code_Gen_Model_B.BL_Desired_Module_Angle);

  /* Trigonometry: '<S323>/Cos5' incorporates:
   *  UnaryMinus: '<S321>/Unary Minus'
   */
  rtb_Init = cos(-Code_Gen_Model_B.BL_Steer_Module_Angle);

  /* Sum: '<S323>/Subtract1' incorporates:
   *  Product: '<S323>/Product2'
   *  Product: '<S323>/Product3'
   *  Trigonometry: '<S323>/Cos4'
   *  Trigonometry: '<S323>/Sin4'
   */
  rtb_Switch2_g = (rtb_Subtract_h3 * rtb_uDLookupTable_l) + (rtb_Integral_hv *
    rtb_Init);

  /* Sum: '<S323>/Subtract' incorporates:
   *  Product: '<S323>/Product'
   *  Product: '<S323>/Product1'
   *  Trigonometry: '<S323>/Cos4'
   *  Trigonometry: '<S323>/Sin4'
   */
  rtb_uDLookupTable_l = (rtb_Subtract_h3 * rtb_Init) - (rtb_Integral_hv *
    rtb_uDLookupTable_l);

  /* Math: '<S323>/Hypot' */
  rtb_Init = rt_hypotd_snf(rtb_uDLookupTable_l, rtb_Switch2_g);

  /* Switch: '<S323>/Switch' incorporates:
   *  Constant: '<S323>/Constant'
   *  Constant: '<S323>/Constant1'
   *  Constant: '<S324>/Constant'
   *  Product: '<S323>/Divide'
   *  Product: '<S323>/Divide1'
   *  RelationalOperator: '<S324>/Compare'
   *  Switch: '<S323>/Switch1'
   */
  if (rtb_Init > 1.0E-6) {
    rtb_Switch2_g /= rtb_Init;
    rtb_Init = rtb_uDLookupTable_l / rtb_Init;
  } else {
    rtb_Switch2_g = 0.0;
    rtb_Init = 1.0;
  }

  /* End of Switch: '<S323>/Switch' */

  /* Product: '<S388>/Product2' */
  Code_Gen_Model_B.BL_Desired_Wheel_Speed =
    Code_Gen_Model_B.BL_Desired_Wheel_Speed_in * rtb_Add_o5;

  /* Switch: '<S312>/Speed_Switch' incorporates:
   *  Abs: '<S312>/Abs'
   *  Constant: '<S320>/Constant'
   *  RelationalOperator: '<S320>/Compare'
   *  Switch: '<S312>/Angle_Switch'
   *  Trigonometry: '<S322>/Atan1'
   *  Trigonometry: '<S323>/Atan1'
   *  UnaryMinus: '<S312>/Unary Minus'
   */
  if (fabs(rt_atan2d_snf(rtb_Switch2_g, rtb_Init)) > 1.5707963267948966) {
    rtb_Minus_k_idx_0 = -Code_Gen_Model_B.BL_Desired_Wheel_Speed;

    /* Sum: '<S322>/Subtract1' incorporates:
     *  Product: '<S322>/Product2'
     *  Product: '<S322>/Product3'
     *  UnaryMinus: '<S312>/Unary Minus'
     */
    rtb_Switch2_g = (rtb_Subtract_h3 * Code_Gen_Model_ConstB.Sin5_e) +
      (rtb_Integral_hv * Code_Gen_Model_ConstB.Cos5_i);

    /* Sum: '<S322>/Subtract' incorporates:
     *  Product: '<S322>/Product'
     *  Product: '<S322>/Product1'
     */
    rtb_Subtract_h3 = (rtb_Subtract_h3 * Code_Gen_Model_ConstB.Cos5_i) -
      (rtb_Integral_hv * Code_Gen_Model_ConstB.Sin5_e);

    /* Math: '<S322>/Hypot' */
    rtb_uDLookupTable_l = rt_hypotd_snf(rtb_Subtract_h3, rtb_Switch2_g);

    /* Switch: '<S322>/Switch1' incorporates:
     *  Constant: '<S322>/Constant'
     *  Constant: '<S322>/Constant1'
     *  Constant: '<S325>/Constant'
     *  Product: '<S322>/Divide'
     *  Product: '<S322>/Divide1'
     *  RelationalOperator: '<S325>/Compare'
     *  Switch: '<S322>/Switch'
     */
    if (rtb_uDLookupTable_l > 1.0E-6) {
      rtb_Subtract_h3 /= rtb_uDLookupTable_l;
      rtb_Switch2_g /= rtb_uDLookupTable_l;
    } else {
      rtb_Subtract_h3 = 1.0;
      rtb_Switch2_g = 0.0;
    }

    /* End of Switch: '<S322>/Switch1' */
    rtb_Init = rt_atan2d_snf(rtb_Switch2_g, rtb_Subtract_h3);
  } else {
    rtb_Minus_k_idx_0 = Code_Gen_Model_B.BL_Desired_Wheel_Speed;
    rtb_Init = Code_Gen_Model_B.BL_Desired_Module_Angle;
  }

  /* Product: '<S315>/Product2' incorporates:
   *  Constant: '<S315>/Constant'
   *  Switch: '<S312>/Speed_Switch'
   */
  rtb_Add_o5 = rtb_Minus_k_idx_0 * 1210.9758620668042;

  /* Signum: '<S310>/Sign' */
  if (rtIsNaN(rtb_Add_o5)) {
    rtb_Minus_k_idx_0 = (rtNaN);
  } else if (rtb_Add_o5 < 0.0) {
    rtb_Minus_k_idx_0 = -1.0;
  } else {
    rtb_Minus_k_idx_0 = (rtb_Add_o5 > 0.0);
  }

  /* Signum: '<S310>/Sign1' incorporates:
   *  Inport: '<Root>/BackLeft_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.BackLeft_Drive_Motor_Speed)) {
    rtb_Switch2_i = (rtNaN);
  } else if (Code_Gen_Model_U.BackLeft_Drive_Motor_Speed < 0.0) {
    rtb_Switch2_i = -1.0;
  } else {
    rtb_Switch2_i = (Code_Gen_Model_U.BackLeft_Drive_Motor_Speed > 0.0);
  }

  /* Sum: '<S313>/Add' incorporates:
   *  Sum: '<S314>/Sum'
   */
  rtb_Init -= Code_Gen_Model_B.BL_Steer_Module_Angle;

  /* Product: '<S265>/Product' incorporates:
   *  Abs: '<S310>/Abs'
   *  Abs: '<S313>/Abs'
   *  Constant: '<S316>/Constant'
   *  Constant: '<S326>/Constant3'
   *  Constant: '<S326>/Constant4'
   *  Inport: '<Root>/BackLeft_Drive_Motor_Speed'
   *  Logic: '<S310>/OR'
   *  Lookup_n-D: '<S313>/1-D Lookup Table'
   *  Math: '<S326>/Math Function'
   *  RelationalOperator: '<S310>/Equal1'
   *  RelationalOperator: '<S316>/Compare'
   *  Signum: '<S310>/Sign'
   *  Signum: '<S310>/Sign1'
   *  Sum: '<S313>/Add'
   *  Sum: '<S326>/Add1'
   *  Sum: '<S326>/Add2'
   */
  rtb_Add_o5 = (((real_T)((rtb_Minus_k_idx_0 == rtb_Switch2_i) || (fabs
    (Code_Gen_Model_U.BackLeft_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_Add_o5) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_Init + 1.5707963267948966, 3.1415926535897931) -
          1.5707963267948966), Code_Gen_Model_ConstP.pooled34,
     Code_Gen_Model_ConstP.pooled33, 1U);

  /* Sum: '<S311>/Sum' incorporates:
   *  Inport: '<Root>/BackLeft_Drive_Motor_Speed'
   */
  rtb_Switch2_g = rtb_Add_o5 - Code_Gen_Model_U.BackLeft_Drive_Motor_Speed;

  /* Sum: '<S318>/Sum1' incorporates:
   *  Constant: '<S311>/Constant2'
   *  Product: '<S318>/Product'
   *  Sum: '<S318>/Sum'
   *  UnitDelay: '<S318>/Unit Delay1'
   */
  rtb_uDLookupTable_l = ((rtb_Switch2_g - Code_Gen_Model_DW.UnitDelay1_DSTATE_n4)
    * Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_n4;

  /* Product: '<S311>/Product' incorporates:
   *  Constant: '<S311>/Constant3'
   */
  rtb_Subtract_h3 = rtb_uDLookupTable_l * Drive_Motor_Control_D;

  /* Sum: '<S317>/Diff' incorporates:
   *  UnitDelay: '<S317>/UD'
   *
   * Block description for '<S317>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S317>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Minus_k_idx_0 = rtb_Subtract_h3 - Code_Gen_Model_DW.UD_DSTATE_o;

  /* Saturate: '<S311>/Saturation' */
  if (rtb_Minus_k_idx_0 > Drive_Motor_Control_D_UL) {
    rtb_Minus_k_idx_0 = Drive_Motor_Control_D_UL;
  } else if (rtb_Minus_k_idx_0 < Drive_Motor_Control_D_LL) {
    rtb_Minus_k_idx_0 = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S311>/Add' incorporates:
   *  Gain: '<S311>/Gain'
   *  Gain: '<S311>/Gain1'
   *  Saturate: '<S311>/Saturation'
   */
  rtb_Add_o5 = ((Drive_Motor_Control_FF * rtb_Add_o5) + (Drive_Motor_Control_P *
    rtb_Switch2_g)) + rtb_Minus_k_idx_0;

  /* Switch: '<S311>/Switch' incorporates:
   *  Constant: '<S311>/Constant4'
   */
  if (Code_Gen_Model_B.Swerve_Drive_Integral_Enable) {
    /* Sum: '<S311>/Sum2' incorporates:
     *  Gain: '<S311>/Gain2'
     *  UnitDelay: '<S311>/Unit Delay'
     */
    rtb_Switch2_g = (Drive_Motor_Control_I * rtb_Switch2_g) +
      Code_Gen_Model_DW.UnitDelay_DSTATE_f;

    /* Sum: '<S311>/Subtract' incorporates:
     *  Constant: '<S311>/Constant'
     */
    rtb_Integral_hv = 1.0 - rtb_Add_o5;

    /* Switch: '<S319>/Switch2' incorporates:
     *  Constant: '<S311>/Constant'
     *  RelationalOperator: '<S319>/LowerRelop1'
     *  Sum: '<S311>/Subtract'
     */
    if (!(rtb_Switch2_g > (1.0 - rtb_Add_o5))) {
      /* Sum: '<S311>/Subtract1' incorporates:
       *  Constant: '<S311>/Constant1'
       */
      rtb_Integral_hv = -1.0 - rtb_Add_o5;

      /* Switch: '<S319>/Switch' incorporates:
       *  Constant: '<S311>/Constant1'
       *  RelationalOperator: '<S319>/UpperRelop'
       *  Sum: '<S311>/Subtract1'
       */
      if (!(rtb_Switch2_g < (-1.0 - rtb_Add_o5))) {
        rtb_Integral_hv = rtb_Switch2_g;
      }

      /* End of Switch: '<S319>/Switch' */
    }

    /* End of Switch: '<S319>/Switch2' */

    /* Saturate: '<S311>/Saturation1' */
    if (rtb_Integral_hv > Drive_Motor_Control_I_UL) {
      rtb_Integral_hv = Drive_Motor_Control_I_UL;
    } else if (rtb_Integral_hv < Drive_Motor_Control_I_LL) {
      rtb_Integral_hv = Drive_Motor_Control_I_LL;
    }

    /* End of Saturate: '<S311>/Saturation1' */
  } else {
    rtb_Integral_hv = 0.0;
  }

  /* End of Switch: '<S311>/Switch' */

  /* Sum: '<S311>/Add1' */
  rtb_Minus_k_idx_0 = rtb_Add_o5 + rtb_Integral_hv;

  /* Saturate: '<S311>/Saturation2' */
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

  /* End of Saturate: '<S311>/Saturation2' */

  /* Sum: '<S327>/Add1' incorporates:
   *  Constant: '<S327>/Constant3'
   *  Constant: '<S327>/Constant4'
   *  Math: '<S327>/Math Function'
   *  Sum: '<S327>/Add2'
   */
  rtb_Add_o5 = rt_modd_snf(rtb_Init + 3.1415926535897931, 6.2831853071795862) -
    3.1415926535897931;

  /* Sum: '<S329>/Sum1' incorporates:
   *  Constant: '<S314>/Constant2'
   *  Product: '<S329>/Product'
   *  Sum: '<S329>/Sum'
   *  UnitDelay: '<S329>/Unit Delay1'
   */
  rtb_Sum1_m = ((rtb_Add_o5 - Code_Gen_Model_DW.UnitDelay1_DSTATE_nw) *
                Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_nw;

  /* Product: '<S314>/Product' incorporates:
   *  Constant: '<S314>/Constant3'
   */
  rtb_Product_lf = rtb_Sum1_m * Steering_Motor_Control_D;

  /* Sum: '<S328>/Diff' incorporates:
   *  UnitDelay: '<S328>/UD'
   *
   * Block description for '<S328>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S328>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Minus_k_idx_0 = rtb_Product_lf - Code_Gen_Model_DW.UD_DSTATE_k;

  /* Saturate: '<S314>/Saturation' */
  if (rtb_Minus_k_idx_0 > Steering_Motor_Control_D_UL) {
    rtb_Minus_k_idx_0 = Steering_Motor_Control_D_UL;
  } else if (rtb_Minus_k_idx_0 < Steering_Motor_Control_D_LL) {
    rtb_Minus_k_idx_0 = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S314>/Add' incorporates:
   *  Gain: '<S314>/Gain1'
   *  Saturate: '<S314>/Saturation'
   */
  rtb_Init = (Steering_Motor_Control_P * rtb_Add_o5) + rtb_Minus_k_idx_0;

  /* Sum: '<S314>/Subtract' incorporates:
   *  Constant: '<S314>/Constant'
   */
  rtb_Switch2_g = 1.0 - rtb_Init;

  /* Sum: '<S314>/Sum2' incorporates:
   *  Gain: '<S314>/Gain2'
   *  UnitDelay: '<S314>/Unit Delay'
   */
  rtb_Add_o5 = (Steering_Motor_Control_I * rtb_Add_o5) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_k;

  /* Switch: '<S330>/Switch2' incorporates:
   *  Constant: '<S314>/Constant'
   *  RelationalOperator: '<S330>/LowerRelop1'
   *  Sum: '<S314>/Subtract'
   */
  if (!(rtb_Add_o5 > (1.0 - rtb_Init))) {
    /* Sum: '<S314>/Subtract1' incorporates:
     *  Constant: '<S314>/Constant1'
     */
    rtb_Switch2_g = -1.0 - rtb_Init;

    /* Switch: '<S330>/Switch' incorporates:
     *  Constant: '<S314>/Constant1'
     *  RelationalOperator: '<S330>/UpperRelop'
     *  Sum: '<S314>/Subtract1'
     */
    if (!(rtb_Add_o5 < (-1.0 - rtb_Init))) {
      rtb_Switch2_g = rtb_Add_o5;
    }

    /* End of Switch: '<S330>/Switch' */
  }

  /* End of Switch: '<S330>/Switch2' */

  /* Saturate: '<S314>/Saturation1' */
  if (rtb_Switch2_g > Steering_Motor_Control_I_UL) {
    rtb_Integral_m = Steering_Motor_Control_I_UL;
  } else if (rtb_Switch2_g < Steering_Motor_Control_I_LL) {
    rtb_Integral_m = Steering_Motor_Control_I_LL;
  } else {
    rtb_Integral_m = rtb_Switch2_g;
  }

  /* End of Saturate: '<S314>/Saturation1' */

  /* Sum: '<S314>/Add1' */
  rtb_Minus_k_idx_0 = rtb_Init + rtb_Integral_m;

  /* Saturate: '<S314>/Saturation2' */
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

  /* End of Saturate: '<S314>/Saturation2' */

  /* Sum: '<S348>/Add1' incorporates:
   *  Constant: '<S348>/Constant3'
   *  Constant: '<S348>/Constant4'
   *  Math: '<S348>/Math Function'
   *  Sum: '<S348>/Add2'
   */
  rtb_Add_o5 = rt_modd_snf(rtb_Optimized_Module_Angle + 3.1415926535897931,
    6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S350>/Sum1' incorporates:
   *  Constant: '<S335>/Constant2'
   *  Product: '<S350>/Product'
   *  Sum: '<S350>/Sum'
   *  UnitDelay: '<S350>/Unit Delay1'
   */
  rtb_Optimized_Module_Angle = ((rtb_Add_o5 -
    Code_Gen_Model_DW.UnitDelay1_DSTATE_iw) *
    Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_iw;

  /* Product: '<S335>/Product' incorporates:
   *  Constant: '<S335>/Constant3'
   */
  rtb_Product_pz = rtb_Optimized_Module_Angle * Steering_Motor_Control_D;

  /* Sum: '<S349>/Diff' incorporates:
   *  UnitDelay: '<S349>/UD'
   *
   * Block description for '<S349>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S349>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Minus_k_idx_0 = rtb_Product_pz - Code_Gen_Model_DW.UD_DSTATE_l;

  /* Saturate: '<S335>/Saturation' */
  if (rtb_Minus_k_idx_0 > Steering_Motor_Control_D_UL) {
    rtb_Minus_k_idx_0 = Steering_Motor_Control_D_UL;
  } else if (rtb_Minus_k_idx_0 < Steering_Motor_Control_D_LL) {
    rtb_Minus_k_idx_0 = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S335>/Add' incorporates:
   *  Gain: '<S335>/Gain1'
   *  Saturate: '<S335>/Saturation'
   */
  rtb_Init = (Steering_Motor_Control_P * rtb_Add_o5) + rtb_Minus_k_idx_0;

  /* Sum: '<S335>/Subtract' incorporates:
   *  Constant: '<S335>/Constant'
   */
  rtb_Switch2_g = 1.0 - rtb_Init;

  /* Sum: '<S335>/Sum2' incorporates:
   *  Gain: '<S335>/Gain2'
   *  UnitDelay: '<S335>/Unit Delay'
   */
  rtb_Add_o5 = (Steering_Motor_Control_I * rtb_Add_o5) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_lm;

  /* Switch: '<S351>/Switch2' incorporates:
   *  Constant: '<S335>/Constant'
   *  RelationalOperator: '<S351>/LowerRelop1'
   *  Sum: '<S335>/Subtract'
   */
  if (!(rtb_Add_o5 > (1.0 - rtb_Init))) {
    /* Sum: '<S335>/Subtract1' incorporates:
     *  Constant: '<S335>/Constant1'
     */
    rtb_Switch2_g = -1.0 - rtb_Init;

    /* Switch: '<S351>/Switch' incorporates:
     *  Constant: '<S335>/Constant1'
     *  RelationalOperator: '<S351>/UpperRelop'
     *  Sum: '<S335>/Subtract1'
     */
    if (!(rtb_Add_o5 < (-1.0 - rtb_Init))) {
      rtb_Switch2_g = rtb_Add_o5;
    }

    /* End of Switch: '<S351>/Switch' */
  }

  /* End of Switch: '<S351>/Switch2' */

  /* Saturate: '<S335>/Saturation1' */
  if (rtb_Switch2_g > Steering_Motor_Control_I_UL) {
    rtb_Integral_p = Steering_Motor_Control_I_UL;
  } else if (rtb_Switch2_g < Steering_Motor_Control_I_LL) {
    rtb_Integral_p = Steering_Motor_Control_I_LL;
  } else {
    rtb_Integral_p = rtb_Switch2_g;
  }

  /* End of Saturate: '<S335>/Saturation1' */

  /* Sum: '<S335>/Add1' */
  rtb_Minus_k_idx_0 = rtb_Init + rtb_Integral_p;

  /* Saturate: '<S335>/Saturation2' */
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

  /* End of Saturate: '<S335>/Saturation2' */

  /* MinMax: '<S10>/Max' incorporates:
   *  Bias: '<S1>/Add Constant'
   *  Lookup_n-D: '<S10>/Range of Motion Protection Limit'
   *  Lookup_n-D: '<S10>/Range of Motion Protection Limit1'
   *  Merge: '<S18>/Merge13'
   */
  rtb_Add_o5 = fmax(fmax(Code_Gen_Model_B.Elevator_Height_Desired_merge,
    look1_binlcpw(Code_Gen_Model_B.Coral_Arm_Angle_Desired_merge,
                  Code_Gen_Model_ConstP.pooled36, Code_Gen_Model_ConstP.pooled35,
                  95U)), look1_binlcpw(Code_Gen_Model_B.Coral_Arm_Angle_Measured,
    Code_Gen_Model_ConstP.pooled36, Code_Gen_Model_ConstP.pooled35, 95U));

  /* Switch: '<S10>/Switch3' incorporates:
   *  Abs: '<S10>/Abs1'
   *  Constant: '<S10>/Constant'
   *  Constant: '<S10>/Constant6'
   *  Constant: '<S85>/Constant'
   *  Logic: '<S10>/AND'
   *  RelationalOperator: '<S10>/Relational Operator'
   *  RelationalOperator: '<S85>/Compare'
   *  UnitDelay: '<S10>/Unit Delay'
   */
  if ((Code_Gen_Model_B.Elevator_Height_Desired_merge < rtb_Add_o5) && (fabs
       (Code_Gen_Model_B.Elevator_Error) <= Elevator_Height_Error_Threshold)) {
    rtb_Minus_k_idx_0 = Elevator_Error_Increase;
  } else {
    rtb_Minus_k_idx_0 = 0.0;
  }

  /* Sum: '<S10>/Add' incorporates:
   *  Sum: '<S10>/Subtract'
   *  Switch: '<S10>/Switch3'
   */
  Code_Gen_Model_B.Elevator_Error = (rtb_Add_o5 -
    Code_Gen_Model_B.Elevator_Height_Measured) + rtb_Minus_k_idx_0;

  /* Logic: '<S10>/Logical Operator3' incorporates:
   *  Abs: '<S10>/Abs'
   *  Constant: '<S84>/Constant'
   *  Constant: '<S86>/Constant'
   *  Logic: '<S10>/Logical Operator1'
   *  RelationalOperator: '<S84>/Compare'
   *  RelationalOperator: '<S86>/Compare'
   */
  rtb_Compare_cid = (rtb_Compare_cid ||
                     ((Code_Gen_Model_B.Elevator_Height_Desired_merge == 0.0) &&
                      (fabs(Code_Gen_Model_B.Elevator_Error) <=
                       Elevator_Error_Bottom_Disable)));

  /* Gain: '<S88>/Gain1' */
  Code_Gen_Model_B.Elevator_Proportional = Elevator_Gain_Prop *
    Code_Gen_Model_B.Elevator_Error;

  /* Logic: '<S10>/Logical Operator' incorporates:
   *  Logic: '<S10>/Logical Operator2'
   *  Logic: '<S10>/NOT'
   *  Logic: '<S10>/NOT2'
   *  Logic: '<S10>/OR'
   */
  rtb_Is_Absolute_Steering = (((!rtb_Compare_cid) &&
    (Code_Gen_Model_B.Reefscape_Motors_Enable_merge)) && ((!rtb_Compare_pd) && (
    !rtb_Compare)));

  /* Switch: '<S88>/Switch' */
  if (rtb_Is_Absolute_Steering) {
    /* Switch: '<S88>/Switch1' incorporates:
     *  UnitDelay: '<S97>/Delay Input1'
     *
     * Block description for '<S97>/Delay Input1':
     *
     *  Store in Global RAM
     */
    if (!Code_Gen_Model_DW.DelayInput1_DSTATE_be) {
      /* Switch: '<S88>/Switch' incorporates:
       *  Constant: '<S88>/Constant3'
       */
      Code_Gen_Model_B.Elevator_Integral = Elevator_Int_IC;
    } else {
      /* Sum: '<S88>/Sum2' incorporates:
       *  Gain: '<S88>/Gain2'
       *  UnitDelay: '<S88>/Unit Delay'
       */
      rtb_Add_o5 = (Elevator_Gain_Int * Code_Gen_Model_B.Elevator_Error) +
        Code_Gen_Model_B.Elevator_Integral;

      /* Sum: '<S88>/Subtract' incorporates:
       *  Constant: '<S88>/Constant'
       */
      rtb_Switch2_g = Elevator_Total_UL - Code_Gen_Model_B.Elevator_Proportional;

      /* Switch: '<S98>/Switch2' incorporates:
       *  RelationalOperator: '<S98>/LowerRelop1'
       */
      if (!(rtb_Add_o5 > rtb_Switch2_g)) {
        /* Sum: '<S88>/Subtract1' incorporates:
         *  Constant: '<S88>/Constant1'
         */
        rtb_Switch2_g = Elevator_Total_LL -
          Code_Gen_Model_B.Elevator_Proportional;

        /* Switch: '<S98>/Switch' incorporates:
         *  RelationalOperator: '<S98>/UpperRelop'
         */
        if (!(rtb_Add_o5 < rtb_Switch2_g)) {
          rtb_Switch2_g = rtb_Add_o5;
        }

        /* End of Switch: '<S98>/Switch' */
      }

      /* End of Switch: '<S98>/Switch2' */

      /* Saturate: '<S88>/Saturation1' */
      if (rtb_Switch2_g > Elevator_Int_UL) {
        /* Switch: '<S88>/Switch' */
        Code_Gen_Model_B.Elevator_Integral = Elevator_Int_UL;
      } else if (rtb_Switch2_g < Elevator_Int_LL) {
        /* Switch: '<S88>/Switch' */
        Code_Gen_Model_B.Elevator_Integral = Elevator_Int_LL;
      } else {
        /* Switch: '<S88>/Switch' */
        Code_Gen_Model_B.Elevator_Integral = rtb_Switch2_g;
      }

      /* End of Saturate: '<S88>/Saturation1' */
    }

    /* End of Switch: '<S88>/Switch1' */
  } else {
    /* Switch: '<S88>/Switch' incorporates:
     *  Constant: '<S88>/Constant2'
     */
    Code_Gen_Model_B.Elevator_Integral = 0.0;
  }

  /* End of Switch: '<S88>/Switch' */

  /* Switch: '<S10>/Switch2' incorporates:
   *  Constant: '<S10>/Constant5'
   */
  if (Code_Gen_Model_B.Reefscape_Motors_Enable_merge) {
    /* Switch: '<S10>/Switch4' incorporates:
     *  Constant: '<S10>/Constant7'
     */
    if (rtb_Compare_cid) {
      rtb_Add_o5 = Elevator_Bottom_DC;
    } else {
      /* Sum: '<S88>/Add1' */
      rtb_Switch2_g = Code_Gen_Model_B.Elevator_Proportional +
        Code_Gen_Model_B.Elevator_Integral;

      /* Saturate: '<S88>/Saturation2' */
      if (rtb_Switch2_g > Elevator_Total_UL) {
        rtb_Switch2_g = Elevator_Total_UL;
      } else if (rtb_Switch2_g < Elevator_Total_LL) {
        rtb_Switch2_g = Elevator_Total_LL;
      }

      /* End of Saturate: '<S88>/Saturation2' */

      /* Switch: '<S10>/Switch1' incorporates:
       *  Constant: '<S10>/Constant1'
       *  Constant: '<S10>/Constant2'
       */
      if (rtb_Compare_pd) {
        rtb_Add_o5 = Elevator_Hold_at_Top_DC;
      } else {
        rtb_Add_o5 = 1.0;
      }

      /* End of Switch: '<S10>/Switch1' */

      /* Switch: '<S89>/Switch2' incorporates:
       *  RelationalOperator: '<S89>/LowerRelop1'
       */
      if (!(rtb_Switch2_g > rtb_Add_o5)) {
        /* Switch: '<S10>/Switch' incorporates:
         *  Constant: '<S10>/Constant3'
         *  Constant: '<S10>/Constant4'
         */
        if (rtb_Compare) {
          rtb_Add_o5 = 0.0;
        } else {
          rtb_Add_o5 = -1.0;
        }

        /* End of Switch: '<S10>/Switch' */

        /* Switch: '<S89>/Switch' incorporates:
         *  RelationalOperator: '<S89>/UpperRelop'
         */
        if (!(rtb_Switch2_g < rtb_Add_o5)) {
          rtb_Add_o5 = rtb_Switch2_g;
        }

        /* End of Switch: '<S89>/Switch' */
      }

      /* End of Switch: '<S89>/Switch2' */
    }

    /* End of Switch: '<S10>/Switch4' */
  } else {
    rtb_Add_o5 = 0.0;
  }

  /* End of Switch: '<S10>/Switch2' */

  /* UnitDelay: '<S87>/Unit Delay' */
  rtb_Switch2_g = Code_Gen_Model_DW.UnitDelay_DSTATE_mh;

  /* Abs: '<S87>/Abs' incorporates:
   *  Sum: '<S87>/Subtract'
   */
  rtb_Init = fabs(rtb_Switch2_g - rtb_Add_o5);

  /* Signum: '<S87>/Sign2' */
  if (rtIsNaN(rtb_Switch2_g)) {
    rtb_Minus_k_idx_0 = (rtNaN);
  } else if (rtb_Switch2_g < 0.0) {
    rtb_Minus_k_idx_0 = -1.0;
  } else {
    rtb_Minus_k_idx_0 = (rtb_Switch2_g > 0.0);
  }

  /* Signum: '<S87>/Sign1' */
  if (rtIsNaN(rtb_Add_o5)) {
    rtb_Switch2_i = (rtNaN);
  } else if (rtb_Add_o5 < 0.0) {
    rtb_Switch2_i = -1.0;
  } else {
    rtb_Switch2_i = (rtb_Add_o5 > 0.0);
  }

  /* Product: '<S87>/Product1' incorporates:
   *  Signum: '<S87>/Sign1'
   *  Signum: '<S87>/Sign2'
   */
  rtb_Minus_k_idx_0 *= rtb_Switch2_i;
  if (rtIsNaN(rtb_Minus_k_idx_0)) {
    i = 0;
  } else {
    i = (int32_T)fmod(rtb_Minus_k_idx_0, 256.0);
  }

  /* Switch: '<S87>/Switch' incorporates:
   *  Constant: '<S87>/Constant'
   *  Constant: '<S90>/Constant'
   *  Constant: '<S91>/Constant'
   *  Logic: '<S87>/or'
   *  Product: '<S87>/Product1'
   *  RelationalOperator: '<S90>/Compare'
   *  RelationalOperator: '<S91>/Compare'
   */
  if ((!(rtb_Switch2_g == 0.0)) && (((i < 0) ? ((int32_T)((int8_T)(-((int8_T)
            ((uint8_T)(-((real_T)i))))))) : i) <= 0)) {
    rtb_Add_o5 = 0.0;
  }

  /* End of Switch: '<S87>/Switch' */

  /* RelationalOperator: '<S92>/Compare' incorporates:
   *  Constant: '<S92>/Constant'
   */
  rtb_Compare_cid = (rtb_Add_o5 == 0.0);

  /* Switch: '<S87>/Switch5' */
  if (rtb_Compare_cid) {
    /* SignalConversion generated from: '<S87>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S87>/Constant4'
     *  Constant: '<S87>/Constant6'
     */
    rtb_Reshapey[0] = 1.0;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S87>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S87>/Constant2'
     *  Constant: '<S87>/Constant5'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = 0.01;

    /* S-Function (sfix_look1_dyn): '<S87>/Lookup Table Dynamic' */
    /* Dynamic Look-Up Table Block: '<S87>/Lookup Table Dynamic'
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
    /* SignalConversion generated from: '<S87>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S87>/Constant10'
     *  Constant: '<S87>/Constant8'
     */
    rtb_Reshapey[0] = 1.0;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S87>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S87>/Constant7'
     *  Constant: '<S87>/Constant9'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = 0.01;

    /* S-Function (sfix_look1_dyn): '<S87>/Lookup Table Dynamic1' */
    /* Dynamic Look-Up Table Block: '<S87>/Lookup Table Dynamic1'
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

  /* End of Switch: '<S87>/Switch5' */

  /* RelationalOperator: '<S93>/Compare' incorporates:
   *  Constant: '<S93>/Constant'
   */
  rtb_Is_Absolute_Translation_g = (rtb_Add_o5 > 0.0);

  /* Switch: '<S87>/Switch1' incorporates:
   *  Switch: '<S87>/Switch3'
   */
  if (rtb_Compare_cid) {
    rtb_Minus_k_idx_0 = Code_Gen_Model_ConstB.UnaryMinus_m;
  } else if (rtb_Is_Absolute_Translation_g) {
    /* Switch: '<S87>/Switch3' incorporates:
     *  Constant: '<S87>/Constant3'
     */
    rtb_Minus_k_idx_0 = Elevator_DC_Inc_RL;
  } else {
    rtb_Minus_k_idx_0 = Code_Gen_Model_ConstB.UnaryMinus_m;
  }

  /* Product: '<S87>/Product' incorporates:
   *  Switch: '<S87>/Switch1'
   */
  rtb_Switch2_g = rtb_Minus_k_idx_0 * rtb_Switch5_a;

  /* Switch: '<S96>/Init' incorporates:
   *  UnitDelay: '<S96>/FixPt Unit Delay1'
   *  UnitDelay: '<S96>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_o != 0) {
    rtb_Init = rtb_Add_o5;
  } else {
    rtb_Init = Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_l;
  }

  /* End of Switch: '<S96>/Init' */

  /* Sum: '<S94>/Sum1' */
  rtb_Add_o5 -= rtb_Init;

  /* Switch: '<S95>/Switch2' incorporates:
   *  RelationalOperator: '<S95>/LowerRelop1'
   */
  if (!(rtb_Add_o5 > rtb_Switch2_g)) {
    /* Switch: '<S87>/Switch2' incorporates:
     *  Constant: '<S87>/Constant1'
     *  Constant: '<S87>/Constant3'
     *  Switch: '<S87>/Switch4'
     *  UnaryMinus: '<S87>/Unary Minus1'
     */
    if (rtb_Compare_cid) {
      rtb_Minus_k_idx_0 = -1.0;
    } else if (rtb_Is_Absolute_Translation_g) {
      /* Switch: '<S87>/Switch4' incorporates:
       *  Constant: '<S87>/Constant1'
       */
      rtb_Minus_k_idx_0 = -1.0;
    } else {
      rtb_Minus_k_idx_0 = -Elevator_DC_Inc_RL;
    }

    /* Product: '<S87>/Product2' incorporates:
     *  Switch: '<S87>/Switch2'
     */
    rtb_Switch2_g = rtb_Minus_k_idx_0 * rtb_Switch5_a;

    /* Switch: '<S95>/Switch' incorporates:
     *  RelationalOperator: '<S95>/UpperRelop'
     */
    if (!(rtb_Add_o5 < rtb_Switch2_g)) {
      rtb_Switch2_g = rtb_Add_o5;
    }

    /* End of Switch: '<S95>/Switch' */
  }

  /* End of Switch: '<S95>/Switch2' */

  /* Sum: '<S94>/Sum' */
  rtb_Switch5_a = rtb_Switch2_g + rtb_Init;

  /* Outport: '<Root>/Elevator_DutyCycle' */
  Code_Gen_Model_Y.Elevator_DutyCycle = rtb_Switch5_a;

  /* Logic: '<S8>/Logical Operator' incorporates:
   *  Constant: '<S67>/Constant'
   *  Constant: '<S68>/Constant'
   *  RelationalOperator: '<S67>/Compare'
   *  RelationalOperator: '<S68>/Compare'
   */
  rtb_Compare_cid = ((Code_Gen_Model_B.Elevator_Height_Measured <
                      Elevator_Height_Coral_Arm_Low_Thresh) &&
                     (Code_Gen_Model_B.Coral_Arm_Angle_Measured <
                      Coral_Arm_Angle_Neg_Threshold));

  /* Logic: '<S8>/Logical Operator4' incorporates:
   *  Constant: '<S69>/Constant'
   *  Constant: '<S70>/Constant'
   *  RelationalOperator: '<S69>/Compare'
   *  RelationalOperator: '<S70>/Compare'
   */
  rtb_AT_Cage_Middle_Start_Red_Ac =
    ((Code_Gen_Model_B.Coral_Arm_Angle_Desired_merge >
      Coral_Arm_Angle_Pos_Threshold) &&
     (Code_Gen_Model_B.Coral_Arm_Angle_Measured > Coral_Arm_Angle_Pos_Threshold));

  /* Lookup_n-D: '<S8>/1-D Lookup Table' incorporates:
   *  Bias: '<S1>/Add Constant'
   */
  rtb_Switch2_g = look1_binlcpw(Code_Gen_Model_B.Coral_Arm_Angle_Measured,
    Code_Gen_Model_ConstP.uDLookupTable_bp01Data,
    Code_Gen_Model_ConstP.uDLookupTable_tableData_l, 2U);

  /* Switch: '<S73>/Switch2' incorporates:
   *  Constant: '<S8>/Constant'
   *  RelationalOperator: '<S73>/LowerRelop1'
   */
  if (Code_Gen_Model_B.Coral_Arm_Angle_Desired_merge > 90.0) {
    rtb_Add_o5 = 90.0;
  } else {
    /* Lookup_n-D: '<S8>/Range of Motion Protection Limit' incorporates:
     *  Switch: '<S11>/Switch'
     */
    rtb_Add_o5 = look1_binlcpw(Code_Gen_Model_B.Elevator_Height_Measured,
      Code_Gen_Model_ConstP.RangeofMotionProtectionLimit_bp,
      Code_Gen_Model_ConstP.RangeofMotionProtectionLimit_ta, 74U);

    /* Switch: '<S73>/Switch' incorporates:
     *  RelationalOperator: '<S73>/UpperRelop'
     */
    if (!(Code_Gen_Model_B.Coral_Arm_Angle_Desired_merge < rtb_Add_o5)) {
      rtb_Add_o5 = Code_Gen_Model_B.Coral_Arm_Angle_Desired_merge;
    }

    /* End of Switch: '<S73>/Switch' */
  }

  /* End of Switch: '<S73>/Switch2' */

  /* Sum: '<S8>/Subtract' */
  Code_Gen_Model_B.Coral_ArmAngle_Error = rtb_Add_o5 -
    Code_Gen_Model_B.Coral_Arm_Angle_Measured;

  /* Gain: '<S72>/Gain1' */
  Code_Gen_Model_B.Elevator_Proportional_l = Coral_Arm_Gain_Prop *
    Code_Gen_Model_B.Coral_ArmAngle_Error;

  /* Logic: '<S8>/Logical Operator2' incorporates:
   *  Logic: '<S8>/Logical Operator1'
   *  Logic: '<S8>/Logical Operator3'
   */
  rtb_Is_Absolute_Translation_g = (((!rtb_AT_Cage_Middle_Start_Red_Ac) &&
    (!rtb_Compare_cid)) && (Code_Gen_Model_B.Reefscape_Motors_Enable_merge));

  /* Lookup_n-D: '<S8>/1-D Lookup Table1' incorporates:
   *  Bias: '<S1>/Add Constant'
   */
  rtb_Add_o5 = look1_binlcpw(Code_Gen_Model_B.Coral_Arm_Angle_Measured,
    Code_Gen_Model_ConstP.uDLookupTable1_bp01Data,
    Code_Gen_Model_ConstP.uDLookupTable1_tableData, 1U);

  /* Switch: '<S72>/Switch' */
  if (rtb_Is_Absolute_Translation_g) {
    /* Switch: '<S72>/Switch1' incorporates:
     *  UnitDelay: '<S81>/Delay Input1'
     *
     * Block description for '<S81>/Delay Input1':
     *
     *  Store in Global RAM
     */
    if (!Code_Gen_Model_DW.DelayInput1_DSTATE_op) {
      /* Switch: '<S72>/Switch' incorporates:
       *  Constant: '<S72>/Constant3'
       */
      Code_Gen_Model_B.Elevator_Integral_o = Coral_Arm_Int_IC;
    } else {
      /* Sum: '<S72>/Sum2' incorporates:
       *  Gain: '<S72>/Gain2'
       *  UnitDelay: '<S72>/Unit Delay'
       */
      rtb_Init = (Coral_Arm_Gain_Int * Code_Gen_Model_B.Coral_ArmAngle_Error) +
        Code_Gen_Model_B.Elevator_Integral_o;

      /* Sum: '<S72>/Subtract' */
      rtb_Switch2_i = rtb_Switch2_g - Code_Gen_Model_B.Elevator_Proportional_l;

      /* Switch: '<S82>/Switch2' incorporates:
       *  RelationalOperator: '<S82>/LowerRelop1'
       */
      if (!(rtb_Init > rtb_Switch2_i)) {
        /* Sum: '<S72>/Subtract1' */
        rtb_Switch2_i = rtb_Add_o5 - Code_Gen_Model_B.Elevator_Proportional_l;

        /* Switch: '<S82>/Switch' incorporates:
         *  RelationalOperator: '<S82>/UpperRelop'
         */
        if (!(rtb_Init < rtb_Switch2_i)) {
          rtb_Switch2_i = rtb_Init;
        }

        /* End of Switch: '<S82>/Switch' */
      }

      /* End of Switch: '<S82>/Switch2' */

      /* Saturate: '<S72>/Saturation1' */
      if (rtb_Switch2_i > Coral_Arm_Int_UL) {
        /* Switch: '<S72>/Switch' */
        Code_Gen_Model_B.Elevator_Integral_o = Coral_Arm_Int_UL;
      } else if (rtb_Switch2_i < Coral_Arm_Int_LL) {
        /* Switch: '<S72>/Switch' */
        Code_Gen_Model_B.Elevator_Integral_o = Coral_Arm_Int_LL;
      } else {
        /* Switch: '<S72>/Switch' */
        Code_Gen_Model_B.Elevator_Integral_o = rtb_Switch2_i;
      }

      /* End of Saturate: '<S72>/Saturation1' */
    }

    /* End of Switch: '<S72>/Switch1' */
  } else {
    /* Switch: '<S72>/Switch' incorporates:
     *  Constant: '<S72>/Constant2'
     */
    Code_Gen_Model_B.Elevator_Integral_o = 0.0;
  }

  /* End of Switch: '<S72>/Switch' */

  /* Switch: '<S8>/Switch2' incorporates:
   *  Constant: '<S8>/Constant5'
   */
  if (Code_Gen_Model_B.Reefscape_Motors_Enable_merge) {
    /* Switch: '<S8>/Switch1' incorporates:
     *  Constant: '<S8>/Constant2'
     *  Switch: '<S8>/Switch3'
     */
    if (rtb_Compare_cid) {
      rtb_Add_o5 = Coral_Arm_Neg90_DC;
    } else if (rtb_AT_Cage_Middle_Start_Red_Ac) {
      /* Switch: '<S8>/Switch3' incorporates:
       *  Constant: '<S8>/Constant1'
       */
      rtb_Add_o5 = Coral_Arm_Pos90_DC;
    } else {
      /* Sum: '<S72>/Add1' incorporates:
       *  Switch: '<S8>/Switch3'
       */
      rtb_Init = Code_Gen_Model_B.Elevator_Proportional_l +
        Code_Gen_Model_B.Elevator_Integral_o;

      /* Switch: '<S83>/Switch2' incorporates:
       *  RelationalOperator: '<S83>/LowerRelop1'
       *  RelationalOperator: '<S83>/UpperRelop'
       *  Switch: '<S83>/Switch'
       *  Switch: '<S8>/Switch3'
       */
      if (rtb_Init > rtb_Switch2_g) {
        rtb_Add_o5 = rtb_Switch2_g;
      } else if (!(rtb_Init < rtb_Add_o5)) {
        rtb_Add_o5 = rtb_Init;
      }

      /* End of Switch: '<S83>/Switch2' */
    }

    /* End of Switch: '<S8>/Switch1' */
  } else {
    rtb_Add_o5 = 0.0;
  }

  /* End of Switch: '<S8>/Switch2' */

  /* UnitDelay: '<S71>/Unit Delay' */
  rtb_Switch2_g = Code_Gen_Model_DW.UnitDelay_DSTATE_oz;

  /* Abs: '<S71>/Abs' incorporates:
   *  Sum: '<S71>/Subtract'
   */
  rtb_Init = fabs(rtb_Switch2_g - rtb_Add_o5);

  /* Signum: '<S71>/Sign2' */
  if (rtIsNaN(rtb_Switch2_g)) {
    rtb_Minus_k_idx_0 = (rtNaN);
  } else if (rtb_Switch2_g < 0.0) {
    rtb_Minus_k_idx_0 = -1.0;
  } else {
    rtb_Minus_k_idx_0 = (rtb_Switch2_g > 0.0);
  }

  /* Signum: '<S71>/Sign1' */
  if (rtIsNaN(rtb_Add_o5)) {
    rtb_Switch2_i = (rtNaN);
  } else if (rtb_Add_o5 < 0.0) {
    rtb_Switch2_i = -1.0;
  } else {
    rtb_Switch2_i = (rtb_Add_o5 > 0.0);
  }

  /* Product: '<S71>/Product1' incorporates:
   *  Signum: '<S71>/Sign1'
   *  Signum: '<S71>/Sign2'
   */
  rtb_Minus_k_idx_0 *= rtb_Switch2_i;
  if (rtIsNaN(rtb_Minus_k_idx_0)) {
    i = 0;
  } else {
    i = (int32_T)fmod(rtb_Minus_k_idx_0, 256.0);
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
  if ((!(rtb_Switch2_g == 0.0)) && (((i < 0) ? ((int32_T)((int8_T)(-((int8_T)
            ((uint8_T)(-((real_T)i))))))) : i) <= 0)) {
    rtb_Add_o5 = 0.0;
  }

  /* End of Switch: '<S71>/Switch' */

  /* RelationalOperator: '<S76>/Compare' incorporates:
   *  Constant: '<S76>/Constant'
   */
  rtb_Compare_cid = (rtb_Add_o5 == 0.0);

  /* Switch: '<S71>/Switch5' */
  if (rtb_Compare_cid) {
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
    rtb_Switch2_i = rtb_LookupTableDynamic_n;
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
    rtb_Switch2_i = rtb_LookupTableDynamic1_a;
  }

  /* End of Switch: '<S71>/Switch5' */

  /* RelationalOperator: '<S77>/Compare' incorporates:
   *  Constant: '<S77>/Constant'
   */
  rtb_AT_Cage_Middle_Start_Red_Ac = (rtb_Add_o5 > 0.0);

  /* Switch: '<S71>/Switch1' incorporates:
   *  Switch: '<S71>/Switch3'
   */
  if (rtb_Compare_cid) {
    rtb_Minus_k_idx_0 = Code_Gen_Model_ConstB.UnaryMinus;
  } else if (rtb_AT_Cage_Middle_Start_Red_Ac) {
    /* Switch: '<S71>/Switch3' incorporates:
     *  Constant: '<S71>/Constant3'
     */
    rtb_Minus_k_idx_0 = Coral_Arm_DC_Inc_RL;
  } else {
    rtb_Minus_k_idx_0 = Code_Gen_Model_ConstB.UnaryMinus;
  }

  /* Product: '<S71>/Product' incorporates:
   *  Switch: '<S71>/Switch1'
   */
  rtb_Switch2_g = rtb_Minus_k_idx_0 * rtb_Switch2_i;

  /* Switch: '<S80>/Init' incorporates:
   *  UnitDelay: '<S80>/FixPt Unit Delay1'
   *  UnitDelay: '<S80>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_j != 0) {
    rtb_Init = rtb_Add_o5;
  } else {
    rtb_Init = Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_pc;
  }

  /* End of Switch: '<S80>/Init' */

  /* Sum: '<S78>/Sum1' */
  rtb_Add_o5 -= rtb_Init;

  /* Switch: '<S79>/Switch2' incorporates:
   *  RelationalOperator: '<S79>/LowerRelop1'
   */
  if (!(rtb_Add_o5 > rtb_Switch2_g)) {
    /* Switch: '<S71>/Switch2' incorporates:
     *  Constant: '<S71>/Constant1'
     *  Constant: '<S71>/Constant3'
     *  Switch: '<S71>/Switch4'
     *  UnaryMinus: '<S71>/Unary Minus1'
     */
    if (rtb_Compare_cid) {
      rtb_Minus_k_idx_0 = -1.0;
    } else if (rtb_AT_Cage_Middle_Start_Red_Ac) {
      /* Switch: '<S71>/Switch4' incorporates:
       *  Constant: '<S71>/Constant1'
       */
      rtb_Minus_k_idx_0 = -1.0;
    } else {
      rtb_Minus_k_idx_0 = -Coral_Arm_DC_Inc_RL;
    }

    /* Product: '<S71>/Product2' incorporates:
     *  Switch: '<S71>/Switch2'
     */
    rtb_Switch2_g = rtb_Minus_k_idx_0 * rtb_Switch2_i;

    /* Switch: '<S79>/Switch' incorporates:
     *  RelationalOperator: '<S79>/UpperRelop'
     */
    if (!(rtb_Add_o5 < rtb_Switch2_g)) {
      rtb_Switch2_g = rtb_Add_o5;
    }

    /* End of Switch: '<S79>/Switch' */
  }

  /* End of Switch: '<S79>/Switch2' */

  /* Sum: '<S78>/Sum' */
  rtb_Switch2_g += rtb_Init;

  /* Outport: '<Root>/Coral_Arm_DutyCycle' */
  Code_Gen_Model_Y.Coral_Arm_DutyCycle = rtb_Switch2_g;

  /* RelationalOperator: '<S128>/Compare' incorporates:
   *  Constant: '<S128>/Constant'
   *  Inport: '<Root>/Joystick_Left_B5'
   */
  Code_Gen_Model_B.Winch_Cmd = (Code_Gen_Model_U.Joystick_Left_B5 != 0.0);

  /* Switch: '<S12>/Switch' incorporates:
   *  Constant: '<S12>/Constant5'
   *  Logic: '<S12>/Logical Operator1'
   *  RelationalOperator: '<S12>/Relational Operator'
   */
  if (((Code_Gen_Model_B.Winch_Cmd) &&
       (Code_Gen_Model_B.Elevator_Height_Desired_merge ==
        Elevator_Height_End_Game)) &&
      (Code_Gen_Model_B.Reefscape_Motors_Enable_merge)) {
    /* Switch: '<S12>/Switch1' incorporates:
     *  Constant: '<S102>/Constant'
     *  Inport: '<Root>/Winch_Revs'
     *  RelationalOperator: '<S102>/Compare'
     */
    if (Code_Gen_Model_U.Winch_Revs >= Winch_Rev_Target) {
      /* Outport: '<Root>/Winch_DutyCycle' incorporates:
       *  Constant: '<S12>/Constant2'
       */
      Code_Gen_Model_Y.Winch_DutyCycle = Winch_Hold_DC;
    } else {
      /* Outport: '<Root>/Winch_DutyCycle' incorporates:
       *  Constant: '<S12>/Constant1'
       */
      Code_Gen_Model_Y.Winch_DutyCycle = Winch_Spool_DC;
    }

    /* End of Switch: '<S12>/Switch1' */
  } else {
    /* Outport: '<Root>/Winch_DutyCycle' incorporates:
     *  Constant: '<S12>/Constant'
     */
    Code_Gen_Model_Y.Winch_DutyCycle = 0.0;
  }

  /* End of Switch: '<S12>/Switch' */

  /* Sum: '<S14>/Subtract' incorporates:
   *  Inport: '<Root>/Joystick_Left_B7'
   *  Inport: '<Root>/Joystick_Left_B8'
   */
  Code_Gen_Model_B.Actuator_Cmd = Code_Gen_Model_U.Joystick_Left_B8 -
    Code_Gen_Model_U.Joystick_Left_B7;

  /* Product: '<S12>/Product' incorporates:
   *  Constant: '<S12>/Constant3'
   */
  rtb_Add_o5 = Code_Gen_Model_B.Actuator_Cmd * Actuator_DC;

  /* Switch: '<S12>/Switch2' incorporates:
   *  Constant: '<S103>/Constant'
   *  Logic: '<S12>/Logical Operator2'
   *  RelationalOperator: '<S103>/Compare'
   */
  if ((Code_Gen_Model_B.Reefscape_Motors_Enable_merge) && (rtb_Add_o5 != 0.0)) {
    /* Outport: '<Root>/Actuator_DutyCycle' */
    Code_Gen_Model_Y.Actuator_DutyCycle = rtb_Add_o5;
  } else {
    /* Outport: '<Root>/Actuator_DutyCycle' incorporates:
     *  Constant: '<S12>/Constant4'
     */
    Code_Gen_Model_Y.Actuator_DutyCycle = 0.0;
  }

  /* End of Switch: '<S12>/Switch2' */

  /* Gain: '<S195>/meters to feet1' */
  Code_Gen_Model_B.Odometry_Y_global_est_ft = 3.28084 *
    Code_Gen_Model_B.Odom_Position_Y;

  /* RelationalOperator: '<S196>/Compare' incorporates:
   *  Constant: '<S195>/Constant'
   *  Constant: '<S196>/Constant'
   */
  rtb_Compare_cid = (Odometry_X_Y_TEAR != 0.0);

  /* Switch: '<S195>/Switch1' incorporates:
   *  UnitDelay: '<S195>/Unit Delay1'
   */
  if (rtb_Compare_cid) {
    rtb_Add_o5 = Code_Gen_Model_B.Odometry_Y_global_est_ft;
  } else {
    rtb_Add_o5 = Code_Gen_Model_DW.UnitDelay1_DSTATE_d;
  }

  /* End of Switch: '<S195>/Switch1' */

  /* Sum: '<S195>/Subtract1' */
  Code_Gen_Model_B.Odometry_Y_global_TEAR_ft =
    Code_Gen_Model_B.Odometry_Y_global_est_ft - rtb_Add_o5;

  /* Gain: '<S195>/meters to feet' */
  Code_Gen_Model_B.Odometry_X_global_est_ft = 3.28084 *
    Code_Gen_Model_B.Odom_Position_X;

  /* Switch: '<S195>/Switch' incorporates:
   *  UnitDelay: '<S195>/Unit Delay'
   */
  if (rtb_Compare_cid) {
    rtb_Init = Code_Gen_Model_B.Odometry_X_global_est_ft;
  } else {
    rtb_Init = Code_Gen_Model_DW.UnitDelay_DSTATE_c;
  }

  /* End of Switch: '<S195>/Switch' */

  /* Sum: '<S195>/Subtract' */
  Code_Gen_Model_B.Odometry_X_global_TEAR_ft =
    Code_Gen_Model_B.Odometry_X_global_est_ft - rtb_Init;

  /* Outport: '<Root>/Gyro_Angle_Offset_Total' incorporates:
   *  Gain: '<S13>/Gain'
   *  Sum: '<S13>/Add1'
   */
  Code_Gen_Model_Y.Gyro_Angle_Offset_Total = (rtb_Switch1_j1 + rtb_Switch1) *
    57.295779513082323;

  /* Switch: '<S3>/Switch1' incorporates:
   *  Constant: '<S3>/Constant2'
   */
  if (TEST_CANdle_Flag != 0.0) {
    /* Outport: '<Root>/CANdle_LED_ID' incorporates:
     *  Constant: '<S3>/Constant3'
     */
    Code_Gen_Model_Y.CANdle_LED_ID = TEST_CANdle_LED_ID;
  } else {
    /* Outport: '<Root>/CANdle_LED_ID' incorporates:
     *  Switch: '<S3>/Switch'
     */
    Code_Gen_Model_Y.CANdle_LED_ID = Robot_Reached_Destination;
  }

  /* End of Switch: '<S3>/Switch1' */

  /* Outport: '<Root>/Enable_Wheels' */
  Code_Gen_Model_Y.Enable_Wheels = rtb_Enable_Wheels;

  /* Outport: '<Root>/Reset_Wheel_Offsets' */
  Code_Gen_Model_Y.Reset_Wheel_Offsets = rtb_Reset_Wheel_Offsets;

  /* Outport: '<Root>/Disable_Wheels' */
  Code_Gen_Model_Y.Disable_Wheels = rtb_Disable_Wheels;

  /* Outport: '<Root>/Swerve_Motors_Disabled' */
  Code_Gen_Model_Y.Swerve_Motors_Disabled = rtb_Swerve_Motors_Disabled;

  /* Outport: '<Root>/Coral_Wheel_DutyCycle' */
  Code_Gen_Model_Y.Coral_Wheel_DutyCycle = rtb_Coral_Wheel_DutyCycle_merge;

  /* Outport: '<Root>/Algae_Wheel_Outside_DutyCycle' */
  Code_Gen_Model_Y.Algae_Wheel_Outside_DutyCycle =
    rtb_Algae_Wheel_Outside_DutyCyc;

  /* Outport: '<Root>/Algae_Wheel_Inside_DutyCycle' */
  Code_Gen_Model_Y.Algae_Wheel_Inside_DutyCycle =
    rtb_Algae_Wheel_Inside_DutyCycl;

  /* SignalConversion: '<S14>/Signal Copy4' incorporates:
   *  Inport: '<Root>/Joystick_Right_X'
   */
  Code_Gen_Model_B.Steer_Joystick_X = Code_Gen_Model_U.Joystick_Right_X;

  /* DataTypeConversion: '<S20>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/GameState'
   */
  rtb_Minus_k_idx_0 = floor(Code_Gen_Model_U.GameState);
  if ((rtIsNaN(rtb_Minus_k_idx_0)) || (rtIsInf(rtb_Minus_k_idx_0))) {
    rtb_Minus_k_idx_0 = 0.0;
  } else {
    rtb_Minus_k_idx_0 = fmod(rtb_Minus_k_idx_0, 256.0);
  }

  MultiportSwitch = (uint8_T)((rtb_Minus_k_idx_0 < 0.0) ? ((int32_T)((uint8_T)
    (-((int8_T)((uint8_T)(-rtb_Minus_k_idx_0)))))) : ((int32_T)((uint8_T)
    rtb_Minus_k_idx_0)));

  /* End of DataTypeConversion: '<S20>/Data Type Conversion' */

  /* Chart: '<S20>/Chart' */
  if (Code_Gen_Model_DW.is_active_c9_Code_Gen_Model == 0U) {
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

  /* End of Chart: '<S20>/Chart' */

  /* Update for UnitDelay: '<S187>/UD' incorporates:
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Rev'
   *
   * Block description for '<S187>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE = Code_Gen_Model_U.FrontLeft_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S188>/UD' incorporates:
   *  Inport: '<Root>/FrontRight_Drive_Motor_Rev'
   *
   * Block description for '<S188>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_m = Code_Gen_Model_U.FrontRight_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S189>/UD' incorporates:
   *  Inport: '<Root>/BackLeft_Drive_Motor_Rev'
   *
   * Block description for '<S189>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_i = Code_Gen_Model_U.BackLeft_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S190>/UD' incorporates:
   *  Inport: '<Root>/BackRight_Drive_Motor_Rev'
   *
   * Block description for '<S190>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_c = Code_Gen_Model_U.BackRight_Drive_Motor_Rev;

  /* Update for S-Function (sfix_udelay): '<S16>/Tapped Delay' */
  Code_Gen_Model_DW.TappedDelay_X[0] = Code_Gen_Model_DW.TappedDelay_X[1];
  Code_Gen_Model_DW.TappedDelay_X[1] = Code_Gen_Model_B.Product6[0];

  /* Update for S-Function (sfix_udelay): '<S16>/Tapped Delay1' */
  Code_Gen_Model_DW.TappedDelay1_X[0] = Code_Gen_Model_DW.TappedDelay1_X[1];
  Code_Gen_Model_DW.TappedDelay1_X[1] = Code_Gen_Model_B.Product6[1];

  /* Update for Delay: '<S132>/MemoryX' */
  Code_Gen_Model_DW.icLoad = false;

  /* Product: '<S152>/A[k]*xhat[k|k-1]' incorporates:
   *  Constant: '<S132>/A'
   *  Delay: '<S132>/MemoryX'
   */
  rtb_Switch1_j1 = (0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[1]) +
    Code_Gen_Model_DW.MemoryX_DSTATE[0];
  rtb_Coral_Wheel_DutyCycle_merge = (0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[0])
    + Code_Gen_Model_DW.MemoryX_DSTATE[1];

  /* Update for Delay: '<S132>/MemoryX' incorporates:
   *  Constant: '<S132>/B'
   *  Product: '<S152>/A[k]*xhat[k|k-1]'
   *  Product: '<S152>/B[k]*u[k]'
   *  Sum: '<S152>/Add'
   */
  Code_Gen_Model_DW.MemoryX_DSTATE[0] = (((0.0 * Code_Gen_Model_B.Product6[1]) +
    Code_Gen_Model_B.Product6[0]) + rtb_Switch1_j1) + Code_Gen_Model_B.Product3
    [0];
  Code_Gen_Model_DW.MemoryX_DSTATE[1] = (((0.0 * Code_Gen_Model_B.Product6[0]) +
    Code_Gen_Model_B.Product6[1]) + rtb_Coral_Wheel_DutyCycle_merge) +
    Code_Gen_Model_B.Product3[1];

  /* Update for UnitDelay: '<S105>/Delay Input1' incorporates:
   *  Constant: '<S13>/Constant3'
   *
   * Block description for '<S105>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE = Gyro_Calibration_Reset_Flag;

  /* Update for UnitDelay: '<S13>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE = rtb_Switch1;

  /* Update for UnitDelay: '<S186>/UD'
   *
   * Block description for '<S186>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_d = Code_Gen_Model_B.Gyro_Angle_Field_rad;

  /* Update for DiscreteIntegrator: '<S19>/Accumulator2' incorporates:
   *  Constant: '<S19>/Constant'
   *  DiscreteIntegrator: '<S19>/Accumulator'
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

  /* End of Update for DiscreteIntegrator: '<S19>/Accumulator2' */

  /* Update for DiscreteIntegrator: '<S19>/Accumulator' */
  Code_Gen_Model_DW.Accumulator_DSTATE += Code_Gen_Model_B.Product6[1];

  /* Update for UnitDelay: '<S129>/Delay Input1' incorporates:
   *  Inport: '<Root>/Joystick_Left_B11'
   *
   * Block description for '<S129>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_n = Code_Gen_Model_U.Joystick_Left_B11;

  /* Update for UnitDelay: '<S130>/Delay Input1' incorporates:
   *  Inport: '<Root>/Joystick_Left_B12'
   *
   * Block description for '<S130>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_e = Code_Gen_Model_U.Joystick_Left_B12;

  /* Update for UnitDelay: '<S131>/Delay Input1' incorporates:
   *  Inport: '<Root>/Joystick_Left_B13'
   *
   * Block description for '<S131>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_nj = Code_Gen_Model_U.Joystick_Left_B13;

  /* Update for UnitDelay: '<S99>/Delay Input1'
   *
   * Block description for '<S99>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_b = rtb_Compare;

  /* Update for UnitDelay: '<S100>/Delay Input1'
   *
   * Block description for '<S100>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_o1 = rtb_Compare_pd;

  /* Update for UnitDelay: '<S1>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_mph =
    Code_Gen_Model_B.Elevator_LowerPickup_Reset_merg;

  /* Update for UnitDelay: '<S101>/Delay Input1'
   *
   * Block description for '<S101>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_po = rtb_UnitDelay_l;

  /* Update for UnitDelay: '<S1>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_b = Code_Gen_Model_B.State_ID_merge;

  /* Update for UnitDelay: '<S15>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_ll =
    Code_Gen_Model_B.Robot_Reached_Destination_l;

  /* Update for UnitDelay: '<S363>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S363>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE = 0U;

  /* Update for UnitDelay: '<S385>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_i = rtb_Merge1;

  /* Update for UnitDelay: '<S384>/UD'
   *
   * Block description for '<S384>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_a = rtb_Rotationmatrixfromlocalto_2;

  /* Update for UnitDelay: '<S382>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_m = rtb_Switch2_gl;

  /* Update for UnitDelay: '<S365>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_d = rtb_Switch2_ji;

  /* Update for UnitDelay: '<S380>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S380>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_p = 0U;

  /* Update for UnitDelay: '<S380>/FixPt Unit Delay1' */
  Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_e = rtb_Switch2_ji;

  /* Update for UnitDelay: '<S364>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_g = rtb_Switch2_jm;

  /* Update for UnitDelay: '<S373>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S373>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_c = 0U;

  /* Update for UnitDelay: '<S373>/FixPt Unit Delay1' */
  Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_p = rtb_Switch2_jm;

  /* Update for UnitDelay: '<S339>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_j = rtb_Rotationmatrixfromlocalto_0;

  /* Update for UnitDelay: '<S338>/UD'
   *
   * Block description for '<S338>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_j = rtb_Rotationmatrixfromlocalto_1;

  /* Update for UnitDelay: '<S332>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_l = rtb_Rotationmatrixfromlocalto_3;

  /* Update for UnitDelay: '<S276>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_f = rtb_Minus_k_idx_1;

  /* Update for UnitDelay: '<S275>/UD'
   *
   * Block description for '<S275>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_h = rtb_Switch2_az;

  /* Update for UnitDelay: '<S269>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_j = rtb_Hypot_g5;

  /* Update for UnitDelay: '<S287>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_bk = rtb_Add_ju;

  /* Update for UnitDelay: '<S286>/UD'
   *
   * Block description for '<S286>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_b = rtb_Switch2_ah;

  /* Update for UnitDelay: '<S272>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_e = rtb_Sum2_e;

  /* Update for UnitDelay: '<S297>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_e = rtb_Add_fn;

  /* Update for UnitDelay: '<S296>/UD'
   *
   * Block description for '<S296>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_mm = rtb_Subtract1_la;

  /* Update for UnitDelay: '<S290>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_h = rtb_Hypot_b;

  /* Update for UnitDelay: '<S308>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_n = rtb_Add_c;

  /* Update for UnitDelay: '<S307>/UD'
   *
   * Block description for '<S307>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_i1 = rtb_Switch2_e;

  /* Update for UnitDelay: '<S293>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_dt = rtb_Sum2_oc;

  /* Update for UnitDelay: '<S318>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_n4 = rtb_uDLookupTable_l;

  /* Update for UnitDelay: '<S317>/UD'
   *
   * Block description for '<S317>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_o = rtb_Subtract_h3;

  /* Update for UnitDelay: '<S311>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_f = rtb_Integral_hv;

  /* Update for UnitDelay: '<S329>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_nw = rtb_Sum1_m;

  /* Update for UnitDelay: '<S328>/UD'
   *
   * Block description for '<S328>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_k = rtb_Product_lf;

  /* Update for UnitDelay: '<S314>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_k = rtb_Integral_m;

  /* Update for UnitDelay: '<S350>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_iw = rtb_Optimized_Module_Angle;

  /* Update for UnitDelay: '<S349>/UD'
   *
   * Block description for '<S349>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_l = rtb_Product_pz;

  /* Update for UnitDelay: '<S335>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_lm = rtb_Integral_p;

  /* Update for UnitDelay: '<S97>/Delay Input1'
   *
   * Block description for '<S97>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_be = rtb_Is_Absolute_Steering;

  /* Update for UnitDelay: '<S87>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_mh = rtb_Switch5_a;

  /* Update for UnitDelay: '<S96>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S96>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_o = 0U;

  /* Update for UnitDelay: '<S96>/FixPt Unit Delay1' */
  Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_l = rtb_Switch5_a;

  /* Update for UnitDelay: '<S81>/Delay Input1'
   *
   * Block description for '<S81>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_op = rtb_Is_Absolute_Translation_g;

  /* Update for UnitDelay: '<S71>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_oz = rtb_Switch2_g;

  /* Update for UnitDelay: '<S80>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S80>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_j = 0U;

  /* Update for UnitDelay: '<S80>/FixPt Unit Delay1' */
  Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_pc = rtb_Switch2_g;

  /* Update for UnitDelay: '<S195>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_d = rtb_Add_o5;

  /* Update for UnitDelay: '<S195>/Unit Delay' */
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

    /* Start for Constant: '<S1>/Constant' */
    Constant = Odometry_IC_X;

    /* Start for Constant: '<S1>/Constant1' */
    Constant1 = Odometry_IC_Y;

    /* Start for SwitchCase: '<S1>/Switch Case' */
    Code_Gen_Model_DW.SwitchCase_ActiveSubsystem = -1;

    /* Start for If: '<S21>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem = -1;

    /* InitializeConditions for Delay: '<S132>/MemoryX' */
    Code_Gen_Model_DW.icLoad = true;

    /* InitializeConditions for UnitDelay: '<S13>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE = Gyro_Calibration_Reset_Degree;

    /* InitializeConditions for DiscreteIntegrator: '<S19>/Accumulator2' */
    Code_Gen_Model_DW.Accumulator2_DSTATE = Constant;
    Code_Gen_Model_DW.Accumulator2_PrevResetState = 2;

    /* InitializeConditions for DiscreteIntegrator: '<S19>/Accumulator' */
    Code_Gen_Model_DW.Accumulator_DSTATE = Constant1;
    Code_Gen_Model_DW.Accumulator_PrevResetState = 2;

    /* InitializeConditions for UnitDelay: '<S363>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE = 1U;

    /* InitializeConditions for UnitDelay: '<S380>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_p = 1U;

    /* InitializeConditions for UnitDelay: '<S373>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_c = 1U;

    /* InitializeConditions for UnitDelay: '<S96>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_o = 1U;

    /* InitializeConditions for UnitDelay: '<S80>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_j = 1U;

    /* SystemInitialize for IfAction SubSystem: '<S1>/Teleop' */
    /* InitializeConditions for UnitDelay: '<S454>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_a = 1U;

    /* End of SystemInitialize for SubSystem: '<S1>/Teleop' */

    /* SystemInitialize for IfAction SubSystem: '<S21>/Spline Path Following Enabled' */
    /* Start for If: '<S204>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem_h = -1;

    /* InitializeConditions for UnitDelay: '<S200>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_gh = 2.0;

    /* SystemInitialize for IfAction SubSystem: '<S204>/Robot_Index_Is_Valid' */
    /* Start for If: '<S207>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem_o = -1;

    /* SystemInitialize for IfAction SubSystem: '<S207>/Circle_Check_Valid' */
    /* Start for If: '<S209>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;

    /* End of SystemInitialize for SubSystem: '<S207>/Circle_Check_Valid' */
    /* End of SystemInitialize for SubSystem: '<S204>/Robot_Index_Is_Valid' */
    /* End of SystemInitialize for SubSystem: '<S21>/Spline Path Following Enabled' */
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
