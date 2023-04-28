# include "golf.h"
# include <iostream>

using namespace std;

int main()
{
    golf ann;
    setgolf(ann, "Ann Birdfree", 24);
    golf andy;
    setgolf(andy);
    showgolf(ann);
    showgolf(andy);
    handicap(ann, 1);
    showgolf(ann);

    return 0;
}