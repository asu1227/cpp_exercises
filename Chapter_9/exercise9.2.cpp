/* 修改程序清单9.9：用string对象代替字符数组。这样，该程序将
不再需要检查输入的字符串是否过长，同时可以将输入字符串同字符
串“”进行比较，以判断是否为空行。 */
#include <iostream>
#include <string>

using namespace std;
void strcount(const string &str);

int main()
{
    string input;

    cout << "Enter a line:\n";
    getline(cin, input);
    while(input != "")
    {
        strcount(input);
        cout << "Enter next line (empty line to quit):\n";
        getline(cin, input);
    }
    cout << "Bye\n";
    return 0;
}

void strcount(const string &str)
{
    static int total = 0;
    int count = 0;

    cout << "\""  << str << "\" contains ";
    count = str.size();
    total += count;
    cout << count << " characters\n";
    cout << total << " characters total\n";
}