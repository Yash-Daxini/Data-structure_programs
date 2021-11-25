#include"stdio.h"
#define n 2
int r=0,f=0,y,q[n],count=0;
void insert(int y)
{
    if(r>n-1)
    {
        printf("Overflow\n");
        return;
        count++;
    }
    r=r+1;
    q[r]=y;
    if(f==0)
    {
        f=1;
        return;
    }
}
int delete()
{
    if(f==0)
    {
        printf("Underflow\n");
        count++;
        return;
    }
    y=q[f];
    if(f==r)
    {
        f=0;
        r=0;
    }
    else
    {
        f++;
    }
    return y;
}
int display()
{
     if(f==-1)
    {
        printf("UNDERFLOW\n");
        return ;
        count++;
    }
    for(int i=f;i<=r;i++)
    {
        printf("%d ",q[i]);
    }
    return;
}
void main()
{
    int choice;
    printf("Perform queue operation : \n 1. Insert 2. Delete 3. Display 0. Exit\n");
    do
    {
        printf("\nEnter choice:");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            printf("Enter element you want to insert:");
            scanf("%d",&y);
            insert(y);
            if(count==0)
            {
                printf("\n%d successfully inserted\n",y);
            }
            break;

        case 2:
            delete(y);
            if(count==0)
            {
                printf("\nElement is successfully deleted\n");
            }
            break;

        case 3:
            if(count==0)
            {
                display();
            }
            if(count!=0)
            {
                printf("Queue is empty");
            }

            break;

        case 4:
            return 0;

        default :
        {
            printf("\nPlease Enter Correct Value ...\n");
        }
        }
    }while(choice != 0);
    return;
}
