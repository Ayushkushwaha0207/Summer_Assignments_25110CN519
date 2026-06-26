//Write a program to Create library management system.
#include<stdio.h>
struct Book{
    int id;
    char title[50];
    char author[50];
};
int main(){
    int n;
    printf("Enter number of books: ");
    scanf("%d",&n);
    struct Book books[n];
    for(int i=0;i<n;i++){
        printf("Enter details of Book %d\n",i+1);
        printf("Book ID:");
        scanf("%d",&books[i].id);
        printf("Title:");
        scanf("%s",books[i].title);
        printf("Author:");
        scanf("%s",books[i].author);
    }
    printf("Library Records\n");
    printf("ID\tTitle\tAuthor\n");
    for(int i=0;i<n;i++){
        printf("%d\t%s\t%s\n",
               books[i].id,
               books[i].title,
               books[i].author);
    }
    return 0;
}