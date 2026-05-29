#include<stdio.h>
int main(){
    int n , fact=1;
    printf("Enter the number to find factorial:");
    scanf("%d", &n);
    for(int i=n;i>0;i--){
        fact*=i;
    }
    printf("Factorial of the number %d is %d" , n , fact);
    return 0;
}