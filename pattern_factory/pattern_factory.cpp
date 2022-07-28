#include <iostream>
#include <string>
#include "Human.h"
#include "Resource.h"
#include "Barracks.h"
#include "GoldMine.h"
#include "CoalMine.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	char choice;
	Barracks barracks;
	GoldMine goldMine;
	CoalMine coalMine;
	
	cout << ">>> Добро пожаловать <<<\n";

	for (int i = 0; i < 3; i++)
	{
		cout << "> Что будем делать? <\n"
			<< "G - потроить золотую шахту\n"
			<< "C - потроить угольную шахту\n"
			<< "W - нанять рабочего\n";
		cin >> choice;
		choice = tolower(choice);
		switch (choice)
		{
			case 'g':
				{
					Resource* res= goldMine.create();
					cout << "Вы построили: " << goldMine.nameMine << ". Количество золота "
					<< res->Volume()<<endl;
				}
				break;
			case 'c':
				{
					Resource* res = coalMine.create();
					cout << "Вы построили: " << coalMine.nameMine << ". Количество угля "
					<< res->Volume() << endl;
				}
				break;
			case 'w':
				{
					Human* hum =barracks.create();
					cout << "Нанят: ";
					hum->print();
				}
				break;
			default:
				cout << "Неверный ввод\n";
				break;
		}
	}

    
}

