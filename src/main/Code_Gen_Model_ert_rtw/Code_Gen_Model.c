/*
 * Sponsored License - for use in support of a program or activity
 * sponsored by MathWorks.  Not for government, commercial or other
 * non-sponsored organizational use.
 *
 * File: Code_Gen_Model.c
 *
 * Code generated for Simulink model 'Code_Gen_Model'.
 *
 * Model version                  : 2.305
 * Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
 * C/C++ source code generated on : Wed Mar  5 22:10:25 2025
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

/* Named constants for Chart: '<S18>/Chart' */
#define Code_Gen_Mod_IN_NO_ACTIVE_CHILD ((uint8_T)0U)
#define Code_Gen_Model_IN_Disabled     ((uint8_T)1U)
#define Code_Gen_Model_IN_Not_Disabled ((uint8_T)2U)

/* Named constants for Chart: '<S370>/Reefscape_Chart' */
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
#define Code_Gen_Model_IN_Level_4      ((uint8_T)2U)
#define Code_Gen_Model_IN_Level_4_o    ((uint8_T)4U)
#define Code_Gen_Model_IN_Levels_2_3   ((uint8_T)3U)
#define Code_Gen_Model_IN_None         ((uint8_T)5U)
#define Code_Gen_Model_IN_Off          ((uint8_T)4U)
#define Code_Gen_Model_IN_Start_Angle  ((uint8_T)10U)
#define Code_Gen_Model_IN_Stop         ((uint8_T)4U)
#define Code_Gen__IN_Coral_Pickup_Lower ((uint8_T)1U)
#define Code_Gen__IN_Coral_Pickup_Raise ((uint8_T)4U)
#define Code_IN_Coral_Pickup_Lower_Wait ((uint8_T)2U)
#define Code__IN_Elevator_Height_Bottom ((uint8_T)7U)

/* Exported block parameters */
real_T AT_CS_L_Angle_Blue = -0.94248;  /* Variable: AT_CS_L_Angle_Blue
                                        * Referenced by: '<S367>/Constant14'
                                        */
real_T AT_CS_L_Angle_Red = 2.1991;     /* Variable: AT_CS_L_Angle_Red
                                        * Referenced by: '<S367>/Constant13'
                                        */
real_T AT_CS_L_X_Blue = 1.1497;        /* Variable: AT_CS_L_X_Blue
                                        * Referenced by: '<S367>/Constant9'
                                        */
real_T AT_CS_L_X_Red = 16.3986;        /* Variable: AT_CS_L_X_Red
                                        * Referenced by: '<S367>/Constant5'
                                        */
real_T AT_CS_L_Y_Blue = 6.9855;        /* Variable: AT_CS_L_Y_Blue
                                        * Referenced by: '<S367>/Constant28'
                                        */
real_T AT_CS_L_Y_Red = 1.0663;         /* Variable: AT_CS_L_Y_Red
                                        * Referenced by: '<S367>/Constant27'
                                        */
real_T AT_CS_R_Angle_Blue = 0.94248;   /* Variable: AT_CS_R_Angle_Blue
                                        * Referenced by: '<S367>/Constant12'
                                        */
real_T AT_CS_R_Angle_Red = -2.1991;    /* Variable: AT_CS_R_Angle_Red
                                        * Referenced by: '<S367>/Constant11'
                                        */
real_T AT_CS_R_X_Blue = 1.1497;        /* Variable: AT_CS_R_X_Blue
                                        * Referenced by: '<S367>/Constant4'
                                        */
real_T AT_CS_R_X_Red = 16.3986;        /* Variable: AT_CS_R_X_Red
                                        * Referenced by: '<S367>/Constant17'
                                        */
real_T AT_CS_R_Y_Blue = 1.0663;        /* Variable: AT_CS_R_Y_Blue
                                        * Referenced by: '<S367>/Constant26'
                                        */
real_T AT_CS_R_Y_Red = 6.9855;         /* Variable: AT_CS_R_Y_Red
                                        * Referenced by: '<S367>/Constant3'
                                        */
real_T AT_Cage_L_Finish_Angle_Blue = 0.0;/* Variable: AT_Cage_L_Finish_Angle_Blue
                                          * Referenced by: '<S367>/Constant55'
                                          */
real_T AT_Cage_L_Finish_Angle_Red = -3.1416;/* Variable: AT_Cage_L_Finish_Angle_Red
                                             * Referenced by: '<S367>/Constant54'
                                             */
real_T AT_Cage_L_Finish_X_Blue = 8.7681;/* Variable: AT_Cage_L_Finish_X_Blue
                                         * Referenced by: '<S367>/Constant39'
                                         */
real_T AT_Cage_L_Finish_X_Red = 8.7803;/* Variable: AT_Cage_L_Finish_X_Red
                                        * Referenced by: '<S367>/Constant2'
                                        */
real_T AT_Cage_L_Finish_Y_Blue = 7.2603;/* Variable: AT_Cage_L_Finish_Y_Blue
                                         * Referenced by: '<S367>/Constant43'
                                         */
real_T AT_Cage_L_Finish_Y_Red = 0.79229;/* Variable: AT_Cage_L_Finish_Y_Red
                                         * Referenced by: '<S367>/Constant42'
                                         */
real_T AT_Cage_L_Start_Angle_Blue = 0.0;/* Variable: AT_Cage_L_Start_Angle_Blue
                                         * Referenced by: '<S367>/Constant49'
                                         */
real_T AT_Cage_L_Start_Angle_Red = -3.1416;/* Variable: AT_Cage_L_Start_Angle_Red
                                            * Referenced by: '<S367>/Constant48'
                                            */
real_T AT_Cage_L_Start_X_Blue = 9.5301;/* Variable: AT_Cage_L_Start_X_Blue
                                        * Referenced by: '<S367>/Constant7'
                                        */
real_T AT_Cage_L_Start_X_Red = 8.0183; /* Variable: AT_Cage_L_Start_X_Red
                                        * Referenced by: '<S367>/Constant15'
                                        */
real_T AT_Cage_L_Start_Y_Blue = 7.2603;/* Variable: AT_Cage_L_Start_Y_Blue
                                        * Referenced by: '<S367>/Constant32'
                                        */
real_T AT_Cage_L_Start_Y_Red = 0.79229;/* Variable: AT_Cage_L_Start_Y_Red
                                        * Referenced by: '<S367>/Constant25'
                                        */
real_T AT_Cage_M_Finish_Angle_Blue = 0.0;/* Variable: AT_Cage_M_Finish_Angle_Blue
                                          * Referenced by: '<S367>/Constant53'
                                          */
real_T AT_Cage_M_Finish_Angle_Red = -3.1416;/* Variable: AT_Cage_M_Finish_Angle_Red
                                             * Referenced by: '<S367>/Constant52'
                                             */
real_T AT_Cage_M_Finish_X_Blue = 8.7681;/* Variable: AT_Cage_M_Finish_X_Blue
                                         * Referenced by: '<S367>/Constant34'
                                         */
real_T AT_Cage_M_Finish_X_Red = 8.7803;/* Variable: AT_Cage_M_Finish_X_Red
                                        * Referenced by: '<S367>/Constant35'
                                        */
real_T AT_Cage_M_Finish_Y_Blue = 6.1697;/* Variable: AT_Cage_M_Finish_Y_Blue
                                         * Referenced by: '<S367>/Constant41'
                                         */
real_T AT_Cage_M_Finish_Y_Red = 1.8829;/* Variable: AT_Cage_M_Finish_Y_Red
                                        * Referenced by: '<S367>/Constant44'
                                        */
real_T AT_Cage_M_Start_Angle_Blue = 0.0;/* Variable: AT_Cage_M_Start_Angle_Blue
                                         * Referenced by: '<S367>/Constant47'
                                         */
real_T AT_Cage_M_Start_Angle_Red = -3.1416;/* Variable: AT_Cage_M_Start_Angle_Red
                                            * Referenced by: '<S367>/Constant46'
                                            */
real_T AT_Cage_M_Start_X_Blue = 9.5301;/* Variable: AT_Cage_M_Start_X_Blue
                                        * Referenced by: '<S367>/Constant20'
                                        */
real_T AT_Cage_M_Start_X_Red = 8.0183; /* Variable: AT_Cage_M_Start_X_Red
                                        * Referenced by: '<S367>/Constant24'
                                        */
real_T AT_Cage_M_Start_Y_Blue = 6.1697;/* Variable: AT_Cage_M_Start_Y_Blue
                                        * Referenced by: '<S367>/Constant22'
                                        */
real_T AT_Cage_M_Start_Y_Red = 1.8829; /* Variable: AT_Cage_M_Start_Y_Red
                                        * Referenced by: '<S367>/Constant33'
                                        */
real_T AT_Cage_R_Finish_Angle_Blue = 0.0;/* Variable: AT_Cage_R_Finish_Angle_Blue
                                          * Referenced by: '<S367>/Constant51'
                                          */
real_T AT_Cage_R_Finish_Angle_Red = -3.1416;/* Variable: AT_Cage_R_Finish_Angle_Red
                                             * Referenced by: '<S367>/Constant56'
                                             */
real_T AT_Cage_R_Finish_X_Blue = 8.7681;/* Variable: AT_Cage_R_Finish_X_Blue
                                         * Referenced by: '<S367>/Constant36'
                                         */
real_T AT_Cage_R_Finish_X_Red = 8.7803;/* Variable: AT_Cage_R_Finish_X_Red
                                        * Referenced by: '<S367>/Constant38'
                                        */
real_T AT_Cage_R_Finish_Y_Blue = 5.079;/* Variable: AT_Cage_R_Finish_Y_Blue
                                        * Referenced by: '<S367>/Constant45'
                                        */
real_T AT_Cage_R_Finish_Y_Red = 2.9735;/* Variable: AT_Cage_R_Finish_Y_Red
                                        * Referenced by: '<S367>/Constant40'
                                        */
real_T AT_Cage_R_Start_Angle_Blue = 0.0;/* Variable: AT_Cage_R_Start_Angle_Blue
                                         * Referenced by: '<S367>/Constant1'
                                         */
real_T AT_Cage_R_Start_Angle_Red = -3.1416;/* Variable: AT_Cage_R_Start_Angle_Red
                                            * Referenced by: '<S367>/Constant50'
                                            */
real_T AT_Cage_R_Start_X_Blue = 9.5301;/* Variable: AT_Cage_R_Start_X_Blue
                                        * Referenced by: '<S367>/Constant29'
                                        */
real_T AT_Cage_R_Start_X_Red = 8.0183; /* Variable: AT_Cage_R_Start_X_Red
                                        * Referenced by: '<S367>/Constant31'
                                        */
real_T AT_Cage_R_Start_Y_Blue = 5.079; /* Variable: AT_Cage_R_Start_Y_Blue
                                        * Referenced by: '<S367>/Constant6'
                                        */
real_T AT_Cage_R_Start_Y_Red = 2.9735; /* Variable: AT_Cage_R_Start_Y_Red
                                        * Referenced by: '<S367>/Constant16'
                                        */
real_T AT_Integral_Enable_Error_Angle = 3.0;
                                     /* Variable: AT_Integral_Enable_Error_Angle
                                      * Referenced by: '<S374>/Constant'
                                      */
real_T AT_Integral_Enable_Error_XY = 2.0;/* Variable: AT_Integral_Enable_Error_XY
                                          * Referenced by:
                                          *   '<S381>/Constant'
                                          *   '<S382>/Constant'
                                          */
real_T AT_Max_Error_Angle = 0.5;       /* Variable: AT_Max_Error_Angle
                                        * Referenced by: '<S380>/Constant'
                                        */
real_T AT_Max_Error_XY = 0.3;          /* Variable: AT_Max_Error_XY
                                        * Referenced by:
                                        *   '<S378>/Constant'
                                        *   '<S379>/Constant'
                                        */
real_T AT_Processor_Angle_Blue = 1.5708;/* Variable: AT_Processor_Angle_Blue
                                         * Referenced by: '<S367>/Constant10'
                                         */
real_T AT_Processor_Angle_Red = -1.5708;/* Variable: AT_Processor_Angle_Red
                                         * Referenced by: '<S367>/Constant8'
                                         */
real_T AT_Processor_X_Blue = 11.5608;  /* Variable: AT_Processor_X_Blue
                                        * Referenced by: '<S367>/Constant18'
                                        */
real_T AT_Processor_X_Red = 5.9875;    /* Variable: AT_Processor_X_Red
                                        * Referenced by: '<S367>/Constant19'
                                        */
real_T AT_Processor_Y_Blue = 7.4206;   /* Variable: AT_Processor_Y_Blue
                                        * Referenced by: '<S367>/Constant21'
                                        */
real_T AT_Processor_Y_Red = 0.63119;   /* Variable: AT_Processor_Y_Red
                                        * Referenced by: '<S367>/Constant23'
                                        */
real_T AT_Reef_Target_Algae_X = 19.0;  /* Variable: AT_Reef_Target_Algae_X
                                        * Referenced by: '<S368>/Constant7'
                                        */
real_T AT_Reef_Target_Algae_Y = 4.5;   /* Variable: AT_Reef_Target_Algae_Y
                                        * Referenced by: '<S368>/Constant6'
                                        */
real_T AT_Reef_Target_Center_Y = -2.5; /* Variable: AT_Reef_Target_Center_Y
                                        * Referenced by: '<S368>/Constant3'
                                        */
real_T AT_Reef_Target_L1_X = 26.75;    /* Variable: AT_Reef_Target_L1_X
                                        * Referenced by: '<S368>/Constant4'
                                        */
real_T AT_Reef_Target_L2_L3_X = 26.25; /* Variable: AT_Reef_Target_L2_L3_X
                                        * Referenced by: '<S368>/Constant'
                                        */
real_T AT_Reef_Target_L4_X = 27.5;     /* Variable: AT_Reef_Target_L4_X
                                        * Referenced by: '<S368>/Constant5'
                                        */
real_T AT_Reef_Target_Left_Y = 5.5;    /* Variable: AT_Reef_Target_Left_Y
                                        * Referenced by: '<S368>/Constant1'
                                        */
real_T AT_Reef_Target_Right_Y = -7.5;  /* Variable: AT_Reef_Target_Right_Y
                                        * Referenced by: '<S368>/Constant2'
                                        */
real_T AT_Steering_Error_Angle_Gain = 0.07;/* Variable: AT_Steering_Error_Angle_Gain
                                            * Referenced by: '<S390>/Constant4'
                                            */
real_T AT_Steering_Speed_Max = 0.4;    /* Variable: AT_Steering_Speed_Max
                                        * Referenced by: '<S390>/Constant10'
                                        */
real_T AT_Translation_Control_Gain_Field = 10.0;
                                  /* Variable: AT_Translation_Control_Gain_Field
                                   * Referenced by: '<S391>/Gain2'
                                   */
real_T AT_Translation_Control_Gain_Relative = 0.2;
                               /* Variable: AT_Translation_Control_Gain_Relative
                                * Referenced by: '<S391>/Gain1'
                                */
real_T AT_Translation_Speed_Max_Field = 5.0;
                                     /* Variable: AT_Translation_Speed_Max_Field
                                      * Referenced by: '<S391>/Constant5'
                                      */
real_T AT_Translation_Speed_Max_Relative = 0.5;
                                  /* Variable: AT_Translation_Speed_Max_Relative
                                   * Referenced by: '<S391>/Constant8'
                                   */
real_T Algae_Eject_Time = 1.0;         /* Variable: Algae_Eject_Time
                                        * Referenced by: '<S370>/Reefscape_Chart'
                                        */
real_T Algae_Hold_DC = 0.005;          /* Variable: Algae_Hold_DC
                                        * Referenced by: '<S370>/Reefscape_Chart'
                                        */
real_T Algae_Pull_In_DC = 1.0;         /* Variable: Algae_Pull_In_DC
                                        * Referenced by: '<S370>/Reefscape_Chart'
                                        */
real_T Algae_Push_Out_DC = -0.3;       /* Variable: Algae_Push_Out_DC
                                        * Referenced by: '<S370>/Reefscape_Chart'
                                        */
real_T Boost_Trigger_Decreasing_Limit = -0.28;
                                     /* Variable: Boost_Trigger_Decreasing_Limit
                                      * Referenced by: '<S405>/Constant1'
                                      */
real_T Boost_Trigger_High_Speed = 5.0; /* Variable: Boost_Trigger_High_Speed
                                        * Referenced by:
                                        *   '<S401>/Constant'
                                        *   '<S401>/Saturation'
                                        */
real_T Boost_Trigger_Increasing_Limit = 3.5;
                                     /* Variable: Boost_Trigger_Increasing_Limit
                                      * Referenced by: '<S405>/Constant3'
                                      */
real_T Boost_Trigger_Low_Speed = 1.5;  /* Variable: Boost_Trigger_Low_Speed
                                        * Referenced by: '<S401>/Constant1'
                                        */
real_T Coral_Arm_Angle_Coral_Score_Lower_Rate = -1.0;
                             /* Variable: Coral_Arm_Angle_Coral_Score_Lower_Rate
                              * Referenced by: '<S370>/Reefscape_Chart'
                              */
real_T Coral_Arm_Angle_Error_Threshold = 3.0;
                                    /* Variable: Coral_Arm_Angle_Error_Threshold
                                     * Referenced by: '<S370>/Reefscape_Chart'
                                     */
real_T Coral_Arm_Angle_L1 = -15.0;     /* Variable: Coral_Arm_Angle_L1
                                        * Referenced by: '<S370>/Reefscape_Chart'
                                        */
real_T Coral_Arm_Angle_L2 = 50.0;      /* Variable: Coral_Arm_Angle_L2
                                        * Referenced by: '<S370>/Reefscape_Chart'
                                        */
real_T Coral_Arm_Angle_L3 = 50.0;      /* Variable: Coral_Arm_Angle_L3
                                        * Referenced by: '<S370>/Reefscape_Chart'
                                        */
real_T Coral_Arm_Angle_L4 = 50.0;      /* Variable: Coral_Arm_Angle_L4
                                        * Referenced by: '<S370>/Reefscape_Chart'
                                        */
real_T Coral_Arm_Angle_L4_Eject = 25.0;/* Variable: Coral_Arm_Angle_L4_Eject
                                        * Referenced by: '<S370>/Reefscape_Chart'
                                        */
real_T Coral_Arm_Angle_Neg_Threshold = -88.0;
                                      /* Variable: Coral_Arm_Angle_Neg_Threshold
                                       * Referenced by: '<S25>/Constant'
                                       */
real_T Coral_Arm_Angle_Pos_Threshold = 110.0;
                                      /* Variable: Coral_Arm_Angle_Pos_Threshold
                                       * Referenced by:
                                       *   '<S26>/Constant'
                                       *   '<S27>/Constant'
                                       */
real_T Coral_Arm_Angle_Start = -15.0;  /* Variable: Coral_Arm_Angle_Start
                                        * Referenced by: '<S370>/Reefscape_Chart'
                                        */
real_T Coral_Arm_Angle_Start_Thresh = -75.0;/* Variable: Coral_Arm_Angle_Start_Thresh
                                             * Referenced by: '<S370>/Reefscape_Chart'
                                             */
real_T Coral_Arm_Angle_Up = 85.0;      /* Variable: Coral_Arm_Angle_Up
                                        * Referenced by: '<S370>/Reefscape_Chart'
                                        */
real_T Coral_Arm_DC_Inc_RL = 0.066667; /* Variable: Coral_Arm_DC_Inc_RL
                                        * Referenced by: '<S28>/Constant3'
                                        */
real_T Coral_Arm_Gain_Int = 0.001;     /* Variable: Coral_Arm_Gain_Int
                                        * Referenced by: '<S29>/Gain2'
                                        */
real_T Coral_Arm_Gain_Prop = 0.01;     /* Variable: Coral_Arm_Gain_Prop
                                        * Referenced by: '<S29>/Gain1'
                                        */
real_T Coral_Arm_Int_IC = 0.0;         /* Variable: Coral_Arm_Int_IC
                                        * Referenced by: '<S29>/Constant3'
                                        */
real_T Coral_Arm_Int_LL = -0.05;       /* Variable: Coral_Arm_Int_LL
                                        * Referenced by: '<S29>/Saturation1'
                                        */
real_T Coral_Arm_Int_UL = 0.05;        /* Variable: Coral_Arm_Int_UL
                                        * Referenced by: '<S29>/Saturation1'
                                        */
real_T Coral_Arm_Manual_Gain = 1.0;    /* Variable: Coral_Arm_Manual_Gain
                                        * Referenced by: '<S370>/Reefscape_Chart'
                                        */
real_T Coral_Arm_Neg90_DC = -0.03;     /* Variable: Coral_Arm_Neg90_DC
                                        * Referenced by: '<S7>/Constant2'
                                        */
real_T Coral_Arm_Pos90_DC = 0.03;      /* Variable: Coral_Arm_Pos90_DC
                                        * Referenced by: '<S7>/Constant1'
                                        */
real_T Coral_Detect_Distance = 60.0;   /* Variable: Coral_Detect_Distance
                                        * Referenced by: '<S370>/Reefscape_Chart'
                                        */
real_T Coral_Eject_Time = 0.5;         /* Variable: Coral_Eject_Time
                                        * Referenced by: '<S370>/Reefscape_Chart'
                                        */
real_T Coral_Motor_DC_Eject = -0.4;    /* Variable: Coral_Motor_DC_Eject
                                        * Referenced by: '<S370>/Reefscape_Chart'
                                        */
real_T Coral_Motor_DC_Hold = 0.01;     /* Variable: Coral_Motor_DC_Hold
                                        * Referenced by: '<S370>/Reefscape_Chart'
                                        */
real_T Coral_Motor_DC_Pickup = 0.1;    /* Variable: Coral_Motor_DC_Pickup
                                        * Referenced by: '<S370>/Reefscape_Chart'
                                        */
real_T Drive_Motor_Control_D = 0.0001; /* Variable: Drive_Motor_Control_D
                                        * Referenced by:
                                        *   '<S223>/Constant3'
                                        *   '<S244>/Constant3'
                                        *   '<S265>/Constant3'
                                        *   '<S286>/Constant3'
                                        */
real_T Drive_Motor_Control_D_FilterCoeff = 0.22223;
                                  /* Variable: Drive_Motor_Control_D_FilterCoeff
                                   * Referenced by:
                                   *   '<S223>/Constant2'
                                   *   '<S244>/Constant2'
                                   *   '<S265>/Constant2'
                                   *   '<S286>/Constant2'
                                   */
real_T Drive_Motor_Control_D_LL = -0.2;/* Variable: Drive_Motor_Control_D_LL
                                        * Referenced by:
                                        *   '<S223>/Saturation'
                                        *   '<S244>/Saturation'
                                        *   '<S265>/Saturation'
                                        *   '<S286>/Saturation'
                                        */
real_T Drive_Motor_Control_D_UL = 0.2; /* Variable: Drive_Motor_Control_D_UL
                                        * Referenced by:
                                        *   '<S223>/Saturation'
                                        *   '<S244>/Saturation'
                                        *   '<S265>/Saturation'
                                        *   '<S286>/Saturation'
                                        */
real_T Drive_Motor_Control_FF = 0.00016129;/* Variable: Drive_Motor_Control_FF
                                            * Referenced by:
                                            *   '<S223>/Gain'
                                            *   '<S244>/Gain'
                                            *   '<S265>/Gain'
                                            *   '<S286>/Gain'
                                            */
real_T Drive_Motor_Control_I = 1.0E-6; /* Variable: Drive_Motor_Control_I
                                        * Referenced by:
                                        *   '<S223>/Gain2'
                                        *   '<S244>/Gain2'
                                        *   '<S265>/Gain2'
                                        *   '<S286>/Gain2'
                                        */
real_T Drive_Motor_Control_I_LL = -0.03;/* Variable: Drive_Motor_Control_I_LL
                                         * Referenced by:
                                         *   '<S223>/Saturation1'
                                         *   '<S244>/Saturation1'
                                         *   '<S265>/Saturation1'
                                         *   '<S286>/Saturation1'
                                         */
real_T Drive_Motor_Control_I_UL = 0.03;/* Variable: Drive_Motor_Control_I_UL
                                        * Referenced by:
                                        *   '<S223>/Saturation1'
                                        *   '<S244>/Saturation1'
                                        *   '<S265>/Saturation1'
                                        *   '<S286>/Saturation1'
                                        */
real_T Drive_Motor_Control_P = 5.0E-6; /* Variable: Drive_Motor_Control_P
                                        * Referenced by:
                                        *   '<S223>/Gain1'
                                        *   '<S244>/Gain1'
                                        *   '<S265>/Gain1'
                                        *   '<S286>/Gain1'
                                        */
real_T Drive_Motor_Control_Sign_Change_Deadband = 7000.0;
                           /* Variable: Drive_Motor_Control_Sign_Change_Deadband
                            * Referenced by:
                            *   '<S228>/Constant'
                            *   '<S249>/Constant'
                            *   '<S270>/Constant'
                            *   '<S291>/Constant'
                            */
real_T Elevator_Bottom_DC = -0.04;     /* Variable: Elevator_Bottom_DC
                                        * Referenced by: '<S9>/Constant7'
                                        */
real_T Elevator_DC_Inc_RL = 0.066667;  /* Variable: Elevator_DC_Inc_RL
                                        * Referenced by: '<S44>/Constant3'
                                        */
real_T Elevator_Error_Bottom_Disable = 3.0;
                                      /* Variable: Elevator_Error_Bottom_Disable
                                       * Referenced by: '<S41>/Constant'
                                       */
real_T Elevator_Error_Increase = 0.0;  /* Variable: Elevator_Error_Increase
                                        * Referenced by: '<S9>/Constant6'
                                        */
real_T Elevator_Gain_Int = 0.02;       /* Variable: Elevator_Gain_Int
                                        * Referenced by: '<S45>/Gain2'
                                        */
real_T Elevator_Gain_Prop = 0.3;       /* Variable: Elevator_Gain_Prop
                                        * Referenced by: '<S45>/Gain1'
                                        */
real_T Elevator_Height_Algae_High = 19.5;/* Variable: Elevator_Height_Algae_High
                                          * Referenced by: '<S370>/Reefscape_Chart'
                                          */
real_T Elevator_Height_Algae_Low = 11.5;/* Variable: Elevator_Height_Algae_Low
                                         * Referenced by: '<S370>/Reefscape_Chart'
                                         */
real_T Elevator_Height_Algae_Score = 2.5;/* Variable: Elevator_Height_Algae_Score
                                          * Referenced by: '<S370>/Reefscape_Chart'
                                          */
real_T Elevator_Height_Bottom = 0.0;   /* Variable: Elevator_Height_Bottom
                                        * Referenced by: '<S370>/Reefscape_Chart'
                                        */
real_T Elevator_Height_Coral_Arm_Low_Thresh = 8.5;
                               /* Variable: Elevator_Height_Coral_Arm_Low_Thresh
                                * Referenced by: '<S24>/Constant'
                                */
real_T Elevator_Height_Coral_Score_Lower_Rate = -0.1;
                             /* Variable: Elevator_Height_Coral_Score_Lower_Rate
                              * Referenced by: '<S370>/Reefscape_Chart'
                              */
real_T Elevator_Height_Error_Threshold = 1.0;
                                    /* Variable: Elevator_Height_Error_Threshold
                                     * Referenced by:
                                     *   '<S42>/Constant'
                                     *   '<S370>/Reefscape_Chart'
                                     */
real_T Elevator_Height_L1 = 11.0;      /* Variable: Elevator_Height_L1
                                        * Referenced by: '<S370>/Reefscape_Chart'
                                        */
real_T Elevator_Height_L2 = 7.25;      /* Variable: Elevator_Height_L2
                                        * Referenced by: '<S370>/Reefscape_Chart'
                                        */
real_T Elevator_Height_L3 = 15.125;    /* Variable: Elevator_Height_L3
                                        * Referenced by: '<S370>/Reefscape_Chart'
                                        */
real_T Elevator_Height_L4 = 28.0;      /* Variable: Elevator_Height_L4
                                        * Referenced by: '<S370>/Reefscape_Chart'
                                        */
real_T Elevator_Height_Lower = 6.0;    /* Variable: Elevator_Height_Lower
                                        * Referenced by: '<S370>/Reefscape_Chart'
                                        */
real_T Elevator_Height_Manual_Gain = 0.1;/* Variable: Elevator_Height_Manual_Gain
                                          * Referenced by: '<S370>/Reefscape_Chart'
                                          */
real_T Elevator_Height_PickupLower_Reset = 6.8;
                                  /* Variable: Elevator_Height_PickupLower_Reset
                                   * Referenced by: '<S10>/Constant2'
                                   */
real_T Elevator_Height_Prepare = 12.0; /* Variable: Elevator_Height_Prepare
                                        * Referenced by: '<S370>/Reefscape_Chart'
                                        */
real_T Elevator_Height_Raise = 9.0;    /* Variable: Elevator_Height_Raise
                                        * Referenced by: '<S370>/Reefscape_Chart'
                                        */
real_T Elevator_Height_Top = 28.0;     /* Variable: Elevator_Height_Top
                                        * Referenced by: '<S370>/Reefscape_Chart'
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
                                        * Referenced by: '<S45>/Constant3'
                                        */
real_T Elevator_Int_LL = -0.1;         /* Variable: Elevator_Int_LL
                                        * Referenced by: '<S45>/Saturation1'
                                        */
real_T Elevator_Int_UL = 0.1;          /* Variable: Elevator_Int_UL
                                        * Referenced by: '<S45>/Saturation1'
                                        */
real_T Elevator_LowerPickup_Time = 0.5;/* Variable: Elevator_LowerPickup_Time
                                        * Referenced by: '<S370>/Reefscape_Chart'
                                        */
real_T Elevator_MotorRev_to_Inch = 0.27646;/* Variable: Elevator_MotorRev_to_Inch
                                            * Referenced by: '<S10>/Gain1'
                                            */
real_T Elevator_Total_LL = -0.5;       /* Variable: Elevator_Total_LL
                                        * Referenced by:
                                        *   '<S45>/Constant1'
                                        *   '<S45>/Saturation2'
                                        */
real_T Elevator_Total_UL = 1.0;        /* Variable: Elevator_Total_UL
                                        * Referenced by:
                                        *   '<S45>/Constant'
                                        *   '<S45>/Saturation2'
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
real_T Limelight_Tag_Angle_Offset = -0.2;/* Variable: Limelight_Tag_Angle_Offset
                                          * Referenced by: '<S15>/Constant2'
                                          */
real_T Limelight_Tag_X_Offset = -0.65; /* Variable: Limelight_Tag_X_Offset
                                        * Referenced by: '<S15>/Constant'
                                        */
real_T Limelight_Tag_Y_Offset = 0.21;  /* Variable: Limelight_Tag_Y_Offset
                                        * Referenced by: '<S15>/Constant1'
                                        */
real_T Odometry_IC_X = 0.0;            /* Variable: Odometry_IC_X
                                        * Referenced by: '<S1>/Constant'
                                        */
real_T Odometry_IC_Y = 0.0;            /* Variable: Odometry_IC_Y
                                        * Referenced by: '<S1>/Constant1'
                                        */
real_T Odometry_Reset_IC = 0.0;        /* Variable: Odometry_Reset_IC
                                        * Referenced by: '<S17>/Constant'
                                        */
real_T Odometry_X_Y_TEAR = 0.0;        /* Variable: Odometry_X_Y_TEAR
                                        * Referenced by: '<S149>/Constant'
                                        */
real_T Spline_Last_Pose_Distance_to_Velocity_Gain = 2.0;
                         /* Variable: Spline_Last_Pose_Distance_to_Velocity_Gain
                          * Referenced by: '<S208>/Constant2'
                          */
real_T Spline_Max_Centripital_Acceleration = 10.0;
                                /* Variable: Spline_Max_Centripital_Acceleration
                                 * Referenced by: '<S208>/Constant1'
                                 */
real_T Spline_Pose_Num_Before_End_Reduce_Speed = 1.0;
                            /* Variable: Spline_Pose_Num_Before_End_Reduce_Speed
                             * Referenced by: '<S155>/Constant'
                             */
real_T Spline_Stop_Radius = 0.1;       /* Variable: Spline_Stop_Radius
                                        * Referenced by: '<S168>/Constant'
                                        */
real_T Spline_Velocity_Multiplier_TEST = 1.0;
                                    /* Variable: Spline_Velocity_Multiplier_TEST
                                     * Referenced by: '<S208>/Constant3'
                                     */
real_T Steering_Absolute_Cmd_Approach_Zero_Error_Thresh = 0.2;
                   /* Variable: Steering_Absolute_Cmd_Approach_Zero_Error_Thresh
                    * Referenced by: '<S319>/Constant5'
                    */
real_T Steering_Absolute_Cmd_Approach_Zero_Final_Thresh = 0.01;
                   /* Variable: Steering_Absolute_Cmd_Approach_Zero_Final_Thresh
                    * Referenced by: '<S319>/Constant6'
                    */
real_T Steering_Absolute_Cmd_NonZero_Error_Thresh = 0.2;
                         /* Variable: Steering_Absolute_Cmd_NonZero_Error_Thresh
                          * Referenced by: '<S319>/Constant9'
                          */
real_T Steering_Absolute_Cmd_NonZero_Final_Scale_Factor = 0.1;
                   /* Variable: Steering_Absolute_Cmd_NonZero_Final_Scale_Factor
                    * Referenced by: '<S319>/Constant10'
                    */
real_T Steering_Absolute_Cmd_Rate_Limit_Dec = -1.0;
                               /* Variable: Steering_Absolute_Cmd_Rate_Limit_Dec
                                * Referenced by: '<S319>/Constant1'
                                */
real_T Steering_Absolute_Cmd_Rate_Limit_Inc = 1.0;
                               /* Variable: Steering_Absolute_Cmd_Rate_Limit_Inc
                                * Referenced by: '<S319>/Constant3'
                                */
real_T Steering_Heading_Control_D = 0.0;/* Variable: Steering_Heading_Control_D
                                         * Referenced by: '<S336>/Constant3'
                                         */
real_T Steering_Heading_Control_D_FilterCoeff = 0.22223;
                             /* Variable: Steering_Heading_Control_D_FilterCoeff
                              * Referenced by: '<S336>/Constant2'
                              */
real_T Steering_Heading_Control_D_LL = 0.0;
                                      /* Variable: Steering_Heading_Control_D_LL
                                       * Referenced by: '<S336>/Saturation'
                                       */
real_T Steering_Heading_Control_D_UL = 0.0;
                                      /* Variable: Steering_Heading_Control_D_UL
                                       * Referenced by: '<S336>/Saturation'
                                       */
real_T Steering_Heading_Control_Deadzone = 0.1;
                                  /* Variable: Steering_Heading_Control_Deadzone
                                   * Referenced by: '<S335>/Constant'
                                   */
real_T Steering_Heading_Control_I = 0.0;/* Variable: Steering_Heading_Control_I
                                         * Referenced by: '<S336>/Gain2'
                                         */
real_T Steering_Heading_Control_I_LL = -0.1;
                                      /* Variable: Steering_Heading_Control_I_LL
                                       * Referenced by: '<S336>/Saturation1'
                                       */
real_T Steering_Heading_Control_I_UL = 0.1;
                                      /* Variable: Steering_Heading_Control_I_UL
                                       * Referenced by: '<S336>/Saturation1'
                                       */
real_T Steering_Heading_Control_P = 2.5;/* Variable: Steering_Heading_Control_P
                                         * Referenced by: '<S336>/Gain1'
                                         */
real_T Steering_Heading_Control_Total_LL = -2.5;
                                  /* Variable: Steering_Heading_Control_Total_LL
                                   * Referenced by:
                                   *   '<S336>/Constant1'
                                   *   '<S336>/Saturation2'
                                   */
real_T Steering_Heading_Control_Total_UL = 2.5;
                                  /* Variable: Steering_Heading_Control_Total_UL
                                   * Referenced by:
                                   *   '<S336>/Constant'
                                   *   '<S336>/Saturation2'
                                   */
real_T Steering_Motor_Control_D = 0.5; /* Variable: Steering_Motor_Control_D
                                        * Referenced by:
                                        *   '<S226>/Constant3'
                                        *   '<S247>/Constant3'
                                        *   '<S268>/Constant3'
                                        *   '<S289>/Constant3'
                                        */
real_T Steering_Motor_Control_D_FilterCoeff = 0.22223;
                               /* Variable: Steering_Motor_Control_D_FilterCoeff
                                * Referenced by:
                                *   '<S226>/Constant2'
                                *   '<S247>/Constant2'
                                *   '<S268>/Constant2'
                                *   '<S289>/Constant2'
                                */
real_T Steering_Motor_Control_D_LL = -0.2;/* Variable: Steering_Motor_Control_D_LL
                                           * Referenced by:
                                           *   '<S226>/Saturation'
                                           *   '<S247>/Saturation'
                                           *   '<S268>/Saturation'
                                           *   '<S289>/Saturation'
                                           */
real_T Steering_Motor_Control_D_UL = 0.2;/* Variable: Steering_Motor_Control_D_UL
                                          * Referenced by:
                                          *   '<S226>/Saturation'
                                          *   '<S247>/Saturation'
                                          *   '<S268>/Saturation'
                                          *   '<S289>/Saturation'
                                          */
real_T Steering_Motor_Control_I = 0.005;/* Variable: Steering_Motor_Control_I
                                         * Referenced by:
                                         *   '<S226>/Gain2'
                                         *   '<S247>/Gain2'
                                         *   '<S268>/Gain2'
                                         *   '<S289>/Gain2'
                                         */
real_T Steering_Motor_Control_I_LL = -0.005;/* Variable: Steering_Motor_Control_I_LL
                                             * Referenced by:
                                             *   '<S226>/Saturation1'
                                             *   '<S247>/Saturation1'
                                             *   '<S268>/Saturation1'
                                             *   '<S289>/Saturation1'
                                             */
real_T Steering_Motor_Control_I_UL = 0.005;/* Variable: Steering_Motor_Control_I_UL
                                            * Referenced by:
                                            *   '<S226>/Saturation1'
                                            *   '<S247>/Saturation1'
                                            *   '<S268>/Saturation1'
                                            *   '<S289>/Saturation1'
                                            */
real_T Steering_Motor_Control_P = 0.15;/* Variable: Steering_Motor_Control_P
                                        * Referenced by:
                                        *   '<S226>/Gain1'
                                        *   '<S247>/Gain1'
                                        *   '<S268>/Gain1'
                                        *   '<S289>/Gain1'
                                        */
real_T Steering_Relative_Cmd_Approach_Zero_Error_Thresh = 0.2;
                   /* Variable: Steering_Relative_Cmd_Approach_Zero_Error_Thresh
                    * Referenced by: '<S318>/Constant5'
                    */
real_T Steering_Relative_Cmd_Approach_Zero_Final_Thresh = 0.01;
                   /* Variable: Steering_Relative_Cmd_Approach_Zero_Final_Thresh
                    * Referenced by: '<S318>/Constant6'
                    */
real_T Steering_Relative_Cmd_NonZero_Error_Thresh = 0.2;
                         /* Variable: Steering_Relative_Cmd_NonZero_Error_Thresh
                          * Referenced by: '<S318>/Constant9'
                          */
real_T Steering_Relative_Cmd_NonZero_Final_Scale_Factor = 1.0;
                   /* Variable: Steering_Relative_Cmd_NonZero_Final_Scale_Factor
                    * Referenced by: '<S318>/Constant10'
                    */
real_T Steering_Relative_Cmd_Rate_Limit_Dec = -10.0;
                               /* Variable: Steering_Relative_Cmd_Rate_Limit_Dec
                                * Referenced by: '<S318>/Constant1'
                                */
real_T Steering_Relative_Cmd_Rate_Limit_Inc = 10.0;
                               /* Variable: Steering_Relative_Cmd_Rate_Limit_Inc
                                * Referenced by: '<S318>/Constant3'
                                */
real_T Steering_Relative_Gain = 5.0;   /* Variable: Steering_Relative_Gain
                                        * Referenced by: '<S390>/Constant'
                                        */
real_T Steering_Twist_Gain = -0.5;     /* Variable: Steering_Twist_Gain
                                        * Referenced by: '<S390>/Constant1'
                                        */
real_T TEST_Swerve_Mode_Override_Flag = 0.0;
                                     /* Variable: TEST_Swerve_Mode_Override_Flag
                                      * Referenced by: '<S371>/Constant5'
                                      */
real_T TEST_Swerve_Mode_Steering = 0.0;/* Variable: TEST_Swerve_Mode_Steering
                                        * Referenced by: '<S371>/Constant8'
                                        */
real_T TEST_Swerve_Mode_Translation = 0.0;/* Variable: TEST_Swerve_Mode_Translation
                                           * Referenced by: '<S371>/Constant7'
                                           */
real_T Translation_Speed_Approach_Zero_Error_Thresh = 0.2;
                       /* Variable: Translation_Speed_Approach_Zero_Error_Thresh
                        * Referenced by: '<S306>/Constant5'
                        */
real_T Translation_Speed_Approach_Zero_Final_Thresh = 0.01;
                       /* Variable: Translation_Speed_Approach_Zero_Final_Thresh
                        * Referenced by: '<S306>/Constant6'
                        */
real_T Translation_Speed_NonZero_Error_Thresh = 0.15;
                             /* Variable: Translation_Speed_NonZero_Error_Thresh
                              * Referenced by: '<S306>/Constant9'
                              */
real_T Translation_Speed_NonZero_Final_Scale_Factor = 0.05;
                       /* Variable: Translation_Speed_NonZero_Final_Scale_Factor
                        * Referenced by: '<S306>/Constant10'
                        */
real_T Translation_Speed_Rate_Limit_Dec = -4.0;
                                   /* Variable: Translation_Speed_Rate_Limit_Dec
                                    * Referenced by: '<S306>/Constant1'
                                    */
real_T Translation_Speed_Rate_Limit_Inc = 4.0;
                                   /* Variable: Translation_Speed_Rate_Limit_Inc
                                    * Referenced by: '<S306>/Constant3'
                                    */
real_T Translation_Twist_Gain = -0.5;  /* Variable: Translation_Twist_Gain
                                        * Referenced by: '<S391>/Gain'
                                        */
real_T Twist_Deadzone_neg = -0.01;     /* Variable: Twist_Deadzone_neg
                                        * Referenced by:
                                        *   '<S390>/Dead Zone'
                                        *   '<S391>/Dead Zone'
                                        */
real_T Twist_Deadzone_pos = 0.01;      /* Variable: Twist_Deadzone_pos
                                        * Referenced by:
                                        *   '<S390>/Dead Zone'
                                        *   '<S391>/Dead Zone'
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
static void Code_Gen_Mode_Algae_Pickup_High(const boolean_T *Compare_f, const
  boolean_T *FixPtRelationalOperator_ne, const boolean_T
  *FixPtRelationalOperator_j, const boolean_T *FixPtRelationalOperator_i);
static void Code_Gen_Model_Coral_Eject(const boolean_T *Compare, const boolean_T
  *Compare_f, const boolean_T *FixPtRelationalOperator_ne, const boolean_T
  *FixPtRelationalOperator_j, const boolean_T *FixPtRelationalOperator_i);
static void Code_exit_internal_Coral_Pickup(void);
static void Code_Gen_Model_Set_Level(void);
static void Code_Gen_Model_Coral_Pickup(const boolean_T *Compare, const
  boolean_T *Compare_f, const boolean_T *FixPtRelationalOperator_ne, const
  boolean_T *FixPtRelationalOperator_j, const boolean_T
  *FixPtRelationalOperator_i);
static void Code_Gen_M_Coral_Score_Position(const boolean_T *Compare, const
  boolean_T *FixPtRelationalOperator_l);
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

/* Function for Chart: '<S370>/Reefscape_Chart' */
static void enter_internal_Coral_Score_Posi(void)
{
  if ((Code_Gen_Model_DW.Set_L1) || (Code_Gen_Model_B.FixPtRelationalOperator))
  {
    Code_Gen_Model_DW.is_Coral_Score_Position = Code_Gen_Model_IN_Level_1;
    Code_Gen_Model_B.Set_Coral_Level = 1U;
    Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_L1;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = Coral_Arm_Angle_L1;
  } else if ((Code_Gen_Model_DW.Set_L2) ||
             (Code_Gen_Model_B.FixPtRelationalOperator_k)) {
    Code_Gen_Model_DW.is_Coral_Score_Position = Code_Gen_Model_IN_Level_2;
    Code_Gen_Model_B.Set_Coral_Level = 2U;
    Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_L2;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = Coral_Arm_Angle_L2;
  } else if ((Code_Gen_Model_DW.Set_L3) ||
             (Code_Gen_Model_B.FixPtRelationalOperator_n)) {
    Code_Gen_Model_DW.is_Coral_Score_Position = Code_Gen_Model_IN_Level_3;
    Code_Gen_Model_B.Set_Coral_Level = 3U;
    Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_L3;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = Coral_Arm_Angle_L3;
  } else if ((Code_Gen_Model_DW.Set_L4) ||
             (Code_Gen_Model_B.FixPtRelationalOperator_d)) {
    Code_Gen_Model_DW.is_Coral_Score_Position = Code_Gen_Model_IN_Level_4_o;
    Code_Gen_Model_B.Set_Coral_Level = 4U;
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

/* Function for Chart: '<S370>/Reefscape_Chart' */
static void Code_Gen_Mode_Algae_Pickup_High(const boolean_T *Compare_f, const
  boolean_T *FixPtRelationalOperator_ne, const boolean_T
  *FixPtRelationalOperator_j, const boolean_T *FixPtRelationalOperator_i)
{
  boolean_T tmp;
  Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
  tmp = !(*Compare_f);
  if ((*FixPtRelationalOperator_ne) && tmp) {
    Code_Gen_Model_B.Set_Algae_Level = 0U;
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
      Code_Gen_Model_B.Set_Algae_Level = 0U;
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        Code__IN_Elevator_Height_Bottom;
      Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Bottom;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = Coral_Arm_Angle_Up;
    } else {
      Code_Gen_Model_B.Set_Algae_Level = 0U;
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        C_IN_Elevator_Height_Bottom_pre;
      Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Prepare;
    }
  } else if ((*FixPtRelationalOperator_i) && tmp) {
    Code_Gen_Model_B.Set_Algae_Level = 0U;
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_IN_Elevator_Height_Top;
    Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Top;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = -80.0;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_m) {
    Code_Gen_Model_B.Set_Algae_Level = 0U;
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_Model_IN_Algae_Score;
    Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Algae_Score;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = Coral_Arm_Angle_Up;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_ji) {
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_Mo_IN_Algae_Pickup_Low;
    Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Algae_Low;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = Coral_Arm_Angle_Up;
    Code_Gen_Model_B.Set_Algae_Level = 2U;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_ml) {
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_M_IN_Algae_Pickup_High;
    Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Algae_High;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = Coral_Arm_Angle_Up;
    Code_Gen_Model_B.Set_Algae_Level = 3U;
  }
}

/* Function for Chart: '<S370>/Reefscape_Chart' */
static void Code_Gen_Model_Coral_Eject(const boolean_T *Compare, const boolean_T
  *Compare_f, const boolean_T *FixPtRelationalOperator_ne, const boolean_T
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
    Code_Gen_Model_B.Set_Algae_Level = 2U;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_ml) {
    Code_Gen_Model_DW.is_Coral_Eject = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_M_IN_Algae_Pickup_High;
    Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Algae_High;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = Coral_Arm_Angle_Up;
    Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
    Code_Gen_Model_B.Set_Algae_Level = 3U;
  } else {
    switch (Code_Gen_Model_DW.is_Coral_Eject) {
     case Code_Gen_Model_IN_Eject:
      Code_Gen_Model_B.Coral_Wheel_DC = Coral_Motor_DC_Eject;
      if (Code_Gen_Model_DW.timer >= Coral_Eject_Time) {
        Code_Gen_Model_DW.is_Coral_Eject = Code_Gen_Model_IN_Stop;
        Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
      } else {
        Code_Gen_Model_DW.timer += 0.02;
      }
      break;

     case Code_Gen_Model_IN_Level_4:
      if ((!(*Compare)) || (Code_Gen_Model_B.Coral_Arm_Angle_Measured <
                            Coral_Arm_Angle_L4_Eject)) {
        Code_Gen_Model_DW.is_Coral_Eject = Code_Gen_Model_IN_Eject;
        Code_Gen_Model_B.Coral_Wheel_DC = Coral_Motor_DC_Eject;
        Code_Gen_Model_DW.timer = 0.0;
      } else {
        Code_Gen_Model_B.Coral_Arm_Angle_Desired_o +=
          Coral_Arm_Angle_Coral_Score_Lower_Rate;
      }
      break;

     case Code_Gen_Model_IN_Levels_2_3:
      if (!(*Compare)) {
        Code_Gen_Model_DW.is_Coral_Eject = Code_Gen_Model_IN_Eject;
        Code_Gen_Model_B.Coral_Wheel_DC = Coral_Motor_DC_Eject;
        Code_Gen_Model_DW.timer = 0.0;
      } else {
        Code_Gen_Model_B.Elevator_Height_Desired_m +=
          Elevator_Height_Coral_Score_Lower_Rate;
      }
      break;

     default:
      /* case IN_Stop: */
      Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
      break;
    }
  }
}

/* Function for Chart: '<S370>/Reefscape_Chart' */
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

/* Function for Chart: '<S370>/Reefscape_Chart' */
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

/* Function for Chart: '<S370>/Reefscape_Chart' */
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
    Code_Gen_Model_B.Set_Algae_Level = 2U;
  } else if (Code_Gen_Model_B.FixPtRelationalOperator_ml) {
    Code_exit_internal_Coral_Pickup();
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_M_IN_Algae_Pickup_High;
    Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Algae_High;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = Coral_Arm_Angle_Up;
    Code_Gen_Model_B.Coral_Wheel_DC = 0.0;
    Code_Gen_Model_B.Set_Algae_Level = 3U;
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

/* Function for Chart: '<S370>/Reefscape_Chart' */
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
    Code_Gen_Model_B.Set_Coral_Level = 0U;
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Ge_IN_Coral_Score_Position;
    enter_internal_Coral_Score_Posi();
  } else if (*FixPtRelationalOperator_l) {
    Code_Gen_Model_DW.is_Coral_Score_Position = Code_Gen_Mod_IN_NO_ACTIVE_CHILD;
    Code_Gen_Model_B.Set_Coral_Level = 0U;
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code_Gen_Model_IN_Coral_Eject;
    if ((Code_Gen_Model_DW.Set_L2) || (Code_Gen_Model_DW.Set_L3)) {
      Code_Gen_Model_DW.is_Coral_Eject = Code_Gen_Model_IN_Levels_2_3;
      Code_Gen_Model_B.Elevator_Height_Desired_m +=
        Elevator_Height_Coral_Score_Lower_Rate;
    } else if (Code_Gen_Model_DW.Set_L4) {
      Code_Gen_Model_DW.is_Coral_Eject = Code_Gen_Model_IN_Level_4;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_o +=
        Coral_Arm_Angle_Coral_Score_Lower_Rate;
    } else {
      Code_Gen_Model_DW.is_Coral_Eject = Code_Gen_Model_IN_Eject;
      Code_Gen_Model_B.Coral_Wheel_DC = Coral_Motor_DC_Eject;
      Code_Gen_Model_DW.timer = 0.0;
    }
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

     case Code_Gen_Model_IN_Level_4_o:
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
        Code_Gen_Model_B.Set_Coral_Level = 0U;
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

/* Function for Chart: '<S370>/Reefscape_Chart' */
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
      Code_Gen_Model_B.Set_Algae_Level = 2U;
    } else if (Code_Gen_Model_B.FixPtRelationalOperator_ml) {
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        Code_Gen_M_IN_Algae_Pickup_High;
      Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Algae_High;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = Coral_Arm_Angle_Up;
      Code_Gen_Model_B.Set_Algae_Level = 3U;
    }
  }

  if (guard1) {
    Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
      Code__IN_Elevator_Height_Bottom;
    Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Bottom;
    Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = Coral_Arm_Angle_Up;
  }
}

/* Function for Chart: '<S370>/Reefscape_Chart' */
static void Co_Elevator_CoralArm_CoralWheel(const boolean_T *Compare, const
  boolean_T *Compare_f, const boolean_T *FixPtRelationalOperator_ne, const
  boolean_T *FixPtRelationalOperator_j, const boolean_T
  *FixPtRelationalOperator_l, const boolean_T *FixPtRelationalOperator_i)
{
  boolean_T tmp;
  switch (Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel) {
   case Code_Gen_M_IN_Algae_Pickup_High:
    Code_Gen_Mode_Algae_Pickup_High(Compare_f, FixPtRelationalOperator_ne,
      FixPtRelationalOperator_j, FixPtRelationalOperator_i);
    break;

   case Code_Gen_Mo_IN_Algae_Pickup_Low:
    Code_Gen_Mode_Algae_Pickup_High(Compare_f, FixPtRelationalOperator_ne,
      FixPtRelationalOperator_j, FixPtRelationalOperator_i);
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
      Code_Gen_Model_B.Set_Algae_Level = 2U;
    } else if (Code_Gen_Model_B.FixPtRelationalOperator_ml) {
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        Code_Gen_M_IN_Algae_Pickup_High;
      Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Algae_High;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = Coral_Arm_Angle_Up;
      Code_Gen_Model_B.Set_Algae_Level = 3U;
    }
    break;

   case Code_Gen_Model_IN_Coral_Eject:
    Code_Gen_Model_Coral_Eject(Compare, Compare_f, FixPtRelationalOperator_ne,
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
      Code_Gen_Model_B.Set_Algae_Level = 2U;
    } else if (Code_Gen_Model_B.FixPtRelationalOperator_ml) {
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        Code_Gen_M_IN_Algae_Pickup_High;
      Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Algae_High;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = Coral_Arm_Angle_Up;
      Code_Gen_Model_B.Set_Algae_Level = 3U;
    }
    break;

   case C_IN_Elevator_Height_Bottom_pre:
    Code_Elevator_Height_Bottom_pre(Compare_f, FixPtRelationalOperator_ne,
      FixPtRelationalOperator_j, FixPtRelationalOperator_i);
    break;

   case Code_Gen_IN_Elevator_Height_Top:
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
      Code_Gen_Model_B.Set_Algae_Level = 2U;
    } else if (Code_Gen_Model_B.FixPtRelationalOperator_ml) {
      Code_Gen_Model_DW.is_Elevator_CoralArm_CoralWheel =
        Code_Gen_M_IN_Algae_Pickup_High;
      Code_Gen_Model_B.Elevator_Height_Desired_m = Elevator_Height_Algae_High;
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_o = Coral_Arm_Angle_Up;
      Code_Gen_Model_B.Set_Algae_Level = 3U;
    }
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
  real_T rtb_Add2_k_idx_0;
  real_T rtb_Add2_k_idx_1;
  real_T rtb_Add_c;
  real_T rtb_Add_fn;
  real_T rtb_Add_ju;
  real_T rtb_Add_o5;
  real_T rtb_Algae_Wheel_Inside_DutyCycl;
  real_T rtb_Algae_Wheel_Outside_DutyCyc;
  real_T rtb_Coral_Wheel_DutyCycle;
  real_T rtb_Disable_Wheels;
  real_T rtb_Enable_Wheels;
  real_T rtb_Hypot;
  real_T rtb_Hypot_b;
  real_T rtb_Hypot_g5;
  real_T rtb_Init;
  real_T rtb_Integral_hv;
  real_T rtb_Integral_m;
  real_T rtb_Integral_p;
  real_T rtb_Merge1;
  real_T rtb_Minus_k_idx_0;
  real_T rtb_Optimized_Module_Angle;
  real_T rtb_Product_d1;
  real_T rtb_Reset_Wheel_Offsets;
  real_T rtb_Rotationmatrixfromlocalto_0;
  real_T rtb_Rotationmatrixfromlocalto_1;
  real_T rtb_Subtract;
  real_T rtb_Subtract1_la;
  real_T rtb_Subtract_h3;
  real_T rtb_Sum2_e;
  real_T rtb_Sum2_oc;
  real_T rtb_Sum_jt;
  real_T rtb_Switch1;
  real_T rtb_Switch2_fx;
  real_T rtb_Switch2_g;
  real_T rtb_Switch2_ji;
  real_T rtb_Switch2_m;
  real_T rtb_Switch2_p;
  real_T rtb_Switch2_pc;
  real_T rtb_Switch4;
  real_T rtb_Switch5_a;
  real_T rtb_Switch_b5;
  real_T rtb_Switch_l;
  real_T rtb_uDLookupTable_l;
  int32_T i;
  int32_T i_0;
  int32_T tmp_0;
  int8_T rtAction;
  int8_T rtPrevAction;
  uint8_T rtb_GameState;
  boolean_T Compare;
  boolean_T Compare_f;
  boolean_T FixPtRelationalOperator_i;
  boolean_T FixPtRelationalOperator_j;
  boolean_T FixPtRelationalOperator_l;
  boolean_T FixPtRelationalOperator_ne;
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
  boolean_T rtb_Compare_a;
  boolean_T rtb_Compare_kw;
  boolean_T rtb_Compare_pd;
  boolean_T rtb_FixPtRelationalOperator_m;
  boolean_T rtb_Is_Absolute_Steering;
  boolean_T rtb_Is_Absolute_Translation_g;
  boolean_T rtb_Swerve_Motors_Disabled;
  boolean_T rtb_UnitDelay_l;

  /* Sum: '<S213>/Add1' incorporates:
   *  Constant: '<S213>/Constant3'
   *  Constant: '<S213>/Constant4'
   *  Gain: '<S20>/Revolutions to Radians'
   *  Inport: '<Root>/FrontLeft_Steer_Rev'
   *  Inport: '<Root>/FrontLeft_Turn_Offset'
   *  Math: '<S213>/Math Function'
   *  Sum: '<S20>/Add'
   *  Sum: '<S213>/Add2'
   */
  Code_Gen_Model_B.FL_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.FrontLeft_Steer_Rev -
       Code_Gen_Model_U.FrontLeft_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Product: '<S17>/Product' incorporates:
   *  Constant: '<S17>/Constant1'
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Rev'
   *  Sum: '<S141>/Diff'
   *  UnitDelay: '<S141>/UD'
   *
   * Block description for '<S141>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S141>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Switch2_ji = (Code_Gen_Model_U.FrontLeft_Drive_Motor_Rev -
                    Code_Gen_Model_DW.UD_DSTATE) * 0.049599071116336282;

  /* Sum: '<S214>/Add1' incorporates:
   *  Constant: '<S214>/Constant3'
   *  Constant: '<S214>/Constant4'
   *  Gain: '<S20>/Revolutions to Radians1'
   *  Inport: '<Root>/FrontRight_Steer_Rev'
   *  Inport: '<Root>/FrontRight_Turn_Offset'
   *  Math: '<S214>/Math Function'
   *  Sum: '<S20>/Add1'
   *  Sum: '<S214>/Add2'
   */
  Code_Gen_Model_B.FR_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.FrontRight_Steer_Rev -
       Code_Gen_Model_U.FrontRight_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Product: '<S17>/Product1' incorporates:
   *  Constant: '<S17>/Constant1'
   *  Inport: '<Root>/FrontRight_Drive_Motor_Rev'
   *  Sum: '<S142>/Diff'
   *  UnitDelay: '<S142>/UD'
   *
   * Block description for '<S142>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S142>/UD':
   *
   *  Store in Global RAM
   */
  rtb_uDLookupTable_l = (Code_Gen_Model_U.FrontRight_Drive_Motor_Rev -
    Code_Gen_Model_DW.UD_DSTATE_m) * 0.049599071116336282;

  /* Sum: '<S215>/Add1' incorporates:
   *  Constant: '<S215>/Constant3'
   *  Constant: '<S215>/Constant4'
   *  Gain: '<S20>/Revolutions to Radians2'
   *  Inport: '<Root>/BackLeft_Steer_Rev'
   *  Inport: '<Root>/BackLeft_Turn_Offset'
   *  Math: '<S215>/Math Function'
   *  Sum: '<S20>/Add2'
   *  Sum: '<S215>/Add2'
   */
  Code_Gen_Model_B.BL_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.BackLeft_Steer_Rev -
       Code_Gen_Model_U.BackLeft_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Product: '<S17>/Product2' incorporates:
   *  Constant: '<S17>/Constant1'
   *  Inport: '<Root>/BackLeft_Drive_Motor_Rev'
   *  Sum: '<S143>/Diff'
   *  UnitDelay: '<S143>/UD'
   *
   * Block description for '<S143>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S143>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Init = (Code_Gen_Model_U.BackLeft_Drive_Motor_Rev -
              Code_Gen_Model_DW.UD_DSTATE_i) * 0.049599071116336282;

  /* Sum: '<S216>/Add1' incorporates:
   *  Constant: '<S216>/Constant3'
   *  Constant: '<S216>/Constant4'
   *  Gain: '<S20>/Revolutions to Radians3'
   *  Inport: '<Root>/BackRight_Steer_Rev'
   *  Inport: '<Root>/BackRight_Turn_Offset'
   *  Math: '<S216>/Math Function'
   *  Sum: '<S20>/Add3'
   *  Sum: '<S216>/Add2'
   */
  Code_Gen_Model_B.BR_Steer_Module_Angle = rt_modd_snf
    (((Code_Gen_Model_U.BackRight_Steer_Rev -
       Code_Gen_Model_U.BackRight_Turn_Offset) * 6.2831853071795862) +
     3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;

  /* Product: '<S17>/Product3' incorporates:
   *  Constant: '<S17>/Constant1'
   *  Inport: '<Root>/BackRight_Drive_Motor_Rev'
   *  Sum: '<S144>/Diff'
   *  UnitDelay: '<S144>/UD'
   *
   * Block description for '<S144>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S144>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Add_o5 = (Code_Gen_Model_U.BackRight_Drive_Motor_Rev -
                Code_Gen_Model_DW.UD_DSTATE_c) * 0.049599071116336282;

  /* SignalConversion generated from: '<S17>/Product7' incorporates:
   *  Fcn: '<S145>/r->x'
   *  Fcn: '<S145>/theta->y'
   *  Fcn: '<S146>/r->x'
   *  Fcn: '<S146>/theta->y'
   *  Fcn: '<S147>/r->x'
   *  Fcn: '<S147>/theta->y'
   *  Fcn: '<S148>/r->x'
   *  Fcn: '<S148>/theta->y'
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

  /* Reshape: '<S86>/Reshapey' incorporates:
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

  /* Delay: '<S86>/MemoryX' incorporates:
   *  Constant: '<S86>/X0'
   */
  if (Code_Gen_Model_DW.icLoad) {
    Code_Gen_Model_DW.MemoryX_DSTATE[0] = 0.0;
    Code_Gen_Model_DW.MemoryX_DSTATE[1] = 0.0;
  }

  /* Switch: '<S11>/Switch1' incorporates:
   *  Constant: '<S11>/Constant2'
   *  Constant: '<S11>/Constant3'
   *  Inport: '<Root>/Gyro_Angle'
   *  RelationalOperator: '<S60>/FixPt Relational Operator'
   *  Sum: '<S11>/Sum'
   *  UnitDelay: '<S11>/Unit Delay1'
   *  UnitDelay: '<S60>/Delay Input1'
   *
   * Block description for '<S60>/Delay Input1':
   *
   *  Store in Global RAM
   */
  if (Gyro_Calibration_Reset_Flag > Code_Gen_Model_DW.DelayInput1_DSTATE) {
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

  /* Gain: '<S59>/Gain1' */
  Code_Gen_Model_B.Gyro_Angle_rad = 0.017453292519943295 *
    Code_Gen_Model_B.Gyro_Angle_Calibrated_deg;

  /* Switch: '<S11>/Switch' incorporates:
   *  Constant: '<S11>/Constant'
   *  Constant: '<S11>/Constant1'
   *  Inport: '<Root>/IsBlueAlliance'
   */
  if (Code_Gen_Model_U.IsBlueAlliance != 0.0) {
    rtb_Switch_l = 0.0;
  } else {
    rtb_Switch_l = 3.1415926535897931;
  }

  /* End of Switch: '<S11>/Switch' */

  /* Sum: '<S11>/Add' */
  Code_Gen_Model_B.Gyro_Angle_Field_rad = Code_Gen_Model_B.Gyro_Angle_rad +
    rtb_Switch_l;

  /* Trigonometry: '<S17>/Trigonometric Function1' */
  rtb_Switch2_g = sin(Code_Gen_Model_B.Gyro_Angle_Field_rad);

  /* SignalConversion generated from: '<S17>/Rotation matrix from local to global' incorporates:
   *  Trigonometry: '<S17>/Trigonometric Function'
   */
  rtb_Rotationmatrixfromlocalto_0 = cos(Code_Gen_Model_B.Gyro_Angle_Field_rad);
  rtb_Switch2_ji = rtb_Switch2_g;

  /* SignalConversion generated from: '<S17>/Rotation matrix from local to global' incorporates:
   *  UnaryMinus: '<S17>/Unary Minus'
   */
  rtb_Rotationmatrixfromlocalto_1 = -rtb_Switch2_g;

  /* Sum: '<S140>/Diff' incorporates:
   *  UnitDelay: '<S140>/UD'
   *
   * Block description for '<S140>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S140>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Add_o5 = Code_Gen_Model_B.Gyro_Angle_Field_rad -
    Code_Gen_Model_DW.UD_DSTATE_d;

  /* Sum: '<S17>/Subtract2' incorporates:
   *  Constant: '<S17>/Constant3'
   *  Gain: '<S17>/Gain7'
   *  Math: '<S17>/Square'
   */
  rtb_Switch2_g = 1.0 - ((rtb_Add_o5 * rtb_Add_o5) * 0.16666666666666666);

  /* Gain: '<S17>/Gain6' */
  rtb_Add_o5 *= 0.5;

  /* Product: '<S17>/Product7' incorporates:
   *  Constant: '<S17>/Constant4'
   */
  for (i = 0; i < 2; i++) {
    rtb_Minus_k_idx_0 = 0.0;
    tmp_0 = 0;
    for (i_0 = 0; i_0 < 8; i_0++) {
      rtb_Minus_k_idx_0 += Code_Gen_Model_ConstP.Constant4_Value[tmp_0 + i] *
        rtb_TmpSignalConversionAtProduc[i_0];
      tmp_0 += 2;
    }

    tmp[i] = rtb_Minus_k_idx_0;
  }

  /* End of Product: '<S17>/Product7' */

  /* Product: '<S17>/Product6' incorporates:
   *  SignalConversion generated from: '<S17>/POSE exponential matrix for improved accuracy while rotating'
   *  UnaryMinus: '<S17>/Unary Minus2'
   */
  rtb_Switch_b5 = (rtb_Switch2_g * tmp[0]) + ((-rtb_Add_o5) * tmp[1]);
  rtb_Add_o5 = (rtb_Add_o5 * tmp[0]) + (rtb_Switch2_g * tmp[1]);

  /* Product: '<S17>/Product6' incorporates:
   *  Concatenate: '<S17>/Rotation matrix from local to global'
   */
  Code_Gen_Model_B.Product6[0] = (rtb_Rotationmatrixfromlocalto_0 *
    rtb_Switch_b5) + (rtb_Rotationmatrixfromlocalto_1 * rtb_Add_o5);
  Code_Gen_Model_B.Product6[1] = (rtb_Switch2_ji * rtb_Switch_b5) +
    (rtb_Rotationmatrixfromlocalto_0 * rtb_Add_o5);

  /* Outputs for Enabled SubSystem: '<S113>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S139>/Enable'
   */
  /* Outputs for Enabled SubSystem: '<S106>/MeasurementUpdate' incorporates:
   *  EnablePort: '<S137>/Enable'
   */
  /* Logic: '<S14>/AND' incorporates:
   *  Constant: '<S14>/Constant'
   *  Constant: '<S14>/Constant1'
   *  Inport: '<Root>/Num_Tags_Detected'
   *  RelationalOperator: '<S14>/Relational Operator'
   */
  if ((Code_Gen_Model_U.Num_Tags_Detected > 0.0) && (KF_Enable != 0.0)) {
    Code_Gen_Model_DW.MeasurementUpdate_MODE = true;

    /* Product: '<S137>/C[k]*xhat[k|k-1]' incorporates:
     *  Constant: '<S86>/C'
     *  Delay: '<S86>/MemoryX'
     *  Product: '<S139>/Product'
     */
    rtb_Switch2_g = (0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[1]) +
      Code_Gen_Model_DW.MemoryX_DSTATE[0];
    rtb_Minus_n[0] = rtb_Switch2_g;

    /* Sum: '<S137>/Sum' incorporates:
     *  Constant: '<S86>/D'
     *  Product: '<S137>/C[k]*xhat[k|k-1]'
     *  Product: '<S137>/D[k]*u[k]'
     *  Sum: '<S137>/Add1'
     */
    rtb_Switch2_ji = (0.0 * Code_Gen_Model_B.Product6[0]) + (0.0 *
      Code_Gen_Model_B.Product6[1]);
    rtb_Add_o5 = rtb_Reshapey[0] - (rtb_Switch2_ji + rtb_Switch2_g);

    /* Product: '<S137>/C[k]*xhat[k|k-1]' incorporates:
     *  Constant: '<S86>/C'
     *  Delay: '<S86>/MemoryX'
     *  Product: '<S139>/Product'
     */
    rtb_Switch2_g = (0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[0]) +
      Code_Gen_Model_DW.MemoryX_DSTATE[1];
    rtb_Minus_n[1] = rtb_Switch2_g;

    /* Sum: '<S137>/Sum' incorporates:
     *  Constant: '<S86>/D'
     *  Product: '<S137>/C[k]*xhat[k|k-1]'
     *  Product: '<S137>/D[k]*u[k]'
     *  Sum: '<S137>/Add1'
     */
    rtb_Switch2_g = rtb_Reshapey[1] - (rtb_Switch2_ji + rtb_Switch2_g);
    Code_Gen_Model_DW.EnabledSubsystem_MODE = true;

    /* Product: '<S137>/Product3' incorporates:
     *  Constant: '<S87>/KalmanGainL'
     */
    Code_Gen_Model_B.Product3[0] = (0.0951249219725039 * rtb_Add_o5) +
      (-2.0601714451538746E-17 * rtb_Switch2_g);

    /* Sum: '<S139>/Add1' incorporates:
     *  Product: '<S139>/Product'
     */
    rtb_Switch2_ji = rtb_Reshapey[0] - rtb_Minus_n[0];

    /* Product: '<S137>/Product3' incorporates:
     *  Constant: '<S87>/KalmanGainL'
     */
    Code_Gen_Model_B.Product3[1] = (1.304610855474728E-16 * rtb_Add_o5) +
      (0.095124921972504 * rtb_Switch2_g);

    /* Sum: '<S139>/Add1' incorporates:
     *  Product: '<S139>/Product'
     */
    rtb_Switch2_g = rtb_Reshapey[1] - rtb_Minus_n[1];

    /* Product: '<S139>/Product2' incorporates:
     *  Constant: '<S87>/KalmanGainM'
     */
    Code_Gen_Model_B.Product2[0] = (0.09512492197250387 * rtb_Switch2_ji) +
      (5.9896845167210271E-17 * rtb_Switch2_g);
    Code_Gen_Model_B.Product2[1] = (5.9896845167210271E-17 * rtb_Switch2_ji) +
      (0.095124921972503981 * rtb_Switch2_g);
  } else {
    if (Code_Gen_Model_DW.MeasurementUpdate_MODE) {
      /* Disable for Product: '<S137>/Product3' incorporates:
       *  Outport: '<S137>/L*(y[k]-yhat[k|k-1])'
       */
      Code_Gen_Model_B.Product3[0] = 0.0;
      Code_Gen_Model_B.Product3[1] = 0.0;
      Code_Gen_Model_DW.MeasurementUpdate_MODE = false;
    }

    if (Code_Gen_Model_DW.EnabledSubsystem_MODE) {
      /* Disable for Product: '<S139>/Product2' incorporates:
       *  Outport: '<S139>/deltax'
       */
      Code_Gen_Model_B.Product2[0] = 0.0;
      Code_Gen_Model_B.Product2[1] = 0.0;
      Code_Gen_Model_DW.EnabledSubsystem_MODE = false;
    }
  }

  /* End of Logic: '<S14>/AND' */
  /* End of Outputs for SubSystem: '<S106>/MeasurementUpdate' */
  /* End of Outputs for SubSystem: '<S113>/Enabled Subsystem' */

  /* Sum: '<S113>/Add' incorporates:
   *  Delay: '<S86>/MemoryX'
   */
  rtb_Reshapey[0] = Code_Gen_Model_B.Product2[0] +
    Code_Gen_Model_DW.MemoryX_DSTATE[0];
  rtb_Reshapey[1] = Code_Gen_Model_B.Product2[1] +
    Code_Gen_Model_DW.MemoryX_DSTATE[1];

  /* DiscreteIntegrator: '<S17>/Accumulator2' incorporates:
   *  Constant: '<S17>/Constant'
   *  Constant: '<S1>/Constant'
   */
  if ((Odometry_Reset_IC > 0.0) &&
      (Code_Gen_Model_DW.Accumulator2_PrevResetState <= 0)) {
    Code_Gen_Model_DW.Accumulator2_DSTATE = Odometry_IC_X;
  }

  /* DiscreteIntegrator: '<S17>/Accumulator2' */
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

  /* DiscreteIntegrator: '<S17>/Accumulator' incorporates:
   *  Constant: '<S17>/Constant'
   *  Constant: '<S1>/Constant1'
   */
  if ((Odometry_Reset_IC > 0.0) && (Code_Gen_Model_DW.Accumulator_PrevResetState
       <= 0)) {
    Code_Gen_Model_DW.Accumulator_DSTATE = Odometry_IC_Y;
  }

  /* DiscreteIntegrator: '<S17>/Accumulator' */
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

  /* RelationalOperator: '<S83>/FixPt Relational Operator' incorporates:
   *  Inport: '<Root>/Joystick_Left_B11'
   *  UnitDelay: '<S83>/Delay Input1'
   *
   * Block description for '<S83>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_B.Button_Enable_Wheels = (Code_Gen_Model_U.Joystick_Left_B11 >
    Code_Gen_Model_DW.DelayInput1_DSTATE_n);

  /* RelationalOperator: '<S84>/FixPt Relational Operator' incorporates:
   *  Inport: '<Root>/Joystick_Left_B12'
   *  UnitDelay: '<S84>/Delay Input1'
   *
   * Block description for '<S84>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_B.Button_Reset_Wheel_Offsets =
    (Code_Gen_Model_U.Joystick_Left_B12 > Code_Gen_Model_DW.DelayInput1_DSTATE_e);

  /* RelationalOperator: '<S85>/FixPt Relational Operator' incorporates:
   *  Inport: '<Root>/Joystick_Left_B13'
   *  UnitDelay: '<S85>/Delay Input1'
   *
   * Block description for '<S85>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_B.Button_Disable_Wheels = (Code_Gen_Model_U.Joystick_Left_B13 >
    Code_Gen_Model_DW.DelayInput1_DSTATE_nj);

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

  /* RelationalOperator: '<S68>/Compare' incorporates:
   *  Constant: '<S68>/Constant'
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

  /* RelationalOperator: '<S78>/Compare' incorporates:
   *  Constant: '<S78>/Constant'
   *  Inport: '<Root>/Joystick_Left_B1'
   */
  Code_Gen_Model_B.Is_Boosting = (Code_Gen_Model_U.Joystick_Left_B1 != 0.0);

  /* RelationalOperator: '<S66>/Compare' incorporates:
   *  Constant: '<S66>/Constant'
   *  Inport: '<Root>/Joystick_Right_POV'
   */
  Code_Gen_Model_B.Face_Toward_Driver = (Code_Gen_Model_U.Joystick_Right_POV ==
    180.0);

  /* RelationalOperator: '<S67>/Compare' incorporates:
   *  Constant: '<S67>/Constant'
   *  Inport: '<Root>/Joystick_Right_POV'
   */
  Code_Gen_Model_B.Face_Right_Driver = (Code_Gen_Model_U.Joystick_Right_POV ==
    90.0);

  /* RelationalOperator: '<S69>/Compare' incorporates:
   *  Constant: '<S69>/Constant'
   *  Inport: '<Root>/Joystick_Right_POV'
   */
  Code_Gen_Model_B.Face_Left_Driver = (Code_Gen_Model_U.Joystick_Right_POV ==
    270.0);

  /* RelationalOperator: '<S62>/Compare' incorporates:
   *  Constant: '<S62>/Constant'
   *  Inport: '<Root>/Joystick_Right_POV'
   */
  Code_Gen_Model_B.Face_Away_Driver = (Code_Gen_Model_U.Joystick_Right_POV ==
    0.0);

  /* Sum: '<S15>/Add' incorporates:
   *  Constant: '<S15>/Constant'
   *  Gain: '<S15>/Convert meters to inches1'
   *  Inport: '<Root>/Limelight_Tag_X'
   */
  Code_Gen_Model_B.Limelight_Tag_Corrected_X = (39.37008 *
    Code_Gen_Model_U.Limelight_Tag_X) + Limelight_Tag_X_Offset;

  /* Sum: '<S15>/Add1' incorporates:
   *  Constant: '<S15>/Constant1'
   *  Gain: '<S15>/Convert meters to inches'
   *  Inport: '<Root>/Limelight_Tag_Y'
   */
  Code_Gen_Model_B.Limelight_Tag_Corrected_Y = (39.37008 *
    Code_Gen_Model_U.Limelight_Tag_Y) + Limelight_Tag_Y_Offset;

  /* Sum: '<S15>/Add2' incorporates:
   *  Constant: '<S15>/Constant2'
   *  Inport: '<Root>/Limelight_Tag_Angle'
   */
  Code_Gen_Model_B.Limelight_Tag_Corrected_Angle =
    Code_Gen_Model_U.Limelight_Tag_Angle + Limelight_Tag_Angle_Offset;

  /* RelationalOperator: '<S76>/Compare' incorporates:
   *  Constant: '<S76>/Constant'
   *  Inport: '<Root>/Joystick_Left_B3'
   */
  Code_Gen_Model_B.Align_Left = (Code_Gen_Model_U.Joystick_Left_B3 != 0.0);

  /* RelationalOperator: '<S75>/Compare' incorporates:
   *  Constant: '<S75>/Constant'
   *  Inport: '<Root>/Joystick_Left_B4'
   */
  Code_Gen_Model_B.Align_Right = (Code_Gen_Model_U.Joystick_Left_B4 != 0.0);

  /* RelationalOperator: '<S77>/Compare' incorporates:
   *  Constant: '<S77>/Constant'
   *  Inport: '<Root>/Joystick_Left_B2'
   */
  Code_Gen_Model_B.Align_Center = (Code_Gen_Model_U.Joystick_Left_B2 != 0.0);

  /* RelationalOperator: '<S74>/Compare' incorporates:
   *  Constant: '<S74>/Constant'
   *  Inport: '<Root>/Joystick_Right_B2'
   */
  Code_Gen_Model_B.Coral_Station_Left = (Code_Gen_Model_U.Joystick_Right_B2 !=
    0.0);

  /* RelationalOperator: '<S73>/Compare' incorporates:
   *  Constant: '<S73>/Constant'
   *  Inport: '<Root>/Joystick_Right_B3'
   */
  Code_Gen_Model_B.Coral_Station_Right = (Code_Gen_Model_U.Joystick_Right_B3 !=
    0.0);

  /* RelationalOperator: '<S72>/Compare' incorporates:
   *  Constant: '<S72>/Constant'
   *  Inport: '<Root>/Joystick_Right_B4'
   */
  Code_Gen_Model_B.Processor = (Code_Gen_Model_U.Joystick_Right_B4 != 0.0);

  /* RelationalOperator: '<S70>/Compare' incorporates:
   *  Constant: '<S70>/Constant'
   *  Inport: '<Root>/Joystick_Right_B7'
   */
  Code_Gen_Model_B.Cage_Left_Start = (Code_Gen_Model_U.Joystick_Right_B7 != 0.0);

  /* RelationalOperator: '<S71>/Compare' incorporates:
   *  Constant: '<S71>/Constant'
   *  Inport: '<Root>/Joystick_Right_B6'
   */
  Code_Gen_Model_B.Cage_Middle_Start = (Code_Gen_Model_U.Joystick_Right_B6 !=
    0.0);

  /* RelationalOperator: '<S79>/Compare' incorporates:
   *  Constant: '<S79>/Constant'
   *  Inport: '<Root>/Joystick_Right_B5'
   */
  Code_Gen_Model_B.Cage_Right_Start = (Code_Gen_Model_U.Joystick_Right_B5 != 0.0);

  /* RelationalOperator: '<S80>/Compare' incorporates:
   *  Constant: '<S80>/Constant'
   *  Inport: '<Root>/Joystick_Right_B8'
   */
  Code_Gen_Model_B.Cage_Left_Finish = (Code_Gen_Model_U.Joystick_Right_B8 != 0.0);

  /* RelationalOperator: '<S81>/Compare' incorporates:
   *  Constant: '<S81>/Constant'
   *  Inport: '<Root>/Joystick_Right_B9'
   */
  Code_Gen_Model_B.Cage_Middle_Finish = (Code_Gen_Model_U.Joystick_Right_B9 !=
    0.0);

  /* RelationalOperator: '<S82>/Compare' incorporates:
   *  Constant: '<S82>/Constant'
   *  Inport: '<Root>/Joystick_Right_B10'
   */
  Code_Gen_Model_B.Cage_Right_Finish = (Code_Gen_Model_U.Joystick_Right_B10 !=
    0.0);

  /* RelationalOperator: '<S61>/Compare' incorporates:
   *  Constant: '<S61>/Constant'
   *  Inport: '<Root>/Gamepad_POV'
   */
  Code_Gen_Model_B.Gamepad_POV_Up = (Code_Gen_Model_U.Gamepad_POV == 0.0);

  /* RelationalOperator: '<S63>/Compare' incorporates:
   *  Constant: '<S63>/Constant'
   *  Inport: '<Root>/Gamepad_POV'
   */
  Code_Gen_Model_B.Gamepad_POV_Down = (Code_Gen_Model_U.Gamepad_POV == 180.0);

  /* RelationalOperator: '<S65>/Compare' incorporates:
   *  Constant: '<S65>/Constant'
   *  Inport: '<Root>/Gamepad_POV'
   */
  Code_Gen_Model_B.Gamepad_POV_Left = (Code_Gen_Model_U.Gamepad_POV == 270.0);

  /* RelationalOperator: '<S64>/Compare' incorporates:
   *  Constant: '<S64>/Constant'
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
   *  RelationalOperator: '<S56>/FixPt Relational Operator'
   *  RelationalOperator: '<S57>/FixPt Relational Operator'
   *  RelationalOperator: '<S58>/FixPt Relational Operator'
   *  Switch: '<S10>/Switch2'
   *  Switch: '<S10>/Switch3'
   *  UnitDelay: '<S1>/Unit Delay'
   *  UnitDelay: '<S56>/Delay Input1'
   *  UnitDelay: '<S57>/Delay Input1'
   *  UnitDelay: '<S58>/Delay Input1'
   *
   * Block description for '<S56>/Delay Input1':
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
     *  ActionPort: '<S8>/Action Port'
     */
    /* Merge: '<S16>/Merge1' incorporates:
     *  Constant: '<S8>/Constant1'
     *  SignalConversion generated from: '<S8>/Steering_Abs_Cmd'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd = 0.0;

    /* Merge: '<S16>/Merge2' incorporates:
     *  Constant: '<S8>/Constant2'
     *  SignalConversion generated from: '<S8>/Steering_Rel_Cmd'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd = 0.0;

    /* Merge: '<S16>/Merge3' incorporates:
     *  Constant: '<S8>/Constant3'
     *  SignalConversion generated from: '<S8>/Translation_Angle'
     */
    Code_Gen_Model_B.Translation_Angle = 0.0;

    /* Merge: '<S16>/Merge4' incorporates:
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

    /* Merge: '<S16>/Merge7' incorporates:
     *  Constant: '<S8>/Constant7'
     *  SignalConversion generated from: '<S8>/Spline_Enable'
     */
    Code_Gen_Model_B.Spline_Enable = false;

    /* Merge: '<S16>/Merge9' incorporates:
     *  Constant: '<S8>/Constant9'
     *  SignalConversion generated from: '<S8>/Spline_Num_Poses'
     */
    Code_Gen_Model_B.Spline_Num_Poses = 10.0;

    /* Merge: '<S16>/Merge10' incorporates:
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
    rtb_Reset_Wheel_Offsets = 0.0;

    /* SignalConversion generated from: '<S8>/Disable_Wheels' incorporates:
     *  Constant: '<S8>/Constant14'
     */
    rtb_Disable_Wheels = 0.0;

    /* SignalConversion generated from: '<S8>/Swerve_Motors_Disabled' incorporates:
     *  Constant: '<S8>/Constant12'
     */
    rtb_Swerve_Motors_Disabled = false;

    /* Merge: '<S16>/Merge12' incorporates:
     *  Constant: '<S8>/Constant15'
     *  SignalConversion generated from: '<S8>/Reefscape_Motors_Enable'
     */
    Code_Gen_Model_B.Reefscape_Motors_Enable = false;

    /* Merge: '<S16>/Merge11' incorporates:
     *  Constant: '<S8>/Constant11'
     *  SignalConversion generated from: '<S8>/Elevator_Height_Desired'
     */
    Code_Gen_Model_B.Elevator_Height_Desired = 0.0;

    /* Merge: '<S16>/Merge13' incorporates:
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

    /* Merge: '<S16>/Merge21' incorporates:
     *  Constant: '<S8>/Constant21'
     *  SignalConversion generated from: '<S8>/Elevator_LowerPickup_Reset'
     */
    Code_Gen_Model_B.Elevator_LowerPickup_Reset_tp = false;

    /* SignalConversion generated from: '<S8>/Coral_Pickup_Lower_Wait_State' incorporates:
     *  Constant: '<S8>/Constant22'
     */
    rtb_Compare_kw = false;

    /* Merge: '<S16>/Merge23' incorporates:
     *  Constant: '<S8>/Constant23'
     *  SignalConversion generated from: '<S8>/Swerve_Drive_Integral_Enable'
     */
    Code_Gen_Model_B.Swerve_Drive_Integral_Enable = false;

    /* End of Outputs for SubSystem: '<S1>/Disabled' */
    break;

   case 1:
    /* Outputs for IfAction SubSystem: '<S1>/Autonomous' incorporates:
     *  ActionPort: '<S2>/Action Port'
     */
    /* Merge: '<S16>/Merge1' incorporates:
     *  Constant: '<S2>/Constant10'
     *  SignalConversion generated from: '<S2>/Steering_Abs_Cmd'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd = 0.0;

    /* Merge: '<S16>/Merge2' incorporates:
     *  Constant: '<S2>/Constant2'
     *  SignalConversion generated from: '<S2>/Steering_Rel_Cmd'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd = 0.0;

    /* Merge: '<S16>/Merge3' incorporates:
     *  Constant: '<S2>/Constant7'
     *  SignalConversion generated from: '<S2>/Translation_Angle'
     */
    Code_Gen_Model_B.Translation_Angle = 0.0;

    /* Merge: '<S16>/Merge4' incorporates:
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

    /* Merge: '<S16>/Merge7' incorporates:
     *  Constant: '<S2>/Constant6'
     *  SignalConversion generated from: '<S2>/Spline_Enable'
     */
    Code_Gen_Model_B.Spline_Enable = false;

    /* Merge: '<S16>/Merge9' incorporates:
     *  Constant: '<S2>/Constant16'
     *  SignalConversion generated from: '<S2>/Spline_Num_Poses'
     */
    Code_Gen_Model_B.Spline_Num_Poses = 10.0;

    /* Merge: '<S16>/Merge10' incorporates:
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

    /* Merge: '<S16>/Merge12' incorporates:
     *  Constant: '<S2>/Constant12'
     *  SignalConversion generated from: '<S2>/Reefscape_Motors_Enable'
     */
    Code_Gen_Model_B.Reefscape_Motors_Enable = false;

    /* Merge: '<S16>/Merge11' incorporates:
     *  Constant: '<S2>/Constant11'
     *  SignalConversion generated from: '<S2>/Elevator_Height_Desired'
     */
    Code_Gen_Model_B.Elevator_Height_Desired = 0.0;

    /* Merge: '<S16>/Merge13' incorporates:
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

    /* Merge: '<S16>/Merge21' incorporates:
     *  Constant: '<S2>/Constant21'
     *  SignalConversion generated from: '<S2>/Elevator_LowerPickup_Reset'
     */
    Code_Gen_Model_B.Elevator_LowerPickup_Reset_tp = false;

    /* SignalConversion generated from: '<S2>/Coral_Pickup_Lower_Wait_State' incorporates:
     *  Constant: '<S2>/Constant22'
     */
    rtb_Compare_kw = false;

    /* Merge: '<S16>/Merge23' incorporates:
     *  Constant: '<S2>/Constant23'
     *  SignalConversion generated from: '<S2>/Swerve_Drive_Integral_Enable'
     */
    Code_Gen_Model_B.Swerve_Drive_Integral_Enable = false;

    /* End of Outputs for SubSystem: '<S1>/Autonomous' */
    break;

   case 2:
    if (rtAction != rtPrevAction) {
      /* InitializeConditions for IfAction SubSystem: '<S1>/Teleop' incorporates:
       *  ActionPort: '<S22>/Action Port'
       */
      /* InitializeConditions for SwitchCase: '<S1>/Switch Case' incorporates:
       *  UnitDelay: '<S367>/Unit Delay1'
       *  UnitDelay: '<S368>/Unit Delay'
       *  UnitDelay: '<S368>/Unit Delay1'
       *  UnitDelay: '<S390>/Unit Delay1'
       *  UnitDelay: '<S390>/Unit Delay2'
       *  UnitDelay: '<S390>/Unit Delay3'
       *  UnitDelay: '<S390>/Unit Delay4'
       *  UnitDelay: '<S393>/Delay Input1'
       *  UnitDelay: '<S394>/Delay Input1'
       *  UnitDelay: '<S395>/Delay Input1'
       *  UnitDelay: '<S396>/Delay Input1'
       *  UnitDelay: '<S397>/Delay Input1'
       *  UnitDelay: '<S398>/Delay Input1'
       *  UnitDelay: '<S404>/Unit Delay'
       *  UnitDelay: '<S404>/Unit Delay1'
       *  UnitDelay: '<S408>/FixPt Unit Delay1'
       *  UnitDelay: '<S408>/FixPt Unit Delay2'
       *  UnitDelay: '<S411>/Delay Input1'
       *  UnitDelay: '<S412>/Delay Input1'
       *  UnitDelay: '<S413>/Delay Input1'
       *  UnitDelay: '<S414>/Delay Input1'
       *  UnitDelay: '<S415>/Delay Input1'
       *  UnitDelay: '<S416>/Delay Input1'
       *  UnitDelay: '<S417>/Delay Input1'
       *  UnitDelay: '<S418>/Delay Input1'
       *  UnitDelay: '<S419>/Delay Input1'
       *  UnitDelay: '<S420>/Delay Input1'
       *  UnitDelay: '<S421>/Delay Input1'
       *  UnitDelay: '<S422>/Delay Input1'
       *  UnitDelay: '<S423>/Delay Input1'
       *
       * Block description for '<S393>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S394>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S395>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S396>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S397>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S398>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S411>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S412>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S413>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S414>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S415>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S416>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S417>/Delay Input1':
       *
       *  Store in Global RAM
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
       * Block description for '<S422>/Delay Input1':
       *
       *  Store in Global RAM
       *
       * Block description for '<S423>/Delay Input1':
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
      Code_Gen_Model_DW.UnitDelay_DSTATE_kq = 0.0;
      Code_Gen_Model_DW.UnitDelay1_DSTATE_nr = 0.0;
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
       *  ActionPort: '<S22>/Action Port'
       */
      /* SystemReset for SwitchCase: '<S1>/Switch Case' incorporates:
       *  Chart: '<S370>/Reefscape_Chart'
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
      Code_Gen_Model_B.Set_Coral_Level = 0U;
      Code_Gen_Model_B.Set_Algae_Level = 0U;

      /* End of SystemReset for SubSystem: '<S1>/Teleop' */
    }

    /* Outputs for IfAction SubSystem: '<S1>/Teleop' incorporates:
     *  ActionPort: '<S22>/Action Port'
     */
    /* Logic: '<S367>/Logical Operator8' incorporates:
     *  Inport: '<Root>/IsBlueAlliance'
     */
    rtb_Swerve_Motors_Disabled = ((Code_Gen_Model_B.Cage_Left_Start) &&
      (Code_Gen_Model_U.IsBlueAlliance != 0.0));

    /* Logic: '<S367>/Logical Operator10' incorporates:
     *  Inport: '<Root>/IsBlueAlliance'
     */
    rtb_Compare_kw = !(Code_Gen_Model_U.IsBlueAlliance != 0.0);

    /* Logic: '<S367>/Logical Operator9' */
    rtb_Is_Absolute_Steering = ((Code_Gen_Model_B.Cage_Left_Start) &&
      rtb_Compare_kw);

    /* Logic: '<S367>/Logical Operator7' incorporates:
     *  Inport: '<Root>/IsBlueAlliance'
     */
    rtb_Is_Absolute_Translation_g = ((Code_Gen_Model_B.Cage_Middle_Start) &&
      (Code_Gen_Model_U.IsBlueAlliance != 0.0));

    /* Logic: '<S367>/Logical Operator12' */
    rtb_AT_Cage_Middle_Start_Red_Ac = ((Code_Gen_Model_B.Cage_Middle_Start) &&
      rtb_Compare_kw);

    /* Logic: '<S367>/Logical Operator13' incorporates:
     *  Inport: '<Root>/IsBlueAlliance'
     */
    rtb_AT_Cage_Right_Start_Blue_Ac = ((Code_Gen_Model_B.Cage_Right_Start) &&
      (Code_Gen_Model_U.IsBlueAlliance != 0.0));

    /* Logic: '<S367>/Logical Operator14' */
    rtb_AT_Cage_Right_Start_Red_Act = ((Code_Gen_Model_B.Cage_Right_Start) &&
      rtb_Compare_kw);

    /* Logic: '<S367>/Logical Operator19' incorporates:
     *  Inport: '<Root>/IsBlueAlliance'
     */
    rtb_AT_Cage_Left_Finish_Blue_Ac = ((Code_Gen_Model_B.Cage_Left_Finish) &&
      (Code_Gen_Model_U.IsBlueAlliance != 0.0));

    /* Logic: '<S367>/Logical Operator20' */
    rtb_AT_Cage_Left_Finish_Red_Act = ((Code_Gen_Model_B.Cage_Left_Finish) &&
      rtb_Compare_kw);

    /* Logic: '<S367>/Logical Operator18' incorporates:
     *  Inport: '<Root>/IsBlueAlliance'
     */
    rtb_AT_Cage_Middle_Finish_Blue_ = ((Code_Gen_Model_B.Cage_Middle_Finish) &&
      (Code_Gen_Model_U.IsBlueAlliance != 0.0));

    /* Logic: '<S367>/Logical Operator15' */
    rtb_AT_Cage_Middle_Finish_Red_A = ((Code_Gen_Model_B.Cage_Middle_Finish) &&
      rtb_Compare_kw);

    /* Logic: '<S367>/Logical Operator16' incorporates:
     *  Inport: '<Root>/IsBlueAlliance'
     */
    rtb_AT_Cage_Right_Finish_Blue_A = ((Code_Gen_Model_B.Cage_Right_Finish) &&
      (Code_Gen_Model_U.IsBlueAlliance != 0.0));

    /* Logic: '<S367>/Logical Operator17' */
    rtb_AT_Cage_Right_Finish_Red_Ac = ((Code_Gen_Model_B.Cage_Right_Finish) &&
      rtb_Compare_kw);

    /* Logic: '<S367>/Logical Operator6' */
    rtb_AT_Processor_Red_Active = ((Code_Gen_Model_B.Processor) &&
      rtb_Compare_kw);

    /* Logic: '<S367>/Logical Operator5' incorporates:
     *  Inport: '<Root>/IsBlueAlliance'
     */
    rtb_AT_Processor_Blue_Active = ((Code_Gen_Model_B.Processor) &&
      (Code_Gen_Model_U.IsBlueAlliance != 0.0));

    /* Logic: '<S367>/Logical Operator4' */
    rtb_AT_CS_Right_Red_Active = ((Code_Gen_Model_B.Coral_Station_Right) &&
      rtb_Compare_kw);

    /* Logic: '<S367>/Logical Operator1' incorporates:
     *  Inport: '<Root>/IsBlueAlliance'
     */
    rtb_AT_CS_Right_Blue_Active = ((Code_Gen_Model_B.Coral_Station_Right) &&
      (Code_Gen_Model_U.IsBlueAlliance != 0.0));

    /* Logic: '<S367>/Logical Operator3' */
    rtb_AT_CS_Left_Red_Active = ((Code_Gen_Model_B.Coral_Station_Left) &&
      rtb_Compare_kw);

    /* Logic: '<S367>/Logical Operator2' incorporates:
     *  Inport: '<Root>/IsBlueAlliance'
     */
    rtb_Compare_kw = ((Code_Gen_Model_B.Coral_Station_Left) &&
                      (Code_Gen_Model_U.IsBlueAlliance != 0.0));

    /* Switch: '<S367>/Switch2' incorporates:
     *  Switch: '<S367>/Switch1'
     *  Switch: '<S367>/Switch10'
     *  Switch: '<S367>/Switch12'
     *  Switch: '<S367>/Switch13'
     *  Switch: '<S367>/Switch14'
     *  Switch: '<S367>/Switch16'
     *  Switch: '<S367>/Switch19'
     *  Switch: '<S367>/Switch20'
     *  Switch: '<S367>/Switch21'
     *  Switch: '<S367>/Switch22'
     *  Switch: '<S367>/Switch24'
     *  Switch: '<S367>/Switch3'
     *  Switch: '<S367>/Switch30'
     *  Switch: '<S367>/Switch4'
     */
    if (rtb_Compare_kw) {
      /* Switch: '<S367>/Switch2' incorporates:
       *  Constant: '<S367>/Constant9'
       *  Sum: '<S367>/Add17'
       */
      Code_Gen_Model_B.AT_Field_Error_X = AT_CS_L_X_Blue -
        Code_Gen_Model_B.KF_Position_X;

      /* Switch: '<S367>/Switch4' incorporates:
       *  Constant: '<S367>/Constant28'
       *  Sum: '<S367>/Add23'
       */
      Code_Gen_Model_B.AT_Field_Error_Y = AT_CS_L_Y_Blue -
        Code_Gen_Model_B.KF_Position_Y;
    } else if (rtb_AT_CS_Left_Red_Active) {
      /* Switch: '<S367>/Switch2' incorporates:
       *  Constant: '<S367>/Constant5'
       *  Sum: '<S367>/Add16'
       *  Switch: '<S367>/Switch16'
       */
      Code_Gen_Model_B.AT_Field_Error_X = AT_CS_L_X_Red -
        Code_Gen_Model_B.KF_Position_X;

      /* Switch: '<S367>/Switch4' incorporates:
       *  Constant: '<S367>/Constant27'
       *  Sum: '<S367>/Add22'
       *  Switch: '<S367>/Switch24'
       */
      Code_Gen_Model_B.AT_Field_Error_Y = AT_CS_L_Y_Red -
        Code_Gen_Model_B.KF_Position_Y;
    } else if (rtb_AT_CS_Right_Blue_Active) {
      /* Switch: '<S367>/Switch2' incorporates:
       *  Constant: '<S367>/Constant4'
       *  Sum: '<S367>/Add10'
       *  Switch: '<S367>/Switch1'
       *  Switch: '<S367>/Switch16'
       */
      Code_Gen_Model_B.AT_Field_Error_X = AT_CS_R_X_Blue -
        Code_Gen_Model_B.KF_Position_X;

      /* Switch: '<S367>/Switch4' incorporates:
       *  Constant: '<S367>/Constant26'
       *  Sum: '<S367>/Add12'
       *  Switch: '<S367>/Switch19'
       *  Switch: '<S367>/Switch24'
       */
      Code_Gen_Model_B.AT_Field_Error_Y = AT_CS_R_Y_Blue -
        Code_Gen_Model_B.KF_Position_Y;
    } else if (rtb_AT_CS_Right_Red_Active) {
      /* Switch: '<S367>/Switch2' incorporates:
       *  Constant: '<S367>/Constant17'
       *  Sum: '<S367>/Add11'
       *  Switch: '<S367>/Switch1'
       *  Switch: '<S367>/Switch12'
       *  Switch: '<S367>/Switch16'
       */
      Code_Gen_Model_B.AT_Field_Error_X = AT_CS_R_X_Red -
        Code_Gen_Model_B.KF_Position_X;

      /* Switch: '<S367>/Switch4' incorporates:
       *  Constant: '<S367>/Constant3'
       *  Sum: '<S367>/Add13'
       *  Switch: '<S367>/Switch19'
       *  Switch: '<S367>/Switch20'
       *  Switch: '<S367>/Switch24'
       */
      Code_Gen_Model_B.AT_Field_Error_Y = AT_CS_R_Y_Red -
        Code_Gen_Model_B.KF_Position_Y;
    } else if (rtb_AT_Processor_Blue_Active) {
      /* Switch: '<S367>/Switch2' incorporates:
       *  Constant: '<S367>/Constant18'
       *  Sum: '<S367>/Add14'
       *  Switch: '<S367>/Switch1'
       *  Switch: '<S367>/Switch12'
       *  Switch: '<S367>/Switch13'
       *  Switch: '<S367>/Switch16'
       */
      Code_Gen_Model_B.AT_Field_Error_X = AT_Processor_X_Blue -
        Code_Gen_Model_B.KF_Position_X;

      /* Switch: '<S367>/Switch4' incorporates:
       *  Constant: '<S367>/Constant21'
       *  Sum: '<S367>/Add20'
       *  Switch: '<S367>/Switch19'
       *  Switch: '<S367>/Switch20'
       *  Switch: '<S367>/Switch21'
       *  Switch: '<S367>/Switch24'
       */
      Code_Gen_Model_B.AT_Field_Error_Y = AT_Processor_Y_Blue -
        Code_Gen_Model_B.KF_Position_Y;
    } else if (rtb_AT_Processor_Red_Active) {
      /* Switch: '<S367>/Switch2' incorporates:
       *  Constant: '<S367>/Constant19'
       *  Sum: '<S367>/Add15'
       *  Switch: '<S367>/Switch1'
       *  Switch: '<S367>/Switch12'
       *  Switch: '<S367>/Switch13'
       *  Switch: '<S367>/Switch14'
       *  Switch: '<S367>/Switch16'
       */
      Code_Gen_Model_B.AT_Field_Error_X = AT_Processor_X_Red -
        Code_Gen_Model_B.KF_Position_X;

      /* Switch: '<S367>/Switch4' incorporates:
       *  Constant: '<S367>/Constant23'
       *  Sum: '<S367>/Add21'
       *  Switch: '<S367>/Switch19'
       *  Switch: '<S367>/Switch20'
       *  Switch: '<S367>/Switch21'
       *  Switch: '<S367>/Switch22'
       *  Switch: '<S367>/Switch24'
       */
      Code_Gen_Model_B.AT_Field_Error_Y = AT_Processor_Y_Red -
        Code_Gen_Model_B.KF_Position_Y;
    } else if (rtb_Swerve_Motors_Disabled) {
      /* Switch: '<S367>/Switch2' incorporates:
       *  Constant: '<S367>/Constant7'
       *  Sum: '<S367>/Add1'
       *  Switch: '<S367>/Switch1'
       *  Switch: '<S367>/Switch12'
       *  Switch: '<S367>/Switch13'
       *  Switch: '<S367>/Switch14'
       *  Switch: '<S367>/Switch16'
       *  Switch: '<S367>/Switch3'
       */
      Code_Gen_Model_B.AT_Field_Error_X = AT_Cage_L_Start_X_Blue -
        Code_Gen_Model_B.KF_Position_X;

      /* Switch: '<S367>/Switch4' incorporates:
       *  Constant: '<S367>/Constant32'
       *  Sum: '<S367>/Add24'
       *  Switch: '<S367>/Switch19'
       *  Switch: '<S367>/Switch20'
       *  Switch: '<S367>/Switch21'
       *  Switch: '<S367>/Switch22'
       *  Switch: '<S367>/Switch24'
       *  Switch: '<S367>/Switch30'
       */
      Code_Gen_Model_B.AT_Field_Error_Y = AT_Cage_L_Start_Y_Blue -
        Code_Gen_Model_B.KF_Position_Y;
    } else if (rtb_Is_Absolute_Steering) {
      /* Switch: '<S367>/Switch2' incorporates:
       *  Constant: '<S367>/Constant15'
       *  Sum: '<S367>/Add2'
       *  Switch: '<S367>/Switch1'
       *  Switch: '<S367>/Switch10'
       *  Switch: '<S367>/Switch12'
       *  Switch: '<S367>/Switch13'
       *  Switch: '<S367>/Switch14'
       *  Switch: '<S367>/Switch16'
       *  Switch: '<S367>/Switch3'
       */
      Code_Gen_Model_B.AT_Field_Error_X = AT_Cage_L_Start_X_Red -
        Code_Gen_Model_B.KF_Position_X;

      /* Switch: '<S367>/Switch4' incorporates:
       *  Constant: '<S367>/Constant25'
       *  Sum: '<S367>/Add19'
       *  Switch: '<S367>/Switch19'
       *  Switch: '<S367>/Switch20'
       *  Switch: '<S367>/Switch21'
       *  Switch: '<S367>/Switch22'
       *  Switch: '<S367>/Switch24'
       *  Switch: '<S367>/Switch29'
       *  Switch: '<S367>/Switch30'
       */
      Code_Gen_Model_B.AT_Field_Error_Y = AT_Cage_L_Start_Y_Red -
        Code_Gen_Model_B.KF_Position_Y;
    } else {
      /* Switch: '<S367>/Switch11' incorporates:
       *  Switch: '<S367>/Switch1'
       *  Switch: '<S367>/Switch10'
       *  Switch: '<S367>/Switch12'
       *  Switch: '<S367>/Switch13'
       *  Switch: '<S367>/Switch14'
       *  Switch: '<S367>/Switch16'
       *  Switch: '<S367>/Switch3'
       */
      if (rtb_Is_Absolute_Translation_g) {
        /* Switch: '<S367>/Switch2' incorporates:
         *  Constant: '<S367>/Constant20'
         *  Sum: '<S367>/Add3'
         */
        Code_Gen_Model_B.AT_Field_Error_X = AT_Cage_M_Start_X_Blue -
          Code_Gen_Model_B.KF_Position_X;
      } else if (rtb_AT_Cage_Middle_Start_Red_Ac) {
        /* Switch: '<S367>/Switch2' incorporates:
         *  Constant: '<S367>/Constant24'
         *  Sum: '<S367>/Add4'
         *  Switch: '<S367>/Switch17'
         */
        Code_Gen_Model_B.AT_Field_Error_X = AT_Cage_M_Start_X_Red -
          Code_Gen_Model_B.KF_Position_X;
      } else if (rtb_AT_Cage_Right_Start_Blue_Ac) {
        /* Switch: '<S367>/Switch2' incorporates:
         *  Constant: '<S367>/Constant29'
         *  Sum: '<S367>/Add5'
         *  Switch: '<S367>/Switch17'
         *  Switch: '<S367>/Switch18'
         */
        Code_Gen_Model_B.AT_Field_Error_X = AT_Cage_R_Start_X_Blue -
          Code_Gen_Model_B.KF_Position_X;
      } else if (rtb_AT_Cage_Right_Start_Red_Act) {
        /* Switch: '<S367>/Switch2' incorporates:
         *  Constant: '<S367>/Constant31'
         *  Sum: '<S367>/Add6'
         *  Switch: '<S367>/Switch17'
         *  Switch: '<S367>/Switch18'
         *  Switch: '<S367>/Switch23'
         */
        Code_Gen_Model_B.AT_Field_Error_X = AT_Cage_R_Start_X_Red -
          Code_Gen_Model_B.KF_Position_X;
      } else if (rtb_AT_Cage_Left_Finish_Blue_Ac) {
        /* Switch: '<S367>/Switch2' incorporates:
         *  Constant: '<S367>/Constant39'
         *  Sum: '<S367>/Add25'
         *  Switch: '<S367>/Switch17'
         *  Switch: '<S367>/Switch18'
         *  Switch: '<S367>/Switch23'
         *  Switch: '<S367>/Switch36'
         */
        Code_Gen_Model_B.AT_Field_Error_X = AT_Cage_L_Finish_X_Blue -
          Code_Gen_Model_B.KF_Position_X;
      } else if (rtb_AT_Cage_Left_Finish_Red_Act) {
        /* Switch: '<S367>/Switch2' incorporates:
         *  Constant: '<S367>/Constant2'
         *  Sum: '<S367>/Add26'
         *  Switch: '<S367>/Switch17'
         *  Switch: '<S367>/Switch18'
         *  Switch: '<S367>/Switch23'
         *  Switch: '<S367>/Switch31'
         *  Switch: '<S367>/Switch36'
         */
        Code_Gen_Model_B.AT_Field_Error_X = AT_Cage_L_Finish_X_Red -
          Code_Gen_Model_B.KF_Position_X;
      } else if (rtb_AT_Cage_Middle_Finish_Blue_) {
        /* Switch: '<S367>/Switch2' incorporates:
         *  Constant: '<S367>/Constant34'
         *  Sum: '<S367>/Add27'
         *  Switch: '<S367>/Switch17'
         *  Switch: '<S367>/Switch18'
         *  Switch: '<S367>/Switch23'
         *  Switch: '<S367>/Switch31'
         *  Switch: '<S367>/Switch32'
         *  Switch: '<S367>/Switch36'
         */
        Code_Gen_Model_B.AT_Field_Error_X = AT_Cage_M_Finish_X_Blue -
          Code_Gen_Model_B.KF_Position_X;
      } else if (rtb_AT_Cage_Middle_Finish_Red_A) {
        /* Switch: '<S367>/Switch2' incorporates:
         *  Constant: '<S367>/Constant35'
         *  Sum: '<S367>/Add28'
         *  Switch: '<S367>/Switch17'
         *  Switch: '<S367>/Switch18'
         *  Switch: '<S367>/Switch23'
         *  Switch: '<S367>/Switch31'
         *  Switch: '<S367>/Switch32'
         *  Switch: '<S367>/Switch33'
         *  Switch: '<S367>/Switch36'
         */
        Code_Gen_Model_B.AT_Field_Error_X = AT_Cage_M_Finish_X_Red -
          Code_Gen_Model_B.KF_Position_X;
      } else if (rtb_AT_Cage_Right_Finish_Blue_A) {
        /* Switch: '<S367>/Switch34' incorporates:
         *  Constant: '<S367>/Constant36'
         *  Sum: '<S367>/Add29'
         *  Switch: '<S367>/Switch17'
         *  Switch: '<S367>/Switch18'
         *  Switch: '<S367>/Switch2'
         *  Switch: '<S367>/Switch23'
         *  Switch: '<S367>/Switch31'
         *  Switch: '<S367>/Switch32'
         *  Switch: '<S367>/Switch33'
         *  Switch: '<S367>/Switch36'
         */
        Code_Gen_Model_B.AT_Field_Error_X = AT_Cage_R_Finish_X_Blue -
          Code_Gen_Model_B.KF_Position_X;
      } else if (rtb_AT_Cage_Right_Finish_Red_Ac) {
        /* Switch: '<S367>/Switch35' incorporates:
         *  Constant: '<S367>/Constant38'
         *  Sum: '<S367>/Add30'
         *  Switch: '<S367>/Switch17'
         *  Switch: '<S367>/Switch18'
         *  Switch: '<S367>/Switch2'
         *  Switch: '<S367>/Switch23'
         *  Switch: '<S367>/Switch31'
         *  Switch: '<S367>/Switch32'
         *  Switch: '<S367>/Switch33'
         *  Switch: '<S367>/Switch34'
         *  Switch: '<S367>/Switch36'
         */
        Code_Gen_Model_B.AT_Field_Error_X = AT_Cage_R_Finish_X_Red -
          Code_Gen_Model_B.KF_Position_X;
      } else {
        /* Switch: '<S367>/Switch2' incorporates:
         *  Constant: '<S367>/Constant37'
         *  Switch: '<S367>/Switch17'
         *  Switch: '<S367>/Switch18'
         *  Switch: '<S367>/Switch23'
         *  Switch: '<S367>/Switch31'
         *  Switch: '<S367>/Switch32'
         *  Switch: '<S367>/Switch33'
         *  Switch: '<S367>/Switch34'
         *  Switch: '<S367>/Switch35'
         *  Switch: '<S367>/Switch36'
         */
        Code_Gen_Model_B.AT_Field_Error_X = 0.0;
      }

      /* End of Switch: '<S367>/Switch11' */

      /* Switch: '<S367>/Switch25' incorporates:
       *  Switch: '<S367>/Switch19'
       *  Switch: '<S367>/Switch20'
       *  Switch: '<S367>/Switch21'
       *  Switch: '<S367>/Switch22'
       *  Switch: '<S367>/Switch24'
       *  Switch: '<S367>/Switch26'
       *  Switch: '<S367>/Switch27'
       *  Switch: '<S367>/Switch28'
       *  Switch: '<S367>/Switch29'
       *  Switch: '<S367>/Switch30'
       *  Switch: '<S367>/Switch37'
       *  Switch: '<S367>/Switch38'
       *  Switch: '<S367>/Switch39'
       *  Switch: '<S367>/Switch40'
       *  Switch: '<S367>/Switch41'
       *  Switch: '<S367>/Switch42'
       */
      if (rtb_Is_Absolute_Translation_g) {
        /* Switch: '<S367>/Switch4' incorporates:
         *  Constant: '<S367>/Constant22'
         *  Sum: '<S367>/Add7'
         */
        Code_Gen_Model_B.AT_Field_Error_Y = AT_Cage_M_Start_Y_Blue -
          Code_Gen_Model_B.KF_Position_Y;
      } else if (rtb_AT_Cage_Middle_Start_Red_Ac) {
        /* Switch: '<S367>/Switch4' incorporates:
         *  Constant: '<S367>/Constant33'
         *  Sum: '<S367>/Add8'
         *  Switch: '<S367>/Switch26'
         */
        Code_Gen_Model_B.AT_Field_Error_Y = AT_Cage_M_Start_Y_Red -
          Code_Gen_Model_B.KF_Position_Y;
      } else if (rtb_AT_Cage_Right_Start_Blue_Ac) {
        /* Switch: '<S367>/Switch4' incorporates:
         *  Constant: '<S367>/Constant6'
         *  Sum: '<S367>/Add9'
         *  Switch: '<S367>/Switch26'
         *  Switch: '<S367>/Switch27'
         */
        Code_Gen_Model_B.AT_Field_Error_Y = AT_Cage_R_Start_Y_Blue -
          Code_Gen_Model_B.KF_Position_Y;
      } else if (rtb_AT_Cage_Right_Start_Red_Act) {
        /* Switch: '<S367>/Switch4' incorporates:
         *  Constant: '<S367>/Constant16'
         *  Sum: '<S367>/Add18'
         *  Switch: '<S367>/Switch26'
         *  Switch: '<S367>/Switch27'
         *  Switch: '<S367>/Switch28'
         */
        Code_Gen_Model_B.AT_Field_Error_Y = AT_Cage_R_Start_Y_Red -
          Code_Gen_Model_B.KF_Position_Y;
      } else if (rtb_AT_Cage_Left_Finish_Blue_Ac) {
        /* Switch: '<S367>/Switch4' incorporates:
         *  Constant: '<S367>/Constant43'
         *  Sum: '<S367>/Add33'
         *  Switch: '<S367>/Switch26'
         *  Switch: '<S367>/Switch27'
         *  Switch: '<S367>/Switch28'
         *  Switch: '<S367>/Switch42'
         */
        Code_Gen_Model_B.AT_Field_Error_Y = AT_Cage_L_Finish_Y_Blue -
          Code_Gen_Model_B.KF_Position_Y;
      } else if (rtb_AT_Cage_Left_Finish_Red_Act) {
        /* Switch: '<S367>/Switch4' incorporates:
         *  Constant: '<S367>/Constant42'
         *  Sum: '<S367>/Add32'
         *  Switch: '<S367>/Switch26'
         *  Switch: '<S367>/Switch27'
         *  Switch: '<S367>/Switch28'
         *  Switch: '<S367>/Switch41'
         *  Switch: '<S367>/Switch42'
         */
        Code_Gen_Model_B.AT_Field_Error_Y = AT_Cage_L_Finish_Y_Red -
          Code_Gen_Model_B.KF_Position_Y;
      } else if (rtb_AT_Cage_Middle_Finish_Blue_) {
        /* Switch: '<S367>/Switch4' incorporates:
         *  Constant: '<S367>/Constant41'
         *  Sum: '<S367>/Add34'
         *  Switch: '<S367>/Switch26'
         *  Switch: '<S367>/Switch27'
         *  Switch: '<S367>/Switch28'
         *  Switch: '<S367>/Switch37'
         *  Switch: '<S367>/Switch41'
         *  Switch: '<S367>/Switch42'
         */
        Code_Gen_Model_B.AT_Field_Error_Y = AT_Cage_M_Finish_Y_Blue -
          Code_Gen_Model_B.KF_Position_Y;
      } else if (rtb_AT_Cage_Middle_Finish_Red_A) {
        /* Switch: '<S367>/Switch4' incorporates:
         *  Constant: '<S367>/Constant44'
         *  Sum: '<S367>/Add35'
         *  Switch: '<S367>/Switch26'
         *  Switch: '<S367>/Switch27'
         *  Switch: '<S367>/Switch28'
         *  Switch: '<S367>/Switch37'
         *  Switch: '<S367>/Switch38'
         *  Switch: '<S367>/Switch41'
         *  Switch: '<S367>/Switch42'
         */
        Code_Gen_Model_B.AT_Field_Error_Y = AT_Cage_M_Finish_Y_Red -
          Code_Gen_Model_B.KF_Position_Y;
      } else if (rtb_AT_Cage_Right_Finish_Blue_A) {
        /* Switch: '<S367>/Switch39' incorporates:
         *  Constant: '<S367>/Constant45'
         *  Sum: '<S367>/Add36'
         *  Switch: '<S367>/Switch26'
         *  Switch: '<S367>/Switch27'
         *  Switch: '<S367>/Switch28'
         *  Switch: '<S367>/Switch37'
         *  Switch: '<S367>/Switch38'
         *  Switch: '<S367>/Switch4'
         *  Switch: '<S367>/Switch41'
         *  Switch: '<S367>/Switch42'
         */
        Code_Gen_Model_B.AT_Field_Error_Y = AT_Cage_R_Finish_Y_Blue -
          Code_Gen_Model_B.KF_Position_Y;
      } else if (rtb_AT_Cage_Right_Finish_Red_Ac) {
        /* Switch: '<S367>/Switch40' incorporates:
         *  Constant: '<S367>/Constant40'
         *  Sum: '<S367>/Add31'
         *  Switch: '<S367>/Switch26'
         *  Switch: '<S367>/Switch27'
         *  Switch: '<S367>/Switch28'
         *  Switch: '<S367>/Switch37'
         *  Switch: '<S367>/Switch38'
         *  Switch: '<S367>/Switch39'
         *  Switch: '<S367>/Switch4'
         *  Switch: '<S367>/Switch41'
         *  Switch: '<S367>/Switch42'
         */
        Code_Gen_Model_B.AT_Field_Error_Y = AT_Cage_R_Finish_Y_Red -
          Code_Gen_Model_B.KF_Position_Y;
      } else {
        /* Switch: '<S367>/Switch4' incorporates:
         *  Constant: '<S367>/Constant30'
         *  Switch: '<S367>/Switch26'
         *  Switch: '<S367>/Switch27'
         *  Switch: '<S367>/Switch28'
         *  Switch: '<S367>/Switch37'
         *  Switch: '<S367>/Switch38'
         *  Switch: '<S367>/Switch39'
         *  Switch: '<S367>/Switch40'
         *  Switch: '<S367>/Switch41'
         *  Switch: '<S367>/Switch42'
         */
        Code_Gen_Model_B.AT_Field_Error_Y = 0.0;
      }

      /* End of Switch: '<S367>/Switch25' */
    }

    /* End of Switch: '<S367>/Switch2' */

    /* Switch: '<S404>/Switch1' incorporates:
     *  Constant: '<S409>/Constant'
     *  Constant: '<S410>/Constant'
     *  Logic: '<S404>/AND'
     *  RelationalOperator: '<S409>/Compare'
     *  RelationalOperator: '<S410>/Compare'
     *  Switch: '<S404>/Switch2'
     *  UnitDelay: '<S404>/Unit Delay'
     *  UnitDelay: '<S404>/Unit Delay1'
     */
    if ((Code_Gen_Model_B.Drive_Joystick_X == 0.0) &&
        (Code_Gen_Model_B.Drive_Joystick_Y == 0.0)) {
      rtb_Rotationmatrixfromlocalto_1 = Code_Gen_Model_DW.UnitDelay1_DSTATE_l;
      rtb_Rotationmatrixfromlocalto_0 = Code_Gen_Model_DW.UnitDelay_DSTATE_p;
    } else {
      rtb_Rotationmatrixfromlocalto_1 = Code_Gen_Model_B.Drive_Joystick_Y;
      rtb_Rotationmatrixfromlocalto_0 = Code_Gen_Model_B.Drive_Joystick_X;
    }

    /* End of Switch: '<S404>/Switch1' */

    /* Lookup_n-D: '<S391>/Modulation_Drv' incorporates:
     *  Math: '<S391>/Magnitude'
     */
    rtb_Enable_Wheels = look1_binlcpw(rt_hypotd_snf
      (Code_Gen_Model_B.Drive_Joystick_X, Code_Gen_Model_B.Drive_Joystick_Y),
      Code_Gen_Model_ConstP.Modulation_Drv_bp01Data,
      Code_Gen_Model_ConstP.Modulation_Drv_tableData, 20U);

    /* RelationalOperator: '<S402>/Compare' incorporates:
     *  Constant: '<S402>/Constant'
     */
    rtb_Compare_a = (rtb_Enable_Wheels == 0.0);

    /* RelationalOperator: '<S411>/FixPt Relational Operator' incorporates:
     *  Inport: '<Root>/Gamepad_B1_A'
     *  UnitDelay: '<S411>/Delay Input1'
     *
     * Block description for '<S411>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_B.FixPtRelationalOperator = (Code_Gen_Model_U.Gamepad_B1_A >
      Code_Gen_Model_DW.DelayInput1_DSTATE_c);

    /* RelationalOperator: '<S412>/FixPt Relational Operator' incorporates:
     *  Inport: '<Root>/Gamepad_B2_B'
     *  UnitDelay: '<S412>/Delay Input1'
     *
     * Block description for '<S412>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_B.FixPtRelationalOperator_n = (Code_Gen_Model_U.Gamepad_B2_B >
      Code_Gen_Model_DW.DelayInput1_DSTATE_nr);

    /* RelationalOperator: '<S416>/FixPt Relational Operator' incorporates:
     *  Inport: '<Root>/Gamepad_B3_X'
     *  UnitDelay: '<S416>/Delay Input1'
     *
     * Block description for '<S416>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_B.FixPtRelationalOperator_k = (Code_Gen_Model_U.Gamepad_B3_X >
      Code_Gen_Model_DW.DelayInput1_DSTATE_ez);

    /* RelationalOperator: '<S417>/FixPt Relational Operator' incorporates:
     *  Inport: '<Root>/Gamepad_B4_Y'
     *  UnitDelay: '<S417>/Delay Input1'
     *
     * Block description for '<S417>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_B.FixPtRelationalOperator_d = (Code_Gen_Model_U.Gamepad_B4_Y >
      Code_Gen_Model_DW.DelayInput1_DSTATE_nh);

    /* RelationalOperator: '<S418>/FixPt Relational Operator' incorporates:
     *  Inport: '<Root>/Gamepad_Start'
     *  UnitDelay: '<S418>/Delay Input1'
     *
     * Block description for '<S418>/Delay Input1':
     *
     *  Store in Global RAM
     */
    FixPtRelationalOperator_ne = (Code_Gen_Model_U.Gamepad_Start >
      Code_Gen_Model_DW.DelayInput1_DSTATE_i);

    /* RelationalOperator: '<S413>/FixPt Relational Operator' incorporates:
     *  Inport: '<Root>/Gamepad_Back'
     *  UnitDelay: '<S413>/Delay Input1'
     *
     * Block description for '<S413>/Delay Input1':
     *
     *  Store in Global RAM
     */
    FixPtRelationalOperator_j = (Code_Gen_Model_U.Gamepad_Back >
      Code_Gen_Model_DW.DelayInput1_DSTATE_cp);

    /* RelationalOperator: '<S419>/FixPt Relational Operator' incorporates:
     *  Inport: '<Root>/Gamepad_RB'
     *  UnitDelay: '<S419>/Delay Input1'
     *
     * Block description for '<S419>/Delay Input1':
     *
     *  Store in Global RAM
     */
    FixPtRelationalOperator_l = (Code_Gen_Model_U.Gamepad_RB >
      Code_Gen_Model_DW.DelayInput1_DSTATE_p);

    /* RelationalOperator: '<S423>/FixPt Relational Operator' incorporates:
     *  Inport: '<Root>/Gamepad_RT'
     *  UnitDelay: '<S423>/Delay Input1'
     *
     * Block description for '<S423>/Delay Input1':
     *
     *  Store in Global RAM
     */
    rtb_FixPtRelationalOperator_m = (Code_Gen_Model_U.Gamepad_RT >
      Code_Gen_Model_DW.DelayInput1_DSTATE_j);

    /* RelationalOperator: '<S420>/FixPt Relational Operator' incorporates:
     *  UnitDelay: '<S420>/Delay Input1'
     *
     * Block description for '<S420>/Delay Input1':
     *
     *  Store in Global RAM
     */
    FixPtRelationalOperator_i = (((int32_T)Code_Gen_Model_B.Gamepad_POV_Up) >
      ((int32_T)Code_Gen_Model_DW.DelayInput1_DSTATE_oy));

    /* RelationalOperator: '<S421>/FixPt Relational Operator' incorporates:
     *  UnitDelay: '<S421>/Delay Input1'
     *
     * Block description for '<S421>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_B.FixPtRelationalOperator_m = (((int32_T)
      Code_Gen_Model_B.Gamepad_POV_Down) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_f));

    /* RelationalOperator: '<S414>/FixPt Relational Operator' incorporates:
     *  UnitDelay: '<S414>/Delay Input1'
     *
     * Block description for '<S414>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_B.FixPtRelationalOperator_ji = (((int32_T)
      Code_Gen_Model_B.Gamepad_POV_Left) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_o5));

    /* RelationalOperator: '<S415>/FixPt Relational Operator' incorporates:
     *  UnitDelay: '<S415>/Delay Input1'
     *
     * Block description for '<S415>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_B.FixPtRelationalOperator_ml = (((int32_T)
      Code_Gen_Model_B.Gamepad_POV_Right) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_a));

    /* DeadZone: '<S370>/Dead Zone' incorporates:
     *  Inport: '<Root>/Gamepad_Stick_Left_Y'
     */
    if (Code_Gen_Model_U.Gamepad_Stick_Left_Y > 0.1) {
      /* DeadZone: '<S370>/Dead Zone' */
      Code_Gen_Model_B.DeadZone = Code_Gen_Model_U.Gamepad_Stick_Left_Y - 0.1;
    } else if (Code_Gen_Model_U.Gamepad_Stick_Left_Y >= -0.1) {
      /* DeadZone: '<S370>/Dead Zone' */
      Code_Gen_Model_B.DeadZone = 0.0;
    } else {
      /* DeadZone: '<S370>/Dead Zone' */
      Code_Gen_Model_B.DeadZone = Code_Gen_Model_U.Gamepad_Stick_Left_Y - -0.1;
    }

    /* End of DeadZone: '<S370>/Dead Zone' */

    /* DeadZone: '<S370>/Dead Zone1' incorporates:
     *  Inport: '<Root>/Gamepad_Stick_Right_Y'
     */
    if (Code_Gen_Model_U.Gamepad_Stick_Right_Y > 0.1) {
      /* DeadZone: '<S370>/Dead Zone1' */
      Code_Gen_Model_B.DeadZone1 = Code_Gen_Model_U.Gamepad_Stick_Right_Y - 0.1;
    } else if (Code_Gen_Model_U.Gamepad_Stick_Right_Y >= -0.1) {
      /* DeadZone: '<S370>/Dead Zone1' */
      Code_Gen_Model_B.DeadZone1 = 0.0;
    } else {
      /* DeadZone: '<S370>/Dead Zone1' */
      Code_Gen_Model_B.DeadZone1 = Code_Gen_Model_U.Gamepad_Stick_Right_Y - -0.1;
    }

    /* End of DeadZone: '<S370>/Dead Zone1' */

    /* Chart: '<S370>/Reefscape_Chart' incorporates:
     *  Inport: '<Root>/Gamepad_LT'
     *  RelationalOperator: '<S422>/FixPt Relational Operator'
     *  UnitDelay: '<S422>/Delay Input1'
     *
     * Block description for '<S422>/Delay Input1':
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
        &FixPtRelationalOperator_ne, &FixPtRelationalOperator_j,
        &FixPtRelationalOperator_l, &FixPtRelationalOperator_i);
      switch (Code_Gen_Model_DW.is_Algae_Wheels) {
       case Code_Gen_Model_IN_Algae_Hold:
        /* SignalConversion generated from: '<S22>/Algae_Wheel_Outside_DutyCycle' */
        rtb_Algae_Wheel_Outside_DutyCyc = Algae_Hold_DC;

        /* SignalConversion generated from: '<S22>/Algae_Wheel_Inside_DutyCycle' */
        rtb_Algae_Wheel_Inside_DutyCycl = Algae_Hold_DC;
        if (rtb_FixPtRelationalOperator_m) {
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
        } else if (rtb_FixPtRelationalOperator_m) {
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

    /* End of Chart: '<S370>/Reefscape_Chart' */

    /* Logic: '<S368>/Logical Operator3' incorporates:
     *  Logic: '<S368>/OR'
     *  Switch: '<S368>/Switch2'
     */
    FixPtRelationalOperator_ne = ((Code_Gen_Model_B.Align_Left) ||
      (Code_Gen_Model_B.Align_Right));

    /* Logic: '<S368>/Logical Operator1' incorporates:
     *  Constant: '<S383>/Constant'
     *  Constant: '<S384>/Constant'
     *  Constant: '<S385>/Constant'
     *  Constant: '<S386>/Constant'
     *  Constant: '<S387>/Constant'
     *  Logic: '<S368>/Logical Operator2'
     *  Logic: '<S368>/Logical Operator3'
     *  Logic: '<S368>/Logical Operator4'
     *  Logic: '<S368>/NOT'
     *  RelationalOperator: '<S383>/Compare'
     *  RelationalOperator: '<S384>/Compare'
     *  RelationalOperator: '<S385>/Compare'
     *  RelationalOperator: '<S386>/Compare'
     *  RelationalOperator: '<S387>/Compare'
     */
    Code_Gen_Model_B.AT_Relative_Enable =
      (((((!(Code_Gen_Model_B.Limelight_Tag_Corrected_X == 0.0)) ||
          (!(Code_Gen_Model_B.Limelight_Tag_Corrected_Y == 0.0))) ||
         (!(Code_Gen_Model_B.Limelight_Tag_Corrected_Angle == 0.0))) &&
        ((Code_Gen_Model_B.Set_Coral_Level != 0) ||
         (Code_Gen_Model_B.Set_Algae_Level != 0))) &&
       (FixPtRelationalOperator_ne || (Code_Gen_Model_B.Align_Center)));

    /* DeadZone: '<S391>/Dead Zone' */
    if (Code_Gen_Model_B.Drive_Joystick_Z > Twist_Deadzone_pos) {
      rtb_Disable_Wheels = Code_Gen_Model_B.Drive_Joystick_Z -
        Twist_Deadzone_pos;
    } else if (Code_Gen_Model_B.Drive_Joystick_Z >= Twist_Deadzone_neg) {
      rtb_Disable_Wheels = 0.0;
    } else {
      rtb_Disable_Wheels = Code_Gen_Model_B.Drive_Joystick_Z -
        Twist_Deadzone_neg;
    }

    /* End of DeadZone: '<S391>/Dead Zone' */

    /* Logic: '<S391>/Logical Operator' incorporates:
     *  Constant: '<S403>/Constant'
     *  RelationalOperator: '<S403>/Compare'
     */
    Compare_f = ((rtb_Disable_Wheels != 0.0) && rtb_Compare_a);

    /* Logic: '<S391>/Logical Operator1' */
    Compare = ((Code_Gen_Model_B.AT_Relative_Enable) || Compare_f);

    /* Logic: '<S368>/AND2' incorporates:
     *  Constant: '<S376>/Constant'
     *  Logic: '<S368>/AND'
     *  RelationalOperator: '<S376>/Compare'
     *  Switch: '<S368>/Switch'
     *  Switch: '<S368>/Switch1'
     */
    rtb_FixPtRelationalOperator_m = ((Code_Gen_Model_B.Align_Center) &&
      (Code_Gen_Model_B.Set_Coral_Level == 1));

    /* Switch: '<S368>/Switch2' incorporates:
     *  Constant: '<S368>/Constant4'
     *  Constant: '<S372>/Constant'
     *  Constant: '<S373>/Constant'
     *  Constant: '<S375>/Constant'
     *  Constant: '<S389>/Constant'
     *  Logic: '<S368>/AND2'
     *  Logic: '<S368>/AND3'
     *  Logic: '<S368>/Logical Operator5'
     *  Logic: '<S368>/Logical Operator6'
     *  Logic: '<S368>/OR1'
     *  RelationalOperator: '<S372>/Compare'
     *  RelationalOperator: '<S373>/Compare'
     *  RelationalOperator: '<S375>/Compare'
     *  RelationalOperator: '<S389>/Compare'
     *  Switch: '<S368>/Switch3'
     *  Switch: '<S368>/Switch5'
     *  Switch: '<S368>/Switch7'
     */
    if (rtb_FixPtRelationalOperator_m) {
      rtb_Switch2_ji = AT_Reef_Target_L1_X;
    } else if (FixPtRelationalOperator_ne && ((Code_Gen_Model_B.Set_Coral_Level ==
      2) || (Code_Gen_Model_B.Set_Coral_Level == 3))) {
      /* Switch: '<S368>/Switch3' incorporates:
       *  Constant: '<S368>/Constant'
       */
      rtb_Switch2_ji = AT_Reef_Target_L2_L3_X;
    } else if (FixPtRelationalOperator_ne && (Code_Gen_Model_B.Set_Coral_Level ==
                4)) {
      /* Switch: '<S368>/Switch5' incorporates:
       *  Constant: '<S368>/Constant5'
       *  Switch: '<S368>/Switch3'
       */
      rtb_Switch2_ji = AT_Reef_Target_L4_X;
    } else if ((Code_Gen_Model_B.Align_Center) &&
               (Code_Gen_Model_B.Set_Algae_Level != 0)) {
      /* Switch: '<S368>/Switch7' incorporates:
       *  Constant: '<S368>/Constant7'
       *  Switch: '<S368>/Switch3'
       *  Switch: '<S368>/Switch5'
       */
      rtb_Switch2_ji = AT_Reef_Target_Algae_X;
    } else {
      /* Switch: '<S368>/Switch5' incorporates:
       *  Switch: '<S368>/Switch3'
       *  UnitDelay: '<S368>/Unit Delay'
       */
      rtb_Switch2_ji = Code_Gen_Model_DW.UnitDelay_DSTATE_kq;
    }

    /* UnaryMinus: '<S368>/Unary Minus1' incorporates:
     *  Sum: '<S368>/Subtract'
     */
    Code_Gen_Model_B.AT_Relative_Error_X = -(rtb_Switch2_ji -
      Code_Gen_Model_B.Limelight_Tag_Corrected_X);

    /* Switch: '<S368>/Switch' incorporates:
     *  Constant: '<S368>/Constant1'
     *  Constant: '<S388>/Constant'
     *  Logic: '<S368>/AND1'
     *  RelationalOperator: '<S388>/Compare'
     *  Switch: '<S368>/Switch1'
     *  Switch: '<S368>/Switch4'
     *  Switch: '<S368>/Switch6'
     */
    if (Code_Gen_Model_B.Align_Left) {
      rtb_Switch_b5 = AT_Reef_Target_Left_Y;
    } else if (Code_Gen_Model_B.Align_Right) {
      /* Switch: '<S368>/Switch1' incorporates:
       *  Constant: '<S368>/Constant2'
       */
      rtb_Switch_b5 = AT_Reef_Target_Right_Y;
    } else if (rtb_FixPtRelationalOperator_m) {
      /* Switch: '<S368>/Switch4' incorporates:
       *  Constant: '<S368>/Constant3'
       *  Switch: '<S368>/Switch1'
       */
      rtb_Switch_b5 = AT_Reef_Target_Center_Y;
    } else if ((Code_Gen_Model_B.Align_Center) &&
               (Code_Gen_Model_B.Set_Algae_Level != 0)) {
      /* Switch: '<S368>/Switch6' incorporates:
       *  Constant: '<S368>/Constant6'
       *  Switch: '<S368>/Switch1'
       *  Switch: '<S368>/Switch4'
       */
      rtb_Switch_b5 = AT_Reef_Target_Algae_Y;
    } else {
      /* Switch: '<S368>/Switch4' incorporates:
       *  Switch: '<S368>/Switch1'
       *  UnitDelay: '<S368>/Unit Delay1'
       */
      rtb_Switch_b5 = Code_Gen_Model_DW.UnitDelay1_DSTATE_nr;
    }

    /* Sum: '<S368>/Subtract1' */
    Code_Gen_Model_B.AT_Relative_Error_Y = rtb_Switch_b5 -
      Code_Gen_Model_B.Limelight_Tag_Corrected_Y;

    /* Switch: '<S391>/Switch9' incorporates:
     *  Switch: '<S391>/Switch4'
     */
    if (Compare) {
      /* Switch: '<S391>/Switch1' */
      if (Compare_f) {
        /* Signum: '<S391>/Sign' */
        if (rtIsNaN(rtb_Disable_Wheels)) {
          rtb_Minus_k_idx_0 = (rtNaN);
        } else if (rtb_Disable_Wheels < 0.0) {
          rtb_Minus_k_idx_0 = -1.0;
        } else {
          rtb_Minus_k_idx_0 = (rtb_Disable_Wheels > 0.0);
        }

        /* Switch: '<S391>/Switch5' incorporates:
         *  Constant: '<S391>/Constant3'
         *  Constant: '<S391>/Constant4'
         */
        if (Code_Gen_Model_B.Drive_Joystick_Z_Mode) {
          rtb_Switch2_fx = -1.5707963267948966;
        } else {
          rtb_Switch2_fx = 0.0;
        }

        /* Merge: '<S16>/Merge3' incorporates:
         *  Gain: '<S391>/Gain3'
         *  Signum: '<S391>/Sign'
         *  Sum: '<S391>/Add'
         *  Switch: '<S391>/Switch5'
         */
        Code_Gen_Model_B.Translation_Angle = (3.1415926535897931 *
          rtb_Minus_k_idx_0) + rtb_Switch2_fx;
      } else {
        /* Merge: '<S16>/Merge3' incorporates:
         *  Trigonometry: '<S391>/Atan3'
         */
        Code_Gen_Model_B.Translation_Angle = rt_atan2d_snf
          (Code_Gen_Model_B.AT_Relative_Error_Y,
           Code_Gen_Model_B.AT_Relative_Error_X);
      }

      /* End of Switch: '<S391>/Switch1' */
    } else if (rtb_Compare_a) {
      /* Switch: '<S391>/Switch6' incorporates:
       *  Constant: '<S391>/Constant'
       *  Constant: '<S391>/Constant1'
       *  Inport: '<Root>/IsBlueAlliance'
       *  Switch: '<S391>/Switch4'
       */
      if (Code_Gen_Model_U.IsBlueAlliance != 0.0) {
        rtb_Minus_k_idx_0 = 0.0;
      } else {
        rtb_Minus_k_idx_0 = 3.1415926535897931;
      }

      /* Merge: '<S16>/Merge3' incorporates:
       *  Sum: '<S391>/Add1'
       *  Switch: '<S391>/Switch4'
       *  Switch: '<S391>/Switch6'
       *  Trigonometry: '<S391>/Atan1'
       */
      Code_Gen_Model_B.Translation_Angle = rt_atan2d_snf
        (Code_Gen_Model_B.AT_Field_Error_Y, Code_Gen_Model_B.AT_Field_Error_X) +
        rtb_Minus_k_idx_0;
    } else {
      /* Merge: '<S16>/Merge3' incorporates:
       *  Switch: '<S391>/Switch4'
       *  Trigonometry: '<S391>/Atan2'
       */
      Code_Gen_Model_B.Translation_Angle = rt_atan2d_snf
        (rtb_Rotationmatrixfromlocalto_1, rtb_Rotationmatrixfromlocalto_0);
    }

    /* End of Switch: '<S391>/Switch9' */

    /* Switch: '<S401>/Switch1' incorporates:
     *  Constant: '<S401>/Constant'
     *  Constant: '<S401>/Constant1'
     */
    if (Code_Gen_Model_B.Is_Boosting) {
      rtb_Reset_Wheel_Offsets = Boost_Trigger_High_Speed;
    } else {
      rtb_Reset_Wheel_Offsets = Boost_Trigger_Low_Speed;
    }

    /* End of Switch: '<S401>/Switch1' */

    /* Switch: '<S408>/Init' incorporates:
     *  UnitDelay: '<S408>/FixPt Unit Delay1'
     *  UnitDelay: '<S408>/FixPt Unit Delay2'
     */
    if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_a != 0) {
      rtb_Coral_Wheel_DutyCycle = rtb_Reset_Wheel_Offsets;
    } else {
      rtb_Coral_Wheel_DutyCycle = Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_f;
    }

    /* End of Switch: '<S408>/Init' */

    /* Sum: '<S406>/Sum1' */
    rtb_Reset_Wheel_Offsets -= rtb_Coral_Wheel_DutyCycle;

    /* Switch: '<S407>/Switch2' incorporates:
     *  Constant: '<S405>/Constant1'
     *  Constant: '<S405>/Constant3'
     *  RelationalOperator: '<S407>/LowerRelop1'
     *  RelationalOperator: '<S407>/UpperRelop'
     *  Switch: '<S407>/Switch'
     */
    if (rtb_Reset_Wheel_Offsets > Boost_Trigger_Increasing_Limit) {
      rtb_Reset_Wheel_Offsets = Boost_Trigger_Increasing_Limit;
    } else if (rtb_Reset_Wheel_Offsets < Boost_Trigger_Decreasing_Limit) {
      /* Switch: '<S407>/Switch' incorporates:
       *  Constant: '<S405>/Constant1'
       */
      rtb_Reset_Wheel_Offsets = Boost_Trigger_Decreasing_Limit;
    }

    /* End of Switch: '<S407>/Switch2' */

    /* Sum: '<S406>/Sum' */
    rtb_Sum_jt = rtb_Reset_Wheel_Offsets + rtb_Coral_Wheel_DutyCycle;

    /* Switch: '<S391>/Switch8' incorporates:
     *  Switch: '<S391>/Switch2'
     */
    if (Compare) {
      /* Switch: '<S391>/Switch' */
      if (Compare_f) {
        /* Merge: '<S16>/Merge4' incorporates:
         *  Gain: '<S391>/Gain'
         */
        Code_Gen_Model_B.Translation_Speed = Translation_Twist_Gain *
          rtb_Disable_Wheels;
      } else {
        /* Merge: '<S16>/Merge4' incorporates:
         *  Constant: '<S391>/Constant8'
         *  Gain: '<S391>/Gain1'
         *  Math: '<S391>/Magnitude2'
         *  MinMax: '<S391>/Min1'
         */
        Code_Gen_Model_B.Translation_Speed = fmin
          (AT_Translation_Speed_Max_Relative,
           AT_Translation_Control_Gain_Relative * rt_hypotd_snf
           (Code_Gen_Model_B.AT_Relative_Error_X,
            Code_Gen_Model_B.AT_Relative_Error_Y));
      }

      /* End of Switch: '<S391>/Switch' */
    } else if (rtb_Compare_a) {
      /* Merge: '<S16>/Merge4' incorporates:
       *  Constant: '<S391>/Constant5'
       *  Gain: '<S391>/Gain2'
       *  Math: '<S391>/Magnitude1'
       *  MinMax: '<S391>/Min'
       *  Switch: '<S391>/Switch2'
       */
      Code_Gen_Model_B.Translation_Speed = fmin(AT_Translation_Speed_Max_Field,
        AT_Translation_Control_Gain_Field * rt_hypotd_snf
        (Code_Gen_Model_B.AT_Field_Error_X, Code_Gen_Model_B.AT_Field_Error_Y));
    } else {
      /* Product: '<S401>/Product' incorporates:
       *  Switch: '<S391>/Switch2'
       */
      rtb_Minus_k_idx_0 = rtb_Enable_Wheels * rtb_Sum_jt;

      /* Saturate: '<S401>/Saturation' incorporates:
       *  Switch: '<S391>/Switch2'
       */
      if (rtb_Minus_k_idx_0 > Boost_Trigger_High_Speed) {
        /* Merge: '<S16>/Merge4' */
        Code_Gen_Model_B.Translation_Speed = Boost_Trigger_High_Speed;
      } else if (rtb_Minus_k_idx_0 < (-Boost_Trigger_High_Speed)) {
        /* Merge: '<S16>/Merge4' */
        Code_Gen_Model_B.Translation_Speed = -Boost_Trigger_High_Speed;
      } else {
        /* Merge: '<S16>/Merge4' */
        Code_Gen_Model_B.Translation_Speed = rtb_Minus_k_idx_0;
      }

      /* End of Saturate: '<S401>/Saturation' */
    }

    /* End of Switch: '<S391>/Switch8' */

    /* Abs: '<S368>/Abs1' */
    rtb_Coral_Wheel_DutyCycle = fabs(Code_Gen_Model_B.AT_Relative_Error_Y);

    /* Abs: '<S368>/Abs' */
    rtb_Reset_Wheel_Offsets = fabs(Code_Gen_Model_B.AT_Relative_Error_X);

    /* UnaryMinus: '<S368>/Unary Minus' */
    Code_Gen_Model_B.AT_Relative_Error_Angle =
      -Code_Gen_Model_B.Limelight_Tag_Corrected_Angle;

    /* Abs: '<S368>/Abs2' */
    rtb_Enable_Wheels = fabs(Code_Gen_Model_B.AT_Relative_Error_Angle);

    /* Logic: '<S368>/Logical Operator' incorporates:
     *  Constant: '<S378>/Constant'
     *  Constant: '<S379>/Constant'
     *  Constant: '<S380>/Constant'
     *  RelationalOperator: '<S378>/Compare'
     *  RelationalOperator: '<S379>/Compare'
     *  RelationalOperator: '<S380>/Compare'
     */
    Code_Gen_Model_B.AT_On_Target = (((rtb_Reset_Wheel_Offsets <=
      AT_Max_Error_XY) && (rtb_Coral_Wheel_DutyCycle <= AT_Max_Error_XY)) &&
      (rtb_Enable_Wheels <= AT_Max_Error_Angle));

    /* Merge: '<S16>/Merge23' incorporates:
     *  Constant: '<S374>/Constant'
     *  Constant: '<S381>/Constant'
     *  Constant: '<S382>/Constant'
     *  Logic: '<S368>/Logical Operator7'
     *  RelationalOperator: '<S374>/Compare'
     *  RelationalOperator: '<S381>/Compare'
     *  RelationalOperator: '<S382>/Compare'
     */
    Code_Gen_Model_B.Swerve_Drive_Integral_Enable =
      ((((Code_Gen_Model_B.AT_Relative_Enable) && (rtb_Reset_Wheel_Offsets <=
          AT_Integral_Enable_Error_XY)) && (rtb_Coral_Wheel_DutyCycle <=
         AT_Integral_Enable_Error_XY)) && (rtb_Enable_Wheels <=
        AT_Integral_Enable_Error_Angle));

    /* Switch: '<S390>/Switch' incorporates:
     *  Constant: '<S390>/Constant9'
     */
    if (Code_Gen_Model_B.AT_Relative_Enable) {
      /* Product: '<S390>/Product2' incorporates:
       *  Constant: '<S390>/Constant4'
       */
      rtb_Coral_Wheel_DutyCycle = Code_Gen_Model_B.AT_Relative_Error_Angle *
        AT_Steering_Error_Angle_Gain;

      /* Switch: '<S400>/Switch2' incorporates:
       *  Constant: '<S390>/Constant10'
       *  RelationalOperator: '<S400>/LowerRelop1'
       *  RelationalOperator: '<S400>/UpperRelop'
       *  Switch: '<S400>/Switch'
       *  UnaryMinus: '<S390>/Unary Minus'
       */
      if (rtb_Coral_Wheel_DutyCycle > AT_Steering_Speed_Max) {
        rtb_Enable_Wheels = AT_Steering_Speed_Max;
      } else if (rtb_Coral_Wheel_DutyCycle < (-AT_Steering_Speed_Max)) {
        /* Switch: '<S400>/Switch' incorporates:
         *  UnaryMinus: '<S390>/Unary Minus'
         */
        rtb_Enable_Wheels = -AT_Steering_Speed_Max;
      } else {
        rtb_Enable_Wheels = rtb_Coral_Wheel_DutyCycle;
      }

      /* End of Switch: '<S400>/Switch2' */
    } else {
      rtb_Enable_Wheels = 0.0;
    }

    /* End of Switch: '<S390>/Switch' */

    /* DeadZone: '<S390>/Dead Zone' */
    if (Code_Gen_Model_B.Steer_Joystick_Z > Twist_Deadzone_pos) {
      rtb_Minus_k_idx_0 = Code_Gen_Model_B.Steer_Joystick_Z - Twist_Deadzone_pos;
    } else if (Code_Gen_Model_B.Steer_Joystick_Z >= Twist_Deadzone_neg) {
      rtb_Minus_k_idx_0 = 0.0;
    } else {
      rtb_Minus_k_idx_0 = Code_Gen_Model_B.Steer_Joystick_Z - Twist_Deadzone_neg;
    }

    /* Sum: '<S390>/Add' incorporates:
     *  Constant: '<S390>/Constant'
     *  Constant: '<S390>/Constant1'
     *  DeadZone: '<S390>/Dead Zone'
     *  Lookup_n-D: '<S390>/Modulation_Str_Y_Rel'
     *  Product: '<S390>/Product'
     *  Product: '<S390>/Product1'
     *  SignalConversion: '<S12>/Signal Copy5'
     */
    rtb_Enable_Wheels += (look1_binlcpw(Code_Gen_Model_B.Steer_Joystick_Y,
      Code_Gen_Model_ConstP.Modulation_Str_Y_Rel_bp01Data,
      Code_Gen_Model_ConstP.Modulation_Str_Y_Rel_tableData, 20U) *
                          Steering_Relative_Gain) + (rtb_Minus_k_idx_0 *
      Steering_Twist_Gain);

    /* RelationalOperator: '<S392>/Compare' incorporates:
     *  Constant: '<S392>/Constant'
     */
    rtb_Compare_a = (rtb_Enable_Wheels == 0.0);

    /* Logic: '<S367>/Logical Operator11' */
    Compare_f = ((((((Code_Gen_Model_B.Coral_Station_Left) ||
                     (Code_Gen_Model_B.Coral_Station_Right)) ||
                    (Code_Gen_Model_B.Processor)) ||
                   (Code_Gen_Model_B.Cage_Left_Start)) ||
                  (Code_Gen_Model_B.Cage_Middle_Start)) ||
                 (Code_Gen_Model_B.Cage_Right_Start));

    /* RelationalOperator: '<S397>/FixPt Relational Operator' incorporates:
     *  UnitDelay: '<S397>/Delay Input1'
     *
     * Block description for '<S397>/Delay Input1':
     *
     *  Store in Global RAM
     */
    rtb_FixPtRelationalOperator_m = (((int32_T)Compare_f) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_ft));

    /* Logic: '<S390>/AND2' incorporates:
     *  RelationalOperator: '<S393>/FixPt Relational Operator'
     *  RelationalOperator: '<S394>/FixPt Relational Operator'
     *  RelationalOperator: '<S395>/FixPt Relational Operator'
     *  RelationalOperator: '<S396>/FixPt Relational Operator'
     *  UnitDelay: '<S393>/Delay Input1'
     *  UnitDelay: '<S394>/Delay Input1'
     *  UnitDelay: '<S395>/Delay Input1'
     *  UnitDelay: '<S396>/Delay Input1'
     *
     * Block description for '<S393>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S394>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S395>/Delay Input1':
     *
     *  Store in Global RAM
     *
     * Block description for '<S396>/Delay Input1':
     *
     *  Store in Global RAM
     */
    FixPtRelationalOperator_j = ((((((int32_T)Code_Gen_Model_B.Face_Away_Driver)
      > ((int32_T)Code_Gen_Model_DW.DelayInput1_DSTATE_m)) || (((int32_T)
      Code_Gen_Model_B.Face_Left_Driver) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_k))) || (((int32_T)
      Code_Gen_Model_B.Face_Toward_Driver) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_g))) || (((int32_T)
      Code_Gen_Model_B.Face_Right_Driver) > ((int32_T)
      Code_Gen_Model_DW.DelayInput1_DSTATE_g2)));

    /* Logic: '<S390>/AND1' incorporates:
     *  Logic: '<S390>/AND3'
     *  Logic: '<S390>/AND7'
     *  UnitDelay: '<S390>/Unit Delay2'
     */
    FixPtRelationalOperator_ne = ((rtb_Compare_a &&
      (!rtb_FixPtRelationalOperator_m)) && (FixPtRelationalOperator_j ||
      (Code_Gen_Model_DW.UnitDelay2_DSTATE)));

    /* Logic: '<S390>/AND4' incorporates:
     *  Logic: '<S390>/AND5'
     *  Logic: '<S390>/AND8'
     *  UnitDelay: '<S390>/Unit Delay4'
     */
    rtb_FixPtRelationalOperator_m = ((rtb_Compare_a &&
      (!FixPtRelationalOperator_j)) && (rtb_FixPtRelationalOperator_m ||
      (Code_Gen_Model_DW.UnitDelay4_DSTATE)));

    /* Logic: '<S390>/AND6' */
    Code_Gen_Model_B.Steering_Abs_Angle_Active = (FixPtRelationalOperator_ne ||
      rtb_FixPtRelationalOperator_m);

    /* Switch: '<S390>/Switch8' incorporates:
     *  Constant: '<S399>/Constant'
     *  Logic: '<S390>/AND9'
     *  RelationalOperator: '<S398>/FixPt Relational Operator'
     *  RelationalOperator: '<S399>/Compare'
     *  UnitDelay: '<S18>/Unit Delay'
     *  UnitDelay: '<S398>/Delay Input1'
     *
     * Block description for '<S398>/Delay Input1':
     *
     *  Store in Global RAM
     */
    if (((Code_Gen_Model_B.Steering_Abs_Angle_Active) || (((int32_T)
           rtb_Compare_a) > ((int32_T)Code_Gen_Model_DW.DelayInput1_DSTATE_jp)))
        || (Code_Gen_Model_B.Active_GameState != 2)) {
      /* Switch: '<S390>/Switch8' */
      Code_Gen_Model_B.Steering_Abs_Gyro_Latch = Code_Gen_Model_B.Gyro_Angle_rad;
    } else {
      /* Switch: '<S390>/Switch8' incorporates:
       *  UnitDelay: '<S390>/Unit Delay3'
       */
      Code_Gen_Model_B.Steering_Abs_Gyro_Latch =
        Code_Gen_Model_DW.UnitDelay3_DSTATE;
    }

    /* End of Switch: '<S390>/Switch8' */

    /* Switch: '<S390>/Switch2' */
    if (Code_Gen_Model_B.Steering_Abs_Angle_Active) {
      /* Switch: '<S390>/Switch2' incorporates:
       *  Constant: '<S390>/Constant2'
       */
      Code_Gen_Model_B.Steering_Abs_Gyro = 0.0;
    } else {
      /* Switch: '<S390>/Switch2' */
      Code_Gen_Model_B.Steering_Abs_Gyro =
        Code_Gen_Model_B.Steering_Abs_Gyro_Latch;
    }

    /* End of Switch: '<S390>/Switch2' */

    /* Switch: '<S367>/Switch15' incorporates:
     *  Switch: '<S367>/Switch43'
     *  Switch: '<S367>/Switch44'
     *  Switch: '<S367>/Switch45'
     *  Switch: '<S367>/Switch46'
     *  Switch: '<S367>/Switch47'
     *  Switch: '<S367>/Switch48'
     *  Switch: '<S367>/Switch49'
     *  Switch: '<S367>/Switch5'
     *  Switch: '<S367>/Switch50'
     *  Switch: '<S367>/Switch51'
     *  Switch: '<S367>/Switch52'
     *  Switch: '<S367>/Switch53'
     *  Switch: '<S367>/Switch54'
     *  Switch: '<S367>/Switch6'
     *  Switch: '<S367>/Switch7'
     *  Switch: '<S367>/Switch8'
     *  Switch: '<S367>/Switch9'
     */
    if (rtb_Compare_kw) {
      /* Switch: '<S367>/Switch15' incorporates:
       *  Constant: '<S367>/Constant14'
       */
      Code_Gen_Model_B.AT_Field_Target_Angle = AT_CS_L_Angle_Blue;
    } else if (rtb_AT_CS_Left_Red_Active) {
      /* Switch: '<S367>/Switch15' incorporates:
       *  Constant: '<S367>/Constant13'
       *  Switch: '<S367>/Switch5'
       */
      Code_Gen_Model_B.AT_Field_Target_Angle = AT_CS_L_Angle_Red;
    } else if (rtb_AT_CS_Right_Blue_Active) {
      /* Switch: '<S367>/Switch15' incorporates:
       *  Constant: '<S367>/Constant12'
       *  Switch: '<S367>/Switch5'
       *  Switch: '<S367>/Switch6'
       */
      Code_Gen_Model_B.AT_Field_Target_Angle = AT_CS_R_Angle_Blue;
    } else if (rtb_AT_CS_Right_Red_Active) {
      /* Switch: '<S367>/Switch15' incorporates:
       *  Constant: '<S367>/Constant11'
       *  Switch: '<S367>/Switch5'
       *  Switch: '<S367>/Switch6'
       *  Switch: '<S367>/Switch7'
       */
      Code_Gen_Model_B.AT_Field_Target_Angle = AT_CS_R_Angle_Red;
    } else if (rtb_AT_Processor_Blue_Active) {
      /* Switch: '<S367>/Switch15' incorporates:
       *  Constant: '<S367>/Constant10'
       *  Switch: '<S367>/Switch5'
       *  Switch: '<S367>/Switch6'
       *  Switch: '<S367>/Switch7'
       *  Switch: '<S367>/Switch8'
       */
      Code_Gen_Model_B.AT_Field_Target_Angle = AT_Processor_Angle_Blue;
    } else if (rtb_AT_Processor_Red_Active) {
      /* Switch: '<S367>/Switch15' incorporates:
       *  Constant: '<S367>/Constant8'
       *  Switch: '<S367>/Switch5'
       *  Switch: '<S367>/Switch6'
       *  Switch: '<S367>/Switch7'
       *  Switch: '<S367>/Switch8'
       *  Switch: '<S367>/Switch9'
       */
      Code_Gen_Model_B.AT_Field_Target_Angle = AT_Processor_Angle_Red;
    } else if (rtb_Swerve_Motors_Disabled) {
      /* Switch: '<S367>/Switch15' incorporates:
       *  Constant: '<S367>/Constant49'
       *  Switch: '<S367>/Switch43'
       *  Switch: '<S367>/Switch5'
       *  Switch: '<S367>/Switch6'
       *  Switch: '<S367>/Switch7'
       *  Switch: '<S367>/Switch8'
       *  Switch: '<S367>/Switch9'
       */
      Code_Gen_Model_B.AT_Field_Target_Angle = AT_Cage_L_Start_Angle_Blue;
    } else if (rtb_Is_Absolute_Steering) {
      /* Switch: '<S367>/Switch15' incorporates:
       *  Constant: '<S367>/Constant48'
       *  Switch: '<S367>/Switch43'
       *  Switch: '<S367>/Switch44'
       *  Switch: '<S367>/Switch5'
       *  Switch: '<S367>/Switch6'
       *  Switch: '<S367>/Switch7'
       *  Switch: '<S367>/Switch8'
       *  Switch: '<S367>/Switch9'
       */
      Code_Gen_Model_B.AT_Field_Target_Angle = AT_Cage_L_Start_Angle_Red;
    } else if (rtb_Is_Absolute_Translation_g) {
      /* Switch: '<S367>/Switch15' incorporates:
       *  Constant: '<S367>/Constant47'
       *  Switch: '<S367>/Switch43'
       *  Switch: '<S367>/Switch44'
       *  Switch: '<S367>/Switch45'
       *  Switch: '<S367>/Switch5'
       *  Switch: '<S367>/Switch6'
       *  Switch: '<S367>/Switch7'
       *  Switch: '<S367>/Switch8'
       *  Switch: '<S367>/Switch9'
       */
      Code_Gen_Model_B.AT_Field_Target_Angle = AT_Cage_M_Start_Angle_Blue;
    } else if (rtb_AT_Cage_Middle_Start_Red_Ac) {
      /* Switch: '<S367>/Switch15' incorporates:
       *  Constant: '<S367>/Constant46'
       *  Switch: '<S367>/Switch43'
       *  Switch: '<S367>/Switch44'
       *  Switch: '<S367>/Switch45'
       *  Switch: '<S367>/Switch46'
       *  Switch: '<S367>/Switch5'
       *  Switch: '<S367>/Switch6'
       *  Switch: '<S367>/Switch7'
       *  Switch: '<S367>/Switch8'
       *  Switch: '<S367>/Switch9'
       */
      Code_Gen_Model_B.AT_Field_Target_Angle = AT_Cage_M_Start_Angle_Red;
    } else if (rtb_AT_Cage_Right_Start_Blue_Ac) {
      /* Switch: '<S367>/Switch15' incorporates:
       *  Constant: '<S367>/Constant1'
       *  Switch: '<S367>/Switch43'
       *  Switch: '<S367>/Switch44'
       *  Switch: '<S367>/Switch45'
       *  Switch: '<S367>/Switch46'
       *  Switch: '<S367>/Switch47'
       *  Switch: '<S367>/Switch5'
       *  Switch: '<S367>/Switch6'
       *  Switch: '<S367>/Switch7'
       *  Switch: '<S367>/Switch8'
       *  Switch: '<S367>/Switch9'
       */
      Code_Gen_Model_B.AT_Field_Target_Angle = AT_Cage_R_Start_Angle_Blue;
    } else if (rtb_AT_Cage_Right_Start_Red_Act) {
      /* Switch: '<S367>/Switch15' incorporates:
       *  Constant: '<S367>/Constant50'
       *  Switch: '<S367>/Switch43'
       *  Switch: '<S367>/Switch44'
       *  Switch: '<S367>/Switch45'
       *  Switch: '<S367>/Switch46'
       *  Switch: '<S367>/Switch47'
       *  Switch: '<S367>/Switch48'
       *  Switch: '<S367>/Switch5'
       *  Switch: '<S367>/Switch6'
       *  Switch: '<S367>/Switch7'
       *  Switch: '<S367>/Switch8'
       *  Switch: '<S367>/Switch9'
       */
      Code_Gen_Model_B.AT_Field_Target_Angle = AT_Cage_R_Start_Angle_Red;
    } else if (rtb_AT_Cage_Left_Finish_Blue_Ac) {
      /* Switch: '<S367>/Switch15' incorporates:
       *  Constant: '<S367>/Constant55'
       *  Switch: '<S367>/Switch43'
       *  Switch: '<S367>/Switch44'
       *  Switch: '<S367>/Switch45'
       *  Switch: '<S367>/Switch46'
       *  Switch: '<S367>/Switch47'
       *  Switch: '<S367>/Switch48'
       *  Switch: '<S367>/Switch49'
       *  Switch: '<S367>/Switch5'
       *  Switch: '<S367>/Switch6'
       *  Switch: '<S367>/Switch7'
       *  Switch: '<S367>/Switch8'
       *  Switch: '<S367>/Switch9'
       */
      Code_Gen_Model_B.AT_Field_Target_Angle = AT_Cage_L_Finish_Angle_Blue;
    } else if (rtb_AT_Cage_Left_Finish_Red_Act) {
      /* Switch: '<S367>/Switch15' incorporates:
       *  Constant: '<S367>/Constant54'
       *  Switch: '<S367>/Switch43'
       *  Switch: '<S367>/Switch44'
       *  Switch: '<S367>/Switch45'
       *  Switch: '<S367>/Switch46'
       *  Switch: '<S367>/Switch47'
       *  Switch: '<S367>/Switch48'
       *  Switch: '<S367>/Switch49'
       *  Switch: '<S367>/Switch5'
       *  Switch: '<S367>/Switch50'
       *  Switch: '<S367>/Switch6'
       *  Switch: '<S367>/Switch7'
       *  Switch: '<S367>/Switch8'
       *  Switch: '<S367>/Switch9'
       */
      Code_Gen_Model_B.AT_Field_Target_Angle = AT_Cage_L_Finish_Angle_Red;
    } else if (rtb_AT_Cage_Middle_Finish_Blue_) {
      /* Switch: '<S367>/Switch15' incorporates:
       *  Constant: '<S367>/Constant53'
       *  Switch: '<S367>/Switch43'
       *  Switch: '<S367>/Switch44'
       *  Switch: '<S367>/Switch45'
       *  Switch: '<S367>/Switch46'
       *  Switch: '<S367>/Switch47'
       *  Switch: '<S367>/Switch48'
       *  Switch: '<S367>/Switch49'
       *  Switch: '<S367>/Switch5'
       *  Switch: '<S367>/Switch50'
       *  Switch: '<S367>/Switch51'
       *  Switch: '<S367>/Switch6'
       *  Switch: '<S367>/Switch7'
       *  Switch: '<S367>/Switch8'
       *  Switch: '<S367>/Switch9'
       */
      Code_Gen_Model_B.AT_Field_Target_Angle = AT_Cage_M_Finish_Angle_Blue;
    } else if (rtb_AT_Cage_Middle_Finish_Red_A) {
      /* Switch: '<S367>/Switch15' incorporates:
       *  Constant: '<S367>/Constant52'
       *  Switch: '<S367>/Switch43'
       *  Switch: '<S367>/Switch44'
       *  Switch: '<S367>/Switch45'
       *  Switch: '<S367>/Switch46'
       *  Switch: '<S367>/Switch47'
       *  Switch: '<S367>/Switch48'
       *  Switch: '<S367>/Switch49'
       *  Switch: '<S367>/Switch5'
       *  Switch: '<S367>/Switch50'
       *  Switch: '<S367>/Switch51'
       *  Switch: '<S367>/Switch52'
       *  Switch: '<S367>/Switch6'
       *  Switch: '<S367>/Switch7'
       *  Switch: '<S367>/Switch8'
       *  Switch: '<S367>/Switch9'
       */
      Code_Gen_Model_B.AT_Field_Target_Angle = AT_Cage_M_Finish_Angle_Red;
    } else if (rtb_AT_Cage_Right_Finish_Blue_A) {
      /* Switch: '<S367>/Switch53' incorporates:
       *  Constant: '<S367>/Constant51'
       *  Switch: '<S367>/Switch15'
       *  Switch: '<S367>/Switch43'
       *  Switch: '<S367>/Switch44'
       *  Switch: '<S367>/Switch45'
       *  Switch: '<S367>/Switch46'
       *  Switch: '<S367>/Switch47'
       *  Switch: '<S367>/Switch48'
       *  Switch: '<S367>/Switch49'
       *  Switch: '<S367>/Switch5'
       *  Switch: '<S367>/Switch50'
       *  Switch: '<S367>/Switch51'
       *  Switch: '<S367>/Switch52'
       *  Switch: '<S367>/Switch6'
       *  Switch: '<S367>/Switch7'
       *  Switch: '<S367>/Switch8'
       *  Switch: '<S367>/Switch9'
       */
      Code_Gen_Model_B.AT_Field_Target_Angle = AT_Cage_R_Finish_Angle_Blue;
    } else if (rtb_AT_Cage_Right_Finish_Red_Ac) {
      /* Switch: '<S367>/Switch54' incorporates:
       *  Constant: '<S367>/Constant56'
       *  Switch: '<S367>/Switch15'
       *  Switch: '<S367>/Switch43'
       *  Switch: '<S367>/Switch44'
       *  Switch: '<S367>/Switch45'
       *  Switch: '<S367>/Switch46'
       *  Switch: '<S367>/Switch47'
       *  Switch: '<S367>/Switch48'
       *  Switch: '<S367>/Switch49'
       *  Switch: '<S367>/Switch5'
       *  Switch: '<S367>/Switch50'
       *  Switch: '<S367>/Switch51'
       *  Switch: '<S367>/Switch52'
       *  Switch: '<S367>/Switch53'
       *  Switch: '<S367>/Switch6'
       *  Switch: '<S367>/Switch7'
       *  Switch: '<S367>/Switch8'
       *  Switch: '<S367>/Switch9'
       */
      Code_Gen_Model_B.AT_Field_Target_Angle = AT_Cage_R_Finish_Angle_Red;
    } else {
      /* Switch: '<S367>/Switch15' incorporates:
       *  Switch: '<S367>/Switch43'
       *  Switch: '<S367>/Switch44'
       *  Switch: '<S367>/Switch45'
       *  Switch: '<S367>/Switch46'
       *  Switch: '<S367>/Switch47'
       *  Switch: '<S367>/Switch48'
       *  Switch: '<S367>/Switch49'
       *  Switch: '<S367>/Switch5'
       *  Switch: '<S367>/Switch50'
       *  Switch: '<S367>/Switch51'
       *  Switch: '<S367>/Switch52'
       *  Switch: '<S367>/Switch6'
       *  Switch: '<S367>/Switch7'
       *  Switch: '<S367>/Switch8'
       *  Switch: '<S367>/Switch9'
       *  UnitDelay: '<S367>/Unit Delay1'
       */
      Code_Gen_Model_B.AT_Field_Target_Angle =
        Code_Gen_Model_DW.UnitDelay1_DSTATE_e1;
    }

    /* End of Switch: '<S367>/Switch15' */

    /* Switch: '<S390>/Switch4' incorporates:
     *  Constant: '<S390>/Constant5'
     *  Switch: '<S390>/Switch1'
     *  Switch: '<S390>/Switch5'
     *  Switch: '<S390>/Switch6'
     *  Switch: '<S390>/Switch7'
     */
    if (Code_Gen_Model_B.Face_Away_Driver) {
      rtb_Switch4 = 0.0;
    } else if (Code_Gen_Model_B.Face_Left_Driver) {
      /* Switch: '<S390>/Switch5' incorporates:
       *  Constant: '<S390>/Constant6'
       */
      rtb_Switch4 = 1.5707963267948966;
    } else if (Code_Gen_Model_B.Face_Toward_Driver) {
      /* Switch: '<S390>/Switch6' incorporates:
       *  Constant: '<S390>/Constant7'
       *  Switch: '<S390>/Switch5'
       */
      rtb_Switch4 = 3.1415926535897931;
    } else if (Code_Gen_Model_B.Face_Right_Driver) {
      /* Switch: '<S390>/Switch7' incorporates:
       *  Constant: '<S390>/Constant8'
       *  Switch: '<S390>/Switch5'
       *  Switch: '<S390>/Switch6'
       */
      rtb_Switch4 = 4.71238898038469;
    } else if (rtb_FixPtRelationalOperator_m) {
      /* Switch: '<S390>/Switch1' incorporates:
       *  Switch: '<S390>/Switch5'
       *  Switch: '<S390>/Switch6'
       *  Switch: '<S390>/Switch7'
       */
      rtb_Switch4 = Code_Gen_Model_B.AT_Field_Target_Angle;
    } else {
      /* Switch: '<S390>/Switch6' incorporates:
       *  Switch: '<S390>/Switch5'
       *  Switch: '<S390>/Switch7'
       *  UnitDelay: '<S390>/Unit Delay1'
       */
      rtb_Switch4 = Code_Gen_Model_DW.UnitDelay1_DSTATE_j2;
    }

    /* End of Switch: '<S390>/Switch4' */

    /* Switch: '<S390>/Switch3' */
    if (Code_Gen_Model_B.Steering_Abs_Angle_Active) {
      /* Switch: '<S390>/Switch3' */
      Code_Gen_Model_B.Steering_Abs_Angle = rtb_Switch4;
    } else {
      /* Switch: '<S390>/Switch3' incorporates:
       *  Constant: '<S390>/Constant3'
       */
      Code_Gen_Model_B.Steering_Abs_Angle = 0.0;
    }

    /* End of Switch: '<S390>/Switch3' */

    /* Merge: '<S16>/Merge1' incorporates:
     *  Sum: '<S390>/Add1'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd = Code_Gen_Model_B.Steering_Abs_Angle +
      Code_Gen_Model_B.Steering_Abs_Gyro;

    /* Switch: '<S371>/Switch1' incorporates:
     *  Constant: '<S371>/Constant5'
     *  Constant: '<S371>/Constant7'
     *  Constant: '<S371>/Constant8'
     *  DataTypeConversion: '<S371>/Data Type Conversion'
     *  DataTypeConversion: '<S371>/Data Type Conversion1'
     *  Switch: '<S371>/Switch'
     *  Switch: '<S391>/Switch7'
     */
    if (TEST_Swerve_Mode_Override_Flag != 0.0) {
      rtb_Is_Absolute_Steering = (TEST_Swerve_Mode_Steering != 0.0);
      rtb_Is_Absolute_Translation_g = (TEST_Swerve_Mode_Translation != 0.0);
    } else {
      rtb_Is_Absolute_Steering = rtb_Compare_a;
      rtb_Is_Absolute_Translation_g = !Compare;
    }

    /* End of Switch: '<S371>/Switch1' */

    /* Merge: '<S16>/Merge2' incorporates:
     *  SignalConversion: '<S390>/Signal Copy'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd = rtb_Enable_Wheels;

    /* Merge: '<S16>/Merge13' incorporates:
     *  SignalConversion generated from: '<S22>/Coral_Arm_Angle_Desired'
     */
    Code_Gen_Model_B.Coral_Arm_Angle_Desired =
      Code_Gen_Model_B.Coral_Arm_Angle_Desired_o;

    /* SignalConversion generated from: '<S22>/Coral_Pickup_Lower_Wait_State' */
    rtb_Compare_kw = Code_Gen_Model_B.Coral_Pickup_Lower_Wait_State;

    /* SignalConversion generated from: '<S22>/Coral_Wheel_DutyCycle' */
    rtb_Coral_Wheel_DutyCycle = Code_Gen_Model_B.Coral_Wheel_DC;

    /* Merge: '<S16>/Merge11' incorporates:
     *  SignalConversion generated from: '<S22>/Elevator_Height_Desired'
     */
    Code_Gen_Model_B.Elevator_Height_Desired =
      Code_Gen_Model_B.Elevator_Height_Desired_m;

    /* Merge: '<S16>/Merge21' incorporates:
     *  SignalConversion generated from: '<S22>/Elevator_LowerPickup_Reset'
     */
    Code_Gen_Model_B.Elevator_LowerPickup_Reset_tp =
      Code_Gen_Model_B.Elevator_LowerPickup_Reset;

    /* Merge: '<S16>/Merge12' incorporates:
     *  Constant: '<S370>/Constant5'
     *  SignalConversion generated from: '<S22>/Reefscape_Motors_Enable'
     */
    Code_Gen_Model_B.Reefscape_Motors_Enable = true;

    /* Merge: '<S16>/Merge7' incorporates:
     *  Constant: '<S22>/Constant3'
     *  SignalConversion generated from: '<S22>/Spline_Enable'
     */
    Code_Gen_Model_B.Spline_Enable = false;

    /* Merge: '<S16>/Merge9' incorporates:
     *  Constant: '<S22>/Constant9'
     *  SignalConversion generated from: '<S22>/Spline_Num_Poses'
     */
    Code_Gen_Model_B.Spline_Num_Poses = 10.0;

    /* Merge: '<S16>/Merge10' incorporates:
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
    rtb_Reset_Wheel_Offsets = 0.0;

    /* SignalConversion generated from: '<S22>/Disable_Wheels' incorporates:
     *  Constant: '<S22>/Constant14'
     */
    rtb_Disable_Wheels = 0.0;

    /* SignalConversion generated from: '<S22>/Swerve_Motors_Disabled' incorporates:
     *  Constant: '<S22>/Constant2'
     */
    rtb_Swerve_Motors_Disabled = false;

    /* Update for UnitDelay: '<S404>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_l = rtb_Rotationmatrixfromlocalto_1;

    /* Update for UnitDelay: '<S404>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_p = rtb_Rotationmatrixfromlocalto_0;

    /* Update for UnitDelay: '<S411>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_B1_A'
     *
     * Block description for '<S411>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_c = Code_Gen_Model_U.Gamepad_B1_A;

    /* Update for UnitDelay: '<S412>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_B2_B'
     *
     * Block description for '<S412>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_nr = Code_Gen_Model_U.Gamepad_B2_B;

    /* Update for UnitDelay: '<S416>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_B3_X'
     *
     * Block description for '<S416>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_ez = Code_Gen_Model_U.Gamepad_B3_X;

    /* Update for UnitDelay: '<S417>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_B4_Y'
     *
     * Block description for '<S417>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_nh = Code_Gen_Model_U.Gamepad_B4_Y;

    /* Update for UnitDelay: '<S418>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_Start'
     *
     * Block description for '<S418>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_i = Code_Gen_Model_U.Gamepad_Start;

    /* Update for UnitDelay: '<S413>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_Back'
     *
     * Block description for '<S413>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_cp = Code_Gen_Model_U.Gamepad_Back;

    /* Update for UnitDelay: '<S419>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_RB'
     *
     * Block description for '<S419>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_p = Code_Gen_Model_U.Gamepad_RB;

    /* Update for UnitDelay: '<S422>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_LT'
     *
     * Block description for '<S422>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_o = Code_Gen_Model_U.Gamepad_LT;

    /* Update for UnitDelay: '<S423>/Delay Input1' incorporates:
     *  Inport: '<Root>/Gamepad_RT'
     *
     * Block description for '<S423>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_j = Code_Gen_Model_U.Gamepad_RT;

    /* Update for UnitDelay: '<S420>/Delay Input1'
     *
     * Block description for '<S420>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_oy = Code_Gen_Model_B.Gamepad_POV_Up;

    /* Update for UnitDelay: '<S421>/Delay Input1'
     *
     * Block description for '<S421>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_f = Code_Gen_Model_B.Gamepad_POV_Down;

    /* Update for UnitDelay: '<S414>/Delay Input1'
     *
     * Block description for '<S414>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_o5 = Code_Gen_Model_B.Gamepad_POV_Left;

    /* Update for UnitDelay: '<S415>/Delay Input1'
     *
     * Block description for '<S415>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_a = Code_Gen_Model_B.Gamepad_POV_Right;

    /* Update for UnitDelay: '<S368>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_kq = rtb_Switch2_ji;

    /* Update for UnitDelay: '<S368>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_nr = rtb_Switch_b5;

    /* Update for UnitDelay: '<S408>/FixPt Unit Delay2' incorporates:
     *  Constant: '<S408>/FixPt Constant'
     */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_a = 0U;

    /* Update for UnitDelay: '<S408>/FixPt Unit Delay1' */
    Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_f = rtb_Sum_jt;

    /* Update for UnitDelay: '<S398>/Delay Input1'
     *
     * Block description for '<S398>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_jp = rtb_Compare_a;

    /* Update for UnitDelay: '<S397>/Delay Input1'
     *
     * Block description for '<S397>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_ft = Compare_f;

    /* Update for UnitDelay: '<S393>/Delay Input1'
     *
     * Block description for '<S393>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_m = Code_Gen_Model_B.Face_Away_Driver;

    /* Update for UnitDelay: '<S394>/Delay Input1'
     *
     * Block description for '<S394>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_k = Code_Gen_Model_B.Face_Left_Driver;

    /* Update for UnitDelay: '<S395>/Delay Input1'
     *
     * Block description for '<S395>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_g = Code_Gen_Model_B.Face_Toward_Driver;

    /* Update for UnitDelay: '<S396>/Delay Input1'
     *
     * Block description for '<S396>/Delay Input1':
     *
     *  Store in Global RAM
     */
    Code_Gen_Model_DW.DelayInput1_DSTATE_g2 = Code_Gen_Model_B.Face_Right_Driver;

    /* Update for UnitDelay: '<S390>/Unit Delay2' */
    Code_Gen_Model_DW.UnitDelay2_DSTATE = FixPtRelationalOperator_ne;

    /* Update for UnitDelay: '<S390>/Unit Delay4' */
    Code_Gen_Model_DW.UnitDelay4_DSTATE = rtb_FixPtRelationalOperator_m;

    /* Update for UnitDelay: '<S390>/Unit Delay3' */
    Code_Gen_Model_DW.UnitDelay3_DSTATE =
      Code_Gen_Model_B.Steering_Abs_Gyro_Latch;

    /* Update for UnitDelay: '<S367>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_e1 =
      Code_Gen_Model_B.AT_Field_Target_Angle;

    /* Update for UnitDelay: '<S390>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE_j2 = rtb_Switch4;

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
    /* Merge: '<S16>/Merge1' incorporates:
     *  Constant: '<S23>/Constant1'
     *  SignalConversion generated from: '<S23>/Steering_Abs_Cmd'
     */
    Code_Gen_Model_B.Steering_Abs_Cmd = 0.0;

    /* Merge: '<S16>/Merge2' incorporates:
     *  Constant: '<S23>/Constant2'
     *  SignalConversion generated from: '<S23>/Steering_Rel_Cmd'
     */
    Code_Gen_Model_B.Steering_Rel_Cmd = 0.0;

    /* Merge: '<S16>/Merge3' incorporates:
     *  Constant: '<S23>/Constant3'
     *  SignalConversion generated from: '<S23>/Translation_Angle'
     */
    Code_Gen_Model_B.Translation_Angle = 0.0;

    /* Merge: '<S16>/Merge4' incorporates:
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

    /* Merge: '<S16>/Merge7' incorporates:
     *  Constant: '<S23>/Constant7'
     *  SignalConversion generated from: '<S23>/Spline_Enable'
     */
    Code_Gen_Model_B.Spline_Enable = false;

    /* Merge: '<S16>/Merge9' incorporates:
     *  Constant: '<S23>/Constant9'
     *  SignalConversion generated from: '<S23>/Spline_Num_Poses'
     */
    Code_Gen_Model_B.Spline_Num_Poses = 10.0;

    /* Merge: '<S16>/Merge10' incorporates:
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

    /* Merge: '<S16>/Merge12' incorporates:
     *  Constant: '<S23>/Constant11'
     *  SignalConversion generated from: '<S23>/Reefscape_Motors_Enable'
     */
    Code_Gen_Model_B.Reefscape_Motors_Enable = false;

    /* Merge: '<S16>/Merge11' incorporates:
     *  Constant: '<S23>/Constant10'
     *  SignalConversion generated from: '<S23>/Elevator_Height_Desired'
     */
    Code_Gen_Model_B.Elevator_Height_Desired = 0.0;

    /* Merge: '<S16>/Merge13' incorporates:
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

    /* Merge: '<S16>/Merge21' incorporates:
     *  Constant: '<S23>/Constant19'
     *  SignalConversion generated from: '<S23>/Elevator_LowerPickup_Reset'
     */
    Code_Gen_Model_B.Elevator_LowerPickup_Reset_tp = false;

    /* SignalConversion generated from: '<S23>/Coral_Pickup_Lower_Wait_State' incorporates:
     *  Constant: '<S23>/Constant20'
     */
    rtb_Compare_kw = false;

    /* Merge: '<S16>/Merge23' incorporates:
     *  Constant: '<S23>/Constant21'
     *  SignalConversion generated from: '<S23>/Swerve_Drive_Integral_Enable'
     */
    Code_Gen_Model_B.Swerve_Drive_Integral_Enable = false;

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

  /* If: '<S19>/If' incorporates:
   *  Constant: '<S152>/Constant'
   *  Merge: '<S19>/Merge'
   *  Merge: '<S19>/Merge1'
   *  Merge: '<S19>/Merge2'
   *  Merge: '<S19>/Merge3'
   *  Merge: '<S19>/Merge4'
   *  Merge: '<S19>/Merge5'
   *  Merge: '<S19>/Merge7'
   *  Merge: '<S19>/Merge8'
   *  SignalConversion generated from: '<S152>/Robot_Reached_Destination'
   */
  rtPrevAction = Code_Gen_Model_DW.If_ActiveSubsystem;
  Code_Gen_Model_DW.If_ActiveSubsystem = 1;
  if ((rtPrevAction != 1) && (rtPrevAction == 0)) {
    /* Disable for If: '<S158>/If' */
    if (Code_Gen_Model_DW.If_ActiveSubsystem_h == 0) {
      /* Disable for If: '<S161>/If' */
      if (Code_Gen_Model_DW.If_ActiveSubsystem_o == 0) {
        /* Disable for If: '<S163>/If' */
        Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;
      }

      Code_Gen_Model_DW.If_ActiveSubsystem_o = -1;

      /* End of Disable for If: '<S161>/If' */
    }

    Code_Gen_Model_DW.If_ActiveSubsystem_h = -1;

    /* End of Disable for If: '<S158>/If' */
  }

  /* Outputs for IfAction SubSystem: '<S19>/Pass Through' incorporates:
   *  ActionPort: '<S152>/Action Port'
   */
  Code_Gen_Model_B.Robot_Reached_Destination = true;
  Code_Gen_Model_B.Steering_Abs_Cmd_SPF = Code_Gen_Model_B.Steering_Abs_Cmd;
  Code_Gen_Model_B.Steering_Rel_Cmd_SPF = Code_Gen_Model_B.Steering_Rel_Cmd;
  Code_Gen_Model_B.Translation_Speed_SPF = Code_Gen_Model_B.Translation_Speed;
  Code_Gen_Model_B.Translation_Angle_SPF = Code_Gen_Model_B.Translation_Angle;
  Code_Gen_Model_B.Is_Absolute_Translation_SPF = rtb_Is_Absolute_Translation_g;
  Code_Gen_Model_B.Is_Absolute_Steering_SPF = rtb_Is_Absolute_Steering;
  Code_Gen_Model_B.Gyro_Angle_SPF = Code_Gen_Model_B.Gyro_Angle_rad;

  /* End of If: '<S19>/If' */
  /* End of Outputs for SubSystem: '<S19>/Pass Through' */

  /* Signum: '<S306>/Sign2' incorporates:
   *  UnitDelay: '<S306>/Unit Delay'
   */
  if (rtIsNaN(Code_Gen_Model_B.Translation_Speed_RL)) {
    rtb_Minus_k_idx_0 = (rtNaN);
  } else if (Code_Gen_Model_B.Translation_Speed_RL < 0.0) {
    rtb_Minus_k_idx_0 = -1.0;
  } else {
    rtb_Minus_k_idx_0 = (Code_Gen_Model_B.Translation_Speed_RL > 0.0);
  }

  /* Signum: '<S306>/Sign1' */
  if (rtIsNaN(Code_Gen_Model_B.Translation_Speed_SPF)) {
    rtb_Switch2_fx = (rtNaN);
  } else if (Code_Gen_Model_B.Translation_Speed_SPF < 0.0) {
    rtb_Switch2_fx = -1.0;
  } else {
    rtb_Switch2_fx = (Code_Gen_Model_B.Translation_Speed_SPF > 0.0);
  }

  /* Product: '<S306>/Product1' incorporates:
   *  Signum: '<S306>/Sign1'
   *  Signum: '<S306>/Sign2'
   */
  rtb_Minus_k_idx_0 *= rtb_Switch2_fx;
  if (rtIsNaN(rtb_Minus_k_idx_0)) {
    i = 0;
  } else {
    i = (int32_T)fmod(rtb_Minus_k_idx_0, 256.0);
  }

  /* Switch: '<S306>/Switch' incorporates:
   *  Constant: '<S306>/Constant'
   *  Constant: '<S311>/Constant'
   *  Constant: '<S312>/Constant'
   *  Logic: '<S306>/or'
   *  Product: '<S306>/Product1'
   *  RelationalOperator: '<S311>/Compare'
   *  RelationalOperator: '<S312>/Compare'
   *  UnitDelay: '<S306>/Unit Delay'
   */
  if ((Code_Gen_Model_B.Translation_Speed_RL == 0.0) || (((i < 0) ? ((int32_T)
         ((int8_T)(-((int8_T)((uint8_T)(-((real_T)i))))))) : i) > 0)) {
    rtb_Switch2_g = Code_Gen_Model_B.Translation_Speed_SPF;
  } else {
    rtb_Switch2_g = 0.0;
  }

  /* End of Switch: '<S306>/Switch' */

  /* Switch: '<S317>/Init' incorporates:
   *  UnitDelay: '<S317>/FixPt Unit Delay1'
   *  UnitDelay: '<S317>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE != 0) {
    rtb_Init = rtb_Switch2_g;
  } else {
    rtb_Init = Code_Gen_Model_B.Translation_Speed_RL;
  }

  /* End of Switch: '<S317>/Init' */

  /* RelationalOperator: '<S313>/Compare' incorporates:
   *  Constant: '<S313>/Constant'
   */
  rtb_Is_Absolute_Steering = (rtb_Switch2_g == 0.0);

  /* RelationalOperator: '<S314>/Compare' incorporates:
   *  Constant: '<S314>/Constant'
   */
  rtb_Is_Absolute_Translation_g = (rtb_Switch2_g > 0.0);

  /* Abs: '<S306>/Abs' incorporates:
   *  Sum: '<S306>/Subtract'
   *  UnitDelay: '<S306>/Unit Delay'
   */
  rtb_Merge1 = fabs(Code_Gen_Model_B.Translation_Speed_RL -
                    Code_Gen_Model_B.Translation_Speed_SPF);

  /* Switch: '<S306>/Switch5' incorporates:
   *  Constant: '<S306>/Constant1'
   *  Switch: '<S306>/Switch1'
   *  UnaryMinus: '<S306>/Unary Minus'
   */
  if (rtb_Is_Absolute_Steering) {
    /* SignalConversion generated from: '<S306>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S306>/Constant4'
     *  Constant: '<S306>/Constant6'
     */
    rtb_Reshapey[0] = Translation_Speed_Approach_Zero_Final_Thresh;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S306>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S306>/Constant2'
     *  Constant: '<S306>/Constant5'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Translation_Speed_Approach_Zero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S306>/Lookup Table Dynamic' */
    /* Dynamic Look-Up Table Block: '<S306>/Lookup Table Dynamic'
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
    /* SignalConversion generated from: '<S306>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S306>/Constant10'
     *  Constant: '<S306>/Constant8'
     */
    rtb_Reshapey[0] = Translation_Speed_NonZero_Final_Scale_Factor;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S306>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S306>/Constant7'
     *  Constant: '<S306>/Constant9'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Translation_Speed_NonZero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S306>/Lookup Table Dynamic1' */
    /* Dynamic Look-Up Table Block: '<S306>/Lookup Table Dynamic1'
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

    /* Switch: '<S306>/Switch3' incorporates:
     *  Constant: '<S306>/Constant1'
     *  Constant: '<S306>/Constant3'
     *  UnaryMinus: '<S306>/Unary Minus'
     */
    if (rtb_Is_Absolute_Translation_g) {
      rtb_Minus_k_idx_0 = Translation_Speed_Rate_Limit_Inc;
    } else {
      rtb_Minus_k_idx_0 = -Translation_Speed_Rate_Limit_Dec;
    }

    /* End of Switch: '<S306>/Switch3' */
  }

  /* End of Switch: '<S306>/Switch5' */

  /* Product: '<S306>/Product' incorporates:
   *  Switch: '<S306>/Switch1'
   */
  rtb_Optimized_Module_Angle = rtb_Minus_k_idx_0 * rtb_Merge1;

  /* Sum: '<S315>/Sum1' */
  rtb_Rotationmatrixfromlocalto_1 = rtb_Switch2_g - rtb_Init;

  /* Switch: '<S316>/Switch2' incorporates:
   *  RelationalOperator: '<S316>/LowerRelop1'
   */
  if (!(rtb_Rotationmatrixfromlocalto_1 > rtb_Optimized_Module_Angle)) {
    /* Switch: '<S306>/Switch2' incorporates:
     *  Constant: '<S306>/Constant1'
     *  Constant: '<S306>/Constant3'
     *  Switch: '<S306>/Switch4'
     *  UnaryMinus: '<S306>/Unary Minus1'
     */
    if (rtb_Is_Absolute_Steering) {
      rtb_Minus_k_idx_0 = Translation_Speed_Rate_Limit_Dec;
    } else if (rtb_Is_Absolute_Translation_g) {
      /* Switch: '<S306>/Switch4' incorporates:
       *  Constant: '<S306>/Constant1'
       */
      rtb_Minus_k_idx_0 = Translation_Speed_Rate_Limit_Dec;
    } else {
      rtb_Minus_k_idx_0 = -Translation_Speed_Rate_Limit_Inc;
    }

    /* Product: '<S306>/Product2' incorporates:
     *  Switch: '<S306>/Switch2'
     */
    rtb_Rotationmatrixfromlocalto_0 = rtb_Minus_k_idx_0 * rtb_Merge1;

    /* Switch: '<S316>/Switch' incorporates:
     *  RelationalOperator: '<S316>/UpperRelop'
     */
    if (rtb_Rotationmatrixfromlocalto_1 < rtb_Rotationmatrixfromlocalto_0) {
      rtb_Optimized_Module_Angle = rtb_Rotationmatrixfromlocalto_0;
    } else {
      rtb_Optimized_Module_Angle = rtb_Rotationmatrixfromlocalto_1;
    }

    /* End of Switch: '<S316>/Switch' */
  }

  /* End of Switch: '<S316>/Switch2' */

  /* Sum: '<S315>/Sum' */
  Code_Gen_Model_B.Translation_Speed_RL = rtb_Optimized_Module_Angle + rtb_Init;

  /* Switch: '<S309>/Switch' */
  if (Code_Gen_Model_B.Is_Absolute_Translation_SPF) {
    /* Switch: '<S309>/Switch' incorporates:
     *  Constant: '<S341>/Constant3'
     *  Constant: '<S341>/Constant4'
     *  Math: '<S341>/Math Function'
     *  Sum: '<S309>/Subtract'
     *  Sum: '<S341>/Add1'
     *  Sum: '<S341>/Add2'
     */
    Code_Gen_Model_B.Translation_Steering_Cmd = rt_modd_snf
      ((Code_Gen_Model_B.Translation_Angle_SPF - Code_Gen_Model_B.Gyro_Angle_SPF)
       + 3.1415926535897931, 6.2831853071795862) - 3.1415926535897931;
  } else {
    /* Switch: '<S309>/Switch' */
    Code_Gen_Model_B.Translation_Steering_Cmd =
      Code_Gen_Model_B.Translation_Angle_SPF;
  }

  /* End of Switch: '<S309>/Switch' */

  /* Sum: '<S337>/Add1' incorporates:
   *  Constant: '<S337>/Constant3'
   *  Constant: '<S337>/Constant4'
   *  Math: '<S337>/Math Function'
   *  Sum: '<S336>/Sum'
   *  Sum: '<S337>/Add2'
   */
  rtb_Init = rt_modd_snf((Code_Gen_Model_B.Steering_Abs_Cmd_SPF -
    Code_Gen_Model_B.Gyro_Angle_SPF) + 3.1415926535897931, 6.2831853071795862) -
    3.1415926535897931;

  /* Sum: '<S339>/Sum1' incorporates:
   *  Constant: '<S336>/Constant2'
   *  Product: '<S339>/Product'
   *  Sum: '<S339>/Sum'
   *  UnitDelay: '<S339>/Unit Delay1'
   */
  rtb_Merge1 = ((rtb_Init - Code_Gen_Model_DW.UnitDelay1_DSTATE_i) *
                Steering_Heading_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_i;

  /* Product: '<S336>/Product' incorporates:
   *  Constant: '<S336>/Constant3'
   */
  rtb_Rotationmatrixfromlocalto_1 = rtb_Merge1 * Steering_Heading_Control_D;

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
    Code_Gen_Model_DW.UD_DSTATE_a;

  /* Saturate: '<S336>/Saturation' */
  if (rtb_Minus_k_idx_0 > Steering_Heading_Control_D_UL) {
    rtb_Minus_k_idx_0 = Steering_Heading_Control_D_UL;
  } else if (rtb_Minus_k_idx_0 < Steering_Heading_Control_D_LL) {
    rtb_Minus_k_idx_0 = Steering_Heading_Control_D_LL;
  }

  /* Sum: '<S336>/Add' incorporates:
   *  Gain: '<S336>/Gain1'
   *  Saturate: '<S336>/Saturation'
   */
  rtb_Switch2_ji = (Steering_Heading_Control_P * rtb_Init) + rtb_Minus_k_idx_0;

  /* Sum: '<S336>/Subtract' incorporates:
   *  Constant: '<S336>/Constant'
   */
  rtb_Optimized_Module_Angle = Steering_Heading_Control_Total_UL -
    rtb_Switch2_ji;

  /* Sum: '<S336>/Sum2' incorporates:
   *  Gain: '<S336>/Gain2'
   *  UnitDelay: '<S336>/Unit Delay'
   */
  rtb_Rotationmatrixfromlocalto_0 = (Steering_Heading_Control_I * rtb_Init) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_m;

  /* Switch: '<S340>/Switch2' incorporates:
   *  RelationalOperator: '<S340>/LowerRelop1'
   */
  if (!(rtb_Rotationmatrixfromlocalto_0 > rtb_Optimized_Module_Angle)) {
    /* Sum: '<S336>/Subtract1' incorporates:
     *  Constant: '<S336>/Constant1'
     */
    rtb_Switch_b5 = Steering_Heading_Control_Total_LL - rtb_Switch2_ji;

    /* Switch: '<S340>/Switch' incorporates:
     *  RelationalOperator: '<S340>/UpperRelop'
     */
    if (rtb_Rotationmatrixfromlocalto_0 < rtb_Switch_b5) {
      rtb_Optimized_Module_Angle = rtb_Switch_b5;
    } else {
      rtb_Optimized_Module_Angle = rtb_Rotationmatrixfromlocalto_0;
    }

    /* End of Switch: '<S340>/Switch' */
  }

  /* End of Switch: '<S340>/Switch2' */

  /* Saturate: '<S336>/Saturation1' */
  if (rtb_Optimized_Module_Angle > Steering_Heading_Control_I_UL) {
    rtb_Rotationmatrixfromlocalto_0 = Steering_Heading_Control_I_UL;
  } else if (rtb_Optimized_Module_Angle < Steering_Heading_Control_I_LL) {
    rtb_Rotationmatrixfromlocalto_0 = Steering_Heading_Control_I_LL;
  } else {
    rtb_Rotationmatrixfromlocalto_0 = rtb_Optimized_Module_Angle;
  }

  /* End of Saturate: '<S336>/Saturation1' */

  /* Sum: '<S336>/Add1' */
  rtb_Minus_k_idx_0 = rtb_Switch2_ji + rtb_Rotationmatrixfromlocalto_0;

  /* Saturate: '<S336>/Saturation2' */
  if (rtb_Minus_k_idx_0 > Steering_Heading_Control_Total_UL) {
    /* Saturate: '<S336>/Saturation2' */
    Code_Gen_Model_B.Steering_Localized_PID = Steering_Heading_Control_Total_UL;
  } else if (rtb_Minus_k_idx_0 < Steering_Heading_Control_Total_LL) {
    /* Saturate: '<S336>/Saturation2' */
    Code_Gen_Model_B.Steering_Localized_PID = Steering_Heading_Control_Total_LL;
  } else {
    /* Saturate: '<S336>/Saturation2' */
    Code_Gen_Model_B.Steering_Localized_PID = rtb_Minus_k_idx_0;
  }

  /* End of Saturate: '<S336>/Saturation2' */

  /* Switch: '<S320>/Switch' incorporates:
   *  Abs: '<S320>/Abs'
   *  Constant: '<S320>/Constant'
   *  Constant: '<S335>/Constant'
   *  RelationalOperator: '<S335>/Compare'
   */
  if (fabs(Code_Gen_Model_B.Steering_Localized_PID) >
      Steering_Heading_Control_Deadzone) {
    rtb_Init = Code_Gen_Model_B.Steering_Localized_PID;
  } else {
    rtb_Init = 0.0;
  }

  /* End of Switch: '<S320>/Switch' */

  /* Signum: '<S319>/Sign2' incorporates:
   *  UnitDelay: '<S319>/Unit Delay'
   */
  if (rtIsNaN(Code_Gen_Model_DW.UnitDelay_DSTATE_d)) {
    rtb_Minus_k_idx_0 = (rtNaN);
  } else if (Code_Gen_Model_DW.UnitDelay_DSTATE_d < 0.0) {
    rtb_Minus_k_idx_0 = -1.0;
  } else {
    rtb_Minus_k_idx_0 = (Code_Gen_Model_DW.UnitDelay_DSTATE_d > 0.0);
  }

  /* Signum: '<S319>/Sign1' */
  if (rtIsNaN(rtb_Init)) {
    rtb_Switch2_fx = (rtNaN);
  } else if (rtb_Init < 0.0) {
    rtb_Switch2_fx = -1.0;
  } else {
    rtb_Switch2_fx = (rtb_Init > 0.0);
  }

  /* Product: '<S319>/Product1' incorporates:
   *  Signum: '<S319>/Sign1'
   *  Signum: '<S319>/Sign2'
   */
  rtb_Minus_k_idx_0 *= rtb_Switch2_fx;
  if (rtIsNaN(rtb_Minus_k_idx_0)) {
    i = 0;
  } else {
    i = (int32_T)fmod(rtb_Minus_k_idx_0, 256.0);
  }

  /* Switch: '<S319>/Switch' incorporates:
   *  Constant: '<S319>/Constant'
   *  Constant: '<S328>/Constant'
   *  Constant: '<S329>/Constant'
   *  Logic: '<S319>/or'
   *  Product: '<S319>/Product1'
   *  RelationalOperator: '<S328>/Compare'
   *  RelationalOperator: '<S329>/Compare'
   *  UnitDelay: '<S319>/Unit Delay'
   */
  if ((Code_Gen_Model_DW.UnitDelay_DSTATE_d == 0.0) || (((i < 0) ? ((int32_T)
         ((int8_T)(-((int8_T)((uint8_T)(-((real_T)i))))))) : i) > 0)) {
    rtb_uDLookupTable_l = rtb_Init;
  } else {
    rtb_uDLookupTable_l = 0.0;
  }

  /* End of Switch: '<S319>/Switch' */

  /* Switch: '<S334>/Init' incorporates:
   *  UnitDelay: '<S334>/FixPt Unit Delay1'
   *  UnitDelay: '<S334>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_p != 0) {
    rtb_Switch_b5 = rtb_uDLookupTable_l;
  } else {
    rtb_Switch_b5 = Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_e;
  }

  /* End of Switch: '<S334>/Init' */

  /* RelationalOperator: '<S330>/Compare' incorporates:
   *  Constant: '<S330>/Constant'
   */
  rtb_Is_Absolute_Steering = (rtb_uDLookupTable_l == 0.0);

  /* RelationalOperator: '<S331>/Compare' incorporates:
   *  Constant: '<S331>/Constant'
   */
  rtb_Is_Absolute_Translation_g = (rtb_uDLookupTable_l > 0.0);

  /* Abs: '<S319>/Abs' incorporates:
   *  Sum: '<S319>/Subtract'
   *  UnitDelay: '<S319>/Unit Delay'
   */
  rtb_Sum_jt = fabs(Code_Gen_Model_DW.UnitDelay_DSTATE_d - rtb_Init);

  /* Switch: '<S319>/Switch5' incorporates:
   *  Constant: '<S319>/Constant1'
   *  Switch: '<S319>/Switch1'
   *  UnaryMinus: '<S319>/Unary Minus'
   */
  if (rtb_Is_Absolute_Steering) {
    /* SignalConversion generated from: '<S319>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S319>/Constant4'
     *  Constant: '<S319>/Constant6'
     */
    rtb_Reshapey[0] = Steering_Absolute_Cmd_Approach_Zero_Final_Thresh;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S319>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S319>/Constant2'
     *  Constant: '<S319>/Constant5'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Steering_Absolute_Cmd_Approach_Zero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S319>/Lookup Table Dynamic' */
    /* Dynamic Look-Up Table Block: '<S319>/Lookup Table Dynamic'
     * Input0  Data Type:  Floating Point real_T
     * Input1  Data Type:  Floating Point real_T
     * Input2  Data Type:  Floating Point real_T
     * Output0 Data Type:  Floating Point real_T
     * Lookup Method: Linear_Endpoint
     *
     */
    LookUp_real_T_real_T( &(rtb_LookupTableDynamic), &rtb_Reshapey[0],
                         rtb_Sum_jt, &rtb_Minus_n[0], 1U);
    rtb_Sum_jt = rtb_LookupTableDynamic;
    rtb_Minus_k_idx_0 = -Steering_Absolute_Cmd_Rate_Limit_Dec;
  } else {
    /* SignalConversion generated from: '<S319>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S319>/Constant10'
     *  Constant: '<S319>/Constant8'
     */
    rtb_Reshapey[0] = Steering_Absolute_Cmd_NonZero_Final_Scale_Factor;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S319>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S319>/Constant7'
     *  Constant: '<S319>/Constant9'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Steering_Absolute_Cmd_NonZero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S319>/Lookup Table Dynamic1' */
    /* Dynamic Look-Up Table Block: '<S319>/Lookup Table Dynamic1'
     * Input0  Data Type:  Floating Point real_T
     * Input1  Data Type:  Floating Point real_T
     * Input2  Data Type:  Floating Point real_T
     * Output0 Data Type:  Floating Point real_T
     * Lookup Method: Linear_Endpoint
     *
     */
    LookUp_real_T_real_T( &(rtb_LookupTableDynamic1), &rtb_Reshapey[0],
                         rtb_Sum_jt, &rtb_Minus_n[0], 1U);
    rtb_Sum_jt = rtb_LookupTableDynamic1;

    /* Switch: '<S319>/Switch3' incorporates:
     *  Constant: '<S319>/Constant1'
     *  Constant: '<S319>/Constant3'
     *  UnaryMinus: '<S319>/Unary Minus'
     */
    if (rtb_Is_Absolute_Translation_g) {
      rtb_Minus_k_idx_0 = Steering_Absolute_Cmd_Rate_Limit_Inc;
    } else {
      rtb_Minus_k_idx_0 = -Steering_Absolute_Cmd_Rate_Limit_Dec;
    }

    /* End of Switch: '<S319>/Switch3' */
  }

  /* End of Switch: '<S319>/Switch5' */

  /* Product: '<S319>/Product' incorporates:
   *  Switch: '<S319>/Switch1'
   */
  rtb_Switch2_ji = rtb_Minus_k_idx_0 * rtb_Sum_jt;

  /* Sum: '<S332>/Sum1' */
  rtb_Switch4 = rtb_uDLookupTable_l - rtb_Switch_b5;

  /* Switch: '<S333>/Switch2' incorporates:
   *  RelationalOperator: '<S333>/LowerRelop1'
   */
  if (!(rtb_Switch4 > rtb_Switch2_ji)) {
    /* Switch: '<S319>/Switch2' incorporates:
     *  Constant: '<S319>/Constant1'
     *  Constant: '<S319>/Constant3'
     *  Switch: '<S319>/Switch4'
     *  UnaryMinus: '<S319>/Unary Minus1'
     */
    if (rtb_Is_Absolute_Steering) {
      rtb_Minus_k_idx_0 = Steering_Absolute_Cmd_Rate_Limit_Dec;
    } else if (rtb_Is_Absolute_Translation_g) {
      /* Switch: '<S319>/Switch4' incorporates:
       *  Constant: '<S319>/Constant1'
       */
      rtb_Minus_k_idx_0 = Steering_Absolute_Cmd_Rate_Limit_Dec;
    } else {
      rtb_Minus_k_idx_0 = -Steering_Absolute_Cmd_Rate_Limit_Inc;
    }

    /* Product: '<S319>/Product2' incorporates:
     *  Switch: '<S319>/Switch2'
     */
    rtb_Switch2_ji = rtb_Minus_k_idx_0 * rtb_Sum_jt;

    /* Switch: '<S333>/Switch' incorporates:
     *  RelationalOperator: '<S333>/UpperRelop'
     */
    if (!(rtb_Switch4 < rtb_Switch2_ji)) {
      rtb_Switch2_ji = rtb_Switch4;
    }

    /* End of Switch: '<S333>/Switch' */
  }

  /* End of Switch: '<S333>/Switch2' */

  /* Sum: '<S332>/Sum' */
  rtb_Switch2_ji += rtb_Switch_b5;

  /* Signum: '<S318>/Sign2' incorporates:
   *  UnitDelay: '<S318>/Unit Delay'
   */
  if (rtIsNaN(Code_Gen_Model_DW.UnitDelay_DSTATE_g)) {
    rtb_Minus_k_idx_0 = (rtNaN);
  } else if (Code_Gen_Model_DW.UnitDelay_DSTATE_g < 0.0) {
    rtb_Minus_k_idx_0 = -1.0;
  } else {
    rtb_Minus_k_idx_0 = (Code_Gen_Model_DW.UnitDelay_DSTATE_g > 0.0);
  }

  /* Signum: '<S318>/Sign1' */
  if (rtIsNaN(Code_Gen_Model_B.Steering_Rel_Cmd_SPF)) {
    rtb_Switch2_fx = (rtNaN);
  } else if (Code_Gen_Model_B.Steering_Rel_Cmd_SPF < 0.0) {
    rtb_Switch2_fx = -1.0;
  } else {
    rtb_Switch2_fx = (Code_Gen_Model_B.Steering_Rel_Cmd_SPF > 0.0);
  }

  /* Product: '<S318>/Product1' incorporates:
   *  Signum: '<S318>/Sign1'
   *  Signum: '<S318>/Sign2'
   */
  rtb_Minus_k_idx_0 *= rtb_Switch2_fx;
  if (rtIsNaN(rtb_Minus_k_idx_0)) {
    i = 0;
  } else {
    i = (int32_T)fmod(rtb_Minus_k_idx_0, 256.0);
  }

  /* Switch: '<S318>/Switch' incorporates:
   *  Constant: '<S318>/Constant'
   *  Constant: '<S321>/Constant'
   *  Constant: '<S322>/Constant'
   *  Logic: '<S318>/or'
   *  Product: '<S318>/Product1'
   *  RelationalOperator: '<S321>/Compare'
   *  RelationalOperator: '<S322>/Compare'
   *  UnitDelay: '<S318>/Unit Delay'
   */
  if ((Code_Gen_Model_DW.UnitDelay_DSTATE_g == 0.0) || (((i < 0) ? ((int32_T)
         ((int8_T)(-((int8_T)((uint8_T)(-((real_T)i))))))) : i) > 0)) {
    rtb_Optimized_Module_Angle = Code_Gen_Model_B.Steering_Rel_Cmd_SPF;
  } else {
    rtb_Optimized_Module_Angle = 0.0;
  }

  /* End of Switch: '<S318>/Switch' */

  /* Switch: '<S327>/Init' incorporates:
   *  UnitDelay: '<S327>/FixPt Unit Delay1'
   *  UnitDelay: '<S327>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_c != 0) {
    rtb_uDLookupTable_l = rtb_Optimized_Module_Angle;
  } else {
    rtb_uDLookupTable_l = Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_p;
  }

  /* End of Switch: '<S327>/Init' */

  /* RelationalOperator: '<S323>/Compare' incorporates:
   *  Constant: '<S323>/Constant'
   */
  rtb_Is_Absolute_Steering = (rtb_Optimized_Module_Angle == 0.0);

  /* RelationalOperator: '<S324>/Compare' incorporates:
   *  Constant: '<S324>/Constant'
   */
  rtb_Is_Absolute_Translation_g = (rtb_Optimized_Module_Angle > 0.0);

  /* Abs: '<S318>/Abs' incorporates:
   *  Sum: '<S318>/Subtract'
   *  UnitDelay: '<S318>/Unit Delay'
   */
  rtb_Sum_jt = fabs(Code_Gen_Model_DW.UnitDelay_DSTATE_g -
                    Code_Gen_Model_B.Steering_Rel_Cmd_SPF);

  /* Switch: '<S318>/Switch5' incorporates:
   *  Constant: '<S318>/Constant1'
   *  Switch: '<S318>/Switch1'
   *  UnaryMinus: '<S318>/Unary Minus'
   */
  if (rtb_Is_Absolute_Steering) {
    /* SignalConversion generated from: '<S318>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S318>/Constant4'
     *  Constant: '<S318>/Constant6'
     */
    rtb_Reshapey[0] = Steering_Relative_Cmd_Approach_Zero_Final_Thresh;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S318>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S318>/Constant2'
     *  Constant: '<S318>/Constant5'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Steering_Relative_Cmd_Approach_Zero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S318>/Lookup Table Dynamic' */
    /* Dynamic Look-Up Table Block: '<S318>/Lookup Table Dynamic'
     * Input0  Data Type:  Floating Point real_T
     * Input1  Data Type:  Floating Point real_T
     * Input2  Data Type:  Floating Point real_T
     * Output0 Data Type:  Floating Point real_T
     * Lookup Method: Linear_Endpoint
     *
     */
    LookUp_real_T_real_T( &(rtb_LookupTableDynamic_p), &rtb_Reshapey[0],
                         rtb_Sum_jt, &rtb_Minus_n[0], 1U);
    rtb_Sum_jt = rtb_LookupTableDynamic_p;
    rtb_Minus_k_idx_0 = -Steering_Relative_Cmd_Rate_Limit_Dec;
  } else {
    /* SignalConversion generated from: '<S318>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S318>/Constant10'
     *  Constant: '<S318>/Constant8'
     */
    rtb_Reshapey[0] = Steering_Relative_Cmd_NonZero_Final_Scale_Factor;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S318>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S318>/Constant7'
     *  Constant: '<S318>/Constant9'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = Steering_Relative_Cmd_NonZero_Error_Thresh;

    /* S-Function (sfix_look1_dyn): '<S318>/Lookup Table Dynamic1' */
    /* Dynamic Look-Up Table Block: '<S318>/Lookup Table Dynamic1'
     * Input0  Data Type:  Floating Point real_T
     * Input1  Data Type:  Floating Point real_T
     * Input2  Data Type:  Floating Point real_T
     * Output0 Data Type:  Floating Point real_T
     * Lookup Method: Linear_Endpoint
     *
     */
    LookUp_real_T_real_T( &(rtb_LookupTableDynamic1_g), &rtb_Reshapey[0],
                         rtb_Sum_jt, &rtb_Minus_n[0], 1U);
    rtb_Sum_jt = rtb_LookupTableDynamic1_g;

    /* Switch: '<S318>/Switch3' incorporates:
     *  Constant: '<S318>/Constant1'
     *  Constant: '<S318>/Constant3'
     *  UnaryMinus: '<S318>/Unary Minus'
     */
    if (rtb_Is_Absolute_Translation_g) {
      rtb_Minus_k_idx_0 = Steering_Relative_Cmd_Rate_Limit_Inc;
    } else {
      rtb_Minus_k_idx_0 = -Steering_Relative_Cmd_Rate_Limit_Dec;
    }

    /* End of Switch: '<S318>/Switch3' */
  }

  /* End of Switch: '<S318>/Switch5' */

  /* Product: '<S318>/Product' incorporates:
   *  Switch: '<S318>/Switch1'
   */
  rtb_Switch_b5 = rtb_Minus_k_idx_0 * rtb_Sum_jt;

  /* Sum: '<S325>/Sum1' */
  rtb_Switch4 = rtb_Optimized_Module_Angle - rtb_uDLookupTable_l;

  /* Switch: '<S326>/Switch2' incorporates:
   *  RelationalOperator: '<S326>/LowerRelop1'
   */
  if (!(rtb_Switch4 > rtb_Switch_b5)) {
    /* Switch: '<S318>/Switch2' incorporates:
     *  Constant: '<S318>/Constant1'
     *  Constant: '<S318>/Constant3'
     *  Switch: '<S318>/Switch4'
     *  UnaryMinus: '<S318>/Unary Minus1'
     */
    if (rtb_Is_Absolute_Steering) {
      rtb_Minus_k_idx_0 = Steering_Relative_Cmd_Rate_Limit_Dec;
    } else if (rtb_Is_Absolute_Translation_g) {
      /* Switch: '<S318>/Switch4' incorporates:
       *  Constant: '<S318>/Constant1'
       */
      rtb_Minus_k_idx_0 = Steering_Relative_Cmd_Rate_Limit_Dec;
    } else {
      rtb_Minus_k_idx_0 = -Steering_Relative_Cmd_Rate_Limit_Inc;
    }

    /* Product: '<S318>/Product2' incorporates:
     *  Switch: '<S318>/Switch2'
     */
    rtb_Switch_b5 = rtb_Minus_k_idx_0 * rtb_Sum_jt;

    /* Switch: '<S326>/Switch' incorporates:
     *  RelationalOperator: '<S326>/UpperRelop'
     */
    if (!(rtb_Switch4 < rtb_Switch_b5)) {
      rtb_Switch_b5 = rtb_Switch4;
    }

    /* End of Switch: '<S326>/Switch' */
  }

  /* End of Switch: '<S326>/Switch2' */

  /* Sum: '<S325>/Sum' */
  rtb_Switch_b5 += rtb_uDLookupTable_l;

  /* Switch: '<S308>/Switch' */
  if (Code_Gen_Model_B.Is_Absolute_Steering_SPF) {
    /* Switch: '<S308>/Switch' */
    Code_Gen_Model_B.Steering_Localized_Cmd = rtb_Switch2_ji;
  } else {
    /* Switch: '<S308>/Switch' */
    Code_Gen_Model_B.Steering_Localized_Cmd = rtb_Switch_b5;
  }

  /* End of Switch: '<S308>/Switch' */

  /* Fcn: '<S349>/r->x' incorporates:
   *  Fcn: '<S354>/r->x'
   *  Fcn: '<S359>/r->x'
   *  Fcn: '<S364>/r->x'
   */
  rtb_Switch2_g = Code_Gen_Model_B.Translation_Speed_RL * cos
    (Code_Gen_Model_B.Translation_Steering_Cmd);

  /* Sum: '<S343>/Add' incorporates:
   *  Fcn: '<S349>/r->x'
   *  Fcn: '<S350>/r->x'
   */
  rtb_Reshapey[0] = (Code_Gen_Model_B.Steering_Localized_Cmd * cos
                     (Code_Gen_Model_ConstB.FL_Tangent_Angle)) + rtb_Switch2_g;

  /* Fcn: '<S349>/theta->y' incorporates:
   *  Fcn: '<S354>/theta->y'
   *  Fcn: '<S359>/theta->y'
   *  Fcn: '<S364>/theta->y'
   */
  rtb_Add_o5 = Code_Gen_Model_B.Translation_Speed_RL * sin
    (Code_Gen_Model_B.Translation_Steering_Cmd);

  /* Sum: '<S343>/Add' incorporates:
   *  Fcn: '<S349>/theta->y'
   *  Fcn: '<S350>/theta->y'
   */
  rtb_Reshapey[1] = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                     (Code_Gen_Model_ConstB.FL_Tangent_Angle)) + rtb_Add_o5;

  /* Sum: '<S344>/Add' incorporates:
   *  Fcn: '<S355>/r->x'
   *  Fcn: '<S355>/theta->y'
   */
  rtb_Minus_n[0] = (Code_Gen_Model_B.Steering_Localized_Cmd * cos
                    (Code_Gen_Model_ConstB.FR_Tangent_Angle)) + rtb_Switch2_g;
  rtb_Minus_n[1] = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                    (Code_Gen_Model_ConstB.FR_Tangent_Angle)) + rtb_Add_o5;

  /* Sum: '<S345>/Add' incorporates:
   *  Fcn: '<S360>/r->x'
   *  Fcn: '<S360>/theta->y'
   */
  rtb_Add2_k_idx_0 = (Code_Gen_Model_B.Steering_Localized_Cmd * cos
                      (Code_Gen_Model_ConstB.BL_Tangent_Angle)) + rtb_Switch2_g;
  rtb_Add2_k_idx_1 = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                      (Code_Gen_Model_ConstB.BL_Tangent_Angle)) + rtb_Add_o5;

  /* Sum: '<S346>/Add' incorporates:
   *  Fcn: '<S365>/r->x'
   *  Fcn: '<S365>/theta->y'
   */
  rtb_Minus_k_idx_0 = (Code_Gen_Model_B.Steering_Localized_Cmd * cos
                       (Code_Gen_Model_ConstB.BR_Tangent_Angle)) + rtb_Switch2_g;
  rtb_Sum_jt = (Code_Gen_Model_B.Steering_Localized_Cmd * sin
                (Code_Gen_Model_ConstB.BR_Tangent_Angle)) + rtb_Add_o5;

  /* Fcn: '<S363>/x->r' */
  rtb_Add_o5 = rt_hypotd_snf(rtb_Minus_k_idx_0, rtb_Sum_jt);

  /* RelationalOperator: '<S366>/Compare' incorporates:
   *  Constant: '<S366>/Constant'
   */
  rtb_Is_Absolute_Steering = (rtb_Add_o5 == 0.0);

  /* Switch: '<S362>/Switch1' */
  if (rtb_Is_Absolute_Steering) {
    /* Switch: '<S362>/Switch1' incorporates:
     *  Constant: '<S362>/Constant'
     */
    Code_Gen_Model_B.BR_Desired_Wheel_Speed_in = 1.0E-15;
  } else {
    /* Switch: '<S362>/Switch1' */
    Code_Gen_Model_B.BR_Desired_Wheel_Speed_in = rtb_Add_o5;
  }

  /* End of Switch: '<S362>/Switch1' */

  /* Fcn: '<S348>/x->r' */
  rtb_Add_o5 = rt_hypotd_snf(rtb_Reshapey[0], rtb_Reshapey[1]);

  /* RelationalOperator: '<S351>/Compare' incorporates:
   *  Constant: '<S351>/Constant'
   */
  rtb_Is_Absolute_Translation_g = (rtb_Add_o5 == 0.0);

  /* Switch: '<S347>/Switch1' */
  if (rtb_Is_Absolute_Translation_g) {
    /* Switch: '<S347>/Switch1' incorporates:
     *  Constant: '<S347>/Constant'
     */
    Code_Gen_Model_B.FL_Desired_Wheel_Speed_in = 1.0E-15;
  } else {
    /* Switch: '<S347>/Switch1' */
    Code_Gen_Model_B.FL_Desired_Wheel_Speed_in = rtb_Add_o5;
  }

  /* End of Switch: '<S347>/Switch1' */

  /* Fcn: '<S353>/x->r' */
  rtb_Switch2_g = rt_hypotd_snf(rtb_Minus_n[0], rtb_Minus_n[1]);

  /* RelationalOperator: '<S356>/Compare' incorporates:
   *  Constant: '<S356>/Constant'
   */
  rtb_AT_Cage_Middle_Start_Red_Ac = (rtb_Switch2_g == 0.0);

  /* Switch: '<S352>/Switch1' */
  if (rtb_AT_Cage_Middle_Start_Red_Ac) {
    /* Switch: '<S352>/Switch1' incorporates:
     *  Constant: '<S352>/Constant'
     */
    Code_Gen_Model_B.FR_Desired_Wheel_Speed_in = 1.0E-15;
  } else {
    /* Switch: '<S352>/Switch1' */
    Code_Gen_Model_B.FR_Desired_Wheel_Speed_in = rtb_Switch2_g;
  }

  /* End of Switch: '<S352>/Switch1' */

  /* Fcn: '<S358>/x->r' */
  rtb_Init = rt_hypotd_snf(rtb_Add2_k_idx_0, rtb_Add2_k_idx_1);

  /* RelationalOperator: '<S361>/Compare' incorporates:
   *  Constant: '<S361>/Constant'
   */
  rtb_AT_Cage_Right_Start_Blue_Ac = (rtb_Init == 0.0);

  /* Switch: '<S357>/Switch1' */
  if (rtb_AT_Cage_Right_Start_Blue_Ac) {
    /* Switch: '<S357>/Switch1' incorporates:
     *  Constant: '<S357>/Constant'
     */
    Code_Gen_Model_B.BL_Desired_Wheel_Speed_in = 1.0E-15;
  } else {
    /* Switch: '<S357>/Switch1' */
    Code_Gen_Model_B.BL_Desired_Wheel_Speed_in = rtb_Init;
  }

  /* End of Switch: '<S357>/Switch1' */

  /* Product: '<S342>/Divide' incorporates:
   *  Abs: '<S342>/Abs'
   *  Abs: '<S342>/Abs1'
   *  Abs: '<S342>/Abs2'
   *  Abs: '<S342>/Abs3'
   *  Constant: '<S342>/Constant'
   *  MinMax: '<S342>/Max'
   */
  rtb_Add_o5 = 5.389313721017964 / fmax(fmax(fmax(fmax(5.389313721017964,
    Code_Gen_Model_B.FL_Desired_Wheel_Speed_in),
    Code_Gen_Model_B.FR_Desired_Wheel_Speed_in),
    Code_Gen_Model_B.BL_Desired_Wheel_Speed_in),
    Code_Gen_Model_B.BR_Desired_Wheel_Speed_in);

  /* Product: '<S342>/Product3' */
  Code_Gen_Model_B.BR_Desired_Wheel_Speed =
    Code_Gen_Model_B.BR_Desired_Wheel_Speed_in * rtb_Add_o5;

  /* Switch: '<S362>/Switch' */
  if (!rtb_Is_Absolute_Steering) {
    /* Switch: '<S362>/Switch' incorporates:
     *  Fcn: '<S363>/x->theta'
     */
    Code_Gen_Model_B.BR_Desired_Module_Angle = rt_atan2d_snf(rtb_Sum_jt,
      rtb_Minus_k_idx_0);
  }

  /* End of Switch: '<S362>/Switch' */

  /* Trigonometry: '<S298>/Cos4' incorporates:
   *  Switch: '<S287>/Angle_Switch'
   *  Trigonometry: '<S297>/Cos4'
   */
  rtb_Subtract_h3 = cos(Code_Gen_Model_B.BR_Desired_Module_Angle);

  /* Trigonometry: '<S298>/Sin5' incorporates:
   *  UnaryMinus: '<S296>/Unary Minus'
   */
  rtb_Optimized_Module_Angle = sin(-Code_Gen_Model_B.BR_Steer_Module_Angle);

  /* Trigonometry: '<S298>/Sin4' incorporates:
   *  Switch: '<S287>/Angle_Switch'
   *  Trigonometry: '<S297>/Sin4'
   */
  rtb_Sum_jt = sin(Code_Gen_Model_B.BR_Desired_Module_Angle);

  /* Trigonometry: '<S298>/Cos5' incorporates:
   *  UnaryMinus: '<S296>/Unary Minus'
   */
  rtb_Init = cos(-Code_Gen_Model_B.BR_Steer_Module_Angle);

  /* Sum: '<S298>/Subtract1' incorporates:
   *  Product: '<S298>/Product2'
   *  Product: '<S298>/Product3'
   *  Trigonometry: '<S298>/Cos4'
   *  Trigonometry: '<S298>/Sin4'
   */
  rtb_Switch4 = (rtb_Subtract_h3 * rtb_Optimized_Module_Angle) + (rtb_Sum_jt *
    rtb_Init);

  /* Sum: '<S298>/Subtract' incorporates:
   *  Product: '<S298>/Product'
   *  Product: '<S298>/Product1'
   *  Trigonometry: '<S298>/Cos4'
   *  Trigonometry: '<S298>/Sin4'
   */
  rtb_Subtract = (rtb_Subtract_h3 * rtb_Init) - (rtb_Sum_jt *
    rtb_Optimized_Module_Angle);

  /* Math: '<S298>/Hypot' */
  rtb_Hypot = rt_hypotd_snf(rtb_Subtract, rtb_Switch4);

  /* Switch: '<S298>/Switch' incorporates:
   *  Constant: '<S298>/Constant'
   *  Constant: '<S298>/Constant1'
   *  Constant: '<S299>/Constant'
   *  Product: '<S298>/Divide'
   *  Product: '<S298>/Divide1'
   *  RelationalOperator: '<S299>/Compare'
   *  Switch: '<S298>/Switch1'
   */
  if (rtb_Hypot > 1.0E-6) {
    rtb_Switch2_g = rtb_Switch4 / rtb_Hypot;
    rtb_Init = rtb_Subtract / rtb_Hypot;
  } else {
    rtb_Switch2_g = 0.0;
    rtb_Init = 1.0;
  }

  /* End of Switch: '<S298>/Switch' */

  /* Switch: '<S287>/Speed_Switch' incorporates:
   *  Abs: '<S287>/Abs'
   *  Constant: '<S295>/Constant'
   *  RelationalOperator: '<S295>/Compare'
   *  Switch: '<S287>/Angle_Switch'
   *  Trigonometry: '<S297>/Atan1'
   *  Trigonometry: '<S298>/Atan1'
   *  UnaryMinus: '<S287>/Unary Minus'
   */
  if (fabs(rt_atan2d_snf(rtb_Switch2_g, rtb_Init)) > 1.5707963267948966) {
    rtb_Minus_k_idx_0 = -Code_Gen_Model_B.BR_Desired_Wheel_Speed;

    /* Sum: '<S297>/Subtract1' incorporates:
     *  Product: '<S297>/Product2'
     *  Product: '<S297>/Product3'
     *  UnaryMinus: '<S287>/Unary Minus'
     */
    rtb_Switch4 = (rtb_Subtract_h3 * Code_Gen_Model_ConstB.Sin5_c) + (rtb_Sum_jt
      * Code_Gen_Model_ConstB.Cos5_b);

    /* Sum: '<S297>/Subtract' incorporates:
     *  Product: '<S297>/Product'
     *  Product: '<S297>/Product1'
     */
    rtb_Subtract = (rtb_Subtract_h3 * Code_Gen_Model_ConstB.Cos5_b) -
      (rtb_Sum_jt * Code_Gen_Model_ConstB.Sin5_c);

    /* Math: '<S297>/Hypot' */
    rtb_Sum_jt = rt_hypotd_snf(rtb_Subtract, rtb_Switch4);

    /* Switch: '<S297>/Switch1' incorporates:
     *  Constant: '<S297>/Constant'
     *  Constant: '<S297>/Constant1'
     *  Constant: '<S300>/Constant'
     *  Product: '<S297>/Divide'
     *  Product: '<S297>/Divide1'
     *  RelationalOperator: '<S300>/Compare'
     *  Switch: '<S297>/Switch'
     */
    if (rtb_Sum_jt > 1.0E-6) {
      rtb_Subtract /= rtb_Sum_jt;
      rtb_Sum_jt = rtb_Switch4 / rtb_Sum_jt;
    } else {
      rtb_Subtract = 1.0;
      rtb_Sum_jt = 0.0;
    }

    /* End of Switch: '<S297>/Switch1' */
    rtb_Optimized_Module_Angle = rt_atan2d_snf(rtb_Sum_jt, rtb_Subtract);
  } else {
    rtb_Minus_k_idx_0 = Code_Gen_Model_B.BR_Desired_Wheel_Speed;
    rtb_Optimized_Module_Angle = Code_Gen_Model_B.BR_Desired_Module_Angle;
  }

  /* Product: '<S290>/Product2' incorporates:
   *  Constant: '<S290>/Constant'
   *  Switch: '<S287>/Speed_Switch'
   */
  rtb_Switch2_g = rtb_Minus_k_idx_0 * 1150.4247703785388;

  /* Signum: '<S285>/Sign' */
  if (rtIsNaN(rtb_Switch2_g)) {
    rtb_Minus_k_idx_0 = (rtNaN);
  } else if (rtb_Switch2_g < 0.0) {
    rtb_Minus_k_idx_0 = -1.0;
  } else {
    rtb_Minus_k_idx_0 = (rtb_Switch2_g > 0.0);
  }

  /* Signum: '<S285>/Sign1' incorporates:
   *  Inport: '<Root>/BackRight_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.BackRight_Drive_Motor_Speed)) {
    rtb_Switch2_fx = (rtNaN);
  } else if (Code_Gen_Model_U.BackRight_Drive_Motor_Speed < 0.0) {
    rtb_Switch2_fx = -1.0;
  } else {
    rtb_Switch2_fx = (Code_Gen_Model_U.BackRight_Drive_Motor_Speed > 0.0);
  }

  /* Sum: '<S288>/Add' incorporates:
   *  Sum: '<S289>/Sum'
   */
  rtb_Optimized_Module_Angle -= Code_Gen_Model_B.BR_Steer_Module_Angle;

  /* Product: '<S220>/Product' incorporates:
   *  Abs: '<S285>/Abs'
   *  Abs: '<S288>/Abs'
   *  Constant: '<S291>/Constant'
   *  Constant: '<S301>/Constant3'
   *  Constant: '<S301>/Constant4'
   *  Inport: '<Root>/BackRight_Drive_Motor_Speed'
   *  Logic: '<S285>/OR'
   *  Lookup_n-D: '<S288>/1-D Lookup Table'
   *  Math: '<S301>/Math Function'
   *  RelationalOperator: '<S285>/Equal1'
   *  RelationalOperator: '<S291>/Compare'
   *  Signum: '<S285>/Sign'
   *  Signum: '<S285>/Sign1'
   *  Sum: '<S288>/Add'
   *  Sum: '<S301>/Add1'
   *  Sum: '<S301>/Add2'
   */
  rtb_Switch2_g = (((real_T)((rtb_Minus_k_idx_0 == rtb_Switch2_fx) || (fabs
    (Code_Gen_Model_U.BackRight_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_Switch2_g) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_Optimized_Module_Angle + 1.5707963267948966,
                      3.1415926535897931) - 1.5707963267948966),
     Code_Gen_Model_ConstP.pooled33, Code_Gen_Model_ConstP.pooled32, 1U);

  /* Sum: '<S286>/Sum' incorporates:
   *  Inport: '<Root>/BackRight_Drive_Motor_Speed'
   */
  rtb_Subtract = rtb_Switch2_g - Code_Gen_Model_U.BackRight_Drive_Motor_Speed;

  /* Sum: '<S293>/Sum1' incorporates:
   *  Constant: '<S286>/Constant2'
   *  Product: '<S293>/Product'
   *  Sum: '<S293>/Sum'
   *  UnitDelay: '<S293>/Unit Delay1'
   */
  rtb_Sum_jt = ((rtb_Subtract - Code_Gen_Model_DW.UnitDelay1_DSTATE_j) *
                Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_j;

  /* Product: '<S286>/Product' incorporates:
   *  Constant: '<S286>/Constant3'
   */
  rtb_Switch4 = rtb_Sum_jt * Drive_Motor_Control_D;

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
  rtb_Minus_k_idx_0 = rtb_Switch4 - Code_Gen_Model_DW.UD_DSTATE_j;

  /* Saturate: '<S286>/Saturation' */
  if (rtb_Minus_k_idx_0 > Drive_Motor_Control_D_UL) {
    rtb_Minus_k_idx_0 = Drive_Motor_Control_D_UL;
  } else if (rtb_Minus_k_idx_0 < Drive_Motor_Control_D_LL) {
    rtb_Minus_k_idx_0 = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S286>/Add' incorporates:
   *  Gain: '<S286>/Gain'
   *  Gain: '<S286>/Gain1'
   *  Saturate: '<S286>/Saturation'
   */
  rtb_Hypot = ((Drive_Motor_Control_FF * rtb_Switch2_g) + (Drive_Motor_Control_P
    * rtb_Subtract)) + rtb_Minus_k_idx_0;

  /* Switch: '<S286>/Switch' incorporates:
   *  Constant: '<S286>/Constant4'
   */
  if (Code_Gen_Model_B.Swerve_Drive_Integral_Enable) {
    /* Sum: '<S286>/Sum2' incorporates:
     *  Gain: '<S286>/Gain2'
     *  UnitDelay: '<S286>/Unit Delay'
     */
    rtb_Subtract = (Drive_Motor_Control_I * rtb_Subtract) +
      Code_Gen_Model_DW.UnitDelay_DSTATE_l;

    /* Sum: '<S286>/Subtract' incorporates:
     *  Constant: '<S286>/Constant'
     */
    rtb_Switch2_pc = 1.0 - rtb_Hypot;

    /* Switch: '<S294>/Switch2' incorporates:
     *  Constant: '<S286>/Constant'
     *  RelationalOperator: '<S294>/LowerRelop1'
     *  Sum: '<S286>/Subtract'
     */
    if (!(rtb_Subtract > (1.0 - rtb_Hypot))) {
      /* Sum: '<S286>/Subtract1' incorporates:
       *  Constant: '<S286>/Constant1'
       */
      rtb_Switch2_pc = -1.0 - rtb_Hypot;

      /* Switch: '<S294>/Switch' incorporates:
       *  Constant: '<S286>/Constant1'
       *  RelationalOperator: '<S294>/UpperRelop'
       *  Sum: '<S286>/Subtract1'
       */
      if (!(rtb_Subtract < (-1.0 - rtb_Hypot))) {
        rtb_Switch2_pc = rtb_Subtract;
      }

      /* End of Switch: '<S294>/Switch' */
    }

    /* End of Switch: '<S294>/Switch2' */

    /* Saturate: '<S286>/Saturation1' */
    if (rtb_Switch2_pc > Drive_Motor_Control_I_UL) {
      rtb_Subtract = Drive_Motor_Control_I_UL;
    } else if (rtb_Switch2_pc < Drive_Motor_Control_I_LL) {
      rtb_Subtract = Drive_Motor_Control_I_LL;
    } else {
      rtb_Subtract = rtb_Switch2_pc;
    }

    /* End of Saturate: '<S286>/Saturation1' */
  } else {
    rtb_Subtract = 0.0;
  }

  /* End of Switch: '<S286>/Switch' */

  /* Sum: '<S286>/Add1' */
  rtb_Minus_k_idx_0 = rtb_Hypot + rtb_Subtract;

  /* Saturate: '<S286>/Saturation2' */
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

  /* End of Saturate: '<S286>/Saturation2' */

  /* Switch: '<S347>/Switch' */
  if (!rtb_Is_Absolute_Translation_g) {
    /* Switch: '<S347>/Switch' incorporates:
     *  Fcn: '<S348>/x->theta'
     */
    Code_Gen_Model_B.FL_Desired_Module_Angle = rt_atan2d_snf(rtb_Reshapey[1],
      rtb_Reshapey[0]);
  }

  /* End of Switch: '<S347>/Switch' */

  /* Trigonometry: '<S235>/Cos4' incorporates:
   *  Switch: '<S224>/Angle_Switch'
   *  Trigonometry: '<S234>/Cos4'
   */
  rtb_Subtract_h3 = cos(Code_Gen_Model_B.FL_Desired_Module_Angle);

  /* Trigonometry: '<S235>/Sin5' incorporates:
   *  UnaryMinus: '<S233>/Unary Minus'
   */
  rtb_uDLookupTable_l = sin(-Code_Gen_Model_B.FL_Steer_Module_Angle);

  /* Trigonometry: '<S235>/Sin4' incorporates:
   *  Switch: '<S224>/Angle_Switch'
   *  Trigonometry: '<S234>/Sin4'
   */
  rtb_Integral_hv = sin(Code_Gen_Model_B.FL_Desired_Module_Angle);

  /* Trigonometry: '<S235>/Cos5' incorporates:
   *  UnaryMinus: '<S233>/Unary Minus'
   */
  rtb_Init = cos(-Code_Gen_Model_B.FL_Steer_Module_Angle);

  /* Sum: '<S235>/Subtract1' incorporates:
   *  Product: '<S235>/Product2'
   *  Product: '<S235>/Product3'
   *  Trigonometry: '<S235>/Cos4'
   *  Trigonometry: '<S235>/Sin4'
   */
  rtb_Hypot = (rtb_Subtract_h3 * rtb_uDLookupTable_l) + (rtb_Integral_hv *
    rtb_Init);

  /* Sum: '<S235>/Subtract' incorporates:
   *  Product: '<S235>/Product'
   *  Product: '<S235>/Product1'
   *  Trigonometry: '<S235>/Cos4'
   *  Trigonometry: '<S235>/Sin4'
   */
  rtb_Switch2_pc = (rtb_Subtract_h3 * rtb_Init) - (rtb_Integral_hv *
    rtb_uDLookupTable_l);

  /* Math: '<S235>/Hypot' */
  rtb_Hypot_g5 = rt_hypotd_snf(rtb_Switch2_pc, rtb_Hypot);

  /* Switch: '<S235>/Switch' incorporates:
   *  Constant: '<S235>/Constant'
   *  Constant: '<S235>/Constant1'
   *  Constant: '<S236>/Constant'
   *  Product: '<S235>/Divide'
   *  Product: '<S235>/Divide1'
   *  RelationalOperator: '<S236>/Compare'
   *  Switch: '<S235>/Switch1'
   */
  if (rtb_Hypot_g5 > 1.0E-6) {
    rtb_Switch2_g = rtb_Hypot / rtb_Hypot_g5;
    rtb_Init = rtb_Switch2_pc / rtb_Hypot_g5;
  } else {
    rtb_Switch2_g = 0.0;
    rtb_Init = 1.0;
  }

  /* End of Switch: '<S235>/Switch' */

  /* Product: '<S342>/Product' */
  Code_Gen_Model_B.FL_Desired_Wheel_Speed =
    Code_Gen_Model_B.FL_Desired_Wheel_Speed_in * rtb_Add_o5;

  /* Switch: '<S224>/Speed_Switch' incorporates:
   *  Abs: '<S224>/Abs'
   *  Constant: '<S232>/Constant'
   *  RelationalOperator: '<S232>/Compare'
   *  Switch: '<S224>/Angle_Switch'
   *  Trigonometry: '<S234>/Atan1'
   *  Trigonometry: '<S235>/Atan1'
   *  UnaryMinus: '<S224>/Unary Minus'
   */
  if (fabs(rt_atan2d_snf(rtb_Switch2_g, rtb_Init)) > 1.5707963267948966) {
    rtb_Minus_k_idx_0 = -Code_Gen_Model_B.FL_Desired_Wheel_Speed;

    /* Sum: '<S234>/Subtract1' incorporates:
     *  Product: '<S234>/Product2'
     *  Product: '<S234>/Product3'
     *  UnaryMinus: '<S224>/Unary Minus'
     */
    rtb_Hypot = (rtb_Subtract_h3 * Code_Gen_Model_ConstB.Sin5) +
      (rtb_Integral_hv * Code_Gen_Model_ConstB.Cos5);

    /* Sum: '<S234>/Subtract' incorporates:
     *  Product: '<S234>/Product'
     *  Product: '<S234>/Product1'
     */
    rtb_Hypot_g5 = (rtb_Subtract_h3 * Code_Gen_Model_ConstB.Cos5) -
      (rtb_Integral_hv * Code_Gen_Model_ConstB.Sin5);

    /* Math: '<S234>/Hypot' */
    rtb_Switch2_pc = rt_hypotd_snf(rtb_Hypot_g5, rtb_Hypot);

    /* Switch: '<S234>/Switch1' incorporates:
     *  Constant: '<S234>/Constant'
     *  Constant: '<S234>/Constant1'
     *  Constant: '<S237>/Constant'
     *  Product: '<S234>/Divide'
     *  Product: '<S234>/Divide1'
     *  RelationalOperator: '<S237>/Compare'
     *  Switch: '<S234>/Switch'
     */
    if (rtb_Switch2_pc > 1.0E-6) {
      rtb_Hypot_g5 /= rtb_Switch2_pc;
      rtb_Hypot /= rtb_Switch2_pc;
    } else {
      rtb_Hypot_g5 = 1.0;
      rtb_Hypot = 0.0;
    }

    /* End of Switch: '<S234>/Switch1' */
    rtb_uDLookupTable_l = rt_atan2d_snf(rtb_Hypot, rtb_Hypot_g5);
  } else {
    rtb_Minus_k_idx_0 = Code_Gen_Model_B.FL_Desired_Wheel_Speed;
    rtb_uDLookupTable_l = Code_Gen_Model_B.FL_Desired_Module_Angle;
  }

  /* Product: '<S227>/Product2' incorporates:
   *  Constant: '<S227>/Constant'
   *  Switch: '<S224>/Speed_Switch'
   */
  rtb_Switch2_g = rtb_Minus_k_idx_0 * 1150.4247703785388;

  /* Signum: '<S222>/Sign' */
  if (rtIsNaN(rtb_Switch2_g)) {
    rtb_Minus_k_idx_0 = (rtNaN);
  } else if (rtb_Switch2_g < 0.0) {
    rtb_Minus_k_idx_0 = -1.0;
  } else {
    rtb_Minus_k_idx_0 = (rtb_Switch2_g > 0.0);
  }

  /* Signum: '<S222>/Sign1' incorporates:
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed)) {
    rtb_Switch2_fx = (rtNaN);
  } else if (Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed < 0.0) {
    rtb_Switch2_fx = -1.0;
  } else {
    rtb_Switch2_fx = (Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed > 0.0);
  }

  /* Sum: '<S225>/Add' incorporates:
   *  Sum: '<S226>/Sum'
   */
  rtb_Init = rtb_uDLookupTable_l - Code_Gen_Model_B.FL_Steer_Module_Angle;

  /* Product: '<S217>/Product' incorporates:
   *  Abs: '<S222>/Abs'
   *  Abs: '<S225>/Abs'
   *  Constant: '<S228>/Constant'
   *  Constant: '<S238>/Constant3'
   *  Constant: '<S238>/Constant4'
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Speed'
   *  Logic: '<S222>/OR'
   *  Lookup_n-D: '<S225>/1-D Lookup Table'
   *  Math: '<S238>/Math Function'
   *  RelationalOperator: '<S222>/Equal1'
   *  RelationalOperator: '<S228>/Compare'
   *  Signum: '<S222>/Sign'
   *  Signum: '<S222>/Sign1'
   *  Sum: '<S225>/Add'
   *  Sum: '<S238>/Add1'
   *  Sum: '<S238>/Add2'
   */
  rtb_Switch2_g = (((real_T)((rtb_Minus_k_idx_0 == rtb_Switch2_fx) || (fabs
    (Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_Switch2_g) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_Init + 1.5707963267948966, 3.1415926535897931) -
          1.5707963267948966), Code_Gen_Model_ConstP.pooled33,
     Code_Gen_Model_ConstP.pooled32, 1U);

  /* Sum: '<S223>/Sum' incorporates:
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Speed'
   */
  rtb_Hypot_g5 = rtb_Switch2_g - Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed;

  /* Sum: '<S230>/Sum1' incorporates:
   *  Constant: '<S223>/Constant2'
   *  Product: '<S230>/Product'
   *  Sum: '<S230>/Sum'
   *  UnitDelay: '<S230>/Unit Delay1'
   */
  rtb_Hypot = ((rtb_Hypot_g5 - Code_Gen_Model_DW.UnitDelay1_DSTATE_f) *
               Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_f;

  /* Product: '<S223>/Product' incorporates:
   *  Constant: '<S223>/Constant3'
   */
  rtb_Switch2_pc = rtb_Hypot * Drive_Motor_Control_D;

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
  rtb_Minus_k_idx_0 = rtb_Switch2_pc - Code_Gen_Model_DW.UD_DSTATE_h;

  /* Saturate: '<S223>/Saturation' */
  if (rtb_Minus_k_idx_0 > Drive_Motor_Control_D_UL) {
    rtb_Minus_k_idx_0 = Drive_Motor_Control_D_UL;
  } else if (rtb_Minus_k_idx_0 < Drive_Motor_Control_D_LL) {
    rtb_Minus_k_idx_0 = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S223>/Add' incorporates:
   *  Gain: '<S223>/Gain'
   *  Gain: '<S223>/Gain1'
   *  Saturate: '<S223>/Saturation'
   */
  rtb_Add_ju = ((Drive_Motor_Control_FF * rtb_Switch2_g) +
                (Drive_Motor_Control_P * rtb_Hypot_g5)) + rtb_Minus_k_idx_0;

  /* Switch: '<S223>/Switch' incorporates:
   *  Constant: '<S223>/Constant4'
   */
  if (Code_Gen_Model_B.Swerve_Drive_Integral_Enable) {
    /* Sum: '<S223>/Sum2' incorporates:
     *  Gain: '<S223>/Gain2'
     *  UnitDelay: '<S223>/Unit Delay'
     */
    rtb_Hypot_g5 = (Drive_Motor_Control_I * rtb_Hypot_g5) +
      Code_Gen_Model_DW.UnitDelay_DSTATE_j;

    /* Sum: '<S223>/Subtract' incorporates:
     *  Constant: '<S223>/Constant'
     */
    rtb_Switch2_m = 1.0 - rtb_Add_ju;

    /* Switch: '<S231>/Switch2' incorporates:
     *  Constant: '<S223>/Constant'
     *  RelationalOperator: '<S231>/LowerRelop1'
     *  Sum: '<S223>/Subtract'
     */
    if (!(rtb_Hypot_g5 > (1.0 - rtb_Add_ju))) {
      /* Sum: '<S223>/Subtract1' incorporates:
       *  Constant: '<S223>/Constant1'
       */
      rtb_Switch2_m = -1.0 - rtb_Add_ju;

      /* Switch: '<S231>/Switch' incorporates:
       *  Constant: '<S223>/Constant1'
       *  RelationalOperator: '<S231>/UpperRelop'
       *  Sum: '<S223>/Subtract1'
       */
      if (!(rtb_Hypot_g5 < (-1.0 - rtb_Add_ju))) {
        rtb_Switch2_m = rtb_Hypot_g5;
      }

      /* End of Switch: '<S231>/Switch' */
    }

    /* End of Switch: '<S231>/Switch2' */

    /* Saturate: '<S223>/Saturation1' */
    if (rtb_Switch2_m > Drive_Motor_Control_I_UL) {
      rtb_Hypot_g5 = Drive_Motor_Control_I_UL;
    } else if (rtb_Switch2_m < Drive_Motor_Control_I_LL) {
      rtb_Hypot_g5 = Drive_Motor_Control_I_LL;
    } else {
      rtb_Hypot_g5 = rtb_Switch2_m;
    }

    /* End of Saturate: '<S223>/Saturation1' */
  } else {
    rtb_Hypot_g5 = 0.0;
  }

  /* End of Switch: '<S223>/Switch' */

  /* Sum: '<S223>/Add1' */
  rtb_Minus_k_idx_0 = rtb_Add_ju + rtb_Hypot_g5;

  /* Saturate: '<S223>/Saturation2' */
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

  /* End of Saturate: '<S223>/Saturation2' */

  /* Sum: '<S239>/Add1' incorporates:
   *  Constant: '<S239>/Constant3'
   *  Constant: '<S239>/Constant4'
   *  Math: '<S239>/Math Function'
   *  Sum: '<S239>/Add2'
   */
  rtb_Switch2_g = rt_modd_snf(rtb_Init + 3.1415926535897931, 6.2831853071795862)
    - 3.1415926535897931;

  /* Sum: '<S241>/Sum1' incorporates:
   *  Constant: '<S226>/Constant2'
   *  Product: '<S241>/Product'
   *  Sum: '<S241>/Sum'
   *  UnitDelay: '<S241>/Unit Delay1'
   */
  rtb_Add_ju = ((rtb_Switch2_g - Code_Gen_Model_DW.UnitDelay1_DSTATE_b) *
                Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_b;

  /* Product: '<S226>/Product' incorporates:
   *  Constant: '<S226>/Constant3'
   */
  rtb_Switch2_m = rtb_Add_ju * Steering_Motor_Control_D;

  /* Sum: '<S240>/Diff' incorporates:
   *  UnitDelay: '<S240>/UD'
   *
   * Block description for '<S240>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S240>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Minus_k_idx_0 = rtb_Switch2_m - Code_Gen_Model_DW.UD_DSTATE_b;

  /* Saturate: '<S226>/Saturation' */
  if (rtb_Minus_k_idx_0 > Steering_Motor_Control_D_UL) {
    rtb_Minus_k_idx_0 = Steering_Motor_Control_D_UL;
  } else if (rtb_Minus_k_idx_0 < Steering_Motor_Control_D_LL) {
    rtb_Minus_k_idx_0 = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S226>/Add' incorporates:
   *  Gain: '<S226>/Gain1'
   *  Saturate: '<S226>/Saturation'
   */
  rtb_Add_fn = (Steering_Motor_Control_P * rtb_Switch2_g) + rtb_Minus_k_idx_0;

  /* Sum: '<S226>/Subtract' incorporates:
   *  Constant: '<S226>/Constant'
   */
  rtb_Init = 1.0 - rtb_Add_fn;

  /* Sum: '<S226>/Sum2' incorporates:
   *  Gain: '<S226>/Gain2'
   *  UnitDelay: '<S226>/Unit Delay'
   */
  rtb_Sum2_e = (Steering_Motor_Control_I * rtb_Switch2_g) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_e;

  /* Switch: '<S242>/Switch2' incorporates:
   *  RelationalOperator: '<S242>/LowerRelop1'
   */
  if (!(rtb_Sum2_e > rtb_Init)) {
    /* Switch: '<S242>/Switch' incorporates:
     *  Constant: '<S226>/Constant1'
     *  RelationalOperator: '<S242>/UpperRelop'
     *  Sum: '<S226>/Subtract1'
     */
    if (rtb_Sum2_e < (-1.0 - rtb_Add_fn)) {
      rtb_Init = -1.0 - rtb_Add_fn;
    } else {
      rtb_Init = rtb_Sum2_e;
    }

    /* End of Switch: '<S242>/Switch' */
  }

  /* End of Switch: '<S242>/Switch2' */

  /* Saturate: '<S226>/Saturation1' */
  if (rtb_Init > Steering_Motor_Control_I_UL) {
    rtb_Sum2_e = Steering_Motor_Control_I_UL;
  } else if (rtb_Init < Steering_Motor_Control_I_LL) {
    rtb_Sum2_e = Steering_Motor_Control_I_LL;
  } else {
    rtb_Sum2_e = rtb_Init;
  }

  /* End of Saturate: '<S226>/Saturation1' */

  /* Sum: '<S226>/Add1' */
  rtb_Minus_k_idx_0 = rtb_Add_fn + rtb_Sum2_e;

  /* Saturate: '<S226>/Saturation2' */
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

  /* End of Saturate: '<S226>/Saturation2' */

  /* Switch: '<S352>/Switch' */
  if (!rtb_AT_Cage_Middle_Start_Red_Ac) {
    /* Switch: '<S352>/Switch' incorporates:
     *  Fcn: '<S353>/x->theta'
     */
    Code_Gen_Model_B.FR_Desired_Module_Angle = rt_atan2d_snf(rtb_Minus_n[1],
      rtb_Minus_n[0]);
  }

  /* End of Switch: '<S352>/Switch' */

  /* Trigonometry: '<S256>/Cos4' incorporates:
   *  Switch: '<S245>/Angle_Switch'
   *  Trigonometry: '<S255>/Cos4'
   */
  rtb_Subtract_h3 = cos(Code_Gen_Model_B.FR_Desired_Module_Angle);

  /* Trigonometry: '<S256>/Sin5' incorporates:
   *  UnaryMinus: '<S254>/Unary Minus'
   */
  rtb_uDLookupTable_l = sin(-Code_Gen_Model_B.FR_Steer_Module_Angle);

  /* Trigonometry: '<S256>/Sin4' incorporates:
   *  Switch: '<S245>/Angle_Switch'
   *  Trigonometry: '<S255>/Sin4'
   */
  rtb_Integral_hv = sin(Code_Gen_Model_B.FR_Desired_Module_Angle);

  /* Trigonometry: '<S256>/Cos5' incorporates:
   *  UnaryMinus: '<S254>/Unary Minus'
   */
  rtb_Init = cos(-Code_Gen_Model_B.FR_Steer_Module_Angle);

  /* Sum: '<S256>/Subtract1' incorporates:
   *  Product: '<S256>/Product2'
   *  Product: '<S256>/Product3'
   *  Trigonometry: '<S256>/Cos4'
   *  Trigonometry: '<S256>/Sin4'
   */
  rtb_Add_fn = (rtb_Subtract_h3 * rtb_uDLookupTable_l) + (rtb_Integral_hv *
    rtb_Init);

  /* Sum: '<S256>/Subtract' incorporates:
   *  Product: '<S256>/Product'
   *  Product: '<S256>/Product1'
   *  Trigonometry: '<S256>/Cos4'
   *  Trigonometry: '<S256>/Sin4'
   */
  rtb_Subtract1_la = (rtb_Subtract_h3 * rtb_Init) - (rtb_Integral_hv *
    rtb_uDLookupTable_l);

  /* Math: '<S256>/Hypot' */
  rtb_Hypot_b = rt_hypotd_snf(rtb_Subtract1_la, rtb_Add_fn);

  /* Switch: '<S256>/Switch' incorporates:
   *  Constant: '<S256>/Constant'
   *  Constant: '<S256>/Constant1'
   *  Constant: '<S257>/Constant'
   *  Product: '<S256>/Divide'
   *  Product: '<S256>/Divide1'
   *  RelationalOperator: '<S257>/Compare'
   *  Switch: '<S256>/Switch1'
   */
  if (rtb_Hypot_b > 1.0E-6) {
    rtb_Switch2_g = rtb_Add_fn / rtb_Hypot_b;
    rtb_Init = rtb_Subtract1_la / rtb_Hypot_b;
  } else {
    rtb_Switch2_g = 0.0;
    rtb_Init = 1.0;
  }

  /* End of Switch: '<S256>/Switch' */

  /* Product: '<S342>/Product1' */
  Code_Gen_Model_B.FR_Desired_Wheel_Speed =
    Code_Gen_Model_B.FR_Desired_Wheel_Speed_in * rtb_Add_o5;

  /* Switch: '<S245>/Speed_Switch' incorporates:
   *  Abs: '<S245>/Abs'
   *  Constant: '<S253>/Constant'
   *  RelationalOperator: '<S253>/Compare'
   *  Switch: '<S245>/Angle_Switch'
   *  Trigonometry: '<S255>/Atan1'
   *  Trigonometry: '<S256>/Atan1'
   *  UnaryMinus: '<S245>/Unary Minus'
   */
  if (fabs(rt_atan2d_snf(rtb_Switch2_g, rtb_Init)) > 1.5707963267948966) {
    rtb_Minus_k_idx_0 = -Code_Gen_Model_B.FR_Desired_Wheel_Speed;

    /* Sum: '<S255>/Subtract1' incorporates:
     *  Product: '<S255>/Product2'
     *  Product: '<S255>/Product3'
     *  UnaryMinus: '<S245>/Unary Minus'
     */
    rtb_Add_fn = (rtb_Subtract_h3 * Code_Gen_Model_ConstB.Sin5_m) +
      (rtb_Integral_hv * Code_Gen_Model_ConstB.Cos5_g);

    /* Sum: '<S255>/Subtract' incorporates:
     *  Product: '<S255>/Product'
     *  Product: '<S255>/Product1'
     */
    rtb_Hypot_b = (rtb_Subtract_h3 * Code_Gen_Model_ConstB.Cos5_g) -
      (rtb_Integral_hv * Code_Gen_Model_ConstB.Sin5_m);

    /* Math: '<S255>/Hypot' */
    rtb_Subtract1_la = rt_hypotd_snf(rtb_Hypot_b, rtb_Add_fn);

    /* Switch: '<S255>/Switch1' incorporates:
     *  Constant: '<S255>/Constant'
     *  Constant: '<S255>/Constant1'
     *  Constant: '<S258>/Constant'
     *  Product: '<S255>/Divide'
     *  Product: '<S255>/Divide1'
     *  RelationalOperator: '<S258>/Compare'
     *  Switch: '<S255>/Switch'
     */
    if (rtb_Subtract1_la > 1.0E-6) {
      rtb_Hypot_b /= rtb_Subtract1_la;
      rtb_Add_fn /= rtb_Subtract1_la;
    } else {
      rtb_Hypot_b = 1.0;
      rtb_Add_fn = 0.0;
    }

    /* End of Switch: '<S255>/Switch1' */
    rtb_uDLookupTable_l = rt_atan2d_snf(rtb_Add_fn, rtb_Hypot_b);
  } else {
    rtb_Minus_k_idx_0 = Code_Gen_Model_B.FR_Desired_Wheel_Speed;
    rtb_uDLookupTable_l = Code_Gen_Model_B.FR_Desired_Module_Angle;
  }

  /* Product: '<S248>/Product2' incorporates:
   *  Constant: '<S248>/Constant'
   *  Switch: '<S245>/Speed_Switch'
   */
  rtb_Switch2_g = rtb_Minus_k_idx_0 * 1150.4247703785388;

  /* Signum: '<S243>/Sign' */
  if (rtIsNaN(rtb_Switch2_g)) {
    rtb_Minus_k_idx_0 = (rtNaN);
  } else if (rtb_Switch2_g < 0.0) {
    rtb_Minus_k_idx_0 = -1.0;
  } else {
    rtb_Minus_k_idx_0 = (rtb_Switch2_g > 0.0);
  }

  /* Signum: '<S243>/Sign1' incorporates:
   *  Inport: '<Root>/FrontRight_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.FrontRight_Drive_Motor_Speed)) {
    rtb_Switch2_fx = (rtNaN);
  } else if (Code_Gen_Model_U.FrontRight_Drive_Motor_Speed < 0.0) {
    rtb_Switch2_fx = -1.0;
  } else {
    rtb_Switch2_fx = (Code_Gen_Model_U.FrontRight_Drive_Motor_Speed > 0.0);
  }

  /* Sum: '<S246>/Add' incorporates:
   *  Sum: '<S247>/Sum'
   */
  rtb_Init = rtb_uDLookupTable_l - Code_Gen_Model_B.FR_Steer_Module_Angle;

  /* Product: '<S218>/Product' incorporates:
   *  Abs: '<S243>/Abs'
   *  Abs: '<S246>/Abs'
   *  Constant: '<S249>/Constant'
   *  Constant: '<S259>/Constant3'
   *  Constant: '<S259>/Constant4'
   *  Inport: '<Root>/FrontRight_Drive_Motor_Speed'
   *  Logic: '<S243>/OR'
   *  Lookup_n-D: '<S246>/1-D Lookup Table'
   *  Math: '<S259>/Math Function'
   *  RelationalOperator: '<S243>/Equal1'
   *  RelationalOperator: '<S249>/Compare'
   *  Signum: '<S243>/Sign'
   *  Signum: '<S243>/Sign1'
   *  Sum: '<S246>/Add'
   *  Sum: '<S259>/Add1'
   *  Sum: '<S259>/Add2'
   */
  rtb_Switch2_g = (((real_T)((rtb_Minus_k_idx_0 == rtb_Switch2_fx) || (fabs
    (Code_Gen_Model_U.FrontRight_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_Switch2_g) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_Init + 1.5707963267948966, 3.1415926535897931) -
          1.5707963267948966), Code_Gen_Model_ConstP.pooled33,
     Code_Gen_Model_ConstP.pooled32, 1U);

  /* Sum: '<S244>/Sum' incorporates:
   *  Inport: '<Root>/FrontRight_Drive_Motor_Speed'
   */
  rtb_Hypot_b = rtb_Switch2_g - Code_Gen_Model_U.FrontRight_Drive_Motor_Speed;

  /* Sum: '<S251>/Sum1' incorporates:
   *  Constant: '<S244>/Constant2'
   *  Product: '<S251>/Product'
   *  Sum: '<S251>/Sum'
   *  UnitDelay: '<S251>/Unit Delay1'
   */
  rtb_Add_fn = ((rtb_Hypot_b - Code_Gen_Model_DW.UnitDelay1_DSTATE_e) *
                Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_e;

  /* Product: '<S244>/Product' incorporates:
   *  Constant: '<S244>/Constant3'
   */
  rtb_Subtract1_la = rtb_Add_fn * Drive_Motor_Control_D;

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
  rtb_Minus_k_idx_0 = rtb_Subtract1_la - Code_Gen_Model_DW.UD_DSTATE_mm;

  /* Saturate: '<S244>/Saturation' */
  if (rtb_Minus_k_idx_0 > Drive_Motor_Control_D_UL) {
    rtb_Minus_k_idx_0 = Drive_Motor_Control_D_UL;
  } else if (rtb_Minus_k_idx_0 < Drive_Motor_Control_D_LL) {
    rtb_Minus_k_idx_0 = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S244>/Add' incorporates:
   *  Gain: '<S244>/Gain'
   *  Gain: '<S244>/Gain1'
   *  Saturate: '<S244>/Saturation'
   */
  rtb_Add_c = ((Drive_Motor_Control_FF * rtb_Switch2_g) + (Drive_Motor_Control_P
    * rtb_Hypot_b)) + rtb_Minus_k_idx_0;

  /* Switch: '<S244>/Switch' incorporates:
   *  Constant: '<S244>/Constant4'
   */
  if (Code_Gen_Model_B.Swerve_Drive_Integral_Enable) {
    /* Sum: '<S244>/Sum2' incorporates:
     *  Gain: '<S244>/Gain2'
     *  UnitDelay: '<S244>/Unit Delay'
     */
    rtb_Hypot_b = (Drive_Motor_Control_I * rtb_Hypot_b) +
      Code_Gen_Model_DW.UnitDelay_DSTATE_h;

    /* Sum: '<S244>/Subtract' incorporates:
     *  Constant: '<S244>/Constant'
     */
    rtb_Switch2_p = 1.0 - rtb_Add_c;

    /* Switch: '<S252>/Switch2' incorporates:
     *  Constant: '<S244>/Constant'
     *  RelationalOperator: '<S252>/LowerRelop1'
     *  Sum: '<S244>/Subtract'
     */
    if (!(rtb_Hypot_b > (1.0 - rtb_Add_c))) {
      /* Sum: '<S244>/Subtract1' incorporates:
       *  Constant: '<S244>/Constant1'
       */
      rtb_Switch2_p = -1.0 - rtb_Add_c;

      /* Switch: '<S252>/Switch' incorporates:
       *  Constant: '<S244>/Constant1'
       *  RelationalOperator: '<S252>/UpperRelop'
       *  Sum: '<S244>/Subtract1'
       */
      if (!(rtb_Hypot_b < (-1.0 - rtb_Add_c))) {
        rtb_Switch2_p = rtb_Hypot_b;
      }

      /* End of Switch: '<S252>/Switch' */
    }

    /* End of Switch: '<S252>/Switch2' */

    /* Saturate: '<S244>/Saturation1' */
    if (rtb_Switch2_p > Drive_Motor_Control_I_UL) {
      rtb_Hypot_b = Drive_Motor_Control_I_UL;
    } else if (rtb_Switch2_p < Drive_Motor_Control_I_LL) {
      rtb_Hypot_b = Drive_Motor_Control_I_LL;
    } else {
      rtb_Hypot_b = rtb_Switch2_p;
    }

    /* End of Saturate: '<S244>/Saturation1' */
  } else {
    rtb_Hypot_b = 0.0;
  }

  /* End of Switch: '<S244>/Switch' */

  /* Sum: '<S244>/Add1' */
  rtb_Minus_k_idx_0 = rtb_Add_c + rtb_Hypot_b;

  /* Saturate: '<S244>/Saturation2' */
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

  /* End of Saturate: '<S244>/Saturation2' */

  /* Sum: '<S260>/Add1' incorporates:
   *  Constant: '<S260>/Constant3'
   *  Constant: '<S260>/Constant4'
   *  Math: '<S260>/Math Function'
   *  Sum: '<S260>/Add2'
   */
  rtb_Switch2_g = rt_modd_snf(rtb_Init + 3.1415926535897931, 6.2831853071795862)
    - 3.1415926535897931;

  /* Sum: '<S262>/Sum1' incorporates:
   *  Constant: '<S247>/Constant2'
   *  Product: '<S262>/Product'
   *  Sum: '<S262>/Sum'
   *  UnitDelay: '<S262>/Unit Delay1'
   */
  rtb_Add_c = ((rtb_Switch2_g - Code_Gen_Model_DW.UnitDelay1_DSTATE_n) *
               Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_n;

  /* Product: '<S247>/Product' incorporates:
   *  Constant: '<S247>/Constant3'
   */
  rtb_Switch2_p = rtb_Add_c * Steering_Motor_Control_D;

  /* Sum: '<S261>/Diff' incorporates:
   *  UnitDelay: '<S261>/UD'
   *
   * Block description for '<S261>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S261>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Minus_k_idx_0 = rtb_Switch2_p - Code_Gen_Model_DW.UD_DSTATE_i1;

  /* Saturate: '<S247>/Saturation' */
  if (rtb_Minus_k_idx_0 > Steering_Motor_Control_D_UL) {
    rtb_Minus_k_idx_0 = Steering_Motor_Control_D_UL;
  } else if (rtb_Minus_k_idx_0 < Steering_Motor_Control_D_LL) {
    rtb_Minus_k_idx_0 = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S247>/Add' incorporates:
   *  Gain: '<S247>/Gain1'
   *  Saturate: '<S247>/Saturation'
   */
  rtb_uDLookupTable_l = (Steering_Motor_Control_P * rtb_Switch2_g) +
    rtb_Minus_k_idx_0;

  /* Sum: '<S247>/Subtract' incorporates:
   *  Constant: '<S247>/Constant'
   */
  rtb_Init = 1.0 - rtb_uDLookupTable_l;

  /* Sum: '<S247>/Sum2' incorporates:
   *  Gain: '<S247>/Gain2'
   *  UnitDelay: '<S247>/Unit Delay'
   */
  rtb_Sum2_oc = (Steering_Motor_Control_I * rtb_Switch2_g) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_dt;

  /* Switch: '<S263>/Switch2' incorporates:
   *  RelationalOperator: '<S263>/LowerRelop1'
   */
  if (!(rtb_Sum2_oc > rtb_Init)) {
    /* Switch: '<S263>/Switch' incorporates:
     *  Constant: '<S247>/Constant1'
     *  RelationalOperator: '<S263>/UpperRelop'
     *  Sum: '<S247>/Subtract1'
     */
    if (rtb_Sum2_oc < (-1.0 - rtb_uDLookupTable_l)) {
      rtb_Init = -1.0 - rtb_uDLookupTable_l;
    } else {
      rtb_Init = rtb_Sum2_oc;
    }

    /* End of Switch: '<S263>/Switch' */
  }

  /* End of Switch: '<S263>/Switch2' */

  /* Saturate: '<S247>/Saturation1' */
  if (rtb_Init > Steering_Motor_Control_I_UL) {
    rtb_Sum2_oc = Steering_Motor_Control_I_UL;
  } else if (rtb_Init < Steering_Motor_Control_I_LL) {
    rtb_Sum2_oc = Steering_Motor_Control_I_LL;
  } else {
    rtb_Sum2_oc = rtb_Init;
  }

  /* End of Saturate: '<S247>/Saturation1' */

  /* Sum: '<S247>/Add1' */
  rtb_Minus_k_idx_0 = rtb_uDLookupTable_l + rtb_Sum2_oc;

  /* Saturate: '<S247>/Saturation2' */
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

  /* End of Saturate: '<S247>/Saturation2' */

  /* Switch: '<S357>/Switch' */
  if (!rtb_AT_Cage_Right_Start_Blue_Ac) {
    /* Switch: '<S357>/Switch' incorporates:
     *  Fcn: '<S358>/x->theta'
     */
    Code_Gen_Model_B.BL_Desired_Module_Angle = rt_atan2d_snf(rtb_Add2_k_idx_1,
      rtb_Add2_k_idx_0);
  }

  /* End of Switch: '<S357>/Switch' */

  /* Trigonometry: '<S277>/Cos4' incorporates:
   *  Switch: '<S266>/Angle_Switch'
   *  Trigonometry: '<S276>/Cos4'
   */
  rtb_Subtract_h3 = cos(Code_Gen_Model_B.BL_Desired_Module_Angle);

  /* Trigonometry: '<S277>/Sin5' incorporates:
   *  UnaryMinus: '<S275>/Unary Minus'
   */
  rtb_uDLookupTable_l = sin(-Code_Gen_Model_B.BL_Steer_Module_Angle);

  /* Trigonometry: '<S277>/Sin4' incorporates:
   *  Switch: '<S266>/Angle_Switch'
   *  Trigonometry: '<S276>/Sin4'
   */
  rtb_Integral_hv = sin(Code_Gen_Model_B.BL_Desired_Module_Angle);

  /* Trigonometry: '<S277>/Cos5' incorporates:
   *  UnaryMinus: '<S275>/Unary Minus'
   */
  rtb_Init = cos(-Code_Gen_Model_B.BL_Steer_Module_Angle);

  /* Sum: '<S277>/Subtract1' incorporates:
   *  Product: '<S277>/Product2'
   *  Product: '<S277>/Product3'
   *  Trigonometry: '<S277>/Cos4'
   *  Trigonometry: '<S277>/Sin4'
   */
  rtb_Switch2_g = (rtb_Subtract_h3 * rtb_uDLookupTable_l) + (rtb_Integral_hv *
    rtb_Init);

  /* Sum: '<S277>/Subtract' incorporates:
   *  Product: '<S277>/Product'
   *  Product: '<S277>/Product1'
   *  Trigonometry: '<S277>/Cos4'
   *  Trigonometry: '<S277>/Sin4'
   */
  rtb_uDLookupTable_l = (rtb_Subtract_h3 * rtb_Init) - (rtb_Integral_hv *
    rtb_uDLookupTable_l);

  /* Math: '<S277>/Hypot' */
  rtb_Init = rt_hypotd_snf(rtb_uDLookupTable_l, rtb_Switch2_g);

  /* Switch: '<S277>/Switch' incorporates:
   *  Constant: '<S277>/Constant'
   *  Constant: '<S277>/Constant1'
   *  Constant: '<S278>/Constant'
   *  Product: '<S277>/Divide'
   *  Product: '<S277>/Divide1'
   *  RelationalOperator: '<S278>/Compare'
   *  Switch: '<S277>/Switch1'
   */
  if (rtb_Init > 1.0E-6) {
    rtb_Switch2_g /= rtb_Init;
    rtb_Init = rtb_uDLookupTable_l / rtb_Init;
  } else {
    rtb_Switch2_g = 0.0;
    rtb_Init = 1.0;
  }

  /* End of Switch: '<S277>/Switch' */

  /* Product: '<S342>/Product2' */
  Code_Gen_Model_B.BL_Desired_Wheel_Speed =
    Code_Gen_Model_B.BL_Desired_Wheel_Speed_in * rtb_Add_o5;

  /* Switch: '<S266>/Speed_Switch' incorporates:
   *  Abs: '<S266>/Abs'
   *  Constant: '<S274>/Constant'
   *  RelationalOperator: '<S274>/Compare'
   *  Switch: '<S266>/Angle_Switch'
   *  Trigonometry: '<S276>/Atan1'
   *  Trigonometry: '<S277>/Atan1'
   *  UnaryMinus: '<S266>/Unary Minus'
   */
  if (fabs(rt_atan2d_snf(rtb_Switch2_g, rtb_Init)) > 1.5707963267948966) {
    rtb_Minus_k_idx_0 = -Code_Gen_Model_B.BL_Desired_Wheel_Speed;

    /* Sum: '<S276>/Subtract1' incorporates:
     *  Product: '<S276>/Product2'
     *  Product: '<S276>/Product3'
     *  UnaryMinus: '<S266>/Unary Minus'
     */
    rtb_Switch2_g = (rtb_Subtract_h3 * Code_Gen_Model_ConstB.Sin5_e) +
      (rtb_Integral_hv * Code_Gen_Model_ConstB.Cos5_i);

    /* Sum: '<S276>/Subtract' incorporates:
     *  Product: '<S276>/Product'
     *  Product: '<S276>/Product1'
     */
    rtb_Subtract_h3 = (rtb_Subtract_h3 * Code_Gen_Model_ConstB.Cos5_i) -
      (rtb_Integral_hv * Code_Gen_Model_ConstB.Sin5_e);

    /* Math: '<S276>/Hypot' */
    rtb_uDLookupTable_l = rt_hypotd_snf(rtb_Subtract_h3, rtb_Switch2_g);

    /* Switch: '<S276>/Switch1' incorporates:
     *  Constant: '<S276>/Constant'
     *  Constant: '<S276>/Constant1'
     *  Constant: '<S279>/Constant'
     *  Product: '<S276>/Divide'
     *  Product: '<S276>/Divide1'
     *  RelationalOperator: '<S279>/Compare'
     *  Switch: '<S276>/Switch'
     */
    if (rtb_uDLookupTable_l > 1.0E-6) {
      rtb_Subtract_h3 /= rtb_uDLookupTable_l;
      rtb_Switch2_g /= rtb_uDLookupTable_l;
    } else {
      rtb_Subtract_h3 = 1.0;
      rtb_Switch2_g = 0.0;
    }

    /* End of Switch: '<S276>/Switch1' */
    rtb_Init = rt_atan2d_snf(rtb_Switch2_g, rtb_Subtract_h3);
  } else {
    rtb_Minus_k_idx_0 = Code_Gen_Model_B.BL_Desired_Wheel_Speed;
    rtb_Init = Code_Gen_Model_B.BL_Desired_Module_Angle;
  }

  /* Product: '<S269>/Product2' incorporates:
   *  Constant: '<S269>/Constant'
   *  Switch: '<S266>/Speed_Switch'
   */
  rtb_Add_o5 = rtb_Minus_k_idx_0 * 1150.4247703785388;

  /* Signum: '<S264>/Sign' */
  if (rtIsNaN(rtb_Add_o5)) {
    rtb_Minus_k_idx_0 = (rtNaN);
  } else if (rtb_Add_o5 < 0.0) {
    rtb_Minus_k_idx_0 = -1.0;
  } else {
    rtb_Minus_k_idx_0 = (rtb_Add_o5 > 0.0);
  }

  /* Signum: '<S264>/Sign1' incorporates:
   *  Inport: '<Root>/BackLeft_Drive_Motor_Speed'
   */
  if (rtIsNaN(Code_Gen_Model_U.BackLeft_Drive_Motor_Speed)) {
    rtb_Switch2_fx = (rtNaN);
  } else if (Code_Gen_Model_U.BackLeft_Drive_Motor_Speed < 0.0) {
    rtb_Switch2_fx = -1.0;
  } else {
    rtb_Switch2_fx = (Code_Gen_Model_U.BackLeft_Drive_Motor_Speed > 0.0);
  }

  /* Sum: '<S267>/Add' incorporates:
   *  Sum: '<S268>/Sum'
   */
  rtb_Init -= Code_Gen_Model_B.BL_Steer_Module_Angle;

  /* Product: '<S219>/Product' incorporates:
   *  Abs: '<S264>/Abs'
   *  Abs: '<S267>/Abs'
   *  Constant: '<S270>/Constant'
   *  Constant: '<S280>/Constant3'
   *  Constant: '<S280>/Constant4'
   *  Inport: '<Root>/BackLeft_Drive_Motor_Speed'
   *  Logic: '<S264>/OR'
   *  Lookup_n-D: '<S267>/1-D Lookup Table'
   *  Math: '<S280>/Math Function'
   *  RelationalOperator: '<S264>/Equal1'
   *  RelationalOperator: '<S270>/Compare'
   *  Signum: '<S264>/Sign'
   *  Signum: '<S264>/Sign1'
   *  Sum: '<S267>/Add'
   *  Sum: '<S280>/Add1'
   *  Sum: '<S280>/Add2'
   */
  rtb_Add_o5 = (((real_T)((rtb_Minus_k_idx_0 == rtb_Switch2_fx) || (fabs
    (Code_Gen_Model_U.BackLeft_Drive_Motor_Speed) <=
    Drive_Motor_Control_Sign_Change_Deadband))) * rtb_Add_o5) * look1_binlcpw
    (fabs(rt_modd_snf(rtb_Init + 1.5707963267948966, 3.1415926535897931) -
          1.5707963267948966), Code_Gen_Model_ConstP.pooled33,
     Code_Gen_Model_ConstP.pooled32, 1U);

  /* Sum: '<S265>/Sum' incorporates:
   *  Inport: '<Root>/BackLeft_Drive_Motor_Speed'
   */
  rtb_Switch2_g = rtb_Add_o5 - Code_Gen_Model_U.BackLeft_Drive_Motor_Speed;

  /* Sum: '<S272>/Sum1' incorporates:
   *  Constant: '<S265>/Constant2'
   *  Product: '<S272>/Product'
   *  Sum: '<S272>/Sum'
   *  UnitDelay: '<S272>/Unit Delay1'
   */
  rtb_uDLookupTable_l = ((rtb_Switch2_g - Code_Gen_Model_DW.UnitDelay1_DSTATE_n4)
    * Drive_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_n4;

  /* Product: '<S265>/Product' incorporates:
   *  Constant: '<S265>/Constant3'
   */
  rtb_Subtract_h3 = rtb_uDLookupTable_l * Drive_Motor_Control_D;

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
  rtb_Minus_k_idx_0 = rtb_Subtract_h3 - Code_Gen_Model_DW.UD_DSTATE_o;

  /* Saturate: '<S265>/Saturation' */
  if (rtb_Minus_k_idx_0 > Drive_Motor_Control_D_UL) {
    rtb_Minus_k_idx_0 = Drive_Motor_Control_D_UL;
  } else if (rtb_Minus_k_idx_0 < Drive_Motor_Control_D_LL) {
    rtb_Minus_k_idx_0 = Drive_Motor_Control_D_LL;
  }

  /* Sum: '<S265>/Add' incorporates:
   *  Gain: '<S265>/Gain'
   *  Gain: '<S265>/Gain1'
   *  Saturate: '<S265>/Saturation'
   */
  rtb_Add_o5 = ((Drive_Motor_Control_FF * rtb_Add_o5) + (Drive_Motor_Control_P *
    rtb_Switch2_g)) + rtb_Minus_k_idx_0;

  /* Switch: '<S265>/Switch' incorporates:
   *  Constant: '<S265>/Constant4'
   */
  if (Code_Gen_Model_B.Swerve_Drive_Integral_Enable) {
    /* Sum: '<S265>/Sum2' incorporates:
     *  Gain: '<S265>/Gain2'
     *  UnitDelay: '<S265>/Unit Delay'
     */
    rtb_Switch2_g = (Drive_Motor_Control_I * rtb_Switch2_g) +
      Code_Gen_Model_DW.UnitDelay_DSTATE_f;

    /* Sum: '<S265>/Subtract' incorporates:
     *  Constant: '<S265>/Constant'
     */
    rtb_Integral_hv = 1.0 - rtb_Add_o5;

    /* Switch: '<S273>/Switch2' incorporates:
     *  Constant: '<S265>/Constant'
     *  RelationalOperator: '<S273>/LowerRelop1'
     *  Sum: '<S265>/Subtract'
     */
    if (!(rtb_Switch2_g > (1.0 - rtb_Add_o5))) {
      /* Sum: '<S265>/Subtract1' incorporates:
       *  Constant: '<S265>/Constant1'
       */
      rtb_Integral_hv = -1.0 - rtb_Add_o5;

      /* Switch: '<S273>/Switch' incorporates:
       *  Constant: '<S265>/Constant1'
       *  RelationalOperator: '<S273>/UpperRelop'
       *  Sum: '<S265>/Subtract1'
       */
      if (!(rtb_Switch2_g < (-1.0 - rtb_Add_o5))) {
        rtb_Integral_hv = rtb_Switch2_g;
      }

      /* End of Switch: '<S273>/Switch' */
    }

    /* End of Switch: '<S273>/Switch2' */

    /* Saturate: '<S265>/Saturation1' */
    if (rtb_Integral_hv > Drive_Motor_Control_I_UL) {
      rtb_Integral_hv = Drive_Motor_Control_I_UL;
    } else if (rtb_Integral_hv < Drive_Motor_Control_I_LL) {
      rtb_Integral_hv = Drive_Motor_Control_I_LL;
    }

    /* End of Saturate: '<S265>/Saturation1' */
  } else {
    rtb_Integral_hv = 0.0;
  }

  /* End of Switch: '<S265>/Switch' */

  /* Sum: '<S265>/Add1' */
  rtb_Minus_k_idx_0 = rtb_Add_o5 + rtb_Integral_hv;

  /* Saturate: '<S265>/Saturation2' */
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

  /* End of Saturate: '<S265>/Saturation2' */

  /* Sum: '<S281>/Add1' incorporates:
   *  Constant: '<S281>/Constant3'
   *  Constant: '<S281>/Constant4'
   *  Math: '<S281>/Math Function'
   *  Sum: '<S281>/Add2'
   */
  rtb_Add_o5 = rt_modd_snf(rtb_Init + 3.1415926535897931, 6.2831853071795862) -
    3.1415926535897931;

  /* Sum: '<S283>/Sum1' incorporates:
   *  Constant: '<S268>/Constant2'
   *  Product: '<S283>/Product'
   *  Sum: '<S283>/Sum'
   *  UnitDelay: '<S283>/Unit Delay1'
   */
  rtb_Add2_k_idx_0 = ((rtb_Add_o5 - Code_Gen_Model_DW.UnitDelay1_DSTATE_nw) *
                      Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_nw;

  /* Product: '<S268>/Product' incorporates:
   *  Constant: '<S268>/Constant3'
   */
  rtb_Add2_k_idx_1 = rtb_Add2_k_idx_0 * Steering_Motor_Control_D;

  /* Sum: '<S282>/Diff' incorporates:
   *  UnitDelay: '<S282>/UD'
   *
   * Block description for '<S282>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S282>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Minus_k_idx_0 = rtb_Add2_k_idx_1 - Code_Gen_Model_DW.UD_DSTATE_k;

  /* Saturate: '<S268>/Saturation' */
  if (rtb_Minus_k_idx_0 > Steering_Motor_Control_D_UL) {
    rtb_Minus_k_idx_0 = Steering_Motor_Control_D_UL;
  } else if (rtb_Minus_k_idx_0 < Steering_Motor_Control_D_LL) {
    rtb_Minus_k_idx_0 = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S268>/Add' incorporates:
   *  Gain: '<S268>/Gain1'
   *  Saturate: '<S268>/Saturation'
   */
  rtb_Init = (Steering_Motor_Control_P * rtb_Add_o5) + rtb_Minus_k_idx_0;

  /* Sum: '<S268>/Subtract' incorporates:
   *  Constant: '<S268>/Constant'
   */
  rtb_Switch2_g = 1.0 - rtb_Init;

  /* Sum: '<S268>/Sum2' incorporates:
   *  Gain: '<S268>/Gain2'
   *  UnitDelay: '<S268>/Unit Delay'
   */
  rtb_Add_o5 = (Steering_Motor_Control_I * rtb_Add_o5) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_k;

  /* Switch: '<S284>/Switch2' incorporates:
   *  Constant: '<S268>/Constant'
   *  RelationalOperator: '<S284>/LowerRelop1'
   *  Sum: '<S268>/Subtract'
   */
  if (!(rtb_Add_o5 > (1.0 - rtb_Init))) {
    /* Sum: '<S268>/Subtract1' incorporates:
     *  Constant: '<S268>/Constant1'
     */
    rtb_Switch2_g = -1.0 - rtb_Init;

    /* Switch: '<S284>/Switch' incorporates:
     *  Constant: '<S268>/Constant1'
     *  RelationalOperator: '<S284>/UpperRelop'
     *  Sum: '<S268>/Subtract1'
     */
    if (!(rtb_Add_o5 < (-1.0 - rtb_Init))) {
      rtb_Switch2_g = rtb_Add_o5;
    }

    /* End of Switch: '<S284>/Switch' */
  }

  /* End of Switch: '<S284>/Switch2' */

  /* Saturate: '<S268>/Saturation1' */
  if (rtb_Switch2_g > Steering_Motor_Control_I_UL) {
    rtb_Integral_m = Steering_Motor_Control_I_UL;
  } else if (rtb_Switch2_g < Steering_Motor_Control_I_LL) {
    rtb_Integral_m = Steering_Motor_Control_I_LL;
  } else {
    rtb_Integral_m = rtb_Switch2_g;
  }

  /* End of Saturate: '<S268>/Saturation1' */

  /* Sum: '<S268>/Add1' */
  rtb_Minus_k_idx_0 = rtb_Init + rtb_Integral_m;

  /* Saturate: '<S268>/Saturation2' */
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

  /* End of Saturate: '<S268>/Saturation2' */

  /* Sum: '<S302>/Add1' incorporates:
   *  Constant: '<S302>/Constant3'
   *  Constant: '<S302>/Constant4'
   *  Math: '<S302>/Math Function'
   *  Sum: '<S302>/Add2'
   */
  rtb_Add_o5 = rt_modd_snf(rtb_Optimized_Module_Angle + 3.1415926535897931,
    6.2831853071795862) - 3.1415926535897931;

  /* Sum: '<S304>/Sum1' incorporates:
   *  Constant: '<S289>/Constant2'
   *  Product: '<S304>/Product'
   *  Sum: '<S304>/Sum'
   *  UnitDelay: '<S304>/Unit Delay1'
   */
  rtb_Optimized_Module_Angle = ((rtb_Add_o5 -
    Code_Gen_Model_DW.UnitDelay1_DSTATE_iw) *
    Steering_Motor_Control_D_FilterCoeff) +
    Code_Gen_Model_DW.UnitDelay1_DSTATE_iw;

  /* Product: '<S289>/Product' incorporates:
   *  Constant: '<S289>/Constant3'
   */
  rtb_Product_d1 = rtb_Optimized_Module_Angle * Steering_Motor_Control_D;

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
  rtb_Minus_k_idx_0 = rtb_Product_d1 - Code_Gen_Model_DW.UD_DSTATE_l;

  /* Saturate: '<S289>/Saturation' */
  if (rtb_Minus_k_idx_0 > Steering_Motor_Control_D_UL) {
    rtb_Minus_k_idx_0 = Steering_Motor_Control_D_UL;
  } else if (rtb_Minus_k_idx_0 < Steering_Motor_Control_D_LL) {
    rtb_Minus_k_idx_0 = Steering_Motor_Control_D_LL;
  }

  /* Sum: '<S289>/Add' incorporates:
   *  Gain: '<S289>/Gain1'
   *  Saturate: '<S289>/Saturation'
   */
  rtb_Init = (Steering_Motor_Control_P * rtb_Add_o5) + rtb_Minus_k_idx_0;

  /* Sum: '<S289>/Subtract' incorporates:
   *  Constant: '<S289>/Constant'
   */
  rtb_Switch2_g = 1.0 - rtb_Init;

  /* Sum: '<S289>/Sum2' incorporates:
   *  Gain: '<S289>/Gain2'
   *  UnitDelay: '<S289>/Unit Delay'
   */
  rtb_Add_o5 = (Steering_Motor_Control_I * rtb_Add_o5) +
    Code_Gen_Model_DW.UnitDelay_DSTATE_lm;

  /* Switch: '<S305>/Switch2' incorporates:
   *  Constant: '<S289>/Constant'
   *  RelationalOperator: '<S305>/LowerRelop1'
   *  Sum: '<S289>/Subtract'
   */
  if (!(rtb_Add_o5 > (1.0 - rtb_Init))) {
    /* Sum: '<S289>/Subtract1' incorporates:
     *  Constant: '<S289>/Constant1'
     */
    rtb_Switch2_g = -1.0 - rtb_Init;

    /* Switch: '<S305>/Switch' incorporates:
     *  Constant: '<S289>/Constant1'
     *  RelationalOperator: '<S305>/UpperRelop'
     *  Sum: '<S289>/Subtract1'
     */
    if (!(rtb_Add_o5 < (-1.0 - rtb_Init))) {
      rtb_Switch2_g = rtb_Add_o5;
    }

    /* End of Switch: '<S305>/Switch' */
  }

  /* End of Switch: '<S305>/Switch2' */

  /* Saturate: '<S289>/Saturation1' */
  if (rtb_Switch2_g > Steering_Motor_Control_I_UL) {
    rtb_Integral_p = Steering_Motor_Control_I_UL;
  } else if (rtb_Switch2_g < Steering_Motor_Control_I_LL) {
    rtb_Integral_p = Steering_Motor_Control_I_LL;
  } else {
    rtb_Integral_p = rtb_Switch2_g;
  }

  /* End of Saturate: '<S289>/Saturation1' */

  /* Sum: '<S289>/Add1' */
  rtb_Minus_k_idx_0 = rtb_Init + rtb_Integral_p;

  /* Saturate: '<S289>/Saturation2' */
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

  /* End of Saturate: '<S289>/Saturation2' */

  /* MinMax: '<S9>/Max' incorporates:
   *  Bias: '<S1>/Add Constant'
   *  Lookup_n-D: '<S9>/Range of Motion Protection Limit'
   *  Lookup_n-D: '<S9>/Range of Motion Protection Limit1'
   *  Merge: '<S16>/Merge13'
   */
  rtb_Add_o5 = fmax(fmax(Code_Gen_Model_B.Elevator_Height_Desired, look1_binlcpw
    (Code_Gen_Model_B.Coral_Arm_Angle_Desired, Code_Gen_Model_ConstP.pooled35,
     Code_Gen_Model_ConstP.pooled34, 95U)), look1_binlcpw
                    (Code_Gen_Model_B.Coral_Arm_Angle_Measured,
                     Code_Gen_Model_ConstP.pooled35,
                     Code_Gen_Model_ConstP.pooled34, 95U));

  /* Switch: '<S9>/Switch3' incorporates:
   *  Abs: '<S9>/Abs1'
   *  Constant: '<S42>/Constant'
   *  Constant: '<S9>/Constant'
   *  Constant: '<S9>/Constant6'
   *  Logic: '<S9>/AND'
   *  RelationalOperator: '<S42>/Compare'
   *  RelationalOperator: '<S9>/Relational Operator'
   *  UnitDelay: '<S9>/Unit Delay'
   */
  if ((Code_Gen_Model_B.Elevator_Height_Desired < rtb_Add_o5) && (fabs
       (Code_Gen_Model_B.Elevator_Error) <= Elevator_Height_Error_Threshold)) {
    rtb_Minus_k_idx_0 = Elevator_Error_Increase;
  } else {
    rtb_Minus_k_idx_0 = 0.0;
  }

  /* Sum: '<S9>/Add' incorporates:
   *  Sum: '<S9>/Subtract'
   *  Switch: '<S9>/Switch3'
   */
  Code_Gen_Model_B.Elevator_Error = (rtb_Add_o5 -
    Code_Gen_Model_B.Elevator_Height_Measured) + rtb_Minus_k_idx_0;

  /* Logic: '<S9>/Logical Operator3' incorporates:
   *  Abs: '<S9>/Abs'
   *  Constant: '<S41>/Constant'
   *  Constant: '<S43>/Constant'
   *  Logic: '<S9>/Logical Operator1'
   *  RelationalOperator: '<S41>/Compare'
   *  RelationalOperator: '<S43>/Compare'
   */
  rtb_Compare_kw = (rtb_Compare_kw || ((Code_Gen_Model_B.Elevator_Height_Desired
    == 0.0) && (fabs(Code_Gen_Model_B.Elevator_Error) <=
                Elevator_Error_Bottom_Disable)));

  /* Gain: '<S45>/Gain1' */
  Code_Gen_Model_B.Elevator_Proportional = Elevator_Gain_Prop *
    Code_Gen_Model_B.Elevator_Error;

  /* Logic: '<S9>/Logical Operator' incorporates:
   *  Logic: '<S9>/Logical Operator2'
   *  Logic: '<S9>/NOT'
   *  Logic: '<S9>/NOT2'
   *  Logic: '<S9>/OR'
   */
  rtb_Is_Absolute_Steering = (((!rtb_Compare_kw) &&
    (Code_Gen_Model_B.Reefscape_Motors_Enable)) && ((!rtb_Compare_pd) &&
    (!rtb_Compare)));

  /* Switch: '<S45>/Switch' */
  if (rtb_Is_Absolute_Steering) {
    /* Switch: '<S45>/Switch1' incorporates:
     *  UnitDelay: '<S54>/Delay Input1'
     *
     * Block description for '<S54>/Delay Input1':
     *
     *  Store in Global RAM
     */
    if (!Code_Gen_Model_DW.DelayInput1_DSTATE_be) {
      /* Switch: '<S45>/Switch' incorporates:
       *  Constant: '<S45>/Constant3'
       */
      Code_Gen_Model_B.Elevator_Integral = Elevator_Int_IC;
    } else {
      /* Sum: '<S45>/Sum2' incorporates:
       *  Gain: '<S45>/Gain2'
       *  UnitDelay: '<S45>/Unit Delay'
       */
      rtb_Add_o5 = (Elevator_Gain_Int * Code_Gen_Model_B.Elevator_Error) +
        Code_Gen_Model_B.Elevator_Integral;

      /* Sum: '<S45>/Subtract' incorporates:
       *  Constant: '<S45>/Constant'
       */
      rtb_Switch2_g = Elevator_Total_UL - Code_Gen_Model_B.Elevator_Proportional;

      /* Switch: '<S55>/Switch2' incorporates:
       *  RelationalOperator: '<S55>/LowerRelop1'
       */
      if (!(rtb_Add_o5 > rtb_Switch2_g)) {
        /* Sum: '<S45>/Subtract1' incorporates:
         *  Constant: '<S45>/Constant1'
         */
        rtb_Switch2_g = Elevator_Total_LL -
          Code_Gen_Model_B.Elevator_Proportional;

        /* Switch: '<S55>/Switch' incorporates:
         *  RelationalOperator: '<S55>/UpperRelop'
         */
        if (!(rtb_Add_o5 < rtb_Switch2_g)) {
          rtb_Switch2_g = rtb_Add_o5;
        }

        /* End of Switch: '<S55>/Switch' */
      }

      /* End of Switch: '<S55>/Switch2' */

      /* Saturate: '<S45>/Saturation1' */
      if (rtb_Switch2_g > Elevator_Int_UL) {
        /* Switch: '<S45>/Switch' */
        Code_Gen_Model_B.Elevator_Integral = Elevator_Int_UL;
      } else if (rtb_Switch2_g < Elevator_Int_LL) {
        /* Switch: '<S45>/Switch' */
        Code_Gen_Model_B.Elevator_Integral = Elevator_Int_LL;
      } else {
        /* Switch: '<S45>/Switch' */
        Code_Gen_Model_B.Elevator_Integral = rtb_Switch2_g;
      }

      /* End of Saturate: '<S45>/Saturation1' */
    }

    /* End of Switch: '<S45>/Switch1' */
  } else {
    /* Switch: '<S45>/Switch' incorporates:
     *  Constant: '<S45>/Constant2'
     */
    Code_Gen_Model_B.Elevator_Integral = 0.0;
  }

  /* End of Switch: '<S45>/Switch' */

  /* Switch: '<S9>/Switch2' incorporates:
   *  Constant: '<S9>/Constant5'
   */
  if (Code_Gen_Model_B.Reefscape_Motors_Enable) {
    /* Switch: '<S9>/Switch4' incorporates:
     *  Constant: '<S9>/Constant7'
     */
    if (rtb_Compare_kw) {
      rtb_Add_o5 = Elevator_Bottom_DC;
    } else {
      /* Sum: '<S45>/Add1' */
      rtb_Switch2_g = Code_Gen_Model_B.Elevator_Proportional +
        Code_Gen_Model_B.Elevator_Integral;

      /* Saturate: '<S45>/Saturation2' */
      if (rtb_Switch2_g > Elevator_Total_UL) {
        rtb_Switch2_g = Elevator_Total_UL;
      } else if (rtb_Switch2_g < Elevator_Total_LL) {
        rtb_Switch2_g = Elevator_Total_LL;
      }

      /* End of Saturate: '<S45>/Saturation2' */

      /* Switch: '<S9>/Switch1' incorporates:
       *  Constant: '<S9>/Constant1'
       *  Constant: '<S9>/Constant2'
       */
      if (rtb_Compare_pd) {
        rtb_Add_o5 = Elevator_Hold_at_Top_DC;
      } else {
        rtb_Add_o5 = 1.0;
      }

      /* End of Switch: '<S9>/Switch1' */

      /* Switch: '<S46>/Switch2' incorporates:
       *  RelationalOperator: '<S46>/LowerRelop1'
       */
      if (!(rtb_Switch2_g > rtb_Add_o5)) {
        /* Switch: '<S9>/Switch' incorporates:
         *  Constant: '<S9>/Constant3'
         *  Constant: '<S9>/Constant4'
         */
        if (rtb_Compare) {
          rtb_Add_o5 = 0.0;
        } else {
          rtb_Add_o5 = -1.0;
        }

        /* End of Switch: '<S9>/Switch' */

        /* Switch: '<S46>/Switch' incorporates:
         *  RelationalOperator: '<S46>/UpperRelop'
         */
        if (!(rtb_Switch2_g < rtb_Add_o5)) {
          rtb_Add_o5 = rtb_Switch2_g;
        }

        /* End of Switch: '<S46>/Switch' */
      }

      /* End of Switch: '<S46>/Switch2' */
    }

    /* End of Switch: '<S9>/Switch4' */
  } else {
    rtb_Add_o5 = 0.0;
  }

  /* End of Switch: '<S9>/Switch2' */

  /* UnitDelay: '<S44>/Unit Delay' */
  rtb_Switch2_g = Code_Gen_Model_DW.UnitDelay_DSTATE_mh;

  /* Abs: '<S44>/Abs' incorporates:
   *  Sum: '<S44>/Subtract'
   */
  rtb_Init = fabs(rtb_Switch2_g - rtb_Add_o5);

  /* Signum: '<S44>/Sign2' */
  if (rtIsNaN(rtb_Switch2_g)) {
    rtb_Minus_k_idx_0 = (rtNaN);
  } else if (rtb_Switch2_g < 0.0) {
    rtb_Minus_k_idx_0 = -1.0;
  } else {
    rtb_Minus_k_idx_0 = (rtb_Switch2_g > 0.0);
  }

  /* Signum: '<S44>/Sign1' */
  if (rtIsNaN(rtb_Add_o5)) {
    rtb_Switch2_fx = (rtNaN);
  } else if (rtb_Add_o5 < 0.0) {
    rtb_Switch2_fx = -1.0;
  } else {
    rtb_Switch2_fx = (rtb_Add_o5 > 0.0);
  }

  /* Product: '<S44>/Product1' incorporates:
   *  Signum: '<S44>/Sign1'
   *  Signum: '<S44>/Sign2'
   */
  rtb_Minus_k_idx_0 *= rtb_Switch2_fx;
  if (rtIsNaN(rtb_Minus_k_idx_0)) {
    i = 0;
  } else {
    i = (int32_T)fmod(rtb_Minus_k_idx_0, 256.0);
  }

  /* Switch: '<S44>/Switch' incorporates:
   *  Constant: '<S44>/Constant'
   *  Constant: '<S47>/Constant'
   *  Constant: '<S48>/Constant'
   *  Logic: '<S44>/or'
   *  Product: '<S44>/Product1'
   *  RelationalOperator: '<S47>/Compare'
   *  RelationalOperator: '<S48>/Compare'
   */
  if ((!(rtb_Switch2_g == 0.0)) && (((i < 0) ? ((int32_T)((int8_T)(-((int8_T)
            ((uint8_T)(-((real_T)i))))))) : i) <= 0)) {
    rtb_Add_o5 = 0.0;
  }

  /* End of Switch: '<S44>/Switch' */

  /* RelationalOperator: '<S49>/Compare' incorporates:
   *  Constant: '<S49>/Constant'
   */
  rtb_Compare_kw = (rtb_Add_o5 == 0.0);

  /* Switch: '<S44>/Switch5' */
  if (rtb_Compare_kw) {
    /* SignalConversion generated from: '<S44>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S44>/Constant4'
     *  Constant: '<S44>/Constant6'
     */
    rtb_Reshapey[0] = 1.0;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S44>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S44>/Constant2'
     *  Constant: '<S44>/Constant5'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = 0.01;

    /* S-Function (sfix_look1_dyn): '<S44>/Lookup Table Dynamic' */
    /* Dynamic Look-Up Table Block: '<S44>/Lookup Table Dynamic'
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
    /* SignalConversion generated from: '<S44>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S44>/Constant10'
     *  Constant: '<S44>/Constant8'
     */
    rtb_Reshapey[0] = 1.0;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S44>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S44>/Constant7'
     *  Constant: '<S44>/Constant9'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = 0.01;

    /* S-Function (sfix_look1_dyn): '<S44>/Lookup Table Dynamic1' */
    /* Dynamic Look-Up Table Block: '<S44>/Lookup Table Dynamic1'
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

  /* End of Switch: '<S44>/Switch5' */

  /* RelationalOperator: '<S50>/Compare' incorporates:
   *  Constant: '<S50>/Constant'
   */
  rtb_Is_Absolute_Translation_g = (rtb_Add_o5 > 0.0);

  /* Switch: '<S44>/Switch1' incorporates:
   *  Switch: '<S44>/Switch3'
   */
  if (rtb_Compare_kw) {
    rtb_Minus_k_idx_0 = Code_Gen_Model_ConstB.UnaryMinus_m;
  } else if (rtb_Is_Absolute_Translation_g) {
    /* Switch: '<S44>/Switch3' incorporates:
     *  Constant: '<S44>/Constant3'
     */
    rtb_Minus_k_idx_0 = Elevator_DC_Inc_RL;
  } else {
    rtb_Minus_k_idx_0 = Code_Gen_Model_ConstB.UnaryMinus_m;
  }

  /* Product: '<S44>/Product' incorporates:
   *  Switch: '<S44>/Switch1'
   */
  rtb_Switch2_g = rtb_Minus_k_idx_0 * rtb_Switch5_a;

  /* Switch: '<S53>/Init' incorporates:
   *  UnitDelay: '<S53>/FixPt Unit Delay1'
   *  UnitDelay: '<S53>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_o != 0) {
    rtb_Init = rtb_Add_o5;
  } else {
    rtb_Init = Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_l;
  }

  /* End of Switch: '<S53>/Init' */

  /* Sum: '<S51>/Sum1' */
  rtb_Add_o5 -= rtb_Init;

  /* Switch: '<S52>/Switch2' incorporates:
   *  RelationalOperator: '<S52>/LowerRelop1'
   */
  if (!(rtb_Add_o5 > rtb_Switch2_g)) {
    /* Switch: '<S44>/Switch2' incorporates:
     *  Constant: '<S44>/Constant1'
     *  Constant: '<S44>/Constant3'
     *  Switch: '<S44>/Switch4'
     *  UnaryMinus: '<S44>/Unary Minus1'
     */
    if (rtb_Compare_kw) {
      rtb_Minus_k_idx_0 = -1.0;
    } else if (rtb_Is_Absolute_Translation_g) {
      /* Switch: '<S44>/Switch4' incorporates:
       *  Constant: '<S44>/Constant1'
       */
      rtb_Minus_k_idx_0 = -1.0;
    } else {
      rtb_Minus_k_idx_0 = -Elevator_DC_Inc_RL;
    }

    /* Product: '<S44>/Product2' incorporates:
     *  Switch: '<S44>/Switch2'
     */
    rtb_Switch2_g = rtb_Minus_k_idx_0 * rtb_Switch5_a;

    /* Switch: '<S52>/Switch' incorporates:
     *  RelationalOperator: '<S52>/UpperRelop'
     */
    if (!(rtb_Add_o5 < rtb_Switch2_g)) {
      rtb_Switch2_g = rtb_Add_o5;
    }

    /* End of Switch: '<S52>/Switch' */
  }

  /* End of Switch: '<S52>/Switch2' */

  /* Sum: '<S51>/Sum' */
  rtb_Switch5_a = rtb_Switch2_g + rtb_Init;

  /* Outport: '<Root>/Elevator_DutyCycle' */
  Code_Gen_Model_Y.Elevator_DutyCycle = rtb_Switch5_a;

  /* Logic: '<S7>/Logical Operator' incorporates:
   *  Constant: '<S24>/Constant'
   *  Constant: '<S25>/Constant'
   *  RelationalOperator: '<S24>/Compare'
   *  RelationalOperator: '<S25>/Compare'
   */
  rtb_Compare_kw = ((Code_Gen_Model_B.Elevator_Height_Measured <
                     Elevator_Height_Coral_Arm_Low_Thresh) &&
                    (Code_Gen_Model_B.Coral_Arm_Angle_Measured <
                     Coral_Arm_Angle_Neg_Threshold));

  /* Logic: '<S7>/Logical Operator4' incorporates:
   *  Constant: '<S26>/Constant'
   *  Constant: '<S27>/Constant'
   *  RelationalOperator: '<S26>/Compare'
   *  RelationalOperator: '<S27>/Compare'
   */
  rtb_AT_Cage_Middle_Start_Red_Ac = ((Code_Gen_Model_B.Coral_Arm_Angle_Desired >
    Coral_Arm_Angle_Pos_Threshold) && (Code_Gen_Model_B.Coral_Arm_Angle_Measured
    > Coral_Arm_Angle_Pos_Threshold));

  /* Lookup_n-D: '<S7>/1-D Lookup Table' incorporates:
   *  Bias: '<S1>/Add Constant'
   */
  rtb_Switch2_g = look1_binlcpw(Code_Gen_Model_B.Coral_Arm_Angle_Measured,
    Code_Gen_Model_ConstP.uDLookupTable_bp01Data,
    Code_Gen_Model_ConstP.uDLookupTable_tableData, 2U);

  /* Switch: '<S30>/Switch2' incorporates:
   *  Constant: '<S7>/Constant'
   *  RelationalOperator: '<S30>/LowerRelop1'
   */
  if (Code_Gen_Model_B.Coral_Arm_Angle_Desired > 90.0) {
    rtb_Add_o5 = 90.0;
  } else {
    /* Lookup_n-D: '<S7>/Range of Motion Protection Limit' incorporates:
     *  Switch: '<S10>/Switch'
     */
    rtb_Add_o5 = look1_binlcpw(Code_Gen_Model_B.Elevator_Height_Measured,
      Code_Gen_Model_ConstP.RangeofMotionProtectionLimit_bp,
      Code_Gen_Model_ConstP.RangeofMotionProtectionLimit_ta, 74U);

    /* Switch: '<S30>/Switch' incorporates:
     *  RelationalOperator: '<S30>/UpperRelop'
     */
    if (!(Code_Gen_Model_B.Coral_Arm_Angle_Desired < rtb_Add_o5)) {
      rtb_Add_o5 = Code_Gen_Model_B.Coral_Arm_Angle_Desired;
    }

    /* End of Switch: '<S30>/Switch' */
  }

  /* End of Switch: '<S30>/Switch2' */

  /* Sum: '<S7>/Subtract' */
  Code_Gen_Model_B.Coral_ArmAngle_Error = rtb_Add_o5 -
    Code_Gen_Model_B.Coral_Arm_Angle_Measured;

  /* Gain: '<S29>/Gain1' */
  Code_Gen_Model_B.Elevator_Proportional_l = Coral_Arm_Gain_Prop *
    Code_Gen_Model_B.Coral_ArmAngle_Error;

  /* Logic: '<S7>/Logical Operator2' incorporates:
   *  Logic: '<S7>/Logical Operator1'
   *  Logic: '<S7>/Logical Operator3'
   */
  rtb_Is_Absolute_Translation_g = (((!rtb_AT_Cage_Middle_Start_Red_Ac) &&
    (!rtb_Compare_kw)) && (Code_Gen_Model_B.Reefscape_Motors_Enable));

  /* Lookup_n-D: '<S7>/1-D Lookup Table1' incorporates:
   *  Bias: '<S1>/Add Constant'
   */
  rtb_Add_o5 = look1_binlcpw(Code_Gen_Model_B.Coral_Arm_Angle_Measured,
    Code_Gen_Model_ConstP.uDLookupTable1_bp01Data,
    Code_Gen_Model_ConstP.uDLookupTable1_tableData, 1U);

  /* Switch: '<S29>/Switch' */
  if (rtb_Is_Absolute_Translation_g) {
    /* Switch: '<S29>/Switch1' incorporates:
     *  UnitDelay: '<S38>/Delay Input1'
     *
     * Block description for '<S38>/Delay Input1':
     *
     *  Store in Global RAM
     */
    if (!Code_Gen_Model_DW.DelayInput1_DSTATE_op) {
      /* Switch: '<S29>/Switch' incorporates:
       *  Constant: '<S29>/Constant3'
       */
      Code_Gen_Model_B.Elevator_Integral_o = Coral_Arm_Int_IC;
    } else {
      /* Sum: '<S29>/Sum2' incorporates:
       *  Gain: '<S29>/Gain2'
       *  UnitDelay: '<S29>/Unit Delay'
       */
      rtb_Init = (Coral_Arm_Gain_Int * Code_Gen_Model_B.Coral_ArmAngle_Error) +
        Code_Gen_Model_B.Elevator_Integral_o;

      /* Sum: '<S29>/Subtract' */
      rtb_Switch2_fx = rtb_Switch2_g - Code_Gen_Model_B.Elevator_Proportional_l;

      /* Switch: '<S39>/Switch2' incorporates:
       *  RelationalOperator: '<S39>/LowerRelop1'
       */
      if (!(rtb_Init > rtb_Switch2_fx)) {
        /* Sum: '<S29>/Subtract1' */
        rtb_Switch2_fx = rtb_Add_o5 - Code_Gen_Model_B.Elevator_Proportional_l;

        /* Switch: '<S39>/Switch' incorporates:
         *  RelationalOperator: '<S39>/UpperRelop'
         */
        if (!(rtb_Init < rtb_Switch2_fx)) {
          rtb_Switch2_fx = rtb_Init;
        }

        /* End of Switch: '<S39>/Switch' */
      }

      /* End of Switch: '<S39>/Switch2' */

      /* Saturate: '<S29>/Saturation1' */
      if (rtb_Switch2_fx > Coral_Arm_Int_UL) {
        /* Switch: '<S29>/Switch' */
        Code_Gen_Model_B.Elevator_Integral_o = Coral_Arm_Int_UL;
      } else if (rtb_Switch2_fx < Coral_Arm_Int_LL) {
        /* Switch: '<S29>/Switch' */
        Code_Gen_Model_B.Elevator_Integral_o = Coral_Arm_Int_LL;
      } else {
        /* Switch: '<S29>/Switch' */
        Code_Gen_Model_B.Elevator_Integral_o = rtb_Switch2_fx;
      }

      /* End of Saturate: '<S29>/Saturation1' */
    }

    /* End of Switch: '<S29>/Switch1' */
  } else {
    /* Switch: '<S29>/Switch' incorporates:
     *  Constant: '<S29>/Constant2'
     */
    Code_Gen_Model_B.Elevator_Integral_o = 0.0;
  }

  /* End of Switch: '<S29>/Switch' */

  /* Switch: '<S7>/Switch2' incorporates:
   *  Constant: '<S7>/Constant5'
   */
  if (Code_Gen_Model_B.Reefscape_Motors_Enable) {
    /* Switch: '<S7>/Switch1' incorporates:
     *  Constant: '<S7>/Constant2'
     *  Switch: '<S7>/Switch3'
     */
    if (rtb_Compare_kw) {
      rtb_Add_o5 = Coral_Arm_Neg90_DC;
    } else if (rtb_AT_Cage_Middle_Start_Red_Ac) {
      /* Switch: '<S7>/Switch3' incorporates:
       *  Constant: '<S7>/Constant1'
       */
      rtb_Add_o5 = Coral_Arm_Pos90_DC;
    } else {
      /* Sum: '<S29>/Add1' incorporates:
       *  Switch: '<S7>/Switch3'
       */
      rtb_Init = Code_Gen_Model_B.Elevator_Proportional_l +
        Code_Gen_Model_B.Elevator_Integral_o;

      /* Switch: '<S40>/Switch2' incorporates:
       *  RelationalOperator: '<S40>/LowerRelop1'
       *  RelationalOperator: '<S40>/UpperRelop'
       *  Switch: '<S40>/Switch'
       *  Switch: '<S7>/Switch3'
       */
      if (rtb_Init > rtb_Switch2_g) {
        rtb_Add_o5 = rtb_Switch2_g;
      } else if (!(rtb_Init < rtb_Add_o5)) {
        rtb_Add_o5 = rtb_Init;
      }

      /* End of Switch: '<S40>/Switch2' */
    }

    /* End of Switch: '<S7>/Switch1' */
  } else {
    rtb_Add_o5 = 0.0;
  }

  /* End of Switch: '<S7>/Switch2' */

  /* UnitDelay: '<S28>/Unit Delay' */
  rtb_Switch2_g = Code_Gen_Model_DW.UnitDelay_DSTATE_oz;

  /* Abs: '<S28>/Abs' incorporates:
   *  Sum: '<S28>/Subtract'
   */
  rtb_Init = fabs(rtb_Switch2_g - rtb_Add_o5);

  /* Signum: '<S28>/Sign2' */
  if (rtIsNaN(rtb_Switch2_g)) {
    rtb_Minus_k_idx_0 = (rtNaN);
  } else if (rtb_Switch2_g < 0.0) {
    rtb_Minus_k_idx_0 = -1.0;
  } else {
    rtb_Minus_k_idx_0 = (rtb_Switch2_g > 0.0);
  }

  /* Signum: '<S28>/Sign1' */
  if (rtIsNaN(rtb_Add_o5)) {
    rtb_Switch2_fx = (rtNaN);
  } else if (rtb_Add_o5 < 0.0) {
    rtb_Switch2_fx = -1.0;
  } else {
    rtb_Switch2_fx = (rtb_Add_o5 > 0.0);
  }

  /* Product: '<S28>/Product1' incorporates:
   *  Signum: '<S28>/Sign1'
   *  Signum: '<S28>/Sign2'
   */
  rtb_Minus_k_idx_0 *= rtb_Switch2_fx;
  if (rtIsNaN(rtb_Minus_k_idx_0)) {
    i = 0;
  } else {
    i = (int32_T)fmod(rtb_Minus_k_idx_0, 256.0);
  }

  /* Switch: '<S28>/Switch' incorporates:
   *  Constant: '<S28>/Constant'
   *  Constant: '<S31>/Constant'
   *  Constant: '<S32>/Constant'
   *  Logic: '<S28>/or'
   *  Product: '<S28>/Product1'
   *  RelationalOperator: '<S31>/Compare'
   *  RelationalOperator: '<S32>/Compare'
   */
  if ((!(rtb_Switch2_g == 0.0)) && (((i < 0) ? ((int32_T)((int8_T)(-((int8_T)
            ((uint8_T)(-((real_T)i))))))) : i) <= 0)) {
    rtb_Add_o5 = 0.0;
  }

  /* End of Switch: '<S28>/Switch' */

  /* RelationalOperator: '<S33>/Compare' incorporates:
   *  Constant: '<S33>/Constant'
   */
  rtb_Compare_kw = (rtb_Add_o5 == 0.0);

  /* Switch: '<S28>/Switch5' */
  if (rtb_Compare_kw) {
    /* SignalConversion generated from: '<S28>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S28>/Constant4'
     *  Constant: '<S28>/Constant6'
     */
    rtb_Reshapey[0] = 1.0;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S28>/Lookup Table Dynamic' incorporates:
     *  Constant: '<S28>/Constant2'
     *  Constant: '<S28>/Constant5'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = 0.01;

    /* S-Function (sfix_look1_dyn): '<S28>/Lookup Table Dynamic' */
    /* Dynamic Look-Up Table Block: '<S28>/Lookup Table Dynamic'
     * Input0  Data Type:  Floating Point real_T
     * Input1  Data Type:  Floating Point real_T
     * Input2  Data Type:  Floating Point real_T
     * Output0 Data Type:  Floating Point real_T
     * Lookup Method: Linear_Endpoint
     *
     */
    LookUp_real_T_real_T( &(rtb_LookupTableDynamic_n), &rtb_Reshapey[0],
                         rtb_Init, &rtb_Minus_n[0], 1U);
    rtb_Switch2_fx = rtb_LookupTableDynamic_n;
  } else {
    /* SignalConversion generated from: '<S28>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S28>/Constant10'
     *  Constant: '<S28>/Constant8'
     */
    rtb_Reshapey[0] = 1.0;
    rtb_Reshapey[1] = 1.0;

    /* SignalConversion generated from: '<S28>/Lookup Table Dynamic1' incorporates:
     *  Constant: '<S28>/Constant7'
     *  Constant: '<S28>/Constant9'
     */
    rtb_Minus_n[0] = 0.0;
    rtb_Minus_n[1] = 0.01;

    /* S-Function (sfix_look1_dyn): '<S28>/Lookup Table Dynamic1' */
    /* Dynamic Look-Up Table Block: '<S28>/Lookup Table Dynamic1'
     * Input0  Data Type:  Floating Point real_T
     * Input1  Data Type:  Floating Point real_T
     * Input2  Data Type:  Floating Point real_T
     * Output0 Data Type:  Floating Point real_T
     * Lookup Method: Linear_Endpoint
     *
     */
    LookUp_real_T_real_T( &(rtb_LookupTableDynamic1_a), &rtb_Reshapey[0],
                         rtb_Init, &rtb_Minus_n[0], 1U);
    rtb_Switch2_fx = rtb_LookupTableDynamic1_a;
  }

  /* End of Switch: '<S28>/Switch5' */

  /* RelationalOperator: '<S34>/Compare' incorporates:
   *  Constant: '<S34>/Constant'
   */
  rtb_AT_Cage_Middle_Start_Red_Ac = (rtb_Add_o5 > 0.0);

  /* Switch: '<S28>/Switch1' incorporates:
   *  Switch: '<S28>/Switch3'
   */
  if (rtb_Compare_kw) {
    rtb_Minus_k_idx_0 = Code_Gen_Model_ConstB.UnaryMinus;
  } else if (rtb_AT_Cage_Middle_Start_Red_Ac) {
    /* Switch: '<S28>/Switch3' incorporates:
     *  Constant: '<S28>/Constant3'
     */
    rtb_Minus_k_idx_0 = Coral_Arm_DC_Inc_RL;
  } else {
    rtb_Minus_k_idx_0 = Code_Gen_Model_ConstB.UnaryMinus;
  }

  /* Product: '<S28>/Product' incorporates:
   *  Switch: '<S28>/Switch1'
   */
  rtb_Switch2_g = rtb_Minus_k_idx_0 * rtb_Switch2_fx;

  /* Switch: '<S37>/Init' incorporates:
   *  UnitDelay: '<S37>/FixPt Unit Delay1'
   *  UnitDelay: '<S37>/FixPt Unit Delay2'
   */
  if (Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_j != 0) {
    rtb_Init = rtb_Add_o5;
  } else {
    rtb_Init = Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_pc;
  }

  /* End of Switch: '<S37>/Init' */

  /* Sum: '<S35>/Sum1' */
  rtb_Add_o5 -= rtb_Init;

  /* Switch: '<S36>/Switch2' incorporates:
   *  RelationalOperator: '<S36>/LowerRelop1'
   */
  if (!(rtb_Add_o5 > rtb_Switch2_g)) {
    /* Switch: '<S28>/Switch2' incorporates:
     *  Constant: '<S28>/Constant1'
     *  Constant: '<S28>/Constant3'
     *  Switch: '<S28>/Switch4'
     *  UnaryMinus: '<S28>/Unary Minus1'
     */
    if (rtb_Compare_kw) {
      rtb_Minus_k_idx_0 = -1.0;
    } else if (rtb_AT_Cage_Middle_Start_Red_Ac) {
      /* Switch: '<S28>/Switch4' incorporates:
       *  Constant: '<S28>/Constant1'
       */
      rtb_Minus_k_idx_0 = -1.0;
    } else {
      rtb_Minus_k_idx_0 = -Coral_Arm_DC_Inc_RL;
    }

    /* Product: '<S28>/Product2' incorporates:
     *  Switch: '<S28>/Switch2'
     */
    rtb_Switch2_g = rtb_Minus_k_idx_0 * rtb_Switch2_fx;

    /* Switch: '<S36>/Switch' incorporates:
     *  RelationalOperator: '<S36>/UpperRelop'
     */
    if (!(rtb_Add_o5 < rtb_Switch2_g)) {
      rtb_Switch2_g = rtb_Add_o5;
    }

    /* End of Switch: '<S36>/Switch' */
  }

  /* End of Switch: '<S36>/Switch2' */

  /* Sum: '<S35>/Sum' */
  rtb_Add_o5 = rtb_Switch2_g + rtb_Init;

  /* Outport: '<Root>/Coral_Arm_DutyCycle' */
  Code_Gen_Model_Y.Coral_Arm_DutyCycle = rtb_Add_o5;

  /* Gain: '<S149>/meters to feet1' */
  Code_Gen_Model_B.Odometry_Y_global_est_ft = 3.28084 *
    Code_Gen_Model_B.Odom_Position_Y;

  /* RelationalOperator: '<S150>/Compare' incorporates:
   *  Constant: '<S149>/Constant'
   *  Constant: '<S150>/Constant'
   */
  rtb_Compare_kw = (Odometry_X_Y_TEAR != 0.0);

  /* Switch: '<S149>/Switch1' incorporates:
   *  UnitDelay: '<S149>/Unit Delay1'
   */
  if (rtb_Compare_kw) {
    rtb_Switch2_g = Code_Gen_Model_B.Odometry_Y_global_est_ft;
  } else {
    rtb_Switch2_g = Code_Gen_Model_DW.UnitDelay1_DSTATE_d;
  }

  /* End of Switch: '<S149>/Switch1' */

  /* Sum: '<S149>/Subtract1' */
  Code_Gen_Model_B.Odometry_Y_global_TEAR_ft =
    Code_Gen_Model_B.Odometry_Y_global_est_ft - rtb_Switch2_g;

  /* Gain: '<S149>/meters to feet' */
  Code_Gen_Model_B.Odometry_X_global_est_ft = 3.28084 *
    Code_Gen_Model_B.Odom_Position_X;

  /* Switch: '<S149>/Switch' incorporates:
   *  UnitDelay: '<S149>/Unit Delay'
   */
  if (rtb_Compare_kw) {
    rtb_Init = Code_Gen_Model_B.Odometry_X_global_est_ft;
  } else {
    rtb_Init = Code_Gen_Model_DW.UnitDelay_DSTATE_c;
  }

  /* End of Switch: '<S149>/Switch' */

  /* Sum: '<S149>/Subtract' */
  Code_Gen_Model_B.Odometry_X_global_TEAR_ft =
    Code_Gen_Model_B.Odometry_X_global_est_ft - rtb_Init;

  /* Outport: '<Root>/Gyro_Angle_Offset_Total' incorporates:
   *  Gain: '<S11>/Gain'
   *  Sum: '<S11>/Add1'
   */
  Code_Gen_Model_Y.Gyro_Angle_Offset_Total = (rtb_Switch_l + rtb_Switch1) *
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

  /* SignalConversion: '<S12>/Signal Copy4' incorporates:
   *  Inport: '<Root>/Joystick_Right_X'
   */
  Code_Gen_Model_B.Steer_Joystick_X = Code_Gen_Model_U.Joystick_Right_X;

  /* DataTypeConversion: '<S18>/Data Type Conversion' incorporates:
   *  Inport: '<Root>/GameState'
   */
  rtb_Minus_k_idx_0 = floor(Code_Gen_Model_U.GameState);
  if ((rtIsNaN(rtb_Minus_k_idx_0)) || (rtIsInf(rtb_Minus_k_idx_0))) {
    rtb_Minus_k_idx_0 = 0.0;
  } else {
    rtb_Minus_k_idx_0 = fmod(rtb_Minus_k_idx_0, 256.0);
  }

  rtb_GameState = (uint8_T)((rtb_Minus_k_idx_0 < 0.0) ? ((int32_T)((uint8_T)
    (-((int8_T)((uint8_T)(-rtb_Minus_k_idx_0)))))) : ((int32_T)((uint8_T)
    rtb_Minus_k_idx_0)));

  /* End of DataTypeConversion: '<S18>/Data Type Conversion' */

  /* Chart: '<S18>/Chart' */
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

  /* End of Chart: '<S18>/Chart' */

  /* Update for UnitDelay: '<S141>/UD' incorporates:
   *  Inport: '<Root>/FrontLeft_Drive_Motor_Rev'
   *
   * Block description for '<S141>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE = Code_Gen_Model_U.FrontLeft_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S142>/UD' incorporates:
   *  Inport: '<Root>/FrontRight_Drive_Motor_Rev'
   *
   * Block description for '<S142>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_m = Code_Gen_Model_U.FrontRight_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S143>/UD' incorporates:
   *  Inport: '<Root>/BackLeft_Drive_Motor_Rev'
   *
   * Block description for '<S143>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_i = Code_Gen_Model_U.BackLeft_Drive_Motor_Rev;

  /* Update for UnitDelay: '<S144>/UD' incorporates:
   *  Inport: '<Root>/BackRight_Drive_Motor_Rev'
   *
   * Block description for '<S144>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_c = Code_Gen_Model_U.BackRight_Drive_Motor_Rev;

  /* Update for S-Function (sfix_udelay): '<S14>/Tapped Delay' */
  Code_Gen_Model_DW.TappedDelay_X[0] = Code_Gen_Model_DW.TappedDelay_X[1];
  Code_Gen_Model_DW.TappedDelay_X[1] = Code_Gen_Model_B.Product6[0];

  /* Update for S-Function (sfix_udelay): '<S14>/Tapped Delay1' */
  Code_Gen_Model_DW.TappedDelay1_X[0] = Code_Gen_Model_DW.TappedDelay1_X[1];
  Code_Gen_Model_DW.TappedDelay1_X[1] = Code_Gen_Model_B.Product6[1];

  /* Update for Delay: '<S86>/MemoryX' */
  Code_Gen_Model_DW.icLoad = false;

  /* Product: '<S106>/A[k]*xhat[k|k-1]' incorporates:
   *  Constant: '<S86>/A'
   *  Delay: '<S86>/MemoryX'
   */
  rtb_Switch_l = (0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[1]) +
    Code_Gen_Model_DW.MemoryX_DSTATE[0];
  rtb_Coral_Wheel_DutyCycle = (0.0 * Code_Gen_Model_DW.MemoryX_DSTATE[0]) +
    Code_Gen_Model_DW.MemoryX_DSTATE[1];

  /* Update for Delay: '<S86>/MemoryX' incorporates:
   *  Constant: '<S86>/B'
   *  Product: '<S106>/A[k]*xhat[k|k-1]'
   *  Product: '<S106>/B[k]*u[k]'
   *  Sum: '<S106>/Add'
   */
  Code_Gen_Model_DW.MemoryX_DSTATE[0] = (((0.0 * Code_Gen_Model_B.Product6[1]) +
    Code_Gen_Model_B.Product6[0]) + rtb_Switch_l) + Code_Gen_Model_B.Product3[0];
  Code_Gen_Model_DW.MemoryX_DSTATE[1] = (((0.0 * Code_Gen_Model_B.Product6[0]) +
    Code_Gen_Model_B.Product6[1]) + rtb_Coral_Wheel_DutyCycle) +
    Code_Gen_Model_B.Product3[1];

  /* Update for UnitDelay: '<S60>/Delay Input1' incorporates:
   *  Constant: '<S11>/Constant3'
   *
   * Block description for '<S60>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE = Gyro_Calibration_Reset_Flag;

  /* Update for UnitDelay: '<S11>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE = rtb_Switch1;

  /* Update for UnitDelay: '<S140>/UD'
   *
   * Block description for '<S140>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_d = Code_Gen_Model_B.Gyro_Angle_Field_rad;

  /* Update for DiscreteIntegrator: '<S17>/Accumulator2' incorporates:
   *  Constant: '<S17>/Constant'
   *  DiscreteIntegrator: '<S17>/Accumulator'
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

  /* End of Update for DiscreteIntegrator: '<S17>/Accumulator2' */

  /* Update for DiscreteIntegrator: '<S17>/Accumulator' */
  Code_Gen_Model_DW.Accumulator_DSTATE += Code_Gen_Model_B.Product6[1];

  /* Update for UnitDelay: '<S83>/Delay Input1' incorporates:
   *  Inport: '<Root>/Joystick_Left_B11'
   *
   * Block description for '<S83>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_n = Code_Gen_Model_U.Joystick_Left_B11;

  /* Update for UnitDelay: '<S84>/Delay Input1' incorporates:
   *  Inport: '<Root>/Joystick_Left_B12'
   *
   * Block description for '<S84>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_e = Code_Gen_Model_U.Joystick_Left_B12;

  /* Update for UnitDelay: '<S85>/Delay Input1' incorporates:
   *  Inport: '<Root>/Joystick_Left_B13'
   *
   * Block description for '<S85>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_nj = Code_Gen_Model_U.Joystick_Left_B13;

  /* Update for UnitDelay: '<S56>/Delay Input1'
   *
   * Block description for '<S56>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_b = rtb_Compare;

  /* Update for UnitDelay: '<S57>/Delay Input1'
   *
   * Block description for '<S57>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_o1 = rtb_Compare_pd;

  /* Update for UnitDelay: '<S1>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_mph =
    Code_Gen_Model_B.Elevator_LowerPickup_Reset_tp;

  /* Update for UnitDelay: '<S58>/Delay Input1'
   *
   * Block description for '<S58>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_po = rtb_UnitDelay_l;

  /* Update for UnitDelay: '<S317>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S317>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE = 0U;

  /* Update for UnitDelay: '<S339>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_i = rtb_Merge1;

  /* Update for UnitDelay: '<S338>/UD'
   *
   * Block description for '<S338>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_a = rtb_Rotationmatrixfromlocalto_1;

  /* Update for UnitDelay: '<S336>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_m = rtb_Rotationmatrixfromlocalto_0;

  /* Update for UnitDelay: '<S319>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_d = rtb_Switch2_ji;

  /* Update for UnitDelay: '<S334>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S334>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_p = 0U;

  /* Update for UnitDelay: '<S334>/FixPt Unit Delay1' */
  Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_e = rtb_Switch2_ji;

  /* Update for UnitDelay: '<S318>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_g = rtb_Switch_b5;

  /* Update for UnitDelay: '<S327>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S327>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_c = 0U;

  /* Update for UnitDelay: '<S327>/FixPt Unit Delay1' */
  Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_p = rtb_Switch_b5;

  /* Update for UnitDelay: '<S293>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_j = rtb_Sum_jt;

  /* Update for UnitDelay: '<S292>/UD'
   *
   * Block description for '<S292>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_j = rtb_Switch4;

  /* Update for UnitDelay: '<S286>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_l = rtb_Subtract;

  /* Update for UnitDelay: '<S230>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_f = rtb_Hypot;

  /* Update for UnitDelay: '<S229>/UD'
   *
   * Block description for '<S229>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_h = rtb_Switch2_pc;

  /* Update for UnitDelay: '<S223>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_j = rtb_Hypot_g5;

  /* Update for UnitDelay: '<S241>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_b = rtb_Add_ju;

  /* Update for UnitDelay: '<S240>/UD'
   *
   * Block description for '<S240>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_b = rtb_Switch2_m;

  /* Update for UnitDelay: '<S226>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_e = rtb_Sum2_e;

  /* Update for UnitDelay: '<S251>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_e = rtb_Add_fn;

  /* Update for UnitDelay: '<S250>/UD'
   *
   * Block description for '<S250>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_mm = rtb_Subtract1_la;

  /* Update for UnitDelay: '<S244>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_h = rtb_Hypot_b;

  /* Update for UnitDelay: '<S262>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_n = rtb_Add_c;

  /* Update for UnitDelay: '<S261>/UD'
   *
   * Block description for '<S261>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_i1 = rtb_Switch2_p;

  /* Update for UnitDelay: '<S247>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_dt = rtb_Sum2_oc;

  /* Update for UnitDelay: '<S272>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_n4 = rtb_uDLookupTable_l;

  /* Update for UnitDelay: '<S271>/UD'
   *
   * Block description for '<S271>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_o = rtb_Subtract_h3;

  /* Update for UnitDelay: '<S265>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_f = rtb_Integral_hv;

  /* Update for UnitDelay: '<S283>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_nw = rtb_Add2_k_idx_0;

  /* Update for UnitDelay: '<S282>/UD'
   *
   * Block description for '<S282>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_k = rtb_Add2_k_idx_1;

  /* Update for UnitDelay: '<S268>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_k = rtb_Integral_m;

  /* Update for UnitDelay: '<S304>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_iw = rtb_Optimized_Module_Angle;

  /* Update for UnitDelay: '<S303>/UD'
   *
   * Block description for '<S303>/UD':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.UD_DSTATE_l = rtb_Product_d1;

  /* Update for UnitDelay: '<S289>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_lm = rtb_Integral_p;

  /* Update for UnitDelay: '<S54>/Delay Input1'
   *
   * Block description for '<S54>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_be = rtb_Is_Absolute_Steering;

  /* Update for UnitDelay: '<S44>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_mh = rtb_Switch5_a;

  /* Update for UnitDelay: '<S53>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S53>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_o = 0U;

  /* Update for UnitDelay: '<S53>/FixPt Unit Delay1' */
  Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_l = rtb_Switch5_a;

  /* Update for UnitDelay: '<S38>/Delay Input1'
   *
   * Block description for '<S38>/Delay Input1':
   *
   *  Store in Global RAM
   */
  Code_Gen_Model_DW.DelayInput1_DSTATE_op = rtb_Is_Absolute_Translation_g;

  /* Update for UnitDelay: '<S28>/Unit Delay' */
  Code_Gen_Model_DW.UnitDelay_DSTATE_oz = rtb_Add_o5;

  /* Update for UnitDelay: '<S37>/FixPt Unit Delay2' incorporates:
   *  Constant: '<S37>/FixPt Constant'
   */
  Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_j = 0U;

  /* Update for UnitDelay: '<S37>/FixPt Unit Delay1' */
  Code_Gen_Model_DW.FixPtUnitDelay1_DSTATE_pc = rtb_Add_o5;

  /* Update for UnitDelay: '<S149>/Unit Delay1' */
  Code_Gen_Model_DW.UnitDelay1_DSTATE_d = rtb_Switch2_g;

  /* Update for UnitDelay: '<S149>/Unit Delay' */
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

    /* Start for If: '<S19>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem = -1;

    /* InitializeConditions for Delay: '<S86>/MemoryX' */
    Code_Gen_Model_DW.icLoad = true;

    /* InitializeConditions for UnitDelay: '<S11>/Unit Delay1' */
    Code_Gen_Model_DW.UnitDelay1_DSTATE = Gyro_Calibration_Reset_Degree;

    /* InitializeConditions for DiscreteIntegrator: '<S17>/Accumulator2' */
    Code_Gen_Model_DW.Accumulator2_DSTATE = Constant;
    Code_Gen_Model_DW.Accumulator2_PrevResetState = 2;

    /* InitializeConditions for DiscreteIntegrator: '<S17>/Accumulator' */
    Code_Gen_Model_DW.Accumulator_DSTATE = Constant1;
    Code_Gen_Model_DW.Accumulator_PrevResetState = 2;

    /* InitializeConditions for UnitDelay: '<S317>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE = 1U;

    /* InitializeConditions for UnitDelay: '<S334>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_p = 1U;

    /* InitializeConditions for UnitDelay: '<S327>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_c = 1U;

    /* InitializeConditions for UnitDelay: '<S53>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_o = 1U;

    /* InitializeConditions for UnitDelay: '<S37>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_j = 1U;

    /* SystemInitialize for IfAction SubSystem: '<S1>/Teleop' */
    /* InitializeConditions for UnitDelay: '<S408>/FixPt Unit Delay2' */
    Code_Gen_Model_DW.FixPtUnitDelay2_DSTATE_a = 1U;

    /* End of SystemInitialize for SubSystem: '<S1>/Teleop' */

    /* SystemInitialize for IfAction SubSystem: '<S19>/Spline Path Following Enabled' */
    /* Start for If: '<S158>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem_h = -1;

    /* InitializeConditions for UnitDelay: '<S154>/Unit Delay' */
    Code_Gen_Model_DW.UnitDelay_DSTATE_gh = 2.0;

    /* SystemInitialize for IfAction SubSystem: '<S158>/Robot_Index_Is_Valid' */
    /* Start for If: '<S161>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem_o = -1;

    /* SystemInitialize for IfAction SubSystem: '<S161>/Circle_Check_Valid' */
    /* Start for If: '<S163>/If' */
    Code_Gen_Model_DW.If_ActiveSubsystem_d = -1;

    /* End of SystemInitialize for SubSystem: '<S161>/Circle_Check_Valid' */
    /* End of SystemInitialize for SubSystem: '<S158>/Robot_Index_Is_Valid' */
    /* End of SystemInitialize for SubSystem: '<S19>/Spline Path Following Enabled' */
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
