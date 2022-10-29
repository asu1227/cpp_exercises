/*编写一个C++程序，如下述输出示例所示的那样请求并显示信
息：
What is your first name? Betty Sue
What is your last name? Yewe
What letter grade do you deserve? B
What is your age? 22
Name: Yewe,Betty Sue
Grade: C
Age: 22
注意，该程序应该接受的名字包含多个单词。另外，程序将向下调
整成绩，即向上调一个字母。假设用户请求A、B或C，所以不必担心D
和F之间的空档。*/
#include <iostream>
using namespace std;
struct usr_info     //structure declaration
{
    char first_name[20];
    char last_name[20];
    char grade;
    int age;
};
int main()//测试用例：如题所示
{
    const int Arsize = 20;
    usr_info usr_1;
    cout << "What is your first name? ";
    cin.getline(usr_1.first_name,Arsize);
    cout << "What is your last name? ";
    cin.getline(usr_1.last_name,Arsize);
    cout << "What letter grade do you deserve? ";
    cin >> usr_1.grade;
    cout << "What is your age? ";
    cin >> usr_1.age;
    cout << "Name: " << usr_1.last_name << "," << usr_1.first_name << endl;
    cout << "Grade: " << char(usr_1.grade+1) << endl;
    cout << "Age: " << usr_1.age << endl;

    return 0;    

}