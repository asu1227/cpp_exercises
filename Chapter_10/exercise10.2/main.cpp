#include "person.h" // include <string>
#include <iostream>

int main()
{
    using std::cout;
    Person one; //use default constructor
    Person two("Smythecraft"); //use #2 with one default argument
    Person three("Dimwiddy", "Sam"); //use #2, no defaults  Sam -- firstname
    one.Show();
    two.Show();
    three.Show();
    cout << "------------" << std::endl;
    one.FormalShow();
    two.FormalShow();
    three.FormalShow();
//etc.for two and three*/
}
