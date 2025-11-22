#include<stdio.h>
int main()
{
    int n,remainder,sum,p;
    sum=0;
     printf("Enter a number:");
    scanf("%d",&n);
    p=n;
    while(n>0)
    {
        remainder=n%10;
        sum=sum*10+remainder;
        n=n/10;

    }

    if(p==sum)
     printf("\n%d is palindrome",p);
    return 0;
}
