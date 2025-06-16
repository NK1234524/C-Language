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

    ptr=(int*)realloc(ptr,10*sizeof(int)); // use to increase the calue of integers in malloc.
    
    return 0 ;

}