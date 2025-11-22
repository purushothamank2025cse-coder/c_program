#include<stdio.h>
int main()
{
    int a=9;
    int* p;
    p=&a;
    int *ptr;
    ptr=&p;
    printf(" value at address: %d\n",*p);
    printf(" address of pointer: %d\n",p);
    printf(" value at address: %d\n",*ptr);
    printf(" address of pointer: %d\n",ptr);
    int 
}