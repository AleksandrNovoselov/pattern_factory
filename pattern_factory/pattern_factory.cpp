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
//struct Sluggard :public IfactoryWorker
//{
//	Sluggard()
//	{
//		name = "Лентяй";
//		cargo = 2;
//		cost = 50;
//	}
//	void print() override
//	{
//		cout << name << " Стоимость: " << cost<<" Переносимый груз: " << cargo << endl;
//	}
//};

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


struct Mine
{
	string name;
	int volume;
	virtual void print() = 0;
};

struct GoldMine: public Mine
{
	GoldMine()
	{
		name="Золотая шахта";
		volume=10000;
	}
	void print() override
	{
		cout << "Вы построили " << name << ". Количество золота " << volume << endl;
	}
};

struct CoalMine : public Mine
{
	CoalMine()
	{
		name = "Угольная шахта";
		volume = 10000;
	}
	void print() override
	{
		cout << "Вы построили " << name << ". Количество угля " << volume << endl;
	}
};

int main()
{
	setlocale(LC_ALL, "ru");
    
}

