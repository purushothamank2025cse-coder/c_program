#include<stdio.h>
#include<math.h>
int main()
{
    int a,i,n;
    printf("enter any number:");
    scanf("%d",&a);
    int power=pow(a,3);
    printf("\ncube of %d is %d",a,power);
    printf("\nenter n value:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       printf("\ncube of %d is %d",i,i*i*i);
    }
    return 0;
}