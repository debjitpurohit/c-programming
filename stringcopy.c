#include <stdio.h>
#include<string.h>

int main(){
    char source[]="harry";
    char target[45]; //must have enough capacity
    strcpy(target,source); // harry string copied from source to the target

    printf("the target string is %s",target);
   return 0;
}