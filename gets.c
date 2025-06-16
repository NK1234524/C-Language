#include<stdio.h>
int main(){
        char st[34];
        
        gets(st);
        printf("%s", &st); //input string will get entered into array into st
        
        printf("Hey I am fine!!");
        return 0 ; 
}