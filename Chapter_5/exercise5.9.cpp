/*编写一个满足前一个练习中描述的程序，但使用string对象而不
是字符数组。请在程序中包含头文件string，并使用关系运算符来进行
比较测试。
Enter words (to stop, type the word done):
anteater birthday category dumpster
envy finagle geometry done for sure
You entered a total of 7 words*/
#include <iostream>
#include <string>
using namespace std;
const int ArSize = 20;

int main()//测试用例：如题所示
{
    string str [ArSize];
    int i = 0;
    cout << "Enter words (to stop, type the word done):" << endl;
    while (i < ArSize && cin >> str[i] && str[i] != "done")//如果不是done，则进入循环
        {
            i ++;//最后得str[i]=“done”
        }
        for (int j = 0; j < i; j++)//到j=i停止，不会输出cr[i]
        {
            cout << str[j] << " ";
        }
    cout << endl;
    cout << "You entered a total of " << i << " words" << endl;

    return 0;
}