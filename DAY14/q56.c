//Write a program to Find duplicates in array.
#include<stdio.h>
int main(){
    int arr[100],n;
    printf("Enter the number of elements of the array:");
    scanf("%d",&n);
    printf("Enter the elements of the array:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("The duplicates are:\n");
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                printf("%d",arr[i]);
                break;
            }
        }
    }
    return 0;
}