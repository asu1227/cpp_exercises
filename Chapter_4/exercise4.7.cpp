/*William Wingate从事比萨饼分析服务。对于每个披萨饼，他都
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

int main()//测试用例：best_piz one，1, 2.2
{
    Pizza pizza = {};
    cout << "Please enter the company name: ";
    cin.getline(pizza.Com_name, 20);
    cout << "Please enter diameter: ";
    cin >> pizza.diameter;
    cout << "Please enter weight: ";
    cin >> pizza.weight;
    cout << "The company name: " << pizza.Com_name << endl;
    cout << "The diameter: " << pizza.diameter << endl;
    cout << "The weight: " << pizza.weight << endl;

    return 0;

}