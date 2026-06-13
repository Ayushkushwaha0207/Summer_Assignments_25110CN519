//Write a program to Input and display array.
#include<stdio.h>
int main(){
    int arr[32],n;

    //INPUT THE NUMBER OF ELEMENTS IN ARRAY.
    printf("Enter the number of elements of array:");
    scanf("%d", &n);

    //INPUT THE ELEMENTS OF ARRAY.
    printf("Enter the elements of array:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    //PRINTING THE ELEMENTS OF ARRAY.
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}