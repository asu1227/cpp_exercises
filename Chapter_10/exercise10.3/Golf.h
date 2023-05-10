/*完成第9章的编程练习1，但要用正确的golf类声明替换那里的代
码。用带合适参数的构造函数替换setgolf（golf &, const char *, int），
以提供初始值。保留setgolf( )的交互版本，但要用构造函数来实现它
（例如，setgolf( )的代码应该获得数据，将数据传递给构造函数来创建
一个临时对象，并将其赋给调用对象，即*this）*/
#ifndef GOLF_H
#define GOLF_H


class Golf
{
private:
    static const int Len = 40;
    char fullname_[Len];
    int handicap_;
public:
    Golf();
    Golf(const char * fullname, int handicap);
    int setGolf();
    void sethandicap(int handicap);
    void showGolf() const;
};

#endif