#include"stdio.h"
void main()
{
    int n;
    printf("Enter size of array:");
    scanf("%d",&n);
    int i,a[n],b,c;
    printf("\n\tEnter array element");
    for(i=0;i<n;i++)
    {
        printf("\n\nEnter %d element:",i+1);
        scanf("%d",&a[i]);
    }
    printf("\nEnter number you want compare:");
    scanf("%d",&b);

    printf("\nEnter number you want replace:");
    scanf("%d",&c);

    for(i=0;i<n;i++)
    {
        if(a[i]==b)
        {
            printf("\n%d Array is changed\n",i+1);
        }

    }

    for(i=0;i<n;i++)
    {
        if(a[i]==b)
        {
            printf("\nElement %d = %d",i+1,c);
        }
        else
        {
            printf("\nElement %d = %d",i+1,a[i]);
        }

    }
}

