#include"stdio.h"
#include"stdlib.h"
#define n 5
struct node
{
    int info;
    struct node *link;
};
struct node *first,*temp,*top=NULL,*next;
void push(int x)
{
    struct node *p=(struct node *)malloc(sizeof(struct node));
    if(p==NULL)
    {
        printf("Overflow");
        return 0;
    }
    if(first == NULL && top == NULL)
    {
        first=p;
        top=p;
        top->info=x;
        top->link=NULL;
        return 0;
    }
    p->info=x;
    p->link=NULL;
    top->link=p;
    top=p;
}
void pop()
{
    struct node *pre
    ;
    if(top == NULL)
    {
        printf("Underflow");
        return 0;
    }
    next=first;
    while(next!=top)
    {
        pre=next;
        next=next->link;
    }
    if(next==first)
    {
        free(next);
        top=NULL;
        first=NULL;
        return 0;
    }
    pre->link=NULL;
    free(next);
    top=pre;

}
void display()
{
    if(top == NULL)
    {
        printf("Underflow");
        return 0;
    }
    next=first;
    while(next!=top)
    {
        printf("%d ",next->info);
        next=next->link;
    }
    printf("%d",top->info);
}
void main()
{
    int x,choice;
    printf("Stack operations\n");
    printf("1.Push\n");
    printf("2.Pop\n");
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
            push(x);
            break;
        case 2:
            pop();
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

