#include<stdio.h>
#include<string.h>
void reverse(char*,int ,int );
int main()
{
    char s[100];
    int start=0;
    scanf("%[^\n]",&s);
    printf("before swaping:%s\n",s);
    int end=strlen(s)-1;
      reverse(s,start,end);
}
void reverse(char *s,int start,int end)
{
    
while(start<end)
    {
        char temp=s[start];
        s[start]=s[end];
        s[end]=temp;
        start++;
        end--;
    }
    printf("Using function swap :%s",s);
    
}

