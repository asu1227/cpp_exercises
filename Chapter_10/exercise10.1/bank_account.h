#ifndef BANK_ACOUNT_H_
#define BANK_ACOUNT_H_

#include <string>

class Bank_account
{
private:
    std::string name_;
    std::string account_;
    double deposit_;
public:
    Bank_account();
    Bank_account(const std::string & name, const std::string & account, double deposit = 0.0);
    ~Bank_account();
    void show() const;
    void deposit(double n);
    void fetch(double n);
};
#endif
