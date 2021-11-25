#include"stdio.h"
#include"stdlib.h"

struct node
{
    int info;
    struct node *link;
}*r,*f,*p,*next;

void insert(int x)
{
    p=(struct node *)malloc(sizeof(struct node));
    if(p==NULL)
    {
        printf("Overflow");
        return 0;
    }
    if(f==NULL && r==NULL)
    {
        f=p;
        r=p;
        r->info=x;
        r->link=NULL;
        return 0;
    }
    else
    {
        r->link=p;
        p->link=NULL;
        p->info=x;
        r=p;
    }
    if(f==NULL)
    {
        f=r;
    }
}
void delete()
{
    struct node *temp;
    if(f==NULL)
    {
        printf("Underflow");
        return 0;
    }
    if(f==r)
    {
        f=NULL;
        r=NULL;
        free(f);
        return 0;
    }
        temp=f->link;
        free(f);
        f=temp;
}
void display()
{
    if(f==NULL)
    {
        printf("Underflow");
    }
    next=f;
    while(next!=NULL)
    {
        printf("%d ",next->info);
        next=next->link;
    }
}
void main()
{
    int x,choice;
    printf("Queue operations\n");
    printf("1.Insert\n");
    printf("2.Delete\n");
    printf("3.Display\n");
    printf("0.Exit");

    do
    {
        printf("\n\nEnter your choice:");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            printf("Enter a value you want to insert:");
            scanf("%d",&x);
            insert(x);
            break;
        case 2:
            delete();
            break;
        case 3:
            display();
            break;
        case 0:
            return 0;
            break;
        default :
            printf("Invalid input..");
            break;
        }
    }while(choice != 0);
}
