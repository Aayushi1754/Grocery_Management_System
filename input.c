#include<stdio.h>
#include "grocery.h"
void inputitem()
{
    int i;
    FILE *p1;
    struct grocery g [10];
    p1=fopen("stock.txt","w");
  
    fprintf(p1,"ID\tName\tPrice\tQuantity\n");
    fprintf(p1,"------------------------------\n");
    for(i=0;i<10;i++)
    {
        printf("Enter Product id");
        scanf("%d",&g[i].id);
        printf("Enter Product name");
        scanf("%s",g[i].name);
        printf("Enter Product price");
        scanf("%d",&g[i].price);
        printf("Enter Product quantity");
        scanf("%d",&g[i].quantity);
    
    fprintf(p1,"%d\t%s\t%d\t%d\n",g[i].id,g[i].name,g[i].price,g[i].quantity);
    }fclose(p1);
    printf("Items added successfully");
}
