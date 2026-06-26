//Write a program to Create employee management system.
#include<stdio.h>
struct Employee{
    int id;
    char name[50];
    float salary;
};
int main(){
    int n;
    printf("Enter number of employees:");
    scanf("%d",&n);
    struct Employee emp[n];
    for(int i=0;i<n;i++){
        printf("Enter details of employee %d\n",i+1);
        printf("Employee ID:");
        scanf("%d",&emp[i].id);
        printf("Name:");
        scanf("%s",emp[i].name);
        printf("Salary:");
        scanf("%f",&emp[i].salary);
    }
    printf("Employee Records\n");
    printf("ID\tName\tSalary\n");
    for(int i=0;i<n;i++){
        printf("%d\t%s\t%.2f\n",
               emp[i].id,
               emp[i].name,
               emp[i].salary);
    }
    return 0;
}