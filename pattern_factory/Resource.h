#pragma once
#include <iostream>
using namespace std;

struct Resource
{
	string nameRes{};
	int volume{ 0 };
	virtual int Volume() = 0;
};
