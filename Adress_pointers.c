#include<stdio.h>
int main()
{
    int i = 45;
    int*j = (&i);
    int**k = (&j);

    printf("The adress is %p\n" , &i);
    printf("The adress is %d\n" , j);
    printf("The adress is %p\n" , k);

    
    
    return 0;

}