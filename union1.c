#include<stdio.h>
#include<string.h>
union student
{
    int rollno;
    char name[20];
    char department[10];
    float cgpa;
}s1;
int main()
{
   printf("Enter rollno: ");
   scanf("%d",&s1.rollno);
   printf("\nEnter name: ");
   scanf("%s",s1.name);
   printf("\nEnter department: ");
   scanf("%s",s1.department);
   printf("\nEnter the cgpa: ");
   scanf("%f",&s1.cgpa);

    printf("Rollno: %d\n",s1.rollno);
   printf("Name: %s\n",s1.name);
   printf("Department: %s\n",s1.department);
   printf("CGPA: %f",s1.cgpa);
}