//Write a program to Convert binary to decimal.
#include<stdio.h>
int main(){
    long long num;
    int dec=0, base=1 ,rem;
    printf("Enter a binary number to convert into decimal number:");
    scanf("%lld", &num);
    while(num>0){
        rem=num%10;
        dec+=rem*base;
        num/=10;
        base*=2;
    }
    printf("The decimal number in binary is: %d\n", dec);
    return 0;
}