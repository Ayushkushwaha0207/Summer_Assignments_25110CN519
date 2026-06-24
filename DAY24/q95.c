//Write a program to Find longest word.
#include<stdio.h>
#include<string.h>
int main(){
    char str[200],longest[200];
    int i=0,j=0,maxLen=0,len=0;
    char word[200];
    fgets(str,sizeof(str),stdin);
    while(1){
        if(str[i]!=' '&&str[i]!='\0'&&str[i]!='\n'){
            word[j++]=str[i];
            len++;
        }else{
            word[j]='\0';
            if(len>maxLen){
                maxLen=len;
                strcpy(longest,word);
            }
            j=0;
            len=0;
            if(str[i]=='\0'||str[i]=='\n'){
                break;
            }
        }
        i++;
    }
    printf("%s", longest);
    return 0;
}