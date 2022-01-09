#include <stdio.h>
#include<string.h>
int main(){
    char s1[56]="Harry";
    char s2[]=" is a nice boy";

    strcat(s1,s2); // s1=s1+s2 rouhly

    printf("the s1 string is %s",s1);

   return 0;
}