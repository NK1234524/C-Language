#include<stdio.h>
#include<math.h>  // library function c language.


int main()
{
    int a ;
    printf("Enter the number a :\n");
    scanf("%d", &a);

    printf("The square of the number is %0.2f", pow(a,2));
    return 0; // here pow is the double return function so it requires the f.

}