//Write a program to Check perfect number.
#include<stdio.h>
int main(){
    int num,sum=0;
    printf("Enter the number to check whether perfect or not:");
    scanf("%d", &num);
    for(int i=num-1;i>0;i--){
        if(num%i==0){
            sum+=i;
        }
    }
    if(sum==num){
        printf("The number is a PERFECT number.");
    }else{
        printf("The number is NOT PERFECT number.");
    }
    return 0;
}