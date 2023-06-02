#include "dma.h"    // include <iostream>

int main()
{
    using std::cout;
    using std::endl;

    baseDMA shirt("Portrabelly", 8);
    lacksDMA ballon("red", "Blumpo", 4);
    hasDMA map("Mercator", "Buffalo Kyes", 5);
    cout << shirt << endl;
    cout << ballon << endl;
    cout << map << endl;
    lacksDMA ballon2(ballon);
    hasDMA map2;
    map2 = map;
    cout << ballon2 << endl;
    cout << map2 << endl;

    DmaABC * pts[3];
    pts[0] = &shirt;
    pts[1] = &ballon;
    pts[2] = &map;

    for (int i = 0; i < 3; ++i) cout << *pts[i] << endl;
    for (int i = 0; i < 3; ++i) pts[i]->View();

    return 0;
}