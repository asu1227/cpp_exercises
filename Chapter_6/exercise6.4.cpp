/*加入Benevolent Order of Programmer后，在BOP大会上，人们便
可以通过加入者的真实姓名、头衔或秘密BOP姓名来了解他（她）。请
编写一个程序，可以使用真实姓名、头衔、秘密姓名或成员偏好来列出
成员。编写该程序时，请使用下面的结构：
//Benevolent Order of Programmers name struture
struct bop {
    char fullname[strsize];// real name
    char title[strsize];   // job title
    char bopname[strsize]; // secret BOP name
    int preference;        // 0 = fullname,1 = title,2 = bopname
};
该程序创建一个由上述结构组成的小型数组，并将其初始化为适当的值。另外，
该程序使用一个循环，让用户在下面的选项中进行选择：
a. display by name      b. display by title
c. display by bopname   d. display by preference
q. quit
注意，“display by preference”并不意味着显示成员的偏好，而是意
味着根据成员的偏好来列出成员。例如，如果偏好号为1，则选择d将显
示程序员的头衔。该程序的运行情况如下：
Benevolent Order of Programmers Report
a. display by name      b. display by title
c. display by bopname   d. display by preference
q. quit
Enter your choice: a
Wimp Macho
Raki Rhodes
Celia Laiter
Hoppy Hipman
Pat Hand
Next choice: d
Wimp Macho
Junior Programmer
MIPS
Analyst Trainee
LOOPY
next choice: q
Bye!*/
#include <iostream>
using namespace std;
void menu();
int const strsize = 20;
struct bop {
    char fullname[strsize];// real name
    char title[strsize];   // job title
    char bopname[strsize]; // secret BOP name
    int preference;        // 0 = fullname,1 = title,2 = bopname
};

int main()//测试用例：如图所示
{
    char ch;
    bop bp[5] = 
    {
        {"Wimp Macho", "Match_01", "Good Man", 0},
        {"Raki Rhodes", "GNU", "Junior Programmer", 2},
        {"Celia Laiter", "MIPS", "Icon", 1},
        {"Hoppy Hipman", "ASCI", "Analyst Trainee", 2},
        {"Pat Hand", "LOOPY", "Rookie", 1}
    };
    menu();
    cout << "Enter your choice: ";
    cin >> ch;
    while (ch != 'q')
    {
        switch(ch)
        {
            case 'a' : for (int i = 0; i < 5; i++)
                            cout << bp[i].fullname << endl;
                       break;
            case 'b' : for (int i = 0; i < 5; i++)
                            cout << bp[i].title << endl;
                       break;
            case 'c' : for (int i = 0; i < 5; i++)
                            cout << bp[i].bopname << endl;
                       break;
            case 'd' : for (int i = 0; i < 5; i++)
                        {
                            if (bp[i].preference == 0)
                            cout << bp[i].fullname << endl;
                            else if (bp[i].preference == 1)
                                    cout << bp[i].title << endl;
                            else if (bp[i].preference == 2)
                                    cout << bp[i].bopname << endl;
                        }
                        break;

            default  : cout << "Next choice: ";
        }
        cout << "Next choice: ";
        cin >> ch;
    }
    cout << "Bye!\n";

    return 0;
    
}
void menu()
{
    cout << "Benevolent Order of Programmers Report\n"
            "a. display by name      b. display by title\n"
            "c. display by bopname   d. display by preference\n"
            "q. quit\n";
}