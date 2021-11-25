#include"stdio.h"
struct student
{
   int no;
   char name[50];
   int sem;
   float CPI;
};
void main()
{
    int i;
    struct student s[5];
   for(i=1;i<=5;i++)
   {
    printf("\t %d student\n ",i);
    printf("\nEnter Enrollment no.:");
    scanf("%d",&s[i].no);
    printf("\nEnter Name:");
    scanf(" \%s",&s[i].name);
    printf("\nEnter Semester:");
    scanf("%d",&s[i].sem);
    printf("\nEnter CPI:");
    scanf("%f",&s[i].CPI);
   }
   for(i=1;i<=5;i++)
   {
       printf("\n\t** %d  STUDENT DETAILS **\n",i);

    printf("\nEnrollment no.: %d",s[i].no);
    printf("\nNAME : %s",s[i].name);
    printf("\nSemester : %d",s[i].sem);
    printf("\nCPI : %.2f",s[i].CPI);
   }
}

