#include<stdio.h>
int main(){
    int m1 , m2 , m3;

    printf("Enter your m1:\n");
    scanf("%d", &m1);

    printf("Enter your m2:\n");
    scanf("%d", &m2);

    printf("Enter your m3:\n");
    scanf("%d", &m3);

    if(m1>=90){
        printf("The marks are excellent\n");
    }

    if(m2>=90){
        printf("The marks are excellent\n");
    }

    if(m3>=90){
        printf("The marks are excellent\n");
    }

    if((m1+m2+m3)/3>=40){
        printf("The marks are not excellent but not bad\n");  // Use else if logic operator when the if is not responding well 
    }

    if ((m1||m2||m3<=60)){
        printf("The marks are not much well needs more hardwork\n");
    }


    else{
        printf("The marks are not good\n");
    }

    return 0;
}

