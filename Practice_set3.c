#include<stdio.h>
int main(){
    int income;
    float tax;

    scanf("%d", &income);

    if(income<=250000){
        tax=0;
    }

    else if (250000<=income<=500000){
        tax=0.05*(income-250000);
    }

    else if(500000<=income<=1000000){
        tax=0.2*(income-500000)+0.05*(500000-250000);
    }

    else if(income>=1000000){
        tax=0.3*(income-1000000)+0.2*(1000000-500000)+0.05*(500000-250000);
    }
    printf("Your tax amount will be %0.3f\n",tax);

    return 0;

}