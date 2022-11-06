/*编写一个程序，它使用下列函数：
Fill_array( )将一个double数组的名称和长度作为参数。它提示用户
输入double值，并将这些值存储到数组中。当数组被填满或用户输入了
非数字时，输入将停止，并返回实际输入了多少个数字。
Show_array( )将一个double数组的名称和长度作为参数，并显示该
数组的内容。
Reverse-array( )将一个double数组的名称和长度作为参数，并将存
储在数组中的值的顺序反转。
程序将使用这些函数来填充数组，然后显示数组；反转数组，然后
显示数组；反转数组中除第一个和最后一个元素之外的所有元素，然后
显示数组。*/
#include <iostream>
using namespace std;
int Fill_array(double * ar, int n);
void Show_array(const double * ar, int n);
void Reverse_array(double * ar, int n);

int main()//测试用例：1，2，3，4，5，q
{
    const int Max = 10;
    double ar_1 [Max];
    int limit = Fill_array(ar_1, Max);
    Show_array(ar_1, limit);
    Reverse_array(ar_1, limit);
    cout << "After Reverse:\n";
    Show_array(ar_1, limit);
    Reverse_array(ar_1, limit);//复原数组
    Reverse_array(ar_1 + 1, limit - 2);
    cout << "After Reverse_2:\n";
    Show_array(ar_1, limit);

    return 0;
}
int Fill_array(double * ar, int n)
{
    double temp;
    int i;
    cout << "Enter q to exit.\n";
    for (i = 0; i < n; i++)
    {
        cout << "value #" << (i + 1) << ": ";
        cin >> temp;
        if (!cin)
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            break;//退出for循环
        }
        ar[i] = temp;
    }
    return i;//i到达n 或者 因为q退出，temp未赋值给ar[i]，共i个数
}
void Show_array(const double * ar,int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "value #" << (i + 1) << ":" << ar[i] << " "; 
    }
    cout << endl;
}
void Reverse_array(double *ar, int n)
{
    for (int i = 0; i < n/2; i++)//奇数时，3;偶数时，4
    {
        double temp;
        temp = ar[i];
        ar[i] = ar[n-1-i];
        ar[n-1-i] = temp;
    }
}