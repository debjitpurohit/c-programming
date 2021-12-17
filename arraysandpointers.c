#include <stdio.h>

int main(){
    int marks[3]={1,2,3};
    //&marks[0] = marks //very very important 
    int *ptr =&marks; //marks;
    *ptr=89; // by the * pointer the value of 0 array become 89 insted of 1
    ptr++;
    *ptr=65;
    ptr++;
    *ptr=82;
    
    printf("the marks scored by student o is %d\n", marks[0]);
    printf("the marks scored by student 1 is %d\n", marks[1]);
    printf("the marks scored by student 2 is %d\n", marks[2]);
   return 0;
}