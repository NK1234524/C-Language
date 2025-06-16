#include<stdio.h>
int main(){

    FILE*ptr;
    ptr=fopen("H.txt", "w");
    //char c =fgetc(ptr); // only when the "r" is used.
    //printf("%c",c);

    fputc('c',ptr); // After such input the file will replicate the changes (H.txt).Only when "w" is used.




    return 0 ;
}