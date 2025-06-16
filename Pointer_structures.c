#include<stdio.h>
#include<string.h>
struct es
{
    int code;
    float number;
    char name[20];
};


int main(){  
struct es e1;
e1.code=45;
struct es *ptr;
ptr=&e1;
printf("%d",(*ptr).code);
printf("%d", ptr->code); // Both will type same.
return 0;

}