#include "hwexpressions.h"

//example
int add_numbers(int num1, int num2)
{
	return num1 + num2;
}

//write function code here

double get_sales_tax_amount(double meal_amount) //This function returns a double data type.
{
	double tax_rate = 0.0675; //This function creates a constant local variable.
	return (tax_rate * meal_amount); //This function calculates and returns tax_amount.
}

double get_tip_amount(double meal_amount, double tip_rate) //This function also returns the same data type like the above function.
{
	return (meal_amount * tip_rate)/100; //This function calculates and returns tip_amount.
}

