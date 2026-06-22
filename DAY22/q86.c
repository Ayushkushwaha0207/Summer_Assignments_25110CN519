//Write a program to Count words in a sentence.
#include<stdio.h>
#include<stdbool.h>
int countWords(char str[]){
    int count=0;
    bool inWord=false;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]==' '||str[i]=='\t'||str[i]=='\n'){
            inWord=false;
        }
        else if(!inWord){
            inWord=true;
            count++;
        }
    }
    return count;
}
int main(){
    char sentence[100];
    printf("Enter a sentence to check:");
    fgets(sentence,sizeof(sentence),stdin);
    int words=countWords(sentence);
    printf("Number of words: %d\n",words);
    return 0;
}