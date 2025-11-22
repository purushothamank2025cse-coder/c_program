#include<stdio.h>

int main(){
    int a,b,c,d ;
    printf("please enter:");
    scanf("%d",&a);
    if(a<1000);
    {
        printf("No dis");
    }
    else if(a>=1000 && a<=5000)
    {
         b = 0.95 * a;
        printf("%d",b);
    }
    else if(a >= 5001 && a<=10000){

          c = 0.90 * a;
           printf("%d",c);
        
    }
    else if(a>10000){

          d = 0.85 * a;
           printf("%d",d);
        
    }
    else if(c || d  > 8000){
        printf("free gift");
        
    }
    else if (a || b || c || d % 2 == 0 )
    {
        printf("lucky coup")
 `
    }
    

    else{
        printf("no applicate")
    }
    (c || d > 10000)?printf("vip"):printf("regular");

    return 0;
}