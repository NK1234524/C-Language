#include<stdio.h>

   /* int main(){
   
    int st[4];
   
    for (int i = 0 ; i<4 ; i++){
        scanf("%d", &st[i]);
    }
   
   
    
        
        
        
        for(int i = 0 ; i<4 ; i++)
        {
            printf("st[%d]=%d\n", i , st[i]);   
        }


    
return 0 ;

}*/


//But for charcater
#include<stdio.h>
int main(){

    char st[5];

    printf("Enter the characters here:\n"); // Due to this no more than 4 character would be present because 5th one is \0 is null. also to avoid buffer overflow.

    scanf("%4s", st); // it get terminated when it goes more than 4
    

    printf("%s", st);

    return 0 ;
}