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
// calloc will also perform same function but only minute difference is  ptr=(int*)malloc(n,sizeof(int)); in place of * , is present 
    
    printf("%d", ptr[1]);
    return 0 ;

}