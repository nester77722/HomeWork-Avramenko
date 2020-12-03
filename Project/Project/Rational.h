#pragma once

#include <iostream>

class Rational
{
private:

	int znam; // �����������
	int chisl; // ���������

public:

	Rational(); // ����������� �� ���������

	Rational(int chisl); // �����������, ����������� ���������

	Rational(int chisl, int znam); // �����������, ����������� ��������� � �����������

	Rational Dividing(const Rational& other); // ����� �������

	Rational operator/(const Rational& other); // ���������� ��������� /

	void Show(); // ����� ������ �� �����
};

