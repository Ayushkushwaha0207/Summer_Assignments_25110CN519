//Write a program to Check strong number. 
#include<stdio.h>
int main(){
    int num, temp, sum=0, digit=0;
    printf("Enter the number to check whether it is a strong number or not:");
    scanf("%d", &num);
    temp=num;
    while(temp!=0){
        int fact=1;
        digit=temp%10;
        for(int j=digit;j>0;j--){
            fact=fact*j;
        }
        sum+=fact;
        temp/=10;
    }
    if(num==sum){
        printf("The number is a STRONG number.");
    }else{
        printf("The number is NOT STRONG number.");
    }
    return 0;
}