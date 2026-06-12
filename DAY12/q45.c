//Write a program to Write function for palindrome.
#include <stdio.h>
int palindrome(int num) {
    int rev = 0, temp, original = num;
    while (num != 0) {
        temp = num % 10;
        rev = rev * 10 + temp;
        num = num / 10;
    }
    if (original == rev)
        return 1;  
    else
        return 0;  
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (palindrome(num))
        printf("The number is a palindrome.\n");
    else
        printf("The number is not a palindrome.\n");
    return 0;
}
