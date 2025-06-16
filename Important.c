#include<stdio.h>

void cal(int n){ // here void is used just because to not get readed by the compiler.
    
    
    for (int i=1 ; i<=n ; i++ )
    {
        
        
        for(int j=1 ; j<=i; j++)
        
        { // always marks that j<=i because 2nd for is in the purpose to 1st for.
            
            printf("#");
            
        }
        
        
        
        printf("\n");
    
    }


}



int main()


{
    int n;


    printf("Enter the number here;\n");


    scanf("%d", &n);
    


    cal(n); //Here the cal(n) to be included .

    
    return 0 ;


}
