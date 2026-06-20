//Write a program to Find row-wise sum.
#include<stdio.h>
int main(){
    int row,column;
    scanf("%d %d",&row,&column);
    int A[row][column];
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            scanf("%d",&A[i][j]);
        }
    }    
    for(int i=0;i<row;i++){
        int sum=0;
        for(int j=0;j<column;j++){
            sum+=A[i][j];
        }
        printf("%d\n",sum);
    }
    return 0;
}