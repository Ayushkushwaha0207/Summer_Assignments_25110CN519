#include<stdio.h>
int main(){
    int num1, num2, gcd=1, lcm;
    printf("Enter first number to find LCM:");
    scanf("%d", &num1);
    printf("Enter second number to find LCM:");
    scanf("%d", &num2);
    for(int i=1;i<=num1&&i<=num2;i++){
        if(num1%i==0&&num2%i==0){
            gcd=i;
        }
    }
    lcm=(num1*num2)/gcd;
    printf("The LCM value is %d.", lcm);
    return 0;
}