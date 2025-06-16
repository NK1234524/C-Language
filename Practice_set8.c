#include<stdio.h>
int main()
{
    
    
    int i;
    
    int n;
    
    int fact =1;
    
    printf(
        "Enter the number n here;\n");

        scanf(
            "%d", &n
        );
        
        
        for(int i=1;i<=n;i++)
        {
            fact*=i; // fact is used for factorial .
        
        
        }

        printf("The ! of number %d is :%d\n", n,fact);



return 0;
}