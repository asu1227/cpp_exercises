/*可以将简单列表描述成下面这样：
可存储0或多个某种类型的列表；
可创建空列表；
可在列表中添加数据项；
可确定列表是否为空；
可确定列表是否为满；
可访问列表中的每一个数据项，并对它执行某种操作。
可以看到，这个列表确实很简单，例如，它不允许插入或删除数据
项。
请设计一个List类来表示这种抽象类型。您应提供头文件list.h和实
现文件list.cpp，前者包含类定义，后者包含类方法的实现。您还应创建
一个简短的程序来使用这个类。
该列表的规范很简单，这主要旨在简化这个编程练习。可以选择使
用数组或链表来实现该列表，但公有接口不应依赖于所做的选择。也就
是说，公有接口不应有数组索引、节点指针等。应使用通用概念来表达
创建列表、在列表中添加数据项等操作。对于访问数据项以及执行操
作，通常应使用将函数指针作为参数的函数来处理：
void visit(void (*pf)(Item &));
其中，pf指向一个将Item引用作为参数的函数（不是成员函数），Item是列表中数据项的类型。visit( )函数将该函数用于列表中的每个数
据项。*/
#ifndef LIST_H
#define LIST_H
typedef unsigned long Item;
void visit_Item(Item &);

class List
{
private:
    enum {MAX = 10};
    Item items[MAX];
    int top;
public:
    List();
    bool isempty() const;
    bool isfull() const;
    bool add(const Item & item);
    void visit(void (*pf)(Item &));
};
#endif