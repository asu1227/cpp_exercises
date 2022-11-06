/*编写一个程序，读取键盘输入，直到遇到@符号为止，并回显
输入（数字除外），同时将大写字符转换为小写，将小写字符转换为大
写（别忘了cctype函数系列）。*/
#include <iostream>
#include <cctype>

int main()//测试用例：I LOve
{
    using namespace std;
    char ch;

    cout << "Please type:(type @ to stop)\n";
    cin.get(ch);
    while (ch != '@')
    {
        if (isdigit(ch))
            cout << ch;
        if (ch == ' ')
            cout << ch;
        if (ch == '\n')
            cout << ch;
        if (islower(ch))
            cout << char(toupper(ch));
        else if (isupper(ch))
            cout << char(tolower(ch));
        cin.get(ch);
    }

    return 0;

}