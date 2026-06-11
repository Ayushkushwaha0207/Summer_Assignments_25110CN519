//Write a program to Write function to find maximum.
#include<stdio.h>
int max(int a, int b){
    if(a>b){
        return a;
    }else{
        return b;
    }
}
int main(){
    int n1, n2;
    printf("Enter two numbers to check for maximum:");
    scanf("%d %d",&n1, &n2);
    printf("The maximum of two numbers is:%d", max(n1,n2));
    return 0;
}