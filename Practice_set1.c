#include<stdio.h>
float average(int,int,int);
float average(int a , int b , int c){
return a+b+c/3;
}

int main()
{int a;int b;int c;
printf("Enter a:\n");
scanf("%d", &a);
printf("Enter b:\n");
scanf("%d", &b);
printf("Enter c:\n");
scanf("%d", &c);

    printf("The average is %0.2f ", average(a,b,c));
    return 0;
}
/*here the return value is of 0,1,2 have different value*/
