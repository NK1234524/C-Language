#include<stdio.h>
int main()
{
    char i = 'A';
    char*l = &i;
    char*m = &i;

    float b = 4.56;
    float*n = &b;
    float*v = &b;


// ADDRESS VALUE
    printf("The address of the pointer variabe is %p \n", &i);
    printf("The address of the pointer variabe is %p \n", l);
    printf("The address of the pointer variabe is %p \n", m);
    
    printf("The address of the pointer variabe is %p \n", &b);
    printf("The address of the pointer variabe is %p \n", n);
    printf("The address of the pointer variabe is %p \n", v);


//VALUE AT THE ADDRESS
    printf("The value at address of pointer is %c\n", i);
    printf("The value at address of pointer is %c \n", *l);
    printf("The value at address of pointer is %c \n", *m);
    
    printf("The value at address of pointer is %f \n", b);
    printf("The value at address of pointer is %f \n", *n);
    printf("The value at address of pointer is %f \n", *v );

    

    
    return 0 ;

}