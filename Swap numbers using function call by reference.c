#include"stdio.h"
void swap(int *,int *);
void main()
{
    int a,b;
    printf("Enter first number a: ");
    scanf("%d",&a);
    printf("Enter second number a: ");
    scanf("%d",&b);
    swap(&a,&b);
}
void swap(int *a,int *b)
{
    int p;
    p=*a;
    *a=*b;
    *b=p;
    printf("\nAfter swapping value of \n a= %d \n b= %d",*a,*b);
}
