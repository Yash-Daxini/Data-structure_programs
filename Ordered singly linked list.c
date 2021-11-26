#include"stdio.h"
#include"stdlib.h"

struct node
{
    int info;
    struct node *link;
}*first,*p,*next,*temp,*pre;


void insertordered(int x)
{
    p=(struct node *)malloc(sizeof(struct node));
    p->info=x;
    if(first==NULL)
    {
        p->link=NULL;
        first=p;
        return ;
    }
    if(p->info <= first->info)
    {
        p->link=first;
        first=p;
        return ;
    }

    next=first;
    while(next->link != NULL && p->info >= next->link->info)
    {
        next=next->link;
    }
    p->link=next->link;
    next->link=p;
}


void deletefromspecified(int value)
{
    next=first;
    while(next->info!=value && next != NULL)
    {
        if(next->info!=value)
        {
            printf("Element is not found in linked list");
            return 0;
        }
        pre=next;
        next=next->link;
    }
    pre->link=next->link;
    free(next);
}


void deletefirst()
{
    if(first==NULL)
    {
        printf("Underflow");
        return 0;
    }
    temp=first->link;
    free(first);
    first=temp;
}

void deletelast()
{
    if(first==NULL)
    {
        printf("Underflow");
        return 0;
    }
    next=first;
    while(next->link!=NULL)
    {
        pre=next;
        next=next->link;
    }
    pre->link=NULL;
    free(next);
}


void display()
{
    if(first==NULL)
    {
        printf("Underflow");
        return 0;
    }
    next=first;
    while(next->link!=NULL)
    {
        printf("%d ",next->info);
        next=next->link;
    }
    printf("%d",next->info);
}


void main()
{
    int x,value,choice;
    printf("Singly linked list operations\n");
    printf("1.Insert a node such that linked list is in ascending order\n");
    printf("2.Delete a node from specified position\n");
    printf("3.Delete a first node of the linked list\n");
    printf("4.Delete a last node of the linked list\n");
    printf("5.Display\n");
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
            insertordered(x);
            break;
        case 2:
            printf("Enter a value you want to delete:");
            scanf("%d",&value);
            deletefromspecified(value);
            break;
        case 3:
            deletefirst();
            break;
        case 4:
            deletelast();
            break;
        case 5:
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
