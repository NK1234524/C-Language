#include<stdio.h>
//int factorial(int);
int factorial(int a){
    if (a==1 || a==0)
        return 1;
    
    else{
        return factorial(a-1)*a;
    }
}
//The key idea behind recursion is that a complex problem can often be divided into simpler sub-problems of the same type, which can be solved using the same approach.

int main(){
    int a;
    printf("Enter the number here:\n");
    scanf("%d", &a);
    printf("The ! of number %d is %d\n", a , factorial(a));
    printf("here is the factorial\n");

    return 0;

}