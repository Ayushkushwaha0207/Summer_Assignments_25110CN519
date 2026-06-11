//Write a program to Write function to find sum of two numbers.
#include<stdio.h>
int sum(int a,int b){
    return a+b;
}
int main(){
    int n1,n2;
    printf("Enter two numbers respectively:");
    scanf("%d %d",&n1,&n2);
    printf("The sum will be:%d", sum(n1,n2));
    return 0;
}