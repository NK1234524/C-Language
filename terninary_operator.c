#include<stdio.h>
int main(){
    int a;
    int b;
    scanf("%d", &a);
    scanf("%d", &b);
    a>=b?printf("The value of a is greater than b\n"):printf("The value of a is smaller than b\n");
    
    if (a<b){
        printf("Then the value is%d\n", a+1000);
    }

    else if(a>b){
        printf("Then the value id %d\n", b+1000);
    }

    else{
        printf("Then the value is %d\n", b+200==a-200);
    }
    return 0;
}