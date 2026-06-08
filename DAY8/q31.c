//Write a program to Print character triangle. 
#include<stdio.h>
int main(){
    int n;
    printf("Enter number of rows to be printed:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(char ch='A';ch<'A'+i;ch++){
            printf("%c",ch);
        }
        printf("\n");
    }
    return 0;
}