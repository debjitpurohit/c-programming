#include <stdio.h>

int sum (int *,int *);

int main(){
     int x=5;
    int y=4;
    printf("the value of  x+y is %d \n", sum (&x,&y));
    printf("the value of  x and y is %d and %d", x , y);


   return 0;
}
int sum (int *a, int *b){  
   // this is called call by adress/reference 
    *a=56;// a=x
    return *a + *b;
}