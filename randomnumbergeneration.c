#include <stdio.h>
#include <stdlib.h>
#include<time.h>>

int main(){
    int number;// to remove the waring from rand use stdlib.h
    srand(time(0));
    number = rand()%100 +1; // generates a random number between 1 and 100
    printf("the number is %d",number);
    return 0;
}