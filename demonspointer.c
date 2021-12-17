#include <stdio.h>

int main(){
    int i=8;
    int *j=&i;
    printf("add i=%u \n",&i);
    printf("add i=%u \n",j);
    printf("add j=%u \n",&j);
    printf("value of i =%d \n",i);
    printf("value of i =%d \n",*j);
    printf("value of i =%d \n",*(&i));


   return 0;
}
