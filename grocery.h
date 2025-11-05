#ifndef GROCERY_H
#define GROCERY_H
extern int itemcount;
struct grocery
{
    int id;
    char name[50];
    int price;
    int quantity;
};

void inputitem();
void stockitem();
void additem();
void deleteitem();
void available();
void buyitem();
#endif

// 
//  gcc -o GroceryApp Main.c input.c Display.c Add.c Deleteitem.c checkavailabiltiy.c buybill.c