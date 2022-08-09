#include "Game.h"

void Game::StartGame()
{
	cout << ">>> ����� ���������� <<<\n";

	while (_flag)
	{
		cout << "> ��� ����� ������? <\n"
			<< "G - �������� ������� �����\n"
			<< "C - �������� �������� �����\n"
			<< "W - ������ ��������\n"
			<< "E - �����\n";

		cin >> _choice;
		_choice = tolower(_choice);

		switch (_choice)
		{
		case 'g':
		{
			Resource* res = _goldMine.create();
			cout << "�� ���������: " << _goldMine.nameMine << ". ���������� ������ "
				<< res->Volume() << endl;
		}
		break;
		case 'c':
		{
			Resource* res = _coalMine.create();
			cout << "�� ���������: " << _coalMine.nameMine << ". ���������� ���� "
				<< res->Volume() << endl;
		}
		break;
		case 'w':
		{
			Human* hum = _barracks.create();
			cout << "�����: ";
			hum->print();
		}
		break;
		case 'e':
		{
			EndGame();
		}
		break;
		default:
			cout << "�������� ����\n";
			break;
		}
	}
}

void Game::EndGame()
{
	_flag = false;
}
