//Write a program to Reverse array. 
#include<stdio.h>
int main(){
    int arr[100],n;
    printf("Enter the number of elements to be in array:");
    scanf("%d",&n);
    printf("Enter the elements of the array:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n/2;i++){
        int temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }
    printf("Reversed array:");
    for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}