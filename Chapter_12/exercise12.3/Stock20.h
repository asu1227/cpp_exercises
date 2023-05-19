/*新编写程序清单10.7和程序清单10.8描述的Stock类，使之使用动态分配的内存，而不是string类对象来存储股票名称。另外，使用重
载的operator < <()定义代替show()成员函数。再使用程序清单10.9测试新
的定义程序。*/
#ifndef STOCK20_H
#define STOCK20_H

#include <iostream>
using std::ostream;
class Stock
{
private:
    char * company;
    int shares;
    double share_val;
    double total_val;
    double set_tot() { return total_val = shares * share_val; }
public:
    Stock();    // default constructor
    Stock(const char * co, long n = 0, double pr = 0.0);
    ~Stock();   //
    void buy(long num, double price);
    void sell(long num, double price);
    void update(double price);
    const Stock & topval(const Stock & s) const;
    friend ostream & operator<<(ostream & os, const Stock & s);
};
#endif