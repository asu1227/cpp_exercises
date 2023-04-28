/*编写一个程序，使用定位new运算符将一个包含两个这种结构的数
组放在一个缓冲区中。然后，给结构的成员赋值（对于char数组，使用
函数strcpy( )），并使用一个循环来显示内容。一种方法是像程序清单
9.10那样将一个静态数组用作缓冲区；另一种方法是使用常规new运算
符来分配缓冲区。
struct chaff
{
    char dross[20];
    int slag;
};*/
#include <iostream>
#include <cstring>

using namespace std;
struct chaff
{
    char dross[20];
    int slag;
};

int main()
{
    chaff * pt = new chaff[5];
    strcpy(pt[0].dross, "one");
    pt[0].slag = 1;
    strcpy(pt[1].dross, "two");
    pt[1].slag = 2;
    for(int i = 0; strcmp(pt[i].dross, ""); i++)
    {
        cout << i << " dross: " << pt[i].dross << endl;
        cout << i << " slag: " << pt[i].slag << endl;
    }
    delete [] pt;
}