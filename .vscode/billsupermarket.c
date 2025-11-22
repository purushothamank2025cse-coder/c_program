#include<stdio.h>
char n[25];
int orderID,bookchoice,quantity;
//global declaration
int main()
{
    int choice;
    float total;
    do
    {
        printf("Online Bookshop\n1.Place order\n2.apply discount\n3.display bill\n4.exit\nenter your choice:");
        scanf("%d",&choice);
   switch(choice)
   {
  case 1:
  input();
  total=placeOrder(bookchoice,quantity);
  printf("\nOrder Placed successful=%f",total);
  break;
  case 2:
  total=applyDiscount(total);
  printf("Total after discount");
  break;
  case 3:
  display(total);
  break;
  case 4:
  printf("\n exit");
  break;
  default:
  printf("\nInvalid Choice");

   }
     
    } while (choice!=4); 
}
void input()
{
    int orderID,bookchoice,quantity;
   printf("enter customer name and order ID:");
   scanf("%s%d",&n,&orderID);
   printf("\n1.C Programming($300 each)\n2.Data Structures($450 each)\n3.Algorithms ($500 each)\nselected book and quantity:");
   scanf("%d%d",&bookchoice,&quantity);
}
float placeOrder(int bookchoice,int quantity)
{
     printf("");
}



















