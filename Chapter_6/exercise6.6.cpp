/*编写一个程序，记录捐助给“维护合法权利团体”的资金。该程
序要求用户输入捐献者数目，然后要求用户输入每一个捐献者的姓名和
款项。这些信息被储存在一个动态分配的结构数组中。每个结构有两个
成员：用来储存姓名的字符数组（或string对象）和用来存储款项的
double成员。读取所有的数据后，程序将显示所有捐款超过10000的捐
款者的姓名及其捐款数额。该列表前应包含一个标题，指出下面的捐款
者是重要捐款人（Grand Patrons）。然后，程序将列出其他的捐款者，
该列表要以Patrons开头。如果某种类别没有捐款者，则程序将打印单
词“none”。该程序只显示这两种类别，而不进行排序。*/
#include <iostream>
#include <string>
using namespace std;
struct donation{
    string name;
    double num;
};

int main()//测试用例1：2，"David L",10000.1,"Alex N"，500
{         //测试用例2：3,"Wang J",30000,"Wang L",50000,"J J",89999
    cout << "Please enter the number of donations: ";
    int don = 0;
    cin >> don;
    donation *pn  = new donation [don];//创建一个结构数组，pn指向donation[0]
    for (int i = 0; i < don; i++)
    {
        cin.get();//接收之前输入的回车符
        cout << "Please enter the name of donations:";
        getline(cin, (pn+i)->name);
        cout << "Please enter the num of donations:";
        cin >> pn[i].num;
    }
    cout << "Grand Patrons: " << endl;
    int mm_1 = 0;
    for (int i = 0; i < don; i++)
    {
        if(pn[i].num >= 10000)
        {
            cout << pn[i].name << ":" << pn[i].num << endl;
            mm_1 ++;
        }
    }
    if (mm_1 == 0)
            cout << "none\n";
    cout << "Patrons: " << endl;
    int mm_2 = 0;
    for (int i = 0; i < don; i++)
    {
        if(pn[i].num < 10000)
        {
            cout << pn[i].name << ":" << pn[i].num << endl;
            mm_2 ++;
        }
    }
    if (mm_2 == 0)
            cout << "none\n";
    delete [] pn;//释放pn指向的结构数组的空间

    return 0;
    
}