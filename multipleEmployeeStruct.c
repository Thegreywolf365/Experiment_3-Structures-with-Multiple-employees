#include<stdio.h>
typedef struct{
    char name[30];
    int id, year;
    double salary;
    char gender[5];
} Employee;

int main(){
    int n=2;
    //printf_s("How many Employees to be entered? %d");
    scanf("%d", &n);

    Employee employees[n];

    printf("Enter %d Employee Details \n \n",n);
    for(int i=0; i<n; i++){
        printf("Employee %d:- \n",i+1);


        printf("Name: ");
        scanf("%[^\n]s",&employees[i].name);


        printf("Id: %d ");
        scanf("%d",&employees[i].id);


        printf("Salary: ");
        scanf("%f",&employees[i].salary);

        printf("Year:");
        scanf("%d",&employees[i].year);

        printf("Gender: %c");
        scanf("%c",&employees[i].gender);


    }

    printf("-------------- All Employees Details ---------------\n");
    for(int i=0; i<n; i++){
        printf("\n Name \t: ");
        printf("%s",employees[i].name);

        printf("\n Id \t: ");
        printf("%d",employees[i].id);

        printf("\n Salary \t: ");
        printf("%f",employees[i].salary);
        printf("\n Employment year \t: ");
        printf("%d",employees[i].year);
        printf("\n Gender \t: ");
        printf("%c",employees[i].gender);

        printf("\n");
    }

    return 0;
}
