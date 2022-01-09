#include <stdio.h>
#include<string.h>



struct employee
{
    int salary;
    float hike;
    char name[10];
};
// void show(struct employee e)
// {
//     e.name[0]='p';
//     printf("the name of the employee is %s \n", e.name);
//     printf("the salary of the employee is %d \n", e.salary);
//     printf("the hike of the employee is %f \n", e.hike);
//     e.hike=4.55;
// };
void showRef(struct employee *e)
{
    (*(e)).name[0]='p';
    printf("the name of the employee is %s \n", e->name);
    printf("the salary of the employee is %d \n", e->salary);
    printf("the hike of the employee is %f \n", e->hike);
    (*(e)).hike=4.55;
};
int main(){
    struct employee harry={3400,3.4,"harry"};
    showRef(&harry);
    
    printf("the name of the employee is %s \n", harry.name);
    printf("the salary of the employee is %d \n", harry.salary);
    printf("the hike of the employee is %f \n", harry.hike);
    return 0;
}