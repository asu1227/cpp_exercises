#include "dma.h"    // include <iostream>
#include <cstring>
using std::cout;
// using std::ios_base;
using std::endl;
using std::strlen;
using std::strcpy;

DmaABC::DmaABC(const char * l, int n)
{
    label = new char [strlen(l) + 1];
    strcpy(label, l);
    rating = n;
}

// DmaABC::Formatting DmaABC::SetFormat() const
// {
// // set up ###.## format
//     Formatting f;
//     f.flag = cout.setf(ios_base::fixed, ios_base::floatfield);
//     f.pr = cout.precision(2);
//     return f;
// }

// void DmaABC::Restore(Formatting & f) const
// {
//     cout.setf(f.flag, ios_base::floatfield);
//     cout.precision(f.pr);
// }
DmaABC::DmaABC(const DmaABC & dm)   //涉及动态内存的复制构造函数
{
    label = new char [strlen(dm.label) + 1];
    strcpy(label, dm.label);
    rating = dm.rating;
}

DmaABC::~DmaABC()
{
    delete [] label;
}

void DmaABC::View() const
{
    cout << *this << endl;                      //
}

DmaABC & DmaABC::operator=(const DmaABC & dm)   //涉及动态内存的相等运算符
{
    if ( this == &dm ) return *this;
    delete [] label;      // 释放现在指针指向的内存
    label = new char [strlen(dm.label) + 1];    // label指向新的内存空间
    strcpy(label, dm.label);
    rating = dm.rating;
    return *this;
}

std::ostream & operator<<(std::ostream & os, const DmaABC & a)
{
    os << "label: " << a.label << ", rating: " << a.rating;     //
    return os;
}

/************baseDMA*************/

baseDMA::baseDMA(const char * l, int n) : DmaABC(l, n) {}

std::ostream & operator<<(std::ostream & os, const baseDMA & dm)
{
    os << (const DmaABC &) dm;                                          //
    return os;
}

/************lacksDMA************/

lacksDMA::lacksDMA(const char * c, const char * l, int r)
        : DmaABC(l, r)
{
    strcpy(color, c);
}

lacksDMA::lacksDMA(const char * c, const DmaABC & dm)
        : DmaABC(dm)
{
    strcpy(color, c);
}

void lacksDMA::View() const
{
    cout << *this << endl;
}

std::ostream & operator<<(std::ostream & os, const lacksDMA & rs)
{
    os << (const DmaABC &) rs << ", color: " << rs.color;
    return os;
}

/************hasDMA*************/

hasDMA::hasDMA(const char * s, const char * l, int r)
        : DmaABC(l, r)
{
    style = new char[strlen(s) + 1];
    strcpy(style, s);
}

hasDMA::hasDMA(const char * s, const DmaABC & dm)
        : DmaABC(dm)
{
    style = new char[strlen(s) + 1];
    strcpy(style, s);
}

hasDMA::hasDMA(const hasDMA & d) : DmaABC(d)                         // 继承可用的列表初始化
{
    style = new char [strlen(d.style) + 1];
    strcpy(style, d.style);
}

hasDMA::~hasDMA() { delete [] style; }

void hasDMA::View() const { cout << *this << endl; }

hasDMA & hasDMA::operator=(const hasDMA & hs)
{
    if (this == &hs) return *this;
    DmaABC::operator=(hs);                                           // 继承可用的成员函数
    delete[] style;
    style = new char [strlen(hs.style) + 1];
    strcpy(style, hs.style);
    return *this;
}

std::ostream & operator<<(std::ostream & os, const hasDMA & rs)
{
    os << (const DmaABC &)rs << ", style: " << rs.style;
    return os;
}