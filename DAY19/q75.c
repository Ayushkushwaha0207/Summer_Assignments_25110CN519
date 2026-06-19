//Write a program to Transpose matrix.
#include <stdio.h>
int main(){
    int rows,columns;
    scanf("%d %d",&rows,&columns);
    int A[rows][columns],transpose[columns][rows];
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            scanf("%d",&A[i][j]);
        }
    }
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            transpose[j][i]=A[i][j];
        }
    }
    for(int i=0;i<columns;i++){
        for(int j=0;j<rows;j++){
            printf("%d ",transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}
