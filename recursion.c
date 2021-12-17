#include <stdio.h>

//factorial(5)=5*4*3*2*1
//factorial(n)=n*n-1*n-2*n-3*n-4*.....
// or....factorial(5)=1*2*3*4*5
// thats like ...factorioal(n)=1*2*3*n-3*n-2*n-1*n
//factorial(0)=1 
// factorial(1)=1
//factorial(n)=n*n-1*n-2*n-3*n-4*3*2*1
//factorial(n)=n*(n-1*n-2*n-3*n-4*3*2*1)
//==factorial(n)=n*fctorial(n-1)
int factorial(int);
int main(){
    int n=4;
// use arguments in main body or in printf
    // scanf("%d",&n);
    printf("the value of factorial 4 is %d ",factorial(4));

   return 0;
}
int factorial(int n){ // use parameters in functions defination
    if(n==1 || n==0){
        return 1;
    }
    return n* factorial(n-1);
}
/////////////////NOTES