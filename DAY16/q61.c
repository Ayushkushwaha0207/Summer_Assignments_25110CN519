//Write a program to Find missing number in array.
#include <stdio.h>
int findMissingNumber(int arr[],int n){
    int expected_sum=n*(n+1)/2;
    int actual_sum=0;
    for (int i=0;i<n-1;i++){
        actual_sum+=arr[i];
    }
    return expected_sum - actual_sum;
}
int main(){
    int arr[]={1,2,3,5,6}; 
    int n=6; 
    int missing=findMissingNumber(arr,n);
    printf("The missing number is: %d\n", missing);
    return 0;
}
