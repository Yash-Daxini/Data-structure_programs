#include"stdio.h"
void main()
{
    int n;
    printf("Enter value of n:");
    scanf("%d",&n);
    int i,a[n],j,temp;

    for(i=0;i<n;i++)
    {
        printf("Enter %d element:",i+1);
        scanf("%d",&a[i]);

        for(j=i;j>=1;j--)
        {
            if(a[j-1] > a[j])
            {
                temp=a[j-1];
                a[j-1]=a[j];
                a[j]=temp;
            }
            else
            {
                break;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
