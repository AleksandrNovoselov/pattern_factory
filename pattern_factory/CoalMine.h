#pragma once
#include "Mine.h"
#include "Coal.h"

struct CoalMine : public Mine
{
	CoalMine()
	{
		nameMine = "�������� �����";
	}

	Resource* create() override
	{
		return new Coal;
	}
};
