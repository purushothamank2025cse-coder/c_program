#include<stdio.h>
int main()
{
  int n,fact=1 ,num;
   printf("Enter a number:");
   scanf("%d",&n);
   num=n;
while(n>0)
{
    fact=fact*n;
    n--;
}
printf("\nfactorial of %d is %d",num,fact);
return 0;
}
/*include<stdio.h>

int main(){

int fact=1, number, 1-1;

printf("Enter a number:\n");

scanf("%d", &number);

do
{

fact=fact 1;// fact=1*1 1++;//2

}while(1<=number);//2<=5

printf("Factorial =%d", fact);
return 0}*/
