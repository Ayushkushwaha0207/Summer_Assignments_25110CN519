//Write a program to Create menu-driven array operations system.
#include<stdio.h>
int main(){
    int arr[100],n,choice,i,pos,value;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("Enter %d elements:",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    do{
        printf("Menu Driven Array Operations");
        printf("1.Display Array\n");
        printf("2.Insert Element\n");
        printf("3.Delete Element\n");
        printf("4.Search Element\n");
        printf("5.Exit\n");
        printf("Enter your choice:");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                printf("Array:");
                for(i=0;i<n;i++){
                    printf("%d ",arr[i]);
                }
                printf("\n");
                break;
            case 2:
                printf("Enter position (1-%d): ", n + 1);
                scanf("%d",&pos);
                printf("Enter value:");
                scanf("%d",&value);
                if(pos<1||pos>n+1){
                    printf("Invalid position.");
                }else{
                    for(i=n;i>=pos;i--){
                        arr[i]=arr[i-1];
                    }
                    arr[pos-1]=value;
                    n++;
                    printf("Element inserted.");
                }
                break;
            case 3:
                printf("Enter position to delete (1-%d):",n);
                scanf("%d",&pos);
                if(pos<1||pos>n){
                    printf("Invalid position.");
                }else{
                    for(i=pos-1;i<n-1;i++){
                        arr[i]=arr[i+1];
                    }
                    n--;
                    printf("Element deleted.");
                }
                break;
            case 4:
                printf("Enter element to search:");
                scanf("%d",&value);
                for(i=0;i<n;i++){
                    if(arr[i]==value){
                        printf("Element found at position %d.\n",i+1);
                        break;
                    }
                }
                if(i==n){
                    printf("Element not found.\n");
                }
                break;
            case 5:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice.\n");
        }
    }while(choice!=5);
    return 0;
}