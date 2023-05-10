#include "Sales.h"
#include <iostream>

namespace SALES //函数定义应在namespace里定义
{
    Sales::Sales()
    {
        sales[QUARTERS]= {0.0};
        average = max = min = 0.0;
    }   
    Sales::Sales(const double ar[], int n)
    {
        double total = 0;
        int i_crisis; //临界值
        if (n < 4) i_crisis = n;
        else i_crisis = 4;
        min = max = ar[0];
        for(int i = 0; i < i_crisis; i++)
        {
            sales[i] = ar[i];
            if (ar[i] > max) max = ar[i];
            if (ar[i] < min) min = ar[i];
            total += ar[i];
        }
        average = total / n;
    }

    using namespace std;
    void Sales::setSales()
    {
        cout << "Please enter 4 numbers ";
        cout << "the first quarter:\n";
        cin >> sales[0];
        cin.get();
        for (int i = 1; i < 4; i++)
        {
            cout << "the next number:\n";
            cin >> sales[i];
            cin.get();
        }
        double total = 0.0;
        min = max = sales[0];
        for(int i = 0; i < 4; i++)
        {
            if (sales[i] > max) max = sales[i];
            if (sales[i] < min) min = sales[i];
            total += sales[i];
        }
        average = total / 4;
    }
    void Sales::showSales() const
    {
        cout << "sales: ";
        for(int i = 0; i < 4; i++)
        {
            cout << sales[i] << " ";
        }
        cout << endl;
        cout << "max: " << max << endl;
        cout << "min: " << min << endl;
        cout << "average: " << average << endl;
    }
}