// ConsoleApplication8.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

void input(int* a, int* b, int* c)
{
	cout << "������ ������������ �������� �� ���� ����� " << endl;

	cout << "������� ������ �����" << endl;
	cin >> *a;

	cout << "������� ������ �����" << endl;
	cin >> *b;

	cout << "������� ������ �����" << endl;
	cin >> *c;
}

int solution(int a, int b, int c, int max)
{

	if ((a >= b) && (a >= c))
	{
		max = a;
	}

	if ((b >= a) && (b >= c))
	{
		max = b;
	}

	if ((c >= b) && (c >= a))
	{
		max = c;
	}

	return max;
}

void output(int max)
{
	cout << "���������� ����� = " << max << endl;
	getchar();
	getchar();
}

int main()
{
	setlocale(LC_ALL, "rus");
	int a = 0, b = 0, c = 0, max = 0;
	input(&a, &b, &c);
	max = solution(a, b, c, max);
	output(max);

	return 0;
}