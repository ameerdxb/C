#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#define pr printf
#define sc scanf
#define ff fflush(stdin)
struct list
{
        int data;
        struct list *next;
};
typedef struct list node;

node *createlist()
{
        node *first,*last,*new;
        char ch,reply;
        first=last=NULL;
        do
        {
                new=(node *)malloc(sizeof(node));
                pr("\nEnter Value : ");
                sc("%d",&new->data);ff;
                if(first==NULL)
                {
                        first=last=new;
                        first->next=NULL;
                }
                else
                {       last->next=new;
                        last=new;
                        last->next=first;
                }
                pr("\nDo You want to Add More (y/n) : ");
                sc("%c",&reply);ff;
        }while(reply=='y' || reply=='Y');
return(first);
}

void display(node *first)
{
        node *list;
        list=first;
        do
        {
                pr("\n%d",list->data);
                list=list->next;
        }while(list!=first);
}

node *getlast(node *first)
{
        node *list;
        list=first;
        do
        {
                list=list->next;
        }while(list->next!=first);
return(list);
}

node *insertfirst(node *first)
{
        node *new,*last;
        if(first==NULL)
        {
                pr("List is Empty");
                sleep(5);
                return NULL;
        }
        new=(node *)malloc(sizeof(node));
        pr("\nEnter Data : ");
        sc("%d",&new->data);ff;
        last=getlast(first);
        last->next=new;
        last=new;
        last->next=first;
}

void insertlast(node *first)
{
        node *last,*new;
        if(first==NULL)
        {
                pr("List is Empty");
                sleep(5);
                return;
        }
        new=(node *)malloc(sizeof(node));
        pr("\nEnter Data : ");
        sc("%d",&new->data);ff;
        last=getlast(first);
        last->next=new;
        last=new;
        last->next=first;
}

node *find(node *first,int key)
{
        node *list;
        list=first;
        do
        {
                if(list->next->data==key)
                {
                        return(list);
                }
        list=list->next;
        }while(list!=first);
        return(NULL);
}

int search(node *first,int key)
{
        node *list;
        list=first;
        do
        {
                if(list->data==key)
                {
                        return(1);
                }
        list=list->next;
        }while(list!=first);
return(0);
}

node *insertbefore(node *first)
{
        node *new,*pos,*last;
        int n;
        if(first==NULL)
        {
                printf("List is Empty");
                sleep(5);
                return NULL;
        }
        pr("\nEnter Data : ");
        sc("%d",&n);ff;
        if(!search(first,n))
        {
                pr("\nSorry Given Data Not found");
                return first;
        }
        new=(node *)malloc(sizeof(node));
        pr("\nEnter Data : ");
        sc("%d",&new->data);ff;
        last=getlast(first);
        if(first->data==n)
        {
                new->next=first;
                first=new;
                last->next=first;
        }
        else
        {
                pos=find(first,n);
                new->next=pos->next;
                pos->next=new;
        }
pr("\nData Inserted Successfully");
return(first);
}

void insertafter(node *first)
{
        node *new,*pos,*last;
        int n;
        if(first==NULL)
        {
                pr("List is Empty");
                sleep(5);
                return;
        }
        pr("\nAfter Which Data Data : ");
        sc("%d",&n);ff;
        if(!search(first,n))
        {
                pr("\nSorry Given Data Not found");
                return;
        }
        new=(node *)malloc(sizeof(node));
        pr("\nEnter Data : ");
        sc("%d",&new->data);ff;
        if(first->data==n)
        {
                new->next=first->next;
                first->next=new;
        }
        else
        {
                pos=find(first,n);
                last=getlast(first);
                if(pos->next==last)
                {
                        last->next=new;
                        last=new;
                        last->next=first;
                }
                else
                {
                        new->next=pos->next->next;
                        pos->next->next=new;
                }
        }
pr("\nData Inserted Successfully");
}

node *delete(node *first)
{
        node *temp,*pos,*last;
        int n;
        if(first==NULL)
        {
                pr("List is Empty");
                sleep(5);
                return NULL;
        }
        pr("\nEnter Data : ");
        sc("%d",&n);ff;
        if(!search(first,n))
        {
                pr("\nSorry Given Data Not found");
                return first;
        }
        last=getlast(first);
        if(first->data==n)
        {
                temp=first->next;
                free(first);
                first=temp;
                last->next=first;
        }
        else
        {
                pos=find(first,n);

                if(pos->next==last)
                {
                        free(last);
                        last=pos;
                        last->next=first;
                }
                else
                {
                        temp=pos->next;
                        pos->next=pos->next->next;
                        free(temp);
                }
        }
pr("Deleted Successfully");
return(first);
}

void update(node *first)
{
        node *pos;
        int n;
        if(first==NULL)
        {
                pr("List is Empty");
                sleep(5);
                return;
        }
        pr("\nEnter Data to Update : ");
        sc("%d",&n);ff;
        if(!search(first,n))
        {
                pr("\nSorry Given Data Not found");
                return;
        }
        pos=find(first,n);
        pr("\nEnter New Data : ");
        sc("%d",&pos->next->data);ff;
        pr("Data Updated Successfully");
}

void  main()
{
node *first=NULL;
int n;
enum choice{Create=1,InsertFirst,InsertBefore,InsertAfter,InsertLast,Delete,Search,Update,Display,Quit}ch;
while(1)
{
        system("cls");
        gotoxy(20,5);
        printf("-----------------------------");
        gotoxy(25,6);
        printf("Circular Linked List");
        gotoxy(20,7);
        printf("-----------------------------");
        gotoxy(22,8);
        printf("1. Create List");
        gotoxy(22,9);
        printf("2. Insert First");
        gotoxy(22,10);
        printf("3. Insert Before");
        gotoxy(22,11);
        printf("4. Insert After");
        gotoxy(22,12);
        printf("5. Insert Last");
        gotoxy(22,13);
        printf("6. Delete");
        gotoxy(22,14);
        printf("7. Search");
        gotoxy(22,15);
        printf("8. Update List");
        gotoxy(22,16);
        printf("9. Display List");
        gotoxy(22,17);
        printf("10. Quit");
        gotoxy(20,18);
        printf("-----------------------------");
        gotoxy(20,20);
        pr("What do you want to do : ");
        sc("%d",&ch);ff;
        system("cls");
        switch(ch)
        {
                case Create:
                        first=createlist();
                        pr("\nList Created");
                break;
                case InsertFirst:
                        first=insertfirst(first);
                break;
                case InsertBefore:
                        first=insertbefore(first);
                break;
                case InsertAfter:
                        insertafter(first);
                break;
                case InsertLast:
                        insertlast(first);
                break;
                case Search:
                        pr("\nEnter n Value to Search : ");
                        sc("%d",&n);ff;
                        if(search(first,n))
                        {
                                pr("Value Found");
                        }
                        else
                        {
                                pr("Not Found");
                        }
                break;
                case Update:
                        update(first);
                break;
                case Delete:
                        first=delete(first);
                break;
                case Display:
                        display(first);
                break;
                case Quit:
                        gotoxy(22,12);
                        pr("Thank You");
                        sleep(2);
                        exit(0);
                default:
                        pr("Wrong Choice");
                break;
        }
        sleep(5);
}
}
void gotoxy(int x,int y)
{
        pr("%c[%d;%df",0x1B,y,x);
}




