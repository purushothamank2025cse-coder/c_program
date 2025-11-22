#include<stdio.h>
int main()
{
    int n,remainder,sum;
    sum=0;
    printf("Enter a number:");
    scanf("%d",&n);

    while(n>0)
    {
        remainder=n%10;
        sum=sum*10+remainder;
        n=n/10;

    }
    printf("\nreverse of that no:%d",sum);

    return 0;
}
