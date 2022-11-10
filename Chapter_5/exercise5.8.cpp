/*编写一个程序，它使用一个char数组和循环来每次读取一个单
词，直到用户输入done为止。随后，该程序指出用户输入了多少个单词
（不包括done在内）。下面是该程序的运行情况：
Enter words (to stop, type the word done):
anteater birthday category dumpster
envy finagle geometry done for sure
You entered a total of 7 words
您应在程序中包含头文件cstring，并使用函数strcmp( )来进行比较
测试。*/
#include <iostream>
#include <cstring>
using namespace std;
const int ArSize = 20;

int main()  //测试用例：如题目所述
{
    char cr [ArSize][ArSize];
    int i = 0;
    cout << "Enter words (to stop, type the word done):" << endl;
   
    while (i < ArSize && cin >> cr[i] && strcmp(cr[i], "done"))//如果不是done，则进入循环
    {
        i ++;//最后得cr[i]=“done”
    }
    for (int j = 0; j < i; j++)//到j=i停止，不会输出cr[i]
    {
        cout << cr[j] << " ";
    }
    cout << endl;
    cout << "You entered a total of " << i << " words" << endl;

    return 0;
    
}
