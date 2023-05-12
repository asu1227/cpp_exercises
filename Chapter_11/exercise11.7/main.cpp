/*复数有两个部分组成：实数部分和虚数部分。复数的一种书写
方式是：（3.0，4.0），其中，3.0是实数部分，4.0是虚数部分。假设a
= (A, Bi)，c = (C, Di)，则下面是一些复数运算。
加法：a + c = (A+C, (B+D)i)。
减法：a – c = (A−C, (B−D)i)。
乘法：a * c = (A*C−B*D, (A*D + B*C)i)。
乘法::x*c = (x * C, x *Di)，其中x为实数。
共轭：~a = (A, −Bi)。
请定义一个复数类，以便下面的程序可以使用它来获得正确的结
果。*/
#include <iostream>
using namespace std;
#include "complex0.h"   // to avoid confusion with complex.h
int main()
{
    Complex a(3.0, 4.0);    // initialize to (3,4i)
    Complex c;
    cout << "Enter a complex number (q to quit):\n";
    while (cin >> c)
    {
        cout << "c is " << c << '\n';
        cout << "complex conjugate is " << ~c << '\n';
        cout << "a is " << a << '\n';
        cout << "a + c is " << a + c << '\n';
        cout << "a - c is " << a - c << '\n';
        cout << "a * c is " << a * c << '\n';
        cout << "2 * c is " << 2 * c << '\n';
        cout << "Enter a complex number (q to quit):\n";
    }
    cout << "Done!\n";
    return 0;
}