/*编写一个使用嵌套循环的程序，要求用户输入一个值，指出要
显示多少行。然后，程序将显示相应行数的星号，其中第一行包括一个
星号，第二行包括两个星号，依此类推。每一行包含的字符数等于用户
指定的行数，在星号不够的情况下，在星号前面加上句点。该程序的运
行情况如下：
Enter number of rows:5
....*
...**
..***
.****
*****
*/
#include <iostream>
using namespace std;

int main()//测试用例：如图所示
{
    cout << "Please enter number of rows:";
    int rows;
    cin >> rows;
    char cr[rows][rows];
    for (int i = 0; i < rows; i++) //初始化
        for (int j = 0; j < rows; j++)
        {
            cr[i][j] = '-';
        }
    for (int i = 0; i < rows; i++) //形成矩阵
        for (int j = 0; j <= i; j++)
        {
            cr[i][j] = '*';
        }
    for (int i = 0; i < rows; i++)
        {
            for (int j = rows-1; j >= 0; j--)//翻转输出
            {
            cout << cr[i][j];
            }
            cout << endl;
        }
}