#include<stdio.h>
int main()
{
    char name[20];
    int marks[5];
    int total=0,i;
    float average;
    printf("enter name:");
    fgets(name,sizeof(name),stdin);
    for(i=0;i<5;i++)
    {
       printf("subject %d:",i+1);
       scanf("%d",&marks[i]);
       total+=marks[i];

    }
    printf("%s",name);
  
    return 0;
}