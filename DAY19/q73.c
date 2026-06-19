//Write a program to Add matrices.
#include<stdio.h>
int main(){
    int rows,columns;
    scanf("%d %d",&rows,&columns);
    int A[rows][columns],B[rows][columns],sum[rows][columns];
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            scanf("%d",&A[i][j]);
        }
    }
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            scanf("%d",&B[i][j]);
        }
    }
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            sum[i][j]=A[i][j]+B[i][j];
        }
    }
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}