# include "golf.h"
# include <iostream>
# include <cstring>

using namespace std;

void setgolf(golf & g, const char * name, int hc){
    strcpy(g.fullname, name); //strcpy复制函数
    g.handicap = hc;
}

int setgolf(golf & g){
    cout << "Please enter your name:\n";
    cin.getline(g.fullname, Len);
    if (strcmp(g.fullname, "") == 0) //strcmp比较函数，若相等则返回0
        return 0;
    cout << "Please enter your handicap:\n";
    cin >> g.handicap;
    cin.get(); //接受回车符
    return 1;
}

void handicap(golf & g, int hc){
    g.handicap = hc;
}

void showgolf(const golf & g){
    cout << "Name of golf:" << g.fullname << endl;
    cout << "Handicap of golf:" << g.handicap << endl;
}