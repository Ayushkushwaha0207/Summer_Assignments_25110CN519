//Write a program to Create mini employee management system.
#include<stdio.h>
int main(){
    int n,i;
    int id[50];
    char name[50][50];
    char department[50][50];
    float salary[50];
    printf("Enter number of employees:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter details of Employee %d\n",i+1);
        printf("Employee ID:");
        scanf("%d",&id[i]);
        printf("Employee Name:");
        scanf("%s",name[i]);
        printf("Department:");
        scanf("%s",department[i]);
        printf("Salary:");
        scanf("%f",&salary[i]);
    }
    printf("Employee Records");
    printf("ID\tName\tDepartment\tSalary\n");
    for(i=0;i<n;i++){
        printf("%d %s %s %.2f",id[i],name[i],department[i],salary[i]);
    }
    return 0;
}