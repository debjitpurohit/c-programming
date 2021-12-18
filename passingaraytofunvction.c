#include <stdio.h>

void func(int *);
int main(){
   int marks[3]={12,16,18}; 
   func(marks); // &marks[0]= marks 
   for (int i=0; i<3;i++)
    {
        printf("the value of marks [%d] is %d \n",i,marks[i]); //*ptr takes both adress and value
    }


   
   return 0;
}
void func(int *ptr){ // *ptr = marks[i]
    for (int i=0; i<3;i++)
    {
        *ptr=56;
        printf("the value of marks [%d] is %d \n",i,*(ptr++)); //*ptr takes both adress and value
    }

}