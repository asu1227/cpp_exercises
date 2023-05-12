#include "stonewt.h"
using namespace std;

int main()
{
    Stonewt s1(2, 6.7);
    Stonewt s2(47.5);
    cout << "s1: " << s1 << endl;
    cout << "s2: " << s2 << endl;
    Stonewt s3 = s1 + s2;
    cout << "s3:(s1+s2) " << s3 << endl;
    s3 = s2 - s1;
    cout << "s3:(s2-s1) " << s3 << endl;
    Stonewt s4 = 2.2 * s3;
    cout << "s3 * 2.2: " << s4 << endl;
    s3.set_floatpound();
    cout << "s3:(floatpound) " << s3 << endl;
    s3.set_intpound();
    cout << "s3:(intpound) " << s3 << endl;
}