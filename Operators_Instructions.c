#include<stdio.h>
int main(){
    int m=2;
    int n=m;
    int a=3,b=4,c=6;
    int j=m-n+a; // Here the operations are used in the form of calculations 
    
    printf("The value of m is %d and value of n is %d \n",m,n);
    printf("The value of a is %d ,the value of b is %d, the value of c is %d\n",a,b,c);
    printf("The value of b is %d ,the value of c is %d, the value of b is %d\n",b,c,b);
    printf("The value of c is %d ,the value of a is %d, the value of a is %d\n",c,a,a);
    printf("The value of j is %d\n",j);
    printf("The remainder of the m divided by a is %d\n",m,a,m%a); // Here the % is modulus operators majorly used to get the remainder info
    
    return 0;

}