#include<stdio.h>

int sum (int* , int* );
int sum(int*a , int*b){

    *a=6;
    *b=7;

    return (*a + *b);
}





int main()
{

int x = 9;
int y = 10;
// here both the value of x and y are getting ignored.


printf("The sum of x and y is %d :\n", sum( &x , &y));


    return 0;

}