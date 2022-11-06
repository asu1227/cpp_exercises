/*修改程序清单7.7中的3个数组处理函数，使之使用两个指针参
数来表示区间。fill_array( )函数不返回实际读取了多少个数字，
而是返回一个指针，该指针指向最后被填充的位置；其他的函数可以将该指针
作为第二个参数，以标识数据结尾。*/
#include <iostream>
using namespace std;
double *fill_array(double *begin, double *end);
void show_array(const double *ar, double *end);
void revalue(double r, double *ar, double *end);

int main()//测试用例：1,2,3 factor:0.8
{
    const int Max = 10;
    double ar_1 [Max];

    double * end_1 = fill_array(ar_1, ar_1 + Max);
    show_array(ar_1, end_1);
    cout << "Enter revaluation factor: ";
    double factor;
    while (!(cin >> factor))//使用while使得在输入错误时可以循环输入
    {
        cin.clear();
        while(cin.get() != '\n')
            continue;
        cout << "Bad input,please enter a number: ";
    }
    revalue(factor, ar_1, end_1);
    show_array(ar_1, end_1);
    cout << "Done.\n";

    return 0;
}
double *fill_array(double *begin, double *end)
{
    double temp;
    double *pn;
    cout << "Enter 'q' to exit.\n";
    int i = 1;
    for (pn = begin; pn < end; pn++)//终止条件应为pn < end
    {
        cout << "Enter value #" << i++ << ": ";
        cin >> temp;
        if (!cin)
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            break;
        }
        *pn = temp;
    }
    return pn; // pn = end 或者 pn = 下一位未被填充的数
}
void show_array(const double *ar, double *end)
{
    const double *pn;
    int i = 1;
    for (pn = ar; pn < end; pn++)//终止条件应为pn < end
    {
        cout << "value #" << i++ << " = " << *pn << " ";
    }
    cout << endl;
}
void revalue(double r, double *ar, double *end)
{
    double * pn;
    for (pn = ar; pn < end; pn++)//终止条件应为pn < end
    {
        *pn *= r;
    }
}