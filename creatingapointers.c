#include <stdio.h>

int main(){
    int i=72;
    int *j =&i; // but j cant store the adress of i if you wanna store the adress of a integer in another integer u have to use pointer integer like *j
 // j it can store an integer or value of integer nor the adress but *j can store the adress of integr aws value so *j is more usefull and more efficient 
    printf("the adress of i is %u \n",j); // adress print krate chaile only j if wana print value use 
    printf("the adress of i is %u \n",&i);
    printf("the value of i is %u",*j);
    printf("the value of i is %u",i);
    //int *ch-ptr--> pointeer t o integer 
    //char *ch-ptr--> pointee to chyaracter 
    //float*ch-ptr--> pointer to float

   return 0;
}