//Write a program to Check Armstrong number. 
#include<stdio.h>
#include<math.h>
int main(){
    int num,a,originalnum,p,count=0,sum=0;
    printf("Enter the number to check armstrong number or not:");
    scanf("%d", &num);
    originalnum=num;
    a=num;                  //Copying number so that numbber remains safe.
    while(a!=0){
        count++;
        a=a/10;
    }
    a=num;
    while(a!=0){            
        p=a%10;
        sum+=(int)pow(p,count);
        a=a/10;
      //  printf("%d ",sum);
    }
    if(num==0){
        count=1;
    }
    if(sum==originalnum){
        printf("%d is an armstrong number.", originalnum);
    }else{
        printf("%d is not an armstrong number.", originalnum);
    }
    return 0;
}