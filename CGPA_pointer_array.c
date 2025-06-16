#include<stdio.h>
int main(){
    int marks[]={0,10,20,30,40,50,60,70,80,90,100};
    int*cgpa = &marks[0];
    for(int i = 0 ; i<11 ; i++){
        printf("marks[%d]=%d\n", i , *(cgpa+i));
    }


    return 0 ;
}