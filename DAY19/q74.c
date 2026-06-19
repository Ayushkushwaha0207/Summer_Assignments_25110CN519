//Write a program to Subtract matrices.
#include<stdio.h>
int main(){
    int rows,columns;
    scanf("%d %d",&rows,&columns);
    int A[rows][columns],B[rows][columns],result[rows][columns];
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
            result[i][j]=A[i][j]-B[i][j];
        }
    }
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }
    return 0;
}
