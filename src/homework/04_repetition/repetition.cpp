//add include statements
#include "repetition.h" //inlcude headers

//add function(s) code here
int factorial(int num)
{
    auto product = 1;

    do
    {   
        product *= num;
        num--;   
    }while(num > 0);

    return product;
}
int gcd(int num1, int num2)
{  
   auto temp = 0;

   if(num1 == num2)
   {
    return num1;
   }
   else
   {
    do
    {
     if(num1 < num2)
     {
        temp = num1;
        num1 = num2;
        num2 = temp;

        num1 -= num2;
     }
     else
     {
        num1-=num2;
     }
    }while(num1 != num2);
   }
   return num1;
}