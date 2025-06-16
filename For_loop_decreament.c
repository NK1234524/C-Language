#include<stdio.h>


int main()


{

int n;
 

printf("Enter your value of n here :\n");
scanf("%d", &n);
        
    
    //for (int  i=n; i>=-1; i--)  you can also use such type of loop including condition of -ve value.
    for (int  i=n; i>=0; i--)  
    // here if the i<=0 is true then loop will terminate it include repetition of content.
    
    {
        printf("%d\n", i);
    }      
    
    return 0;

}