#include <stdio.h>
 
 int main(){
     int rating;
     printf("enter your rating \n");
     scanf("%d",&rating);
                      //if use 5 rating thn it will print 5 and invalid
     switch (rating) // if rating is one then it will print all after 1 like 2 ,3,4,5invalid
                     //it is a default behaviour, if u want to break integer thn use break after each case
     {
         case 1:
               printf("your rating is 1 \n");
               break;
         case 2:
               printf("your rating is 2 \n");
               break;   
         case 3:
               printf("your rating is 3 \n");
               break;
         case 4:
               printf("your rating is 4 \n");
               break;
         case 5:
               printf("your rating is 5 \n");
               break;
         default:
               printf("invalid rating \n");  
               break; 
    }          
     return 0;
 }