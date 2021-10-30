#include <stdio.h>

int main(){
    int babu;
    int vippass = 0;
    // vippass = 1;
    printf("the age of babu \n");
    scanf("%d",&babu);
    if ( (babu <=70 && babu >=18) || (vippass==1)  ) // when 2 condition applied called as logical operators thne 3 condtition appliped for emergency 
    
    
    {
        printf("babu can drive \n");//<= lesser equal to , >=greater equal , != not equal to , == equal to
    }
    else{
        printf("babu can't drive \n");
    }



    return 0;
}