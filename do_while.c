#include<stdio.h>
int main()
{ int i;
int a=0;  // Always initalise the value so that garbage value would be avoided.

    printf("Enter your number i:\n");
  scanf("%d", &i);
    do{a=++i;
        if(a<10){
        printf("If the condition satisfies then value is: %d\n", a);
 
}

    }
         //while(a<1);  // If the no. is 11 or more than the output will be one and loop will terminate.  
while (a<10); //!run this for multiple loop result.
    
    
    return 0;

}