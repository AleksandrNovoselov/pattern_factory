#pragma once
#include "Resource.h"

struct Gold :public Resource
{
	Gold()
	{
		nameRes = "������";
		volume = 10000;
	}

	int Volume() override
	{
		return volume;
	}
};

