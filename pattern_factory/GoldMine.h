#pragma once
#include "Mine.h"
#include "Gold.h"

struct GoldMine : public Mine
{
	GoldMine()
	{
		nameMine = "Золотая шахта";
	}

	Resource* create() override
	{
		return new Gold();
	}
};