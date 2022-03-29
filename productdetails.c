#include<stdio.h>
void display(char pid[nop][5],char pname[nop][20],float price[nop],float qoh[nop],float amount[nop],int nop)
{
    for(int i=0;i<nop;i++)
    {
        printf("\nThe product id is %s",pid[i]);
        printf("\nThe product name is %s",pname[i]);
        printf("\nThe price is %.2f",pprice[i]);
        printf("\nThe quantity on hand is %.2f",qoh[i]);
        printf("\nThe amount is %.2f",amount[i]);
    }
}
void main()
{
    char pid[3][5],pname[5][30];
    float pprice[3],qoh[3],amount[3];
    int nop,i;
    printf("How many products do you want to save?");
    scanf("%d",&nop);

    for(i=1;i<=nop;i++)
    {
        printf("\nEnter product id: ");
        scanf("%s",pid[i]);
        printf("\nEnter product name: ");
        scanf("%s",pname[i]);
        printf("\nEnter product price: ");
        scanf("%f",&pprice[i]);
        printf("\nEnter quantity on hand");
        scanf("%f",&qoh[i]);
        amount[1]=qoh[i]*pprice[i];
        display (pid,pname,pprice,qoh,amount,nop);
    }
}
