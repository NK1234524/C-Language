#include<stdio.h>
int main(){ 
    //char st[0]; this condition may run some cases it is also true that it may corrupt the file different artitechture.
    char st[100]; //array should have enough space so that the characters can be filled into it.
    scanf("%s", st);    
    printf("%s", st);
    return  0 ;
}