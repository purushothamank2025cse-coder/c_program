#include<stdio.h>
int main()
{
    int i,j,n,k;
    printf("enter j value:");
    scanf("%d",&j);
    k=10;
    for(i=1;i<=k;i++)
    {
       n=i*j;
       printf("\n%d x %d = %d",i,j,n);
    }
    return 0;  
}