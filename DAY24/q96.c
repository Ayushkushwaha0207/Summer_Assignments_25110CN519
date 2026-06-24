//Write a program to Remove duplicate characters.
#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    int len=strlen(str);
    for(int i=0;i<len;i++){
        int duplicate=0;
        for(int j=0;j<i;j++){
            if(str[i]==str[j]){
                duplicate=1;
                break;
            }
        }
        if(!duplicate&&str[i]!='\n'){
            printf("%c", str[i]);
        }
    }
    return 0;
}