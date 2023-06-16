#include <iostream>
#include "tv.h"

int main()
{
    using std::cout;
    Tv s42;
    Remote grey;

    cout << "Initial settings for 42\" TV:\n";
    s42.settings();

    cout << "\nRemote mode: ";
    grey.show_mode();
    s42.set_mode_type(grey);
    cout << "\nRemote mode after changing: ";
    grey.show_mode();

    s42.onoff();
    s42.chanup();
    cout << "\nAdjusted settings for 42\" TV:\n";
    s42.settings();

    grey.set_chan(s42, 10);
    grey.volup(s42);
    grey.volup(s42);

    cout << "\nRemote mode: ";
    grey.show_mode();
    s42.set_mode_type(grey);
    cout << "\nRemote mode after changing: ";
    grey.show_mode();
    
    cout << "\n42\" settings after using remote:\n";
    s42.settings();

    Tv s58(Tv::On);
    s58.set_mode();
    grey.set_chan(s58, 28);
    cout << "\n58\" settings:\n";
    s58.settings();
    return 0;
}

