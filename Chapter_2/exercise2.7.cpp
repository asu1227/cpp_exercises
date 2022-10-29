/*编写一个程序，要求用户输入小时数和分钟数。在main( )函数
中，将这两个值传递给一个void函数，后者以下面这样的格式显示这两
个值：
Enter the number of hours: 9
Enter the number of minutes: 28
Time: 9:28*/
#include <iostream>
using namespace std;
void Time(int,int);     //function prototype

int main()//测试用例：如题所示
{
    int hour,minute;
    cout << "Enter the number of hours: ";
    cin >> hour;
    cout << "Enter the number of minutes: ";
    cin >> minute;
    Time(hour,minute);

    return 0;

}

void Time(int hour_1,int minute_1)
{
    cout << "Time: " << hour_1 << ":" << minute_1 << endl;
}