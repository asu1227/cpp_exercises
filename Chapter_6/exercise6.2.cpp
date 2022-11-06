/*编写一个程序，最多将10个donation值读入到一个double数组中
（如果您愿意，也可使用模板类array）。程序遇到非数字输入时将结束
输入，并报告这些数字的平均值以及数组中有多少个数字大于平均值。*/
#include <iostream>
#include <array>

int main()//测试用例：1，2，3，4，ddd
{
    using namespace std;
    const int Max = 10;
    array<double, Max> ai;

    double donation[Max];
    cout << "Please enter your donations.\n";
    cout << "You can enter " << Max << " donations at most.\n";
    int i;
    for (i = 0; i < Max && (cin >> ai[i]); i++)//最后得到i个数，遇到非数字输入时停止
    {
        cout << "Donations #" << i+1 << " :" << ai[i] << endl;
    }
    cin.clear();
    while (cin.get() != '\n')
        continue;//读取行尾之前所有输入，从而删除这一行中的错误输入
    double total = 0.0;
    for (int j = 0; j < i; j++)
    {
        total += ai[j];
    }
    double ave = total/i;
    int m;
    for (int j = 0; j < i; j++)
    {
        if (ai[j] > ave)
            m++;
    }
    cout << "Average = " << ave << endl;
    cout << "> Average: " << m << endl;

    return 0;

}