/*请看下面程序清单10.10定义的Stack类的变量：
正如私有成员表明的，这个类使用动态分配的数组来保存栈项。请
重新编写方法，以适应这种新的表示法，并编写一个程序来演示所有的
方法，包括复制构造函数和赋值运算符。*/
#ifndef STACK_H
#define STACK_H
#include <iostream>
using std::ostream;
typedef unsigned long Item;

class Stack
{
private:
    enum {MAX = 10};    // constant specfic to class
    Item * pitems;      // holds stack items
    int size;           // number of elements in stack
    int top;            // index for top stack item
public:
    Stack(int n = MAX); // creates stack with n elements
    Stack(const Stack & st);
    ~Stack();
    bool isempty() const;
    bool isfull() const;
    // push() returns false if stack already is full, true otherwise
    bool push(const Item & item);   // add item to stack
    // pop() returns false if stack already is empty, true otherwise
    bool pop(Item & item);          // pop top into item
    Stack & operator=(const Stack & st);
    friend ostream & operator<<(ostream & os, const Stack &);
};
#endif