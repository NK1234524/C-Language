#include <stdio.h>
int main(){
    
    int a;
    int b;
    int c;
    int d;


    printf("Enter no.1\n");
    scanf("%d",&a);

    printf("Enter no.2\n");
    scanf("%d",&b);

    printf("Enter no.3\n");
    scanf("%d",&c);

    printf("Enter no.4\n");
    scanf("%d",&d);

    if (a>b && a>c && a>d){
        printf("The a is the greater number than others\n");
    }

    else if(b>a && b>c && b>d){
        printf("The b is the greater number than others\n");
    }

    else if(c>a && c>b && c>d){
        printf("The c is the greater number than others\n");

    }

    else{
        printf("The d is the greater number than others\n");
    }

    return 0;
}