//Write a program to Recursive sum of digits.
#include<stdio.h>
int add(int a, int b){
    return a+b;
}
int main(){
    int num1,num2;
    printf("Enter numbers to add respectively:");
    scanf("%d %d",&num1,&num2);
    printf("The sum of two numbers is:%d", add(num1,num2));
    return 0;
}