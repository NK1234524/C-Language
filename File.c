//File is the structure whichj is needed to operating the file.
#include<stdio.h>
int main(){
    FILE*p;
    p=fopen("H.txt","r");
    
    
    if (p==NULL)

    {
     printf("The value does not exists ");
    }
    
   else{
    int num;

    printf("Such values  are exsisting");



    fscanf(p,"%d",&num);
    printf("The value of p is %d",num);
    }


fclose(p);  // For good practice 
    return 0 ;
}