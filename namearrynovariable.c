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
    for(;nameptr<name+5;nameptr=nameptr+30)
    {
        pr("\nName: %s",nameptr);
    }
}
