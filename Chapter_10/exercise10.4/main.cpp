#include <iostream>
#include "Sales.h"

using namespace SALES;
using namespace std;

int main()
{
    Sales s1;
    double a[3] {1, 2, 3};
    Sales s2 (a, 3);
    s1.setSales();
    s1.showSales();
    s2.showSales();
    
    return 0;
}