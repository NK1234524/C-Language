//Pointers Important concept

#include <stdio.h>

int main()

{ 
    int i = 45;
    int*j = &i; // the pointer of i  to j is in the form of int*j.
    int k = 56;
    printf("The address of i is %p \n", &i); 
    // Here the %p is used to represent adress of the variable value.
   //If you want to get the adress in integer then use %u not %d.

    printf("The address of i is %p \n", j);  
    // Because of pointer the & not used here.

    printf("The address of i is %p \n", &k);
    // Here &k is used to depict the address of memory where the value of variable is being stored.
    
    printf("The value at this address of is %d \n", *j);
    printf("The value at this address of is %d \n", i);
    printf("The value at this address of is %d \n", k);
    // Here the use of only j,i,k is done other than & usage due to concern upto value at that address of that variable.
    
    printf("The value at this adress is %d \n", *(&i));
    printf("The value at this adress is %d \n", *(&k));

    //Here the value of the variable is to be get by *(&i) to that address it is one of the other way of above form. 



    return 0 ;

}