#include<stdio.h>
int main()
{
    int n,rem,sum;
    sum=0;
    printf("Enter a number:");
    scanf("%d",&n);

    while(n>0)
    {
        rem=n%10;
        sum=sum+rem;
        n=n/10;

    }
    printf("\nsum of digits:%d",sum);

    return 0;
}
