#pragma once
#include "Barracks.h"
#include "CoalMine.h"
#include "GoldMine.h"

class Game
{
private:
	char _choice{};
	bool _flag{ true };

	Barracks _barracks;
	GoldMine _goldMine;
	CoalMine _coalMine;

	void EndGame();
public:
	void StartGame();
};
