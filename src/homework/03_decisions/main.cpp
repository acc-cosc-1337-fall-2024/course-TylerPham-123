//write include statements
#include "decisions.h"
#include <iostream>

using std::cin; using std::cout;

int main() 
{
	int option;
	int grade;
	string letter_grade;

	cout << "MAIN MENU\n";
	cout << "1 - Letter grade using if\n";
	cout << "2 - Letter grade using switch\n";
	cout << "3 - Exit\n";

	cout << "What is your option? ";
	cin >> option;

	switch (option)
	{
		case 1:
			cout << "What is your grade? ";
			cin >> grade;

			letter_grade = get_letter_grade_using_if(grade);
			cout << "Your letter grade is " << letter_grade << ".\n";
			break;
		case 2:
			cout << "What is your grade? ";
			cin >> grade;

			letter_grade = get_letter_grade_using_switch(grade);
			cout << "Your letter grade is " << letter_grade << ".\n";
			break;
		case 3:
			break;
		default:
			cout << "The number is out of range.\n";
	}
	return 0;
}