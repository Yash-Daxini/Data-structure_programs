#include"stdio.h"
void main()
{
    int a[2][2],b[2][2],c[2][2],i,j;
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("\nEnter a[%d][%d] element of matrix:",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("\nEnter b[%d][%d] element of matrix:",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    }

     for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
              c[i][j]=a[i][j]+b[i][j];
        }
    }

     printf("\nSum of matrix\n\n");

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n\n");
    }
}
