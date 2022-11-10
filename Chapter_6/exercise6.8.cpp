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
    // while (!ifs.eof())//读到eof(0xFF)时函数值为true
    // {//eof()当读到最后一个字符时，程序会多读一次
    //  //（编译器会让指针停留在最后一个字符那里，然后重复读取一次)
    //  //eof()在读取完最后一个数据后，仍是False，当再次试图读一个数据时，
    //  //由于发现没数据可读了，才知道到末尾了，此时才修改标志，eof变为True
    //     ifs >> ch;
    //     cout << ch;
    //     count ++;
    // }
    // if (ifs.eof())
    //     cout << "End of file reached.\n";
    while (ifs >> ch)//更改后版本,即eof()方法不适合作为判断条件
    {
        cout << ch;
        count ++;
    }
    if (ifs.eof())
        cout << "End of file reached.\n";
    ifs.close();
    cout << "characters: " << count << endl;//为什么每次读出的字符数会加1？不太理解这地方。已解决

    return 0;

}