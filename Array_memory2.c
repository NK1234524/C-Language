// Pointers 
#include<stdio.h>
int main()
{
    int a = 45;
    int *b=&a;
   


    printf("The adress is : %u\n", &a);
    printf("The adress is : %u\n", b);
    
    b++;

    printf("The adress is : %u\n", b );
    //Result will be 4 bytes more as compared to last one.

    char s='A';
    char*h= &s ;

    printf("The adress is : %u\n", &s)  ;
    printf("The adress is : %u\n", h)  ;

    h++;
    
    printf("The adress is : %u\n", h); 
    //always for adress no use of &
    //also for h++ such cases the use of only pointer variable to be done.
    // only 1 byte increase in char variable.



    return 0 ;
}