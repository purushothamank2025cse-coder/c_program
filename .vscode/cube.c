#include<stdio.h>
#include<math.h>
int main()
{
  int i,n,h;
  printf("enter value of n:");
  scanf("%d",&n);
  printf("\n\n");
  for(i=1;i<=n;i++)
  {
    h=(int)pow(i,3);
     printf("\n%d-%d",i,h);

  }
  return 0;
}
