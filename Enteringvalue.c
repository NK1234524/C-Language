#include<stdio.h>
#include<string.h>
struct employee

{
    int code;
    char name[15];
    float salary;

};


int main(){
struct employee e1;

printf("Enter your code:\n");
scanf("%d", &e1.code);



printf("Enter your salary:\n");
scanf("%f", &e1.salary);

printf("Enter your name:\n");
scanf("%s", &e1.name);

printf("%d %0.2f %s", e1.code,e1.salary,e1.name);



    return 0;
}