#pragma once
#include "Resource.h"

struct Coal :public Resource
{
	Coal()
	{
		nameRes = "”голь";
		volume = 5000;
	}

	int Volume() override
	{
		return volume;
	}
};
