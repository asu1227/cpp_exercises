#ifndef COMPLEX0_H
#define COMPLEX0_H

#include <iostream>

class Complex
{
private:
    double real_;
    double imaginary_;
public:
    Complex();
    Complex(double real, double imaginary);
    Complex operator~() const;  //
    Complex operator+(const Complex & c) const;
    Complex operator-(const Complex & c) const;
    Complex operator*(const Complex & c) const;
    Complex operator*(double n) const;
    friend Complex operator*(double n, const Complex & c)
    {
        return c * n;
    }
    friend std::ostream & operator<<(std::ostream & os, const Complex & c);
    friend std::istream & operator>>(std::istream & is, Complex & c); //
};
#endif