#include<stdio.h>
#include"grocery.h"
#include<string.h>
void buyitem()
{
    FILE *p=fopen("stock.txt","r");
    struct grocery s;
    char name[50];
    int qty,i;
    float total=0;
    char choice;
    do
    {
        printf("Enter item name");
        scanf("%s",name);
        printf("Enter quantity");
        scanf("%d",&qty);
        int found=0;
        rewind(p);
        char temp[100];
    fgets(temp, sizeof(temp), p); // remove heading
    fgets(temp, sizeof(temp), p); //removeheading
    while(fscanf(p,"%d\t%s\t%d\t%d",&s.id,s.name,&s.price,&s.quantity)==4)
        {
            if(strcmp((s.name),name)==0)
            {
                found=1;
                if(s.quantity>=qty)
                {
                    float cost=s.price*qty;
                    total=total+cost;
                   s.quantity-=qty;
                    printf("%s*%d=%.2frupees\n",name,qty,cost);
                }
                else{
                    printf("Not enough for stock for%s.Available %d\n",name,s.quantity);
                }
                break;
            }
        }
            
        
        if(!found)
        {
            printf("Item not foundd\n");
        }
        printf("want to buy more items?\n");
        scanf(" %c",&choice);
    }while(choice=='y'||choice=='Y');

   
        printf("\nTotal bill is Rupees %.2f\n",total);
        fclose(p);
                }
            
            