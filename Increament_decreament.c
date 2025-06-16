#include<stdio.h>

int main()
{
 int i;
 int a;
 printf("Enter your number here:\n");
 scanf("%d", &i);
 a=i+5; 
 printf("The final value of a is %d\n", a);

 printf("The value is: %d \n", a++); // 49 will be the output
 printf("The value is: %d \n", ++a); // 50 will be the output

  /*++a pre increament operator increases the value of 'a' by increament early*/
  /*a++ post increament operator increases the value of 'a' by increamnt later*/ 


   // decreament -- is used

   int a=2;
   
   printf("The value is: %d \n", a--); // 2 will be the output
   printf("The value is: %d \n", --a); // 0 will be the output because -1-1-2=0 Imp for Interview question.

   
   
    return 0;
}