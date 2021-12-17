#include <stdio.h>

void func(int *);
int main(){
   int marks[3]={1,2,4}; 
   func(marks); // marks[0]=marks
   return 0;
}
void func(int *ptr){
    for (int i=0; i<3;i++)
    {
        printf("the value of marks [%d] is %d \n",i,*(ptr++));
    }

}