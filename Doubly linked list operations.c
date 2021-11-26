#include"stdio.h"
#include"stdlib.h"


struct node
{
    int info;
    struct node *lptr;
    struct node *rptr;
}*l,*r;


void insertatfront(int x)
{
    struct node *p=(struct node *)malloc(sizeof(struct node));
    p->info=x;
    if(l==NULL)
    {
        p->lptr=NULL;
        p->rptr=NULL;
        l=p;
        r=p;
        return;
    }
    p->lptr=NULL;
    p->rptr=l;
    l->lptr=p;
    l=p;
}


void deletefromspecified(int value)
{
    struct node *next=l,*pre,*temp;
    while(next->info != value)
    {
        next=next->rptr;

    }
    if(next->info != value)
    {
        printf("Element is not in list");
        return;
    }
        next->lptr->rptr=next->rptr;
        free(next);
        if(next==l)
        {
            temp=next->rptr;
            free(l);
            temp->lptr=NULL;
            l=temp;
            return ;
        }
        else if(next==r)
        {
            next->lptr->rptr=NULL;
            free(r);
            r=pre;
            return;
        }
}


void insertatend(int x)
{
    struct node *p=(struct node *)malloc(sizeof(struct node));
    p->info=x;
    if(l==NULL)
    {
        p->lptr=NULL;
        p->rptr=NULL;
        l=p;
        r=p;
        return;
    }
    p->lptr=r;
    r->rptr=p;
    p->rptr=NULL;
    r=p;
}

void display()
{
    struct node *next=l;
    if(l==NULL && r==NULL)
    {
        printf("Underflow");
    }
    while(next->rptr!=NULL)
    {
        printf("%d ",next->info);
        next=next->rptr;
    }
    printf("%d",next->info);
}


void main()
{
    int x,value,choice;
    printf("Doubly linked list operations\n");
    printf("1.Insert a node at the front of the linked list\n");
    printf("2.Delete a node from specified position\n");
    printf("3.Insert a node at the end of the linked list\n");
    printf("4.Display all nodes\n");
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
            insertatfront(x);
            break;
        case 2:
            printf("Enter a value you want to delete:");
            scanf("%d",&value);
            deletefromspecified(value);
            break;
        case 3:
            printf("Enter a value you want to insert:");
            scanf("%d",&x);
            insertatend(x);
            break;
        case 4:
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

