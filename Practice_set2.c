#include<stdio.h>
int main(){   

    int marks_in_1st_subject,marks_in_2nd_subject,marks_in_3rd_subject;
    
    printf("Enter your 1st subject marks\n");
    scanf("%d", &marks_in_1st_subject);
    
    printf("Enter your 2nd subject marks\n");
    scanf("%d", &marks_in_2nd_subject);
    
    printf("Enter your 3rd subject marks \n");
    scanf("%d", &marks_in_3rd_subject);

    
    if (marks_in_1st_subject<33 || marks_in_2nd_subject<33 || marks_in_3rd_subject<33){
        printf("Then student is fail in subjects\n");
    }

    /*Here the else if is not for use beacause it will contradict one of the statement but we need to consider on of them */
    
    if((marks_in_1st_subject+marks_in_2nd_subject+marks_in_3rd_subject)/3 <33){
        printf("Then the student is fail\n ");

    }

    
    
    else{
        printf("The person is passed in all subjects");
    }


    
    return 0;


}