#include "person.h" // include <string>
#include <iostream>
#include <cstring>

Person::Person(const std::string & ln, const char * fn)
{
    lname = ln;
    strcpy(fname, fn);
}

void Person::Show() const
{
    std::cout << fname << "\t" << lname;
    std::cout << std::endl;
}

void Person::FormalShow() const
{
    std::cout << lname << "\t" << fname;
    std::cout << std::endl;
}
