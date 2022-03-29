#include<stdio.h>
#include<windows.h>
#define MAX 5
typedef struct
{
    int data[MAX];
    int top;
}stack;

void initialize(stack *st)
{
    st->top=-1;
}

void push(stack *st,int n)
{
    st->data[++st->top]=n;
}

int pop(stack *st)
{
    int x;
    x=st->data[st->top--];
    return(x);
}

int isempty(stack *st)
{
    if(st->top==-1)
    {
        return(1);
    }
    else
    {
        return(0);
    }
}

int isfull(stack *st)
{
    if(st->top==MAX-1)
    {
        return(1);
    }
    else
    {
        return(0);
    }
}

void display(stack *st)
{
	int i;
	for(i=0;i<=st->top;i++)
	{
		printf("\t%d",st->data[i]);
	}
}

void main()
{
    stack stk;
    int n;
    enum choice{PUSH=1,POP,DISPLAY,QUIT}ch;
    system("cls");
    initialize(&stk);
    while(1)
    {
        system("cls");
        printf("\n\n\t-----------------------");
        printf("\n\t\tSTACK OPERATIONS");
        printf("\n\t-----------------------");
        printf("\n\t   1. PUSH");
        printf("\n\t   2. POP");
        printf("\n\t   3. DISPLAY");
        printf("\n\t   4. QUIT");
        printf("\n\t-----------------------");
        printf("\n\n\tEnter your choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
            case PUSH:
                if(isfull(&stk))
                {
                    printf("Stack Overflow");
                    break;
                }
                printf("\nEnter Value : ");
                scanf("%d",&n);
                push(&stk,n);
            break;
            case POP:
                if(isempty(&stk))
                {
                    printf("Stack Underflow");
                    break;
                }
                printf("\n%d Popped",pop(&stk));
            break;
            case DISPLAY:
                if(isempty(&stk))
                {
                    printf("\nStack is empty");
                    break;
                }
                printf("\nStack Elements : ");
                display(&stk);
            break;
            case QUIT:
                printf("Good Bye");
                return;
            default:
                printf("\nWrong Choice");
            break;
        }
    }
}
