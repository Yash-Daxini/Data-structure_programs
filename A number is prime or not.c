#include"stdio.h"
void main()
{
    int i,n,a=0;
    printf("Enter number:");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            a++;
        }
    }
    if(a==2)
    {
        printf("Prime");
    }
    else
    {
        printf("Not Prime");
    }
}
