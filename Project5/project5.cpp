﻿// Lab_03_1.cpp
// < Печерна Каріна >
// Лабораторна робота № 3.1
// Розгалуження, задане формулою: функція однієї змінної.
// Варіант 11

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // вхідний параметр
	double y; // результат обчислення виразу
	double A; // проміжний результат - функціонально стала частина виразу
	double B; // проміжний результат - функціонально змінна частина виразу
	cout << "x = "; cin >> x;

	A = x * x;
	// спосіб 1: розгалуження в скороченій формі
	if (x <= -1)
		B = exp(x);
	if (-1 < x && x < 1)
		B = sin (1/(2+x))*sin (1 / (2 + x));
	if (x > 1)
		B = (cos(x)* cos(x)/1+sin (x));
	y = A + B;
	cout << endl;
	cout << "1) y = " << y << endl;
	// спосіб 2: розгалуження в повній формі
	if (x <= -1 )
		B = exp(x);
	else
		if (-1 < x && x < 1)
			B = sin(1 / (2 + x)) * sin(1 / (2 + x));
		else
			B = (cos(x) * cos(x) / 1 + sin(x));
	y = A + B;
	cout << "2) y = " << y << endl;
	cin.get();
	return 0;
}