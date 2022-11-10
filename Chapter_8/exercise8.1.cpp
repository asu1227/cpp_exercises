/*编写通常接受一个参数（字符串的地址），并打印该字符串的
函数。然而，如果提供了第二个参数（int类型），且该参数不为0，则
该函数打印字符串的次数将为该函数被调用的次数（注意，字符串的打
印次数不等于第二个参数的值，而等于函数被调用的次数）。是的，这
是一个非常可笑的函数，但它让您能够使用本章介绍的一些技术。在一
个简单的程序中使用该函数，以演示该函数是如何工作的。*/
#include <iostream>
#include <string>
using namespace std;
void print_str(string ch, int n = 1);//使用默认参数

int main()//关于默认参数的练习
{
    string str = "Hattusa is the captial of the Hittite Empire.";
    int i = 0;
    print_str(str);
    i ++;
    print_str(str);
    i ++;
    cout << endl;
    print_str(str, i);

    return 0;
}
void print_str(string ch, int n)
{
    for (int i = 0; i < n; i++)
        cout << ch << endl;
}