#include "Golf.h"
#include <iostream>
#include <cstring>

using namespace std;

Golf::Golf()
{
    strcpy(fullname_, "DefaultName");
    handicap_ = 0;
}
Golf::Golf(const char * fullname, int handicap)
{
    strcpy(fullname_, fullname);
    handicap_ = handicap; 
}

int Golf::setGolf()
{
    cout << "Please enter your name:\n";
    cin.getline(fullname_, Len);
    if (strcmp(fullname_, "") == 0) //strcmp比较函数，若相等则返回0
        return 0;
    cout << "Please enter your handicap:\n";
    cin >> handicap_;
    cin.get(); //接受回车符
    return 1;
}

void Golf::sethandicap(int handicap)
{
    handicap_ = handicap;
}

void Golf::showGolf() const
{
    cout << "Name:" << fullname_ << endl;
    cout << "Handicap:" << handicap_ << endl;
}