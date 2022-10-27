/*完成编程练习6，但使用new来动态分配数组，而不是声明一个
包含3个元素的CandyBar数组。
结构CandyBar包含3个成员，如编程练习5所示。请编写一个程
序，创建一个包含3个元素的CandyBar数组，并将它们初始化为所选择
的值，然后显示每个结构的内容。*/
#include <iostream>
#include <string>
using namespace std;
struct CandyBar
{
    string name;
    double weight;
    int calorie;
};

int main()
{
    CandyBar* pn = new CandyBar [3];
    *pn = {"Mocha Munch", 2.3, 350};
    pn[1] = {"Rabiit", 0.8, 400};
    *(pn+2) = {"Tang", 5.2, 450};
    cout << "name: "; 
    cout << pn[0].name << " ";
    cout << (pn+1) -> name << " ";  //(pn+1)为地址，->可用于指向结构的指针，就好像.可用于结构名一样 
    cout << pn[2].name << endl;
    delete [] pn;   //不要忘记删除分配的动态内存

    return 0;
    
}