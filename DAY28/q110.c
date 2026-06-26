//Write a program to Create bank account system.
#include<stdio.h>
struct BankAccount{
    int accountNumber;
    char name[50];
    float balance;
};
int main(){
    struct BankAccount acc;
    int choice;
    float amount;
    printf("Enter Account Number:");
    scanf("%d",&acc.accountNumber);
    printf("Enter Account Holder Name:");
    scanf("%s",acc.name);
    acc.balance=0;
    do{
        printf("\n--- BANK ACCOUNT SYSTEM ---\n");
        printf("1.Deposit\n");
        printf("2.Withdraw\n");
        printf("3.Check Balance\n");
        printf("4.Account Details\n");
        printf("5.Exit\n");
        printf("Enter your choice:");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                printf("Enter amount to deposit:");
                scanf("%f",&amount);
                acc.balance+=amount;
                printf("Deposit Successful\n");
                break;
            case 2:
                printf("Enter amount to withdraw:");
                scanf("%f",&amount);
                if(amount<=acc.balance){
                    acc.balance-=amount;
                    printf("Withdrawal Successful\n");
                }else{
                    printf("Insufficient Balance\n");
                }
                break;
            case 3:
                printf("Current Balance:%.2f\n",acc.balance);
                break;
            case 4:
                printf("\nAccount Number:%d\n",acc.accountNumber);
                printf("Account Holder:%s\n",acc.name);
                printf("Balance:%.2f\n",acc.balance);
                break;
            case 5:
                printf("Thank You for Banking With Us\n");
                break;
            default:
                printf("Invalid Choice\n");
        }
    }while(choice!=5);
    return 0;
}