#include <stdio.h>
// & operator used to say the adress of a value

int main(){
    int i=72;
    int j=723; //& is a operator ...i is integer, and j is integer pointer
 // &i retun adress of variables,,i is variables ifi take the value of i is 71 thn &i returns the adress of variables , its value is 6422220
    printf("the adress of i is %u \n", &i);
    printf("the adress of j is %u \n", &j);
    
    



   return 0;
}