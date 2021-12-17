#include <stdio.h>

int main(){
    int n;
    printf("enter the value of n \n");
    scanf("%d", &n);
    for(n; n; n--){                 // for(int i=n; i ; i--){ printf("the value of n is %d \n",n);    }
        printf("the value of n is %d \n",n);
    }
  return 0;
}