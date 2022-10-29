/*编写一个程序，其中的main( )调用一个用户定义的函数（以摄
氏温度值为参数，并返回相应的华氏温度值）。该程序按下面的格式要
求用户输入摄氏温度值，并显示结果：
Please enter a Celsius value:20
20 degrees Celsius is 68 degrees Fahrenheit.*/
#include <iostream>
using namespace std;
double Cel_cv_Fah(double);    //function prototype

int main()//测试用例：如题所示
{
    double Cel;
    cout << "Please enter a Celsius value: ";
    cin >> Cel;
    double Fah = Cel_cv_Fah(Cel);
    cout << int(Cel) << " degrees Celsius is " << int(Fah) << " degrees Fahrenheit." << endl;

    return 0;

}

double Cel_cv_Fah(double Cel_0)
{
    int Fah_0 = Cel_0 * 1.8 + 32.0;
    return Fah_0;
}