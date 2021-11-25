#include"stdio.h"
#include"stdlib.h"
struct node
{
    int info;
    struct node *link;
};
void main()
{
    struct node *p;
    p=(struct node *)malloc(sizeof(struct node));
    printf("Enter info :");
    scanf("%d",&p->info);
    p->link=NULL;
    printf("Info = %d",p->info);
    free(p);
}
