//Write a program to Find largest and smallest element.
#include<stdio.h>
int main(){
    int arr[32],n,max,min;
    printf("Enter the number of elements of array:");
    scanf("%d",&n);
    printf("Enter the elements of the array:");
    for(int i=0;i<n;i++){
       scanf("%d",&arr[i]);
    }
    max=arr[0];
    min=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
    }
    printf("The greatest of the elements id:%d\n",max);
    printf("The smallest of the elements id:%d",min);
    return 0;
}