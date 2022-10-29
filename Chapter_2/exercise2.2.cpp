/*编写一个C++程序，它要求用户输入一个以long为单位的距离，
然后将它转换为码（一long等于220码）。*/
#include <iostream>
using namespace std;
int longcodecv(int);    //function prototype

int main()//测试用例：任意正整数
{
    int distance;
    cout << "please enter a distance in long: ";
    cin >> distance;
    int code = longcodecv(distance);
    cout << distance << " long = ";
    cout << code << " code." << endl;
    
    return 0;

}

int longcodecv(int lcc)
{
    int acv = lcc * 220;
    return acv;

}
