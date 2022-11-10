/*编写一个程序，要求用户以整数方式输入秒数（使用long或long
long变量存储），然后以天、小时、分钟和秒的方式显示这段时间。使
用符号常量来表示每天有多少小时、每小时有多少分钟以及每分钟有多
少秒。该程序的输出应与下面类似：
Enter the number of seconds: 31600000
31600000 seconds = 365 days, 17 hours, 46 minutes, 40 seconds*/
#include <iostream>
using namespace std;

int main()//测试用例：如题所示
{
    const int DAY_HOUR = 24;
    const int HOUR_MIN = 60;
    const int MIN_SEC = 60;
    int day,hour,min;
    long sec;
    cout << "Enter the number of seconds: ";
    cin >> sec;
    int sec_f = sec % MIN_SEC;  //final_second
    min = sec / MIN_SEC;
    int min_f = min % HOUR_MIN; //final_minute
    hour = min / HOUR_MIN;
    int hour_f = hour % DAY_HOUR;   //final_hour
    day = hour / DAY_HOUR;
    cout << sec << " seconds " << "= " << day << " days, ";
    cout << hour_f << " hours, " << min_f << " minutes, " << sec_f << " seconds\n";

    return 0;

}