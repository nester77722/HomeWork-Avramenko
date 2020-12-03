#pragma once

#include <iostream>

class Rational
{
private:

	int znam; // Знаменатель
	int chisl; // Числитель

public:

	Rational(); // Конструктор по умолчанию

	Rational(int chisl); // Конструктор, принимающий числитель

	Rational(int chisl, int znam); // Конструктор, принимающий числитель и знаменатель

	Rational Dividing(const Rational& other); // Метод деления

	Rational operator/(const Rational& other); // Перегрузка оператора /

	void Show(); // Метод вывода на экран
};

