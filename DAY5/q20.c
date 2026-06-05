//Write a program to Find largest prime factor. 
#include<stdio.h>
int main(){
    int num;
    printf("Enter number to find largest PRIME factor:");
    scanf("%d", &num);
    for(int i=num;i>1;i--){
        int prime=1;
        if(num%i==0){
            for(int j=2;j<i;j++){
                if(i%j==0){
                    prime=0;
                    break;
                }
            }
            if(prime==1){
                printf("The largest PRIME factor is: %d", i);
            break;
            }
        }
    }
    return 0;
}