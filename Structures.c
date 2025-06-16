#include<stdio.h>
#include<string.h>
struct employee // Data type
{
    int code;
    float salary;
    char name[10];
};

int main(){
    struct employee e1,e2;
    e1.code=32;
    e1.salary = 45.78;
    strcpy(e1.name , "Nishant");
    printf("%d , %f , %s", e1.code, e1.salary , e1.name);


    return 0 ;
}