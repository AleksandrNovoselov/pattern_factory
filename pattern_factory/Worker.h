#pragma once
#include "Human.h"

struct Worker :public Human
{
	Worker()
	{
		name = "�������";
		cargo = 8;
		cost = 100;
	}
	void print() override
	{
		cout << name << " ���������: " << cost << " ����������� ����: " << cargo << endl;
		/*cout << "��������, ��� ��������� �����" << endl;
		cout << this<<endl;*/
	}
};


