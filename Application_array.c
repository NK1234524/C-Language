#include<stdio.h>
int main(){

    int marks[]={45,56,67,78};
    int*students=&marks[0];
    for(int i = 0; i<4 ; i++){
    
        printf("Marks is %d of student : %d\n", i , *(students+i));
    }
    return 0;
}