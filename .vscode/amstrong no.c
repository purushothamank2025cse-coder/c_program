#include<stdio.h>
#include<math.h>
int main()
{
    int inum1,length=0,temp,sum=0,digit;
    printf("Enter a number:");
    scanf("%d",&inum1);
    temp=inum1;
    while(inum1!=0)
    {
        inum1=inum1/10;
        length++;
    }
    inum1=temp;
   // printf("%d",length);
    while(temp!=0)
    {
        digit=temp%10;
        sum=sum+pow(digit,length);
        temp=temp/10;
       // printf("%d",sum);
    }
  //  printf("\n%d %d",sum,inum1);
    if(sum==inum1)
        printf("\nAmstrong number");
    else
        printf("\nNot a amstrong number ");
    return 0;
}
