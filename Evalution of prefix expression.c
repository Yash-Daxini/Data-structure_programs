#include"stdio.h"
#include"ctype.h"
#include"string.h"
#include"math.h"
#define n 50
int s[n],top=-1;
char prefix[n];
void push(int);
int pop();
int evalution(int,int,char);
void main()
{
    int i,value,op1,op2;
    char next,opr;
    printf("Enter prefix expression:");
    scanf("%s",prefix);
    for(i=strlen(prefix)-1;i>=0;i--)
    {
        next=prefix[i];
        if(isdigit(next))
        {
            push(next-'0');
        }
        else if(next == '+' || next == '-' || next == '*' || next == '/' || next  == '^')
        {
            op1=pop();
            op2=pop();
            value=evalution(op1,op2,next);
            push(value);
        }
    }
    printf("Answer = %d",pop());
}
void push(int input)
{
    if(top>=n-1)
    {
        printf("Overflow");
        return;
    }
    top=top+1;
    s[top]=input;
}
int pop()
{
    if(top<0)
    {
        printf("Underflow");
    }
    top=top-1;
    return(s[top+1]);
}
int evalution(int op1,int op2,char next)
{
    if(next=='+')
    {
        return op1+op2;
    }
    else if(next=='-')
    {
        return op1-op2;
    }
    else if(next=='*')
    {
        return op1*op2;
    }
    else if(next=='/')
    {
        return op1/op2;
    }
    else if(next=='^')
    {
        return pow(op1,op2);
    }
}


