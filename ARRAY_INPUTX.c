#include<stdio.h>


int main()
{

int std[5]; // marks of 5 students to be included

printf("Enter the number of students:\n");

for(int i=0 ; i<5 ; i++)
{
    scanf("%d", &std[i]); // prompt to input the marks of students
}

for(int i=0 ; i<5  ;  i++)
{
    printf("The marks is %d of students %d\n", i , std[i]); // marks of 5 students are here
}

    return 0 ;
}