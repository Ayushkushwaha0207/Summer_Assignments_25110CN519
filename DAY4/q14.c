//Write a program to Find nth Fibonacci term. 
#include<stdio.h>
int main(){
    int n,a=0,b=1,c;
    printf("Enter the value of n to print nth term:");
    scanf("%d", &n);
    for(int i=0;i<n-2;i++){
        c=a+b;
        a=b;
        b=c;
    }
    printf("%d",c);
    return 0;
}