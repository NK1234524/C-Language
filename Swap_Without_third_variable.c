#include<stdio.h>
int main(){

    int a =10 , b=20 ;
    int*p1;
    p1=&a;
    int*p2;
    p2=&b;

    *p1 = *p1+*p2; // 30
    *p2 = *p1-*p2; //10
    *p1 = *p1-*p2; //20

    printf("%d and %d ", *p1 , *p2);
    return 0;

}