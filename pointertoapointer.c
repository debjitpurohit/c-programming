#include <stdio.h>

int main(){
    int i=72;  // i is integr
    int *j=&i; // j is pointer to i integer 
    int **k=&j; // k is pointer to the j pointer
    int ***l =&k; //rare
    printf("the adress of i is %u \n", &i);
    printf("the adress of j is %u \n", &j);
    printf("the adress of k is %u \n", &k);
    printf("the adress of l is %u \n", &l);
    


   return 0;
}