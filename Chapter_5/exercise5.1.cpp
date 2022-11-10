/*编写一个要求用户输入两个整数的程序。该程序将计算并输出
这两个整数之间（包括这两个整数）所有整数的和。这里假设先输入较
小的整数。例如，如果用户输入的是2和9，则程序将指出2～9之间所有
整数的和为44。*/
#include <iostream>
using namespace std;

int main()  //测试用例：2，9 结果：44
{
    int num_1, num_2;
    cout << "Please enter a number(as a start): ";
    cin >> num_1;
    cout << "Please enter a number(as a end): ";
    cin >> num_2;
    int sum = 0;
    for (; num_1 <= num_2; num_1++)
    {
        sum += num_1;
    }
    cout << "sum = " << sum << endl;

    return 0;
    
}