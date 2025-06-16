#include <stdio.h>

int change (int a); // without using int change (int a); we can get the desired result. 
int change(int a){         // the function through whivh it will work
    a=77;
    return 0;
}

// But the output will be of b only


int main(){
    int b=5;
    //change(b);
    printf("the value of b is %d",b);

    return 0;
}