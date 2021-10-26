#include <stdio.h>
#include <math.h>

int main(){
    int a=4;                                          
    int b=3;
    int z;
    z=b*a; // legal
    //b*a=z; //illegal
    printf("the value of z %d\n",z);

    printf("when 5 devided by 2 leaves a reminder of %d\n",5%2); //reminder
    printf("when -5 devided by 2 leaves a reminder of %d\n",-5%2);                                          
    printf("when 5 devided by -2 leaves a reminder of %d\n",5%-2);


    //no operator is assumed to present
    //printf("the value of 4 * 5 %d \n",(4)(5)); not possible like math
    printf("the value of 4 * 5 %d \n",(4)*(5));
    ///printf("the value of 4 ^ 5 %d \n",(4)^(5));   its not 4 to the power 5
    //to find the value of 4 to the power 5 ---pow function
    printf("the value of 4 ^ 5 %f \n", pow(4, 5)); // #include<math.h> and also %f not d
    printf("%f\n",5.0/2.0);
    printf("%f",3.0/9); //we cant use %d bcz int int = int , int float =float , float float = float


    return 0;
}