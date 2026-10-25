class Complex
{
private:
	double re;
	double img;
public:
	Complex();
	Complex(double re, double im);
	void afficher() const;

	Complex operator+(const Complex& c)const;
	Complex operator-(const Complex& c)const;
	Complex operator*(const Complex& c)const;
	Complex operator/(const Complex& c)const;

	Complex operator+(double a)const;
	Complex operator-(double a)const;
	Complex operator*(double a)const;
	Complex operator/(double a) const;

	bool operator==(const Complex& c) const;
	bool operator!=(const Complex& c) const;
	bool operator>(const Complex& c) const;
	bool operator<(const Complex& c) const;

};

