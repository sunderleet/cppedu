﻿#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES

#include <iostream>
#include <Windows.h>
#include <math.h>
#include <stdio.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	double x = 3.74 * pow(10, -2), y = -0.825, z = 0.16 * pow(10, 2), v;

	/*printf("Введите значения x, y, z >> ");
	scanf("%lf %lf %lf", &x, &y, &z);*/

	v = (((1 + pow(sin(x + y), 2)) / abs(x - (2 * y) / (1 + pow(x, 2) * pow(y, 2)))) * pow(x, abs(y))) + pow(cos(atan((1 / z))), 2);
	printf("%lf", v);


	// .pfd answ = 1.0553, code answ = 1.055338

}

