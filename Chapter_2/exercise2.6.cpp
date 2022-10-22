/*编写一个程序，其main( )调用一个用户定义的函数（以光年值
为参数，并返回对应天文单位的值）。该程序按下面的格式要求用户输
入光年值，并显示结果：
Enter the number of light years: 4.2
4.2 light years = 265608 astronomical units.*/
#include <iostream>
using namespace std;
double lightY_cv_astroU(double);    //function prototype

int main()
{   
    double light_y;
    cout << "Enter the number of light years: ";
    cin >> light_y;
    double astro_u = lightY_cv_astroU(light_y);
    cout << light_y << " light years = " << astro_u << " astronomical units." << endl;

    return 0; 

}

double lightY_cv_astroU(double lighty_1)
{
    double astrou_1 = lighty_1 * 63240;
    return astrou_1; 
}