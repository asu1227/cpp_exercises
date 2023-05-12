/*重新编写Stonewt类（程序清单11.16和程序清单11.17），重载
全部6个关系运算符。运算符对pounds成员进行比较，并返回一个bool
值。编写一个程序，它声明一个包含6个Stonewt对象的数组，并在数组
声明中初始化前3个对象。然后使用循环来读取用于设置剩余3个数组元
素的值。接着报告最小的元素、最大的元素以及大于或等于11英石的元
素的数量（最简单的方法是创建一个Stonewt对象，并将其初始化为11
英石，然后将其同其他对象进行比较）。*/
#include "stonewt.h"
#include <iostream>

int main()
{
    using std::cout;
    using std::endl;
    using std::cin;

    Stonewt arr[6] = {30, 12, 26};
     for(int i = 3; i < 6; i++)
     {
         cout << "Stonewt[" << i << "]: ";
         double st;
         cin >> st;
         arr[i] = Stonewt(st);
     }

     Stonewt max = arr[0], min = arr[0];
     int num = 0;
     Stonewt eleven = Stonewt(11, 0.0);
     for(int i = 0; i < 6; ++i)
     {
         if(arr[i] > max)
             max = arr[i];
         if(arr[i] < min)
             min = arr[i];
         if(arr[i] > eleven)
             num++;
     }

     cout << "max: " << endl;
     max.show_lbs();
     cout << "min: " << endl;
     min.show_lbs();
     cout << num << " elements > 11 stones" << endl;

    return 0;
}