#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <iostream>
#include <Windows.h>

HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
//5 ����� � �������
void task5()
{
	int a, b;
	int res;

	printf("������� ����� = ");
	scanf_s("%d", &a);
	printf("������� c������ = ");
	scanf_s("%d", &b);

	res = pow(a, b);

	printf("����� = %d", res);
}
//4 ������� ���� ������
void task4()
{
	int text;
	printf("1 = ������\t9 = �����\n");
	printf("2 = �����\t10 = ������ - �����\n");
	printf("3 = �������\t11 = ������ - �������\n");
	printf("4 = �������\t12= ������ - �������\n");
	printf("5 = �������\t13 = ������ - �������\n");
	printf("6 = �������\t14 = ������ - �������\n");
	printf("7 = ������\t15 = ������ - ������\n");
	printf("8 = �����\t16 = ���� - �����\n\n");
	printf("������� ���� ������: ");
	scanf_s("%d", &text);
	switch (text)
	{
	case 1: {SetConsoleTextAttribute(hConsole, 0); break; }
	case 2: {SetConsoleTextAttribute(hConsole, 1); break; }
	case 3: {SetConsoleTextAttribute(hConsole, 2); break; }
	case 4: {SetConsoleTextAttribute(hConsole, 3); break; }
	case 5: {SetConsoleTextAttribute(hConsole, 4); break; }
	case 6: {SetConsoleTextAttribute(hConsole, 5); break; }
	case 7: {SetConsoleTextAttribute(hConsole, 6); break; }
	case 8: {SetConsoleTextAttribute(hConsole, 7); break; }
	case 9: {SetConsoleTextAttribute(hConsole, 8); break; }
	case 10: {SetConsoleTextAttribute(hConsole, 9); break; }
	case 11: {SetConsoleTextAttribute(hConsole, 10); break; }
	case 12: {SetConsoleTextAttribute(hConsole, 11); break; }
	case 13: {SetConsoleTextAttribute(hConsole, 12); break; }
	case 14: {SetConsoleTextAttribute(hConsole, 13); break; }
	case 15: {SetConsoleTextAttribute(hConsole, 14); break; }
	case 16: {SetConsoleTextAttribute(hConsole, 15); break; }
	}
}
//3 �����������
void task3()
{
	int a, b;
	int res;

	printf("������� 1 ����� = ");
	scanf_s("%d", &a);
	printf("������� 2 ����� = ");
	scanf_s("%d", &b);

	res = a + b;
	printf("%d + %d = %d\n", a, b, res);
	res = a - b;
	printf("%d - %d = %d\n", a, b, res);
	res = a * b;
	printf("%d * %d = %d\n", a, b, res);
	res = a % b;
	printf("%d %% %d = %d\n", a, b, res);
}
//2 ����������, ������� �� ������� � ��������
void task2()
{
	int a, b, c, d, e, res;

	printf("������� 1 ������ = ");
	scanf_s("%d", &a);
	printf("������� 2 ������ = ");
	scanf_s("%d", &d);
	printf("������� 3 ������ = ");
	scanf_s("%d", &b);
	printf("������� 4 ������ = ");
	scanf_s("%d", &c);
	printf("������� 5 ������ = ");
	scanf_s("%d", &e);

	res = (a + b + c + d + e) / 5;

	switch (res >= 4)
	{
	case 1:
	{
		printf("������� �� �������");
	}break;
	case 4:
	{
		printf("������� �������");
	}break;
	default:
	{
		printf("������");
	}break;
	}

}
//1	������������ ������ ��� �����. ����������, ����� �� ��� �����, � ���� ���, ������� �� �� ����� � ������� �����������
void task1()
{
	int a, d;
	printf("������� ����� � = ");
	scanf_s("%d", &a);
	printf("������� ����� d = ");
	scanf_s("%d", &d);

	if (a == d)
	{
		printf("��� ����� ����� %d = %d"), a, d;
	}
	else if (a < d)
	{
		printf("����� %d ������ ����� %d"), d, a;
	}
	else if (a > d)
	{
		printf("����� %d ������ ����� %d"), a, d;
	}
}


int main()
{
	setlocale(LC_ALL, "");
	int task = 0;
	int restart = 0;

	do
	{
		printf("-------------------------------------------------------------------------------\n");
		printf("������� ����� �������\n");
		printf("-------------------------------------------------------------------------------\n");
		printf("1 -����������, ����� �� ��� �����, � ���� ���, ������� �� �� ����� � �� �������\n");
		printf("-------------------------------------------------------------------------------\n");
		printf("2 - ����������, ������� �� ������� � ��������\n");
		printf("-------------------------------------------------------------------------------\n");
		printf("3 - �����������\n");
		printf("-------------------------------------------------------------------------------\n");
		printf("4 - ������� ���� ������\n");
		printf("-------------------------------------------------------------------------------\n");
		printf("5 - ����� � �������\n");
		scanf_s("%d", &task);

		switch (task)
		{
		case 1:
		{
			task1();
		}break;
		case 2:
		{
			task2();
		}break;
		case 3:
		{
			task3();
		}break;
		case 4:
		{
			task4();
		}break;
		case 5:
		{
			task5();
		}break;
		}

		printf("-------------------------------------------------------------------------------\n");
		printf("������ ���������� 1/0\n");
		printf("-------------------------------------------------------------------------------\n");
		scanf_s("%d", &restart);
	} while (restart = 1);

}