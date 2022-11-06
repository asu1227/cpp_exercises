/*定义一个递归函数，接受一个整数参数，并返回该参数的阶
乘。前面讲过，3的阶乘写作3!，等于3*2!，依此类推；而0!被定义为
1。通用的计算公式是，如果n大于零，则n!=n*（n−1）!。在程序中对
该函数进行测试，程序使用循环让用户输入不同的值，程序将报告这些
值的阶乘。*/
#include <iostream>
using namespace std;
int recursion(int n);

int main() //测试用例：1，2，3，4，5，6，7，8
{
    cout << "Enter 'q' to exit.\n";
    cout << "Please enter a positive number: ";
    int n;
    while (cin >> n)
    {
        int prod = recursion(n);
        cout << n << "! = " << prod << endl;
    }

    return 0;
}
int recursion(int n)
{
    if (n > 0)
        n *= recursion(n - 1);
    else if (n == 0)
        return 1;
}