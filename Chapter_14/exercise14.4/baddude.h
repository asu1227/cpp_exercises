#ifndef BADDUDE_H
#define BADDUDE_H
#include "person.h"
#include "gunslinger.h"
#include "pokerplayer.h"

class BadDude : public Gunslinger, public PokerPlayer
{
private:
public:
    double Gdraw() { return Gunslinger::Draw(); }
    int Cdraw() { return PokerPlayer::Draw(); }
    void Show() const;
    void Set();
};
#endif