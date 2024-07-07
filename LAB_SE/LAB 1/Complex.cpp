#include"Complex.h"
Complex::Complex() :real(0), imag(0)
{}
Complex::Complex(double a, double b) : real(a), imag(b)
{}
Complex Complex::add(const Complex& c)
{
	return Complex{ (real + c.real),(imag + c.imag) };
}
Complex Complex::subtract(const Complex& c)
{
	return Complex{ (real - c.real),(imag - c.imag) };
}
Complex Complex::multiply(const Complex& c)
{
	return Complex{ ((real * c.real) - (imag * c.imag)),((real * c.imag) + (imag * c.real)) };
}
Complex Complex::divide(const Complex& c)
{
	return Complex{ (((real * c.real) + (imag * c.imag)) / ((c.real * c.real) + (c.imag * c.imag))),(((c.real * imag) - (real * c.imag)) / ((c.real * c.real) * (c.imag * c.imag))) };
}
Complex Complex::conjugate()
{
	return Complex{ real,(imag * -1) };
}
double Complex::getReal()
{
	return real;
}
double Complex::getImag()
{
	return imag;
}
void Complex::setReal(double r)
{
	real = r;
}
void Complex::setImag(double i)
{
	imag = i;
}
void Complex::display()
{
	cout << real << ' ';
	if (imag < 0)
	{
		cout << "- " << (-1 * imag) << 'i';
	}
	else
	{
		cout << "+ " << imag << 'i';
	}
}
Complex::~Complex()
{
	real = 0;
	imag = 0;
}