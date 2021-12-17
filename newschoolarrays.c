#include <stdio.h>

int main(){
    int marks[4];
    for(int i=0;i<4;i++){
        printf("enter the marks of %d th student is \n",i+1); // for 1 th student you have to use i+1
        scanf("%d",&marks[i]);
    }
    for(int i=0;i<4;i++){
        printf("the marks of %d th student is %d \n",i+1,marks[i]);
    }

   return 0;
}