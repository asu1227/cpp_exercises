#ifndef GUNSLINGER_H
#define GUNSLINGER_H

#include "person.h"

class Gunslinger : virtual public Person
{
private:
    double drawtime;                                                                //
    int notches;                                                                    //

protected:
    void Data() const;                                                              //

public:
    Gunslinger(const char * fn = "none", const char * ln = "none", double dt = 0.0, int no = 0) 
        : Person(fn, ln), drawtime(dt), notches(no) {}                // 使用默认值来覆盖默认构造函数
    double Draw() const { return drawtime; }
    int Notches() const { return notches; }
    void Show() const;
    void Set();
};
#endif