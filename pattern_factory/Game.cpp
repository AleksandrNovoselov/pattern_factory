#include "Game.h"

void Game::StartGame()
{
	cout << ">>> Добро пожаловать <<<\n";

	while (_flag)
	{
		cout << "> Что будем делать? <\n"
			<< "G - потроить золотую шахту\n"
			<< "C - потроить угольную шахту\n"
			<< "W - нанять рабочего\n"
			<< "E - выход\n";

		cin >> _choice;
		_choice = tolower(_choice);

		switch (_choice)
		{
		case 'g':
		{
			Resource* res = _goldMine.create();
			cout << "Вы построили: " << _goldMine.nameMine << ". Количество золота "
				<< res->Volume() << endl;
		}
		break;
		case 'c':
		{
			Resource* res = _coalMine.create();
			cout << "Вы построили: " << _coalMine.nameMine << ". Количество угля "
				<< res->Volume() << endl;
		}
		break;
		case 'w':
		{
			Human* hum = _barracks.create();
			cout << "Нанят: ";
			hum->print();
		}
		break;
		case 'e':
		{
			EndGame();
		}
		break;
		default:
			cout << "Неверный ввод\n";
			break;
		}
	}
}

void Game::EndGame()
{
	_flag = false;
}
