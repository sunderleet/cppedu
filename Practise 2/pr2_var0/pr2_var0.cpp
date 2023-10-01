#define _CRT_SECURE_NO_WARNINGS // для использования printf и scanf ("небезопасные")
#define _USE_MATH_DEFINES // для использования предустановленных математических констант

// нужные библиотеки

#include <iostream>
#include <Windows.h>
#include <math.h>
#include <stdio.h>

int main()
{
	// для работы русского языка
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	// инициализируем переменные
	double x = 14.26;
	double y = -1.22;
	double z = 3.5 * pow(10, -2);
	double t;

	// ввод данных через консоль, можно убрать комментирование
	/*printf("Введите переменные x, y, z >> ");
	scanf("%lf %lf %lf", &x, &y, &z);*/

	// основная мат. формула, присвоение ответа переменной t
	t = (2 * cos((x - M_PI / 6)) / (0.5 + pow(sin(y), 2))) * (1 + (pow(z, 2)) / 3 - (pow(z, 2) / 15));

	// выводим переменную t (ответ)
	printf("t = %lf \n", t);
}

