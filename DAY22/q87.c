//Write a program to Character frequency.
#include<stdio.h>
#include<string.h>
void countCharacterFrequency(char str[]){
    int freq[256]={0};
    for(int i=0;str[i]!='\0';i++){
        unsigned char index=str[i];
        freq[index]++;
    }
    printf("Character Frequencies:\n");
    for(int i=0;i<256;i++){
        if(freq[i]>0){
            if(i>=32&&i<=126){
                printf("'%c':%d\n",i,freq[i]);
            }else{
                printf("ASCII %d:%d\n",i,freq[i]);
            }
        }
    }
}
int main(){
    char text[100];
    printf("Enter string to check frequency:");
    //scanf("%s", text);
    fgets(text,sizeof(text),stdin);
    printf("String:\"%s\"\n",text);
    countCharacterFrequency(text);
    return 0;
}