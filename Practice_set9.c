#include<stdio.h>
int main()
{
    int i=1;
    int n;
    int fact=1;
printf("Enter the value of n is:\n");
scanf("%d", &n);
    while(i<=n)
    {
                fact*=i;  // fact is used here to calculate the factorial.
        i++;       
    }
     printf("The ! of number %d is :%d\n", n,fact);

    return 0;
}