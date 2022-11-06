/*这个练习让您编写处理数组和结构的函数。下面是程序的框
架，请提供其中描述的函数，以完成该程序。
*/
#include <iostream>
using namespace std;
const int SLEN = 30;
struct student
{
    char fullname[SLEN];
    char hobby[SLEN];
    int ooplevel;
};
int getinfo(student *pn, int n);
// getinfo() has two arguments: a pointer to the first element of
// an array of student structures and an int representing the
// number of elements of the array. The function solicits and
// stores data about students. It terminates input upon filling
// the array or upon encountering a blank line for the student
// name. The function returns the actual number of array elements
// filled.
void display1(student st);
// display1() takes a student structure as an argument
// and displays its contens
void display2(const student *ps);
// display2() takes the address of student structure as an
// argument and displays the structure's contents
void display3(const student pa[], int n);
// display3() takes the address of the first element of an array
// of student structures and the number of array elements as
// arguments and displays the contents of the structures

int main() //测试用例：3，Asu,game,1，God,play,0,回车 结果：如结果所示
{
    cout << "Enter class size: ";
    int class_size;
    cin >> class_size;
    while (cin.get() != '\n')
        continue;

    student *ptr_stu = new student[class_size];
    int entered = getinfo(ptr_stu, class_size);
    for (int i = 0; i < entered; i++)
    {
        display1(ptr_stu[i]);
        display2(&ptr_stu[i]);
    }
    display3(ptr_stu, entered);
    delete[] ptr_stu;
    cout << "Done\n";
    return 0;
}
int getinfo(student *pn, int n)
{
    int i = 0;
    for (i; i < n; pn++, i++)
    {
        cout << "Please enter fullname: ";
        cin.getline(pn->fullname, SLEN);
        if (pn->fullname[0] == '\0')
            break;
        cout << "Please enter hobby: ";
        cin.getline(pn->hobby, SLEN);
        cout << "Please enter ooplevel: ";
        cin >> pn->ooplevel;
        cin.get(); //处理回车符
    }
    return i; // i = n 或者 i = 下一个值，即i为临界值，可作为临界条件
}
void display1(student st)
{
    cout << "full name:" << st.fullname << endl;
    cout << "hobby:" << st.hobby << endl;
    cout << "ooplevel:" << st.ooplevel << endl;
    cout << "-------------------------" << endl;
}
void display2(const student *ps)
{
    cout << "full name:" << ps->fullname << endl;
    cout << "hobby:" << ps->hobby << endl;
    cout << "ooplevel:" << ps->ooplevel << endl;
    cout << "-------------------------" << endl;
}
void display3(const student pa[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "full name:" << pa[i].fullname << endl; // pa[i]为数组内的值
        cout << "hobby:" << pa[i].hobby << endl;
        cout << "ooplevel:" << pa[i].ooplevel << endl;
        cout << "-------------------------" << endl;
    }
}