#include "winec.h"  // include <iostream>.<string>.<valarray>

Wine::Wine(const char *l, int y, const int yr[], const int bot[])               //
        : label(l), years_num(y), data(ArrayInt(yr, y), ArrayInt(bot, y)) {}

Wine::Wine(const char *l, int y)                                                //
        : label(l), years_num(y), data(ArrayInt(y), ArrayInt(y)) {}

void Wine::GetBottles()
{
    int yn = 0;
    int b = 0;

    std::cout << "Enter " << label << " Data for " << years_num << " year(s)"
        << std::endl;
    
    for (int i = 0; i < years_num; i++)
    {
        std::cout << "Enter years: ";
        std::cin >> yn;
        data.first()[i] = yn;                                              //通过first()来间接访问a
        std::cout << "Enter bottles for that year: ";
        std::cin >> b;
        data.second()[i] = b;
    }
}

int Wine::sum() const
{
    return data.second().sum();
}

void Wine::Show() const
{
    std::cout << "Wine: " << label << std::endl;
    std::cout << "Year  "
        << "  Bottles" << std::endl;
    for (int i = 0; i < years_num; i++)
    {
        std::cout << data.first()[i] << "    " << data.second()[i] << std::endl;
    }
}
