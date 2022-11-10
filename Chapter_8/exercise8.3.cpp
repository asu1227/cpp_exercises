/*编写一个函数，它接受一个指向string对象的引用作为参数，并
将该string对象的内容转换为大写，为此可使用表6.4描述的函数toupper(
)。然后编写一个程序，它通过使用一个循环让您能够用不同的输入来
测试这个函数，该程序的运行情况如下：
Enter a string (q to quit): go away
GO AWAY
Next string (q to quit): good grief!
GOOD GRIEF!
Next string (q to quit): q
Bye.*/
#include <iostream>
#include <cctype>//to use toupper()
#include <string>
using namespace std;
void str_toupper(string & str);

int main()//测试用例：如题所示
{
    string str;
    cout << "Enter a string (q to quit): ";
    getline(cin, str);
    while (str != "q")//可直接判定整个字符串
    {
        str_toupper(str);
        cout << str << endl;
        // str = "";
        cout << "Next string (q to quit): ";
        getline(cin, str);
    }
    cout << "Bye.\n";
    return 0;
}
void str_toupper(string & str)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        str[i] = toupper(str[i]);//变换后应有一个接收变量接收变换后的值
    }
}
