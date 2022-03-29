#include<stdio.h>
#include<stdlib.h>

struct list
{
        int data;
        struct list *prev;
        struct list *next;
};

typedef struct list node;

node *createlist()
{
        node *first,*last,*new;
        char ch;
        first=last=NULL;
        do
        {
                new=(node *)malloc(sizeof(node));
                printf("\nEnter Value : ");
                scanf("%d",&new->data);
                if(first==NULL)
                {
                        first=last=new;
                        first->prev=NULL;
                        first->next=NULL;
                }
                else
                {       new->prev=last;
                        last->next=new;
                        last=new;
                        last->next=NULL;
                }
                printf("\nDo You want to Add More (y/n) : ");
                fflush(stdin);
                ch=getchar();
        }while(tolower(ch)=='y');
return(first);
}
node *getlast(node *first)
{
        node *list;
        list=first;
        while(list->next)
        {
                list=list->next;
        }
return(list);

}

void display(node *first)
{
        node *list;
        list=first;
        printf("\nTrversing from first to last");
        while(list)
        {
                printf("\n%d",list->data);
                list=list->next;
        }
        printf("\nTraversing from last to first");
        list=getlast(first);
        while(list)
        {
                printf("\n%d",list->data);
                list=list->prev;
        }

}


node *insertfirst(node *first)
{
        node *new;
        if(first==NULL)
        {
                printf("List is Empty");
                sleep(2);
                return NULL;
        }
        new=(node *)malloc(sizeof(node));
        printf("\nEnter Data : ");
        scanf("%d",&new->data);
        first->prev=new;
        new->next=first;
        first=new;
        first->prev=NULL;
        return(first);
}



void insertlast(node *first)
{
        node *last,*new;
        if(first==NULL)
        {

                printf("List is Empty");
                sleep(2);
                return;
        }
        new=(node *)malloc(sizeof(node));
        printf("\nEnter Data : ");
        scanf("%d",&new->data);
        last=getlast(first);
        new->prev=last;
        last->next=new;
        last=new;
        last->next=NULL;
}

node *find(node *first,int key)
{
        node *list;
        list=first;
        while(list)
        {
                if(list->data==key)
                {
                        return(list);
                }
        list=list->next;
        }
        return(NULL);
}

int search(node *first,int key)
{
        node *list;
        list=first;
        while(list)
        {
                if(list->data==key)
                {
                        return(1);
                }
        list=list->next;
        }
return(0);
}

node *insertbefore(node *first)
{
        node *new,*pos;
        int n;
        if(first==NULL)
        {
                printf("List is Empty");
                sleep(2);
                return NULL;
        }
        printf("\nEnter Data : ");
        scanf("%d",&n);
        if(!search(first,n))
        {
                printf("\nSorry Given Data Not found");
                return first;
        }
        new=(node *)malloc(sizeof(node));
        printf("\nEnter Data : ");
        scanf("%d",&new->data);
        if(first->data==n)
        {
                first->prev=new;
                new->next=first;
                first=new;
        }
        else
        {
                pos=find(first,n);
                new->next=pos;
                new->prev=pos->prev;
                pos->prev->next=new;
                pos->prev=new;

        }
printf("\nData Inserted Successfully");
return(first);
}

void insertafter(node *first)
{
        node *new,*pos,*last;
        int n;
        if(first==NULL)
        {
                printf("List is Empty");
                sleep(2);
                return;
          }
        printf("\nAfter Which Data Data : ");
        scanf("%d",&n);
        if(!search(first,n))
        {
                printf("\nSorry Given Data Not found");
                return;
        }
        new=(node *)malloc(sizeof(node));
        printf("\nEnter Data : ");
        scanf("%d",&new->data);
        if(first->data==n)
        {
                new->prev=first;
                new->next=first->next;
                first->next->prev=new;
                first->next=new;
        }
        else
        {
                pos=find(first,n);
                last=getlast(first);
                if(pos==last)
                {
                        last->next=new;
                        new->prev=last;
                        last=new;
                        last->next=NULL;
                }
                else
                {
                        new->prev=pos;
                        new->next=pos->next;
                        pos->next->prev=new;
                        pos->next=new;
                }
        }
printf("\nData Inserted Successfully");
}

node *delete(node *first)
{
        node *temp,*pos,*last;
        int n;
        if(first==NULL)
        {
                printf("List is Empty");
                sleep(2);
                return NULL;
        }
        printf("\nEnter Data : ");
        scanf("%d",&n);
        if(!search(first,n))
        {
                printf("\nSorry Given Data Not found");
                return first;
        }
        if(first->data==n)
        {
                temp=first->next;
                free(first);
                first=temp;
                first->prev=NULL;
        }
        else
        {
                pos=find(first,n);
                last=getlast(first);
                if(pos==last)
                {
                        last=last->prev;
                        free(last->next);
                        last->next=NULL;
                }
                else
                {
                        pos->prev->next=pos->next;
                        pos->next->prev=pos->prev;
                        free(pos);
                }
        }
printf("Deleted Successfully");
return(first);
}

void update(node *first)
{
        node *pos;
        int n;
        if(first==NULL)
        {
                printf("List is Empty");
                sleep(2);
                return;
        }
        printf("\nEnter Data to Update : ");
        scanf("%d",&n);
        if(!search(first,n))
        {
                printf("\nSorry Given Data Not found");
                return;
        }
        pos=find(first,n);
        printf("\nEnter New Data : ");
        scanf("%d",&pos->data);
        printf("Data Updated Successfully");
}

void main()
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
                printf("Double Linked List");
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
                printf("What do you want to do : ");
                scanf("%d",&ch);
                system("cls");
                switch(ch)
                {
                case Create:    first=createlist();
                                printf("\nList Created");
                                break;
                case InsertFirst:       first=insertfirst(first);
                                        break;
                case InsertBefore:      first=insertbefore(first);
                                        break;
                case InsertAfter:       insertafter(first);
                                        break;
                case InsertLast:        insertlast(first);
                                        break;
                case Search:    printf("\nEnter n Value to Search : ");
                                scanf("%d",&n);
                                if(search(first,n))
                                {
                                        printf("Value Found");
                                }
                                else
                                {
                                        printf("Not Found");
                                }
                                break;
                case Update:    update(first);
                                break;
                case Delete:    first=delete(first);
                                break;
                case Display:   display(first);
                                break;
                case Quit:      gotoxy(22,12);
                                printf("Thank You");
                                sleep(2);
                                exit(0);
                default:        printf("Wrong Choice");
                                break;
                }

        }
}


void gotoxy(int x, int y)
{
        printf("%c[%d;%df",0x1B,y,x);
}
