#include<stdio.h>
int main()
{
    int i;

    printf("Enter the value of i :\n");
    scanf("%d", &i);

    while (20>i)
    {
        printf ("The sum of integer value is %d\n", i);
    i++; // i++ should always be in the while loop other wise it will become infinte.
            
    }
    
    
    
    
    return 0;
}