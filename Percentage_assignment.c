#include <stdio.h>
int main()
{
    int students[5];
    int percentage = 0 ;


printf("Enter the marks of student here:\n");
 // here the printf is above the for loop because the loop will result it into multiple input requirment lines.
    
    
    
    for(int i=0 ; i<5 ; i++){
        
        scanf("%d", &students[i]); // i for 5 input values.
    }

    
    
    for(int i=0 ; i<5 ; i++){
        int marks =  students[i]; // signifies that for each element of i the value of marks is prescribed.

        if (marks<=100 && marks>=90)
        {
            percentage = 90;
        }
        else if(marks<=90 && marks>=80){
            percentage = 80;
        }
        else if (marks<=70 && marks>=60){
            percentage = 70;
        }
        else if (marks<=60 && marks >=50){
            percentage = 60;
        }

        else if (marks <=50 && marks >=40){
            percentage = 50;
        }
        else if(marks <=40 && marks >=30){
            percentage = 40;
        }
        else{
            percentage = 30;
        }

        printf("The percentge is %d of student %d with %d marks :\n",percentage, i+1 ,marks );
        // always try to use printf function in loop itself so that loop may provide output.  
   
    }






    return 0 ;

}