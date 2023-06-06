#ifndef WINC_H
#define WINC_H
/*Wine类有一个string类对象成员（参见第4章）和一个Pair对象
（参见本章）；其中前者用于存储葡萄酒的名称，而后者有2个
valarray<int>对象（参见本章），这两个valarray<int>对象分别保存了葡
萄酒的酿造年份和该年生产的瓶数。例如，Pair的第1个valarray<int>对
象可能为1988、1992和1996年，第2个valarray<int>对象可能为24、48和
144瓶。Wine最好有1个int成员用于存储年数。另外，一些typedef可能
有助于简化编程工作：*/
#include <iostream>
#include <string>
#include <valarray>
template <class T1, class T2>
class Pair
{
private:
    T1 a;
    T2 b;
public:
    T1 & first();
    T2 & second();
    T1 first() const { return a; }
    T2 second() const { return b; }
    Pair(const T1 & aval, const T2 & bval) : a(aval), b(bval) { }
    Pair(const Pair<T1,T2>& p);                             //
    Pair() { }
};

template<class T1, class T2>
Pair<T1, T2>::Pair(const Pair<T1,T2>&p)
{
    a = p.a;
    b = p.b;
}

template<class T1, class T2>
T1 & Pair<T1, T2>::first()
{
    return a;
}
template<class T1, class T2>
T2 & Pair<T1, T2>::second()
{
    return b;
}


/*这样，PairArray表示的是类型Pair<std::valarray<int>,
std::valarray<int> >。使用包含来实现Wine类，并用一个简单的程序对其
进行测试。Wine类应该有一个默认构造函数以及如下构造函数：*/
class Wine
{
private:
    typedef std::valarray<int> ArrayInt;                    //
    typedef Pair<ArrayInt, ArrayInt> PairArray;             //
    std::string label;
    int years_num;
    PairArray data;                                         //
    // ArrayInt years;
    // ArrayInt bottles;
    // Pair<years, bottles>;
public:
    // initialize label to l, number of years to y
    // vintage years to yr[], bottles to bot[]
    Wine(const char * l, int y, const int yr[], const int bot[]);
    // initialize label to l, number of years to y
    // create array objects of length y
    Wine(const char * l, int y);
    void GetBottles();
    const std::string & Label() { return label; }
    int sum() const;                                        //
    void Show() const;                                      //
};
/*Wine类应该有一个GetBottles( )方法，它根据Wine对象能够存储几
种年份（y），提示用户输入年份和瓶数。方法Label( )返回一个指向葡
萄酒名称的引用。sum( )方法返回Pair对象中第二个valarray<int>对象中
的瓶数总和。*/

#endif