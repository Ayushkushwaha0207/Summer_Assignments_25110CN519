//Write a program to Selection sort.
#include<stdio.h>
int main(){
    int arr[]={64,25,12,22,11};
    int n=sizeof(arr)/sizeof(arr[0]);
    int i,j,mIndex,temp;
    for(i=0;i<n-1;i++){
        mIndex=i;
        for(j=i+1;j<n;j++){
            if(arr[j]<arr[mIndex]){
                mIndex=j;
            }
        }
        temp=arr[i];
        arr[i]=arr[mIndex];
        arr[mIndex]=temp;
    }
    printf("Sorted array:");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}