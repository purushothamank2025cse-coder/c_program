#include<stdio.h>
int main()

{
  int i,n,sum=0;
  printf("enter the n value:");
  scanf("%d",&n);
  for(i=1;i<=n;i=i+2)
  {
      sum=sum+i;
  }
  printf("\nodd sum=%d",sum);
  sum=0;
  for(i=0;i<=n;i=i+2)
  {
      sum=sum+i;

  }
  printf("\neven sum=%d",sum);
  return 0;
}
