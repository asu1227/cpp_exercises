/*编写一个程序，它打开一个文件文件，逐个字符地读取该文
件，直到到达文件末尾，然后指出该文件中包含多少个字符。*/
#include <iostream>
#include <fstream>//文件输入输出使用头文件
#include <cstdlib>//support for exit()
#include <string>
using namespace std;

int main()//已在Chapter_6创建test_6.8文本文件
{
    ifstream ifs;//object for handling file input
    string filename;
    filename = "test6.8.txt";
    ifs.open(filename);
    if (!ifs.is_open())
    {
        cout << "Could not open the file.\n";
        exit(EXIT_FAILURE);
    }

    int count = 0;
    char ch;
    while (!ifs.eof())//读取到eof时终止循环，读到eof时函数值为true
    {
        ifs >> ch;
        cout << ch;
        count ++;
    }
    if (ifs.eof())
        cout << "End of file reached.\n";
    ifs.close();
    cout << "characters: " << count-1 << endl;//为什么每次读出的字符数会加1？不太理解这地方

    return 0;

}