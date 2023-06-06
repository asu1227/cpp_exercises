/*注意，该类层次结构使用了带虚基类的MI，所以要牢记这种情况
下用于构造函数初始化列表的特殊规则。还需要注意的是，有些方法被
声明为保护的。这可以简化一些highfink方法的代码（例如，如果
highfink::ShowAll( )只是调用fink::ShowAll( )和manager::ShwAll( )，则它
将调用abstr_emp::ShowAll( )两次）。请提供类方法的实现，并在一个程
序中对这些类进行测试。下面是一个小型测试程序*/
#include "emp.h"

/************abstr_emp*************/
abstr_emp::abstr_emp()
{
    fname = "none";
    lname = "none";
    job = "none";
}

void abstr_emp::ShowAll() const
{
    std::cout << "Name: " << fname << " " << lname;
    std::cout << ", Job: " << job << std::endl;
}

void abstr_emp::SetAll()
{
    std::cout << "Enter first name: ";
    std::cin >> fname;
    std::cout << "Enter last name: ";
    std::cin >> lname;
    std::cout << "Enter job: ";
    std::cin >> job;
}

std::ostream & operator<<(std::ostream & os, const abstr_emp & e)
{
    os << "Name: " << e.fname << " " << e.lname;
    os << ", Job: " << e.job << std::endl;
    return os;
}

/***************employee**************/
void employee::ShowAll() const
{
    std::cout << (const abstr_emp &)(*this);
}

void employee::SetAll()
{
    abstr_emp::SetAll();
}

/**************manager***************/
void manager::ShowAll() const
{
    abstr_emp::ShowAll();
    std::cout << "InChargeOf: " << inchargeof << std::endl;
}

void manager::SetAll()
{
    abstr_emp::SetAll();
    std::cout << "Enter InChargeOf: ";
    std::cin >> inchargeof;
    while (std::cin.get() != '\n') continue;
}

/**************fink*****************/
void fink::ShowAll() const
{
    abstr_emp::ShowAll();
    std::cout << "ReportsTo: " << reportsto << std::endl;
}

void fink::SetAll()
{
    abstr_emp::SetAll();
    std::cout << "Enter ReportsTo: ";
    std::cin >> reportsto;
}

/************highfink***************/
void highfink::ShowAll() const
{
    abstr_emp::ShowAll();
    std::cout << "Inchargeof: " << manager::InChargeOf() << std::endl;              //
    std::cout << "Reportsto: " << fink::ReportsTo() << std::endl;                   //
}

void highfink::SetAll()
{
    abstr_emp::SetAll();
    std::cout << "Enter Reportsto: ";
    std::cin >> fink::ReportsTo();
    std::cout << "Enter Inchargeof: ";
    std::cin >> manager::InChargeOf();
    std::cin.get();
}