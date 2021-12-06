#include <stdio.h>

int main(){
     int grade;
     printf("enter your grade 0-100 \n");
     scanf("%d",&grade);
                      //CASE IN ANY ORDER
     switch (grade/10) 
     {
         case 10:
         //marks 100
               printf("your grade is A+ \n");
               break;
         case 9 :
         //marks 90-99
               printf("your GRADE  is A \n");
               break;
         case 8:
         //marks 80-89
               printf("your GRADE is B \n");
               break;   
         case 7 :
         // marks 70-79
               printf("your GRADE is C \n");
               break;
         case  6:
         //maks 60-69
               printf("your GRADE  is D \n");
               break;
         default:
               printf("your grade is F \n");  
               break; 
     }          
     return 0;
 }