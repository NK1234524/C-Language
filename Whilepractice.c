#include<stdio.h>
int main()
{
    int i=1;
    int a=0;
    while(i<=10)
    {a+=i;    // counting here starting from 1 and end with 10 
    i++;
    }

printf("The sum is %d:\n",a);
return 0;
}