#include<stdio.h>
float  calculation(int,int);
float  calculation(int F ,int c)
{
    return ((9.0*c)/5.0)+32; // Use 5.0 and 9.0 because here decimal represents the float.
}


int main()
{int F;
int c;
    

    printf("Enter the value of c:\n");
    scanf("%d", &c);
    printf("The value of F which is %0.2f is having value of c which is %d:\n", calculation(F,c),c);
    
    return 0 ;
}