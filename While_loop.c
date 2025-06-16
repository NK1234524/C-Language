#include<stdio.h>
int main()
{
    int i;
    printf("Enter your value here:");
    scanf("%d", &i);
    while (i<=20)
    {
        
        if(i<=10){
            printf("The value of i is%d\n", i);/*Here the value starting from i and ending by 20*/

        }



        else if (i>=15){
            printf("The value of i is %d\n", i);/*Here the output will be value starting from i and then ending by 20 */
        }

        else if(10<=i<=15){
            printf("The value of i is %d\n", i);/*Here the output will be value starting from i and then ending by 20 in while loop*/
        }

        i++;
        

    }
    
    

    return 0;
}