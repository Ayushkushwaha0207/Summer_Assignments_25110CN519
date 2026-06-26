//Write a program to Create voting eligibility system.
#include<stdio.h>
#include<string.h>
int main(){
    int age;
    char voterId[20];
    char validIds[][20]={
        "V12345",
        "V67890",
        "V11111",
        "V22222"
    };
    int found=0;
    int n=sizeof(validIds)/sizeof(validIds[0]);
    printf("Enter your age:");
    scanf("%d",&age);
    printf("Enter Voter ID:");
    scanf("%s",voterId);
    for(int i=0;i<n;i++){
        if(strcmp(voterId,validIds[i])==0){
            found=1;
            break;
        }
    }
    if(age>=18&&found){
        printf("Eligible to vote.\n");
    }else if(age<18){
        printf("Not eligible to vote (Age below 18).\n");
    }else{
        printf("Voter ID not found in voter list.\n");
    }
    return 0;
}