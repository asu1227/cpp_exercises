/*考虑下面的结构声明：
struct customer {
    char fullname[35];
    double payment;
};
编写一个程序，它从栈中添加和删除customer结构（栈用Stack类声
明表示）。每次customer结构被删除时，其payment的值都被加入到总数
中，并报告总数。注意：应该可以直接使用Stack类而不作修改；只需
修改typedef声明，使Item的类型为customer，而不是unsigned long即可。*/
#ifndef STACK_H
#define STACK_H

struct customer {
    char fullname[35];
    double payment;
};
typedef customer Item;

class Stack
{
private:
    double total;
    enum {MAX = 10};    //constant specific to class
    Item items[MAX];    //holds stack items
    int top;            //index for top stack item
public:
    Stack();
    bool isempty() const;
    bool isfull() const;
    // push() returns false if stack already full, true otherwise
    bool push(const Item & item); //add item to stack

    // pop() returns false if stack already is empty, true otherwise
    bool pop(Item & item); //pop top into item
};
#endif