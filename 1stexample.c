#include <stdio.h>

int main(){
    //0.33; // it is double data type ,can also say float but double more accurate
    int num;
    printf("the number is %d\n");
    scanf("%d",&num);
    printf("the divisibility test %d",num%97);
    int x=2;
    int y=3;
    int z=3;
    int r=1;
    printf("%d", 3*x/y-z+r);
    return 0; //if divisibility returns 0 then devisible but other value is reminder
}