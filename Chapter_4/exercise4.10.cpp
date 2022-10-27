/*编写一个程序，让用户输入三次40码跑的成绩（如果您愿意，
也可让用户输入40米跑的成绩），并显示次数和平均成绩。请使用一个
array对象来存储数据（如果编译器不支持array类，请使用数组）。*/
#include <iostream>
#include <array>
using namespace std;

int main()
{
    array<double, 3> a1;
    cout << "Please enter first grade: ";
    cin >> a1[0];
    cout << "Please enter second grade: ";
    cin >> a1[1];
    cout << "Please enter third grade: ";
    cin >> a1[2];
    double avg = (a1[0] + a1[1] + a1[2]) / 3;
    cout << "Your average grade: " << avg << endl;

    return 0;

}