#include<stdio.h>
void sort(int array[100],int s)
{
    int i,j;
    for(i=0;i<s;i++)
    {
        for(j=i+1;j<s;j++)
        {
            if(array[i]>array[j])
            {
                array[i]=array[i]+array[j];
                array[j]=array[i]-array[j];
                array[i]=array[i]-array[j];
            }
        }
    }
}

void main()
{
    int array[100],i,j,n;
    printf("Enter no.of elements: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    sort(array,n);
    printf("\nElements after sorting: \n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",array[i]);
    }
}
