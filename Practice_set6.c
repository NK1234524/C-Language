/*Write the programme using function to print the following pattern(n lines)
*
**
***
*/

#include<stdio.h>
//int cal(int);
void cal(int n){
    for(int i=1; i<=n ; i++){
        for(int j =1; j<=i ; j++){
printf("*");    
    }
    printf("\n");
    }
}
int main()
{
int n;
    printf("Enter the number n:\n");
    scanf("%d", &n);
cal(n);
return 0;


}

