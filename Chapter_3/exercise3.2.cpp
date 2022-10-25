/*2．编写一个小程序，要求以几英尺几英寸的方式输入其身高，并
以磅为单位输入其体重。（使用3个变量来存储这些信息。）该程序报告其BMI
（Body Mass Index，体重指数）。为了计算BMI，该程序以英
寸的方式指出用户的身高（1英尺为12英寸），并将以英寸为单位的身
高转换为以米为单位的身高（1英寸=0.0254米）。然后，将以磅为单位
的体重转换为以千克为单位的体重（1千克=2.2磅）。最后，计算相应
的BMI—体重（千克）除以身高（米）的平方。用符号常量表示各种转
换因子。*/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    const int feet_cv_inches = 12;
    const double inches_cv_meters = 0.0254;
    const double pounds_cv_kilograms = 2.2;
    int my_height_feet,my_heigt_inches;     //my height is 5 feet 10 inches
    int my_weight_pound;    //my weight is 132 pound
    cout << "Please enter your heigt:__feet__inches.\n";     //PROMPT提示符
    cout << "__feet\b\b\b\b\b\b";
    cin >> my_height_feet;
    cout << "__inches\b\b\b\b\b\b\b\b";
    cin >> my_heigt_inches;
    cout << "Please enter your weight:__pounds.\n";
    cout << "___pounds\b\b\b\b\b\b\b\b\b";
    cin >> my_weight_pound;
    int usr_height_inches;
    usr_height_inches = my_height_feet * feet_cv_inches + my_heigt_inches; 
    cout << "Your height is " << usr_height_inches << " inches.\n";     //usr_height_inches
    double usr_height_meters;
    usr_height_meters = usr_height_inches * inches_cv_meters;
    cout << "Your height is " << usr_height_meters << " meters.\n";     //usr_height_meters
    int usr_weight_kilograms;
    usr_weight_kilograms = my_weight_pound / pounds_cv_kilograms;       //usr_weight_kilograms
    double BMI;
    double usr_height_meters_pow2 = pow(usr_height_meters,2);
    BMI = usr_weight_kilograms / usr_height_meters_pow2;
    cout << "Your BMI is " << BMI << endl;

    return 0;
    
}