#include <stdio.h>

void swap(int*,int*);
int main(){
    int a =5;
    int b=7;
    printf("value of a and before sawap: %d and %d \n",a,b);
    // if we want to swap we have to use call by reference not call by value
    swap(&a,&b);
    printf("value of a and after sawap: %d and %d \n",a,b);
   return 0;
}
void swap(int *a,int *b){
    //printf("value of a and before sawap: %d and %d \n",a,b);
    int temp; // temporary value
    temp=*a; // a=5,temp =5,b=7 // initial
    *a=*b; // a=7, temp=5, b=7
    *b=temp; // a=7, temp=5,b=5  //final
    //printf("value of a and after sawap: %d and %d \n",a,b);

}