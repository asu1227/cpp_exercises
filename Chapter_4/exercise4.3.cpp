/*编写一个程序，它要求用户首先输入其名，然后输入其姓；然
后程序使用一个逗号和空格将姓和名组合起来，并存储和显示组合结
果。请使用char数组和头文件cstring中的函数。下面是该程序运行时的
情形：
Enter your first name: Flip
Enter your last name: Fleming
Here's the information in a single string: Fleming, Flip*/
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char temp_1[20];
    char temp_2[20];
    cout << "Enter your first name: ";
    cin >> temp_1;
    cout << "Enter your last name: ";
    cin >> temp_2;
    char temp_3[20] = ", ";
    strcat(temp_2,temp_3);
    strcat(temp_2,temp_1);
    cout << temp_2 << endl;

    return 0;
    
}