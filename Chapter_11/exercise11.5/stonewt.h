#ifndef STONEWT_H
#define STONEWT_H

#include <iostream>
class Stonewt
{
public:
    enum Mode {Stone, Intpound, Floatpound};
private:
    enum {Lbs_per_stn = 14};    // pounds per stone
    int stone;                  // whole stones
    double pds_left;            // fractional pounds
    double pounds;              // entire weight in pounds
    Mode mode;
public:
    Stonewt(double lbs, Mode mode = Stone);        // constructor for double pounds
    Stonewt(int stn, double lbs, Mode mode = Stone);   // constructor for stone, lbs
    Stonewt();                  // default constructor
    ~Stonewt();
    void set_intpound() {mode = Intpound;}
    void set_floatpound() {mode = Floatpound;}
    Stonewt operator+(const Stonewt & s) const;
    Stonewt operator-(const Stonewt & s) const;
    Stonewt operator*(double n) const;
    friend Stonewt operator*(double n, const Stonewt & s) // 
    {
        return s * n;
    }
    friend std::ostream & operator<<(std::ostream & os, const Stonewt & s);
};
#endif