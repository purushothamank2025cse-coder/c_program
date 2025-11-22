#include <stdio.h>
#include <string.h>

void input(char name[], int *id);
float bookTicket(int choice, int qty);
float applyOffer(float total);
void display(char name[], int id, int choice, int qty, float total);

int main() {
    char name[50];
    int id, choice, qty, op;
    float total = 0.0;

    printf("=== Movie Ticket Booking System ===\n");
    input(name, &id);

    do {
        printf("\nMenu:\n");
        printf("1. Book Ticket\n");
        printf("2. Apply Offer\n");
        printf("3. Display Bill\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &op);

        switch(op) {
            case 1:
                printf("\nMovies and Prices:\n");
                printf("1. Avengers (₹250)\n");
                printf("2. Inception (₹200)\n");
                printf("3. Toy Story (₹150)\n");
                printf("Enter movie choice: ");
                scanf("%d", &choice);
                printf("Enter number of tickets: ");
                scanf("%d", &qty);
                total = bookTicket(choice, qty);
                printf("Tickets booked successfully!\n");
                break;

            case 2:
                total = applyOffer(total);
                printf("Offer applied successfully!\n");
                break;

            case 3:
                display(name, id, choice, qty, total);
                break;

            case 4:
                printf("Thank you for using the system!\n");
                break;

            default:
                printf("Invalid option!\n");
        }
    } while(op != 4);

    return 0;
}

void input(char name[], int *id) {
    printf("Enter Customer Name: ");
    scanf("%s", name);
    printf("Enter Booking ID: ");
    scanf("%d", id);
}

float bookTicket(int choice, int qty) {
    float price = 0;
    switch(choice) {
        case 1: price = 250; break;
        case 2: price = 200; break;
        case 3: price = 150; break;
        default: printf("Invalid movie choice!\n"); return 0;
    }
    return price * qty;
}

float applyOffer(float total) {
    if(total > 800) {
        printf("Offer applied: 5%% discount on total!\n");
        total = total - (total * 0.05);
    } else {
        printf("No offer applicable (total less than ₹800)\n");
    }
    return total;
}

void display(char name[], int id, int choice, int qty, float total) {
    printf("\n=== Booking Details ===\n");
    printf("Customer Name : %s\n", name);
    printf("Booking ID    : %d\n", id);
    printf("Movie         : ");
    switch(choice) {
        case 1: printf("Avengers\n"); break;
        case 2: printf("Inception\n"); break;
        case 3: printf("Toy Story\n"); break;
        default: printf("Invalid\n");
    }
    printf("Tickets       : %d\n", qty);
    printf("Total Amount  : ₹%.2f\n", total);
    printf("========================\n");
}