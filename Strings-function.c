#include<stdio.h>
#include<string.h>
struct employee
{char name[10];
int code;
float salary;
};
void show(struct employee e1);

void show(struct employee e1){
    printf("%d %0.2f %s", e1.code, e1.salary,e1.name);
}

int main()
{
    struct employee e1;
    e1.code= 345;
    strcpy(e1.name,"Nishant");
    e1.salary=64654;
    show(e1);
    return 0;




}
