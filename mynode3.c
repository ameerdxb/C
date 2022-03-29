//program to add 5 employeeid and display linked list
#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#define pr printf
#define sc scanf
#define ff flush(stdin)
struct emp
{
    int empid;
    struct emp *next;
};
struct emp start,*temp,*node;
void display();
void insert()
{
    int i,j,item;
    pr("Enter the item to insert: ");
    sc("%d",&item);
    if(start.next==NULL)
    {
        node=(struct emp *)malloc(sizeof(struct emp));
        node->empid=item;
        node->next=NULL;
        start.next=node;
        return;
    }else
    {
        temp=start.next;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        node=(struct emp *)malloc(sizeof(struct emp));
        temp->next=node;
        return;
    }
}
void display()
{

    temp=start.next;
    while(temp)
    {
        pr("%d",temp->empid);
        temp=temp->next;
    }
}
void main()
{
    int choice,i,j;
    void insert();
    void display();
    do
    {
        i=insert();
        j=display();
        pr("\nEnter the product id: %d",i);
        pr("\nThe product details are:%d",j);
        pr("\nDo you want to add more?(1-continue,0-exit)");
        sc("%d",&choice);
    }while(choice==1);
}
