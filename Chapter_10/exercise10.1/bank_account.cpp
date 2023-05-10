#include "bank_account.h" //include <string>
#include <iostream>

Bank_account::Bank_account()
{
    std::cout << "Default constructor called\n";
    name_ = "No name";
    account_ = "No name";
    deposit_ = 0.0;
}

Bank_account::Bank_account(const std::string & name, const std::string & account, 
    double deposit)
{
    std::cout << "Constructor using" << name << "called\n";
    name_ = name;
    account_ = account;

    if (deposit < 0)
    {
        std::cout << "Number of deposit can't be negative; "
                  << name << " deposit set to 0.\n";
        deposit_ = 0.0;
    }
    else deposit_ = deposit;
}

Bank_account::~Bank_account()
{
    std::cout << "Bye, " << name_ << "!\n";
}

void Bank_account::deposit(double n)
{
    if (n < 0)
    {
        std::cout << "Number of deposit can't be negative. "
                  << "Transaction is aborted.\n";
    }
    else
    {
        deposit_ += n;
    }
}

void Bank_account::fetch(double n)
{
    using std::cout;
    if (n < 0)
    {
        cout << "Number of fetch can't be negative. "
             << "Transaction is aborted.\n";
    }
    else if (n > deposit_)
    {
        cout << "You can't deposit more than you have! "
             << "Transaction is aborted.\n";      
    }
    else
    {
        deposit_ -= n;
    }
}

void Bank_account::show() const
{
    using std::cout;
    using std::ios_base;
    // set format to #.###
    ios_base::fmtflags orig =
        cout.setf(ios_base::fixed, ios_base::floatfield);
    std::streamsize prec = cout.precision(3);

    cout << "Name: " << name_ << std::endl
         << "Account: " << account_ << std::endl;
    cout << "Deposit: $" << deposit_ << std::endl;
    // set format to #.##
    cout.precision(2);
    // restore original format
    cout.setf(orig, ios_base::floatfield);
    cout.precision(prec);
}