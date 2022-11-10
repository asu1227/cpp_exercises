/*结构CandyBar包含3个成员，如编程练习5所示。请编写一个程
序，创建一个包含3个元素的CandyBar数组，并将它们初始化为所选择
的值，然后显示每个结构的内容。*/
#include <iostream>
#include <string>
using namespace std;
struct CandyBar
{
    string name;
    double weight;
    int calorie;
};

int main()
{
    CandyBar candy[3] =
    {
        {"Mocha Munch", 2.3, 350},
        {"Rabiit", 0.8, 400},
        {"Tang", 5.2, 450}
    };
    cout << "name: " << candy[0].name << " " << candy[1].name << " " << candy[2].name << endl;
    cout << "weight: " << candy[0].weight << " " << candy[1].weight << " " << candy[2].weight << endl;
    cout << "calorie: " << candy[0].calorie << " " << candy[1].calorie << " " << candy[2].calorie << endl;
    
    return 0;
    
}