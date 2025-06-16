#include<stdio.h>
int main(){
    char ch;

    scanf("%c", &ch);

    printf("The character is %c\n",ch);
    printf("The character is %d\n",ch);

     if(97<=ch && ch<=122){  /*Here always try to write in form of &&*/
        printf("lowercase \n");
     }
     
     else{
        printf("Uppercase\n");
     }
   
    
    return 0;

}