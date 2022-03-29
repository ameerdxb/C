#include<stdio.h>
#include<stdlib.h>
struct date
{
    short int day;
    short int month;
    int year;
};
typedef struct date Date;
void main()
{
    int noe,i;
    char empname[30][30];
    Date doj[30];// date of joining
    printf("\nEnter number of employees: ");
    scanf("%d",&noe);
    for(i=0;i<noe;i++)
    {
        printf("\nEnter employee name: ");
        scanf("%s",empname[i]);
        printf("\nEnter date of joining: ");
        scanf("%d",&doj[i].day);
        printf("\nEnter the month of joining: ");
        scanf("%d",&doj[i].month);
        printf("\nEnter the year of joining: ");
        scanf("%d",&doj[i].year);

    }
    // display details
    printf("\nThe employee details are: ");
    for(i=0;i<noe;i++)
    {
        printf("\nName %s",empname[i]);
        printf("\nDate of joining is %d-%d-%d",doj[i].day,doj[i].month,doj[i].year);
    }

}

