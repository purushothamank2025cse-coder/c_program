#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    getchar();
    char array[N];
    for(int i=0;i<N;i++)
    {
        scanf("%c",&array[i]);
    }
    for(int i=N;i>=0;i--)
    {
        printf("%c",array[i]);

    }

}