#include<stdio.h>
void main()
{
    int rank[5]={2,7,5,3,1};
    int *rankptr=rank,i;
    for(i=0;i<5;i++,rankptr++)
    {
        printf("\nThe address of rank[%d] is %d.",i,rankptr);
        printf("\nThe data stored at rank[%d] is %d.",i,*rankptr);
    }
}
