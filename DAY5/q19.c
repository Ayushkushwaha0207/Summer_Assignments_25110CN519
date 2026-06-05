//Write a program to Print factors of a number.
#include<stdio.h>
int main(){
    int num;
    printf("Enter number to print factors:");
    scanf("%d", &num);
    printf("The factors are:");
    for(int i=1;i<=num;i++){
        if(num%i==0){
            printf("%d ",i);
        }
    }
}