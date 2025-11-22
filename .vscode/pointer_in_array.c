#include<stdio.h>
int main()
{
    int i,j;
    int mark[2][2]={{1,2},{3,4}};
    for(int i=0;i<2;i++)
    {
         for(int j=0;j<2;j++)
         {
            printf("num[%d][%d]=%d\n",i,j,*(*(mark+i)+j));//pointer in array;
         }
            printf("\n");
    }
    for(int i=0;i<2;i++){
    for(int j=0;j<2;j++)
    {
        *(*(mark+i)+j)=mark[i][j]+100;

    }}
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("%d ",*(*(mark+i)+j));
        }
        printf("\n");
    }
}