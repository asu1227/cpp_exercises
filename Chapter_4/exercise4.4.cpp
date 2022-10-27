/*编写一个程序，它要求用户首先输入其名，再输入其姓；然后
程序使用一个逗号和空格将姓和名组合起来，并存储和显示组合结果。
请使用string对象和头文件string中的函数。下面是该程序运行时的情
形：
Enter your first name: Flip
Enter your last name: Fleming
Here's the information in a single string: Fleming, Flip*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str1;
    string str2;

    cout << "Enter your first name: ";
    cin >> str1;
    cout << "Enter your last name: ";
    cin >> str2;
    string str3 = ", ";
    str2 += str3;
    str2 += str1;
    cout << str2 << endl;

    return 0;

}

