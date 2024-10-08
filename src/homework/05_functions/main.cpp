#include "func.h"
#include <iostream>

using std::cout; using std::cin;

int main() 
{   
    
    auto option = 0;

    do
    {
        cout << "Menu\n";
        cout << "1 - Get GC Content\n";
        cout << "2 - Get DNA Complment\n";
        cout << "3 - Exit\n";
        cout << "Enter your option - ";
        cin >> option;

        if (option == 1 || option == 2)
        {
            string dna;

            cout << "\nPlease enter a DNA string: ";
            cin >> dna;

            if (option == 1)
            {   
                cout << "\nGC Content: " << get_gc_content(dna) * 100 << "%\n";
                cout << "\n";
            }
            else
            {
                cout << "\nDNA Complement: " << get_dna_complement(dna) << "\n";
                cout << "\n";
            }
        }
        else if (option == 3)
        {   
            char answer;
            cout << "\nAre you sure you want to exit?(y/n) - ";
            cin >> answer;

            if (answer == 'Y' || answer == 'y' || answer == 'N' || answer == 'n')
            {
                if (answer == 'Y' || answer == 'y')
                {
                    break;
                }
                else
                {
                    option = 0;
                    cout << "\n";
                }
                
            }
            else
            {
                option = 0;
                cout << "\n!!!Only 'y' or 'n.' Please try again!!!\n";
                cout << "\n";
            }
        }
        else
        {
            cout << "\n!!!The number is out of range. Please try again!!!\n";
            cout << "\n";
        }
    } while (option != 3);
    
	return 0;
}
