#pragma once
class PositiveNumber
{
private:
	double _positiveNumber;
public:
	PositiveNumber();
	PositiveNumber(double positiveNumber);
	PositiveNumber(float positiveNumber);
	PositiveNumber(int positiveNumber);
	virtual ~PositiveNumber() = default;
	PositiveNumber(const PositiveNumber&) = default; // jawnie prosimy kompilator o wygenerowanie domyślnego konstruktora kopiującego, 
	// tak jak byśmy wstawili {} zamiast default
	// = delete , gdy chcemy zabronić kopiowania

	void setPositiveNumber(int positiveNumber);
	void setPositiveNumber(float positiveNumber);
	void setPositiveNumber(double positiveNumber);
	double getPositiveNumber() const;

	PositiveNumber& operator+(const PositiveNumber& second);
	PositiveNumber& operator-(const PositiveNumber& second);
	PositiveNumber& operator+(double second);
	PositiveNumber& operator-(double second);

};

