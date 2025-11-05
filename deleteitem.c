#include<stdio.h>
#include"grocery.h"
void deleteitem()
{
    int i,delid,found=0;
    FILE *p2,*p1;
    struct grocery s;
    p2=fopen("Deletesoldproduct.txt","w");
    p1=fopen("stock.txt","r");
    printf("Enter product ID that has been sold");
    scanf("%d",&delid);
    getchar();
    fprintf(p2,"ID\tName\tPrice\tQuantity\n");
        fprintf(p2,"------------------------------\n");
    char temp[100];
    fgets(temp, sizeof(temp), p1); // remove heading
    fgets(temp, sizeof(temp), p1); //removeheading
    
    while(fscanf(p1 ,"%d\t%s\t%d\t%d", &s.id,s.name,&s.price,&s.quantity)==4)
    {
        if(delid!=s.id)
        {
            
            fprintf(p2, "%d\t%s\t%d\t%d\n" ,s.id,s.name,s.price,s.quantity);
        }
        else
        found=1;
    }
    if(found)
    printf("Item deleted from stock succesfully");
    else
    printf("Item is not found in the stock\n");
    fclose(p1);
    fclose(p2);
    remove("stock.txt");  // delete the old stock file
rename("Deletesoldproduct.txt", "stock.txt"); 

}