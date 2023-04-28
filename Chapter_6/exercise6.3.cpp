/*编写一个菜单驱动程序的雏形。该程序显示一个提供4个选项的
菜单——每个选项用一个字母标记。如果用户使用有效选项之外的字母
进行响应，程序将提示用户输入一个有效的字母，直到用户这样做为
止。然后，该程序使用一条switch语句，根据用户的选择执行一个简单操作。
该程序的运行情况如下：
Please enter one of the following choices:
c) carnivore      p) pinanist
t) tree           g) game
Please enter a c, p, t, or g: f
Please enter a c, p, t, or g: t
A maple is a tree.*/
#include <iostream>
using namespace std;
void showmenu();

int main()//测试用例：如题所述
{
    char ch;
    showmenu();
    cout << "Please enter a c, p, t, or g: ";
    cin >> ch;
    while (ch != 'q')
    {
        switch (ch)
        {
            case 'c' : cout << "A tiger is a carnivore.\n";
                       break;
            case 'p' : cout << "Chopin is a pianist.\n";
                       break;
            case 't' : cout << "A maple is a tree.\n";
                       break;
            case 'g' : cout << "Xenoblade3 is a game.\n";
                       break;
        }
        cout << "Please enter a c, p, t, or g: ";
        cin >> ch;
    }
    cout << "Bye!\n";

    return 0;

}
void showmenu()
{
    cout << "Please enter one of the following choices:\n"
            "c) carnivore      p) pinanist\n"
            "t) tree           g) game\n"
            "q) quit\n";
}