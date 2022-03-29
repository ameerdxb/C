#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#define pr printf
#define sc scanf
#define ff fflush(stdin)
struct emp
{
    int empid;
    char empname[20];
    struct emp *next; //node- it has a pointer to show next structure
};
typedef struct emp employee;
//void display(employee *);
void main()
{
    employee *node,*start=NULL;
    int choice=0;
    while(choice==1)
    {
        //creating new structure
        node=(employee *)malloc(sizeof(employee));
        pr("\nEnter employee id: ");
        sc("%d",&node->empid);
        ff;
        pr("\Enter employee name: ");
        sc("%s",node->empname);
        ff;
        //node->next=NULL;
        pr("\nDo you wish to add more?(1- continue/0- quit)");
        sc("%d",&choice);
        ff;
        if(start==NULL)
        {
            start=node;
            node->next=NULL;
        }else
        {
            start->next=node;
            node->next=NULL;
        }
    }
    display(start);
}
void display(employee *ptr)
{
    for(;(ptr);ptr++)
    {
        pr("\nEmpid: %d \t Name: %s",ptr->empid,ptr->empname);
    }
}
