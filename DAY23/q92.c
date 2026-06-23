//Write a program to Find maximum occurring character.
#include<stdio.h>
int main(){
    char str[1000];
    fgets(str,sizeof(str),stdin);
    int freq[256]={0};
    for(int i=0;str[i]!='\0';i++){
        freq[(unsigned char)str[i]]++;
    }
    int maxFreq=0;
    char maxChar;
    for(int i=0;str[i]!='\0';i++){
        if(freq[(unsigned char)str[i]]>maxFreq){
            maxFreq=freq[(unsigned char)str[i]];
            maxChar=str[i];
        }
    }
    printf("%c\n",maxChar);
    return 0;
}