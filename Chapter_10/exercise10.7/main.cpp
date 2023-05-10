#include "Plorg.h"

int main()
{
    Plorg p1;
    Plorg p2("Asu", 100);
    p1.showPlorg();
    p2.showPlorg();
    p2.setCI(50);
    p2.showPlorg();

    return 0;
}