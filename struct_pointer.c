#include<stdio.h>
struct student
{
    int rollno;
    char name[20];
    char department[10];
};
int main(){
    struct student s,*sp;
    printf("\nEnter student deatails: ");
    scanf("%d %s %s",&s.rollno,s.name,s.department);
    sp=&s;
    printf("\n=========student details=======");
    printf("\nRollno: %d",sp->rollno);
    printf("\nName: %s",sp->name);
    printf("\nDepartment: %s",sp->department);
}