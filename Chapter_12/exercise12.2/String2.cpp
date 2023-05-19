#include "String2.h"
#include <cstring>
#include <cctype>

using std::cin;
using std::cout;

// initializing static class member

int String::num_strings = 0;

// static method
int String::HowMany()
{
    return num_strings;
}

// class methods
String::String()                // default constructor
{
    len = 0;
    str = new char[len + 1];
    str[0] = '\0';              // default string
    num_strings++;
}

String::String(const char * s)  // construct String from C string
{
    len = std::strlen(s);       // set size
    str = new char[len + 1];    // allot storage
    std::strcpy(str, s);        // initialize pointer
    num_strings++;              // set object count
}

String::String(const String & st)   // 复制构造函数
{
    len = st.len;               // same length
    str = new char [len + 1];   // allot space
    std::strcpy(str, st.str);   // copy string to new location
    num_strings++;              // handle static member update
}

String::~String()               // necessary destructor
{
    --num_strings;
    delete [] str;
}

void String::Stringlow()
{
    // int i = 0;
    // while(str[i] != '\0')
    //     tolower(str[i++]);
    for (int i = 0; i < len; i++)
        str[i]=tolower(str[i]);
}

void String::Stringup()
{
    // int i = 0;
    // while(str[i] != '\0')
    //     toupper(str[i++]);
    for (int i = 0; i < len; i++)
        str[i]=toupper(str[i]);
}

int String::has(char c)
{
    int i = 0;
    int num = 0;
    while(str[i] != '\0')
    {
        if (str[i++] == c)
            num++;
    }
    return num;
}
// overloaded operator methods

    // assign a String to a String
//+
String String::operator+(const String &s) const 
{
    int total_len = len + s.len;
    char *tmp = new char[total_len + 1];
    std::strcpy(tmp, str);
    std::strcat(tmp, s.str);
    String str_new = tmp;
    delete[] tmp;       // 此处为何要删除tmp？ 构造函数会生成新的存储空间。
    return str_new;
}

String String::operator+(const char *s) const 
{                       // 隐式调用构造函数  初始化总是会调用复制构造函数，而使用=运算符时也可能调用赋值运算符
    String tmp = s;     // 隐式调用赋值运算符 String & operator=(const * s)
    String sum = *this + tmp;   // 隐式调用加号运算符
    return sum;
}

String operator+(const char *s1, const String &s2) 
{ return String(s1) + s2; }     // 隐式调用构造函数 String(const char *s)与加号运算符

//=    // 赋值运算符
String & String::operator=(const String & st)
{
    if (this == &st)
        return *this;
    delete [] str;
    len = st.len;
    str = new char[len + 1];
    std::strcpy(str, st.str);
    return *this;
}

    // 赋值运算符
String & String::operator=(const char * s)
{
    delete [] str;
    len = std::strlen(s);
    str = new char[len + 1];
    std::strcpy(str, s);
    return *this;
}

    // read-write char access for non-const String
char & String::operator[](int i)
{
    return str[i];
}

    // read-only char access for const String
const char & String::operator[](int i) const
{
    return str[i];
}

// overloaded operator friends
    


bool operator<(const String &st1, const String &st2)
{
    return (std::strcmp(st1.str, st2.str) < 0);
}

bool operator>(const String &st1, const String &st2)
{
    return st2 < st1;
}

bool operator==(const String &st1, const String &st2)
{
    return (std::strcmp(st1.str, st2.str) == 0);
}

    // simple String output
ostream & operator<<(ostream & os, const String & st)
{
    os << st.str;
    return os;
}

    // quick and dirty String input
istream & operator>>(istream & is, String & st)
{
    char temp[String::CINLIM];
    is.get(temp, String::CINLIM);
    if (is)
        st = temp;
    while (is && is.get() != '\n')
        continue;
    return is;
}


