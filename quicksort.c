#include<stdio.h>
#include<stdio.h>
#define pr printf
#define sc scanf
void quicksort(int[],int,int)
int main()
{
    int arr[50],n,i;
    pr("Enter number of elements: ");
    sc("%d",&n);
    pr("\nEnter the array elements:");
    for(i=0;i<n;i++)
    {
       sc("%d",&arr[i]);
    }

    quicksort(arr,0,n-1);
    pr("\nArray after sorting:");
    for(i=0;i<n;i++)
    {
       pr("\n%d ",arr[i]);
    }

    return 0;
}

void quicksort(int number[25],int first,int last)
{
   int i,j;
   int pivot,int temp;

   if(first<last)
    {
      pivot=first;
      i=first;
      j=last;

    while(i<j)
    {
         while(number[i]<=number[pivot]&&i<last)
        {
            i++;
        }
         while(number[j]>number[pivot])
         {
             j--;
         }

         if(i<j)
        {
            temp=number[i];
            number[i]=number[j];
            number[j]=temp;
         }
      }

      temp=number[pivot];
      number[pivot]=number[j];
      number[j]=temp;
      quicksort(number,first,j-1);
      quicksort(number,j+1,last);

   }
}
