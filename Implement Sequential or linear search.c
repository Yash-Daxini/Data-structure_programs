#include"stdio.h"
void main()
{
    int n;
    printf("Enter value of n:");
    scanf("%d",&n);
    int a[n],i,key;
    printf("Enter value you want to search:");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        printf("Enter %d element of array:",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            printf("%d is element is at %d position\n",key,i+1);
            break;
        }
        else if(i==n-1)
        {
            printf("Element not found\n");
        }

    }

}
