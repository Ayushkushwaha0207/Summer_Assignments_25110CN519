// Write a program to Multiply matrices.
#include <stdio.h>
int main(){
    int row1,column1,row2,column2;
    scanf("%d %d",&row1,&column1);
    scanf("%d %d",&row2,&column2);
    if(column1!=row2){
        return 0;
    }
    int A[row1][column1],B[row2][column2],C[row1][column2];
    for(int i=0;i<row1;i++){
        for(int j=0;j<column1;j++){
            scanf("%d",&A[i][j]);
        }
    }
    for(int i=0;i<row2;i++){
        for(int j=0;j<column2;j++){
            scanf("%d",&B[i][j]);
        }
    }
    for(int i=0;i<row1;i++){
        for(int j=0;j<column2;j++){
            C[i][j] = 0;
            for(int k=0;k<column1;k++){
                C[i][j]+=A[i][k]*B[k][j];
            }
        }
    }
    for(int i=0;i<row1;i++){ 
        for(int j=0;j<column2;j++){
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }
    return 0;
}