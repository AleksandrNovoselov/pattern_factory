#pragma once
#include "Human.h"

struct Building
{
	virtual ~Building() = default;
	string name{};
	virtual Human* create() = 0;
};