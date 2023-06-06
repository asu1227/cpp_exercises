#include <iostream>
using namespace std;
#include "emp.h"

int main()
{
    employee em("Trip", "Harries", "Thumper");
    cout << em;
    em.ShowAll();

    manager ma("Amorphia", "Spindragon", "Nuancer", 5);
    cout << ma;
    ma.ShowAll();

    fink fi("Matt", "Oggs", "Oiler", "Juno Barr");
    cout << fi;
    fi.ShowAll();

    highfink hf(ma, "Curly Kew");                           // recruitment?
    hf.ShowAll();
    cout << "Press a key for next phase:\n";
    while(cin.get() != '\n') continue;
    highfink hf2;
    hf2.SetAll();

    cout << "Using an abstr_emp * pointer:\n";
    abstr_emp * tri[4] = {&em, &fi, &hf, &hf2};
    for (int i = 0; i < 4; i++)
        tri[i]->ShowAll();

    return 0;
}