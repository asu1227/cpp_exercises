#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include "Vector.h"

int main()
{
    using namespace std;
    using VECTOR::Vector;
    srand(time(0));
    double direction;
    Vector step = Vector();
    Vector result(0.0, 0.0);
    unsigned long steps = 0;
    double target;
    double dstep;
    ofstream fout;
    fout.open("randwalk.txt");
    cout << "Enter target distance (q to quit): ";
    while (cin >> target)
    {
        cout << "Enter step length: ";
        if (!(cin >> dstep))
            break;
        fout << "Target Distance: " << target << ", Step Size: " << dstep << endl;
        while (result.magval() < target)
        {
            fout << steps << " (x,y) = " << "(" << result.xval() << ", " 
                << result.yval() << ")\n";
            direction = rand() % 360;
            step.reset(dstep, direction, Vector::POL);
            result = result + step;
            steps++;
        }
        fout << "After " << steps << " steps, the subject "
            "has the following location:\n";
        fout << result;
        result.polar_mode();
        fout << " or\n" << result;
        fout << "Average outward distance per step = "
            << result.magval()/steps << endl;
        steps = 0;
        result.reset(0.0, 0.0);
        cout << "Enter target distance (q to quit): ";
    }
    cout << "Bye!\n";
    fout.close();
    cin.clear();
    while (cin.get() != '\n')
        continue;
    return 0;
}