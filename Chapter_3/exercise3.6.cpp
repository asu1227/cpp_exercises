/*编写一个程序，要求用户输入驱车里程（英里）和使用汽油量
（加仑），然后指出汽车耗油量为一加仑的里程。如果愿意，
也可以让程序要求用户以公里为单位输入距离，并以升为单位输入汽油量，
然后指出欧洲风格的结果—即每100公里的耗油量（升）。*/
#include <iostream>
using namespace std;

int main()
{
    double mileage,gasoline;
    cout << "Please enter mileage:___miles\b\b\b\b\b\b\b\b";
    cin >> mileage;
    cout << "Please enter the amount of gasoline used for the mileage:___gallons\b\b\b\b\b\b\b\b\b\b";
    cin >> gasoline;
    double mil_gas = mileage / gasoline;
    cout << "Mileage per gallon gasoline is: " << mil_gas << " miles.";
    cout << endl;
    // double mileage2,gasoline2;
    // cout << "Please enter mileage:___kilometers\b\b\b\b\b\b\b\b\b\b\b\b\b";
    // cin >> mileage2;
    // cout << "Please enter the amount of gasoline used for the mileage:___liters\b\b\b\b\b\b\b\b\b";
    // cin >> gasoline2;
    // double gas_mil = gasoline2 / mileage2 * 100;
    // cout << "Fuel consumption per 100 kilometers is: " << gas_mil << " liters.";
    // cout << endl;

    return 0;

}