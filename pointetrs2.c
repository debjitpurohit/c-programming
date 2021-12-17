#include <stdio.h>
// * operator use dto say the value of adress
int main(){
    int i= 72;
    int j=723;
    printf("the adress of i and j is %u and %u \n", &i,&j);
    printf("the value of adress of i and j is %d and %d",*(&i),*(&j));


   return 0;
}