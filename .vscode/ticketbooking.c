#include<stdio.h>
 int ticchoice,total=0,choice,id,notickets;
    char n[20];
void input()
{
   printf("enter the input ") ;
}
float bookTicket(int ticchoice, int qty)
{
   printf("1.Avengers ($250 each)\n2.Inception ($200 each)\n3.Toy Story($150 each)");
   printf("\nEnter Your Choice and no of tickets:");
   scanf("%d%d",&ticchoice,&notickets);
   ticchoice==1?total=250*notickets:ticchoice==2?total=200*notickets:total=150*notickets;
   
}
float applyOffer(float total)
{
   if(total>800)
   {
    total=total-total*0.20;
   }
}
void display(float total)
{
  
  ticchoice==1?printf("1.Avengers ($250 each)"):ticchoice==3?printf("3.Toy Story($150 each"):printf("2.Inception ($200 each)");
}

int main()
{
   
    printf("Enter your name:");
    scanf("%s",&n);
    printf("Enter your booking ID:");
    scanf("%d",&id);
     printf("1.Book Ticket\n2.Apply Offer\n3.Display Bill");
   printf("Enter your choice:");
   scanf("%d",&choice);
   
    if(choice==1)
    {
      float bookTicket(int ticchoice, int qty);
    }
    if(choice==2)
    {
      
    }
    if(choice==3)
    {

    }
    if(choice==4)
    {
       printf("exit from the program");
    }





    
}