#include<stdio.h>
#include<string.h>
int main(){
    char d[]="h";
    char f[34]="k";
    char g[54]="LK";

    strcat(f,g);
    printf("%s",f); // Here the no spacebar is used.


    return 0 ;
}