#include<stdio.h>
#include<stdlib.h>

int main(){

    int n;
    int * ptr;
    scanf("%d", &n);
    ptr=(int*)malloc(n*sizeof(int)); // Dynamic location
    ptr[1]=45;
    ptr[2]=56;
    ptr[3]=78;
   
    printf("%d", ptr[1]);
    free(ptr); // here the ptr is used to perform efficient codes.(LLP)It will used memory and then at same time also free the memory
    return 0 ;

}