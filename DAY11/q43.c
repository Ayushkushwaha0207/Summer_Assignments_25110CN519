//Write a program to Write function to check prime.
#include<stdio.h>
int prime(int a){
    if(a<=1){
        return 0;
    }
    for(int i=2;i*i<=a;i++){
        if(a%i==0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int num;
    printf("Enter number to check whether prime or not:");
    scanf("%d",&num);
    if(prime(num)==0){
        printf("The number is not prime number.");
    }else{
        printf("The number is a prime number.");
    }
    return 0;
}