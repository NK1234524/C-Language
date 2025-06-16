#include<stdio.h>
int main(){
    int appleprice;
    int Bananaprice;
    int pineappleprice;
    int carrotprice;
    int total=appleprice+Bananaprice+pineappleprice+carrotprice;

    int Budget=500;
    scanf("%d", & total);


    if (total<=Budget){
        printf("Yes you can buy\n ");
    }

    
    
    else{
        printf("No you cannot buy\n");
    }
    return 0;
}

