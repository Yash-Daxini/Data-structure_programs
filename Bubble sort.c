#include"stdio.h"
void main()
{
    int n;
    printf("Enter value of n:");
    scanf("%d",&n);
    int a[n],i,j,temp;
    for(i=0;i<n;i++)
    {
        printf("Enter %d element:",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
