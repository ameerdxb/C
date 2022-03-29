#include<stdio.h>


int sort(int *empage[noe])
{
    int i,j;
    for(i=0;i<noe;i++)
    {
        for(j-i+1;j<noe;j++)
        {
            if(*empage[i]>*empage[j])
            {
                *empage[i]=*empage[i]+*empage[j];
                *empage[j]=*empage[i]-*empage[j];
                *empage[i]=*empage[i]-*empage[j];
            }
        }
    }
}

void display(char *empname[noe][30],int *empage[noe])
{
    int noe;
    for(int i=0;i<noe;i++)
    {
        printf("\nEmployee name %s",empname[i]);
        printf("\nEmployee age %d",empage[i]);
    }
}

void main()
{
    char empname[noe][30];
    int empage[noe],noe;
    printf("Enter no.of employee: ");
    scanf("%d".&noe);
    fo(int i=0;i<noe;i++)
    {
        printf("\nEnter employee name: ");
        scanf("%d",empname[i]);
        printf("\nEnter employee age: ");
        scanf("%d",empage[i]);1
    }
    sort(&empage[noe]);
    printf("Details after sorting: ");
    display(empname[noe],empage[noe]);

}
