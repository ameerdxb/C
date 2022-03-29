// example for pointer to an array
#include<stdio.h>
void main()
{
    int arr[5]={6,9,3,4,6};
    int *p=arr;
    while(*p)
    {
        printf("%d\t",*p);
        p++;
    }

}
