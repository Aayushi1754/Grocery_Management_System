#include<stdio.h>
#include<string.h>
#include"grocery.h"
void available()
{
    FILE *p;

    struct grocery s;
    char name[50];
    int i,found=0;
    
    printf("Enter item to check\n");
    scanf(" %s", name);
    p=fopen("stock.txt","r");
    char temp[100];
    fgets(temp, sizeof(temp), p); // remove heading
    fgets(temp, sizeof(temp), p); //removeheading
    while(fscanf(p,"%d\t%s\t%d\t%d",&s.id,s.name,&s.price,&s.quantity)==4)
    {
        if(_stricmp(s.name,name)==0)
    {
        printf("%s is available. Quantity:%d\n",name,s.quantity);
        found=1;
         break;
    }
}
if(!found)
printf("Item is not available\n");

fclose(p);
}

