#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#define pr printf
#define sc scanf
#define ff fflush(stdin)
struct emp
{
    int empid;
    //char empname[20];
    struct emp *next;
};
struct emp start,*temp,*prev,*node;
void insert()
{
    int i,j,item;
    pr("\nEnter the item to insert: ");
    sc("%d",&item);
    pr("\n 1.Insertion at beginning: ");
    pr("\n 2.Insertion at end: ");
    pr("\n 3.Insertion at middle: ");
    pr("\nEnter your choice:  ");
    sc("%d",&i);
    switch(i)
    {
        case 1:if(start.next==NULL)
        {
            node=(struct emp *)malloc(sizeof(struct emp));
            node->empid=item;
            node->next=NULL;
            start.next=node;
            return;
        }else
        {
            node=(struct emp *)malloc(sizeof(struct emp));
            node->empid=item;
            node->next=start.next;
            start.next=node;
            return;
        }
        case 2:if(start.next==NULL)
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
        case 3:pr("\nEnter position: ");
            sc("%d",&j);
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
                if(temp->empid==j)
                {
                    break;
                }
                else{
                 temp=temp->next;
                }

            }
            node=(struct emp *)malloc(sizeof(struct emp));
            temp->next=node;
            return;
        }
        default: pr("\nWrong Choice!!");
    }
}
int del()
{
    int i,j,item;
    pr("\n 1.Deletion at beginning: ");
    pr("\n 2.Deletion at end: ");
    pr("\n 3.Deletion at middle: ");
    pr("\nEnter your choice:  ");
    sc("%d",&i);
    switch(i)
    {
       case 1:if(start.next==NULL) {
       pr("\nList empty");
        return 0;
   }
       else {
        temp=start.next;
        item=temp->empid;
        start.next=temp->next;
        free(temp);
        return item;
  }
      case 2:if(start.next==NULL) {
        pr("\nList empty");
        return 0;
  }
      else {
       temp=start.next;
       prev=&start;
       while(temp->next!=NULL) {
         temp=temp->next;
         prev=prev->next;
   }
       item=temp->empid;
       prev->next=NULL;
       free(temp);
       return item;
}
      case 3:if(start.next==NULL) {
        pr("\nList empty");
        return 0;
  }
      else {
        pr("\nEnter the item to be deleted");
        sc("%d",&i);
        temp=start.next;
        prev=&start;
        while(temp->next!=NULL) {
          if(temp->empid==i) {
            break;
      }
       prev=prev->next;
       temp=temp->next;
 }
    if(temp->next==NULL) {
       pr("Item not available");
       return 0;
     }
   else {
     item=temp->empid;
     prev->next=temp->next;
     free(temp);
     return item;
   }
  }
   default:pr("\nWrong choice!!");
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
    void insert();
    int del();
    void display();
    int i,j,k;
    char ch;
    start.next=NULL;
    do
    {
        pr("\n1.Insert: ");
        pr("\n2.Delete: ");
        pr("\n3.Display: ");
        pr("\n4.Enter your choice: ");
        sc("%d",&i);
        switch(i)
        {
            case 1:insert();
                display();
                break;
            case 2:j=del();
                pr("\nItem deleted is %d",j);
                display();
                break;
            case 3:display();
                break;
            case 4:exit(0);
                default:pr("\nWrong choice!!");
        }
            ff;
            pr("\nAny more: Type y/n...");
            sc("%c",&ch);
    }while(ch=='y');
        getch();
}
