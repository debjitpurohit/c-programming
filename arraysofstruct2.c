#include <stdio.h>
#include<string.h>



struct employee
{
    int salary;
    float hike;
    char name[10];
};

int main(){
    int a=45; // as like a ... harry is an integer
    struct employee facebook[3];
    printf("enter the details of 1st \n");
    printf("enter the name of 1st \n");
    scanf("%s",&facebook[0].name);
    printf("enter the salary of harry \n");
    scanf("%d",&facebook[0].salary);
    printf("enter the hike of harry \n");
    scanf("%f",&facebook[0].hike);

    printf("enter the details of debjit \n");
    printf("enter the name of debjit \n");
    scanf("%s",&facebook[1].name);
    printf("enter the salary of debjit \n");
    scanf("%d",&facebook[1].salary);
    printf("enter the hike of debjit \n");
    scanf("%f",&facebook[1].hike);

    printf("enter the details of sneha \n");
    printf("enter the name of sneha \n");
    scanf("%s",&facebook[2].name);
    printf("enter the salary of sneha \n");
    scanf("%d",&facebook[2].salary);
    printf("enter the hike of sneha \n");
    scanf("%f",&facebook[2].hike);



    printf("the name of the employee is %s \n", facebook[0].name);
    printf("the salary of the employee is %d \n", facebook[0].salary);
    printf("the hike of the employee is %f \n", facebook[0].hike);

    printf("the name of the employee is %s \n", facebook[1].name);
    printf("the salary of the employee is %d \n", facebook[1].salary);
    printf("the hike of the employee is %f \n", facebook[1].hike);

    printf("the name of the employee is %s \n", facebook[2].name);
    printf("the salary of the employee is %d \n", facebook[2].salary);
    printf("the hike of the employee is %f \n", facebook[2].hike);

    return 0;
}