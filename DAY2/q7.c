#include<stdio.h>
int main(){
    int num , temp, mul=1;
    printf("Enter number to find product of digits:");
    scanf("%d", &num);
    while(num!=0){
        temp=num%10;
        mul=mul*temp;
        num=num/10;
    }
    printf("The product of numbers is %d", mul);
    return 0;
}