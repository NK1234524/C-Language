#include<stdio.h>
int main(){
    int a=20;
    int b=34;
    

    printf("%d\n", a&&b); // Here the && is the representation of a is integer but b is float hence output will be 0
    printf("%d\n", a||b); // Here the || is the representation of a is integer and equal to b integer output will 1
    printf("%d\n", a!=b); // Here the != is the representation of a is integer but not equal to b iotput will be 1 
    

    if(a&&b){
        printf("Both are true\n");
    }
// same as above the writing style is different for && which is a logical operator

    if(a){
        if(b){
            printf("Both are true\n");
        }
    }
    
    return 0;

}