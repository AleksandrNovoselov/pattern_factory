#pragma once
#include "Resource.h"

struct Coal :public Resource
{
	Coal()
	{
		nameRes = "�����";
		volume = 5000;
	}

	int Volume() override
	{
		return volume;
	}
};
