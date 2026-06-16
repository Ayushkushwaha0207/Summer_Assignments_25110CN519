//Write a program to Remove duplicates from array.
#include<stdio.h>
int main(){
    int arr[]={1,2,3,6,6,6,2,5,4,3,6,1};
    int n=7;
    printf("Array after removing duplicates:\n");
    for(int i=0;i<n;i++){
        int duplicate=0;
        for(int j=0;j<i;j++){
            if(arr[i]==arr[j]){
                duplicate=1;
                break;
            }
        }
        if(!duplicate){
            printf("%d ",arr[i]);
        }
    }
    return 0;
}