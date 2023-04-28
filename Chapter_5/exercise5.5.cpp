/*假设要销售《C++ For Fools》一书。请编写一个程序，输入全
年中每个月的销售量（图书数量，而不是销售额）。程序通过循环，使
用初始化为月份字符串的char *数组（或string对象数组）逐月进行提
示，并将输入的数据储存在一个int数组中。然后，程序计算数组中各元
素的总数，并报告这一年的销售情况。*/
#include <iostream>
#include <string>
using namespace std;

int main()  //测试用例：1,2,3,4,5,6,7,8,9,10,11,12  结果：78
{
    int sale[12], sum = 0;
    string months[12] = {"January", "February", "March", "April",
     "May", "June", "July", "August", "September", "October", "November", "December"};
    for (int i = 0; i < 12; i++)
        {   
            cout << "The sales volume of " << months[i] << ": ";
            cin >> sale[i];
            sum += sale[i];
        }
    cout << "The sales volume of the year: " << sum << endl;

    return 0;

}