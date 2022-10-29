/*编写一个程序，要求用户按欧洲风格输入汽车的耗油量（每100
公里消耗的汽油量（升）），然后将其转换为美国风格的耗油量—每加
仑多少英里。注意，除了使用不同的单位计量外，美国方法（距离/燃
料）与欧洲方法（燃料/距离）相反。100公里等于62.14英里，1加仑等
于3.875升。因此，
19mpg大约合12.4l/100km，27mpg大约合8.71/100km。*/
#include <iostream>
using namespace std;

int main()//测试用例：如题所示，即输入12.4得到19mpg，输入8.71得到27mpg
{         //每100km耗油量减少，即每加仑油可行驶里程增加，都表示效率提高
    const double kilometers_cv_miles = 62.14;
    const double gallons_cv_liters = 3.875;
    double l_p_100;     //liters per 100 kilometers
    cout << "Please enter the fuel consumption per 100 kilometers: ";
    cin >> l_p_100;
    double gal_p_62miles = l_p_100 / gallons_cv_liters; //62.14miles' fuel consumption
    double mpg = kilometers_cv_miles / gal_p_62miles;
    cout << l_p_100 << " l/100km " << "= " << mpg << " mpg" << endl;

    return 0;

}