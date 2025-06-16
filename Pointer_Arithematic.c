//Pointer Arithmetic.
#include<stdio.h>
int main()
{
    char a='A';
    char*ptr = &a;
    printf("The value of a is %d:\n", &a);
    printf("The value of a is %d:\n", ptr);
    ptr++;
    printf("The value of a is %d:\n", ptr);
    

    return 0 ;
}