#include<stdio.h>
int main()
{
    int k=5,step=1;
for(int i=0;i<3;i++)
{
  for(int j=0;j<3;j++)
  {
    printf("%d\t",k+i*step+j*step);
    
  }
  
  printf("\n");

}
return 0;
}