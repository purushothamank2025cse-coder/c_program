#include<stdio.h>
float placeOrder(int choice,int qnt){
    printf("Order successfull\n");
    if(choice == 1 ) return qnt*300;
    else if(choice == 2) return qnt*450;
    else return qnt*500;
}
float applydiscount(float totalbill){
    printf("discount applied successfully\n");
    if(totalbill<=1000) return totalbill;
    float discount = totalbill*0.15;
    return totalbill - discount;
}
void display(float totalbill){
    printf("Final Bill is : %.2f\n",totalbill);
}
int main(){
    float totalbill = 0;
    while(1){
         printf("1 - place Order\n");
        printf("2 - Apply discount\n");
        printf("3 - Display Bill\n");
         printf("4 - exit\n");
         int option;
        scanf("%d",&option);
        if(option == 4) break;
        if(option == 1) {
             printf("Available books :\n");
        printf("1-C programing (300 each)\n");
        printf("2-Data Structures (450 each)\n");
        printf("3-Algorithms (500 each)\n\n");
        printf("Select an book : ");
        int choice;
        scanf("%d",&choice);
         printf("Enter qnt :");
        int qnt;
        scanf("%d",&qnt);
            totalbill+=placeOrder(choice,qnt);}
        else if(option==2) totalbill=applydiscount(totalbill);
        else if(option == 3) display(totalbill);
    }
   
    return 0;
}