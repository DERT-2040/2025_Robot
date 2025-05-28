#pragma once

// Local
#include "lib/include/Component.h"

class FMSInfo : public Component
{
public:
	void PreStepCallback() override;
	void PostStepCallback() override;
private:
};
