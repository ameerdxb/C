#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#define pr printf
#define sc scanf
#define ff fflush(stdin)
//linked list demo
void disp();
struct emp
{
    int empid;
    char empname[30];
    struct emp *next;
};
typedef struct emp employee;

employee *start=NULL, *ptr=NULL, *node=NULL, *prev=NULL;

void main()
{
    int choice=1,non=0,pos=0,counter=0,reply=1;//non-no.of nodes pos-position
    while(choice==1)
    {
        //create new node
        node=(employee *)malloc(sizeof(employee));

        //prompt the user for empid
        pr("\nEnter emp Id: ");
        sc("%d",&node->empid);ff;

        //prompt the user for emp name
        pr("\nEnter employee name: ");
        sc("%s",node->empname);ff;

        if(start==NULL)
        {
            start=node;
            node->next=NULL;
        }
        else
        {
            pr("\n1. Add at the end");
            pr("\n2. Add at the beginning");
            pr("\n3. Add at a position");
            pr("\n4. Display existing list");
            pr("\nEnter your choice(1-4): ");
            sc("%d",&reply);ff;

            switch(reply)
            {
                case 1 :
                    //adding new node at the end
                    for(ptr=start;(ptr);prev=ptr,ptr=ptr->next,non++);
                    prev->next=node;
                    node->next=NULL;
                    disp();
                    break;

                case 2 :
                    //adding at the beginning
                    ptr=start;
                    start=node;
                    node->next=ptr;
                    disp();
                    break;

                case 3 :
                    pr("\nEnter position to add the node: ");
                    sc("%d",&pos);ff;
                    for(ptr=start;counter<pos-1;counter++,prev=ptr,ptr=ptr->next);
                    node->next=prev->next;
                    prev->next=node;
                    disp();
                    break;

                case 4 :
                    disp();
                    break;
                default : pr("\nInvalid choice");
            }
        }
        pr("\nWish to add more?(Press 1 to continue or 0 to quit)");
        sc("%d",&choice);ff;

    }
    disp();
}
void disp()
{
    //display linked list
    for(ptr=start; (ptr); ptr=ptr->next)
    {
        pr("\n%d\t%s",ptr->empid,ptr->empname);
    }
}
