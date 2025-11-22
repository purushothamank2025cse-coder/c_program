#include<stdio.h>
int main()
{
   int mark[10],size,sum=0;
   printf("enter the size:");
   scanf("%d",&size);
   printf("enter the %d array elements:\n",size);
   for(int i=0;i<size;i++)
   {
    scanf("%d",&mark[i]);
    sum=sum+mark[i];
   }
   for(int i=0;i<size;i++)
   {
    printf("mark[%d]:%d\n",i,mark[i]);
   }
   printf("%d",sum);
   
  return 0;
}