#include<stdio.h>
int main()
{
    int n,min=0,max=0;
    printf("ENTER THR NUMBER OF ELEMENTS");
    scanf("%d",&n);
    int mark[n];
    printf("enter the elements");
    for(int i=0;i<n;++i)
    {

        scanf("%d",&mark[i]);
    }
    for(int i=0;i<n;++i)
    {

        printf("%d ",mark[i]);
    }
    max=mark[0];
    min=mark[0];
    for(int i=1;i<n;++i)
    {

        if(mark[i]>max)
        {

            max=mark[i];
        }
        if(mark[i]<min)
        {
            min=mark[i];
        }
    }
    printf("\n %d is min",min);
    printf("\n %d is max",max);



}