 //Write a program to Create ticket booking system.
#include<stdio.h>
int main(){
    char name[50];
    int tickets;
    float price=250.0,total;
    printf("Enter Customer Name:");
    scanf("%s",name);
    printf("Enter Number of Tickets:");
    scanf("%d",&tickets);
    total=tickets*price;
    printf("\n----- TICKET DETAILS -----\n");
    printf("Customer Name.: %s\n", name);
    printf("Tickets Booked: %d\n", tickets);
    printf("Price/Ticket..: %.2f\n", price);
    printf("Total Amount..: %.2f\n", total);
    printf("Booking Successful\n");
    return 0;
}