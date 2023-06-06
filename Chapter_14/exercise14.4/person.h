/*Person类保存人的名和姓。除构造函数外，它还有Show( )方
法，用于显示名和姓。Gunslinger类以Person类为虚基类派生而来，它包
含一个Draw( )成员，该方法返回一个double值，表示枪手的拔枪时间。
这个类还包含一个int成员，表示枪手枪上的刻痕数。最后，这个类还包
含一个Show( )函数，用于显示所有这些信息。*/
#ifndef PERSON_H
#define PERSON_H
#include <string>

class Person
{
private:
    std::string fisrt_name;
    std::string last_name;

protected:
    virtual void Data() const;                                          //

public:
    Person(const char * fn = "none", const char * ln = "none")
         : fisrt_name(fn), last_name(ln) {}
    virtual ~Person() {};                                                       //
    virtual void Show() const;                                                  //
    virtual void Set();                                                         //
};
#endif