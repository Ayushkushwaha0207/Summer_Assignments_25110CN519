//Write a program to Print reverse star pattern. 
#include<stdio.h>
int main(){
    int n;
    printf("Enter number of rows to be printed in reverse:");
    scanf("%d",&n);
    for(int i=n;i>=1;i--){
        for(int j=i;j>=1;j--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}