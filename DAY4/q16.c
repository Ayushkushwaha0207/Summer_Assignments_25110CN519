//Write a program to Print Armstrong numbers in a range. 
#include<stdio.h>
#include<math.h>
int main(){
    int num1, num2;
    printf("Enter the number from which the armstrong number has to be printed:");
    scanf("%d", &num1);
    printf("Enter the number upto which the armstrong number has to be printed:");
    scanf("%d", &num2);
    for(int num=num1;num<=num2;num++){
        int a=num;
        int count=0;
        int sum=0;
        while(a!=0){
            count++;
            a/=10;
        }
        if(num==0){
            count=1;
        }
        a=num;
        while(a!=0){
            int digit=a%10;
            sum+=(int)pow(digit,count);
            a/=10;
        }
        if(num==0){
            sum=0;
        }
        if(sum==num){
            printf("%d ",num);
        }
    }
    return 0;
}