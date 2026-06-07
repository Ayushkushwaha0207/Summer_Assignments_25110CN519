//Write a program to Recursive factorial. 
#include<stdio.h>
int fact(int a){
    if(a==0||a==1){
        return 1;
    }else{
        return a*fact(a-1);
    }
}
int main(){
    int num;
    printf("Enter number to find factorial by recursion:");
    scanf("%d", &num);
    
    printf("The factorial of number is:%d", fact(num));
    return 0;
}