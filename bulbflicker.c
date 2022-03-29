#include<stdio.h>
#define pr printf
#define sc scanf
void flicker(float[],int);
void main()
{
    int n, i;
    float time[20];
    pr("Enter the number of bulbs: ");
    sc("%d",&n);

    for(i=1;i<n+1;i++)
    {   pr("\nEnter the flicker second of bulb %d :",i);
        sc("%f",&time[i]);
    }
    flicker(time,n);
}
void flicker(float t[20], int n)
{   int i;
    float f=1;
    for(i=1;i<n+1;i++)
    {
        f=f*t[i];
    }
    if(f==1)
    {
        pr("\nFrom now, all bulbs will flicker after %.0f second",f);
    }else
    {
        pr("\nFrom now, all bulbs will flicker after %.0f seconds",f);
    }
}

