#include <stdio.h>

int main(){//decrement for loop
    for(int a=5 ; a ; a--){
      printf("the value of a is %d \n ",a);
      if(a==1){   // break loop
        break;
      }
    }
   return 0;
}