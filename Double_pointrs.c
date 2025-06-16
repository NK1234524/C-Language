#include<stdio.h>
int main()
{
    int i =34;
    int*k = &i;
    int**j = &k;

    printf("The adress of i is %p\n", &i);
    printf("The adress of i is %p\n", k);
    printf("The adress of i is %p\n", j);


    printf("The value is %d\n", i);
    printf("The value is %d\n", *(&i));
    printf("The value is %d\n", **(&k));


    
    return 0;

}