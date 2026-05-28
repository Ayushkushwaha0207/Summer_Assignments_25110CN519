#include<stdio.h>
int main(){
    int n , sum=0;
    printf("Enter the number of N to find sum:");
    scanf("%d",&n);
    for(int i=n;i>0;i--){
        sum+=i;
    }
    printf("Sum upto %d numbers is %d ", n , sum);
    return 0;
}
