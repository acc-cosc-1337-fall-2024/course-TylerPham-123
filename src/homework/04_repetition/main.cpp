//write include statements
#include "repetition.h" //incldue headers

using std::cin; using std::cout;
//write using statements

int main() 
{	
	auto choice = 0;

	do
	{
		cout<<"MENU";
		cout<<"\n1 - Factorial";
		cout<<"\n2 - Greatest Common Divisor";
		cout<<"\n3 - Exit";
		cout<<"\nEnter your choice - ";
		cin>>choice;

		switch(choice)
		{
			case 1:
			{
				int num;

				cout<<"\nEnter a number - ";
				cin>>num;

				cout<<"Factorial: "<<factorial(num)<<"\n";
				cout<<"\n";

				break;
			}
			case 2:
			{
				int num1; int num2;
				
				cout<<"\nEnter two number:";
				cout<<"\nnum1 - ";
				cin>>num1;
				cout<<"num2 - ";
				cin>>num2;

				cout<<"GCD: "<<gcd(num1, num2)<<"\n";
				cout<<"\n";

				break;
			}
			case 3:
			{
				char confirm;
				cout<<"\nAre you sure you want to exit? (y/n): ";
				cin>>confirm;

				if(confirm == 'Y' || confirm == 'y')
				{
					return 0;
				}
				else if(confirm == 'N' || confirm == 'n')
				{
					choice = 1;
					cout<<"\n";
				}
				else
				{
					cout<<"Only 'y' or 'n'. Please try again.\n";
					choice = 1;
					cout<<"\n";
				}
				break;
			}
			default:
			{
				cout<<"\nThe number is out of range. Try again.\n";
				cout<<"\n";
			}
		}
	}while(choice != 3);

	return 0;
}
