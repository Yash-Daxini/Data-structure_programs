#include"stdio.h"
void main()
{
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++)
    {
        printf("Enter %d element:",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("\n%d Element is : %d",i+1,*(a+i));
    }
}
