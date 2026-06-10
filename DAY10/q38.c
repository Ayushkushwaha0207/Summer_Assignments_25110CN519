//Write a program to Print reverse pyramid.
#include<stdio.h>
int main(){
    int n;
    printf("Enter number of rows to be printed for reverse pyramid:");
    scanf("%d",&n);
    for(int i=n;i>=1;i--){
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int j=1;j<=(2*i-1);j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}