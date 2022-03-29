#include<stdio.h>
// declare only when it is written after main() function :int fact(int) -- i.e., declaring function block before main function
long int fact(int n)
{
    if(n==0)
    {
        return 1;
    }else
    {
        return n*fact(n-1);
    }
}

void main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Factorial of %d is %ld",n,fact(n));
}
