#include<stdio.h>
#define pr printf
#define sc scanf
void main()
{
    char name[5][30]={"Daniel","Ezikiel","Subaru","Fasil","Aravind"};
    int rank[5]={23,49,5,7,1};
    char myName[6]="Django";
    void *ptr=rank;

        pr("\nRank: ");
        for(;ptr<rank+5;ptr+=4)
        {
            pr("\n%d",*(int *)ptr);
        }
        ptr=name;
        for(;ptr<name+5;ptr+=30) //at a time increment by 30
        {
            pr("\n%s",ptr); // since %s just ptr enough
        }
        pr("\nmy name is: ");
        for(ptr=myName;ptr<myName+6;ptr++)
        {
            pr("\t%c",*(char *)ptr);
        }

}
