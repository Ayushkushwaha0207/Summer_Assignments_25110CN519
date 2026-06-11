//Write a program to Write function to find factorial.
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
    printf("Enter number to find factorial:");
    scanf("%d", &num);
    printf("The factorial is:%d", fact(num));
    return 0;
}