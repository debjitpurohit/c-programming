#include <stdio.h>
#include<string.h>



struct employee
{
    int salary;
    float hike;
    char name[10];
};

int main(){ 
    struct employee facebook[10];
    strcpy(facebook[0].name, "harry");
    facebook[0].hike=5.3;
    facebook[0].salary=100000;
  
     printf("the name of the employee is %s \n", facebook[0].name);
    printf("the salary of the employee is %d \n", facebook[0].salary);
    printf("the hike of the employee is %f \n", facebook[0].hike);
    

   return 0;
}