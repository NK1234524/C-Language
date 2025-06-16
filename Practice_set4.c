#include<stdio.h>
int fibonacci(int);
int fibonacci(int n)


{
    
    
    if (n==0){
        return 0; // base case
    }

    
    
    
    else if (n==1)
    {
        return 1; // base case
    }

    
    
    
    else{
        return fibonacci(n-1) + fibonacci(n-2); // Recursive case
    }
    

}

int main()


{int n;
    printf("Enter the value of n:\n");
    scanf("%d", &n);



    printf("The fibonacci value is %d of n = %d\n:", fibonacci(n),n);
    return 0;
}