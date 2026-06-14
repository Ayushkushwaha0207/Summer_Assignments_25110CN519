//Write a program to Frequency of an element. 
#include<stdio.h>
int main(){
    int arr[100],n;
    int element,count=0;
    printf("Enter number of elements to be present in array:");
    scanf("%d",&n);
    printf("Enter the elements of the array:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to find the frequency of:");
    scanf("%d",&element);
    for(int i=0;i<n;i++){
        if(arr[i]==element){
            count++;
        }
    }
    printf("The frequency of the element is %d.", count);
    return 0;
}