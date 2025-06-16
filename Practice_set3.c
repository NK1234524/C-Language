#include <stdio.h>
float cal(float,float);
float cal(float m, float g )
{
    return m*g;
}

int main()
{ float m;
float g=9.8;

printf("Enter the value of m Kg:\n");
scanf("%f", &m);

printf("The value of wieght of mass %0.2fKg and gravity %0.2fm/s^2 is %0.2fN:\n", m ,g,cal( m , g));


    return 0 ;
}