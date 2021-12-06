#include <stdio.h>
 
//BUT IF WE USE 250000 INSTED OF 2.5 LK THEN NO PROBLEM .na hole 2.5 k %d 2 dhore nebe and 2.4 r 2.6 lk er same tax = no tax dekhabe
int main(){
    int salary;
    printf("enter your salary  \n");
    scanf("%d",&salary);

    if(salary<250000){
        printf("no, you have to pay no tax");
    }
    else if ((salary>=250000) && (salary<500000))
    {
        printf("you have 5 percent tax of your %d salary\n",salary);
    }
    else if ((salary>=500000) && (salary<=1000000))
    {
        printf("you have 10 percent tax of your %d salary\n",salary);
    }
    else
    {
        printf("you have 30 percent tax of your %d salary\n",salary);
    }
    
      return 0;
}