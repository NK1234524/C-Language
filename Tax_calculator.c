#include<stdio.h>
int main(){
    int income;
    float tax;

    printf("Enter your income here:\n");
    scanf("%d", &income);

    if(income<=300000){
        tax=0;
    }

    else if(300000<=income<=500000){
        tax=0.5*(income-300000);
    }

    else if(500000<=income<=1000000){
        tax=1*(income-500000)+ 0.5*(500000-300000);
    }

    else if(1000000<=income<=2000000){
        tax=1.5*(income-1000000)+ 1*(1000000-500000)+0.5*(500000-300000);
    }

    else if(income>=2000000){
        tax=3*(income-2000000)+1.5*(2000000-1000000)+1*(1000000-500000)+0.5*(500000-300000);
    }

    printf("The calulated amount of tax to be payed by is %0.2f",tax); /*Here the 0.2 is used to restrict the decimal digit in the tax or some another quantity.*/

    return 0;
    

}
