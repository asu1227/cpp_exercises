/*2．对Vector类的头文件（程序清单11.13）和实现文件（程序清单
11.14）进行修改，使其不再存储矢量的长度和角度，而是在magval( )和
angval( )被调用时计算它们。
应保留公有接口不变（公有方法及其参数不变），但对私有部分
（包括一些私有方法）和方法实现进行修改。然后，使用程序清单
11.15对修改后的版本进行测试，结果应该与以前相同，因为Vector类的
公有接口与原来相同。*/
#ifndef VECTOR_H
#define VECTOR_H
#include <iostream>
namespace VECTOR
{
    class Vector
    {
    public:
        enum Mode {RECT, POL};
    // RECT for rectangular, POL for Polar modes
    private:
        double x;
        double y;
        Mode mode;  //RECT or POL
    // private methods for setting values
        void set_x(double mag, double ang);
        void set_y(double mag, double ang);
    public:
        Vector();
        Vector(double n1, double n2, Mode form = RECT);
        void reset(double n1, double n2, Mode form = RECT);
        ~Vector();
        double xval() const {return x;} //report x value
        double yval() const {return y;} //report y value
        double magval() const; //report magnitude
        double angval() const; //report angle
        void polar_mode();                  //set mode to POL
        void rect_mode();                   //set mode to RECT
    // operator overloading
        Vector operator+(const Vector & b) const;
        Vector operator-(const Vector & b) const;
        Vector operator-() const;
        Vector operator*(double n) const;
    // friends
        friend Vector operator*(double n, const Vector & a);
        friend std::ostream &
               operator<<(std::ostream & os, const Vector & v);
    };
}   // end namespace VECTOR
#endif