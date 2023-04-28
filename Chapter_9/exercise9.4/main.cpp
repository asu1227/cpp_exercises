/*请基于下面这个名称空间编写一个由3个文件组成的程序：
namespace SALES
{
    const int QUARTERS = 4;
    struct Sales
    {
        double sales[QUARTERS];
        double average;
        double max;
        double min;
    };
    void setSales(Sales & s, const double ar[], int n);
    void setSales(Sales & s);
    void showSales(const Sales & s);
}
第一个文件是一个头文件，其中包含名称空间；第二个文件是一个
源代码文件，它对这个名称空间进行扩展，以提供这三个函数的定义；
第三个文件声明两个Sales对象，并使用setSales( )的交互式版本为一个
结构提供值，然后使用setSales( )的非交互式版本为另一个结构提供值。
另外它还使用showSales( )来显示这两个结构的内容。*/
#include <iostream>
#include "sales.h"

using namespace SALES;
using namespace std;

int main()
{
    Sales s1, s2;
    double a[3] {1, 2, 3};
    setSales(s1, a, 3);
    setSales(s2);
    showSales(s1);
    showSales(s2);

    return 0;
}