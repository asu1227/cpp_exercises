/*编写模板函数maxn( )，它将由一个T类型元素组成的数组和一
个表示数组元素数目的整数作为参数，并返回数组中最大的元素。在程
序对它进行测试，该程序使用一个包含6个int元素的数组和一个包含4个
double元素的数组来调用该函数。程序还包含一个具体化，它将char指
针数组和数组中的指针数量作为参数，并返回最长的字符串的地址。如
果有多个这样的字符串，则返回其中第一个字符串的地址。使用由5个
字符串指针组成的数组来测试该具体化。*/
#include <iostream>
#include <cstring>
using namespace std;
template <typename T>
T maxn(T ar [], int n);

template <> 
char * maxn<char *>(char *ch[], int n);//explicit specialization
                                       //注意声明的形式 
int main()//对函数模板和显式具体化的练习
{
    int ar_i [6] = {5, 6, 3, 2, 1, 0};
    int max_i = maxn(ar_i, 6);
    double ar_d [4] = {6.6, 8.9, 11.67, 4.2};
    double max_d = maxn(ar_d, 4);
    const char * ar_st [5] = {"Hatuusa", "Phoenicia", "Asia Minor", "Hittite" , "Capital"};
    //const char * ptr与char const * ptr等价，都是指向字符常量的指针
    //这样可以防止修改指针指向的值，但可以将一个新地址赋给该指针
    char * pn_st[5];//为了与参数中的指针数组对应，应使用同样形式
    for (int i = 0; i < 5; i ++)
    {
        int size = strlen(ar_st[i]);//strlen()测得的长度不包括'\0'字符
        pn_st[i] = new char[size + 1];//使用相对应的长度以节省存储空间
        strcpy(pn_st[i], ar_st[i]);
    }
    char * max_st = maxn(pn_st, 5);
    cout << "max_i:" << max_i << endl;
    cout << "max_d:" << max_d << endl;
    cout << "max_st:" << max_st << endl;
    for (int i = 0; i < 5; i ++)//如何new就如何delete，一一对应
        delete pn_st[i];
    return 0;
}
template <typename T>
T maxn(T ar [], int n)
{
    T max_n = ar[0];
    for (int i = 0; i < n; i ++)
    {
        if (max_n < ar[i])
            max_n = ar[i];
    }
    return max_n;
}
template <> 
char * maxn<char *>(char *ch[], int n)
{
    int pos = 0;
    for(int i = 0; i < n; i ++)
    {
        if(strlen(ch[pos]) < strlen(ch[i]))//使用该形式的比较
            pos = i;
    }
    return ch[pos];
}