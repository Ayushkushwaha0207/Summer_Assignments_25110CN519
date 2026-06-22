//Write a program to Remove spaces from string.
#include<stdio.h>
void removeSpaces(char str[]){
    int i=0;
    int j=0;
    while(str[i]!='\0'){
        if(str[i]!=' '){
            str[j]=str[i];
            j++;
        }
        i++;
    }
    str[j]='\0';
}
int main(){
    char text[]="H e l l o   W o r l d !  ";
    printf("Original: \"%s\"\n", text);
    removeSpaces(text);
    printf("Result:\"%s\"\n", text);
    return 0;
}