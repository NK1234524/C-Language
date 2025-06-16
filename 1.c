#include<stdio.h>
int main(){

FILE*ptr;
ptr=fopen("H.txt","r");

while(1){
    char c;
c=fgetc(ptr);
    printf("%c",c);

if(c==EOF){
    break;
}


    return 0;
}