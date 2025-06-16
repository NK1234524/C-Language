#include<stdio.h>
int main(){

    int age;
    scanf("%d", &age); // Enter your age and check wether you are eligble for the driving or not 


    if(age>60){
        printf("Yes you can drive but you are a senior citizen\n");

    }

    else if (age>=18)
    {
        printf("Yes you can drive\nbut you are not senior citizen \n");
        
    }
    

    else{
        printf("You cannot drive the\n ");
    }


    
    return 0;
}