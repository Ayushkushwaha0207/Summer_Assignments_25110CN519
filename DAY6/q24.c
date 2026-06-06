//Write a program to Find x^n without pow().
#include<stdio.h>
int main(){
    int x,n,temp,origin;
    printf("Enter base of the exponential number:");
    scanf("%d", &x);
    printf("Enter the value of power:");
    scanf("%d", &n);
    temp=n;
    origin=x;
    for(int i=0;i<temp-1;i++){
        x*=origin;
    }
    printf("Result=%d", x);
    return 0;
}