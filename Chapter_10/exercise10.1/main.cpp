#include "bank_account.h" // include <string>
#include <iostream>

int main()
{
    Bank_account test_1 = Bank_account();
    Bank_account test_2 = Bank_account("Su", "asu1227", 1000000);
    test_1.show();
    test_2.show();
    test_2.deposit(-1);
    test_2.deposit(1000000);
    test_2.show();
    test_2.fetch(100000);
    test_2.show();

    return 0;
}
