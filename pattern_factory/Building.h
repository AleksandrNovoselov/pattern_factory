#pragma once
#include "Human.h"

struct Building
{
	string name;
	virtual Human* create() = 0;
};