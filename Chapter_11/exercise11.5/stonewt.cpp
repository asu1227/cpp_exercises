#include <iostream>
#include <iomanip>
using std::cout;
#include "stonewt.h"

// construct Stonewt object from double value
Stonewt::Stonewt(double lbs, Mode m)
{
    stone = int (lbs) / Lbs_per_stn;    // integer division
    pds_left = int (lbs) % Lbs_per_stn + lbs - int(lbs);
    pounds = lbs;
    mode = m;   //
}

// construct Stonewt object from stone, double values
Stonewt::Stonewt(int stn, double lbs, Mode m)
{
    stone = stn;
    pds_left = lbs;
    pounds = stn * Lbs_per_stn + lbs;
    mode = m;   //
}

Stonewt::Stonewt()      // default constructor, wt = 0
{
    stone = pounds = pds_left = 0;
    mode = Stone;
}

Stonewt::~Stonewt()     // destructor
{

}

Stonewt Stonewt::operator+(const Stonewt & s) const
{
    // Stonewt add;
    // add.pounds = pounds + s.pounds;
    // add.pds_left = int(add.pounds) % Lbs_per_stn + add.pounds - int (add.pounds);
    // add.stone = int(add.pounds) / Lbs_per_stn;
    // return add;
    double add = pounds + s.pounds;
    return Stonewt(add);
}

Stonewt Stonewt::operator-(const Stonewt & s) const
{
    // Stonewt diff;
    // diff.pounds = pounds - s.pounds;
    // diff.pds_left = int(diff.pounds) % Lbs_per_stn + diff.pounds - int (diff.pounds);
    // diff.stone = int(diff.pounds) / Lbs_per_stn;
    // return diff;
    double diff = pounds - s.pounds;
    return Stonewt(diff);
}

Stonewt Stonewt::operator*(double n) const
{
    // Stonewt result;
    // result.pounds = pounds * n;
    // result.pds_left = int(result.pounds) % Lbs_per_stn + result.pounds - int (result.pounds);
    // result.stone = int(result.pounds) / Lbs_per_stn;
    // return result;
    double result = pounds * n;
    return Stonewt(result);
}

std::ostream & operator<<(std::ostream & os, const Stonewt & s)
{
    if (s.mode == s.Stone)
        os << s.stone << " stone, " << s.pds_left << " pounds\n";
    else if (s.mode == s.Intpound)
        os << int(s.pounds) << " pounds\n";
    else if (s.mode == s.Floatpound)
        os << std::fixed << std::setprecision(4) << s.pounds << " pounds\n";
    else
        os << "Mode error!" << std::endl;
    return os;
}