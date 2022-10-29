/*使用array对象（而不是数组）和long double（而不是long long）
重新编写程序清单5.4，并计算100!的值。
program 5.4
#include <iostream>
const int ArSize = 16;
int main()
{
    long long factorials[ArSize];

    factorials[1] = factorials[0] = 1LL;
    for (int i = 2; i < ArSize; i++)
        factorials[i] = i * factorials[i-1];
    for (int i = 0; i < ArSize; i++)
        std::cout << i << "! = " << factorials[i] << std::endl;
    return 0;
}*/
#include <iostream>
#include <array>
using namespace std;

int main()
{
    array<long double, 101> factorials; //存储0-100共101个数据
    
    factorials[1] = factorials[0] = 1LL;
    for (int i = 2; i < 101; i++)   //i为101时跳出循环，即得到factorials[100]
        factorials[i] = i * factorials[i-1];
    for (int i = 0; i < 101; i++)
        cout << i << "! = " << factorials[i] << endl;
    return 0;
}

