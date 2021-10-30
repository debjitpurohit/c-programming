//c programm to check a number weather it is even or odd
#include <stdio.h>

int main(){
    int b;
    printf("enter b value \n");
    scanf("%d",&b);


    if (b%3==0){
        printf("%d is a odd number \n",b);
    } 
    else{
        printf("%d is even \n",b);
    }

    return 0;
}