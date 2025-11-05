#include<stdio.h>
#include"grocery.h"
void stockitem()
{
    int i;
    FILE *p1;
    p1=fopen("Stock.txt","r");
    struct grocery s;
    char buffer[100]; 
    fgets(buffer, sizeof(buffer), p1); //to remove first line 
    fgets(buffer, sizeof(buffer), p1);//to remove 2nd line
    printf("\n---INVENTORY---\n");   
    printf("ID\tNAME\tPRICE\tQUANTITY\n"); 
    while(fscanf(p1,"%d\t%s\t%d\t%d",&s.id,s.name,&s.price,&s.quantity)!=EOF)
    {
        printf("%d\t%s\t%d\t%d\n",s.id,s.name,s.price,s.quantity);
    }

    fclose(p1);
}