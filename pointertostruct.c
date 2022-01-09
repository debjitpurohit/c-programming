#include <stdio.h>
#include<string.h>



struct employee
{
    int salary;
    float hike;
    char name[10];
};

int main(){
    
    struct employee harry={3400,3.4,"harry"};
    struct employee *ptr=&harry;

    printf("the name of the employee is %s \n", harry.name);
    printf("the salary of the employee is %d \n", harry.salary);
    printf("the hike of the employee is %f \n", harry.hike);
    
     printf("the name of the employee is %s \n", (*ptr).name);
    printf("the salary of the employee is %d \n", (*ptr).salary);
    printf("the hike of the employee is %f \n", (*ptr).hike);
    return 0;
}