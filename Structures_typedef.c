#include<stdio.h>
#include<string.h>
typedef struct employee  // use to form small datatype for easy data input.
{
  
    int code;
    float salary;
    char name[50];
}emp;

int main(){
    emp e1;
    emp*ptr1=&e1;

    int code=45;
    float salary=4545.464;
    strcpy(e1.name,"Nishant Kumar");
    //printf("%d %f %s\n", e1.code,e1.salary,e1.name);

    e1.code=45;
    e1.salary=4545.464;
    strcpy(e1.name,"Nishant Kumar");
    printf("%d %0.2f %s\n", e1.code,e1.salary,e1.name);
    printf("%d %0.2f %s\n", ptr1->code,ptr1->salary,ptr1->name);

    return 0 ;
}