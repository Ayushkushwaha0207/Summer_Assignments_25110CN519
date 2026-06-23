//Write a program to Find first repeating character.
#include<stdio.h>
int main(){
    char str[1000];
    fgets(str,sizeof(str),stdin);
    int freq[256]={0};
    for(int i=0;str[i]!='\0';i++){
        freq[(unsigned char)str[i]]++;
        if(freq[(unsigned char)str[i]]==2){
            printf("%c\n",str[i]);
            return 0;
        }
    }
    printf("No repeating character\n");
    return 0;
}