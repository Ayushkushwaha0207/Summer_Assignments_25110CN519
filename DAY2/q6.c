#include<stdio.h>
int main(){
    int num, temp, rev=0 ;
    printf("Enter the number to reverse:");
    scanf("%d", &num);
    while(num!=0){
        temp=num%10;
        rev=rev*10+temp;
        num=num/10;
    }
    printf("The reverse of number is %d.", rev);
    return 0;
}