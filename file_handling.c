#include<stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("data.txt","w");
    if(fp==NULL)
    {
        printf("no file is opened");
        fclose(fp);
    }
    else{
        printf("File Opened Successfully");
        fclose(fp);
      \
    }
      
}