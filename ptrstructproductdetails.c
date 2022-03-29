#include<stdio.h>
#define pr printf
#define sc scanf
#define ff fflush(stdin)

struct prod
{
    char pname[30];
    int pid;
    float pprice;
    int qoh;
    float amount;
};
typedef struct prod product;
void display(product p[]);
void main()
{
    product p[3],*ptr=p;
    int i=0;
    int choice=0;
    do
    {
        pr("\nEnter product id: ");
        sc("%d",&ptr->pid);
        ff;
        pr("\nEnter product name: ");
        sc("%s",ptr->pname); //no need of & for %s
        ff;
        pr("\nEnter product price(in Rs.): ");
        sc("%f",&ptr->pprice);
        ff;
        pr("\nEnter quantity on hand: ");
        sc("%d",&ptr->qoh);
        ff;
        ptr->amount=ptr->pprice*ptr->qoh;
        pr("Wish to add more records?(0 to exit/1 to continue)");
        sc("%d",&choice);
        ff;
        i++;
        ptr++;
        if(i==3)
        {
            break;
        }else
        {
            continue;
        }/*
        if(choice==1)
        {
            continue;
        }*/
    }while(choice==1);
    display(p);
}
void display(product p[])
{
    product *ptr=&p[0];
    pr("\nProduct Details: ");
    for(int i=0;i<3;i++,ptr++)
    {

        pr("\nThe product id is \tThe product name is  \tThe price is \tThe quantity on hand is \tThe amount is ");
        pr("\n%d \t%s \t%.2f \t%d \t%.2f",ptr->pid,ptr->pname,ptr->pprice,ptr->qoh,ptr->amount);
    }
}

