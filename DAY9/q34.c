//Write a program to Print reverse number triangle.
#include<stdio.h>
int main(){
    int n;
    printf("Enter number of rows to be printed for reverse number triangle:");
    scanf("%d",&n);
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}