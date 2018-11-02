#include <iostream>
#include <string>
#include "rational.h"
#include <cassert>

using namespace std;

Rational::Rational()
{
	num = 0.0;
	den = 1.0;
	assert(den > 0);
}

Rational::Rational(double _num, double _den)
{
	num = _num;
	den = _den;
}

Rational Rational::add(Rational b) 
{
	numt = ((num * b.den) + (den * b.num));
	dent = (den * b.den);

	Rational temp(numt, dent);
	return temp;
}

Rational Rational::sub(Rational b) 
{
	numt = (num + (-1 * b.num));
	dent = (den + (-1 * b.den));
	Rational temp(num, den);
	return temp;
}

Rational Rational::mul(Rational b) 
{
	numt = (num * b.num);
	dent = (den * b.den);
	
	Rational temp(numt, dent);
	return temp;
}

Rational Rational::div(Rational b) 
{
	numt = (num * b.den);
	dent = (den * b.num);
		
	Rational temp(numt, dent);
	return temp;
}

void Rational::print() const
{
	cout << num << "/" << den;
}

void Rational::read()
{
	cout << "Please enter the Numerator: ";
	cin >> num;
	cout << "Please enter the Denominator: ";
	cin >> den;
	string remainder;
	getline(cin, remainder);
}
