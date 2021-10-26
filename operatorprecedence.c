#include <stdio.h>

int main(){
    int x=4;
    int y =6;
    printf("%d\n",3*x-8*y); // %*/ have same 1st priority ,  +- have 2nd priority, = 3rd priority
    printf("%d",8*y/3*x);  // 8*6=48, 48/3=16,16*4=64 gives wrong answer then comes associativity bcz * and / have same priority
    // always maintain left to right not follow bodmas according to math
    
    return 0;
}
