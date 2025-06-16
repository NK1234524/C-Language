// Other way to initialize the array.
#include<stdio.h>
int main(){

    int cgpa[] = {0,1,3}; 
    // another way to initialize the int cgpa.for three elements three different values are present here.

    for(int i =0 ; i<3 ; i++){
        printf("The value of cgpa is %d of student %d:\n", i ,cgpa[i]);
    }
    return 0 ;
}
