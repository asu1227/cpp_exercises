#ifndef CLASSIC_H
#define CLASSIC_H
// base class
class Cd    // represents a CD disk
{
private:
    char performers[50];
    char label[20];
    int selections;     // number of selections
    double playtime;    // playing time in minutes
public:
    Cd(const char * s1, const char * s2, int n, double x);
    Cd(const Cd & d);
    Cd();
    virtual ~Cd();
    virtual void Report() const;    // reports all CD data
    virtual Cd & operator=(const Cd &);
};
/*派生出一个Classic类，并添加一组char成员，用于存储指出CD中主
要作品的字符串。修改上述声明，使基类的所有函数都是虚的。如果上
述定义声明的某个方法并不需要，则请删除它。使用下面的程序测试您
的产品：*/
class Classic : public Cd
{
private:
    char * major_works;
public:
    Classic(const char * s, const char * s1, const char * s2, int n, double x);
    Classic(const char * s, const Cd & c);
    Classic(const Classic &);   //
    Classic();
    virtual ~Classic();         //
    virtual void Report() const;
    virtual Classic & operator=(const Classic & cl);    //
};

#endif