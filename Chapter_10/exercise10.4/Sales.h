/*完成第9章的编程练习4，但将Sales结构及相关的函数转换为一
个类及其方法。用构造函数替换setSales（sales &，double [ ]，int）函
数。用构造函数实现setSales（Sales &）方法的交互版本。将类保留在名称空间SALES中。*/
#ifndef SALES_H_
#define SALES_H_
namespace SALES
{
    const int QUARTERS = 4;
    class Sales
    {
    private:
        double sales[QUARTERS];
        double average;
        double max;
        double min;
    public:
        Sales();
        Sales(const double ar[], int n);
        void setSales();
        void showSales() const;
    };
    
}
#endif