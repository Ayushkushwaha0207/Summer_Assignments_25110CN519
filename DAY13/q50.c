//Write a program to Find sum and average of array.
#include<stdio.h>
int main(){
    int arr[32],n,sum=0;
    printf("Enter the number of elements in array:");
    scanf("%d",&n);
    printf("Enter the elements of the arrays:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    printf("The sum of the elements of the array is:%d\n",sum);
    printf("The average of the elements of the elements of th array is:%.2f",(float)sum/n);
    return 0;
}
