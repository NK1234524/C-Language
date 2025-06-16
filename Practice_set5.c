#include<stdio.h>
int calculation(int);
int calculation(int n){

    if(n==1 ){

        return 1; //Base function
    }

    else if(n>1){
        return n + calculation(n-1) ; //Recursion function
    }
}

int main()
{int n;
    printf("Enter the value of n :\n");
    scanf("%d", &n);
printf("The value of sum of integers is %d of integer %d", calculation(n),n);
return 0;

}