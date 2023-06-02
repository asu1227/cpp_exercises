/*Benevolent Order of Programmers用来维护瓶装葡萄酒箱。为描
述它，BOP Portmaster设置了一个Port类，其声明如下：*/
#ifndef PORT_H
#define PORT_H
#include <iostream>
using namespace std;
class Port
{
private:
    char * brand;
    char style[20];
    int bottles;
public:
    Port(const char * br = "none", const char * st = "none", int b = 0);
    Port(const Port & p);
    virtual ~Port() { delete [] brand; }
    Port & operator=(const Port & p);
    Port & operator+=(int b);               // adds b to bottles
    Port & operator-=(int b);               // substracts b from bottles, if available  
    int BottleCount() const { return bottles; }
    virtual void Show() const;
    friend ostream & operator<<(ostream & os, const Port & p);
};
/*show( )方法按下面的格式显示信息：
Brand: Gallo
kind: tawny
Bottles: 20
operator<<( )函数按下面的格式显示信息（末尾没有换行符）：
Gallo, tawny, 20*/
/*PortMaster完成了Port类的方法定义后派生了VintagePort类，然后被
解职——因为不小心将一瓶45度Cockburn泼到了正在准备烤肉调料的人
身上，VintagePort类如下所示：*/
class VintagePort : public Port
{
private:
    char * nickname;
    int year;
public:
    VintagePort();
    VintagePort(const char * br, int b, const char * nn = "none", int y = 0);
    VintagePort(const VintagePort & vp);
    ~VintagePort() { delete [] nickname; }
    VintagePort & operator=(const VintagePort & vp);

    void Show() const;
    friend ostream & operator<<(ostream & os, const VintagePort & vp);
};
/*您被指定负责完成VintagePort。
a．第一个任务是重新创建Port方法定义，因为前任被开除时销毁了
方法定义。
b．第二个任务是解释为什么有的方法重新定义了，而有些没有重
新定义。
c．第三个任务是解释为何没有将operator=()和operator<<()声明为
虚的。
d．第四个任务是提供VintagePort中各个方法的定义。*/
#endif