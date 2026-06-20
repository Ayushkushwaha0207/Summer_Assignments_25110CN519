//Write a program to Check symmetric matrix.
#include<stdio.h>
int main(){
    int n,flagship=1;;
    printf("Enter the order of n:");
    scanf("%d",&n);
    int A[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&A[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(A[i][j]!=A[j][i]){
                flagship=0;
                break;
            }
        }
    }
    if(flagship==1){
        printf("Symmetricc matrix.");
    }else{
        printf("Not symmetric matrix");
    }
    return 0;
}