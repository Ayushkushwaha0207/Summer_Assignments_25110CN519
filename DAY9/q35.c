//Write a program to Print repeated character pattern.
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of rows to be printed for the repeated character pattern:");
    scanf("%d",&n);
    for(char ch='A';ch<='A'+n-1;ch++){
        for(int j=1;j<=(ch-'A'+1);j++){
            printf("%c",ch);
        }
        printf("\n");
    }
    return 0;
} 