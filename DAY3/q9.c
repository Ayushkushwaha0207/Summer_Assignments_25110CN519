#include<stdio.h>
int main(){
    int num;
    int flag=0;
    printf("Enter the number to check whether it is prime or not:");
    scanf("%d", &num);
    for(int i=num-1; i>1;i--){
        if(num%i==0){
            flag=1;
            break;
        }
    }
    if(flag==1){
        printf("The number is not a Prime number.");
    }else{
        printf("The number is a prime number.");
    }
    return 0;
}