// #include<stdio.h>
// void addition();
// //function definition
// void addition()
// {
//    int x=5,y=10;
//     printf("sum:%d",x+y);
// }
// int main()
// {
//     addition();
//     return 0;
// }/
//  #include<stdio.h>
//  void addition(int,int,int);
//  int main()
//  {
//     int x,y,z;
//     printf("enter the three numbers");
//     scanf("%d%d%d",&x,&y,&z);
//      addition(x,y,z);
//      return 0;
//  }
// void addition(int a,int b,int c)
// {
//          printf("adddition:%d",a+b+c);
//  }
 #include<stdio.h>
 int addition(int,int,int);
 int main()
 {
    int x,y,z;
    printf("enter the three numbers");
    scanf("%d%d%d",&x,&y,&z);
     addition(x,y,z);
     return 0;
 }
 addition(int a,int b,int c)
{
         printf("adddition:%d",a+b+c);
 }