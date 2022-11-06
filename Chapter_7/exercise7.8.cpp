/*在不使用array类的情况下完成程序清单7.15所做的工作。编写
两个这样的版本：
a．使用const char *数组存储表示季度名称的字符串，并使用double
数组存储开支。
b．使用const char *数组存储表示季度名称的字符串，并使用一个
结构，该结构只有一个成员——一个用于存储开支的double数组。这种
设计与使用array类的基本设计类似。*/
//---------------------------------------------a版本----------------------------------------------
// #include <iostream>
// using namespace std;
// const int Seasons = 4;
// const int Max = 20;
// const char season [Seasons][Max] =
// {{"Spring"}, {"Summer"}, {"Fall"}, {"Winter"}};
// void fill(double (*ch)[Max]);
// void show(double (*ch)[Max]);

// int main()//测试用例：212，256，208，244 结果：920
// {
//     double expenses [Seasons][Max];
//     fill(expenses);
//     show(expenses);
//     return 0;
// }
// void fill(double (*ch)[Max])//使用二维数组的格式 double (*ch)[Max]
// {
//     for (int i = 0; i < Seasons; i++)
//     {
//         cout << "Enter " << season[i] << " expenses: ";
//         cin >> (*ch)[i];
//     }
// }
// void show(double (*ch)[Max])
// {
//     double total = 0.0;
//     cout << "EXPENSES\n";
//     for (int i = 0; i < Seasons; i++)
//     {
//         cout << season[i] << ": $" << (*ch)[i] << endl;
//         total += (*ch)[i];
//     }
//     cout << "Total Expenses: $" << total << endl;
// }

//-----------------------------------------b版本--------------------------------------------------
#include <iostream>
using namespace std;
const int Seasons = 4;
const int Max = 20;
const char season [Seasons][Max] =
{{"Spring"}, {"Summer"}, {"Fall"}, {"Winter"}};
struct ex
{
    double expenses[4];
};
void fill(ex *a);
void show(ex *a);

int main()//测试用例：212，256，208，244 结果：920
{
    ex ex_1;
    fill(&ex_1);
    show(&ex_1);
    return 0;
}
void fill(ex *a)
{
    for (int i = 0; i < Seasons; i++)
    {
        cout << "Enter " << season[i] << " expenses: ";
        cin >> a->expenses[i];
    }
}
void show(ex *a)
{
    double total = 0.0;
    cout << "EXPENSES\n";
    for (int i = 0; i < Seasons; i++)
    {
        cout << season[i] << ": $" << a->expenses[i] << endl;
        total += a->expenses[i];
    }
    cout << "Total Expenses: $" << total << endl;
}