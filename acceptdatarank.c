//program to accept 5 student names and their rank
#include<stdio.h>
#define pr printf
#define sc scanf
void main()
{
    char name[5][30]={"Daniel","Ezikiel","Subaru","Fasil","Aravind"};
    float marks[5];
    int rank[5]={23,49,5,7,1};
    int *rankptr=rank;
    char  *nameptr=name;
    pr("\nAddress of rank[0] is %ld",&rank[0]);
    rankptr++;
    pr("\nAddress stored in rank pointer is %ld",rankptr);
    for(;rankptr<rank+5;rankptr++)
    {
        pr("\nValue stored at rankptr is %d",*rankptr);
    }
    pr("\nNames: ");
    for(short int i=0;i<5;i++)
    {
        nameptr=&name[i];
        pr("\nName at nameptr is %s",nameptr);
    }
}
