#ifndef RATIONAL_H
#define RATIONAL_H

#include <string>

using namespace std;


class Rational
{
	public:
		Rational(); //Default Constructor
		Rational(double _num, double _den); // Constructor for Temp
				
		void read();

		Rational add(Rational b) ;
		Rational sub(Rational b) ;
		Rational mul(Rational b) ;
		Rational div(Rational b) ;
		void print() const;

	private:
	double num; //Numerator
	double den; //Denominator
	double numt;//Num for Temp
	double dent;//Den for Temp
};

#endif
