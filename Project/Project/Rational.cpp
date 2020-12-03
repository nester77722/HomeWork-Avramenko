#include "Rational.h"

Rational::Rational()
{
	chisl = 0;
	znam = 1;
}

Rational::Rational(int chisl)
{
	this->chisl = chisl;
	znam = 1;
}

Rational::Rational(int chisl, int znam)
{
	this->chisl = chisl;
	if (znam == 0)
	{
		std::cout << "Знаменатель не может быть равен 0!\n";

		this->znam = 1;
	}
	else
	{
		this->znam = znam;
	}

}

Rational Rational::Dividing(const Rational& other)
{
	return Rational(this->chisl * other.znam, this->znam * other.chisl);
}

Rational Rational::operator/(const Rational& other)
{
	return Dividing(other);
}

void Rational::Show()
{
	std::cout << chisl << "|" << znam << "\n";
}
