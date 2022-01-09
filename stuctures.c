#include <stdio.h>
#include<string.h>
struct employee
{
    int salary;
    float hike;
    char name[10];
};

int main(){
    int a=45;
    struct employee harry;
    strcpy(harry.name, "harry");
    harry.hike=5.3;
    harry.salary=100000;

    printf("the name of the employee is %s \n", harry.name);
    printf("the salary of the employee is %d \n", harry.salary);
    printf("the hike of the employee is %f \n", harry.hike);
    
    
    


   return 0;
}