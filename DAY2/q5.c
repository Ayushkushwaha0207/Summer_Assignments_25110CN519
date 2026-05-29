#include<stdio.h>
int main(){
    int num , temp , sum=0;
    printf("Enter the number to find sum of digits:");
    scanf("%d", &num);
    if(num==0){
        printf("The sum of digits is 0");
    }else{
        while(num>0){
            temp=num%10;
            num=num/10;
            sum=sum+temp;
        }
        printf("The sum of digits is %d", sum);
    }
    return 0;
}