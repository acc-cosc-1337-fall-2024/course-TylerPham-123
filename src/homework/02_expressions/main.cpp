//write include statements

#include "hwexpressions.h"
#include<iostream>

//write namespace using statement for cout

using std::cout; using std::cin;

int main()
{
	//Functions below create double variables.
	double meal_amount;
	double tip_rate;
	double tip_amount;
	double tax_amount;
	double total;

	cout<<"Enter the meal amount: $"; //This function accepts data from the user.
	cin>>meal_amount; //This function assigns the received data to the meal_amount variable.

	tax_amount = get_sales_tax_amount(meal_amount);

	cout<<"Enter the tip rate: %";
	cin>>tip_rate;

	tip_amount = get_tip_amount(meal_amount, tip_rate) / 100;
	 
	total = tip_amount + tax_amount + meal_amount;

	cout<<"\nReceipt\n";
	cout<<"Meal Amount: $"<<meal_amount<<"\n";
	cout<<"Sales Tax: $"<<tax_amount<<"\n";
	cout<<"Tip Amount: $"<<tip_amount<<"\n";
	cout<<"Total: $"<<total<<"\n";

	return 0;
}
