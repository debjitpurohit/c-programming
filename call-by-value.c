#include <stdio.h>
int sum (int,int);
int main(){
    int x=5;
    int y=4;
    printf("the value of  x+y is %d \n", sum (x,y));
    printf("the value of  x and y is %d and %d", x , y);


   return 0;
}
int sum ( int a, int b){ // when we use int a and int b then a is equal to x and b is equal to y 
   // this is called call by values 
    a=56;// a=x
    int c;
    c=a+b;
    return c;
}