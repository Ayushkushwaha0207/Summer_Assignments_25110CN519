//Write a program to Find pair with given sum.
#include<stdio.h>
int main(){
    int arr[]={1,4,5,7,3,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    int sum=10;
    printf("Pairs with sum %d are:\n",sum);
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==sum){
                printf("(%d, %d)\n",arr[i],arr[j]);
            }
        }
    }
    return 0;
}