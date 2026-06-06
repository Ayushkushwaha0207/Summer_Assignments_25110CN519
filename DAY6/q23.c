//Write a program to Count set bits in a number.
#include<stdio.h>
int main(){
    int num,binary[32],count=0,i=0;
    printf("Enter number in decimal form to count set bits:");
    scanf("%d", &num);
    if(num==0){
        printf("ZERO set bits:)");
    }
    while(num>0){
        binary[i]=num%2;
        num=num/2;
        i++;
    }
    for(int j=i-1;j>=0;j--){
        if(binary[j]==1){
            count++;
        }
    }
    printf("There are %d set bits.", count);
    return 0;
}