//Write a program to Generate Fibonacci series. 
#include<stdio.h>
int main(){
    int num,a=0,b=1,c;
    printf("Enter number of fibonacci number required:");
    scanf("%d", &num);
    for(int i=0;i<=num;i++){
        printf("%d ", a);
        c=a+b;
        a=b;
        b=c;
    }
    return 0;
}