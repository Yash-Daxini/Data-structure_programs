#include"stdio.h"
int fact(int);
int main()
{
    int i,n,a;
    printf("Enter number:");
    scanf("%d",&n);

    a=fact(n);
    for(i=n;i>=1;i--)
    {
        if(i!=1)
        {
            printf("%d * ",i);
        }
        else
        {
            printf("%d = ",i);
        }
    }
    printf("%d ",fact(n));

}
int fact(int n)
{
    if(n==1)
    {
        return 1;
    }
    else
    {
        return n * fact(n-1);
    }
}
