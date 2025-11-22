#include<stdio.h>
#include<string.h>
int main()
{
    char w[100];
    int length,l=0,i=0;
    printf("enter a string: ");
    gets(w);
    length=strlen(w);
    printf("Length=%d\n",length);

while(w[i]!='\0')
{
  l++;
  i++;
}
printf("length=%d",l);
}