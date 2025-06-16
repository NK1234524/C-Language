#include <stdio.h>
int main(){
    int marks[] = {12,34,56,34};
       int i; 
    
    int*ptr = &marks[0];
  //  int*ptr = marks; will have same output as for above one.
    for(int i = 0 ; i<4 ; i++)
    {
        printf("The marks[%d]=%d \n", i , *(ptr+i));
    }
    return 0;
}