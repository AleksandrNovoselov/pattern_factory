#include <iostream>
#include <string>
using namespace std;

struct Human
{
	string name;
	int cargo;
	int cost;
	virtual void print() = 0;
};

struct Worker:public Human
{
	Worker()
	{
		name= "Рабочий";
		cargo = 8;
		cost = 100;
	}
	void print() override
	{
		cout << name << " Стоимость: " << cost<<" Переносимый груз: "<<cargo<<endl;
	}
};

struct Building
{
	string name;
	virtual Human* create() = 0;
};

struct Barracks:public Building
{
	Barracks()	{name = "Казарма";	}
	Human* create() override
	{
		return new Worker();
	}
};


struct Resource
{
	string nameRes;
	int volume;
	virtual int Volume() = 0;
};

struct Gold:public Resource
{
	Gold()
	{
		nameRes = "Золото";
		volume = 10000;
	}

	int Volume() override
	{
		return volume;
	}
};

struct Coal:public Resource
{
	Coal()
	{
		nameRes = "Уголь";
		volume = 5000;
	}

	int Volume() override
	{
		return volume;
	}
};



struct Mine
{
	string nameMine;
	int volumeMine;
	virtual Resource* create() = 0;
};

struct GoldMine: public Mine
{
	GoldMine()
	{
		nameMine="Золотая шахта";
	}

	Resource* create() override
	{
		return new Gold();
	}
};

struct CoalMine : public Mine
{
	CoalMine()
	{
		nameMine = "Угольная шахта";
	}

	Resource* create() override
	{
		return new Coal;
	}
};


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
					cout << "Вы построили " << goldMine.nameMine << ". Количество золота " << res->Volume()<<endl;
				}
				break;
			case 'c':
				{
					Resource* res = coalMine.create();
					cout << "Вы построили " << coalMine.nameMine << ". Количество угля " << res->Volume() << endl;
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

