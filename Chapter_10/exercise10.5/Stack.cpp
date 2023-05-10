#include "Stack.h"
#include <iostream>

using namespace std;

Stack::Stack()
{
    top = 0;
    total = 0.0;
}

bool Stack::isempty() const
{
    return top == 0;
}

bool Stack::isfull() const
{
    return top == MAX;
}

bool Stack::push(const Item & item)
{
    if (isfull())
    {    
        return false; 
    }
    else
    {
        items[top++] = item;
        return true;
    }
}        

bool Stack::pop(Item & item)
{
    if(isempty())
    {
        return false;
    }
    else
    {
        item = items[--top];
         //此处为--top，因为top指向下一个未填充位置
        total += item.payment;
        cout << "An order has been processed, current total: " << total << endl;
        return true;
    }
}