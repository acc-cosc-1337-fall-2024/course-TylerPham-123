#include "void.h"
#include <iostream>

using std::cout; using std::endl;
void divide(double arg1, double arg2)
{
    if (arg2 == 0.0)
    {
        cout << "Sorry. I cannot divide by zero.\n";
        return;
    }
    cout << "The quotient is " << (arg1 / arg2) << endl;
}