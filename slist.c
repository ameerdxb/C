#include<stdio.h>
#include<stdlib.h>
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
        //create new node
        new=(node *)malloc(sizeof(node));
        pr("\nEnter the value: ");
        sc("%d",&new->data);
        ff;
        if(first==NULL)
        {
			//creating new node
			first=last=new;
			first->next=NULL;
		}
		else
		{
		    //adding new node at the end of the list
		    last->next=new;
			last=new;
			last->next=NULL;
		}
		pr("\nDo You want to Add More (y/n) : ");
		sc("%c",&reply);
		ff;
	}while(reply=='y' || reply=='Y');
    return(first);
}

void display(node *first)
{
    node *list;
    list=first;
    while(list)
    {
        pr("\n%d",list->data);
        list=list->next;
    }
}

node *insertfirst(node *first)
{
    node *new;
    if(first==NULL)
    {
        pr("\nList is emplty");
        return NULL;
    }
    //insert at the beginning
    new=(node *)malloc(sizeof(node));
    pr("\nEnter data");
    sc("%d",&new->data);
    ff;
    new->next=first;
    first=new;
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

void insertlast(node *first)
{
	node *last,*new;
	if(first==NULL)
	{
		pr("List is Empty");
		return;
	}
	new=(node *)malloc(sizeof(node));
	pr("\nEnter Data : ");
	sc("%d",&new->data);ff;
	last=getlast(first);
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
        if(list->next->data==key)
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
        pr("\nList is empty");
        return NULL;
    }
    pr("\nEnter data: ");
    sc("%d",&n);ff;
    if(!search(first,n))
    {
        pr("\nSorry given data not found!");
        return first;
    }
    new=(node *)malloc(sizeof(node));
    pr("\nEnter data: ");
    sc("%d",&new->data);ff;
     //inserting node at any position
    if(first->data==n)
    {
        new->next=first;
        first=new;
    }
    else
    {
        pos=find(first,n);
        new->next=pos->next;
        pos->next=new;
    }
    pr("\nData inserted successfully!");
    return(first);
}

void insertafter(node *first)
{
    node *new,*pos,*last;
	int n;
	if(first==NULL)
	{
		pr("\nList is Empty");
		return;
	}
	pr("\nAfter Which Data : ");
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
			last->next=NULL;
		}
		else
		{
			new->next=pos->next->next;
			pos->next->next=new;
		}
	}
pr("\nData Inserted Successfully!");
}

node *delete(node *first)
{
	node *temp,*pos,*last;
	int n;
    if(first==NULL)
	{
		pr("\nList is Empty");
		return NULL;
	}
	pr("\nEnter Data : ");
	sc("%d",&n);ff;
	if(!search(first,n))
	{
		pr("\nSorry Given Data Not found");
		return first;
	}
	if(first->data==n)
	{
		temp=first->next;
		free(first);
		first=temp;
	}
	else
	{
		pos=find(first,n);
		last=getlast(first);
		if(pos->next==last)
		{
			free(last);
			last=pos;
			last->next=NULL;
		}
		else
		{
			temp=pos->next;
			pos->next=pos->next->next;
			free(temp);
		}
	}
pr("\nDeleted Successfully");
return(first);
}

void update(node *first)
{
	node *pos;
	int n;
    if(first==NULL)
	{
		pr("\nList is Empty");
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
	pr("\nData Updated Successfully");
}

void gotoxy(int x,int y)
{
    pr("%c[%d;%df",0x1B,y,x);
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
        printf("\n-----------------------------");
        gotoxy(25,6);
        printf("\nSingle Linked List");
        gotoxy(20,7);
        printf("\n-----------------------------");
        gotoxy(22,8);
        printf("\n1. Create List");
        gotoxy(22,9);
        printf("\n2. Insert First");
        gotoxy(22,10);
        printf("\n3. Insert Before");
        gotoxy(22,11);
        printf("\n4. Insert After");
        gotoxy(22,12);
        printf("\n5. Insert Last");
        gotoxy(22,13);
        printf("\n6. Delete");
        gotoxy(22,14);
        printf("\n7. Search");
        gotoxy(22,15);
        printf("\n8. Update List");
        gotoxy(22,16);
        printf("\n9. Display List");
        gotoxy(22,17);
        printf("\n10. Quit");
        gotoxy(20,18);
        printf("\n-----------------------------");
        gotoxy(20,20);
        printf("\nWhat do you want to do : ");
        scanf("%d",&ch);ff;
        system("cls");
        switch(ch)
        {
            case Create:
                first=createlist();
                printf("\nList Created");
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
                printf("\nEnter n Value to Search : ");
                scanf("%d",&n);ff;
                if(search(first,n))
                {
                    printf("Value Found");
                }
                else
                {
                    printf("Not Found");
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
                printf("Thank You");
                exit(0);
            default:
                printf("Wrong Choice");
            break;
        }
    }
}
