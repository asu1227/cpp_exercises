#include "Stack.h"
#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    Stack stack;
    customer cu;
    char ch;
    cout << "Press a to add a customer, P to process an order, and Q to exit." << endl;
    while (cin >> ch && toupper(ch) != 'Q')
    {
        while (cin.get() != '\n')
        {
            continue;
        }
        if (!isalpha(ch))
        {
            cout << '\a';
            continue;
        }
        switch (ch)
        {
        case 'a':
        case 'A':
            if (stack.isfull())
            {
                cout << "The order of 10 customers has been filled." 
                << "Please process the existing order first !" << endl;
            }
            else
            {
                cout << "Add customer name : ";
                cin.getline(cu.fullname, 35);
                cout << "Add the customer's consumption amount : ";
                cin >> cu.payment;
                cout << "dsssd : " << stack.push(cu) << endl;
            }
            break;
        case 'p':
        case 'P':
            if (stack.isempty())
            {
                cout << " There are currently no unprocessed orders." << endl;
            }
            else
            {
                stack.pop(cu);
            }
            break;
        default:
            cout << " Input error！！！" << endl;
            break;
        }
        cout << "Press a to add a customer, P to process an order, and Q to exit." << endl;
    }
    return 0;
}