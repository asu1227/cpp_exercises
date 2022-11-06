/*编写一个程序，不断要求用户输入两个数，直到其中的一个为
0。对于每两个数，程序将使用一个函数来计算它们的调和平均数，并
将结果返回给main( )，而后者将报告结果。调和平均数指的是倒数平均
值的倒数，计算公式如下：
调和平均数=2.0 * x * y / (x + y)*/
#include <iostream>
using namespace std;
double harmonic_mean(double x, double y);
int main() //测试用例：1，2 结果：1.33333
{          //测试用例：2，0
    double x, y;
    cout << "Please enter two numbers,we will return harmonic mean of them: ";
    while (cin >> x >> y)
    {
        double m = harmonic_mean(x, y);
        if (x == 0 || y == 0)
            break;
        cout << "x = " << x << "  y = " << y << "  harmonic mean = " << m << endl;
    }
    cout << "The end." << endl;

    return 0;
}
double harmonic_mean(double x, double y)
{
    double mean;
    mean = 2.0 * x * y / (x + y);
    return mean;
}