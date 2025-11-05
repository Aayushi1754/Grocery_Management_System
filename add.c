#include<stdio.h>
#include"grocery.h"
void additem()
{
    char choice;
    do
    {
    int count = 0, addid, addprice, addquantity;
    int idexist = 0;
    char addname[50];
    struct grocery s;

    FILE *p1;
    p1 = fopen("stock.txt", "r");
     printf("Enter ID to be inputted: ");
    scanf("%d", &addid);

    char temp[100];
    fgets(temp, sizeof(temp), p1); // remove heading
    fgets(temp, sizeof(temp), p1); //removeheading

    while (fscanf(p1, "%d\t%s\t%d\t%d", &s.id, s.name, &s.price, &s.quantity) == 4) {
        count++;
if (s.id == addid) {
            printf("ID already exists.\n");
            fclose(p1);
            return; 
        }
    }
    fclose(p1);

    if (count >= 10) {
        printf("Stock full.\n");
        return;
    }

    printf("Enter product name: ");
    scanf("%s", addname);
    printf("Enter product price: ");
    scanf("%d", &addprice);
    printf("Enter product quantity: ");
    scanf("%d", &addquantity);

    p1 = fopen("stock.txt", "a");
    fprintf(p1, "%d\t%s\t%d\t%d\n", addid, addname, addprice, addquantity);
    fclose(p1);

    printf("Item is added successfully.");
    printf("Do you want more items?\n");
    scanf(" %c",&choice);
}while(choice=='y'||choice=='Y');
}
