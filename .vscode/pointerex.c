#include<stdio.h>
int main()
{
//     int a=75;
//     int *p1= NULL,**p2;
//     p1=&a;
//     p2=&p1;

//   printf("value at p1:%d",*p1);
//   printf("\nvalue at p2:%d",p2);
int *p1=(int *)malloc(sizeof(int));
 printf("\naddress of p1:%u",&p1);
 printf("\nvalue of p1:%u",p1);
 p1--;
 printf("\nvlue of p1 after decrement:%u",p1);
 p1=p1-6;
 printf("\nvlue of p1 =p1-6:%u",p1);
 free(p1);
 printf("\n%d",p1);

  return 0;
}