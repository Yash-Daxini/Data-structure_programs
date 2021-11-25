#include"stdio.h"
#include"stdlib.h"

struct node
{
    int info;
    struct node *link;
}*first;

void insertatfront(int x)
{
    struct node *p=(struct node *)malloc(sizeof(struct node));
    if(first==NULL)
    {
        first=p;
        first->info=x;
        first->link=NULL;
        return 0;
    }
    p->info=x;
    p->link=first;
    first=p;
}

void display()
{
    if(first==NULL)
    {
        printf("Linked list is empty");
        return 0;
    }
    struct node *temp;
    temp=first;
    while(temp->link!=NULL)
    {
        printf("%d ",temp->info);
        temp=temp->link;
    }
    printf("%d",temp->info);
}

struct node *traverse()
{
    struct node *next;
    next=first;
    while(next->link!=NULL)
    {
        next=next->link;
    }
    return next;
}

void deletefirst()
{
    if(first->link==NULL)
    {
        free(first);
        return 0;
    }
   struct node *temp=first->link;
    free(first);
    first=temp;
}

void insertatend(int y)
{
    struct node *p=(struct node *)malloc(sizeof(struct node));
    struct node *last=traverse();
    last->link=p;
    p->info=y;
    p->link=NULL;
    p=last;
}

void deletelast()
{

    struct node *next;
    struct node *pre;
    next=first;
    while(next->link!=NULL)
    {
        pre=next;
        next=next->link;
    }
    pre->link=NULL;
    free(next);
}

void deletefromspecified(int value)
{
    struct node *next,*pre,*temp,*last;
    last=traverse();
    next=first;
    while(next->info!=value)
    {
        pre=next;
        if(pre==last)
        {
            printf("Linked list not contain this value");
            return 0;
        }
        next=next->link;
    }
    if(next==first)
    {
        temp=next->link;
        free(first);
        first=temp;
        return 0;
    }
    pre->link=next->link;
    free(next);
}

void main()
{
    int x,y,value,choice;
    printf("Singly linked list operations");
    printf("1.Insert a node at the front of the linked list\n");
    printf("2.Display all nodes\n");
    printf("3.Delete a first node of the linked list\n");
    printf("4.Insert a node at the end of the linked list\n");
    printf("5.Delete a last node of the linked list\n");
    printf("6.Delete a node from the specified position\n");
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
            display();
            break;
        case 3:
            deletefirst();
            break;
        case 4:
            printf("Enter a value you want to insert:");
            scanf("%d",&y);
            insertatend(y);
            break;
        case 5:
            deletelast();
            break;
        case 6:
            printf("Enter a value you want to delete:");
            scanf("%d",&value);
            deletefromspecified(value);
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
