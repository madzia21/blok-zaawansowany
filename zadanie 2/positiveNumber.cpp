#include "positiveNumber.h"
#include <string>

PositiveNumber::PositiveNumber()
	: _positiveNumber(0.0)
{
}

PositiveNumber::PositiveNumber(double positiveNumber)
{
	setPositiveNumber(positiveNumber);
}
PositiveNumber::~PositiveNumber()
{
}

PositiveNumber::PositiveNumber(const PositiveNumber&)
{
}

PositiveNumber::PositiveNumber(int positiveNumber)
	: PositiveNumber(static_cast<double>(positiveNumber))
{
}

PositiveNumber::PositiveNumber(float positiveNumber)
	: PositiveNumber(static_cast<double>(positiveNumber))
{
}

void PositiveNumber::setPositiveNumber(int positiveNumber)
{
	setPositiveNumber(static_cast<double>(positiveNumber));
}


void PositiveNumber::setPositiveNumber(float positiveNumber)
{
	setPositiveNumber(static_cast<double>(positiveNumber));
}


void PositiveNumber::setPositiveNumber(double positiveNumber)
{
	if (positiveNumber < 0)
	{
		throw std::string("nie moze być liczba ujemna");
	}
	else
	{
		_positiveNumber = positiveNumber;
	}
}

double PositiveNumber::getPositiveNumber() const
{
	return _positiveNumber;
}

PositiveNumber& PositiveNumber::operator+(PositiveNumber& second)
{
	
}