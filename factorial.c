#include<stdio.h>
#define pr printf
int factorial(int n)
{
    int i,j,fact=1;
    int array[3];
    if(n==0)
        {
            fact=1;
        }else

        {
            for(j=1;j<=n;j++)
            {
                fact=fact*j;
            }
        }
       return fact;
}

void display(int numbers[3],int array[3])
{
    for(int i=0;i<3;i++)
    {
        pr("\nFactorial of %d is %d",numbers[i],array[i]);
    }
}


void main()
{
    int n,numbers[3],array[3],i,j,fact;
    pr("Enter the elements\n");
    for(int i=0;i<3;i++)
    {
        n=0;
        fact=1;
        scanf("%d",&numbers[i]);
        n=numbers[i];
        array[i]=factorial(numbers[i]);
    }
    display(numbers,array);
}

