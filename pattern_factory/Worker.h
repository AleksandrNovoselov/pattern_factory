#pragma once
#include "Human.h"

struct Worker :public Human
{
	Worker()
	{
		name = "Рабочий";
		cargo = 8;
		cost = 100;
	}
	void print() override
	{
		cout << name << " Стоимость: " << cost << " Переносимый груз: " << cargo << endl;
		/*cout << "проверка, что создается новый" << endl;
		cout << this<<endl;*/
	}
};


