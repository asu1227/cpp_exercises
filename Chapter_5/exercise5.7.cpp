/*设计一个名为car的结构，用它存储下述有关汽车的信息：生产
商（存储在字符数组或string对象中的字符串）、生产年份（整数）。
编写一个程序，向用户询问有多少辆汽车。随后，程序使用new来创建
一个由相应数量的car结构组成的动态数组。接下来，程序提示用户输
入每辆车的生产商（可能由多个单词组成）和年份信息。请注意，这需
要特别小心，因为它将交替读取数值和字符串（参见第4章）。最后，
程序将显示每个结构的内容。该程序的运行情况如下：
How many cars do you wish to catalog? 2
Car #1:
Please enter the make: Hudson Hornet
Please enter the year made: 1952
Car #2:
Please enter the make: Kaiser
Please enter the year made: 1951
Here is your collection:
1952 Hudson Hornet
1951 Kaiser*/
#include <iostream>
#include <cstring>
using namespace std;
struct car
{
    string manufacturer;
    int year;
};

int main()  //测试用例：如题目中所述
{
    int i;
    cout << "How many cars do you wish to catalog? ";
    cin >> i;
    cin.get();  //接收回车符
    car * pn = new car [i];
    for (int j = 0; j < i; j++)
        {
            cout << "Please enter the make: ";
            getline(cin, ((pn + j) -> manufacturer));
            cout << "Please enter the year made: ";
            cin >> ((pn + j) -> year);
            cin.get();  //接收回车符
        }
    cout << "Here is your collection:\n";
    cout << pn -> year << " " << pn -> manufacturer << endl;
    cout << (pn+1) -> year << " " << (pn+1) -> manufacturer << endl;
    delete[] pn;
    
    return 0;

}