/*完成编程练习5，但这一次使用一个二维数组来存储输入—3年中每个月的销售量。
程序将报告每年销售量以及三年的总销售量。*/
#include <iostream>
#include <string>
using namespace std;

int main()  //测试用例：1,2,3,4,5,6,7,8,9,10,11,12  全2 全1  结果：78,24,12,114
{
    string months[12] = {"January", "February", "March", "April", 
      "May", "June", "July", "August", "September", "October", "November", "December"};
    int sum[3][12];
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 12; j++)
        {   
            cout << "The sales volume of " << i+1 << "." << months[j] << ": ";
            cin >> sum[i][j];
        }
    int sum1, sum2, sum3 = 0;
    sum1 = sum2 = sum3;
    int sum_sum = 0;
    for (int i = 0; i < 12; i++)
    {
        sum1 += sum[0][i];
        sum2 += sum[1][i];
        sum3 += sum[2][i];
    }
    sum_sum = sum1 + sum2 + sum3;
    cout << "The sales volume of the first year: " << sum1 << endl;
    cout << "The sales volume of the second year: " << sum2 << endl;
    cout << "The sales volume of the third year: " << sum3 << endl;
    cout << "The sales volume of the 3 year: " << sum_sum << endl;

    return 0;

}