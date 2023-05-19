#include <iostream>
#include "Cow.h"

using namespace std;

int main()
{
    Cow c1;
    Cow c2("Asu", "Running", 243.1);
    Cow c3("MeiM", "Piano", 301.2);
    c1.ShowCow();
    c2.ShowCow();
    c3.ShowCow();
    Cow c4(c2);
    c4.ShowCow();
    c1 = c3;
    c1.ShowCow();
    c3.ShowCow();
    cout << "Done!\n";
    return 0;
}