#include<stdio.h>
int main(){
    FILE*ptr;
    ptr=fopen("H.txt","r");

    while(1) {
char ch;
    ch=fgetc(ptr);
    printf("%c", ch);

    if (ch==EOF) // EOF is used here to break the loop when the text in file is completed hence loop will break.
    {
        break;
    }

    
    }
return 0;
}