#include"stdio.h"
#include"string.h"
#define n 50
int top,i=0,j=0;
char s[n],infix[n],next,postfix[n],temp;
void push(char x)
{
    if(top>=n-1)
    {
        printf("Overflow");
        return;
    }
    top=top+1;
    s[top]=x;
    return;
}
char pop()
{
    if(top<0)
    {
        printf("Underflow");
        return 0;
    }
    top=top-1;
    return(s[top+1]);
}
int r(char a)
{
    if(a == '+' || a == '-' || a == '*' || a == '/' || a == '^' || a == '$')
    {
        return -1;
    }
    else if(a == '(' || a == ')')
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int f(char a)
{
    if(a=='+' || a=='-')
    {
        return 1;
    }
    else if(a=='*' || a=='/')
    {
        return 3;
    }
    else if(a=='^' || a=='$')
    {
        return 6;
    }
    else if((a>='a' && a<='z') || (a>='A' && a<='Z'))
    {
        return 7;
    }
    else if(a=='(')
    {
        return 9;
    }
    else
    {
        return 0;
    }
}
int g(char a)
{
    if(a=='+' || a=='-')
    {
        return 2;
    }
    else if(a=='*' || a=='/')
    {
        return 4;
    }
    else if(a=='^' || a=='$')
    {
        return 5;
    }
    else if( (a>='a' && a<='z') || (a>='A' && a<='Z') )
    {
        return 8;
    }
    else if(a=='(')
    {
        return 0;
    }
}
void main()
{
    int rank=0;
    char temp;
    printf("Enter infix expression:");
    scanf("%s",infix);
    infix[strlen(infix)]=')';
    top=0;
    s[top]='(';
    next=infix[0];

    while(next!='\0')
    {
        if(top<0)
        {
            printf("INVALID");
            return;
        }
        while( g( s[top]) > f(next))
        {
            temp=pop();
            postfix[j]=temp;
            j++;
            rank=rank+r(temp);
            if(rank<1)
            {
                printf("INVALID");
                return;
            }
        }
        if( g(s[top]) != f(next))
        {
            push(next);
        }
        else
        {
            pop();
        }
        i++;
        next=infix[i];
    }
    if(top==-1 && rank == 1)
    {
        printf("VALID\n");
        printf("%s",postfix);
    }
    else
    {
        printf("INVALID");
    }
}
