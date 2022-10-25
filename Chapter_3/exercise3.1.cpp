/*编写一个小程序，要求用户使用一个整数指出自己的身高（单
位为英寸），然后将身高转换为英尺和英寸。该程序使用下划线字符来
指示输入位置。另外，使用一个const符号常量来表示转换因子。*/
#include <iostream>
using namespace std;

int main()
{
    const int foot_cv_inch = 12;
    int my_height;  //my height is 71 inches
    cout << "Please enter your height(units are inches):___\b\b\b ";
    cin >> my_height;
    int feet = my_height / foot_cv_inch;
    int inches = my_height % foot_cv_inch;
    cout << "Your height is " << feet << " feet " << inches << " inches.\n";
    
    return 0;

}
