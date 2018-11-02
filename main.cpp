#include <iostream>
#include <string>
#include "rational.h"
#include <cassert>

using namespace std;

int main()
{
	Rational frac1;
	Rational frac2;

	cout << endl<< "### Entering First Fraction ###" << endl;
	frac1.read();
	cout << endl << "### Entering Second Fraction ###" << endl;
	frac2.read();

	Rational a = frac1.add(frac2);
	Rational s = frac1.sub(frac2);
	Rational m = frac1.mul(frac2);
	Rational d = frac1.div(frac2);
	
	cout << endl << "### 1Results ###" << endl << endl;

	cout << "Addition: ";
	a.print();	
	cout << endl;
	cout << "Subtraction: ";
	s.print();
	cout << endl;
	cout << "Multiplication: ";
	m.print();
	cout << endl;
	cout << "Division: ";
	d.print();
	cout << endl << endl;

	return 0;
}	
