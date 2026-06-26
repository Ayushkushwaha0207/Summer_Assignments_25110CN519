//Write a program to Create student record management system.
#include<stdio.h>
struct Student{
    int roll;
    char name[50];
    float marks;
};
int main(){
    int n;
    printf("Enter number of students:");
    scanf("%d",&n);
    struct Student s[n];
    for(int i=0;i<n;i++){
        printf("Enter details of student %d\n",i+1);
        printf("Roll No:");
        scanf("%d",&s[i].roll);
        printf("Name: ");
        scanf("%s",s[i].name);
        printf("Marks:");
        scanf("%f",&s[i].marks);
    }
    printf("Student Records\n");
    printf("Roll\tName\tMarks\n");
    for(int i=0;i<n;i++){
        printf("%d\t%s\t%.2f\n",
               s[i].roll,
               s[i].name,
               s[i].marks);
    }
    return 0;
}