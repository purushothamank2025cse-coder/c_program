#include<stdio.h>
int main()
{
    int inst,sal,time,bal;
    float rate;
   sal=40000,time=1,rate=0.1, inst=sal*rate*time;
    sal=sal+inst ;
    printf("salary balance after one year:%d",sal);
   return 0;
}
