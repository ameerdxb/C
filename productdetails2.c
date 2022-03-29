#include <stdio.h>
#define pr printf
#define sc scanf

void display(char pid[20][5], char pname[20][20],float pprice[20], float qoh[20], float amount[20], int nop)
{   int i;
    for(i=0;i<nop;i++)
    {
        pr("\nThe product id is %s",pid[i]);
        pr("\nThe product name is %s",pname[i]);
        pr("\nThe price is %.2f",pprice[i]);
        pr("\nThe quantity on hand is %.2f",qoh[i]);
        pr("\nThe amount is %.2f",amount[i]);
    }
}

void main()
{
    int ch,n,i,k,pos;
    char pid[20][5], pname[20][20];
    float pprice[20], qoh[20], amount[20];
    pr("\nEnter a choice: ");
    pr("\n1.Add Product\n2.Edit product\n3.Delete products\n4.List all products\n");
    sc("%d",&ch);
    switch(ch)
    {
        case 1: pr("Number of products to be added: ");
                sc("%d",&n);
                for(i=0; i<n;i++)
                {
                    pr("\nEnter product id: ");
                    sc("%s",&pid[i]);
                    pr("\nEnter product name: ");
                    sc("%s",&pname[i]);
                    pr("\nEnter product price: ");
                    sc("%f",&pprice[i]);
                    pr("\nEnter the quantity on hand: ");
                    sc("%f",&qoh[i]);
                    amount[i]=qoh[i]*pprice[i];
                }
                break;
        case 2: pr("\nEnter the position of the product to be updated: ");
                sc("%d",&pos);

                if(pos<0 || pos>n)
                {
                    pr("Invalid position! Please enter position between 1 to %d", n);
                }
                else
                {
                    for(i=0;i<n;i++)
                    {
                        if(i==pos)
                        {
                            pr("\nEnter product id: ");
                            sc("%s",&pid[i]);
                            pr("\nEnter product name: ");
                            sc("%s",&pname[i]);
                            pr("\nEnter product price: ");
                            sc("%f",&pprice[i]);
                            pr("\nEnter the quantity on hand: ");
                            sc("%f",&qoh[i]);
                            amount[i]=qoh[i]*pprice[i];
                        }
                    }
                }
                break;

        case 3: pr("\nEnter the position of the product to be deleted: ");
                sc("%d",&k);
                {
                    if(k<0 || k>n)
                    {
                        pr("Invalid position! Please enter position between 1 to %d", n);
                    }
                    else
                    {
                        for(i=n-1; i<n-1; i++)
                        {
                            //pid[i]=pid[i+1];
                            //pname[i]=pname[i+1];
                            pprice[i]=pprice[i+1];
                            qoh[i]=qoh[i+1];
                            amount[i]=amount[i+1];

                        }
                        n--;
                        pr("\nProducts after deletion are : ");
                        display(pid,pname,pprice,qoh,amount,n);
                    }
                }
                    break;

        case 4: display(pid,pname,pprice,qoh,amount,n);
                break;

        default: break;
    }
}
