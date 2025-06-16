#include<stdio.h>
int main()
{int Roll_no[]={55,65,98,25,47};
int*std= &Roll_no[0];
for(int i = 0 ; i<5 ; i++){
    printf("Roll.no.[%d]=%d\n", i , *(std+i));
}
    return 0 ;
}