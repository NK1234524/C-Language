#include <stdio.h>

int main()
{
    int students[5];
    float cgpa =0 ; // float for cgpa
    printf("Enter the marks of the students:\n");

    for(int i = 0 ; i<5 ; i++){
       
        scanf("%d", &students[i]);
        
        }
        
        
        for(int i = 0 ; i<5 ; i++){
             int marks = students[i]; // no. of students is equal to the number of outputs.
        
            
            if (marks<=20 && marks>=0){
                
            cgpa= 2.0;
        }

        else if(marks<=30 && marks>=50){
            cgpa= 4.0;
        }

        else if(marks<=50 && marks>=70){
            cgpa= 6.0;
        }

        else if(marks<=70 && marks>=90){
            cgpa= 8.0;
        }

        else if(marks<=90 && marks>=95){
            cgpa= 8.5;
        } 

        else{
            cgpa= 9.0;
        }
printf("The cgpa of the student with marks of %d is %0.1f is %d\n",  marks ,cgpa ,i+1 );
        }           


        
        return 0 ;
    }






    
