#include "void.h"
#include <iostream>

using std::cin; using std::cout;

int main()
{
    double num1, num2;

    cout << "Enter two number and I will divide the first\n";
    cout << "number by the second number: ";
    cin >> num1 >> num2;
    divide(num1, num2);
    return 0;
}