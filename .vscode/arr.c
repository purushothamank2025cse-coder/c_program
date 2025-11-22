// #include<stdio.h>
// int main()
// {
// int arr[5],i=0;
// while(i<5)
// {
//     arr[i]=++i;
// }
// for(int i=0;i<5;i++)
// {
//     printf("%d\n",arr[i]);
 
// }


// }
//i have to serch an element in array;if not return index position where could be placed
#include<stdio.h>
int main()
{
  int arr[]={1,3,4,5,6},target=2;
  for(int i=0;i<5;i++)
  {
     if(arr[i]!=2)
     arr[1]=2;

     printf("arr[%d]=%d\n",i,arr[i]);
  
     
  }
 for( int i=1;i<=5;i++)
  printf("%d \n",arr[i]);

}