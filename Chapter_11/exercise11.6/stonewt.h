#ifndef STONEWT_H
#define STONEWT_H

#include <iostream>
class Stonewt
{
private:
    enum {Lbs_per_stn = 14};    // pounds per stone
    int stone;                  // whole stones
    double pds_left;            // fractional pounds
    double pounds;              // entire weight in pounds
public:
    Stonewt(double lbs);        // constructor for double pounds
    Stonewt(int stn, double lbs);   // constructor for stone, lbs
    Stonewt();                  // default constructor
    ~Stonewt();
    
    void show_stn() const;
    void show_lbs() const;

    bool operator==(const Stonewt & s) const;
    bool operator!=(const Stonewt & s) const;
    bool operator>(const Stonewt & s) const;
    bool operator<(const Stonewt & s) const;
    bool operator>=(const Stonewt & s) const;
    bool operator<=(const Stonewt & s) const;

};
#endif