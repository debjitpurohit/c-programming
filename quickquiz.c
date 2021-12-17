#include <stdio.h>

void goodmorning(); // function prototype
void goodafternoon();
void goodnight();

int main(){ 
    goodmorning();
    goodafternoon();
    goodnight();
   return 0;
}
void goodmorning(){ //function
    printf("good morning \n");
}
void goodafternoon(){
    printf("good afternoon \n");
}
void goodnight(){
    printf("good night\n");
}