/*下面是一个程序框架：
#include <iostream>
using namespace std;
#include <cstring>//for strlen(), strcpy()
struct stringy {
    char * str;//points to a string
    int ct;//length of string (not counting '\0')
};

//prototypes for set(), show(), and show() go here
int main()
{
    stringy beany;
    char testing[] = "Reality isn't what it used to be.";

    set(beany, testing);//first argument is a reference,
                    //allocates space to hold copy of testing,
                    //sets str member of beany to point to the
                    //new block, copies testing to new block,
                    //and sets ct member of beany
    show(beany);//prints member string one
    show(beany, 2);//prints member string twice
    testing[0] = 'D';
    testing[1] = 'u';
    show(testing);//prints testing string once
    show(testing, 3);//prints testing string thrice
    show("Done!");
    return 0;
}
请提供其中描述的函数和原型，从而完成该程序。注意，应有两个
show( )函数，每个都使用默认参数。请尽可能使用cosnt参数。set( )使用
new分配足够的空间来存储指定的字符串。这里使用的技术与设计和实
现类时使用的相似。（可能还必须修改头文件的名称，删除using编译指
令，这取决于所用的编译器。）*/
#include <iostream>
using namespace std;
struct stringy {
    char * str;//points to a string
    int ct;//length of string (not counting '\0')
};
const int Arsize = 30;
void set(stringy & sty, const char * ch);
void show(const stringy & sty, int n = 1);
//prototypes for set(), show(), and show() go here
void show(const char * ch, int n = 1);

int main()//默认参数的练习与函数重载的练习
{
    stringy beany;
    char testing[] = "Reality isn't what it used to be.";

    set(beany, testing);//first argument is a reference,
                    //allocates space to hold copy of testing,
                    //sets str member of beany to point to the
                    //new block, copies testing to new block,
                    //and sets ct member of beany
    show(beany);//prints member string one
    show(beany, 2);//prints member string twice
    testing[0] = 'D';
    testing[1] = 'u';
    show(testing);//prints testing string once
    show(testing, 3);//prints testing string thrice
    show("Done!");
    return 0;
}

void set(stringy & sty, const char * ch)
{
    char * pn = new char[Arsize];
    int i = 0;
    for (; ch[i] != '\0'; i++)
    {
        pn[i] = ch[i];
    }
    pn[i] = '\0';
    sty.str = pn;
}
void show(const stringy & sty, int n)
{
    for (int i = 0; i < n; i++)
        cout << sty.str << endl;
}
void show(const char * ch, int n)
{
    for (int i = 0; i < n; i ++)
    {
        for (int j = 0; ch[j] != '\0'; j ++)
        {
            cout << ch[j];
        }
        cout << endl;    
    }
}