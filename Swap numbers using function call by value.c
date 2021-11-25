#include"stdio.h"
void swap(int,int);
void main()
{
    int a,b;
    printf("Enter first number a: ");
    scanf("%d",&a);
    printf("Enter second number b: ");
    scanf("%d",&b);
    swap(a,b);
}
void swap(int a,int b)
{
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nAfter swapping value of \n a= %d \n b= %d",a,b);

}
