#include <iostream>
using namespace std;
#include "classic.h"

void Bravo(const Cd  disk);
int main()
{
    Cd c1("Beatles", "Capitol", 14, 35.5);
    Classic c2 = Classic("Piano Sonata in B flat, Fantasis in C",
                    "Alfred Brendel", "Philips", 2, 57.17);
    
    Cd *pcd = &c1;

    cout << "Using object directly:\n";
    c1.Report();    // use Cd method
    c2.Report();    // use Classic method
    cout << endl;

    cout << "Using type cd * pointer to objects:\n";
    pcd->Report();
    pcd = &c2;
    pcd->Report();
    cout << endl;

    cout << "Calling a function with a Cd reference argument:\n";
    Bravo(c1);
    Bravo(c2);
    cout << endl;

    cout << "Testing assignment:\n";
    Classic copy;
    copy = c2;
    copy.Report();

    return 0;
}

void Bravo(const Cd  disk)
{
    disk.Report();
}