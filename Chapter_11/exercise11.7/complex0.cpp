#include "complex0.h"

Complex::Complex()
{
    real_ = imaginary_ = 0.0;
}
Complex::Complex(double real, double imaginary)
{
    real_ = real;
    imaginary_ = imaginary;
}

Complex Complex::operator~() const  // 只使用调用对象本身
{
    return Complex(real_, -imaginary_);
}

Complex Complex::operator+(const Complex & c) const
{
    Complex sum;
    sum.real_ = real_ + c.real_;
    sum.imaginary_ = imaginary_ + c.imaginary_;
    return sum;
}

Complex Complex::operator-(const Complex & c) const
{
    Complex diff;
    diff.real_ = real_ - c.real_;
    diff.imaginary_ = imaginary_ - c.imaginary_;
    return diff;
}

Complex Complex::operator*(const Complex & c) const
{
    Complex result;
    result.real_ = real_ * c.real_ - imaginary_ * c.imaginary_;
    result.imaginary_ = real_ * c.imaginary_ + imaginary_ * c.real_;
    return result;
}

Complex Complex::operator*(double n) const
{
    Complex result;
    result.real_ = n * real_;
    result.imaginary_ = n * imaginary_;
    return result;
}

std::ostream & operator<<(std::ostream & os, const Complex & c)
{
    os << "(" << c.real_ << "," << c.imaginary_ << "i)" << std::endl;
    return os; 
}

std::istream & operator>>(std::istream & is, Complex & c)   //  使用提示符来指示输入
{
    std::cout << "real:";
    is >> c.real_;
    std::cout << "imaginary:";
    is >> c.imaginary_;
    return is;
}