/*修改程序清单15.11，使两种异常类型都是从头文件<stdexcept>
提供的logic_error类派生出来的类。让每个what( )方法都报告函数名和
问题的性质。异常对象不用存储错误的参数值，而只需支持what( )方
法。*/
#include <iostream>
#include <cmath>

#include "exc_mean.h"

double hmean(double a, double b);
double gmean(double a, double b);
int main()
{
    using std::cout;
    using std::cin;
    using std::endl;

    double x, y, z;

    cout << "Enter two numbers: ";
    while (cin >> x >> y)
    {
        try
        {
            z = hmean(x, y);
            cout << "Harmonic mean of " << x << " and " << y
                << " is " << z << endl;
            cout << "Geometric mean of " << x << " and " << y
                << " is " << gmean(x, y) << endl;
            cout << "Enter next set of numbers <q to quit>: ";
        }
        catch(bad_hmean & bg)
        {
            cout << bg.what();                          //
            cout << "Try again.\n";
            continue;
        }
        catch(bad_gmean & hg)
        {
            cout << hg.what();                          //
            cout << "Sorry, you don't get to play any more.\n";
            break;
        }
    }
    cout << "Bye!\n";
    return 0;
}

double hmean(double a, double b)
{
    if (a == -b)
        throw bad_hmean();
    return 2.0 * a * b / (a + b);
}

double gmean(double a, double b)
{
    if (a < 0 || b < 0)
        throw bad_gmean();
    return std::sqrt(a * b);
}