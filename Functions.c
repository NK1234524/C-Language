#include<stdio.h>

//int sum (int, int); // Functions prototype 

int sum (int x , int y)// Functions definations

{
    printf("The sum is %d:\n", x+y);  // Function Body

return x+y; // x and y is parameter.
}



int main()
{
int a = 1;
int b = 4;   // here a and b is arguments.

sum (a,b); //Function call 

return 0;

}