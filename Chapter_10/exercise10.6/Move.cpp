#include "Move.h"
#include <iostream>

using namespace std;

Move::Move(double a, double b)
{
    x = a;
    y = b;
}

void Move::showmove() const
{
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
}

Move Move::add(const Move & m) const
{
    Move a1;
    a1.x = m.x + this->x;
    a1.y = m.y + (*this).y;
    return a1;
}

void Move::reset(double a, double b)
{
    x = a;
    y = b;
}