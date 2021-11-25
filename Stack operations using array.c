#include"stdio.h"
#define n 5
void push(int);
int pop();
int peep(int);
void change(int,int);
void display();
int s[n],top=-1;
void main()
{
    int i,x,choice;
        printf("Operations with their numbers : \n 1 : PUSH\n 2 : POP\n 3 : PEEP\n 4 : CHANGE\n 5 : DISPLAY\n 0 : EXIT\n");
        do
        {
        printf("\n\nEnter operation number which you want perform:");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
               {
                    printf("\nEnter value you want to PUSH:");
                    scanf("%d",&x);
                    push(x);
               }
               break;

            case 2:
                {
                    x=pop();
                    if(x!=0)
                    {
                        printf("\nPoped value = %d",x);
                    }
                    break;
                }
            case 3:
                {
                    printf("\nEnter position of element from top whose value you want to peep:");
                    scanf("%d",&i);
                    x=peep(i);
                    if(x!=0)
                    {
                        printf("\nPeeped value = %d",x);
                    }
                    break;
                }
            case 4:
                {
                    printf("\nEnter position of element from top whose value you want to change:");
                    scanf("%d",&i);
                    printf("\nEnter value for change operation:");
                    scanf("%d",&x);
                    change(i,x);
                    break;
                }
            case 5:
                {
                    display();
                    break;
                }
            case 0:
                {
                    break;
                }
            default:
                {
                    printf("\nInvalid Input ! \n please try again ");
                    break;
                }
        }
    }while(choice!=0);
}
void push(int x)
{
    if(top >= n-1)
    {
        printf("Stack Overflow");
    }
    top=top+1;
    s[top]=x;
    return;
}
int pop()
{
    if(top==-1)
    {
        printf("Stack Underflow");
    }
    top=top-1;
    return s[top+1];
}
int peep(int i)
{
    if(top-i+1<=-1)
    {
        printf("Stack Underflow");
        return 0;
    }
    return s[top-i+1];
}
void change(int i,int x)
{
    if(top-i+1<=-1)
    {
        printf("Stack Underflow");
        return ;
    }
    s[top-i+1]=x;
    return;
}
void display()
{
    int k;
    if(top==-1)
    {
        printf("Stack Underflow");
    }
    for(k=top;k>=0;k--)
    {
        printf("%d",s[k]);
    }
    return ;
}
