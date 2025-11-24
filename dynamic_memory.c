#include<stdio.h>
int main(){
    int n;
   char *name;
   scanf("%d",&n);//pointer because malloc returns starting address so we store in pointer;
   name=malloc(n*sizeof(char));
   scanf("%[^\n]",name);
   printf("%s",name);
}