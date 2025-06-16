#include<stdio.h>
int main()
{
    int i;
    int n;

    printf("Enter your n value :\n");
    scanf("%d", &n);

    for(i=0 ; i<=10 ; i++){
               printf("%d X %d = %d\n", n ,i , n *i); /*Forward multiplication*/
    }


for(i=10 ; i>=0 ; i--){
               printf("%d X %d = %d\n", n ,i , n *i); /*Reverse multiplication*/
               }
    return 0;
}