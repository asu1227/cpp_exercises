#include "person.h" // include <string>
#include <iostream>

void Person::Data() const
{
    std::cout << "Name: " << fisrt_name
        << " " << last_name << std::endl;
}

void Person::Show() const
{
    Data();
}

void Person::Set()
{
    std::cout << "Enter firstname: ";
    std::cin >> fisrt_name;
    std::cout << "Enter lastname: ";
    std::cin >> last_name;
}