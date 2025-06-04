// This file has been auto generated from a Matlab script
// Do not manually edit since changes will be lost
// Janelyn <3
#include "include/SimulinkSmartDashboardInterface.h"
 
SimulinkSmartDashboardInterface::SimulinkSmartDashboardInterface()
{
    nt::NetworkTableInstance NTinst = nt::NetworkTableInstance::GetDefault();
    auto NTtable_Tune = NTinst.GetTable("Simulink Tunable Params");
    auto NTtable_Inport = NTinst.GetTable("Simulink Top Level Ports");
    auto NTtable_Outport = NTinst.GetTable("Simulink Top Level Ports");
    auto NTtable_TPoint = NTinst.GetTable("Simulink Test Points");
 
    __AT_Integral_Enable_Error_Angle__Entry = NTtable_Tune->GetEntry("AT_Integral_Enable_Error_Angle");
    NTinst.AddListener(__AT_Integral_Enable_Error_Angle__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {AT_Integral_Enable_Error_Angle = event.GetValueEventData()->value.GetDouble();});
    __AT_Integral_Enable_Error_Angle__Entry.SetDouble(5);
 
    __AT_Integral_Enable_Error_XY__Entry = NTtable_Tune->GetEntry("AT_Integral_Enable_Error_XY");
    NTinst.AddListener(__AT_Integral_Enable_Error_XY__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {AT_Integral_Enable_Error_XY = event.GetValueEventData()->value.GetDouble();});
    __AT_Integral_Enable_Error_XY__Entry.SetDouble(2);
 
    __AT_Max_Error_Angle__Entry = NTtable_Tune->GetEntry("AT_Max_Error_Angle");
    NTinst.AddListener(__AT_Max_Error_Angle__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {AT_Max_Error_Angle = event.GetValueEventData()->value.GetDouble();});
    __AT_Max_Error_Angle__Entry.SetDouble(1);
 
    __AT_Max_Error_XY__Entry = NTtable_Tune->GetEntry("AT_Max_Error_XY");
    NTinst.AddListener(__AT_Max_Error_XY__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {AT_Max_Error_XY = event.GetValueEventData()->value.GetDouble();});
    __AT_Max_Error_XY__Entry.SetDouble(0.75);
 
    __AT_On_Target_Time__Entry = NTtable_Tune->GetEntry("AT_On_Target_Time");
    NTinst.AddListener(__AT_On_Target_Time__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {AT_On_Target_Time = event.GetValueEventData()->value.GetDouble();});
    __AT_On_Target_Time__Entry.SetDouble(0.25);
 
    __AT_Reef_Target_Algae_X__Entry = NTtable_Tune->GetEntry("AT_Reef_Target_Algae_X");
    NTinst.AddListener(__AT_Reef_Target_Algae_X__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {AT_Reef_Target_Algae_X = event.GetValueEventData()->value.GetDouble();});
    __AT_Reef_Target_Algae_X__Entry.SetDouble(18);
 
    __AT_Reef_Target_Algae_Y__Entry = NTtable_Tune->GetEntry("AT_Reef_Target_Algae_Y");
    NTinst.AddListener(__AT_Reef_Target_Algae_Y__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {AT_Reef_Target_Algae_Y = event.GetValueEventData()->value.GetDouble();});
    __AT_Reef_Target_Algae_Y__Entry.SetDouble(2.5);
 
    __AT_Reef_Target_Center_Y__Entry = NTtable_Tune->GetEntry("AT_Reef_Target_Center_Y");
    NTinst.AddListener(__AT_Reef_Target_Center_Y__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {AT_Reef_Target_Center_Y = event.GetValueEventData()->value.GetDouble();});
    __AT_Reef_Target_Center_Y__Entry.SetDouble(-4.5);
 
    __AT_Reef_Target_L1_X__Entry = NTtable_Tune->GetEntry("AT_Reef_Target_L1_X");
    NTinst.AddListener(__AT_Reef_Target_L1_X__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {AT_Reef_Target_L1_X = event.GetValueEventData()->value.GetDouble();});
    __AT_Reef_Target_L1_X__Entry.SetDouble(25.75);
 
    __AT_Reef_Target_L2_L3_X__Entry = NTtable_Tune->GetEntry("AT_Reef_Target_L2_L3_X");
    NTinst.AddListener(__AT_Reef_Target_L2_L3_X__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {AT_Reef_Target_L2_L3_X = event.GetValueEventData()->value.GetDouble();});
    __AT_Reef_Target_L2_L3_X__Entry.SetDouble(24.25);
 
    __AT_Reef_Target_L4_X__Entry = NTtable_Tune->GetEntry("AT_Reef_Target_L4_X");
    NTinst.AddListener(__AT_Reef_Target_L4_X__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {AT_Reef_Target_L4_X = event.GetValueEventData()->value.GetDouble();});
    __AT_Reef_Target_L4_X__Entry.SetDouble(26.75);
 
    __AT_Reef_Target_Left_Y__Entry = NTtable_Tune->GetEntry("AT_Reef_Target_Left_Y");
    NTinst.AddListener(__AT_Reef_Target_Left_Y__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {AT_Reef_Target_Left_Y = event.GetValueEventData()->value.GetDouble();});
    __AT_Reef_Target_Left_Y__Entry.SetDouble(3.5);
 
    __AT_Reef_Target_Right_Y__Entry = NTtable_Tune->GetEntry("AT_Reef_Target_Right_Y");
    NTinst.AddListener(__AT_Reef_Target_Right_Y__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {AT_Reef_Target_Right_Y = event.GetValueEventData()->value.GetDouble();});
    __AT_Reef_Target_Right_Y__Entry.SetDouble(-9.5);
 
    __AT_Steering_Error_Angle_Gain_P__Entry = NTtable_Tune->GetEntry("AT_Steering_Error_Angle_Gain_P");
    NTinst.AddListener(__AT_Steering_Error_Angle_Gain_P__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {AT_Steering_Error_Angle_Gain_P = event.GetValueEventData()->value.GetDouble();});
    __AT_Steering_Error_Angle_Gain_P__Entry.SetDouble(0.1);
 
    __AT_Steering_Speed_Max__Entry = NTtable_Tune->GetEntry("AT_Steering_Speed_Max");
    NTinst.AddListener(__AT_Steering_Speed_Max__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {AT_Steering_Speed_Max = event.GetValueEventData()->value.GetDouble();});
    __AT_Steering_Speed_Max__Entry.SetDouble(0.4);
 
    __AT_Translation_Control_Gain_Field__Entry = NTtable_Tune->GetEntry("AT_Translation_Control_Gain_Field");
    NTinst.AddListener(__AT_Translation_Control_Gain_Field__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {AT_Translation_Control_Gain_Field = event.GetValueEventData()->value.GetDouble();});
    __AT_Translation_Control_Gain_Field__Entry.SetDouble(10);
 
    __AT_Translation_Control_Gain_Relative__Entry = NTtable_Tune->GetEntry("AT_Translation_Control_Gain_Relative");
    NTinst.AddListener(__AT_Translation_Control_Gain_Relative__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {AT_Translation_Control_Gain_Relative = event.GetValueEventData()->value.GetDouble();});
    __AT_Translation_Control_Gain_Relative__Entry.SetDouble(0.07);
 
    __AT_Translation_Speed_Max_Field__Entry = NTtable_Tune->GetEntry("AT_Translation_Speed_Max_Field");
    NTinst.AddListener(__AT_Translation_Speed_Max_Field__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {AT_Translation_Speed_Max_Field = event.GetValueEventData()->value.GetDouble();});
    __AT_Translation_Speed_Max_Field__Entry.SetDouble(5);
 
    __AT_Translation_Speed_Max_Relative__Entry = NTtable_Tune->GetEntry("AT_Translation_Speed_Max_Relative");
    NTinst.AddListener(__AT_Translation_Speed_Max_Relative__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {AT_Translation_Speed_Max_Relative = event.GetValueEventData()->value.GetDouble();});
    __AT_Translation_Speed_Max_Relative__Entry.SetDouble(0.75);
 
    __Actuator_DC__Entry = NTtable_Tune->GetEntry("Actuator_DC");
    NTinst.AddListener(__Actuator_DC__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Actuator_DC = event.GetValueEventData()->value.GetDouble();});
    __Actuator_DC__Entry.SetDouble(0.5);
 
    __Actuator_Rev_Startup_Range__Entry = NTtable_Tune->GetEntry("Actuator_Rev_Startup_Range");
    NTinst.AddListener(__Actuator_Rev_Startup_Range__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Actuator_Rev_Startup_Range = event.GetValueEventData()->value.GetDouble();});
    __Actuator_Rev_Startup_Range__Entry.SetDouble(10);
 
    __Actuator_Rev_Target__Entry = NTtable_Tune->GetEntry("Actuator_Rev_Target");
    NTinst.AddListener(__Actuator_Rev_Target__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Actuator_Rev_Target = event.GetValueEventData()->value.GetDouble();});
    __Actuator_Rev_Target__Entry.SetDouble(80);
 
    __Algae_Eject_Time__Entry = NTtable_Tune->GetEntry("Algae_Eject_Time");
    NTinst.AddListener(__Algae_Eject_Time__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Algae_Eject_Time = event.GetValueEventData()->value.GetDouble();});
    __Algae_Eject_Time__Entry.SetDouble(1);
 
    __Algae_Hold_DC__Entry = NTtable_Tune->GetEntry("Algae_Hold_DC");
    NTinst.AddListener(__Algae_Hold_DC__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Algae_Hold_DC = event.GetValueEventData()->value.GetDouble();});
    __Algae_Hold_DC__Entry.SetDouble(0.005);
 
    __Algae_Pull_In_DC__Entry = NTtable_Tune->GetEntry("Algae_Pull_In_DC");
    NTinst.AddListener(__Algae_Pull_In_DC__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Algae_Pull_In_DC = event.GetValueEventData()->value.GetDouble();});
    __Algae_Pull_In_DC__Entry.SetDouble(1);
 
    __Algae_Push_Out_DC__Entry = NTtable_Tune->GetEntry("Algae_Push_Out_DC");
    NTinst.AddListener(__Algae_Push_Out_DC__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Algae_Push_Out_DC = event.GetValueEventData()->value.GetDouble();});
    __Algae_Push_Out_DC__Entry.SetDouble(-0.3);
 
    __Auto_Algae_Height_Time__Entry = NTtable_Tune->GetEntry("Auto_Algae_Height_Time");
    NTinst.AddListener(__Auto_Algae_Height_Time__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Auto_Algae_Height_Time = event.GetValueEventData()->value.GetDouble();});
    __Auto_Algae_Height_Time__Entry.SetDouble(0.5);
 
    __Auto_Backup_Time_Processor__Entry = NTtable_Tune->GetEntry("Auto_Backup_Time_Processor");
    NTinst.AddListener(__Auto_Backup_Time_Processor__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Auto_Backup_Time_Processor = event.GetValueEventData()->value.GetDouble();});
    __Auto_Backup_Time_Processor__Entry.SetDouble(1);
 
    __Auto_Backup_Time_Reef__Entry = NTtable_Tune->GetEntry("Auto_Backup_Time_Reef");
    NTinst.AddListener(__Auto_Backup_Time_Reef__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Auto_Backup_Time_Reef = event.GetValueEventData()->value.GetDouble();});
    __Auto_Backup_Time_Reef__Entry.SetDouble(0.25);
 
    __Auto_Path1_Delay_to_L2_Time__Entry = NTtable_Tune->GetEntry("Auto_Path1_Delay_to_L2_Time");
    NTinst.AddListener(__Auto_Path1_Delay_to_L2_Time__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Auto_Path1_Delay_to_L2_Time = event.GetValueEventData()->value.GetDouble();});
    __Auto_Path1_Delay_to_L2_Time__Entry.SetDouble(0.5);
 
    __Auto_Path1_Delay_to_L4_Time__Entry = NTtable_Tune->GetEntry("Auto_Path1_Delay_to_L4_Time");
    NTinst.AddListener(__Auto_Path1_Delay_to_L4_Time__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Auto_Path1_Delay_to_L4_Time = event.GetValueEventData()->value.GetDouble();});
    __Auto_Path1_Delay_to_L4_Time__Entry.SetDouble(0.25);
 
    __Auto_Path2_Delay_to_L4_Time__Entry = NTtable_Tune->GetEntry("Auto_Path2_Delay_to_L4_Time");
    NTinst.AddListener(__Auto_Path2_Delay_to_L4_Time__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Auto_Path2_Delay_to_L4_Time = event.GetValueEventData()->value.GetDouble();});
    __Auto_Path2_Delay_to_L4_Time__Entry.SetDouble(0);
 
    __Auto_Speed_Algae__Entry = NTtable_Tune->GetEntry("Auto_Speed_Algae");
    NTinst.AddListener(__Auto_Speed_Algae__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Auto_Speed_Algae = event.GetValueEventData()->value.GetDouble();});
    __Auto_Speed_Algae__Entry.SetDouble(0.5);
 
    __Auto_Speed_Coral__Entry = NTtable_Tune->GetEntry("Auto_Speed_Coral");
    NTinst.AddListener(__Auto_Speed_Coral__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Auto_Speed_Coral = event.GetValueEventData()->value.GetDouble();});
    __Auto_Speed_Coral__Entry.SetDouble(1);
 
    __Auto_Speed_Processor__Entry = NTtable_Tune->GetEntry("Auto_Speed_Processor");
    NTinst.AddListener(__Auto_Speed_Processor__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Auto_Speed_Processor = event.GetValueEventData()->value.GetDouble();});
    __Auto_Speed_Processor__Entry.SetDouble(0.5);
 
    __Auto_Speed_Reef__Entry = NTtable_Tune->GetEntry("Auto_Speed_Reef");
    NTinst.AddListener(__Auto_Speed_Reef__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Auto_Speed_Reef = event.GetValueEventData()->value.GetDouble();});
    __Auto_Speed_Reef__Entry.SetDouble(1);
 
    __Auto_Starting_Position__Entry = NTtable_Tune->GetEntry("Auto_Starting_Position");
    NTinst.AddListener(__Auto_Starting_Position__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Auto_Starting_Position = event.GetValueEventData()->value.GetDouble();});
    __Auto_Starting_Position__Entry.SetDouble(2);
 
    __Boost_Trigger_Decreasing_Limit__Entry = NTtable_Tune->GetEntry("Boost_Trigger_Decreasing_Limit");
    NTinst.AddListener(__Boost_Trigger_Decreasing_Limit__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Boost_Trigger_Decreasing_Limit = event.GetValueEventData()->value.GetDouble();});
    __Boost_Trigger_Decreasing_Limit__Entry.SetDouble(-0.28);
 
    __Boost_Trigger_High_Speed__Entry = NTtable_Tune->GetEntry("Boost_Trigger_High_Speed");
    NTinst.AddListener(__Boost_Trigger_High_Speed__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Boost_Trigger_High_Speed = event.GetValueEventData()->value.GetDouble();});
    __Boost_Trigger_High_Speed__Entry.SetDouble(5);
 
    __Boost_Trigger_Increasing_Limit__Entry = NTtable_Tune->GetEntry("Boost_Trigger_Increasing_Limit");
    NTinst.AddListener(__Boost_Trigger_Increasing_Limit__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Boost_Trigger_Increasing_Limit = event.GetValueEventData()->value.GetDouble();});
    __Boost_Trigger_Increasing_Limit__Entry.SetDouble(3.5);
 
    __Boost_Trigger_Low_Speed__Entry = NTtable_Tune->GetEntry("Boost_Trigger_Low_Speed");
    NTinst.AddListener(__Boost_Trigger_Low_Speed__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Boost_Trigger_Low_Speed = event.GetValueEventData()->value.GetDouble();});
    __Boost_Trigger_Low_Speed__Entry.SetDouble(1.5);
 
    __Coral_Arm_Angle_Coral_Score_Lower_Rate__Entry = NTtable_Tune->GetEntry("Coral_Arm_Angle_Coral_Score_Lower_Rate");
    NTinst.AddListener(__Coral_Arm_Angle_Coral_Score_Lower_Rate__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Coral_Arm_Angle_Coral_Score_Lower_Rate = event.GetValueEventData()->value.GetDouble();});
    __Coral_Arm_Angle_Coral_Score_Lower_Rate__Entry.SetDouble(-2);
 
    __Coral_Arm_Angle_Error_Threshold__Entry = NTtable_Tune->GetEntry("Coral_Arm_Angle_Error_Threshold");
    NTinst.AddListener(__Coral_Arm_Angle_Error_Threshold__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Coral_Arm_Angle_Error_Threshold = event.GetValueEventData()->value.GetDouble();});
    __Coral_Arm_Angle_Error_Threshold__Entry.SetDouble(3);
 
    __Coral_Arm_Angle_L1__Entry = NTtable_Tune->GetEntry("Coral_Arm_Angle_L1");
    NTinst.AddListener(__Coral_Arm_Angle_L1__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Coral_Arm_Angle_L1 = event.GetValueEventData()->value.GetDouble();});
    __Coral_Arm_Angle_L1__Entry.SetDouble(-15);
 
    __Coral_Arm_Angle_L2__Entry = NTtable_Tune->GetEntry("Coral_Arm_Angle_L2");
    NTinst.AddListener(__Coral_Arm_Angle_L2__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Coral_Arm_Angle_L2 = event.GetValueEventData()->value.GetDouble();});
    __Coral_Arm_Angle_L2__Entry.SetDouble(50);
 
    __Coral_Arm_Angle_L3__Entry = NTtable_Tune->GetEntry("Coral_Arm_Angle_L3");
    NTinst.AddListener(__Coral_Arm_Angle_L3__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Coral_Arm_Angle_L3 = event.GetValueEventData()->value.GetDouble();});
    __Coral_Arm_Angle_L3__Entry.SetDouble(50);
 
    __Coral_Arm_Angle_L4__Entry = NTtable_Tune->GetEntry("Coral_Arm_Angle_L4");
    NTinst.AddListener(__Coral_Arm_Angle_L4__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Coral_Arm_Angle_L4 = event.GetValueEventData()->value.GetDouble();});
    __Coral_Arm_Angle_L4__Entry.SetDouble(57);
 
    __Coral_Arm_Angle_L4_Eject_Auto__Entry = NTtable_Tune->GetEntry("Coral_Arm_Angle_L4_Eject_Auto");
    NTinst.AddListener(__Coral_Arm_Angle_L4_Eject_Auto__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Coral_Arm_Angle_L4_Eject_Auto = event.GetValueEventData()->value.GetDouble();});
    __Coral_Arm_Angle_L4_Eject_Auto__Entry.SetDouble(25);
 
    __Coral_Arm_Angle_L4_Eject_Teleop__Entry = NTtable_Tune->GetEntry("Coral_Arm_Angle_L4_Eject_Teleop");
    NTinst.AddListener(__Coral_Arm_Angle_L4_Eject_Teleop__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Coral_Arm_Angle_L4_Eject_Teleop = event.GetValueEventData()->value.GetDouble();});
    __Coral_Arm_Angle_L4_Eject_Teleop__Entry.SetDouble(40);
 
    __Coral_Arm_Angle_Neg_Threshold__Entry = NTtable_Tune->GetEntry("Coral_Arm_Angle_Neg_Threshold");
    NTinst.AddListener(__Coral_Arm_Angle_Neg_Threshold__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Coral_Arm_Angle_Neg_Threshold = event.GetValueEventData()->value.GetDouble();});
    __Coral_Arm_Angle_Neg_Threshold__Entry.SetDouble(-86);
 
    __Coral_Arm_Angle_Pos_Threshold__Entry = NTtable_Tune->GetEntry("Coral_Arm_Angle_Pos_Threshold");
    NTinst.AddListener(__Coral_Arm_Angle_Pos_Threshold__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Coral_Arm_Angle_Pos_Threshold = event.GetValueEventData()->value.GetDouble();});
    __Coral_Arm_Angle_Pos_Threshold__Entry.SetDouble(80);
 
    __Coral_Arm_Angle_Start__Entry = NTtable_Tune->GetEntry("Coral_Arm_Angle_Start");
    NTinst.AddListener(__Coral_Arm_Angle_Start__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Coral_Arm_Angle_Start = event.GetValueEventData()->value.GetDouble();});
    __Coral_Arm_Angle_Start__Entry.SetDouble(-15);
 
    __Coral_Arm_Angle_Start_Thresh__Entry = NTtable_Tune->GetEntry("Coral_Arm_Angle_Start_Thresh");
    NTinst.AddListener(__Coral_Arm_Angle_Start_Thresh__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Coral_Arm_Angle_Start_Thresh = event.GetValueEventData()->value.GetDouble();});
    __Coral_Arm_Angle_Start_Thresh__Entry.SetDouble(-75);
 
    __Coral_Arm_Angle_Up__Entry = NTtable_Tune->GetEntry("Coral_Arm_Angle_Up");
    NTinst.AddListener(__Coral_Arm_Angle_Up__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Coral_Arm_Angle_Up = event.GetValueEventData()->value.GetDouble();});
    __Coral_Arm_Angle_Up__Entry.SetDouble(85);
 
    __Coral_Arm_DC_Inc_RL__Entry = NTtable_Tune->GetEntry("Coral_Arm_DC_Inc_RL");
    NTinst.AddListener(__Coral_Arm_DC_Inc_RL__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Coral_Arm_DC_Inc_RL = event.GetValueEventData()->value.GetDouble();});
    __Coral_Arm_DC_Inc_RL__Entry.SetDouble(0.033333);
 
    __Coral_Arm_Gain_Int__Entry = NTtable_Tune->GetEntry("Coral_Arm_Gain_Int");
    NTinst.AddListener(__Coral_Arm_Gain_Int__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Coral_Arm_Gain_Int = event.GetValueEventData()->value.GetDouble();});
    __Coral_Arm_Gain_Int__Entry.SetDouble(0.0005);
 
    __Coral_Arm_Gain_Prop__Entry = NTtable_Tune->GetEntry("Coral_Arm_Gain_Prop");
    NTinst.AddListener(__Coral_Arm_Gain_Prop__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Coral_Arm_Gain_Prop = event.GetValueEventData()->value.GetDouble();});
    __Coral_Arm_Gain_Prop__Entry.SetDouble(0.005);
 
    __Coral_Arm_Int_IC__Entry = NTtable_Tune->GetEntry("Coral_Arm_Int_IC");
    NTinst.AddListener(__Coral_Arm_Int_IC__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Coral_Arm_Int_IC = event.GetValueEventData()->value.GetDouble();});
    __Coral_Arm_Int_IC__Entry.SetDouble(0);
 
    __Coral_Arm_Int_LL__Entry = NTtable_Tune->GetEntry("Coral_Arm_Int_LL");
    NTinst.AddListener(__Coral_Arm_Int_LL__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Coral_Arm_Int_LL = event.GetValueEventData()->value.GetDouble();});
    __Coral_Arm_Int_LL__Entry.SetDouble(-0.025);
 
    __Coral_Arm_Int_UL__Entry = NTtable_Tune->GetEntry("Coral_Arm_Int_UL");
    NTinst.AddListener(__Coral_Arm_Int_UL__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Coral_Arm_Int_UL = event.GetValueEventData()->value.GetDouble();});
    __Coral_Arm_Int_UL__Entry.SetDouble(0.025);
 
    __Coral_Arm_Manual_Gain__Entry = NTtable_Tune->GetEntry("Coral_Arm_Manual_Gain");
    NTinst.AddListener(__Coral_Arm_Manual_Gain__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Coral_Arm_Manual_Gain = event.GetValueEventData()->value.GetDouble();});
    __Coral_Arm_Manual_Gain__Entry.SetDouble(1);
 
    __Coral_Arm_Neg90_DC__Entry = NTtable_Tune->GetEntry("Coral_Arm_Neg90_DC");
    NTinst.AddListener(__Coral_Arm_Neg90_DC__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Coral_Arm_Neg90_DC = event.GetValueEventData()->value.GetDouble();});
    __Coral_Arm_Neg90_DC__Entry.SetDouble(-0.03);
 
    __Coral_Arm_Pos90_DC__Entry = NTtable_Tune->GetEntry("Coral_Arm_Pos90_DC");
    NTinst.AddListener(__Coral_Arm_Pos90_DC__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Coral_Arm_Pos90_DC = event.GetValueEventData()->value.GetDouble();});
    __Coral_Arm_Pos90_DC__Entry.SetDouble(0.03);
 
    __Coral_Detect_Distance__Entry = NTtable_Tune->GetEntry("Coral_Detect_Distance");
    NTinst.AddListener(__Coral_Detect_Distance__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Coral_Detect_Distance = event.GetValueEventData()->value.GetDouble();});
    __Coral_Detect_Distance__Entry.SetDouble(150);
 
    __Coral_Eject_Time__Entry = NTtable_Tune->GetEntry("Coral_Eject_Time");
    NTinst.AddListener(__Coral_Eject_Time__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Coral_Eject_Time = event.GetValueEventData()->value.GetDouble();});
    __Coral_Eject_Time__Entry.SetDouble(0.5);
 
    __Coral_Motor_DC_Eject__Entry = NTtable_Tune->GetEntry("Coral_Motor_DC_Eject");
    NTinst.AddListener(__Coral_Motor_DC_Eject__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Coral_Motor_DC_Eject = event.GetValueEventData()->value.GetDouble();});
    __Coral_Motor_DC_Eject__Entry.SetDouble(-0.4);
 
    __Coral_Motor_DC_Hold__Entry = NTtable_Tune->GetEntry("Coral_Motor_DC_Hold");
    NTinst.AddListener(__Coral_Motor_DC_Hold__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Coral_Motor_DC_Hold = event.GetValueEventData()->value.GetDouble();});
    __Coral_Motor_DC_Hold__Entry.SetDouble(0.01);
 
    __Coral_Motor_DC_Pickup__Entry = NTtable_Tune->GetEntry("Coral_Motor_DC_Pickup");
    NTinst.AddListener(__Coral_Motor_DC_Pickup__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Coral_Motor_DC_Pickup = event.GetValueEventData()->value.GetDouble();});
    __Coral_Motor_DC_Pickup__Entry.SetDouble(0.1);
 
    __Drive_Engage_Hook_Angle__Entry = NTtable_Tune->GetEntry("Drive_Engage_Hook_Angle");
    NTinst.AddListener(__Drive_Engage_Hook_Angle__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Drive_Engage_Hook_Angle = event.GetValueEventData()->value.GetDouble();});
    __Drive_Engage_Hook_Angle__Entry.SetDouble(3.1416);
 
    __Drive_Engage_Hook_Speed__Entry = NTtable_Tune->GetEntry("Drive_Engage_Hook_Speed");
    NTinst.AddListener(__Drive_Engage_Hook_Speed__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Drive_Engage_Hook_Speed = event.GetValueEventData()->value.GetDouble();});
    __Drive_Engage_Hook_Speed__Entry.SetDouble(0.3);
 
    __Drive_Motor_Control_D__Entry = NTtable_Tune->GetEntry("Drive_Motor_Control_D");
    NTinst.AddListener(__Drive_Motor_Control_D__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Drive_Motor_Control_D = event.GetValueEventData()->value.GetDouble();});
    __Drive_Motor_Control_D__Entry.SetDouble(0.0001);
 
    __Drive_Motor_Control_D_FilterCoeff__Entry = NTtable_Tune->GetEntry("Drive_Motor_Control_D_FilterCoeff");
    NTinst.AddListener(__Drive_Motor_Control_D_FilterCoeff__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Drive_Motor_Control_D_FilterCoeff = event.GetValueEventData()->value.GetDouble();});
    __Drive_Motor_Control_D_FilterCoeff__Entry.SetDouble(0.22223);
 
    __Drive_Motor_Control_D_LL__Entry = NTtable_Tune->GetEntry("Drive_Motor_Control_D_LL");
    NTinst.AddListener(__Drive_Motor_Control_D_LL__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Drive_Motor_Control_D_LL = event.GetValueEventData()->value.GetDouble();});
    __Drive_Motor_Control_D_LL__Entry.SetDouble(-0.2);
 
    __Drive_Motor_Control_D_UL__Entry = NTtable_Tune->GetEntry("Drive_Motor_Control_D_UL");
    NTinst.AddListener(__Drive_Motor_Control_D_UL__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Drive_Motor_Control_D_UL = event.GetValueEventData()->value.GetDouble();});
    __Drive_Motor_Control_D_UL__Entry.SetDouble(0.2);
 
    __Drive_Motor_Control_FF__Entry = NTtable_Tune->GetEntry("Drive_Motor_Control_FF");
    NTinst.AddListener(__Drive_Motor_Control_FF__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Drive_Motor_Control_FF = event.GetValueEventData()->value.GetDouble();});
    __Drive_Motor_Control_FF__Entry.SetDouble(0.00016129);
 
    __Drive_Motor_Control_I__Entry = NTtable_Tune->GetEntry("Drive_Motor_Control_I");
    NTinst.AddListener(__Drive_Motor_Control_I__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Drive_Motor_Control_I = event.GetValueEventData()->value.GetDouble();});
    __Drive_Motor_Control_I__Entry.SetDouble(1e-06);
 
    __Drive_Motor_Control_I_LL__Entry = NTtable_Tune->GetEntry("Drive_Motor_Control_I_LL");
    NTinst.AddListener(__Drive_Motor_Control_I_LL__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Drive_Motor_Control_I_LL = event.GetValueEventData()->value.GetDouble();});
    __Drive_Motor_Control_I_LL__Entry.SetDouble(-0.03);
 
    __Drive_Motor_Control_I_UL__Entry = NTtable_Tune->GetEntry("Drive_Motor_Control_I_UL");
    NTinst.AddListener(__Drive_Motor_Control_I_UL__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Drive_Motor_Control_I_UL = event.GetValueEventData()->value.GetDouble();});
    __Drive_Motor_Control_I_UL__Entry.SetDouble(0.03);
 
    __Drive_Motor_Control_P__Entry = NTtable_Tune->GetEntry("Drive_Motor_Control_P");
    NTinst.AddListener(__Drive_Motor_Control_P__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Drive_Motor_Control_P = event.GetValueEventData()->value.GetDouble();});
    __Drive_Motor_Control_P__Entry.SetDouble(5e-06);
 
    __Drive_Motor_Control_Sign_Change_Deadband__Entry = NTtable_Tune->GetEntry("Drive_Motor_Control_Sign_Change_Deadband");
    NTinst.AddListener(__Drive_Motor_Control_Sign_Change_Deadband__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Drive_Motor_Control_Sign_Change_Deadband = event.GetValueEventData()->value.GetDouble();});
    __Drive_Motor_Control_Sign_Change_Deadband__Entry.SetDouble(7000);
 
    __Elevator_Bottom_DC__Entry = NTtable_Tune->GetEntry("Elevator_Bottom_DC");
    NTinst.AddListener(__Elevator_Bottom_DC__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Elevator_Bottom_DC = event.GetValueEventData()->value.GetDouble();});
    __Elevator_Bottom_DC__Entry.SetDouble(-0.1);
 
    __Elevator_DC_Inc_RL__Entry = NTtable_Tune->GetEntry("Elevator_DC_Inc_RL");
    NTinst.AddListener(__Elevator_DC_Inc_RL__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Elevator_DC_Inc_RL = event.GetValueEventData()->value.GetDouble();});
    __Elevator_DC_Inc_RL__Entry.SetDouble(0.066667);
 
    __Elevator_Error_Bottom_Disable__Entry = NTtable_Tune->GetEntry("Elevator_Error_Bottom_Disable");
    NTinst.AddListener(__Elevator_Error_Bottom_Disable__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Elevator_Error_Bottom_Disable = event.GetValueEventData()->value.GetDouble();});
    __Elevator_Error_Bottom_Disable__Entry.SetDouble(1);
 
    __Elevator_Error_Increase__Entry = NTtable_Tune->GetEntry("Elevator_Error_Increase");
    NTinst.AddListener(__Elevator_Error_Increase__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Elevator_Error_Increase = event.GetValueEventData()->value.GetDouble();});
    __Elevator_Error_Increase__Entry.SetDouble(0);
 
    __Elevator_Gain_Int__Entry = NTtable_Tune->GetEntry("Elevator_Gain_Int");
    NTinst.AddListener(__Elevator_Gain_Int__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Elevator_Gain_Int = event.GetValueEventData()->value.GetDouble();});
    __Elevator_Gain_Int__Entry.SetDouble(0.02);
 
    __Elevator_Gain_Prop__Entry = NTtable_Tune->GetEntry("Elevator_Gain_Prop");
    NTinst.AddListener(__Elevator_Gain_Prop__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Elevator_Gain_Prop = event.GetValueEventData()->value.GetDouble();});
    __Elevator_Gain_Prop__Entry.SetDouble(0.3);
 
    __Elevator_Height_Algae_High__Entry = NTtable_Tune->GetEntry("Elevator_Height_Algae_High");
    NTinst.AddListener(__Elevator_Height_Algae_High__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Elevator_Height_Algae_High = event.GetValueEventData()->value.GetDouble();});
    __Elevator_Height_Algae_High__Entry.SetDouble(20.3);
 
    __Elevator_Height_Algae_Low__Entry = NTtable_Tune->GetEntry("Elevator_Height_Algae_Low");
    NTinst.AddListener(__Elevator_Height_Algae_Low__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Elevator_Height_Algae_Low = event.GetValueEventData()->value.GetDouble();});
    __Elevator_Height_Algae_Low__Entry.SetDouble(12.3);
 
    __Elevator_Height_Algae_Score__Entry = NTtable_Tune->GetEntry("Elevator_Height_Algae_Score");
    NTinst.AddListener(__Elevator_Height_Algae_Score__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Elevator_Height_Algae_Score = event.GetValueEventData()->value.GetDouble();});
    __Elevator_Height_Algae_Score__Entry.SetDouble(3.3);
 
    __Elevator_Height_Bottom__Entry = NTtable_Tune->GetEntry("Elevator_Height_Bottom");
    NTinst.AddListener(__Elevator_Height_Bottom__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Elevator_Height_Bottom = event.GetValueEventData()->value.GetDouble();});
    __Elevator_Height_Bottom__Entry.SetDouble(0);
 
    __Elevator_Height_Bottom_Pre__Entry = NTtable_Tune->GetEntry("Elevator_Height_Bottom_Pre");
    NTinst.AddListener(__Elevator_Height_Bottom_Pre__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Elevator_Height_Bottom_Pre = event.GetValueEventData()->value.GetDouble();});
    __Elevator_Height_Bottom_Pre__Entry.SetDouble(13.8);
 
    __Elevator_Height_Coral_Arm_Low_Thresh__Entry = NTtable_Tune->GetEntry("Elevator_Height_Coral_Arm_Low_Thresh");
    NTinst.AddListener(__Elevator_Height_Coral_Arm_Low_Thresh__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Elevator_Height_Coral_Arm_Low_Thresh = event.GetValueEventData()->value.GetDouble();});
    __Elevator_Height_Coral_Arm_Low_Thresh__Entry.SetDouble(8.5);
 
    __Elevator_Height_Coral_Score_Lower_Rate__Entry = NTtable_Tune->GetEntry("Elevator_Height_Coral_Score_Lower_Rate");
    NTinst.AddListener(__Elevator_Height_Coral_Score_Lower_Rate__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Elevator_Height_Coral_Score_Lower_Rate = event.GetValueEventData()->value.GetDouble();});
    __Elevator_Height_Coral_Score_Lower_Rate__Entry.SetDouble(-0.2);
 
    __Elevator_Height_End_Game__Entry = NTtable_Tune->GetEntry("Elevator_Height_End_Game");
    NTinst.AddListener(__Elevator_Height_End_Game__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Elevator_Height_End_Game = event.GetValueEventData()->value.GetDouble();});
    __Elevator_Height_End_Game__Entry.SetDouble(14.8);
 
    __Elevator_Height_Error_Threshold__Entry = NTtable_Tune->GetEntry("Elevator_Height_Error_Threshold");
    NTinst.AddListener(__Elevator_Height_Error_Threshold__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Elevator_Height_Error_Threshold = event.GetValueEventData()->value.GetDouble();});
    __Elevator_Height_Error_Threshold__Entry.SetDouble(1);
 
    __Elevator_Height_L1__Entry = NTtable_Tune->GetEntry("Elevator_Height_L1");
    NTinst.AddListener(__Elevator_Height_L1__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Elevator_Height_L1 = event.GetValueEventData()->value.GetDouble();});
    __Elevator_Height_L1__Entry.SetDouble(11.8);
 
    __Elevator_Height_L2__Entry = NTtable_Tune->GetEntry("Elevator_Height_L2");
    NTinst.AddListener(__Elevator_Height_L2__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Elevator_Height_L2 = event.GetValueEventData()->value.GetDouble();});
    __Elevator_Height_L2__Entry.SetDouble(7.05);
 
    __Elevator_Height_L2_Eject__Entry = NTtable_Tune->GetEntry("Elevator_Height_L2_Eject");
    NTinst.AddListener(__Elevator_Height_L2_Eject__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Elevator_Height_L2_Eject = event.GetValueEventData()->value.GetDouble();});
    __Elevator_Height_L2_Eject__Entry.SetDouble(1.05);
 
    __Elevator_Height_L3__Entry = NTtable_Tune->GetEntry("Elevator_Height_L3");
    NTinst.AddListener(__Elevator_Height_L3__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Elevator_Height_L3 = event.GetValueEventData()->value.GetDouble();});
    __Elevator_Height_L3__Entry.SetDouble(15.05);
 
    __Elevator_Height_L3_Eject__Entry = NTtable_Tune->GetEntry("Elevator_Height_L3_Eject");
    NTinst.AddListener(__Elevator_Height_L3_Eject__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Elevator_Height_L3_Eject = event.GetValueEventData()->value.GetDouble();});
    __Elevator_Height_L3_Eject__Entry.SetDouble(9.05);
 
    __Elevator_Height_L4__Entry = NTtable_Tune->GetEntry("Elevator_Height_L4");
    NTinst.AddListener(__Elevator_Height_L4__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Elevator_Height_L4 = event.GetValueEventData()->value.GetDouble();});
    __Elevator_Height_L4__Entry.SetDouble(26.7);
 
    __Elevator_Height_Lower__Entry = NTtable_Tune->GetEntry("Elevator_Height_Lower");
    NTinst.AddListener(__Elevator_Height_Lower__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Elevator_Height_Lower = event.GetValueEventData()->value.GetDouble();});
    __Elevator_Height_Lower__Entry.SetDouble(7.3);
 
    __Elevator_Height_Manual_Gain__Entry = NTtable_Tune->GetEntry("Elevator_Height_Manual_Gain");
    NTinst.AddListener(__Elevator_Height_Manual_Gain__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Elevator_Height_Manual_Gain = event.GetValueEventData()->value.GetDouble();});
    __Elevator_Height_Manual_Gain__Entry.SetDouble(0.1);
 
    __Elevator_Height_PickupLower_Reset__Entry = NTtable_Tune->GetEntry("Elevator_Height_PickupLower_Reset");
    NTinst.AddListener(__Elevator_Height_PickupLower_Reset__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Elevator_Height_PickupLower_Reset = event.GetValueEventData()->value.GetDouble();});
    __Elevator_Height_PickupLower_Reset__Entry.SetDouble(7.675);
 
    __Elevator_Height_Prepare__Entry = NTtable_Tune->GetEntry("Elevator_Height_Prepare");
    NTinst.AddListener(__Elevator_Height_Prepare__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Elevator_Height_Prepare = event.GetValueEventData()->value.GetDouble();});
    __Elevator_Height_Prepare__Entry.SetDouble(10.8);
 
    __Elevator_Height_Raise__Entry = NTtable_Tune->GetEntry("Elevator_Height_Raise");
    NTinst.AddListener(__Elevator_Height_Raise__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Elevator_Height_Raise = event.GetValueEventData()->value.GetDouble();});
    __Elevator_Height_Raise__Entry.SetDouble(9.4);
 
    __Elevator_Height_Top_Reset__Entry = NTtable_Tune->GetEntry("Elevator_Height_Top_Reset");
    NTinst.AddListener(__Elevator_Height_Top_Reset__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Elevator_Height_Top_Reset = event.GetValueEventData()->value.GetDouble();});
    __Elevator_Height_Top_Reset__Entry.SetDouble(30);
 
    __Elevator_Hold_at_Top_DC__Entry = NTtable_Tune->GetEntry("Elevator_Hold_at_Top_DC");
    NTinst.AddListener(__Elevator_Hold_at_Top_DC__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Elevator_Hold_at_Top_DC = event.GetValueEventData()->value.GetDouble();});
    __Elevator_Hold_at_Top_DC__Entry.SetDouble(0.1);
 
    __Elevator_Int_IC__Entry = NTtable_Tune->GetEntry("Elevator_Int_IC");
    NTinst.AddListener(__Elevator_Int_IC__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Elevator_Int_IC = event.GetValueEventData()->value.GetDouble();});
    __Elevator_Int_IC__Entry.SetDouble(0);
 
    __Elevator_Int_LL__Entry = NTtable_Tune->GetEntry("Elevator_Int_LL");
    NTinst.AddListener(__Elevator_Int_LL__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Elevator_Int_LL = event.GetValueEventData()->value.GetDouble();});
    __Elevator_Int_LL__Entry.SetDouble(-0.1);
 
    __Elevator_Int_UL__Entry = NTtable_Tune->GetEntry("Elevator_Int_UL");
    NTinst.AddListener(__Elevator_Int_UL__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Elevator_Int_UL = event.GetValueEventData()->value.GetDouble();});
    __Elevator_Int_UL__Entry.SetDouble(0.1);
 
    __Elevator_Limit_Switch_Debounce_F2T__Entry = NTtable_Tune->GetEntry("Elevator_Limit_Switch_Debounce_F2T");
    NTinst.AddListener(__Elevator_Limit_Switch_Debounce_F2T__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Elevator_Limit_Switch_Debounce_F2T = event.GetValueEventData()->value.GetDouble();});
    __Elevator_Limit_Switch_Debounce_F2T__Entry.SetDouble(0.5);
 
    __Elevator_Limit_Switch_Debounce_T2F__Entry = NTtable_Tune->GetEntry("Elevator_Limit_Switch_Debounce_T2F");
    NTinst.AddListener(__Elevator_Limit_Switch_Debounce_T2F__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Elevator_Limit_Switch_Debounce_T2F = event.GetValueEventData()->value.GetDouble();});
    __Elevator_Limit_Switch_Debounce_T2F__Entry.SetDouble(0);
 
    __Elevator_LowerPickup_Time__Entry = NTtable_Tune->GetEntry("Elevator_LowerPickup_Time");
    NTinst.AddListener(__Elevator_LowerPickup_Time__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Elevator_LowerPickup_Time = event.GetValueEventData()->value.GetDouble();});
    __Elevator_LowerPickup_Time__Entry.SetDouble(0);
 
    __Elevator_MotorRev_to_Inch__Entry = NTtable_Tune->GetEntry("Elevator_MotorRev_to_Inch");
    NTinst.AddListener(__Elevator_MotorRev_to_Inch__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Elevator_MotorRev_to_Inch = event.GetValueEventData()->value.GetDouble();});
    __Elevator_MotorRev_to_Inch__Entry.SetDouble(0.27646);
 
    __Elevator_Total_LL__Entry = NTtable_Tune->GetEntry("Elevator_Total_LL");
    NTinst.AddListener(__Elevator_Total_LL__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Elevator_Total_LL = event.GetValueEventData()->value.GetDouble();});
    __Elevator_Total_LL__Entry.SetDouble(-0.5);
 
    __Elevator_Total_UL__Entry = NTtable_Tune->GetEntry("Elevator_Total_UL");
    NTinst.AddListener(__Elevator_Total_UL__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Elevator_Total_UL = event.GetValueEventData()->value.GetDouble();});
    __Elevator_Total_UL__Entry.SetDouble(1);
 
    __Gyro_Calibration_Auto_Center__Entry = NTtable_Tune->GetEntry("Gyro_Calibration_Auto_Center");
    NTinst.AddListener(__Gyro_Calibration_Auto_Center__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Gyro_Calibration_Auto_Center = event.GetValueEventData()->value.GetDouble();});
    __Gyro_Calibration_Auto_Center__Entry.SetDouble(180);
 
    __Gyro_Calibration_Auto_Left__Entry = NTtable_Tune->GetEntry("Gyro_Calibration_Auto_Left");
    NTinst.AddListener(__Gyro_Calibration_Auto_Left__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Gyro_Calibration_Auto_Left = event.GetValueEventData()->value.GetDouble();});
    __Gyro_Calibration_Auto_Left__Entry.SetDouble(210);
 
    __Gyro_Calibration_Auto_Right__Entry = NTtable_Tune->GetEntry("Gyro_Calibration_Auto_Right");
    NTinst.AddListener(__Gyro_Calibration_Auto_Right__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Gyro_Calibration_Auto_Right = event.GetValueEventData()->value.GetDouble();});
    __Gyro_Calibration_Auto_Right__Entry.SetDouble(125);
 
    __Gyro_Calibration_Default__Entry = NTtable_Tune->GetEntry("Gyro_Calibration_Default");
    NTinst.AddListener(__Gyro_Calibration_Default__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Gyro_Calibration_Default = event.GetValueEventData()->value.GetDouble();});
    __Gyro_Calibration_Default__Entry.SetDouble(180);
 
    __Gyro_Calibration_Reset_Flag__Entry = NTtable_Tune->GetEntry("Gyro_Calibration_Reset_Flag");
    NTinst.AddListener(__Gyro_Calibration_Reset_Flag__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Gyro_Calibration_Reset_Flag = event.GetValueEventData()->value.GetDouble();});
    __Gyro_Calibration_Reset_Flag__Entry.SetDouble(0);
 
    __KF_Enable__Entry = NTtable_Tune->GetEntry("KF_Enable");
    NTinst.AddListener(__KF_Enable__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {KF_Enable = event.GetValueEventData()->value.GetDouble();});
    __KF_Enable__Entry.SetDouble(1);
 
    __L4_Switch_Time__Entry = NTtable_Tune->GetEntry("L4_Switch_Time");
    NTinst.AddListener(__L4_Switch_Time__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {L4_Switch_Time = event.GetValueEventData()->value.GetDouble();});
    __L4_Switch_Time__Entry.SetDouble(0.1);
 
    __Limelight_Tag_Angle_Offset__Entry = NTtable_Tune->GetEntry("Limelight_Tag_Angle_Offset");
    NTinst.AddListener(__Limelight_Tag_Angle_Offset__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Limelight_Tag_Angle_Offset = event.GetValueEventData()->value.GetDouble();});
    __Limelight_Tag_Angle_Offset__Entry.SetDouble(0);
 
    __Limelight_Tag_X_Offset__Entry = NTtable_Tune->GetEntry("Limelight_Tag_X_Offset");
    NTinst.AddListener(__Limelight_Tag_X_Offset__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Limelight_Tag_X_Offset = event.GetValueEventData()->value.GetDouble();});
    __Limelight_Tag_X_Offset__Entry.SetDouble(-0.28);
 
    __Limelight_Tag_Y_Offset__Entry = NTtable_Tune->GetEntry("Limelight_Tag_Y_Offset");
    NTinst.AddListener(__Limelight_Tag_Y_Offset__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Limelight_Tag_Y_Offset = event.GetValueEventData()->value.GetDouble();});
    __Limelight_Tag_Y_Offset__Entry.SetDouble(-0.28);
 
    __MatchTime_Skip_Coral_Pickup__Entry = NTtable_Tune->GetEntry("MatchTime_Skip_Coral_Pickup");
    NTinst.AddListener(__MatchTime_Skip_Coral_Pickup__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {MatchTime_Skip_Coral_Pickup = event.GetValueEventData()->value.GetDouble();});
    __MatchTime_Skip_Coral_Pickup__Entry.SetDouble(7);
 
    __MatchTime_Skip_Second_L4__Entry = NTtable_Tune->GetEntry("MatchTime_Skip_Second_L4");
    NTinst.AddListener(__MatchTime_Skip_Second_L4__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {MatchTime_Skip_Second_L4 = event.GetValueEventData()->value.GetDouble();});
    __MatchTime_Skip_Second_L4__Entry.SetDouble(3.4);
 
    __Odometry_IC_X__Entry = NTtable_Tune->GetEntry("Odometry_IC_X");
    NTinst.AddListener(__Odometry_IC_X__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Odometry_IC_X = event.GetValueEventData()->value.GetDouble();});
    __Odometry_IC_X__Entry.SetDouble(0);
 
    __Odometry_IC_Y__Entry = NTtable_Tune->GetEntry("Odometry_IC_Y");
    NTinst.AddListener(__Odometry_IC_Y__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Odometry_IC_Y = event.GetValueEventData()->value.GetDouble();});
    __Odometry_IC_Y__Entry.SetDouble(0);
 
    __Odometry_Reset_IC__Entry = NTtable_Tune->GetEntry("Odometry_Reset_IC");
    NTinst.AddListener(__Odometry_Reset_IC__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Odometry_Reset_IC = event.GetValueEventData()->value.GetDouble();});
    __Odometry_Reset_IC__Entry.SetDouble(0);
 
    __Odometry_X_Y_TEAR__Entry = NTtable_Tune->GetEntry("Odometry_X_Y_TEAR");
    NTinst.AddListener(__Odometry_X_Y_TEAR__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Odometry_X_Y_TEAR = event.GetValueEventData()->value.GetDouble();});
    __Odometry_X_Y_TEAR__Entry.SetDouble(0);
 
    __Spline_Last_Pose_Distance_to_Velocity_Gain__Entry = NTtable_Tune->GetEntry("Spline_Last_Pose_Distance_to_Velocity_Gain");
    NTinst.AddListener(__Spline_Last_Pose_Distance_to_Velocity_Gain__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Spline_Last_Pose_Distance_to_Velocity_Gain = event.GetValueEventData()->value.GetDouble();});
    __Spline_Last_Pose_Distance_to_Velocity_Gain__Entry.SetDouble(2);
 
    __Spline_Max_Centripital_Acceleration__Entry = NTtable_Tune->GetEntry("Spline_Max_Centripital_Acceleration");
    NTinst.AddListener(__Spline_Max_Centripital_Acceleration__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Spline_Max_Centripital_Acceleration = event.GetValueEventData()->value.GetDouble();});
    __Spline_Max_Centripital_Acceleration__Entry.SetDouble(10);
 
    __Spline_Pose_Num_Before_End_Reduce_Speed__Entry = NTtable_Tune->GetEntry("Spline_Pose_Num_Before_End_Reduce_Speed");
    NTinst.AddListener(__Spline_Pose_Num_Before_End_Reduce_Speed__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Spline_Pose_Num_Before_End_Reduce_Speed = event.GetValueEventData()->value.GetDouble();});
    __Spline_Pose_Num_Before_End_Reduce_Speed__Entry.SetDouble(1);
 
    __Spline_Stop_Radius__Entry = NTtable_Tune->GetEntry("Spline_Stop_Radius");
    NTinst.AddListener(__Spline_Stop_Radius__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Spline_Stop_Radius = event.GetValueEventData()->value.GetDouble();});
    __Spline_Stop_Radius__Entry.SetDouble(0.1);
 
    __Spline_Velocity_Multiplier_TEST__Entry = NTtable_Tune->GetEntry("Spline_Velocity_Multiplier_TEST");
    NTinst.AddListener(__Spline_Velocity_Multiplier_TEST__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Spline_Velocity_Multiplier_TEST = event.GetValueEventData()->value.GetDouble();});
    __Spline_Velocity_Multiplier_TEST__Entry.SetDouble(1);
 
    __Steering_Absolute_Cmd_Approach_Zero_Error_Thresh__Entry = NTtable_Tune->GetEntry("Steering_Absolute_Cmd_Approach_Zero_Error_Thresh");
    NTinst.AddListener(__Steering_Absolute_Cmd_Approach_Zero_Error_Thresh__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Steering_Absolute_Cmd_Approach_Zero_Error_Thresh = event.GetValueEventData()->value.GetDouble();});
    __Steering_Absolute_Cmd_Approach_Zero_Error_Thresh__Entry.SetDouble(0.2);
 
    __Steering_Absolute_Cmd_Approach_Zero_Final_Thresh__Entry = NTtable_Tune->GetEntry("Steering_Absolute_Cmd_Approach_Zero_Final_Thresh");
    NTinst.AddListener(__Steering_Absolute_Cmd_Approach_Zero_Final_Thresh__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Steering_Absolute_Cmd_Approach_Zero_Final_Thresh = event.GetValueEventData()->value.GetDouble();});
    __Steering_Absolute_Cmd_Approach_Zero_Final_Thresh__Entry.SetDouble(0.01);
 
    __Steering_Absolute_Cmd_NonZero_Error_Thresh__Entry = NTtable_Tune->GetEntry("Steering_Absolute_Cmd_NonZero_Error_Thresh");
    NTinst.AddListener(__Steering_Absolute_Cmd_NonZero_Error_Thresh__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Steering_Absolute_Cmd_NonZero_Error_Thresh = event.GetValueEventData()->value.GetDouble();});
    __Steering_Absolute_Cmd_NonZero_Error_Thresh__Entry.SetDouble(0.2);
 
    __Steering_Absolute_Cmd_NonZero_Final_Scale_Factor__Entry = NTtable_Tune->GetEntry("Steering_Absolute_Cmd_NonZero_Final_Scale_Factor");
    NTinst.AddListener(__Steering_Absolute_Cmd_NonZero_Final_Scale_Factor__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Steering_Absolute_Cmd_NonZero_Final_Scale_Factor = event.GetValueEventData()->value.GetDouble();});
    __Steering_Absolute_Cmd_NonZero_Final_Scale_Factor__Entry.SetDouble(0.1);
 
    __Steering_Absolute_Cmd_Rate_Limit_Dec__Entry = NTtable_Tune->GetEntry("Steering_Absolute_Cmd_Rate_Limit_Dec");
    NTinst.AddListener(__Steering_Absolute_Cmd_Rate_Limit_Dec__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Steering_Absolute_Cmd_Rate_Limit_Dec = event.GetValueEventData()->value.GetDouble();});
    __Steering_Absolute_Cmd_Rate_Limit_Dec__Entry.SetDouble(-1);
 
    __Steering_Absolute_Cmd_Rate_Limit_Inc__Entry = NTtable_Tune->GetEntry("Steering_Absolute_Cmd_Rate_Limit_Inc");
    NTinst.AddListener(__Steering_Absolute_Cmd_Rate_Limit_Inc__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Steering_Absolute_Cmd_Rate_Limit_Inc = event.GetValueEventData()->value.GetDouble();});
    __Steering_Absolute_Cmd_Rate_Limit_Inc__Entry.SetDouble(1);
 
    __Steering_Heading_Control_D__Entry = NTtable_Tune->GetEntry("Steering_Heading_Control_D");
    NTinst.AddListener(__Steering_Heading_Control_D__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Steering_Heading_Control_D = event.GetValueEventData()->value.GetDouble();});
    __Steering_Heading_Control_D__Entry.SetDouble(0);
 
    __Steering_Heading_Control_D_FilterCoeff__Entry = NTtable_Tune->GetEntry("Steering_Heading_Control_D_FilterCoeff");
    NTinst.AddListener(__Steering_Heading_Control_D_FilterCoeff__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Steering_Heading_Control_D_FilterCoeff = event.GetValueEventData()->value.GetDouble();});
    __Steering_Heading_Control_D_FilterCoeff__Entry.SetDouble(0.22223);
 
    __Steering_Heading_Control_D_LL__Entry = NTtable_Tune->GetEntry("Steering_Heading_Control_D_LL");
    NTinst.AddListener(__Steering_Heading_Control_D_LL__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Steering_Heading_Control_D_LL = event.GetValueEventData()->value.GetDouble();});
    __Steering_Heading_Control_D_LL__Entry.SetDouble(0);
 
    __Steering_Heading_Control_D_UL__Entry = NTtable_Tune->GetEntry("Steering_Heading_Control_D_UL");
    NTinst.AddListener(__Steering_Heading_Control_D_UL__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Steering_Heading_Control_D_UL = event.GetValueEventData()->value.GetDouble();});
    __Steering_Heading_Control_D_UL__Entry.SetDouble(0);
 
    __Steering_Heading_Control_Deadzone__Entry = NTtable_Tune->GetEntry("Steering_Heading_Control_Deadzone");
    NTinst.AddListener(__Steering_Heading_Control_Deadzone__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Steering_Heading_Control_Deadzone = event.GetValueEventData()->value.GetDouble();});
    __Steering_Heading_Control_Deadzone__Entry.SetDouble(0.1);
 
    __Steering_Heading_Control_I__Entry = NTtable_Tune->GetEntry("Steering_Heading_Control_I");
    NTinst.AddListener(__Steering_Heading_Control_I__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Steering_Heading_Control_I = event.GetValueEventData()->value.GetDouble();});
    __Steering_Heading_Control_I__Entry.SetDouble(0);
 
    __Steering_Heading_Control_I_LL__Entry = NTtable_Tune->GetEntry("Steering_Heading_Control_I_LL");
    NTinst.AddListener(__Steering_Heading_Control_I_LL__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Steering_Heading_Control_I_LL = event.GetValueEventData()->value.GetDouble();});
    __Steering_Heading_Control_I_LL__Entry.SetDouble(-0.1);
 
    __Steering_Heading_Control_I_UL__Entry = NTtable_Tune->GetEntry("Steering_Heading_Control_I_UL");
    NTinst.AddListener(__Steering_Heading_Control_I_UL__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Steering_Heading_Control_I_UL = event.GetValueEventData()->value.GetDouble();});
    __Steering_Heading_Control_I_UL__Entry.SetDouble(0.1);
 
    __Steering_Heading_Control_P__Entry = NTtable_Tune->GetEntry("Steering_Heading_Control_P");
    NTinst.AddListener(__Steering_Heading_Control_P__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Steering_Heading_Control_P = event.GetValueEventData()->value.GetDouble();});
    __Steering_Heading_Control_P__Entry.SetDouble(2.5);
 
    __Steering_Heading_Control_Total_LL__Entry = NTtable_Tune->GetEntry("Steering_Heading_Control_Total_LL");
    NTinst.AddListener(__Steering_Heading_Control_Total_LL__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Steering_Heading_Control_Total_LL = event.GetValueEventData()->value.GetDouble();});
    __Steering_Heading_Control_Total_LL__Entry.SetDouble(-2.5);
 
    __Steering_Heading_Control_Total_UL__Entry = NTtable_Tune->GetEntry("Steering_Heading_Control_Total_UL");
    NTinst.AddListener(__Steering_Heading_Control_Total_UL__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Steering_Heading_Control_Total_UL = event.GetValueEventData()->value.GetDouble();});
    __Steering_Heading_Control_Total_UL__Entry.SetDouble(2.5);
 
    __Steering_Motor_Control_D__Entry = NTtable_Tune->GetEntry("Steering_Motor_Control_D");
    NTinst.AddListener(__Steering_Motor_Control_D__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Steering_Motor_Control_D = event.GetValueEventData()->value.GetDouble();});
    __Steering_Motor_Control_D__Entry.SetDouble(0.5);
 
    __Steering_Motor_Control_D_FilterCoeff__Entry = NTtable_Tune->GetEntry("Steering_Motor_Control_D_FilterCoeff");
    NTinst.AddListener(__Steering_Motor_Control_D_FilterCoeff__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Steering_Motor_Control_D_FilterCoeff = event.GetValueEventData()->value.GetDouble();});
    __Steering_Motor_Control_D_FilterCoeff__Entry.SetDouble(0.22223);
 
    __Steering_Motor_Control_D_LL__Entry = NTtable_Tune->GetEntry("Steering_Motor_Control_D_LL");
    NTinst.AddListener(__Steering_Motor_Control_D_LL__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Steering_Motor_Control_D_LL = event.GetValueEventData()->value.GetDouble();});
    __Steering_Motor_Control_D_LL__Entry.SetDouble(-0.2);
 
    __Steering_Motor_Control_D_UL__Entry = NTtable_Tune->GetEntry("Steering_Motor_Control_D_UL");
    NTinst.AddListener(__Steering_Motor_Control_D_UL__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Steering_Motor_Control_D_UL = event.GetValueEventData()->value.GetDouble();});
    __Steering_Motor_Control_D_UL__Entry.SetDouble(0.2);
 
    __Steering_Motor_Control_I__Entry = NTtable_Tune->GetEntry("Steering_Motor_Control_I");
    NTinst.AddListener(__Steering_Motor_Control_I__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Steering_Motor_Control_I = event.GetValueEventData()->value.GetDouble();});
    __Steering_Motor_Control_I__Entry.SetDouble(0.005);
 
    __Steering_Motor_Control_I_LL__Entry = NTtable_Tune->GetEntry("Steering_Motor_Control_I_LL");
    NTinst.AddListener(__Steering_Motor_Control_I_LL__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Steering_Motor_Control_I_LL = event.GetValueEventData()->value.GetDouble();});
    __Steering_Motor_Control_I_LL__Entry.SetDouble(-0.005);
 
    __Steering_Motor_Control_I_UL__Entry = NTtable_Tune->GetEntry("Steering_Motor_Control_I_UL");
    NTinst.AddListener(__Steering_Motor_Control_I_UL__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Steering_Motor_Control_I_UL = event.GetValueEventData()->value.GetDouble();});
    __Steering_Motor_Control_I_UL__Entry.SetDouble(0.005);
 
    __Steering_Motor_Control_P__Entry = NTtable_Tune->GetEntry("Steering_Motor_Control_P");
    NTinst.AddListener(__Steering_Motor_Control_P__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Steering_Motor_Control_P = event.GetValueEventData()->value.GetDouble();});
    __Steering_Motor_Control_P__Entry.SetDouble(0.15);
 
    __Steering_Relative_Cmd_Approach_Zero_Error_Thresh__Entry = NTtable_Tune->GetEntry("Steering_Relative_Cmd_Approach_Zero_Error_Thresh");
    NTinst.AddListener(__Steering_Relative_Cmd_Approach_Zero_Error_Thresh__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Steering_Relative_Cmd_Approach_Zero_Error_Thresh = event.GetValueEventData()->value.GetDouble();});
    __Steering_Relative_Cmd_Approach_Zero_Error_Thresh__Entry.SetDouble(0.2);
 
    __Steering_Relative_Cmd_Approach_Zero_Final_Thresh__Entry = NTtable_Tune->GetEntry("Steering_Relative_Cmd_Approach_Zero_Final_Thresh");
    NTinst.AddListener(__Steering_Relative_Cmd_Approach_Zero_Final_Thresh__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Steering_Relative_Cmd_Approach_Zero_Final_Thresh = event.GetValueEventData()->value.GetDouble();});
    __Steering_Relative_Cmd_Approach_Zero_Final_Thresh__Entry.SetDouble(0.01);
 
    __Steering_Relative_Cmd_NonZero_Error_Thresh__Entry = NTtable_Tune->GetEntry("Steering_Relative_Cmd_NonZero_Error_Thresh");
    NTinst.AddListener(__Steering_Relative_Cmd_NonZero_Error_Thresh__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Steering_Relative_Cmd_NonZero_Error_Thresh = event.GetValueEventData()->value.GetDouble();});
    __Steering_Relative_Cmd_NonZero_Error_Thresh__Entry.SetDouble(0.2);
 
    __Steering_Relative_Cmd_NonZero_Final_Scale_Factor__Entry = NTtable_Tune->GetEntry("Steering_Relative_Cmd_NonZero_Final_Scale_Factor");
    NTinst.AddListener(__Steering_Relative_Cmd_NonZero_Final_Scale_Factor__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Steering_Relative_Cmd_NonZero_Final_Scale_Factor = event.GetValueEventData()->value.GetDouble();});
    __Steering_Relative_Cmd_NonZero_Final_Scale_Factor__Entry.SetDouble(1);
 
    __Steering_Relative_Cmd_Rate_Limit_Dec__Entry = NTtable_Tune->GetEntry("Steering_Relative_Cmd_Rate_Limit_Dec");
    NTinst.AddListener(__Steering_Relative_Cmd_Rate_Limit_Dec__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Steering_Relative_Cmd_Rate_Limit_Dec = event.GetValueEventData()->value.GetDouble();});
    __Steering_Relative_Cmd_Rate_Limit_Dec__Entry.SetDouble(-10);
 
    __Steering_Relative_Cmd_Rate_Limit_Inc__Entry = NTtable_Tune->GetEntry("Steering_Relative_Cmd_Rate_Limit_Inc");
    NTinst.AddListener(__Steering_Relative_Cmd_Rate_Limit_Inc__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Steering_Relative_Cmd_Rate_Limit_Inc = event.GetValueEventData()->value.GetDouble();});
    __Steering_Relative_Cmd_Rate_Limit_Inc__Entry.SetDouble(10);
 
    __Steering_Relative_Gain__Entry = NTtable_Tune->GetEntry("Steering_Relative_Gain");
    NTinst.AddListener(__Steering_Relative_Gain__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Steering_Relative_Gain = event.GetValueEventData()->value.GetDouble();});
    __Steering_Relative_Gain__Entry.SetDouble(5);
 
    __Steering_Twist_Gain__Entry = NTtable_Tune->GetEntry("Steering_Twist_Gain");
    NTinst.AddListener(__Steering_Twist_Gain__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Steering_Twist_Gain = event.GetValueEventData()->value.GetDouble();});
    __Steering_Twist_Gain__Entry.SetDouble(-0.5);
 
    __TEST_CANdle_Flag__Entry = NTtable_Tune->GetEntry("TEST_CANdle_Flag");
    NTinst.AddListener(__TEST_CANdle_Flag__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {TEST_CANdle_Flag = event.GetValueEventData()->value.GetDouble();});
    __TEST_CANdle_Flag__Entry.SetDouble(0);
 
    __TEST_CANdle_LED_ID__Entry = NTtable_Tune->GetEntry("TEST_CANdle_LED_ID");
    NTinst.AddListener(__TEST_CANdle_LED_ID__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {TEST_CANdle_LED_ID = event.GetValueEventData()->value.GetDouble();});
    __TEST_CANdle_LED_ID__Entry.SetDouble(0);
 
    __TEST_Swerve_Mode_Override_Flag__Entry = NTtable_Tune->GetEntry("TEST_Swerve_Mode_Override_Flag");
    NTinst.AddListener(__TEST_Swerve_Mode_Override_Flag__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {TEST_Swerve_Mode_Override_Flag = event.GetValueEventData()->value.GetDouble();});
    __TEST_Swerve_Mode_Override_Flag__Entry.SetDouble(0);
 
    __TEST_Swerve_Mode_Steering__Entry = NTtable_Tune->GetEntry("TEST_Swerve_Mode_Steering");
    NTinst.AddListener(__TEST_Swerve_Mode_Steering__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {TEST_Swerve_Mode_Steering = event.GetValueEventData()->value.GetDouble();});
    __TEST_Swerve_Mode_Steering__Entry.SetDouble(0);
 
    __TEST_Swerve_Mode_Translation__Entry = NTtable_Tune->GetEntry("TEST_Swerve_Mode_Translation");
    NTinst.AddListener(__TEST_Swerve_Mode_Translation__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {TEST_Swerve_Mode_Translation = event.GetValueEventData()->value.GetDouble();});
    __TEST_Swerve_Mode_Translation__Entry.SetDouble(0);
 
    __Translation_Speed_Approach_Zero_Error_Thresh__Entry = NTtable_Tune->GetEntry("Translation_Speed_Approach_Zero_Error_Thresh");
    NTinst.AddListener(__Translation_Speed_Approach_Zero_Error_Thresh__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Translation_Speed_Approach_Zero_Error_Thresh = event.GetValueEventData()->value.GetDouble();});
    __Translation_Speed_Approach_Zero_Error_Thresh__Entry.SetDouble(0.2);
 
    __Translation_Speed_Approach_Zero_Final_Thresh__Entry = NTtable_Tune->GetEntry("Translation_Speed_Approach_Zero_Final_Thresh");
    NTinst.AddListener(__Translation_Speed_Approach_Zero_Final_Thresh__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Translation_Speed_Approach_Zero_Final_Thresh = event.GetValueEventData()->value.GetDouble();});
    __Translation_Speed_Approach_Zero_Final_Thresh__Entry.SetDouble(0.01);
 
    __Translation_Speed_NonZero_Error_Thresh__Entry = NTtable_Tune->GetEntry("Translation_Speed_NonZero_Error_Thresh");
    NTinst.AddListener(__Translation_Speed_NonZero_Error_Thresh__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Translation_Speed_NonZero_Error_Thresh = event.GetValueEventData()->value.GetDouble();});
    __Translation_Speed_NonZero_Error_Thresh__Entry.SetDouble(0.15);
 
    __Translation_Speed_NonZero_Final_Scale_Factor__Entry = NTtable_Tune->GetEntry("Translation_Speed_NonZero_Final_Scale_Factor");
    NTinst.AddListener(__Translation_Speed_NonZero_Final_Scale_Factor__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Translation_Speed_NonZero_Final_Scale_Factor = event.GetValueEventData()->value.GetDouble();});
    __Translation_Speed_NonZero_Final_Scale_Factor__Entry.SetDouble(0.05);
 
    __Translation_Speed_Rate_Limit_Dec__Entry = NTtable_Tune->GetEntry("Translation_Speed_Rate_Limit_Dec");
    NTinst.AddListener(__Translation_Speed_Rate_Limit_Dec__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Translation_Speed_Rate_Limit_Dec = event.GetValueEventData()->value.GetDouble();});
    __Translation_Speed_Rate_Limit_Dec__Entry.SetDouble(-4);
 
    __Translation_Speed_Rate_Limit_Inc__Entry = NTtable_Tune->GetEntry("Translation_Speed_Rate_Limit_Inc");
    NTinst.AddListener(__Translation_Speed_Rate_Limit_Inc__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Translation_Speed_Rate_Limit_Inc = event.GetValueEventData()->value.GetDouble();});
    __Translation_Speed_Rate_Limit_Inc__Entry.SetDouble(4);
 
    __Translation_Twist_Gain__Entry = NTtable_Tune->GetEntry("Translation_Twist_Gain");
    NTinst.AddListener(__Translation_Twist_Gain__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Translation_Twist_Gain = event.GetValueEventData()->value.GetDouble();});
    __Translation_Twist_Gain__Entry.SetDouble(-0.5);
 
    __Twist_Deadzone_neg__Entry = NTtable_Tune->GetEntry("Twist_Deadzone_neg");
    NTinst.AddListener(__Twist_Deadzone_neg__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Twist_Deadzone_neg = event.GetValueEventData()->value.GetDouble();});
    __Twist_Deadzone_neg__Entry.SetDouble(-0.01);
 
    __Twist_Deadzone_pos__Entry = NTtable_Tune->GetEntry("Twist_Deadzone_pos");
    NTinst.AddListener(__Twist_Deadzone_pos__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Twist_Deadzone_pos = event.GetValueEventData()->value.GetDouble();});
    __Twist_Deadzone_pos__Entry.SetDouble(0.01);
 
    __Winch_Hold_DC__Entry = NTtable_Tune->GetEntry("Winch_Hold_DC");
    NTinst.AddListener(__Winch_Hold_DC__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Winch_Hold_DC = event.GetValueEventData()->value.GetDouble();});
    __Winch_Hold_DC__Entry.SetDouble(0.05);
 
    __Winch_Rev_Target__Entry = NTtable_Tune->GetEntry("Winch_Rev_Target");
    NTinst.AddListener(__Winch_Rev_Target__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Winch_Rev_Target = event.GetValueEventData()->value.GetDouble();});
    __Winch_Rev_Target__Entry.SetDouble(30);
 
    __Winch_Spool_DC__Entry = NTtable_Tune->GetEntry("Winch_Spool_DC");
    NTinst.AddListener(__Winch_Spool_DC__Entry, nt::EventFlags::kValueAll, [] (const nt::Event& event) {Winch_Spool_DC = event.GetValueEventData()->value.GetDouble();});
    __Winch_Spool_DC__Entry.SetDouble(1);
 
// Inports
    __Actuator_Revs__Entry = NTtable_Inport->GetEntry("Actuator_Revs");
    __Algae_Limit_Switch__Entry = NTtable_Inport->GetEntry("Algae_Limit_Switch");
    __BackLeft_Drive_Motor_Rev__Entry = NTtable_Inport->GetEntry("BackLeft_Drive_Motor_Rev");
    __BackLeft_Drive_Motor_Speed__Entry = NTtable_Inport->GetEntry("BackLeft_Drive_Motor_Speed");
    __BackLeft_Steer_Rev__Entry = NTtable_Inport->GetEntry("BackLeft_Steer_Rev");
    __BackLeft_Turn_Offset__Entry = NTtable_Inport->GetEntry("BackLeft_Turn_Offset");
    __BackRight_Drive_Motor_Rev__Entry = NTtable_Inport->GetEntry("BackRight_Drive_Motor_Rev");
    __BackRight_Drive_Motor_Speed__Entry = NTtable_Inport->GetEntry("BackRight_Drive_Motor_Speed");
    __BackRight_Steer_Rev__Entry = NTtable_Inport->GetEntry("BackRight_Steer_Rev");
    __BackRight_Turn_Offset__Entry = NTtable_Inport->GetEntry("BackRight_Turn_Offset");
    __Coral_Arm_Angle_Measured_Raw__Entry = NTtable_Inport->GetEntry("Coral_Arm_Angle_Measured_Raw");
    __Coral_Limit_Switch__Entry = NTtable_Inport->GetEntry("Coral_Limit_Switch");
    __Coral_TOF_Distance__Entry = NTtable_Inport->GetEntry("Coral_TOF_Distance");
    __Elevator_Limit_Switch_Bottom__Entry = NTtable_Inport->GetEntry("Elevator_Limit_Switch_Bottom");
    __Elevator_Limit_Switch_Top__Entry = NTtable_Inport->GetEntry("Elevator_Limit_Switch_Top");
    __Elevator_Motor_Rev__Entry = NTtable_Inport->GetEntry("Elevator_Motor_Rev");
    __FrontLeft_Drive_Motor_Rev__Entry = NTtable_Inport->GetEntry("FrontLeft_Drive_Motor_Rev");
    __FrontLeft_Drive_Motor_Speed__Entry = NTtable_Inport->GetEntry("FrontLeft_Drive_Motor_Speed");
    __FrontLeft_Steer_Rev__Entry = NTtable_Inport->GetEntry("FrontLeft_Steer_Rev");
    __FrontLeft_Turn_Offset__Entry = NTtable_Inport->GetEntry("FrontLeft_Turn_Offset");
    __FrontRight_Drive_Motor_Rev__Entry = NTtable_Inport->GetEntry("FrontRight_Drive_Motor_Rev");
    __FrontRight_Drive_Motor_Speed__Entry = NTtable_Inport->GetEntry("FrontRight_Drive_Motor_Speed");
    __FrontRight_Steer_Rev__Entry = NTtable_Inport->GetEntry("FrontRight_Steer_Rev");
    __FrontRight_Turn_Offset__Entry = NTtable_Inport->GetEntry("FrontRight_Turn_Offset");
    __GameState__Entry = NTtable_Inport->GetEntry("GameState");
    __Gamepad_B1_A__Entry = NTtable_Inport->GetEntry("Gamepad_B1_A");
    __Gamepad_B2_B__Entry = NTtable_Inport->GetEntry("Gamepad_B2_B");
    __Gamepad_B3_X__Entry = NTtable_Inport->GetEntry("Gamepad_B3_X");
    __Gamepad_B4_Y__Entry = NTtable_Inport->GetEntry("Gamepad_B4_Y");
    __Gamepad_Back__Entry = NTtable_Inport->GetEntry("Gamepad_Back");
    __Gamepad_LB__Entry = NTtable_Inport->GetEntry("Gamepad_LB");
    __Gamepad_LT__Entry = NTtable_Inport->GetEntry("Gamepad_LT");
    __Gamepad_POV__Entry = NTtable_Inport->GetEntry("Gamepad_POV");
    __Gamepad_RB__Entry = NTtable_Inport->GetEntry("Gamepad_RB");
    __Gamepad_RT__Entry = NTtable_Inport->GetEntry("Gamepad_RT");
    __Gamepad_Start__Entry = NTtable_Inport->GetEntry("Gamepad_Start");
    __Gamepad_Stick_Left_X__Entry = NTtable_Inport->GetEntry("Gamepad_Stick_Left_X");
    __Gamepad_Stick_Left_Y__Entry = NTtable_Inport->GetEntry("Gamepad_Stick_Left_Y");
    __Gamepad_Stick_Right_X__Entry = NTtable_Inport->GetEntry("Gamepad_Stick_Right_X");
    __Gamepad_Stick_Right_Y__Entry = NTtable_Inport->GetEntry("Gamepad_Stick_Right_Y");
    __Gyro_Angle__Entry = NTtable_Inport->GetEntry("Gyro_Angle");
    __IsBlueAlliance__Entry = NTtable_Inport->GetEntry("IsBlueAlliance");
    __Joystick_Left_B1__Entry = NTtable_Inport->GetEntry("Joystick_Left_B1");
    __Joystick_Left_B10__Entry = NTtable_Inport->GetEntry("Joystick_Left_B10");
    __Joystick_Left_B11__Entry = NTtable_Inport->GetEntry("Joystick_Left_B11");
    __Joystick_Left_B12__Entry = NTtable_Inport->GetEntry("Joystick_Left_B12");
    __Joystick_Left_B13__Entry = NTtable_Inport->GetEntry("Joystick_Left_B13");
    __Joystick_Left_B14__Entry = NTtable_Inport->GetEntry("Joystick_Left_B14");
    __Joystick_Left_B15__Entry = NTtable_Inport->GetEntry("Joystick_Left_B15");
    __Joystick_Left_B16__Entry = NTtable_Inport->GetEntry("Joystick_Left_B16");
    __Joystick_Left_B2__Entry = NTtable_Inport->GetEntry("Joystick_Left_B2");
    __Joystick_Left_B3__Entry = NTtable_Inport->GetEntry("Joystick_Left_B3");
    __Joystick_Left_B4__Entry = NTtable_Inport->GetEntry("Joystick_Left_B4");
    __Joystick_Left_B5__Entry = NTtable_Inport->GetEntry("Joystick_Left_B5");
    __Joystick_Left_B6__Entry = NTtable_Inport->GetEntry("Joystick_Left_B6");
    __Joystick_Left_B7__Entry = NTtable_Inport->GetEntry("Joystick_Left_B7");
    __Joystick_Left_B8__Entry = NTtable_Inport->GetEntry("Joystick_Left_B8");
    __Joystick_Left_B9__Entry = NTtable_Inport->GetEntry("Joystick_Left_B9");
    __Joystick_Left_POV__Entry = NTtable_Inport->GetEntry("Joystick_Left_POV");
    __Joystick_Left_X__Entry = NTtable_Inport->GetEntry("Joystick_Left_X");
    __Joystick_Left_Y__Entry = NTtable_Inport->GetEntry("Joystick_Left_Y");
    __Joystick_Left_Z__Entry = NTtable_Inport->GetEntry("Joystick_Left_Z");
    __Joystick_Right_B1__Entry = NTtable_Inport->GetEntry("Joystick_Right_B1");
    __Joystick_Right_B10__Entry = NTtable_Inport->GetEntry("Joystick_Right_B10");
    __Joystick_Right_B11__Entry = NTtable_Inport->GetEntry("Joystick_Right_B11");
    __Joystick_Right_B12__Entry = NTtable_Inport->GetEntry("Joystick_Right_B12");
    __Joystick_Right_B13__Entry = NTtable_Inport->GetEntry("Joystick_Right_B13");
    __Joystick_Right_B14__Entry = NTtable_Inport->GetEntry("Joystick_Right_B14");
    __Joystick_Right_B15__Entry = NTtable_Inport->GetEntry("Joystick_Right_B15");
    __Joystick_Right_B16__Entry = NTtable_Inport->GetEntry("Joystick_Right_B16");
    __Joystick_Right_B2__Entry = NTtable_Inport->GetEntry("Joystick_Right_B2");
    __Joystick_Right_B3__Entry = NTtable_Inport->GetEntry("Joystick_Right_B3");
    __Joystick_Right_B4__Entry = NTtable_Inport->GetEntry("Joystick_Right_B4");
    __Joystick_Right_B5__Entry = NTtable_Inport->GetEntry("Joystick_Right_B5");
    __Joystick_Right_B6__Entry = NTtable_Inport->GetEntry("Joystick_Right_B6");
    __Joystick_Right_B7__Entry = NTtable_Inport->GetEntry("Joystick_Right_B7");
    __Joystick_Right_B8__Entry = NTtable_Inport->GetEntry("Joystick_Right_B8");
    __Joystick_Right_B9__Entry = NTtable_Inport->GetEntry("Joystick_Right_B9");
    __Joystick_Right_POV__Entry = NTtable_Inport->GetEntry("Joystick_Right_POV");
    __Joystick_Right_X__Entry = NTtable_Inport->GetEntry("Joystick_Right_X");
    __Joystick_Right_Y__Entry = NTtable_Inport->GetEntry("Joystick_Right_Y");
    __Joystick_Right_Z__Entry = NTtable_Inport->GetEntry("Joystick_Right_Z");
    __Limelight_Est_Pose_X__Entry = NTtable_Inport->GetEntry("Limelight_Est_Pose_X");
    __Limelight_Est_Pose_Y__Entry = NTtable_Inport->GetEntry("Limelight_Est_Pose_Y");
    __Limelight_Tag_Angle__Entry = NTtable_Inport->GetEntry("Limelight_Tag_Angle");
    __Limelight_Tag_X__Entry = NTtable_Inport->GetEntry("Limelight_Tag_X");
    __Limelight_Tag_Y__Entry = NTtable_Inport->GetEntry("Limelight_Tag_Y");
    __MatchTime__Entry = NTtable_Inport->GetEntry("MatchTime");
    __Num_Tags_Detected__Entry = NTtable_Inport->GetEntry("Num_Tags_Detected");
    __Winch_Revs__Entry = NTtable_Inport->GetEntry("Winch_Revs");
 
// Outports
    __Actuator_DutyCycle__Entry = NTtable_Outport->GetEntry("Actuator_DutyCycle");
    __Algae_Wheel_Inside_DutyCycle__Entry = NTtable_Outport->GetEntry("Algae_Wheel_Inside_DutyCycle");
    __Algae_Wheel_Outside_DutyCycle__Entry = NTtable_Outport->GetEntry("Algae_Wheel_Outside_DutyCycle");
    __BackLeft_Drive_DutyCycle__Entry = NTtable_Outport->GetEntry("BackLeft_Drive_DutyCycle");
    __BackLeft_Steer_DutyCycle__Entry = NTtable_Outport->GetEntry("BackLeft_Steer_DutyCycle");
    __BackRight_Drive_DutyCycle__Entry = NTtable_Outport->GetEntry("BackRight_Drive_DutyCycle");
    __BackRight_Steer_DutyCycle__Entry = NTtable_Outport->GetEntry("BackRight_Steer_DutyCycle");
    __CANdle_LED_ID__Entry = NTtable_Outport->GetEntry("CANdle_LED_ID");
    __Coral_Arm_DutyCycle__Entry = NTtable_Outport->GetEntry("Coral_Arm_DutyCycle");
    __Coral_Wheel_DutyCycle__Entry = NTtable_Outport->GetEntry("Coral_Wheel_DutyCycle");
    __Disable_Wheels__Entry = NTtable_Outport->GetEntry("Disable_Wheels");
    __Elevator_DutyCycle__Entry = NTtable_Outport->GetEntry("Elevator_DutyCycle");
    __Enable_Wheels__Entry = NTtable_Outport->GetEntry("Enable_Wheels");
    __FrontLeft_Drive_DutyCycle__Entry = NTtable_Outport->GetEntry("FrontLeft_Drive_DutyCycle");
    __FrontLeft_Steer_DutyCycle__Entry = NTtable_Outport->GetEntry("FrontLeft_Steer_DutyCycle");
    __FrontRight_Drive_DutyCycle__Entry = NTtable_Outport->GetEntry("FrontRight_Drive_DutyCycle");
    __FrontRight_Steer_DutyCycle__Entry = NTtable_Outport->GetEntry("FrontRight_Steer_DutyCycle");
    __Gyro_Angle_Offset_Total__Entry = NTtable_Outport->GetEntry("Gyro_Angle_Offset_Total");
    __Reset_Wheel_Offsets__Entry = NTtable_Outport->GetEntry("Reset_Wheel_Offsets");
    __Swerve_Motors_Disabled__Entry = NTtable_Outport->GetEntry("Swerve_Motors_Disabled");
    __Winch_DutyCycle__Entry = NTtable_Outport->GetEntry("Winch_DutyCycle");
 
// Test Points
    __AT_Relative_Error_Angle__Entry = NTtable_TPoint->GetEntry("AT_Relative_Error_Angle");
    __AT_Relative_Error_Enable__Entry = NTtable_TPoint->GetEntry("AT_Relative_Error_Enable");
    __AT_Relative_Error_Error_X__Entry = NTtable_TPoint->GetEntry("AT_Relative_Error_Error_X");
    __AT_Relative_Error_Error_Y__Entry = NTtable_TPoint->GetEntry("AT_Relative_Error_Error_Y");
    __Active_GameState__Entry = NTtable_TPoint->GetEntry("Active_GameState");
    __Actuator_Cmd__Entry = NTtable_TPoint->GetEntry("Actuator_Cmd");
    __Align_Center__Entry = NTtable_TPoint->GetEntry("Align_Center");
    __Align_Center_a__Entry = NTtable_TPoint->GetEntry("Align_Center_a");
    __Align_Left__Entry = NTtable_TPoint->GetEntry("Align_Left");
    __Align_Left_d__Entry = NTtable_TPoint->GetEntry("Align_Left_d");
    __Align_Right__Entry = NTtable_TPoint->GetEntry("Align_Right");
    __Auto_AT_On_Target__Entry = NTtable_TPoint->GetEntry("Auto_AT_On_Target");
    __Auto_AT_Relative_Enable__Entry = NTtable_TPoint->GetEntry("Auto_AT_Relative_Enable");
    __Auto_AT_Relative_Error_Angle__Entry = NTtable_TPoint->GetEntry("Auto_AT_Relative_Error_Angle");
    __Auto_AT_Relative_Error_X__Entry = NTtable_TPoint->GetEntry("Auto_AT_Relative_Error_X");
    __Auto_AT_Relative_Error_Y__Entry = NTtable_TPoint->GetEntry("Auto_AT_Relative_Error_Y");
    __Auto_Step_ID__Entry = NTtable_TPoint->GetEntry("Auto_Step_ID");
    __BL_Desired_Module_Angle__Entry = NTtable_TPoint->GetEntry("BL_Desired_Module_Angle");
    __BL_Desired_Wheel_Speed__Entry = NTtable_TPoint->GetEntry("BL_Desired_Wheel_Speed");
    __BL_Desired_Wheel_Speed_in__Entry = NTtable_TPoint->GetEntry("BL_Desired_Wheel_Speed_in");
    __BL_Steer_Module_Angle__Entry = NTtable_TPoint->GetEntry("BL_Steer_Module_Angle");
    __BR_Desired_Module_Angle__Entry = NTtable_TPoint->GetEntry("BR_Desired_Module_Angle");
    __BR_Desired_Wheel_Speed__Entry = NTtable_TPoint->GetEntry("BR_Desired_Wheel_Speed");
    __BR_Desired_Wheel_Speed_in__Entry = NTtable_TPoint->GetEntry("BR_Desired_Wheel_Speed_in");
    __BR_Steer_Module_Angle__Entry = NTtable_TPoint->GetEntry("BR_Steer_Module_Angle");
    __Button_Disable_Wheels__Entry = NTtable_TPoint->GetEntry("Button_Disable_Wheels");
    __Button_Enable_Wheels__Entry = NTtable_TPoint->GetEntry("Button_Enable_Wheels");
    __Button_Reset_Wheel_Offsets__Entry = NTtable_TPoint->GetEntry("Button_Reset_Wheel_Offsets");
    __Coral_ArmAngle_Error__Entry = NTtable_TPoint->GetEntry("Coral_ArmAngle_Error");
    __Coral_Arm_Angle_Desired__Entry = NTtable_TPoint->GetEntry("Coral_Arm_Angle_Desired");
    __Coral_Arm_Angle_Desired_f__Entry = NTtable_TPoint->GetEntry("Coral_Arm_Angle_Desired_f");
    __Coral_Arm_Angle_Desired_merge__Entry = NTtable_TPoint->GetEntry("Coral_Arm_Angle_Desired_merge");
    __Coral_Arm_Angle_Measured__Entry = NTtable_TPoint->GetEntry("Coral_Arm_Angle_Measured");
    __Coral_Pickup_Lower_Wait_State__Entry = NTtable_TPoint->GetEntry("Coral_Pickup_Lower_Wait_State");
    __Coral_Pickup_Lower_Wait_State_m__Entry = NTtable_TPoint->GetEntry("Coral_Pickup_Lower_Wait_State_m");
    __Coral_Score_j__Entry = NTtable_TPoint->GetEntry("Coral_Score_j");
    __Coral_Wheel_DC__Entry = NTtable_TPoint->GetEntry("Coral_Wheel_DC");
    __Coral_Wheel_DC_a__Entry = NTtable_TPoint->GetEntry("Coral_Wheel_DC_a");
    __Drive_Engage_Hook__Entry = NTtable_TPoint->GetEntry("Drive_Engage_Hook");
    __Drive_Joystick_X__Entry = NTtable_TPoint->GetEntry("Drive_Joystick_X");
    __Drive_Joystick_Y__Entry = NTtable_TPoint->GetEntry("Drive_Joystick_Y");
    __Drive_Joystick_Z__Entry = NTtable_TPoint->GetEntry("Drive_Joystick_Z");
    __Drive_Joystick_Z_Mode__Entry = NTtable_TPoint->GetEntry("Drive_Joystick_Z_Mode");
    __Elevator_Error__Entry = NTtable_TPoint->GetEntry("Elevator_Error");
    __Elevator_Height_Desired__Entry = NTtable_TPoint->GetEntry("Elevator_Height_Desired");
    __Elevator_Height_Desired_h__Entry = NTtable_TPoint->GetEntry("Elevator_Height_Desired_h");
    __Elevator_Height_Desired_merge__Entry = NTtable_TPoint->GetEntry("Elevator_Height_Desired_merge");
    __Elevator_Height_Measured__Entry = NTtable_TPoint->GetEntry("Elevator_Height_Measured");
    __Elevator_Height_Measured_Raw__Entry = NTtable_TPoint->GetEntry("Elevator_Height_Measured_Raw");
    __Elevator_Height_Offset__Entry = NTtable_TPoint->GetEntry("Elevator_Height_Offset");
    __Elevator_Integral__Entry = NTtable_TPoint->GetEntry("Elevator_Integral");
    __Elevator_Integral_o__Entry = NTtable_TPoint->GetEntry("Elevator_Integral_o");
    __Elevator_LowerPickup_Reset__Entry = NTtable_TPoint->GetEntry("Elevator_LowerPickup_Reset");
    __Elevator_LowerPickup_Reset_g__Entry = NTtable_TPoint->GetEntry("Elevator_LowerPickup_Reset_g");
    __Elevator_LowerPickup_Reset_merg__Entry = NTtable_TPoint->GetEntry("Elevator_LowerPickup_Reset_merg");
    __Elevator_Proportional__Entry = NTtable_TPoint->GetEntry("Elevator_Proportional");
    __Elevator_Proportional_l__Entry = NTtable_TPoint->GetEntry("Elevator_Proportional_l");
    __FL_Desired_Module_Angle__Entry = NTtable_TPoint->GetEntry("FL_Desired_Module_Angle");
    __FL_Desired_Wheel_Speed__Entry = NTtable_TPoint->GetEntry("FL_Desired_Wheel_Speed");
    __FL_Desired_Wheel_Speed_in__Entry = NTtable_TPoint->GetEntry("FL_Desired_Wheel_Speed_in");
    __FL_Steer_Module_Angle__Entry = NTtable_TPoint->GetEntry("FL_Steer_Module_Angle");
    __FR_Desired_Module_Angle__Entry = NTtable_TPoint->GetEntry("FR_Desired_Module_Angle");
    __FR_Desired_Wheel_Speed__Entry = NTtable_TPoint->GetEntry("FR_Desired_Wheel_Speed");
    __FR_Desired_Wheel_Speed_in__Entry = NTtable_TPoint->GetEntry("FR_Desired_Wheel_Speed_in");
    __FR_Steer_Module_Angle__Entry = NTtable_TPoint->GetEntry("FR_Steer_Module_Angle");
    __Face_Away_Driver__Entry = NTtable_TPoint->GetEntry("Face_Away_Driver");
    __Face_Left_Driver__Entry = NTtable_TPoint->GetEntry("Face_Left_Driver");
    __Face_Right_Driver__Entry = NTtable_TPoint->GetEntry("Face_Right_Driver");
    __Face_Toward_Driver__Entry = NTtable_TPoint->GetEntry("Face_Toward_Driver");
    __Gamepad_B1_A_out__Entry = NTtable_TPoint->GetEntry("Gamepad_B1_A_out");
    __Gamepad_B3_X_out__Entry = NTtable_TPoint->GetEntry("Gamepad_B3_X_out");
    __Gamepad_B4_Y_out__Entry = NTtable_TPoint->GetEntry("Gamepad_B4_Y_out");
    __Gamepad_Back_out__Entry = NTtable_TPoint->GetEntry("Gamepad_Back_out");
    __Gamepad_POV_Down__Entry = NTtable_TPoint->GetEntry("Gamepad_POV_Down");
    __Gamepad_POV_Down_k__Entry = NTtable_TPoint->GetEntry("Gamepad_POV_Down_k");
    __Gamepad_POV_Left__Entry = NTtable_TPoint->GetEntry("Gamepad_POV_Left");
    __Gamepad_POV_Left_p__Entry = NTtable_TPoint->GetEntry("Gamepad_POV_Left_p");
    __Gamepad_POV_Right__Entry = NTtable_TPoint->GetEntry("Gamepad_POV_Right");
    __Gamepad_POV_Up__Entry = NTtable_TPoint->GetEntry("Gamepad_POV_Up");
    __Gamepad_RT_out__Entry = NTtable_TPoint->GetEntry("Gamepad_RT_out");
    __Gamepad_Start_out__Entry = NTtable_TPoint->GetEntry("Gamepad_Start_out");
    __Gyro_Angle_Calibrated_deg__Entry = NTtable_TPoint->GetEntry("Gyro_Angle_Calibrated_deg");
    __Gyro_Angle_Field_rad__Entry = NTtable_TPoint->GetEntry("Gyro_Angle_Field_rad");
    __Gyro_Angle_SPF__Entry = NTtable_TPoint->GetEntry("Gyro_Angle_SPF");
    __Gyro_Angle_rad__Entry = NTtable_TPoint->GetEntry("Gyro_Angle_rad");
    __Is_Absolute_Steering_SPF__Entry = NTtable_TPoint->GetEntry("Is_Absolute_Steering_SPF");
    __Is_Absolute_Translation_SPF__Entry = NTtable_TPoint->GetEntry("Is_Absolute_Translation_SPF");
    __Is_Boosting__Entry = NTtable_TPoint->GetEntry("Is_Boosting");
    __KF_Position_X__Entry = NTtable_TPoint->GetEntry("KF_Position_X");
    __KF_Position_Y__Entry = NTtable_TPoint->GetEntry("KF_Position_Y");
    __Limelight_Tag_Corrected_Angle__Entry = NTtable_TPoint->GetEntry("Limelight_Tag_Corrected_Angle");
    __Limelight_Tag_Corrected_X__Entry = NTtable_TPoint->GetEntry("Limelight_Tag_Corrected_X");
    __Limelight_Tag_Corrected_Y__Entry = NTtable_TPoint->GetEntry("Limelight_Tag_Corrected_Y");
    __Odom_Position_X__Entry = NTtable_TPoint->GetEntry("Odom_Position_X");
    __Odom_Position_Y__Entry = NTtable_TPoint->GetEntry("Odom_Position_Y");
    __Odometry_X_global_TEAR_ft__Entry = NTtable_TPoint->GetEntry("Odometry_X_global_TEAR_ft");
    __Odometry_X_global_est_ft__Entry = NTtable_TPoint->GetEntry("Odometry_X_global_est_ft");
    __Odometry_Y_global_TEAR_ft__Entry = NTtable_TPoint->GetEntry("Odometry_Y_global_TEAR_ft");
    __Odometry_Y_global_est_ft__Entry = NTtable_TPoint->GetEntry("Odometry_Y_global_est_ft");
    __Out__Entry = NTtable_TPoint->GetEntry("Out");
    __Out_h__Entry = NTtable_TPoint->GetEntry("Out_h");
    __Path_Enable__Entry = NTtable_TPoint->GetEntry("Path_Enable");
    __Path_ID__Entry = NTtable_TPoint->GetEntry("Path_ID");
    __Reefscape_Motors_Enable_merge__Entry = NTtable_TPoint->GetEntry("Reefscape_Motors_Enable_merge");
    __Robot_Reached_Destination_l__Entry = NTtable_TPoint->GetEntry("Robot_Reached_Destination_l");
    __Set_Algae_Level__Entry = NTtable_TPoint->GetEntry("Set_Algae_Level");
    __Set_Algae_Level_p__Entry = NTtable_TPoint->GetEntry("Set_Algae_Level_p");
    __Set_Coral_Level__Entry = NTtable_TPoint->GetEntry("Set_Coral_Level");
    __Set_Coral_Level_j__Entry = NTtable_TPoint->GetEntry("Set_Coral_Level_j");
    __Spline_Enable__Entry = NTtable_TPoint->GetEntry("Spline_Enable");
    __Spline_Follow_Index__Entry = NTtable_TPoint->GetEntry("Spline_Follow_Index");
    __Spline_Num_Poses__Entry = NTtable_TPoint->GetEntry("Spline_Num_Poses");
    __Spline_Out_Of_Bounds__Entry = NTtable_TPoint->GetEntry("Spline_Out_Of_Bounds");
    __Spline_Target_X__Entry = NTtable_TPoint->GetEntry("Spline_Target_X");
    __Spline_Target_Y__Entry = NTtable_TPoint->GetEntry("Spline_Target_Y");
    __State_ID_Auto__Entry = NTtable_TPoint->GetEntry("State_ID_Auto");
    __State_ID_Teleop__Entry = NTtable_TPoint->GetEntry("State_ID_Teleop");
    __Steer_Joystick_X__Entry = NTtable_TPoint->GetEntry("Steer_Joystick_X");
    __Steer_Joystick_Y__Entry = NTtable_TPoint->GetEntry("Steer_Joystick_Y");
    __Steer_Joystick_Z__Entry = NTtable_TPoint->GetEntry("Steer_Joystick_Z");
    __Steering_Abs_Angle__Entry = NTtable_TPoint->GetEntry("Steering_Abs_Angle");
    __Steering_Abs_Angle_Active__Entry = NTtable_TPoint->GetEntry("Steering_Abs_Angle_Active");
    __Steering_Abs_Cmd__Entry = NTtable_TPoint->GetEntry("Steering_Abs_Cmd");
    __Steering_Abs_Cmd_SPF__Entry = NTtable_TPoint->GetEntry("Steering_Abs_Cmd_SPF");
    __Steering_Abs_Gyro__Entry = NTtable_TPoint->GetEntry("Steering_Abs_Gyro");
    __Steering_Abs_Gyro_Latch__Entry = NTtable_TPoint->GetEntry("Steering_Abs_Gyro_Latch");
    __Steering_Localized_Cmd__Entry = NTtable_TPoint->GetEntry("Steering_Localized_Cmd");
    __Steering_Localized_PID__Entry = NTtable_TPoint->GetEntry("Steering_Localized_PID");
    __Steering_Rel_Cmd__Entry = NTtable_TPoint->GetEntry("Steering_Rel_Cmd");
    __Steering_Rel_Cmd_SPF__Entry = NTtable_TPoint->GetEntry("Steering_Rel_Cmd_SPF");
    __Swerve_Drive_Integral_Enable__Entry = NTtable_TPoint->GetEntry("Swerve_Drive_Integral_Enable");
    __Teleop_AT_On_Target__Entry = NTtable_TPoint->GetEntry("Teleop_AT_On_Target");
    __Test_Mode__Entry = NTtable_TPoint->GetEntry("Test_Mode");
    __Translation_Angle__Entry = NTtable_TPoint->GetEntry("Translation_Angle");
    __Translation_Angle_SPF__Entry = NTtable_TPoint->GetEntry("Translation_Angle_SPF");
    __Translation_Angle_l__Entry = NTtable_TPoint->GetEntry("Translation_Angle_l");
    __Translation_Speed__Entry = NTtable_TPoint->GetEntry("Translation_Speed");
    __Translation_Speed_RL__Entry = NTtable_TPoint->GetEntry("Translation_Speed_RL");
    __Translation_Speed_SPF__Entry = NTtable_TPoint->GetEntry("Translation_Speed_SPF");
    __Translation_Speed_g__Entry = NTtable_TPoint->GetEntry("Translation_Speed_g");
    __Translation_Steering_Cmd__Entry = NTtable_TPoint->GetEntry("Translation_Steering_Cmd");
    __UnitDelay2__Entry = NTtable_TPoint->GetEntry("UnitDelay2");
    __WhileIterator__Entry = NTtable_TPoint->GetEntry("WhileIterator");
    __Winch_Cmd__Entry = NTtable_TPoint->GetEntry("Winch_Cmd");
}
 
void SimulinkSmartDashboardInterface::PreStepCallback() {}
 
void SimulinkSmartDashboardInterface::PostStepCallback()
{
    // Inports
    __Actuator_Revs__Entry.SetDouble(Code_Gen_Model_U.Actuator_Revs);
    __Algae_Limit_Switch__Entry.SetDouble(Code_Gen_Model_U.Algae_Limit_Switch);
    __BackLeft_Drive_Motor_Rev__Entry.SetDouble(Code_Gen_Model_U.BackLeft_Drive_Motor_Rev);
    __BackLeft_Drive_Motor_Speed__Entry.SetDouble(Code_Gen_Model_U.BackLeft_Drive_Motor_Speed);
    __BackLeft_Steer_Rev__Entry.SetDouble(Code_Gen_Model_U.BackLeft_Steer_Rev);
    __BackLeft_Turn_Offset__Entry.SetDouble(Code_Gen_Model_U.BackLeft_Turn_Offset);
    __BackRight_Drive_Motor_Rev__Entry.SetDouble(Code_Gen_Model_U.BackRight_Drive_Motor_Rev);
    __BackRight_Drive_Motor_Speed__Entry.SetDouble(Code_Gen_Model_U.BackRight_Drive_Motor_Speed);
    __BackRight_Steer_Rev__Entry.SetDouble(Code_Gen_Model_U.BackRight_Steer_Rev);
    __BackRight_Turn_Offset__Entry.SetDouble(Code_Gen_Model_U.BackRight_Turn_Offset);
    __Coral_Arm_Angle_Measured_Raw__Entry.SetDouble(Code_Gen_Model_U.Coral_Arm_Angle_Measured_Raw);
    __Coral_Limit_Switch__Entry.SetDouble(Code_Gen_Model_U.Coral_Limit_Switch);
    __Coral_TOF_Distance__Entry.SetDouble(Code_Gen_Model_U.Coral_TOF_Distance);
    __Elevator_Limit_Switch_Bottom__Entry.SetDouble(Code_Gen_Model_U.Elevator_Limit_Switch_Bottom);
    __Elevator_Limit_Switch_Top__Entry.SetDouble(Code_Gen_Model_U.Elevator_Limit_Switch_Top);
    __Elevator_Motor_Rev__Entry.SetDouble(Code_Gen_Model_U.Elevator_Motor_Rev);
    __FrontLeft_Drive_Motor_Rev__Entry.SetDouble(Code_Gen_Model_U.FrontLeft_Drive_Motor_Rev);
    __FrontLeft_Drive_Motor_Speed__Entry.SetDouble(Code_Gen_Model_U.FrontLeft_Drive_Motor_Speed);
    __FrontLeft_Steer_Rev__Entry.SetDouble(Code_Gen_Model_U.FrontLeft_Steer_Rev);
    __FrontLeft_Turn_Offset__Entry.SetDouble(Code_Gen_Model_U.FrontLeft_Turn_Offset);
    __FrontRight_Drive_Motor_Rev__Entry.SetDouble(Code_Gen_Model_U.FrontRight_Drive_Motor_Rev);
    __FrontRight_Drive_Motor_Speed__Entry.SetDouble(Code_Gen_Model_U.FrontRight_Drive_Motor_Speed);
    __FrontRight_Steer_Rev__Entry.SetDouble(Code_Gen_Model_U.FrontRight_Steer_Rev);
    __FrontRight_Turn_Offset__Entry.SetDouble(Code_Gen_Model_U.FrontRight_Turn_Offset);
    __GameState__Entry.SetDouble(Code_Gen_Model_U.GameState);
    __Gamepad_B1_A__Entry.SetDouble(Code_Gen_Model_U.Gamepad_B1_A);
    __Gamepad_B2_B__Entry.SetDouble(Code_Gen_Model_U.Gamepad_B2_B);
    __Gamepad_B3_X__Entry.SetDouble(Code_Gen_Model_U.Gamepad_B3_X);
    __Gamepad_B4_Y__Entry.SetDouble(Code_Gen_Model_U.Gamepad_B4_Y);
    __Gamepad_Back__Entry.SetDouble(Code_Gen_Model_U.Gamepad_Back);
    __Gamepad_LB__Entry.SetDouble(Code_Gen_Model_U.Gamepad_LB);
    __Gamepad_LT__Entry.SetDouble(Code_Gen_Model_U.Gamepad_LT);
    __Gamepad_POV__Entry.SetDouble(Code_Gen_Model_U.Gamepad_POV);
    __Gamepad_RB__Entry.SetDouble(Code_Gen_Model_U.Gamepad_RB);
    __Gamepad_RT__Entry.SetDouble(Code_Gen_Model_U.Gamepad_RT);
    __Gamepad_Start__Entry.SetDouble(Code_Gen_Model_U.Gamepad_Start);
    __Gamepad_Stick_Left_X__Entry.SetDouble(Code_Gen_Model_U.Gamepad_Stick_Left_X);
    __Gamepad_Stick_Left_Y__Entry.SetDouble(Code_Gen_Model_U.Gamepad_Stick_Left_Y);
    __Gamepad_Stick_Right_X__Entry.SetDouble(Code_Gen_Model_U.Gamepad_Stick_Right_X);
    __Gamepad_Stick_Right_Y__Entry.SetDouble(Code_Gen_Model_U.Gamepad_Stick_Right_Y);
    __Gyro_Angle__Entry.SetDouble(Code_Gen_Model_U.Gyro_Angle);
    __IsBlueAlliance__Entry.SetDouble(Code_Gen_Model_U.IsBlueAlliance);
    __Joystick_Left_B1__Entry.SetDouble(Code_Gen_Model_U.Joystick_Left_B1);
    __Joystick_Left_B10__Entry.SetDouble(Code_Gen_Model_U.Joystick_Left_B10);
    __Joystick_Left_B11__Entry.SetDouble(Code_Gen_Model_U.Joystick_Left_B11);
    __Joystick_Left_B12__Entry.SetDouble(Code_Gen_Model_U.Joystick_Left_B12);
    __Joystick_Left_B13__Entry.SetDouble(Code_Gen_Model_U.Joystick_Left_B13);
    __Joystick_Left_B14__Entry.SetDouble(Code_Gen_Model_U.Joystick_Left_B14);
    __Joystick_Left_B15__Entry.SetDouble(Code_Gen_Model_U.Joystick_Left_B15);
    __Joystick_Left_B16__Entry.SetDouble(Code_Gen_Model_U.Joystick_Left_B16);
    __Joystick_Left_B2__Entry.SetDouble(Code_Gen_Model_U.Joystick_Left_B2);
    __Joystick_Left_B3__Entry.SetDouble(Code_Gen_Model_U.Joystick_Left_B3);
    __Joystick_Left_B4__Entry.SetDouble(Code_Gen_Model_U.Joystick_Left_B4);
    __Joystick_Left_B5__Entry.SetDouble(Code_Gen_Model_U.Joystick_Left_B5);
    __Joystick_Left_B6__Entry.SetDouble(Code_Gen_Model_U.Joystick_Left_B6);
    __Joystick_Left_B7__Entry.SetDouble(Code_Gen_Model_U.Joystick_Left_B7);
    __Joystick_Left_B8__Entry.SetDouble(Code_Gen_Model_U.Joystick_Left_B8);
    __Joystick_Left_B9__Entry.SetDouble(Code_Gen_Model_U.Joystick_Left_B9);
    __Joystick_Left_POV__Entry.SetDouble(Code_Gen_Model_U.Joystick_Left_POV);
    __Joystick_Left_X__Entry.SetDouble(Code_Gen_Model_U.Joystick_Left_X);
    __Joystick_Left_Y__Entry.SetDouble(Code_Gen_Model_U.Joystick_Left_Y);
    __Joystick_Left_Z__Entry.SetDouble(Code_Gen_Model_U.Joystick_Left_Z);
    __Joystick_Right_B1__Entry.SetDouble(Code_Gen_Model_U.Joystick_Right_B1);
    __Joystick_Right_B10__Entry.SetDouble(Code_Gen_Model_U.Joystick_Right_B10);
    __Joystick_Right_B11__Entry.SetDouble(Code_Gen_Model_U.Joystick_Right_B11);
    __Joystick_Right_B12__Entry.SetDouble(Code_Gen_Model_U.Joystick_Right_B12);
    __Joystick_Right_B13__Entry.SetDouble(Code_Gen_Model_U.Joystick_Right_B13);
    __Joystick_Right_B14__Entry.SetDouble(Code_Gen_Model_U.Joystick_Right_B14);
    __Joystick_Right_B15__Entry.SetDouble(Code_Gen_Model_U.Joystick_Right_B15);
    __Joystick_Right_B16__Entry.SetDouble(Code_Gen_Model_U.Joystick_Right_B16);
    __Joystick_Right_B2__Entry.SetDouble(Code_Gen_Model_U.Joystick_Right_B2);
    __Joystick_Right_B3__Entry.SetDouble(Code_Gen_Model_U.Joystick_Right_B3);
    __Joystick_Right_B4__Entry.SetDouble(Code_Gen_Model_U.Joystick_Right_B4);
    __Joystick_Right_B5__Entry.SetDouble(Code_Gen_Model_U.Joystick_Right_B5);
    __Joystick_Right_B6__Entry.SetDouble(Code_Gen_Model_U.Joystick_Right_B6);
    __Joystick_Right_B7__Entry.SetDouble(Code_Gen_Model_U.Joystick_Right_B7);
    __Joystick_Right_B8__Entry.SetDouble(Code_Gen_Model_U.Joystick_Right_B8);
    __Joystick_Right_B9__Entry.SetDouble(Code_Gen_Model_U.Joystick_Right_B9);
    __Joystick_Right_POV__Entry.SetDouble(Code_Gen_Model_U.Joystick_Right_POV);
    __Joystick_Right_X__Entry.SetDouble(Code_Gen_Model_U.Joystick_Right_X);
    __Joystick_Right_Y__Entry.SetDouble(Code_Gen_Model_U.Joystick_Right_Y);
    __Joystick_Right_Z__Entry.SetDouble(Code_Gen_Model_U.Joystick_Right_Z);
    __Limelight_Est_Pose_X__Entry.SetDouble(Code_Gen_Model_U.Limelight_Est_Pose_X);
    __Limelight_Est_Pose_Y__Entry.SetDouble(Code_Gen_Model_U.Limelight_Est_Pose_Y);
    __Limelight_Tag_Angle__Entry.SetDouble(Code_Gen_Model_U.Limelight_Tag_Angle);
    __Limelight_Tag_X__Entry.SetDouble(Code_Gen_Model_U.Limelight_Tag_X);
    __Limelight_Tag_Y__Entry.SetDouble(Code_Gen_Model_U.Limelight_Tag_Y);
    __MatchTime__Entry.SetDouble(Code_Gen_Model_U.MatchTime);
    __Num_Tags_Detected__Entry.SetDouble(Code_Gen_Model_U.Num_Tags_Detected);
    __Winch_Revs__Entry.SetDouble(Code_Gen_Model_U.Winch_Revs);
    // Outports
    __Actuator_DutyCycle__Entry.SetDouble(Code_Gen_Model_Y.Actuator_DutyCycle);
    __Algae_Wheel_Inside_DutyCycle__Entry.SetDouble(Code_Gen_Model_Y.Algae_Wheel_Inside_DutyCycle);
    __Algae_Wheel_Outside_DutyCycle__Entry.SetDouble(Code_Gen_Model_Y.Algae_Wheel_Outside_DutyCycle);
    __BackLeft_Drive_DutyCycle__Entry.SetDouble(Code_Gen_Model_Y.BackLeft_Drive_DutyCycle);
    __BackLeft_Steer_DutyCycle__Entry.SetDouble(Code_Gen_Model_Y.BackLeft_Steer_DutyCycle);
    __BackRight_Drive_DutyCycle__Entry.SetDouble(Code_Gen_Model_Y.BackRight_Drive_DutyCycle);
    __BackRight_Steer_DutyCycle__Entry.SetDouble(Code_Gen_Model_Y.BackRight_Steer_DutyCycle);
    __CANdle_LED_ID__Entry.SetDouble(Code_Gen_Model_Y.CANdle_LED_ID);
    __Coral_Arm_DutyCycle__Entry.SetDouble(Code_Gen_Model_Y.Coral_Arm_DutyCycle);
    __Coral_Wheel_DutyCycle__Entry.SetDouble(Code_Gen_Model_Y.Coral_Wheel_DutyCycle);
    __Disable_Wheels__Entry.SetDouble(Code_Gen_Model_Y.Disable_Wheels);
    __Elevator_DutyCycle__Entry.SetDouble(Code_Gen_Model_Y.Elevator_DutyCycle);
    __Enable_Wheels__Entry.SetDouble(Code_Gen_Model_Y.Enable_Wheels);
    __FrontLeft_Drive_DutyCycle__Entry.SetDouble(Code_Gen_Model_Y.FrontLeft_Drive_DutyCycle);
    __FrontLeft_Steer_DutyCycle__Entry.SetDouble(Code_Gen_Model_Y.FrontLeft_Steer_DutyCycle);
    __FrontRight_Drive_DutyCycle__Entry.SetDouble(Code_Gen_Model_Y.FrontRight_Drive_DutyCycle);
    __FrontRight_Steer_DutyCycle__Entry.SetDouble(Code_Gen_Model_Y.FrontRight_Steer_DutyCycle);
    __Gyro_Angle_Offset_Total__Entry.SetDouble(Code_Gen_Model_Y.Gyro_Angle_Offset_Total);
    __Reset_Wheel_Offsets__Entry.SetDouble(Code_Gen_Model_Y.Reset_Wheel_Offsets);
    __Swerve_Motors_Disabled__Entry.SetDouble(Code_Gen_Model_Y.Swerve_Motors_Disabled);
    __Winch_DutyCycle__Entry.SetDouble(Code_Gen_Model_Y.Winch_DutyCycle);
    // Test Points
    __AT_Relative_Error_Angle__Entry.SetDouble(Code_Gen_Model_B.AT_Relative_Error_Angle);
    __AT_Relative_Error_Enable__Entry.SetDouble(Code_Gen_Model_B.AT_Relative_Error_Enable);
    __AT_Relative_Error_Error_X__Entry.SetDouble(Code_Gen_Model_B.AT_Relative_Error_Error_X);
    __AT_Relative_Error_Error_Y__Entry.SetDouble(Code_Gen_Model_B.AT_Relative_Error_Error_Y);
    __Active_GameState__Entry.SetDouble(Code_Gen_Model_B.Active_GameState);
    __Actuator_Cmd__Entry.SetDouble(Code_Gen_Model_B.Actuator_Cmd);
    __Align_Center__Entry.SetDouble(Code_Gen_Model_B.Align_Center);
    __Align_Center_a__Entry.SetDouble(Code_Gen_Model_B.Align_Center_a);
    __Align_Left__Entry.SetDouble(Code_Gen_Model_B.Align_Left);
    __Align_Left_d__Entry.SetDouble(Code_Gen_Model_B.Align_Left_d);
    __Align_Right__Entry.SetDouble(Code_Gen_Model_B.Align_Right);
    __Auto_AT_On_Target__Entry.SetDouble(Code_Gen_Model_B.Auto_AT_On_Target);
    __Auto_AT_Relative_Enable__Entry.SetDouble(Code_Gen_Model_B.Auto_AT_Relative_Enable);
    __Auto_AT_Relative_Error_Angle__Entry.SetDouble(Code_Gen_Model_B.Auto_AT_Relative_Error_Angle);
    __Auto_AT_Relative_Error_X__Entry.SetDouble(Code_Gen_Model_B.Auto_AT_Relative_Error_X);
    __Auto_AT_Relative_Error_Y__Entry.SetDouble(Code_Gen_Model_B.Auto_AT_Relative_Error_Y);
    __Auto_Step_ID__Entry.SetDouble(Code_Gen_Model_B.Auto_Step_ID);
    __BL_Desired_Module_Angle__Entry.SetDouble(Code_Gen_Model_B.BL_Desired_Module_Angle);
    __BL_Desired_Wheel_Speed__Entry.SetDouble(Code_Gen_Model_B.BL_Desired_Wheel_Speed);
    __BL_Desired_Wheel_Speed_in__Entry.SetDouble(Code_Gen_Model_B.BL_Desired_Wheel_Speed_in);
    __BL_Steer_Module_Angle__Entry.SetDouble(Code_Gen_Model_B.BL_Steer_Module_Angle);
    __BR_Desired_Module_Angle__Entry.SetDouble(Code_Gen_Model_B.BR_Desired_Module_Angle);
    __BR_Desired_Wheel_Speed__Entry.SetDouble(Code_Gen_Model_B.BR_Desired_Wheel_Speed);
    __BR_Desired_Wheel_Speed_in__Entry.SetDouble(Code_Gen_Model_B.BR_Desired_Wheel_Speed_in);
    __BR_Steer_Module_Angle__Entry.SetDouble(Code_Gen_Model_B.BR_Steer_Module_Angle);
    __Button_Disable_Wheels__Entry.SetDouble(Code_Gen_Model_B.Button_Disable_Wheels);
    __Button_Enable_Wheels__Entry.SetDouble(Code_Gen_Model_B.Button_Enable_Wheels);
    __Button_Reset_Wheel_Offsets__Entry.SetDouble(Code_Gen_Model_B.Button_Reset_Wheel_Offsets);
    __Coral_ArmAngle_Error__Entry.SetDouble(Code_Gen_Model_B.Coral_ArmAngle_Error);
    __Coral_Arm_Angle_Desired__Entry.SetDouble(Code_Gen_Model_B.Coral_Arm_Angle_Desired);
    __Coral_Arm_Angle_Desired_f__Entry.SetDouble(Code_Gen_Model_B.Coral_Arm_Angle_Desired_f);
    __Coral_Arm_Angle_Desired_merge__Entry.SetDouble(Code_Gen_Model_B.Coral_Arm_Angle_Desired_merge);
    __Coral_Arm_Angle_Measured__Entry.SetDouble(Code_Gen_Model_B.Coral_Arm_Angle_Measured);
    __Coral_Pickup_Lower_Wait_State__Entry.SetDouble(Code_Gen_Model_B.Coral_Pickup_Lower_Wait_State);
    __Coral_Pickup_Lower_Wait_State_m__Entry.SetDouble(Code_Gen_Model_B.Coral_Pickup_Lower_Wait_State_m);
    __Coral_Score_j__Entry.SetDouble(Code_Gen_Model_B.Coral_Score_j);
    __Coral_Wheel_DC__Entry.SetDouble(Code_Gen_Model_B.Coral_Wheel_DC);
    __Coral_Wheel_DC_a__Entry.SetDouble(Code_Gen_Model_B.Coral_Wheel_DC_a);
    __Drive_Engage_Hook__Entry.SetDouble(Code_Gen_Model_B.Drive_Engage_Hook);
    __Drive_Joystick_X__Entry.SetDouble(Code_Gen_Model_B.Drive_Joystick_X);
    __Drive_Joystick_Y__Entry.SetDouble(Code_Gen_Model_B.Drive_Joystick_Y);
    __Drive_Joystick_Z__Entry.SetDouble(Code_Gen_Model_B.Drive_Joystick_Z);
    __Drive_Joystick_Z_Mode__Entry.SetDouble(Code_Gen_Model_B.Drive_Joystick_Z_Mode);
    __Elevator_Error__Entry.SetDouble(Code_Gen_Model_B.Elevator_Error);
    __Elevator_Height_Desired__Entry.SetDouble(Code_Gen_Model_B.Elevator_Height_Desired);
    __Elevator_Height_Desired_h__Entry.SetDouble(Code_Gen_Model_B.Elevator_Height_Desired_h);
    __Elevator_Height_Desired_merge__Entry.SetDouble(Code_Gen_Model_B.Elevator_Height_Desired_merge);
    __Elevator_Height_Measured__Entry.SetDouble(Code_Gen_Model_B.Elevator_Height_Measured);
    __Elevator_Height_Measured_Raw__Entry.SetDouble(Code_Gen_Model_B.Elevator_Height_Measured_Raw);
    __Elevator_Height_Offset__Entry.SetDouble(Code_Gen_Model_B.Elevator_Height_Offset);
    __Elevator_Integral__Entry.SetDouble(Code_Gen_Model_B.Elevator_Integral);
    __Elevator_Integral_o__Entry.SetDouble(Code_Gen_Model_B.Elevator_Integral_o);
    __Elevator_LowerPickup_Reset__Entry.SetDouble(Code_Gen_Model_B.Elevator_LowerPickup_Reset);
    __Elevator_LowerPickup_Reset_g__Entry.SetDouble(Code_Gen_Model_B.Elevator_LowerPickup_Reset_g);
    __Elevator_LowerPickup_Reset_merg__Entry.SetDouble(Code_Gen_Model_B.Elevator_LowerPickup_Reset_merg);
    __Elevator_Proportional__Entry.SetDouble(Code_Gen_Model_B.Elevator_Proportional);
    __Elevator_Proportional_l__Entry.SetDouble(Code_Gen_Model_B.Elevator_Proportional_l);
    __FL_Desired_Module_Angle__Entry.SetDouble(Code_Gen_Model_B.FL_Desired_Module_Angle);
    __FL_Desired_Wheel_Speed__Entry.SetDouble(Code_Gen_Model_B.FL_Desired_Wheel_Speed);
    __FL_Desired_Wheel_Speed_in__Entry.SetDouble(Code_Gen_Model_B.FL_Desired_Wheel_Speed_in);
    __FL_Steer_Module_Angle__Entry.SetDouble(Code_Gen_Model_B.FL_Steer_Module_Angle);
    __FR_Desired_Module_Angle__Entry.SetDouble(Code_Gen_Model_B.FR_Desired_Module_Angle);
    __FR_Desired_Wheel_Speed__Entry.SetDouble(Code_Gen_Model_B.FR_Desired_Wheel_Speed);
    __FR_Desired_Wheel_Speed_in__Entry.SetDouble(Code_Gen_Model_B.FR_Desired_Wheel_Speed_in);
    __FR_Steer_Module_Angle__Entry.SetDouble(Code_Gen_Model_B.FR_Steer_Module_Angle);
    __Face_Away_Driver__Entry.SetDouble(Code_Gen_Model_B.Face_Away_Driver);
    __Face_Left_Driver__Entry.SetDouble(Code_Gen_Model_B.Face_Left_Driver);
    __Face_Right_Driver__Entry.SetDouble(Code_Gen_Model_B.Face_Right_Driver);
    __Face_Toward_Driver__Entry.SetDouble(Code_Gen_Model_B.Face_Toward_Driver);
    __Gamepad_B1_A_out__Entry.SetDouble(Code_Gen_Model_B.Gamepad_B1_A_out);
    __Gamepad_B3_X_out__Entry.SetDouble(Code_Gen_Model_B.Gamepad_B3_X_out);
    __Gamepad_B4_Y_out__Entry.SetDouble(Code_Gen_Model_B.Gamepad_B4_Y_out);
    __Gamepad_Back_out__Entry.SetDouble(Code_Gen_Model_B.Gamepad_Back_out);
    __Gamepad_POV_Down__Entry.SetDouble(Code_Gen_Model_B.Gamepad_POV_Down);
    __Gamepad_POV_Down_k__Entry.SetDouble(Code_Gen_Model_B.Gamepad_POV_Down_k);
    __Gamepad_POV_Left__Entry.SetDouble(Code_Gen_Model_B.Gamepad_POV_Left);
    __Gamepad_POV_Left_p__Entry.SetDouble(Code_Gen_Model_B.Gamepad_POV_Left_p);
    __Gamepad_POV_Right__Entry.SetDouble(Code_Gen_Model_B.Gamepad_POV_Right);
    __Gamepad_POV_Up__Entry.SetDouble(Code_Gen_Model_B.Gamepad_POV_Up);
    __Gamepad_RT_out__Entry.SetDouble(Code_Gen_Model_B.Gamepad_RT_out);
    __Gamepad_Start_out__Entry.SetDouble(Code_Gen_Model_B.Gamepad_Start_out);
    __Gyro_Angle_Calibrated_deg__Entry.SetDouble(Code_Gen_Model_B.Gyro_Angle_Calibrated_deg);
    __Gyro_Angle_Field_rad__Entry.SetDouble(Code_Gen_Model_B.Gyro_Angle_Field_rad);
    __Gyro_Angle_SPF__Entry.SetDouble(Code_Gen_Model_B.Gyro_Angle_SPF);
    __Gyro_Angle_rad__Entry.SetDouble(Code_Gen_Model_B.Gyro_Angle_rad);
    __Is_Absolute_Steering_SPF__Entry.SetDouble(Code_Gen_Model_B.Is_Absolute_Steering_SPF);
    __Is_Absolute_Translation_SPF__Entry.SetDouble(Code_Gen_Model_B.Is_Absolute_Translation_SPF);
    __Is_Boosting__Entry.SetDouble(Code_Gen_Model_B.Is_Boosting);
    __KF_Position_X__Entry.SetDouble(Code_Gen_Model_B.KF_Position_X);
    __KF_Position_Y__Entry.SetDouble(Code_Gen_Model_B.KF_Position_Y);
    __Limelight_Tag_Corrected_Angle__Entry.SetDouble(Code_Gen_Model_B.Limelight_Tag_Corrected_Angle);
    __Limelight_Tag_Corrected_X__Entry.SetDouble(Code_Gen_Model_B.Limelight_Tag_Corrected_X);
    __Limelight_Tag_Corrected_Y__Entry.SetDouble(Code_Gen_Model_B.Limelight_Tag_Corrected_Y);
    __Odom_Position_X__Entry.SetDouble(Code_Gen_Model_B.Odom_Position_X);
    __Odom_Position_Y__Entry.SetDouble(Code_Gen_Model_B.Odom_Position_Y);
    __Odometry_X_global_TEAR_ft__Entry.SetDouble(Code_Gen_Model_B.Odometry_X_global_TEAR_ft);
    __Odometry_X_global_est_ft__Entry.SetDouble(Code_Gen_Model_B.Odometry_X_global_est_ft);
    __Odometry_Y_global_TEAR_ft__Entry.SetDouble(Code_Gen_Model_B.Odometry_Y_global_TEAR_ft);
    __Odometry_Y_global_est_ft__Entry.SetDouble(Code_Gen_Model_B.Odometry_Y_global_est_ft);
    __Out__Entry.SetDouble(Code_Gen_Model_B.Out);
    __Out_h__Entry.SetDouble(Code_Gen_Model_B.Out_h);
    __Path_Enable__Entry.SetDouble(Code_Gen_Model_B.Path_Enable);
    __Path_ID__Entry.SetDouble(Code_Gen_Model_B.Path_ID);
    __Reefscape_Motors_Enable_merge__Entry.SetDouble(Code_Gen_Model_B.Reefscape_Motors_Enable_merge);
    __Robot_Reached_Destination_l__Entry.SetDouble(Code_Gen_Model_B.Robot_Reached_Destination_l);
    __Set_Algae_Level__Entry.SetDouble(Code_Gen_Model_B.Set_Algae_Level);
    __Set_Algae_Level_p__Entry.SetDouble(Code_Gen_Model_B.Set_Algae_Level_p);
    __Set_Coral_Level__Entry.SetDouble(Code_Gen_Model_B.Set_Coral_Level);
    __Set_Coral_Level_j__Entry.SetDouble(Code_Gen_Model_B.Set_Coral_Level_j);
    __Spline_Enable__Entry.SetDouble(Code_Gen_Model_B.Spline_Enable);
    __Spline_Follow_Index__Entry.SetDouble(Code_Gen_Model_B.Spline_Follow_Index);
    __Spline_Num_Poses__Entry.SetDouble(Code_Gen_Model_B.Spline_Num_Poses);
    __Spline_Out_Of_Bounds__Entry.SetDouble(Code_Gen_Model_B.Spline_Out_Of_Bounds);
    __Spline_Target_X__Entry.SetDouble(Code_Gen_Model_B.Spline_Target_X);
    __Spline_Target_Y__Entry.SetDouble(Code_Gen_Model_B.Spline_Target_Y);
    __State_ID_Auto__Entry.SetDouble(Code_Gen_Model_B.State_ID_Auto);
    __State_ID_Teleop__Entry.SetDouble(Code_Gen_Model_B.State_ID_Teleop);
    __Steer_Joystick_X__Entry.SetDouble(Code_Gen_Model_B.Steer_Joystick_X);
    __Steer_Joystick_Y__Entry.SetDouble(Code_Gen_Model_B.Steer_Joystick_Y);
    __Steer_Joystick_Z__Entry.SetDouble(Code_Gen_Model_B.Steer_Joystick_Z);
    __Steering_Abs_Angle__Entry.SetDouble(Code_Gen_Model_B.Steering_Abs_Angle);
    __Steering_Abs_Angle_Active__Entry.SetDouble(Code_Gen_Model_B.Steering_Abs_Angle_Active);
    __Steering_Abs_Cmd__Entry.SetDouble(Code_Gen_Model_B.Steering_Abs_Cmd);
    __Steering_Abs_Cmd_SPF__Entry.SetDouble(Code_Gen_Model_B.Steering_Abs_Cmd_SPF);
    __Steering_Abs_Gyro__Entry.SetDouble(Code_Gen_Model_B.Steering_Abs_Gyro);
    __Steering_Abs_Gyro_Latch__Entry.SetDouble(Code_Gen_Model_B.Steering_Abs_Gyro_Latch);
    __Steering_Localized_Cmd__Entry.SetDouble(Code_Gen_Model_B.Steering_Localized_Cmd);
    __Steering_Localized_PID__Entry.SetDouble(Code_Gen_Model_B.Steering_Localized_PID);
    __Steering_Rel_Cmd__Entry.SetDouble(Code_Gen_Model_B.Steering_Rel_Cmd);
    __Steering_Rel_Cmd_SPF__Entry.SetDouble(Code_Gen_Model_B.Steering_Rel_Cmd_SPF);
    __Swerve_Drive_Integral_Enable__Entry.SetDouble(Code_Gen_Model_B.Swerve_Drive_Integral_Enable);
    __Teleop_AT_On_Target__Entry.SetDouble(Code_Gen_Model_B.Teleop_AT_On_Target);
    __Test_Mode__Entry.SetDouble(Code_Gen_Model_B.Test_Mode);
    __Translation_Angle__Entry.SetDouble(Code_Gen_Model_B.Translation_Angle);
    __Translation_Angle_SPF__Entry.SetDouble(Code_Gen_Model_B.Translation_Angle_SPF);
    __Translation_Angle_l__Entry.SetDouble(Code_Gen_Model_B.Translation_Angle_l);
    __Translation_Speed__Entry.SetDouble(Code_Gen_Model_B.Translation_Speed);
    __Translation_Speed_RL__Entry.SetDouble(Code_Gen_Model_B.Translation_Speed_RL);
    __Translation_Speed_SPF__Entry.SetDouble(Code_Gen_Model_B.Translation_Speed_SPF);
    __Translation_Speed_g__Entry.SetDouble(Code_Gen_Model_B.Translation_Speed_g);
    __Translation_Steering_Cmd__Entry.SetDouble(Code_Gen_Model_B.Translation_Steering_Cmd);
    __UnitDelay2__Entry.SetDouble(Code_Gen_Model_B.UnitDelay2);
    __WhileIterator__Entry.SetDouble(Code_Gen_Model_B.WhileIterator);
    __Winch_Cmd__Entry.SetDouble(Code_Gen_Model_B.Winch_Cmd);
    // Tunable Parameters
    __AT_Integral_Enable_Error_Angle__Entry.SetDouble(AT_Integral_Enable_Error_Angle);
    __AT_Integral_Enable_Error_XY__Entry.SetDouble(AT_Integral_Enable_Error_XY);
    __AT_Max_Error_Angle__Entry.SetDouble(AT_Max_Error_Angle);
    __AT_Max_Error_XY__Entry.SetDouble(AT_Max_Error_XY);
    __AT_On_Target_Time__Entry.SetDouble(AT_On_Target_Time);
    __AT_Reef_Target_Algae_X__Entry.SetDouble(AT_Reef_Target_Algae_X);
    __AT_Reef_Target_Algae_Y__Entry.SetDouble(AT_Reef_Target_Algae_Y);
    __AT_Reef_Target_Center_Y__Entry.SetDouble(AT_Reef_Target_Center_Y);
    __AT_Reef_Target_L1_X__Entry.SetDouble(AT_Reef_Target_L1_X);
    __AT_Reef_Target_L2_L3_X__Entry.SetDouble(AT_Reef_Target_L2_L3_X);
    __AT_Reef_Target_L4_X__Entry.SetDouble(AT_Reef_Target_L4_X);
    __AT_Reef_Target_Left_Y__Entry.SetDouble(AT_Reef_Target_Left_Y);
    __AT_Reef_Target_Right_Y__Entry.SetDouble(AT_Reef_Target_Right_Y);
    __AT_Steering_Error_Angle_Gain_P__Entry.SetDouble(AT_Steering_Error_Angle_Gain_P);
    __AT_Steering_Speed_Max__Entry.SetDouble(AT_Steering_Speed_Max);
    __AT_Translation_Control_Gain_Field__Entry.SetDouble(AT_Translation_Control_Gain_Field);
    __AT_Translation_Control_Gain_Relative__Entry.SetDouble(AT_Translation_Control_Gain_Relative);
    __AT_Translation_Speed_Max_Field__Entry.SetDouble(AT_Translation_Speed_Max_Field);
    __AT_Translation_Speed_Max_Relative__Entry.SetDouble(AT_Translation_Speed_Max_Relative);
    __Actuator_DC__Entry.SetDouble(Actuator_DC);
    __Actuator_Rev_Startup_Range__Entry.SetDouble(Actuator_Rev_Startup_Range);
    __Actuator_Rev_Target__Entry.SetDouble(Actuator_Rev_Target);
    __Algae_Eject_Time__Entry.SetDouble(Algae_Eject_Time);
    __Algae_Hold_DC__Entry.SetDouble(Algae_Hold_DC);
    __Algae_Pull_In_DC__Entry.SetDouble(Algae_Pull_In_DC);
    __Algae_Push_Out_DC__Entry.SetDouble(Algae_Push_Out_DC);
    __Auto_Algae_Height_Time__Entry.SetDouble(Auto_Algae_Height_Time);
    __Auto_Backup_Time_Processor__Entry.SetDouble(Auto_Backup_Time_Processor);
    __Auto_Backup_Time_Reef__Entry.SetDouble(Auto_Backup_Time_Reef);
    __Auto_Path1_Delay_to_L2_Time__Entry.SetDouble(Auto_Path1_Delay_to_L2_Time);
    __Auto_Path1_Delay_to_L4_Time__Entry.SetDouble(Auto_Path1_Delay_to_L4_Time);
    __Auto_Path2_Delay_to_L4_Time__Entry.SetDouble(Auto_Path2_Delay_to_L4_Time);
    __Auto_Speed_Algae__Entry.SetDouble(Auto_Speed_Algae);
    __Auto_Speed_Coral__Entry.SetDouble(Auto_Speed_Coral);
    __Auto_Speed_Processor__Entry.SetDouble(Auto_Speed_Processor);
    __Auto_Speed_Reef__Entry.SetDouble(Auto_Speed_Reef);
    __Auto_Starting_Position__Entry.SetDouble(Auto_Starting_Position);
    __Boost_Trigger_Decreasing_Limit__Entry.SetDouble(Boost_Trigger_Decreasing_Limit);
    __Boost_Trigger_High_Speed__Entry.SetDouble(Boost_Trigger_High_Speed);
    __Boost_Trigger_Increasing_Limit__Entry.SetDouble(Boost_Trigger_Increasing_Limit);
    __Boost_Trigger_Low_Speed__Entry.SetDouble(Boost_Trigger_Low_Speed);
    __Coral_Arm_Angle_Coral_Score_Lower_Rate__Entry.SetDouble(Coral_Arm_Angle_Coral_Score_Lower_Rate);
    __Coral_Arm_Angle_Error_Threshold__Entry.SetDouble(Coral_Arm_Angle_Error_Threshold);
    __Coral_Arm_Angle_L1__Entry.SetDouble(Coral_Arm_Angle_L1);
    __Coral_Arm_Angle_L2__Entry.SetDouble(Coral_Arm_Angle_L2);
    __Coral_Arm_Angle_L3__Entry.SetDouble(Coral_Arm_Angle_L3);
    __Coral_Arm_Angle_L4__Entry.SetDouble(Coral_Arm_Angle_L4);
    __Coral_Arm_Angle_L4_Eject_Auto__Entry.SetDouble(Coral_Arm_Angle_L4_Eject_Auto);
    __Coral_Arm_Angle_L4_Eject_Teleop__Entry.SetDouble(Coral_Arm_Angle_L4_Eject_Teleop);
    __Coral_Arm_Angle_Neg_Threshold__Entry.SetDouble(Coral_Arm_Angle_Neg_Threshold);
    __Coral_Arm_Angle_Pos_Threshold__Entry.SetDouble(Coral_Arm_Angle_Pos_Threshold);
    __Coral_Arm_Angle_Start__Entry.SetDouble(Coral_Arm_Angle_Start);
    __Coral_Arm_Angle_Start_Thresh__Entry.SetDouble(Coral_Arm_Angle_Start_Thresh);
    __Coral_Arm_Angle_Up__Entry.SetDouble(Coral_Arm_Angle_Up);
    __Coral_Arm_DC_Inc_RL__Entry.SetDouble(Coral_Arm_DC_Inc_RL);
    __Coral_Arm_Gain_Int__Entry.SetDouble(Coral_Arm_Gain_Int);
    __Coral_Arm_Gain_Prop__Entry.SetDouble(Coral_Arm_Gain_Prop);
    __Coral_Arm_Int_IC__Entry.SetDouble(Coral_Arm_Int_IC);
    __Coral_Arm_Int_LL__Entry.SetDouble(Coral_Arm_Int_LL);
    __Coral_Arm_Int_UL__Entry.SetDouble(Coral_Arm_Int_UL);
    __Coral_Arm_Manual_Gain__Entry.SetDouble(Coral_Arm_Manual_Gain);
    __Coral_Arm_Neg90_DC__Entry.SetDouble(Coral_Arm_Neg90_DC);
    __Coral_Arm_Pos90_DC__Entry.SetDouble(Coral_Arm_Pos90_DC);
    __Coral_Detect_Distance__Entry.SetDouble(Coral_Detect_Distance);
    __Coral_Eject_Time__Entry.SetDouble(Coral_Eject_Time);
    __Coral_Motor_DC_Eject__Entry.SetDouble(Coral_Motor_DC_Eject);
    __Coral_Motor_DC_Hold__Entry.SetDouble(Coral_Motor_DC_Hold);
    __Coral_Motor_DC_Pickup__Entry.SetDouble(Coral_Motor_DC_Pickup);
    __Drive_Engage_Hook_Angle__Entry.SetDouble(Drive_Engage_Hook_Angle);
    __Drive_Engage_Hook_Speed__Entry.SetDouble(Drive_Engage_Hook_Speed);
    __Drive_Motor_Control_D__Entry.SetDouble(Drive_Motor_Control_D);
    __Drive_Motor_Control_D_FilterCoeff__Entry.SetDouble(Drive_Motor_Control_D_FilterCoeff);
    __Drive_Motor_Control_D_LL__Entry.SetDouble(Drive_Motor_Control_D_LL);
    __Drive_Motor_Control_D_UL__Entry.SetDouble(Drive_Motor_Control_D_UL);
    __Drive_Motor_Control_FF__Entry.SetDouble(Drive_Motor_Control_FF);
    __Drive_Motor_Control_I__Entry.SetDouble(Drive_Motor_Control_I);
    __Drive_Motor_Control_I_LL__Entry.SetDouble(Drive_Motor_Control_I_LL);
    __Drive_Motor_Control_I_UL__Entry.SetDouble(Drive_Motor_Control_I_UL);
    __Drive_Motor_Control_P__Entry.SetDouble(Drive_Motor_Control_P);
    __Drive_Motor_Control_Sign_Change_Deadband__Entry.SetDouble(Drive_Motor_Control_Sign_Change_Deadband);
    __Elevator_Bottom_DC__Entry.SetDouble(Elevator_Bottom_DC);
    __Elevator_DC_Inc_RL__Entry.SetDouble(Elevator_DC_Inc_RL);
    __Elevator_Error_Bottom_Disable__Entry.SetDouble(Elevator_Error_Bottom_Disable);
    __Elevator_Error_Increase__Entry.SetDouble(Elevator_Error_Increase);
    __Elevator_Gain_Int__Entry.SetDouble(Elevator_Gain_Int);
    __Elevator_Gain_Prop__Entry.SetDouble(Elevator_Gain_Prop);
    __Elevator_Height_Algae_High__Entry.SetDouble(Elevator_Height_Algae_High);
    __Elevator_Height_Algae_Low__Entry.SetDouble(Elevator_Height_Algae_Low);
    __Elevator_Height_Algae_Score__Entry.SetDouble(Elevator_Height_Algae_Score);
    __Elevator_Height_Bottom__Entry.SetDouble(Elevator_Height_Bottom);
    __Elevator_Height_Bottom_Pre__Entry.SetDouble(Elevator_Height_Bottom_Pre);
    __Elevator_Height_Coral_Arm_Low_Thresh__Entry.SetDouble(Elevator_Height_Coral_Arm_Low_Thresh);
    __Elevator_Height_Coral_Score_Lower_Rate__Entry.SetDouble(Elevator_Height_Coral_Score_Lower_Rate);
    __Elevator_Height_End_Game__Entry.SetDouble(Elevator_Height_End_Game);
    __Elevator_Height_Error_Threshold__Entry.SetDouble(Elevator_Height_Error_Threshold);
    __Elevator_Height_L1__Entry.SetDouble(Elevator_Height_L1);
    __Elevator_Height_L2__Entry.SetDouble(Elevator_Height_L2);
    __Elevator_Height_L2_Eject__Entry.SetDouble(Elevator_Height_L2_Eject);
    __Elevator_Height_L3__Entry.SetDouble(Elevator_Height_L3);
    __Elevator_Height_L3_Eject__Entry.SetDouble(Elevator_Height_L3_Eject);
    __Elevator_Height_L4__Entry.SetDouble(Elevator_Height_L4);
    __Elevator_Height_Lower__Entry.SetDouble(Elevator_Height_Lower);
    __Elevator_Height_Manual_Gain__Entry.SetDouble(Elevator_Height_Manual_Gain);
    __Elevator_Height_PickupLower_Reset__Entry.SetDouble(Elevator_Height_PickupLower_Reset);
    __Elevator_Height_Prepare__Entry.SetDouble(Elevator_Height_Prepare);
    __Elevator_Height_Raise__Entry.SetDouble(Elevator_Height_Raise);
    __Elevator_Height_Top_Reset__Entry.SetDouble(Elevator_Height_Top_Reset);
    __Elevator_Hold_at_Top_DC__Entry.SetDouble(Elevator_Hold_at_Top_DC);
    __Elevator_Int_IC__Entry.SetDouble(Elevator_Int_IC);
    __Elevator_Int_LL__Entry.SetDouble(Elevator_Int_LL);
    __Elevator_Int_UL__Entry.SetDouble(Elevator_Int_UL);
    __Elevator_Limit_Switch_Debounce_F2T__Entry.SetDouble(Elevator_Limit_Switch_Debounce_F2T);
    __Elevator_Limit_Switch_Debounce_T2F__Entry.SetDouble(Elevator_Limit_Switch_Debounce_T2F);
    __Elevator_LowerPickup_Time__Entry.SetDouble(Elevator_LowerPickup_Time);
    __Elevator_MotorRev_to_Inch__Entry.SetDouble(Elevator_MotorRev_to_Inch);
    __Elevator_Total_LL__Entry.SetDouble(Elevator_Total_LL);
    __Elevator_Total_UL__Entry.SetDouble(Elevator_Total_UL);
    __Gyro_Calibration_Auto_Center__Entry.SetDouble(Gyro_Calibration_Auto_Center);
    __Gyro_Calibration_Auto_Left__Entry.SetDouble(Gyro_Calibration_Auto_Left);
    __Gyro_Calibration_Auto_Right__Entry.SetDouble(Gyro_Calibration_Auto_Right);
    __Gyro_Calibration_Default__Entry.SetDouble(Gyro_Calibration_Default);
    __Gyro_Calibration_Reset_Flag__Entry.SetDouble(Gyro_Calibration_Reset_Flag);
    __KF_Enable__Entry.SetDouble(KF_Enable);
    __L4_Switch_Time__Entry.SetDouble(L4_Switch_Time);
    __Limelight_Tag_Angle_Offset__Entry.SetDouble(Limelight_Tag_Angle_Offset);
    __Limelight_Tag_X_Offset__Entry.SetDouble(Limelight_Tag_X_Offset);
    __Limelight_Tag_Y_Offset__Entry.SetDouble(Limelight_Tag_Y_Offset);
    __MatchTime_Skip_Coral_Pickup__Entry.SetDouble(MatchTime_Skip_Coral_Pickup);
    __MatchTime_Skip_Second_L4__Entry.SetDouble(MatchTime_Skip_Second_L4);
    __Odometry_IC_X__Entry.SetDouble(Odometry_IC_X);
    __Odometry_IC_Y__Entry.SetDouble(Odometry_IC_Y);
    __Odometry_Reset_IC__Entry.SetDouble(Odometry_Reset_IC);
    __Odometry_X_Y_TEAR__Entry.SetDouble(Odometry_X_Y_TEAR);
    __Spline_Last_Pose_Distance_to_Velocity_Gain__Entry.SetDouble(Spline_Last_Pose_Distance_to_Velocity_Gain);
    __Spline_Max_Centripital_Acceleration__Entry.SetDouble(Spline_Max_Centripital_Acceleration);
    __Spline_Pose_Num_Before_End_Reduce_Speed__Entry.SetDouble(Spline_Pose_Num_Before_End_Reduce_Speed);
    __Spline_Stop_Radius__Entry.SetDouble(Spline_Stop_Radius);
    __Spline_Velocity_Multiplier_TEST__Entry.SetDouble(Spline_Velocity_Multiplier_TEST);
    __Steering_Absolute_Cmd_Approach_Zero_Error_Thresh__Entry.SetDouble(Steering_Absolute_Cmd_Approach_Zero_Error_Thresh);
    __Steering_Absolute_Cmd_Approach_Zero_Final_Thresh__Entry.SetDouble(Steering_Absolute_Cmd_Approach_Zero_Final_Thresh);
    __Steering_Absolute_Cmd_NonZero_Error_Thresh__Entry.SetDouble(Steering_Absolute_Cmd_NonZero_Error_Thresh);
    __Steering_Absolute_Cmd_NonZero_Final_Scale_Factor__Entry.SetDouble(Steering_Absolute_Cmd_NonZero_Final_Scale_Factor);
    __Steering_Absolute_Cmd_Rate_Limit_Dec__Entry.SetDouble(Steering_Absolute_Cmd_Rate_Limit_Dec);
    __Steering_Absolute_Cmd_Rate_Limit_Inc__Entry.SetDouble(Steering_Absolute_Cmd_Rate_Limit_Inc);
    __Steering_Heading_Control_D__Entry.SetDouble(Steering_Heading_Control_D);
    __Steering_Heading_Control_D_FilterCoeff__Entry.SetDouble(Steering_Heading_Control_D_FilterCoeff);
    __Steering_Heading_Control_D_LL__Entry.SetDouble(Steering_Heading_Control_D_LL);
    __Steering_Heading_Control_D_UL__Entry.SetDouble(Steering_Heading_Control_D_UL);
    __Steering_Heading_Control_Deadzone__Entry.SetDouble(Steering_Heading_Control_Deadzone);
    __Steering_Heading_Control_I__Entry.SetDouble(Steering_Heading_Control_I);
    __Steering_Heading_Control_I_LL__Entry.SetDouble(Steering_Heading_Control_I_LL);
    __Steering_Heading_Control_I_UL__Entry.SetDouble(Steering_Heading_Control_I_UL);
    __Steering_Heading_Control_P__Entry.SetDouble(Steering_Heading_Control_P);
    __Steering_Heading_Control_Total_LL__Entry.SetDouble(Steering_Heading_Control_Total_LL);
    __Steering_Heading_Control_Total_UL__Entry.SetDouble(Steering_Heading_Control_Total_UL);
    __Steering_Motor_Control_D__Entry.SetDouble(Steering_Motor_Control_D);
    __Steering_Motor_Control_D_FilterCoeff__Entry.SetDouble(Steering_Motor_Control_D_FilterCoeff);
    __Steering_Motor_Control_D_LL__Entry.SetDouble(Steering_Motor_Control_D_LL);
    __Steering_Motor_Control_D_UL__Entry.SetDouble(Steering_Motor_Control_D_UL);
    __Steering_Motor_Control_I__Entry.SetDouble(Steering_Motor_Control_I);
    __Steering_Motor_Control_I_LL__Entry.SetDouble(Steering_Motor_Control_I_LL);
    __Steering_Motor_Control_I_UL__Entry.SetDouble(Steering_Motor_Control_I_UL);
    __Steering_Motor_Control_P__Entry.SetDouble(Steering_Motor_Control_P);
    __Steering_Relative_Cmd_Approach_Zero_Error_Thresh__Entry.SetDouble(Steering_Relative_Cmd_Approach_Zero_Error_Thresh);
    __Steering_Relative_Cmd_Approach_Zero_Final_Thresh__Entry.SetDouble(Steering_Relative_Cmd_Approach_Zero_Final_Thresh);
    __Steering_Relative_Cmd_NonZero_Error_Thresh__Entry.SetDouble(Steering_Relative_Cmd_NonZero_Error_Thresh);
    __Steering_Relative_Cmd_NonZero_Final_Scale_Factor__Entry.SetDouble(Steering_Relative_Cmd_NonZero_Final_Scale_Factor);
    __Steering_Relative_Cmd_Rate_Limit_Dec__Entry.SetDouble(Steering_Relative_Cmd_Rate_Limit_Dec);
    __Steering_Relative_Cmd_Rate_Limit_Inc__Entry.SetDouble(Steering_Relative_Cmd_Rate_Limit_Inc);
    __Steering_Relative_Gain__Entry.SetDouble(Steering_Relative_Gain);
    __Steering_Twist_Gain__Entry.SetDouble(Steering_Twist_Gain);
    __TEST_CANdle_Flag__Entry.SetDouble(TEST_CANdle_Flag);
    __TEST_CANdle_LED_ID__Entry.SetDouble(TEST_CANdle_LED_ID);
    __TEST_Swerve_Mode_Override_Flag__Entry.SetDouble(TEST_Swerve_Mode_Override_Flag);
    __TEST_Swerve_Mode_Steering__Entry.SetDouble(TEST_Swerve_Mode_Steering);
    __TEST_Swerve_Mode_Translation__Entry.SetDouble(TEST_Swerve_Mode_Translation);
    __Translation_Speed_Approach_Zero_Error_Thresh__Entry.SetDouble(Translation_Speed_Approach_Zero_Error_Thresh);
    __Translation_Speed_Approach_Zero_Final_Thresh__Entry.SetDouble(Translation_Speed_Approach_Zero_Final_Thresh);
    __Translation_Speed_NonZero_Error_Thresh__Entry.SetDouble(Translation_Speed_NonZero_Error_Thresh);
    __Translation_Speed_NonZero_Final_Scale_Factor__Entry.SetDouble(Translation_Speed_NonZero_Final_Scale_Factor);
    __Translation_Speed_Rate_Limit_Dec__Entry.SetDouble(Translation_Speed_Rate_Limit_Dec);
    __Translation_Speed_Rate_Limit_Inc__Entry.SetDouble(Translation_Speed_Rate_Limit_Inc);
    __Translation_Twist_Gain__Entry.SetDouble(Translation_Twist_Gain);
    __Twist_Deadzone_neg__Entry.SetDouble(Twist_Deadzone_neg);
    __Twist_Deadzone_pos__Entry.SetDouble(Twist_Deadzone_pos);
    __Winch_Hold_DC__Entry.SetDouble(Winch_Hold_DC);
    __Winch_Rev_Target__Entry.SetDouble(Winch_Rev_Target);
    __Winch_Spool_DC__Entry.SetDouble(Winch_Spool_DC);
}
// Why are you reading to the bottom of an autogen file?
// Get a life...
