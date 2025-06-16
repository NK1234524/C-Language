#include<stdio.h>
int main(){
    int a= 4;
    int b=54;
    float c=4.3;
    float d=a/c;
    int m=a+b;
    int n=(a+b)*b;
    float g=c*a;
    printf("The value of c*a is %f\n",g);   
    printf("The value of (a+b)*b is %d\n",n);
    printf("The value of a+b is %d\n",m);
    printf("The value of a/c is %f\n",d);
    return 0;

}