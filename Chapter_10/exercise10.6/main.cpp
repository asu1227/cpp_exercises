#include "Move.h"

int main()
{
    Move m1(1,2);
    Move m2(3,4);
    Move m3;
    m1.showmove();
    m2.showmove();
    m3.showmove();
    Move m4 = m1.add(m2);
    m4.showmove();
    m3.reset(1,2);
    m3.showmove();

    return 0;
}