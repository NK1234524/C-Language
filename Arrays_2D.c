#include<stdio.h>
int main(){
    int marks[4][5];
    for(int i = 0 ; i<2 ; i++){
        for(int j = 0 ; j<2 ; j++){
            printf("The value of marks[%d][%d]",i , j );
            scanf("%d", &marks[i][j]);
        }
    }

    for(int i = 0 ; i<2 ; i++){
        for(int j = 0; j<2 ; j++){

            printf("%d", marks[i][j]);
        }
        printf("\n");
    }
return 0 ; 
}