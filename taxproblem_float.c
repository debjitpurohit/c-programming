#include <stdio.h>
 
//BUT IF WE USE 250000 INSTED OF 2.5 LK THEN NO PROBLEM .na hole 2.5 k %d 2 dhore nebe and 2.4 r 2.6 lk er same tax = no tax dekhabe
int main(){
    float salary; // have to use float
    printf("enter your salary in lack  \n");
    scanf("%f",&salary);

    if(salary<2.5){
        printf("no, you have to pay no tax");
    }
    else if ((salary>=2.5) && (salary<5))
    {
        printf("you have 5 percent tax of your %0.2f lack salary\n",salary);
    }
    else if ((salary>=5) && (salary<=10))
    {
        printf("you have 10 percent tax of your %0.2f lack salary\n",salary);
    }
    else
    {
        printf("you have 30 percent tax of your %0.2f lack salary\n",salary);
    }
    
      return 0;
}