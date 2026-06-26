//Write a program to Create ATM simulation. 
#include<stdio.h>
int main(){
    int pin=1234,enteredPin;
    int choice;
    float balance=10000,amount;
    printf("Enter PIN:");
    scanf("%d",&enteredPin);
    if(enteredPin!=pin){
        printf("Invalid PIN\n");
        return 0;
    }
    do{
        printf("\n1.Check Balance\n");
        printf("2.Deposit Money\n");
        printf("3.Withdraw Money\n");
        printf("4.Exit\n");
        printf("Enter choice:");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                printf("Balance: %.2f\n",balance);
                break;
            case 2:
                printf("Enter amount to deposit:");
                scanf("%f",&amount);
                balance+=amount;
                printf("Deposit successful.\n");
                break;
            case 3:
                printf("Enter amount to withdraw:");
                scanf("%f",&amount);
                if(amount<=balance){
                    balance=balance-amount;
                    printf("Withdrawal successful.\n");
                }else{
                    printf("Insufficient balance.\n");
                }
                break;
            case 4:
                printf("Thank you for using ATM.\n");
                break;
            default:
                printf("Invalid choice.\n");
        }
    }while(choice!=4);
    return 0;
}