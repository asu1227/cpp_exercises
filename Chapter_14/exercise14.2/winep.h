/*采用私有继承而不是包含来完成编程练习1。同样，一些typedef
可能会有所帮助，另外，您可能还需要考虑诸如下面这样的语句的含
义：
PairArray::operator=(PairArray(ArrayInt(), ArrayInt()));
cout << (const string &)(*this) */
#ifndef WINC_H
#define WINC_H

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

typedef std::valarray<int> ArrayInt;                    //
typedef Pair<ArrayInt, ArrayInt> PairArray;             //
class Wine : private PairArray, private std::string
{
private:
    int years_num;                                        //;
public:
    Wine(const char * l, int y, const int yr[], const int bot[]);
    Wine(const char * l, int y);
    void GetBottles();
    const std::string & Label() { return (const std::string &)(*this); }
    int sum() const;                                        //
    void Show() const;                                      //
};

#endif