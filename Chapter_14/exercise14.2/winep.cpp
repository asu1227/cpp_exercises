#include "winep.h"  // include <iostream>.<string>.<valarray>

Wine::Wine(const char *l, int y, const int yr[], const int bot[])               //
        : std::string(l), years_num(y), PairArray(ArrayInt(yr, y), ArrayInt(bot, y)) {}

Wine::Wine(const char *l, int y)                                                //
        : std::string(l), years_num(y), PairArray(ArrayInt(y), ArrayInt(y)) {}

void Wine::GetBottles()
{
    int yn = 0;
    int b = 0;

    std::cout << "Enter " << (const std::string &)(*this) << " Data for " << years_num << " year(s)"
        << std::endl;
    
    for (int i = 0; i < years_num; i++)
    {
        std::cout << "Enter years: ";
        std::cin >> yn;
        PairArray::first()[i] = yn;                                              //通过first()来间接访问a
        std::cout << "Enter bottles for that year: ";
        std::cin >> b;
        PairArray::second()[i] = b;
    }
}

int Wine::sum() const
{
    return PairArray::second().sum();
}

void Wine::Show() const
{
    std::cout << "Wine: " << (const std::string &)(*this) << std::endl;
    std::cout << "Year  "
        << "  Bottles" << std::endl;
    for (int i = 0; i < years_num; i++)
    {
        std::cout << PairArray::first()[i] << "    " << PairArray::second()[i] << std::endl;
    }
}
