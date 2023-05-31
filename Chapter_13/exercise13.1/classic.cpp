#include "classic.h"
#include <iostream>
#include <cstring>

Cd::Cd()
{
    std::strcpy(performers, "None");
    std::strcpy(label, "None");
    selections = 0;
    playtime = 0.0;
}
Cd::Cd(const char * s1, const char * s2, int n, double x)
{
    std::strcpy(performers, s1);
    std::strcpy(label, s2);
    selections = n;
    playtime = x;
}
Cd::Cd(const Cd & d)
{
    std::strcpy(performers, d.performers);
    std::strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
}

Cd::~Cd()
{

}

void Cd::Report() const
{
    using std::cout;
    using std::endl;
    cout << "Perfomers: " << performers << endl;
    cout << "Label: " << label << endl;
    cout << "Selections: " << selections << endl;
    cout << "Playtime: " << playtime << endl;
}

Cd & Cd::operator=(const Cd & c)
{
    if(this == &c) return *this;                 //
    std::strcpy(this->performers, c.performers);
    std::strcpy(this->label, c.label);
    this->selections = c.selections;
    this->playtime = c.playtime;
    return *this;
}

Classic::Classic(const char * s, const char * s1, const char * s2, int n, double x)
        : Cd(s1, s2, n , x)
{
    major_works = new char[std::strlen(s) + 1];
    std::strcpy(major_works, s);
}
Classic::Classic(const char * s, const Cd & c)
        : Cd(c)
{
    major_works = new char[std::strlen(s) + 1];
    std::strcpy(major_works, s);
}
Classic::Classic(const Classic & cl) : Cd(cl)       //
{
    major_works = new char[std::strlen(cl.major_works) + 1];
    std::strcpy(major_works, cl.major_works);
}
Classic::Classic() : Cd()
{
    major_works = nullptr;              //
}

Classic::~Classic()
{
    delete [] major_works;
}

void Classic::Report() const
{
    using std::cout;
    using std::endl;
    Cd::Report();
    cout << "Major works: " << major_works << endl;
}

Classic & Classic::operator=(const Classic & cl)
{
    if (this == &cl) return *this;
    delete[] major_works;
    Cd::operator=(cl);
    major_works = new char[std::strlen(cl.major_works) + 1];
    std::strcpy(major_works, cl.major_works);
    return * this;
}

