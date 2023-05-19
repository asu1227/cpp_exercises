/*通过完成下面的工作来改进String类声明（即将String1.h升级为
String2.h）。
a．对+运算符进行重载，使之可将两个字符串合并成1个。
b．提供一个Stringlow( )成员函数，将字符串中所有的字母字符转
换为小写（别忘了cctype系列字符函数）。
c．提供String( )成员函数，将字符串中所有字母字符转换成大写。
d．提供一个这样的成员函数，它接受一个char参数，返回该字符
在字符串中出现的次数。
使用下面的程序来测试您的工作：*/
#ifndef STRING2_H_
#define STRING2_H_
#include <iostream>
using std::ostream;
using std::istream;

class String
{
private:
    char * str;     // pointer to string
    int len;        // length of string
    static int num_strings; // number of objects
    static const int CINLIM = 80; // cin input limit
public:
// constructors and other methods
    String(const char * s); // constructor
    String();               // default constructor
    String(const String &);   // copy constructor
    ~String();              // destructor
    int length () const { return len; }
    void Stringlow();
    void Stringup();
    int has(char c);
// overloaded operator methods
    String operator+(const String &) const;
    String operator+(const char *s) const; 
    String & operator=(const String &);
    String & operator=(const char *);
    char & operator[](int i);
    const char & operator[](int i) const;
// overloaded operator friends
    friend String operator+(const char *, const String &);
    friend bool operator<(const String &st, const String &st2);
    friend bool operator>(const String &st1, const String &st2);
    friend bool operator==(const String &st, const String &st2);
    friend ostream & operator<<(ostream & os, const String & st);
    friend istream & operator>>(istream & is, String & st);
// static function
    static int HowMany();
};
#endif