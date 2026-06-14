//Write a program to Second largest element.
#include<stdio.h>
int main(){
    int arr[100],n;
    int max,secmax;
    printf("Enter the number of elements in array:");
    scanf("%d",&n);
    printf("Enter the elements of the array:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    max=secmax=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            secmax=max;
            max=arr[i];
        }
        else if(arr[i]>secmax && arr[i]!=max){
            secmax=arr[i];
        }
    }
    printf("The second largest number is %d.",secmax);
    return 0;
}