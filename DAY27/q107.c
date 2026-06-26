//Write a program to Create salary management system.
#include<stdio.h>
struct Employee{
    int id;
    char name[50];
    float basicSalary;
    float hra;
    float da;
    float grossSalary;
};
int main(){
    int n;
    printf("Enter number of employees:");
    scanf("%d",&n);
    struct Employee emp[n];
    for(int i=0;i<n;i++){
        printf("Enter Employee ID:");
        scanf("%d",&emp[i].id);
        printf("Enter Name:");
        scanf("%s",emp[i].name);
        printf("Enter Basic Salary:");
        scanf("%f",&emp[i].basicSalary);
        emp[i].hra=0.20*emp[i].basicSalary;
        emp[i].da=0.10*emp[i].basicSalary;
        emp[i].grossSalary=emp[i].basicSalary+emp[i].hra+emp[i].da;
    }
    printf("Salary Details\n");
    printf("ID\tName\tBasic\tHRA\tDA\tGross\n");
    for(int i=0;i<n;i++){
        printf("%d\t%s\t%.2f\t%.2f\t%.2f\t%.2f\n",
               emp[i].id,
               emp[i].name,
               emp[i].basicSalary,
               emp[i].hra,
               emp[i].da,
               emp[i].grossSalary);
    }
    return 0;
}