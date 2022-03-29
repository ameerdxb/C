#include<stdio.h>
#include<stdio.h>
#define pr printf
#define sc scanf
int removedupli(int[],int);
void main()
{
    int n,i, a[100];
    pr("Enter number of elements: ");
    sc("%d",&n);
    pr("\nEnter the elements: ");
    for(i=0; i<n; i++)
    {
        sc("\n%d",&a[i]);
    }

    pr("\nArray before removal of duplicate elements: ");
    for (i=0; i<n; i++)
    {
        pr("\n%d",a[i]);
    }

    n =removedupli(a,n);
    pr("\nArray after removal of duplicate elements: ");
    for (i=0; i<n; i++)
    {
        pr("\n%d",a[i]);
    }
}
int removedupli(int arr[100],int n)
{   int i,j,k;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {

            if(arr[i]==arr[j])
            {
                for(k=j;k<n-1;k++)
                {
                    arr[k]=arr[k+1];
                }
                n--;
                j--;
            }
        }
    }
    return j;
}

