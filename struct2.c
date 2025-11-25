#include<stdio.h>

  void getdetails();
  void details();

struct student
{
    int roll;
    char name[20];
    char dept[20];
    float cgpa;
}s1;

int main()
{
  getdetails();
  details();
}

void getdetails()
{

    printf("\nEnter Your Name:");
    scanf(" %s",s1.name);
    printf("\nEnter Your Roll Num:");
    scanf(" %d",&s1.roll);
    printf("\nEnter Your Dept:");
    scanf(" %s",s1.dept);
    printf("\nEnter Your CGPA:");
    scanf(" %f",&s1.cgpa);
}

void details()
{   printf("===Student Details===\n");
    printf("\nName:%s",s1.name);
    printf("\nRoll Num:%d",s1.roll);
    printf("\nDept:%s",s1.dept);
    printf("\nCGPA:%.2f",s1.cgpa);
}
