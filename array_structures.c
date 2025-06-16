#include<stdio.h>
#include<string.h>

struct employee 
{int code;
float salary;
char name[90];
};

int main(){
struct employee Nishant={1,45457.2654,"Nishant"};
printf("%d %0.2f %s", Nishant.code , Nishant.salary , Nishant.name);

    return 0;