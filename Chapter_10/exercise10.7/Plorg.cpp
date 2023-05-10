#include "Plorg.h"
#include <cstring>
#include <iostream>

using namespace std;

Plorg::Plorg()
{
    strcpy(name_, "Plorga");
    CI_ = 50;
}
Plorg::Plorg(const char * name, int CI)
{
    strcpy(name_, name);
    CI_ = CI;    
}

void Plorg::setCI(int CI)
{
    CI_ = CI;
}

void Plorg::showPlorg() const
{
    cout << "Name = " << name_ << '\t';
    cout << "CI = " << CI_ << endl;
}