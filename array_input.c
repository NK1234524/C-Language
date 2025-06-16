#include<stdio.h>
int main()

{
int marks[10]; // Reserve space to store 90 elements

printf("Enter the marks here:\n");


for(int i= 0 ; i<10 ; i++)
{
    scanf("%d", &marks[i]);
}


for(int i = 0 ; i<10 ; i++)
{
    printf("The marks of students %d is %d\n", i , marks[i]);
}

    return 0 ;

}