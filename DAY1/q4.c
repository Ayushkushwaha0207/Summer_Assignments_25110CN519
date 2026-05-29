#include<stdio.h>
int main(){
    long long int n,i=0;
    printf("Enter the number to count digits:");
    scanf("%lld", &n);
    if(n==0){
        i=1;
    }else{
        while(n>0){
            n=n/10;
            i++;
        }
    }
    printf("%d" ,i);
}