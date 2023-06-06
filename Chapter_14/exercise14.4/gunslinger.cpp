#include "gunslinger.h"

#include <iostream>

void Gunslinger::Data() const
{
    std::cout << "Drawtime: " << drawtime << std::endl;
    std::cout << "Notches: " << notches << std::endl;
}

void Gunslinger::Show() const
{
    Person::Data();
    Data();
}

void Gunslinger::Set()
{
    Person::Set();
    std::cout << "Enter Drawtime: ";
    std::cin >> drawtime;
    std::cin.get();
    std::cout << "Enter Notches: ";
    std::cin >> notches;
    while (std::cin.get() != '\n') continue;
}