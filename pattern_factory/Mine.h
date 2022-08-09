#pragma once
#include"Resource.h"

struct Mine
{
	string nameMine{};
	int volumeMine{};
	virtual Resource* create() = 0;
};
