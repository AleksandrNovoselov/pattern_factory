#pragma once
#include "Mine.h"
#include "Gold.h"

struct GoldMine : public Mine
{
	GoldMine()
	{
		nameMine = "������� �����";
	}

	Resource* create() override
	{
		return new Gold();
	}
};