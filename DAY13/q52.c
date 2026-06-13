//Write a program to Count even and odd elements.
#include<stdio.h>
int main(){
    int arr[32],n;
    int oddcount=0,evencount=0;
    printf("Enter the number of elements of array:");
    scanf("%d",&n);
    printf("Enter the elements of the array:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            evencount++;
        }else{
            oddcount++;
        }
    }
    printf("There are %d even numbers and %d odd numbers.",evencount , oddcount);
    return 0;
}