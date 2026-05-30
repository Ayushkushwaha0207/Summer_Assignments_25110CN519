#include<stdio.h>
int main(){
    int num1, num2, gcd=1;
    printf("Enter first number to find GCD:");
    scanf("%d", &num1);
    printf("Enter second number to find GCD:");
    scanf("%d", &num2);
    for(int i=1;i<=num1&&i<=num2;i++){
        if(num1%i==0&&num2%i==0){
            gcd=i;
        }
    }
    printf("The GCD value is %d.", gcd);
    return 0;
}