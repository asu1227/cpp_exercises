/*3．编写一个程序，要求用户以度、分、秒的方式输入一个纬度，
然后以度为单位显示该纬度。1度为60分，1分等于60秒，请以符号常量
的方式表示这些值。对于每个输入值，应使用一个独立的变量存储它。
下面是该程序运行时的情况：
Enter a latitude in degrees, minutes, and seconds:
Fisrt, enter the degrees: 37
Next, enter the minutes of arc: 51
Finally, enter the seconds of arc: 19
37 degrees, 51 minutes, 19 seconds = 37.8553 degrees*/
#include <iostream>
using namespace std;

int main()//测试用例：如题所示
{
    const double deg_cv_min = 60;   //degree convert to minute
    const double min_cv_sec = 60;   //minute convert to second
    int deg,m_in,sec;
    cout << "Enter a latitude in degrees, minutes, and seconds:\n";
    cout << "Fisrt, enter the degree: ";
    cin >> deg;
    cout << "Next, enter the minutes of arc: ";
    cin >> min;
    cout << "Finally, enter the seconds of arc: ";
    cin >> sec;
    double min_sec = sec / min_cv_sec;
    double min_f = m_in + min_sec;   //final minute
    double deg_min = min_f / deg_cv_min;
    double deg_f = deg + deg_min;   //final degree
    cout << deg << " degrees, " << m_in << " minutes, " << sec << " seconds ";
    cout << " = " << deg_f << " degrees" << endl;

    return 0;

}