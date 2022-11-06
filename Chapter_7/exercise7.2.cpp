/*编写一个程序，要求用户输入最多10个高尔夫成绩，并将其存
储在一个数组中。程序允许用户提早结束输入，并在一行上显示所有成
绩，然后报告平均成绩。请使用3个数组处理函数来分别进行输入、显
示和计算平均成绩。*/
#include <iostream>

int fill_array (double * ar, int n);
void show_array (const double ar[], int n);
double compu_mean (const double ar[], int n);
using namespace std;
const int Max = 10;

int main()//测试用例：2.4,1.6,q 结果：2
{
    double ar_1 [Max];
    int limit = fill_array (ar_1, Max);
    show_array(ar_1, limit);
    double mean = compu_mean(ar_1, limit);
    cout << "mean = " << mean << endl;

    return 0;
}
int fill_array (double * ar, int n)
{
    double temp;
    int i;
    cout << "Enter 'q' to stop.\n";
    for (i = 0; i < n; i++)
    {
        cout << "Enter value #" << (i + 1) << ": ";
        cin >> temp;
        if (!cin)//使用除数字外其他字符作为终止
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            break;
        }
        ar[i] = temp;
    }
    return i;//最后i成为n，或者输入退出条件时ar[i]未赋值，数组共i个数
}
void show_array (const double ar[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "value #" << (i + 1) << " " << ar[i] << " ";
    }
    cout << endl;
}
double compu_mean (const double ar[], int n)
{
    double sum;
    for (int i = 0; i < n; i++)
    {
        sum += ar[i];
    }
    double mean = sum / n;
    return mean;
}
