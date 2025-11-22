#include<stdio.h>
#include<string.h>
void printnamaste();
void printbonjour();
int main()
{
    char country[100];
    printf("Enter the country");
    scanf("%s",&country);
    if(strcmp(country, "india") ==0)
    printnamaste();
    else
    printbonjour();

}
void printnamaste()
{
    printf("Namaste\nUser is indian");
}
void printbonjour()
{
    printf("Bonjour\n");
    printf("User is french");
}
