//Write a program to Check palindrome string. 
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdbool.h>
bool isPalindrome(char str[]){
    int left=0;
    int right=strlen(str)-1;
    while(left<right){
        if(tolower(str[left])!=tolower(str[right])){
            return false;
        }
        left++;
        right--;
    }
    return true;
}
int main(){
    char testString[100];
    printf("Enter to check:");
    scanf("%s",&testString);
    //char testString[]="Radar";
    if(isPalindrome(testString)){
        printf("'%s' is a palindrome.\n",testString);
    }else{
        printf("'%s' is not a palindrome.\n", testString);
    }
    return 0;
}