//Arrays in memory
#include <stdio.h>

int main(){
    int cgpa[] = {9, 8, 8};  
    //here the adress of 9 value in cgpa element is 620003 then other one will be 4 bytes more than that of element 1.
      for (int i = 0; i < 3; i++)
    {
        printf("The value of array at index %d is %d\n", i, cgpa[i]);
    }
    return 0;
}