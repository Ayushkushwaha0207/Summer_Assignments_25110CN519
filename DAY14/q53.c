//Write a program to Linear search. 
#include<stdio.h>
int main(){
    int arr[32],n,target,flag=0,a;
    printf("Enter the number of elements of array:");
    scanf("%d",&n);
    printf("Enter the elements of the array:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to search for:");
    scanf("%d",&target);
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            flag=1;
            a=i;
            break;
        }else{
            flag=0;
        }
    }
    if(flag==1){
        printf("The number found at index arr[%d].",a);
    }else{
        printf("The number was not found.");
    }
    return 0;
}