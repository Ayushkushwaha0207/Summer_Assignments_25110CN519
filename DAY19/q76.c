//Write a program to Find diagonal sum.
#include<stdio.h>
int main(){
    int n,sum=0;
    scanf("%d",&n);
    int A[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&A[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        sum+=A[i][i];
    }
    printf("%d\n",sum);
    return 0;
}