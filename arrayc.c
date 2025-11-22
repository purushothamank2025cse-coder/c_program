#include<stdio.h>
int main()
{
   int a[(5+5)/2]={1,2,3,4,5};//a[3*2]also correct a[x] not possible;int n;a[n] not correct;#define n 5;a[n];this is correct;
   printf("%d\t%d\t%d\t%d\t%d\t",a[0],a[1],a[2],a[3],a[4]);
   return 0;
}