#include<stdio.h>
#include<stdlib.h>
int main()
{  char s[100];
    char data[100]="Welcome to problem solving using c session";
    FILE *fp;
      
    fp=fopen("iput.txt","w");

    if(fp==NULL)
    {
        printf("\nFile does not exist");
    }
    else{
        scanf("%s",s);
        printf("\nFile opened successfully");
        fputs(data,fp);//to put string values into the function;
        fputs("\n",fp);
          fseek(fp,0,SEEK_SET);
    //     fputs(s,fp);
    //    //both runs similar
         fprintf(fp,"%s",s);
  
        fputs("\n",fp);
    }
  fclose(fp);
    return 0;
}