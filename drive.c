#include <stdio.h>

int main(){
    int babu;
    printf("the age of babu \n");
    scanf("%d",&babu);
    if (babu<40){
        printf("babu can drive \n");//>= lesser equal to , <=greater equal , != not equal to , == equal to
    }
    else{
        printf("babu can't drive \n");
    }
    return 0;
}