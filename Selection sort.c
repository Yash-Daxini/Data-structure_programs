#include"stdio.h"
void main()
{
    int n;
    printf("Enter value of n:");
    scanf("%d",&n);
    int a[n],i,j,min,temp;
    for(i=0;i<n;i++)
    {
        printf("Enter %d element:",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        min=i;
        for(j=i+1;j<n+1;j++)
        {
            if(a[j] < a[min])
            {
                min=j;
            }
        }
        if(min != i)
        {
            temp=a[i];
            a[i]=a[min];
            a[min]=temp;
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

}
