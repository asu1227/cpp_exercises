/*修改程序清单 8.14，使其使用两个名为 SumArray()的模板函数
来返回数组元素的总和，而不是显示数组的内容。程序应显示thing的总
和以及所有debt的总和。
#include <iostream>

template <typename T>// template A
void ShowArray(T arr[], int n);

template <typename T>// template B
void ShowArray(T * arr[], int n);

struct debts
{
    char name[50];
    double amount;
};

int main()
{
    using namespace std;
    int things[6] = {13, 31, 103, 301, 310, 130};
    struct debts mr_E[3] =
    {
        {"Ima Wolfe", 2400.0},
        {"Ura Foxe", 1300.0},
        {"Iby Stout", 1800.0}
    };
    double * pd[3];

    // set pointers to the amount members of the structures in mr_E
    for (int i = 0; i < 3; i ++)
        pd[i] = &mr_E[i].amount;

    cout << "Listing Mr. E's counts of things:\n";
    // things is an array of int
    ShowArray(things, 6);//uses template A
    cout << "Listing Mr. E's debts:\n";
    // pd is an array of pointers to double
    ShowArray(pd, 3);// uses template B (more specialized)
    return 0;
}

template <typename T>
void ShowArray(T arr[], int n)
{
    using namespace std;
    cout << "template A\n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << ' ';
    cout << endl;
}

template <typename T>
void ShowArray(T * arr[], int n)
{
    using namespace std;
    cout << "template B\n";
    for (int i = 0; i < n; i++)
        cout << *arr[i] << ' ';
    cout << endl;
}
修改程序清单 8.14，使其使用两个名为 SumArray()的模板函数
来返回数组元素的总和，而不是显示数组的内容。程序应显示thing的总
和以及所有debt的总和。*/
#include <iostream>

template <typename T>// template A
void SumArray(T arr[], int n);

template <typename T>// template B
void SumArray(T * arr[], int n);

struct debts
{
    char name[50];
    double amount;
};

int main()
{
    using namespace std;
    int things[6] = {13, 31, 103, 301, 310, 130};
    struct debts mr_E[3] =
    {
        {"Ima Wolfe", 2400.0},
        {"Ura Foxe", 1300.0},
        {"Iby Stout", 1800.0}
    };
    double * pd[3];

    // set pointers to the amount members of the structures in mr_E
    for (int i = 0; i < 3; i ++)
        pd[i] = &mr_E[i].amount;

    cout << "Listing Mr. E's counts of things:\n";
    // things is an array of int
    SumArray(things, 6);//uses template A
    cout << "Listing Mr. E's debts:\n";
    // pd is an array of pointers to double
    SumArray(pd, 3);// uses template B (more specialized)
    return 0;
}

template <typename T>
void SumArray(T arr[], int n)
{
    using namespace std;
    cout << "template A\n";
    T sum_a = 0;
    for (int i = 0; i < n; i++)
        sum_a += arr[i];
    cout << "sum:" << sum_a << endl;
}

template <typename T>
void SumArray(T * arr[], int n)
{
    using namespace std;
    cout << "template B\n";
    T sum_b;
    for (int i = 0; i < n; i++)
        sum_b += *arr[i];
    cout << "sum:" << sum_b << endl;
}