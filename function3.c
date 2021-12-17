#include <stdio.h>

int sum(int,int);
int main(){
    int a =5; // 5 and 7 are the arguments ..the actual valus is passed is called arguments
    int b=7; // a nd b are called paarameters
    printf("the value of 5 + 7 is %d ",sum(a,b));
    return 0;
}
int sum (int a,int b){ // we use parameter in function body

    return a+b;
}