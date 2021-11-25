#include"stdio.h"
struct employee
{
   int id;
   char name[50];
   char des[50];
   float salary;
};
void main()
{
    struct employee e;
    printf("Enter id:");
    scanf("%d",&e.id);
    printf("Enter Name:");
    scanf(" \%s",&e.name);
    printf("Enter Designation:");
    scanf(" \%s",&e.des);
    printf("Enter Salary:");
    scanf("%f",&e.salary);

    printf("\n\t** EMPLOYEE DETAILS **\n");

    printf("\nID : %d",e.id);
    printf("\nNAME : %s",e.name);
    printf("\nDESIGNATION : %s",e.des);
    printf("\nSALARY : %.2f",e.salary);
}
