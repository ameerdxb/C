#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#define MAX 5
#define pr printf
#define sc scanf
#define ff fflush(stdin)

int rear=-1,front=-1;
int queue[MAX];
void qinsert(int x)
{
        if(rear==MAX-1)
        {
                pr("\nQueue Overflow!");
        }
        else
        {
                queue[++rear]=x;
                /* rear++;
                   queue[rear]=x; */
                pr("\nElement inserted");
        }
}

int qdelete()
{
        int x;
        if(front==rear)
        {
                pr("\nUnderflow!");
                return 0;
        }
        else
        {
                x=queue[++front];
                return x;
        }
}

void display()
{
        int i;
        if(front==rear)
        {
                pr("\nUnderflow!");
        }
        else
        {
                pr("\nQueue Elements");
                for(i=front+1;i<=rear;i++)
                {
                        pr("%5d",queue[i]);
                }
        }
}

void main()
{
    int n;
    enum choice{Insert=1,Delete,Display,Quit}ch;
    system("cls");
    while(1)
    {
    system("cls");
    pr("\n\n\t-----------------------");
    pr("\n\t\tQUEUE OPERATIONS");
    pr("\n\t-----------------------");
    pr("\n\t   1. INSERT");
    pr("\n\t   2. DELETE");
    pr("\n\t   3. DISPLAY");
    pr("\n\t   4. QUIT");
    pr("\n\t-----------------------");
    pr("\n\n\tEnter your choice : ");
    sc("%d",&ch);ff;
    switch(ch)
    {
            case Insert:
                    pr("\nEnter Value : ");
                    sc("%d",&n);ff;
                    qinsert(n);
            break;
            case Delete:
                    n=qdelete();
                    pr("\n%d Deleted",n);
            break;
            case Display:
                    pr("\nQueue Elements : ");
                    display();
            break;
            case Quit:
                    pr("\nGood Bye");
                    sleep(1);
                    return;
            default:
                    pr("\nWrong Choice");
            break;
    }
    sleep(1);
    }
}
