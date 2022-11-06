/*下面是一个结构声明：
struct box
{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};
a．编写一个函数，按值传递box结构，并显示每个成员的值。
b．编写一个函数，传递box结构的地址，并将volume成员设置为其
他三维长度的乘积。
c．编写一个使用这两个函数的简单程序。*/
#include <iostream>
using namespace std;
struct box
{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};
void show_strc (box ch);
void change_strc_vol (box * ch);

int main()
{
    box bx_1 = {"Alex", 2.2 , 1.1 , 3.3 , 7.986};
    show_strc(bx_1);
    change_strc_vol(&bx_1);
    cout << "After change :\n";
    show_strc(bx_1);

    return 0;
}

void show_strc (box ch)
{
    cout << "maker: " << ch.maker << endl;
    cout << "height: " << ch.height << endl;
    cout << "width: " << ch.width << endl;
    cout << "length: " << ch.length << endl;
    cout << "volume: " << ch.volume << endl;
}
void change_strc_vol (box * ch)
{
    const int i = 1;
    ch->volume = i;
}
