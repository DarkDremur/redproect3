#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <iostream>
#include <Windows.h>

HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
//5 число в степень
void task5()
{
	int a, b;
	int res;

	printf("Введите число = ");
	scanf_s("%d", &a);
	printf("Введите cтепень = ");
	scanf_s("%d", &b);

	res = pow(a, b);

	printf("Ответ = %d", res);
}
//4 выбрать цвет шрифта
void task4()
{
	int text;
	printf("1 = Черный\t9 = Серый\n");
	printf("2 = Синий\t10 = Светло - синий\n");
	printf("3 = Зеленый\t11 = Светло - зеленый\n");
	printf("4 = Голубой\t12= Светло - голубой\n");
	printf("5 = Красный\t13 = Светло - красный\n");
	printf("6 = Лиловый\t14 = Светло - лиловый\n");
	printf("7 = Желтый\t15 = Светло - желтый\n");
	printf("8 = Белый\t16 = Ярко - белый\n\n");
	printf("Введите цвет текста: ");
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
//3 калькулятор
void task3()
{
	int a, b;
	int res;

	printf("Введите 1 число = ");
	scanf_s("%d", &a);
	printf("Введите 2 число = ");
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
//2 Определить, допущен ли студент к экзамену
void task2()
{
	int a, b, c, d, e, res;

	printf("Введите 1 оценку = ");
	scanf_s("%d", &a);
	printf("Введите 2 оценку = ");
	scanf_s("%d", &d);
	printf("Введите 3 оценку = ");
	scanf_s("%d", &b);
	printf("Введите 4 оценку = ");
	scanf_s("%d", &c);
	printf("Введите 5 оценку = ");
	scanf_s("%d", &e);

	res = (a + b + c + d + e) / 5;

	switch (res >= 4)
	{
	case 1:
	{
		printf("Студент не допушен");
	}break;
	case 4:
	{
		printf("Студент допушен");
	}break;
	default:
	{
		printf("Ошибка");
	}break;
	}

}
//1	Пользователь вводит два числа. Определить, равны ли эти числа, и если нет, вывести их на экран в порядке возрастания
void task1()
{
	int a, d;
	printf("Введите число а = ");
	scanf_s("%d", &a);
	printf("Введите число d = ");
	scanf_s("%d", &d);

	if (a == d)
	{
		printf("Эти числа равны %d = %d"), a, d;
	}
	else if (a < d)
	{
		printf("Число %d больше числа %d"), d, a;
	}
	else if (a > d)
	{
		printf("Число %d больше числа %d"), a, d;
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
		printf("Введите номер задания\n");
		printf("-------------------------------------------------------------------------------\n");
		printf("1 -Определить, равны ли эти числа, и если нет, вывести их на экран в по порядке\n");
		printf("-------------------------------------------------------------------------------\n");
		printf("2 - Определить, допущен ли студент к экзамену\n");
		printf("-------------------------------------------------------------------------------\n");
		printf("3 - калькулятор\n");
		printf("-------------------------------------------------------------------------------\n");
		printf("4 - выбрать цвет шрифта\n");
		printf("-------------------------------------------------------------------------------\n");
		printf("5 - число в степень\n");
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
		printf("Хотите продолжить 1/0\n");
		printf("-------------------------------------------------------------------------------\n");
		scanf_s("%d", &restart);
	} while (restart = 1);

}