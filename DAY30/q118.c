//Write a program to Create mini library system.
#include<stdio.h>
int main(){
    int n,i;
    int id[50];
    char title[50][100];
    char author[50][100];
    printf("Enter number of books:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter details of Book %d\n",i+1);
        printf("Book ID:");
        scanf("%d",&id[i]);
        printf("Book Title:");
        scanf("%s",title[i]);
        printf("Author Name:");
        scanf("%s",author[i]);
    }
    printf("Library Records");
    printf("Book ID\tTitle\tAuthor\n");
    for(i=0;i<n;i++){
        printf("%d\t%s\t%s\n",id[i],title[i],author[i]);
    }
    return 0;
}