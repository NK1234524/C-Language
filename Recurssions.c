#include<stdio.h>

int factorial(int);    // same as change here factorial. & no use of such int factorial(int) is compulsary.

int factorial(int a)
{
    if (a==1 || a==0)  // If in place of 1 if 0 is used in return value then the ! will be replicated as 0.
       {// Base condition
         return 1;
}

    return factorial(a-1)*a; 
}

int main()
{
    int a;
    
    printf("Enter the number here:\n");
    scanf("%d", &a);
    printf("The ! of the number %d is %d:\n", a, factorial(a));
    return 0;
     
}