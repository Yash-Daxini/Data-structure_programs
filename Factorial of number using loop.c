#include"stdio.h"
void main()
{
    int n,j,i,fact=1;
    printf("Enter number:");
    scanf("%d",&n);

    for(i=n;i>=1;i--)
    {
        fact=fact*i;

        if(i!=1)
        {
            printf("%d * ",i);
        }
        else
        {
            printf("%d = ",i);
        }
    }
    printf("%d",fact);
}
