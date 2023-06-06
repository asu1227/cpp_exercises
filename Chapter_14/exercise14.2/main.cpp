/*测试程序应提示用户输入葡萄酒名称、元素个数以及每个元素存储
的年份和瓶数等信息。程序将使用这些数据来构造一个Wine对象，然后
显示对象中保存的信息。*/
#include <iostream>
#include "winep.h"

int main()
{
    using std::cin;
    using std::cout;
    using std::endl;

    cout << "Enter name of wine: ";
    char lab[50];

    cin.getline(lab, 50);
    cout << "Enter number of years: ";
    int yrs;
    cin >> yrs;

    Wine holding(lab, yrs);
    holding.GetBottles();
    holding.Show();

    const int YRS = 3;
    int y[YRS] = {1993, 1995, 1998};
    int b[YRS] = { 48, 60, 72};

    Wine more("Gushing Grape Red", YRS, y, b);
    more.Show();
    cout << "Total bottles for " << more.Label()
         << ": " << more.sum() << endl;
    cout << "Bye\n";
    return 0;
}