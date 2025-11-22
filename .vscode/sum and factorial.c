#include<stdio.h>
int main()
{
   int i,number,sum,fact;
   sum=0,fact=1;
   printf("Enter a number:");
   scanf("%d",&number);
   for(i=1;i<=number;i++)
   {
       sum=sum+i;
       fact=fact*i;
   }
   printf("\nsum=%d\nfactorial=%d",sum,fact);
   return 0;
}
