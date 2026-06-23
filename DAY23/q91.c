//Write a program to Check anagram strings. 
#include<stdio.h>
int main(){
    char str1[1000], str2[1000];
    scanf("%s",str1);
    scanf("%s",str2);
    int freq[256]={0};
    for(int i=0;str1[i]!='\0';i++){
        freq[(unsigned char)str1[i]]++;
    }
    for(int i=0;str2[i]!='\0';i++){
        freq[(unsigned char)str2[i]]--;
    }
    int isAnagram=1;
    for(int i=0;i<256;i++){
        if(freq[i]!=0){
            isAnagram=0;
            break;
        }
    }
    if(isAnagram){
        printf("Anagram\n");
    }else{
        printf("Not Anagram\n");
    }
    return 0;
}