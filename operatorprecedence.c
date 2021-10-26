#include <stdio.h>

int main(){
    int x=4;
    int y =6;
    printf("%d\n",3*x-8*y);
    printf("%d",8*y/3*x);  // gives wrong answer then comes associativity bcz * and / have same priority
    
    return 0;
}