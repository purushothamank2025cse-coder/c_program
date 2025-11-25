#include<stdio.h>
struct student
{
    int id;
    char name[20];
    char address[50];

}s[2];
int main()
{
   for(int i=0;i<2;i++)
   {printf("enter id,name,address");
    scanf("%d",&s[i].id);
    scanf("%s",s[i].name);
    scanf("%s",s[i].address);
    printf("ID: %d\n",s[i].id);
    printf("NAME: %s\n",s[i].name);
    printf("ADDRESS: %s\n",s[i].address);
   }
}