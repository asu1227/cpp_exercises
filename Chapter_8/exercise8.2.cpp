/*CandyBar结构包含3个成员。第一个成员存储candy bar的品牌名
称；第二个成员存储candy bar的重量（可能有小数）；第三个成员存储
candy bar的热量（整数）。
请编写一个程序，它使用一个这样的函数，
即将CandyBar的引用、char指针、double和int作为参数，并用最后3个值
设置相应的结构成员。最后3个参数的默认值分别为“Millennium
Munch”、2.85和350。
另外，该程序还包含一个以CandyBar的引用为参
数，并显示结构内容的函数。请尽可能使用const。*/
#include <iostream>
#include <string>
using namespace std;
struct CandyBar
{
    string Name;
    double weight;
    int carlorie;
};
void set_struct(CandyBar & st, const char * ch = "Millennium Munch", double db = 2.85, int n = 350);
void pri_struct(const CandyBar & st);

int main()//关于默认参数和结构引用的练习
{
    CandyBar cb = {};
    set_struct(cb);
    pri_struct(cb);
    char ch [20] = "Big White Rabbit"; double db = 3.1; int n = 400;
    set_struct(cb, ch, db, n);
    pri_struct(cb);
    return 0;
}
void set_struct(CandyBar & st, const char * ch, double db, int n)
{
    st.Name = ch;
    st.weight = db;
    st.carlorie = n;
}
void pri_struct(const CandyBar & st)
{
    cout << "Name:" << st.Name << endl;
    cout << "weight:" << st.weight << endl;
    cout << "carlorie:" << st.carlorie << endl;
}