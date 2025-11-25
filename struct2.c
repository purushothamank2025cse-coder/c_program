#include<stdio.h>
void getdetails();
void display();
struct Student
{
    int rollno;
	char name[20];
	char department[10];
	float cgpa;
}s1;

int main()
{
    //struct Student s1;
    getdetails();
    display();
}
void getdetails()
{
    printf("\nEnter the Students Details:");
    printf("\nEnter rollno:");
    scanf("%d",&s1.rollno);
    printf("\n Enter name:");
    scanf("%s",&s1.name);
    printf("\n Enter department:");
    scanf("%s",&s1.department);
    printf("\n Enter CGPA");
    scanf("%f",&s1.cgpa);
}

void display()
{
     printf("\n Student Details");
    printf("\n Rollno=%d",s1.rollno);
    printf("\n Name=%s",s1.name);
    printf("\n Department=%s",s1.department);
    printf("\n CGPA=%.2f",s1.cgpa);
}