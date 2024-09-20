//write include statement for decisions header

#include "decisions.h"
#include <iostream>

using namespace std;

//Write code for function(s) code here

char get_letter_grade_using_if (int grade)
{
    char letter_grade;

    if (grade >= 90 && grade <= 100)
    {
        letter_grade = 'A';
    }
    else if (grade >= 80 && grade <= 89)
    {
        letter_grade = 'B';
    }
    else if (grade >= 70 && grade <= 79)
    {
        letter_grade = 'C';
    }
    else if (grade >= 60 && grade <= 69)
    {
        letter_grade = 'D';
    }
    else if (grade >= 00 && grade <= 59)
    {
        letter_grade = 'F';
    }

    return letter_grade;
}

char get_letter_grade_using_switch (int grade)
{
    char letter_grade;

    switch (grade)
    {
        case 90 ... 100:
            letter_grade = 'A';
            break;
        case 80 ... 89:
            letter_grade = 'B';
            break;
        case 70 ... 79:
            letter_grade = 'C';
            break;
        case 60 ... 69:
            letter_grade = 'D';
            break;
        case 0 ... 59:
            letter_grade = 'F';
            break;
    }

    return letter_grade;
}