#include<stdio.h>
int main()
{int n;
int b;
    printf("Enter the no. of n:\n");
    scanf("%d", &n);

    

    for(int i=n;i<20;i++){
if(i==10){  
        //if(i==10 , i==15,  i==8){ //Here the i==8 is smallest one so it formost applicable and other will be ignored.
           // break; // Terminates the loop itself only when the condition is satisfied.
        continue;  //Terminates the iteration of loop, here 10 will be missing it is skiping the one number.
}
        //}
        printf(" %d\n", i);  
        

    }
    

    
    

printf("The loop is successfully driving!");
    
    
    return 0;
}