//Write a program to Print multiplication table of a given number
#include<stdio.h>
int main(){
    int n , mul;
    printf("Enter the number of which table is to shown:");
    scanf("%d" , &n);
    for(int i=1;i<=10;i++){
        mul=n*i;
        printf("%d x %d = %d \n" , n , i , mul);
    }
    return 0;
}