#include <stdio.h>

int main(){
    int cgpa[] = {9, 8, 8};  
    //here the adress of 9 value in cgpa element is 620003 then other one will be 4 bytes more than that of element 1.
      for (int i = 0; i < 3; i++)
    {
        printf("The value of array at index %d is %d\n", i,  &cgpa[i]); //to get the memory location of array one have to use & of any thing.
        //difference for is observed because of integers otherwise in character variable the byte difference will be of 1.
        //HENCE IT IS CALLED CONTIGIOUS FORM OF MEMORY STORAGE MEANS FOR EVERY BOCK SPECIFIED MEMORY IS PRESENT.
    }
    return 0;
}