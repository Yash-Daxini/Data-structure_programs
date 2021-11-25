#include"stdio.h"
#define n 5
char s[n];
int top=-1,count_b=0;
void push(char);
char pop();

int main()
{
    int j=0;
    char next;
    printf("Enter the string:");
    scanf("%s",s);
    next=s[0];

    while(next!='\0')
    {
        if(next=='a')
        {
            push(next);
        }
        else
        {
            count_b++;
        }
        j++;
        next=s[j];
    }
    while(top!=-1)
    {
        pop();
        count_b--;
    }
    if(count_b!=0)
    {
        printf("INVALID STRING");
    }
    else
    {
        printf("VALID STRING");
    }
    return 0;
}

void push(char x)
{
    if(top>=n-1)
    {
        printf("stack overflow");
        return;
    }
    top=top+1;
    s[top]=x;
    return ;
}

char pop()
{
    if(top==-1)
    {
        printf("stack underflow");
        return;
    }
    top=top-1;
    return(s[top+1]);
}
