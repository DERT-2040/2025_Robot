#pragma once

// Local
#include "DertLib/include/Component.h"
#include "Code_Gen_Model_ert_rtw/Code_Gen_Model.h"

//frc
#include <frc/DriverStation.h>

class FMSInfo : public dlib::Component
{
public:
	void PreStepCallback() override;
	void PostStepCallback() override;
private:
	bool hasIntChanged(int current, int& previous);
	int previous = -1; 
};
