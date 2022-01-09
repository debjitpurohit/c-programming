#include <stdio.h>
#include<string.h>

int main(){ //according ascii value
    char source[]="aa";
    char target[]="aa";

    strcpy(target,source); 

    printf("the strcmp returns string is %d",strcmp(source,target));
    
   return 0;
}