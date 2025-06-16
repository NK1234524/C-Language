#include<stdio.h>
int main()
{
    int i;
    int num;

    printf("Enter the num:\n");
    scanf("%d", &num);

    for ( i = 10; i>= 0; i--)
    {
        printf("%d X %d = %d\n", num , i , num*i);
    }
    
    return 0;

}