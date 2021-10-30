#include <stdio.h>

int main(){
    int a;
    printf("enter a \n");
    scanf("%d", &a);

    (a<5) ? printf("a is less than 5") : printf("a is greater than 5"); //one liner if else statement,,, : and ? is ternary operator

    return 0;
}