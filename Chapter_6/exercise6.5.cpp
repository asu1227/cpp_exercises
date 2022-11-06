/*在Neutronia王国，货币单位是tvarp，收入所得税的计算方式如
下：
5000 tvarps：不收税
5001～15000 tvarps：10%
15001～35000 tvarps：15%
35000 tvarps以上：20%
例如，收入为38000 tvarps时，所得税为5000 0.00 + 10000 0.10 +
20000 0.15 + 3000 0.20，即4600 tvarps。请编写一个程序，使用循环来
要求用户输入收入，并报告所得税。当用户输入负数或非数字时，循环
将结束。*/
#include <iostream>

int main()//测试用例：如题所示
{
    using namespace std;
    double num;
    cout << "Please enter your income:(unit in tvarps)";
    while (cin >> num && num >= 0)//用户输入非数字或负数时停止
    {
        double tax;
        if (num <= 5000)
            tax = 0.0;
        else if (num <= 15000)
            tax = (num - 5000) * 0.1;
        else if (num <= 35000)
            tax = 10000 * 0.1 + (num - 15000) * 0.15;
        else if (num > 35000)
            tax = 10000 * 0.1 + 20000 * 0.15 + (num - 35000) * 0.2;
        cout << "tax = " << tax << " tvarps" << endl;
        cout << "Please enter your income:(unit in tvarps)";
    }
    cin.clear();
    while(cin.get() != '\n')
        continue;//读取行尾之前所有输入，从而删除这一行中的错误输入
    
    return 0;
    
}

