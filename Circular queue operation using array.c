#include"stdio.h"
#define n 5
int r=-1,f=-1,y,count,q[n];
void cinsert(int a)
{
    count=0;
    if(r==n-1)
    {
        r=0;
    }
    else
    {
        r++;
    }
    if(f==r)
    {
        printf("\nOverflow");
        count++;
        return;
    }
    q[r]=a;
    if(f==-1)
    {
        f=0;
    }
    return;
}
int cdelete()
{
    count=0;
    if(f<0)
    {
        printf("Underflow");
        count++;
        return;
    }
    y=q[f];
    if(f==r)
    {
        f=-1;
        r=-1;
        return y;
    }
    if(f==n-1)
    {
        f=0;
    }
    else
    {
        f=f+1;
    }
    return y;
}
int cdisplay()
{
    int i=f;
    if(f<0)
    {
        printf("Underflow");
        count++;
        return;
    }
    while(i<=r)
    {
        if(r==0)
        {
            r=n-1;
        }

        if(i==n)
        {
            i=0;
        }
        if(i<r || i>r)
        {
            printf("%d ",q[i]);
        }
        else if(i==r)
        {
            printf("%d",q[i]);
        }
        i++;
    }
}
void main()
{
    int choice,d;
    printf("Perform circular queue operation : \n 1. Insert 2. Delete 3. Display 0. Exit\n");
    do
    {
        printf("\nEnter choice:");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            printf("Enter element you want to insert:");
            scanf("%d",&y);
            cinsert(y);
            if(count==0)
            {
                printf("\n%d successfully inserted\n",y);
            }
            break;

        case 2:
            d=cdelete();
            if(count==0)
            {
                printf("\n%d is successfully deleted\n",d);
            }
            break;

        case 3:
            cdisplay();
            break;

        case 0:
            return 0;

        default :
        {
            printf("\nInvalid input ! \n");
        }
    }
   }while(choice != 0);
}
