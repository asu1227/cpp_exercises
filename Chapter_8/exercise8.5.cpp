/*编写模板函数max5( )，它将一个包含5个T类型元素的数组作为
参数，并返回数组中最大的元素（由于长度固定，因此可以在循环中使
用硬编码，而不必通过参数来传递）。在一个程序中使用该函数，将T
替换为一个包含5个int值的数组和一个包含5个dowble值的数组，以测试
该函数。*/
#include <iostream>
using namespace std;
template <typename T>
T max5(const T ar [5]);

int main()//结果：6、11.67
{
    int ar_i [5] = {5, 6, 3, 2, 1};
    int max_i = max5(ar_i);
    double ar_d [5] = {6.6, 8.9, 11.67, 4.2, 3.1};
    double max_d = max5(ar_d);
    cout << "max_i:" << max_i << endl;
    cout << "max_d:" << max_d << endl;
    return 0;
}
template <typename T>
T max5(const T ar [5])
{
    T max_n = ar[0];
    for (int i = 0; i < 5; i ++)
    {
        if (max_n < ar[i])
            max_n = ar[i];
    }
    return max_n;
}