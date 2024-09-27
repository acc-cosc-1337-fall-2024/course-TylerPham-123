#include "do_while.h"

using std::cout; using std::cin;
//Write code for void function prompt_user to loop until
//user opts not to continue.  

void prompt_user(){

    auto choice = 'Y';

    do{
        cout<<"Enter 'Y' or 'y' to continue ";
        cin>>choice;
    }while(choice == 'Y' || choice == 'y');

}


