//Write a program to Write function for Armstrong.
#include <stdio.h>
#include <math.h>
int armstrong(int num) {
    int original = num, temp = num;
    int digits = 0, sum = 0;
    while (temp != 0) {
        digits++;
        temp /= 10;
    }
    temp = num;
    while (temp != 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }
    if (sum == original)
        return 1;   
    else
        return 0;  
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (armstrong(num))
        printf("%d is an ARMSTRONG number.", num);
    else
        printf("%d is NOT an ARMSTRONG number.", num);
    return 0;
}