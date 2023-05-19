#include "stack.h"

Stack::Stack(int n)
{
    size = MAX;
    top = 0;
    pitems = new Item[size];
    for (int i = 0; i < n; i++) pitems[i] = 0;
}

Stack::Stack(const Stack & st)
{
    delete [] pitems;
    size = st.size;
    top = st.top;
    pitems = new Item[st.size];
    for (int i = 0; i < size; i++) pitems[i] = st.pitems[i];
}

Stack::~Stack()
{
    delete [] pitems;
}

bool Stack::isempty() const
{
    return top == 0;
}

bool Stack::isfull() const
{
    return top == MAX;
}

bool Stack::push(const Item & item) // add item to stack
{
    if (isfull())
        return false;
    pitems[top++] = item;
    return true;
}

bool Stack::pop(Item & item)    // pop top into item
{
    if (isempty())
        return false;
    item = pitems[--top];       // 必须是--top，因为指针一直指向后一个
    return true;
}

Stack & Stack::operator=(const Stack & st)
{
    if (this == &st)   // 地址比较
        return *this;
    delete [] pitems;
    size = st.size;
    top = st.top;
    pitems = new Item[size];
    for (int i = 0; i < st.size; i++)
        pitems[i] = st.pitems[i];
    return *this;
}

std::ostream & operator<<(std::ostream & os, const Stack & st)
{
    for (int i = 0; i < st.top; i++)    // 临界条件为小于top
    {
        os << st.pitems[i] << std::endl;    // 输出应为第i项
    }
    return os;
}