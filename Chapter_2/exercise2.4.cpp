/*编写一个程序，让用户输入其年龄，然后显示该年龄包含多少
个月，如下所示：
Enter your age:29
Enter the number of hours:9
Enter the number of minutes:28
Time:9:28*/
#include <iostream>
using namespace std;
int year_cv_month(int);     //function prototype

int main()//测试用例：如题所示
{
    int age;int hour;int minute;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter the number of hours: ";
    cin >> hour;
    cout << "Enter the number of minutes: ";
    cin >> minute;
    cout << "Time:" << hour << ":" << minute << endl;
    int month = year_cv_month(age);
    cout << age <<" ages = " << month << " months" << endl;

    return 0;
    
}

int year_cv_month(int age_f)
{
    int afcv = age_f * 12;
    return afcv;
}