#include<stdio.h> /*To find the provided year is the leap year or not*/
int main(){
    

    int year;
    printf("Enter you year :\n");

    scanf("%d", &year);

    if (year%4==0 && year%100!=0 || year%400==0){
        printf("Then the year is the leap year");
    }

    else{
        printf("Year would not be a leap year");
    }

    return 0;



}