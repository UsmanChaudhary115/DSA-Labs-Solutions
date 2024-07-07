#ifndef COMPLEX_H
#define COMPLEX_H
#include<iostream>
using namespace std;
class Complex
{
	double real, imag;
public:
	Complex();
	Complex(double, double);
	Complex add(const Complex&);
	Complex subtract(const Complex&);
	Complex multiply(const Complex&);
	Complex divide(const Complex&);
	Complex conjugate();
	double getReal();
	double getImag();
	void setReal(double);
	void setImag(double);
	void display();
	~Complex();
};
#endif // !COMPLEX_H
