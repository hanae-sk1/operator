#include <iostream>
#include <cmath>
#include "Complex.h"
using namespace std;

Complex::Complex() : re(0.0), img(0.0) {
}

Complex::Complex(double re, double im) : re(re), img(im) {}

void Complex::afficher() const
{
	cout << re << (img >= 0 ? " + " : " - ") << fabs(img) << "i" << endl;
}

Complex Complex::operator+(const Complex& c) const
{
	return Complex(this->re + c.re, this->img + c.img);
}

Complex Complex::operator+(double a) const
{
	return Complex(this->re + a, this->img + 0.0);
}


Complex Complex::operator-(const Complex& c) const
{
	return Complex(this->re - c.re, this->img - c.img);
}


Complex Complex::operator-(double a) const
{
	return Complex(this->re - a, this->img);
}

Complex Complex::operator*(const Complex& c) const
{
	return Complex(this->re * c.re, this->img * c.img);
}
Complex Complex::operator/(const Complex& c) const
{
	double d = c.re * c.re + c.img * c.img;
	if (d == 0.0)
	{
		cerr << "Erreur : division par zero" << endl;
		return Complex(0.0, 0.0);
	}
	return Complex((re * c.re + img * c.img) / d,
		(img * c.re - re * c.img) / d);
}

Complex Complex::operator*(double a) const
{
	return Complex(this->re * a, this->img * 0.0);
}

Complex Complex::operator/(double a) const
{
	if (a == 0.0)
	{
		cerr << "Erreur : division par zero" << endl;
		return Complex(0.0, 0.0);
	}
	return Complex(re / a, img / a);
}

bool Complex::operator==(const Complex& c) const
{
	return (this->re == c.re && this->img == c.img);
}

bool Complex::operator!=(const Complex& c) const
{
	return !(*this == c);
}

bool Complex::operator>(const Complex& c) const
{
	return (this->re > c.re && this->img > c.img);
}

bool Complex::operator<(const Complex& c) const
{
	return (this->re < c.re && this->img < c.img);
}
