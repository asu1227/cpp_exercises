/*编写一个要求用户输入数字的程序。每次输入后，程序都将报
告到目前为止，所有输入的累计和。当用户输入0时，程序结束。*/
#include <iostream>
using namespace std;

int main()  //测试用例：随意输入数字，直到读到0结束
{
    cout << "Please enter a number: ";
      //提示用户输入数字，默认用户遵守规则
    double ch; //初始循环条件
    double sum = 0;
    while (cin >> ch && ch)
        {
            sum += ch;
            cout << "sum = " << sum << endl;
            cout << "Please continue to enter a number: ";
        }
    cout << "calculation is over.\n"; 

    return 0;
}