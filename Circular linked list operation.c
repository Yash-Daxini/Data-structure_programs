#include"stdio.h"
#include"stdlib.h"


struct node
{
    int info;
    struct node *link;
}*first,*last;

void insertatfront(int x)
{
    struct node *p=(struct node *)malloc(sizeof(struct node));
    p->info=x;
    if(first==NULL)
    {
        first=p;
        last=p;
        return;
    }
    p->link=first;
    first=p;
    last->link=p;
    return;
}


void deletefromspecified(int value)
{
    struct node *next=first,*pre,*temp;
    while(next->info != value && next != last)
    {
        pre=next;
        next=next->link;

    }
        if(next->info != value)
        {
            printf("Element is not in list");
            return;
        }
        if(first->info == value)
        {
            temp=first->link;
            free(first);
            first=temp;
            last->link=first;
            return ;
        }
        else if(next->info==value)
        {
            pre->link=next->link;
            free(next);
            return;
        }
        else
        {
            if(last->info == value)
            {
                temp=last->link;
                free(last);
                last=pre;
                last->link=temp;

            }
        }
}


void insertatend(int x)
{
    struct node *p=(struct node *)malloc(sizeof(struct node));
    p->info=x;
    if(first==NULL)
    {
        first=p;
        last=p;
        return;
    }
    p->link=first;
    last->link=p;
    last=p;
    return;
}

void display()
{
    struct node *next=first;
    if(first==NULL && last==NULL)
    {
        printf("Underflow");
    }
    while(next!=last)
    {
        printf("%d ",next->info);
        next=next->link;
    }
    printf("%d",next->info);
}


void main()
{
    int x,value,choice;
    printf("Circular linked list operations\n");
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

