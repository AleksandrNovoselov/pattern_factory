#pragma once
#include "Building.h"
#include "Worker.h"

struct Barracks :public Building
{
	Barracks() { name = "�������"; }
	Human* create() override
	{
		return new Worker();
	}
};