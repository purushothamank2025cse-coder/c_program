#include<stdio.h>
int main()
{
    int i,n,sum=0,count;
    float avg=0;
    printf("enter the n value:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("\n%d",i);
        sum=sum+i;
        count++;
    }
    printf("\nsum=%d",sum);
    printf("\navg=%d",sum/count);
    return 0;
}
