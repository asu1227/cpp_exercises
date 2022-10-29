/*完成编程练习7，但使用new来为结构分配内存，而不是声明一
个结构变量。另外，让程序在请求输入比萨饼公司名称之前输入比萨饼
的直径。
William Wingate从事比萨饼分析服务。对于每个披萨饼，他都
需要记录下列信息：
披萨饼公司的名称，可以有多个单词组成。
披萨饼的直径。
披萨饼的重量。请设计一个能够存储这些信息的结构，并编写一个使用这种结构变
量的程序。程序将请求用户输入上述信息，然后显示这些信息。请使用
cin（或它的方法）和cout。*/
#include <iostream>
#include <string>
using namespace std;
struct Pizza
{
    char Com_name[20];
    double diameter;
    double weight;
};

int main()//测试用例：1, BEST_PIZ 2， 2.2
{
    Pizza * pn = new Pizza;
    cout << "Please enter diameter: ";
    cin >> pn -> diameter;
    cin.get();      //接收回车符，以免下面getline直接接收回车符
    cout << "Please enter the company name: ";
    cin.getline(pn -> Com_name, 20);
    cout << "Please enter weight: ";
    cin >> pn -> weight;
    cout << "The company name: " << pn -> Com_name << endl;
    cout << "The diameter: " << pn -> diameter << endl;
    cout << "The weight: " << pn -> weight << endl;
    delete pn;      //删除分配的动态内存

    return 0;

}