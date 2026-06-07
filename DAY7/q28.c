//Write a program to Recursive reverse number.
#include<stdio.h>
int rev=0;
int reverse(int a){
    if(a==0){
        return rev;
    }else{
        rev=rev*10+(a%10);
        return reverse(a/10);
    }
}
int main(){
    int num;
    printf("Enter number to reverse using recursion:");
    scanf("%d", &num);
    printf("The number after reversing is %d.", reverse(num));
    return 0;
}