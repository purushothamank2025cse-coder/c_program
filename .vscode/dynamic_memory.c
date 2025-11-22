#include<stdio.h>
#include<stdlib.h>
int main()
{
  int size,i=0;
  int *ptr;
  printf("\nEnter the size: ");
  scanf("%d",&size);
  ptr=(int *)calloc(size,sizeof(int ));//malloc(size*sizeof(int ));

if(ptr==NULL)
{
   printf(" memory Not allocated");

}
else 
{
    printf("\nMemory allocated");
    printf("\n Enter Elements: ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",ptr+i);
    }
    printf("\n Elements:");
    for(int i=0;i<size;i++)
    {
        printf("%d\t",ptr[i]);
    }
}


  }
