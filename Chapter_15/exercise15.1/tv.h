/*1．对Tv和Remote类做如下修改：a．让它们互为友元；
b．在Remote类中添加一个状态变量成员，该成员描述遥控器是处
于常规模式还是互动模式；
c．在Remote中添加一个显示模式的方法；
d．在Tv类中添加一个对Remote中新成员进行切换的方法，该方法
应仅当TV处于打开状态时才能运行。
编写一个小程序来测试这些新特性。*/
#ifndef TV_H
#define TV_H

class Remote;

class Tv
{
private:
    int state;          // on or off
    int volume;         // assumed to be digitizied
    int maxchannel;     // maximum number of channels
    int channel;        // current channel setting
    int mode;           // broadcast or cable
    int input;          // TV or DVD
public:
    friend class Remote;        // Remote can access Tv private data
    enum {Off, On};
    enum {MinVal, MaxVal = 20};
    enum {Antenna, Cable};
    enum {TV, DVD};

    Tv(int s = Off, int mc = 125) : state(s), volume(5),
        maxchannel(mc), channel(2), mode(Cable), input(TV) {}
    void onoff() { state = (state == On)? Off : On; }
    bool ison() const { return state == On; }
    bool volup();
    bool voldown();
    void chanup();
    void chandown();
    void set_mode() { mode = (mode == Antenna)? Cable : Antenna; }
    void set_input() { input = (input == TV)? DVD : TV; }
    void settings() const;      // display all settings
    void set_mode_type(Remote & r);
};

class Remote
{
private:
    int mode;                   // controls TV or DVD
    int mode_type;
public:
    friend class Tv;
    enum { regular, interative };
    Remote(int m = Tv::TV) : mode(m), mode_type(regular) {}
    bool volup(Tv & t) { return t.volup(); }
    bool voldown(Tv & t) { return t.voldown(); }
    void onoff(Tv & t) { t.onoff(); }
    void chanup(Tv & t) { t.chanup(); }
    void chandown(Tv & t) { t.chandown(); }
    void set_chan(Tv & t, int c) { t.channel = c; }
    void set_mode(Tv & t) { t.set_mode(); }
    void set_input(Tv & t) { t.set_input(); }
    void show_mode();
};
#endif