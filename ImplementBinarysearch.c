#include"stdio.h"
void main()
{
    int n;
    printf("Enter value of n:");
    scanf("%d",&n);
    int a[n],mid,key,i,l,r,min,temp,j;
    l=0,r=n-1;
    mid=(l+r)/2;

    for(i=0;i<n;i++)
    {
        printf("Enter %d element:",i+1);
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if( a[i] > a[j] )
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
        printf("%d ",a[i]);
    }


    printf("\nEnter key value:");
    scanf("%d",&key);
    while(l<=r)
    {
        if(a[mid] == key)
        {
            printf("\n%d element is at %d position\n",key,mid+1);
            return;
        }
        else if(a[mid] > key)
        {
            r=mid-1;
        }
        else if(a[mid] < key)
        {
            l=mid+1;
        }
        mid=(l+r)/2;
    }
    if(l>r)
    {
        printf("%d is not found",key);
        return;
    }

}
