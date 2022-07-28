#pragma once
#include <iostream>
using namespace std;

class Human
{
public:
	string name;
	int cargo;
	int cost;
	virtual void print() = 0;
};
