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
    struct employee harry,Debjit,Sneha;
    printf("enter the details of harry \n");
    printf("enter the name of harry \n");
    scanf("%s",&harry.name);
    printf("enter the salary of harry \n");
    scanf("%d",&harry.salary);
    printf("enter the hike of harry \n");
    scanf("%f",&harry.hike);

    printf("enter the details of debjit \n");
    printf("enter the name of debjit \n");
    scanf("%s",&Debjit.name);
    printf("enter the salary of debjit \n");
    scanf("%d",&Debjit.salary);
    printf("enter the hike of debjit \n");
    scanf("%f",&Debjit.hike);

    printf("enter the details of sneha \n");
    printf("enter the name of sneha \n");
    scanf("%s",&Sneha.name);
    printf("enter the salary of sneha \n");
    scanf("%d",&Sneha.salary);
    printf("enter the hike of sneha \n");
    scanf("%f",&Sneha.hike);



    printf("the name of the employee is %s \n", harry.name);
    printf("the salary of the employee is %d \n", harry.salary);
    printf("the hike of the employee is %f \n", harry.hike);

    printf("the name of the employee is %s \n", Debjit.name);
    printf("the salary of the employee is %d \n", Debjit.salary);
    printf("the hike of the employee is %f \n", Debjit.hike);

    printf("the name of the employee is %s \n", Sneha.name);
    printf("the salary of the employee is %d \n", Sneha.salary);
    printf("the hike of the employee is %f \n", Sneha.hike);

    return 0;
}