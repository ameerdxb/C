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
    product p[5];
    int i=0;
    int choice=0;
    do
    {
        pr("\nEnter product id: ");
        sc("%d",&p[i].pid);
        ff;
        pr("\nEnter product name: ");
        sc("%s",p[i].pname); //no need of & for %s
        ff;
        pr("\nEnter product price(in Rs.): ");
        sc("%f",&p[i].pprice);
        ff;
        pr("\nEnter quantity on hand: ");
        sc("%d",&p[i].qoh);
        ff;
        p[i].amount=p[i].pprice*p[i].qoh;
        pr("Wish to add more records?(y/n)");
        sc("%d",&choice);
        ff;
        i++;
        if(i==5)
        {
            break;
        }else
        {
            continue;
        }
        if(choice==1)
        {
            continue;
        }
    }while(choice==1);
    display(p);
}
void display(product p[])
{
    pr("\nProduct Details: ");
    for(int i=0;i<5;i++)
    {

        pr("\nThe product id is \tThe product name is  \tThe price is \tThe quantity on hand is \tThe amount is ");
        pr("\n%d \t%s \t%.2f \t%d \t%.2f",p[i].pid,p[i].pname,p[i].pprice,p[i].qoh,p[i].amount);
    }
}

