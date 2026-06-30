//Write a program to Develop complete mini project using arrays, strings and functions. 
#include<stdio.h>
#include<string.h>
#define MAX 100
struct Student{
    int roll;
    char name[50];
    float marks;
};
void addStudent(struct Student students[],int *count);
void displayStudents(struct Student students[],int count);
void searchStudent(struct Student students[],int count,int roll);
float calculateAverage(struct Student students[],int count);
int main(){
    struct Student students[MAX];
    int count=0;
    int choice,roll;
    while(1){
        printf("\n--- Student Management System ---\n");
        printf("1.Add Student\n");
        printf("2.Display All Students\n");
        printf("3.Search Student by Roll Number\n");
        printf("4.Calculate Average Marks\n");
        printf("5.Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                addStudent(students,&count);
                break;
            case 2:
                displayStudents(students,count);
                break;
            case 3:
                printf("Enter roll number to search:");
                scanf("%d",&roll);
                searchStudent(students,count,roll);
                break;
            case 4:
                printf("Average Marks:%.2f\n",calculateAverage(students,count));
                break;
            case 5:
                printf("Exiting program...\n");
                return 0;
            default:
                printf("Invalid choice! Try again.\n");
        }
    }
}
void addStudent(struct Student students[],int *count){
    if(*count>=MAX){
        printf("Cannot add more students!\n");
        return;
    }
    printf("Enter Roll Number:");
    scanf("%d",&students[*count].roll);
    printf("Enter Name:");
    scanf(" %[^\n]",students[*count].name);
    printf("Enter Marks:");
    scanf("%f",&students[*count].marks);
    (*count)++;
    printf("Student added successfully!\n");
}
void displayStudents(struct Student students[],int count){
    if (count==0){
        printf("No students to display!\n");
        return;
    }
    printf("\n--- Student List ---\n");
    for (int i=0;i<count;i++){
        printf("Roll:%d|Name:%s|Marks:%.2f\n",
               students[i].roll,students[i].name,students[i].marks);
    }
}
void searchStudent(struct Student students[],int count,int roll){
    for(int i=0;i<count;i++){
        if(students[i].roll==roll){
            printf("Student Found:\nRoll:%d|Name:%s|Marks:%.2f\n",
                   students[i].roll,students[i].name,students[i].marks);
            return;
        }
    }
    printf("Student with Roll %d not found!\n",roll);
}
float calculateAverage(struct Student students[],int count){
    if(count==0)return 0.0;
    float sum=0;
    for(int i=0;i<count;i++){
        sum+=students[i].marks;
    }
    return sum/count;
}