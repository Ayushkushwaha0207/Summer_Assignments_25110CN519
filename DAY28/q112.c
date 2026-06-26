//Write a program to Create contact management system.
#include<stdio.h>
struct Contact{
    char name[50];
    char phone[15];
};
int main(){
    int n;
    printf("Enter number of contacts:");
    scanf("%d",&n);
    struct Contact contacts[n];
    for(int i=0;i<n;i++){
        printf("\nEnter Contact %d Details\n",i+1);
        printf("Name:");
        scanf("%s",contacts[i].name);
        printf("Phone Number:");
        scanf("%s",contacts[i].phone);
    }
    printf("\n----- CONTACT LIST -----\n");
    for(int i=0;i<n;i++){
        printf("Name:%s\n",contacts[i].name);
        printf("Phone:%s\n",contacts[i].phone);
    }
    return 0;
}