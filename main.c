// To create a structure that accepts user inputs for an employee and associates data with that employee
#include<stdio.h>
#include<math.h>
struct employee
{
    char name [10];
    int year, id;
    float salary;
    char gen[2];
};
int main()
{
    struct employee x;
    printf("Enter your Name, Year of recruitment, employee ID, salary and Gender:\n");
    scanf("%s\n%d\n%d\n%f\n%s", &x.name, &x.year, &x.id, &x.salary, &x.gen);
    printf("The employee details are \n%s\n%d\n%d\n%f\n%s",x.name, x.year,x.id,x.salary,x.gen);
    return 0;
}