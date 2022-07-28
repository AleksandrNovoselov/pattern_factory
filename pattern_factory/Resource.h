#pragma once
#include <iostream>
using namespace std;

struct Resource
{
	string nameRes;
	int volume;
	virtual int Volume() = 0;
};
