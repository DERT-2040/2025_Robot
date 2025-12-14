// This file has been auto generated from a Matlab script
// Do not manually edit since changes will be lost
// Janelyn <3
#include "include/SimulinkNetworkTables1.h"
 
SimulinkNetworkTables1::SimulinkNetworkTables1()
{
    nt::NetworkTableInstance NTinst = nt::NetworkTableInstance::GetDefault();
    auto NTtable_Tune = NTinst.GetTable("Simulink Tunable Params");
    auto NTtable_Inport = NTinst.GetTable("Simulink Top Level Ports");
    auto NTtable_Outport = NTinst.GetTable("Simulink Top Level Ports");
    auto NTtable_TPoint = NTinst.GetTable("Simulink Test Points");
 
    P__AT_Integral_Enable_Error_Angle__Entry = NTtable_Tune->GetEntry("AT_Integral_Enable_Error_Angle");
    NTinst.AddListener(P__AT_Integral_Enable_Error_Angle__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {AT_Integral_Enable_Error_Angle = event.GetValueEventData()->value.GetDouble();});
    P__AT_Integral_Enable_Error_Angle__Entry.SetDouble(5);
 
    P__AT_Integral_Enable_Error_XY__Entry = NTtable_Tune->GetEntry("AT_Integral_Enable_Error_XY");
    NTinst.AddListener(P__AT_Integral_Enable_Error_XY__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {AT_Integral_Enable_Error_XY = event.GetValueEventData()->value.GetDouble();});
    P__AT_Integral_Enable_Error_XY__Entry.SetDouble(2);
 
    P__AT_Max_Error_Angle__Entry = NTtable_Tune->GetEntry("AT_Max_Error_Angle");
    NTinst.AddListener(P__AT_Max_Error_Angle__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {AT_Max_Error_Angle = event.GetValueEventData()->value.GetDouble();});
    P__AT_Max_Error_Angle__Entry.SetDouble(1);
 
    P__AT_Max_Error_XY__Entry = NTtable_Tune->GetEntry("AT_Max_Error_XY");
    NTinst.AddListener(P__AT_Max_Error_XY__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {AT_Max_Error_XY = event.GetValueEventData()->value.GetDouble();});
    P__AT_Max_Error_XY__Entry.SetDouble(0.75);
 
    P__AT_On_Target_Time__Entry = NTtable_Tune->GetEntry("AT_On_Target_Time");
    NTinst.AddListener(P__AT_On_Target_Time__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {AT_On_Target_Time = event.GetValueEventData()->value.GetDouble();});
    P__AT_On_Target_Time__Entry.SetDouble(0.25);
 
    P__AT_Reef_Target_Algae_X__Entry = NTtable_Tune->GetEntry("AT_Reef_Target_Algae_X");
    NTinst.AddListener(P__AT_Reef_Target_Algae_X__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {AT_Reef_Target_Algae_X = event.GetValueEventData()->value.GetDouble();});
    P__AT_Reef_Target_Algae_X__Entry.SetDouble(18);
 
    P__AT_Reef_Target_Algae_Y__Entry = NTtable_Tune->GetEntry("AT_Reef_Target_Algae_Y");
    NTinst.AddListener(P__AT_Reef_Target_Algae_Y__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {AT_Reef_Target_Algae_Y = event.GetValueEventData()->value.GetDouble();});
    P__AT_Reef_Target_Algae_Y__Entry.SetDouble(2.5);
 
    P__AT_Reef_Target_Center_Y__Entry = NTtable_Tune->GetEntry("AT_Reef_Target_Center_Y");
    NTinst.AddListener(P__AT_Reef_Target_Center_Y__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {AT_Reef_Target_Center_Y = event.GetValueEventData()->value.GetDouble();});
    P__AT_Reef_Target_Center_Y__Entry.SetDouble(-4.5);
 
    P__AT_Reef_Target_L1_X__Entry = NTtable_Tune->GetEntry("AT_Reef_Target_L1_X");
    NTinst.AddListener(P__AT_Reef_Target_L1_X__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {AT_Reef_Target_L1_X = event.GetValueEventData()->value.GetDouble();});
    P__AT_Reef_Target_L1_X__Entry.SetDouble(25.75);
 
    P__AT_Reef_Target_L2_L3_X__Entry = NTtable_Tune->GetEntry("AT_Reef_Target_L2_L3_X");
    NTinst.AddListener(P__AT_Reef_Target_L2_L3_X__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {AT_Reef_Target_L2_L3_X = event.GetValueEventData()->value.GetDouble();});
    P__AT_Reef_Target_L2_L3_X__Entry.SetDouble(24.25);
 
    P__AT_Reef_Target_L4_X__Entry = NTtable_Tune->GetEntry("AT_Reef_Target_L4_X");
    NTinst.AddListener(P__AT_Reef_Target_L4_X__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {AT_Reef_Target_L4_X = event.GetValueEventData()->value.GetDouble();});
    P__AT_Reef_Target_L4_X__Entry.SetDouble(26.75);
 
    P__AT_Reef_Target_Left_Y__Entry = NTtable_Tune->GetEntry("AT_Reef_Target_Left_Y");
    NTinst.AddListener(P__AT_Reef_Target_Left_Y__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {AT_Reef_Target_Left_Y = event.GetValueEventData()->value.GetDouble();});
    P__AT_Reef_Target_Left_Y__Entry.SetDouble(3.5);
 
    P__AT_Reef_Target_Right_Y__Entry = NTtable_Tune->GetEntry("AT_Reef_Target_Right_Y");
    NTinst.AddListener(P__AT_Reef_Target_Right_Y__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {AT_Reef_Target_Right_Y = event.GetValueEventData()->value.GetDouble();});
    P__AT_Reef_Target_Right_Y__Entry.SetDouble(-9.5);
 
    P__AT_Steering_Error_Angle_Gain_P__Entry = NTtable_Tune->GetEntry("AT_Steering_Error_Angle_Gain_P");
    NTinst.AddListener(P__AT_Steering_Error_Angle_Gain_P__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {AT_Steering_Error_Angle_Gain_P = event.GetValueEventData()->value.GetDouble();});
    P__AT_Steering_Error_Angle_Gain_P__Entry.SetDouble(0.1);
 
    P__AT_Steering_Speed_Max__Entry = NTtable_Tune->GetEntry("AT_Steering_Speed_Max");
    NTinst.AddListener(P__AT_Steering_Speed_Max__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {AT_Steering_Speed_Max = event.GetValueEventData()->value.GetDouble();});
    P__AT_Steering_Speed_Max__Entry.SetDouble(0.4);
 
    P__AT_Translation_Control_Gain_Field__Entry = NTtable_Tune->GetEntry("AT_Translation_Control_Gain_Field");
    NTinst.AddListener(P__AT_Translation_Control_Gain_Field__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {AT_Translation_Control_Gain_Field = event.GetValueEventData()->value.GetDouble();});
    P__AT_Translation_Control_Gain_Field__Entry.SetDouble(10);
 
    P__AT_Translation_Control_Gain_Relative__Entry = NTtable_Tune->GetEntry("AT_Translation_Control_Gain_Relative");
    NTinst.AddListener(P__AT_Translation_Control_Gain_Relative__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {AT_Translation_Control_Gain_Relative = event.GetValueEventData()->value.GetDouble();});
    P__AT_Translation_Control_Gain_Relative__Entry.SetDouble(0.07);
 
    P__AT_Translation_Speed_Max_Field__Entry = NTtable_Tune->GetEntry("AT_Translation_Speed_Max_Field");
    NTinst.AddListener(P__AT_Translation_Speed_Max_Field__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {AT_Translation_Speed_Max_Field = event.GetValueEventData()->value.GetDouble();});
    P__AT_Translation_Speed_Max_Field__Entry.SetDouble(5);
 
    P__AT_Translation_Speed_Max_Relative__Entry = NTtable_Tune->GetEntry("AT_Translation_Speed_Max_Relative");
    NTinst.AddListener(P__AT_Translation_Speed_Max_Relative__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {AT_Translation_Speed_Max_Relative = event.GetValueEventData()->value.GetDouble();});
    P__AT_Translation_Speed_Max_Relative__Entry.SetDouble(0.75);
 
    P__Actuator_DC__Entry = NTtable_Tune->GetEntry("Actuator_DC");
    NTinst.AddListener(P__Actuator_DC__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Actuator_DC = event.GetValueEventData()->value.GetDouble();});
    P__Actuator_DC__Entry.SetDouble(0.5);
 
    P__Actuator_Rev_Startup_Range__Entry = NTtable_Tune->GetEntry("Actuator_Rev_Startup_Range");
    NTinst.AddListener(P__Actuator_Rev_Startup_Range__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Actuator_Rev_Startup_Range = event.GetValueEventData()->value.GetDouble();});
    P__Actuator_Rev_Startup_Range__Entry.SetDouble(10);
 
    P__Actuator_Rev_Target__Entry = NTtable_Tune->GetEntry("Actuator_Rev_Target");
    NTinst.AddListener(P__Actuator_Rev_Target__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Actuator_Rev_Target = event.GetValueEventData()->value.GetDouble();});
    P__Actuator_Rev_Target__Entry.SetDouble(80);
 
    P__Algae_Eject_Time__Entry = NTtable_Tune->GetEntry("Algae_Eject_Time");
    NTinst.AddListener(P__Algae_Eject_Time__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Algae_Eject_Time = event.GetValueEventData()->value.GetDouble();});
    P__Algae_Eject_Time__Entry.SetDouble(1);
 
    P__Algae_Hold_DC__Entry = NTtable_Tune->GetEntry("Algae_Hold_DC");
    NTinst.AddListener(P__Algae_Hold_DC__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Algae_Hold_DC = event.GetValueEventData()->value.GetDouble();});
    P__Algae_Hold_DC__Entry.SetDouble(0.005);
 
    P__Algae_Pull_In_DC__Entry = NTtable_Tune->GetEntry("Algae_Pull_In_DC");
    NTinst.AddListener(P__Algae_Pull_In_DC__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Algae_Pull_In_DC = event.GetValueEventData()->value.GetDouble();});
    P__Algae_Pull_In_DC__Entry.SetDouble(1);
 
    P__Algae_Push_Out_DC__Entry = NTtable_Tune->GetEntry("Algae_Push_Out_DC");
    NTinst.AddListener(P__Algae_Push_Out_DC__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Algae_Push_Out_DC = event.GetValueEventData()->value.GetDouble();});
    P__Algae_Push_Out_DC__Entry.SetDouble(-0.3);
 
    P__Auto_Algae_Height_Time__Entry = NTtable_Tune->GetEntry("Auto_Algae_Height_Time");
    NTinst.AddListener(P__Auto_Algae_Height_Time__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Auto_Algae_Height_Time = event.GetValueEventData()->value.GetDouble();});
    P__Auto_Algae_Height_Time__Entry.SetDouble(0.5);
 
    P__Auto_Backup_Time_Processor__Entry = NTtable_Tune->GetEntry("Auto_Backup_Time_Processor");
    NTinst.AddListener(P__Auto_Backup_Time_Processor__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Auto_Backup_Time_Processor = event.GetValueEventData()->value.GetDouble();});
    P__Auto_Backup_Time_Processor__Entry.SetDouble(1);
 
    P__Auto_Backup_Time_Reef__Entry = NTtable_Tune->GetEntry("Auto_Backup_Time_Reef");
    NTinst.AddListener(P__Auto_Backup_Time_Reef__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Auto_Backup_Time_Reef = event.GetValueEventData()->value.GetDouble();});
    P__Auto_Backup_Time_Reef__Entry.SetDouble(0.25);
 
    P__Auto_Path1_Delay_to_L2_Time__Entry = NTtable_Tune->GetEntry("Auto_Path1_Delay_to_L2_Time");
    NTinst.AddListener(P__Auto_Path1_Delay_to_L2_Time__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Auto_Path1_Delay_to_L2_Time = event.GetValueEventData()->value.GetDouble();});
    P__Auto_Path1_Delay_to_L2_Time__Entry.SetDouble(0.5);
 
    P__Auto_Path1_Delay_to_L4_Time__Entry = NTtable_Tune->GetEntry("Auto_Path1_Delay_to_L4_Time");
    NTinst.AddListener(P__Auto_Path1_Delay_to_L4_Time__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Auto_Path1_Delay_to_L4_Time = event.GetValueEventData()->value.GetDouble();});
    P__Auto_Path1_Delay_to_L4_Time__Entry.SetDouble(0.25);
 
    P__Auto_Path2_Delay_to_L4_Time__Entry = NTtable_Tune->GetEntry("Auto_Path2_Delay_to_L4_Time");
    NTinst.AddListener(P__Auto_Path2_Delay_to_L4_Time__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Auto_Path2_Delay_to_L4_Time = event.GetValueEventData()->value.GetDouble();});
    P__Auto_Path2_Delay_to_L4_Time__Entry.SetDouble(0);
 
    P__Auto_Speed_Algae__Entry = NTtable_Tune->GetEntry("Auto_Speed_Algae");
    NTinst.AddListener(P__Auto_Speed_Algae__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Auto_Speed_Algae = event.GetValueEventData()->value.GetDouble();});
    P__Auto_Speed_Algae__Entry.SetDouble(0.5);
 
    P__Auto_Speed_Coral__Entry = NTtable_Tune->GetEntry("Auto_Speed_Coral");
    NTinst.AddListener(P__Auto_Speed_Coral__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Auto_Speed_Coral = event.GetValueEventData()->value.GetDouble();});
    P__Auto_Speed_Coral__Entry.SetDouble(1);
 
    P__Auto_Speed_Processor__Entry = NTtable_Tune->GetEntry("Auto_Speed_Processor");
    NTinst.AddListener(P__Auto_Speed_Processor__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Auto_Speed_Processor = event.GetValueEventData()->value.GetDouble();});
    P__Auto_Speed_Processor__Entry.SetDouble(0.5);
 
    P__Auto_Speed_Reef__Entry = NTtable_Tune->GetEntry("Auto_Speed_Reef");
    NTinst.AddListener(P__Auto_Speed_Reef__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Auto_Speed_Reef = event.GetValueEventData()->value.GetDouble();});
    P__Auto_Speed_Reef__Entry.SetDouble(1);
 
    P__Boost_Trigger_Decreasing_Limit__Entry = NTtable_Tune->GetEntry("Boost_Trigger_Decreasing_Limit");
    NTinst.AddListener(P__Boost_Trigger_Decreasing_Limit__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Boost_Trigger_Decreasing_Limit = event.GetValueEventData()->value.GetDouble();});
    P__Boost_Trigger_Decreasing_Limit__Entry.SetDouble(-0.28);
 
    P__Boost_Trigger_High_Speed__Entry = NTtable_Tune->GetEntry("Boost_Trigger_High_Speed");
    NTinst.AddListener(P__Boost_Trigger_High_Speed__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Boost_Trigger_High_Speed = event.GetValueEventData()->value.GetDouble();});
    P__Boost_Trigger_High_Speed__Entry.SetDouble(5);
 
    P__Boost_Trigger_Increasing_Limit__Entry = NTtable_Tune->GetEntry("Boost_Trigger_Increasing_Limit");
    NTinst.AddListener(P__Boost_Trigger_Increasing_Limit__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Boost_Trigger_Increasing_Limit = event.GetValueEventData()->value.GetDouble();});
    P__Boost_Trigger_Increasing_Limit__Entry.SetDouble(3.5);
 
    P__Boost_Trigger_Low_Speed__Entry = NTtable_Tune->GetEntry("Boost_Trigger_Low_Speed");
    NTinst.AddListener(P__Boost_Trigger_Low_Speed__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Boost_Trigger_Low_Speed = event.GetValueEventData()->value.GetDouble();});
    P__Boost_Trigger_Low_Speed__Entry.SetDouble(1.5);
 
    P__Coral_Arm_Angle_Coral_Score_Lower_Rate__Entry = NTtable_Tune->GetEntry("Coral_Arm_Angle_Coral_Score_Lower_Rate");
    NTinst.AddListener(P__Coral_Arm_Angle_Coral_Score_Lower_Rate__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Coral_Arm_Angle_Coral_Score_Lower_Rate = event.GetValueEventData()->value.GetDouble();});
    P__Coral_Arm_Angle_Coral_Score_Lower_Rate__Entry.SetDouble(-2);
 
    P__Coral_Arm_Angle_Error_Threshold__Entry = NTtable_Tune->GetEntry("Coral_Arm_Angle_Error_Threshold");
    NTinst.AddListener(P__Coral_Arm_Angle_Error_Threshold__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Coral_Arm_Angle_Error_Threshold = event.GetValueEventData()->value.GetDouble();});
    P__Coral_Arm_Angle_Error_Threshold__Entry.SetDouble(3);
 
    P__Coral_Arm_Angle_L1__Entry = NTtable_Tune->GetEntry("Coral_Arm_Angle_L1");
    NTinst.AddListener(P__Coral_Arm_Angle_L1__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Coral_Arm_Angle_L1 = event.GetValueEventData()->value.GetDouble();});
    P__Coral_Arm_Angle_L1__Entry.SetDouble(-15);
 
    P__Coral_Arm_Angle_L2__Entry = NTtable_Tune->GetEntry("Coral_Arm_Angle_L2");
    NTinst.AddListener(P__Coral_Arm_Angle_L2__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Coral_Arm_Angle_L2 = event.GetValueEventData()->value.GetDouble();});
    P__Coral_Arm_Angle_L2__Entry.SetDouble(50);
 
    P__Coral_Arm_Angle_L3__Entry = NTtable_Tune->GetEntry("Coral_Arm_Angle_L3");
    NTinst.AddListener(P__Coral_Arm_Angle_L3__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Coral_Arm_Angle_L3 = event.GetValueEventData()->value.GetDouble();});
    P__Coral_Arm_Angle_L3__Entry.SetDouble(50);
 
    P__Coral_Arm_Angle_L4__Entry = NTtable_Tune->GetEntry("Coral_Arm_Angle_L4");
    NTinst.AddListener(P__Coral_Arm_Angle_L4__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Coral_Arm_Angle_L4 = event.GetValueEventData()->value.GetDouble();});
    P__Coral_Arm_Angle_L4__Entry.SetDouble(57);
 
    P__Coral_Arm_Angle_L4_Eject_Auto__Entry = NTtable_Tune->GetEntry("Coral_Arm_Angle_L4_Eject_Auto");
    NTinst.AddListener(P__Coral_Arm_Angle_L4_Eject_Auto__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Coral_Arm_Angle_L4_Eject_Auto = event.GetValueEventData()->value.GetDouble();});
    P__Coral_Arm_Angle_L4_Eject_Auto__Entry.SetDouble(25);
 
    P__Coral_Arm_Angle_L4_Eject_Teleop__Entry = NTtable_Tune->GetEntry("Coral_Arm_Angle_L4_Eject_Teleop");
    NTinst.AddListener(P__Coral_Arm_Angle_L4_Eject_Teleop__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Coral_Arm_Angle_L4_Eject_Teleop = event.GetValueEventData()->value.GetDouble();});
    P__Coral_Arm_Angle_L4_Eject_Teleop__Entry.SetDouble(40);
 
    P__Coral_Arm_Angle_Neg_Threshold__Entry = NTtable_Tune->GetEntry("Coral_Arm_Angle_Neg_Threshold");
    NTinst.AddListener(P__Coral_Arm_Angle_Neg_Threshold__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Coral_Arm_Angle_Neg_Threshold = event.GetValueEventData()->value.GetDouble();});
    P__Coral_Arm_Angle_Neg_Threshold__Entry.SetDouble(-86);
 
    P__Coral_Arm_Angle_Pos_Threshold__Entry = NTtable_Tune->GetEntry("Coral_Arm_Angle_Pos_Threshold");
    NTinst.AddListener(P__Coral_Arm_Angle_Pos_Threshold__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Coral_Arm_Angle_Pos_Threshold = event.GetValueEventData()->value.GetDouble();});
    P__Coral_Arm_Angle_Pos_Threshold__Entry.SetDouble(80);
 
    P__Coral_Arm_Angle_Start__Entry = NTtable_Tune->GetEntry("Coral_Arm_Angle_Start");
    NTinst.AddListener(P__Coral_Arm_Angle_Start__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Coral_Arm_Angle_Start = event.GetValueEventData()->value.GetDouble();});
    P__Coral_Arm_Angle_Start__Entry.SetDouble(-15);
 
    P__Coral_Arm_Angle_Start_Thresh__Entry = NTtable_Tune->GetEntry("Coral_Arm_Angle_Start_Thresh");
    NTinst.AddListener(P__Coral_Arm_Angle_Start_Thresh__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Coral_Arm_Angle_Start_Thresh = event.GetValueEventData()->value.GetDouble();});
    P__Coral_Arm_Angle_Start_Thresh__Entry.SetDouble(-75);
 
    P__Coral_Arm_Angle_Up__Entry = NTtable_Tune->GetEntry("Coral_Arm_Angle_Up");
    NTinst.AddListener(P__Coral_Arm_Angle_Up__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Coral_Arm_Angle_Up = event.GetValueEventData()->value.GetDouble();});
    P__Coral_Arm_Angle_Up__Entry.SetDouble(85);
 
    P__Coral_Arm_DC_Inc_RL__Entry = NTtable_Tune->GetEntry("Coral_Arm_DC_Inc_RL");
    NTinst.AddListener(P__Coral_Arm_DC_Inc_RL__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Coral_Arm_DC_Inc_RL = event.GetValueEventData()->value.GetDouble();});
    P__Coral_Arm_DC_Inc_RL__Entry.SetDouble(0.033333);
 
    P__Coral_Arm_Gain_Int__Entry = NTtable_Tune->GetEntry("Coral_Arm_Gain_Int");
    NTinst.AddListener(P__Coral_Arm_Gain_Int__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Coral_Arm_Gain_Int = event.GetValueEventData()->value.GetDouble();});
    P__Coral_Arm_Gain_Int__Entry.SetDouble(0.0005);
 
    P__Coral_Arm_Gain_Prop__Entry = NTtable_Tune->GetEntry("Coral_Arm_Gain_Prop");
    NTinst.AddListener(P__Coral_Arm_Gain_Prop__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Coral_Arm_Gain_Prop = event.GetValueEventData()->value.GetDouble();});
    P__Coral_Arm_Gain_Prop__Entry.SetDouble(0.005);
 
    P__Coral_Arm_Int_IC__Entry = NTtable_Tune->GetEntry("Coral_Arm_Int_IC");
    NTinst.AddListener(P__Coral_Arm_Int_IC__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Coral_Arm_Int_IC = event.GetValueEventData()->value.GetDouble();});
    P__Coral_Arm_Int_IC__Entry.SetDouble(0);
 
    P__Coral_Arm_Int_LL__Entry = NTtable_Tune->GetEntry("Coral_Arm_Int_LL");
    NTinst.AddListener(P__Coral_Arm_Int_LL__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Coral_Arm_Int_LL = event.GetValueEventData()->value.GetDouble();});
    P__Coral_Arm_Int_LL__Entry.SetDouble(-0.025);
 
    P__Coral_Arm_Int_UL__Entry = NTtable_Tune->GetEntry("Coral_Arm_Int_UL");
    NTinst.AddListener(P__Coral_Arm_Int_UL__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Coral_Arm_Int_UL = event.GetValueEventData()->value.GetDouble();});
    P__Coral_Arm_Int_UL__Entry.SetDouble(0.025);
 
    P__Coral_Arm_Manual_Gain__Entry = NTtable_Tune->GetEntry("Coral_Arm_Manual_Gain");
    NTinst.AddListener(P__Coral_Arm_Manual_Gain__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Coral_Arm_Manual_Gain = event.GetValueEventData()->value.GetDouble();});
    P__Coral_Arm_Manual_Gain__Entry.SetDouble(1);
 
    P__Coral_Arm_Neg90_DC__Entry = NTtable_Tune->GetEntry("Coral_Arm_Neg90_DC");
    NTinst.AddListener(P__Coral_Arm_Neg90_DC__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Coral_Arm_Neg90_DC = event.GetValueEventData()->value.GetDouble();});
    P__Coral_Arm_Neg90_DC__Entry.SetDouble(-0.03);
 
    P__Coral_Arm_Pos90_DC__Entry = NTtable_Tune->GetEntry("Coral_Arm_Pos90_DC");
    NTinst.AddListener(P__Coral_Arm_Pos90_DC__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Coral_Arm_Pos90_DC = event.GetValueEventData()->value.GetDouble();});
    P__Coral_Arm_Pos90_DC__Entry.SetDouble(0.03);
 
    P__Coral_Detect_Distance__Entry = NTtable_Tune->GetEntry("Coral_Detect_Distance");
    NTinst.AddListener(P__Coral_Detect_Distance__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Coral_Detect_Distance = event.GetValueEventData()->value.GetDouble();});
    P__Coral_Detect_Distance__Entry.SetDouble(150);
 
    P__Coral_Eject_Time__Entry = NTtable_Tune->GetEntry("Coral_Eject_Time");
    NTinst.AddListener(P__Coral_Eject_Time__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Coral_Eject_Time = event.GetValueEventData()->value.GetDouble();});
    P__Coral_Eject_Time__Entry.SetDouble(0.5);
 
    P__Coral_Motor_DC_Eject__Entry = NTtable_Tune->GetEntry("Coral_Motor_DC_Eject");
    NTinst.AddListener(P__Coral_Motor_DC_Eject__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Coral_Motor_DC_Eject = event.GetValueEventData()->value.GetDouble();});
    P__Coral_Motor_DC_Eject__Entry.SetDouble(-0.4);
 
    P__Coral_Motor_DC_Hold__Entry = NTtable_Tune->GetEntry("Coral_Motor_DC_Hold");
    NTinst.AddListener(P__Coral_Motor_DC_Hold__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Coral_Motor_DC_Hold = event.GetValueEventData()->value.GetDouble();});
    P__Coral_Motor_DC_Hold__Entry.SetDouble(0.01);
 
    P__Coral_Motor_DC_Pickup__Entry = NTtable_Tune->GetEntry("Coral_Motor_DC_Pickup");
    NTinst.AddListener(P__Coral_Motor_DC_Pickup__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Coral_Motor_DC_Pickup = event.GetValueEventData()->value.GetDouble();});
    P__Coral_Motor_DC_Pickup__Entry.SetDouble(0.1);
 
    P__Drive_Engage_Hook_Angle__Entry = NTtable_Tune->GetEntry("Drive_Engage_Hook_Angle");
    NTinst.AddListener(P__Drive_Engage_Hook_Angle__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Drive_Engage_Hook_Angle = event.GetValueEventData()->value.GetDouble();});
    P__Drive_Engage_Hook_Angle__Entry.SetDouble(3.1416);
 
    P__Drive_Engage_Hook_Speed__Entry = NTtable_Tune->GetEntry("Drive_Engage_Hook_Speed");
    NTinst.AddListener(P__Drive_Engage_Hook_Speed__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Drive_Engage_Hook_Speed = event.GetValueEventData()->value.GetDouble();});
    P__Drive_Engage_Hook_Speed__Entry.SetDouble(0.3);
 
    P__Drive_Motor_Control_D__Entry = NTtable_Tune->GetEntry("Drive_Motor_Control_D");
    NTinst.AddListener(P__Drive_Motor_Control_D__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Drive_Motor_Control_D = event.GetValueEventData()->value.GetDouble();});
    P__Drive_Motor_Control_D__Entry.SetDouble(0.0001);
 
    P__Drive_Motor_Control_D_FilterCoeff__Entry = NTtable_Tune->GetEntry("Drive_Motor_Control_D_FilterCoeff");
    NTinst.AddListener(P__Drive_Motor_Control_D_FilterCoeff__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Drive_Motor_Control_D_FilterCoeff = event.GetValueEventData()->value.GetDouble();});
    P__Drive_Motor_Control_D_FilterCoeff__Entry.SetDouble(0.22223);
 
    P__Drive_Motor_Control_D_LL__Entry = NTtable_Tune->GetEntry("Drive_Motor_Control_D_LL");
    NTinst.AddListener(P__Drive_Motor_Control_D_LL__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Drive_Motor_Control_D_LL = event.GetValueEventData()->value.GetDouble();});
    P__Drive_Motor_Control_D_LL__Entry.SetDouble(-0.2);
 
    P__Drive_Motor_Control_D_UL__Entry = NTtable_Tune->GetEntry("Drive_Motor_Control_D_UL");
    NTinst.AddListener(P__Drive_Motor_Control_D_UL__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Drive_Motor_Control_D_UL = event.GetValueEventData()->value.GetDouble();});
    P__Drive_Motor_Control_D_UL__Entry.SetDouble(0.2);
 
    P__Drive_Motor_Control_FF__Entry = NTtable_Tune->GetEntry("Drive_Motor_Control_FF");
    NTinst.AddListener(P__Drive_Motor_Control_FF__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Drive_Motor_Control_FF = event.GetValueEventData()->value.GetDouble();});
    P__Drive_Motor_Control_FF__Entry.SetDouble(0.00016129);
 
    P__Drive_Motor_Control_I__Entry = NTtable_Tune->GetEntry("Drive_Motor_Control_I");
    NTinst.AddListener(P__Drive_Motor_Control_I__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Drive_Motor_Control_I = event.GetValueEventData()->value.GetDouble();});
    P__Drive_Motor_Control_I__Entry.SetDouble(1e-06);
 
    P__Drive_Motor_Control_I_LL__Entry = NTtable_Tune->GetEntry("Drive_Motor_Control_I_LL");
    NTinst.AddListener(P__Drive_Motor_Control_I_LL__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Drive_Motor_Control_I_LL = event.GetValueEventData()->value.GetDouble();});
    P__Drive_Motor_Control_I_LL__Entry.SetDouble(-0.03);
 
    P__Drive_Motor_Control_I_UL__Entry = NTtable_Tune->GetEntry("Drive_Motor_Control_I_UL");
    NTinst.AddListener(P__Drive_Motor_Control_I_UL__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Drive_Motor_Control_I_UL = event.GetValueEventData()->value.GetDouble();});
    P__Drive_Motor_Control_I_UL__Entry.SetDouble(0.03);
 
    P__Drive_Motor_Control_P__Entry = NTtable_Tune->GetEntry("Drive_Motor_Control_P");
    NTinst.AddListener(P__Drive_Motor_Control_P__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Drive_Motor_Control_P = event.GetValueEventData()->value.GetDouble();});
    P__Drive_Motor_Control_P__Entry.SetDouble(5e-06);
 
    P__Drive_Motor_Control_Sign_Change_Deadband__Entry = NTtable_Tune->GetEntry("Drive_Motor_Control_Sign_Change_Deadband");
    NTinst.AddListener(P__Drive_Motor_Control_Sign_Change_Deadband__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Drive_Motor_Control_Sign_Change_Deadband = event.GetValueEventData()->value.GetDouble();});
    P__Drive_Motor_Control_Sign_Change_Deadband__Entry.SetDouble(7000);
 
    P__Elevator_Bottom_DC__Entry = NTtable_Tune->GetEntry("Elevator_Bottom_DC");
    NTinst.AddListener(P__Elevator_Bottom_DC__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Elevator_Bottom_DC = event.GetValueEventData()->value.GetDouble();});
    P__Elevator_Bottom_DC__Entry.SetDouble(-0.1);
 
    P__Elevator_DC_Inc_RL__Entry = NTtable_Tune->GetEntry("Elevator_DC_Inc_RL");
    NTinst.AddListener(P__Elevator_DC_Inc_RL__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Elevator_DC_Inc_RL = event.GetValueEventData()->value.GetDouble();});
    P__Elevator_DC_Inc_RL__Entry.SetDouble(0.066667);
 
    P__Elevator_Error_Bottom_Disable__Entry = NTtable_Tune->GetEntry("Elevator_Error_Bottom_Disable");
    NTinst.AddListener(P__Elevator_Error_Bottom_Disable__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Elevator_Error_Bottom_Disable = event.GetValueEventData()->value.GetDouble();});
    P__Elevator_Error_Bottom_Disable__Entry.SetDouble(1);
 
    P__Elevator_Error_Increase__Entry = NTtable_Tune->GetEntry("Elevator_Error_Increase");
    NTinst.AddListener(P__Elevator_Error_Increase__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Elevator_Error_Increase = event.GetValueEventData()->value.GetDouble();});
    P__Elevator_Error_Increase__Entry.SetDouble(0);
 
    P__Elevator_Gain_Int__Entry = NTtable_Tune->GetEntry("Elevator_Gain_Int");
    NTinst.AddListener(P__Elevator_Gain_Int__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Elevator_Gain_Int = event.GetValueEventData()->value.GetDouble();});
    P__Elevator_Gain_Int__Entry.SetDouble(0.02);
 
    P__Elevator_Gain_Prop__Entry = NTtable_Tune->GetEntry("Elevator_Gain_Prop");
    NTinst.AddListener(P__Elevator_Gain_Prop__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Elevator_Gain_Prop = event.GetValueEventData()->value.GetDouble();});
    P__Elevator_Gain_Prop__Entry.SetDouble(0.3);
 
    P__Elevator_Height_Algae_High__Entry = NTtable_Tune->GetEntry("Elevator_Height_Algae_High");
    NTinst.AddListener(P__Elevator_Height_Algae_High__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Elevator_Height_Algae_High = event.GetValueEventData()->value.GetDouble();});
    P__Elevator_Height_Algae_High__Entry.SetDouble(20.3);
 
    P__Elevator_Height_Algae_Low__Entry = NTtable_Tune->GetEntry("Elevator_Height_Algae_Low");
    NTinst.AddListener(P__Elevator_Height_Algae_Low__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Elevator_Height_Algae_Low = event.GetValueEventData()->value.GetDouble();});
    P__Elevator_Height_Algae_Low__Entry.SetDouble(12.3);
 
    P__Elevator_Height_Algae_Score__Entry = NTtable_Tune->GetEntry("Elevator_Height_Algae_Score");
    NTinst.AddListener(P__Elevator_Height_Algae_Score__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Elevator_Height_Algae_Score = event.GetValueEventData()->value.GetDouble();});
    P__Elevator_Height_Algae_Score__Entry.SetDouble(3.3);
 
    P__Elevator_Height_Bottom__Entry = NTtable_Tune->GetEntry("Elevator_Height_Bottom");
    NTinst.AddListener(P__Elevator_Height_Bottom__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Elevator_Height_Bottom = event.GetValueEventData()->value.GetDouble();});
    P__Elevator_Height_Bottom__Entry.SetDouble(0);
 
    P__Elevator_Height_Bottom_Pre__Entry = NTtable_Tune->GetEntry("Elevator_Height_Bottom_Pre");
    NTinst.AddListener(P__Elevator_Height_Bottom_Pre__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Elevator_Height_Bottom_Pre = event.GetValueEventData()->value.GetDouble();});
    P__Elevator_Height_Bottom_Pre__Entry.SetDouble(13.8);
 
    P__Elevator_Height_Coral_Arm_Low_Thresh__Entry = NTtable_Tune->GetEntry("Elevator_Height_Coral_Arm_Low_Thresh");
    NTinst.AddListener(P__Elevator_Height_Coral_Arm_Low_Thresh__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Elevator_Height_Coral_Arm_Low_Thresh = event.GetValueEventData()->value.GetDouble();});
    P__Elevator_Height_Coral_Arm_Low_Thresh__Entry.SetDouble(8.5);
 
    P__Elevator_Height_Coral_Score_Lower_Rate__Entry = NTtable_Tune->GetEntry("Elevator_Height_Coral_Score_Lower_Rate");
    NTinst.AddListener(P__Elevator_Height_Coral_Score_Lower_Rate__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Elevator_Height_Coral_Score_Lower_Rate = event.GetValueEventData()->value.GetDouble();});
    P__Elevator_Height_Coral_Score_Lower_Rate__Entry.SetDouble(-0.2);
 
    P__Elevator_Height_End_Game__Entry = NTtable_Tune->GetEntry("Elevator_Height_End_Game");
    NTinst.AddListener(P__Elevator_Height_End_Game__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Elevator_Height_End_Game = event.GetValueEventData()->value.GetDouble();});
    P__Elevator_Height_End_Game__Entry.SetDouble(14.8);
 
    P__Elevator_Height_Error_Threshold__Entry = NTtable_Tune->GetEntry("Elevator_Height_Error_Threshold");
    NTinst.AddListener(P__Elevator_Height_Error_Threshold__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Elevator_Height_Error_Threshold = event.GetValueEventData()->value.GetDouble();});
    P__Elevator_Height_Error_Threshold__Entry.SetDouble(1);
 
    P__Elevator_Height_L1__Entry = NTtable_Tune->GetEntry("Elevator_Height_L1");
    NTinst.AddListener(P__Elevator_Height_L1__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Elevator_Height_L1 = event.GetValueEventData()->value.GetDouble();});
    P__Elevator_Height_L1__Entry.SetDouble(11.8);
 
    P__Elevator_Height_L2__Entry = NTtable_Tune->GetEntry("Elevator_Height_L2");
    NTinst.AddListener(P__Elevator_Height_L2__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Elevator_Height_L2 = event.GetValueEventData()->value.GetDouble();});
    P__Elevator_Height_L2__Entry.SetDouble(7.05);
 
    P__Elevator_Height_L2_Eject__Entry = NTtable_Tune->GetEntry("Elevator_Height_L2_Eject");
    NTinst.AddListener(P__Elevator_Height_L2_Eject__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Elevator_Height_L2_Eject = event.GetValueEventData()->value.GetDouble();});
    P__Elevator_Height_L2_Eject__Entry.SetDouble(1.05);
 
    P__Elevator_Height_L3__Entry = NTtable_Tune->GetEntry("Elevator_Height_L3");
    NTinst.AddListener(P__Elevator_Height_L3__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Elevator_Height_L3 = event.GetValueEventData()->value.GetDouble();});
    P__Elevator_Height_L3__Entry.SetDouble(15.05);
 
    P__Elevator_Height_L3_Eject__Entry = NTtable_Tune->GetEntry("Elevator_Height_L3_Eject");
    NTinst.AddListener(P__Elevator_Height_L3_Eject__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Elevator_Height_L3_Eject = event.GetValueEventData()->value.GetDouble();});
    P__Elevator_Height_L3_Eject__Entry.SetDouble(9.05);
 
    P__Elevator_Height_L4__Entry = NTtable_Tune->GetEntry("Elevator_Height_L4");
    NTinst.AddListener(P__Elevator_Height_L4__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Elevator_Height_L4 = event.GetValueEventData()->value.GetDouble();});
    P__Elevator_Height_L4__Entry.SetDouble(26.7);
 
    P__Elevator_Height_Lower__Entry = NTtable_Tune->GetEntry("Elevator_Height_Lower");
    NTinst.AddListener(P__Elevator_Height_Lower__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Elevator_Height_Lower = event.GetValueEventData()->value.GetDouble();});
    P__Elevator_Height_Lower__Entry.SetDouble(7.3);
 
    P__Elevator_Height_Manual_Gain__Entry = NTtable_Tune->GetEntry("Elevator_Height_Manual_Gain");
    NTinst.AddListener(P__Elevator_Height_Manual_Gain__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Elevator_Height_Manual_Gain = event.GetValueEventData()->value.GetDouble();});
    P__Elevator_Height_Manual_Gain__Entry.SetDouble(0.1);
 
    P__Elevator_Height_PickupLower_Reset__Entry = NTtable_Tune->GetEntry("Elevator_Height_PickupLower_Reset");
    NTinst.AddListener(P__Elevator_Height_PickupLower_Reset__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Elevator_Height_PickupLower_Reset = event.GetValueEventData()->value.GetDouble();});
    P__Elevator_Height_PickupLower_Reset__Entry.SetDouble(7.675);
 
    P__Elevator_Height_Prepare__Entry = NTtable_Tune->GetEntry("Elevator_Height_Prepare");
    NTinst.AddListener(P__Elevator_Height_Prepare__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Elevator_Height_Prepare = event.GetValueEventData()->value.GetDouble();});
    P__Elevator_Height_Prepare__Entry.SetDouble(10.8);
 
    P__Elevator_Height_Raise__Entry = NTtable_Tune->GetEntry("Elevator_Height_Raise");
    NTinst.AddListener(P__Elevator_Height_Raise__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Elevator_Height_Raise = event.GetValueEventData()->value.GetDouble();});
    P__Elevator_Height_Raise__Entry.SetDouble(9.4);
 
    P__Elevator_Height_Top_Reset__Entry = NTtable_Tune->GetEntry("Elevator_Height_Top_Reset");
    NTinst.AddListener(P__Elevator_Height_Top_Reset__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Elevator_Height_Top_Reset = event.GetValueEventData()->value.GetDouble();});
    P__Elevator_Height_Top_Reset__Entry.SetDouble(30);
 
    P__Elevator_Hold_at_Top_DC__Entry = NTtable_Tune->GetEntry("Elevator_Hold_at_Top_DC");
    NTinst.AddListener(P__Elevator_Hold_at_Top_DC__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Elevator_Hold_at_Top_DC = event.GetValueEventData()->value.GetDouble();});
    P__Elevator_Hold_at_Top_DC__Entry.SetDouble(0.1);
 
    P__Elevator_Int_IC__Entry = NTtable_Tune->GetEntry("Elevator_Int_IC");
    NTinst.AddListener(P__Elevator_Int_IC__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Elevator_Int_IC = event.GetValueEventData()->value.GetDouble();});
    P__Elevator_Int_IC__Entry.SetDouble(0);
 
    P__Elevator_Int_LL__Entry = NTtable_Tune->GetEntry("Elevator_Int_LL");
    NTinst.AddListener(P__Elevator_Int_LL__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Elevator_Int_LL = event.GetValueEventData()->value.GetDouble();});
    P__Elevator_Int_LL__Entry.SetDouble(-0.1);
 
    P__Elevator_Int_UL__Entry = NTtable_Tune->GetEntry("Elevator_Int_UL");
    NTinst.AddListener(P__Elevator_Int_UL__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Elevator_Int_UL = event.GetValueEventData()->value.GetDouble();});
    P__Elevator_Int_UL__Entry.SetDouble(0.1);
 
    P__Elevator_Limit_Switch_Debounce_F2T__Entry = NTtable_Tune->GetEntry("Elevator_Limit_Switch_Debounce_F2T");
    NTinst.AddListener(P__Elevator_Limit_Switch_Debounce_F2T__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Elevator_Limit_Switch_Debounce_F2T = event.GetValueEventData()->value.GetDouble();});
    P__Elevator_Limit_Switch_Debounce_F2T__Entry.SetDouble(0.5);
 
    P__Elevator_Limit_Switch_Debounce_T2F__Entry = NTtable_Tune->GetEntry("Elevator_Limit_Switch_Debounce_T2F");
    NTinst.AddListener(P__Elevator_Limit_Switch_Debounce_T2F__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Elevator_Limit_Switch_Debounce_T2F = event.GetValueEventData()->value.GetDouble();});
    P__Elevator_Limit_Switch_Debounce_T2F__Entry.SetDouble(0);
 
    P__Elevator_LowerPickup_Time__Entry = NTtable_Tune->GetEntry("Elevator_LowerPickup_Time");
    NTinst.AddListener(P__Elevator_LowerPickup_Time__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Elevator_LowerPickup_Time = event.GetValueEventData()->value.GetDouble();});
    P__Elevator_LowerPickup_Time__Entry.SetDouble(0);
 
    P__Elevator_MotorRev_to_Inch__Entry = NTtable_Tune->GetEntry("Elevator_MotorRev_to_Inch");
    NTinst.AddListener(P__Elevator_MotorRev_to_Inch__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Elevator_MotorRev_to_Inch = event.GetValueEventData()->value.GetDouble();});
    P__Elevator_MotorRev_to_Inch__Entry.SetDouble(0.27646);
 
    P__Elevator_Total_LL__Entry = NTtable_Tune->GetEntry("Elevator_Total_LL");
    NTinst.AddListener(P__Elevator_Total_LL__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Elevator_Total_LL = event.GetValueEventData()->value.GetDouble();});
    P__Elevator_Total_LL__Entry.SetDouble(-0.5);
 
    P__Elevator_Total_UL__Entry = NTtable_Tune->GetEntry("Elevator_Total_UL");
    NTinst.AddListener(P__Elevator_Total_UL__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Elevator_Total_UL = event.GetValueEventData()->value.GetDouble();});
    P__Elevator_Total_UL__Entry.SetDouble(1);
 
    P__KF_Enable__Entry = NTtable_Tune->GetEntry("KF_Enable");
    NTinst.AddListener(P__KF_Enable__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {KF_Enable = event.GetValueEventData()->value.GetDouble();});
    P__KF_Enable__Entry.SetDouble(1);
 
    P__L4_Switch_Time__Entry = NTtable_Tune->GetEntry("L4_Switch_Time");
    NTinst.AddListener(P__L4_Switch_Time__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {L4_Switch_Time = event.GetValueEventData()->value.GetDouble();});
    P__L4_Switch_Time__Entry.SetDouble(0.1);
 
    P__Limelight_Tag_Angle_Offset__Entry = NTtable_Tune->GetEntry("Limelight_Tag_Angle_Offset");
    NTinst.AddListener(P__Limelight_Tag_Angle_Offset__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Limelight_Tag_Angle_Offset = event.GetValueEventData()->value.GetDouble();});
    P__Limelight_Tag_Angle_Offset__Entry.SetDouble(0);
 
    P__Limelight_Tag_X_Offset__Entry = NTtable_Tune->GetEntry("Limelight_Tag_X_Offset");
    NTinst.AddListener(P__Limelight_Tag_X_Offset__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Limelight_Tag_X_Offset = event.GetValueEventData()->value.GetDouble();});
    P__Limelight_Tag_X_Offset__Entry.SetDouble(-0.28);
 
    P__Limelight_Tag_Y_Offset__Entry = NTtable_Tune->GetEntry("Limelight_Tag_Y_Offset");
    NTinst.AddListener(P__Limelight_Tag_Y_Offset__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Limelight_Tag_Y_Offset = event.GetValueEventData()->value.GetDouble();});
    P__Limelight_Tag_Y_Offset__Entry.SetDouble(-0.28);
 
    P__MatchTime_Skip_Coral_Pickup__Entry = NTtable_Tune->GetEntry("MatchTime_Skip_Coral_Pickup");
    NTinst.AddListener(P__MatchTime_Skip_Coral_Pickup__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {MatchTime_Skip_Coral_Pickup = event.GetValueEventData()->value.GetDouble();});
    P__MatchTime_Skip_Coral_Pickup__Entry.SetDouble(7);
 
    P__MatchTime_Skip_Second_L4__Entry = NTtable_Tune->GetEntry("MatchTime_Skip_Second_L4");
    NTinst.AddListener(P__MatchTime_Skip_Second_L4__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {MatchTime_Skip_Second_L4 = event.GetValueEventData()->value.GetDouble();});
    P__MatchTime_Skip_Second_L4__Entry.SetDouble(3.4);
 
    P__Spline_Last_Pose_Distance_to_Velocity_Gain__Entry = NTtable_Tune->GetEntry("Spline_Last_Pose_Distance_to_Velocity_Gain");
    NTinst.AddListener(P__Spline_Last_Pose_Distance_to_Velocity_Gain__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Spline_Last_Pose_Distance_to_Velocity_Gain = event.GetValueEventData()->value.GetDouble();});
    P__Spline_Last_Pose_Distance_to_Velocity_Gain__Entry.SetDouble(2);
 
    P__Spline_Max_Centripital_Acceleration__Entry = NTtable_Tune->GetEntry("Spline_Max_Centripital_Acceleration");
    NTinst.AddListener(P__Spline_Max_Centripital_Acceleration__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Spline_Max_Centripital_Acceleration = event.GetValueEventData()->value.GetDouble();});
    P__Spline_Max_Centripital_Acceleration__Entry.SetDouble(10);
 
    P__Spline_Pose_Num_Before_End_Reduce_Speed__Entry = NTtable_Tune->GetEntry("Spline_Pose_Num_Before_End_Reduce_Speed");
    NTinst.AddListener(P__Spline_Pose_Num_Before_End_Reduce_Speed__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Spline_Pose_Num_Before_End_Reduce_Speed = event.GetValueEventData()->value.GetDouble();});
    P__Spline_Pose_Num_Before_End_Reduce_Speed__Entry.SetDouble(1);
 
    P__Spline_Stop_Radius__Entry = NTtable_Tune->GetEntry("Spline_Stop_Radius");
    NTinst.AddListener(P__Spline_Stop_Radius__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Spline_Stop_Radius = event.GetValueEventData()->value.GetDouble();});
    P__Spline_Stop_Radius__Entry.SetDouble(0.1);
 
    P__Spline_Velocity_Multiplier_TEST__Entry = NTtable_Tune->GetEntry("Spline_Velocity_Multiplier_TEST");
    NTinst.AddListener(P__Spline_Velocity_Multiplier_TEST__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Spline_Velocity_Multiplier_TEST = event.GetValueEventData()->value.GetDouble();});
    P__Spline_Velocity_Multiplier_TEST__Entry.SetDouble(1);
 
    P__Steering_Absolute_Cmd_Approach_Zero_Error_Thresh__Entry = NTtable_Tune->GetEntry("Steering_Absolute_Cmd_Approach_Zero_Error_Thresh");
    NTinst.AddListener(P__Steering_Absolute_Cmd_Approach_Zero_Error_Thresh__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Steering_Absolute_Cmd_Approach_Zero_Error_Thresh = event.GetValueEventData()->value.GetDouble();});
    P__Steering_Absolute_Cmd_Approach_Zero_Error_Thresh__Entry.SetDouble(0.2);
 
    P__Steering_Absolute_Cmd_Approach_Zero_Final_Thresh__Entry = NTtable_Tune->GetEntry("Steering_Absolute_Cmd_Approach_Zero_Final_Thresh");
    NTinst.AddListener(P__Steering_Absolute_Cmd_Approach_Zero_Final_Thresh__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Steering_Absolute_Cmd_Approach_Zero_Final_Thresh = event.GetValueEventData()->value.GetDouble();});
    P__Steering_Absolute_Cmd_Approach_Zero_Final_Thresh__Entry.SetDouble(0.01);
 
    P__Steering_Absolute_Cmd_NonZero_Error_Thresh__Entry = NTtable_Tune->GetEntry("Steering_Absolute_Cmd_NonZero_Error_Thresh");
    NTinst.AddListener(P__Steering_Absolute_Cmd_NonZero_Error_Thresh__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Steering_Absolute_Cmd_NonZero_Error_Thresh = event.GetValueEventData()->value.GetDouble();});
    P__Steering_Absolute_Cmd_NonZero_Error_Thresh__Entry.SetDouble(0.2);
 
    P__Steering_Absolute_Cmd_NonZero_Final_Scale_Factor__Entry = NTtable_Tune->GetEntry("Steering_Absolute_Cmd_NonZero_Final_Scale_Factor");
    NTinst.AddListener(P__Steering_Absolute_Cmd_NonZero_Final_Scale_Factor__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Steering_Absolute_Cmd_NonZero_Final_Scale_Factor = event.GetValueEventData()->value.GetDouble();});
    P__Steering_Absolute_Cmd_NonZero_Final_Scale_Factor__Entry.SetDouble(0.1);
 
    P__Steering_Absolute_Cmd_Rate_Limit_Dec__Entry = NTtable_Tune->GetEntry("Steering_Absolute_Cmd_Rate_Limit_Dec");
    NTinst.AddListener(P__Steering_Absolute_Cmd_Rate_Limit_Dec__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Steering_Absolute_Cmd_Rate_Limit_Dec = event.GetValueEventData()->value.GetDouble();});
    P__Steering_Absolute_Cmd_Rate_Limit_Dec__Entry.SetDouble(-1);
 
    P__Steering_Absolute_Cmd_Rate_Limit_Inc__Entry = NTtable_Tune->GetEntry("Steering_Absolute_Cmd_Rate_Limit_Inc");
    NTinst.AddListener(P__Steering_Absolute_Cmd_Rate_Limit_Inc__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Steering_Absolute_Cmd_Rate_Limit_Inc = event.GetValueEventData()->value.GetDouble();});
    P__Steering_Absolute_Cmd_Rate_Limit_Inc__Entry.SetDouble(1);
 
    P__Steering_Heading_Control_D__Entry = NTtable_Tune->GetEntry("Steering_Heading_Control_D");
    NTinst.AddListener(P__Steering_Heading_Control_D__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Steering_Heading_Control_D = event.GetValueEventData()->value.GetDouble();});
    P__Steering_Heading_Control_D__Entry.SetDouble(0);
 
    P__Steering_Heading_Control_D_FilterCoeff__Entry = NTtable_Tune->GetEntry("Steering_Heading_Control_D_FilterCoeff");
    NTinst.AddListener(P__Steering_Heading_Control_D_FilterCoeff__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Steering_Heading_Control_D_FilterCoeff = event.GetValueEventData()->value.GetDouble();});
    P__Steering_Heading_Control_D_FilterCoeff__Entry.SetDouble(0.22223);
 
    P__Steering_Heading_Control_D_LL__Entry = NTtable_Tune->GetEntry("Steering_Heading_Control_D_LL");
    NTinst.AddListener(P__Steering_Heading_Control_D_LL__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Steering_Heading_Control_D_LL = event.GetValueEventData()->value.GetDouble();});
    P__Steering_Heading_Control_D_LL__Entry.SetDouble(0);
 
    P__Steering_Heading_Control_D_UL__Entry = NTtable_Tune->GetEntry("Steering_Heading_Control_D_UL");
    NTinst.AddListener(P__Steering_Heading_Control_D_UL__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Steering_Heading_Control_D_UL = event.GetValueEventData()->value.GetDouble();});
    P__Steering_Heading_Control_D_UL__Entry.SetDouble(0);
 
    P__Steering_Heading_Control_Deadzone__Entry = NTtable_Tune->GetEntry("Steering_Heading_Control_Deadzone");
    NTinst.AddListener(P__Steering_Heading_Control_Deadzone__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Steering_Heading_Control_Deadzone = event.GetValueEventData()->value.GetDouble();});
    P__Steering_Heading_Control_Deadzone__Entry.SetDouble(0.1);
 
    P__Steering_Heading_Control_I__Entry = NTtable_Tune->GetEntry("Steering_Heading_Control_I");
    NTinst.AddListener(P__Steering_Heading_Control_I__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Steering_Heading_Control_I = event.GetValueEventData()->value.GetDouble();});
    P__Steering_Heading_Control_I__Entry.SetDouble(0);
 
    P__Steering_Heading_Control_I_LL__Entry = NTtable_Tune->GetEntry("Steering_Heading_Control_I_LL");
    NTinst.AddListener(P__Steering_Heading_Control_I_LL__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Steering_Heading_Control_I_LL = event.GetValueEventData()->value.GetDouble();});
    P__Steering_Heading_Control_I_LL__Entry.SetDouble(-0.1);
 
    P__Steering_Heading_Control_I_UL__Entry = NTtable_Tune->GetEntry("Steering_Heading_Control_I_UL");
    NTinst.AddListener(P__Steering_Heading_Control_I_UL__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Steering_Heading_Control_I_UL = event.GetValueEventData()->value.GetDouble();});
    P__Steering_Heading_Control_I_UL__Entry.SetDouble(0.1);
 
    P__Steering_Heading_Control_P__Entry = NTtable_Tune->GetEntry("Steering_Heading_Control_P");
    NTinst.AddListener(P__Steering_Heading_Control_P__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Steering_Heading_Control_P = event.GetValueEventData()->value.GetDouble();});
    P__Steering_Heading_Control_P__Entry.SetDouble(2.5);
 
    P__Steering_Heading_Control_Total_LL__Entry = NTtable_Tune->GetEntry("Steering_Heading_Control_Total_LL");
    NTinst.AddListener(P__Steering_Heading_Control_Total_LL__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Steering_Heading_Control_Total_LL = event.GetValueEventData()->value.GetDouble();});
    P__Steering_Heading_Control_Total_LL__Entry.SetDouble(-2.5);
 
    P__Steering_Heading_Control_Total_UL__Entry = NTtable_Tune->GetEntry("Steering_Heading_Control_Total_UL");
    NTinst.AddListener(P__Steering_Heading_Control_Total_UL__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Steering_Heading_Control_Total_UL = event.GetValueEventData()->value.GetDouble();});
    P__Steering_Heading_Control_Total_UL__Entry.SetDouble(2.5);
 
    P__Steering_Motor_Control_D__Entry = NTtable_Tune->GetEntry("Steering_Motor_Control_D");
    NTinst.AddListener(P__Steering_Motor_Control_D__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Steering_Motor_Control_D = event.GetValueEventData()->value.GetDouble();});
    P__Steering_Motor_Control_D__Entry.SetDouble(0.5);
 
    P__Steering_Motor_Control_D_FilterCoeff__Entry = NTtable_Tune->GetEntry("Steering_Motor_Control_D_FilterCoeff");
    NTinst.AddListener(P__Steering_Motor_Control_D_FilterCoeff__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Steering_Motor_Control_D_FilterCoeff = event.GetValueEventData()->value.GetDouble();});
    P__Steering_Motor_Control_D_FilterCoeff__Entry.SetDouble(0.22223);
 
    P__Steering_Motor_Control_D_LL__Entry = NTtable_Tune->GetEntry("Steering_Motor_Control_D_LL");
    NTinst.AddListener(P__Steering_Motor_Control_D_LL__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Steering_Motor_Control_D_LL = event.GetValueEventData()->value.GetDouble();});
    P__Steering_Motor_Control_D_LL__Entry.SetDouble(-0.2);
 
    P__Steering_Motor_Control_D_UL__Entry = NTtable_Tune->GetEntry("Steering_Motor_Control_D_UL");
    NTinst.AddListener(P__Steering_Motor_Control_D_UL__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Steering_Motor_Control_D_UL = event.GetValueEventData()->value.GetDouble();});
    P__Steering_Motor_Control_D_UL__Entry.SetDouble(0.2);
 
    P__Steering_Motor_Control_I__Entry = NTtable_Tune->GetEntry("Steering_Motor_Control_I");
    NTinst.AddListener(P__Steering_Motor_Control_I__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Steering_Motor_Control_I = event.GetValueEventData()->value.GetDouble();});
    P__Steering_Motor_Control_I__Entry.SetDouble(0.005);
 
    P__Steering_Motor_Control_I_LL__Entry = NTtable_Tune->GetEntry("Steering_Motor_Control_I_LL");
    NTinst.AddListener(P__Steering_Motor_Control_I_LL__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Steering_Motor_Control_I_LL = event.GetValueEventData()->value.GetDouble();});
    P__Steering_Motor_Control_I_LL__Entry.SetDouble(-0.005);
 
    P__Steering_Motor_Control_I_UL__Entry = NTtable_Tune->GetEntry("Steering_Motor_Control_I_UL");
    NTinst.AddListener(P__Steering_Motor_Control_I_UL__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Steering_Motor_Control_I_UL = event.GetValueEventData()->value.GetDouble();});
    P__Steering_Motor_Control_I_UL__Entry.SetDouble(0.005);
 
    P__Steering_Motor_Control_P__Entry = NTtable_Tune->GetEntry("Steering_Motor_Control_P");
    NTinst.AddListener(P__Steering_Motor_Control_P__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Steering_Motor_Control_P = event.GetValueEventData()->value.GetDouble();});
    P__Steering_Motor_Control_P__Entry.SetDouble(0.15);
 
    P__Steering_Relative_Cmd_Approach_Zero_Error_Thresh__Entry = NTtable_Tune->GetEntry("Steering_Relative_Cmd_Approach_Zero_Error_Thresh");
    NTinst.AddListener(P__Steering_Relative_Cmd_Approach_Zero_Error_Thresh__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Steering_Relative_Cmd_Approach_Zero_Error_Thresh = event.GetValueEventData()->value.GetDouble();});
    P__Steering_Relative_Cmd_Approach_Zero_Error_Thresh__Entry.SetDouble(0.2);
 
    P__Steering_Relative_Cmd_Approach_Zero_Final_Thresh__Entry = NTtable_Tune->GetEntry("Steering_Relative_Cmd_Approach_Zero_Final_Thresh");
    NTinst.AddListener(P__Steering_Relative_Cmd_Approach_Zero_Final_Thresh__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Steering_Relative_Cmd_Approach_Zero_Final_Thresh = event.GetValueEventData()->value.GetDouble();});
    P__Steering_Relative_Cmd_Approach_Zero_Final_Thresh__Entry.SetDouble(0.01);
 
    P__Steering_Relative_Cmd_NonZero_Error_Thresh__Entry = NTtable_Tune->GetEntry("Steering_Relative_Cmd_NonZero_Error_Thresh");
    NTinst.AddListener(P__Steering_Relative_Cmd_NonZero_Error_Thresh__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Steering_Relative_Cmd_NonZero_Error_Thresh = event.GetValueEventData()->value.GetDouble();});
    P__Steering_Relative_Cmd_NonZero_Error_Thresh__Entry.SetDouble(0.2);
 
    P__Steering_Relative_Cmd_NonZero_Final_Scale_Factor__Entry = NTtable_Tune->GetEntry("Steering_Relative_Cmd_NonZero_Final_Scale_Factor");
    NTinst.AddListener(P__Steering_Relative_Cmd_NonZero_Final_Scale_Factor__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Steering_Relative_Cmd_NonZero_Final_Scale_Factor = event.GetValueEventData()->value.GetDouble();});
    P__Steering_Relative_Cmd_NonZero_Final_Scale_Factor__Entry.SetDouble(1);
 
    P__Steering_Relative_Cmd_Rate_Limit_Dec__Entry = NTtable_Tune->GetEntry("Steering_Relative_Cmd_Rate_Limit_Dec");
    NTinst.AddListener(P__Steering_Relative_Cmd_Rate_Limit_Dec__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Steering_Relative_Cmd_Rate_Limit_Dec = event.GetValueEventData()->value.GetDouble();});
    P__Steering_Relative_Cmd_Rate_Limit_Dec__Entry.SetDouble(-10);
 
    P__Steering_Relative_Cmd_Rate_Limit_Inc__Entry = NTtable_Tune->GetEntry("Steering_Relative_Cmd_Rate_Limit_Inc");
    NTinst.AddListener(P__Steering_Relative_Cmd_Rate_Limit_Inc__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Steering_Relative_Cmd_Rate_Limit_Inc = event.GetValueEventData()->value.GetDouble();});
    P__Steering_Relative_Cmd_Rate_Limit_Inc__Entry.SetDouble(10);
 
    P__Steering_Relative_Gain__Entry = NTtable_Tune->GetEntry("Steering_Relative_Gain");
    NTinst.AddListener(P__Steering_Relative_Gain__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Steering_Relative_Gain = event.GetValueEventData()->value.GetDouble();});
    P__Steering_Relative_Gain__Entry.SetDouble(5);
 
    P__Steering_Twist_Gain__Entry = NTtable_Tune->GetEntry("Steering_Twist_Gain");
    NTinst.AddListener(P__Steering_Twist_Gain__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Steering_Twist_Gain = event.GetValueEventData()->value.GetDouble();});
    P__Steering_Twist_Gain__Entry.SetDouble(-0.5);
 
    P__TEST_CANdle_Flag__Entry = NTtable_Tune->GetEntry("TEST_CANdle_Flag");
    NTinst.AddListener(P__TEST_CANdle_Flag__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {TEST_CANdle_Flag = event.GetValueEventData()->value.GetDouble();});
    P__TEST_CANdle_Flag__Entry.SetDouble(0);
 
    P__TEST_CANdle_LED_ID__Entry = NTtable_Tune->GetEntry("TEST_CANdle_LED_ID");
    NTinst.AddListener(P__TEST_CANdle_LED_ID__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {TEST_CANdle_LED_ID = event.GetValueEventData()->value.GetDouble();});
    P__TEST_CANdle_LED_ID__Entry.SetDouble(0);
 
    P__TEST_Pipeline__Entry = NTtable_Tune->GetEntry("TEST_Pipeline");
    NTinst.AddListener(P__TEST_Pipeline__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {TEST_Pipeline = event.GetValueEventData()->value.GetDouble();});
    P__TEST_Pipeline__Entry.SetDouble(0);
 
    P__TEST_Swerve_Mode_Override_Flag__Entry = NTtable_Tune->GetEntry("TEST_Swerve_Mode_Override_Flag");
    NTinst.AddListener(P__TEST_Swerve_Mode_Override_Flag__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {TEST_Swerve_Mode_Override_Flag = event.GetValueEventData()->value.GetDouble();});
    P__TEST_Swerve_Mode_Override_Flag__Entry.SetDouble(0);
 
    P__TEST_Swerve_Mode_Steering__Entry = NTtable_Tune->GetEntry("TEST_Swerve_Mode_Steering");
    NTinst.AddListener(P__TEST_Swerve_Mode_Steering__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {TEST_Swerve_Mode_Steering = event.GetValueEventData()->value.GetDouble();});
    P__TEST_Swerve_Mode_Steering__Entry.SetDouble(0);
 
    P__TEST_Swerve_Mode_Translation__Entry = NTtable_Tune->GetEntry("TEST_Swerve_Mode_Translation");
    NTinst.AddListener(P__TEST_Swerve_Mode_Translation__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {TEST_Swerve_Mode_Translation = event.GetValueEventData()->value.GetDouble();});
    P__TEST_Swerve_Mode_Translation__Entry.SetDouble(0);
 
    P__Translation_Speed_Approach_Zero_Error_Thresh__Entry = NTtable_Tune->GetEntry("Translation_Speed_Approach_Zero_Error_Thresh");
    NTinst.AddListener(P__Translation_Speed_Approach_Zero_Error_Thresh__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Translation_Speed_Approach_Zero_Error_Thresh = event.GetValueEventData()->value.GetDouble();});
    P__Translation_Speed_Approach_Zero_Error_Thresh__Entry.SetDouble(0.2);
 
    P__Translation_Speed_Approach_Zero_Final_Thresh__Entry = NTtable_Tune->GetEntry("Translation_Speed_Approach_Zero_Final_Thresh");
    NTinst.AddListener(P__Translation_Speed_Approach_Zero_Final_Thresh__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Translation_Speed_Approach_Zero_Final_Thresh = event.GetValueEventData()->value.GetDouble();});
    P__Translation_Speed_Approach_Zero_Final_Thresh__Entry.SetDouble(0.01);
 
    P__Translation_Speed_NonZero_Error_Thresh__Entry = NTtable_Tune->GetEntry("Translation_Speed_NonZero_Error_Thresh");
    NTinst.AddListener(P__Translation_Speed_NonZero_Error_Thresh__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Translation_Speed_NonZero_Error_Thresh = event.GetValueEventData()->value.GetDouble();});
    P__Translation_Speed_NonZero_Error_Thresh__Entry.SetDouble(0.15);
 
    P__Translation_Speed_NonZero_Final_Scale_Factor__Entry = NTtable_Tune->GetEntry("Translation_Speed_NonZero_Final_Scale_Factor");
    NTinst.AddListener(P__Translation_Speed_NonZero_Final_Scale_Factor__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Translation_Speed_NonZero_Final_Scale_Factor = event.GetValueEventData()->value.GetDouble();});
    P__Translation_Speed_NonZero_Final_Scale_Factor__Entry.SetDouble(0.05);
 
    P__Translation_Speed_Rate_Limit_Dec__Entry = NTtable_Tune->GetEntry("Translation_Speed_Rate_Limit_Dec");
    NTinst.AddListener(P__Translation_Speed_Rate_Limit_Dec__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Translation_Speed_Rate_Limit_Dec = event.GetValueEventData()->value.GetDouble();});
    P__Translation_Speed_Rate_Limit_Dec__Entry.SetDouble(-4);
 
    P__Translation_Speed_Rate_Limit_Inc__Entry = NTtable_Tune->GetEntry("Translation_Speed_Rate_Limit_Inc");
    NTinst.AddListener(P__Translation_Speed_Rate_Limit_Inc__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Translation_Speed_Rate_Limit_Inc = event.GetValueEventData()->value.GetDouble();});
    P__Translation_Speed_Rate_Limit_Inc__Entry.SetDouble(4);
 
    P__Translation_Twist_Gain__Entry = NTtable_Tune->GetEntry("Translation_Twist_Gain");
    NTinst.AddListener(P__Translation_Twist_Gain__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Translation_Twist_Gain = event.GetValueEventData()->value.GetDouble();});
    P__Translation_Twist_Gain__Entry.SetDouble(-0.5);
 
    P__Twist_Deadzone_neg__Entry = NTtable_Tune->GetEntry("Twist_Deadzone_neg");
    NTinst.AddListener(P__Twist_Deadzone_neg__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Twist_Deadzone_neg = event.GetValueEventData()->value.GetDouble();});
    P__Twist_Deadzone_neg__Entry.SetDouble(-0.01);
 
    P__Twist_Deadzone_pos__Entry = NTtable_Tune->GetEntry("Twist_Deadzone_pos");
    NTinst.AddListener(P__Twist_Deadzone_pos__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Twist_Deadzone_pos = event.GetValueEventData()->value.GetDouble();});
    P__Twist_Deadzone_pos__Entry.SetDouble(0.01);
 
    P__Winch_Hold_DC__Entry = NTtable_Tune->GetEntry("Winch_Hold_DC");
    NTinst.AddListener(P__Winch_Hold_DC__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Winch_Hold_DC = event.GetValueEventData()->value.GetDouble();});
    P__Winch_Hold_DC__Entry.SetDouble(0.05);
 
    P__Winch_Rev_Target__Entry = NTtable_Tune->GetEntry("Winch_Rev_Target");
    NTinst.AddListener(P__Winch_Rev_Target__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Winch_Rev_Target = event.GetValueEventData()->value.GetDouble();});
    P__Winch_Rev_Target__Entry.SetDouble(30);
 
    P__Winch_Spool_DC__Entry = NTtable_Tune->GetEntry("Winch_Spool_DC");
    NTinst.AddListener(P__Winch_Spool_DC__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Winch_Spool_DC = event.GetValueEventData()->value.GetDouble();});
    P__Winch_Spool_DC__Entry.SetDouble(1);
 
// Inports
    I__Actuator_Revs__Entry = NTtable_Inport->GetEntry("Actuator_Revs");
    I__Algae_Limit_Switch__Entry = NTtable_Inport->GetEntry("Algae_Limit_Switch");
    I__Auto_Start_Position__Entry = NTtable_Inport->GetEntry("Auto_Start_Position");
    I__BL_Steer_Module_Angle__Entry = NTtable_Inport->GetEntry("BL_Steer_Module_Angle");
    I__BR_Steer_Module_Angle__Entry = NTtable_Inport->GetEntry("BR_Steer_Module_Angle");
    I__BackLeft_Drive_Motor_Speed__Entry = NTtable_Inport->GetEntry("BackLeft_Drive_Motor_Speed");
    I__BackRight_Drive_Motor_Speed__Entry = NTtable_Inport->GetEntry("BackRight_Drive_Motor_Speed");
    I__Coral_Arm_Angle_Measured_Raw__Entry = NTtable_Inport->GetEntry("Coral_Arm_Angle_Measured_Raw");
    I__Coral_Limit_Switch__Entry = NTtable_Inport->GetEntry("Coral_Limit_Switch");
    I__Coral_TOF_Distance__Entry = NTtable_Inport->GetEntry("Coral_TOF_Distance");
    I__Elevator_Limit_Switch_Bottom__Entry = NTtable_Inport->GetEntry("Elevator_Limit_Switch_Bottom");
    I__Elevator_Limit_Switch_Top__Entry = NTtable_Inport->GetEntry("Elevator_Limit_Switch_Top");
    I__Elevator_Motor_Rev__Entry = NTtable_Inport->GetEntry("Elevator_Motor_Rev");
    I__FL_Steer_Module_Angle__Entry = NTtable_Inport->GetEntry("FL_Steer_Module_Angle");
    I__FR_Steer_Module_Angle__Entry = NTtable_Inport->GetEntry("FR_Steer_Module_Angle");
    I__FrontLeft_Drive_Motor_Speed__Entry = NTtable_Inport->GetEntry("FrontLeft_Drive_Motor_Speed");
    I__FrontRight_Drive_Motor_Speed__Entry = NTtable_Inport->GetEntry("FrontRight_Drive_Motor_Speed");
    I__GameState__Entry = NTtable_Inport->GetEntry("GameState");
    I__Gamepad_B1_A__Entry = NTtable_Inport->GetEntry("Gamepad_B1_A");
    I__Gamepad_B2_B__Entry = NTtable_Inport->GetEntry("Gamepad_B2_B");
    I__Gamepad_B3_X__Entry = NTtable_Inport->GetEntry("Gamepad_B3_X");
    I__Gamepad_B4_Y__Entry = NTtable_Inport->GetEntry("Gamepad_B4_Y");
    I__Gamepad_Back__Entry = NTtable_Inport->GetEntry("Gamepad_Back");
    I__Gamepad_LB__Entry = NTtable_Inport->GetEntry("Gamepad_LB");
    I__Gamepad_LT__Entry = NTtable_Inport->GetEntry("Gamepad_LT");
    I__Gamepad_POV__Entry = NTtable_Inport->GetEntry("Gamepad_POV");
    I__Gamepad_RB__Entry = NTtable_Inport->GetEntry("Gamepad_RB");
    I__Gamepad_RT__Entry = NTtable_Inport->GetEntry("Gamepad_RT");
    I__Gamepad_Start__Entry = NTtable_Inport->GetEntry("Gamepad_Start");
    I__Gamepad_Stick_Left_X__Entry = NTtable_Inport->GetEntry("Gamepad_Stick_Left_X");
    I__Gamepad_Stick_Left_Y__Entry = NTtable_Inport->GetEntry("Gamepad_Stick_Left_Y");
    I__Gamepad_Stick_Right_X__Entry = NTtable_Inport->GetEntry("Gamepad_Stick_Right_X");
    I__Gamepad_Stick_Right_Y__Entry = NTtable_Inport->GetEntry("Gamepad_Stick_Right_Y");
    I__Gyro_Angle_Field_rad__Entry = NTtable_Inport->GetEntry("Gyro_Angle_Field_rad");
    I__Gyro_Angle_rad__Entry = NTtable_Inport->GetEntry("Gyro_Angle_rad");
    I__IsBlueAlliance__Entry = NTtable_Inport->GetEntry("IsBlueAlliance");
    I__Joystick_Left_B1__Entry = NTtable_Inport->GetEntry("Joystick_Left_B1");
    I__Joystick_Left_B10__Entry = NTtable_Inport->GetEntry("Joystick_Left_B10");
    I__Joystick_Left_B11__Entry = NTtable_Inport->GetEntry("Joystick_Left_B11");
    I__Joystick_Left_B12__Entry = NTtable_Inport->GetEntry("Joystick_Left_B12");
    I__Joystick_Left_B13__Entry = NTtable_Inport->GetEntry("Joystick_Left_B13");
    I__Joystick_Left_B14__Entry = NTtable_Inport->GetEntry("Joystick_Left_B14");
    I__Joystick_Left_B15__Entry = NTtable_Inport->GetEntry("Joystick_Left_B15");
    I__Joystick_Left_B16__Entry = NTtable_Inport->GetEntry("Joystick_Left_B16");
    I__Joystick_Left_B2__Entry = NTtable_Inport->GetEntry("Joystick_Left_B2");
    I__Joystick_Left_B3__Entry = NTtable_Inport->GetEntry("Joystick_Left_B3");
    I__Joystick_Left_B4__Entry = NTtable_Inport->GetEntry("Joystick_Left_B4");
    I__Joystick_Left_B5__Entry = NTtable_Inport->GetEntry("Joystick_Left_B5");
    I__Joystick_Left_B6__Entry = NTtable_Inport->GetEntry("Joystick_Left_B6");
    I__Joystick_Left_B7__Entry = NTtable_Inport->GetEntry("Joystick_Left_B7");
    I__Joystick_Left_B8__Entry = NTtable_Inport->GetEntry("Joystick_Left_B8");
    I__Joystick_Left_B9__Entry = NTtable_Inport->GetEntry("Joystick_Left_B9");
    I__Joystick_Left_POV__Entry = NTtable_Inport->GetEntry("Joystick_Left_POV");
    I__Joystick_Left_X__Entry = NTtable_Inport->GetEntry("Joystick_Left_X");
    I__Joystick_Left_Y__Entry = NTtable_Inport->GetEntry("Joystick_Left_Y");
    I__Joystick_Left_Z__Entry = NTtable_Inport->GetEntry("Joystick_Left_Z");
    I__Joystick_Right_B1__Entry = NTtable_Inport->GetEntry("Joystick_Right_B1");
    I__Joystick_Right_B10__Entry = NTtable_Inport->GetEntry("Joystick_Right_B10");
    I__Joystick_Right_B11__Entry = NTtable_Inport->GetEntry("Joystick_Right_B11");
    I__Joystick_Right_B12__Entry = NTtable_Inport->GetEntry("Joystick_Right_B12");
    I__Joystick_Right_B13__Entry = NTtable_Inport->GetEntry("Joystick_Right_B13");
    I__Joystick_Right_B14__Entry = NTtable_Inport->GetEntry("Joystick_Right_B14");
    I__Joystick_Right_B15__Entry = NTtable_Inport->GetEntry("Joystick_Right_B15");
    I__Joystick_Right_B16__Entry = NTtable_Inport->GetEntry("Joystick_Right_B16");
    I__Joystick_Right_B2__Entry = NTtable_Inport->GetEntry("Joystick_Right_B2");
    I__Joystick_Right_B3__Entry = NTtable_Inport->GetEntry("Joystick_Right_B3");
    I__Joystick_Right_B4__Entry = NTtable_Inport->GetEntry("Joystick_Right_B4");
    I__Joystick_Right_B5__Entry = NTtable_Inport->GetEntry("Joystick_Right_B5");
    I__Joystick_Right_B6__Entry = NTtable_Inport->GetEntry("Joystick_Right_B6");
    I__Joystick_Right_B7__Entry = NTtable_Inport->GetEntry("Joystick_Right_B7");
    I__Joystick_Right_B8__Entry = NTtable_Inport->GetEntry("Joystick_Right_B8");
    I__Joystick_Right_B9__Entry = NTtable_Inport->GetEntry("Joystick_Right_B9");
    I__Joystick_Right_POV__Entry = NTtable_Inport->GetEntry("Joystick_Right_POV");
    I__Joystick_Right_X__Entry = NTtable_Inport->GetEntry("Joystick_Right_X");
    I__Joystick_Right_Y__Entry = NTtable_Inport->GetEntry("Joystick_Right_Y");
    I__Joystick_Right_Z__Entry = NTtable_Inport->GetEntry("Joystick_Right_Z");
    I__Limelight_Est_Pose_X__Entry = NTtable_Inport->GetEntry("Limelight_Est_Pose_X");
    I__Limelight_Est_Pose_Y__Entry = NTtable_Inport->GetEntry("Limelight_Est_Pose_Y");
    I__Limelight_Tag_Angle__Entry = NTtable_Inport->GetEntry("Limelight_Tag_Angle");
    I__Limelight_Tag_X__Entry = NTtable_Inport->GetEntry("Limelight_Tag_X");
    I__Limelight_Tag_Y__Entry = NTtable_Inport->GetEntry("Limelight_Tag_Y");
    I__MatchTime__Entry = NTtable_Inport->GetEntry("MatchTime");
    I__Num_Tags_Detected__Entry = NTtable_Inport->GetEntry("Num_Tags_Detected");
    I__Odom_Delta_X__Entry = NTtable_Inport->GetEntry("Odom_Delta_X");
    I__Odom_Delta_Y__Entry = NTtable_Inport->GetEntry("Odom_Delta_Y");
    I__Odom_Position_X__Entry = NTtable_Inport->GetEntry("Odom_Position_X");
    I__Odom_Position_Y__Entry = NTtable_Inport->GetEntry("Odom_Position_Y");
    I__Winch_Revs__Entry = NTtable_Inport->GetEntry("Winch_Revs");
 
// Outports
    O__Actuator_DutyCycle__Entry = NTtable_Outport->GetEntry("Actuator_DutyCycle");
    O__Algae_Wheel_Inside_DutyCycle__Entry = NTtable_Outport->GetEntry("Algae_Wheel_Inside_DutyCycle");
    O__Algae_Wheel_Outside_DutyCycle__Entry = NTtable_Outport->GetEntry("Algae_Wheel_Outside_DutyCycle");
    O__BackLeft_Drive_DutyCycle__Entry = NTtable_Outport->GetEntry("BackLeft_Drive_DutyCycle");
    O__BackLeft_Steer_DutyCycle__Entry = NTtable_Outport->GetEntry("BackLeft_Steer_DutyCycle");
    O__BackRight_Drive_DutyCycle__Entry = NTtable_Outport->GetEntry("BackRight_Drive_DutyCycle");
    O__BackRight_Steer_DutyCycle__Entry = NTtable_Outport->GetEntry("BackRight_Steer_DutyCycle");
    O__CANdle_LED_ID__Entry = NTtable_Outport->GetEntry("CANdle_LED_ID");
    O__Coral_Arm_DutyCycle__Entry = NTtable_Outport->GetEntry("Coral_Arm_DutyCycle");
    O__Coral_Wheel_DutyCycle__Entry = NTtable_Outport->GetEntry("Coral_Wheel_DutyCycle");
    O__Desired_Pipeline__Entry = NTtable_Outport->GetEntry("Desired_Pipeline");
    O__Disable_Wheels__Entry = NTtable_Outport->GetEntry("Disable_Wheels");
    O__Elevator_DutyCycle__Entry = NTtable_Outport->GetEntry("Elevator_DutyCycle");
    O__Enable_Wheels__Entry = NTtable_Outport->GetEntry("Enable_Wheels");
    O__FrontLeft_Drive_DutyCycle__Entry = NTtable_Outport->GetEntry("FrontLeft_Drive_DutyCycle");
    O__FrontLeft_Steer_DutyCycle__Entry = NTtable_Outport->GetEntry("FrontLeft_Steer_DutyCycle");
    O__FrontRight_Drive_DutyCycle__Entry = NTtable_Outport->GetEntry("FrontRight_Drive_DutyCycle");
    O__FrontRight_Steer_DutyCycle__Entry = NTtable_Outport->GetEntry("FrontRight_Steer_DutyCycle");
    O__Reset_Wheel_Offsets__Entry = NTtable_Outport->GetEntry("Reset_Wheel_Offsets");
    O__Swerve_Motors_Disabled__Entry = NTtable_Outport->GetEntry("Swerve_Motors_Disabled");
    O__Winch_DutyCycle__Entry = NTtable_Outport->GetEntry("Winch_DutyCycle");
 
// Test Points
    T__AT_Relative_Error_Angle__Entry = NTtable_TPoint->GetEntry("AT_Relative_Error_Angle");
    T__AT_Relative_Error_Enable__Entry = NTtable_TPoint->GetEntry("AT_Relative_Error_Enable");
    T__AT_Relative_Error_Error_X__Entry = NTtable_TPoint->GetEntry("AT_Relative_Error_Error_X");
    T__AT_Relative_Error_Error_Y__Entry = NTtable_TPoint->GetEntry("AT_Relative_Error_Error_Y");
    T__Active_GameState__Entry = NTtable_TPoint->GetEntry("Active_GameState");
    T__Actuator_Cmd__Entry = NTtable_TPoint->GetEntry("Actuator_Cmd");
    T__Align_Center__Entry = NTtable_TPoint->GetEntry("Align_Center");
    T__Align_Center_a__Entry = NTtable_TPoint->GetEntry("Align_Center_a");
    T__Align_Left__Entry = NTtable_TPoint->GetEntry("Align_Left");
    T__Align_Left_d__Entry = NTtable_TPoint->GetEntry("Align_Left_d");
    T__Align_Right__Entry = NTtable_TPoint->GetEntry("Align_Right");
    T__Auto_AT_On_Target__Entry = NTtable_TPoint->GetEntry("Auto_AT_On_Target");
    T__Auto_AT_Relative_Enable__Entry = NTtable_TPoint->GetEntry("Auto_AT_Relative_Enable");
    T__Auto_AT_Relative_Error_Angle__Entry = NTtable_TPoint->GetEntry("Auto_AT_Relative_Error_Angle");
    T__Auto_AT_Relative_Error_X__Entry = NTtable_TPoint->GetEntry("Auto_AT_Relative_Error_X");
    T__Auto_AT_Relative_Error_Y__Entry = NTtable_TPoint->GetEntry("Auto_AT_Relative_Error_Y");
    T__Auto_Step_ID__Entry = NTtable_TPoint->GetEntry("Auto_Step_ID");
    T__BL_Desired_Module_Angle__Entry = NTtable_TPoint->GetEntry("BL_Desired_Module_Angle");
    T__BL_Desired_Wheel_Speed__Entry = NTtable_TPoint->GetEntry("BL_Desired_Wheel_Speed");
    T__BL_Desired_Wheel_Speed_in__Entry = NTtable_TPoint->GetEntry("BL_Desired_Wheel_Speed_in");
    T__BR_Desired_Module_Angle__Entry = NTtable_TPoint->GetEntry("BR_Desired_Module_Angle");
    T__BR_Desired_Wheel_Speed__Entry = NTtable_TPoint->GetEntry("BR_Desired_Wheel_Speed");
    T__BR_Desired_Wheel_Speed_in__Entry = NTtable_TPoint->GetEntry("BR_Desired_Wheel_Speed_in");
    T__Button_Disable_Wheels__Entry = NTtable_TPoint->GetEntry("Button_Disable_Wheels");
    T__Button_Enable_Wheels__Entry = NTtable_TPoint->GetEntry("Button_Enable_Wheels");
    T__Button_Reset_Wheel_Offsets__Entry = NTtable_TPoint->GetEntry("Button_Reset_Wheel_Offsets");
    T__Coral_ArmAngle_Error__Entry = NTtable_TPoint->GetEntry("Coral_ArmAngle_Error");
    T__Coral_Arm_Angle_Desired__Entry = NTtable_TPoint->GetEntry("Coral_Arm_Angle_Desired");
    T__Coral_Arm_Angle_Desired_f__Entry = NTtable_TPoint->GetEntry("Coral_Arm_Angle_Desired_f");
    T__Coral_Arm_Angle_Desired_merge__Entry = NTtable_TPoint->GetEntry("Coral_Arm_Angle_Desired_merge");
    T__Coral_Arm_Angle_Measured__Entry = NTtable_TPoint->GetEntry("Coral_Arm_Angle_Measured");
    T__Coral_Pickup_Lower_Wait_State__Entry = NTtable_TPoint->GetEntry("Coral_Pickup_Lower_Wait_State");
    T__Coral_Pickup_Lower_Wait_State_m__Entry = NTtable_TPoint->GetEntry("Coral_Pickup_Lower_Wait_State_m");
    T__Coral_Score_j__Entry = NTtable_TPoint->GetEntry("Coral_Score_j");
    T__Coral_Wheel_DC__Entry = NTtable_TPoint->GetEntry("Coral_Wheel_DC");
    T__Coral_Wheel_DC_a__Entry = NTtable_TPoint->GetEntry("Coral_Wheel_DC_a");
    T__Desired_Pipeline__Entry = NTtable_TPoint->GetEntry("Desired_Pipeline");
    T__Drive_Engage_Hook__Entry = NTtable_TPoint->GetEntry("Drive_Engage_Hook");
    T__Drive_Joystick_X__Entry = NTtable_TPoint->GetEntry("Drive_Joystick_X");
    T__Drive_Joystick_Y__Entry = NTtable_TPoint->GetEntry("Drive_Joystick_Y");
    T__Drive_Joystick_Z__Entry = NTtable_TPoint->GetEntry("Drive_Joystick_Z");
    T__Drive_Joystick_Z_Mode__Entry = NTtable_TPoint->GetEntry("Drive_Joystick_Z_Mode");
    T__Elevator_Error__Entry = NTtable_TPoint->GetEntry("Elevator_Error");
    T__Elevator_Height_Desired__Entry = NTtable_TPoint->GetEntry("Elevator_Height_Desired");
    T__Elevator_Height_Desired_h__Entry = NTtable_TPoint->GetEntry("Elevator_Height_Desired_h");
    T__Elevator_Height_Desired_merge__Entry = NTtable_TPoint->GetEntry("Elevator_Height_Desired_merge");
    T__Elevator_Height_Measured__Entry = NTtable_TPoint->GetEntry("Elevator_Height_Measured");
    T__Elevator_Height_Measured_Raw__Entry = NTtable_TPoint->GetEntry("Elevator_Height_Measured_Raw");
    T__Elevator_Height_Offset__Entry = NTtable_TPoint->GetEntry("Elevator_Height_Offset");
    T__Elevator_Integral__Entry = NTtable_TPoint->GetEntry("Elevator_Integral");
    T__Elevator_Integral_o__Entry = NTtable_TPoint->GetEntry("Elevator_Integral_o");
    T__Elevator_LowerPickup_Reset__Entry = NTtable_TPoint->GetEntry("Elevator_LowerPickup_Reset");
    T__Elevator_LowerPickup_Reset_g__Entry = NTtable_TPoint->GetEntry("Elevator_LowerPickup_Reset_g");
    T__Elevator_LowerPickup_Reset_merg__Entry = NTtable_TPoint->GetEntry("Elevator_LowerPickup_Reset_merg");
    T__Elevator_Proportional__Entry = NTtable_TPoint->GetEntry("Elevator_Proportional");
    T__Elevator_Proportional_l__Entry = NTtable_TPoint->GetEntry("Elevator_Proportional_l");
    T__FL_Desired_Module_Angle__Entry = NTtable_TPoint->GetEntry("FL_Desired_Module_Angle");
    T__FL_Desired_Wheel_Speed__Entry = NTtable_TPoint->GetEntry("FL_Desired_Wheel_Speed");
    T__FL_Desired_Wheel_Speed_in__Entry = NTtable_TPoint->GetEntry("FL_Desired_Wheel_Speed_in");
    T__FR_Desired_Module_Angle__Entry = NTtable_TPoint->GetEntry("FR_Desired_Module_Angle");
    T__FR_Desired_Wheel_Speed__Entry = NTtable_TPoint->GetEntry("FR_Desired_Wheel_Speed");
    T__FR_Desired_Wheel_Speed_in__Entry = NTtable_TPoint->GetEntry("FR_Desired_Wheel_Speed_in");
    T__Face_Away_Driver__Entry = NTtable_TPoint->GetEntry("Face_Away_Driver");
    T__Face_Left_Driver__Entry = NTtable_TPoint->GetEntry("Face_Left_Driver");
    T__Face_Right_Driver__Entry = NTtable_TPoint->GetEntry("Face_Right_Driver");
    T__Face_Toward_Driver__Entry = NTtable_TPoint->GetEntry("Face_Toward_Driver");
    T__Gamepad_B1_A_out__Entry = NTtable_TPoint->GetEntry("Gamepad_B1_A_out");
    T__Gamepad_B3_X_out__Entry = NTtable_TPoint->GetEntry("Gamepad_B3_X_out");
    T__Gamepad_B4_Y_out__Entry = NTtable_TPoint->GetEntry("Gamepad_B4_Y_out");
    T__Gamepad_Back_out__Entry = NTtable_TPoint->GetEntry("Gamepad_Back_out");
    T__Gamepad_POV_Down__Entry = NTtable_TPoint->GetEntry("Gamepad_POV_Down");
    T__Gamepad_POV_Down_k__Entry = NTtable_TPoint->GetEntry("Gamepad_POV_Down_k");
    T__Gamepad_POV_Left__Entry = NTtable_TPoint->GetEntry("Gamepad_POV_Left");
    T__Gamepad_POV_Left_p__Entry = NTtable_TPoint->GetEntry("Gamepad_POV_Left_p");
    T__Gamepad_POV_Right__Entry = NTtable_TPoint->GetEntry("Gamepad_POV_Right");
    T__Gamepad_POV_Up__Entry = NTtable_TPoint->GetEntry("Gamepad_POV_Up");
    T__Gamepad_RT_out__Entry = NTtable_TPoint->GetEntry("Gamepad_RT_out");
    T__Gamepad_Start_out__Entry = NTtable_TPoint->GetEntry("Gamepad_Start_out");
    T__Gyro_Angle_SPF__Entry = NTtable_TPoint->GetEntry("Gyro_Angle_SPF");
    T__Is_Absolute_Steering_SPF__Entry = NTtable_TPoint->GetEntry("Is_Absolute_Steering_SPF");
    T__Is_Absolute_Translation_SPF__Entry = NTtable_TPoint->GetEntry("Is_Absolute_Translation_SPF");
    T__Is_Boosting__Entry = NTtable_TPoint->GetEntry("Is_Boosting");
    T__KF_Position_X__Entry = NTtable_TPoint->GetEntry("KF_Position_X");
    T__KF_Position_Y__Entry = NTtable_TPoint->GetEntry("KF_Position_Y");
    T__Limelight_Tag_Corrected_Angle__Entry = NTtable_TPoint->GetEntry("Limelight_Tag_Corrected_Angle");
    T__Limelight_Tag_Corrected_X__Entry = NTtable_TPoint->GetEntry("Limelight_Tag_Corrected_X");
    T__Limelight_Tag_Corrected_Y__Entry = NTtable_TPoint->GetEntry("Limelight_Tag_Corrected_Y");
    T__Out__Entry = NTtable_TPoint->GetEntry("Out");
    T__Out_h__Entry = NTtable_TPoint->GetEntry("Out_h");
    T__Path_Enable__Entry = NTtable_TPoint->GetEntry("Path_Enable");
    T__Path_ID__Entry = NTtable_TPoint->GetEntry("Path_ID");
    T__Reefscape_Motors_Enable_merge__Entry = NTtable_TPoint->GetEntry("Reefscape_Motors_Enable_merge");
    T__Robot_Reached_Destination_l__Entry = NTtable_TPoint->GetEntry("Robot_Reached_Destination_l");
    T__Set_Algae_Level__Entry = NTtable_TPoint->GetEntry("Set_Algae_Level");
    T__Set_Algae_Level_p__Entry = NTtable_TPoint->GetEntry("Set_Algae_Level_p");
    T__Set_Coral_Level__Entry = NTtable_TPoint->GetEntry("Set_Coral_Level");
    T__Set_Coral_Level_j__Entry = NTtable_TPoint->GetEntry("Set_Coral_Level_j");
    T__Spline_Enable__Entry = NTtable_TPoint->GetEntry("Spline_Enable");
    T__Spline_Follow_Index__Entry = NTtable_TPoint->GetEntry("Spline_Follow_Index");
    T__Spline_Num_Poses__Entry = NTtable_TPoint->GetEntry("Spline_Num_Poses");
    T__Spline_Out_Of_Bounds__Entry = NTtable_TPoint->GetEntry("Spline_Out_Of_Bounds");
    T__Spline_Target_X__Entry = NTtable_TPoint->GetEntry("Spline_Target_X");
    T__Spline_Target_Y__Entry = NTtable_TPoint->GetEntry("Spline_Target_Y");
    T__State_ID_Auto__Entry = NTtable_TPoint->GetEntry("State_ID_Auto");
    T__State_ID_Teleop__Entry = NTtable_TPoint->GetEntry("State_ID_Teleop");
    T__Steer_Joystick_X__Entry = NTtable_TPoint->GetEntry("Steer_Joystick_X");
    T__Steer_Joystick_Y__Entry = NTtable_TPoint->GetEntry("Steer_Joystick_Y");
    T__Steer_Joystick_Z__Entry = NTtable_TPoint->GetEntry("Steer_Joystick_Z");
    T__Steering_Abs_Angle__Entry = NTtable_TPoint->GetEntry("Steering_Abs_Angle");
    T__Steering_Abs_Angle_Active__Entry = NTtable_TPoint->GetEntry("Steering_Abs_Angle_Active");
    T__Steering_Abs_Cmd__Entry = NTtable_TPoint->GetEntry("Steering_Abs_Cmd");
    T__Steering_Abs_Cmd_SPF__Entry = NTtable_TPoint->GetEntry("Steering_Abs_Cmd_SPF");
    T__Steering_Abs_Gyro__Entry = NTtable_TPoint->GetEntry("Steering_Abs_Gyro");
    T__Steering_Abs_Gyro_Latch__Entry = NTtable_TPoint->GetEntry("Steering_Abs_Gyro_Latch");
    T__Steering_Localized_Cmd__Entry = NTtable_TPoint->GetEntry("Steering_Localized_Cmd");
    T__Steering_Localized_PID__Entry = NTtable_TPoint->GetEntry("Steering_Localized_PID");
    T__Steering_Rel_Cmd__Entry = NTtable_TPoint->GetEntry("Steering_Rel_Cmd");
    T__Steering_Rel_Cmd_SPF__Entry = NTtable_TPoint->GetEntry("Steering_Rel_Cmd_SPF");
    T__Swerve_Drive_Integral_Enable__Entry = NTtable_TPoint->GetEntry("Swerve_Drive_Integral_Enable");
    T__Teleop_AT_On_Target__Entry = NTtable_TPoint->GetEntry("Teleop_AT_On_Target");
    T__Test_Mode__Entry = NTtable_TPoint->GetEntry("Test_Mode");
    T__Translation_Angle__Entry = NTtable_TPoint->GetEntry("Translation_Angle");
    T__Translation_Angle_SPF__Entry = NTtable_TPoint->GetEntry("Translation_Angle_SPF");
    T__Translation_Angle_l__Entry = NTtable_TPoint->GetEntry("Translation_Angle_l");
    T__Translation_Speed__Entry = NTtable_TPoint->GetEntry("Translation_Speed");
    T__Translation_Speed_RL__Entry = NTtable_TPoint->GetEntry("Translation_Speed_RL");
    T__Translation_Speed_SPF__Entry = NTtable_TPoint->GetEntry("Translation_Speed_SPF");
    T__Translation_Speed_g__Entry = NTtable_TPoint->GetEntry("Translation_Speed_g");
    T__Translation_Steering_Cmd__Entry = NTtable_TPoint->GetEntry("Translation_Steering_Cmd");
    T__UnitDelay2__Entry = NTtable_TPoint->GetEntry("UnitDelay2");
    T__WhileIterator__Entry = NTtable_TPoint->GetEntry("WhileIterator");
    T__Winch_Cmd__Entry = NTtable_TPoint->GetEntry("Winch_Cmd");
}
 
void SimulinkNetworkTables1::PreStepCallback() {}
 
void SimulinkNetworkTables1::PostStepCallback()
{
    // Tunable Parameters
    P__AT_Integral_Enable_Error_Angle__Entry.SetDouble(AT_Integral_Enable_Error_Angle);
    P__AT_Integral_Enable_Error_XY__Entry.SetDouble(AT_Integral_Enable_Error_XY);
    P__AT_Max_Error_Angle__Entry.SetDouble(AT_Max_Error_Angle);
    P__AT_Max_Error_XY__Entry.SetDouble(AT_Max_Error_XY);
    P__AT_On_Target_Time__Entry.SetDouble(AT_On_Target_Time);
    P__AT_Reef_Target_Algae_X__Entry.SetDouble(AT_Reef_Target_Algae_X);
    P__AT_Reef_Target_Algae_Y__Entry.SetDouble(AT_Reef_Target_Algae_Y);
    P__AT_Reef_Target_Center_Y__Entry.SetDouble(AT_Reef_Target_Center_Y);
    P__AT_Reef_Target_L1_X__Entry.SetDouble(AT_Reef_Target_L1_X);
    P__AT_Reef_Target_L2_L3_X__Entry.SetDouble(AT_Reef_Target_L2_L3_X);
    P__AT_Reef_Target_L4_X__Entry.SetDouble(AT_Reef_Target_L4_X);
    P__AT_Reef_Target_Left_Y__Entry.SetDouble(AT_Reef_Target_Left_Y);
    P__AT_Reef_Target_Right_Y__Entry.SetDouble(AT_Reef_Target_Right_Y);
    P__AT_Steering_Error_Angle_Gain_P__Entry.SetDouble(AT_Steering_Error_Angle_Gain_P);
    P__AT_Steering_Speed_Max__Entry.SetDouble(AT_Steering_Speed_Max);
    P__AT_Translation_Control_Gain_Field__Entry.SetDouble(AT_Translation_Control_Gain_Field);
    P__AT_Translation_Control_Gain_Relative__Entry.SetDouble(AT_Translation_Control_Gain_Relative);
    P__AT_Translation_Speed_Max_Field__Entry.SetDouble(AT_Translation_Speed_Max_Field);
    P__AT_Translation_Speed_Max_Relative__Entry.SetDouble(AT_Translation_Speed_Max_Relative);
    P__Actuator_DC__Entry.SetDouble(Actuator_DC);
    P__Actuator_Rev_Startup_Range__Entry.SetDouble(Actuator_Rev_Startup_Range);
    P__Actuator_Rev_Target__Entry.SetDouble(Actuator_Rev_Target);
    P__Algae_Eject_Time__Entry.SetDouble(Algae_Eject_Time);
    P__Algae_Hold_DC__Entry.SetDouble(Algae_Hold_DC);
    P__Algae_Pull_In_DC__Entry.SetDouble(Algae_Pull_In_DC);
    P__Algae_Push_Out_DC__Entry.SetDouble(Algae_Push_Out_DC);
    P__Auto_Algae_Height_Time__Entry.SetDouble(Auto_Algae_Height_Time);
    P__Auto_Backup_Time_Processor__Entry.SetDouble(Auto_Backup_Time_Processor);
    P__Auto_Backup_Time_Reef__Entry.SetDouble(Auto_Backup_Time_Reef);
    P__Auto_Path1_Delay_to_L2_Time__Entry.SetDouble(Auto_Path1_Delay_to_L2_Time);
    P__Auto_Path1_Delay_to_L4_Time__Entry.SetDouble(Auto_Path1_Delay_to_L4_Time);
    P__Auto_Path2_Delay_to_L4_Time__Entry.SetDouble(Auto_Path2_Delay_to_L4_Time);
    P__Auto_Speed_Algae__Entry.SetDouble(Auto_Speed_Algae);
    P__Auto_Speed_Coral__Entry.SetDouble(Auto_Speed_Coral);
    P__Auto_Speed_Processor__Entry.SetDouble(Auto_Speed_Processor);
    P__Auto_Speed_Reef__Entry.SetDouble(Auto_Speed_Reef);
    P__Boost_Trigger_Decreasing_Limit__Entry.SetDouble(Boost_Trigger_Decreasing_Limit);
    P__Boost_Trigger_High_Speed__Entry.SetDouble(Boost_Trigger_High_Speed);
    P__Boost_Trigger_Increasing_Limit__Entry.SetDouble(Boost_Trigger_Increasing_Limit);
    P__Boost_Trigger_Low_Speed__Entry.SetDouble(Boost_Trigger_Low_Speed);
    P__Coral_Arm_Angle_Coral_Score_Lower_Rate__Entry.SetDouble(Coral_Arm_Angle_Coral_Score_Lower_Rate);
    P__Coral_Arm_Angle_Error_Threshold__Entry.SetDouble(Coral_Arm_Angle_Error_Threshold);
    P__Coral_Arm_Angle_L1__Entry.SetDouble(Coral_Arm_Angle_L1);
    P__Coral_Arm_Angle_L2__Entry.SetDouble(Coral_Arm_Angle_L2);
    P__Coral_Arm_Angle_L3__Entry.SetDouble(Coral_Arm_Angle_L3);
    P__Coral_Arm_Angle_L4__Entry.SetDouble(Coral_Arm_Angle_L4);
    P__Coral_Arm_Angle_L4_Eject_Auto__Entry.SetDouble(Coral_Arm_Angle_L4_Eject_Auto);
    P__Coral_Arm_Angle_L4_Eject_Teleop__Entry.SetDouble(Coral_Arm_Angle_L4_Eject_Teleop);
    P__Coral_Arm_Angle_Neg_Threshold__Entry.SetDouble(Coral_Arm_Angle_Neg_Threshold);
    P__Coral_Arm_Angle_Pos_Threshold__Entry.SetDouble(Coral_Arm_Angle_Pos_Threshold);
    P__Coral_Arm_Angle_Start__Entry.SetDouble(Coral_Arm_Angle_Start);
    P__Coral_Arm_Angle_Start_Thresh__Entry.SetDouble(Coral_Arm_Angle_Start_Thresh);
    P__Coral_Arm_Angle_Up__Entry.SetDouble(Coral_Arm_Angle_Up);
    P__Coral_Arm_DC_Inc_RL__Entry.SetDouble(Coral_Arm_DC_Inc_RL);
    P__Coral_Arm_Gain_Int__Entry.SetDouble(Coral_Arm_Gain_Int);
    P__Coral_Arm_Gain_Prop__Entry.SetDouble(Coral_Arm_Gain_Prop);
    P__Coral_Arm_Int_IC__Entry.SetDouble(Coral_Arm_Int_IC);
    P__Coral_Arm_Int_LL__Entry.SetDouble(Coral_Arm_Int_LL);
    P__Coral_Arm_Int_UL__Entry.SetDouble(Coral_Arm_Int_UL);
    P__Coral_Arm_Manual_Gain__Entry.SetDouble(Coral_Arm_Manual_Gain);
    P__Coral_Arm_Neg90_DC__Entry.SetDouble(Coral_Arm_Neg90_DC);
    P__Coral_Arm_Pos90_DC__Entry.SetDouble(Coral_Arm_Pos90_DC);
    P__Coral_Detect_Distance__Entry.SetDouble(Coral_Detect_Distance);
    P__Coral_Eject_Time__Entry.SetDouble(Coral_Eject_Time);
    P__Coral_Motor_DC_Eject__Entry.SetDouble(Coral_Motor_DC_Eject);
    P__Coral_Motor_DC_Hold__Entry.SetDouble(Coral_Motor_DC_Hold);
    P__Coral_Motor_DC_Pickup__Entry.SetDouble(Coral_Motor_DC_Pickup);
    P__Drive_Engage_Hook_Angle__Entry.SetDouble(Drive_Engage_Hook_Angle);
    P__Drive_Engage_Hook_Speed__Entry.SetDouble(Drive_Engage_Hook_Speed);
    P__Drive_Motor_Control_D__Entry.SetDouble(Drive_Motor_Control_D);
    P__Drive_Motor_Control_D_FilterCoeff__Entry.SetDouble(Drive_Motor_Control_D_FilterCoeff);
    P__Drive_Motor_Control_D_LL__Entry.SetDouble(Drive_Motor_Control_D_LL);
    P__Drive_Motor_Control_D_UL__Entry.SetDouble(Drive_Motor_Control_D_UL);
    P__Drive_Motor_Control_FF__Entry.SetDouble(Drive_Motor_Control_FF);
    P__Drive_Motor_Control_I__Entry.SetDouble(Drive_Motor_Control_I);
    P__Drive_Motor_Control_I_LL__Entry.SetDouble(Drive_Motor_Control_I_LL);
    P__Drive_Motor_Control_I_UL__Entry.SetDouble(Drive_Motor_Control_I_UL);
    P__Drive_Motor_Control_P__Entry.SetDouble(Drive_Motor_Control_P);
    P__Drive_Motor_Control_Sign_Change_Deadband__Entry.SetDouble(Drive_Motor_Control_Sign_Change_Deadband);
    P__Elevator_Bottom_DC__Entry.SetDouble(Elevator_Bottom_DC);
    P__Elevator_DC_Inc_RL__Entry.SetDouble(Elevator_DC_Inc_RL);
    P__Elevator_Error_Bottom_Disable__Entry.SetDouble(Elevator_Error_Bottom_Disable);
    P__Elevator_Error_Increase__Entry.SetDouble(Elevator_Error_Increase);
    P__Elevator_Gain_Int__Entry.SetDouble(Elevator_Gain_Int);
    P__Elevator_Gain_Prop__Entry.SetDouble(Elevator_Gain_Prop);
    P__Elevator_Height_Algae_High__Entry.SetDouble(Elevator_Height_Algae_High);
    P__Elevator_Height_Algae_Low__Entry.SetDouble(Elevator_Height_Algae_Low);
    P__Elevator_Height_Algae_Score__Entry.SetDouble(Elevator_Height_Algae_Score);
    P__Elevator_Height_Bottom__Entry.SetDouble(Elevator_Height_Bottom);
    P__Elevator_Height_Bottom_Pre__Entry.SetDouble(Elevator_Height_Bottom_Pre);
    P__Elevator_Height_Coral_Arm_Low_Thresh__Entry.SetDouble(Elevator_Height_Coral_Arm_Low_Thresh);
    P__Elevator_Height_Coral_Score_Lower_Rate__Entry.SetDouble(Elevator_Height_Coral_Score_Lower_Rate);
    P__Elevator_Height_End_Game__Entry.SetDouble(Elevator_Height_End_Game);
    P__Elevator_Height_Error_Threshold__Entry.SetDouble(Elevator_Height_Error_Threshold);
    P__Elevator_Height_L1__Entry.SetDouble(Elevator_Height_L1);
    P__Elevator_Height_L2__Entry.SetDouble(Elevator_Height_L2);
    P__Elevator_Height_L2_Eject__Entry.SetDouble(Elevator_Height_L2_Eject);
    P__Elevator_Height_L3__Entry.SetDouble(Elevator_Height_L3);
    P__Elevator_Height_L3_Eject__Entry.SetDouble(Elevator_Height_L3_Eject);
    P__Elevator_Height_L4__Entry.SetDouble(Elevator_Height_L4);
    P__Elevator_Height_Lower__Entry.SetDouble(Elevator_Height_Lower);
    P__Elevator_Height_Manual_Gain__Entry.SetDouble(Elevator_Height_Manual_Gain);
    P__Elevator_Height_PickupLower_Reset__Entry.SetDouble(Elevator_Height_PickupLower_Reset);
    P__Elevator_Height_Prepare__Entry.SetDouble(Elevator_Height_Prepare);
    P__Elevator_Height_Raise__Entry.SetDouble(Elevator_Height_Raise);
    P__Elevator_Height_Top_Reset__Entry.SetDouble(Elevator_Height_Top_Reset);
    P__Elevator_Hold_at_Top_DC__Entry.SetDouble(Elevator_Hold_at_Top_DC);
    P__Elevator_Int_IC__Entry.SetDouble(Elevator_Int_IC);
    P__Elevator_Int_LL__Entry.SetDouble(Elevator_Int_LL);
    P__Elevator_Int_UL__Entry.SetDouble(Elevator_Int_UL);
    P__Elevator_Limit_Switch_Debounce_F2T__Entry.SetDouble(Elevator_Limit_Switch_Debounce_F2T);
    P__Elevator_Limit_Switch_Debounce_T2F__Entry.SetDouble(Elevator_Limit_Switch_Debounce_T2F);
    P__Elevator_LowerPickup_Time__Entry.SetDouble(Elevator_LowerPickup_Time);
    P__Elevator_MotorRev_to_Inch__Entry.SetDouble(Elevator_MotorRev_to_Inch);
    P__Elevator_Total_LL__Entry.SetDouble(Elevator_Total_LL);
    P__Elevator_Total_UL__Entry.SetDouble(Elevator_Total_UL);
    P__KF_Enable__Entry.SetDouble(KF_Enable);
    P__L4_Switch_Time__Entry.SetDouble(L4_Switch_Time);
    P__Limelight_Tag_Angle_Offset__Entry.SetDouble(Limelight_Tag_Angle_Offset);
    P__Limelight_Tag_X_Offset__Entry.SetDouble(Limelight_Tag_X_Offset);
    P__Limelight_Tag_Y_Offset__Entry.SetDouble(Limelight_Tag_Y_Offset);
    P__MatchTime_Skip_Coral_Pickup__Entry.SetDouble(MatchTime_Skip_Coral_Pickup);
    P__MatchTime_Skip_Second_L4__Entry.SetDouble(MatchTime_Skip_Second_L4);
    P__Spline_Last_Pose_Distance_to_Velocity_Gain__Entry.SetDouble(Spline_Last_Pose_Distance_to_Velocity_Gain);
    P__Spline_Max_Centripital_Acceleration__Entry.SetDouble(Spline_Max_Centripital_Acceleration);
    P__Spline_Pose_Num_Before_End_Reduce_Speed__Entry.SetDouble(Spline_Pose_Num_Before_End_Reduce_Speed);
    P__Spline_Stop_Radius__Entry.SetDouble(Spline_Stop_Radius);
    P__Spline_Velocity_Multiplier_TEST__Entry.SetDouble(Spline_Velocity_Multiplier_TEST);
    P__Steering_Absolute_Cmd_Approach_Zero_Error_Thresh__Entry.SetDouble(Steering_Absolute_Cmd_Approach_Zero_Error_Thresh);
    P__Steering_Absolute_Cmd_Approach_Zero_Final_Thresh__Entry.SetDouble(Steering_Absolute_Cmd_Approach_Zero_Final_Thresh);
    P__Steering_Absolute_Cmd_NonZero_Error_Thresh__Entry.SetDouble(Steering_Absolute_Cmd_NonZero_Error_Thresh);
    P__Steering_Absolute_Cmd_NonZero_Final_Scale_Factor__Entry.SetDouble(Steering_Absolute_Cmd_NonZero_Final_Scale_Factor);
    P__Steering_Absolute_Cmd_Rate_Limit_Dec__Entry.SetDouble(Steering_Absolute_Cmd_Rate_Limit_Dec);
    P__Steering_Absolute_Cmd_Rate_Limit_Inc__Entry.SetDouble(Steering_Absolute_Cmd_Rate_Limit_Inc);
    P__Steering_Heading_Control_D__Entry.SetDouble(Steering_Heading_Control_D);
    P__Steering_Heading_Control_D_FilterCoeff__Entry.SetDouble(Steering_Heading_Control_D_FilterCoeff);
    P__Steering_Heading_Control_D_LL__Entry.SetDouble(Steering_Heading_Control_D_LL);
    P__Steering_Heading_Control_D_UL__Entry.SetDouble(Steering_Heading_Control_D_UL);
    P__Steering_Heading_Control_Deadzone__Entry.SetDouble(Steering_Heading_Control_Deadzone);
    P__Steering_Heading_Control_I__Entry.SetDouble(Steering_Heading_Control_I);
    P__Steering_Heading_Control_I_LL__Entry.SetDouble(Steering_Heading_Control_I_LL);
    P__Steering_Heading_Control_I_UL__Entry.SetDouble(Steering_Heading_Control_I_UL);
    P__Steering_Heading_Control_P__Entry.SetDouble(Steering_Heading_Control_P);
    P__Steering_Heading_Control_Total_LL__Entry.SetDouble(Steering_Heading_Control_Total_LL);
    P__Steering_Heading_Control_Total_UL__Entry.SetDouble(Steering_Heading_Control_Total_UL);
    P__Steering_Motor_Control_D__Entry.SetDouble(Steering_Motor_Control_D);
    P__Steering_Motor_Control_D_FilterCoeff__Entry.SetDouble(Steering_Motor_Control_D_FilterCoeff);
    P__Steering_Motor_Control_D_LL__Entry.SetDouble(Steering_Motor_Control_D_LL);
    P__Steering_Motor_Control_D_UL__Entry.SetDouble(Steering_Motor_Control_D_UL);
    P__Steering_Motor_Control_I__Entry.SetDouble(Steering_Motor_Control_I);
    P__Steering_Motor_Control_I_LL__Entry.SetDouble(Steering_Motor_Control_I_LL);
    P__Steering_Motor_Control_I_UL__Entry.SetDouble(Steering_Motor_Control_I_UL);
    P__Steering_Motor_Control_P__Entry.SetDouble(Steering_Motor_Control_P);
    P__Steering_Relative_Cmd_Approach_Zero_Error_Thresh__Entry.SetDouble(Steering_Relative_Cmd_Approach_Zero_Error_Thresh);
    P__Steering_Relative_Cmd_Approach_Zero_Final_Thresh__Entry.SetDouble(Steering_Relative_Cmd_Approach_Zero_Final_Thresh);
    P__Steering_Relative_Cmd_NonZero_Error_Thresh__Entry.SetDouble(Steering_Relative_Cmd_NonZero_Error_Thresh);
    P__Steering_Relative_Cmd_NonZero_Final_Scale_Factor__Entry.SetDouble(Steering_Relative_Cmd_NonZero_Final_Scale_Factor);
    P__Steering_Relative_Cmd_Rate_Limit_Dec__Entry.SetDouble(Steering_Relative_Cmd_Rate_Limit_Dec);
    P__Steering_Relative_Cmd_Rate_Limit_Inc__Entry.SetDouble(Steering_Relative_Cmd_Rate_Limit_Inc);
    P__Steering_Relative_Gain__Entry.SetDouble(Steering_Relative_Gain);
    P__Steering_Twist_Gain__Entry.SetDouble(Steering_Twist_Gain);
    P__TEST_CANdle_Flag__Entry.SetDouble(TEST_CANdle_Flag);
    P__TEST_CANdle_LED_ID__Entry.SetDouble(TEST_CANdle_LED_ID);
    P__TEST_Pipeline__Entry.SetDouble(TEST_Pipeline);
    P__TEST_Swerve_Mode_Override_Flag__Entry.SetDouble(TEST_Swerve_Mode_Override_Flag);
    P__TEST_Swerve_Mode_Steering__Entry.SetDouble(TEST_Swerve_Mode_Steering);
    P__TEST_Swerve_Mode_Translation__Entry.SetDouble(TEST_Swerve_Mode_Translation);
    P__Translation_Speed_Approach_Zero_Error_Thresh__Entry.SetDouble(Translation_Speed_Approach_Zero_Error_Thresh);
    P__Translation_Speed_Approach_Zero_Final_Thresh__Entry.SetDouble(Translation_Speed_Approach_Zero_Final_Thresh);
    P__Translation_Speed_NonZero_Error_Thresh__Entry.SetDouble(Translation_Speed_NonZero_Error_Thresh);
    P__Translation_Speed_NonZero_Final_Scale_Factor__Entry.SetDouble(Translation_Speed_NonZero_Final_Scale_Factor);
    P__Translation_Speed_Rate_Limit_Dec__Entry.SetDouble(Translation_Speed_Rate_Limit_Dec);
    P__Translation_Speed_Rate_Limit_Inc__Entry.SetDouble(Translation_Speed_Rate_Limit_Inc);
    P__Translation_Twist_Gain__Entry.SetDouble(Translation_Twist_Gain);
    P__Twist_Deadzone_neg__Entry.SetDouble(Twist_Deadzone_neg);
    P__Twist_Deadzone_pos__Entry.SetDouble(Twist_Deadzone_pos);
    P__Winch_Hold_DC__Entry.SetDouble(Winch_Hold_DC);
    P__Winch_Rev_Target__Entry.SetDouble(Winch_Rev_Target);
    P__Winch_Spool_DC__Entry.SetDouble(Winch_Spool_DC);
    // Inports
    I__Actuator_Revs__Entry.SetDouble(Robot_Control_U.Actuator_Revs);
    I__Algae_Limit_Switch__Entry.SetDouble(Robot_Control_U.Algae_Limit_Switch);
    I__Auto_Start_Position__Entry.SetDouble(Robot_Control_U.Auto_Start_Position);
    I__BL_Steer_Module_Angle__Entry.SetDouble(Robot_Control_U.BL_Steer_Module_Angle);
    I__BR_Steer_Module_Angle__Entry.SetDouble(Robot_Control_U.BR_Steer_Module_Angle);
    I__BackLeft_Drive_Motor_Speed__Entry.SetDouble(Robot_Control_U.BackLeft_Drive_Motor_Speed);
    I__BackRight_Drive_Motor_Speed__Entry.SetDouble(Robot_Control_U.BackRight_Drive_Motor_Speed);
    I__Coral_Arm_Angle_Measured_Raw__Entry.SetDouble(Robot_Control_U.Coral_Arm_Angle_Measured_Raw);
    I__Coral_Limit_Switch__Entry.SetDouble(Robot_Control_U.Coral_Limit_Switch);
    I__Coral_TOF_Distance__Entry.SetDouble(Robot_Control_U.Coral_TOF_Distance);
    I__Elevator_Limit_Switch_Bottom__Entry.SetDouble(Robot_Control_U.Elevator_Limit_Switch_Bottom);
    I__Elevator_Limit_Switch_Top__Entry.SetDouble(Robot_Control_U.Elevator_Limit_Switch_Top);
    I__Elevator_Motor_Rev__Entry.SetDouble(Robot_Control_U.Elevator_Motor_Rev);
    I__FL_Steer_Module_Angle__Entry.SetDouble(Robot_Control_U.FL_Steer_Module_Angle);
    I__FR_Steer_Module_Angle__Entry.SetDouble(Robot_Control_U.FR_Steer_Module_Angle);
    I__FrontLeft_Drive_Motor_Speed__Entry.SetDouble(Robot_Control_U.FrontLeft_Drive_Motor_Speed);
    I__FrontRight_Drive_Motor_Speed__Entry.SetDouble(Robot_Control_U.FrontRight_Drive_Motor_Speed);
    I__GameState__Entry.SetDouble(Robot_Control_U.GameState);
    I__Gamepad_B1_A__Entry.SetDouble(Robot_Control_U.Gamepad_B1_A);
    I__Gamepad_B2_B__Entry.SetDouble(Robot_Control_U.Gamepad_B2_B);
    I__Gamepad_B3_X__Entry.SetDouble(Robot_Control_U.Gamepad_B3_X);
    I__Gamepad_B4_Y__Entry.SetDouble(Robot_Control_U.Gamepad_B4_Y);
    I__Gamepad_Back__Entry.SetDouble(Robot_Control_U.Gamepad_Back);
    I__Gamepad_LB__Entry.SetDouble(Robot_Control_U.Gamepad_LB);
    I__Gamepad_LT__Entry.SetDouble(Robot_Control_U.Gamepad_LT);
    I__Gamepad_POV__Entry.SetDouble(Robot_Control_U.Gamepad_POV);
    I__Gamepad_RB__Entry.SetDouble(Robot_Control_U.Gamepad_RB);
    I__Gamepad_RT__Entry.SetDouble(Robot_Control_U.Gamepad_RT);
    I__Gamepad_Start__Entry.SetDouble(Robot_Control_U.Gamepad_Start);
    I__Gamepad_Stick_Left_X__Entry.SetDouble(Robot_Control_U.Gamepad_Stick_Left_X);
    I__Gamepad_Stick_Left_Y__Entry.SetDouble(Robot_Control_U.Gamepad_Stick_Left_Y);
    I__Gamepad_Stick_Right_X__Entry.SetDouble(Robot_Control_U.Gamepad_Stick_Right_X);
    I__Gamepad_Stick_Right_Y__Entry.SetDouble(Robot_Control_U.Gamepad_Stick_Right_Y);
    I__Gyro_Angle_Field_rad__Entry.SetDouble(Robot_Control_U.Gyro_Angle_Field_rad);
    I__Gyro_Angle_rad__Entry.SetDouble(Robot_Control_U.Gyro_Angle_rad);
    I__IsBlueAlliance__Entry.SetDouble(Robot_Control_U.IsBlueAlliance);
    I__Joystick_Left_B1__Entry.SetDouble(Robot_Control_U.Joystick_Left_B1);
    I__Joystick_Left_B10__Entry.SetDouble(Robot_Control_U.Joystick_Left_B10);
    I__Joystick_Left_B11__Entry.SetDouble(Robot_Control_U.Joystick_Left_B11);
    I__Joystick_Left_B12__Entry.SetDouble(Robot_Control_U.Joystick_Left_B12);
    I__Joystick_Left_B13__Entry.SetDouble(Robot_Control_U.Joystick_Left_B13);
    I__Joystick_Left_B14__Entry.SetDouble(Robot_Control_U.Joystick_Left_B14);
    I__Joystick_Left_B15__Entry.SetDouble(Robot_Control_U.Joystick_Left_B15);
    I__Joystick_Left_B16__Entry.SetDouble(Robot_Control_U.Joystick_Left_B16);
    I__Joystick_Left_B2__Entry.SetDouble(Robot_Control_U.Joystick_Left_B2);
    I__Joystick_Left_B3__Entry.SetDouble(Robot_Control_U.Joystick_Left_B3);
    I__Joystick_Left_B4__Entry.SetDouble(Robot_Control_U.Joystick_Left_B4);
    I__Joystick_Left_B5__Entry.SetDouble(Robot_Control_U.Joystick_Left_B5);
    I__Joystick_Left_B6__Entry.SetDouble(Robot_Control_U.Joystick_Left_B6);
    I__Joystick_Left_B7__Entry.SetDouble(Robot_Control_U.Joystick_Left_B7);
    I__Joystick_Left_B8__Entry.SetDouble(Robot_Control_U.Joystick_Left_B8);
    I__Joystick_Left_B9__Entry.SetDouble(Robot_Control_U.Joystick_Left_B9);
    I__Joystick_Left_POV__Entry.SetDouble(Robot_Control_U.Joystick_Left_POV);
    I__Joystick_Left_X__Entry.SetDouble(Robot_Control_U.Joystick_Left_X);
    I__Joystick_Left_Y__Entry.SetDouble(Robot_Control_U.Joystick_Left_Y);
    I__Joystick_Left_Z__Entry.SetDouble(Robot_Control_U.Joystick_Left_Z);
    I__Joystick_Right_B1__Entry.SetDouble(Robot_Control_U.Joystick_Right_B1);
    I__Joystick_Right_B10__Entry.SetDouble(Robot_Control_U.Joystick_Right_B10);
    I__Joystick_Right_B11__Entry.SetDouble(Robot_Control_U.Joystick_Right_B11);
    I__Joystick_Right_B12__Entry.SetDouble(Robot_Control_U.Joystick_Right_B12);
    I__Joystick_Right_B13__Entry.SetDouble(Robot_Control_U.Joystick_Right_B13);
    I__Joystick_Right_B14__Entry.SetDouble(Robot_Control_U.Joystick_Right_B14);
    I__Joystick_Right_B15__Entry.SetDouble(Robot_Control_U.Joystick_Right_B15);
    I__Joystick_Right_B16__Entry.SetDouble(Robot_Control_U.Joystick_Right_B16);
    I__Joystick_Right_B2__Entry.SetDouble(Robot_Control_U.Joystick_Right_B2);
    I__Joystick_Right_B3__Entry.SetDouble(Robot_Control_U.Joystick_Right_B3);
    I__Joystick_Right_B4__Entry.SetDouble(Robot_Control_U.Joystick_Right_B4);
    I__Joystick_Right_B5__Entry.SetDouble(Robot_Control_U.Joystick_Right_B5);
    I__Joystick_Right_B6__Entry.SetDouble(Robot_Control_U.Joystick_Right_B6);
    I__Joystick_Right_B7__Entry.SetDouble(Robot_Control_U.Joystick_Right_B7);
    I__Joystick_Right_B8__Entry.SetDouble(Robot_Control_U.Joystick_Right_B8);
    I__Joystick_Right_B9__Entry.SetDouble(Robot_Control_U.Joystick_Right_B9);
    I__Joystick_Right_POV__Entry.SetDouble(Robot_Control_U.Joystick_Right_POV);
    I__Joystick_Right_X__Entry.SetDouble(Robot_Control_U.Joystick_Right_X);
    I__Joystick_Right_Y__Entry.SetDouble(Robot_Control_U.Joystick_Right_Y);
    I__Joystick_Right_Z__Entry.SetDouble(Robot_Control_U.Joystick_Right_Z);
    I__Limelight_Est_Pose_X__Entry.SetDouble(Robot_Control_U.Limelight_Est_Pose_X);
    I__Limelight_Est_Pose_Y__Entry.SetDouble(Robot_Control_U.Limelight_Est_Pose_Y);
    I__Limelight_Tag_Angle__Entry.SetDouble(Robot_Control_U.Limelight_Tag_Angle);
    I__Limelight_Tag_X__Entry.SetDouble(Robot_Control_U.Limelight_Tag_X);
    I__Limelight_Tag_Y__Entry.SetDouble(Robot_Control_U.Limelight_Tag_Y);
    I__MatchTime__Entry.SetDouble(Robot_Control_U.MatchTime);
    I__Num_Tags_Detected__Entry.SetDouble(Robot_Control_U.Num_Tags_Detected);
    I__Odom_Delta_X__Entry.SetDouble(Robot_Control_U.Odom_Delta_X);
    I__Odom_Delta_Y__Entry.SetDouble(Robot_Control_U.Odom_Delta_Y);
    I__Odom_Position_X__Entry.SetDouble(Robot_Control_U.Odom_Position_X);
    I__Odom_Position_Y__Entry.SetDouble(Robot_Control_U.Odom_Position_Y);
    I__Winch_Revs__Entry.SetDouble(Robot_Control_U.Winch_Revs);
    // Outports
    O__Actuator_DutyCycle__Entry.SetDouble(Robot_Control_Y.Actuator_DutyCycle);
    O__Algae_Wheel_Inside_DutyCycle__Entry.SetDouble(Robot_Control_Y.Algae_Wheel_Inside_DutyCycle);
    O__Algae_Wheel_Outside_DutyCycle__Entry.SetDouble(Robot_Control_Y.Algae_Wheel_Outside_DutyCycle);
    O__BackLeft_Drive_DutyCycle__Entry.SetDouble(Robot_Control_Y.BackLeft_Drive_DutyCycle);
    O__BackLeft_Steer_DutyCycle__Entry.SetDouble(Robot_Control_Y.BackLeft_Steer_DutyCycle);
    O__BackRight_Drive_DutyCycle__Entry.SetDouble(Robot_Control_Y.BackRight_Drive_DutyCycle);
    O__BackRight_Steer_DutyCycle__Entry.SetDouble(Robot_Control_Y.BackRight_Steer_DutyCycle);
    O__CANdle_LED_ID__Entry.SetDouble(Robot_Control_Y.CANdle_LED_ID);
    O__Coral_Arm_DutyCycle__Entry.SetDouble(Robot_Control_Y.Coral_Arm_DutyCycle);
    O__Coral_Wheel_DutyCycle__Entry.SetDouble(Robot_Control_Y.Coral_Wheel_DutyCycle);
    O__Desired_Pipeline__Entry.SetDouble(Robot_Control_Y.Desired_Pipeline);
    O__Disable_Wheels__Entry.SetDouble(Robot_Control_Y.Disable_Wheels);
    O__Elevator_DutyCycle__Entry.SetDouble(Robot_Control_Y.Elevator_DutyCycle);
    O__Enable_Wheels__Entry.SetDouble(Robot_Control_Y.Enable_Wheels);
    O__FrontLeft_Drive_DutyCycle__Entry.SetDouble(Robot_Control_Y.FrontLeft_Drive_DutyCycle);
    O__FrontLeft_Steer_DutyCycle__Entry.SetDouble(Robot_Control_Y.FrontLeft_Steer_DutyCycle);
    O__FrontRight_Drive_DutyCycle__Entry.SetDouble(Robot_Control_Y.FrontRight_Drive_DutyCycle);
    O__FrontRight_Steer_DutyCycle__Entry.SetDouble(Robot_Control_Y.FrontRight_Steer_DutyCycle);
    O__Reset_Wheel_Offsets__Entry.SetDouble(Robot_Control_Y.Reset_Wheel_Offsets);
    O__Swerve_Motors_Disabled__Entry.SetDouble(Robot_Control_Y.Swerve_Motors_Disabled);
    O__Winch_DutyCycle__Entry.SetDouble(Robot_Control_Y.Winch_DutyCycle);
    // Test Points
    T__AT_Relative_Error_Angle__Entry.SetDouble(Robot_Control_B.AT_Relative_Error_Angle);
    T__AT_Relative_Error_Enable__Entry.SetDouble(Robot_Control_B.AT_Relative_Error_Enable);
    T__AT_Relative_Error_Error_X__Entry.SetDouble(Robot_Control_B.AT_Relative_Error_Error_X);
    T__AT_Relative_Error_Error_Y__Entry.SetDouble(Robot_Control_B.AT_Relative_Error_Error_Y);
    T__Active_GameState__Entry.SetDouble(Robot_Control_B.Active_GameState);
    T__Actuator_Cmd__Entry.SetDouble(Robot_Control_B.Actuator_Cmd);
    T__Align_Center__Entry.SetDouble(Robot_Control_B.Align_Center);
    T__Align_Center_a__Entry.SetDouble(Robot_Control_B.Align_Center_a);
    T__Align_Left__Entry.SetDouble(Robot_Control_B.Align_Left);
    T__Align_Left_d__Entry.SetDouble(Robot_Control_B.Align_Left_d);
    T__Align_Right__Entry.SetDouble(Robot_Control_B.Align_Right);
    T__Auto_AT_On_Target__Entry.SetDouble(Robot_Control_B.Auto_AT_On_Target);
    T__Auto_AT_Relative_Enable__Entry.SetDouble(Robot_Control_B.Auto_AT_Relative_Enable);
    T__Auto_AT_Relative_Error_Angle__Entry.SetDouble(Robot_Control_B.Auto_AT_Relative_Error_Angle);
    T__Auto_AT_Relative_Error_X__Entry.SetDouble(Robot_Control_B.Auto_AT_Relative_Error_X);
    T__Auto_AT_Relative_Error_Y__Entry.SetDouble(Robot_Control_B.Auto_AT_Relative_Error_Y);
    T__Auto_Step_ID__Entry.SetDouble(Robot_Control_B.Auto_Step_ID);
    T__BL_Desired_Module_Angle__Entry.SetDouble(Robot_Control_B.BL_Desired_Module_Angle);
    T__BL_Desired_Wheel_Speed__Entry.SetDouble(Robot_Control_B.BL_Desired_Wheel_Speed);
    T__BL_Desired_Wheel_Speed_in__Entry.SetDouble(Robot_Control_B.BL_Desired_Wheel_Speed_in);
    T__BR_Desired_Module_Angle__Entry.SetDouble(Robot_Control_B.BR_Desired_Module_Angle);
    T__BR_Desired_Wheel_Speed__Entry.SetDouble(Robot_Control_B.BR_Desired_Wheel_Speed);
    T__BR_Desired_Wheel_Speed_in__Entry.SetDouble(Robot_Control_B.BR_Desired_Wheel_Speed_in);
    T__Button_Disable_Wheels__Entry.SetDouble(Robot_Control_B.Button_Disable_Wheels);
    T__Button_Enable_Wheels__Entry.SetDouble(Robot_Control_B.Button_Enable_Wheels);
    T__Button_Reset_Wheel_Offsets__Entry.SetDouble(Robot_Control_B.Button_Reset_Wheel_Offsets);
    T__Coral_ArmAngle_Error__Entry.SetDouble(Robot_Control_B.Coral_ArmAngle_Error);
    T__Coral_Arm_Angle_Desired__Entry.SetDouble(Robot_Control_B.Coral_Arm_Angle_Desired);
    T__Coral_Arm_Angle_Desired_f__Entry.SetDouble(Robot_Control_B.Coral_Arm_Angle_Desired_f);
    T__Coral_Arm_Angle_Desired_merge__Entry.SetDouble(Robot_Control_B.Coral_Arm_Angle_Desired_merge);
    T__Coral_Arm_Angle_Measured__Entry.SetDouble(Robot_Control_B.Coral_Arm_Angle_Measured);
    T__Coral_Pickup_Lower_Wait_State__Entry.SetDouble(Robot_Control_B.Coral_Pickup_Lower_Wait_State);
    T__Coral_Pickup_Lower_Wait_State_m__Entry.SetDouble(Robot_Control_B.Coral_Pickup_Lower_Wait_State_m);
    T__Coral_Score_j__Entry.SetDouble(Robot_Control_B.Coral_Score_j);
    T__Coral_Wheel_DC__Entry.SetDouble(Robot_Control_B.Coral_Wheel_DC);
    T__Coral_Wheel_DC_a__Entry.SetDouble(Robot_Control_B.Coral_Wheel_DC_a);
    T__Desired_Pipeline__Entry.SetDouble(Robot_Control_B.Desired_Pipeline);
    T__Drive_Engage_Hook__Entry.SetDouble(Robot_Control_B.Drive_Engage_Hook);
    T__Drive_Joystick_X__Entry.SetDouble(Robot_Control_B.Drive_Joystick_X);
    T__Drive_Joystick_Y__Entry.SetDouble(Robot_Control_B.Drive_Joystick_Y);
    T__Drive_Joystick_Z__Entry.SetDouble(Robot_Control_B.Drive_Joystick_Z);
    T__Drive_Joystick_Z_Mode__Entry.SetDouble(Robot_Control_B.Drive_Joystick_Z_Mode);
    T__Elevator_Error__Entry.SetDouble(Robot_Control_B.Elevator_Error);
    T__Elevator_Height_Desired__Entry.SetDouble(Robot_Control_B.Elevator_Height_Desired);
    T__Elevator_Height_Desired_h__Entry.SetDouble(Robot_Control_B.Elevator_Height_Desired_h);
    T__Elevator_Height_Desired_merge__Entry.SetDouble(Robot_Control_B.Elevator_Height_Desired_merge);
    T__Elevator_Height_Measured__Entry.SetDouble(Robot_Control_B.Elevator_Height_Measured);
    T__Elevator_Height_Measured_Raw__Entry.SetDouble(Robot_Control_B.Elevator_Height_Measured_Raw);
    T__Elevator_Height_Offset__Entry.SetDouble(Robot_Control_B.Elevator_Height_Offset);
    T__Elevator_Integral__Entry.SetDouble(Robot_Control_B.Elevator_Integral);
    T__Elevator_Integral_o__Entry.SetDouble(Robot_Control_B.Elevator_Integral_o);
    T__Elevator_LowerPickup_Reset__Entry.SetDouble(Robot_Control_B.Elevator_LowerPickup_Reset);
    T__Elevator_LowerPickup_Reset_g__Entry.SetDouble(Robot_Control_B.Elevator_LowerPickup_Reset_g);
    T__Elevator_LowerPickup_Reset_merg__Entry.SetDouble(Robot_Control_B.Elevator_LowerPickup_Reset_merg);
    T__Elevator_Proportional__Entry.SetDouble(Robot_Control_B.Elevator_Proportional);
    T__Elevator_Proportional_l__Entry.SetDouble(Robot_Control_B.Elevator_Proportional_l);
    T__FL_Desired_Module_Angle__Entry.SetDouble(Robot_Control_B.FL_Desired_Module_Angle);
    T__FL_Desired_Wheel_Speed__Entry.SetDouble(Robot_Control_B.FL_Desired_Wheel_Speed);
    T__FL_Desired_Wheel_Speed_in__Entry.SetDouble(Robot_Control_B.FL_Desired_Wheel_Speed_in);
    T__FR_Desired_Module_Angle__Entry.SetDouble(Robot_Control_B.FR_Desired_Module_Angle);
    T__FR_Desired_Wheel_Speed__Entry.SetDouble(Robot_Control_B.FR_Desired_Wheel_Speed);
    T__FR_Desired_Wheel_Speed_in__Entry.SetDouble(Robot_Control_B.FR_Desired_Wheel_Speed_in);
    T__Face_Away_Driver__Entry.SetDouble(Robot_Control_B.Face_Away_Driver);
    T__Face_Left_Driver__Entry.SetDouble(Robot_Control_B.Face_Left_Driver);
    T__Face_Right_Driver__Entry.SetDouble(Robot_Control_B.Face_Right_Driver);
    T__Face_Toward_Driver__Entry.SetDouble(Robot_Control_B.Face_Toward_Driver);
    T__Gamepad_B1_A_out__Entry.SetDouble(Robot_Control_B.Gamepad_B1_A_out);
    T__Gamepad_B3_X_out__Entry.SetDouble(Robot_Control_B.Gamepad_B3_X_out);
    T__Gamepad_B4_Y_out__Entry.SetDouble(Robot_Control_B.Gamepad_B4_Y_out);
    T__Gamepad_Back_out__Entry.SetDouble(Robot_Control_B.Gamepad_Back_out);
    T__Gamepad_POV_Down__Entry.SetDouble(Robot_Control_B.Gamepad_POV_Down);
    T__Gamepad_POV_Down_k__Entry.SetDouble(Robot_Control_B.Gamepad_POV_Down_k);
    T__Gamepad_POV_Left__Entry.SetDouble(Robot_Control_B.Gamepad_POV_Left);
    T__Gamepad_POV_Left_p__Entry.SetDouble(Robot_Control_B.Gamepad_POV_Left_p);
    T__Gamepad_POV_Right__Entry.SetDouble(Robot_Control_B.Gamepad_POV_Right);
    T__Gamepad_POV_Up__Entry.SetDouble(Robot_Control_B.Gamepad_POV_Up);
    T__Gamepad_RT_out__Entry.SetDouble(Robot_Control_B.Gamepad_RT_out);
    T__Gamepad_Start_out__Entry.SetDouble(Robot_Control_B.Gamepad_Start_out);
    T__Gyro_Angle_SPF__Entry.SetDouble(Robot_Control_B.Gyro_Angle_SPF);
    T__Is_Absolute_Steering_SPF__Entry.SetDouble(Robot_Control_B.Is_Absolute_Steering_SPF);
    T__Is_Absolute_Translation_SPF__Entry.SetDouble(Robot_Control_B.Is_Absolute_Translation_SPF);
    T__Is_Boosting__Entry.SetDouble(Robot_Control_B.Is_Boosting);
    T__KF_Position_X__Entry.SetDouble(Robot_Control_B.KF_Position_X);
    T__KF_Position_Y__Entry.SetDouble(Robot_Control_B.KF_Position_Y);
    T__Limelight_Tag_Corrected_Angle__Entry.SetDouble(Robot_Control_B.Limelight_Tag_Corrected_Angle);
    T__Limelight_Tag_Corrected_X__Entry.SetDouble(Robot_Control_B.Limelight_Tag_Corrected_X);
    T__Limelight_Tag_Corrected_Y__Entry.SetDouble(Robot_Control_B.Limelight_Tag_Corrected_Y);
    T__Out__Entry.SetDouble(Robot_Control_B.Out);
    T__Out_h__Entry.SetDouble(Robot_Control_B.Out_h);
    T__Path_Enable__Entry.SetDouble(Robot_Control_B.Path_Enable);
    T__Path_ID__Entry.SetDouble(Robot_Control_B.Path_ID);
    T__Reefscape_Motors_Enable_merge__Entry.SetDouble(Robot_Control_B.Reefscape_Motors_Enable_merge);
    T__Robot_Reached_Destination_l__Entry.SetDouble(Robot_Control_B.Robot_Reached_Destination_l);
    T__Set_Algae_Level__Entry.SetDouble(Robot_Control_B.Set_Algae_Level);
    T__Set_Algae_Level_p__Entry.SetDouble(Robot_Control_B.Set_Algae_Level_p);
    T__Set_Coral_Level__Entry.SetDouble(Robot_Control_B.Set_Coral_Level);
    T__Set_Coral_Level_j__Entry.SetDouble(Robot_Control_B.Set_Coral_Level_j);
    T__Spline_Enable__Entry.SetDouble(Robot_Control_B.Spline_Enable);
    T__Spline_Follow_Index__Entry.SetDouble(Robot_Control_B.Spline_Follow_Index);
    T__Spline_Num_Poses__Entry.SetDouble(Robot_Control_B.Spline_Num_Poses);
    T__Spline_Out_Of_Bounds__Entry.SetDouble(Robot_Control_B.Spline_Out_Of_Bounds);
    T__Spline_Target_X__Entry.SetDouble(Robot_Control_B.Spline_Target_X);
    T__Spline_Target_Y__Entry.SetDouble(Robot_Control_B.Spline_Target_Y);
    T__State_ID_Auto__Entry.SetDouble(Robot_Control_B.State_ID_Auto);
    T__State_ID_Teleop__Entry.SetDouble(Robot_Control_B.State_ID_Teleop);
    T__Steer_Joystick_X__Entry.SetDouble(Robot_Control_B.Steer_Joystick_X);
    T__Steer_Joystick_Y__Entry.SetDouble(Robot_Control_B.Steer_Joystick_Y);
    T__Steer_Joystick_Z__Entry.SetDouble(Robot_Control_B.Steer_Joystick_Z);
    T__Steering_Abs_Angle__Entry.SetDouble(Robot_Control_B.Steering_Abs_Angle);
    T__Steering_Abs_Angle_Active__Entry.SetDouble(Robot_Control_B.Steering_Abs_Angle_Active);
    T__Steering_Abs_Cmd__Entry.SetDouble(Robot_Control_B.Steering_Abs_Cmd);
    T__Steering_Abs_Cmd_SPF__Entry.SetDouble(Robot_Control_B.Steering_Abs_Cmd_SPF);
    T__Steering_Abs_Gyro__Entry.SetDouble(Robot_Control_B.Steering_Abs_Gyro);
    T__Steering_Abs_Gyro_Latch__Entry.SetDouble(Robot_Control_B.Steering_Abs_Gyro_Latch);
    T__Steering_Localized_Cmd__Entry.SetDouble(Robot_Control_B.Steering_Localized_Cmd);
    T__Steering_Localized_PID__Entry.SetDouble(Robot_Control_B.Steering_Localized_PID);
    T__Steering_Rel_Cmd__Entry.SetDouble(Robot_Control_B.Steering_Rel_Cmd);
    T__Steering_Rel_Cmd_SPF__Entry.SetDouble(Robot_Control_B.Steering_Rel_Cmd_SPF);
    T__Swerve_Drive_Integral_Enable__Entry.SetDouble(Robot_Control_B.Swerve_Drive_Integral_Enable);
    T__Teleop_AT_On_Target__Entry.SetDouble(Robot_Control_B.Teleop_AT_On_Target);
    T__Test_Mode__Entry.SetDouble(Robot_Control_B.Test_Mode);
    T__Translation_Angle__Entry.SetDouble(Robot_Control_B.Translation_Angle);
    T__Translation_Angle_SPF__Entry.SetDouble(Robot_Control_B.Translation_Angle_SPF);
    T__Translation_Angle_l__Entry.SetDouble(Robot_Control_B.Translation_Angle_l);
    T__Translation_Speed__Entry.SetDouble(Robot_Control_B.Translation_Speed);
    T__Translation_Speed_RL__Entry.SetDouble(Robot_Control_B.Translation_Speed_RL);
    T__Translation_Speed_SPF__Entry.SetDouble(Robot_Control_B.Translation_Speed_SPF);
    T__Translation_Speed_g__Entry.SetDouble(Robot_Control_B.Translation_Speed_g);
    T__Translation_Steering_Cmd__Entry.SetDouble(Robot_Control_B.Translation_Steering_Cmd);
    T__UnitDelay2__Entry.SetDouble(Robot_Control_B.UnitDelay2);
    T__WhileIterator__Entry.SetDouble(Robot_Control_B.WhileIterator);
    T__Winch_Cmd__Entry.SetDouble(Robot_Control_B.Winch_Cmd);
}
// Why are you reading to the bottom of an autogen file?
// Get a life...
