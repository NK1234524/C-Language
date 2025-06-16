#include<stdio.h>
int main()
{
    int i = 3;
    int*k = &i;
    int**j = &k;

    printf("The value is %d\n",i);
    printf("The value is %d\n",*(&i));
    printf("The value is %d\n",**(&k));

    
    
    
    return 0;

}