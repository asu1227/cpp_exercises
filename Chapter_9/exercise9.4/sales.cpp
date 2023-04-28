#include "sales.h"
#include <iostream>

namespace SALES //函数定义应在namespace里定义
{   
    void setSales(Sales & s, const double ar[], int n)
    {
        double total = 0;
        int i_crisis;
        if (n < 4) i_crisis = n;
        else i_crisis = 4;
        s.min = s.max = ar[0];
        for(int i = 0; i < n; i++)
        {
            s.sales[i] = ar[i];
            if (ar[i] > s.max) s.max = ar[i];
            if (ar[i] < s.min) s.min = ar[i];
            total += ar[i];
        }
        s.average = total / n;
    }
    using namespace std;
    void setSales(Sales & s)
    {
        cout << "Please enter 4 numbers ";
        cout << "the first quarter:\n";
        cin >> s.sales[0];
        cin.get();
        for (int i = 1; i < 4; i++)
        {
            cout << "the next number:\n";
            cin >> s.sales[i];
            cin.get();
        }
        double total = 0;
        s.min = s.max = s.sales[0];
        for(int i = 0; i < 4; i++)
        {
            if (s.sales[i] > s.max) s.max = s.sales[i];
            if (s.sales[i] < s.min) s.min = s.sales[i];
            total += s.sales[i];
        }
        s.average = total / 4;
    }
    void showSales(const Sales & s)
    {
        cout << "sales: ";
        for(int i = 0; i < 4; i++)
        {
            cout << s.sales[i] << " ";
        }
        cout << endl;
        cout << "max: " << s.max << endl;
        cout << "min: " << s.min << endl;
        cout << "average: " << s.average << endl;
    }
}