#ifndef POKERPLAYER_H
#define POKERPLAYER_H
#include "person.h"
class PokerPlayer : virtual public Person
{
private:
public:
    PokerPlayer(const char * fn = "none", const char * ln = "none") 
        : Person(fn, ln) {}
    int Draw() const;
    // void Show() const { Person::Show(); }
};
#endif