/*许多州的彩票发行机构都使用如程序清单7.4所示的简单彩票玩
法的变体。在这些玩法中，玩家从一组被称为域号码（field number）的
号码中选择几个。例如，可以从域号码1～47中选择5个号码；还可以从
第二个区间（如1～27）选择一个号码（称为特选号码）。要赢得头
奖，必须正确猜中所有的号码。中头奖的几率是选中所有域号码的几率
与选中特选号码几率的乘积。例如，在这个例子中，中头奖的几率是从
47个号码中正确选取5个号码的几率与从27个号码中正确选择1个号码的
几率的乘积。请修改程序清单7.4，以计算中得这种彩票头奖的几率。*/
#include <iostream>
using namespace std;
long double probability (unsigned numbers, unsigned picks);

int main()//测试用例：由题意知47，5  27，1 结果：1/(4.14164e+07)
{
    unsigned numbers, choices;
    cout << "Please enter filed numbers and choices: ";
    cin >> numbers >> choices;
    long double p_1 = probability(numbers, choices);
    cout << "Please enter particular numbers and choices: ";
    cin >> numbers >> choices;
    long double p_2 = probability(numbers, choices);
    long double p = p_1 * p_2;
    cout << "You have one chance in " << p << " of winning.\n";
    
    return 0;
}

long double probability (unsigned numbers, unsigned picks)
{
    long double result = 1.0;
    long double n = numbers;
    unsigned p = picks;
    for (; p > 0; n--,p--)
    {
        result *= n / p;//超几何分布问题
    }
    return result;
}