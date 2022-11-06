/*完成编程练习6，但从文件中读取所需的信息。该文件的第一项
应为捐款人数，余下的内容应为成对的行。在每一对中，第一行为捐款
人姓名，第二行为捐款数额。即该文件类似于下面：
4
Sam Stone
2000
Freida Flass
100500
Tammy Tubbs
5000
Rich Raptor
55000*/
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
struct donation{
    string name;
    double num;
};

int main()//输入文件为test6.9.txt,出现free(): invalid size与Aborted (core dumped)报错，未解决。
{
    ifstream ifs;
    string filename = "test6.9.txt";
    ifs.open(filename);
    int don;
    ifs >> don;
    donation *pn [10];//declare a array of pointers
    for (int i = 0; i < don; i++)
    {
        ifs.get();//接收之前输入的回车符
        *(pn+i) = new donation;
        getline(ifs, pn[i]->name);//ifs可作为getline的输入流参数
        ifs >> pn[i]->num;
    }
    ifs.close();
    cout << "Grand Patrons: " << endl;
    int mm_1 = 0;
    for (int i = 0; i < don; i++)
    {
        if(pn[i]->num >= 10000)
        {
            cout << pn[i]->name << ":" << pn[i]->num << endl;
            mm_1 ++;
        }
    }
    if (mm_1 == 0)
            cout << "none\n";
    cout << "Patrons: " << endl;
    int mm_2 = 0;
    for (int i = 0; i < don; i++)
    {
        if(pn[i]->num < 10000)
        {
            cout << pn[i]->name << ":" << pn[i]->num << endl;
            mm_2 ++;
        }
    }
    if (mm_2 == 0)
            cout << "none\n";
    delete pn [10];

    return 0;
    
}