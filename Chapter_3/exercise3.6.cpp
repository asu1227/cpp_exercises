/*编写一个程序，要求用户输入驱车里程（英里）和使用汽油量
（加仑），然后指出汽车耗油量为一加仑的里程。如果愿意，
也可以让程序要求用户以公里为单位输入距离，并以升为单位输入汽油量，
然后指出欧洲风格的结果—即每100公里的耗油量（升）。*/
#include <iostream>
#include <string>
using namespace std;

int main()//测试用例：100miles 9gallons 结果：11.1111miles
{         //将注释部分可实现，运行部分注释 测试用例：200km 9L 结果：每100公里耗油4.5L 
    // double mileage,gasoline;
    // cout << "Please enter mileage:___miles" + string(8, '\b');
    // cin >> mileage;
    // cout << "Please enter the amount of gasoline used for the mileage:___gallons" + string(10, '\b');
    // cin >> gasoline;
    // double mil_gas = mileage / gasoline;
    // cout << "Mileage per gallon gasoline is: " << mil_gas << " miles.";
    // cout << endl;
    double mileage2,gasoline2;
    cout << "Please enter mileage:___kilometers" + string(13, '\b');
    cin >> mileage2;
    cout << "Please enter the amount of gasoline used for the mileage:___liters" + string(9, '\b');
    cin >> gasoline2;
    double gas_mil = gasoline2 / mileage2 * 100;
    cout << "Fuel consumption per 100 kilometers is: " << gas_mil << " liters.";
    cout << endl;

    return 0;

}