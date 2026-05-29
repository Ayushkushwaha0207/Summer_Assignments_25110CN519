//Write a program to Check whether a number is palindrome.
#include<stdio.h>
int main(){
    int num,temp,rev=0, copynum;
    printf("Enter number to check for palindrome:");
    scanf("%d",&num);
    copynum=num;
    while(num!=0){
        temp=num%10;
        rev=rev*10+temp;
        num=num/10;
    }
    if(copynum==rev){
        printf("Entered number is palindrome.");
    }else{
        printf("Entered number is not palindrome.");
    }
    return 0;
}