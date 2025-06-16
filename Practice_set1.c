#include<stdio.h>
int main()
{
    int i;
    int num;

    printf("Enter the num here:\n");
    scanf("%d", &num);

    for(i=1; i<=10; i++)
    {
        printf("%d X %d=%d\n", num , i , i*num);

    }
    
    
    return 0 ;
}