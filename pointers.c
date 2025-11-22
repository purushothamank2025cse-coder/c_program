#include<stdio.h>
int main()
{
    int myage=18;
    int x=9;
    int *ptr;
    ptr=&myage;
    printf("value :%d\n",myage);
    printf("address: %u\n",&myage);
    printf("address: %u\n",&x);
    printf("address:%u\n",ptr);
    printf("value:%d\n",*ptr);

    int a=10,b=40;
    int *pa,*pb;
    pa=&a;
    pb=&b;
    printf("adding ptr:%d",*pa * *pb);
    return 0;
}