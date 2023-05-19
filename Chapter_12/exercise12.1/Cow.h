/*对于下面的类声明：给这个类提供实现，并编写一个使用所有成员函数的小程序*/
#ifndef COW_H
#define COW_H

class Cow
{
    char name[20];
    char * hobby;
    double weight;
public:
    Cow();
    Cow(const char * nm, const char * ho, double wt);
    Cow(const Cow & c);
    ~Cow();
    Cow & operator=(const Cow & c);
    void ShowCow() const;   //  display all cow data
};
#endif