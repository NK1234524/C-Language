#include<stdio.h>
#include<stdlib.h>
int main(){
    float n=5;
    float*ptr;
    ptr=(float*)malloc(n*sizeof(float));
    printf("Enter the value of n below:\n");
    scanf("%f", &n);

    
    ptr[0]=2;
    ptr[1]=45;
    ptr[2]=67;
    ptr[3]=87;
    ptr[4]=98;
    ptr[5]=20;
printf("%0.2f", ptr[1]);
    return 0 ;

}
