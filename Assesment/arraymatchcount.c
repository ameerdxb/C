#include<stdio.h>
#define pr printf
#define sc scanf
void main()
{
        int arr1[100],arr2[100],n,i,count=0;
        pr("Enter the size of arrays : \n");
        sc("%d",&n);
        pr("Enter the elements of array 1 : \n");
        for(i=0;i<n;i++)
        {
                sc("%d",&arr1[i]);
        }
        pr("Enter the elements of array 2 : \n");
        for(i=0;i<n;i++)
        {
                sc("%d",&arr2[i]);
        }
        for(i=0;i<n;i++)
        {
                while(arr1[i]!=arr2[i])
                {
                if(arr1[i]<arr2[i])
                {
                        arr1[i]=arr1[i]+3;
                        count=count+1;
                }
                 if(arr1[i]>arr2[i])
                {
                        arr1[i]=(arr1[i])-(2);
                        count=count+1;
                }
                }
        }
pr("\nResult: %d",count);
}
