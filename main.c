#include<stdio.h>
#include<string.h>
#include"grocery.h"
int itemcount=0;
char conchoice;
int main()
{
    char *username="Aayushi";
    char *password="TCSproject";
    char u[50];
    char p[50];
    
    printf("Enter username");
    scanf("%s",u);
    printf("Enter password");
    scanf("%s",p);
    if((strcmpi(username,u)!=0)||(strcmp(password,p)!=0))
    {
        printf("Invalid username or password");
    }
    else{
    do
    {
        int choice;
    printf("\n---GROCERY MANAGAEMENT---\n");
    printf("1.Input items\n");
    printf("2.Display stock\n");
    printf("3.Add new item and update\n");
    printf("4.Delete item \n");
    printf("5.Checkavailabiltity\n");
    printf("6.bill\n");
    printf("7.Exit\n");
    printf("Enter your choice");
    scanf("%d",&choice);
    getchar();
    
    switch(choice)
    {
        case 1:
        inputitem();
        break;
        case 2:
        stockitem();
        break;
        case 3:
        additem();
        break;
        case 4:
        deleteitem();
        break;
        case 5:
        available();
        break;
        case 6:
        buyitem();
        break;
        case 7:
        printf("Exiting the program");
        return 0;
        default:
        printf("Invalid choice");
    }
    printf("DO you want to perfrom another task? ");
    scanf(" %c",&conchoice);
    }while(conchoice=='y'||conchoice=='Y');

    printf("Thankyou.EXiting the program/n");
return 0;
}
}
