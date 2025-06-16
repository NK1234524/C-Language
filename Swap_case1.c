#include<stdio.h>

void swap(int* , int* );
void swap(int*a , int*b){

  int length=*a;
  *a=*b;
  *b=length;
}

int main()
{
    int x=34;
    int y=56;

    swap(&x,&y);    //for pointer concept int*a=&x and int*b=&y

    printf("The swap of x=%d and y=%d will be:\n", x,y);

    return 0 ;
}