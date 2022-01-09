#include <stdio.h>
// use for multi word string to print {debjit vaii vaii} like multi word
int main(){
     char ch1[45]; 
    printf("enter your name \n");
    gets(ch1); // use gets function for multiword call
    //printf("your name is %s", ch1);
    puts(ch1); // puts print the character and  place the cursonon the next line 
    printf("done printing");

   return 0;
}